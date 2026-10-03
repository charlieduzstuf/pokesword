#!/usr/bin/env python3
"""Nintendo Switch container extractor: NSP (PFS0) -> HFS0 -> RomFS.

Pokemon Sword ships as an NSP whose first partition is a PFS0 holding the
program (exefs) and whose second partition is a zstd-compressed HFS0 holding
the base game RomFS plus any updates.  This pulls the pieces out so the
decompilation pipeline has something to work on.

Usage:
    python nsp_extract.py list   <nsp>
    python nsp_extract.py get    <nsp> <partition> <out>
    python nsp_extract.py unpack <nsp> <outdir>
"""

import os
import struct
import sys

import zstandard

PFS0_MAGIC = b"PFS0"
HFS0_MAGIC = b"HFS0"
EMPTY = 0xFFFFFFFF


class Reader:
    """Random-access view over a file, shared by the container parsers."""

    def __init__(self, path):
        self.f = open(path, "rb")
        self.path = path

    def close(self):
        self.f.close()

    def __enter__(self):
        return self

    def __exit__(self, *a):
        self.close()

    def read_at(self, off, size):
        self.f.seek(off)
        return self.f.read(size)

    def u32(self, off):
        return struct.unpack_from("<I", self.read_at(off, 4))[0]

    def u64(self, off):
        return struct.unpack_from("<Q", self.read_at(off, 8))[0]

    def copy_to(self, off, size, path):
        with open(path, "wb") as g:
            left, pos = size, off
            while left:
                chunk = self.read_at(pos, min(left, 1 << 24))
                if not chunk:
                    raise EOFError("short read at %#x" % pos)
                g.write(chunk)
                pos += len(chunk)
                left -= len(chunk)
        return path


def _name_table(rdr, str_base, str_size):
    return rdr.read_at(str_base, str_size)


def _names(names, off):
    end = names.index(b"\0", off)
    return names[off:end].decode("utf-8", "replace")


def parse_pfs0(rdr, base=0):
    """[magic][count][strtab size][0x10000 pad][count * 0x18][strtab][data]"""
    assert rdr.read_at(base, 4) == PFS0_MAGIC, "not a PFS0 partition"
    count = rdr.u32(base + 4)
    str_size = rdr.u32(base + 8)
    entry_base = base + 0x10 + 0x10000
    str_base = entry_base + count * 0x18
    names = _name_table(rdr, str_base, str_size)
    out = []
    for i in range(count):
        data_off, data_size, name_off = struct.unpack_from(
            "<QQI", rdr.read_at(entry_base + i * 0x18, 0x18), 0)
        out.append((_names(names, name_off), str_base + data_off, data_size))
    return out


def parse_hfs0(rdr, base=0):
    """[magic][count][strtab size][reserved][0x200 pad][count * 0x40][strtab][data]"""
    assert rdr.read_at(base, 4) == HFS0_MAGIC, "not an HFS0 partition"
    count = rdr.u32(base + 4)
    str_size = rdr.u32(base + 8)
    entry_base = base + 0x200
    str_base = entry_base + count * 0x40
    names = _name_table(rdr, str_base, str_size)
    out = []
    for i in range(count):
        data_off, data_size, name_off = struct.unpack_from(
            "<QQI", rdr.read_at(entry_base + i * 0x40, 0x18), 0)
        out.append((_names(names, name_off), str_base + data_off, data_size))
    return out


def decompress_zstd(src, dst):
    dctx = zstandard.ZstdDecompressor()
    with open(src, "rb") as i, open(dst, "wb") as o:
        dctx.copy_stream(i, o, read_size=1 << 22, write_size=1 << 22)
    return dst


def cmd_list(nsp):
    with Reader(nsp) as rdr:
        parts = parse_pfs0(rdr)
    for name, off, size in parts:
        print("%-24s offset=%#012x size=%12d (%.2f GiB)" % (name, off, size, size / (1 << 30)))
    return 0


def cmd_get(nsp, want, out):
    with Reader(nsp) as rdr:
        parts = parse_pfs0(rdr)
        names = {n: (o, s) for n, o, s in parts}
        if want in names:
            off, size = names[want]
            rdr.copy_to(off, size, out)
        elif want + ".zst" in names:
            off, size = names[want + ".zst"]
            tmp = out + ".raw.zst"
            rdr.copy_to(off, size, tmp)
            decompress_zstd(tmp, out)
            os.remove(tmp)
        else:
            print("no such partition:", want, "have:", sorted(names))
            return 1
    print("wrote", out, os.path.getsize(out))
    return 0


