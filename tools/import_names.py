#!/usr/bin/env python3
"""Transfer names from pokesword's build-562 symbol table onto this ROM's v0 build.

pokesword ships `data/functions.csv` with 15,614 real names -- full C++
signatures, namespaces, class scopes -- recovered from build 562 by hand. This
ROM is v0, a different build, so most addresses do not line up. But:

  * 905 of the named addresses exist verbatim in this build's `main`, and those
    names can be adopted directly.
  * The remaining 14,709 still yield the game's namespace and class taxonomy,
    which is what `tools/decomp_project.py`'s classifier guesses at today.

Only the address-aligned subset is written into `data/functions.csv`. Nothing
here infers a name: a function is renamed only when a real symbol exists at that
exact address. Everything else is left alone, because a guessed name is worse
than `sub_<addr>` -- it looks authoritative and is not.

The taxonomy is emitted to `data/pokesword_taxonomy.csv` for the classifier and
for a human picking functions to decompile.

Usage:
    python tools/import_names.py            # report only
    python tools/import_names.py --apply    # write the names into functions.csv
"""

import argparse
import collections
import csv
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DATA = os.path.join(ROOT, "data")
VENDOR = os.path.join(ROOT, "vendor", "pokesword_functions.csv")
MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]


def load_vendor():
    """[(addr, demangled_name, decomp_name)] from pokesword's table."""
    out = []
    p = VENDOR
    if not os.path.isfile(p):
        return out
    for r in csv.reader(open(p, encoding="utf-8", errors="replace")):
        if len(r) < 3:
            continue
        try:
            addr = int(r[0], 16)
        except ValueError:
            continue
        sig = r[3] if len(r) > 3 else ""
        demangled = r[1]
        # A placeholder carries no information.
        if not sig or "sub_" in demangled:
            out.append((addr, demangled, sig, False))
            continue
        out.append((addr, demangled, sig, True))
    return out


def load_mine():
    """{(module, addr): row} from this project's canonical table."""
    out = {}
    p = os.path.join(DATA, "functions.csv")
    with open(p, encoding="utf-8") as f:
        for r in csv.DictReader(f):
            try:
                out[(r["module"], int(r["addr"], 16))] = r
            except (KeyError, ValueError):
                continue
    return out


def split_taxonomy(named):
    """Namespace -> count, and class -> count, from the full name set.

    Uses every named function, not just the address-aligned ones, because the
    taxonomy describes the codebase and is build-independent even though the
    addresses are not.
    """
    ns = collections.Counter()
    cls = collections.Counter()
    for _addr, _dem, sig, _ok in named:
        # Trim a leading "ret " / "static " style prefix if present.
        s = sig
        m = re.search(r"(?:^|::)((?:[A-Za-z_]\w*::)+)([A-Z]\w*)", s)
        if not m:
            parts = re.split(r"::", s)
            if len(parts) > 1 and parts[0]:
                ns[parts[0]] += 1
            continue
        scope = m.group(1)
        ns[scope.split("::")[0]] += 1
        cls[scope + m.group(2)] += 1
    return ns, cls


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()

    vendor = load_vendor()
    if not vendor:
        print("no vendor/pokesword_functions.csv -- run the fetch first")
        return 1
    named = [v for v in vendor if v[3]]
    mine = load_mine()

    by_addr = {}
    for addr, dem, sig, ok in vendor:
        if ok:
            by_addr.setdefault(addr, (dem, sig))

    transferred = collections.Counter()
    pairs = []
    for (mod, addr), row in mine.items():
        hit = by_addr.get(addr)
        if not hit:
            continue
        # Only adopt where we currently have a placeholder.
        if not row["name"].startswith("sub_"):
            continue
        dem, sig = hit
        pairs.append((mod, addr, row["name"], dem, sig))
        transferred[mod] += 1

    total = sum(transferred.values())
    print("pokesword entries          : %d (%d with real names)"
          % (len(vendor), len(named)))
    print("address-aligned renames    : %d" % total)
    for m in MODULES:
        if transferred[m]:
            print("   %-9s %d" % (m, transferred[m]))

    ns, cls = split_taxonomy(named)
    print()
    print("namespace taxonomy (from all %d names):" % len(named))
    for k, v in ns.most_common(20):
        print("   %-26s %5d" % (k, v))
    print()
    print("most-named classes:")
    for k, v in cls.most_common(15):
        print("   %-52s %4d" % (k, v))

    tax = os.path.join(DATA, "pokesword_taxonomy.csv")
    with open(tax, "w", newline="", encoding="utf-8") as f:
        w = csv.writer(f)
        w.writerow(["kind", "name", "named_functions"])
        for k, v in ns.most_common():
            w.writerow(["namespace", k, v])
        for k, v in cls.most_common():
            w.writerow(["class", k, v])
    print("\ntaxonomy -> %s" % os.path.relpath(tax, ROOT))

    if not a.apply:
        print("\n(dry run; pass --apply to write the names into data/functions.csv)")
        return 0

    if not pairs:
        print("\nnothing to transfer")
        return 0

    # Rewrite the canonical table with the adopted names.
    src = os.path.join(DATA, "functions.csv")
    rows = []
    with open(src, encoding="utf-8") as f:
        rd = csv.DictReader(f)
        fields = rd.fieldnames
        for r in rd:
            rows.append(r)
    rename = {(m, a): (dem, sig) for m, a, _old, dem, sig in pairs}
    n = 0
    for r in rows:
        try:
            key = (r["module"], int(r["addr"], 16))
        except (KeyError, ValueError):
            continue
        hit = rename.get(key)
        if hit:
            r["name"] = hit[0]
            n += 1
    with open(src, "w", newline="", encoding="utf-8") as f:
        w = csv.DictWriter(f, fieldnames=fields)
        w.writeheader()
        w.writerows(rows)
    print("applied %d renames -> data/functions.csv" % n)

    # Keep the per-module tables in step, since decomp_project writes those.
    for mod in MODULES:
        p = os.path.join(DATA, "functions_%s.csv" % mod)
        if not os.path.isfile(p):
            continue
        rows = list(csv.reader(open(p, encoding="utf-8")))
        changed = 0
        out = []
        for r in rows:
            if len(r) >= 2:
                try:
                    a = int(r[0], 16)
                except ValueError:
                    out.append(r)
                    continue
                hit = rename.get((mod, a))
                if hit:
                    r[1] = hit[0]
                    changed += 1
            out.append(r)
        with open(p, "w", newline="", encoding="utf-8") as f:
            csv.writer(f).writerows(out)
        if changed:
            print("   %-9s %d names updated" % (mod, changed))
    return 0


if __name__ == "__main__":
    sys.exit(main())