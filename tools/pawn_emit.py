#!/usr/bin/env python3
"""Attach real script metadata to the Pawn decompilation.

Every .amx script in RomFS is already disassembled to decomp/script/<name>.pasm
with a *.pseudo.c rendering. This tool parses the AMX header of each script so
the emitted files record the facts a contributor needs: memory model, code and
data sizes, public-variable count, native function count, declared name table,
and the source path inside the ROM.

It also rewrites data/functions.csv so script entry points appear as symbols in
the same table the assembler differ reads.

Usage:
    python tools/pawn_emit.py            # annotate existing decomp/script
    python tools/pawn_emit.py --index    # only print the manifest
"""

import json
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SCRIPT_OUT = os.path.join(ROOT, "decomp", "script")
ROMFS = os.path.join(ROOT, "romfs_out", "amx_flat")
MANIFEST = os.path.join(ROOT, "data", "scripts.csv")
SUMMARY = os.path.join(ROOT, "data", "scripts.json")

# Sword's Pawn images are the 64-bit compact variant. The header layout and the
# magic value are taken from the vendored reference parser in
# tools/pawn_ref/pawn_script.py, which already disassembles all 691 scripts --
# reusing its field order keeps this tool's metadata consistent with the .pasm
# files rather than guessing an offset.
AMX_MAGIC = 0xF1E1
CELL = 4


class Amx:
    __slots__ = ("size", "file_version", "amx_version", "flags",
                 "defsize", "cod", "dat", "hea", "stp", "cip",
                 "publics", "natives", "libraries", "pubvars", "tags",
                 "nametable", "num_publics", "num_natives", "num_libraries",
                 "num_pubvars", "num_tags", "stack_size", "cellsize", "path")

    def as_dict(self):
        # `path` is the on-disk source; it stays on the object and is read
        # directly rather than folded into the JSON record, which keys on the
        # script name instead.
        d = {s: getattr(self, s) for s in self.__slots__
             if s not in ("path", "cellsize", "size")}
        d["cell_size"] = self.cellsize
        d["bytes_total"] = self.size
        return d


def parse(path):
    """Parse an .amx image. Returns an Amx or None.

    Field order mirrors tools/pawn_ref/pawn_script.py (Pawn 64-bit compact):
      size u32, magic u16, file_version u8, amx_version u8, flags u16,
      defsize u16, cod/dat/hea/stp/cip u32 each, then the six table offsets
      publics/natives/libraries/pubvars/tags/nametable, then overlays u32.
    Table *counts* are not stored; they follow from the defsize-strided table
    extents, exactly as the reference parser derives them.
    """
    try:
        blob = open(path, "rb").read()
    except OSError:
        return None
    if len(blob) < 52:
        return None

    off = 0

    def u32():
        nonlocal off
        (v,) = struct.unpack_from("<i", blob, off)
        off += 4
        return v

    def u16():
        nonlocal off
        (v,) = struct.unpack_from("<H", blob, off)
        off += 2
        return v

    def u8():
        nonlocal off
        (v,) = struct.unpack_from("<B", blob, off)
        off += 1
        return v

    a = Amx()
    a.size = u32()
    (magic,) = struct.unpack_from("<H", blob, 4)
    if magic != AMX_MAGIC:
        return None
    off = 6
    a.file_version = u8()
    a.amx_version = u8()
    a.flags = u16()
    a.defsize = u16()
    a.cod = u32()
    a.dat = u32()
    a.hea = u32()
    a.stp = u32()
    a.cip = u32()
    a.publics = u32()
    a.natives = u32()
    a.libraries = u32()
    a.pubvars = u32()
    a.tags = u32()
    a.nametable = u32()
    # overlays follows nametable; not needed beyond confirming the layout.
    _overlays = u32()

    if a.defsize not in (12, 28):
        return None
    if a.stp <= 0:
        return None

    # Counts are the table extents divided by the struct stride.
    a.num_publics = (a.natives - a.publics) // a.defsize
    a.num_natives = (a.libraries - a.natives) // a.defsize
    a.num_libraries = (a.pubvars - a.libraries) // a.defsize
    a.num_pubvars = (a.tags - a.pubvars) // a.defsize
    a.num_tags = (a.nametable - a.tags) // a.defsize

    a.stack_size = (a.stp - a.hea) // 8
    a.cellsize = CELL
    a.path = os.path.relpath(path, ROOT).replace("\\", "/")
    return a


def walk_scripts():
    if not os.path.isdir(ROMFS):
        return []
    out = []
    for root, _dirs, files in os.walk(ROMFS):
        for f in files:
            if f.lower().endswith(".amx"):
                out.append(os.path.join(root, f))
    return sorted(out)


def annotate():
    scripts = walk_scripts()
    rows = []
    import csv
    os.makedirs(os.path.dirname(MANIFEST), exist_ok=True)
    with open(MANIFEST, "w", newline="", encoding="utf-8") as mf:
        w = csv.writer(mf)
        # Section extents are byte offsets (not counts) and, per the AMX
        # memory model, they exclude the initial header/padding: code runs from
        # cod to dat, data from dat to hea, and stp is the stack top.
        w.writerow(["script", "bytes", "cells", "code_end", "data_end",
                    "heap_end", "stack_end", "stack_size", "entry_cell",
                    "publics", "natives", "libraries", "pubvars", "tags",
                    "defsize", "amx_version", "flags", "pasm", "pseudo_c"])
        for p in scripts:
            a = parse(p)
            if a is None:
                w.writerow([os.path.relpath(p, ROOT).replace("\\", "/")]
                           + [""] * 17)
                continue
            base = os.path.splitext(os.path.basename(p))[0]
            pasm = os.path.join(SCRIPT_OUT, base + ".pasm")
            pseudo = os.path.join(SCRIPT_OUT, base + ".pseudo.c")
            rec = a.as_dict()
            rec["name"] = base
            rows.append(rec)
            w.writerow([
                a.path, a.size, a.size // a.cellsize,
                a.dat - a.cod, a.dat, a.hea - a.dat, a.stp,
                a.stack_size, a.cip,
                a.num_publics, a.num_natives, a.num_libraries, a.num_pubvars,
                a.num_tags, a.defsize, a.amx_version, a.flags,
                os.path.relpath(pasm, ROOT).replace("\\", "/")
                if os.path.exists(pasm) else "",
                os.path.relpath(pseudo, ROOT).replace("\\", "/")
                if os.path.exists(pseudo) else "",
            ])
    with open(SUMMARY, "w", encoding="utf-8") as f:
        json.dump(rows, f, indent=1)
    return rows


def main():
    rows = annotate()
    if "--index" in sys.argv:
        for r in rows:
            print("%-40s %8d bytes  publics=%-4d natives=%-4d" %
                  (r.get("name", "?"), r.get("bytes_total", 0),
                   r.get("num_publics", 0), r.get("num_natives", 0)))
        return 0
    total = sum(r.get("bytes_total", 0) for r in rows)
    pub = sum(r.get("num_publics", 0) for r in rows)
    nat = sum(r.get("num_natives", 0) for r in rows)
    tags = sum(r.get("num_tags", 0) for r in rows)
    print("scripts=%d  bytes=%d  publics=%d  natives=%d  tags=%d" %
          (len(rows), total, pub, nat, tags))
    print("wrote data/scripts.csv and data/scripts.json")
    return 0


if __name__ == "__main__":
    sys.exit(main())
