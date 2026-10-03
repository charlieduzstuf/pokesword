#!/usr/bin/env python3
"""Measure what is actually left, so the remaining work is sized rather than guessed.

Why
---
Every count reported so far has been either a total (152,062 functions) or a
matched count (24,226), and the gap between them has been described in prose --
"127,837 stub bodies", "the remaining 127k are per-function human work". That is
not actionable. Nobody can decide what to work on next from it.

This groups every unmatched function by *shape*: instruction count, which
opcodes it uses, and whether it calls anything. The point is that the
unmatched population is not uniform, and the distribution says where the effort
actually goes:

  * A few shapes are large and shallow -- hundreds of instructions of
    independent, side-effect-free work. Those are what an automatic translator
    can still reach.
  * Some are large and call-heavy. Those are per-function work and no tooling
    shortens them.
  * Some are tiny but shape-unrecognised, which usually means the shape
    classifier has a gap rather than the function being hard.

That last category is the one worth finding: a cheap win hiding behind a
generator that only emits nine known shapes.

Usage:
    python tools/scan_shapes.py
    python tools/scan_shapes.py --module main --limit 40000
    python tools/scan_shapes.py --unmatched-only --csv data/shapes.csv
"""

import argparse
import collections
import csv
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH  # noqa: E402

# Branch mnemonics that indicate control flow beyond a linear sequence.
COND = MH.COND_BRANCHES | {"b", "br", "bl", "blr"}

# Opcodes that touch memory. A function with none is a pure computation and is
# almost always translatable from a decoded dataflow rather than by hand.
MEM = {"ldr", "ldrb", "ldrh", "ldrsb", "ldrsh", "ldrsw", "str", "strb",
       "strh", "ldp", "stp", "ldur", "stur", "ldxr", "stxr", "ldaxr",
       "stlxr", "ldarb", "ldar", "stlrb", "stlr", "cas", "swp"}

# Opcodes that mean the function is doing something with observable effect beyond
# plain loads and stores: arithmetic on floating point, atomics, barriers, or a
# tail call out.
EFFECT = {"fadd", "fsub", "fmul", "fdiv", "fmov", "fcmp", "fcsel", "fcvt",
          "scvtf", "ucvtf", "fabs", "fneg", "fsqrt", "frint", "ldaxr", "cas",
          "swp", "dmb", "dsb", "isb", "svc", "brk", "hlt", "wfi", "sev"}