def extract_romfs(rdr, base, outdir):
    """Walk a RomFS image and write the tree out.

    Header is 0x50 bytes: header_size then four (offset, size) table locations
    for the directory hash/meta and file hash/meta tables, then data_offset.
    All table offsets are relative to base + header_size; data_offset is
    relative to base.
    """
    hdr = rdr.read_at(base, 0x50)
    header_size = struct.unpack_from("<Q", hdr, 0)[0]
    d_hash_off, d_hash_size, d_meta_off, d_meta_size, \
        f_hash_off, f_hash_size, f_meta_off, f_meta_size, data_offset = \
        struct.unpack_from("<QQQQQQQQQ", hdr, 8)

    table_base = base + header_size
    d_meta = table_base + d_meta_off
    f_meta = table_base + f_meta_off
    data_base = base + data_offset

    cache = {}

    def dir_entry(off):
        if off not in cache:
            parent, sibling, child_dir, child_file, _h, name_len = \
                struct.unpack_from("<IIIIII", rdr.read_at(d_meta + off, 0x18), 0)
            name = rdr.read_at(d_meta + off + 0x18, name_len).decode("utf-8", "replace")
            cache[off] = (parent, sibling, child_dir, child_file, name)
        return cache[off]

    def file_entry(off):
        parent, sibling, doff, dsize, _h, name_len = \
            struct.unpack_from("<IIQQII", rdr.read_at(f_meta + off, 0x20), 0)
        name = rdr.read_at(f_meta + off + 0x20, name_len).decode("utf-8", "replace")
        return parent, sibling, doff, dsize, name

    n_files = n_dirs = 0

    def walk_files(this, path):
        nonlocal n_files
        while this != EMPTY:
            _p, sibling, doff, dsize, name = file_entry(this)
            os.makedirs(path, exist_ok=True)
            target = os.path.join(path, name)
            if dsize:
                rdr.copy_to(data_base + doff, dsize, target)
                n_files += 1
            else:
                os.makedirs(target, exist_ok=True)
            this = sibling

    def walk_dirs(this, path):
        nonlocal n_dirs
        while this != EMPTY:
            _p, sibling, child_dir, child_file, name = dir_entry(this)
            cur = os.path.join(path, name) if name else path
            os.makedirs(cur, exist_ok=True)
            if child_file != EMPTY:
                walk_files(child_file, cur)
            if child_dir != EMPTY:
                walk_dirs(child_dir, cur)
            n_dirs += 1
            this = sibling

    os.makedirs(outdir, exist_ok=True)
    root = dir_entry(0)
    walk_files(root[3], outdir)
    if root[2] != EMPTY:
        walk_dirs(root[2], outdir)
    return n_dirs, n_files


def cmd_unpack(nsp, outdir):
    os.makedirs(outdir, exist_ok=True)
    with Reader(nsp) as rdr:
        parts = parse_pfs0(rdr)
        for name, off, size in parts:
            print("partition %-6s size=%12d (%.2f GiB)" % (name, size, size / (1 << 30)))
        hfs = [p for p in parts if p[0].startswith("2")]
        if not hfs:
            print("no HFS0 partition in this container")
            return 1
        name, off, size = hfs[0]
        raw = os.path.join(outdir, "hfs0.bin")
        if name.endswith(".zst"):
            z = raw + ".zst"
            print("decompressing %s ..." % name)
            rdr.copy_to(off, size, z)
            decompress_zstd(z, raw)
            os.remove(z)
        else:
            rdr.copy_to(off, size, raw)
        with Reader(raw) as hr:
            entries = parse_hfs0(hr)
            hdir = os.path.join(outdir, "hfs0")
            os.makedirs(hdir, exist_ok=True)
            for hname, hoff, hsize in entries:
                print("  hfs0 %-30s size=%12d" % (hname, hsize))
                if hname.startswith("romfs"):
                    d, f = extract_romfs(hr, hoff, os.path.join(outdir, "romfs"))
                    print("    -> romfs: %d dirs, %d files" % (d, f))
                elif hsize <= (1 << 30):
                    hr.copy_to(hoff, hsize, os.path.join(hdir, hname))
        os.remove(raw)
    return 0


def main(argv):
    if len(argv) < 3:
        print(__doc__)
        return 1
    cmd, nsp = argv[1], argv[2]
    if cmd == "list":
        return cmd_list(nsp)
    if cmd == "get":
        return cmd_get(nsp, argv[3], argv[4])
    if cmd == "unpack":
        return cmd_unpack(nsp, argv[3])
    print(__doc__)
    return 1


if __name__ == "__main__":
    sys.exit(main(sys.argv))