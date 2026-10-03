#!/usr/bin/env python3
"""Register a hand-written matching body, but only if it actually matches.

Why this is a tool and not a file edit
--------------------------------------
`data/matched_<mod>.json` is the registry the project trusts: `decomp_project.py`
emits everything in it to `prog/matched/<mod>/` and replaces the generated stub
with a pointer comment, so a function listed there is presented to the reader as
verified. A body that does not match, quietly inserted into that registry, would
be indistinguishable from one that does -- and worse than not being listed at
all, because the stub at least admits what it is.

So registration is gated on the same comparison `match_harness.compare` performs,
using the same flags, against the same original. A body that fails does not get
written.

The other thing this handles is naming. Every auto-generated body is emitted at
global scope under a module-prefixed identifier, because every NSO is based at 0
and `main` and `subsdk1` both have a function at 0x1b0. A hand-written body is
usually a real namespace member -- `gflib3::gflib3_signal_template_hpp_394_15_name_T`
mangles to a symbol that actually exists in the original -- and its namespace is
what makes it match. Renaming it the way generated bodies get renamed would
change the mangled symbol and break the match, so hand-written records opt out.

Usage:
    python tools/add_handwritten.py main 0x1ce0 work/hand/cand3.cpp
    python tools/add_handwritten.py main 0x1ce0 cand3.cpp --note "why asm(\"\")"
"""

import argparse
import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH  # noqa: E402


def verify(module, addr, src_path):
    """-> (verdict, reason, n_insns, symbol). Uses the harness's own comparison."""
    import tempfile
    md = MH._md()
    blob = MH.text_blob(module)
    size = None
    for a, s, _n, _m in MH.load_functions(module):
        if a == addr:
            size = s
            break
    if size is None:
        raise SystemExit("no function at %s+0x%x" % (module, addr))
    orig = list(md.disasm(blob[addr:addr + size], addr))
    end = MH.effective_end(orig, size)

    with tempfile.TemporaryDirectory() as td:
        obj = os.path.join(td, "cand.o")
        cmd = [MH.tool("clang++")] + MH.CFLAGS + [src_path, "-c", "-o", obj]
        p = subprocess.run(cmd, capture_output=True, text=True)
        if p.returncode != 0:
            raise SystemExit("COMPILE FAILED:\n" + p.stderr[:4000])
        syms = MH.obj_symbols(obj)
        dumped = MH.obj_text_range(obj, syms, set(syms))
        with_code = sorted(n for n, b in dumped.items() if b)
        if len(with_code) != 1:
            raise SystemExit("expected exactly one function with code, found %d:\n  %s"
                             % (len(with_code), "\n  ".join(with_code) or "(none)"))
        # The symbol the compiler actually emitted. Recorded rather than
        # re-derived: a hand-written body keeps its own namespace, so its
        # mangled name is not something this script should reconstruct.
        symbol = with_code[0]
        code = dumped[symbol]

    mine = list(md.disasm(code, 0))
    return MH.compare(orig, end, mine) + (len(mine), symbol)


def guess_ident(src, module):
    """The function's own name, as written in the source.

    Used only for the `ident` field, which `decomp_project.py` uses for
    comments. The real symbol comes from the source's own namespace.
    """
    m = re.findall(r"^\s*(?:[A-Za-z_][\w:<>,\s*&]*?)\s+"
                   r"([A-Za-z_]\w*)\s*\([^;]*\)\s*\{", src, re.M)
    if not m:
        raise SystemExit("could not find a function definition in the source")
    return m[-1]


def pair_check(module, src_path, src_text, td):
    """Compile this body alongside one already-verified body, in one TU.

    Single-function verification cannot see collisions. Every hand-written body
    registered so far verified 24/24 green in isolation and then failed to link,
    because each declared `static const char kName[]` in an anonymous namespace
    and `decomp_project.py` packs several bodies into one chunk.cpp. Two
    anonymous-namespace names with the same spelling in one translation unit are
    a redefinition, and nothing about compiling either file alone detects it.

    So the new body is compiled together with a known-good one, in the same
    translation unit, using the same packed emission path. A collision is then a
    compile error here rather than a link failure after the whole tree has been
    regenerated and rebuilt.

    Deliberately just a compile, not a link and not asm-differ. The bug class
    this exists for is "two definitions that cannot coexist", which fails at
    compile time and only ever showed up at link time. asm-differ would add a
    whole second instrument for a failure it never sees; the linked image is
    checked separately, over the real prog/ tree, by tools/diff.py.
    """
    obj = os.path.join(td, "pair.o")
    packed = os.path.join(td, "pair.cpp")
    with open(packed, "w", encoding="utf-8") as f:
        f.write(src_text)
        f.write("\n")
        f.write(COMPANION)
        f.write("\n")
    cmd = [MH.tool("clang++")] + MH.CFLAGS + [packed, "-c", "-o", obj]
    p = subprocess.run(cmd, capture_output=True, text=True)
    if p.returncode != 0 or not os.path.isfile(obj):
        return False, (p.stderr or "")[:1500]
    return True, ""


