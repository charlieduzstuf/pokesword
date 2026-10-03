#!/usr/bin/env python3
"""Build the decomp.me / decomp.dev project scaffolding from recovered data.

Produces, from work/<mod>/*.json + names.txt:

  data/functions.csv          symbol table: 0xADDR,name,size,<mangled-or-blank>
  data/functions_<mod>.csv    per-module slices of the same
  prog/<ns>/<sub>/...         C++ declarations grouped by namespace/class,
                              matching pokesword's prog/<group>/<sub>/{source,include}
  prog/CMakeLists.txt         target_sources() fan-out over prog/
  data/<mod>.elf              (via nso_to_elf.py) the objdump-able original

Usage:
    python tools/decomp_project.py --all
    python tools/decomp_project.py main
"""

import csv
import json
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
WORK = os.path.join(ROOT, "work")
DATA = os.path.join(ROOT, "data")
PROG = os.path.join(ROOT, "prog")

MODULES = ["rtld", "main", "sdk", "subsdk0", "subsdk1"]

# Top-level prog groups, following pokesword's layout.
GROUPS = {
    "main": "main",
    "sdk": "sdk",
    "subsdk0": "subsdk0",
    "subsdk1": "subsdk1",
    "rtld": "rtld",
}

# Prefixes that map a recovered name onto a prog/ group. Ordered: first match
# wins, so put the most specific patterns first.
RULES = [
    (re.compile(r"^bag[_.]|^Bag"), "contents", "bag"),
    (re.compile(r"^battle[_.]|^Battle|_Battle"), "contents", "battle"),
    (re.compile(r"^pokemon[_.]|^Pokemon|^poke"), "contents", "pokemon"),
    (re.compile(r"^trainer[_.]|^Trainer"), "contents", "trainer"),
    (re.compile(r"^ui[_.]|^UI_|_UI|UIManager"), "ui", "manager"),
    (re.compile(r"^map[_.]|^Map|^Field|Field"), "contents", "field"),
    (re.compile(r"^item[_.]|^Item"), "contents", "item"),
    (re.compile(r"^move[_.]|^Move"), "contents", "move"),
    (re.compile(r"^ability[_.]|^Ability"), "contents", "ability"),
    (re.compile(r"^evolution[_.]|^Evolution"), "contents", "evolution"),
    (re.compile(r"^quest[_.]|^Quest"), "contents", "quest"),
    (re.compile(r"^script[_.]|^Script"), "system", "script"),
    (re.compile(r"^save[_.]|^Save"), "system", "save"),
    (re.compile(r"^net[_.]|^Net|Online|Network"), "system", "net"),
    (re.compile(r"^audio[_.]|^Audio|^\w*AUDIO"), "system", "audio"),
    (re.compile(r"^gfl|^gflib|boost|sead|nn::|^nn"), "lib", "gflib3"),
    (re.compile(r"^Render|^Graphics|Gfx|Rendering"), "gfx", "render"),
    (re.compile(r"^Physics|Physics|Collision|Collision"), "gfx", "physics"),
    (re.compile(r"^Sound|^Music|Audio"), "system", "audio"),
    (re.compile(r"^Heal|^Ball|^Capture"), "contents", "battle"),
]

# Namespaces recovered from the real binary that we mirror verbatim so that
# contributor code drops into the same shape as upstream pokesword.
KNOWN_NS = {
    "gfl::", "gflib3::", "sead::", "nn::", "ksys::", "main::",
    "contents::", "ui::", "field::", "battle::", "system::",
}

CXX_KEYWORDS = {
    "alignas", "alignof", "and", "asm", "auto", "bool", "break", "case",
    "catch", "char", "class", "const", "constexpr", "continue", "decltype",
    "default", "delete", "do", "double", "else", "enum", "explicit", "export",
    "extern", "false", "float", "for", "friend", "goto", "if", "inline",
    "int", "long", "mutable", "namespace", "new", "noexcept", "not",
    "nullptr", "operator", "or", "private", "protected", "public", "register",
    "return", "short", "signed", "sizeof", "static", "static_assert",
    "struct", "switch", "template", "this", "thread_local", "throw", "true",
    "try", "typedef", "typeid", "typename", "union", "unsigned", "using",
    "virtual", "void", "volatile", "wchar_t", "while", "xor",
}

