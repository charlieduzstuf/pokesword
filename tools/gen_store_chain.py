#!/usr/bin/env python3
"""Generator for `copy-chain`: pointer chasing interleaved with stores.

199 unmatched bodies, dominated by two families:

    ldr str str ret   115      ldr ldr str ret   52
    ldr ldrh strh ret  7      ldr ldr str str ret 7

The dominant one is a value being moved out of one object and into another, with
a write-back in between:

    ldr  x8, [x0]              void *t = *(void **)a0
    str  xzr, [x0]             *(void **)a0 = 0
    str  x8, [x1]              *(void **)a1 = t

and the second is a pointer chain ending in a store of an argument:

    ldr x8, [x0, #0x78]        p = *(void **)((char *)a0 + 0x78)
    ldr x8, [x8, #0xa0]        p = *(void **)((char *)p  + 0xa0)
    str s0, [x8, #0xc8]        *(float *)((char *)p + 0xc8) = a_float

## Three things this has to get right, each found by disassembling output

**Every load is its own statement, in the original's order.** Inlining a load
into the expression that uses it is semantically identical and almost never the
same bytes: a store to the same object invalidates the load, so Clang moves one
or the other and the original's interleaving is lost. It also keeps the chained
case correct -- `ldr x8,[x0] ; ldr x8,[x8,#0xa0]` needs the first load to happen
before the second address is formed.

**A base register is usually a loaded pointer, not an argument.** `ldr x8,[x8,#0xa0]`
chases a pointer. Assuming every base is an argument produced a nine-parameter
function in `gen_compare_pred` that compiled to reloading `x0` from the stack, so
the rule is explicit here: a base already holding a loaded value is a loaded
pointer, and only a base that is not is an argument.

**Stores of a loaded value belong here, not in `gen_struct_copy`.** The first
version declined them and handed them over, on the assumption the other generator
owned them. It does not: `gen_struct_copy` requires exactly two pointer bases
and declines any zero-store, and this shape has both -- so 115 bodies fell
between two generators that each assumed the other had them.

Stores are emitted in the original's order with a `memory` barrier between groups,
as in `gen_struct_copy` and `gen_zero_fill`: Clang reorders independent stores, and
the order it picks is not the order the original used.

## Declines rather than guesses

- Anything outside the small load/store set: branches, arithmetic, stack traffic.
- Vector and FP register moves.
- A store width not implied by the source register's class.

Usage:
    python tools/gen_store_chain.py            # report only
    python tools/gen_store_chain.py --apply    # register the matches
"""

import argparse
import collections
import json
import os
import re
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH       # noqa: E402
import auto_match as AM          # noqa: E402
import straight_line as SL       # noqa: E402

MODULES = ["main", "sdk", "subsdk0", "subsdk1"]

BARRIER = '__asm__ __volatile__("" ::: "memory");'

LOADS = {"ldr": None, "ldrb": 1, "ldrh": 2, "ldrsb": 1, "ldrsh": 2,
         "ldrsw": 4, "ldur": None}
STORES = {"str": None, "strb": 1, "strh": 2}

CT = {1: "uint8_t", 2: "uint16_t", 4: "uint32_t", 8: "uint64_t"}


def split_ops(s):
    return SL.split_ops(s)


def parse_int(tok):
    """`-0x18`, `#-4`, `12` -> int. The sign comes before the radix prefix, so a
    plain `startswith("0x")` test raises ValueError on every negative hex offset.
    Same fix as `gen_getter_chain.parse_int`; both had it."""
    t = tok.strip().lstrip("#")
    neg = t.startswith("-")
    if neg:
        t = t[1:]
    v = int(t, 16) if t.lower().startswith("0x") else int(t)
    return -v if neg else v


def parse_mem(op):
    """'[x8, w1, uxtw #3]' / '[x0, #0x10]' / '[x0, #-0x18]' ->
    (base, index, off, scale, ext).

    `#n` after an index is a shift amount, so the multiplier is `1 << n`, not
    `n`. The extension decides the index parameter's signedness.
    """
    m = re.match(r"^\[\s*([A-Za-z0-9]+)"
                 r"(?:\s*,\s*([A-Za-z0-9]+)\s*,\s*(uxtw|sxtw|lsl)"
                 r"(?:\s*#(0x[0-9a-f]+|\d+))?)?"
                 r"(?:\s*,\s*#(-?(?:0x)?[0-9a-fA-F]+))?\s*\]$", op)
    if not m:
        return None
    base, index, ext, scale, off = m.group(1), m.group(2), m.group(3), m.group(4), m.group(5)
    if index and scale is None:
        return None
    s = None
    if index:
        s = 1 << (int(scale, 16) if scale.lower().startswith("0x") else int(scale))
    return base, index, (parse_int(off) if off else 0), s, ext


