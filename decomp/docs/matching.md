# Matching status

This file records how much of the binary has been **matched** — i.e. has a C++
body that compiles to the same assembly as the original — as distinct from how
much has merely been *recovered*.

Run `python tools/match_progress.py` for the current numbers.

## Definitions

| term | meaning |
|---|---|
| **recovered** | a function boundary was found and it has a declaration, a symbol and a slot in the source tree |
| **matching** | a C++ body exists and the compiler, compiling it for `aarch64-none-elf`, produced the same instruction sequence as the original |

Those are very different numbers. All 152,062 functions are recovered. A
matching function is the thing a decomp project actually counts, so only that
number counts as progress here.

## How a match is established

Two independent checks, because either alone is weak.

**1. `tools/match_harness.py` — the screen.** Compiles candidate bodies in
batches, disassembles both the original (`data/<module>.elf`) and the compiled
output with the same disassembler, and compares. Two functions match when their
instruction sequences agree after ignoring what a decomp cannot control yet:

- `bl` targets, which depend on the final link layout
- `b`/`br` targets outside the function (tail calls)
- `adrp` page immediates and the `ldr`/`add` that consume them, which depend
  on where the linker places `.rodata`

Everything else — mnemonics, operand registers, branch widths — must agree. This
scales to the whole binary, which is why it is the one used to accept or reject
tens of thousands of candidates.

**2. `tools/diff.py` (asm-differ) — the authority.** The standard decomp.me
differ, comparing the built NX64 ELF against the original. A random sample of
40 functions accepted by the harness was re-checked with asm-differ: **40/40
matched.**

Note the two extra things that had to be right for asm-differ to agree at all:

- **Sizes exclude padding.** The gap from a function's start to the next
  function's start includes alignment padding. Including it makes asm-differ
  report that padding as unmatched original instructions for *every* function.
  Upstream pokesword's own table makes the same choice — it records 316 bytes
  for a function whose successor starts 320 bytes later, and this project's
  `_start` now measures 316 as well.
- **Mangled names must be real.** `data/functions.csv` carries the symbol the
  compiler actually produces, including parameter types and the `Pv`/`S_`
  spellings of `void*`. All 152,062 resolve against the linked ELF.

## What is matched

Bodies live in `prog/matched/<module>/source/*.cpp`, emitted at global scope
because their signatures are recovered rather than chosen — putting them in a
namespace would change the mangled name and therefore the verification.

Shapes handled by `tools/auto_match.py`:

| shape | C++ it produces |
|---|---|
| `ret` | `void f() {}` |
| `mov` + `ret` | return an argument, or a constant |
| `ldr` + `ret` | field read, integer / `float` / `double` |
| `str` + `ret` | field write |
| `add` + `ret` | pointer offset |
| `ldr` + `str` + `ret` | field copy |
| `cmp` + `cset` + `ret` | boolean accessor (`is_null`, `has_flag`, …) |
| `b <other function>` | tail-call thunk |
| straight-line | N-instruction load/store sequences, via `tools/straight_line.py` |

Per-shape match rates are 80–100%; the failures are reported by
`tools/auto_match.py` with the first differing instruction, so the next round of
work has concrete targets.

### A known limit of the straight-line translator

Where the original loads several fields before storing any of them, the load
*order* is significant and this translator does not preserve it. C++ evaluates
copy expressions in statement order, so the compiler can emit the loads in a
different order and the function does not match. Forcing the order with named
temporaries was tried and measured **worse** — 53% versus 82% on `main` — because
the extra bindings change register allocation. It was reverted rather than
shipped, and the limitation is recorded in `tools/straight_line.py`. Those
functions need hand decomp.

### Tail calls are verified strictly, not ignored

The batch screen deliberately ignores branch destinations, because for an
ordinary function `bl <helper>` depends on the final link layout and is noise.
For a tail-call thunk that is exactly backwards: the destination *is* the
function's entire behaviour. Ignoring it would let a thunk that jumps to the
wrong place count as a match.

So tail calls are checked the other way. `tools/auto_match.py` resolves the
original's `b` target to a recovered function, emits a call to it, and then
compares the **relocation record** the compiler produced (`R_AARCH64_JUMP26`,
read with `llvm-objdump -r`) against the destination that was intended. A thunk
counts as matching only if the emitted code branches to the same function the
original does — 5,083/5,083 in `main`.

They are emitted differently too. A thunk has to name the *real* destination
function for the branch to resolve, so tail calls live in the namespaced tree:

```cpp
namespace main {
void sub_ce0();          // tail-call destination, declared for this file
void sub_1e0() { sub_210(); }  // tail -> 0x210
}
```

rather than in `prog/matched/`.

## What is not matched, and why

The remaining ~87% of functions contain calls, branches, loops, or vtable
dispatch. Those are not mechanical: they need a person to work out what the
function does, name its parameters, choose types, and iterate until the
assembly agrees. That is the normal work of a decomp project, and it is what
`CONTRIBUTING.md` walks through.

Two things that would move the number fastest, in order of value:

1. **Naming.** Only 11,472 of 152,062 functions (7.5%) have a meaningful name.
   Naming is what makes a function tractable to decompile, and the RTTI
   hierarchy in `data/rtti_classes.csv` plus the string xrefs in `work/*/xrefs.json`
   are the raw material.
2. **Accessor classes.** The matched shapes are all leaf accessors. The C++ that
   wraps them — the classes, their member functions and their vtables — is
   inferred from RTTI and would let accessors be written as members rather than
   raw pointer arithmetic, which is both more readable and closer to the
   original source.

## Reproducing

```
python tools/auto_match.py --module main --all-shapes \
       --report data/matched_main.json      # synthesise + verify
python tools/decomp_project.py --all        # emit prog/matched/ + update CSV
python tools/prog_cmake.py                  # regenerate prog/**/CMakeLists.txt
python tools/match_progress.py              # report

# spot-check one function with the authoritative differ
$env:MY_IMAGE = "build/prog.elf"
python tools/diff.py --module main <function-name>
```

**Independent re-verification.** `tools/auto_match.py` decides whether a
candidate matches, and `tools/decomp_project.py` then writes it out. Neither
check covers the other, so `tools/verify_matches.py` closes the loop: it re-reads
the *emitted* C++ from `prog/matched/<module>/source/`, recompiles it, and
compares against `data/<module>.elf` from scratch.

```
python tools/verify_matches.py
python tools/verify_matches.py --module main --limit 500
```

That catches anything the emit step could break — a mangled signature, a lost
parameter type, an identifier rename that changed a parameter count — which a
report-driven check cannot see.

`tools/audit.py` additionally re-derives the whole claim from the files on disk,
including that every function marked as matching is backed by an `auto_match`
report. The number cannot drift upward on its own.
