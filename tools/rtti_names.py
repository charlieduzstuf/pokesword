#!/usr/bin/env python3
"""Mine Itanium RTTI type names out of the recovered string tables.

Game Freak's "orion" build keeps C++ RTTI, so the rodata segment contains
Itanium-mangled type_info names (`N4main3BagE`, `N5gfl36StringE`, ...). These
are the game's real class hierarchy: namespaces, classes, and the nesting
between them, recovered exactly rather than guessed.

The hierarchy is the most reliable signal available for organising a decomp
project, so this feeds:
  * prog/<group>/<sub>/ directory layout (via data/rtti_classes.csv)
  * class -> namespace mapping used by tools/decomp_project.py when grouping
    functions whose recovered name carries a `::` scope

Usage:
    python tools/rtti_names.py            # print a summary
    python tools/rtti_names.py --write    # also emit data/rtti_classes.csv
"""

import csv
import os
import re
import sys
from collections import Counter, defaultdict

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
WORK = os.path.join(ROOT, "work")
DATA = os.path.join(ROOT, "data")
MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]

# Itanium <type> productions we care about. Only the encoded-name grammar is
# needed: <name> is <source-name> (length-prefixed) or <nested-name>
# (N <prefix> <unqualified-name> E).
MANGLED = re.compile(r"^N\d+[A-Za-z_0-9]+E$|^N\d+[A-Za-z_0-9]+E[N\d][A-Za-z_0-9]+E")


def decode_length_prefixed(s):
    """Split a sequence of <len><identifier> pairs."""
    out, i = [], 0
    while i < len(s):
        j = i
        while j < len(s) and s[j].isdigit():
            j += 1
        if j == i or j >= len(s):
            return None
        n = int(s[i:j])
        ident = s[j:j + n]
        if len(ident) != n:
            return None
        out.append(ident)
        i = j + n
    return out or None


def parse_type_name(s):
    """`N4main3BagE` -> ['main', 'Bag'].  Returns None if not a nested name."""
    if not s.startswith("N"):
        return None
    rest = s[1:]
    parts, i = [], 0
    while i < len(rest):
        if rest[i] == "E":
            return parts if parts else None
        j = i
        while j < len(rest) and rest[j].isdigit():
            j += 1
        if j == i:
            return None
        n = int(rest[i:j])
        ident = rest[j:j + n]
        if len(ident) != n:
            return None
        parts.append(ident)
        i = j + n
    return parts or None


def collect():
    """-> list of (module, rodata_addr, mangled, [scope components])."""
    found = []
    for mod in MODULES:
        p = os.path.join(WORK, mod, "strings.txt")
        if not os.path.exists(p):
            continue
        with open(p, encoding="utf-8", errors="replace") as f:
            for line in f:
                line = line.rstrip("\n")
                if not line:
                    continue
                addr, _, s = line.partition(" ")
                if not MANGLED.match(s):
                    continue
                scope = parse_type_name(s)
                if not scope:
                    continue
                found.append((mod, addr, s, scope))
    return found


def summarise(found):
    by_mod = Counter(m for m, _a, _s, _sc in found)
    print("RTTI type_info names: %d" % len(found))
    for m in MODULES:
        if by_mod.get(m):
            print("  %-8s %5d" % (m, by_mod[m]))

    # Namespace histogram: everything except a trailing capitalised class.
    ns = Counter()
    for _m, _a, _s, scope in found:
        if len(scope) >= 2:
            ns["::".join(scope[:-1])] += 1
        elif scope:
            ns["(global)"] += 1

    print("\ntop namespaces:")
    for name, c in ns.most_common(25):
        print("  %-46s %4d" % (name, c))

    # Distinct classes (last component) grouped by owning namespace.
    classes = defaultdict(set)
    for _m, _a, _s, scope in found:
        if len(scope) >= 2:
            classes["::".join(scope[:-1])].add(scope[-1])
    print("\nlargest namespaces by class count:")
    for name, cs in sorted(classes.items(), key=lambda kv: -len(kv[1]))[:15]:
        print("  %-46s %4d classes" % (name, len(cs)))
    return ns, classes


def write_csv(found):
    os.makedirs(DATA, exist_ok=True)
    out = os.path.join(DATA, "rtti_classes.csv")
    with open(out, "w", newline="", encoding="utf-8") as f:
        w = csv.writer(f)
        w.writerow(["module", "addr", "mangled", "scope", "namespace", "class"])
        for mod, addr, s, scope in found:
            ns = "::".join(scope[:-1]) if len(scope) >= 2 else ""
            cls = scope[-1] if scope else ""
            w.writerow([mod, "0x" + addr, s, "::".join(scope), ns, cls])
    print("\nwrote %s (%d rows)" % (os.path.relpath(out, ROOT), len(found)))
    return out


def main():
    found = collect()
    if not found:
        print("no RTTI type names recovered")
        return 1
    summarise(found)
    if "--write" in sys.argv:
        write_csv(found)
    return 0


if __name__ == "__main__":
    sys.exit(main())
