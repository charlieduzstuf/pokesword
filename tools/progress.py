#!/usr/bin/env python3
"""Report decompilation progress, in the style of pokesword's tools/progress.py.

Reports two independent things:

  * native code: how many recovered functions are declared in prog/ (i.e. have
    a real C++ declaration and a symbol-table entry), and how many carry a
    meaningful recovered name rather than a `sub_<addr>` placeholder.
  * Pawn scripts: how many scripts are extracted, disassembled and rendered.

Usage:
    python tools/progress.py
    python tools/progress.py --by-group
"""

import csv
import glob
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
FUNCS = os.path.join(ROOT, "data", "functions.csv")
SCRIPTS = os.path.join(ROOT, "data", "scripts.csv")
SCRIPT_OUT = os.path.join(ROOT, "decomp", "script")

MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]

PLACEHOLDER = re.compile(r"^(sub|j_sub|j_nullsub|nullsub|f)_[0-9a-fA-F]+$")


def is_placeholder(name):
    return bool(PLACEHOLDER.match(name)) or name == "_start"


def code_progress(by_group=False):
    rows = list(csv.DictReader(open(FUNCS, encoding="utf-8")))
    per_mod = {}
    for r in rows:
        m = r["module"]
        d = per_mod.setdefault(m, {"total": 0, "decompiled": 0, "named": 0})
        d["total"] += 1
        if r.get("decomp_name"):
            d["decompiled"] += 1
        if not is_placeholder(r["name"]):
            d["named"] += 1

    tot = {"total": 0, "decompiled": 0, "named": 0}
    for m in MODULES:
        d = per_mod.get(m)
        if not d:
            continue
        for k in tot:
            tot[k] += d[k]
        pct = 100.0 * d["decompiled"] / d["total"] if d["total"] else 0.0
        npct = 100.0 * d["named"] / d["total"] if d["total"] else 0.0
        print("  %-8s %7d funcs   %6.2f%% declared   %6.2f%% named" %
              (m, d["total"], pct, npct))

    pct = 100.0 * tot["decompiled"] / tot["total"] if tot["total"] else 0.0
    npct = 100.0 * tot["named"] / tot["total"] if tot["total"] else 0.0
    print("  %-8s %7d funcs   %6.2f%% declared   %6.2f%% named" %
          ("TOTAL", tot["total"], pct, npct))

    if by_group:
        print()
        counts = {}
        for f in glob.glob(os.path.join(ROOT, "prog", "**", "*.cpp"),
                           recursive=True):
            rel = os.path.relpath(f, os.path.join(ROOT, "prog"))
            parts = rel.split(os.sep)
            if len(parts) >= 2:
                key = os.path.join(parts[0], parts[1])
                counts[key] = counts.get(key, 0) + \
                    len(re.findall(r"^void [A-Za-z_]", open(f, encoding="utf-8").read(), re.M))
        for k in sorted(counts, key=lambda k: -counts[k]):
            print("  %-24s %7d funcs" % (k, counts[k]))
    return tot


def script_progress():
    if not os.path.exists(SCRIPTS):
        print("  no data/scripts.csv (run tools/pawn_emit.py)")
        return
    rows = list(csv.DictReader(open(SCRIPTS, encoding="utf-8")))
    total = len(rows)
    pasm = sum(1 for r in rows if r.get("pasm"))
    pseudo = sum(1 for r in rows if r.get("pseudo_c"))
    total_bytes = sum(int(r["bytes"]) for r in rows if r.get("bytes"))
    print("  %-8s %7d scripts  %6.2f%% disasm  %6.2f%% pseudocode  (%d bytes)" %
          ("Pawn", total,
           100.0 * pasm / total if total else 0,
           100.0 * pseudo / total if total else 0,
           total_bytes))


def main():
    by_group = "--by-group" in sys.argv
    print("Native code (NSO modules)")
    code_progress(by_group)
    print()
    print("Pawn scripts (RomFS amx)")
    script_progress()
    return 0


if __name__ == "__main__":
    sys.exit(main())
