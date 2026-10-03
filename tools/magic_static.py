#!/usr/bin/env python3
"""Find and finish Boost.Signals2 magic-static initialisers across the binary.

The pattern
-----------
Boost's `core_typeid_::name()` is initialised exactly once per translation unit
behind a one-byte guard, and Game Freak's build produced a long run of these
adjacent in `main` (0x1ce0-0x2130). Each is twelve instructions and they differ
only in which guard/slot globals and which string they touch:

    adrp x8, ..                    ; GOT page
    ldr  x8, [x8, #guard]          ; x8 = &guard      (GOT-mediated)
    ldrb w9, [x8]                  ; read the guard a byte at a time
    tbnz w9, #0, L
    adrp x9, ..
    ldr  x9, [x9, #slot]          ; x9 = &slot
    adrp x10, ..                   ; string, PC-relative (NOT via GOT)
    add  x10, x10, #off
    str  x10, [x9]
    orr  w9, wzr, #1
    str  x9, [x8]                  ; 64-bit store of 1 over a byte-read guard
  L: ret

Two details are load-bearing and both were found the hard way, by having them
wrong first:

  * The globals are reached *through the GOT*, which needs `-fPIC`. Without it
    clang addresses them directly and no source can produce this shape.
  * The string is addressed PC-relative while the globals are not. That means
    the string is TU-local (`static const char[]`) while the guard and slot are
    not. Declaring the string `extern` sends it through the GOT too, which is a
    different instruction sequence.

Plus one scheduling constraint: the string's `adrp` must stay *below* the slot's
`ldr`, and an empty `asm("" ::: "memory")` between the guard test and the store
is what holds it there.

Why a tool rather than 43 by hand
--------------------------------
The bodies are identical but for three constants. Writing them by hand means 43
copies to keep in sync with three numbers each, and a silent drift in any of
them produces a function that looks plausible and does not match. Here each is
generated from the bytes that are actually in the binary, and each is only
registered once `tools/add_handwritten.py` has confirmed it against the
original.

Usage:
    python tools/magic_static.py                 # report candidates
    python tools/magic_static.py --range 0x1ce0 0x2140
    python tools/magic_static.py --all --register # generate + register all
"""

import argparse
import os
import re
import subprocess
import sys
import tempfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "tools"))

import match_harness as MH  # noqa: E402

# Registers, as capstone spells them.
REGS = {"x%d" % i for i in range(8, 16)} | {"w%d" % i for i in range(8, 16)}


def imm(ops):
    """The last immediate in an operand list, or None.

    Anchored on the *last* comma-separated field rather than the end of the
    string. A load with an offset ends in `]`, so `#0x5a0]` -- not `#0x5a0` --
    and the old end-anchored pattern returned None for every `ldr`, which made
    every candidate fail classification with no diagnostic.
    """
    last = ops.rsplit(",", 1)[-1]
    m = re.search(r"#(-?(?:0x)?[0-9a-fA-F]+)", last)
    if not m:
        return None
    t = m.group(1)
    neg = t.startswith("-")
    if neg:
        t = t[1:]
    v = int(t, 16) if t.lower().startswith("0x") else int(t)
    return -v if neg else v


def memoff(ops):
    """The displacement inside `[base, #imm]`, or 0 when there is none.

    `ldr x8, [x8]` and `ldr x8, [x8, #0x5a0]` are the same shape with and
    without a displacement; the GOT slot index is only meaningful when present,
    but a missing one must read as 0 rather than None.
    """
    m = re.search(r"\[([^\]]*)\]", ops)
    if not m:
        return None
    inner = m.group(1)
    if "," not in inner:
        return 0
    return imm(inner)


def reg(ops):
    return ops.strip().strip(",")