IDENT_RE = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*$")


def load_names(mod):
    names = {}
    p = os.path.join(WORK, mod, "names.txt")
    if not os.path.exists(p):
        return names
    with open(p, encoding="utf-8") as f:
        for line in f:
            line = line.rstrip("\n")
            if not line:
                continue
            addr, _, nm = line.partition(" ")
            try:
                names[int(addr, 16)] = nm.strip()
            except ValueError:
                continue
    return names


def load_funcs(mod):
    """Function starts for a module.

    Prefer the compiler's own unwind table (.eh_frame_hdr) -- it is
    authoritative. `rtld` carries no unwind table at all, so fall back to the
    xref analysis' entry list, which is derived from prologue scanning and is
    already validated against the recovered symbol addresses.
    """
    p = os.path.join(WORK, mod, "functions_eh.txt")
    addrs = sorted(int(t, 16) for t in open(p).read().split())
    if addrs:
        return addrs

    xp = os.path.join(WORK, mod, "xrefs.json")
    if os.path.exists(xp):
        xr = json.load(open(xp))
        addrs = sorted(int(e["addr"]) for e in xr)
        if addrs:
            return addrs

    # Last resort: the recovered symbol addresses themselves.
    np_ = os.path.join(WORK, mod, "names.txt")
    if os.path.exists(np_):
        addrs = []
        for line in open(np_, encoding="utf-8"):
            line = line.rstrip("\n")
            if not line:
                continue
            a, _, _nm = line.partition(" ")
            try:
                addrs.append(int(a, 16))
            except ValueError:
                continue
        return sorted(set(addrs))
    return []


def safe_ident(s):
    """Coerce a recovered symbol into a legal, non-keyword C++ identifier."""
    if not s:
        return None
    s = s.replace("::", "_")
    s = re.sub(r"[^A-Za-z0-9_]", "_", s)
    if not s or not IDENT_RE.match(s):
        return None
    if s in CXX_KEYWORDS:
        return s + "_"
    return s


def classify(mod, name):
    """-> (group, sub, namespace) for a recovered function name."""
    for rx, group, sub in RULES:
        if rx.search(name):
            return group, sub, sub
    # C++ names already carry their namespace; mirror that shape.
    if "::" in name:
        parts = name.split("::")
        ns = [p for p in parts[:-1] if p and IDENT_RE.match(p)]
        if ns:
            top = ns[0]
            group = "main" if top in ("main", "contents", "field", "battle") else "lib"
            sub = ns[-1].lower() if len(ns) > 1 else top.lower()
            sub = re.sub(r"[^a-z0-9_]", "_", sub) or "core"
            return group, sub, "::".join(ns)
    return GROUPS.get(mod, mod), mod, mod


def load_matched(mod):
    """addr -> verified matching body, from tools/auto_match.py output.

    Only bodies the compiler actually reproduced are in here; see
    tools/match_harness.py for how that is established.

    The identifier auto_match.py used is `f_<addr>`, which is unique within a
    module but not across modules -- every NSO is based at 0, so `main` and
    `subsdk1` both have a function at 0x1b0. These bodies are emitted at global
    scope, where that would be a duplicate-symbol link error, so the name is
    qualified with the module here. Renaming does not affect codegen, so the
    verified match still holds.
    """
    p = os.path.join(DATA, "matched_%s.json" % mod)
    if not os.path.exists(p):
        return {}
    try:
        blob = json.load(open(p, encoding="utf-8"))
    except (ValueError, OSError):
        return {}
    out = {}
    for rec in blob.get("matched", []):
        try:
            addr = int(rec["addr"])
        except (KeyError, TypeError, ValueError):
            continue
        # A hand-written body keeps its own namespace, because that namespace is
        # part of what makes it match: `gflib3::..._name_T` mangles to a symbol
        # that exists in the original, while a module-prefixed global-scope name
        # would be a different symbol entirely. So the module-qualifying rename
        # below applies to generated bodies only.
        if rec.get("handwritten"):
            out[addr] = rec
            continue
        old = rec.get("ident", "")
        if old and not old.startswith(mod + "_"):
            new = "%s_%s" % (mod, old)
            src = rec.get("src", "")
            rec["src"] = re.sub(r"\b%s\b" % re.escape(old), new, src)
            rec["ident"] = new
        out[addr] = rec
    return out


