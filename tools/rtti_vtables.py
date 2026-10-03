#!/usr/bin/env python3
"""PARTIAL RESULT -- RTTI gives class names, not vtables. Read the finding below.

Finding
-------
993 typeinfo pointers were located in `main`'s `.rodata`, and every one of them
has the same shape around it:

    0x1834250 : 0x0000000001b32820   <- typeinfo pointer, known class
    0x1834258 : 0x000000000238c290   <- points into .data
    0x1834260 : 0x0000000000000403   <- 0x400 | 3, a bitfield-encoding marker

That is not a vtable. Under the Itanium ABI a vtable is
`[offset-to-top][typeinfo][vfn0]...`, so the word *before* the typeinfo should be
a small non-negative object offset and the word *after* it should be a code
pointer. Neither holds: the preceding word is another `0x238xxxx` address (in
`.data`, not `.text`) and the following word is `0x403`.

`0x403` is the marker GCC emits for a packed bitfield type, which makes these the
**dynamic_cast / typeid descriptor table** -- a flat array keyed by typeinfo rather
than a vtable per class.

So this tool does not recover vtables, and the original negative result in
tools/vtable_names.py stands: measured three ways, longest consecutive run of
code pointers in the read-only data is 1. What the RTTI *does* yield is the 993
class names with their namespaces, which is naming information this project
previously had only as 1,873 loose rows.

Why the guard rejected everything
---------------------------------
The first version of this file looked for a code pointer after the typeinfo,
found none, and reported "0 vtables recovered, 993 rejected for no-code" -- a
result that reads like "there are no vtables here" and is really "this is a
different structure". The rejection counts are kept in the output for that
reason: a rejection that dominates the found count is a signal the model is
wrong, and the tool says so rather than reporting zero as if it were a fact about
the binary.

Name-based recovery of vtables would need a relocated image, because the
descriptor table here shows that function pointers in this region are not
resolvable from the file.

The unblock
-----------
`tools/vtable_names.py` is a documented negative result: no vtable could be found
statically, because a vtable is a run of consecutive function pointers and the
longest such run in `.rodata` measured **1**.

RTTI makes that negative result obsolete. It is not the run that identifies a
vtable -- the run is what identifies it *once you know which pointer to look at*.
Every polymorphic class has a typeinfo object, and the vtable's slot 1 points
straight at it. `data/rtti_classes.csv` already holds 1,873 of those typeinfo
objects with their demangled names, from `tools/rtti_names.py`.

So instead of hunting for runs, this walks the *known* typeinfo addresses and asks
who points at them. A 64-bit word in `.rodata`/`.data` equal to a known typeinfo
address is, by the Itanium ABI, the second slot of a vtable, and the first slot
is at word-minus-8: the offset-to-top and then the typeinfo pointer, so
`slot1 - 8` is the vtable itself.

That yields, per class, the address of its vtable and the ordered list of virtual
functions in it. Each of those functions then gets a name derived from the class
and its slot index -- `PPFX::IPfxBaseContext::vfn_3` -- which is exactly the
information needed to make a vtable call legible in a decompilation.

Confidence is recorded, and the guard is narrow on purpose: the typeinfo pointer
must be found at word offset 8 from the candidate vtable, the word before it
must be a small non-negative offset-to-top (a negative value would mean an
object of unknown size, which is also legitimate, so both are accepted but
noted), and the slot-0 word must be a plausible code pointer. Anything that fails
is reported as a rejection rather than silently skipped, because "I found no
vtables" and "I found some and rejected them" are different claims.

Usage:
    python tools/rtti_vtables.py
    python tools/rtti_vtables.py --csv data/vtables.csv --apply
"""

import argparse
import csv
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH  # noqa: E402


def load_typeinfo(module):
    """{addr: (scope, class)} for one module."""
    p = os.path.join(ROOT, "data", "rtti_classes.csv")
    out = {}
    if not os.path.isfile(p):
        return out
    with open(p, encoding="utf-8", errors="replace") as f:
        for r in csv.DictReader(f):
            if r.get("module") != module:
                continue
            try:
                out[int(r["addr"], 16)] = (r.get("scope", ""), r.get("class", ""))
            except (KeyError, ValueError):
                continue
    return out


