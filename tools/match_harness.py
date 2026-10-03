#!/usr/bin/env python3
"""Batch assembly matcher: compile candidate C++ for AArch64 and compare it
against the original, function by function.

This is the measurement instrument for a matching decomp. asm-differ is
interactive and diffs one function at a time, which does not scale to 152,062
functions; this compiles candidates in batches, disassembles both sides, and
reports a match rate.

Comparison follows asm-differ's / tools/check.py's tolerance for a *first pass*
verdict: two functions match when their instruction sequences agree after
ignoring things a decomp cannot control yet --

  * `bl` targets (they depend on the final link layout)
  * `b`/`br` targets outside the function (tail calls)
  * `adrp` page immediates, and the matching `ldr`/`add` that consume them
    (they depend on where the linker places .rodata)

Everything else -- mnemonics, operand registers, branch widths -- must agree
exactly. That is a real signal, but a weaker guarantee than asm-differ's full
byte comparison, so `match_harness.py` results are a screen and asm-differ is
the authority.

Usage:
    python tools/match_harness.py --module rtld --shape short_leaf
    python tools/match_harness.py --module main --max-size 16 --limit 500
"""

import argparse
import csv
import json
import os
import re
import shutil
import subprocess
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
WORK = os.path.join(ROOT, "work")
TOOLS = os.path.join(ROOT, "tools")

LLVM_BIN = os.environ.get("POKESWORD_CLANG", r"C:\Users\charl\scoop\apps\llvm\current\bin")

# Compilation flags.
#
# These must match what the NX64 build actually uses, or "verified" means
# nothing. Two different optimisation levels are in play in this repo and the
# difference is not cosmetic:
#
#   ToolchainNX64.cmake   -O3 -g
#   upstream pokesword     -O2
#
# so the harness level is a parameter rather than a constant. POKESWORD_OPT
# overrides it; the default follows the toolchain this repo ships, which is the
# level the shipped prog.elf is built at.
#
# -ffunction-sections/-fdata-sections are not optimisation choices, they are
# correctness requirements for this harness: obj_relocations() identifies which
# function a branch belongs to purely by section name, so without them every
# function shares one .text section and every tail call becomes unverifiable.
OPT = os.environ.get("POKESWORD_OPT", "-O3")
CFLAGS = [
    "--target=aarch64-none-elf",
    "-std=c++17",
    OPT,
    "-g",
    "-DNDEBUG",
    # -fPIC is not optional. Under -fPIC a global of default visibility is
    # reached through the GOT -- `adrp x8, ..` then `ldr x8, [x8, #off]` loads
    # the *address* of the global, and the access goes on to dereference that.
    # Without -fPIC clang addresses the global directly (`adrp`/`add`, or a bare
    # `ldrb [x8]`), so every such function comes out structurally different no
    # matter what the source says. The original binaries are position
    # independent: main+0x1ce0 is exactly this shape, two GOT loads and a byte
    # test, and there is no source that produces it without -fPIC.
    "-fPIC",
    "-fno-exceptions",
    "-fno-rtti",
    "-fno-strict-aliasing",
    "-ffunction-sections",
    "-fdata-sections",
    "-nostdinc++",
    "-Wno-everything",
]


def tool(name):
    p = os.path.join(LLVM_BIN, name + (".exe" if os.name == "nt" else ""))
    if os.path.isfile(p):
        return p
    found = shutil.which(name)
    if found:
        return found
    raise SystemExit("required tool not found: %s" % name)


def load_functions(module):
    rows = []
    with open(os.path.join(ROOT, "data", "functions.csv"), encoding="utf-8") as f:
        for r in csv.DictReader(f):
            if r["module"] == module:
                rows.append((int(r["addr"], 16), int(r["size"]), r["name"],
                             r["decomp_name"]))
    rows.sort()
    return rows


def text_blob(module):
    return open(os.path.join(WORK, module, "text.bin"), "rb").read()


def disasm(data, base, md):
    return list(md.disasm(data, base))


def effective_end(ins, size):
    """Trim trailing compiler padding (udf / brk filler) from a function.

    Function sizes in the symbol table include inter-function alignment
    padding, which the compiler emits as `udf #0`. Comparing against that
    padding would report a mismatch no C++ can ever fix, so cut at the first
    padding word after the last real instruction.
    """
    if not ins:
        return 0
    end = len(ins)
    while end > 0 and ins[end - 1].mnemonic in ("udf", "brk", "nop"):
        end -= 1
    if end == 0:
        return 0
    return end


