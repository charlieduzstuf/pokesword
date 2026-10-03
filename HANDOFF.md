# POKESWORD DECOMP — SESSION HANDOFF

**Read this file first if you are a fresh session with no context.** It exists so
nobody has to re-explain the project. Everything below is measured and verified,
not remembered.

## What this project is

A matching decompilation of Pokemon Sword (Switch, build 562) into a
decomp.me-shaped C++ tree, matching **under the project's own toolchain**: Clang
5.0.1 + `ToolchainNX64.cmake` flags. Matching means byte-identical instructions,
not behavioural equivalence.

## Current number

```
25,431 / 152,062  =  16.72%
```

| module | bodies | independent re-verification |
|---|---|---|
| main | 20,203 | 19,978 / 20,012 = 99.83% (mismatch=34) |
| sdk | 3,057 | 3,046 / 3,049 = 99.90% (mismatch=3) |
| subsdk0 | 854 | 854 / 854 = 100% |
| subsdk1 | 1,317 | 1,317 / 1,317 = 100% |

Full build links clean, 152,267 symbols.

**The 34 main mismatches are fully explained**, not a defect: every one is a
`tailcall` whose emitted body is a bare `ret`, because its destination was an
empty function in the same compilation batch. Measured:
`failures by (shape, body contains a call): tailcall call=False 34`. The real
build is unaffected — each function is a separate external symbol there.

## How to verify (never trust a number that skipped a step)

```powershell
$env:POKESWORD_CLANG='C:\llvm-5.0.1\bin'
$env:POKESWORD_OPT='-O3'

# 1. batch recompile
python tools\auto_match.py --module main --all-shapes --batch 400 --report data\matched_main.json
# 2. emit + build
python tools\decomp_project.py --all
python tools\prog_cmake.py
python tools\build_nx64.py --jobs 8
# 3. independent re-verification
python tools\verify_matches.py --module main
python tools\match_progress.py
```

**The number that counts is the emitted-body count from `match_progress.py`.**
Never a generator's `MATCH x / y` line — that is a hit rate, not a delta. Twice
this session "N matched" was read as a gain when the body count had not moved at
all (the tailcall round reported +9,083 and delivered zero).

## The environment

- Clang 5.0.1: `C:\llvm-5.0.1\bin` (set `POKESWORD_CLANG`)
- Modules: `work/<module>/` — `main` 19.5 MB text, `sdk`, `subsdk0`, `subsdk1`, `rtld`
- Registries: `data/matched_<module>.json` — the only trusted record of a
  verified body. `decomp_project.py --all` regenerates `prog/` from them.
- Generated sources: `prog/matched/<module>/source/*.cpp`
- Hand-written bodies register only via `tools/add_handwritten.py` (verify-gated)

## Docs, in the order worth reading

| file | what it settles |
|---|---|
| `decomp/docs/remaining.md` | **what is left and what blocks it** — read this next |
| `decomp/docs/exactness_bug.md` | the tooling bugs that were worth +568 functions |
| `decomp/docs/link_base0.md` | the 974-function unlock and its blocker |
| `decomp/docs/prmb_loaders.md` | `.prmb` data tables and their loaders |
| `decomp/docs/layout_recovery.md` | GOT recovery and three negative results |
| `decomp/docs/retail_nsp.md` | why the retail NSP will not decrypt |
| `decomp/docs/verification.md` | the three-check rule |

## Next three steps, in order

1. **Make `main`'s sections link-distinguishable, then link at base 0.**
   Worth **974 functions** and it also fixes the `--from-elf` gap.
   `build/prog.elf` relocates `main` by `-0x669020`, so `adrp`+`add` to a global
   in `main`'s `.data` can never resolve to the original address. A linker script
   is drafted at `tools/link_main_base0.ld` but is **not wired in**: with
   `-ffunction-sections` every module's code lands in `.text.<mangled>`, so a
   script's `*(.text*)` at base 0 would capture the SDK modules too. `main`'s
   objects must be made identifiable first — by compiling them with a distinct
   section prefix, or by linking `main` separately and combining.
   **Blast radius:** this moves every module. Re-verify all four afterwards; a
   misplaced `.rodata` turns 25,431 verified bodies into 25,431 mismatches.

2. **The 303 `ldp; stp; ret` bodies.** Confirmed by sampling to be
   copy-constructor-plus-zero-fill, not plain copies — `stp` appears among the
   *zero* stores. Needs a generator that carries load semantics through to the
   stores with interleaving preserved. `gen_struct_copy_ret` exists and declines
   all of them, correctly.

