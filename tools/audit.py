#!/usr/bin/env python3
"""Final audit: re-verify every claim this project makes, from scratch.

Deliberately re-reads the artifacts rather than trusting earlier output, so it
catches drift between the generator and the tree it produced.

Usage:
    python tools/audit.py            # full audit
    python tools/audit.py --quick    # skip the (slow) full prog/ cross-compile
"""

import ast
import csv
import collections
import glob
import io
import json
import os
import re
import subprocess
import time
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]

FAIL = []
WARN = []
SKIP = []



HARVEST_LOCK = os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),
                            "work", "harvest.lock")


def pid_alive(pid):
    """Is `pid` still running?  Windows-safe.

    `os.kill(pid, 0)` is *not* a safe existence probe on Windows -- for any
    signal other than CTRL_C_EVENT/CTRL_BREAK_EVENT it calls TerminateProcess,
    so "checking" a pid would kill it. Use OpenProcess instead.
    """
    try:
        pid = int(pid)
    except (TypeError, ValueError):
        return False
    if pid <= 0:
        return False
    if os.name == "nt":
        try:
            import ctypes
            PROCESS_QUERY_LIMITED_INFORMATION = 0x1000
            k = ctypes.windll.kernel32
            h = k.OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, False, pid)
            if not h:
                return False
            k.CloseHandle(h)
            return True
        except Exception:
            return True          # cannot tell: assume alive, err toward waiting
    try:
        os.kill(pid, 0)
        return True
    except OSError:
        return False


def wait_for_harvest(timeout=300):
    """Wait out a keepalive harvest that is rewriting prog/, or report deferred.

    `keepalive --work auto` regenerates `prog/` via `decomp_project` and rebuilds.
    An audit running concurrently reads a half-written tree and reports failures
    that do not exist -- three of them, once, on a clean tree that passed on
    re-run. That is the worst kind of tool output: a false alarm that trains you
    to ignore alarms.

    Waiting is right; waiting *forever* is not. A harvest slice legitimately
    takes many minutes, and the first version of this waited up to an hour, so a
    concurrent audit stalled until its caller timed out -- trading a race for a
    hang, which is the same outage wearing a different hat. Measured: the
    heartbeat's audit probe hit its own 1800 s ceiling here.

    So: clear a *stale* lock (its owner is gone), wait a bounded time for a live
    one, and if it is still held, exit 3 -- deferred. Deliberately not 0, because
    a pass that examined nothing is the vacuous-check mistake; deliberately not 1,
    because nothing is wrong with the tree.
    """
    if not os.path.exists(HARVEST_LOCK):
        return False
    try:
        owner = io.open(HARVEST_LOCK).read().strip()
    except OSError:
        owner = ""
    if owner and not pid_alive(owner):
        print("audit: clearing stale harvest lock from pid %s" % owner)
        try:
            os.unlink(HARVEST_LOCK)
        except OSError:
            pass
        return False
    # Tunable so the deferred path can be falsified in seconds instead of
    # minutes; the production default is deliberately generous.
    timeout = int(os.environ.get("POKESWORD_AUDIT_LOCK_WAIT", timeout))
    deadline = time.time() + timeout
    print("audit: waiting for an in-progress harvest to finish ...")
    while os.path.exists(HARVEST_LOCK) and time.time() < deadline:
        time.sleep(5)
    if os.path.exists(HARVEST_LOCK):
        print("audit: DEFERRED -- a harvest still holds the lock after %ds; "
              "the tree was not examined" % timeout)
        return True
    return False


def check(ok, label, detail=""):
    print("  [%s] %-58s %s" % ("PASS" if ok else "FAIL", label, detail))
    if not ok:
        FAIL.append(label)
    return ok


def warn(label, detail=""):
    print("  [WARN] %-58s %s" % (label, detail))
    WARN.append(label)