def obj_relocations(obj, names):
    """{symbol: {offset_within_function: target_symbol}} for direct branches.

    With -ffunction-sections each function gets its own section named
    `.text.<mangled>`, so the relocation records are grouped by section and the
    section name identifies the function directly -- no offset arithmetic needed.

    The two toolchains do not spell the section name the same way:

        LLVM 18     RELOCATION RECORDS FOR [.text._Z3foov]:
        LLVM 5.0.1  RELOCATION RECORDS FOR [.rela.text._Z3foov]:

    The older one prefixes every relocation section with `.rela`. Accepting only
    `.text.` silently discards *all* relocations under 5.0.1, and because a
    tail call is verified by asking where its branch goes, that turns every
    genuine tail-call match into a reported mismatch -- measured at 1200/1200
    under LLVM 18 against 0/1200 under 5.0.1 before this was fixed.

    This is the ground truth for "where does this branch actually go" before the
    linker runs, which is what lets a tail call be verified instead of ignored.
    """
    out = {n: {} for n in names}
    if not names:
        return out
    r = subprocess.run([tool("llvm-objdump"), "-r", obj],
                       capture_output=True, text=True)
    section = None
    sec_re = re.compile(r"^RELOCATION RECORDS FOR \[(\S+)\]:")
    # LLVM 18 aligns the columns, 5.0.1 does not; \s+ absorbs both.
    # "0000000000000000 R_AARCH64_JUMP26         _Z8target_xv"
    # "0000000000000000 R_AARCH64_JUMP26 _Z8target_xv"
    rel_re = re.compile(r"^([0-9a-f]+)\s+(R_AARCH64_\S+)\s+(\S+)\s*$")
    for line in r.stdout.splitlines():
        line = line.strip()
        if not line:
            continue
        m = sec_re.match(line)
        if m:
            section = m.group(1)
            if section.startswith(".rela"):
                section = section[len(".rela"):]
            continue
        m = rel_re.match(line)
        if not m or section is None:
            continue
        if not section.startswith(".text"):
            continue
        fn = section[len(".text."):] if len(section) > len(".text.") else ""
        if fn not in out:
            continue
        off = int(m.group(1), 16)
        out[fn][off] = m.group(3)
    return out


def normalise(ins, end, addr, size):
    """Reduce an instruction list to a comparable form.

    Returns a list of (mnemonic, normalised-operand-string) tuples.

    Branch destinations are replaced with a placeholder here; when they matter
    -- a tail call, where the destination *is* the behaviour -- `compare`
    substitutes the real destination names from the caller-supplied lists.
    """
    out = []
    adrp_regs = set()
    for i in ins[:end]:
        mn = i.mnemonic
        ops = i.op_str

        if mn == "adrp":
            # Only the destination register is meaningful at this stage; the
            # page address depends on the final layout.
            dst = i.op_str.split(",")[0].strip()
            adrp_regs.add(dst)
            out.append((mn, dst))
            continue
        if mn in ("ldr", "add") and adrp_regs:
            first = i.op_str.split(",")[0].strip()
            rest = i.op_str
            # The base may be an adrp-materialised register with or without an
            # offset: `ldr x8, [x8]` and `ldr x8, [x8, #0x5a0]` are the same
            # shape and both depend on the linker's page choice. Requiring a '#'
            # here made the comparison depend on whether the offset happened to
            # be zero, which is not a real code difference.
            reg = None
            if "[" in rest:
                reg = rest.split("[")[-1].split("]")[0].split(",")[0].strip()
            else:
                # `add x10, x10, #0x2c1` completes an address materialised by an
                # adrp. Only the destination is meaningful here; the page and the
                # offset depend on where the linker placed .rodata. Without this
                # every function that takes the address of a string differs from
                # the original purely because the two are linked differently.
                parts = [x.strip() for x in rest.split(",")]
                if len(parts) >= 2 and parts[1] in adrp_regs:
                    adrp_regs.discard(parts[1])
                    out.append((mn, first))
                    continue
            if reg and reg in adrp_regs:
                adrp_regs.discard(reg)
                out.append((mn, first + " [page]"))
                continue
        if mn in ("b", "br", "bl", "blr"):
            out.append((mn, "<target>"))
            continue
        if mn in COND_BRANCHES:
            # A conditional branch carries its destination as an absolute link
            # address, and the original and the candidate are linked at
            # different addresses -- so comparing the literal operand reports a
            # difference no source can fix. `cbz`-shaped candidates were
            # unaffected only because none of them existed.
            #
            # What is meaningful, and layout-independent, is the displacement
            # from the branch to its destination: that is the shape of the
            # control flow. A destination *outside* the body is a different
            # animal (it names another function) and is marked external rather
            # than silently compared as if it were local.
            body = ins[:end]
            lo = body[0].address if body else 0
            hi = (body[-1].address + 4) if body else 0
            tgt = _imm_of(i.op_str)
            cond = i.op_str.rsplit(",", 1)[0].strip() if "," in i.op_str \
                else ""
            if tgt is None:
                out.append((mn, ops))
            elif lo <= tgt <= hi:
                out.append((mn, "%s -> %+d" % (cond, tgt - i.address)))
            else:
                out.append((mn, "%s -> <external>" % cond))
            continue
        out.append((mn, ops))
    return out