def classify(ins):
    """Return a dict describing the magic-static shape, or None.

    Structural, not textual: each field is checked against what the instruction
    actually does, so a neighbouring function that merely looks similar in
    objdump is rejected rather than half-accepted.
    """
    n = len(ins)
    if n != 12:
        return None
    m = [i.mnemonic for i in ins]
    # objdump prints the 64-bit `mov w9, #1` as "orr w9, wzr, #1" while capstone
    # decodes it to the canonical `mov`. Accept either spelling of the same
    # instruction -- rejecting on the mnemonic alone made every candidate fail,
    # because the two tools simply disagree about what to call it.
    if m[9] not in ("orr", "mov"):
        return None
    m[9] = "orr"
    if m != ["adrp", "ldr", "ldrb", "tbnz", "adrp", "ldr",
             "adrp", "add", "str", "orr", "str", "ret"]:
        return None
    o = [i.op_str for i in ins]

    guard_ptr = reg(o[0].split(",")[0])
    if reg(o[1].split("[")[-1].split("]")[0].split(",")[0]) != guard_ptr:
        return None
    if reg(o[1].split(",")[0]) != guard_ptr:
        return None
    if re.match(r"^\w+,\s*\[", o[2]) is None or \
            reg(o[2].split("[")[-1].split("]")[0].split(",")[0]) != guard_ptr:
        return None
    if imm(o[3]) is None:
        return None

    slot_ptr = reg(o[4].split(",")[0])
    if reg(o[5].split("[")[-1].split("]")[0].split(",")[0]) != slot_ptr or \
            reg(o[5].split(",")[0]) != slot_ptr:
        return None

    strreg = reg(o[6].split(",")[0])
    if reg(o[7].split(",")[0]) != strreg or reg(o[7].split(",")[1]) != strreg:
        return None
    if imm(o[7]) is None:
        return None
    if reg(o[8].split("[")[-1].split("]")[0].split(",")[0]) != slot_ptr or \
            reg(o[8].split(",")[0]) != strreg:
        return None
    if imm(o[9]) != 1:
        return None
    # The final store writes the *same* register the string was loaded into,
    # back to the guard. That is the 64-bit-write-over-a-byte-read oddity; if the
    # compiler ever emitted a plain `str w9` this shape would not match and the
    # whole recipe would be wrong, so it is checked rather than assumed.
    if reg(o[10].split("[")[-1].split("]")[0].split(",")[0]) != guard_ptr:
        return None
    # The final store writes the register the guard test produced, *not* the
    # string register. `orr w9, wzr, #1` sets w9, and that same x9 goes back to
    # the guard -- which is why the guard is read a byte at a time and written as
    # a full 64-bit register. Checking this against strreg was wrong: the two are
    # different registers by construction, so no candidate could ever pass.
    one = reg(o[9].split(",")[0])
    if one[0] == "w":
        one = "x" + one[1:]
    if reg(o[10].split(",")[0]) != one:
        return None

    return {
        "guard_page": imm(o[0]), "guard_off": memoff(o[1]),
        "slot_page": imm(o[4]), "slot_off": memoff(o[5]),
        "str_page": imm(o[6]), "str_off": imm(o[7]),
        "end_branch_target": imm(o[3]),
    }


def c_string(module, page, off, limit=4096):
    """The string at (page, off) in the original's rodata, or None."""
    man = os.path.join(ROOT, "work", module, "manifest.json")
    if not os.path.isfile(man):
        return None
    import json
    seg = json.load(open(man)).get("segments", {}).get("rodata")
    if not seg:
        return None
    vaddr = seg["vaddr"]
    blob = open(os.path.join(ROOT, "work", module, seg["path"]), "rb").read()
    idx = (page + off) - vaddr
    if idx < 0 or idx >= len(blob):
        return None
    end = blob.find(b"\x00", idx, idx + limit)
    if end < 0:
        return None
    raw = blob[idx:end]
    if not raw or any(c < 9 or (13 < c < 32) for c in raw):
        return None
    try:
        return raw.decode("ascii")
    except UnicodeDecodeError:
        return None


# A global-scope magic static has to be forced to external linkage, or clang
# drops it. main+0x4e0 is one of these: it sits at global scope rather than in a
# namespace, nothing calls it, and with -fPIC clang gives it internal linkage and
# then discards it entirely -- the object file compiles cleanly, exits 0, and
# contains no symbols at all. `add_handwritten.py` then reports "expected exactly
# one function with code, found 0" and declines the candidate, which looks like a
# source problem and is not.
#
# The 27 namespaced siblings are unaffected: a member of a named namespace has an
# external symbol the linker must keep, so they emit normally. Only the
# global-scope case needs this, and `-fvisibility=default` does *not* fix it --
# that was tried and still produced an empty object, because the issue is
# internalisation of an unreferenced global, not visibility of an exported one.
#
# So the declaration is pulled in through an extern reference, which makes the
# definition externally visible for the same reason every other candidate's
# symbol survives.
EXTERN_KEEPALIVE = '''
/* Keeps the definition above externally visible. See EXTERN_KEEPALIVE. */
extern void {ident}(void);
void *const kKeepAlive_{ident} = (void *)&{ident};
'''

