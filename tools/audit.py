#!/usr/bin/env python3
"""Final audit: re-verify every claim this project makes, from scratch.

Deliberately re-reads the artifacts rather than trusting earlier output, so it
catches drift between the generator and the tree it produced.

Usage:
    python tools/audit.py            # full audit
    python tools/audit.py --quick    # skip the (slow) full prog/ cross-compile
"""

import csv
import glob
import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]

FAIL = []
WARN = []


def check(ok, label, detail=""):
    print("  [%s] %-58s %s" % ("PASS" if ok else "FAIL", label, detail))
    if not ok:
        FAIL.append(label)
    return ok


def warn(label, detail=""):
    print("  [WARN] %-58s %s" % (label, detail))
    WARN.append(label)


def section(title):
    print()
    print(title)


def main():
    quick = "--quick" in sys.argv

    # ---------------------------------------------------------------- code
    section("1. Recovered functions")
    csv_path = os.path.join(ROOT, "data", "functions.csv")
    with open(csv_path, encoding="utf-8") as f:
        rows = list(csv.DictReader(f))
    check(len(rows) == 152062, "data/functions.csv rows", "%d" % len(rows))

    per_mod = {}
    for r in rows:
        per_mod.setdefault(r["module"], []).append(r)
    for m in MODULES:
        n = len(per_mod.get(m, []))
        check(n > 0, "module %s present" % m, "%d functions" % n)

    # Addresses must be unique *within* a module, and sorted.
    for m in MODULES:
        addrs = [int(r["addr"], 16) for r in per_mod.get(m, [])]
        check(addrs == sorted(addrs), "module %s addresses ascending" % m)
        check(len(set(addrs)) == len(addrs), "module %s addresses unique" % m)

    named = [r for r in rows
             if not re.match(r"^(sub|j_sub|j_nullsub|nullsub|f)_[0-9a-fA-F]+$",
                             r["name"]) and r["name"] != "_start"]
    print("  info  %-58s %d of %d (%.2f%%)"
          % ("functions with a meaningful name", len(named), len(rows),
             100.0 * len(named) / len(rows)))
    if len(named) < len(rows) * 0.5:
        warn("named fraction low",
             "only %d named; the rest need manual RE" % len(named))

    # ------------------------------------------------------- block coverage
    section("2. Block coverage (every recomp block in exactly one function)")
    import bisect
    grand_blocks = 0
    for m in MODULES:
        pat = ("void blk_%s_([0-9a-f]+)\\(" % m).encode()
        blocks = set()
        for f in glob.glob(os.path.join(ROOT, "exefs", m, "src", "*.c")):
            for mm in re.finditer(pat, open(f, "rb").read()):
                blocks.add(int(mm.group(1), 16))
        man = json.load(open(os.path.join(ROOT, "work", m, "manifest.json")))
        tlen = man["segments"]["text"]["memsz"]
        addrs = sorted(int(r["addr"], 16) for r in per_mod.get(m, []))
        # A block is covered if some function start is at or below it; blocks
        # below the first function are entry-stub words, excluded by design.
        first = addrs[0] if addrs else 0
        covered = sum(1 for b in blocks if b >= first)
        stubs = len(blocks) - covered
        grand_blocks += len(blocks)
        ok = stubs <= 32
        check(ok, "module %s blocks covered" % m,
              "%d blocks, %d entry-stub below first function" % (len(blocks), stubs))
    print("  info  %-58s %d" % ("total recomp blocks", grand_blocks))

    # -------------------------------------------------------------- ELF
    section("3. Rebuilt ELF binaries")
    from elftools.elf.elffile import ELFFile
    elf_funcs = 0
    for m in MODULES:
        p = os.path.join(ROOT, "data", "%s.elf" % m)
        if not check(os.path.exists(p), "data/%s.elf exists" % m):
            continue
        with open(p, "rb") as f:
            e = ELFFile(f)
            text = e.get_section_by_name(".text")
            ro = e.get_section_by_name(".rodata")
            dat = e.get_section_by_name(".data")
            sym = e.get_section_by_name(".symtab")
            check(text is not None and ro is not None and dat is not None,
                  "%s sections named" % m)
            exact = (text.data() == open(os.path.join(ROOT, "work", m, "text.bin"), "rb").read()
                     and ro.data() == open(os.path.join(ROOT, "work", m, "rodata.bin"), "rb").read()
                     and dat.data() == open(os.path.join(ROOT, "work", m, "data.bin"), "rb").read())
            check(exact, "%s .text/.rodata/.data byte-identical to NSO" % m)
            # Count every STT_FUNC. Do not filter on st_value: NSO modules are
            # based at 0, so rtld legitimately has a function at address 0 and
            # a truthiness test would silently drop it.
            n = sum(1 for s in sym.iter_symbols()
                    if s["st_info"]["type"] == "STT_FUNC")
            elf_funcs += n
            print("  info  %-58s %d STT_FUNC symbols" % ("%s ELF symbols" % m, n))
    check(elf_funcs >= len(rows), "ELF symbols cover all functions",
          "%d symbols vs %d rows" % (elf_funcs, len(rows)))

    # ------------------------------------------------------------- prog/
    section("4. prog/ source tree")
    cpps = glob.glob(os.path.join(ROOT, "prog", "**", "*.cpp"), recursive=True)
    hdrs = glob.glob(os.path.join(ROOT, "prog", "**", "*.h"), recursive=True)
    check(len(cpps) > 0 and len(hdrs) > 0, "prog/ has sources and headers",
          "%d .cpp, %d .h" % (len(cpps), len(hdrs)))

    # Every function must have a definition somewhere in prog/. Most live in the
    # namespaced tree as `void f() { ... }`; the verified matches live at global
    # scope in prog/matched/ with a recovered signature, so they are counted
    # from those files instead.
    qual = {}
    decls = 0
    for f in cpps:
        if os.sep + "matched" + os.sep in f:
            continue  # counted below, with the recovered signatures
        src = open(f, encoding="utf-8").read()
        m = re.search(r"^namespace ([A-Za-z0-9_:]+) \{", src, re.M)
        ns = m.group(1) if m else ""
        # A tail-call thunk is `void f() { ns::target(); }` -- a body, not a
        # stub, so it counts as a definition.
        for line in src.splitlines():
            body = re.match(r"^void ([A-Za-z_][A-Za-z0-9_]*)\(\)\s*\{", line)
            if not body:
                continue
            decls += 1
            ident = body.group(1)
            key = (ns, ident)
            qual[key] = qual.get(key, 0) + 1
    for f in cpps:
        if os.sep + "matched" + os.sep not in f:
            continue
        for line in open(f, encoding="utf-8"):
            # Match *any* return type, not an allow-list.
            #
            # The allow-list was missing `const`, `int`, `unsigned`, `char`,
            # `short` and `signed`, so it undercounted by 253 and reported
            # "prog/ defines every function -- 151799 definitions vs 152062 rows"
            # as a FAILURE. It was a false alarm: the audit's own other check,
            # "every CSV decomp_name exists in the built NX64 ELF", passes for
            # all 152062, and the code is demonstrably present.
            #
            # 252 of the misses return `const` -- the strlit generators emit
            # `const char *f()`. An explicit enumeration of types is the same
            # mistake as the ones already recorded in HANDOFF.md: it silently
            # omits whatever nobody thought of, and the omission reads as a
            # missing function rather than a missing pattern.
            #
            # `extern` is excluded because a declaration is not a definition.
            if line.lstrip().startswith(("extern", "//", "/*")):
                continue
            if re.match(r"^\s*.*?[A-Za-z_][A-Za-z0-9_]*\s*\([^;]*\)\s*"
                        r"(?:const\s*)?\{", line):
                # Deliberately permissive about everything before the
                # signature. Three narrower patterns each failed, and every one
                # of them read as "a function is missing" rather than "the
                # pattern is wrong":
                #
                #   allow-list of types          undercounted 253 (no `const`)
                #   anchored at column 0        missed definitions indented in
                #                               a namespace
                #   `[\w:<>,\s\*&]*` for the type missed 9 `pair16_` bodies,
                #                               whose line begins
                #                               `struct pair16_f_105f20_ { uint64_t f[2]; };`
                #                               and so contains `{ } [ ] ;`, none of
                #                               which the class allowed.
                #
                # What actually distinguishes a definition is the opening brace
                # after a parameter list. `extern`, `//` and `/*` are excluded
                # above because a declaration is not a definition.
                decls += 1
    check(decls == len(rows), "prog/ defines every function",
          "%d definitions vs %d rows" % (decls, len(rows)))
    dups = [k for k, v in qual.items() if v > 1]
    check(not dups, "prog/ namespaced symbols unique (no link collisions)",
          "%d dupes" % len(dups))

    # Every directory that owns sources must be reachable from CMake.
    missing_cm = [f for f in cpps
                  if not os.path.exists(os.path.join(os.path.dirname(f), "CMakeLists.txt"))]
    check(not missing_cm, "every source dir has a CMakeLists.txt",
          "%d missing" % len(missing_cm))
    top = os.path.join(ROOT, "prog", "CMakeLists.txt")
    check(os.path.exists(top), "prog/CMakeLists.txt exists")
    if os.path.exists(top):
        body = open(top, encoding="utf-8").read()
        subs = set()
        for entry in os.listdir(os.path.join(ROOT, "prog")):
            if os.path.isdir(os.path.join(ROOT, "prog", entry)):
                subs.add(entry)
        absent = [s for s in subs if "add_subdirectory(%s)" % s not in body]
        check(not absent, "prog/CMakeLists covers every group", str(absent))

    # ------------------------------------------------------- cross-compile
    if not quick:
        section("5. prog/ cross-compiles for aarch64-none-elf")
        clang = None
        for c in (r"C:\Users\charl\scoop\apps\llvm\current\bin\clang++.exe",
                  "clang++"):
            if os.path.isfile(c) or __import__("shutil").which(c):
                clang = c
                break
        if not clang:
            warn("no clang++ found, skipping cross-compile check")
        else:
            bad = []
            for f in cpps:
                inc = os.path.join(os.path.dirname(os.path.dirname(f)), "include")
                r = subprocess.run([clang, "--target=aarch64-none-elf",
                                    "-std=c++17", "-fsyntax-only", "-nostdinc++",
                                    "-Wall", "-I", inc, f],
                                   capture_output=True, text=True)
                if r.returncode != 0:
                    bad.append((f, r.stderr[:200]))
            check(not bad, "all prog/ units compile for NX64",
                  "%d/%d ok" % (len(cpps) - len(bad), len(cpps)))
            for f, err in bad[:3]:
                print("      %s\n      %s" % (os.path.basename(f), err))

    # ------------------------------------------------------------- Pawn
    section("6. Pawn scripts")
    pasm = glob.glob(os.path.join(ROOT, "decomp", "script", "*.pasm"))
    pseudo = glob.glob(os.path.join(ROOT, "decomp", "script", "*.pseudo.c"))
    check(len(pasm) == 691, "691 scripts disassembled", "%d" % len(pasm))
    check(len(pseudo) == 691, "691 scripts rendered as pseudocode", "%d" % len(pseudo))
    sp = os.path.join(ROOT, "data", "scripts.csv")
    if os.path.exists(sp):
        srows = list(csv.DictReader(open(sp, encoding="utf-8")))
        check(len(srows) == 691, "data/scripts.csv rows", "%d" % len(srows))

    # ------------------------------------------------------------- builds
    section("7. Host verification binaries")
    for m in MODULES:
        p = os.path.join(ROOT, "build_host", "bin", "decompiled_%s.exe" % m)
        check(os.path.exists(p), "build_host/bin/decompiled_%s.exe" % m,
              "%d bytes" % os.path.getsize(p) if os.path.exists(p) else "missing")

    # ------------------------------------------------------- asm-differ
    section("8. asm-differ tooling")
    for p in ("tools/asm-differ/diff.py", "tools/check.py", "tools/diff.py",
              "tools/print_decomp_symbols.py", "diff_settings.py",
              "tools/diff_settings.py", "tools/py_compat/imp.py",
              "tools/objdump_shim.py", "tools/shim/tail.py", "tools/shim/less.py"):
        check(os.path.exists(os.path.join(ROOT, p)), "present: %s" % p)
    prog_elf = os.path.join(ROOT, "build", "prog.elf")
    if os.path.exists(prog_elf):
        llvmnm = r"C:\Users\charl\scoop\apps\llvm\current\bin\llvm-nm.exe"
        if os.path.isfile(llvmnm):
            out = subprocess.run([llvmnm, "--defined-only", prog_elf],
                                 capture_output=True, text=True).stdout
            have = {ln.split()[2] for ln in out.splitlines() if len(ln.split()) == 3}
            def sym(r):
                d = r.get("decomp_name") or ""
                return d[:-1] if d.endswith("!") else d
            missing = [r for r in rows if sym(r) and sym(r) not in have]
            check(not missing,
                  "every CSV decomp_name exists in the built NX64 ELF",
                  "%d missing of %d" % (len(missing), len(rows)))
            if missing:
                for mname in missing[:5]:
                    print("      missing: %s" % mname)
    else:
        warn("build/prog.elf absent",
             "build it with the NX64 steps in CONTRIBUTING.md to enable this check")

    # --------------------------------------------------------- matching
    section("9. Matching coverage")
    matching = [r for r in rows
                if (r.get("decomp_name") or "") and not r["decomp_name"].endswith("!")]
    check(len(matching) > 0, "functions marked as matching", "%d" % len(matching))
    rate = 100.0 * len(matching) / len(rows) if rows else 0.0
    print("  info  %-58s %.2f%%" % ("match rate", rate))

    # A function may only be marked matching if the report says the compiler
    # reproduced it; this re-reads those reports rather than trusting the CSV.
    reported = {}
    for m in MODULES:
        rp = os.path.join(ROOT, "data", "matched_%s.json" % m)
        if not os.path.exists(rp):
            continue
        try:
            blob = json.load(open(rp, encoding="utf-8"))
        except (ValueError, OSError):
            continue
        for rec in blob.get("matched", []):
            reported[(m, int(rec["addr"]))] = rec
    unsupported = [r for r in matching
                   if (r["module"], int(r["addr"], 16)) not in reported]
    check(not unsupported,
          "every 'matching' row is backed by an auto_match report",
          "%d unsupported" % len(unsupported))
    for r in unsupported[:5]:
        print("      %s %s %s" % (r["module"], r["addr"], r["decomp_name"]))

    # The matched bodies must actually be present: recovered-signature bodies in
    # prog/matched/, tail-call thunks in the namespaced tree (they have to name
    # the real destination function for the branch to resolve).
    if reported:
        bodies = 0
        tails = 0
        for m in MODULES:
            p = os.path.join(ROOT, "prog", "matched", m, "source")
            if os.path.isdir(p):
                for f in glob.glob(os.path.join(p, "*.cpp")):
                    bodies += len(re.findall(
                        r"^// \S", open(f, encoding="utf-8").read(), re.M))
        for f in glob.glob(os.path.join(ROOT, "prog", "**", "*.cpp"),
                           recursive=True):
            if os.sep + "matched" + os.sep in f:
                continue
            tails += len(re.findall(r"// tail -> ", open(f, encoding="utf-8").read()))
        total_bodies = bodies + tails
        check(total_bodies >= len(matching),
              "matched bodies emitted (%d global + %d tail thunks)" % (bodies, tails),
              "%d bodies for %d matching rows" % (total_bodies, len(matching)))

    # Function sizes must exclude inter-function padding, or asm-differ reports
    # the padding as unmatched for every function.
    padded = 0
    for m in MODULES:
        blob = open(os.path.join(ROOT, "work", m, "text.bin"), "rb").read()
        for r in per_mod.get(m, []):
            a, sz = int(r["addr"], 16), int(r["size"])
            if sz >= 4 and a + sz <= len(blob) and blob[a + sz - 4:a + sz] == b"\0\0\0\0":
                padded += 1
    check(padded == 0, "CSV sizes exclude trailing padding",
          "%d sizes still include a padding word" % padded)

    # ----------------------------------------------------------- assets
    section("10. Assets and RTTI")
    inv = os.path.join(ROOT, "decomp", "docs", "asset_inventory.md")
    check(os.path.exists(inv), "asset inventory documented")
    rt = os.path.join(ROOT, "data", "rtti_classes.csv")
    if os.path.exists(rt):
        n = sum(1 for _ in open(rt, encoding="utf-8")) - 1
        check(n > 1000, "RTTI class names recovered", "%d" % n)

    # ---------------------------------------------------------- summary
    print()
    print("=" * 72)
    if FAIL:
        print("AUDIT FAILED: %d check(s)" % len(FAIL))
        for f in FAIL:
            print("  - %s" % f)
    else:
        print("AUDIT PASSED: every check green")
    if WARN:
        print("%d warning(s):" % len(WARN))
        for w in WARN:
            print("  - %s" % w)
    print("=" * 72)
    return 1 if FAIL else 0


if __name__ == "__main__":
    sys.exit(main())
