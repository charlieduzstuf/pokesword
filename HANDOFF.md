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
28,836 / 152,062  =  18.96%
## The byte-identical ceiling is a compiler limit -- ~21%

Measured over all 123,191 unmatched bodies:

    contain a call          93,113  75.6%
    contain a stack frame   97,547  79.2%   Clang 5.0.1 never emits writeback sp
    contain adrp/adr        61,742  50.1%   needs a data symbol + link-time verify
    FREE of all three        3,272   2.7%

Ceiling under vanilla Clang 5.0.1 ~= 32,108 / 152,062 = **21.1%**. The retail
module was built with Nintendo's compiler; the writeback `sp` prologue is the
giveaway, and no flag on Clang 5.0.1 produces it (tested -O0..-O3, -Os, -Oz,
frame-pointer and unwind variants).

In this project "fuzzy" means byte-identical -- `objdiff_report.py` documents that
a body either matches or is not counted. So 100% fuzzy == 100% byte-identical,
which the above blocks. A *semantic* matcher would not be compiler-blocked. See
`decomp/docs/ceiling.md`.
## Two largest blockers are compiler/harness limits, not missing work

* **stack frames (`ldp`/`stp`, 97,370 bodies)** -- the original uses writeback
  addressing (`str x19,[sp,#-0x20]!`, `ldp x29,x30,[sp],#0x20`); Clang 5.0.1 emits
  separate `sub sp`/`add sp` and never that form. Not reachable under this
  compiler. See `decomp/docs/stack_frames.md`.
* **`adrp` (~1,450)** -- Clang never emits it for a bare integer (needs a symbol),
  and an unresolved `adrp` cannot byte-match in the `.o` the harness verifies.
  Needs link-time verification plus data symbols. See `decomp/docs/remaining_pool.md`.

The `None` pool is therefore mostly *not* addressable by translator work. The
honest next lever is semantic/data recovery, not more instruction coverage.
## The remaining pool is 98.2% unnamed -- measured, not assumed

    unmatched bodies        123757
    shape None              121544   (98.2%)

Every named shape combined is 2,213 bodies (1.8%). The shape rules are drained;
what remains is control flow plus calls. `branchy` with zero calls: **0 bodies**.
`branchy-calls` under 12 instructions: **none**. The largest named pool,
`tailcall` (1,037), is interior entry points into one function and has no body by
design.