def namespace_wrap(ns, body):
    """Wrap `body` in `ns`, or return it unchanged when ns is empty.

    An empty namespace name is not a no-op: `namespace  { ... }` is an
    *anonymous* namespace, which gives everything inside it internal linkage.
    That is why main+0x4e0 kept disappearing -- the template emitted an anonymous
    namespace for it, so the definition and the keepalive reference that was
    added to preserve it were both internal to the same anonymous namespace and
    both discarded together. Object file compiled clean, zero symbols.
    """
    if not ns:
        return body
    return "namespace %s {\n%s\n}  // namespace %s\n" % (ns, body, ns)


TEMPLATE = '''/* {name}  ({module}+{addr:#x})
 *
 * Boost.Signals2 magic-static: initialise the cached core_typeid name once,
 * behind a one-byte guard.
 *
 * Generated by tools/magic_static.py from the instruction stream; verified
 * against the original by tools/add_handwritten.py before registration.
 *
 * Three things in here are not incidental, and all three were found by having
 * them wrong first:
 *
 *  - The guard and slot are reached through the GOT (`adrp` then `ldr [x,#off]`
 *    gives the *address* of the global). That needs -fPIC; without it clang
 *    addresses them directly and no source produces this shape.
 *  - The string is addressed PC-relative (`adrp`+`add`), so it is TU-local.
 *    Declaring it `extern` sends it through the GOT too, and that is a
 *    different instruction sequence.
 *  - The guard is read a byte at a time and written as a full 64-bit register,
 *    which is why the write goes through a volatile uint64_t lvalue.
 *
 * The memory clobber is what keeps the string's `adrp` below the slot's `ldr`.
 * Without it the scheduler hoists it and the function stops matching.
 */
typedef unsigned char uint8_t;
typedef unsigned long uint64_t;

{decls}

namespace {{

/* Original string at {module}+{str_addr:#x}.
 *
 * Named per function, not `kName`. These bodies are emitted by
 * tools/decomp_project.py several to a chunk.cpp, and an anonymous-namespace
 * `kName` is still one name per translation unit -- so two of them in the same
 * file is a redefinition, and the link fails long after anything here looks
 * wrong. */
static const char kName_{ident}[] =
{str_lit};

}}  // namespace

{body_open}
void {name}() {{
    if ({guard} & 1)
        return;

    /* Keeps the string's adrp below the slot's GOT load. */
    __asm__ volatile("" ::: "memory");

    {slot} = kName_{ident};
    *reinterpret_cast<volatile uint64_t *>(&{guard}) = 1;
}}
{keepalive}
{body_close}'''


def c_literal(s):
    """A C string literal, split across lines.

    Two things this has to get right, both of which only showed up on the one
    candidate whose name was not a valid identifier, so it was easy to mistake
    for a naming problem:

      * Escaping happens *before* splitting. Splitting first and escaping after
        would split in the middle of an escape sequence and silently change the
        string -- the assembled literal would no longer be the bytes in the
        binary, and the function would stop matching for a reason that looks like
        a compiler bug.
      * A split may not land mid-escape. Splitting the escaped text at an
        arbitrary column can cut between the backslash and the character it
        escapes; C then treats the backslash as a line continuation and swallows
        the following source line. That is what produced `expected ';' after
        top level declarator` on the last chunk.

    So: escape fully, then split only at positions where the boundary is not
    inside an escape, and verify the reassembled literal round-trips.
    """
    body = s.replace("\\", "\\\\").replace('"', '\\"')

    # Cut points are chosen by scanning forward, never by consuming a separator:
    # an earlier version split *at* a space and then skipped it, which deleted
    # the space and silently changed the string. Every character of `body` must
    # end up in exactly one chunk, and the assertion below is what enforces it --
    # it caught that bug the first time it ran.
    #
    # The other constraint is that a cut may not land immediately after a
    # backslash: C reads that as a line continuation and swallows the next source
    # line, which surfaces as a parse error far from the cause.
    chunks = []
    start = 0
    while True:
        remaining = len(body) - start
        if remaining <= 66:
            chunks.append(body[start:])
            break
        # Advance forward only. An earlier version computed the cut from the end
        # of the remaining window and then nudged it backwards toward a space,
        # which produced chunks far shorter than 66 and then split the *escape*
        # of a following backslash pair -- emitting a chunk that was just `"`,
        # twice, and breaking the literal.
        cut = start + 66
        # Prefer a space in the last third of the chunk, so lines stay readable
        # without shortening the chunk dramatically.
        lo = start + 44
        space = body.rfind(" ", lo, cut)
        if space > start:
            cut = space
        # Never cut immediately after a backslash: C reads that as a line
        # continuation and swallows the next source line.
        while cut > start + 1 and body[cut - 1] == "\\":
            cut -= 1
        chunks.append(body[start:cut])
        start = cut

    literal = "\n".join('    "%s"' % c for c in chunks)

    # The concatenated chunk text must equal the escaped body exactly. If it does
    # not, the string in the source is not the string in the binary, and the
    # function would stop matching for a reason that looks like a compiler bug.
    if "".join(chunks) != body:
        raise SystemExit("internal error: c_literal is not reversible "
                         "(%d chars in, %d out)"
                         % (len(body), len("".join(chunks))))
    return literal


