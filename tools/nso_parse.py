#!/usr/bin/env python3
"""Parse a Switch NSO0, LZ4-decompress its segments, and mine symbols.

Writes work/<module>/text.bin, rodata.bin, data.bin, manifest.json and, when
the module carries ELF dynamic metadata (sdk, subsdks), dynsym.txt with
(address, size, type, bind, name) rows plus needed.txt (DT_NEEDED libraries).

Usage:
    python nso_parse.py <nso> <workdir>     # one module
    python nso_parse.py --all               # all five Sword modules
"""

import json
import os
import struct
import sys

import lz4.block

NSO_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
                       "exefs", "nso")
WORK_DIR = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
                        "work")

# ELF dynamic tags we care about (SYSV + AArch64).
DT_NULL, DT_NEEDED, DT_STRTAB, DT_SYMTAB = 0, 1, 5, 6
DT_STRSZ, DT_SYMENT = 10, 11
DT_RELA, DT_RELASZ, DT_RELAENT = 7, 8, 9

STT = {0: "NOTYPE", 1: "OBJECT", 2: "FUNC", 3: "SECTION", 4: "FILE",
       5: "COMMON", 6: "TLS", 10: "IFUNC"}
STB = {0: "LOCAL", 1: "GLOBAL", 2: "WEAK"}


def parse_header(buf):
    assert buf[:4] == b"NSO0", "not an NSO0"
    flags = struct.unpack_from("<I", buf, 0x0C)[0]
    segs = {}
    for i, n in enumerate(["text", "rodata", "data"]):
        fo, mo, sz = struct.unpack_from("<III", buf, 0x10 + i * 0x10)
        csz = struct.unpack_from("<I", buf, 0x60 + i * 4)[0]
        segs[n] = {"fileoff": fo, "memoff": mo, "memsz": sz,
                   "compsz": csz, "compressed": bool(flags & (1 << i))}
    mod_off, mod_sz = struct.unpack_from("<II", buf, 0x1C)[0], \
        struct.unpack_from("<II", buf, 0x2C)[0]
    return {"flags": flags, "segments": segs,
            "bss": struct.unpack_from("<I", buf, 0x3C)[0],
            "buildid": buf[0x40:0x60].hex(),
            "modname_off": mod_off, "modname_sz": mod_sz}


def decompress(raw, seg):
    blob = raw[seg["fileoff"]:seg["fileoff"] + seg["compsz"]]
    if not seg["compressed"]:
        data = blob
    else:
        data = lz4.block.decompress(blob, uncompressed_size=seg["memsz"])
    assert len(data) == seg["memsz"], \
        "%s: got %#x want %#x" % (seg, len(data), seg["memsz"])
    return data


def find_dynamic(rodata, ro_base, data, data_base):
    """The .dynamic array lives in rodata or data; find it by tag shape."""
    for blob, base in ((rodata, ro_base), (data, data_base)):
        for off in range(0, len(blob) - 0x20, 8):
            tags = struct.unpack_from("<4q", blob, off)
            if [t for t in tags[::2]] == [DT_NEEDED, DT_NEEDED, DT_NEEDED, DT_NEEDED]:
                return blob, base, off
            good = 0
            for j in range(8):
                t, v = struct.unpack_from("<2q", blob, off + j * 16)
                if 0 <= t <= 35 and (v == 0 or v >= 0x1000 or t in (DT_NULL,)):
                    good += 1
                else:
                    break
            if good >= 6:
                return blob, base, off
    return None, None, None


def read_dynamic(blob, off):
    ents = []
    while True:
        t, v = struct.unpack_from("<2q", blob, off)
        ents.append((t, v if v >= 0 else v + (1 << 64)))
        off += 16
        if t == DT_NULL or len(ents) > 64:
            break
    return dict(ents)


def addr_to_blob(addr, rodata, ro_base, data, data_base):
    if ro_base <= addr < ro_base + len(rodata):
        return rodata[addr - ro_base:], addr - ro_base
    if data_base <= addr < data_base + len(data):
        return data[addr - data_base:], addr - data_base
    return None, None