# A body that is already registered and known to reproduce the original. It only
# has to be well-formed and distinct from everything the new body declares; its
# contents are irrelevant to the collision being looked for. Keeping a literal
# here rather than reading one out of the registry means the check cannot itself
# fail because the registry is empty or malformed.
COMPANION = """/* Companion body for the two-function collision check.

 * Not a decompilation of anything. It exists so a candidate is compiled in the
 * same translation unit as a second body emitted the same way -- which is what
 * `tools/decomp_project.py` does when it packs several bodies into one
 * chunk.cpp.
 *
 * The companion declares `kName` in an anonymous namespace too, deliberately.
 * That is the shape that failed: each of the 24 magic-static bodies verified
 * 24/24 in isolation, then the project failed to link with
 *
 *     error: redefinition of 'kName'
 *     note: previous definition is here
 *
 * because `static const char kName[]` was emitted once per body and several
 * bodies share a file. Two *separate* translation units would be fine --
 * anonymous namespaces do not collide across TUs -- which is exactly why
 * compiling the candidate alone, which is what single-function verification
 * does, cannot detect it.
 */
namespace {
static const char kName[] = "companion";
}  // namespace

namespace check_companion {
unsigned char companion(void) {
    __asm__ volatile("" ::: "memory");
    return (unsigned char)kName[0];
}
}  // namespace check_companion
"""


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("module")
    ap.add_argument("address")
    ap.add_argument("source")
    ap.add_argument("--note", default="", help="comment recorded with the body")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--no-pair-check", action="store_true",
                    help="skip the two-function check (not recommended)")
    a = ap.parse_args()

    addr = int(a.address, 16)
    src = open(a.source, encoding="utf-8").read()

    print("verifying %s+0x%x against %s ..." % (a.module, addr, a.source))
    verdict, why, n, symbol = verify(a.module, addr, a.source)
    if verdict != "match":
        print("NOT REGISTERED -- %s: %s" % (verdict, why))
        return 1
    print("verified: %d instruction(s) identical" % n)

    # Second check: the body must also be able to coexist with another
    # definition in one translation unit, which is how these bodies are actually
    # emitted. A single-function pass cannot detect that class of failure.
    if not a.no_pair_check:
        import tempfile
        with tempfile.TemporaryDirectory() as td:
            ok, err = pair_check(a.module, a.source, src, td)
        if not ok:
            print("NOT REGISTERED -- fails the two-function collision check.\n"
                  "  This body is fine alone but cannot be emitted alongside "
                  "another definition.\n%s" % err)
            return 1
        print("pair check: ok (compiles alongside a second definition)")

    if a.dry_run:
        return 0

    path = os.path.join(ROOT, "data", "matched_%s.json" % a.module)
    blob = json.load(open(path, encoding="utf-8"))
    recs = blob.setdefault("matched", [])

    dup = [r for r in recs if int(r["addr"]) == addr]
    if dup:
        recs.remove(dup[0])
        print("replacing the existing record for 0x%x" % addr)

    name = None
    size = None
    for r in MH.load_functions(a.module):
        if r[0] == addr:
            name, size = r[2], r[1]
            break
    recs.append({
        "module": a.module,
        "addr": addr,
        "size": size,
        "name": name or ("sub_%x" % addr),
        "shape": "handwritten",
        "ident": guess_ident(src, a.module),
        "sig": "v",
        "symbol": symbol,
        "src": src,
        "orig_insns": n,
        "new_insns": n,
        "handwritten": True,
        "note": a.note,
    })
    with open(path, "w", encoding="utf-8") as f:
        json.dump(blob, f, indent=1)
    print("registered %s+0x%x (%s) in %s"
          % (a.module, addr, name or "?", os.path.relpath(path, ROOT)))
    print("\nnext: python tools/decomp_project.py --all && "
          "python tools/prog_cmake.py && python tools/build_nx64.py")
    return 0


if __name__ == "__main__":
    sys.exit(main())