**Careful:** `tools/scan_shapes.py` and `auto_match.shape_of` are different
classifiers -- the same bodies are `branchy-calls` to one and `None` to the other.
Querying `auto_match` for `branchy-calls` returns 0 and looks like the pool is
empty. See `decomp/docs/remaining_pool.md`.
```

`tools/match_progress.py` is the only authoritative figure. Do not copy a number
out of this file or `README.md` into prose without re-reading it there — both went
stale at 26,536 / 17.45% while the tool said 17.47%, and `README.md`'s drift gate
in CI would have been red the whole time.

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
- Keep-alive ping: `python tools\keepalive.py --loop --interval 60 --fast`
  — **use `--loop`**. Plain `--sleep` only delays a *single* tick and then exits
  (its help said "for chained relaunch", and nothing relaunches it), which is why
  the ping used to go silent between turns.

## Docs, in the order worth reading

| file | what it settles |
|---|---|
| `tools/gen_struct_copy.py` | 278 bodies; a 16-byte **struct** forces `ldp`/`stp`, a barrier pins the order |
| `tools/gen_compare_pred.py` | 71 bodies; cset condition picks the operator *and* the signedness |
| `tools/gen_zero_fill.py` | 129 bodies at 100% yield; register class picks the store width |
| `tools/gen_getter_chain.py` | 130 bodies; **an FP destination is a `float` return**, which is 93 of the 139 `ldr ldr ret` bodies |
| `decomp/docs/const_field_set.md` | **a recorded dead end that was really the flag bug** — 180 bodies, no barrier needed |
| `decomp/docs/check_py_vacuous_match.md` | **332 "matches" that were not matches** — `zip` over an empty comparison returns equal |
| `decomp/docs/flag_fidelity.md` | **the 26 bodies that only matched under the wrong flags** — the worst bug here, because it was invisible |
| `decomp/docs/straight_line.md` | **the "84 candidates, 0 matches" verdict was wrong twice** — flags, then 1,033 declines that raised `Bail` with no message |
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

1. ~~`compare`, `struct-copy`, `setter-chain`.~~ **All three done** — three new
   generators, **+478 bodies, 17.47% -> 17.78%**, in one session:

   | generator | offered | matched | note |
   |---|---:|---:|---|
   | `tools/gen_struct_copy.py` | 311 | **278** | 16-byte struct to force `ldp`/`stp`, barrier between write groups |
   | `tools/gen_compare_pred.py` | 79 | **71** | 89.9% yield; cset condition picks operator *and* signedness |
   | `tools/gen_zero_fill.py` | 129 | **129** | 100% yield; register class picks the store width |

   Each is report-only by default and needs `--apply`. **Always read the
   offered/matched lines before believing a gain**, and re-run
   `decomp_project --all` *then* `prog_cmake.py` *then* `build_nx64.py` — skipping
   `prog_cmake` leaves 95 directories without a `CMakeLists.txt`.

2. **`copy-chain`: 199 unmatched bodies, dominated by `ldr str str ret` (115) and
   `ldr ldr str ret` (52).** The obvious next target, and the machinery now exists:
   `gen_struct_copy` handles copy shapes where the loads and writes are already
   grouped, so the first thing to try is running its ideas over `copy-chain`'s
   indexed store (`str x2, [x8, w1, uxtw #3]`, i.e. `(char*)p[idx] = v`).
   `gen_zero_fill` declines all 196 of them, correctly — that is a copy, not a
   clear.

3. ~~**`getter-chain` (190) and `const-field-set` (187).**~~ **Both done: 216
   bodies between them** — and the `const-field-set` entry that used to be here
   was **wrong**.

   | generator | offered | matched | note |
   |---|---:|---:|---|
   | `tools/gen_getter_chain.py` | 167 | **130** | `s0`/`d0` returns carry 93 of the 139 `ldr ldr ret` bodies |
   | `tools/gen_store_chain.py --shape const-field-set` | 181 | **180** | 99.4% yield |

   `const-field-set` had been recorded here as impossible: *"an `__asm__ memory`
   barrier changed nothing (0/180, byte-identical)"*. That measurement was taken
   with the harness missing eight of the build's flags. With the flags corrected,
   the plain assignment matches and **no barrier is needed at all**. See
   `decomp/docs/const_field_set.md`. Re-measure every other "dead end" below under
   the corrected flags before believing it.

4. **The 8 missing build flags were suppressing matches, not only mis-reporting
   them.** Re-running the four registered chain generators with the corrected flag
   set found one new body in each. Before calling any generator dead at 0% yield,
   re-run it — the flags it was developed against were wrong. This has now cost
   180 bodies once already (item 3).

5. **17 `ldr q0` bodies in `getter-chain`** — a 16-byte NEON load into `v0` — are
   the largest untouched group left in that shape. They need `<arm_neon.h>` and a
   16-byte vector return type. `gen_getter_chain` declines them rather than
   guessing.

6. **The declined remainder: ~319 `compare`, 98 `setter-chain`, 29 `copy-chain`,
   8 mismatched, 6 `const-field-set`, 23 `getter-chain`.** The `copy-chain` and
   mismatched ones are the most tractable: they fail on operand *order*
   (`cmp w8, w9` vs `cmp w9, w8`) and `ldur` width, both of which a two-way
   search should take. The rest wait on the relocated memory image.

## What is not worth doing

- **The 1,037 unmatched `tailcall` bodies.** All branch to an address that is not
  a function start; 1,035 of 1,037 land *inside* main's last function, which is
  13,184 bytes long, so they branch 448 bytes into an existing body. Expressing
  them means treating interior branch targets as function entries and splitting
  that body. Not tractable, and the census makes it look like the biggest
  opportunity available. It is not.
- **A memory barrier on any body that interleaves a read with a write.** The
  barrier is the right tool for scheduling and the wrong tool for selection, and
  on interleaved bodies it forces the intermediates onto the stack. See
  `decomp/docs/struct_copy.md`.
- **`vector_size(16)` for anything.** It sends Clang to NEON (`ldr q0`, `ld1`,
  `stur q1`), which is further from `ldp`/`stp`, not closer. Only a plain struct
  pairs general-purpose registers.

## The rule that keeps biting

**Register class decides width, never the opcode.** `str` with `wzr` clears four
bytes and `str` with `xzr` clears eight; `ldrh w8` yields a 32-bit value from a
two-byte load. Getting this wrong compiles cleanly to the wrong instruction, so
it reads as a codegen problem rather than a source bug. It has now cost a
diagnosis in `gen_compare_pred` (42 of 129 candidates) and again in
`gen_zero_fill`, and it is why `gen_zero_fill` went from 67.4% to 100%.

The related one: **a base register may hold a loaded pointer rather than be an
argument.** Assuming every base is an argument produced a nine-parameter function
in `gen_compare_pred` that compiled to reloading `x0` from the stack. Neither bug
raised an error; both were found only by disassembling the output.

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
- **The verification harness must compile with the flags the build uses.** This
  was violated and it was the worst bug found in this project, because it was
  invisible. `match_harness.CFLAGS` was missing eight flags that
  `build_nx64.CXXFLAGS` carried, and bisecting them puts the whole effect on
  **`-mno-implicit-float`**, which changes the order of two independent stores.
  **26 bodies were registered as matching that do not match the linked binary**
  (1 main, 3 sdk, 22 subsdk1). Every other flag defect recorded here made
  correct code look *wrong*, so something went red; this one made
  correct-looking code look *right* and all four modules reported 100.00% clean.
  `audit.py` now asserts `set(MH.CFLAGS) == set(B.CXXFLAGS)`, parsing both with
  `ast` rather than importing them. Full account in
  `decomp/docs/flag_fidelity.md`.
- **Two instruments disagreeing beats one instrument.** `check.py` compares
  against the linked ELF, so it never used the harness's flags — it disagreed by
  exactly one body, and that disagreement is the only reason the above was found.
  When a number looks too good, look for a second opinion computed a different
  way.
- **A memory barrier fixes store *scheduling* and not store *selection*.** The
  26 bodies needed `__asm__ __volatile__("" ::: "memory")` to pin the order of two
  independent stores. The `const-field-set` bodies needed a barrier and got
  nothing, because there the reordering happens at instruction selection. Same
  instrument, opposite outcome — identify the stage before reaching for it.
- **`decomp_project.py --all` must be followed by `prog_cmake.py`.** Skipping the
  second leaves 95 source directories with no `CMakeLists.txt` and the audit
  fails on it, which reads like a decomp regression and is not one.
- **`verify_matches.py` samples its failure output.** It printed 9 of the 26.
  Do not treat its mismatch list as complete; find the population by shape
  (`tools/fix_zero_store_order.py`) instead.
- **A "report" run must not mutate a tracked file.** `pawn_natives.py` wrote
  `data/pawn_natives.json` *before* its `--apply` check, so the line
  "(dry run; pass --apply ...)" printed after it had already overwritten the
  file. Running it the way its own docstring documents wiped 87 entries to `{}`.
  Nothing reads that file, so **no check failed** — the damage was visible only
  in `git status`. It now refuses to write unless `--apply`/`--emit`, and refuses
  to replace a populated mapping with an empty one.
- **`git add -A` after running project tools is how that would have shipped.** A
  sweep that runs every tool with no arguments is a good way to find crashes; it
  is also a good way to have tools write files. Check `git status` after any batch
  that runs tools, and `git checkout --` anything you did not mean to change
  *before* staging.
- **A number quoted in prose is stale the moment it is written.** `README.md`,
  `HANDOFF.md` and `decomp/docs/progress_weighting.md` all carried
  26,536 / 17.45% while `match_progress.py` said 26,562 / 17.47%. CI had a
  README drift gate and still did not catch it. `audit.py` now checks the
  `N / 152,062` and `N / 38,172,368` forms plus the README total row.
- **Re-baseline the MATCH gate after every registration, or it will reject
  improvements.** `auto_match` excludes bodies that are *already registered*, so
  the count **falls** when a batch lands even though nothing broke. It read 722 in
  `main` before the +79 straight bodies were registered and 716 after, with
  identical code. A change gated against the stale 722 looked like a −6
  regression and got reverted; it was never measured. Proved by counting
  directly: 722 `straight` bodies in `main` already registered, 337 still
  unmatched. This is the third distinct way that line misleads -- it also
  re-confirms existing records (reporting `MATCH 719` for a true delta of 31), and
  its candidate set shrinks over time so counts are not comparable across runs.
- **A bail count moving down while another moves up is not a regression.** The
  same bodies fail one step later. `generated` moves for the same reason. Both
  are diagnostics; only MATCH (freshly baselined) and `match_progress.py` decide.
- **A decline you cannot diagnose is not a decline.** `straight_line.py` raised
  `Bail` with no message at all 14 times, so 1,033 declined bodies were unreadable
  and three trivially fixable classes hid inside (218 zero-stores, 81
  argument-sources, 59 `ldur`/`stur`). Annotating the sites took candidates from
  24 to 357. Same root cause as `check.py`'s vacuous `True`: nobody could see
  inside the verdict.
- **A check that cannot fail is worse than no check.** `check.py` did
  `for ... in zip(...): ...` then `return True`, so an empty disassembly reported
  a *match*. 332 phantom bodies were ready to be registered as a fake +0.22%, and
  nothing downstream would have caught it. Fixed and falsified in both directions.
- **`auto_match.py`'s `MATCH n / m` line is not a delta.** It re-verifies bodies
  that are *already* registered and counts them again, so it happily reports
  `MATCH 327 / 344` for a shape where only 27 were new. It also declines to skip
  already-matched addresses. The only authority is `match_progress.py`, or a
  by-shape address diff against `HEAD`:
  `added = {r["addr"] for r in now} - {r["addr"] for r in git show HEAD:...}`,
  which also catches the reverse error — a merge that *drops* records.
- **`auto_match.py` has no `--apply`.** It writes whenever `--report` is given,
  merging into the existing registry. The module docstring advertised
  `--apply`, and passing it aborts argparse. Fixed in the docstring.
- **A verdict of "equal" must be reachable only from having compared something.**
  `check.py` had `for ... in zip(...): ...` then `return True`, so when the
  disassembly was empty the loop never ran and the function reported a *match*.
  332 phantom bodies, ready to be registered as a fake +0.22%. Fixed, and the fix
  is falsified both ways: the phantoms became "not comparable", and while the
  related length bug was still present the tool exited 1 on `main`, so its
  silences mean something. See `decomp/docs/check_py_vacuous_match.md`.
- **`zip` hides a length difference.** Truncating to the shorter side is how a
  body that stops one instruction early still compares equal. Both sides must be
  trimmed of alignment padding *identically* before the counts are compared, or
  every padded body looks one instruction too long — 370 in `main`, 7,843 in
  `subsdk1`.
- **A note that fires 31,000 times is not a note.** The length check reported on
  every unmatched function, where a stub against a real body is the expected
  case. `check_function` now takes `quiet`, used by the non-matching caller, for
  which a difference is normal and only a genuine match is worth printing.
- **Do not scrape prose for percentages.** The first version of that check
  flagged the README's per-module figures (11.47%, 11.92%), which are correct
  and are not claims about the total. A check that fires on correct text trains
  you to ignore it.
- **Return types do not appear in Itanium mangling.** Only parameters and class
  types. And a function with *no parameters* mangles with a trailing `v`, so the
  signature is `"v"`, not `""`. Getting this wrong reports
  `symbol not found / no code`, which reads as a broken shape rather than a
  mis-signature. **Four instances** — the fourth was
  `StraightLine._emit` in `tools/straight_line.py`, which hardcoded `"v"` only on
  the void path, so a no-argument function that *returns* a value got `sig == ""`
  and a malformed lookup key. It surfaced as exactly 7 of 84 bodies in
  `sl_verify` reported as `no-code-emitted`, which blamed the emitter when the
  emitter was fine. Fixed with `if not codes: codes.append("v")`.
- **A duplicate cannot be found by counting what a dict already collapsed.**
  `auto_match` and `sl_register` both read `data/matched_*.json` into a
  `dict` keyed by address, so duplicate records are silently merged and every
  consumer sees the right answer. Two identical `straight-line` records survived
  that way — `main` 0x540950 and 0x718f00 — until `tools/audit.py` counted the
  *raw lists*. Read the raw JSON to look for duplicates.
- **A check that cannot fail is worse than no check.** The first version of the
  duplicate check iterated `reported` (a dict) and so reported 0 duplicates while
  2 existed. It had to be rewritten against the raw JSON. When a check passes
  immediately on a corpus you know is dirty, suspect the check.
- **Filters read at the start of a run, writes at the end, are a duplicate
  generator.** `sl_register` filtered candidates against a snapshot read when the
  run began but wrote against the file re-read at the end, so anything written in
  between was invisible to the filter and visible to the writer. Both writers now
  re-check at write time; `tools/dedupe_registry.py` cleans up and refuses to
  drop records that disagree.

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
