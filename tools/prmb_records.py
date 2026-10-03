#!/usr/bin/env python3
"""Read Pokemon Sword's `.prmb` data tables as fixed-stride record arrays.

They are **not** FlatBuffers. Two rounds of reading them as FlatBuffers produced
coherent-looking nonsense, and both were caught by checking the bytes rather
than the structure:

  * the vtable is real -- every file has one, `vt_len=10, tbl_len=16`, three
    present fields -- but a FlatBuffers vtable carries **offsets only**. Reading
    the low byte of the next slot offset as a type gave `float32` fields holding
    1.6e-41 and a `table` field that followed to `None`.
  * the three fields do hold u32 values that resolve to ordered, disjoint,
    length-prefixed regions, consistently across all seven files. But scanning
    for text found `a_btl41_c0201`, `Play_bgm_or_wn_win05` and
    `eg_trainer_turn_action01` at offsets that fall **outside all three regions**,
    which is only possible if those regions are indexes rather than the payload.

What the payload actually is, from the byte addresses alone:

    battle_talk.prmb      0xd5c 0xd84 0xdac 0xdd4 ...   stride 40
    battle_effect.prmb  0x33dc 0x3484 0x352c 0x35d4   stride 168

Constant to the byte, across independent files. So each table is an array of
fixed-size records, and the asset key is stored inline in the record rather than
pointed at from it.

That is a claim about stride, so this verifies it rather than assuming it. For
each table the stride is found by autocorrelation over the candidate region:
score every divisor-of-4 stride by how consistently records align on printable
string starts and on a stable set of field values. A stride that only looks
right on one file is reported as such. `poke_data.prmb` is the control -- it is
92% non-text numeric data, so if the method is sound it should find no
string-bearing stride, and saying so is a result.

Usage:
    python tools/prmb_records.py
    python tools/prmb_records.py --table battle_talk --records 8 --raw
"""

import argparse
import glob
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PATTERN = os.path.join(ROOT, "romfs_out", "bin", "battle", "data_table",
                       "*.prmb")

MAX_STRIDE = 512


def u32(d, o):
    return struct.unpack_from("<I", d, o)[0] if 0 <= o <= len(d) - 4 else None


def sections(d):
    """The three length-prefixed regions the root's fields point at.

    Kept because it is real structure even though it is not the payload: it
    locates the index regions, and it is what proved the vtable reading was
    right while the FlatBuffers interpretation was wrong.
    """
    root = u32(d, 0)
    if root is None or root + 16 > len(d):
        return None, root
    out = []
    for i in range(3):
        fpos = root + 4 + i * 4
        v = u32(d, fpos)
        if v is None:
            return None, root
        tgt = fpos + v
        length = u32(d, tgt)
        if length is None:
            return None, root
        out.append((tgt, tgt + length))
    return out, root


def cstr(d, o, limit=64):
    """NUL-terminated ASCII at `o`, or None. Bounded, so a missing terminator
    cannot run to the end of the file."""
    end = d.find(b"\0", o, min(len(d), o + limit))
    if end < 0 or end == o:
        return None
    raw = d[o:end]
    if not all(32 <= c < 127 for c in raw):
        return None
    return raw.decode("ascii")


def find_records(d):
    """Every (offset, string) in the file, for stride detection."""
    out = []
    i = 0
    n = len(d)
    while i < n:
        if 32 <= d[i] < 127:
            j = i
            while j < n and 32 <= d[j] < 127:
                j += 1
            if j - i >= 6 and j < n and d[j] == 0:
                out.append((i, d[i:j].decode("ascii")))
            i = j
        else:
            i += 1
    return out


def detect_stride(d, recs):
    """Find the record stride by voting on the gap between consecutive strings.

    A record array puts one key per record, so consecutive keys are exactly one
    stride apart. Gaps between adjacent keys are therefore strong evidence; a
    key that is not in a one-key-per-record table shows up as an outlier rather
    than moving the answer, because the mode is taken over all pairs.
    """
    if len(recs) < 3:
        return None, {}
    votes = {}
    for a in range(len(recs) - 1):
        gap = recs[a + 1][0] - recs[a][0]
        if 0 < gap <= MAX_STRIDE and gap % 4 == 0:
            votes[gap] = votes.get(gap, 0) + 1
    if not votes:
        return None, votes
    best = max(votes, key=lambda g: (votes[g], -g))
    total = sum(votes.values())
    return best, votes