def parse_dynsym(dyn, rodata, ro_base, data, data_base):
    if DT_SYMTAB not in dyn or DT_STRTAB not in dyn:
        return [], []
    symtab, strtab = dyn[DT_SYMTAB], dyn[DT_STRTAB]
    strsz = dyn.get(DT_STRSZ, 0x10000)
    syment = dyn.get(DT_SYMENT, 24)
    sblob, _ = addr_to_blob(strtab, rodata, ro_base, data, data_base)
    yblob, _ = addr_to_blob(symtab, rodata, ro_base, data, data_base)
    if sblob is None or yblob is None:
        return [], []
    strs = sblob[:strsz]
    syms = []
    for off in range(0, len(yblob) - syment + 1, syment):
        name, info, _other, _shndx, val, size = \
            struct.unpack_from("<IBBHQQ", yblob, off)
        if val == 0 and size == 0 and name == 0:
            continue
        end = strs.find(b"\0", name)
        nm = strs[name:end].decode("utf-8", "replace") if end >= 0 else ""
        syms.append((val, size, STT.get(info & 0xF, "?"), STB.get(info >> 4, "?"), nm))
        if len(syms) > 200000:
            break
    return syms, []


# ------------------------------------------------------------------ MOD0
def parse_mod0(text, rodata, ro_base, data, data_base):
    """NSO .text opens with an entry stub then a MOD0 header of RVAs
    (module base = image base)."""
    for base in (0, 8):
        if text[base:base + 4] == b"MOD0":
            dyn, bss_s, bss_e, eh_s, eh_e, modobj = \
                struct.unpack_from("<6I", text, base + 4)
            return {"dynamic": dyn, "bss_start": bss_s, "bss_end": bss_e,
                    "eh_frame_hdr_start": eh_s, "eh_frame_hdr_end": eh_e,
                    "module_object": modobj, "offset": base}
    return None


def rva_blob(rva, text, rodata, ro_base, data, data_base):
    if rva < len(text):
        return text[rva:], 0
    if ro_base <= rva < ro_base + len(rodata):
        return rodata[rva - ro_base:], ro_base
    if data_base <= rva < data_base + len(data):
        return data[rva - data_base:], data_base
    return None, None


# ------------------------------------------------------- .eh_frame_hdr
def _read_eh_ptr(blob, off, enc, base):
    """Decode a DWARF EH pointer; returns (value, new_off). Supports the
    absolute and pcrel|sdata4/sdata8/udata4/udata8 forms clang emits."""
    if enc == 0xFF:
        return None, off
    fmt = enc & 0x0F
    rel = enc & 0x70
    if fmt == 0x00:
        v = struct.unpack_from("<Q", blob, off)[0]
        off += 8
    elif fmt == 0x03:
        v = struct.unpack_from("<I", blob, off)[0]
        off += 4
    elif fmt == 0x04:
        v = struct.unpack_from("<Q", blob, off)[0]
        off += 8
    elif fmt == 0x0A:
        v = struct.unpack_from("<h", blob, off)[0]
        off += 2
    elif fmt == 0x0B:
        v = struct.unpack_from("<i", blob, off)[0]
        off += 4
    elif fmt == 0x0C:
        v = struct.unpack_from("<q", blob, off)[0]
        off += 8
    else:
        return None, off
    if rel == 0x10:  # pcrel
        v = (base + off - (8 if fmt == 0x00 or fmt == 0x04 else
                           4 if fmt in (0x03, 0x0B) else
                           8 if fmt == 0x0C else 2) + v) & 0xFFFFFFFFFFFFFFFF
    return v & 0xFFFFFFFFFFFFFFFF, off


def parse_eh_frame_hdr(text, rodata, ro_base, data, data_base, mod0):
    rva0 = mod0["eh_frame_hdr_start"]
    blob, _ = rva_blob(rva0, text, rodata, ro_base, data, data_base)
    if blob is None:
        return []
    # The header signature clang emits; tolerate a few bytes of leading pad.
    hdr_off = None
    for o in range(0, 32):
        if blob[o:o + 4] == b"\x01\x1b\x03\x3b":
            hdr_off = o
            break
    if hdr_off is None:
        return []
    hdr_rva = rva0 + hdr_off
    count = struct.unpack_from("<I", blob, hdr_off + 8)[0]
    if count > 4000000:
        return []
    tab = hdr_off + 12
    funcs = []
    prev = -1
    for _ in range(count):
        loc = struct.unpack_from("<i", blob, tab)[0]
        _fde = struct.unpack_from("<i", blob, tab + 4)[0]
        tab += 8
        a = (hdr_rva + loc) & 0xFFFFFFFFFFFFFFFF
        # Sanity: function starts ascend and stay inside .text.
        if a <= prev or a >= len(text):
            break
        prev = a
        funcs.append(a)
    return funcs


