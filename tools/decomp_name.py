#!/usr/bin/env python3
"""Name every function in a Sword NSO module from its string cross-references.

Priority:
  1. _start for the entry stub.
  2. Demangled C++ symbols (llvm-cxxfilt) for functions referencing mangled
     _Z names in rodata (SDK/media/framework code).
  3. Content-derived names: asset paths, UI ids, message labels, .amx script
     names referenced by the function.
  4. sub_<addr> fallback, uniquified.

Outputs work/<module>/names.txt (addr, name) and stats to stdout.

Usage: python decomp_name.py <module>
"""

import json
import os
import re
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CXXFILT = r"C:\Users\charl\scoop\apps\llvm\current\bin\llvm-cxxfilt.exe"


def demangle(names):
    if not names:
        return {}
    p = subprocess.run([CXXFILT], input="\n".join(names).encode(),
                       capture_output=True)
    out = {}
    for src, dst in zip(names, p.stdout.decode("utf-8", "replace").split("\n")):
        out[src] = dst.strip()
    return out


C_KEYWORDS = {"auto", "break", "case", "char", "const", "continue", "default",
                "do", "double", "else", "enum", "extern", "float", "for",
                "goto", "if", "inline", "int", "long", "register", "restrict",
                "return", "short", "signed", "sizeof", "static", "struct",
                "switch", "typedef", "union", "unsigned", "void", "volatile",
                "while",
                # C++ keywords + MSVC built-ins that are not C keywords but
                # still unusable as identifiers in this toolchain.
                "bool", "true", "false", "wchar_t", "char16_t", "char32_t",
                "class", "namespace", "template", "typename", "new", "delete",
                "this", "friend", "virtual", "override", "final", "public",
                "private", "protected", "operator", "try", "catch", "throw",
                "explicit", "export", "mutable", "using", "typeid", "nullptr",
                "constexpr", "decltype", "concept", "requires", "typename",
                "and", "or", "not", "xor", "bitand", "bitor"}


def sanitize(s, limit=56):
    s = re.sub(r"\.[a-z0-9]{1,5}$", "", s)          # strip extension
    s = s.split("/")[-1].split("\\")[-1]            # basename
    s = re.sub(r"[^0-9A-Za-z_]+", "_", s).strip("_")
    if s and s[0].isdigit():
        s = "f_" + s
    s = s[:limit].strip("_") or "unnamed"
    if len(s) < 4:
        s = "unnamed"
    if s in C_KEYWORDS:
        s += "_fn"
    return s


def src_name(s):
    """Game Freak __FILE__ strings: derive area + file stem, e.g.
    prog/battle/.../battle_command.pb.cc -> battle_battle_command."""
    i = s.find("program/")
    if i < 0:
        return None
    rest = s[i + len("program/"):]
    parts = [p for p in re.split(r"[/\\\\]", rest) if p]
    if len(parts) < 2:
        return None
    if parts[0] in ("prog", "lib"):
        parts = parts[1:]
    stem = re.sub(r"\.(pb\.cc|cc|cpp|c|h|hpp|inl)$", "", parts[-1])
    area = parts[0]
    nm = sanitize(area + "_" + stem)
    return nm if len(nm) >= 4 else None


def score_string(s):
    """Higher = more likely a deliberate human-chosen identifier."""
    if s.startswith("_Z") or s.startswith("__"):
        return (0, s)
    flat = s.replace("\\", "/")
    if "jenkins/workspace/orion" in flat or "/prog/" in flat:
        nm = src_name(flat)
        if nm:
            return (90 + min(len(nm), 10), nm)
    # Assert-location strings (boost signals2, physx, nn::diag) name the
    # header, not the function - only use them when nothing better exists.
    if re.search(r"\.(hpp|cpp|h|c|inl)_\d+", s):
        return (5, s)
    if re.match(r"^[A-Za-z_][A-Za-z0-9_]{3,}$", s):
        bonus = 0
        if "::" in s:
            bonus += 30
        if re.search(r"(battle|field|script|sound|model|camera|ui_|menu|net|save|title|demo|effect|pokemon|pkm|zukan|shop|box|camp|dex)", s, re.I):
            bonus += 20
        return (60 + bonus + min(len(s), 20), s)
    if "/" in s or "\\" in s or s.endswith((".amx", ".arc", ".bntx", ".gfbmad", ".bnsh", ".ptcl")):
        return (50, s)
    if re.match(r"^[a-z][a-z0-9_ ]{4,}$", s):
        return (20, s)
    return (-len(s), s)