# Conditional branches, i.e. every branch mnemonic except the unconditional
# b/br/bl/blr handled above. Keeping this as an explicit set means a new
# mnemonic (say `b.lt`) shows up as a mismatch rather than being silently
# compared with its absolute address.
COND_BRANCHES = {
    "cbz", "cbnz", "tbz", "tbnz",
    "b.eq", "b.ne", "b.cs", "b.hs", "b.cc", "b.lo", "b.mi", "b.pl",
    "b.vs", "b.vc", "b.hi", "b.ls", "b.ge", "b.lt", "b.gt", "b.le",
}


def _imm_of(op_str):
    """The integer operand of an instruction, or None if it is not an integer.

    objdump and capstone disagree on the spelling -- `#0x1d0c` versus `0x1d0c`
    -- so both are accepted. A register operand (`br x8`) yields None and is
    left alone.
    """
    last = op_str.rsplit(",", 1)[-1].strip()
    if last.startswith("#"):
        last = last[1:].strip()
    try:
        return int(last, 0)
    except ValueError:
        return None


def branch_targets(ins, end):
    """Ordered list of direct-branch mnemonics in a body."""
    return [i.mnemonic for i in ins[:end] if i.mnemonic in ("b", "bl")]


def compare(orig_ins, orig_end, mine_ins, orig_branches=None,
            mine_branches=None):
    """-> (verdict, reason).

    With `orig_branches`/`mine_branches` (lists of destination symbol names, one
    per direct branch, in order) the branch destinations are compared as well.
    Without them they are ignored, which is the right default for a function
    whose calls are just `bl <helper>`, and the wrong one for a tail call.
    """
    a = normalise(orig_ins, orig_end, 0, 0)
    b = normalise(mine_ins, len(mine_ins), 0, 0)

    if orig_branches is not None:
        want = list(orig_branches)
        got = list(mine_branches or [])
        if len(got) != len(want):
            return "mismatch", "branch count differs: orig %d, new %d" % (
                len(want), len(got))
        for k, (w, g) in enumerate(zip(want, got)):
            if w != g:
                return "mismatch", "branch %d goes to %s, expected %s" % (
                    k, g, w)

    # Compare from the top down: a trailing difference is almost always the
    # epilogue, and the entry sequence is what identifies the function.
    n = min(len(a), len(b))
    for i in range(n):
        if a[i] != b[i]:
            return "mismatch", "insn %d: orig %r vs new %r" % (i, a[i], b[i])
    if len(a) != len(b):
        # Trailing extra instructions in the original are usually padding or a
        # shared cold tail; report it, but distinguish it from a real mismatch.
        longer, side = (a, "original") if len(a) > len(b) else (b, "new")
        tail = [x for x in longer[n:]]
        return "len", "%s has %d extra trailing instruction(s), last=%r" % (
            side, len(tail), tail[-1] if tail else None)
    return "match", ""


PREAMBLE = """\
/* Self-contained preamble: a bare-metal aarch64-none-elf target has no
 * <stdint.h> under -nostdinc++, and a decomp translation unit should not depend
 * on a hosted C library anyway. */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long int64_t;
"""