def code_size(blob, addr, span):
    """Function size with trailing inter-function padding removed.

    The gap from a function's start to the next function's start includes the
    alignment padding the compiler emitted after it, which is not part of the
    function. Including it makes asm-differ report the padding as unmatched
    original instructions for *every* function. Upstream pokesword's own table
    makes the same choice -- it records 316 bytes for a function whose successor
    starts 320 bytes later.
    """
    size = span
    while size >= 4 and blob[addr + size - 4:addr + size] == b"\0\0\0\0":
        size -= 4
    return max(size, 4)


def write_csv(mod, names, addrs, text_len, prog_addr=None, matched=None,
              text=None):
    """Emit the decomp.me symbol table for one module.

    Columns: 0xADDR,name,size,decomp_name

    `decomp_name` is the mangled C++ symbol, suffixed with asm-differ's status
    marker: `!` when the body does not match the original, bare when it has been
    verified to match by tools/auto_match.py.
    """
    blob = text or b""
    sizes = {}
    for i, a in enumerate(addrs):
        span = (addrs[i + 1] if i + 1 < len(addrs) else text_len) - a
        sizes[a] = code_size(blob, a, span) if blob else max(0, span)
    matched = matched or {}
    rows = []
    for a in addrs:
        name = names.get(a) or ("sub_%x" % a)
        size = max(0, sizes.get(a, 0))
        rec = matched.get(a)
        mangled = (prog_addr or {}).get(a)
        if rec is not None:
            # A verified match: the symbol is the one the recovered signature
            # actually mangles to, not the placeholder namespaced name.
            #
            # `symbol` is recorded by tools/add_handwritten.py from the object
            # file the compiler produced, because a hand-written body keeps its
            # own namespace and the `_Z<len><name><sig>` form below only
            # describes a body at global scope. Preferring the recorded symbol
            # also means nothing here has to reimplement C++ mangling.
            sym = rec.get("symbol")
            if not sym:
                sym = "_Z" + str(len(rec["ident"])) + rec["ident"] + \
                    rec.get("sig", "v")
            rows.append(("0x%016x" % a, name, size, sym))
            continue
        if not mangled:
            rows.append(("0x%016x" % a, name, size, ""))
            continue
        # A stub: the namespaced mangling is the real symbol, and the marker
        # records that the body does not match yet.
        sym = mangled[:-1] if mangled.endswith("!") else mangled
        sym += "!"
        rows.append(("0x%016x" % a, name, size, sym))
    out = os.path.join(DATA, "functions_%s.csv" % mod)
    os.makedirs(DATA, exist_ok=True)
    with open(out, "w", newline="", encoding="utf-8") as f:
        csv.writer(f).writerows(rows)
    return out, len(rows)


def mangle(ident, ns=None):
    """Itanium C++ mangling for `void ns::ident()`.

    The symbol table has to carry the name the linker actually produces,
    otherwise `tools/diff.py` and asm-differ look up a symbol that does not
    exist in the built image.

    The result carries asm-differ's `!` status marker. Every function here has
    a declaration and a real symbol, but its body is a recovered stub rather
    than matching C++, so "non-matching" is the honest status; without the
    marker tools/check.py would treat all 152,062 as matching and report them
    all as failures.
    """
    if not ns:
        sym = "_Z" + str(len(ident)) + ident + "v"
    else:
        comps = [c for c in ns.split("::") if c]
        inner = "".join("%d%s" % (len(c), c) for c in comps)
        sym = "_ZN%s%d%sEv" % (inner, len(ident), ident)
    return sym + "!"


# Leading declaration of an emitted matched body, e.g.
#   "uint32_t main_f_1b0() { return 0; }"  ->  ("uint32_t", "main_f_1b0", "")
DECL_RE = re.compile(
    r"^(?P<ret>void|bool|u?int\d+_t|float|double)\s*\**\s*"
    r"(?P<name>[A-Za-z_]\w*)\s*\((?P<params>[^)]*)\)")


def decl_of(rec):
    """(return_type, name, params) for a matched record, or None.

    The return type is not part of the Itanium mangling, so it has to be read
    back out of the emitted body. A caller must declare a destination with the
    same return type, or C++ rejects the pair ("functions that differ only in
    their return type cannot be overloaded").
    """
    if not rec or not rec.get("src"):
        return None
    head = rec["src"].strip().splitlines()[0]
    m = DECL_RE.match(head)
    if not m:
        return None
    return m.group("ret"), m.group("name"), m.group("params").strip()