def name_module(module):
    wdir = os.path.join(ROOT, "work", module)
    man = json.load(open(os.path.join(wdir, "manifest.json")))
    xr = json.load(open(os.path.join(wdir, "xrefs.json")))
    strs = {}
    for line in open(os.path.join(wdir, "strings.txt"), encoding="utf-8",
                     errors="replace"):
        a, s = line.split(" ", 1)
        strs[int(a, 16)] = s.strip()

    mangled = sorted({strs[s] for f in xr for s in f["strings"]
                      if strs.get(s, "").startswith("_Z")})
    dem = demangle(mangled)

    names = {}
    used = {}
    assigned = set()
    stats = {"start": 0, "symbol": 0, "content": 0, "fallback": 0}

    for f in xr:
        a = f["addr"]
        if a == 0x30:
            nm, stats["start"] = "_start", stats["start"] + 1
        else:
            refs = [strs[s] for s in f["strings"] if s in strs]
            syms = [r for r in refs if r.startswith("_Z")]
            if syms:
                # Shortest demangled name wins: closest to the real symbol.
                best = min(syms, key=lambda r: len(dem.get(r, r)))
                d = dem.get(best, best)
                d = re.sub(r"\(.*\)$", "", d)          # drop signature
                d = re.sub(r"^(const |volatile )+", "", d)
                nm = sanitize(d.replace("::", "_").replace(" ", "_")
                               .replace("*", "ptr").replace("&", "ref"))
                stats["symbol"] += 1
            elif refs:
                ranked = sorted(refs, key=score_string, reverse=True)
                top_score, top_val = score_string(ranked[0])
                # A source-path win carries its derived name, not the path.
                nm = top_val if top_score >= 90 else sanitize(ranked[0])
                if len(nm) < 4:
                    nm = "unnamed"
                stats["content"] += 1
            else:
                nm = "sub_%x" % a
                stats["fallback"] += 1
        if nm in assigned:
            i = used.get(nm, 1) + 1
            while "%s_%d" % (nm, i) in assigned:
                i += 1
            used[nm] = i
            nm = "%s_%d" % (nm, i)
        else:
            used[nm] = 1
        assigned.add(nm)
        names[a] = nm

    with open(os.path.join(wdir, "names.txt"), "w", encoding="utf-8") as fh:
        for a in sorted(names):
            fh.write("%x %s\n" % (a, names[a]))
    print("%s: %d named (%s)" % (module, len(names),
          ", ".join("%s=%d" % kv for kv in sorted(stats.items()))))


if __name__ == "__main__":
    # Same missing guard as decomp_analyze.py: `--help` was treated as a module
    # name and surfaced as a FileNotFoundError from inside the JSON loader.
    _USAGE = "Usage: python decomp_name.py <module>"
    if len(sys.argv) < 2 or sys.argv[1] in ("-h", "--help"):
        print(_USAGE)
        sys.exit(0 if len(sys.argv) > 1 else 2)
    if not os.path.isfile(os.path.join(ROOT, "work", sys.argv[1],
                                       "manifest.json")):
        sys.stderr.write("error: no such module: %s\n%s\n"
                         % (sys.argv[1], _USAGE))
        sys.exit(2)
    name_module(sys.argv[1])