3. **`main`'s 180 `const-field-set` bodies.** All fail identically:
   `insn 0: orig ('ldr', 'x8, [x0]') vs new ('mov', 'w8', #1)` — Clang
   materialises the constant before the pointer load. An `__asm__ memory`
   barrier changed **nothing** (0/180, byte-identical), because the reordering
   happens at instruction selection, not in the scheduler. The same source shape
   matches in `sdk` (10/12) and `subsdk0` (8/8), so it is a codegen question
   about the original source.

## The honest ceiling

**115,661 of the 126,639 remaining functions are `branchy` or `branchy-calls`** —
91%. These have real control flow and real calls; matching one means recreating a
compiler's register allocation and instruction scheduling deliberately. At ten
minutes per verified body that is **~19,000 hours**, and it is not usefully
parallelisable (they average well over 50 instructions).

100% is not reachable by an agent. Every gain this session came from finding a
*specific, measurable defect* in existing tooling, each found by a check running
over the whole population rather than a sample:

- `scan_shapes.classify_shape` computed `tail` and **no branch ever read it**
- `auto_match.shape_of` tested `n == 2` where a **pattern** test belonged (+525)
- `verify_matches --from-elf` never truncated the candidate to the original's
  effective length — 3,025 bogus `len=` failures (73.96% → 89.05%)
- a shared `struct pair16_` tag colliding in-batch, failing 7 of 7 candidates
- **`access_width` ignoring register class** — `mov w0, wzr` modelled as
  `mov x0, xzr`; reproduced independently in three separate copies of the helper

## Traps — these have each cost real time

- **A vtable carries offsets only, no type tags.** Reading the low byte of the
  next slot offset as a type gives `float32` fields holding 1.6e-41.
- **Return types do not appear in Itanium mangling.** Only parameters and class
  types. And a function with *no parameters* mangles with a trailing `v`, so the
  signature is `"v"`, not `""`. Getting this wrong reports
  `symbol not found / no code`, which reads as a broken shape rather than a
  mis-signature. Three instances.
- **A compile error and an instruction mismatch are different failures**, but
  `auto_match`'s summary conflates them. This has cost a diagnosis cycle three
  times.
- **`got_map.py`'s `ops.split(",")`** once made `x8, [x8, #0x5a0]` parse as three
  fields, so every GOT access with a displacement was silently filtered out —
  411 fake slots instead of 29,270 real ones.
- **A substring search finds a name and looks like success.** The `.prmb` table
  names are *not* standalone literals; they are substrings of
  `bin/battle/data_table/poke_data.prmb`.
- **`data/shapes.csv` disagrees with `MH.load_functions` by thousands** of
  functions. `auto_match.collect` walks `MH.load_functions`; trust that one.
- **`decomp_project.py --all` regenerates `data/functions.csv` from the module
  manifests**, so any edit to that CSV is reverted. Fix population changes in
  `decomp_project.py`, never in the CSV.

## Blocked on artifacts (not needed for matching)

- **A relocated memory image.** NSOs carry no `DT_RELA` and all 29,270 GOT slots
  are zero. The retail NSP is card-descriptor: `header_kek` derives fine but
  `rights_id` is circular. An emulator launches; a dump needs GUI interaction plus an
  export facility this build lacks. This blocks GOT *values*, vtables, and object
  contents — not the matching percentage.
- **Schemas for the seven `.prmb` battle tables.** 545 asset keys recovered;
  `battle_talk.prmb` read at 40-byte stride. None of the 54 pkNX `.fbs` files
  covers these. Loaders are located (`decomp/docs/prmb_loaders.md`); field
  offsets are read off them.

## Do not do these again

- Do not report a generator's hit rate as a gain. Read the body count before and
  after.
- Do not trust a census that cannot see control flow. An unguarded classifier
  reported `fp` as 6,980 when the real figure was 445, and three of six sampled
  members were branchy bodies that merely did float arithmetic. **A census that
  cannot see branches will always report the branch-heavy code as the cheapest
  win, because branch-heavy code is most of the binary.**
- Do not reimplement something that already works. Reimplementing `parse_pfs0`
  with the wrong field order gave `fs_size` of `0x7e3000000000` and all seven
  partition names concatenated.
- Do not leave a generator registered that declines everything it is offered
  unless the reason is recorded in its docstring.
- Do not leave non-idiomatic C that demonstrably changes nothing.
