#!/usr/bin/env python3
"""Run the whole verification pipeline in order.

Wraps the checks that matter, in dependency order, so a change can be validated
with one command:

  1. regenerate the ELF images and the project tree
  2. re-verify every matching body independently
  3. compile and link prog/ for aarch64-none-elf
  4. confirm every symbol in data/functions.csv resolves in that ELF
  5. run the full audit

Usage:
    python tools/verify_all.py            # everything except the host build
    python tools/verify_all.py --quick    # skip the 75-unit cross-compile
    python tools/verify_all.py --no-regen # don't regenerate, just check
"""

import argparse
import glob
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
TOOLS = os.path.join(ROOT, "tools")
LLVM = r"C:\Users\charl\scoop\apps\llvm\current\bin"
MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]


def run(label, cmd, **kw):
    print()
    print("=" * 72)
    print("== %s" % label)
    print("=" * 72)
    r = subprocess.run(cmd, cwd=ROOT, **kw)
    if r.returncode != 0:
        print("!! %s FAILED (exit %d)" % (label, r.returncode))
    return r.returncode


def py(script, *args):
    return [sys.executable, os.path.join(TOOLS, script)] + list(args)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--quick", action="store_true")
    ap.add_argument("--no-regen", action="store_true")
    a = ap.parse_args()

    fails = []

    if not a.no_regen:
        fails.append(run("1. regenerate ELFs",
                         py("nso_to_elf.py", "--all")))
        fails.append(run("2. regenerate prog/ + functions.csv",
                         py("decomp_project.py", "--all")))
        fails.append(run("3. regenerate prog/**/CMakeLists.txt",
                         py("prog_cmake.py")))

    fails.append(run("4. independently re-verify matching bodies",
                     py("verify_matches.py")))

    # Compile and link prog/ for the matching target.
    #
    # This used to have its own inline build at -O1 with a hand-written link
    # line. That was wrong twice over: it produced a *differently flagged*
    # build/prog.elf, silently overwriting the canonical one, and since
    # asm-differ reads that file, "verified by asm-differ" was being claimed
    # against an image no other tool had produced. There is now one build, in
    # tools/build_nx64.py, carrying the flags ToolchainNX64.cmake declares.
    if a.quick:
        print("\n(skipping the prog/ cross-compile sweep: --quick)")
    else:
        rc = subprocess.run(py("build_nx64.py")).returncode
        fails.append(0 if rc == 0 else 1)

        elf = os.path.join(ROOT, "build", "prog.elf")
        if not os.path.isfile(elf):
            print("build/prog.elf missing")
            fails.append(1)
        else:
            nm = os.path.join(LLVM, "llvm-nm.exe")
            have = set()
            if os.path.isfile(nm):
                out = subprocess.run([nm, "--defined-only", elf],
                                     capture_output=True, text=True).stdout
                have = {ln.split()[2] for ln in out.splitlines()
                        if len(ln.split()) == 3}
            print("symbols: %d" % len(have))

            # Every symbol the table claims must exist in the built image.
            import csv
            rows = list(csv.DictReader(
                open(os.path.join(ROOT, "data", "functions.csv"),
                     encoding="utf-8")))
            missing = []
            for r in rows:
                d = r.get("decomp_name") or ""
                sym = d[:-1] if d.endswith("!") else d
                if sym and sym not in have:
                    missing.append((r["module"], r["addr"], sym))
            print("CSV symbols missing from the ELF: %d of %d"
                  % (len(missing), len(rows)))
            for m in missing[:5]:
                print("   %s" % (m,))
            fails.append(0 if not missing else 1)

    fails.append(run("5. full audit",
                     py("audit.py", "--quick" if a.quick else "")))

    print()
    print("=" * 72)
    if any(fails):
        print("PIPELINE FAILED at %d step(s)" % sum(1 for f in fails if f))
        return 1
    print("PIPELINE OK -- every step passed")
    return 0


if __name__ == "__main__":
    sys.exit(main())