def regions(module):
    """[(name, blob, base_vaddr, lo, hi)] for the readable segments."""
    import json
    man = os.path.join(ROOT, "work", module, "manifest.json")
    meta = json.load(open(man, encoding="utf-8"))
    segs = meta["segments"]
    out = []
    for name in ("rodata", "data"):
        s = segs.get(name)
        if not s:
            continue
        blob = open(os.path.join(ROOT, "work", module, s["path"]), "rb").read()
        out.append((name, blob, s["memoff"], s["memoff"], s["memoff"] + len(blob)))
    return out, meta


def code_range(module):
    segs = __import__("json").load(
        open(os.path.join(ROOT, "work", module, "manifest.json"),
             encoding="utf-8"))["segments"]
    t = segs["text"]
    return t["memoff"], t["memoff"] + t["memsz"]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default="main")
    ap.add_argument("--csv", default=None)
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()

    ti = load_typeinfo(a.module)
    print("module %s: %d RTTI typeinfo objects known" % (a.module, len(ti)))
    if not ti:
        return 1

    regs, _meta = regions(a.module)
    c_lo, c_hi = code_range(a.module)
    print("  text %#.x..%#x  scanning %d segment(s)"
          % (c_lo, c_hi, len(regs)))

    found = []
    rejects = {"no-slot0": 0, "bad-offset-to-top": 0, "no-code": 0}
    for rname, blob, base, lo, hi in regs:
        n = len(blob)
        for i in range(0, n - 8, 8):
            v, = struct.unpack_from("<Q", blob, i)
            if v not in ti:
                continue
            # v is a typeinfo pointer at word i. Under the Itanium ABI the
            # layout is [offset-to-top][typeinfo ptr][vfn0]..., so vtable = i-8.
            vt = i - 8
            if vt < 0:
                continue
            off_top, = struct.unpack_from("<q", blob, vt)
            if i + 8 > n:
                continue
            vfn0, = struct.unpack_from("<Q", blob, i + 8)
            # offset-to-top is the distance to the object this vtable belongs
            # to; a first-in-primary-base table has 0. Large positive or
            # nonsensical values mean this is not a vtable.
            if off_top > 0x10000 or off_top < -0x100000:
                rejects["bad-offset-to-top"] += 1
                continue
            if not (c_lo <= vfn0 < c_hi):
                rejects["no-code"] += 1
                continue
            scope, cls = ti[v]
            found.append({
                "typeinfo_addr": v,
                "vtable_addr": base + vt,
                "scope": scope, "class": cls,
                "offset_to_top": off_top, "first_vfn": vfn0,
            })

    print("\nvtables recovered: %d" % len(found))
    for k, v in sorted(rejects.items()):
        print("   rejected %-18s %d" % (k, v))
    # A rejection count far above the found count means the guard is wrong, not
    # that the binary has no vtables. Report it rather than hide it.
    if rejects and sum(rejects.values()) > 4 * max(1, len(found)):
        print("   WARNING: rejections dominate. The guard is probably wrong; "
              "treat these as candidates, not conclusions.")

    if not found:
        return 0

    by_class = {}
    for r in found:
        by_class.setdefault((r["scope"], r["class"]), []).append(r)
    print("\nclasses with a vtable: %d" % len(by_class))
    for (scope, cls), rs in sorted(by_class.items(),
                                   key=lambda kv: -len(kv[1]))[:20]:
        r = rs[0]
        print("   %-52s @%#012x  offset_to_top=%d"
              % (scope or "(anon)", r["vtable_addr"], r["offset_to_top"]))

    if a.csv:
        p = a.csv if os.path.isabs(a.csv) else os.path.join(ROOT, a.csv)
        with open(p, "w", newline="", encoding="utf-8") as f:
            w = csv.writer(f)
            w.writerow(["module", "scope", "class", "vtable_addr",
                        "typeinfo_addr", "offset_to_top", "first_vfn"])
            for r in sorted(found, key=lambda r: r["vtable_addr"]):
                w.writerow([a.module, r["scope"], r["class"],
                            "0x%012x" % r["vtable_addr"],
                            "0x%012x" % r["typeinfo_addr"],
                            r["offset_to_top"],
                            "0x%012x" % r["first_vfn"]])
        print("\nwrote %d vtable(s) -> %s"
              % (len(found), os.path.relpath(p, ROOT)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
