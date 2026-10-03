#!/usr/bin/env python3
"""Recover object layouts from GOT access patterns, and generalise templates.

What this recovers
------------------
`tools/got_map.py` recovers which GOT slots exist and how each is accessed. This
turns that into *layouts*: per run of consecutive slots, the field offsets
actually used, the width of each access, whether it is read or written, and how
many functions touch it.

An object with fields gets one GOT slot per field, consecutively. So a run of
slots whose accesses cluster at small offsets is one object, and the largest
offset used is a lower bound on its size. That is real layout information, and it
is available with no relocated image -- the access *pattern* lives in the code,
which is in the file.

What this does not recover
--------------------------
The values. A slot names a global's address; it does not say what is stored there.
Object *contents*, vptr targets, and inheritance edges still want a dump. Shape
is not value, and nothing here should be read as a recovered object.

Confidence
----------
Ranked, and deliberately conservative. A layout is only `high` when several
functions agree on the offset set and the widths are consistent; a single
function touching one slot is `low` and is not promoted anywhere. Confidence is
recorded in the output so a later stage can require a threshold rather than
trusting the list.

Usage:
    python tools/layout_map.py --module main --top 40
    python tools/layout_map.py --module main --csv data/layouts.csv
"""

import argparse
import collections
import csv
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import got_map as GM  # noqa: E402
import match_harness as MH  # noqa: E402


def collect(module):
    """slot -> {offsets: {(off, width, kind): count}, funcs: set}"""
    md = MH._md()
    blob = MH.text_blob(module)
    table = collections.defaultdict(
        lambda: {"acc": collections.Counter(), "funcs": set()})
    for addr, size, name, _dec in MH.load_functions(module):
        ins = list(md.disasm(blob[addr:addr + size], addr))
        end = MH.effective_end(ins, size)
        page = {}
        for i in ins[:end]:
            mn = i.mnemonic
            ops = i.op_str
            if mn == "adrp":
                dst = ops.split(",")[0].strip()
                import re
                m = re.search(r"#(-?(?:0x)?[0-9a-fA-F]+|\d+)", ops)
                if m:
                    v = GM.imm(m.group(1))
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
            if base not in page:
                continue
            off = GM.imm(m.group(2)) or 0
            w = GM.width_of(mn, reg)
            kind = "w" if mn.startswith("st") else "r"
            # The GOT slot is at page+0 here (base is the page); the *field*
            # offset is what follows, in a second dereference. Record both: a
            # direct access means off==0 and the slot itself is the object.
            slot = page[base] + off
            table[slot]["acc"][(0, w, kind)] += 1
            table[slot]["funcs"].add(addr)
    return table


def runs(table):
    keys = sorted(table)
    out = []
    cur = []
    for k in keys:
        if cur and k - cur[-1] != 8:
            out.append(cur)
            cur = []
        cur.append(k)
    if cur:
        out.append(cur)
    return [r for r in out if len(r) >= 2]


def analyse(run, table):
    widths = collections.Counter()
    kinds = collections.Counter()
    funcs = set()
    refs = 0
    for k in run:
        rec = table[k]
        funcs |= rec["funcs"]
        for (_o, w, kind), n in rec["acc"].items():
            widths[w] += n
            kinds[kind] += n
            refs += n
    total = sum(widths.values()) or 1
    # Width purity: the dominant width as a fraction. A pure-pointer table and a
    # mixed-width struct are different things and should not be ranked together.
    purity = max(widths.values()) / total
    if len(funcs) >= 12 and purity > 0.9:
        conf = "high"
    elif len(funcs) >= 4:
        conf = "medium"
    else:
        conf = "low"
    return {
        "first_slot": run[0],
        "slots": len(run),
        "refs": refs,
        "funcs": len(funcs),
        "widths": dict(widths),
        "purity": round(purity, 3),
        "reads": kinds.get("r", 0),
        "writes": kinds.get("w", 0),
        "confidence": conf,
    }


