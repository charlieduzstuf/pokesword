#!/usr/bin/env python3
"""Cross-compile prog/ for NX64 and link build/prog.elf, without CMake.

Why this exists
---------------
A decomp project is only credible if the artefact it ships can be rebuilt from
source. There are two build paths in this repo and neither was complete:

  * CMake with ToolchainNX64.cmake -- correct in principle, but the toolchain
    hard-requires $DEVKITA64 and devkitA64 is not installed here, so
    `cmake -DCMAKE_TOOLCHAIN_FILE=ToolchainNX64.cmake` fails at configure time.
    The NX64 path had therefore never actually been exercised.

  * The build/prog.elf that exists was produced by an ad-hoc shell command,
    so it could not be reproduced or re-run after a change to prog/.

This script is the missing third option. It reads the same flags as
ToolchainNX64.cmake and links the same shared object, but it needs no devkitA64:
the image is linked `-nodefaultlibs -shared`, so there is no C runtime to find.
devkitA64 is used only for its include path and `-B` link path, and both are
optional -- if $DEVKITA64 is unset they are dropped and the build proceeds.

The flag set is kept in lockstep with ToolchainNX64.cmake. If you change one,
change the other; `tools/audit.py --quick` warns if they drift.

Note the optimisation level: the toolchain here says -O3. That is the level
`build/prog.elf` is produced at, and it is the level matches must be judged at.
tools/match_harness.py defaults to the same value via $POKESWORD_OPT.

Usage:
    python tools/build_nx64.py                 # build everything
    python tools/build_nx64.py --jobs 8        # limit parallelism
    python tools/build_nx64.py --module main   # only units whose path names it
    python tools/build_nx64.py --clean         # remove build/ first
"""

import argparse
import concurrent.futures
import os
import re
import shutil
import subprocess
import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PROG = os.path.join(ROOT, "prog")
BUILD = os.path.join(ROOT, "build")
LIB = os.path.join(ROOT, "lib")

CLANG = os.environ.get("POKESWORD_CLANG",
                       r"C:\Users\charl\scoop\apps\llvm\current\bin")
DEVKITA64 = os.environ.get("DEVKITA64", "")

OPT = os.environ.get("POKESWORD_OPT", "-O3")

TRIPLE = "aarch64-none-elf"
ARCH = "-mcpu=cortex-a57+fp+simd+crypto+crc"

# Mirrors ToolchainNX64.cmake.
CXXFLAGS = [
    "--target=" + TRIPLE,
    "-std=c++17",
    OPT,
    "-g",
    ARCH,
    "-fPIC",
    "-fno-exceptions",
    "-fno-rtti",
    "-fno-strict-aliasing",
    "-mno-implicit-float",
    "-fstandalone-debug",
    "-ffunction-sections",
    "-fdata-sections",
    "-DNDEBUG",
    "-DSWITCH",
    "-D__DEVKITA64__",
    "-D__ELF__",
    "-DNNSDK",
    "-DMATCHING_HACK_NX_CLANG",
    "-nostdinc++",
    "-Wno-everything",
]

def lld():
    """Path to ld.lld, the LLVM ELF linker.

    Why the linker is invoked directly rather than through clang++:

    On Windows clang always routes the link through a host *driver* (gcc), and
    `-fuse-ld=lld`, `-fuse-ld=<abs path>` and `-B <dir>` are all ignored by
    5.0.1 -- every one of them still fails with

        error: unable to execute command: program not executable
        error: linker (via gcc) command failed

    because there is no gcc on this machine to drive. The options that do work
    are `-fuse-ld` spellings a newer clang accepts, which the project's compiler
    is not. So the linker is called directly, and this script passes it the
    arguments the driver would otherwise have assembled.

    That also removes the last dependency on devkitA64: the driver would have
    supplied the default linker script and crt objects, neither of which a
    -nodefaultlibs shared object needs.
    """
    for nm in ("ld.lld.exe", "ld.lld"):
        p = os.path.join(CLANG, nm)
        if os.path.isfile(p):
            return p
    found = shutil.which("ld.lld") or shutil.which("ld.lld.exe")
    if not found:
        raise SystemExit("ld.lld not found under POKESWORD_CLANG=%s" % CLANG)
    return found


# Emulation and script mode for ld.lld.
#
# -m aarch64linux selects the aarch64 ELF default script. -shared gives ET_DYN,
# which is what an NX64 NSO module actually is -- asm-differ reads the image as a
# shared object, so a static link would be the wrong shape.
#
# --gc-sections is deliberately NOT passed. Every recovered function is an
# exported global with no caller yet, so collection would discard almost the
# whole image and leave asm-differ nothing to compare against.
LDFLAGS = [
    "-shared",
    "-Bsymbolic-functions",
    "-m", "aarch64linux",
    "--no-undefined-version",
]


