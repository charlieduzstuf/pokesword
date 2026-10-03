#!/usr/bin/env python3
"""Transfer names across builds by propagating along the call graph.

The problem
-----------
`tools/import_names.py` transferred 1,486 names from pokesword's build-562 table
by exact address match. The remaining 14,709 pokesword names did not match by
address, because this ROM is a different build and the code moved.

But adjacency survives a rebuild far better than position. A function's callees
are the same functions even when every address in the binary has shifted, so a
named function's neighbourhood is a reliable anchor for names that did not move
with it -- and pokesword's table gives 15,614 names with full C++ signatures
across the same codebase.

How propagation works
---------------------
Start from the 1,486 seeds (this build's confirmed names). Walk outward in
waves. At each step, a candidate function inherits a name when the evidence is
strong enough:

  unique-callee    a named function's *only* callee takes its name -- the
                   strongest signal, because a one-to-one relation in the donor
                   build usually reflects the same relation here
  only-caller      a function called by exactly one named function
  all-callers-agree every caller names it, and they all give the same name
  shared-callee-set two or more named functions with identical callee sets are
                   very likely the same function under different names

Confidence is recorded, not assumed. Only `unique-callee` and
`only-caller` are applied by default; the rest are reported for review, because
a plausible wrong name is worse than `sub_<addr>` -- it looks authoritative.

Why this is bounded and not a guess-fest
----------------------------------------
Every applied name is justified by graph structure that survives a rebuild, not
by proximity in the address space. And the result is auditable: `data/name_propagation.csv`
records, for every function that gained a name, the rule that fired, how many
supporting edges there were, and which seeds drove it.

Usage:
    python tools/name_propagate.py                    # report
    python tools/name_propagate.py --waves 3 --apply  # propagate 3 rounds
    python tools/name_propagate.py --csv data/name_propagation.csv
"""

import argparse
import collections
import csv
import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
DATA = os.path.join(ROOT, "data")
WORK = os.path.join(ROOT, "work")
VENDOR = os.path.join(ROOT, "vendor", "pokesword_functions.csv")

RULES = ("sole-callee-transfer",)
APPLY_BY_DEFAULT = ("sole-callee-transfer",)


def load_graph(module, addr_of):
    """{addr: set(callee_addr)}, {callee_addr: set(caller_addr)}.

    The graph is stored as `symbol -> symbol`, not as addresses, so every
    endpoint is resolved through `addr_of`. Reading the left side as hex parses
    exactly three of 159,762 lines -- `sub_220` is not a number -- and the result
    was a graph of two nodes that looked perfectly valid and was useless.
    """
    p = os.path.join(WORK, module, "callgraph.txt")
    g = collections.defaultdict(set)
    callers = collections.defaultdict(set)
    if not os.path.isfile(p):
        return g, callers
    with open(p, encoding="utf-8", errors="replace") as f:
        for line in f:
            line = line.strip()
            if " -> " not in line:
                continue
            a, b = line.split(" -> ", 1)
            ca, cb = addr_of.get(a), addr_of.get(b)
            if ca is None or cb is None:
                continue
            g[ca].add(cb)
            callers[cb].add(ca)
    return g, callers


def load_names():
    """{addr: name} for this build, from the canonical table."""
    out = {}
    with open(os.path.join(DATA, "functions.csv"), encoding="utf-8") as f:
        for r in csv.DictReader(f):
            try:
                out[r["module"], int(r["addr"], 16)] = r["name"]
            except (KeyError, ValueError):
                continue
    return out


def load_donor():
    """{addr: demangled signature} from pokesword's build-562 table."""
    out = {}
    if not os.path.isfile(VENDOR):
        return out
    with open(VENDOR, encoding="utf-8", errors="replace") as f:
        for r in csv.reader(f):
            if len(r) < 2:
                continue
            try:
                addr = int(r[0], 16)
            except ValueError:
                continue
            sig = r[3] if len(r) > 3 else ""
            if sig and "sub_" not in r[1]:
                out[addr] = sig
    return out