def compile_batch_isolated(candidates, workdir, incdir=None, head=None):
    """Compile candidates, dropping any that fail rather than losing the batch.

    `compile_batch` compiles every candidate into one translation unit and
    returns nothing if any one of them is ill-formed. That is a terrible
    failure mode for a batch of 500: a single bad candidate removes 499 good
    ones from consideration, and the symptom -- an absent or wildly low count
    for one module -- looks like a compiler difference rather than a generator
    bug.

    This bisects instead. If the whole batch fails, candidates are compiled in
    halves; only the halves that still fail are split again. A batch where one
    candidate is bad therefore costs one extra compile round, not the batch.

    Returns (ok_candidates, dropped, errors).

    `ok_candidates` are the candidates that compiled *together*. `dropped` is the
    list of candidates removed, as (name, error). `errors` is non-empty only when
    the whole batch is unusable -- either every candidate failed, or the failure
    needs a pair of candidates together and so cannot be bisected to one.
    """
    if not candidates:
        return [], [], []
    obj, err = compile_batch(candidates, workdir, incdir, head)
    if obj is not None:
        return candidates, [], []

    # Bisect to the offending candidates.
    dropped = []
    pool = list(candidates)
    while len(pool) > 1:
        mid = len(pool) // 2
        halves = [pool[:mid], pool[mid:]]
        bad_half = None
        for h in halves:
            o, _e = compile_batch(h, workdir + "_h", incdir, head)
            if o is None:
                bad_half = h
                break
        if bad_half is None:
            # Both halves are fine on their own, so the failure needs the pair
            # -- a collision between candidates, not a single bad body.
            return [], list(candidates), [("collision across %d candidates"
                                           % len(pool), err[:400])]
        # Keep the good half and record the bad one; recurse into the bad half.
        good_half = halves[1] if bad_half is halves[0] else halves[0]
        for c in bad_half:
            dropped.append((c[0], "isolated: ill-formed on its own"))
        pool = good_half
    o, e = compile_batch(pool, workdir, incdir, head)
    if o is None:
        return [], list(candidates), [(str(c[0]), e[:400]) for c in pool]
    return pool, dropped, []


def compile_batch(candidates, workdir, incdir=None, head=None):
    """Compile candidate sources into one relocatable object.

    candidates: list of (name, source_text). `head` is optional prelude text,
    used to declare prototypes that candidate bodies call. Returns
    (obj_path, error_text).

    The element order is (name, source) and it is load-bearing in a quiet way.
    Passing them the other way round -- (source, name) -- compiles cleanly,
    returns a valid object file, and produces *no symbols at all*, because the
    name lands in the variable that is discarded and the source text is empty.
    Nothing errors: the batch simply has no code in it, and every candidate is
    then reported as "the compiler emitted nothing for this function", which
    looks exactly like a total translation failure rather than a swapped tuple.

    Both orderings are accepted here, and a batch that produces no symbols for
    any candidate is treated as an error rather than as 250 successful
    compilations, because that is the only way this mistake stays quiet.
    """
    obj = os.path.join(workdir, "batch.o")
    src = os.path.join(workdir, "batch.cpp")
    # The bisecting caller appends a suffix to workdir for its halves, and that
    # directory does not exist yet -- compile_batch is also called directly by
    # callers that create only the parent.
    os.makedirs(workdir, exist_ok=True)
    norm = []
    for item in candidates:
        first, second = item[0], item[1]
        # The source always contains a newline or a brace; a bare identifier
        # never does. Use that to accept either order rather than making every
        # caller get it right.
        if ("\n" in first or "{" in first or ";" in first) and \
                ("\n" not in second and "{" not in second and ";" not in second):
            norm.append((second, first))
        else:
            norm.append((first, second))

    with open(src, "w", encoding="utf-8") as f:
        f.write(PREAMBLE)
        if head:
            f.write(head)
            f.write("\n")
        for _n, text in norm:
            f.write(text)
            f.write("\n")
    cmd = [tool("clang++")] + CFLAGS + ["-c", src, "-o", obj]
    if incdir:
        cmd += ["-I", incdir]
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode != 0 or not os.path.exists(obj):
        return None, r.stderr[:4000]

    # A batch where nothing at all was defined is a mistake, not a result. See
    # the note on argument order above.
    #
    # The test is "did the object get any symbols", not "are these the names I
    # passed". `candidates` carries the caller's identifier -- `f_3b280` -- while
    # `obj_symbols` reports what the compiler emitted, `_Z7f_3b280mPv`. Matching
    # them exactly is the bug this guard was written to catch, which is why an
    # earlier version of it failed every batch it was supposed to accept.
    syms = obj_symbols(obj)
    if norm and not syms:
        return None, ("batch compiled to an object with no symbols at all "
                      "-- check the (name, source) order passed to "
                      "compile_batch")
    return obj, ""


