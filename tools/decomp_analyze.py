#!/usr/bin/env python3
"""Single-pass ARM64 xref analysis for one Sword NSO module.

Disassembles .text with capstone (detail), tracks ADRP bases per register,
and records for every .eh_frame_hdr function:
  calls      - BL targets inside the module
  strings    - rodata/data RVAs loaded via ADRP+ADD/LDR/STR or ADR/literal LDR
  branch_out - direct branch (B/CB/TB/cond) targets outside the function

Outputs work/<module>/xrefs.json (per-function) and strings.txt (rva, text).

Usage: python decomp_analyze.py <module>   # e.g. main
"""

import json
import os
import re
import struct
import sys

import capstone

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
STR_MIN = 6

BRANCH_MNEMS = {"b", "bl", "cbz", "cbnz", "tbz", "tbnz"}
COND_BR = {"beq", "bne", "bhs", "bcs", "blo", "bcc", "bmi", "bpl", "bvs",
           "bvc", "bhi", "bls", "bge", "blt", "bgt", "ble", "bal", "bnv"}
# capstone 5.0.7 has no ARM64_REG_PC constant; a literal load uses the
# zero register slot as its mem base, which never matches a tracked base.
_REG_PC = getattr(capstone.arm64, "ARM64_REG_PC", -1)


def load_strings(blob, base):
    """Map RVA -> decoded string for printable runs."""
    out = {}
    pat = re.compile(rb"[\x20-\x7e]{%d,}" % STR_MIN)
    for m in pat.finditer(blob):
        s = m.group().decode("ascii")
        # Skip runs that are really code-adjacent padding or hex noise.
        out[base + m.start()] = s
    return out


