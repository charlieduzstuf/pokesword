# The exactness bug: where the generators were leaving functions on the table

The biggest win this session was not a new idea. It was noticing that several
generators test for an **exact instruction count** where a **pattern** belongs,
and that one classifier computed a value no branch ever read.

## 1. A computed-but-never-consulted variable

`scan_shapes.classify_shape` computed

```python
tail = bool(mn) and mn[-1] in ("b", "br")
```

on line 75, and then returned `"trivial-1"` for *any* single instruction on line
79-80. No branch in the function consulted `tail`. So all 1,043 one-instruction
tail-call thunks were labelled `trivial-1`, a bucket `auto_match` dispatches
nothing on.

Moving the tail test above the `n == 1` test moved `trivial-1` from 1,043 to 6
and created `tailcall` at 1,038.

## 2. `n == 2` where "two or more" belongs

`auto_match.shape_of` recognises its accessor shapes with exact counts:

| shape | test | unreachable without |
|---|---|---|
| `getter` | `n == 2 and ldr;ret` | `ldr x8,[x0,#0x88] ; ldr w0,[x8] ; ret` |
| `setter` | `n == 2 and str;ret` | `str xzr,[x0,#8] ; str wzr,[x0,#0x10] ; ret` |
| `copy2` | `n == 3 and ldr;str;ret` | `ldp ; stp ; ret` |

A two-level field read is as mechanical as the one-level read the getter
generator already handles, and there were 176 of them in `main` alone. Adding
`getter-chain` and `setter-chain` recovered **519 functions**.

| generator | main | sdk | subsdk0 | subsdk1 | total |
|---|---|---|---|---|---|
| `getter-chain` | 106 | 126 | 9 | 81 | **322** |
| `setter-chain` | 108 | 55 | 9 | 26 | **198** |
| `copy-chain` | 1 | — | — | — | declined, see below |

`copy-chain` was written, measured at **1 of 300**, and left declining. The diffs
are almost all one thing:

```
insn 0: orig ('ldp', 'x8, x9, [x1]') vs new ('ldr', 'x8, [x1]')
```

Two scalar dereferences at adjacent offsets do not fold back into a pair load.
Clang only emits `ldp` for a single assignment of a 16-byte struct, so the pair
forms need a real struct layout — and guessing field widths there is exactly the
plausible-but-wrong body this project refuses to register. Declining is the
honest outcome, and it is documented in the generator so the next person does not
re-derive it.

## 3. The census that could not see control flow

Before building anything I sized the prizes, and the sizing was wrong. A family
classifier reported **`fp`: 6,980 in `main`, "the largest untapped class in the
whole project"** — and I came within one edit of writing a float generator
against it.

It never tested for branches or calls. Sampling six of the 6,980:

```
sub_5480c0   90 instructions, cbz / b.hi / br / a jump table
sub_2f34e0   54 instructions, b.hs / b.eq / b.ne / b.lo / bl
sub_daae0   390 instructions, four bl calls
sub_121880  191 instructions of genuine straight-line SIMD
```

Three of the four are `branchy-calls` — the category already known to need hand
decompilation. They came out as "fp" because they end in `ret` and touch a float
register.

With the guard added, `fp` falls to **559 in `main`**, of which 4 are already
matched. The real prize all along was 559, not 6,980.

**A family census that cannot see control flow will always report the
branch-heavy code as the cheapest remaining win, because branch-heavy code is
most of the binary.** That is worth more than the number it produced.

## 4. A gain I reported that was not one

The tailcall harvest printed `MATCH 5083 / 5083 = 100.00%` and I wrote it up as
+9,083. It was zero. Both `--report` runs converged on the same 19,832 records
("5083 matched, 14749 carried over"), and `TOTAL matching` stayed at 24,703. The
thunks had already been matched under another shape; re-matching them is not new
matching.

The mistake was reporting a batch's *hit rate* as a *delta* without re-reading
the registry total. Every later claim in this session was checked the other way
round — take the count first, then confirm the count moved:

    getter-chain   24,703 -> 25,025   registry 19,832 -> 19,938
    setter-chain   25,025 -> 25,222   registry 20,039 -> 20,229

## Bugs found in the new generators themselves

Every one of these produced a confident wrong answer first.

| bug | symptom | cost |
|---|---|---|
| terminator checked against the sliced body | `body[-1] != "ret"` after `body = ins[:end-1]` | 260 offered, 260 declined |
| arguments in `roles`, names in `env` | `ptr_expr` returned `None` for every base | 260 offered, 260 declined |
| hand-returned mangling `sig` | harness looked for `_Z8f_...Pv`, found `a8`-style name | 323 generated, 0 matched, reported as mismatch not compile error |
| loaded values declared as parameters | `ldr x8,[x0,#0x2cf0]` became a stack spill | 722 generated, 0 matched |
| `build_params` called before the store pass | emitted `a8` when only `a0` declared | 6 candidates, compile error |
| shape test required all of `mn[:-1]` to be loads | false by construction for a copy | `copy-chain` matched 0 functions, never appeared |