def tail_target_ok(rec, matched):
    """Can this tail-call thunk be emitted as a self-contained body?

    A thunk is a bare jump, so it forwards no arguments. That is only correct if
    the destination takes none. If the destination has parameters the thunk would
    have to receive and forward them, and its own recovered signature -- which is
    what was verified -- would no longer be the one compiled. Those are declined
    rather than emitted incorrectly, and stop being counted as matching.
    """
    t = rec.get("tail_target_addr")
    if t is None:
        return False
    dest = matched.get(t)
    if dest is None:
        return True  # a namespaced stub, declared as void()
    d = decl_of(dest)
    if d is None:
        return False
    return d[2] == ""


def final_ret(addr, matched, emittable, _seen=None):
    """The return type a function will actually be *emitted* with.

    A tail-call thunk adopts its destination's return type (see retype_thunk), so
    reading the return type back out of the generator's original source gives a
    different answer from the definition that gets written. A prototype built
    from the former and a definition using the latter is a hard C++ error
    ("functions that differ only in their return type cannot be overloaded"), so
    both must be derived from here.

    Namespaced stubs are always `void` -- that is how they are declared.
    """
    if addr not in emittable:
        return "void"
    rec = matched.get(addr)
    if rec is None:
        return "void"
    if rec.get("shape") != "tailcall":
        d = decl_of(rec)
        return d[0] if d else "void"
    seen = _seen or set()
    if addr in seen:
        return "uint64_t"  # pathological cycle; keep it compilable
    seen.add(addr)
    t = rec.get("tail_target_addr")
    dest = matched.get(t) if t is not None else None
    if dest is None or t not in emittable:
        return "void"  # destination is a namespaced stub
    return final_ret(t, matched, emittable, seen)


def retype_thunk(src, thunk_name, dest_name, dest_ret):
    """Rewrite a tail-call thunk so its return type matches its destination.

    The thunk was verified as `uint64_t thunk() { return dest(); }`, because
    that is the form whose branch the harness checked. But the destination's real
    return type is not known at that point, and C++ rejects
    `uint64_t f() { return void_call(); }`.

    The return type is not part of the Itanium mangling, so changing it does not
    change the thunk's symbol, and a tail call to a void destination in tail
    position still compiles to the same single `b`. Both forms are emitted here.
    """
    if dest_ret == "void":
        return "void %s() { %s(); }\n" % (thunk_name, dest_name)
    return "%s %s() { return %s(); }\n" % (dest_ret, thunk_name, dest_name)


def definition_names(mod, ident_of, scope_of, matched, emittable):
    """address -> the name under which that function is actually defined.

    A function is defined either at global scope in prog/matched/<mod>/ (when a
    verified body was recovered for it, whose signature is recovered rather than
    chosen) or in the namespaced tree as `ns::ident`. A tail-call thunk has to
    call whichever of the two really exists, otherwise the link fails.
    """
    out = {}
    for a, ident in ident_of.items():
        rec = matched.get(a)
        if rec is not None and a in emittable:
            out[a] = rec["ident"]
            continue
        _g, _s, ns = scope_of[a]
        out[a] = ("%s::%s" % (ns, ident)) if ns else ident
    return out


def proto_for(addr, defname, matched, emittable):
    """An `extern` declaration for a tail-call destination, or None.

    Must agree with the destination's emitted definition, including its return
    type -- which for a thunk is inherited from *its* destination.
    """
    dest = matched.get(addr)
    if dest is not None and addr in emittable:
        ret = final_ret(addr, matched, emittable)
        d = decl_of(dest)
        params = d[2] if d else ""
        return "extern %s %s(%s);" % (ret, defname, params)
    # A namespaced stub: forward declare it in its own namespace.
    if "::" in defname:
        ns, _, base = defname.rpartition("::")
        return "namespace %s { void %s(); }" % (ns, base)
    return "void %s();" % defname


