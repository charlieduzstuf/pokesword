# POKESWORD DECOMP — SESSION HANDOFF

**Read this file first if you are a fresh session with no context.** It exists so
nobody has to re-explain the project. Everything below is measured and verified,
not remembered.

## What this project is

A matching decompilation of Pokemon Sword (Switch, build 562) into a
decomp.me-shaped C++ tree, matching **under the project's own toolchain**: Clang
5.0.1 + `ToolchainNX64.cmake` flags. Matching means byte-identical instructions,
not behavioural equivalence.

Published as a network fork: `github.com/charlieduzstuf/pokesword`, forked from
`notyourav/pokesword` (whose default branch is `master`; this project's work is
on `main`). `origin` is the fork, `upstream` is the original.

### What is deliberately not in the repository

`exefs/` (5.7 GB of decrypted Nintendo NSO binaries plus a third-party
block-dispatch tree), `*.keys` (console key material), and all prebuilt binaries
are excluded by `.gitignore`. `tools/hactool/prod.keys` was sitting *inside*
`tools/`, where the original ignore rules did not cover it, so a blanket
`git add -A` would have staged and pushed 14,612 bytes of console master keys.
`.gitignore` now excludes it and the rule is documented in place. **Check
`git ls-files | grep -i keys` before ever publishing** — deleting a commit does
not un-push a secret.

Three compile definitions (`SUYU_HOSTED_RECOMP`, `RECOMP_STATIC_MODULE`,
`RECOMP_STATIC_ONLY`) and `RECOMP_LOOKUP` keep their original spellings because
the untracked `exefs/` sources consume them (measured: 10, 6, 20 and 30
references respectively) and every user regenerates that tree. Renaming them
would break the build for anyone but the author. `RECOMP_SRC_DIR` *was* renamed
to `BLOCK_SRC_DIR` — it is CMake-internal, referenced 0 times by `exefs/`.

## Current number

```
26,536 / 152,062  =  17.45%
```

Up from 25,431 (16.72%) at the start of the most recent run of working sessions,
and 24,703 at the start of the one before it. Every gain has come from
over-constraints and silent omissions in *existing* generators rather than new
capability — see `decomp/docs/exactness_bug.md` and `decomp/docs/yield_sweep.md`.

| module | bodies | independent re-verification |
|---|---|---|
| main | 21,169 | **20,944 / 20,944 = 100.00% clean** |
| sdk | 3,172 | **3,112 / 3,112 = 100.00% clean** |
| subsdk0 | 874 | **870 / 870 = 100.00% clean** |
| subsdk1 | 1,321 | **1,319 / 1,319 = 100.00% clean** |

Full build links clean, 153,084 symbols. `build/prog.elf` 22,012,400 bytes.

**Every module now verifies at 100%. There are no outstanding mismatches.**
That took two separate fixes, and the second one was the verifier, not the
decompilation — see "The tail-call bug, in two parts" below.

Note the two different denominators, because they are not the same thing and
conflating them is how this project has reported progress wrongly before:
`bodies` counts emitted bodies; `independent re-verification` counts the
functions the verifier re-compiles, which is a slightly smaller set.

### The tail-call bug, in two parts

Every one of the 42 residual mismatches was a `tailcall` whose original body is
a bare 4-byte `b <target>`. **Neither the decompilation nor the generator was at
fault in the end.** There were two distinct causes, and fixing only the first
would have left the project looking broken for no reason.

**Part 1 — real, in the shipped binary.** A thunk sharing a translation unit
with its destination had the destination constant-folded away. `decomp_project.py`
now partitions emitted records into thunks, destinations and the rest, chunking
each partition independently, so no `.cpp` holds both. Verified in the linked
object rather than inferred:

```
build/matched_sdk_source_sdk_0.o
  _Z12sdk_f_3bc670v:
     0:  00 00 00 14   b  #0          correct bare tail jump
```

*Partitioning*, not reordering, is required: sdk's entire thunk set fits inside
one 2000-record chunk, so "thunks first, destinations after" kept them together.
The partitions are asserted disjoint, because a function that is both a thunk
and a destination otherwise gets emitted twice and a duplicate definition fails a
whole 400-record batch.

**Part 2 — the verifier, not the build.** `verify_matches.py` concatenated every
emitted `.cpp` into a single TU, so it kept seeing each destination defined
beside its thunk and kept reporting bodies that were already correct in the
binary. It now compiles **one TU per emitted file**, matching what
`prog/CMakeLists.txt` actually does. That took main 99.93% → 100% and
sdk 99.87% → 100%.

**The cause recorded here for two commits was wrong.** It claimed
`gen_tailcall`'s hardcoded `uint64_t` return was responsible. It is not. These
were each tested and each failed to change anything:

- `noinline`
- `noinline,noclone,noipa`
- matching the destination's return type — `retype_thunk` already did this, and
  the emitted source shows the types agreeing

Clang propagates the constant through *any* definition it can see, so return
type and inlining hints are both beside the point; the only lever is which
translation unit the definition lands in. Isolate the two functions and the
fold disappears:

```
both defined in one TU  ->  movl $1,%eax ; retq    FOLDED
destination declared     ->  jmp                   correct
```

The general lesson, and it has now cost time three times this project: **a
verifier that does not model the build will report correct code as wrong, and
the mistake is indistinguishable from a real regression.** A count going down is
not evidence of a fix.

Two mechanisms produce the fold, and both are worth recognising:

- destination is an **empty** function → the call elides to a bare `ret`
- destination **returns a constant** → the call constant-folds to
  `mov w0, #imm ; ret`

