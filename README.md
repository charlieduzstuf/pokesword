# pokesword-decomp

Decompilation of **Pokemon Sword** (title `0100ABF008968000`, US v0) for
Nintendo Switch, laid out as a standard [decomp.me](https://decomp.me) /
[decomp.dev](https://decomp.dev) project and structured as a fork of
[`notyourav/pokesword`](https://github.com/notyourav/pokesword).

This is Game Freak's **"orion"** engine: native ARM64 C++. There is no IL2CPP
metadata in RomFS, so all game code lives in the `main` NSO module and is
recovered by static analysis.

## What is recovered

| component | count | where |
|---|---|---|
| native functions (5 NSO modules) | **152,062** | `prog/`, `decomp/<mod>/` |
| translated instruction blocks | 2,328,210 | linked from `exefs/<mod>/src` |
| Pawn event/AI scripts | **691** | `decomp/script/` |
| RomFS assets inventoried | 42,693 | `decomp/docs/asset_inventory.md` |
| RTTI class/namespace names | 1,873 | `data/rtti_classes.csv` |

Every one of the 152,062 functions has a declaration, a symbol and an entry in
`data/functions.csv`.

## What is matched

Recovery is not matching. A function counts as **matched** only when a C++ body
compiles to the same assembly as the original — verified by compiling it for
`aarch64-none-elf` and comparing against `data/<module>.elf`, then
re-checked with asm-differ.

```
python tools/match_progress.py            # recovery + matching, separately
python tools/match_progress.py --by-shape # where the matches come from
```

Details, including how a match is established and what is not matched yet, are
in `decomp/docs/matching.md`.

## Layout

This mirrors upstream pokesword:

```
prog/            game source, grouped by subsystem, namespaced C++
  contents/      bag, battle, field, item, pokemon, trainer
  gfx/           render, physics
  system/        audio, net, save
  ui/            manager
  lib/           gflib3
  <module>/      the remaining recovered functions, per NSO module
lib/             NintendoSDK (nnheaders submodule) + gflib3, external deps
data/            the original binaries as ELF, symbol tables, script tables
  main.elf sdk.elf subsdk0.elf subsdk1.elf rtld.elf
  functions.csv  module,addr,name,size,decomp_name
  scripts.csv    per-script Pawn metadata
  rtti_classes.csv
tools/           asm-differ, diff.py, check.py, print_decomp_symbols.py,
                 plus the analysis and code-generation scripts
decomp/          the equivalence-checked decompilation
  <mod>/fn_*.c   named function wrappers over the unmodified instruction blocks
  script/        *.pasm disassembly + *.pseudo.c pseudocode
  docs/          verification and asset documentation
exefs/           the original static translation (source of the blocks)
work/            analysis intermediates (segments, symbols, xrefs, strings)
```

## Building

### Host verification build

Compiles the recovered code natively so the decompilation can actually be run
and diffed. Needs CMake and MSVC (or clang).

```
cmake -S . -B build_host -G "Visual Studio 17 2022" -A x64
cmake --build build_host --config Release
```

This produces one binary per module in `build_host/bin/`:

```
decompiled_rtld.exe  decompiled_main.exe  decompiled_sdk.exe
decompiled_subsdk0.exe  decompiled_subsdk1.exe
```

### NX64 matching build

Cross-compiles for Switch the way a matching decomp project builds. Needs
devkitA64 and Clang 5.0.1 (see `ToolchainNX64.cmake` and the `Dockerfile`).

```
git submodule update --init --recursive
cmake -GNinja -DCMAKE_BUILD_TYPE=RelWithDebInfo \
      -DCMAKE_TOOLCHAIN_FILE=ToolchainNX64.cmake -B build
ninja -C build
```

## How equivalence is established

The decompiled binaries are not a reimplementation in the "we rewrote it by
hand" sense, and the project does not claim they are. Each recovered function is
a named C++ function that drives the **original, unmodified** per-instruction
instruction blocks from `exefs/` through a PC-range dispatch loop. Semantics are
therefore identical to the shipped translation *by construction*, and the
project proves it empirically:

- **Block coverage** — every one of the 2,328,210 instruction blocks lies inside
  exactly one recovered function, in every module.
- **Differential tracing** — stock `translated.exe` vs `decompiled_<mod>.exe`,
  run headless from a clean state and their stderr compared byte for byte. See
  `decomp/docs/verification.md` for the measured line counts.
- **Assembly differ** — `data/<mod>.elf` is a real AArch64 ELF rebuilt from the
  NSO, with a full symbol table, so `asm-differ` disassembles and compares
  against it.

What this decompilation adds over the flat translation: real function boundaries
(from the compiler's own unwind tables), names, a call graph, string
references, RTTI-derived class hierarchy, and a source tree organised the way a
normal software project would be.

## Diffing against the original

```
python tools/diff.py --module main <function-name>
```

`tools/diff_settings.py` selects the module (default `main`) and resolves the
ELF and the built binary for it. On Windows it uses LLVM's `llvm-objdump`;
override with `OBJDUMP=/path/to/objdump`.

## Regenerating

Everything machine-generated can be rebuilt from `work/`:

```
python tools/nso_to_elf.py --all     # data/<mod>.elf from the decompressed NSO
python tools/auto_match.py --module main --all-shapes \
       --report data/matched_main.json   # synthesise + verify matching bodies
python tools/decomp_project.py --all # data/functions.csv + prog/ tree
python tools/prog_cmake.py           # prog/**/CMakeLists.txt
python tools/pawn_emit.py            # data/scripts.csv + data/scripts.json
python tools/rtti_names.py --write   # data/rtti_classes.csv
python tools/ghidra_run.py --all     # Ghidra decompilation of the rest
```

## Checking the work

```
python tools/audit.py            # 40 checks, re-derived from the files on disk
python tools/progress.py         # recovery coverage
python tools/match_progress.py   # matching coverage
python tools/verify_matches.py   # independently recompile + re-verify every match
python tools/verify_all.py       # the whole pipeline in dependency order
python tools/audit.py --quick    # skip the slow cross-compile sweep
```

## Reverse engineering with Ghidra

The functions that `auto_match.py` cannot solve mechanically — 128,239 of them,
containing calls, branches, loops and vtable dispatch — need to be understood,
not just transcribed. `tools/ghidra_run.py` drives Ghidra's decompiler headlessly
over exactly those functions:

```
python tools/ghidra_run.py --module main
python tools/ghidra_run.py --all --sec-per-fn 25
```

Output lands in `work/ghidra_out/<module>.c.txt` as one C-like body per function,
with the address, name, size and signature in the header. Runs are resumable.

It imports `data/<module>.elf`, which already carries the recovered function
boundaries and 11,507 real names as ELF symbols, then disassembles each body and
wires direct branches to the functions they land on before decompiling. That
preparation matters: without it the decompiler emits indirect calls through data
instead of named calls, which loses the call graph — the single most useful thing
the output provides.

Ghidra's output is a starting point for a person, not matching code, and this
project does not claim otherwise. It supplies the body, a signature and the call
graph; turning that into C++ that assembles identically is the per-function work
`CONTRIBUTING.md` describes.

## Notes

- The ROM's NCA containers are card-descriptor form and do not decrypt with
  standard keycrypto, so decrypted artifacts already produced by an external
  exporter are reused. See `decomp/docs/keys_and_rom.md`.
- Deep `.prmb` data-table formats are left to the community
  `swordshield-data` project; the headers are identified and documented.