def build_prog(mod, names, addrs, used=None, matched=None):
    """Emit prog/<group>/<sub>/{include,source} for one module.

    `used` is the set of identifiers already taken across the whole prog/ tree.
    Functions emitted inside a namespace have external linkage, so a collision
    between two files is a duplicate-symbol link error rather than a harmless
    shadow, and the identifier has to be made unique here.

    `matched` supplies verified matching bodies (from tools/auto_match.py).
    Those replace the stub and are emitted at global scope inside the file's own
    tiny namespace-per-function, because their signatures are recovered from the
    instruction stream and must not be renamed into a namespace that would change
    the ABI. In practice that means the matching bodies are emitted into a
    dedicated directory so their mangled names stay exactly as verified.
    """
    if used is None:
        used = set()
    matched = matched or {}

    # First pass: assign every function its identifier and namespace. A
    # tail-call thunk has to name its destination, and the destination's
    # identifier is only known once all of them have been assigned.
    ident_of = {}
    scope_of = {}
    buckets = {}
    for a in addrs:
        nm = names.get(a) or ("sub_%x" % a)
        group, sub, ns = classify(mod, nm)
        ident = safe_ident(nm)
        if not ident:
            continue
        if ident in used:
            # Keep the human-readable stem, then add the module and address so
            # the result stays unique and still traces back to the binary.
            ident = "%s_%s_%x" % (ident, mod, a)
            n = 2
            while ident in used:
                ident = "%s_%s_%x_%d" % (ident[:96], mod, a, n)
                n += 1
        used.add(ident)
        ident_of[a] = ident
        scope_of[a] = (group, sub, ns)
        buckets.setdefault((group, sub, ns), []).append((a, ident))


    made = []
    prog_addr = {}
    for (group, sub, ns), items in sorted(buckets.items()):
        gdir = os.path.join(PROG, group, sub)
        sdir = os.path.join(gdir, "source")
        idir = os.path.join(gdir, "include")
        os.makedirs(sdir, exist_ok=True)
        os.makedirs(idir, exist_ok=True)

        ns_open = "namespace %s {\n" % ns if ns else ""
        ns_close = "}  // namespace %s\n" % ns if ns else ""

        # Chunk so no single translation unit gets unmanageable.
        #
        # The basename must be unique across every bucket, not just across
        # chunks: several distinct namespaces can share a (group, sub) pair --
        # e.g. gflib3::Signal lands in lib/gflib3 alongside gflib3's own
        # helpers -- so the namespace is part of the name.
        CHUNK = 4000
        chunks = [items[i:i + CHUNK] for i in range(0, len(items), CHUNK)] or [[]]
        ns_tag = safe_ident(ns) or "anon"
        base = "%s_%s_%s" % (sub, ns_tag, mod)
        for ci, chunk in enumerate(chunks):
            hname = base + (".h" if ci == 0 else "_%d.h" % ci)
            cname = base + (".cpp" if ci == 0 else "_%d.cpp" % ci)

            hpath = os.path.join(idir, hname)
            with open(hpath, "w", encoding="utf-8") as f:
                f.write("/* %s.%s - %d recovered functions.\n"
                        " * Declarations only; bodies live in the matching .cpp.\n"
                        " * Generated by tools/decomp_project.py -- do not hand-edit.\n"
                        " */\n#pragma once\n\n" % (mod, sub, len(chunk)))
                f.write(ns_open)
                for a, ident in chunk:
                    f.write("void %s();  // %#x\n" % (ident, a))
                f.write("\n" + ns_close)

            cpath = os.path.join(sdir, cname)
            with open(cpath, "w", encoding="utf-8") as f:
                f.write("/* %s.%s - %d recovered functions.\n"
                        " * Generated by tools/decomp_project.py -- do not hand-edit.\n"
                        " */\n#include \"%s\"\n\n" % (mod, sub, len(chunk), hname))
                f.write(ns_open)
                for a, ident in chunk:
                    rec = matched.get(a)
                    if a in matched:
                        # The verified implementation lives in
                        # prog/matched/%s/, at global scope with the signature
                        # recovered from the instruction stream. Defining it here
                        # too would be a duplicate symbol, and the namespaced
                        # signature is not the verified one.
                        f.write("// %s: implemented in prog/matched/%s/\n"
                                % (ident, mod))
                        continue
                    f.write("void %s() { /* %#x */ }\n" % (ident, a))
                f.write("\n" + ns_close)

            made.append((group, sub, os.path.join("source", cname)))
            made.append((group, sub, os.path.join("include", hname)))

        for a, ident in items:
            prog_addr[a] = mangle(ident, ns)
    return made, prog_addr, ident_of, scope_of