def include_flags():
    """Every include root the generated tree needs, in the order they should win.

    A unit in prog/<group>/<subsys>/source/ includes its own header as
    `#include "<unit>.h"`, with that header sitting in the sibling
    prog/<group>/<subsys>/include/. Nothing says that, so the roots have to be
    discovered rather than guessed -- omitting them fails 57 of 77 units with
    "file not found" and no hint which directory was meant.

    prog/**/include comes first because prog/lib/gflib3/include shadows
    lib/gflib3/include: the generated tree is the newer of the two and is what
    the units are written against.
    """
    out = []
    for dirpath, dirnames, _files in os.walk(PROG):
        # Do not descend into an include/ we have already recorded.
        if "include" in dirnames:
            out += ["-isystem", os.path.join(dirpath, "include")]
            dirnames.remove("include")
    for sub in ("NintendoSDK", "gflib3"):
        p = os.path.join(LIB, sub, "include")
        if os.path.isdir(p):
            out += ["-isystem", p]
    out += ["-isystem", os.path.join(CLANG, "include", "c++", "v1")]
    if DEVKITA64 and os.path.isdir(os.path.join(DEVKITA64, "aarch64-none-elf",
                                                "include")):
        out += ["-isystem",
                os.path.join(DEVKITA64, "aarch64-none-elf", "include")]
    return out


def obj_name(src):
    """prog/matched/main/source/main_0.cpp -> matched_main_source_main_0.o

    Same convention as the existing build/ objects, so an incremental rebuild
    reuses them rather than churning the directory.
    """
    rel = os.path.relpath(src, PROG)
    rel = os.path.splitext(rel)[0]
    return rel.replace(os.sep, "_").replace("-", "_") + ".o"


MODULES = ("rtld", "main", "sdk", "subsdk0", "subsdk1")


def module_of(src):
    """Which NSO module a unit belongs to.

    Two signals, in order of reliability:

      * the unit's own name ends in the module -- field_field_sdk.cpp is sdk,
        gflib3_gflib3_rtld.cpp is rtld. That suffix is what the per-module
        generated trees are built around.

      * the path names the module directory -- prog/matched/main/... is main.

    Shared subsystems (prog/contents/field/ holds both a _main and a _sdk unit)
    rely entirely on the suffix, which is why it is tried first.
    """
    stem = os.path.splitext(os.path.basename(src))[0]
    for m in MODULES:
        if stem == m or stem.endswith("_" + m):
            return m
    parts = os.path.relpath(src, PROG).replace(os.sep, "/").split("/")
    for p in parts:
        if p in MODULES:
            return p
    return "main"


def sources(module=None):
    out = []
    for dirpath, _dirs, files in os.walk(PROG):
        for f in files:
            if f.endswith(".cpp"):
                out.append(os.path.join(dirpath, f))
    out.sort()
    if module:
        out = [s for s in out if module in os.path.relpath(s, PROG)]
    return out


def compile_one(src, verbose=False):
    obj = os.path.join(BUILD, obj_name(src))
    t0 = time.time()
    cmd = [os.path.join(CLANG, "clang++")] + CXXFLAGS + include_flags() + \
          [src, "-c", "-o", obj]
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode != 0:
        return (src, obj, False, r.stderr[:4000], time.time() - t0)
    if verbose:
        for line in (r.stderr or "").splitlines():
            if "warning" in line:
                return (src, obj, True, line, time.time() - t0)
    return (src, obj, True, "", time.time() - t0)