def process(nso_path, outdir):
    raw = open(nso_path, "rb").read()
    hdr = parse_header(raw)
    os.makedirs(outdir, exist_ok=True)
    segs = {}
    for n, seg in hdr["segments"].items():
        data = decompress(raw, seg)
        open(os.path.join(outdir, n + ".bin"), "wb").write(data)
        segs[n] = dict(seg, vaddr=seg["memoff"], path=n + ".bin")
    rodata = open(os.path.join(outdir, "rodata.bin"), "rb").read()
    data = open(os.path.join(outdir, "data.bin"), "rb").read()
    modname = ""
    try:
        ro = hdr["segments"]["rodata"]
        if ro["memoff"] <= hdr["modname_off"] < ro["memoff"] + ro["memsz"]:
            mo = hdr["modname_off"] - ro["memoff"]
            modname = rodata[mo:mo + hdr["modname_sz"]].split(b"\0")[0].decode("ascii", "replace")
    except Exception:
        pass
    manifest = {"module": os.path.basename(outdir), "modname": modname,
                "buildid": hdr["buildid"], "bss": hdr["bss"], "segments": segs}
    syms = []
    mod0 = parse_mod0(open(os.path.join(outdir, "text.bin"), "rb").read(),
                      rodata, hdr["segments"]["rodata"]["memoff"],
                      data, hdr["segments"]["data"]["memoff"])
    manifest["mod0"] = mod0
    text = open(os.path.join(outdir, "text.bin"), "rb").read()
    funcs = []
    if mod0 and mod0["eh_frame_hdr_start"] and mod0["eh_frame_hdr_end"]:
        funcs = parse_eh_frame_hdr(text, rodata,
                                   hdr["segments"]["rodata"]["memoff"],
                                   data, hdr["segments"]["data"]["memoff"], mod0)
    manifest["eh_functions"] = len(funcs)
    with open(os.path.join(outdir, "functions_eh.txt"), "w") as f:
        for a in funcs:
            f.write("%x\n" % a)
    # Dynamic metadata via MOD0 (authoritative) instead of heuristics.
    if mod0 and mod0["dynamic"]:
        dblob, _ = rva_blob(mod0["dynamic"], text, rodata,
                            hdr["segments"]["rodata"]["memoff"],
                            data, hdr["segments"]["data"]["memoff"])
        if dblob is not None:
            dyn = read_dynamic(dblob, 0)
            manifest["dynamic"] = {hex(k): hex(v) for k, v in dyn.items()}
            syms, _ = parse_dynsym(dyn, rodata,
                                   hdr["segments"]["rodata"]["memoff"],
                                   data, hdr["segments"]["data"]["memoff"])
    with open(os.path.join(outdir, "dynsym.txt"), "w", encoding="utf-8") as f:
        for val, size, typ, bind, nm in syms:
            f.write("%x %x %s %s %s\n" % (val, size, typ, bind, nm))
    manifest["dynsym_count"] = len(syms)
    json.dump(manifest, open(os.path.join(outdir, "manifest.json"), "w"), indent=1)
    funcs = sum(1 for s in syms if s[2] == "FUNC" and s[0])
    objs = sum(1 for s in syms if s[2] == "OBJECT" and s[0])
    print("%-8s modname=%-12s text=%#x rodata=%#x data=%#x bss=%#x dynsym=%d (func=%d obj=%d)" % (
        manifest["module"], modname,
        hdr["segments"]["text"]["memsz"], hdr["segments"]["rodata"]["memsz"],
        hdr["segments"]["data"]["memsz"], hdr["bss"], len(syms), funcs, objs))
    return manifest


def main(argv):
    if len(argv) == 2 and argv[1] == "--all":
        for m in ["rtld", "main", "sdk", "subsdk0", "subsdk1"]:
            process(os.path.join(NSO_DIR, m), os.path.join(WORK_DIR, m))
        return 0
    if len(argv) == 3:
        process(argv[1], argv[2])
        return 0
    print(__doc__)
    return 1


if __name__ == "__main__":
    sys.exit(main(sys.argv))