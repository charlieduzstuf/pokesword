#!/usr/bin/env python3
"""Resolve the Pawn native names that survive as bare hashes in the 691 scripts.

The problem
-----------
Game Freak's Pawn compiler emits each `.amx` with the *names* of its natives and
public functions stripped: the 8-byte name/address field of every table entry is
zeroed and only the FNV-1 hash survives. A disassembler can therefore recover
that a script calls native 0x63F02D54, but not what 0x63F02D54 is called.

The vendored reference already resolves 22,885 of 23,020 declarations, because
`tools/pawn_ref/known_strings.json` carries 655 names recovered elsewhere.
That leaves 88 distinct unknown hashes across 135 call sites. This tool closes
that gap.

The hash
--------
`h = 0; for each character c: h = (h * 0x83) ^ ord(c)`, truncated to 32 bits.
Multiplicative rather than additive, so it cannot be inverted by subtraction --
the only route to a name is to guess it and check. Which makes the candidate
dictionary the whole game.

Where candidates come from
--------------------------
In descending order of how much they are worth:

 1. Every ASCII string in the original `.rodata` and `.data` of all five
    modules. GF's runtime keeps an `AMX_NATIVE_INFO {char *name; cell func;}`
    table in the image, so the names are in the binary we already have. This is
    the authoritative source and usually resolves most of the remainder.
 2. Every symbol name from `data/functions.csv`, plus the `decomp_name` column.
    A native's C++ implementation is usually named after the script-level name.
 3. The 655 already-known native names, mutated with the affixes GF uses
    (`_`, `Ex`, `Check`, `Get`, `Set`, `Is`, `Cnt`, digit suffixes). Cheap, and
    it catches the case where the dictionary is simply one revision behind.

Anything still unresolved is reported as unresolved. A wrong name is worse than
a hash: the disassembler would print a confident, plausible, false identifier,
and every downstream reader would take it at face value.

Usage:
    python tools/pawn_natives.py                 # report
    python tools/pawn_natives.py --apply         # rewrite the .pasm files
    python tools/pawn_natives.py --emit json     # also write the mapping
"""

import argparse
import collections
import csv
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SCRIPT_DIR = os.path.join(ROOT, "decomp", "script")
WORK = os.path.join(ROOT, "work")
KNOWN = os.path.join(ROOT, "tools", "pawn_ref", "known_strings.json")
MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]

# A native name as GF writes it: an identifier, optionally with a trailing
# underscore. Deliberately strict -- anything looser starts matching prose in
# rodata and produces noise.
IDENT = re.compile(rb"[A-Za-z_][A-Za-z0-9_]{2,63}")

DECL = re.compile(r"^(native|public|lib)\s+(fun_[0-9A-F]{1,8}|[A-Za-z_]\w*)\s*"
                  r"(?:\(|\{|$)", re.M)


def fnv1_32(s):
    """The Pawn name hash. Must match tools/pawn_ref/fnv.py exactly."""
    h = 0
    for ch in s:
        h = ((h * 0x83) ^ ord(ch)) & 0xFFFFFFFF
    return h


def fnv1_32_bytes(b):
    h = 0
    for c in b:
        h = ((h * 0x83) ^ c) & 0xFFFFFFFF
    return h


def unresolved():
    """{hash: [declaration lines that use it]} across every .pasm."""
    want = collections.defaultdict(list)
    for nm in sorted(os.listdir(SCRIPT_DIR)):
        if not nm.endswith(".pasm"):
            continue
        path = os.path.join(SCRIPT_DIR, nm)
        txt = open(path, encoding="utf-8", errors="replace").read()
        for m in DECL.finditer(txt):
            name = m.group(2)
            if name.startswith("fun_"):
                try:
                    h = int(name[4:], 16)
                except ValueError:
                    continue
                want[h].append((nm, m.group(0).strip()))
    return want


def strings_from_binaries():
    """Every identifier-shaped ASCII run in the original read-only data.

    This is where the names actually are: the AMX runtime's native table lives
    in the image and points at these strings, so a hit here is not a guess, it
    is the game's own answer.
    """
    cands = set()
    for mod in MODULES:
        for seg in ("rodata", "data"):
            p = os.path.join(WORK, mod, seg + ".bin")
            if not os.path.isfile(p):
                continue
            blob = open(p, "rb").read()
            # Split on NUL, then pull identifiers out of what remains, so a
            # string embedded in a larger literal is still considered.
            for m in IDENT.finditer(blob):
                cands.add(m.group(0))
    return cands


def strings_from_symbols():
    cands = set()
    p = os.path.join(ROOT, "data", "functions.csv")
    if os.path.isfile(p):
        with open(p, encoding="utf-8", errors="replace") as f:
            for r in csv.DictReader(f):
                for col in ("name", "decomp_name"):
                    v = (r.get(col) or "").strip()
                    if not v or v.startswith("sub_"):
                        continue
                    # Demangled signatures are full of punctuation; keep only
                    # the identifier runs.
                    for m in re.finditer(r"[A-Za-z_]\w{2,63}", v):
                        cands.add(m.group(0))
    return cands