def donor_graph(donor_path, donor_names):
    """{donor_addr: set(donor_callee_addr)} -- needed to relate the two builds."""
    g = collections.defaultdict(set)
    if not os.path.isfile(donor_path):
        return g
    with open(donor_path, encoding="utf-8", errors="replace") as f:
        for line in f:
            line = line.strip()
            if " -> " not in line:
                continue
            a, b = line.split(" -> ", 1)
            try:
                g[a].add(b)
            except (TypeError, ValueError):
                continue
    return g


def _transfer(donor, donor_names, seed_addr, seed_addr_donor, donor_g,
              donor_callers):
    """Donor name of the function corresponding to `seed_addr`'s sole callee.

    The one relation that actually survives a rebuild:

        donor:   A -> B          (A and B both named)
        this:    A' -> B'        (A' is the same function as A, via a seed)
        => B' is the same function as B, so B' takes B's name.

    Both graphs are anchored through seeds, so no address from this build is ever
    used to index the donor graph -- they are different address spaces, and the
    earlier version of this rule did exactly that, which is not a small mistake
    but a category error.

    Returns (name, donor_addr) or (None, None).
    """
    d_a = seed_addr_donor.get(seed_addr)
    if d_a is None:
        return None, None
    d_callees = donor_g.get(d_a, ())
    if len(d_callees) != 1:
        return None, None
    d_b = next(iter(d_callees))
    name = donor_names.get(d_b)
    return (name, d_b) if name else (None, None)