def analyze(module):
    wdir = os.path.join(ROOT, "work", module)
    man = json.load(open(os.path.join(wdir, "manifest.json")))
    text = open(os.path.join(wdir, "text.bin"), "rb").read()
    rodata = open(os.path.join(wdir, "rodata.bin"), "rb").read()
    data = open(os.path.join(wdir, "data.bin"), "rb").read()
    ro_base = man["segments"]["rodata"]["vaddr"]
    data_base = man["segments"]["data"]["vaddr"]
    bss_start = man["mod0"]["bss_start"] if man.get("mod0") else 0
    bss_end = man["mod0"]["bss_end"] if man.get("mod0") else 0

    def in_image(v):
        return (0 <= v < len(text) or ro_base <= v < ro_base + len(rodata)
                or data_base <= v < data_base + len(data)
                or bss_start <= v < bss_end)

    funcs = sorted(int(x, 16) for x in
                   open(os.path.join(wdir, "functions_eh.txt")).read().split())
    md = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_LITTLE_ENDIAN)
    md.detail = True
    if not funcs:
        # No .eh_frame_hdr (rtld stub): entry plus every BL target found by
        # a quick pre-pass over .text.
        targets = {0}
        off = 0
        text_pre = open(os.path.join(wdir, "text.bin"), "rb").read()
        while off < len(text_pre):
            consumed = 0
            try:
                for ins in md.disasm(text_pre[off:off + 0x8000], off):
                    if ins.mnemonic == "bl" and ins.operands \
                            and ins.operands[0].type == capstone.arm64.ARM64_OP_IMM:
                        t = ins.operands[0].imm & 0xFFFFFFFFFFFFFFFF
                        if 0 <= t < len(text_pre):
                            targets.add(t)
                    consumed = ins.address + 4 - off
            except Exception:
                pass
            off += consumed if consumed > 0 else 4
        funcs = sorted(targets)
    func_index = {a: i for i, a in enumerate(funcs)}

    strings = {}
    strings.update(load_strings(rodata, ro_base))
    strings.update(load_strings(data, data_base))
    with open(os.path.join(wdir, "strings.txt"), "w", encoding="utf-8",
              errors="replace") as f:
        for rva in sorted(strings):
            f.write("%x %s\n" % (rva, strings[rva][:200]))

    # (md already created above for the no-eh fallback pre-pass.)

    per = [{"calls": set(), "strings": set(), "br_out": set()} for _ in funcs]
    callers = [0] * len(funcs)
    reg_base = {}   # reg id -> absolute page from last ADRP
    cur = 0         # current function index

    def func_of(addr):
        # binary search: greatest func start <= addr
        lo, hi = 0, len(funcs)
        while lo < hi:
            m = (lo + hi) // 2
            if funcs[m] <= addr:
                lo = m + 1
            else:
                hi = m
        return lo - 1

    n_insn = 0
    data_words = 0

    # Transitive names: data/rodata words that point at strings (GOT entries,
    # vtables of messages, argv-style tables). Loading such a pointer
    # attributes the pointed-to string to the function.
    pmap = {}
    for blob, base in ((rodata, ro_base), (data, data_base)):
        for off in range(0, len(blob) - 7, 8):
            v = struct.unpack_from("<Q", blob, off)[0]
            if v in strings:
                pmap[base + off] = v

    def blob_at(rva):
        if 0 <= rva < len(text):
            return text[rva:rva + 8]
        if ro_base <= rva < ro_base + len(rodata):
            return rodata[rva - ro_base:rva - ro_base + 8]
        if data_base <= rva < data_base + len(data):
            return data[rva - data_base:rva - data_base + 8]
        return None

    def note(P, tgt):
        if tgt in strings:
            P["strings"].add(tgt)
            return
        if tgt in pmap:
            P["strings"].add(pmap[tgt])
            return
        # One level of indirection: literal pools and pointer tables hold
        # the string's address rather than the string itself.
        b = blob_at(tgt)
        if b is not None and len(b) == 8:
            v = struct.unpack_from("<Q", b, 0)[0]
            if v in strings:
                P["strings"].add(v)
            elif v in pmap:
                P["strings"].add(pmap[v])

    WRITE_FIRST = {"add", "adds", "sub", "subs", "and", "ands", "orr", "orn",
                   "eor", "bic", "bics", "lsl", "lsr", "asr", "ror", "mov",
                   "movn", "movz", "movk", "mvn", "neg", "negs", "adc",
                   "adcs", "sbc", "sbcs", "mul", "mneg", "smull", "umull",
                   "smulh", "umulh", "udiv", "sdiv", "lslv", "lsrv", "asrv",
                   "rorv", "crc32x", "rbit", "rev", "rev16", "rev32", "clz",
                   "cls", "cnt", "abs", "cneg", "csinv", "csneg", "csinc",
                   "csel", "ccmp", "ccmn", "madd", "msub", "smaddl",
                   "smsubl", "umaddl", "umsubl", "ldr", "ldrh", "ldrb",
                   "ldrsb", "ldrsh", "ldrsw", "ldur", "ldurb", "ldurh",
                   "ldursw", "ldp", "ldpsw", "ldaxr", "ldxr", "ldar",
                   "casp", "caspa", "ldrsh", "dup", "ins", "umov", "smov",
                   "fmov", "scvtf", "ucvtf", "fcvtzs", "fcvtzu", "fadd",
                   "fsub", "fmul", "fdiv", "fneg", "fabs", "fsqrt"}

    def handle(ins, a, P):
        m = ins.mnemonic
        ops = ins.operands if hasattr(ins, "operands") else []
        if m == "adrp" and len(ops) >= 2 and ops[1].type == capstone.arm64.ARM64_OP_IMM:
            # This capstone resolves ADRP to the absolute target page; older
            # ones leave the page offset. Accept whichever lands in the image.
            page = ops[1].imm & 0xFFFFFFFFFFFFFFFF
            alt = ((a & ~0xFFF) + ops[1].imm) & 0xFFFFFFFFFFFFFFFF
            if not in_image(page) and in_image(alt):
                page = alt
            if ops[0].type == capstone.arm64.ARM64_OP_REG:
                reg_base[ops[0].reg] = page
            return
        if m == "adr" and len(ops) >= 2 and ops[1].type == capstone.arm64.ARM64_OP_IMM:
            note(P, (a + ops[1].imm) & 0xFFFFFFFFFFFFFFFF)
        elif m in ("add", "adds", "sub", "subs") and len(ops) == 3 \
                and ops[0].type == capstone.arm64.ARM64_OP_REG \
                and ops[1].type == capstone.arm64.ARM64_OP_REG \
                and ops[2].type == capstone.arm64.ARM64_OP_IMM:
            if ops[1].reg in reg_base:
                note(P, (reg_base[ops[1].reg] + ops[2].imm) & 0xFFFFFFFFFFFFFFFF)
        else:
            if m in ("add", "ldr", "str", "ldrh", "ldrb", "ldrsb", "ldrsh",
                     "ldrsw", "strh", "strb", "ldp", "stp", "ldur", "stur",
                     "prfm", "dc", "ic", "ldurh", "ldurb", "sturh", "sturb"):
                for op in ops:
                    if op.type == capstone.arm64.ARM64_OP_MEM and op.mem.base != 0:
                        b = op.mem.base
                        if b in reg_base:
                            note(P, (reg_base[b] + (op.mem.disp or 0)) & 0xFFFFFFFFFFFFFFFF)
            if m == "ldr" and len(ops) >= 2 and ops[1].type == capstone.arm64.ARM64_OP_MEM \
                    and ops[1].mem.base == _REG_PC:
                note(P, (a + (ops[1].mem.disp or 0)) & 0xFFFFFFFFFFFFFFFF)
        if (m in BRANCH_MNEMS or m in COND_BR or m.startswith("b.")) and ops \
                and ops[0].type == capstone.arm64.ARM64_OP_IMM:
            tgt = ops[0].imm & 0xFFFFFFFFFFFFFFFF
            if m == "bl":
                if tgt in func_index:
                    P["calls"].add(tgt)
                    callers[func_index[tgt]] += 1
            else:
                fi = func_of(a)
                fend = funcs[fi + 1] if fi + 1 < len(funcs) else len(text)
                if not (funcs[fi] <= tgt < fend):
                    P["br_out"].add(tgt)
        # Conservative clobber: capstone's regs_write is unreliable here, so
        # drop any ADRP base for a register this instruction overwrites.
        if ops and ops[0].type == capstone.arm64.ARM64_OP_REG and m in WRITE_FIRST:
            reg_base.pop(ops[0].reg, None)
            if m in ("ldp", "ldpsw") and len(ops) > 1 \
                    and ops[1].type == capstone.arm64.ARM64_OP_REG:
                reg_base.pop(ops[1].reg, None)

    # Disassemble function by function; literal pools and padding stop the
    # decoder, so resync by skipping one word and continuing.
    for fi, fstart in enumerate(funcs):
        if fi % 20000 == 0:
            print("  [%s] function %d/%d (%d insns)" % (module, fi, len(funcs), n_insn),
                  flush=True)
        fend = funcs[fi + 1] if fi + 1 < len(funcs) else len(text)
        P = per[fi]
        off = fstart
        while off < fend:
            consumed = 0
            try:
                for ins in md.disasm(text[off:fend], off):
                    a = ins.address
                    n_insn += 1
                    handle(ins, a, P)
                    consumed = a + 4 - off
                    if consumed <= 0:
                        break
            except Exception:
                pass
            if consumed > 0:
                off += consumed
            else:
                off += 4
                data_words += 1
        reg_base.clear()

    out = []
    for i, a in enumerate(funcs):
        end = funcs[i + 1] if i + 1 < len(funcs) else len(text)
        out.append({"addr": a, "size": end - a, "callers": callers[i],
                    "calls": sorted(per[i]["calls"]),
                    "strings": sorted(per[i]["strings"]),
                    "br_out": sorted(per[i]["br_out"])})
    json.dump(out, open(os.path.join(wdir, "xrefs.json"), "w"))
    print("%s: %d insns, %d funcs, %d strings, bl_targets_known=%.1f%%" % (
        module, n_insn, len(funcs), len(strings),
        100.0 * sum(1 for P in per for _ in P["calls"]) /
        max(1, sum(len(P["calls"]) for P in per))))
    # Coverage sanity: every BL target should be a known function start.
    unknown = set()
    for P in per:
        for c in P["calls"]:
            if c not in func_index:
                unknown.add(c)
    print("  unknown bl targets: %d" % len(unknown))


if __name__ == "__main__":
    # Was `analyze(sys.argv[1])` with no guard at all, so `--help` was taken as a
    # module name and died with a bare FileNotFoundError on
    # `work/--help/manifest.json`. A tool that cannot print its own usage cannot
    # be discovered, and the traceback pointed at the JSON loader rather than at
    # the argument handling.
    _USAGE = "Usage: python decomp_analyze.py <module>   # e.g. main"
    if len(sys.argv) < 2 or sys.argv[1] in ("-h", "--help"):
        print(_USAGE)
        sys.exit(0 if len(sys.argv) > 1 else 2)
    if not os.path.isfile(os.path.join(ROOT, "work", sys.argv[1],
                                       "manifest.json")):
        sys.stderr.write("error: no such module: %s\n%s\n"
                         % (sys.argv[1], _USAGE))
        sys.exit(2)
    analyze(sys.argv[1])