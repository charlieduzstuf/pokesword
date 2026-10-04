#!/usr/bin/env python3
"""Generator for the `struct-copy` shape: 375 unmatched bodies, 318 of them offered.

The shape copies a run of fields from one object to another using `ldr`/`ldp` to
read and `str`/`stp` to write, with no arithmetic. Nothing here computes anything,
which is why it is worth automating: the instruction stream fully determines the
source.

## Why this was hard, and what the answer turned out to be

The natural emission -- one assignment per field, in offset order -- compiles to
separate `ldr`/`str` pairs. Clang will not form `ldp`/`stp` from scalar copies at
all, so every candidate came out with the wrong mnemonics.

Two findings, both measured rather than reasoned:

**1. A 16-byte _struct_ type gives GPR `ldp`/`stp`.** A vector type does not: it
goes to NEON and produces `ldr q0` / `ld1` / `stur q1`, which is further from the
original, not closer. Only an aggregate makes Clang pair general-purpose
registers.

**2. Clang canonicalises a shifted 16-byte store back into a contiguous copy.**
Given a build-the-value-then-store formulation it re-laid the stores out as
`stp x8, x9, [x1]` plus `str x10, [x1, #0x10]`, which is semantically identical to
the original but not the same bytes. One `__asm__ __volatile__("" ::: "memory")`
between the store groups stops the merge and reproduces the original exactly.

That barrier is the same device used for the zero-store shapes in
`decomp/docs/struct_copy.md` and for the 26 `setter-chain` bodies in
`decomp/docs/flag_fidelity.md`. It does nothing about instruction *selection* and
everything about *scheduling*; identifying which of the two you are fighting is
what makes it worth reaching for.

## The design in one line

Reads and writes are emitted **in the order the original used**, taken from the
instruction stream rather than from the offsets -- with a barrier between write
groups. This generator never guesses an order, it copies one.

Usage:
    python tools/gen_struct_copy.py            # report only
    python tools/gen_struct_copy.py --apply    # register the matches
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

import match_harness as MH  # noqa: E402
import auto_match as AM     # noqa: E402
import straight_line as SL  # noqa: E402

MODULES = ["main", "sdk", "subsdk0", "subsdk1"]

BARRIER = '__asm__ __volatile__("" ::: "memory");'

# C types by width, keyed by the width in bytes.
U = {1: "uint8_t", 2: "uint16_t", 4: "uint32_t", 8: "uint64_t"}

# The 16-byte aggregate is declared **inside the function**, not at file scope.
#
# A file-scope `struct u64x2` plus a `typedef unsigned long u64;` prelude was the
# first version, and it verified: every one of the 278 candidates compiled and
# matched byte-for-byte *in isolation*. Then the real build failed, because
# `decomp_project` packs many bodies into one translation unit and each body
# redeclared the struct and the typedef:
#
#     struct u64x2 { u64 a, b; };
#                 ^
#
# A per-body compile cannot see this class of failure at all -- there is nothing
# to collide with. It is the same lesson as the tail-call partitioning bug in
# HANDOFF.md: verification that does not model the real build passes code the
# build rejects. A function-local struct has the same codegen (it is still an
# aggregate of two 64-bit members, so it still pairs general-purpose registers)
# and cannot collide with a sibling body.
STRUCT_DECL = "struct u64x2 { uint64_t a, b; };"


def split_ops(s):
    """Top-level comma split that respects `[...]`.

    Delegates to `straight_line.split_ops`. A naive `s.split(",")` turns
    `x9, x10, [x1, #8]` into `['x9', 'x10', '[x1', '#8]']`, which made an earlier
    version of this generator decline all 375 bodies -- the same comma-split trap
    already recorded in HANDOFF.md.
    """
    return SL.split_ops(s)


def reg_info(r):
    r = r.strip()
    if r == "xzr":
        return 8, True
    if r == "wzr":
        return 4, True
    if r == "sp":
        return None, False
    if r.startswith("x") and r[1:].isdigit():
        return 8, False
    if r.startswith("w") and r[1:].isdigit():
        return 4, False
    return None, False


def parse_mem(op):
    """'[x0, #0x10]' -> ('x0', 0x10);  '[x0]' -> ('x0', 0).  (None, None) if not that."""
    m = re.match(r"^\[\s*([A-Za-z0-9]+)\s*(?:,\s*#(-?(?:0x)?[0-9a-fA-F]+)\s*)?\]$", op)
    if not m:
        return None, None
    off = m.group(2)
    if off is None:
        return m.group(1), 0
    return m.group(1), int(off, 16) if off.lower().startswith("0x") else int(off)


def build(body, ident):
    """Return (src, sig) for the instruction list, or None to decline.

    `body` is the full effective body including the trailing `ret`.
    """
    # --- pass 1: which argument registers are used, and as pointers ---
    ptr_args, used_args = set(), set()
    for ins in body:
        if ins.mnemonic == "ret":
            continue
        if ins.mnemonic not in ("ldr", "ldp", "str", "stp"):
            return None
        ops = split_ops(ins.op_str)
        base, _off = parse_mem(ops[-1])
        if base is None or base in ("sp", "xzr", "wzr"):
            return None
        if not base.startswith("x") or not base[1:].isdigit():
            return None
        k = int(base[1:])
        used_args.add(k)
        ptr_args.add(k)
    if len(ptr_args) != 2:
        return None

    decls, codes, names, ptrs = [], [], {}, 0
    for k in range(max(used_args) + 1):
        if k in ptr_args:
            codes.append("S_" if ptrs else "Pv")
            ptrs += 1
            decls.append("void* a%d" % k)
        else:
            codes.append("m")
            decls.append("uint64_t unused%d" % k)
        names[k] = "a%d" % k
    sig = "".join(codes) if codes else "v"

    def addr(base, off):
        return "(char*)%s" % names[base] if off == 0 else "((char*)%s + %d)" % (names[base], off)

    # --- pass 2: reads, then writes, each in the original's order ---
    regmap = {}        # register -> C expression yielding its value
    reads = []         # emitted read statements
    writes = []        # emitted write statements (no barriers yet)
    nloc = 0

    for ins in body:
        mn = ins.mnemonic
        if mn == "ret":
            continue
        ops = split_ops(ins.op_str)

        if mn == "ldp":
            d1, d2 = ops[0], ops[1]
            b, off = parse_mem(ops[2])
            w1, _ = reg_info(d1)
            w2, _ = reg_info(d2)
            if w1 != 8 or w2 != 8:
                return None
            local = "s%d" % nloc
            nloc += 1
            reads.append("struct u64x2 %s = *(struct u64x2*)%s;" % (local, addr(int(b[1:]), off)))
            regmap[d1] = "%s.a" % local
            regmap[d2] = "%s.b" % local
            continue

        if mn == "ldr":
            dst = ops[0]
            b, off = parse_mem(ops[1])
            w, zero = reg_info(dst)
            if w is None:
                return None
            if zero:
                return None
            local = "v%d" % nloc
            nloc += 1
            reads.append("%s %s = *(%s*)%s;" % (U[w], local, U[w], addr(int(b[1:]), off)))
            regmap[dst] = local
            continue

        if mn == "stp":
            s1, s2 = ops[0], ops[1]
            b, off = parse_mem(ops[2])
            w1, z1 = reg_info(s1)
            w2, z2 = reg_info(s2)
            if w1 != 8 or w2 != 8:
                return None
            ib = int(b[1:])
            if z1 or z2:
                return None                      # zero-pair: needs the other recipe
            if s1 not in regmap or s2 not in regmap:
                return None
            writes.append("*(struct u64x2*)%s = (struct u64x2){ %s, %s };"
                          % (addr(ib, off), regmap[s1], regmap[s2]))
            continue

        if mn == "str":
            src = ops[0]
            b, off = parse_mem(ops[1])
            w, zero = reg_info(src)
            if w is None:
                return None
            ib = int(b[1:])
            if zero:
                writes.append("*(%s*)%s = 0;" % (U[w], addr(ib, off)))
            elif src in regmap:
                writes.append("*(%s*)%s = %s;" % (U[w], addr(ib, off), regmap[src]))
            else:
                return None
            continue

        return None

    if not writes:
        return None

    # Barrier between write groups: this is what stops Clang merging a shifted
    # 16-byte store back into a contiguous copy. Measured, not guessed.
    head = [STRUCT_DECL] if any("u64x2" in r for r in reads + writes) else []
    stmts = head + list(reads)
    for i, w in enumerate(writes):
        if i:
            stmts.append(BARRIER)
        stmts.append(w)

    plist = ", ".join(decls)
    return ("void %s(%s) {\n    %s\n}\n"
            % (ident, plist, "\n    ".join(stmts)), sig)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true",
                    help="register the matches in data/matched_<module>.json")
    a = ap.parse_args()

    md = MH._md()
    have = {}
    for m in MODULES:
        p = os.path.join(ROOT, "data", "matched_%s.json" % m)
        have[m] = {int(r["addr"]) for r in
                   json.load(open(p, encoding="utf-8")).get("matched", [])}

    shapes = collections.Counter()
    offered = matched = 0
    fails = collections.Counter()
    samples = []
    recs = []

    for m in MODULES:
        blob = MH.text_blob(m)
        for addr, size, name, _d in MH.load_functions(m):
            if addr in have[m]:
                continue
            ins = list(md.disasm(blob[addr:addr + size], addr))
            end = MH.effective_end(ins, size)
            if AM.shape_of(ins, end) != "struct-copy":
                continue
            body = ins[:end]
            shapes[" ".join(x.mnemonic for x in body)] += 1
            got = build(body, "f_%x" % addr)
            if got is None:
                fails["declined"] += 1
                continue
            src, sig = got
            offered += 1
            want = MH.mangle("f_%x" % addr, sig)
            with tempfile.TemporaryDirectory() as td:
                obj, err = MH.compile_batch([(src, "")], td)
                if obj is None:
                    fails["compile failed"] += 1
                    if len(samples) < 4:
                        samples.append((m, addr, "compile: %s" % (err or "")[:50]))
                    continue
                syms = MH.obj_symbols(obj)
                code = MH.obj_text_range(obj, syms, {want}).get(want, b"")
            if not code:
                fails["symbol not found"] += 1
                continue
            v, why = MH.compare(ins, end, list(md.disasm(code, 0)))
            if v == "match":
                matched += 1
                recs.append((m, addr, size, name, src, sig, end))
            else:
                key = why.split(":")[0][:28]
                fails["mismatch: " + key] += 1
                if len(samples) < 4:
                    samples.append((m, addr, why[:70]))

    print("  struct-copy population by opcode sequence:")
    for k, v in shapes.most_common(8):
        print("    %-40s %5d" % (k, v))
    print()
    print("  offered to the compiler : %d" % offered)
    print("  byte-for-byte matches  : %d" % matched)
    if offered:
        print("  yield on offered       : %.1f%%" % (100.0 * matched / offered))
    print()
    print("  non-matches:")
    for k, v in fails.most_common(10):
        print("    %-44s %5d" % (k, v))
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
                    "name": name, "shape": "struct-copy", "sig": sig,
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
