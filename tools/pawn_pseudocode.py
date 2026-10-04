#!/usr/bin/env python3
"""Generate pseudocode for all extracted Sword Pawn scripts.

The vendored swsh-pawn-decomp pseudocode.py is a script (reads sys.argv[1],
prints to stdout), so we exec it per-script with a controlled namespace and
capture its output.

Usage: python pawn_pseudocode.py [--limit N]
"""

import argparse
import glob
import io
import os
import sys
from contextlib import redirect_stdout

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "romfs_out", "amx_flat")
OUT = os.path.join(ROOT, "decomp", "script")
PSEUDO = os.path.join(ROOT, "tools", "pawn_ref", "pseudocode.py")


def generate_for(path):
    """Run the vendored pseudocode generator on one .amx, return its text."""
    saved_argv = sys.argv
    saved_path = sys.path[:]
    saved_cwd = os.getcwd()
    pawn_dir = os.path.dirname(PSEUDO)
    sys.argv = [PSEUDO, path]
    if pawn_dir not in sys.path:
        sys.path.insert(0, pawn_dir)
    os.chdir(pawn_dir)
    buf = io.StringIO()
    try:
        with redirect_stdout(buf):
            with open(PSEUDO, "r", encoding="utf-8") as f:
                code = compile(f.read(), PSEUDO, "exec")
                exec(code, {"__name__": "__main__", "__file__": PSEUDO})
    finally:
        sys.argv = saved_argv
        sys.path[:] = saved_path
        os.chdir(saved_cwd)
    return buf.getvalue()


def main(argv):
    # Same defect as pawn_disasm.py: indexing `argv[1].split("=")[1]` raised
    # IndexError for any argument without an `=`, including `--help`, and
    # accepted only `--limit=N` while the usage line documents `[--limit N]`.
    ap = argparse.ArgumentParser(
        prog="pawn_pseudocode.py",
        description="Render the extracted Sword Pawn scripts as pseudocode.")
    ap.add_argument("--limit", type=int, default=None,
                    help="only process the first N scripts")
    a = ap.parse_args(argv[1:])
    limit = a.limit
    os.makedirs(OUT, exist_ok=True)
    files = sorted(glob.glob(os.path.join(SRC, "*.amx")))
    if limit:
        files = files[:limit]
    ok, fail = 0, []
    for i, path in enumerate(files):
        name = os.path.splitext(os.path.basename(path))[0]
        try:
            text = generate_for(path)
            with open(os.path.join(OUT, name + ".pseudo.c"), "w",
                      encoding="utf-8") as f:
                f.write(text)
            ok += 1
        except Exception as e:  # noqa: BLE001
            fail.append((name, "%s: %s" % (type(e).__name__, e)))
        if (i + 1) % 100 == 0:
            print("  %d/%d ..." % (i + 1, len(files)))
    print("pawn pseudocode: %d ok, %d failed" % (ok, len(fail)))
    for name, err in fail[:10]:
        print("  FAIL %s: %s" % (name, err[:160]))
    return 0 if not fail else 1


if __name__ == "__main__":
    sys.exit(main(sys.argv))