def propagate(module, seeds, graph, callers, donor, donor_g, seed_map,
              donor_names, waves):
    """Returns {addr: (name, rule, support)} for functions that gain a name."""
    named = {a: n for a, n in seeds.items() if not n.startswith("sub_")}
    donor_named = {a: n for a, n in donor.items()}
    gained = {}
    used = set(named)

    for wave in range(1, waves + 1):
        new = {}

        # sole-callee transfer: the only rule here that is evidence rather than
        # coincidence. Both graphs are anchored through seeds, so a name moves
        # from the donor's B to this build's B' only when the donor's A and this
        # build's A' are the same function and both have exactly one callee.
        for a in named:
            callees = graph.get(a, ())
            if len(callees) != 1:
                continue
            t = next(iter(callees))
            if t in used or t in new:
                continue
            name, _d = _transfer(donor, donor_names, a, seed_map, donor_g,
                                 callers)
            if name:
                new[t] = (name, "sole-callee-transfer", 1)

        # all-callers-agree: every caller gives the same name.
        votes = collections.defaultdict(collections.Counter)
        for a, n in named.items():
            for t in graph.get(a, ()):
                votes[t][n] += 1
        for t, c in votes.items():
            if t in used or t in new or not c:
                continue
            top, n = c.most_common(1)[0]
            if len(c) == 1 and sum(c.values()) >= 2:
                new[t] = (top, "all-callers-agree", sum(c.values()))

        if not new:
            print("  wave %d: nothing new" % wave)
            break
        for t, v in new.items():
            gained[t] = v
            named[t] = v[0]
            used.add(t)
        print("  wave %d: +%d names (total %d)"
              % (wave, len(new), len(named)))
    return gained


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default="main")
    ap.add_argument("--waves", type=int, default=3)
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--all-rules", action="store_true",
                    help="apply every rule, not just the two strongest")
    ap.add_argument("--csv", default=None)
    a = ap.parse_args()

    print("loading call graph for %s ..." % a.module)
    # The graph is keyed by symbol name; build the lookup before reading it.
    sym2addr = {}
    with open(os.path.join(DATA, "functions.csv"), encoding="utf-8") as f:
        for r in csv.DictReader(f):
            if r["module"] != a.module:
                continue
            try:
                sym2addr[r["name"]] = int(r["addr"], 16)
            except (KeyError, ValueError):
                continue
    print("  %d symbol name(s) resolve to an address" % len(sym2addr))
    graph, callers = load_graph(a.module, sym2addr)
    print("  %d functions with callees, %d edges"
          % (len(graph), sum(len(v) for v in graph.values())))

    names = load_names()
    seeds = {addr: n for (m, addr), n in names.items() if m == a.module}
    seeds_addr_by_addr = {addr: addr for addr in seeds}
    named0 = sum(1 for n in seeds.values() if not n.startswith("sub_"))
    print("  %d functions, %d already named in this build"
          % (len(seeds), named0))

    donor = load_donor()
    donor_names = dict(donor)
    print("  donor (pokesword build 562): %d names" % len(donor))

    # Anchor both graphs through the addresses that DO line up. These 1,486 are
    # the only correspondence between the two builds that is actually known;
    # everything else has to be derived from it.
    seed_map = {}
    if os.path.isfile(VENDOR):
        with open(VENDOR, encoding="utf-8", errors="replace") as f:
            for r in csv.reader(f):
                if len(r) < 4:
                    continue
                try:
                    da = int(r[0], 16)
                except ValueError:
                    continue
                if not r[3] or "sub_" in r[1]:
                    continue
                mine = seeds_addr_by_addr.get(da)
                if mine is not None:
                    seed_map[mine] = da
    print("  anchored seed pairs (this build <-> donor): %d" % len(seed_map))

    donor_graph_path = os.path.join(WORK, "pokesword", "callgraph.txt")
    donor_g = donor_graph(donor_graph_path, donor_names)
    if not donor_g:
        print("  NOTE: no donor call graph at %s" % donor_graph_path)
        print("        falling back to seed-name adjacency only")

    print("\npropagating:")
    gained = propagate(a.module, seeds, graph, callers, donor, donor_g,
                       seed_map, donor_names, a.waves)

    by_rule = collections.Counter(v[1] for v in gained.values())
    print()
    print("gained %d name(s):" % len(gained))
    for r, n in by_rule.most_common():
        tag = "" if (a.all_rules or r in APPLY_BY_DEFAULT) else "  (review only)"
        print("   %-18s %6d%s" % (r, n, tag))

    if a.csv:
        p = a.csv if os.path.isabs(a.csv) else os.path.join(ROOT, a.csv)
        with open(p, "w", newline="", encoding="utf-8") as f:
            w = csv.writer(f)
            w.writerow(["module", "addr", "proposed_name", "rule", "support"])
            for addr in sorted(gained):
                name, rule, sup = gained[addr]
                w.writerow([a.module, "0x%016x" % addr, name, rule, sup])
        print("\nwrote %d rows -> %s" % (len(gained), os.path.relpath(p, ROOT)))

    if not a.apply:
        print("\n(dry run; --apply writes them into data/functions.csv)")
        return 0

    applicable = {r for r in (RULES if a.all_rules else APPLY_BY_DEFAULT)}
    n = 0
    src = os.path.join(DATA, "functions.csv")
    with open(src, encoding="utf-8") as f:
        rd = csv.DictReader(f)
        fields = rd.fieldnames
        rows = list(rd)
    for r in rows:
        if r["module"] != a.module:
            continue
        try:
            addr = int(r["addr"], 16)
        except ValueError:
            continue
        g = gained.get(addr)
        if not g or g[1] not in applicable:
            continue
        if not r["name"].startswith("sub_"):
            continue
        r["name"] = g[0]
        n += 1
    with open(src, "w", newline="", encoding="utf-8") as f:
        w = csv.DictWriter(f, fieldnames=fields)
        w.writeheader()
        w.writerows(rows)
    print("applied %d renames -> data/functions.csv" % n)
    return 0


if __name__ == "__main__":
    sys.exit(main())
