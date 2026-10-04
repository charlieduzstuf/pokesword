#!/usr/bin/env python3
"""Remove duplicate addresses from the match registry, keeping one record each.

`tools/audit.py` checks that no address appears twice in
`data/matched_<mod>.json`. Two did: `main` 0x540950 and `main` 0x718f00, both
`shape: straight-line`, byte-identical in every field.

They came from a filter/write gap rather than from a bad match. Two writers touch
the registry -- `auto_match.py` (which merges) and `sl_register.py` (which
extends) -- and each filtered candidates against a snapshot read at the *start*
of its run while writing against the file re-read at the *end*. Anything written
in between was invisible to the filter and visible to the writer. Both now
re-check against the file as it is at write time, so this should not recur; this
tool exists to clean up what already happened and to make the cleanup auditable.

## Why it refuses to guess

A duplicate address is only harmless if the records are *identical*. Two records
for one address that disagree about `sig` or `src` is not a duplicate, it is two
claims about one body, and silently keeping either one would hide the conflict.
So this only drops a record whose every field matches a record already kept, and
reports -- without writing -- any address whose duplicates differ.

Usage:
    python tools/dedupe_registry.py            # report only, exit 1 if dirty
    python tools/dedupe_registry.py --apply    # rewrite the registry files
    python tools/dedupe_registry.py --module main
"""

import argparse
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MODULES = ["main", "sdk", "subsdk0", "subsdk1"]


def key(rec):
    return rec.get("addr")


def scan(blob):
    """(exact duplicates, conflicting duplicates) for one registry blob.

    `exact` are addresses with more than one record where every extra record
    matches the first in all fields -- safe to drop. `conflict` are addresses
    whose records disagree; those are reported and never dropped.
    """
    groups = {}
    for rec in blob.get("matched", []):
        groups.setdefault(key(rec), []).append(rec)

    exact, conflict = [], []
    for k, recs in groups.items():
        if k is None or len(recs) < 2:
            continue
        first = recs[0]
        if all(all(r.get(f) == first.get(f) for f in set(first) | set(r))
               for r in recs[1:]):
            exact.append((k, len(recs) - 1))
        else:
            conflict.append((k, len(recs)))
    return exact, conflict


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", action="append", default=None)
    ap.add_argument("--apply", action="store_true",
                    help="rewrite the registry files (default is report only)")
    a = ap.parse_args()

    mods = a.module or MODULES
    total_exact = total_conflict = 0
    dirty = False
    for mod in mods:
        p = os.path.join(ROOT, "data", "matched_%s.json" % mod)
        if not os.path.isfile(p):
            print("  %-8s (no registry)" % mod)
            continue
        blob = json.load(open(p, encoding="utf-8"))
        recs = blob.get("matched", [])
        exact, conflict = scan(blob)
        total_exact += len(exact)
        total_conflict += len(conflict)
        if exact or conflict:
            dirty = True
        print("  %-8s %6d record(s), %d exact duplicate(s), %d conflicting"
              % (mod, len(recs), len(exact), len(conflict)))
        for k, n in exact:
            print("      %#-12x registered %d extra time(s) -- identical"
                  % (k, n))
        for k, n in conflict:
            print("      %#-12x registered %d times and they DISAGREE --"
                  " not touched" % (k, n))

    print()
    if total_conflict:
        print("%d conflicting duplicate(s). Left alone on purpose: picking one "
              "would hide the disagreement. Inspect them by hand." %
              total_conflict)
    if not dirty:
        print("registry is clean: no duplicate addresses")
        return 0
    if not a.apply:
        print("%d exact duplicate(s) would be removed. Re-run with --apply."
              % total_exact)
        return 1

    for mod in mods:
        p = os.path.join(ROOT, "data", "matched_%s.json" % mod)
        if not os.path.isfile(p):
            continue
        blob = json.load(open(p, encoding="utf-8"))
        recs = blob.get("matched", [])
        seen = set()
        out = []
        for r in recs:
            k = key(r)
            if k is not None and k in seen:
                continue
            if k is not None:
                seen.add(k)
            out.append(r)
        if len(out) == len(recs):
            continue
        blob["matched"] = out
        with open(p, "w", encoding="utf-8") as f:
            json.dump(blob, f, indent=1)
        print("  %-8s %d -> %d record(s)" % (mod, len(recs), len(out)))
    print("removed %d exact duplicate(s)" % total_exact)
    return 0


if __name__ == "__main__":
    sys.exit(main())
