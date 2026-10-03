#!/usr/bin/env python3
"""Report matching progress, the way a decomp project reports decomp progress.

`tools/progress.py` reports how much of the binary has been *recovered*. This
reports how much has actually been *matched* -- i.e. how many functions have a
C++ body that compiles to the same assembly as the original.

Two numbers per module, and they are deliberately kept apart:

    matched    functions whose body tools/auto_match.py verified against the
               original, written into prog/matched/<module>/
    declared   functions that exist in prog/ with a declaration and a body, but
               whose body does not match yet

Only `matched` counts as progress. A function is never counted as matched
without the compiler having been run against it.

Usage:
    python tools/match_progress.py
    python tools/match_progress.py --by-shape
"""

import collections
import csv
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DATA = os.path.join(ROOT, "data")
MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]


def read_table():
    rows = list(csv.DictReader(open(os.path.join(DATA, "functions.csv"),
                                    encoding="utf-8")))
    return rows


def read_shapes(mod):
    p = os.path.join(DATA, "matched_%s.json" % mod)
    if not os.path.exists(p):
        return {}, 0
    try:
        blob = json.load(open(p, encoding="utf-8"))
    except (ValueError, OSError):
        return {}, 0
    shapes = collections.Counter(r.get("shape", "?")
                                 for r in blob.get("matched", []))
    return shapes, len(blob.get("matched", []))


def main():
    by_shape = "--by-shape" in sys.argv
    rows = read_table()

    per = collections.defaultdict(lambda: {"total": 0, "matched": 0,
                                          "declared": 0})
    for r in rows:
        d = per[r["module"]]
        d["total"] += 1
        decomp = r.get("decomp_name") or ""
        if decomp and not decomp.endswith("!"):
            d["matched"] += 1
        elif decomp:
            d["declared"] += 1

    print("%-9s %9s %10s %10s %9s" %
          ("module", "functions", "matching", "declared", "rate"))
    tot = {"total": 0, "matched": 0, "declared": 0}
    for m in MODULES:
        d = per.get(m)
        if not d:
            continue
        for k in tot:
            tot[k] += d[k]
        rate = 100.0 * d["matched"] / d["total"] if d["total"] else 0.0
        print("%-9s %9d %10d %10d %8.2f%%" %
              (m, d["total"], d["matched"], d["declared"], rate))
    rate = 100.0 * tot["matched"] / tot["total"] if tot["total"] else 0.0
    print("%-9s %9d %10d %10d %8.2f%%" %
          ("TOTAL", tot["total"], tot["matched"], tot["declared"], rate))

    if by_shape:
        print()
        print("matching by synthesised shape")
        agg = collections.Counter()
        for m in MODULES:
            shapes, n = read_shapes(m)
            if not n:
                continue
            for k, v in shapes.items():
                agg[k] += v
        for k, v in agg.most_common():
            print("  %-10s %7d" % (k, v))

    print()
    print("Bodies live in prog/matched/<module>/source/*.cpp")
    print("Verify one with:  python tools/diff.py --module main <name>")
    return 0


if __name__ == "__main__":
    sys.exit(main())
