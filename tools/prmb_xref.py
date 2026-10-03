#!/usr/bin/env python3
"""Cross-reference `.prmb` asset keys against `main`, to name loading functions.

Why this instead of decoding poke_data
--------------------------------------
`tools/prmb_records.py` recovered **2,986 real Game Freak asset keys** with
their exact offsets -- `a_btl41_c0201`, `Play_bgm_or_wn_win05`,
`eg_trainer_turn_action01`, `tr0005_00_00`, `start_cam`. Those are not inferred
names; they are literal strings the game uses to name its own assets.

That matters to the *decompilation* because the game loads these assets by name
at runtime. So each key must also appear in `main`'s rodata, and the function
that materialises that rodata address with `adrp`+`add` is the loader for that
asset class. Naming that function is worth more than another 1% of structure
recovery, because it turns `sub_1234` into something a reader can reason about.

The negative results this builds on, so they are not re-derived wrongly
    * These are NOT FlatBuffers. A vtable is present in all seven files
      (`vt_len=10, tbl_len=16`, three fields) but carries offsets only, with no
      type tags -- reading the low byte of the next slot offset as a type gave
      `float32` fields holding 1.6e-41.
    * The three root fields resolve to ordered, disjoint, length-prefixed index
      regions, consistently across all seven files -- but every recovered key
      falls OUTSIDE all three. They are indexes, not payload.
    * Only `battle_talk.prmb` is a confirmed fixed-stride array (40 bytes, 96%
      of adjacent-key gaps). background/battle_effect/battle_misc/trainer_data
      put keys at 22/5/8/21 distinct record offsets, so a single stride is not
      the shape. Recorded rather than averaged away.

Verification
------------
Every claim here is checked against the population: a key counts as found in
rodata only on a full byte match, and a function is credited only when its
`adrp` page plus `add` displacement reproduces the rodata address exactly. A
name is proposed rather than written to `data/functions.csv`; names are applied
only through `tools/add_handwritten.py`, which re-verifies the body.

Usage:
    python tools/prmb_xref.py
    python tools/prmb_xref.py --csv data/asset_xref.csv --apply-names
"""

import argparse
import collections
import csv
import glob
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

PRMB = os.path.join(ROOT, "romfs_out", "bin", "battle", "data_table",
                    "*.prmb")
MIN_KEY = 6


def load_keys():
    """{key: [(table, file_offset)]} from every .prmb, literal bytes only."""
    out = collections.defaultdict(list)
    for p in sorted(glob.glob(PRMB)):
        d = open(p, "rb").read()
        nm = os.path.basename(p)
        i = 0
        n = len(d)
        while i < n:
            if 32 <= d[i] < 127:
                j = i
                while j < n and 32 <= d[j] < 127:
                    j += 1
                # Must be NUL-terminated to be a C string the game can pass.
                if j - i >= MIN_KEY and j < n and d[j] == 0:
                    out[d[i:j].decode("ascii")].append((nm, i))
                i = j
            else:
                i += 1
    return out


def rodata_index(module):
    """{ascii_string: vaddr} for every NUL-terminated printable string.

    Read from `work/<module>/rodata.bin` and the segment's `memoff`, because
    there is no `rodata_blob` in the harness -- an earlier version of this file
    called one, and would have failed on the first table.
    """
    man = json.load(open(os.path.join(ROOT, "work", module, "manifest.json"),
                         encoding="utf-8"))
    seg = man["segments"]["rodata"]
    blob = open(os.path.join(ROOT, "work", module, seg["path"]), "rb").read()
    base = seg["memoff"]
    out = {}
    i = 0
    n = len(blob)
    while i < n:
        if 32 <= blob[i] < 127:
            j = i
            while j < n and 32 <= blob[j] < 127:
                j += 1
            if j - i >= MIN_KEY and j < n and blob[j] == 0:
                out.setdefault(blob[i:j].decode("ascii"), base + i)
            i = j
        else:
            i += 1
    return out, blob, base