The `sig` one is the nastiest: it reported `0/107 = 0.00%`, which reads as "the
codegen is wrong" when in fact nothing was compiled at all. A compile failure and
an instruction mismatch are different problems and the harness's summary line
conflates them.

## 5. A new shape that stole from an old one

Adding the chain shapes made the project **worse**, and only the third check
caught it:

| run | main records | `verify_matches` mismatch |
|---|---|---|
| before the chain shapes | 20,147 | 27 |
| after, `--all-shapes` | 20,047 | 42 |

100 verified functions lost and 15 new mismatches, in the same run that was meant
to add hundreds.

The cause is ordering. The chain shapes are tested *before* the generic
`straight` test in `shape_of`, so they capture bodies `straight` used to handle.
A body like

    ldr x8, [x0]
    ldr x9, [x1]
    ret

is two independent reads, not a chain, and `gen_load_chain_ret` correctly
declines it — the final load does not target a return register. Declining is
right; *dropping* the function is not. Nothing retried it, so it fell out of the
registry entirely.

The fix is a fallback in `collect`, not a reordering in `shape_of`:

```python
if made is None:
    if sh in CHAIN_SHAPES:
        made = gen_straight(ins, end, ident)
        if made is not None:
            sh = "straight"
    if made is None:
        skipped[sh] += 1
        continue
```

The specialised generator keeps first refusal — it produces far more readable
bodies — and `straight` catches whatever it cannot express. `shape_of` cannot do
this itself, because it has no way to know whether its generator will decline.

**A shape that declines must hand the function back, not swallow it.** Declining
is the honest response to something inexpressible; dropping it silently is how a
verification pass starts reporting regressions that look like noise.

## 6. The `ldp`/`stp` census, and what it corrected

I wrote `tools/copy_pair.py` expecting ~290 struct copies and got a different
answer twice.

**First count was wrong.** A census of "bodies containing `ldp`" reported 568.
Re-bucketing those 568 by `shape_of` gave the truth:

| shape | count |
|---|---|
| `setter-chain` | 246 |
| `compare` | 21 |
| `pair-ret` | 11 |
| no shape at all | ~290 |

The 568 were only the *pure* load/store ones. Bodies using `ldp`/`stp` for
register save/restore number **95,845** — that is what `sub sp` / `stp x20, x19`
looks like, and it is most of the binary. A census that counts an instruction
without counting what it is being used for will always be off by two orders of
magnitude here.

**Second: those ~290 are not struct copies.** Sampling them:

```
sub_19f5c0   ldr x8,[x1] ; str x8,[x0] ; ldr w8,[x1,#8] ; str w8,[x0,#8] ;
             ... 17 fields copied from x1 to x0 ...
             str xzr,[x1] ; str wzr,[x1,#0x18] ; stp xzr,xzr,[x1,#0x20] ; ret
```

That is a **copy-constructor followed by a zero-fill**: field-by-field copy, then
initialisation of the source's own fields. The `stp` forms appear among the
*zero* stores, not in any contiguous aggregate, so there is no whole-aggregate
assignment to express. It needs a generator that carries load semantics through
to the stores while respecting interleaving order — real work, and the shape is
registered as declining rather than filled with something plausible.

**What did work: `pair-ret`, 11 functions at 100%.**

```
ldp  x8, x1, [x0, #0x50]
mov  x0, x8
ret
```

AAPCS64 returns a 16-byte aggregate in x0 and x1. The compiler materialises the
value through x8 and relocates the first half, so the sequence is fixed and the
source is `return *(struct { uint64_t f[2]; }*)((char*)p + 0x50);`. It reached no
shape because it has a `mov` in the middle — not all-loads, not load-then-store.

The first attempt emitted a **shared** `struct pair16_` tag in every function, so
two candidates in one batch collided:

```
error: redefinition of 'pair16_'
  note: previous definition is here
```

and the whole batch failed, not just the colliding pair — 7 of 7 candidates lost
on a shape that generates correctly. Tags are now derived from the identifier.
**A per-function type declaration must be unique per function**, because
`compile_batch` puts many functions in one translation unit.

## Result

| check | result |
|---|---|
| batch recompile, all shapes | **25,228 / 152,062 = 16.59%** |
| independent re-verification | main 19,970/20,012 · sdk 3,046/3,049 · subsdk0 854/854 · subsdk1 1,285/1,285 |
| full project build | links clean, 152,115 symbols |

Up from 24,703 (16.25%) at the start of this round: **+525**, all from the two
chain generators.

### The 42 mismatches, resolved

`verify_matches` reported **mismatch=42** in `main`, up from 27 before this round,
and I could not account for it. It is now accounted for:

```
verdicts: {'match': 19970, 'mismatch': 42}
failures by registry shape:      tailcall 42
failures by (shape, body contains a call):
                                 tailcall  call=False  42

sub_1e0 shape=tailcall: insn 0: orig ('b', '<target>') vs new ('ret', '')
```

**All 42 are `tailcall`, and every emitted body contains no `b` instruction at
all** — a bare `ret`. That is the artefact `verify_matches` already documents: a
thunk whose destination is also a candidate in the same batch has its call
optimised away, because an empty `g` makes `void f() { g(); }` fold to a `ret`.

So the rise from 27 to 42 is the 5,083 `tailcall` records registered this
session, of which 42 land in a batch with their own destination. It is not a
defect in either new chain generator: `getter-chain` (106), `setter-chain` (108)
and `copy-chain` (1) account for **zero** failures. The real build is unaffected,
because there each function is a separate external symbol and the branch cannot
be elided.

### `--from-elf`: one bug fixed, one gap still open

`verify_matches --from-elf` reports **73.96%** for `main` against the batch
path's 99.79%. Part of that was a real bug, now fixed:

`MH.compare` truncates the *original* to its effective length but the ELF path
never truncated the *candidate*, so every instruction past the original's end
counted as "extra trailing instruction(s)". That produced 3,025 `len=` failures
in `main` alone. One line fixes it:

```python
mine = mine[:end]        # the batch path gets this free; a whole-image
                         # disassembly does not
```

| module | before | after |
|---|---|---|
| main | 73.96% (3,025 `len=`) | **89.05%** (0 `len=`) |
| sdk | 60.41% | 65.33% |
| subsdk0 | 73.65% | 75.29% |
| subsdk1 | 72.14% | 82.26% |

**A verdict of `len` was never a statement about the candidate.** It was a
statement about the harness comparing two differently-bounded sequences.

What is still open: the ELF path reports 2,194 `mismatch` in `main` where the
batch path reports 42. That gap is unexplained. My first explanation — that
`prog.elf` links all five modules so a symbol's address there is not its address
inside `main` — was **wrong**, and I checked: `linked_symbols` keys on the module
address from `data/functions_<module>.csv`, so the original bytes were always
fetched from the right module. I asserted an address-space bug, edited the
docstring to explain it, and was then forced to retract it by looking at
`linked_symbols`. The docstring now says the gap is open rather than asserting a
cause it cannot support.

So: `--from-elf` is materially better and still not trustworthy as a quality
figure. Every number this project reports comes from the batch-recompile path,
which is the one the matching decisions are made with and the one that agrees
with the linked build's link step.

The `straight` fallback I added for the chain shapes turned out to change nothing:
all 262 bodies the chain generators decline are also declined by `gen_straight`.
It is kept because it is the correct structure — a shape that declines must hand
the function back rather than swallow it — and because the next chain generator
will need it.

And the "100 records lost" I read into the first `--all-shapes` run was not a
loss at all. The registry held 20,147 records while only ~20,039 emitted bodies;
the run shed 100 records that were never producing output. Emitted-body count
went 20,039 → 20,040. That is the third time in this project that a registry
count and a body count disagreed, and the lesson is unchanged: **read the count
that the artefacts are built from**, not the count the registry reports.

## Population correction

902 entries classified `empty` — bodies that disassemble to nothing — were
removed from the population after being shown not to be functions:

- only **two** distinct byte values across all 902 (`fedeffe7` × 901)
- `0xe7ffdefe` has top byte `0xe7`, matching **no** A64 major opcode; LLVM
  refuses every one
- all 1,804 surrounding words *do* decode, so these are data slots inside code
- **zero** branch targets across 738,737 branch sites land on any of them

901 byte-identical words cannot be 901 distinct functions.

**But `decomp_project.py --all` regenerates `functions.csv` from the module
manifests, which reverted the exclusion.** The 902 are back in the 152,062
denominator. The finding stands and is recorded here; wiring the exclusion into
`decomp_project.py` rather than into `functions.csv` is the outstanding fix, and
until then the honest denominator is 152,062, not 151,160.

## Where this leaves the remainder

With control flow accounted for, the unmatched population splits as:

| family | left | tractable? |
|---|---|---|
| `tailcall` | 1,004 | no — their `b` targets are not function starts, so they are not thunks |
| `getter` | 287 | mostly n≥3 chains, some indexed forms `parse_mem` cannot express |
| `fp` | 555 | needs a float generator |
| `setter` | 270 | the optimiser merges adjacent zero stores into `movi` |
| `copy` | 1,150 | needs struct layouts for the pair forms |

and 115,661 `branchy` / `branchy-calls` bodies that need hand decompilation. The
automation is not exhausted — there is another ~1,500 functions in named classes
here — but the classes are getting thin, and each one now costs more than the
last.