def skip(label, detail=""):
    """A check that could not run. Neither PASS nor FAIL.

    Some audit sections need artifacts that are deliberately not committed --
    `work/`, `exefs/` and `build/` are all gitignored, because they are large
    outputs of local extraction and build steps. On a fresh CI checkout they are
    simply absent, and the audit used to die with a bare `FileNotFoundError`:

        File ".../tools/audit.py", line 117, in main
          man = json.load(open(os.path.join(ROOT, "work", m, "manifest.json")))
        FileNotFoundError: .../work/rtld/manifest.json

    which failed every run of the workflow and told the reader nothing about
    which check was skipped or why.

    Reporting a skip as a PASS would be the vacuous-check mistake in a new coat:
    a green line that examined nothing. Reporting it as a FAIL would be worse --
    it would blame the tree for a missing build directory. So it is its own
    outcome, printed, counted, and surfaced in the summary.
    """
    print("  [SKIP] %-58s %s" % (label, detail))
    SKIP.append(label)


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
        man_path = os.path.join(ROOT, "work", m, "manifest.json")
        src_glob = os.path.join(ROOT, "exefs", m, "src", "*.c")
        # Both inputs are gitignored. Say which one is missing instead of
        # opening it and letting the interpreter report a traceback.
        if not os.path.exists(man_path):
            skip("module %s blocks covered" % m,
                 "needs work/%s/manifest.json (gitignored; produced locally)" % m)
            continue
        if not glob.glob(src_glob):
            skip("module %s blocks covered" % m,
                 "needs exefs/%s/src/*.c (gitignored; produced locally)" % m)
            continue
        pat = ("void blk_%s_([0-9a-f]+)\\(" % m).encode()
        blocks = set()
        for f in glob.glob(src_glob):
            for mm in re.finditer(pat, open(f, "rb").read()):
                blocks.add(int(mm.group(1), 16))
        man = json.load(open(man_path))
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
    # A missing optional dependency is the same situation as a missing artifact:
    # the check cannot run, which is not the same as the check failing. Importing
    # pyelftools at module scope turned "the runner has no pyelftools" into a
    # ModuleNotFoundError traceback and a red run that said nothing about the
    # tree -- it failed every CI run of this workflow.
    try:
        from elftools.elf.elffile import ELFFile
        HAVE_ELFTOOLS = True
    except ImportError:
        HAVE_ELFTOOLS = False
        skip("rebuilt ELF binaries",
             "pyelftools is not installed; pip install pyelftools")
    elf_funcs = 0
    elf_seen = 0
    for m in MODULES:
        p = os.path.join(ROOT, "data", "%s.elf" % m)
        if not HAVE_ELFTOOLS:
            skip("data/%s.elf exists" % m, "needs pyelftools")
            continue
        if not os.path.exists(p):
            # .gitignore: "ROM-derived binaries (rebuild with tools/nso_to_elf.py)".
            # ~40 MB each, deliberately uncommitted. Failing here would fail every
            # CI run for the sake of a file the repo promises not to carry.
            skip("data/%s.elf exists" % m,
                 "ROM-derived binary, gitignored (~40 MB); rebuild with tools/nso_to_elf.py")
            continue
        elf_seen += 1
        check(True, "data/%s.elf exists" % m)
        with open(p, "rb") as f:
            e = ELFFile(f)
            text = e.get_section_by_name(".text")
            ro = e.get_section_by_name(".rodata")
            dat = e.get_section_by_name(".data")
            sym = e.get_section_by_name(".symtab")
            check(text is not None and ro is not None and dat is not None,
                  "%s sections named" % m)
            bins = {k: os.path.join(ROOT, "work", m, "%s.bin" % k)
                    for k in ("text", "rodata", "data")}
            if all(os.path.exists(b) for b in bins.values()):
                exact = (text.data() == open(bins["text"], "rb").read()
                         and ro.data() == open(bins["rodata"], "rb").read()
                         and dat.data() == open(bins["data"], "rb").read())
                check(exact, "%s .text/.rodata/.data byte-identical to NSO" % m)
            else:
                skip("%s .text/.rodata/.data byte-identical to NSO" % m,
                     "needs work/%s/{text,rodata,data}.bin (gitignored)" % m)
            # Count every STT_FUNC. Do not filter on st_value: NSO modules are
            # based at 0, so rtld legitimately has a function at address 0 and
            # a truthiness test would silently drop it.
            n = sum(1 for s in sym.iter_symbols()
                    if s["st_info"]["type"] == "STT_FUNC")
            elf_funcs += n
            print("  info  %-58s %d STT_FUNC symbols" % ("%s ELF symbols" % m, n))
    if not HAVE_ELFTOOLS:
        skip("ELF symbols cover all functions", "needs pyelftools")
    elif elf_seen:
        check(elf_funcs >= len(rows), "ELF symbols cover all functions",
              "%d symbols vs %d rows" % (elf_funcs, len(rows)))
    else:
        skip("ELF symbols cover all functions",
             "needs data/<module>.elf (gitignored; rebuild with tools/nso_to_elf.py)")

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
    # The tracked form is decomp/script/*.c (691). The .pasm and .pseudo.c forms
    # are gitignored intermediates, so a fresh checkout has neither.
    if pasm:
        check(len(pasm) == 691, "691 scripts disassembled", "%d" % len(pasm))
    else:
        skip("691 scripts disassembled",
             "needs decomp/script/*.pasm (gitignored intermediate; the tracked "
             "form is decomp/script/*.c)")
    if pseudo:
        check(len(pseudo) == 691, "691 scripts rendered as pseudocode", "%d" % len(pseudo))
    else:
        skip("691 scripts rendered as pseudocode",
             "needs decomp/script/*.pseudo.c (gitignored intermediate)")
    sp = os.path.join(ROOT, "data", "scripts.csv")
    if os.path.exists(sp):
        srows = list(csv.DictReader(open(sp, encoding="utf-8")))
        check(len(srows) == 691, "data/scripts.csv rows", "%d" % len(srows))

    # ------------------------------------------------------------- builds
    section("7. Host verification binaries")
    host_seen = 0
    for m in MODULES:
        p = os.path.join(ROOT, "build_host", "bin", "decompiled_%s.exe" % m)
        if os.path.exists(p):
            host_seen += 1
            check(True, "build_host/bin/decompiled_%s.exe" % m,
                  "%d bytes" % os.path.getsize(p))
        else:
            skip("build_host/bin/decompiled_%s.exe" % m,
                 "build_host/ is gitignored (~203 MB per binary); build locally")
    if not host_seen:
        print("  info  no host binaries present; build_host/ checks did not run")

    # ------------------------------------------------------- asm-differ
    section("8. asm-differ tooling")
    for p in ("tools/asm-differ/diff.py", "tools/check.py", "tools/diff.py",
              "tools/print_decomp_symbols.py", "diff_settings.py",
              "tools/diff_settings.py", "tools/py_compat/imp.py",
              "tools/objdump_shim.py", "tools/shim/tail.py", "tools/shim/less.py"):
        check(os.path.exists(os.path.join(ROOT, p)), "present: %s" % p)

    # No tool may reference a module-level constant it does not define.
    #
    # Two of these shipped, in separate commits, and both were invisible:
    #
    #   MAX_ARG   in straight_line.py, deleted by a regex whose span was never
    #             inspected. Three commits of a translator that raised NameError.
    #   NOWINDOW  in keepalive.py, referenced six times by commit f5d241ed
    #             ("stop the flashing windows") and never defined. Every tick
    #             died with NameError, the supervisor relaunched it, and the loop
    #             crash-looped at `rc=1 after 0s` while the percentage sat frozen.
    #
    # The common cause is that nothing checked the *tools*. The audit verifies
    # stored artifacts, so a tool that is broken but not re-run looks identical
    # to one that works. And the tick is fault-tolerant by design -- it continues
    # past a failure rather than stopping -- which is exactly what turned a hard
    # error into an indefinite silent one.
    #
    # Restricted to SHOUTING_CASE names bound nowhere in the file. That is
    # deliberately narrow: a full scope analysis is pyflakes' job, and a
    # hand-rolled one that false-positives would train everyone to ignore a red
    # audit. Constants are where both real defects lived, and the check is
    # conservative by construction -- a name assigned *anywhere* in the file
    # counts as defined, so it cannot fire on a local.
    import ast as _ast2
    import builtins as _builtins2
    _BUILTINS = set(dir(_builtins2))
    _SHOUT = re.compile(r"^[A-Z][A-Z0-9_]*$")
    _bad = []
    _tools = sorted(glob.glob(os.path.join(ROOT, "tools", "*.py")))
    for _fn in _tools:
        _rel = os.path.relpath(_fn, ROOT).replace("\\", "/")
        try:
            _tree2 = _ast2.parse(io.open(_fn, encoding="utf-8").read())
        except (OSError, SyntaxError) as _e:
            _bad.append("%s: unreadable (%s)" % (_rel, _e))
            continue
        # A name counts as bound only if it is *written* somewhere. The first
        # version of this check added every Name node, Load-context ones
        # included, so a constant's own use marked it defined and the check
        # could never fire -- it was verified to pass on a file with the exact
        # defect it exists to catch. Bindings are Name in Store/Del context,
        # function and class definitions, arguments, imports, except-aliases,
        # and global/nonlocal declarations.
        _bound = set(_BUILTINS)
        for _n in _ast2.walk(_tree2):
            if isinstance(_n, _ast2.Name):
                if not isinstance(_n.ctx, _ast2.Load):
                    _bound.add(_n.id)
            elif isinstance(_n, _ast2.arg):
                _bound.add(_n.arg)
            elif isinstance(_n, (_ast2.FunctionDef, _ast2.AsyncFunctionDef,
                                 _ast2.ClassDef)):
                _bound.add(_n.name)
            elif isinstance(_n, (_ast2.Import, _ast2.ImportFrom)):
                for _a in _n.names:
                    _bound.add((_a.asname or _a.name).split(".")[0])
            elif isinstance(_n, _ast2.ExceptHandler) and _n.name:
                _bound.add(_n.name)
            elif isinstance(_n, (_ast2.Global, _ast2.Nonlocal)):
                _bound.update(_n.names)
        _hits = set()
        for _n in _ast2.walk(_tree2):
            if (isinstance(_n, _ast2.Name) and isinstance(_n.ctx, _ast2.Load)
                    and _SHOUT.match(_n.id) and _n.id not in _bound):
                _hits.add("%s:%d undefined %s" % (_rel, _n.lineno, _n.id))
        _bad.extend(sorted(_hits))
    _seen = sorted(set(_bad))
    check(not _seen, "tools define every constant they reference",
          "; ".join(_seen[:6]) if _seen else
          "no undefined SHOUTING_CASE name in %d tool(s)" % len(_tools))

    # The semantic matcher's own falsification suite must pass.
    #
    # `tools/sem_match.py` accepts a body on *observed behaviour* rather than on
    # byte-identity, which is the only route past the frame wall -- 79.5% of what
    # remains uses the writeback `sp` forms Clang 5.0.1 cannot emit, so no amount
    # of translator work reaches it.
    #
    # A matcher that accepts everything is worse than no matcher: it is
    # indistinguishable from a working one in every number it reports. So the
    # suite is run here rather than trusted. It requires all three properties --
    # accepts a byte-identical pair, accepts an equivalent pair that is NOT
    # byte-identical, and rejects a one-constant near-miss -- and `unicorn` is an
    # optional dependency, so its absence is a clean skip rather than a failure.
    #
    # A `skip()` here means the *capability* is absent, not that the tree is bad.
    # Once unicorn is installed this becomes a hard gate.
    _sem = os.path.join(ROOT, "tools", "sem_match_selftest.py")
    if not os.path.exists(_sem):
        check(False, "semantic matcher selftest present",
              "tools/sem_match_selftest.py is missing")
    else:
        try:
            _r = subprocess.run([sys.executable, _sem], cwd=ROOT,
                                capture_output=True, text=True, timeout=1800)
        except Exception as _e:                # noqa: BLE001
            _r = None
            skip("semantic matcher selftest",
                 "could not run: %s: %s" % (type(_e).__name__, _e))
        if _r is not None:
            _out = (_r.stdout or "") + (_r.stderr or "")
            if "SKIP:" in _out and "unicorn" in _out:
                skip("semantic matcher selftest",
                     "unicorn not installed -- semantic matching unavailable")
            elif _r.returncode == 0 and "SELFTEST PASSED" in _out:
                _n = 0
                for _ln in _out.splitlines():
                    if _ln.strip().startswith("[PASS]"):
                        _n += 1
                check(True, "semantic matcher accepts equivalences and rejects "
                            "near-misses", "%d/%d properties verified"
                            % (_n, _n))
            else:
                check(False, "semantic matcher accepts equivalences and rejects "
                             "near-misses",
                     "selftest failed; a matcher that cannot be shown to reject "
                     "a near-miss must not be used to accept a body")

    # The translator must define the constants its own code references.
    #
    # Commit 4f2b63c6 deleted `MAX_ARG = 7` with a regex whose span was never
    # inspected (`^MAX_INSNS = 64.*?(?=\nSYNTH_BASE)` ate everything between).
    # Three commits then shipped a translator in which `resolve_base` and
    # `arg_reg` raise NameError. Nothing noticed, for two compounding reasons:
    # the audit verifies *stored* artifacts rather than the tool's health, and
    # the decline census buckets exceptions separately from declines, so 351
    # bodies vanished silently instead of failing loudly.
    #
    # Checked structurally via ast, not by import: per the note below, an audit
    # that executes the tools it audits can fail for unrelated reasons. A name
    # that is used but never assigned at module level is the exact defect.
    import ast as _ast
    try:
        _tree = _ast.parse(io.open(os.path.join(ROOT, "tools", "straight_line.py"),
                                   encoding="utf-8").read())
        _assigned = set()
        for _node in _tree.body:
            if isinstance(_node, _ast.Assign):
                for _t in _node.targets:
                    if isinstance(_t, _ast.Name):
                        _assigned.add(_t.id)
            elif isinstance(_node, (_ast.FunctionDef, _ast.ClassDef)):
                _assigned.add(_node.name)
        _need = {"MAX_ARG", "MAX_INSNS", "SYNTH_BASE", "SRET_ID", "LOADS",
                 "STORES", "U", "S", "EXTEND_TYPES", "BITWISE_MNEMONICS",
                 "FLAG_MNEMONICS", "COND_MNEMONICS", "COND_OPS"}
        _missing = sorted(_need - _assigned)
        check(not _missing, "straight_line.py defines its constants",
              "missing %s" % _missing if _missing else "all %d present" % len(_need))
    except (OSError, SyntaxError) as _e:
        check(False, "straight_line.py defines its constants",
              "unreadable: %s" % _e)

    # The verification harness must compile with the flags the build uses.
    #
    # `match_harness.CFLAGS` opened with a comment saying exactly that -- "or
    # 'verified' means nothing" -- and then omitted eight flags that
    # `build_nx64.CXXFLAGS` carried. 26 bodies were registered as matching on
    # the strength of the wrong flag set: they compile correctly under the
    # harness's flags and incorrectly under the build's, because
    # `-mno-implicit-float` changes the order of two independent stores.
    #
    # That direction of error is what makes it worth a permanent check. Every
    # other flag defect here made correct code look wrong, so something went
    # red. This one made correct-looking code look *right*, and the suite
    # reported 100.00% clean on all four modules while 26 bodies did not match
    # the linked binary.
    #
    # Parsed with `ast` rather than imported: an audit that executes the tools
    # it audits can fail for reasons that have nothing to do with what it checks.
    def _flag_list(path, name, extra=None):
        """Read a module-level list of string flags without importing it.

        `build_nx64.CXXFLAGS` is not a literal -- it contains `"--" + TRIPLE`,
        the name `OPT` and the name `ARCH` -- so `ast.literal_eval` alone cannot
        read it. Resolve module-level string constants, then whatever the caller
        supplies for the environment-dependent ones.

        Importing the modules instead would be simpler and worse: an audit that
        executes the tools it audits can fail for reasons unrelated to what it
        checks.
        """
        try:
            tree = ast.parse(open(os.path.join(ROOT, path),
                                  encoding="utf-8").read())
        except (OSError, SyntaxError):
            return None
        consts = dict(extra or {})

        def ev(n):
            if isinstance(n, ast.Constant) and isinstance(n.value, str):
                return n.value
            if isinstance(n, ast.Name):
                if n.id in consts:
                    return consts[n.id]
                raise ValueError(n.id)
            if isinstance(n, ast.BinOp) and isinstance(n.op, ast.Add):
                return ev(n.left) + ev(n.right)
            raise ValueError(ast.dump(n))

        for node in tree.body:
            if isinstance(node, ast.Assign):
                for t in node.targets:
                    if not isinstance(t, ast.Name):
                        continue
                    try:
                        consts[t.id] = ev(node.value) if isinstance(
                            node.value, ast.BinOp) else ast.literal_eval(node.value)
                    except (ValueError, SyntaxError, TypeError):
                        pass
        for node in tree.body:
            if isinstance(node, ast.Assign):
                for t in node.targets:
                    if isinstance(t, ast.Name) and t.id == name:
                        try:
                            return set(ev(e) for e in node.value.elts)
                        except (ValueError, AttributeError, SyntaxError):
                            return None
        return None

    # Both files spell the optimisation level as a name bound to an
    # os.environ.get, so neither can be read as a literal. Resolve it the same
    # way for both, which is the point: a mismatch in POKESWORD_OPT has to show
    # up here rather than being absorbed.
    opt = os.environ.get("POKESWORD_OPT", "-O3")
    harness_flags = _flag_list("tools/match_harness.py", "CFLAGS", {"OPT": opt})
    build_flags = _flag_list("tools/build_nx64.py", "CXXFLAGS", {"OPT": opt})
    if harness_flags is None or build_flags is None:
        warn("could not read the flag lists; skipped the parity check")
    else:
        only_build = sorted(build_flags - harness_flags)
        only_harness = sorted(harness_flags - build_flags)
        check(not only_build and not only_harness,
              "match_harness flags match the build's flags",
              "missing %s / extra %s" % (only_build or "none",
                                         only_harness or "none"))
    prog_elf = os.path.join(ROOT, "build", "prog.elf")
    if not os.path.exists(prog_elf):
        # Say so. A silently skipped check is how this project shipped a false
        # "AUDIT PASSED" for a whole session -- and once audit runs in CI on a
        # checkout with no build/, a green result would otherwise imply the
        # linked-ELF checks had run when they had not.
        warn("build/prog.elf absent; skipped the linked-ELF symbol checks "
             "(run tools/build_nx64.py first)")
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

        # `tails` above counts `// tail -> ` comments and is structurally always
        # 0: tail-call bodies are not emitted as thunks in a separate tree, they
        # are emitted in prog/matched as
        #     void sdk_f_1ab80() { sdk::sub_1d5f0(); }
        # which Clang turns back into the single `b`. So that branch is vestigial
        # -- harmless, because the check is a `>=` on the total, but it must not
        # be read as "there are no tail calls". There are 5,241 of them.

        # The `>=` above cannot tell *which* records lack a body, so it stays
        # green while the registry over-claims. Compare the sets instead.
        #
        # `decomp_project.tail_target_ok` deliberately declines a tail-call thunk
        # whose destination takes parameters -- a bare `b` forwards no
        # arguments, so the thunk could not carry its own recovered signature --
        # and `build_prog` drops those from `matched` before emitting, giving
        # them a plain stub instead. That filtering happens **in memory only**:
        # the JSON on disk keeps the records. So a small number of body-less
        # `tailcall` records is expected by design, and anything else is not.
        emitted_addrs = set()
        for m in MODULES:
            p = os.path.join(ROOT, "prog", "matched", m, "source")
            if not os.path.isdir(p):
                continue
            for f in glob.glob(os.path.join(p, "*.cpp")):
                for a in re.findall(r"^// \S+\s+\(orig (0x[0-9a-f]+),",
                                    open(f, encoding="utf-8").read(), re.M):
                    emitted_addrs.add((m, int(a, 16)))
        bodyless, dups = [], []
        # `reported` is a dict keyed by (module, addr), so it has already
        # collapsed any duplicate records -- counting `seen` over it can never
        # report one. Read the raw JSON lists to count duplicates properly.
        raw_count = collections.Counter()
        for m in MODULES:
            rp = os.path.join(ROOT, "data", "matched_%s.json" % m)
            if not os.path.exists(rp):
                continue
            try:
                for rec in json.load(open(rp, encoding="utf-8")).get("matched", []):
                    raw_count[(m, int(rec["addr"]))] += 1
            except (ValueError, OSError, KeyError):
                pass
        dups = [k for k, v in raw_count.items() if v > 1]
        for key, rec in reported.items():
            if key not in emitted_addrs:
                bodyless.append((key, rec.get("shape")))
        declined = [k for k, s in bodyless if s == "tailcall"]
        unexplained = [(k, s) for k, s in bodyless if s != "tailcall"]
        check(not unexplained, "every registry record has an emitted body",
              "%d unexplained (of %d body-less)" % (len(unexplained),
                                                     len(bodyless)))
        for k, s in unexplained[:5]:
            print("      %s %s shape=%s" % (k[0], hex(k[1]), s))
        print("      info  %d tail-call thunks declined by tail_target_ok have "
              "no body by design (destination takes parameters, so a bare `b` "
              "cannot forward them)" % len(declined))
        check(not dups, "no duplicate addresses in the registry",
              "%d duplicate record(s)" % len(dups))
        for k in dups[:5]:
            print("      %s %s registered twice" % (k[0], hex(k[1])))

        # Every percentage quoted in prose must match the authoritative tool.
        #
        # CI has a README drift gate, and it was still not enough: `README.md`
        # carried 26,536 / 17.45% while `match_progress.py` said 26,562 / 17.47%,
        # and `HANDOFF.md` plus `decomp/docs/progress_weighting.md` carried the
        # same stale pair. The gate could only ever see one file, and it evidently
        # had not been run since the count moved.
        #
        # The figure drifts every time a body is matched, so a number copied into
        # prose is stale the moment it is written. Rather than trust the copy,
        # check it: any doc quoting a different numerator or percentage fails.
        # Mentions that are *about* the drift are exempt by local context.
        stale = []
        # Use the numbers this audit already computed and validated: `rows` is
        # every CSV row and `matching` the ones marked matching, and the check
        # above has just confirmed emitted bodies == matching rows. No import
        # needed, and no second source of truth.
        #
        # The byte totals are derived here too, and they agree with
        # `build/report.json` exactly (199,224 matched of 38,172,368), so the
        # byte figure quoted in prose is checkable without the report.
        matched_bytes = sum(int(r["size"]) for r in matching)
        total_bytes = sum(int(r["size"]) for r in rows)
        want = {
            "functions matched": str(len(matching)),
            "matched bytes": str(matched_bytes),
            "total code bytes": str(total_bytes),
        }
        # Only the unambiguous `N / DENOMINATOR` forms. An earlier version also
        # scraped any `\d+.\d\d%`, which flagged the per-module percentages in
        # the README status table -- 11.47% and 11.92% are correct and are not
        # claims about the total. A check that fires on correct text trains you
        # to ignore it.
        pats = ((r"\b(\d{1,3}(?:,\d{3})*)\s*/\s*152,?062\b", "functions matched"),
                (r"\b(\d{1,3}(?:,\d{3})*)\s*/\s*38,?172,?368\b", "matched bytes"),
                # The arithmetic block in progress_weighting.md states the byte
                # figures as labelled lines rather than as a fraction, so the
                # pattern above cannot see them. Label-anchored, so no risk of
                # matching an unrelated number.
                (r"^matched_code\s+(\d{1,3}(?:,\d{3})*)\s", "matched bytes"),
                (r"^total_code\s+(\d{1,3}(?:,\d{3})*)\s", "total code bytes"))
        docs = ("README.md", "HANDOFF.md", "decomp/docs/progress_weighting.md")
        for rel in docs:
            p = os.path.join(ROOT, rel)
            if not os.path.exists(p):
                continue
            txt = open(p, encoding="utf-8").read()
            for pat, label in pats:
                # re.M: two of the patterns are line-anchored (`^matched_code`).
                for mnum in re.finditer(pat, txt, re.M):
                    hit = mnum.group(1)
                    ctx = txt[max(0, mnum.start() - 110):mnum.start()]
                    # A mention *about* the drift is not itself drift.
                    if any(w in ctx for w in ("stale", "drift", "26,544",
                                              "count moved", "read it there")):
                        continue
                    if hit == want[label] or hit.replace(",", "") == want[label]:
                        continue
                    stale.append("%s: %s claims %s" % (rel, hit, label))
        # The README status table's total row, compared as a whole.
        m = re.search(r"<!-- STATUS:BEGIN.*?<!-- STATUS:END -->",
                      open(os.path.join(ROOT, "README.md"),
                           encoding="utf-8").read(), re.S) \
            if os.path.exists(os.path.join(ROOT, "README.md")) else None
        if m:
            # Match the bolded total row specifically. Filtering on `"total" in l`
            # also picks up the table header `| module | matched | total | % |`,
            # which of course never contains the count -- so the check failed
            # against a perfectly correct README.
            row = [l for l in m.group(0).splitlines() if "**total**" in l]
            if not row:
                stale.append("README.md status table has no total row")
            elif ("**%s**" % len(matching)) not in row[0]:
                stale.append("README.md status table total row is stale")
        check(not stale, "quoted figures agree with the CSV",
              "%d stale" % len(stale))
        for s in sorted(set(stale))[:6]:
            print("      %s" % s)

        # Per-module reconciliation.
        #
        # Every other count here is a total, and totals hide per-module errors:
        # bodies emitted into the wrong module's directory, or a `matching` row
        # counted in one module and its body in another, both balance out.
        #
        # Reconciles, per module: the `matching` rows in the CSV, the bodies
        # actually emitted into `prog/matched/<module>/source`, and the registry
        # records. The first two must be equal exactly. The registry is allowed to
        # exceed them by the tail-call thunks `tail_target_ok` declines, and is
        # reported rather than required to match.
        emitted_per = collections.Counter()
        for m in MODULES:
            p = os.path.join(ROOT, "prog", "matched", m, "source")
            if not os.path.isdir(p):
                continue
            for f in glob.glob(os.path.join(p, "*.cpp")):
                emitted_per[m] += len(re.findall(
                    r"^// \S+\s+\(orig (0x[0-9a-f]+),",
                    open(f, encoding="utf-8").read(), re.M))
        csv_per = collections.Counter()
        for r in rows:
            dn = r.get("decomp_name") or ""
            if dn and not dn.endswith("!"):
                csv_per[r["module"]] += 1
        reg_per = collections.Counter()
        for m in MODULES:
            rp = os.path.join(ROOT, "data", "matched_%s.json" % m)
            if os.path.exists(rp):
                try:
                    reg_per[m] = len({int(x["addr"]) for x in json.load(
                        open(rp, encoding="utf-8")).get("matched", [])})
                except (ValueError, OSError, KeyError):
                    pass
        skew = [(m, emitted_per[m], csv_per[m]) for m in MODULES
                if emitted_per[m] != csv_per[m]]
        check(not skew, "emitted bodies match the CSV row count per module",
              "%d module(s) differ" % len(skew))
        for m, e, c in skew:
            print("      %-8s emitted=%d csv-matching=%d (%+d)"
                  % (m, e, c, e - c))
        extra = {m: reg_per[m] - emitted_per[m] for m in MODULES
                 if reg_per[m] - emitted_per[m]}
        print("      info  registry exceeds emitted by %s (declined tail-call "
              "thunks, no body by design)"
              % ", ".join("%s:+%d" % (m, n) for m, n in sorted(extra.items()))
                 if extra else "      info  registry equals emitted exactly")

    # Function sizes must exclude inter-function padding, or asm-differ reports
    # the padding as unmatched for every function.
    #
    # `work/<m>/text.bin` is gitignored, like every other extraction artifact, so
    # this whole check is unrunnable on a fresh checkout. Gating it here rather
    # than fixing crashes one at a time is the point: the first fix revealed a
    # second identical crash, which is what "find them all first" means.
    padded = 0
    padded_seen = 0
    for m in MODULES:
        tb = os.path.join(ROOT, "work", m, "text.bin")
        if not os.path.exists(tb):
            continue
        padded_seen += 1
        blob = open(tb, "rb").read()
        for r in per_mod.get(m, []):
            a, sz = int(r["addr"], 16), int(r["size"])
            if sz >= 4 and a + sz <= len(blob) and blob[a + sz - 4:a + sz] == b"\0\0\0\0":
                padded += 1
    if padded_seen:
        check(padded == 0, "CSV sizes exclude trailing padding",
              "%d sizes still include a padding word" % padded)
    else:
        skip("CSV sizes exclude trailing padding",
             "needs work/<module>/text.bin (gitignored; produced locally)")

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
    elif SKIP:
        # Not "every check green" -- some did not run. The exit status stays 0
        # because nothing is wrong with the tree; a fresh CI checkout simply has
        # no `work/`, `exefs/` or `build/`. What must not happen is the verdict
        # implying full coverage it does not have.
        print("AUDIT PASSED: %d check(s) skipped for want of local artifacts "
              "-- NOT a full pass" % len(SKIP))
    else:
        print("AUDIT PASSED: every check green")
    if SKIP:
        print("%d skipped check(s):" % len(SKIP))
        for s in SKIP:
            print("  - %s" % s)
    if WARN:
        print("%d warning(s):" % len(WARN))
        for w in WARN:
            print("  - %s" % w)
    print("=" * 72)
    return 1 if FAIL else 0


if __name__ == "__main__":
    # A harvest rewrites prog/ and data/functions.csv; auditing underneath it
    # produces failures that do not exist. See wait_for_harvest().
    #
    # Exit 3 = deferred (a harvest held the lock and nothing was checked). Not 0,
    # because a pass that examined nothing proves nothing. Not 1, because nothing
    # is wrong with the tree. Callers gate on this explicitly: keepalive skips its
    # commit this tick instead of committing an unexamined tree.
    if wait_for_harvest():
        sys.exit(3)
    sys.exit(main())