def names_for(module, addr):
    """(identifier, namespace) for a function at `addr`, from functions.csv.

    The recovered names are demangled C++ signatures, and some of them are not
    valid identifiers -- `gflib3_connection_hpp_149_13_name_T_lambda_at_C` has a
    space in it, because that is what the demangler produced for a lambda inside
    a template. Emitting that verbatim is a guaranteed compile error, and it
    failed for exactly one candidate while its twenty-three byte-identical
    siblings passed, which looks like a code problem and is not one.

    So the name is sanitised for the source and the original kept as a comment.
    The mangled symbol is what must survive, and that is captured from the object
    file by tools/add_handwritten.py rather than reconstructed here.
    """
    import csv
    p = os.path.join(ROOT, "data", "functions.csv")
    with open(p, encoding="utf-8") as f:
        for r in csv.DictReader(f):
            if r["module"] == module and int(r["addr"], 16) == addr:
                name = r["name"]
                ns = "gflib3" if name.startswith("gflib3_") else ""
                ident = re.sub(r"\W", "_", name)
                if ident != name:
                    print("    note: name %r is not an identifier; "
                          "using %r" % (name, ident))
                return ident, ns
    return "sub_%x" % addr, ""


def guard_names(module, fields, addr, ident):
    """Distinct, stable identifiers for this function's guard and slot."""
    stem = re.sub(r"^gflib3_", "", ident)
    stem = re.sub(r"_\d+$", "", stem) or "magic"
    return stem + "_init_guard", stem + "_cached_name"


