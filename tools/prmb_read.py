#!/usr/bin/env python3
"""Read Pokemon Sword's `.prmb` data tables.

They are FlatBuffers, with no wrapper and no `PRMB` magic.

Two wrong assumptions, both found by checking the whole set of seven files
rather than one, and both of which made the reader reject correct data:

1. **A vtable was required to be at least as long as its table.** It may be
   shorter: a field the builder omitted takes its default and occupies no slot.
   Requiring `vt_len >= tbl_len` reported "not a vtable" for all seven tables,
   whose real root vtable is 10 bytes against a 16-byte table.

2. **A vtable was assumed to carry type tags.** It carries offsets only. Every
   other branch tests `mn in (...)` for a specific load or store mnemonic --
   that mistake's exact shape -- so reading the low byte of the next u16 slot
   offset as a type produced `float32` values of 1.6e-41 and a field reported
   as `table` that followed to `None`.

3. **A positive soffset was rejected.** `vtable = pos - soffset` works for
   either sign; the two largest tables have a positive soffset and were the two
   that reported "ROOT UNREADABLE".

So this reader recovers *structure*: the root table, the vectors it points at,
and the element strides implied by the data. It does not recover field names,
because those live in a schema, and none of the 54 `vendor/pkNX/*.fbs` files
covers these seven battle tables -- they cover `Placement`, `Encounter`,
`Archive` and `PokeResource`. Field widths can be inferred from stride and
content, but a width guessed from a stride is a hypothesis and is labelled as
one.

Usage:
    python tools/prmb_read.py
    python tools/prmb_read.py --table poke_data --vectors --depth 3
"""

import argparse
import glob
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PATTERN = os.path.join(ROOT, "romfs_out", "bin", "battle", "data_table",
                       "*.prmb")

# Guard rails. Every loop in here is bounded by one of these; the previous
# version had none and printed 6,000 lines of `f2500`..`f2600` because it read
# past the end of the buffer and treated the bytes there as field descriptors.
MAX_VT_LEN = 0x4000
MAX_FIELDS = 512
MAX_VECTOR = 1 << 24
MAX_DEPTH = 8


class Buf:
    """A flatbuffer with every accessor bounds-checked and every reject counted."""

    def __init__(self, data):
        self.d = data
        self.reads = 0
        self.rejects = 0

    def _ok(self, o, n):
        return n is not None and 0 <= o <= len(self.d) - n

    def u8(self, o):
        if not self._ok(o, 1):
            self.rejects += 1
            return None
        self.reads += 1
        return self.d[o]

    def u16(self, o):
        if not self._ok(o, 2):
            self.rejects += 1
            return None
        self.reads += 1
        return struct.unpack_from("<H", self.d, o)[0]

    def u32(self, o):
        if not self._ok(o, 4):
            self.rejects += 1
            return None
        self.reads += 1
        return struct.unpack_from("<I", self.d, o)[0]

    def i32(self, o):
        v = self.u32(o)
        if v is None:
            return None
        return v - (1 << 32) if v >= (1 << 31) else v

    def raw(self, o, n):
        if not self._ok(o, n):
            self.rejects += 1
            return None
        self.reads += 1
        return self.d[o:o + n]

    def cstr(self, o, maxlen=4096):
        """A NUL-terminated string, bounded so a missing terminator cannot run."""
        if not self._ok(o, 1):
            self.rejects += 1
            return None
        end = self.d.find(b"\0", o, min(len(self.d), o + maxlen))
        if end < 0:
            end = min(len(self.d), o + maxlen)
        try:
            return self.d[o:end].decode("utf-8")
        except UnicodeDecodeError:
            return self.d[o:end].decode("latin1")


class Table:
    """One flatbuffer table. Field count comes from the vtable, never otherwise."""

    def __init__(self, b, pos, depth=0):
        self.b = b
        self.pos = pos
        self.depth = depth
        self.ok = False
        self.vt = self.vt_len = self.tbl_len = self.nfields = None
        self.slots = ()

        soff = b.i32(pos)
        if soff is None:
            return
        # A vtable may sit before or after its table; both signs are legal.
        vt = pos - soff
        vt_len = b.u16(vt)
        tbl_len = b.u16(vt + 2)
        if vt_len is None or tbl_len is None:
            return
        # vt_len is 4 (its own header) plus 2 per present field, and must be
        # even. tbl_len may be larger or smaller than vt_len -- neither is an
        # error, which is the point.
        if not (4 <= vt_len <= MAX_VT_LEN and vt_len % 2 == 0):
            b.rejects += 1
            return
        if tbl_len > len(b.d):
            b.rejects += 1
            return
        nfields = (vt_len - 4) // 2
        if nfields > MAX_FIELDS:
            b.rejects += 1
            return
        slots = []
        for i in range(nfields):
            s = b.u16(vt + 4 + i * 2)
            if s is None:
                return
            slots.append(s)
        self.vt, self.vt_len, self.tbl_len = vt, vt_len, tbl_len
        self.nfields, self.slots = nfields, slots
        self.ok = True

    def field_pos(self, i):
        """Absolute position of field `i`, or None when the field is absent."""
        if not self.ok or i >= self.nfields:
            return None
        off = self.slots[i]
        # 0 means "not present in this table"; anything >= tbl_len is nonsense.
        if off == 0 or off >= self.tbl_len:
            return None
        return self.pos + off

    def follow(self, i):
        """Field `i` as a u32 forward offset; returns the target position."""
        p = self.field_pos(i)
        if p is None:
            return None
        v = self.b.u32(p)
        if v is None or v > len(self.b.d):
            return None
        t = self.pos + v
        return t if 0 <= t < len(self.b.d) else None

    def scalar(self, i, fmt):
        p = self.field_pos(i)
        if p is None:
            return None
        size = struct.calcsize(fmt)
        raw = self.b.raw(p, size)
        return None if raw is None else struct.unpack(fmt, raw)[0]

    def vector(self, i):
        """-> (first_element_pos, count) for field `i` as a vector."""
        p = self.follow(i)
        if p is None:
            return None, 0
        n = self.b.u32(p)
        if n is None or n > MAX_VECTOR:
            self.b.rejects += 1
            return None, 0
        return p + 4, n

    def string(self, i):
        p = self.follow(i)
        if p is None:
            return None
        n = self.b.u32(p)
        if n is None or n > len(self.b.d):
            return None
        return self.b.cstr(p + 4)

    def present(self):
        return [i for i in range(self.nfields) if self.slots[i]]


