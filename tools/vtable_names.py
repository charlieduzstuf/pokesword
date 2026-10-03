#!/usr/bin/env python3
"""RECOVER CLASS NAMES FROM VTABLES -- MEASURED NEGATIVE RESULT, KEPT AS A RECORD

This tool does not work on this ROM, and that is worth knowing before anyone
tries the same approach again. The measurements are in "What was measured"
below. It is kept rather than deleted because the negative result is
informative: the obvious way to recover class names from a stripped C++ binary
is unavailable here, so naming has to come from somewhere else.

The approach it attempts
------------------------
C++ leaves its vtables behind. In the Itanium ABI a vtable is

    [offset-to-top][typeinfo*][fn0][fn1][fn2]...

and a std::type_info object is

    [vptr][char* name][base class type_info*...]

where `name` points at the mangled type name, e.g. "9BagView5ShopE". Walking that
chain would give every virtual function a class and a slot, which is exactly the
kind of real name that makes a function tractable to decompile.

What was measured
-----------------
Scanning every 8-byte word of `main`'s .rodata (12,057,832 bytes) and .data
(1,362,704 bytes) against the 104,004 recovered function starts:

    words that are exactly a function start   rodata 92,725   data 116
    longest run of consecutive such words     rodata 1        data 2

    4-byte encodings, checked separately:
      int32 absolute      rodata 98,695 hits, longest run 3
      int32 pc-relative   rodata 104,354 hits, longest run 2
      int64 pc-relative   rodata 104,195 hits, longest run 2
      int32 absolute      data 238 hits, longest run 13

A vtable is by definition a *run* of consecutive function pointers. The longest
run found is 3 in .rodata and 13 in .data -- far too short, and absent entirely
at 8-byte stride. So the pointers are there in quantity but scattered, which is
what a relocation or fixup table looks like, not a vtable.

Conclusion
----------
The static data in this module does not contain recoverable vtables, so class
names cannot be recovered this way. The likely reasons are that this is a
position-independent NSO whose pointers are resolved at load time, or that the
dispatch tables use a layout specific to the game's engine. Either way, chasing
this further needs the *relocated* image -- i.e. a running process or a
reconstructed module base -- not the decompressed file.

Naming therefore has to come from the other sources this project already has:
`data/rtti_classes.csv` (1,873 class names, which are real and usable) and
Ghidra's call graph, where a function called only by one class's methods is
almost certainly one of its methods.

Usage (runs, finds nothing, for the record):
    python tools/vtable_names.py --module main
"""

import argparse
import bisect
import csv
import json
import os
import re
import struct
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
WORK = os.path.join(ROOT, "work")
DATA = os.path.join(ROOT, "data")
MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]

# A mangled type name as the ABI stores it: length-prefixed components ending
# in 'E', all printable ASCII. "N4PPFX17IPfxContext_SiGfxE", "9BagView5ShopE".
MANGLED_RE = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")


def load_manifest(mod):
    with open(os.path.join(WORK, mod, "manifest.json"), encoding="utf-8") as f:
        return json.load(f)


def load_typeinfo(mod):
    """typeinfo address -> mangled type name, from tools/rtti_names.py output.

    `data/rtti_classes.csv` is the single combined table for all modules, so it
    is filtered by module here rather than reading a per-module file that may
    not exist.
    """
    p = os.path.join(DATA, "rtti_classes.csv")
    if not os.path.exists(p):
        return {}
    out = {}
    with open(p, encoding="utf-8") as f:
        for r in csv.DictReader(f):
            if r.get("module") != mod:
                continue
            try:
                out[int(r["addr"], 16)] = r["mangled"]
            except (KeyError, ValueError):
                continue
    return out


def demangle(mangled):
    """Itanium mangled name -> C++, via llvm-cxxfilt if available."""
    import subprocess
    exe = r"C:\Users\charl\scoop\apps\llvm\current\bin\llvm-cxxfilt.exe"
    if not os.path.isfile(exe):
        try:
            import cxxfilt
            return cxxfilt.demangle(mangled)
        except Exception:
            return mangled
    try:
        r = subprocess.run([exe, mangled], capture_output=True, text=True,
                           timeout=10)
        return r.stdout.strip() or mangled
    except Exception:
        return mangled


class Image:
    """A module's sections, addressable as one flat address space."""

    def __init__(self, mod):
        self.mod = mod
        self.manifest = load_manifest(mod)
        self.ranges = []          # (vaddr, size, bytes)
        for name in ("text", "rodata", "data"):
            seg = self.manifest["segments"].get(name)
            if not seg:
                continue
            path = os.path.join(WORK, mod, seg["path"])
            if not os.path.isfile(path):
                continue
            with open(path, "rb") as f:
                blob = f.read()
            self.ranges.append((seg["vaddr"], seg["memsz"], blob))
        self.ranges.sort()
        self._starts = [v for v, _s, _b in self.ranges]
        self.func_starts = set()

    def contains(self, addr):
        for v, s, _b in self.ranges:
            if v <= addr < v + s:
                return True
        return False

    def u64(self, addr):
        """Little-endian 64-bit word, or None if out of range."""
        i = bisect.bisect_right(self._starts, addr) - 1
        if i < 0:
            return None
        v, s, blob = self.ranges[i]
        if addr + 8 > v + len(blob):
            return None
        return struct.unpack_from("<Q", blob, addr - v)[0]

    def cstr(self, addr, limit=512):
        i = bisect.bisect_right(self._starts, addr) - 1
        if i < 0:
            return None
        v, _s, blob = self.ranges[i]
        off = addr - v
        if off < 0 or off >= len(blob):
            return None
        end = blob.find(b"\0", off, off + limit)
        if end < 0:
            return None
        try:
            return blob[off:end].decode("ascii")
        except UnicodeDecodeError:
            return None

    def text_range(self):
        seg = self.manifest["segments"].get("text")
        if not seg:
            return (0, 0)
        return (seg["vaddr"], seg["vaddr"] + seg["memsz"])