def scan(module, lo=None, hi=None):
    md = MH._md()
    blob = MH.text_blob(module)
    funcs = MH.load_functions(module)
    out = []
    for addr, size, name, _dec in funcs:
        if lo is not None and addr < lo:
            continue
        if hi is not None and addr >= hi:
            continue
        if size > 0x100:
            continue
        ins = list(md.disasm(blob[addr:addr + size], addr))
        f = classify(ins)
        if f:
            out.append((addr, size, name, f))
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--module", default="main")
    ap.add_argument("--range", nargs=2, metavar=("LO", "HI"))
    ap.add_argument("--all", action="store_true",
                    help="scan every function, not just the gflib3 run")
    ap.add_argument("--register", action="store_true",
                    help="generate sources and register the ones that verify")
    a = ap.parse_args()

    lo = hi = None
    if a.range:
        lo, hi = int(a.range[0], 16), int(a.range[1], 16)
    elif not a.all:
        lo, hi = 0x1ce0, 0x2140

    hits = scan(a.module, lo, hi)
    print("magic-static candidates in %s: %d" % (a.module, len(hits)))
    if not hits:
        return 0

    # Report the guard/slot globals actually used, so a collision between two
    # functions sharing a guard is visible before it silently miscompiles.
    guards = {}
    for addr, _sz, _n, f in hits:
        guards.setdefault((f["guard_page"], f["guard_off"]), []).append(addr)
    shared = {k: v for k, v in guards.items() if len(v) > 1}
    if shared:
        print("  note: %d guard(s) shared by more than one function" % len(shared))

    written = []
    td = tempfile.mkdtemp(prefix="magicstatic_")
    seen = {}
    for addr, _size, _n, f in hits:
        s = c_string(a.module, f["str_page"], f["str_off"])
        if s is None:
            print("  %-10s SKIP: no readable string at %x+%#x"
                  % ("%#x" % addr, f["str_page"], f["str_off"]))
            continue
        ident, ns = names_for(a.module, addr)
        # One candidate -- main+0x4e0, whose recovered name is the truncated
        # `..._core_typeid__void_const_v` -- generates a body that is correct
        # instruction for instruction but registers under the wrong symbol, and
        # is declined. The cause is provenance, not code: the demangler produced a
        # truncated identifier, `names_for` sanitised it, and the sanitised form no
        # longer matches what the compiler emits for that mangled name.
        #
        # The fix is to stop deriving the identifier from the demangled name when
        # that name is unusable. A `f_<addr>` identifier is always well-formed, is
        # unique within the module, and `decomp_project.load_matched` already
        # qualifies it with the module name to avoid cross-module collisions. The
        # human-readable name stays in the CSV and in the emitted comment; it just
        # is not the symbol.
        if not re.fullmatch(r"[A-Za-z_]\w*", ident or ""):
            print("    note: %s has no usable identifier; using f_%x"
                  % (ident, addr))
            ident = "f_%x" % addr
        # `--all` used to blank the namespace here, on the theory that a
        # binary-wide sweep had no business guessing one. That is what broke it:
        # with ns empty the extern declarations and the definition are emitted
        # into *differently named* namespaces (`namespace  {` twice), so the
        # references no longer resolve, the body is dead, the compiler emits no
        # symbol for the function, and every candidate failed with
        # "expected exactly one function with code, found 0".
        #
        # The namespace is not a guess -- it comes from the recovered name in
        # data/functions.csv, which already carries the gflib3 scope. Dropping it
        # only ever loses information. `--all` now widens *which addresses* are
        # considered and nothing else.
        # Sanitising can collapse two distinct names onto one identifier, which
        # would be a duplicate symbol at link time rather than a mismatch.
        if ident in seen:
            print("    note: %s collides with %#x; using %s_%x"
                  % (ident, seen[ident], ident, addr))
            ident = "%s_%x" % (ident, addr)
        seen[ident] = addr
        guard, slot = guard_names(a.module, f, addr, ident)
        # Namespace handling is explicit rather than template-substituted,
        # because an empty name would produce `namespace  {`, which is an
        # *anonymous* namespace -- internal linkage -- and the whole body would
        # be discarded. `namespace_wrap` returns the body unwrapped instead.
        decl_body = ("extern uint8_t %s;\nextern const char *%s;\n"
                     % (guard, slot))
        src = TEMPLATE.format(
            ident=ident, name=ident, module=a.module, addr=addr,
            decls=namespace_wrap(ns, decl_body),
            body_open=("namespace %s {\n" % ns) if ns else "",
            body_close=("}  // namespace %s\n" % ns) if ns else "",
            guard=guard, slot=slot,
            keepalive=EXTERN_KEEPALIVE.format(ident=ident) if not ns else "",
            str_addr=f["str_page"] + f["str_off"], str_lit=c_literal(s))
        path = os.path.join(td, "%s.cpp" % ident)
        with open(path, "w", encoding="utf-8") as fh:
            fh.write(src)
        written.append((addr, ident, path, len(s)))

    print("  generated %d source(s)" % len(written))
    for addr, ident, _p, slen in written[:6]:
        print("    %-10s %-52s string %d char(s)" % ("%#x" % addr, ident, slen))
    if len(written) > 6:
        print("    ... and %d more" % (len(written) - 6))

    if not a.register:
        print("\n(dry run; --register to verify and add them)")
        print("sources in %s" % td)
        return 0

    ok = 0
    bad = []
    for addr, ident, path, _slen in written:
        r = subprocess.run(
            [sys.executable, os.path.join(ROOT, "tools", "add_handwritten.py"),
             a.module, hex(addr), path, "--note",
             "Boost.Signals2 magic-static; generated by tools/magic_static.py"],
            capture_output=True, text=True, cwd=ROOT)
        if r.returncode == 0:
            ok += 1
            print("  registered %s" % ident)
        else:
            tail = [l for l in (r.stdout + r.stderr).splitlines() if l.strip()]
            bad.append((ident, tail[-1] if tail else "?"))
            print("  FAILED   %s: %s" % (ident, bad[-1][1]))
    print("\nregistered %d / %d" % (ok, len(written)))
    return 0 if ok == len(written) else 1


if __name__ == "__main__":
    sys.exit(main())