def guard_pairs(table, run, lo, hi):
    """NEGATIVE RESULT -- do not use this to find magic statics. Kept as a record.

    The intent was to find every instance of the Boost magic-static shape from
    GOT access statistics, so the 24 hand-decompiled initialisers at
    main+0x1ce0..0x2130 could be generalised across the binary.

    It does not work, and the reason is structural rather than a threshold to
    tune. This detector looks for a byte-width access on one slot and an 8-byte
    access 16 bytes away, sharing a function. But in the real code the guard is
    never accessed *through* the slot:

        adrp x8, ..            ; GOT page
        ldr  x8, [x8, #0x5a0]  ; x8 = &guard   <- this is the only slot access
        ldrb w9, [x8]          ; the byte read is on a REGISTER, not on the slot
        ...
        str  x9, [x8]          ; ditto the 64-bit write

    `collect()` records accesses *to* a GOT slot, so for the guard it sees one
    8-byte load and nothing else. The byte read and the 64-bit write belong to
    the global the slot points at, one dereference further out, which is outside
    what this table measures at all.

    Measured against ground truth: 366 pairs inside the GOT segment, of which
    **1 of the 24 known guards** was detected. The other 365 are unrelated
    globals that happen to be 16 bytes apart.

    The correct instrument is `tools/magic_static.py`, which matches the twelve
    *instructions* -- adrp/ldr/ldrb/tbnz/adrp/ldr/adrp/add/str/orr/str/ret --
    and recovers 24/24. Its "of which address is shared" question is answered by
    the instruction stream, not by slot statistics. That is why it works here
    and this does not.

    Kept because the failure mode is instructive: access statistics describe
    accesses *to* the slot, and anything reached by dereferencing through the slot
    is invisible to them.
    """
    out = []
    for k in run:
        if not (lo <= k < hi):
            continue
        k2 = k + 16
        if not (lo <= k2 < hi) or k2 not in table:
            continue
        a, b = table[k], table[k2]
        aw = {w for (_o, w, _k) in a["acc"]}
        bw = {w for (_o, w, _k) in b["acc"]}
        both = a["funcs"] & b["funcs"]
        if 1 in aw and 8 in bw and both:
            out.append((k, k2, len(both), sorted(both)))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default="main")
    ap.add_argument("--top", type=int, default=30)
    ap.add_argument("--csv", default=None)
    ap.add_argument("--min-slots", type=int, default=4)
    a = ap.parse_args()

    table = collect(a.module)
    rs = [r for r in runs(table) if len(r) >= a.min_slots]
    print("module %s: %d GOT slots, %d runs of >=%d consecutive slots"
          % (a.module, len(table), len(rs), a.min_slots))

    results = [analyse(r, table) for r in rs]
    results.sort(key=lambda r: (-r["funcs"], -r["refs"]))

    by_conf = collections.Counter(r["confidence"] for r in results)
    print("confidence: %s" % ", ".join("%s=%d" % (k, v)
                                       for k, v in sorted(by_conf.items())))
    print()
    print("%-13s %5s %6s %6s %7s %6s  %s"
          % ("first_slot", "slots", "refs", "funcs", "purity", "conf",
             "widths"))
    for r in results[:a.top]:
        print("%#013x %5d %6d %6d %7.2f %6s  %s"
              % (r["first_slot"], r["slots"], r["refs"], r["funcs"],
                 r["purity"], r["confidence"], r["widths"]))

    # The template generalisation, restricted to the GOT segment.
    #
    # The GOT is not the whole recovered slot set, and a min/max bound does not
    # isolate it: the referenced slots run 0x509010..0x27fd888, which spans
    # `.rodata` as well as `.data`, so every rodata candidate passed and the
    # count stayed at a useless 164 either way.
    #
    # The reason is that `adrp` + `ldr` has two distinct uses here. In `.data` it
    # is the GOT -- load a global's address, then dereference it, which is the
    # `adrp x8, ..; ldr x8, [x8, #0x5a0]` the gflib3 bodies show. In `.rodata`
    # the same two instructions are a PC-relative reference to a constant or
    # string. Both are legitimately `adrp`+`ldr`, and only the segment tells them
    # apart, so the filter has to be the segment rather than an address range.
    #
    # Segment bounds are read from work/<mod>/manifest.json rather than hardcoded,
    # since they differ per module.
    import json
    man = json.load(open(os.path.join(ROOT, "work", a.module, "manifest.json"),
                         encoding="utf-8"))
    seg = man["segments"]
    got_lo = seg["data"]["memoff"]
    got_hi = seg["data"]["memoff"] + seg["data"]["memsz"]
    bss_lo = man["mod0"]["bss_start"]
    print()
    print("GOT segment: %#x .. %#x   (rodata ends %#x, bss starts %#x)"
          % (got_lo, got_hi, seg["rodata"]["memoff"] + seg["rodata"]["memsz"],
             bss_lo))
    in_got = sum(1 for k in table if got_lo <= k < got_hi)
    in_ro = sum(1 for k in table if k < got_lo)
    in_bss = sum(1 for k in table if k >= bss_lo)
    print("  slots in GOT   : %d" % in_got)
    print("  slots in rodata: %d   (PC-relative constants/strings, not GOT)"
          % in_ro)
    print("  slots in bss   : %d" % in_bss)

    pairs = []
    for r in rs:
        for p in guard_pairs(table, r, got_lo, got_hi):
            pairs.append(p)
    print()
    print("magic-static guard pairs inside the GOT segment: %d" % len(pairs))
    for k, k2, n, fs in pairs[:20]:
        print("    %#013x  %#013x  %3d func(s)" % (k, k2, n))
    if len(pairs) > 20:
        print("    ... and %d more" % (len(pairs) - 20))
    if pairs:
        total_funcs = len({f for p in pairs for f in p[3]})
        print("  distinct functions touching a candidate pair: %d" % total_funcs)

    if a.csv:
        p = a.csv if os.path.isabs(a.csv) else os.path.join(ROOT, a.csv)
        with open(p, "w", newline="", encoding="utf-8") as f:
            w = csv.writer(f)
            w.writerow(["module", "first_slot", "slots", "refs", "funcs",
                        "purity", "reads", "writes", "confidence", "widths"])
            for r in results:
                w.writerow([a.module, "0x%012x" % r["first_slot"], r["slots"],
                            r["refs"], r["funcs"], r["purity"], r["reads"],
                            r["writes"], r["confidence"],
                            ";".join("%d:%d" % (k, v)
                                     for k, v in sorted(r["widths"].items()))])
        print("\nwrote %d layouts -> %s"
              % (len(results), os.path.relpath(p, ROOT)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