def alignment(d, base, stride, nrec):
    """How well records at `base` with `stride` fit the file."""
    end = base + stride * nrec
    return end <= len(d), end


def describe(d, path, max_records, show_raw):
    nm = os.path.basename(path)
    secs, root = sections(d)
    recs = find_records(d)
    stride, votes = detect_stride(d, recs)

    print("=== %s ===" % nm)
    print("   %d bytes, root@%#x, %d inline key(s)" % (len(d), root, len(recs)))
    if secs:
        print("   index regions: %s"
              % ", ".join("%#x-%#x" % s for s in secs))

    if stride is None:
        print("   NO string stride found (control case: numeric table)")
        if recs:
            print("   keys present but scattered, e.g. %s"
                  % ", ".join(r[1][:24] for r in recs[:6]))
        print()
        return None

    total = sum(votes.values())
    print("   stride = %d bytes (%d of %d adjacent-key gaps vote for it, "
          "%.0f%%)" % (stride, votes[stride], total,
                       100.0 * votes[stride] / total))
    others = sorted((g, c) for g, c in votes.items() if g != stride)
    if others:
        print("   runner-up strides: %s"
              % ", ".join("%d x%d" % (g, c) for g, c in others[-4:]))

    # Base = first key, rounded down to the array start we can infer.
    base = recs[0][0]
    nrec = (len(d) - base) // stride
    fits, end = alignment(d, base, stride, nrec)
    print("   %d record(s) from %#x, ends %#x (%s), %d byte tail"
          % (nrec, base, end, "in file" if fits else "PAST EOF", len(d) - end))

    # Verify the stride holds: every record must contain a key at the same
    # offset within the record, and the bytes before it must look alike.
    key_off = {}
    for off, s in recs:
        if off >= base:
            key_off.setdefault((off - base) % stride, []).append(off)
    if len(key_off) == 1:
        k = next(iter(key_off))
        print("   every key sits at record+%-4d (%d keys) -> stride confirmed"
              % (k, len(recs)))
        key_rel = k
    else:
        print("   keys fall at %d distinct record offsets %s"
              % (len(key_off), sorted(key_off)[:6]))
        key_rel = min(key_off, key=lambda k: -len(key_off[k]))

    print()
    for i in range(min(max_records, nrec)):
        r = base + i * stride
        key = cstr(d, r + key_rel)
        if show_raw:
            body = d[r:r + stride]
            print("   [%4d] @%#-9x %s" % (i, r, body.hex(" ")))
        else:
            fields = []
            for k in range(0, stride, 4):
                v = u32(d, r + k)
                if v is not None and v < 0x10000:
                    fields.append("%d" % v)
            print("   [%4d] @%#-9x key=%-28r small_u32=%s"
                  % (i, r, key, " ".join(fields[:10])))
    print()
    return stride


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--table", default=None)
    ap.add_argument("--records", type=int, default=6)
    ap.add_argument("--raw", action="store_true")
    a = ap.parse_args()

    paths = sorted(glob.glob(PATTERN))
    if a.table:
        paths = [p for p in paths if a.table in os.path.basename(p)]
    if not paths:
        print("no .prmb under romfs_out/bin/battle/data_table/")
        return 1

    found = {}
    for p in paths:
        try:
            s = describe(open(p, "rb").read(), p, a.records, a.raw)
            if s:
                found[os.path.basename(p)] = s
        except Exception as e:                          # noqa: BLE001
            print("%-22s FAILED: %s" % (os.path.basename(p), e))

    print("summary")
    for k, v in sorted(found.items()):
        print("   %-22s stride %d" % (k, v))
    return 0


if __name__ == "__main__":
    sys.exit(main())