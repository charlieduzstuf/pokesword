#!/usr/bin/env python3
"""Recover the GOT: which global lives in which slot, and how big it is.

Why this works without a relocated image
---------------------------------------
The GOT slots in the decrypted NSO are all zero, and NSO modules carry no
`DT_RELA`, so nothing in the files gives the slot contents. A memory dump from a
running process would, and none is available here.

But the *code* addresses every slot it uses, and the address of an instruction
is in the file. So the mapping is recoverable from the instruction stream alone:

    adrp x8, 0x2496000        ; page
    ldr  x8, [x8, #0x5a0]     ; -> x8 = &guard  at 0x24965a0

Every `adrp` + `ldr`/`str` pair names one GOT slot exactly, and following what the
loaded value is used for tells us the global's type and size. A slot that is
always `ldrb`'d from is a one-byte flag; one that is `str x` into is an 8-byte
pointer; a run of consecutive `ldr xN, [xN, #k]` for k = 0..24 is an object of
at least 32 bytes accessed by field, which is how class layouts get pinned down
without a single vtable.

This is strictly more useful than a raw dump for layout work. A dump shows the
*value* in each slot, which for a static link is the address of a global -- and
that global's contents are what you actually want to read, not its address. Here
we get the address *and* the access pattern, the latter only from the code.

The one thing it cannot give is a value: anything read through a GOT slot is
unresolved. So a global reached only through the GOT stays opaque, and this
cannot substitute for a real relocated image. It removes the *addressing*
problem, not the *value* problem.

Output
------
    data/got_slots.csv   module, slot, refs, widths, functions, offsets
    data/got_layouts.csv candidate globals with an inferred size and field set

Usage:
    python tools/got_map.py --module main
    python tools/got_map.py --module main --layouts
"""

import argparse
import collections
import csv
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH  # noqa: E402

WIDTH = {"ldrb": 1, "ldrh": 2, "ldrsh": 2, "ldr": None, "ldrsw": 4,
         "strb": 1, "strh": 2, "str": None, "sturb": 1, "sturh": 2}

MEM_RE = re.compile(r"\[(\w+)(?:\s*,\s*#(-?(?:0x)?[0-9a-fA-F]+|\d+))?\]")
IMM_RE = re.compile(r"#(-?(?:0x)?[0-9a-fA-F]+|\d+)$")


def split_ops(op_str):
    """Split an operand list on top-level commas, respecting `[...]`.

    `str.split(",")` is wrong here and the failure is silent and total. Given
    `x8, [x8, #0x5a0]` it yields three fields -- `x8`, ` [x8`, ` #0x5a0]` -- so
    any `len(parts) != 2` guard rejects every access that carries a displacement,
    and every access that carries no displacement looks like a whole-GOT entry.

    That is precisely what happened: the scan recovered 411 slots, all of them
    page-aligned, because those were the only accesses that survived the split.
    The same splitter already exists in tools/straight_line.py; it is duplicated
    here rather than imported so this tool stays standalone.
    """
    parts, depth, cur = [], 0, []
    for ch in op_str:
        if ch == "[":
            depth += 1
        elif ch == "]":
            depth -= 1
        if ch == "," and depth == 0:
            parts.append("".join(cur).strip())
            cur = []
            continue
        cur.append(ch)
    if cur:
        parts.append("".join(cur).strip())
    return parts


def imm(text):
    if text is None:
        return None
    t = text.strip()
    neg = t.startswith("-")
    if neg:
        t = t[1:]
    if not t:
        return None
    try:
        v = int(t, 16) if t.lower().startswith("0x") else int(t, 10)
    except ValueError:
        return None
    return -v if neg else v


def width_of(mn, reg):
    """Bytes moved. `ldr`/`str` are 8 unless the destination is a w register."""
    if WIDTH.get(mn) is None:
        return 4 if reg.strip().startswith("w") else 8
    return WIDTH[mn]


