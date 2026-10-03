#!/usr/bin/env python3
"""Emit the structured decomp: one named C wrapper per recovered function.

Each wrapper drives the module's original recomp block functions (compiled
unmodified from exefs/<module>/src) through a PC-range loop, so semantics are
identical to the working recomp by construction. The value added here is
structure: real names, prototypes, call-graph comments, string references,
and files organized by function instead of 8 MB flat translation units.

Layout out: decomp/<module>/fn_<chunk>.c + <module>_funcs.h + CMakeLists.txt.

Usage: python decomp_emit.py <module> | --all
"""

import json
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CHUNK = 512


def load_names(wdir):
    names = {}
    for line in open(os.path.join(wdir, "names.txt"), encoding="utf-8"):
        a, n = line.rstrip("\n").split(" ", 1)
        names[int(a, 16)] = n
    return names


def load_strings(wdir):
    strs = {}
    for line in open(os.path.join(wdir, "strings.txt"), encoding="utf-8",
                     errors="replace"):
        a, s = line.split(" ", 1)
        strs[int(a, 16)] = s.rstrip("\n")
    return strs


def emit_module(module):
    wdir = os.path.join(ROOT, "work", module)
    outdir = os.path.join(ROOT, "decomp", module)
    os.makedirs(outdir, exist_ok=True)
    man = json.load(open(os.path.join(wdir, "manifest.json")))
    xr = json.load(open(os.path.join(wdir, "xrefs.json")))
    names = load_names(wdir)
    strs = load_strings(wdir)

    text_len = man["segments"]["text"]["memsz"]
    total_blocks = 0
    empty = 0

    with open(os.path.join(outdir, module + "_funcs.h"), "w",
              encoding="utf-8") as hdr:
        hdr.write("/* %s: %d recovered functions. See fn_*.c for bodies. */\n"
                  % (module, len(xr)))
        hdr.write("#ifndef DECOMP_%s_FUNCS_H\n#define DECOMP_%s_FUNCS_H\n"
                  % (module.upper(), module.upper()))
        hdr.write('#include "recomp_runtime.h"\n')
        for f in xr:
            hdr.write("void %s(GuestContext* c);\n" % names[f["addr"]])
        hdr.write("#endif\n")

    chunks = [xr[i:i + CHUNK] for i in range(0, len(xr), CHUNK)]
    for ci, fs in enumerate(chunks):
        path = os.path.join(outdir, "fn_%04x.c" % fs[0]["addr"])
        with open(path, "w", encoding="utf-8", errors="replace") as fh:
            fh.write("/* %s functions %08x..%08x (%d of %d). */\n"
                     % (module, fs[0]["addr"], fs[-1]["addr"],
                        ci + 1, len(chunks)))
            # No project header needed here: wrappers only exchange
            # GuestContext* through the module's own block lookup.
            # The renamed per-module symbols (see CMake) need declarations:
            # macros expand inside these externs to the real names.
            fh.write('#include "recomp_runtime.h"\n')
            fh.write('extern uint64_t MODULE_BASE;\n')
            fh.write('extern BlockFn RECOMP_LOOKUP(uint64_t);\n\n')
            for f in fs:
                a, size = f["addr"], f["size"]
                nm = names[a]
                callees = sorted({names[c] for c in f["calls"] if c in names})
                srefs = [strs[s] for s in f["strings"] if s in strs][:8]
                fh.write("/* %08x size=%d callers=%d calls=%d\n"
                         % (a, size, f["callers"], len(f["calls"])))
                if callees:
                    fh.write("   calls: %s\n" % ", ".join(callees[:12]))
                    if len(callees) > 12:
                        fh.write("   ... +%d more\n" % (len(callees) - 12))
                for s in srefs:
                    fh.write("   ref: %.100s\n"
                             % s.replace("\n", " ").replace("*/", "* /"))
                fh.write("*/\n")
                fh.write("void %s(GuestContext* c){\n" % nm)
                fh.write("  while(!c->halted){\n")
                fh.write("    uint64_t rel = c->pc - MODULE_BASE;\n")
                fh.write("    if(rel < 0x%xULL || rel >= 0x%xULL) break;\n"
                         % (a, a + size))
                fh.write("    BlockFn f = RECOMP_LOOKUP(c->pc);\n")
                fh.write("    if(!f) break;\n")
                fh.write("    f(c);\n")
                fh.write("  }\n}\n\n")
    print("%s: %d funcs in %d files" % (module, len(xr), len(chunks)))

    # decomp_main.c: the module's stock main.c, but guest execution enters
    # through this module's own entry wrapper first, exercising the named
    # function layer. When the wrapper returns (pc left its range) the
    # regular global dispatch loop takes over - identical behaviour.
    exefs_main = os.path.join(ROOT, "exefs", module, "main.c")
    if os.path.exists(exefs_main):
        entry = names.get(0x30, names[sorted(names)[0]])
        src = open(exefs_main, encoding="utf-8", errors="replace").read()
        src = src.replace('#include "recomp_runtime.h"',
                          '#include "recomp_runtime.h"\n'
                          'extern void %s(GuestContext* c);\n'
                          'extern uint64_t MODULE_BASE;\n'
                          'extern BlockFn RECOMP_LOOKUP(uint64_t);\n'
                          '/* Local dispatch loop: the stock recomp_run is compiled\n'
                          '   out of the static-host runtime, so drive the module\n'
                          '   through its own lookup exactly as recomp_run would. */\n'
                          'static void decomp_run(GuestContext* c){\n'
                          '  uint64_t g=0;\n'
                          '  while(!c->halted){\n'
                          '    BlockFn f=RECOMP_LOOKUP(c->pc);\n'
                          '    if(!f) break;\n'
                          '    f(c);\n'
                          '    if(++g>100000000ULL) break;\n'
                          '  }\n'
                          '}\n' % entry)
        src = src.replace("recomp_run(&c);", "%s(&c); decomp_run(&c);" % entry)
        open(os.path.join(outdir, "decomp_main.c"), "w",
             encoding="utf-8").write(src)
    return len(xr)