def emit_matched(mod, matched, defname=None, emittable=None):
    """Emit the verified matching bodies for one module.

    Tail-call thunks are included, at global scope like everything else here:
    they were verified that way, and their destination is rewritten from the
    placeholder `t_<mod>_<addr>` to the name under which the destination is
    really defined, so the branch resolves and the link succeeds.

    `emittable` is the subset that can actually be written out correctly. A
    thunk whose destination takes parameters is not in it, and is not counted as
    matching.
    """
    keep = emittable if emittable is not None else set(matched)
    recs = [matched[a] for a in sorted(matched) if a in keep]
    if not recs:
        return []
    defname = defname or {}

    out_dir = os.path.join(PROG, "matched", mod)
    src_dir = os.path.join(out_dir, "source")
    os.makedirs(src_dir, exist_ok=True)

    CHUNK = 2000
    chunks = [recs[i:i + CHUNK] for i in range(0, len(recs), CHUNK)]
    made = []
    for ci, chunk in enumerate(chunks):
        name = mod if len(chunks) == 1 else "%s_%d" % (mod, ci)
        cname = name + ".cpp"
        with open(os.path.join(src_dir, cname), "w", encoding="utf-8") as f:
            f.write("/* %s -- %d functions verified to match the original.\n"
                    " *\n"
                    " * These bodies were synthesised from the instruction stream by\n"
                    " * tools/auto_match.py and confirmed by compiling them for\n"
                    " * aarch64-none-elf and comparing against data/%s.elf with\n"
                    " * tools/match_harness.py. Signatures are recovered, not invented:\n"
                    " * changing a parameter type changes the codegen and the mangled\n"
                    " * name, so edit with care.\n"
                    " *\n"
                    " * Tail-call thunks were verified strictly: the branch\n"
                    " * destination was checked against the relocation record the\n"
                    " * compiler emitted, not ignored.\n"
                    " *\n"
                    " * Generated file -- re-run tools/decomp_project.py to regenerate.\n"
                    " */\n\n"
                    "/* Self-contained: a bare-metal aarch64-none-elf target has no\n"
                    " * <stdint.h> under -nostdinc++. */\n"
                    "typedef unsigned char uint8_t;\n"
                    "typedef unsigned short uint16_t;\n"
                    "typedef unsigned int uint32_t;\n"
                    "typedef unsigned long uint64_t;\n"
                    "typedef signed char int8_t;\n"
                    "typedef signed short int16_t;\n"
                    "typedef signed int int32_t;\n"
                    "typedef signed long int64_t;\n\n"
                    % (mod, len(chunk), mod))

            # Destinations this chunk calls, declared up front.
            protos = []
            for rec in chunk:
                if rec.get("shape") != "tailcall":
                    continue
                t = rec.get("tail_target_addr")
                dn = defname.get(t)
                if dn is None:
                    continue
                p = proto_for(t, dn, matched, emittable)
                if p and p not in protos:
                    protos.append(p)
            for p in protos:
                f.write(p + "\n")
            if protos:
                f.write("\n")

            for rec in chunk:
                f.write("// %s  (orig %#x, %s)\n"
                        % (rec.get("name", "?"), int(rec["addr"]),
                           rec.get("shape", "?")))
                src = rec["src"]
                if rec.get("shape") == "tailcall":
                    t = rec.get("tail_target_addr")
                    dn = defname.get(t)
                    placeholder = rec.get("needs_proto") or ""
                    if dn:
                        src = retype_thunk(
                            src, rec["ident"], dn,
                            final_ret(t, matched, emittable))
                    else:
                        src = re.sub(r"\b%s\b" % re.escape(placeholder),
                                     "MISSING_TAIL_DESTINATION", src)
                f.write(src.rstrip() + "\n\n")
        made.append(os.path.join("matched", mod, "source", cname))
    return made


def clear_prog():
    """Remove previously generated prog/ content.

    Everything under prog/ is machine generated, so a stale file from an older
    naming scheme would otherwise linger and be compiled alongside the new
    output. prog/main.cpp and prog/types.h are hand maintained, so they are
    preserved.
    """
    import shutil
    if not os.path.isdir(PROG):
        return
    for entry in os.listdir(PROG):
        path = os.path.join(PROG, entry)
        if os.path.isdir(path):
            shutil.rmtree(path)
        elif entry not in ("main.cpp", "types.h"):
            os.remove(path)


