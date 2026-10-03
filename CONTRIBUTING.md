# Decompiler's guide

This file explains what state the project is in and what a contributor actually
does next. It is the honest version: read it before assuming coverage numbers
mean what they usually mean in a decomp project.

## What "100% decompiled" means here

| claim | status |
|---|---|
| every function in the binary recovered and named | **yes** — 152,062 / 152,062 |
| every function has a declaration and a symbol | **yes** — 152,062 / 152,062 |
| every function's body drives the original code | **yes** — in `decomp/<mod>/fn_*.c` |
| decompiled binaries behave identically to the shipped recomp | **yes** — verified by trace, all 5 modules |
| every function's body is hand-written matching C++ | **no** — see below |

The distinction matters. There are two representations of each function in this
repo:

**1. `decomp/<module>/fn_*.c` — verified equivalent.** Each of these is a
named C function that drives the module's original, unmodified instruction blocks
through a PC-range dispatch loop. The behaviour is identical to the shipped
recompilation *by construction*, and that is confirmed empirically by
differential tracing (`decomp/docs/trace_results.md`: 3,001,195 stderr lines
compared, zero differences).

**2. `prog/<group>/<sub>/source/*.cpp` — decomp.me-shaped source.** These are
the namespaced C++ declarations a decomp project is organised around. Most
bodies are still empty and carry their address:

```cpp
namespace main {
void gflib3_reallocatable_resource() { /* 0xad0 */ }
}  // namespace main
```

**3. `prog/matched/<module>/source/*.cpp` — verified matching.** For the
functions `tools/auto_match.py` could solve mechanically — leaf accessors,
constant returns, pointer offsets, comparisons — the body here is real C++ that
the compiler was run on and confirmed to reproduce the original instruction
sequence. These live at global scope, because their signatures are *recovered*
rather than chosen: putting them in a namespace would change the mangled name
and invalidate the verification.

`data/functions.csv` distinguishes them. A matching function's `decomp_name` is
the bare mangled symbol; a non-matching one carries asm-differ's `!` marker, so
`tools/check.py` never claims a stub matches and `tools/diff.py` shows you the
original's instructions with nothing on the right.

```
python tools/match_progress.py            # the split, per module
python tools/match_progress.py --by-shape # where the matches come from
```

`decomp/docs/matching.md` explains how a match is established. A random sample
of 40 harness-accepted functions was re-checked with asm-differ: 40/40 matched.

## The workflow

This is the standard matching workflow, and the tooling for it is set up and
tested.

**1. Pick a function.** `tools/progress.py --by-group` shows where the work is.
For anything in `main`, prefer a function you can identify — a named one from
the 11,472 recovered names, or one whose RTTI/string references point at a
subsystem.

```powershell
python tools/progress.py --by-group
```

**2. Look at it.**

```powershell
$env:POKESWORD_MODULE = "main"
python tools/diff.py -m main gflib3_reallocatable_resource
```

Left column is the original, from `data/main.elf`. Red `<` lines are original
instructions with nothing matching them yet.

**3. Implement it.** Edit the matching file in
`prog/<group>/<sub>/source/`, and its declaration in the sibling
`include/` header. Bodies currently look like:

```cpp
void gflib3_reallocatable_resource() { /* 0xad0 */ }
```

Worked examples are in `prog/matched/<module>/source/` — those bodies were
synthesised from the instruction stream and verified against the original, so
they show the house style (recovered signatures, sized types, explicit casts).
See `decomp/docs/matching.md`.

**4. Iterate until the diff is empty.**

```
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=RelWithDebInfo \
      -DCMAKE_TOOLCHAIN_FILE=ToolchainNX64.cmake
ninja -C build
python tools/diff.py -m main gflib3_reallocatable_resource
```

The NX64 build is the one asm-differ can read — it needs an AArch64 ELF on the
"my" side. If you do not have devkitA64 and Clang 5.0.1, you can still check
that your code compiles for the right target:

```
clang++ --target=aarch64-none-elf -std=c++17 -c -I prog/<group>/<sub>/include \
        prog/<group>/<sub>/source/<file>.cpp -o /dev/null
```

**5. Update the status.** In `data/functions.csv`, change the last column from
`...!` to the bare mangled name once the function matches:

```
main,0x0000000000000ad0,gflib3_reallocatable_resource,320,_ZN5main28gflib3_reallocatable_resourceEv!
```

**6. Confirm.** `python tools/check.py` re-verifies every function marked as
matching.

## Rebuilding the generated files

Everything under `prog/`, `data/functions.csv`, `data/*.elf`,
`data/scripts.csv` and `data/rtti_classes.csv` is generated. After changing
`tools/decomp_project.py`:

```
python tools/decomp_project.py --all
python tools/prog_cmake.py
python tools/nso_to_elf.py --all
python tools/pawn_emit.py
python tools/rtti_names.py --write
```

## Platform notes

The upstream tooling is Linux/macOS oriented. Three shims make it work on
Windows, and they are worth knowing about because they are easy to mistake for
bugs:

- `tools/py_compat/imp.py` — asm-differ imports `ansiwrap`, which uses the
  `imp` module removed in Python 3.12. Only `find_module`/`load_module` are
  shimmed.
- `tools/objdump_shim.py` / `.cmd` — upstream ships a Linux x86-64
  `aarch64-none-elf-objdump`; on Windows this translates GNU's
  `--disassemble=SYM` to LLVM's `--disassemble-symbols=SYM`.
- `tools/shim/tail.exe`, `less.exe` — asm-differ pipes output through
  `tail -c 10^9 | less`, and neither exists on Windows. Build them with
  `tools/shim/pager_shim.c`; `tail.cmd`/`less.cmd` are the Python equivalents.

Also note that every NSO module is based at address 0, so **function addresses
repeat across modules**. Always pass `--module`; `POKESWORD_MODULE` is the
fallback.

## Known limitations

- **Names.** 11,472 of 152,062 functions (7.5%) have meaningful names; the rest
  are `sub_<addr>`. The binary is stripped, so the remainder needs manual RE.
- **`.prmb` data tables.** Headers identified and documented; deep format RE
  deferred to the community `jayztemplier/swordshield-data` project.
- **Bodies in `prog/`** are stubs by design, as described above.
- **No IL2CPP layer.** This is native ARM64 C++, so there is no managed-code
  metadata to decompile and no `global-metadata.dat` to parse.
