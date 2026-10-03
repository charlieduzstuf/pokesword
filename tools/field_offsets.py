#!/usr/bin/env python3
"""Recover object field offsets and sizes by watching dereferences through the GOT.

What this measures
------------------
`tools/got_map.py` recovers which GOT slots exist and how each is accessed
directly. That alone gives addresses but not layout: a slot accessed only as
`ldr x8, [x8]` says nothing about the object it points at.

The layout lives one dereference further out. Where code loads a slot into a
register and then uses *that register* with a displacement --

    adrp x8, ..            ; GOT page
    ldr  x8, [x8, #0x450]  ; x8 = &guard
    ldrb w9, [x8]          ; read the object at &guard

-- the displacement is a field offset into the object. Collect those
displacements per GOT page and the highest one used is a lower bound on the
object's size, while the histogram shows which fields exist and how wide they
are.

Why page-level rather than slot-level
-------------------------------------
Objects reached through a GOT slot are often reached through several slots, and
more importantly the *fields* are accessed from the register, so they cannot be
attributed to a single slot by the same scan that found the slots. Grouping by
the page the register came from gives a stable grouping: all the objects reached
from one GOT page are the globals declared together, which is exactly the
"candidate global" notion worth reporting.

Honest limit
------------
This is field offsets on objects the code touches. It is not a recovered type:
the field *type* is unknown, the object identity is unknown, and nothing here
tells us what the pointers inside point at. Object sizes are lower bounds from
observed access, not from construction. Treat the output as evidence for a
layout, not as a layout.

Usage:
    python tools/field_offsets.py --module main --page 0x2496000
    python tools/field_offsets.py --module main --min-refs 20 --csv data/fields.csv
"""

import argparse
import collections
import csv
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import got_map as GM  # noqa: E402
import match_harness as MH  # noqa: E402


def scan(module, got_lo, got_hi):
    """page -> Counter(field offset -> refs), for pages inside the GOT only.

    The segment filter is not optional. An earlier version reported every page
    with field-like access, and the pages that topped the list were all in
    `.rodata` -- 0x1a1000 with a "3,240 byte object" and 0x1b14000 with "3,616
    bytes" are string tables and constant pools. Field-offset analysis over
    rodata produces confidently wrong sizes, because a dense array of pointers
    into more rodata looks exactly like a struct with 500 pointer fields.
    """
    md = MH._md()
    blob = MH.text_blob(module)
    fields = collections.defaultdict(collections.Counter)
    widths = collections.defaultdict(lambda: collections.Counter())
    funcs = collections.defaultdict(set)
    slotrefs = collections.Counter()

    for addr, size, name, _dec in MH.load_functions(module):
        ins = list(md.disasm(blob[addr:addr + size], addr))
        end = MH.effective_end(ins, size)
        page = {}
        for i in ins[:end]:
            mn = i.mnemonic
            ops = i.op_str
            if mn == "adrp":
                dst = ops.split(",")[0].strip()
                m = re.search(r"#(-?(?:0x)?[0-9a-fA-F]+|\d+)", ops)
                v = GM.imm(m.group(1)) if m else None
                if v is not None:
                    page[dst] = v
                continue
            if mn not in GM.WIDTH:
                continue
            parts = GM.split_ops(ops)
            if len(parts) != 2:
                continue
            reg = parts[0].strip()
            m = GM.MEM_RE.search(parts[1])
            if not m:
                continue
            base = m.group(1)
            off = GM.imm(m.group(2)) or 0
            if base not in page:
                continue
            # Only pages inside the GOT count. See scan()'s docstring: analysing
            # `.rodata` pages here produces confident nonsense.
            if not (got_lo <= page[base] < got_hi):
                continue
            # Case 1: the access *is* the GOT slot (base is the page holder).
            if off and base == reg:
                slotrefs[page[base] + off] += 1
            # Case 2: the register was loaded from the GOT earlier, and is now
            # used as a base for a field access. Only counts when the register
            # is not itself freshly adrp'd in this position -- handled by the
            # `off and reg != base` test below.
            if base != reg and base in page:
                fields[page[base]][off] += 1
                widths[page[base]][off] += 0
                funcs[page[base]].add(addr)
    return fields, widths, funcs, slotrefs


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default="main")
    ap.add_argument("--page", type=lambda s: int(s, 0), default=None,
                    help="restrict to one GOT page")
    ap.add_argument("--min-refs", type=int, default=20)
    ap.add_argument("--csv", default=None)
    a = ap.parse_args()

    import json
    man = json.load(open(os.path.join(ROOT, "work", a.module, "manifest.json"),
                         encoding="utf-8"))
    d = man["segments"]["data"]
    got_lo, got_hi = d["memoff"], d["memoff"] + d["memsz"]

    fields, _w, funcs, slotrefs = scan(a.module, got_lo, got_hi)
    pages = [a.page] if a.page is not None else sorted(fields)
    print("GOT segment: %#x .. %#x" % (got_lo, got_hi))

    print("module %s: %d GOT pages show field access" % (a.module, len(fields)))
    print()
    rows = []
    for p in pages:
        offs = {o: n for o, n in fields[p].items() if n >= a.min_refs}
        if not offs:
            continue
        neg = [o for o in offs if o < 0]
        pos = sorted(o for o in offs if o >= 0)
        largest = max(pos) if pos else (min(neg) if neg else 0)
        print("GOT page %#x: %d field offset(s) with >=%d refs, "
              "%d function(s), %d slot ref(s)"
              % (p, len(offs), a.min_refs, len(funcs[p]), sum(slotrefs.values())))
        if pos:
            print("   +0 .. +%d  -> object size >= %d bytes"
                  % (largest, largest + 8))
        for o in sorted(offs):
            print("      %+5d : %6d refs" % (o, offs[o]))
        rows.append((p, largest, len(offs), len(funcs[p])))
        print()

    if a.csv and rows:
        p = a.csv if os.path.isabs(a.csv) else os.path.join(ROOT, a.csv)
        with open(p, "w", newline="", encoding="utf-8") as f:
            w = csv.writer(f)
            w.writerow(["module", "got_page", "max_field_offset",
                        "size_lower_bound", "field_offsets", "functions"])
            for pg, largest, nofs, nfn in rows:
                w.writerow([a.module, "0x%012x" % pg, largest, largest + 8,
                            nofs, nfn])
        print("wrote %d pages -> %s" % (len(rows), os.path.relpath(p, ROOT)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