def find_referrers(module, targets, limit_insns=None):
    """{vaddr: [func_addr]} for functions materialising `targets` via adrp+add.

    A `ldr`-style GOT access or a bare `adrp` is not enough -- the address has to
    be reconstructed exactly, because a page match alone would attribute every
    string in a page to every function touching that page, which is most of
    them.
    """
    import match_harness as MH
    md = MH._md()
    blob = MH.text_blob(module)
    found = collections.defaultdict(list)
    want = set(targets)
    for addr, size, _n, _d in MH.load_functions(module):
        if size <= 0 or size > 0x2000:
            continue
        insns = list(md.disasm(blob[addr:addr + size], addr))
        end = MH.effective_end(insns, size)
        page = {}
        for ins in insns[:end]:
            ops = ins.op_str
            if ins.mnemonic in ("adrp", "adr"):
                m = re.search(r"#(0x[0-9a-f]+)", ops)
                if m:
                    page[ops.split(",")[0].strip()] = int(m.group(1), 16)
                continue
            if ins.mnemonic in ("add", "ldr") and "," in ops:
                parts = [x.strip() for x in ops.split(",")]
                if len(parts) == 3:
                    dst, src, imm = parts
                    if src in page and dst == src:
                        m = re.search(r"#(0x[0-9a-f]+)", imm)
                        if m:
                            va = page[src] + int(m.group(1), 16)
                            if va in want:
                                found[va].append(addr)
                                if len(found[va]) >= 8:
                                    break
                page.pop(dst, None)
    return found


def propose(key):
    """Always None. Names from asset keys are not evidence of what a function is.

    This function used to map a four-letter prefix to a class name -- `a_btl` to
    "BattleAnimation", `eg_` to "BattleEffect" -- and an earlier run wrote the
    result into `data/functions.csv`. It put 15 wrong names into `main`, and two
    of them were worse than the prefix guess was bad:

        sub_fbb430 -> Set_Volume_m96_Field_Music
        sub_7f6540 -> a_btl36_vs02

    `sub_fbb430` was renamed because its body mentions BGM cues. It was renamed
    to the *name of one of its strings*. A function that mentions a string is not
    named by it. And `a_btl36_vs02` was applied to a function whose body mentions
    `a_btl35_vs01` -- the neighbouring key, not the one it was named for, which is
    what showed the rule was not tracking anything real.

    The prefix table could not work, because the prefixes do not separate the
    classes: `a_` covers audio (`a_bt0110`, `a_t0301_g0110`), battle animation
    (`a_btl35_vs01`) and cameras (`a_c0101_g0210`) alike. Every one of the 15 was
    confirmed absent from the 38,727-name donor table, so all 15 were fabricated
    rather than donated. They have been reverted to `sub_<addr>`.

    So this returns None always, deliberately. Recovering 2,986 asset keys was
    worth doing; naming 15 functions after them was not, and the two have to be
    kept apart or the first drags the second along. What `main`'s own names do
    say is in `data/functions.csv`, and those came from the donor.
    """
    return None