def load_func_starts(img, mod):
    p = os.path.join(DATA, "functions_%s.csv" % mod)
    out = set()
    with open(p, encoding="utf-8") as f:
        for r in csv.reader(f):
            if r:
                try:
                    out.add(int(r[0], 16))
                except ValueError:
                    continue
    return out


def find_vtables(img, min_slots=2):
    """-> [(vtable_addr, [func_addr, ...])] for runs of function pointers.

    A run of consecutive 8-byte words that all land on a recovered function
    start is the signature of a vtable's function array. The two words before it
    are the ABI's offset-to-top and typeinfo pointer, which is what identifies
    the class.
    """
    tlo, thi = img.text_range()
    out = []
    for vaddr, size, blob in img.ranges:
        if vaddr >= tlo and vaddr < thi:
            continue  # never look for tables inside .text
        n = (len(blob) // 8) * 8
        run_start = None
        run = []
        for off in range(0, n, 8):
            val = struct.unpack_from("<Q", blob, off)[0]
            if val in img.func_starts:
                if run_start is None:
                    run_start = vaddr + off
                    run = []
                run.append(val)
                continue
            if run and len(run) >= min_slots:
                out.append((run_start, run))
            run_start = None
            run = []
        if run and len(run) >= min_slots:
            out.append((run_start, run))
    return out


def typeinfo_at(img, addr, ti_by_addr):
    """Mangled type name for a vtable's typeinfo pointer, or None.

    std::type_info is {vptr, name*, base...}, so the name pointer is at +8.
    """
    if addr in ti_by_addr:
        return ti_by_addr[addr]
    p = img.u64(addr + 8)
    if p is None:
        return None
    s = img.cstr(p)
    if not s or len(s) > 400:
        return None
    if not MANGLED_RE.match(s):
        return None
    # A real mangled type name is length-prefixed and ends with 'E' for a class,
    # or is a plain builtin. Require it to demangle to something plausible.
    if not (s.endswith("E") or re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*", s)):
        return None
    return s


def run_module(mod, demangle_names=True, min_slots=2):
    img = Image(mod)
    img.func_starts = load_func_starts(img, mod)
    ti_by_addr = load_typeinfo(mod)

    tables = find_vtables(img, min_slots)
    rows = []
    named = {}
    cache = {}

    for vaddr, funcs in tables:
        # ABI: the two words before the first slot are offset-to-top and
        # typeinfo*. Without a typeinfo the run is just a pointer array.
        mangled = typeinfo_at(img, vaddr - 8, ti_by_addr)
        if mangled is None:
            continue
        if demangle_names:
            if mangled not in cache:
                cache[mangled] = demangle(mangled)
            cls = cache[mangled]
        else:
            cls = mangled
        if "::" not in cls and "." not in cls:
            # Not a class: a type_info for a fundamental or enum type cannot own
            # a vtable, so this is a coincidence.
            continue
        for slot, fa in enumerate(funcs):
            rows.append((mod, cls, "0x%x" % vaddr, slot, "0x%x" % fa))
            # First class to claim a function wins; a function in several
            # vtables is almost always a shared base-class implementation.
            named.setdefault(fa, (cls, slot))

    out = os.path.join(DATA, "vtables_%s.csv" % mod)
    with open(out, "w", newline="", encoding="utf-8") as f:
        w = csv.writer(f)
        w.writerow(["module", "class", "vtable_addr", "slot", "func_addr"])
        w.writerows(rows)

    nflat = os.path.join(DATA, "vfunc_names.csv" if mod == MODULES[0]
                         else "vfunc_names_%s.csv" % mod)
    with open(nflat, "w", newline="", encoding="utf-8") as f:
        w = csv.writer(f)
        w.writerow(["module", "func_addr", "class", "slot"])
        for fa in sorted(named):
            cls, slot = named[fa]
            w.writerow([mod, "0x%x" % fa, cls, slot])

    print("%-8s vtables=%-6d classes=%-5d virtual functions named=%d"
          % (mod, len(set(r[2] for r in rows)),
             len(set(r[1] for r in rows)), len(named)))
    return len(named)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default=None)
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--min-slots", type=int, default=2)
    ap.add_argument("--no-demangle", action="store_true",
                    help="skip llvm-cxxfilt (faster, mangled class names)")
    a = ap.parse_args()
    mods = MODULES if (a.all or not a.module) else [a.module]
    total = 0
    for m in mods:
        total += run_module(m, not a.no_demangle, a.min_slots)
    print("total virtual functions named: %d" % total)
    return 0


if __name__ == "__main__":
    sys.exit(main())
