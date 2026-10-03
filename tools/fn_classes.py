#!/usr/bin/env python3
"""Classify recovered functions by their instruction shape.

A matching decomp starts with the functions that are cheap to match, so this
groups every function in a module by the mnemonic sequence of its body. The
result tells you which classes are mechanically matchable (a lone `ret`, a
prologue plus a `ret`, a field load and return) and which need real reverse
engineering.

Usage:
    python tools/fn_classes.py --module rtld
    python tools/fn_classes.py --module main --limit 40
"""

import argparse
import collections
import csv
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

sys.path.insert(0, os.path.join(ROOT, "tools"))


def load(module):
    rows = []
    with open(os.path.join(ROOT, "data", "functions.csv"), encoding="utf-8") as f:
        for r in csv.DictReader(f):
            if r["module"] == module:
                rows.append((int(r["addr"], 16), int(r["size"]), r["name"]))
    rows.sort()
    return rows


def text_blob(module):
    return open(os.path.join(ROOT, "work", module, "text.bin"), "rb").read()


def classify(mnemonics):
    """Map an instruction sequence to a coarse shape label."""
    if not mnemonics:
        return "empty"
    m = [x for x in mnemonics]
    n = len(m)
    if n == 1 and m[0] == "ret":
        return "ret_only"
    if n == 2 and m[0] == "ret" and m[1] == "br":
        return "ret_br"
    if m[0] == "b" or m[0] == "br":
        return "tail_branch"
    # prologue detection: sub sp / stp x29,x30
    if any(x in m for x in ("stp",)) and m[0] in ("sub", "stp"):
        if n <= 6 and m[-1] == "ret":
            return "prologue_ret"
        if n <= 12 and "ldp" in m:
            return "prologue_epilogue"
        return "frame"
    if n <= 4 and m[-1] == "ret":
        return "short_leaf"
    if n <= 8 and m[-1] == "ret":
        return "leaf"
    if n <= 24:
        return "small"
    if n <= 80:
        return "medium"
    return "large"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default="main")
    ap.add_argument("--limit", type=int, default=40)
    ap.add_argument("--max-size", type=int, default=0,
                    help="only consider functions up to this many bytes")
    a = ap.parse_args()

    import capstone
    md = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_ARM)

    rows = load(a.module)
    if a.max_size:
        rows = [r for r in rows if r[1] <= a.max_size]
    blob = text_blob(a.module)

    shapes = collections.Counter()
    examples = collections.defaultdict(list)
    for addr, size, name in rows:
        ins = list(md.disasm(blob[addr:addr + size], addr))
        shape = classify([i.mnemonic for i in ins])
        shapes[shape] += 1
        if len(examples[shape]) < a.limit:
            examples[shape].append((addr, size, name,
                                    [i.mnemonic for i in ins]))

    total = len(rows)
    print("module %s: %d functions%s" %
          (a.module, total, (" <= %d bytes" % a.max_size) if a.max_size else ""))
    print()
    print("%-18s %8s %7s" % ("shape", "count", "pct"))
    for shape, c in shapes.most_common():
        print("%-18s %8d %6.2f%%" % (shape, c, 100.0 * c / total))

    print()
    for shape, ex in sorted(examples.items()):
        print("--- %s (%d) ---" % (shape, shapes[shape]))
        for addr, size, name, mn in ex[:min(6, a.limit)]:
            print("   %#-10x %4d  %-34s %s" %
                  (addr, size, name[:34], " ".join(mn[:14])))
        print()
    return 0


if __name__ == "__main__":
    sys.exit(main())