def arg_reg(r):
    """(expression, C type) if `r` is an incoming argument register."""
    r = r.strip()
    if re.match(r"^x([0-7])$", r):
        return "a%s" % r[1], "uint64_t"
    if re.match(r"^w([0-7])$", r):
        return "a%s" % r[1], "uint32_t"
    if re.match(r"^s([0-7])$", r):
        return "a%s" % r[1], "float"
    if re.match(r"^d([0-7])$", r):
        return "a%s" % r[1], "double"
    return None


def reg_class_width(r):
    r = r.strip()
    if r == "xzr":
        return 8
    if r == "wzr":
        return 4
    if r.startswith("x") and r[1:].isdigit():
        return 8
    if r.startswith("w") and r[1:].isdigit():
        return 4
    return None


def build(body, ident):
    """Return (src, sig) or None."""
    state = {}        # register -> (local name, C type) for loaded values
    args = {}         # argument number -> (name, C type)
    stmts = []
    nload = 0

    def base_of(base):
        if base in state:
            return "(char*)(%s)" % state[base][0]
        if re.match(r"^[xw][0-9]+$", base) and int(base[1:]) <= 7:
            n = int(base[1:])
            args.setdefault(n, ("a%d" % n, "void*"))
            return "(char*)a%d" % n
        return None

    def addr_of(base, index, off, scale, ext):
        if base == "sp":
            return None
        b = base_of(base)
        if b is None:
            return None
        if index is not None:
            n = int(index[1:]) if index[1:].isdigit() else None
            if n is None or n > 7:
                return None
            # `sxtw` on a w register means the index parameter is signed, which
            # changes both its C type and its mangled code (`i`, not `j`).
            if index[0] == "x":
                icy = "uint64_t"
            elif ext == "sxtw":
                icy = "int32_t"
            else:
                icy = "uint64_t"
            ix, _cty = args.setdefault(n, ("a%d" % n, icy))
            return "(%s + (uintptr_t)(%s) * %d)" % (b, ix, scale)
        return "(%s + %d)" % (b, off) if off else b

    for ins in body:
        mn = ins.mnemonic
        if mn == "ret":
            continue
        ops = split_ops(ins.op_str)

        if mn in LOADS:
            dst = ops[0]
            parsed = parse_mem(ops[1])
            if parsed is None:
                return None
            base, index, off, scale, ext = parsed
            ad = addr_of(base, index, off, scale, ext)
            if ad is None:
                return None
            w = LOADS[mn]
            if w is None:
                w = reg_class_width(dst)
                if w not in CT:
                    return None
            else:
                dw = reg_class_width(dst) or 8
                w = min(w, dw)
            local = "t%d" % nload
            nload += 1
            stmts.append("%s %s = *(%s*)%s;" % (CT[w], local, CT[w], ad))
            state[dst] = (local, CT[w])
            continue

        if mn in STORES:
            src = ops[0]
            parsed = parse_mem(ops[1])
            if parsed is None:
                return None
            base, index, off, scale, ext = parsed
            ad = addr_of(base, index, off, scale, ext)
            if ad is None:
                return None
            w = STORES[mn]
            if w is None:
                w = reg_class_width(src)
                if w is None:
                    return None
            if src in ("xzr", "wzr"):
                stmts.append("*(%s*)%s = 0;" % (CT[w], ad))
                continue
            ar = arg_reg(src)
            if ar is not None:
                # An argument used only as a *store source* still has to be
                # declared: `str x1, [x8, #0xc0]` never touches a1 as a pointer
                # base, so the list came out one short and every such body failed
                # to compile with "undeclared identifier 'a1'".
                args[int(src[1:])] = ar
                stmts.append("*(%s*)%s = (%s)%s;" % (CT[w], ad, CT[w], ar[0]))
                continue
            if src in state:
                expr, _cty = state[src]
                stmts.append("*(%s*)%s = (%s)(%s);" % (CT[w], ad, CT[w], expr))
                continue
            return None

        if mn == "mov":
            # A constant materialisation, which is what makes a body a
            # `const-field-set` rather than a copy:
            #
            #     ldr x8, [x0, #0x20] ; mov w9, #0x42ca0000 ; str w9, [x8, #0x120]
            #
            # HANDOFF recorded this shape as unfixable -- "an `__asm__ memory`
            # barrier changed nothing (0/180, byte-identical)", because Clang
            # materialised the constant before the pointer load. That measurement
            # was taken with the harness missing eight of the build's flags, the
            # same defect as `decomp/docs/flag_fidelity.md`. With the corrected
            # flags it needs no barrier at all: the plain assignment reproduces
            # the original exactly.
            if len(ops) != 2:
                return None
            dst, src = ops
            if not src.strip().startswith("#"):
                return None          # a register move, not a constant
            w = reg_class_width(dst)
            if w is None:
                return None
            local = "t%d" % nload
            nload += 1
            stmts.append("%s %s = %d;" % (CT[w], local, parse_int(src)))
            state[dst] = (local, CT[w])
            continue

        return None

    if not stmts or not args:
        return None

    # Parameters occupy slots 0..N-1 contiguously, and Itanium assigns slots by
    # *position*, not by name. So a body whose lowest register is x1 still takes
    # two parameters -- the first merely unused -- and declaring only the one it
    # uses puts it in x0 instead:
    #
    #     insn 0: orig ('ldr', 'x8', [x1]) vs new ('ldr', 'x8', [x0])
    #
    # Fill the gaps with unused pointer parameters before emitting the list.
    if args:
        for n in range(0, min(args)):
            args.setdefault(n, ("a%d" % n, "void*"))

    decls, codes, ptrs = [], [], 0
    for n in sorted(args):
        name, cty = args[n]
        if cty == "void*":
            codes.append("S_" if ptrs else "Pv")
            ptrs += 1
            decls.append("void* %s" % name)
        elif cty == "float":
            codes.append("f")
            decls.append("float %s" % name)
        elif cty == "double":
            codes.append("d")
            decls.append("double %s" % name)
        elif cty == "uint32_t":
            codes.append("j")
            decls.append("uint32_t %s" % name)
        elif cty == "int32_t":
            codes.append("i")
            decls.append("int32_t %s" % name)
        else:
            codes.append("m")
            decls.append("uint64_t %s" % name)
    sig = "".join(codes) if codes else "v"

    # Barrier between groups of adjacent statements. Every load is a memory read
    # and every store a memory write, so a barrier between *all* of them would
    # serialise the whole body; only two adjacent writes need separating.
    out = []
    for i, s in enumerate(stmts):
        if i and s.lstrip().startswith("*(") and stmts[i - 1].lstrip().startswith("*("):
            out.append(BARRIER)
        out.append(s)
    return ("void %s(%s) {\n    %s\n}\n"
            % (ident, ", ".join(decls), "\n    ".join(out)), sig)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--shape", default="copy-chain")
    a = ap.parse_args()

    md = MH._md()
    have = {}
    for m in MODULES:
        p = os.path.join(ROOT, "data", "matched_%s.json" % m)
        have[m] = {int(r["addr"]) for r in
                   json.load(open(p, encoding="utf-8")).get("matched", [])}

    offered = matched = 0
    reasons = collections.Counter()
    samples = []
    recs = []
    for m in MODULES:
        blob = MH.text_blob(m)
        for addr, size, name, _d in MH.load_functions(m):
            if addr in have[m]:
                continue
            ins = list(md.disasm(blob[addr:addr + size], addr))
            end = MH.effective_end(ins, size)
            if AM.shape_of(ins, end) != a.shape:
                continue
            body = ins[:end]
            got = build(body, "f_%x" % addr)
            if got is None:
                reasons["declined"] += 1
                continue
            src, sig = got
            offered += 1
            want = MH.mangle("f_%x" % addr, sig)
            with tempfile.TemporaryDirectory() as td:
                obj, err = MH.compile_batch([(src, "")], td)
                if obj is None:
                    reasons["compile failed"] += 1
                    if len(samples) < 4:
                        samples.append((m, addr, "compile: %s" % (err or "")[:50]))
                    continue
                syms = MH.obj_symbols(obj)
                code = MH.obj_text_range(obj, syms, {want}).get(want, b"")
            if not code:
                reasons["symbol not found"] += 1
                continue
            v, why = MH.compare(ins, end, list(md.disasm(code, 0)))
            if v == "match":
                matched += 1
                recs.append((m, addr, size, name, src, sig, end))
            else:
                reasons["mismatch"] += 1
                if len(samples) < 4:
                    samples.append((m, addr, why[:74]))

    print("  shape            : %s" % a.shape)
    print("  population       : %d" % (offered + reasons["declined"]))
    print("  offered          : %d" % offered)
    print("  byte-for-byte    : %d" % matched)
    if offered:
        print("  yield on offered : %.1f%%" % (100.0 * matched / offered))
    for k, v in reasons.most_common():
        print("    %-22s %5d" % (k, v))
    for m, ad, why in samples:
        print("    %-8s %#-12x %s" % (m, ad, why))

    if matched and not a.apply:
        print("\nre-run with --apply to register %d match(es)" % matched)
    elif matched:
        for m in MODULES:
            mine = [r for r in recs if r[0] == m]
            if not mine:
                continue
            p = os.path.join(ROOT, "data", "matched_%s.json" % m)
            blob = json.load(open(p, encoding="utf-8"))
            known = {int(r["addr"]) for r in blob.get("matched", [])}
            added = 0
            for _mm, addr, size, name, src, sig, end in mine:
                if addr in known:
                    continue
                blob.setdefault("matched", []).append({
                    "addr": addr, "ident": "f_%x" % addr, "module": m,
                    "name": name, "shape": a.shape + "-store", "sig": sig,
                    "src": src, "size": size,
                    "orig_insns": end, "new_insns": end,
                })
                added += 1
            if added:
                with open(p, "w", encoding="utf-8") as fh:
                    json.dump(blob, fh, indent=1)
            print("  %-8s registered %d" % (m, added))
    return 0


if __name__ == "__main__":
    sys.exit(main())