The second only started appearing when constant-returning bodies were added:
`sdk_f_3bc670` jumps to `sdk_f_3c4790`, which is `mov_ret` →
`uint32_t f_3c4790() { return 1; }`. Adding 62 such functions to `sdk` is what
took its mismatch count from 3 to 4. **Adding matched bodies can therefore break
previously-verified tail-calls**, which is worth remembering before any future
harvest is judged by its mismatch delta.

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
| `decomp/docs/yield_sweep.md` | **which registered generators are dead** — measured, per shape |
| `decomp/docs/struct_copy.md` | the 374 `struct-copy` bodies: two families, real disassembly, and the open question about whether either is reachable from C |
| `decomp/docs/exactness_bug.md` | the tooling bugs that were worth +568 functions |
| `decomp/docs/link_base0.md` | the 974-function unlock and its blocker |
| `decomp/docs/prmb_loaders.md` | `.prmb` data tables and their loaders |
| `decomp/docs/layout_recovery.md` | GOT recovery and three negative results |
| `decomp/docs/retail_nsp.md` | why the retail NSP will not decrypt |
| `decomp/docs/verification.md` | the three-check rule |

## Next three steps, in order

1. ~~Fix the tail-call return type.~~ **Done, and the premise was wrong** — the
   return type was never the cause. See "The tail-call bug, in two parts" above.
   All four modules now verify at 100%; there is no outstanding mismatch left to
   chase, so nothing here is a bug fix any more.

2. **`compare`: 393 unmatched bodies, 3 generated.** The most promising target,
   because that ratio is the `indexed-getter` signature — a registered generator
   holding a large population and producing almost nothing. The declines cluster
   into flag-test families (`ldr ; ldrb ; cmp ; cset`, `ldr ; ldr ; cmp ; cset`,
   `ldr ; sub ; cmp ; cset`, `and ; cmp ; cset`), i.e. `return (obj->field & mask)
   == value;`. The arithmetic is all visible in the operands, so this is
   tractable by hand. Full per-family breakdown in
   `decomp/docs/yield_sweep.md`.

3. **The 374 `struct-copy` bodies** (`ldp ; stp ; ret` and wider interleaved
   forms). The only shape over the 50-body threshold where the generator produces
   literally nothing. Genuinely hard rather than buggy: the loads interleave with
   the *zero* stores, so load-then-store order cannot express them. Needs a
   generator that carries load semantics through to the stores.

3. **`main`'s 180 `const-field-set` bodies.** All fail identically:
   `insn 0: orig ('ldr', 'x8, [x0]') vs new ('mov', 'w8', #1)` — Clang
   materialises the constant before the pointer load. An `__asm__ memory`
   barrier changed **nothing** (0/180, byte-identical), because the reordering
   happens at instruction selection, not in the scheduler. The same source shape
   matches in `sdk` (10/12) and `subsdk0` (8/8), so it is a codegen question
   about the original source.

### Retired: the base-0 link. Do not attempt it.

`decomp/docs/link_base0.md` and `tools/link_main_base0.ld` describe a 974-function
unlock that **does not exist**. The whole analysis was wrong, and reading
`MH.normalise` is what proved it:

```python
if len(parts) >= 2 and parts[1] in adrp_regs:
    out.append((mn, first))     # ONLY the destination register
```

`adrp x0, <any page> ; add x0, x0, #<any offset>` normalises to
`('adrp','x0'), ('add','x0')` whatever the addresses are. The shape is compared,
never the target. So relocating `main` by `0x669020` **cannot** affect whether
those bodies match, and no linker script is needed. Both files are kept only so
the negative result is not rediscovered from scratch — wiring that script in
would be a large, risky change for nothing.

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
- **a hex-only immediate regex** — `#(0x[0-9a-f]+)$` rejected 20 of 78 sdk
  bodies because LLVM had printed the high half as decimal `#4`. It prints
  whichever base is shortest, so both spellings occur in one corpus. Use the
  existing `parse_imm`.
- **a generator registered with no route to it** — `const-ret` was added and
  worked, but `shape_of` returned `"mov_ret"` for the 2-insn form and had no rule
  at all for the 3-insn one, so it was offered zero candidates and reported
  nothing at all. Registering a generator and routing to it are two separate
  steps; check both.
- **`gen_strlit_ret` gating on a readable string** when `normalise` never
  compares the target — the same bug as `gen_strlit_flag_ret`, worth +100. A
  generator's precondition has to be justified by what the *comparison* checks,
  not by what would be nice to recover.

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
  after. **This has now been done twice**, most recently when a `compare` match
  rate of "200 / 201 = 99.50%" was reported as a large win and turned out to be
  **+3 bodies** — the 200 were already matched through other shapes. Run the
  `--report` harvest and read `match_progress.py` before saying any number.
- Do not rank work by a per-generator decline count. A body that
  `gen_compare_ret` declines is often reachable by another shape, so a family's
  body count is an upper bound on *that generator's* value, not the shape's.
  The `ldrsb` fix measured 9 declines and delivered 3.
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
- **Do not bulk-replace text across files without reading the result.** A
  PowerShell pass intended to swap one phrase used `$pair[0]`/`$pair[1]` on a
  hashtable value that PowerShell had unrolled to a bare *string*, so
  `$pair[0]`/`$pair[1]` were the first two **characters** — `u` and `n`. The
  result was `$c.Replace('u','n')`, which silently destroyed 126 characters in
  `CONTRIBUTING.md` (`function` → `fnnction`, `status` → `statns`). It was
  caught by diffing letter counts against the staged copy, not by looking at
  the file.
  Two related traps in the same investigation: a signature list of `nse`,
  `ntil`, `nique` produced only false positives, because those are substrings
  of "response", "until" and "unique". Detect corruption with
  `du=`/`dn=` letter-count drift against a known-good copy, not substring
  matching.
- **Do not write files through a shell redirect.** Use the write/edit tools, or
  verify byte-for-byte afterwards.
