#!/usr/bin/env python3
"""Run Ghidra's decompiler over the modules headlessly and collect the output.

Why this exists: `tools/auto_match.py` can only match functions whose bodies are
mechanical (accessors, constants, comparisons, thunks). The other ~128,000 need
someone to work out what the code does. Ghidra's decompiler does that work as
C-like pseudocode, which is the single biggest accelerator available for the
remaining reverse engineering.

Two decisions that make this tractable at this scale:

* **Full auto-analysis is skipped.** On a 25 MB .text with 100k functions it
  dominates wall-clock, and most of what it buys is type inference the
  decompiler re-derives lazily per function. Importing the ELF (which already
  carries the recovered function boundaries and names as symbols) and calling the
  decompiler directly is far more functions per hour.

* **Already-matching functions are skipped.** They have verified bodies and
  correct signatures already; spending decompiler budget on them would waste the
  run.

Everything is resumable: the Ghidra script appends to its output and records the
addresses it finished in a `.done` sidecar, so an interrupted run continues
rather than restarting.

Usage:
    python tools/ghidra_run.py --module subsdk0
    python tools/ghidra_run.py --all
    python tools/ghidra_run.py --all --with-matched   # include matching ones too
"""

import argparse
import csv
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OUT = os.path.join(ROOT, "work", "ghidra_out")
PROJ = os.path.join(ROOT, "work", "ghidra_proj")
SCRIPTS = os.path.join(ROOT, "tools", "ghidra", "scripts")

# Ghidra 11.1.1 is used rather than 12.1.4 because it supports JDK 17, which is
# the only JDK installed here.
GHIDRA = r"C:\Users\charl\Downloads\ghidra_11.1.1_PUBLIC\support\analyzeHeadless.bat"
JAVA_HOME = r"C:\Program Files\Microsoft\jdk-17.0.20.101-hotspot"
LANG = "AARCH64:LE:64:v8A"

# Smallest first: a module that finishes proves the pipeline end to end before
# the multi-hour one is started.
MODULES = ["rtld", "subsdk0", "subsdk1", "sdk", "main"]


def matching_addrs():
    """(module, addr) for functions already verified as matching."""
    out = set()
    p = os.path.join(ROOT, "data", "functions.csv")
    with open(p, encoding="utf-8") as f:
        for r in csv.DictReader(f):
            d = r.get("decomp_name") or ""
            if d and not d.endswith("!"):
                out.add((r["module"], int(r["addr"], 16)))
    return out


def write_skip(mod, with_matched):
    """Addresses Ghidra should not spend time on, or None."""
    if with_matched:
        return None
    path = os.path.join(OUT, "skip_%s.txt" % mod)
    with open(path, "w", encoding="utf-8") as f:
        for m, a in sorted(matching_addrs()):
            if m == mod:
                f.write("0x%x\n" % a)
    return path


def run_module(mod, with_matched, sec_per_fn, keep_project=False):
    elf = os.path.join(ROOT, "data", "%s.elf" % mod)
    if not os.path.isfile(elf):
        print("!! %s: no ELF at %s" % (mod, elf))
        return 1
    os.makedirs(OUT, exist_ok=True)
    os.makedirs(PROJ, exist_ok=True)
    out_txt = os.path.join(OUT, "%s.c.txt" % mod)
    skip = write_skip(mod, with_matched)

    cmd = [GHIDRA, PROJ, "ps_%s" % mod,
           "-import", elf,
           "-processor", LANG,
           "-scriptPath", SCRIPTS,
           "-postScript", "DecompileAll.java", out_txt, str(sec_per_fn)]
    if skip:
        cmd.append(skip)
    cmd += ["-noanalysis"]
    if not keep_project:
        cmd.append("-deleteProject")

    env = dict(os.environ)
    env["JAVA_HOME"] = JAVA_HOME
    # The decompiler is the memory hog on a module this size.
    env["MAXMEM"] = "8G"

    print("=" * 72)
    print("== ghidra decompile: %s" % mod)
    print("=" * 72)
    r = subprocess.run(cmd, cwd=ROOT, env=env, capture_output=True, text=True)
    for line in (r.stdout or "").splitlines():
        if any(k in line for k in ("DecompileAll.java>", "ERROR", "Exception")):
            print("   " + line.strip()[:160])
    if r.returncode != 0:
        print("!! %s: analyzeHeadless exit %d" % (mod, r.returncode))
        tail = (r.stdout or "").splitlines()[-25:]
        for t in tail:
            print("   " + t[:160])
    if os.path.isfile(out_txt):
        n = sum(1 for line in open(out_txt, encoding="utf-8", errors="replace")
                if line.startswith("/*===F "))
        size = os.path.getsize(out_txt) / (1 << 20)
        print("   -> %s: %d functions, %.1f MB" % (out_txt, n, size))
    return r.returncode


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default=None)
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--with-matched", action="store_true",
                    help="also decompile the already-matching functions")
    ap.add_argument("--sec-per-fn", type=int, default=20)
    ap.add_argument("--keep-project", action="store_true")
    a = ap.parse_args()

    mods = MODULES if (a.all or not a.module) else [a.module]
    bad = 0
    for m in mods:
        bad += 1 if run_module(m, a.with_matched, a.sec_per_fn,
                               a.keep_project) else 0
    return 1 if bad else 0


if __name__ == "__main__":
    sys.exit(main())