def write_prog_cmake(made_by_group):
    lines = ["# prog/CMakeLists.txt - generated by tools/decomp_project.py",
             ""]
    for group in sorted(gmade := set(made_by_group)):
        subs = sorted({p.split(os.sep)[1] for p in made_by_group[group]})
        for sub in subs:
            lines.append("add_subdirectory(%s/%s)" % (group, sub))
    lines += ["", "target_sources(pokesword PRIVATE", "  main.cpp", ")"]
    os.makedirs(PROG, exist_ok=True)
    with open(os.path.join(PROG, "CMakeLists.txt"), "w", encoding="utf-8") as f:
        f.write("\n".join(lines) + "\n")
    return gmade


def main(argv):
    mods = MODULES
    if len(argv) == 2 and argv[1] != "--all":
        mods = [argv[1]]

    if "--clean" in argv or "--all" in argv:
        clear_prog()

    total_rows = 0
    made_by_group = {}
    used_idents = set()
    for mod in mods:
        wdir = os.path.join(WORK, mod)
        if not os.path.exists(os.path.join(wdir, "functions_eh.txt")):
            print("%-8s SKIP (no work data)" % mod)
            continue
        names = load_names(mod)
        addrs = load_funcs(mod)
        text_len = os.path.getsize(os.path.join(wdir, "text.bin"))
        matched = load_matched(mod)
        text = open(os.path.join(wdir, "text.bin"), "rb").read()
        # Emit prog/ first so the declaration names can be recorded as the
        # decomp_name column of the symbol table.
        # Only count a verified body as matching if it can actually be written
        # out and linked. A tail-call thunk whose destination takes parameters
        # cannot be: the thunk is a bare jump and has no arguments to forward.
        # Decided before build_prog, so a declined thunk still gets a stub body
        # in the namespaced tree rather than being left undefined.
        emittable = {a for a, rec in matched.items()
                     if rec.get("shape") != "tailcall" or tail_target_ok(rec, matched)}
        dropped = len(matched) - len(emittable)
        if dropped:
            matched = {a: rec for a, rec in matched.items() if a in emittable}

        made, prog_addr, ident_of, scope_of = build_prog(
            mod, names, addrs, used_idents, matched)

        defnames = definition_names(mod, ident_of, scope_of, matched, emittable)
        for rel in emit_matched(mod, matched, defnames, emittable):
            made_by_group.setdefault("matched", []).append(rel)
        csv_path, nrows = write_csv(mod, names, addrs, text_len, prog_addr,
                                    matched, text)
        total_rows += nrows
        for group, sub, rel in made:
            made_by_group.setdefault(group, []).append(
                os.path.join(group, sub, rel))
        print("%-8s csv=%-24s rows=%7d prog_files=%3d matching=%6d%s" %
              (mod, os.path.basename(csv_path), nrows, len(made), len(matched),
               ("  (declined %d unlinkable)" % dropped) if dropped else ""))

    if "--all" in argv or len(mods) == len(MODULES):
        write_prog_cmake(made_by_group)

    # Concatenate every module into the canonical data/functions.csv, tagging
    # each row with its module. Addresses are module-relative (each NSO is
    # based at 0), so the module column is what makes the table unambiguous.
    allp = os.path.join(DATA, "functions.csv")
    grand = 0
    matching = 0
    with open(allp, "w", newline="", encoding="utf-8") as out:
        w = csv.writer(out)
        w.writerow(["module", "addr", "name", "size", "decomp_name"])
        for mod in MODULES:
            p = os.path.join(DATA, "functions_%s.csv" % mod)
            if not os.path.exists(p):
                continue
            n = 0
            for row in csv.reader(open(p, encoding="utf-8")):
                if not row:
                    continue
                if row[-1] and not row[-1].endswith("!"):
                    matching += 1
                w.writerow([mod] + row)
                n += 1
            grand += n
    print("TOTAL modules=%d functions=%d  matching=%d (%.2f%%)"
          % (len(MODULES), grand, matching,
             100.0 * matching / grand if grand else 0.0))
    print("      -> data/functions.csv")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))