def classify_shape(ins, end):
    """A coarse, honest bucket for one function.

    Deliberately structural rather than clever. The value is in being able to
    say "there are 9,000 of these and 400 of those" rather than pretending to
    know what each one is.
    """
    body = ins[:end]
    n = len(body)
    mn = [i.mnemonic for i in body]
    branches = [m for m in mn if m in COND]
    calls = [m for m in mn if m in ("bl", "blr")]
    mems = [m for m in mn if m in MEM]
    eff = [m for m in mn if m in EFFECT]
    tail = bool(mn) and mn[-1] in ("b", "br")

    if n == 0:
        return "empty"
    # A one-instruction unconditional `b` is a tail-call thunk, and it has to be
    # classified as one. The `n == 1` test used to come first and returned
    # "trivial-1" unconditionally, so all 1,043 of these landed in a bucket with
    # no generator: `auto_match` dispatches `tailcall` on shape, and the shape
    # was never "tailcall". Worse, `tail` was computed on the line above and
    # never read by any branch in the function.
    #
    # Order matters here. A single `ret` must stay trivial (a `b` to the next
    # function is a thunk; a `ret` is a body), so the tail test is narrower than
    # `n == 1 and mn[0] == "b"`.
    if n == 1 and mn[0] == "b":
        return "tailcall"
    if n == 1:
        return "trivial-1"
    if n <= 4 and not branches and not calls:
        return "tiny-linear"
    if not branches and not calls:
        if eff:
            return "straight-fp"
        if n <= 12:
            return "short-linear"
        return "long-linear"
    if calls and not branches:
        return "call-only"
    if branches and not calls:
        return "branchy"
    if branches and calls:
        return "branchy-calls"
    return "other"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default=None)
    ap.add_argument("--limit", type=int, default=0,
                    help="0 = every function")
    ap.add_argument("--unmatched-only", action="store_true", default=True)
    ap.add_argument("--all-shapes", action="store_true",
                    help="include already-matched functions")
    ap.add_argument("--csv", default=None)
    a = ap.parse_args()

    mods = [a.module] if a.module else ["rtld", "main", "sdk", "subsdk0",
                                        "subsdk1"]
    md = MH._md()
    grand = collections.Counter()
    grand_ins = collections.Counter()
    grand_calls = collections.Counter()
    total = 0

    rows = []
    for mod in mods:
        matched = set()
        p = os.path.join(ROOT, "data", "matched_%s.json" % mod)
        if os.path.isfile(p):
            import json
            try:
                for r in json.load(open(p, encoding="utf-8")).get("matched", []):
                    matched.add(int(r["addr"]))
            except (ValueError, OSError):
                pass

        blob = MH.text_blob(mod)
        buckets = collections.Counter()
        bins = collections.Counter()
        callbins = collections.Counter()
        n_mod = 0
        for addr, size, name, _dec in MH.load_functions(mod):
            if a.unmatched_only and not a.all_shapes and addr in matched:
                continue
            if a.limit and n_mod >= a.limit:
                break
            n_mod += 1
            ins = list(md.disasm(blob[addr:addr + size], addr))
            end = MH.effective_end(ins, size)
            shape = classify_shape(ins, end)
            buckets[shape] += 1
            grand[shape] += 1
            bins[(end // 16) * 16] += 1
            grand_ins[(end // 16) * 16] += 1
            ncalls = sum(1 for i in ins[:end]
                         if i.mnemonic in ("bl", "blr"))
            callbins[(min(ncalls, 8))] += 1
            grand_calls[(min(ncalls, 8))] += 1
            total += 1
            if a.csv:
                rows.append((mod, "0x%016x" % addr, name, end, shape, ncalls))

        print("\n== %s ==" % mod)
        print("   unmatched considered: %d  (already matching: %d)"
              % (n_mod, len(matched)))
        for k, v in buckets.most_common():
            print("   %-16s %7d  %5.1f%%"
                  % (k, v, 100.0 * v / max(1, n_mod)))

    print("\n%s" % ("=" * 72))
    print("TOTAL unmatched considered: %d" % total)
    print("\nby shape:")
    for k, v in grand.most_common():
        print("   %-16s %7d  %5.1f%%" % (k, v, 100.0 * v / max(1, total)))

    print("\nby instruction count (16-wide buckets):")
    for k in sorted(grand_ins):
        v = grand_ins[k]
        bar = "#" * int(60.0 * v / max(1, total))
        print("   %5d-%-5d %7d  %5.1f%% %s" % (k, k + 15, v,
                                                100.0 * v / max(1, total), bar))

    print("\nby call count:")
    for k in sorted(grand_calls):
        v = grand_calls[k]
        lbl = "%d+" % k if k == 8 else str(k)
        print("   %-4s calls  %7d  %5.1f%%"
              % (lbl, v, 100.0 * v / max(1, total)))

    # The actionable summary: how much is left that is small and translation-
    # shaped, versus how much genuinely needs a human per function.
    linear = (grand["tiny-linear"] + grand["short-linear"] +
              grand["long-linear"] + grand["straight-fp"] +
              grand["trivial-1"])
    small = sum(v for k, v in grand_ins.items() if k < 32)
    hard = total - linear
    print()
    print("linearly translatable shapes : %7d  (%.1f%%)" % (linear, 100.0 * linear / max(1, total)))
    print("everything else             : %7d  (%.1f%%)" % (hard, 100.0 * hard / max(1, total)))
    print("under 32 instructions       : %7d  (%.1f%%)" % (small, 100.0 * small / max(1, total)))
    print("under 32 and linear         : %7d" % (min(small, linear)))

    if a.csv:
        p = a.csv if os.path.isabs(a.csv) else os.path.join(ROOT, a.csv)
        with open(p, "w", newline="", encoding="utf-8") as f:
            w = csv.writer(f)
            w.writerow(["module", "addr", "name", "insns", "shape", "calls"])
            w.writerows(rows)
        print("\nwrote %d rows -> %s" % (len(rows), os.path.relpath(p, ROOT)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
