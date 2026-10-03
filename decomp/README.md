# decomp/ — the equivalence-checked decompilation

This directory holds the decompilation that is actually *verified*, plus the
Pawn script decompilation and the documentation. The decomp.me-style project
scaffolding (`prog/`, `data/`, `lib/`, `tools/`) lives one level up; see the
top-level `README.md`.

## Layout

| path | contents |
|---|---|
| `rtld/`, `main/`, `sdk/`, `subsdk0/`, `subsdk1/` | per-module decomp: `fn_*.c` (named function wrappers), `<mod>_funcs.h` (all prototypes), `decomp_main.c`, `CMakeLists.txt` |
| `script/` | 691 Pawn `.amx` event/AI scripts: `*.pasm` (disassembly), `*.pseudo.c` (pseudocode), `manifest.txt` |
| `docs/` | `verification.md`, `trace_results.md`, `asset_inventory.md`, `keys_and_rom.md` |
| `CMakeLists.txt` | standalone build (needs `../exefs` with the recomp sources) |

## What a "function" is here

Boundaries come from each module's `.eh_frame_hdr` — the compiler's own unwind
table — so they are exact rather than heuristic:

| module | functions | text size |
|---|---|---|
| `main` | 104,004 | 25 MB |
| `sdk` | 26,662 | 5.4 MB |
| `subsdk0` | 9,838 | 3.6 MB |
| `subsdk1` | 11,530 | 5 MB |
| `rtld` | 28 | 6.5 KB |

Each wrapper drives the module's **original recomp block functions** (compiled
unmodified) through a PC-range dispatch loop, so semantics are identical to the
working recompilation by construction. The decomp adds real function boundaries,
names, a call graph, string references, and one-function-per-wrapper
organisation instead of flat 8 MB translation units.

`docs/verification.md` has the equivalence evidence: block coverage, differential
traces, and the rebuilt-ELF structural check.

## Modules

- `main` — Game Freak "orion" game code.
- `sdk` — NintendoSDK system libraries.
- `subsdk0` — media stack: Android stagefright-derived codecs, SoftAAC /
  SoftAVC(+Enc) / SoftOpus / SoftVorbis / SoftMPEG4, FFT/DCT.
- `subsdk1` — graphics.
- `rtld` — Nintendo loader stub.

## Pawn scripts

691 scripts, all extracted from RomFS and all decompiled. The disassembler is the
vendored `swsh-pawn-decomp` reference under `tools/pawn_ref/` with a local patch
for the Game Freak `SYSREQ` opcode, documented in `tools/pawn_ref/PATCHES.md`.

Per-script metadata — AMX version, segment extents, and the counts of public
functions, natives, libraries and tags — is extracted from the image headers by
`tools/pawn_emit.py` into `data/scripts.csv` and `data/scripts.json`.

Totals: 6,867,458 bytes of bytecode, 122 public functions, 22,898 native
declarations, 678 tags.

## Rebuild

From the repository root:

```
cmake -S . -B build_host -G "Visual Studio 17 2022" -A x64
cmake --build build_host --config Release
```

This produces `build_host/bin/decompiled_<module>.exe` for all five modules.

The `decomp/` tree can also be configured on its own:

```
cmake -S decomp -B decomp/build -G "Visual Studio 17 2022" -A x64
cmake --build decomp/build --config Release
```

The tools that generate everything here live in `../tools/`, and `../work/` holds
the analysis intermediates (`manifest.json`, `functions_eh.txt`, `xrefs.json`,
`names.txt`, `strings.txt`, `callgraph.txt`).