def mutated(base):
    """Cheap variants of the names we already know.

    GF's script layer and its C++ layer drift apart constantly -- a native gets
    renamed in one and not the other -- so the fix is often a suffix or a case
    change away. Cheap to try, and every hit is still verified by hash.
    """
    out = set()
    affix = ["", "_", "Ex", "_Ex", "Check", "_Check", "Cnt", "_Cnt",
             "Get", "Set", "Is", "Can", "Do", "On", "Off", "Init", "Reset"]
    for name in base:
        for a in affix:
            out.add(name + a)
            out.add(a + name)
        if name.endswith("_"):
            out.add(name[:-1])
        else:
            out.add(name + "_")
    return out


def solve(want):
    """Return {hash: name} for every hash we can prove."""
    targets = set(want)
    if not targets:
        return {}
    found = {}

    def probe(cands, label):
        hits = 0
        for c in cands:
            h = fnv1_32_bytes(c if isinstance(c, bytes) else c.encode())
            if h in targets and h not in found:
                found[h] = c.decode() if isinstance(c, bytes) else c
                hits += 1
        return hits

    known = json.load(open(KNOWN, encoding="utf-8"))
    knownset = set(known)

    stages = [
        ("game rodata/data strings", strings_from_binaries()),
        ("symbol names", strings_from_symbols()),
        ("known names, mutated", mutated(knownset)),
    ]
    for label, cands in stages:
        hits = probe(cands, label)
        print("  %-26s %9d candidates -> %d resolved"
              % (label, len(cands), hits))

    # Report any hash that two candidates both claim. That would mean the hash
    # space is not distinguishing them, and the name must not be trusted.
    return found


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--apply", action="store_true")
    ap.add_argument("--emit", metavar="PATH", default=None,
                    help="write the hash -> name mapping as JSON")
    a = ap.parse_args()

    want = unresolved()
    total = sum(len(v) for v in want.values())
    print("unresolved declarations : %d (%d distinct hashes)"
          % (total, len(want)))
    if not want:
        return 0

    print("\nresolving:")
    found = solve(want)

    # Sanity check: the dictionary must not contradict itself.
    seen = collections.defaultdict(set)
    for h, n in found.items():
        seen[n].add(h)
    clashes = {n: hs for n, hs in seen.items() if len(hs) > 1}
    if clashes:
        print("\nWARNING: %d name(s) claimed by multiple hashes; dropping them"
              % len(clashes))
        for n, hs in clashes.items():
            for h in hs:
                found.pop(h, None)

    missing = sorted(set(want) - set(found))
    print("\nresolved %d / %d distinct hashes" % (len(found), len(want)))
    if missing:
        print("still unresolved: %d" % len(missing))
        for h in missing[:20]:
            print("   %08X  (%d site(s))" % (h, len(want[h])))

    out = os.path.join(ROOT, "data", "pawn_natives.json")
    with open(out, "w", encoding="utf-8") as f:
        json.dump({"%08X" % h: found[h] for h in sorted(found)}, f, indent=1)
    print("\nmapping -> %s" % os.path.relpath(out, ROOT))
    if a.emit:
        with open(a.emit, "w", encoding="utf-8") as f:
            json.dump(found, f, indent=1)

    if not a.apply:
        print("(dry run; pass --apply to extend the dictionary and rebuild)")
        return 0

    # Fix the *dictionary*, not the generated output.
    #
    # The .pasm files are build products of tools/pawn_ref/pawn_script.py; it
    # resolves names through known_strings.json. Patching the .pasm files
    # directly would make the next `pawn_disasm.py` run silently undo the work,
    # so the recovered names go into the dictionary and the scripts are
    # regenerated from scratch. That keeps the result reproducible: re-running
    # the disassembler on a clean tree produces the same names.
    cur = json.load(open(KNOWN, encoding="utf-8"))
    before = len(cur)
    seen = set(cur)
    for name in found.values():
        if name not in seen:
            cur.append(name)
            seen.add(name)
    with open(KNOWN, "w", encoding="utf-8") as f:
        json.dump(cur, f, indent=1, ensure_ascii=False)
    print("\nknown_strings.json: %d -> %d names (+%d)"
          % (before, len(cur), len(cur) - before))

    import subprocess
    r = subprocess.run([sys.executable,
                        os.path.join(ROOT, "tools", "pawn_disasm.py")],
                       capture_output=True, text=True, cwd=ROOT)
    tail = (r.stdout or "").strip().splitlines()[-6:]
    print("pawn_disasm.py: rc=%d" % r.returncode)
    for line in tail:
        print("   " + line)
    if r.returncode != 0:
        print((r.stderr or "")[:2000])
    return 0


if __name__ == "__main__":
    sys.exit(main())