def guess_stride(b, first, count, limit=64):
    """Smallest g where `count` elements of size g fit between first and end.

    This is a hypothesis, not a measurement: FlatBuffers packs vector elements
    at their schema width with no padding, but a vector of sub-tables stores
    *offsets*, and a vector of offsets is indistinguishable from a vector of
    u32 by length alone. Callers label the result as a guess.
    """
    avail = len(b.d) - first
    if count <= 0:
        return None
    lo = max(1, avail // (count * 8)) if count else None
    for g in range(1, limit + 1):
        if first + count * g <= len(b.d):
            return g
    return None


def describe_vector(b, first, count, depth, label):
    """Print a vector, and if it looks like offsets, follow the first element."""
    pad = "  " * depth
    g = guess_stride(b, first, count)
    if g is None:
        print("%s%s: %d element(s) at %#x, stride indeterminable"
              % (pad, label, count, first))
        return
    print("%s%s: %d element(s) at %#x, stride >= %d (guess)"
          % (pad, label, count, first, g))
    # Show the first few elements as u32, which is exact regardless of the
    # true width -- it just may straddle two narrow elements.
    for k in range(min(4, count)):
        p = first + k * g
        vals = []
        for j in range(g // 4 + 1):
            v = b.u32(p + j * 4)
            vals.append("-" if v is None else "%d" % v)
        print("%s    [%d] %s" % (pad, k, " ".join(vals)))
    if depth + 1 >= MAX_DEPTH:
        return
    if g == 4:
        tgt = b.u32(first)
        if tgt is not None and 0 < tgt < len(b.d):
            sub = Table(b, first + tgt, depth + 1)
            if sub.ok:
                print("%s    element[0] is a table at %#x: %d field(s), "
                      "present %s" % (pad, first + tgt, sub.nfields,
                                      sub.present()))


def walk(path, max_depth):
    raw = open(path, "rb").read()
    b = Buf(raw)
    root = b.u32(0)
    nm = os.path.basename(path)

    if root is None or root + 4 > len(raw):
        print("%-22s %8d bytes  UNREADABLE (root offset %s)"
              % (nm, len(raw), root))
        return None

    t = Table(b, root, 0)
    if not t.ok:
        print("%-22s %8d bytes  root@%#x  no coherent vtable"
              % (nm, len(raw), root))
        return None

    print("%-22s %8d bytes  root@%#-8x vtable@%#-8x vt_len=%d tbl_len=%d "
          "%d field(s)" % (nm, len(raw), root, t.vt, t.vt_len, t.tbl_len,
                           t.nfields))
    print("   fields present: %s" % (t.present() or "none"))

    for i in range(t.nfields):
        if not t.slots[i]:
            continue
        p = t.field_pos(i)
        raw32 = b.u32(p)
        # Try the interpretations in decreasing order of specificity and report
        # which one fits, rather than asserting one.
        first, n = t.vector(i)
        if n:
            print("   f%d @%#x: vector of %d at %#x   (u32 at field = %s)"
                  % (i, p, n, first, raw32))
            if max_depth:
                describe_vector(b, first, n, 1, "f%d" % i)
            continue
        s = t.string(i)
        if s is not None and s and all(32 <= ord(c) < 127 for c in s):
            print("   f%d @%#x: string %r" % (i, p, s[:64]))
            continue
        sub = Table(b, p, 1) if p is not None else None
        if sub is not None and sub.ok and sub.vt != t.vt:
            print("   f%d @%#x: table (vtable@%#x, %d field(s), present %s)"
                  % (i, p, sub.vt, sub.nfields, sub.present()))
            continue
        print("   f%d @%#x: scalar? u32=%s  u16=%s  f32=%.6g"
              % (i, p, raw32, b.u16(p),
                 struct.unpack("<f", b.raw(p, 4))[0] if b.raw(p, 4) else 0.0))
    print("   (%d reads, %d out-of-bounds rejected)" % (b.reads, b.rejects))
    print()
    return t


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--table", default=None)
    ap.add_argument("--vectors", action="store_true")
    ap.add_argument("--depth", type=int, default=3)
    a = ap.parse_args()

    paths = sorted(glob.glob(PATTERN))
    if a.table:
        paths = [p for p in paths if a.table in os.path.basename(p)]
    if not paths:
        print("no .prmb under romfs_out/bin/battle/data_table/")
        return 1
    print("%d table(s)\n" % len(paths))
    ok = 0
    for p in paths:
        try:
            if walk(p, a.vectors) is not None:
                ok += 1
        except Exception as e:                          # noqa: BLE001
            print("%-22s FAILED: %s" % (os.path.basename(p), e))
    print("%d of %d root tables read" % (ok, len(paths)))
    return 0


if __name__ == "__main__":
    sys.exit(main())