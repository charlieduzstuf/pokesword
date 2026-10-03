#!/usr/bin/env python3
"""Read a decrypted Nintendo Switch RomFS image (raw, header_size == 0x50).

Usage:
    python romfs_extract.py list <romfs.bin>
    python romfs_extract.py get  <romfs.bin> <romfs/path> <out>
    python romfs_extract.py tree <romfs.bin> [maxdepth]
"""

import os
import struct
import sys

EMPTY = 0xFFFFFFFF


class Image:
    def __init__(self, path):
        self.f = open(path, "rb")

    def read(self, off, n):
        self.f.seek(off)
        return self.f.read(n)

    def copy(self, off, n, out):
        self.f.seek(off)
        with open(out, "wb") as g:
            left = n
            while left:
                b = self.f.read(min(left, 1 << 22))
                if not b:
                    break
                g.write(b)
                left -= len(b)


class RomFS:
    def __init__(self, img):
        h = img.read(0, 0x50)
        (self.hsize, self.dhash_off, self.dhash_sz, self.dmeta_off,
         self.dmeta_sz, self.fhash_off, self.fhash_sz, self.fmeta_off,
         self.fmeta_sz, self.data_off) = struct.unpack_from("<10Q", h, 0)
        assert self.hsize == 0x50, "not a raw RomFS (hsize=%#x)" % self.hsize
        self.img = img
        self.dmeta = img.read(self.dmeta_off, self.dmeta_sz)
        self.fmeta = img.read(self.fmeta_off, self.fmeta_sz)

    def dirent(self, off):
        p, sib, cdir, cfile, _h, nl = struct.unpack_from("<IIIIII", self.dmeta, off)
        name = self.dmeta[off + 0x18:off + 0x18 + nl].decode("utf-8", "replace")
        return p, sib, cdir, cfile, name

    def fent(self, off):
        p, sib, doff, dsz, _h, nl = struct.unpack_from("<IIQQII", self.fmeta, off)
        name = self.fmeta[off + 0x20:off + 0x20 + nl].decode("utf-8", "replace")
        return p, sib, doff, dsz, name

    def walk(self):
        """Yield (path, is_dir, size, data_off) for every entry."""
        out = []

        def files(this, path):
            while this != EMPTY:
                _p, sib, doff, dsz, name = self.fent(this)
                out.append((path + "/" + name if path else name, False, dsz, doff))
                this = sib

        def dirs(this, path):
            while this != EMPTY:
                _p, sib, cdir, cfile, name = self.dirent(this)
                cur = (path + "/" + name) if path else name
                if name:
                    out.append((cur, True, 0, 0))
                if cfile != EMPTY:
                    files(cfile, cur)
                if cdir != EMPTY:
                    dirs(cdir, cur)
                this = sib

        _p, sib, cdir, cfile, _n = self.dirent(0)
        files(cfile, "")
        if cdir != EMPTY:
            dirs(cdir, "")
        return out


def main(argv):
    if len(argv) < 3:
        print(__doc__)
        return 1
    img = Image(argv[2])
    r = RomFS(img)
    if argv[1] == "list":
        for path, is_dir, size, _o in r.walk():
            print("%-9s %12d  %s" % ("<dir>" if is_dir else size, size, path))
    elif argv[1] == "tree":
        maxd = int(argv[3]) if len(argv) > 3 else 3
        for path, is_dir, size, _o in r.walk():
            if path.count("/") <= maxd:
                print(("d " if is_dir else "f ") + path + ("" if is_dir else " (%d)" % size))
    elif argv[1] == "get":
        want = argv[3].strip("/")
        for path, is_dir, size, doff in r.walk():
            if path == want and not is_dir:
                os.makedirs(os.path.dirname(os.path.abspath(argv[4])), exist_ok=True)
                img.copy(r.data_off + doff, size, argv[4])
                print("wrote %s (%d bytes)" % (argv[4], size))
                return 0
        print("not found:", want)
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))