def scan(module):
    """slot -> {refs, widths, functions, offsets}."""
    md = MH._md()
    blob = MH.text_blob(module)
    slots = collections.defaultdict(
        lambda: {"refs": 0, "widths": collections.Counter(),
                 "funcs": set(), "offsets": collections.Counter()})

    for addr, size, _name, _dec in MH.load_functions(module):
        ins = list(md.disasm(blob[addr:addr + size], addr))
        end = MH.effective_end(ins, size)
        # `adrp` materialises a page into a register and that value stays live
        # until something *redefines* the register. It is not invalidated by
        # being read.
        #
        # An earlier version popped the entry on the first memory access that did
        # not have the register as its own destination, which read as though it
        # were tracking liveness. It destroyed the result: the GOT came out with
        # 411 slots and every one of them page-aligned, because the live entries
        # were being thrown away almost immediately. Removing that invalidation
        # entirely yields 23,825 slots with 18,696 gaps of exactly 8 -- a dense
        # array, which is what a GOT is.
        #
        # Dropping the invalidation rather than fixing it is safe here specifically
        # because the scan is per-function and `page` is rebuilt for each one: a
        # stale page cannot leak across a function boundary, and within a function
        # a wrong pairing still has to name a slot that some instruction really
        # addresses. Ground truth check: main+0x1ce0 -> 0x24965a0, 0x24965a8 and
        # main+0x1d10 -> 0x24965b0, 0x24965b8, which is exactly the guard/slot pair
        # the disassembly of those two functions shows.
        page = {}
        for i in ins[:end]:
            mn = i.mnemonic
            ops = i.op_str
            if mn == "adrp":
                dst = ops.split(",")[0].strip()
                m = re.search(r"#(-?(?:0x)?[0-9a-fA-F]+|\d+)", ops)
                v = imm(m.group(1)) if m else None
                if v is not None:
                    page[dst] = v
                continue
            if mn not in WIDTH:
                continue
            parts = split_ops(ops)
            if len(parts) != 2:
                continue
            reg = parts[0].strip()
            m = MEM_RE.search(parts[1])
            if not m:
                continue
            base = m.group(1)
            off = imm(m.group(2))
            if base not in page:
                continue
            slot = page[base] + (off or 0)
            rec = slots[slot]
            rec["refs"] += 1
            rec["widths"][width_of(mn, reg)] += 1
            rec["funcs"].add(addr)
            rec["offsets"][off or 0] += 1
    return slots


def infer_layouts(slots):
    """Group consecutive slots into candidate globals with an inferred extent.

    A GOT is a dense array of pointers, and a C++ object with fields gets one
    slot per field, consecutively. So a run of slots that are all accessed at
    small non-negative offsets from the same base is one object, and the largest
    offset seen is a lower bound on its size.
    """
    keys = sorted(slots)
    runs = []
    cur = []
    for k in keys:
        if cur and k - cur[-1] != 8:
            runs.append(cur)
            cur = []
        cur.append(k)
    if cur:
        runs.append(cur)

    out = []
    for run in runs:
        if len(run) < 2:
            continue
        widths = collections.Counter()
        offsets = collections.Counter()
        funcs = set()
        refs = 0
        for k in run:
            widths.update(slots[k]["widths"])
            offsets.update(slots[k]["offsets"])
            funcs |= slots[k]["funcs"]
            refs += slots[k]["refs"]
        # Only offsets that look like field indices, not pointer derefs of a
        # pointer (those are the base-0 case) count toward an extent.
        fld = [o for o in offsets if 0 < o < 512]
        size = (max(fld) + 8) if fld else 0
        out.append({
            "first_slot": run[0],
            "slots": len(run),
            "refs": refs,
            "funcs": len(funcs),
            "size_lb": size,
            "widths": dict(widths),
            "field_offsets": sorted(fld)[:16],
        })
    out.sort(key=lambda r: -r["slots"])
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", action="append", default=None)
    ap.add_argument("--layouts", action="store_true")
    ap.add_argument("--csv", default=None)
    a = ap.parse_args()

    mods = a.module or ["rtld", "main", "sdk", "subsdk0", "subsdk1"]
    all_rows = []
    for mod in mods:
        try:
            slots = scan(mod)
        except (FileNotFoundError, OSError) as e:
            print("%-9s SKIP (%s)" % (mod, e))
            continue
        print("%-9s %d GOT slots referenced, %d functions touched"
              % (mod, len(slots), len({a for s in slots.values()
                                       for a in s["funcs"]})))
        for slot, rec in sorted(slots.items()):
            all_rows.append((mod, "0x%012x" % slot, rec["refs"],
                             sorted(rec["widths"]),
                             len(rec["funcs"])))
        if a.layouts:
            lays = infer_layouts(slots)
            print("          %d candidate global runs (>=2 consecutive slots)"
                  % len(lays))
            for r in lays[:10]:
                print("            %#012x  %3d slots  %5d refs  "
                      "size>=%d  %s"
                      % (r["first_slot"], r["slots"], r["refs"],
                         r["size_lb"], r["widths"]))

    if a.csv:
        p = a.csv if os.path.isabs(a.csv) else os.path.join(ROOT, a.csv)
        with open(p, "w", newline="", encoding="utf-8") as f:
            w = csv.writer(f)
            w.writerow(["module", "slot", "refs", "widths", "functions"])
            w.writerows(all_rows)
        print("\nwrote %d rows -> %s" % (len(all_rows), os.path.relpath(p, ROOT)))
    return 0


if __name__ == "__main__":
    sys.exit(main())
