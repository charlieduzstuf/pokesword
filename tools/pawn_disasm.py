#!/usr/bin/env python3
"""Disassemble all extracted Sword Pawn scripts into decomp/script/.

Uses the vendored swsh-pawn-decomp reference (tools/pawn_ref, local patches
for Game Freak opcodes documented in tools/pawn_ref/PATCHES.md).

Usage: python pawn_disasm.py [--limit N]
Outputs: decomp/script/<name>.pasm + decomp/script/manifest.txt
"""

import argparse
import glob
import hashlib
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "romfs_out", "amx_flat")
OUT = os.path.join(ROOT, "decomp", "script")
# The vendored reference loads known_strings.json by relative path.
os.chdir(os.path.join(os.path.dirname(os.path.abspath(__file__)), "pawn_ref"))
sys.path.insert(0, os.getcwd())
from pawn_script import PawnDisassembler  # noqa: E402


def main(argv):
    # Was: `limit = int(argv[1].split("=")[1]) if len(argv) > 1 else None`
    #
    # That indexed past the end of any argument without an `=`, so `--help`
    # raised IndexError instead of printing usage, and it contradicted this
    # file's own docstring, which documents `[--limit N]` while the code only
    # accepted `--limit=N`. Following the documented usage crashed.
    ap = argparse.ArgumentParser(
        prog="pawn_disasm.py",
        description="Disassemble the extracted Sword Pawn scripts.")
    ap.add_argument("--limit", type=int, default=None,
                    help="only process the first N scripts")
    a = ap.parse_args(argv[1:])
    limit = a.limit
    os.makedirs(OUT, exist_ok=True)
    files = sorted(glob.glob(os.path.join(SRC, "*.amx")))
    if limit:
        files = files[:limit]
    ok, fail = 0, []
    with open(os.path.join(OUT, "manifest.txt"), "w",
              encoding="utf-8") as man:
        for i, path in enumerate(files):
            name = os.path.splitext(os.path.basename(path))[0]
            try:
                d = PawnDisassembler(path)
                with open(os.path.join(OUT, name + ".pasm"), "w",
                          encoding="utf-8") as f:
                    f.write(d.infodump())
                    f.write(d.disasm())
                h = hashlib.sha1(open(path, "rb").read()).hexdigest()
                man.write("%s %s publics=%d natives=%d\n"
                          % (h, name, len(d.public_functions),
                             len(d.native_functions)))
                ok += 1
            except Exception as e:  # noqa: BLE001 - loop until done
                fail.append((name, "%s: %s" % (type(e).__name__, e)))
            if (i + 1) % 100 == 0:
                print("  %d/%d ..." % (i + 1, len(files)))
    print("pawn: %d ok, %d failed" % (ok, len(fail)))
    for name, err in fail[:15]:
        print("  FAIL %s: %s" % (name, err[:160]))
    return 0 if not fail else 1


if __name__ == "__main__":
    sys.exit(main(sys.argv))