def obj_symbols(obj):
    """-> {name: (address, size)} from an object file."""
    out = {}
    r = subprocess.run([tool("llvm-nm"), "--print-size", "--defined-only", obj],
                       capture_output=True, text=True)
    for line in r.stdout.splitlines():
        p = line.split()
        if len(p) == 4:
            addr, size, _t, name = p
            try:
                out[name] = (int(addr, 16), int(size, 16))
            except ValueError:
                pass
    return out


def obj_text_range(obj, syms, names):
    """Extract the raw instruction bytes of each named function from an object.

    Returns {symbol: bytes}. The bytes are handed to capstone rather than using
    objdump's text, so both sides of every comparison are rendered by the *same*
    disassembler; mixing objdump text with capstone text produces spurious
    mismatches over operand spelling alone.

    Two objdump dialects have to be handled, because this project verifies
    against more than one compiler:

    * LLVM 18 prints a symbol as ``0000 <_Z3foov>:`` and each instruction as one
      big-endian hex *word* -- ``d65f03c0`` is ``ret``. The word is byte-swapped
      back to memory order here.
    * LLVM 5.0.1 prints a symbol as ``_Z3foov:`` with no address, and each
      instruction as individual bytes already in memory order. Those are taken
      as-is.

    Getting this wrong is silent and total: every function decodes to zero
    instructions, and the harness reports a match rate of nothing.
    """
    per = {n: b"" for n in names}
    if not names:
        return per
    r = subprocess.run([tool("llvm-objdump"), "-d", obj],
                       capture_output=True, text=True)
    cur = None
    acc = b""
    for line in r.stdout.splitlines():
        line = line.strip()
        if not line:
            continue
        m = re.match(r"^[0-9a-f]+ <(.+)>:$", line)
        if not m:
            m = re.match(r"^([A-Za-z_$.][A-Za-z0-9_$.]*):$", line)
        if m:
            if cur in per:
                per[cur] = acc
            cur = m.group(1)
            acc = b""
            continue
        if cur not in per:
            continue
        # LLVM 5.0.1: bytes listed individually, already in memory order.
        m = re.match(r"^[0-9a-f]+:\s+((?:[0-9a-f]{2}\s+)+)", line)
        if m:
            acc += bytes.fromhex(m.group(1).replace(" ", ""))
            continue
        # LLVM 18: one big-endian hex word.
        m = re.match(r"^[0-9a-f]+:\s+([0-9a-f]{8})\s", line)
        if m:
            acc += bytes.fromhex(m.group(1))[::-1]
    if cur in per:
        per[cur] = acc
    return per

# Lazily-built capstone disassembler, shared by every caller that wants one.
# Declared here because _md() assigns to it; without this the first call raises
# NameError. The harness's own hot path passes an md in from main(), so the bug
# was latent until a caller without one arrived.
_MD = None


def _md():
    global _MD
    if _MD is None:
        import capstone
        _MD = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_ARM)
    return _MD


class FakeInsn:
    """Minimal capstone-shaped object for the normaliser."""

    def __init__(self, addr, mn, ops):
        self.address = addr
        self.mnemonic = mn
        self.op_str = ops


def mangle(name, params="v"):
    """Itanium mangling for a function at global scope.

    `params` is the already-encoded parameter list; it defaults to the empty
    list `v`. Getting this wrong is easy to miss because the symbol simply is
    not found, so callers pass their real signature:

        mangle("f")                  -> _Z1fv     void f()
        mangle("f", "Pv")            -> _Z1fPv    uint64_t f(void*)
        mangle("f", "Pm")            -> _Z1fPm    void f(void*, uint64_t)

    Builtin type codes used by the generators: v void, P void*, m unsigned long,
    j unsigned int, h unsigned short, c unsigned char, i int, l long.
    """
    return "_Z" + str(len(name)) + name + params


