# Verification

## What is claimed

The decompiled binaries are **not** a hand-written reimplementation. Each of the
152,062 recovered functions is a named C++ function that drives the **original,
unmodified** per-instruction blocks from `exefs/` through a PC-range
dispatch loop. The wrappers contain no guest logic of their own.

Two consequences follow:

1. Semantics are identical to the shipped translation *by construction*.
2. The claim is still checked empirically rather than assumed, by the three
   independent lines of evidence below.

## 1. Block coverage

Every block must fall inside exactly one recovered function, otherwise
some guest code would be unreachable from the decompiled structure.

| module | functions | blocks | orphans | empty funcs |
|---|---|---|---|---|
| rtld | 28 | 422 | 0 | 0 |
| main | 104,004 | 1,528,110 | 12 | 271 |
| sdk | 26,662 | 314,381 | 12 | 14 |
| subsdk0 | 9,838 | 212,991 | 12 | 5 |
| subsdk1 | 11,530 | 272,306 | 12 | 25 |
| **total** | **152,062** | **2,328,210** | | |

The 12 "orphans" per module are entry-stub words below `0x30`, which are
correctly excluded from function bodies. "Empty funcs" are real addresses that
disassemble as thunks or tail-jumps which the recompiler's reachability pass
never emitted blocks for; their wrappers safely no-op, exactly as the stock
build does at those addresses.

Function boundaries come from each module's `.eh_frame_hdr` — the compiler's own
unwind table — rather than heuristics, so they are exact. `rtld` carries no
unwind table and is recovered from the xref analysis' entry list instead.

## 2. Differential tracing

The stock `translated.exe` and the decompiled `decompiled_<module>.exe` are run
headless from an identical clean state (same working directory, same `data/`
payload, guest memory zeroed) and their stderr compared byte for byte.

Both binaries loop indefinitely, so the traces have different lengths — only the
overlapping prefix has to match. Measured results are in
`decomp/docs/trace_results.md`.

A trace mismatch is almost always environmental rather than semantic: a leftover
256 MB `save_data` autosave in one directory changes the starting state. Clean
those directories before comparing.

## 3. Structural round-trip

`tools/nso_to_elf.py` rebuilds a real AArch64 ELF from each decrypted NSO so the
project's tooling has something standard to work against:

```
data/rtld.elf  main.elf  sdk.elf  subsdk0.elf  subsdk1.elf
```

Verified properties of each:

- `.text`, `.rodata` and `.data` are **byte-identical** to the decompressed NSO
  segments.
- `.symtab` carries an `STT_FUNC` symbol for every recovered function, with the
  recovered name and the correct size.
- All 152,062 functions appear as symbols across the five files.

That makes `asm-differ`, `tools/check.py` and `pyelftools` usable directly:

```
python tools/diff.py --module main <function-name>
```

`tools/check.py` compares each function's bytes in the rebuilt ELF against the
matching function in the built output, and understands asm-differ's match-status
markers (`?` equivalent, `!` non-matching, `|` WIP).

Note that asm-differ needs an AArch64 ELF on the "my" side, so it compares
against the NX64 build. The `build_host/` binaries are x86-64 and exist for the
execution trace in section 2.

## 4. Clean builds

All five modules build from scratch with **zero errors**:

```
decompiled_rtld.exe       73,728 bytes
decompiled_main.exe   213,283,840 bytes
decompiled_sdk.exe    41,620,992 bytes
decompiled_subsdk0.exe 28,040,704 bytes
decompiled_subsdk1.exe 37,220,864 bytes
```

The only diagnostics are pre-existing and inherited verbatim from the stock
block sources: one `strncat` deprecation notice, and `C4293` shift-count
notices in the generated blocks.

Separately, all 63 generated `prog/` translation units cross-compile cleanly for
`aarch64-none-elf` with `-std=c++17 -Wall` and zero errors, which confirms the
generated source tree is valid C++ and not just text.

## Summary

| check | result |
|---|---|
| blocks inside exactly one function | 2,328,210 / 2,328,210 |
| functions declared with a body | 152,062 / 152,062 (100%) |
| Pawn scripts disassembled | 691 / 691 (100%) |
| Pawn scripts rendered as pseudocode | 691 / 691 (100%) |
| host builds | 5 / 5, zero errors |
| `prog/` cross-compiles for NX64 | 63 / 63 units, zero errors |
| rebuilt ELF segments byte-exact | 5 / 5 modules |