# Retained only so the docstring's claim about them can be checked against
# something. Empty on purpose: see `propose`.
PREFIXES = {}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default="main")
    ap.add_argument("--csv", default=None)
    ap.add_argument("--apply-names", action="store_true",
                    help="write proposed loader names into data/functions.csv. "
                         "Inert: propose() returns None, so this cannot write. "
                         "Kept so the flag that caused the 15 bad names fails "
                         "visibly rather than being forgotten.")
    ap.add_argument("--min-votes", type=int, default=3)
    a = ap.parse_args()

    keys = load_keys()
    print("asset keys recovered from .prmb: %d (%d occurrences)"
          % (len(keys), sum(len(v) for v in keys.values())))
    per = collections.Counter()
    for v in keys.values():
        for nm, _o in v:
            per[nm] += 1
    print("  by table: %s" % dict(per.most_common()))

    print("\nindexing %s rodata ..." % a.module)
    rstrings, blob, base = rodata_index(a.module)
    print("  %d printable NUL-terminated strings" % len(rstrings))

    hits = {}
    for k in keys:
        v = rstrings.get(k)
        if v is not None:
            hits[k] = v
    print("  %d of %d asset keys also appear in %s rodata (%.1f%%)"
          % (len(hits), len(keys), a.module,
             100.0 * len(hits) / max(1, len(keys))))

    # Group keys by the page they live on: functions that load many keys from
    # one page are a loader table, which is the signal worth acting on.
    print("\nlocating referring functions ...")
    refs = find_referrers(a.module, hits.values())
    print("  %d of %d matched rodata address(es) have a referring function"
          % (len(refs), len(hits)))
    func_votes = collections.defaultdict(list)
    for k, v in hits.items():
        for f in refs.get(v, []):
            func_votes[f].append(k)
    print("  %d function(s) materialise at least one asset key" % len(func_votes))

    print("\nfunctions referencing the most keys (loader candidates):")
    rows = []
    for f, ks in sorted(func_votes.items(), key=lambda kv: -len(kv[1])):
        rows.append((f, ks))
    for f, ks in rows[:20]:
        pfx = collections.Counter()
        for k in ks:
            p = propose(k)
            if p:
                pfx[p] += 1
        print("   sub_%-8x %4d key(s)  %s" % (f, len(ks),
                                              dict(pfx.most_common(3))))

    # A name is proposed only when a function references keys of a single class
    # and enough of them, because two classes in one function is a dispatcher,
    # not a loader, and naming a dispatcher after one of its classes is wrong.
    proposed = []
    for f, ks in rows:
        if len(ks) < a.min_votes:
            continue
        pfx = collections.Counter(p for p in (propose(k) for k in ks) if p)
        if len(pfx) != 1:
            continue
        word, n = pfx.most_common(1)[0]
        if n < a.min_votes:
            continue
        proposed.append((f, word, len(ks), n))

    print("\nnames proposed: %d" % len(proposed))
    for f, word, nk, n in proposed[:25]:
        print("   sub_%x -> Load%s  (%d/%d keys)" % (f, word, n, nk))

    if a.csv:
        p = a.csv if os.path.isabs(a.csv) else os.path.join(ROOT, a.csv)
        with open(p, "w", newline="", encoding="utf-8") as fh:
            w = csv.writer(fh)
            w.writerow(["module", "func", "proposed_name", "keys_total",
                        "keys_of_class", "rodata_keys"])
            for f, word, nk, n in proposed:
                w.writerow([a.module, "0x%012x" % f, "Load" + word, nk, n,
                            " ".join(sorted(func_votes[f]))[:400]])
        print("\nwrote %d rows -> %s" % (len(proposed),
                                         os.path.relpath(p, ROOT)))

    if a.apply_names and proposed:
        path = os.path.join(ROOT, "data", "functions.csv")
        with open(path, encoding="utf-8") as fh:
            rd = csv.DictReader(fh)
            fields = rd.fieldnames
            allrows = list(rd)
        n = 0
        want = {f: "Load" + w for f, w, _, _ in proposed}
        for r in allrows:
            if r["module"] != a.module:
                continue
            try:
                addr = int(r["addr"], 16)
            except ValueError:
                continue
            if addr in want and r["name"].startswith("sub_"):
                r["name"] = want[addr]
                n += 1
        with open(path, "w", newline="", encoding="utf-8") as fh:
            w = csv.DictWriter(fh, fieldnames=fields)
            w.writeheader()
            w.writerows(allrows)
        print("applied %d name(s) -> data/functions.csv" % n)
    elif a.apply_names:
        print("\n(--apply-names given but no names qualified)")
    return 0


if __name__ == "__main__":
    sys.exit(main())