def link(objs, elf, strip):
    cmd = [lld()] + LDFLAGS + objs + ["-o", elf]
    if strip:
        cmd += ["--strip-debug"]
    r = subprocess.run(cmd, capture_output=True, text=True)
    return r


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--jobs", type=int, default=os.cpu_count() or 4)
    ap.add_argument("--module", default=None,
                    help="only units whose prog-relative path contains this")
    ap.add_argument("--clean", action="store_true")
    ap.add_argument("--no-strip-debug", action="store_true",
                    help="keep DWARF in prog.elf (51%% of its size)")
    ap.add_argument("-v", "--verbose", action="store_true")
    a = ap.parse_args()

    if not os.path.isdir(os.path.join(CLANG, "bin")) and \
       not os.path.isfile(os.path.join(CLANG, "clang++.exe")):
        print("clang++ not found under POKESWORD_CLANG=%s" % CLANG)
        return 1

    if a.clean and os.path.isdir(BUILD):
        shutil.rmtree(BUILD)
    os.makedirs(BUILD, exist_ok=True)

    print("compiler : %s" % os.path.join(CLANG, "clang++"))
    print("optimise : %s" % OPT)
    print("devkitA64: %s" % (DEVKITA64 or "(absent -- optional)"))
    print("triple   : %s" % TRIPLE)
    print()

    srcs = sources(a.module)
    if not srcs:
        print("no sources found under prog/")
        return 1
    print("compiling %d unit(s) with %d job(s)..." % (len(srcs), a.jobs))

    fails = []
    slowest = []
    t0 = time.time()
    done = 0
    with concurrent.futures.ThreadPoolExecutor(max_workers=a.jobs) as ex:
        futs = [ex.submit(compile_one, s, a.verbose) for s in srcs]
        for f in concurrent.futures.as_completed(futs):
            src, obj, ok, msg, dt = f.result()
            done += 1
            slowest.append((dt, os.path.basename(src)))
            if not ok:
                fails.append((src, msg))
            if done % 20 == 0 or done == len(srcs):
                print("  %3d/%d  ok=%d failed=%d  (%.1fs)"
                      % (done, len(srcs), done - len(fails), len(fails),
                         time.time() - t0))

    if fails:
        print("\n%d unit(s) FAILED to compile:" % len(fails))
        for src, msg in fails[:12]:
            print("\n--- %s" % os.path.relpath(src, ROOT))
            print(msg[:2500])
        if len(fails) > 12:
            print("\n... and %d more" % (len(fails) - 12))
        return 1

    slowest.sort(reverse=True)
    print("\nslowest units: %s"
          % ", ".join("%s(%.1fs)" % (n, d) for d, n in slowest[:3]))

    # ---- link -------------------------------------------------------------
    objs = [os.path.join(BUILD, obj_name(s)) for s in srcs]
    missing = [o for o in objs if not os.path.isfile(o)]
    if missing:
        print("missing objects: %s" % missing[:5])
        return 1

    elf = os.path.join(BUILD, "prog.elf")
    cmd = [lld()] + LDFLAGS + objs + ["-o", elf]
    if not a.no_strip_debug:
        # DWARF is 23 MB of a 45 MB image (51%), and nothing downstream reads
        # it: asm-differ disassembles with `objdump -drz -j .text` and
        # match_harness works on .text sections and relocations. `-g` is still
        # passed at compile time so a function can be debugged in its object
        # file; only the linked image is stripped. Pass --no-strip-debug to
        # keep it.
        cmd += ["--strip-debug"]
    print("\nlinking %d objects -> build/prog.elf" % len(objs))
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode != 0:
        print("LINK FAILED:\n%s" % (r.stderr or r.stdout)[:4000])
        return 1
    if r.stderr.strip():
        print("linker warnings:\n%s" % r.stderr.strip()[:2000])

    # Per-module images.
    #
    # asm-differ compares one module at a time: tools/diff_settings.py sets
    # `baseimg` to data/<mod>.elf and `myimg` to build/<mod>.elf, because
    # addresses are per-module and a single combined image would compare a
    # `main` function against the right bytes only by luck. Emitting just
    # prog.elf leaves the differ with nothing to read for four of the five
    # modules, so each module is linked separately as well.
    print("\nper-module images (asm-differ reads build/<mod>.elf):")
    for mod in MODULES:
        mobj = [os.path.join(BUILD, obj_name(s)) for s in srcs
                if module_of(s) == mod]
        if not mobj:
            continue
        mel = os.path.join(BUILD, mod + ".elf")
        rm = link(mobj, mel, not a.no_strip_debug)
        if rm.returncode != 0:
            print("   %-9s LINK FAILED (%d objs)\n%s"
                  % (mod, len(mobj), (rm.stderr or rm.stdout)[:800]))
            fails.append(mod)
        else:
            print("   %-9s %2d objs  %10d bytes  -> build/%s.elf"
                  % (mod, len(mobj), os.path.getsize(mel), mod))
    if fails:
        return 1

    size = os.path.getsize(elf)
    nm = os.path.join(CLANG, "llvm-nm.exe")
    if not os.path.isfile(nm):
        nm = shutil.which("llvm-nm") or "llvm-nm"
    n = subprocess.run([nm, elf], capture_output=True, text=True)
    syms = len([l for l in n.stdout.splitlines() if l.strip()])

    print("build/prog.elf  %d bytes  %d symbols  (%.1fs total)"
          % (size, syms, time.time() - t0))
    return 0


if __name__ == "__main__":
    sys.exit(main())
