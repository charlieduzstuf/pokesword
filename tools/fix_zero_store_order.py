#!/usr/bin/env python3
"""Repair the 26 zero-store bodies that only matched under the wrong flags.

## What went wrong

`match_harness.CFLAGS` was missing eight flags that `build_nx64.CXXFLAGS`
carries. Bisecting them one at a a time puts the whole effect on
`-mno-implicit-float`: with the harness's old flag set, `main` 0x1661510 compiled
to

    stp xzr, xzr, [x0, #0x70] ; str wzr, [x0, #0x80] ; ret      <- harness, "match"

and with the build's real flags to

    str wzr, [x0, #0x80] ; stp xzr, xzr, [x0, #0x70] ; ret      <- what links

The two independent zero-stores swap. So 26 bodies were registered as matching on
the strength of a flag set the build does not use: 1 in main, 3 in sdk, 22 in
subsdk1. Every other flag defect recorded in this project made correct code look
*wrong*; this one made correct-looking code look *right*, which is worse because
nothing goes red.

## The fix

All 26 are one shape: the original's first instruction is `stp xzr, xzr, [...]`,
a fused pair of 8-byte zero stores, followed by narrower zero stores. Nothing in
the source constrains the order of two independent stores, so the scheduler is
free to pick, and under the build's flags it picks the other one. An empty
`memory` barrier between the pair and the rest makes the order the source's, and
`main` 0x1661510 then matches exactly.

Note this is *not* the `const-field-set` case where a memory barrier changed
nothing because the reordering happened at instruction selection. Here it is pure
scheduling, so a barrier is exactly the right tool.

## Method

The family is found by shape rather than by trusting a stored list of failures,
because `verify_matches.py` only samples its output and the full list of 26 was
not recoverable from it. For each candidate, a barrier is tried after every
statement boundary and the source is kept **only if it compiles to the original
byte for byte** under the build's real flags. Nothing is accepted on the basis of
looking right.

Usage:
    python tools/fix_zero_store_order.py            # report only
    python tools/fix_zero_store_order.py --apply    # rewrite the registry src
"""

import argparse
import json
import os
import re
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH  # noqa: E402

MODULES = ["main", "sdk", "subsdk0", "subsdk1"]
BARRIER = '__asm__ __volatile__("" ::: "memory");'

# The original's first instruction, for a fused pair of 8-byte zero stores.
STP_ZERO = re.compile(r"^stp\s+xzr,\s*xzr,")

SIZES = {}


def orig_insns(mod, addr, size):
    md = MH._md()
    blob = MH.text_blob(mod)
    return list(md.disasm(blob[addr:addr + size], addr))


def stmts_of(src):
    """Split a one-line body into its statements, or None if it is not simple."""
    i = src.find("{")
    j = src.rfind("}")
    if i < 0 or j <= i:
        return None
    head, body, tail = src[:i + 1], src[i + 1:j], src[j:]
    parts = [p.strip() for p in body.split(";")]
    parts = [p for p in parts if p]
    if not parts:
        return None
    return head, parts, tail


def with_barrier_after(src, k):
    """Insert the barrier after statement k (0-based)."""
    got = stmts_of(src)
    if not got:
        return None
    head, parts, tail = got
    if k >= len(parts):
        return None
    new = parts[:k + 1] + [BARRIER] + parts[k + 1:]
    return head + " " + " ".join(s + ";" for s in new) + " " + tail


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true",
                    help="rewrite the registry src for bodies that now match")
    a = ap.parse_args()

    md = MH._md()
    sizes = {}
    for mod in MODULES:
        for addr, size, _n, _d in MH.load_functions(mod):
            sizes[(mod, addr)] = size

    fixed, already_ok, rejected = [], [], []
    for mod in MODULES:
        path = os.path.join(ROOT, "data", "matched_%s.json" % mod)
        if not os.path.isfile(path):
            continue
        blob = json.load(open(path, encoding="utf-8"))
        recs = blob.get("matched", [])
        changed = False
        for rec in recs:
            src = rec.get("src") or ""
            addr = int(rec["addr"])
            size = sizes.get((mod, addr))
            if not src or size is None:
                continue
            ins = orig_insns(mod, addr, size)
            if not ins or not STP_ZERO.match(ins[0].mnemonic + " " + ins[0].op_str):
                continue
            end = MH.effective_end(ins, size)
            ident, sig = rec["ident"], rec.get("sig") or ""
            want = MH.mangle(ident, sig)

            # Already correct under the build's flags? Leave it alone.
            with tempfile.TemporaryDirectory() as td:
                obj, _e = MH.compile_batch([(src, "")], td)
                code = (MH.obj_text_range(obj, MH.obj_symbols(obj), {want}).get(want, b"")
                        if obj is not None else b"")
            if code and MH.compare(ins, end, list(md.disasm(code, 0)))[0] == "match":
                already_ok.append((mod, addr))
                continue

            # Try a barrier after each statement boundary, keep the first exact hit.
            hit = None
            nstmt = len(stmts_of(src)[1]) if stmts_of(src) else 0
            for k in range(nstmt):
                cand = with_barrier_after(src, k)
                if cand is None:
                    continue
                with tempfile.TemporaryDirectory() as td:
                    obj, _e = MH.compile_batch([(cand, "")], td)
                    if obj is None:
                        continue
                    code = MH.obj_text_range(obj, MH.obj_symbols(obj),
                                             {want}).get(want, b"")
                if not code:
                    continue
                if MH.compare(ins, end, list(md.disasm(code, 0)))[0] == "match":
                    hit = (k, cand)
                    break
            if hit:
                rec["src"] = hit[1]
                changed = True
                fixed.append((mod, addr, hit[0]))
            else:
                rejected.append((mod, addr))

        if changed and a.apply:
            with open(path, "w", encoding="utf-8") as f:
                json.dump(blob, f, indent=1)

    print("  stp-zero family, already matching under build flags : %d"
          % len(already_ok))
    print("  repaired by a memory barrier                        : %d" % len(fixed))
    for mod, addr, k in fixed:
        print("      %-8s %#-12x barrier after statement %d" % (mod, addr, k))
    print("  family members no barrier placement fixed          : %d" % len(rejected))
    for mod, addr in rejected:
        print("      %-8s %#-12x" % (mod, addr))
    if fixed and not a.apply:
        print("\nre-run with --apply to rewrite the registry")
    return 0


if __name__ == "__main__":
    sys.exit(main())