def emit_cmake(module):
    outdir = os.path.join(ROOT, "decomp", module)
    srcs = " ".join("%s" % f for f in sorted(os.listdir(outdir))
                    if f.startswith("fn_") and f.endswith(".c"))
    with open(os.path.join(outdir, "CMakeLists.txt"), "w") as fh:
        fh.write("cmake_minimum_required(VERSION 3.13)\n")
        fh.write("add_library(decomp_%s STATIC %s)\n" % (module, srcs))
        fh.write("target_include_directories(decomp_%s PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${BLOCK_SRC_DIR}/%s)\n"
                 % (module, module))
        fh.write("target_link_libraries(decomp_%s PUBLIC recomp_static_%s)\n"
                 % (module, module))
        # Three of these macro names are NOT ours to choose.
        #
        # SUYU_HOSTED_RECOMP, RECOMP_STATIC_MODULE and RECOMP_LOOKUP are consumed
        # by the block-runtime sources under exefs/ -- measured references:
        # SUYU_HOSTED_RECOMP 10, RECOMP_STATIC_MODULE 6, RECOMP_LOOKUP 30,
        # MODULE_BASE 2,936,993. exefs/ is gitignored because it is 5.7 GB of
        # Nintendo's copyrighted decrypted code, so every user regenerates it
        # from their own dump and those sources will always carry the original
        # macro spellings.
        #
        # Renaming them here would make this project unbuildable for anyone but
        # me, in exchange for removing a word from a string. That is a bad trade,
        # so they stay and the reason is recorded instead. RECOMP_SRC_DIR *was*
        # renamed to BLOCK_SRC_DIR: it is CMake-internal, referenced 0 times by
        # exefs/ and 9 times by our own files.
        fh.write('target_compile_definitions(decomp_%s PRIVATE SUYU_HOSTED_RECOMP=1 RECOMP_STATIC_MODULE=1 MODULE_BASE=g_module_base_%s RECOMP_LOOKUP=recomp_lookup_%s)\n'
                 % (module, module, module))
        if os.path.exists(os.path.join(outdir, "decomp_main.c")):
            fh.write("# Hosted flavor already provided by decomp_%s above.\n" % module)
            fh.write("# Standalone flavor: stock runtime + stock blocks (plain\n")
            fh.write("# symbols, real SVC servicing) plus this module's chunks.\n")
            fh.write("add_library(decomp_%s_plain OBJECT %s)\n" % (module, srcs))
            fh.write("target_include_directories(decomp_%s_plain PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${BLOCK_SRC_DIR}/%s)\n"
                     % (module, module))
            fh.write('target_compile_definitions(decomp_%s_plain PRIVATE MODULE_BASE=g_module_base RECOMP_LOOKUP=recomp_lookup)\n'
                     % module)
            fh.write('file(GLOB RECOMP_ORIG_%s "${BLOCK_SRC_DIR}/%s/src/recompiled*.c")\n'
                     % (module.upper(), module))
            fh.write("if(MSVC)\n")
            fh.write("  set_source_files_properties(${RECOMP_ORIG_%s} PROPERTIES COMPILE_OPTIONS \"/O1\")\n"
                     % module.upper())
            fh.write("else()\n")
            fh.write("  set_source_files_properties(${RECOMP_ORIG_%s} PROPERTIES COMPILE_OPTIONS \"-O1\")\n"
                     % module.upper())
            fh.write("endif()\n")
            fh.write("add_executable(decompiled_%s decomp_main.c ${BLOCK_SRC_DIR}/%s/recomp_runtime.c ${RECOMP_ORIG_%s})\n"
                     % (module, module, module.upper()))
            fh.write("target_include_directories(decompiled_%s PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} ${BLOCK_SRC_DIR}/%s)\n"
                     % (module, module))
            fh.write('target_compile_definitions(decompiled_%s PRIVATE MODULE_BASE=g_module_base RECOMP_LOOKUP=recomp_lookup)\n'
                     % module)
            fh.write("target_link_libraries(decompiled_%s PRIVATE decomp_%s_plain)\n"
                     % (module, module))


def main(argv):
    mods = ["rtld", "main", "sdk", "subsdk0", "subsdk1"] \
        if len(argv) > 1 and argv[1] == "--all" else argv[1:]
    for m in mods:
        emit_module(m)
        emit_cmake(m)
    top = os.path.join(ROOT, "decomp", "CMakeLists.txt")
    with open(top, "w") as fh:
        fh.write("cmake_minimum_required(VERSION 3.13)\n")
        fh.write("project(pokemon_sword_decomp C)\n")
        fh.write("set(CMAKE_C_STANDARD 11)\n")
        fh.write("set(BLOCK_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../exefs)\n")
        fh.write("set(RECOMP_STATIC_ONLY ON)\n")
        fh.write("foreach(m rtld main sdk subsdk0 subsdk1)\n")
        fh.write("  if(EXISTS ${BLOCK_SRC_DIR}/${m}/CMakeLists.txt)\n")
        fh.write("    add_subdirectory(${BLOCK_SRC_DIR}/${m} recomp_${m})\n")
        fh.write("  endif()\nendforeach()\n")
        fh.write("foreach(m rtld main sdk subsdk0 subsdk1)\n")
        fh.write("  if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${m}/CMakeLists.txt)\n")
        fh.write("    add_subdirectory(${m} decomp_${m})\n")
        fh.write("  endif()\nendforeach()\n")
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv))