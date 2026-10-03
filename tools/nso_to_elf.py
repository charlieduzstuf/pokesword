#!/usr/bin/env python3
"""Rebuild a loadable AArch64 ELF from a decompressed Switch NSO module.

A decomp project needs its original binary as an ELF so that `objdump`,
`asm-differ`, `tools/check.py` and `pyelftools` can consume it. Switch NSO
modules are position independent with image base 0, so the recovered segment
virtual addresses map 1:1 onto ELF virtual addresses and the recovered
function offsets (already RVAs from 0) need no relocation.

The output carries a real .symtab built from `functions_eh.txt` (compiler
unwind tables -> authoritative function boundaries) plus `names.txt`
(recovered demangled names), so every function is a named STT_FUNC symbol.

Usage:
    python nso_to_elf.py --all              # every module -> data/<mod>.elf
    python nso_to_elf.py main               # a single module
"""

import json
import os
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
WORK = os.path.join(ROOT, "work")
DATA = os.path.join(ROOT, "data")

MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]

PAGE = 0x1000
ET_EXEC = 2
EM_AARCH64 = 183
EV_CURRENT = 1
ELFCLASS64 = 2
ELFDATA2LSB = 1

PT_LOAD = 1
PT_PHDR = 6
PF_X, PF_W, PF_R = 1, 2, 4

SHT_PROGBITS = 1
SHT_SYMTAB = 2
SHT_STRTAB = 3
SHT_NOBITS = 8

SHF_WRITE = 1
SHF_ALLOC = 2
SHF_EXECINSTR = 4

STT_FUNC = 2
STT_OBJECT = 1
STT_FILE = 4
STB_LOCAL = 0
STB_GLOBAL = 1


def align_up(v, a=PAGE):
    return (v + a - 1) & ~(a - 1)


def load_names(mod):
    """address -> recovered demangled name."""
    names = {}
    p = os.path.join(WORK, mod, "names.txt")
    if not os.path.exists(p):
        return names
    with open(p, encoding="utf-8") as f:
        for line in f:
            line = line.rstrip("\n")
            if not line:
                continue
            addr, _, nm = line.partition(" ")
            try:
                names[int(addr, 16)] = nm.strip()
            except ValueError:
                continue
    return names


def load_functions(mod):
    p = os.path.join(WORK, mod, "functions_eh.txt")
    addrs = []
    with open(p) as f:
        for tok in f.read().split():
            addrs.append(int(tok, 16))
    addrs.sort()
    return addrs


def func_sizes(addrs, text_len):
    """Size of each function up to the next entry (or .text end)."""
    out = {}
    for i, a in enumerate(addrs):
        end = addrs[i + 1] if i + 1 < len(addrs) else text_len
        out[a] = max(0, end - a)
    return out


def load_functions(mod):
    """Function starts, preferring the compiler's unwind table.

    `rtld` ships no .eh_frame_hdr, so fall back to the xref analysis' entry
    list (the same fallback tools/decomp_project.py uses) and finally to the
    recovered symbol addresses.
    """
    p = os.path.join(WORK, mod, "functions_eh.txt")
    if os.path.exists(p):
        addrs = sorted(int(a, 16) for a in open(p).read().split())
        if addrs:
            return addrs

    xp = os.path.join(WORK, mod, "xrefs.json")
    if os.path.exists(xp):
        addrs = sorted(int(e["addr"]) for e in json.load(open(xp)))
        if addrs:
            return addrs

    names_path = os.path.join(WORK, mod, "names.txt")
    if os.path.exists(names_path):
        addrs = []
        for line in open(names_path, encoding="utf-8"):
            a, _, _nm = line.rstrip("\n").partition(" ")
            try:
                addrs.append(int(a, 16))
            except ValueError:
                pass
        return sorted(set(addrs))
    return []


class StrTab:
    def __init__(self):
        self.buf = bytearray(b"\0")
        self.off = {}

    def add(self, s):
        if not s:
            return 0
        prev = self.off.get(s)
        if prev is not None:
            return prev
        off = len(self.buf)
        self.buf += s.encode("utf-8", "replace") + b"\0"
        self.off[s] = off
        return off

    def bytes(self):
        return bytes(self.buf)


def sanitise(name):
    """Keep the ELF string table printable and free of NULs."""
    out = []
    for ch in name:
        o = ord(ch)
        if o < 0x20 or o == 0x7F:
            out.append("_")
        else:
            out.append(ch)
    return "".join(out) or "sub"


def build(mod):
    wdir = os.path.join(WORK, mod)
    man = json.load(open(os.path.join(wdir, "manifest.json")))
    segs = man["segments"]

    blobs = {}
    for key in ("text", "rodata", "data"):
        p = os.path.join(wdir, segs[key]["path"])
        blobs[key] = open(p, "rb").read() if os.path.exists(p) else b""

    mod0 = man.get("mod0") or {}
    bss_start = mod0.get("bss_start") or (segs["data"]["memoff"] + len(blobs["data"]))
    bss_end = mod0.get("bss_end") or bss_start
    bss_size = max(0, bss_end - bss_start)

    # ---- layout ---------------------------------------------------------
    # Header + program headers first, then every segment on a page boundary.
    # All Sword module virtual addresses are page aligned, so a page aligned
    # file offset keeps p_offset == p_vaddr (mod pagesize) as PT_LOAD wants.
    nseg = 3
    ehsize, phentsize, shentsize = 64, 56, 64
    phnum = nseg + 1  # + PT_PHDR
    cursor = align_up(ehsize + phnum * phentsize)

    order = [("text", PF_R | PF_X, SHF_ALLOC | SHF_EXECINSTR),
             ("rodata", PF_R, SHF_ALLOC),
             ("data", PF_R | PF_W, SHF_ALLOC | SHF_WRITE)]
    placed = {}
    for key, _pflags, _sflags in order:
        off = align_up(cursor)
        placed[key] = (off, len(blobs[key]))
        cursor = off + len(blobs[key])

    symtab_off = align_up(cursor, 8)

    # ---- symbol table ---------------------------------------------------
    strtab = StrTab()
    strtab.add(sanitise("%s.elf" % mod))
    # STT_FILE must be the first symbol.
    symbols = [(0, STT_FILE, STB_LOCAL, 0, 0,
                strtab.add(sanitise(mod)))]

    names = load_names(mod)
    addrs = load_functions(mod)
    sizes = func_sizes(addrs, len(blobs["text"]))

    # A few anchors every module exposes, so the symbol table reads well in
    # objdump even where the unwind table has no entry. Skip any anchor the
    # unwind table already covers, otherwise it becomes a duplicate symbol at
    # the same address.
    in_set = set(addrs)
    anchors = [(0x30, "_start")]
    for a, nm in anchors:
        if a in in_set:
            continue
        symbols.append((a, STT_FUNC, STB_GLOBAL,
                        sizes.get(a, 0), 1, strtab.add(sanitise(nm))))

    for a in addrs:
        nm = names.get(a) or ("sub_%x" % a)
        symbols.append((a, STT_FUNC, STB_GLOBAL,
                        sizes.get(a, 0), 1, strtab.add(sanitise(nm))))

    # Local aliases for section anchors make disassembly readable.
    for key, _pf, _sf in order:
        nm = {"text": "_text_start", "rodata": "_rodata_start",
              "data": "_data_start"}[key]
        symbols.append((segs[key]["memoff"], STT_OBJECT, STB_LOCAL,
                        len(blobs[key]), 1, strtab.add(nm)))

    # Symtab must be sorted by (shndx-ish locality, value) for correctness:
    # STT_FILE first, then everything ordered by value.
    symbols.sort(key=lambda s: (0 if s[1] == STT_FILE else 1, s[0]))

    symsz = 24 * len(symbols)
    strtab_off = symtab_off + symsz
    strtab_data = strtab.bytes()

    # ---- section headers ------------------------------------------------
    # .shstrtab holds the section names, so it has to be laid out *before* the
    # section header table; otherwise the headers overwrite the tail of the
    # name table and every section ends up unnamed (pyelftools' then returns
    # None for get_section_by_name).
    shstr = StrTab()
    sec_names = ["", ".text", ".rodata", ".data", ".bss",
                 ".symtab", ".strtab", ".shstrtab"]
    sh_name_off = [shstr.add(n) for n in sec_names]
    shstr_data = shstr.bytes()

    nsec = len(sec_names)
    shstr_off = strtab_off + len(strtab_data)
    shoff = align_up(shstr_off + len(shstr_data), 8)
    total = shoff + nsec * shentsize

    # ---- emit -----------------------------------------------------------
    out = bytearray(total)

    # ELF header
    struct.pack_into(
        "<16sHHIQQQIHHHHHH", out, 0,
        b"\x7fELF" + bytes([ELFCLASS64, ELFDATA2LSB, EV_CURRENT, 0]) + b"\0" * 8,
        ET_EXEC, EM_AARCH64, EV_CURRENT,
        0x30,                      # e_entry (_start)
        ehsize,                    # e_phoff
        shoff,                     # e_shoff
        0,                         # e_flags
        ehsize, phentsize, phnum, shentsize, nsec,
        sec_names.index(".shstrtab"))

    # Program headers
    ph = []
    # PT_PHDR covers the program header table itself.
    ph.append((PT_PHDR, PF_R, ehsize, ehsize, phnum * phentsize, PAGE))
    for key, pflags, _sflags in order:
        off, sz = placed[key]
        ph.append((PT_LOAD, pflags, off, segs[key]["memoff"], sz, PAGE))
    if bss_size:
        off, sz = placed["data"]
        ph.append((PT_LOAD, PF_R | PF_W, off + sz, bss_start, bss_size, PAGE))

    for i, (pt, pf, po, pv, pfs, pa) in enumerate(ph):
        struct.pack_into("<IIQQQQQQ", out, ehsize + i * phentsize,
                         pt, pf, po, pv, pv, pfs, pfs, pa)

    # Segment bytes
    for key, _pf, _sf in order:
        off, _sz = placed[key]
        out[off:off + len(blobs[key])] = blobs[key]

    # Symbol table
    for i, (val, typ, bind, size, shndx, nameoff) in enumerate(symbols):
        struct.pack_into("<IBBHQQ", out, symtab_off + i * 24,
                         nameoff, (bind << 4) | typ, 0, shndx, val, size)

    out[strtab_off:strtab_off + len(strtab_data)] = strtab_data
    out[shstr_off:shstr_off + len(shstr_data)] = shstr_data

    # Section header table
    def sh(idx, name, typ, flags, addr, offset, size, link=0, info=0,
           align=1, entsize=0):
        struct.pack_into("<IIQQQQIIQQ", out, shoff + idx * shentsize,
                         sh_name_off[name], typ, flags, addr, offset, size,
                         link, info, align, entsize)

    sh(0, 0, 0, 0, 0, 0, 0)                      # SHT_NULL
    sh(1, 1, SHT_PROGBITS, order[0][2], segs["text"]["memoff"],
       placed["text"][0], len(blobs["text"]), align=4)
    sh(2, 2, SHT_PROGBITS, order[1][2], segs["rodata"]["memoff"],
       placed["rodata"][0], len(blobs["rodata"]), align=8)
    sh(3, 3, SHT_PROGBITS, order[2][2], segs["data"]["memoff"],
       placed["data"][0], len(blobs["data"]), align=8)
    if bss_size:
        sh(4, 4, SHT_NOBITS, SHF_ALLOC | SHF_WRITE, bss_start,
           placed["data"][0] + placed["data"][1], bss_size, align=8)
    else:
        sh(4, 4, SHT_NOBITS, 0, 0, 0, 0, align=8)
    sh(5, 5, SHT_SYMTAB, 0, 0, symtab_off, symsz,
       link=6, info=1, align=8, entsize=24)
    sh(6, 6, SHT_STRTAB, 0, 0, strtab_off, len(strtab_data), align=1)
    sh(7, 7, SHT_STRTAB, 0, 0, shstr_off, len(shstr_data), align=1)

    os.makedirs(DATA, exist_ok=True)
    dst = os.path.join(DATA, "%s.elf" % mod)
    with open(dst, "wb") as f:
        f.write(out)
    return dst, len(symbols), len(addrs), len(out)


def main(argv):
    mods = MODULES
    if len(argv) == 2 and argv[1] != "--all":
        mods = [argv[1]]
    rc = 0
    for mod in mods:
        try:
            dst, nsym, nfn, size = build(mod)
            print("%-8s -> %s  (%d symbols, %d funcs, %.1f MB)" %
                  (mod, os.path.relpath(dst, ROOT), nsym, nfn, size / 1048576.0))
        except Exception as e:
            print("%-8s FAILED: %s" % (mod, e), file=sys.stderr)
            rc = 1
    return rc


if __name__ == "__main__":
    sys.exit(main(sys.argv))