def build_candidate(shape, addr, name, ident):
    """Return C++ source for a candidate function, or None if not automatable."""
    body = {
        "ret_only": "{}",
        "short_leaf": "{}",
    }.get(shape)
    if body is None:
        return None
    return "void %s() %s\n" % (ident, body)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default="rtld")
    ap.add_argument("--shape", default="ret_only",
                    help="function shape to attempt (ret_only, short_leaf)")
    ap.add_argument("--max-size", type=int, default=0)
    ap.add_argument("--limit", type=int, default=200)
    ap.add_argument("--batch", type=int, default=200)
    ap.add_argument("--out", default=None, help="write a JSON report here")
    a = ap.parse_args()

    import capstone
    md = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_ARM)

    fns = load_functions(a.module)
    if a.max_size:
        fns = [f for f in fns if f[1] <= a.max_size]

    blob = text_blob(a.module)
    selected = []
    for addr, size, name, mangled in fns:
        ins = disasm(blob[addr:addr + size], addr, md)
        end = effective_end(ins, size)
        shape = _shape(ins, end)
        if shape != a.shape:
            continue
        src = build_candidate(shape, addr, name, "cand_%x" % addr)
        if src is None:
            continue
        selected.append((addr, size, name, shape, src, ins, end))
        if len(selected) >= a.limit:
            break

    print("module %s shape %s: %d candidate(s) selected"
          % (a.module, a.shape, len(selected)))
    if not selected:
        return 0

    results = []
    with tempfile.TemporaryDirectory() as td:
        for i in range(0, len(selected), a.batch):
            chunk = selected[i:i + a.batch]
            cands = [("cand_%x" % c[0], c[4]) for c in chunk]
            obj, err = compile_batch(cands, td)
            if obj is None:
                print("compile failed:\n%s" % err)
                return 2
            # Candidate symbols are mangled by the compiler.
            names = {mangle("cand_%x" % c[0]) for c in chunk}
            syms = obj_symbols(obj)
            dumped = obj_text_range(obj, syms, names)

            for addr, size, name, shape, _src, ins, end in chunk:
                key = mangle("cand_%x" % addr)
                code = dumped.get(key, b"")
                if not code:
                    results.append({"addr": addr, "name": name, "verdict": "nocode",
                                    "reason": "compiler emitted nothing"})
                    continue
                mine = list(md.disasm(code, addr))
                if not mine:
                    results.append({"addr": addr, "name": name, "verdict": "nocode",
                                    "reason": "no decodable instructions"})
                    continue
                verdict, reason = compare(ins, end, mine)
                results.append({"addr": addr, "name": name, "size": size,
                                "verdict": verdict, "reason": reason,
                                "orig_insns": end, "new_insns": len(mine)})

    tally = {}
    for r in results:
        tally[r["verdict"]] = tally.get(r["verdict"], 0) + 1
    print()
    print("verdict        count    pct")
    for v, c in sorted(tally.items(), key=lambda kv: -kv[1]):
        print("%-13s %6d %6.2f%%" % (v, c, 100.0 * c / len(results)))
    n = tally.get("match", 0)
    print()
    print("MATCH %d / %d = %.2f%%" % (n, len(results),
                                      100.0 * n / len(results) if results else 0))

    for r in results:
        if r["verdict"] != "match":
            print("   %#-10x %-34s %s: %s" %
                  (r["addr"], r["name"][:34], r["verdict"], r.get("reason", "")[:80]))
            if r["verdict"] == "mismatch":
                continue
            break_after = True
            break

    if a.out:
        with open(a.out, "w", encoding="utf-8") as f:
            json.dump({"module": a.module, "shape": a.shape, "tally": tally,
                       "results": results}, f, indent=1)
        print("\nreport: %s" % a.out)
    return 0


def _shape(ins, end):
    mn = [i.mnemonic for i in ins[:end]]
    n = len(mn)
    if n == 1 and mn[0] == "ret":
        return "ret_only"
    if n <= 4 and mn and mn[-1] == "ret":
        return "short_leaf"
    if n <= 8 and mn and mn[-1] == "ret":
        return "leaf"
    return "other"


if __name__ == "__main__":
    sys.exit(main())
