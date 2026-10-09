# The ceiling is a compiler, not a technique

Measured over all 123,191 unmatched bodies:

    contain a call         93,113  (75.6%)   needs callee symbols
    contain a stack frame  97,547  (79.2%)   Clang 5.0.1 cannot reproduce
    contain adrp/adr       61,742  (50.1%)   needs a data symbol + link-time verify
    FREE of all three       3,272  ( 2.7%)

With 28,836 already matched, the byte-identical ceiling under vanilla Clang 5.0.1
is therefore about **21%** -- the matched count plus that 2.7%.

## Why the frame limit is permanent

The retail module was built with Nintendo's own compiler, not with Clang 5.0.1.
The giveaway is the prologue form:

    original:  str x19, [sp, #-0x20]!  ; stp x29,x30,[sp,#0x10] ; ... ; ldp x29,x30,[sp],#0x20
    clang 5:   sub sp, sp, #0x20       ; stp x29,x30,[sp,#0x10] ; ... ; ldp x29,x30,[sp,#0x10] ; add sp,sp,#0x20

`sp` is adjusted *inside* the access. Tested every optimisation level on this
compiler -- `-O0 -O1 -O2 -O3 -Os -Oz`, with and without
`-mno-omit-frame-pointer`, `-fno-omit-frame-pointer`, `-funwind-tables` -- and
**none** produces a writeback form. It is not a flag problem or a layout problem;
the frame size matched when one was forced. This compiler simply does not emit
that form.

So any body containing a frame cannot match byte-for-byte here, whatever the
translator does. That is 79.2% of what remains.

## What "100% fuzzy" means in this project

`tools/objdiff_report.py` states it directly: there is no notion of a partially
matched function -- a body either re-verifies byte-identically or it is not
counted, and `fuzzy_match_percent` is 1.0 or the proto3 default of 0.0.

So "100% fuzzy" and "100% byte-identical" are the same goal *here*, and the
ceiling above is the real one. Reaching a higher number requires either:

  * the actual compiler Nintendo used (not available; this is a retail binary), or
  * a *semantic* equivalence check that does not compare bytes -- a different
    metric, needing a disassembler-level comparison of effects rather than
    encodings. That is a real option and is not compiler-blocked; it is simply a
    different (and larger) project.

## The external repositories

Checked, none of which changes the picture:

  * `decryptu/pokeldn` -- LDN/Pia wireless protocol docs. Has a Sword/Shield
    section with disassembly citations and addresses, but only for the networking
    and trade slice. Useful for naming a few functions, not for lifting the pool.
  * `SakuraiTsubaki/PocketMonsters-UltraSun-Decompilation` -- 7 commits, 0 stars,
    "exact build identity: not selected". An empty scaffold with no source. No
    content to use.
  * `nicoruedaa/project-arceus` -- Legends Arceus, a Rust/Bevy port. Unrelated.
  * `kwsch/pkNX`, `Reisyukaku/PkmnFbs` -- save-data and FlatBuffer schemas. These
    are the ones that would help *semantic* recovery (naming structs and fields so
    families of functions can be rewritten at once). Valuable for that project,
    not for byte-matching.
  * `open-ead/nnheaders` -- NRO/NSO header layouts. Marginal; the modules are
    already extracted.

None of them supplies a data symbol table for the retail modules, which is the
specific missing input for `adrp`, and none supplies a compiler.

## Follow-up: the retail modules carry no data symbols at all

Checked the extracted ELFs directly:

    main .symtab: 104008 symbols
      STT_FILE 1, STT_OBJECT 3, STT_FUNC 104004
      the three objects are _text_start, _rodata_start, _data_start
    sdk .symtab: 26666 symbols
      STT_FILE 1, STT_OBJECT 3, STT_FUNC 26662

Those three are artifacts of this project's own `tools/nso_to_elf.py`, not real
module symbols. The retail modules are **stripped of data symbols** -- which is
why `data/vtables_*.csv` and `data/vfunc_names*.csv` are empty headers.

Consequence: the "go and find the data symbol table" route is closed. `nstool`
and `nx2elf` extract from the same stripped binary and cannot surface symbols that
are not in it.

## The remaining idea: synthesise the symbols

If the names do not exist, they can be *created*. Declare one symbol per address
that some `adrp` references, place it at that address with a linker script, and
let the compiler emit `adrp sym` / `ldr [sym, #off]` with the relocation folded.

First attempt, linking with `ld.lld`:

    adrp x8, #0
    add  x8, x8, #0
    ldr  x0, [x8]
    ret

against a target of

    adrp x0, #0x2496000
    ldr  x0, [x0, #0x400]
    ret

**This test is inconclusive and should not be read as a refutation.** The linker
script placed the section at the page base and then assigned the symbol at the
same offset, so the symbol landed at `0x2496000` rather than the intended
`0x2496400`, and the page-offset relocation had nothing to fold. The visible
`add #0` is an artefact of that, not necessarily of Clang's addressing-mode
choice.

But it does flag a second thing to check even after the placement is fixed: Clang
emitted three instructions where the original has two. If an explicit `add` is
required rather than folding the offset into the load's `:lo12:`, then this route
fails too, and for a different reason than the missing symbols.

Worth one careful follow-up with correct placement before deciding. It is the only
remaining idea that does not need the real NX compiler.

### Corrected result: the synthesis route is closed too

The inconclusive test was re-run with the symbol genuinely placed. Verified from
the linked ELF rather than inferred:

    sym_2496400   st_value=0x2496400
    _Z3f_1v       st_value=0x2496400

    adrp x8, #page
    add  x8, x8, #0x400
    ldr  x0, [x8]
    ret

against

    adrp x0, #0x2496000
    ldr  x0, [x0, #0x400]
    ret

Four instructions against three. Clang 5.0.1 materialises the page offset with an
explicit `add` instead of folding it into the load's `:lo12:` immediate, and no
amount of correct symbol placement changes that -- the offset is `0x400`, well
inside the load's range, so this is not a "does not fit" case.

So `adrp` has **two independent blockers**, either of which is fatal:

  1. the retail modules carry no data symbols to name (verified: 3 `STT_OBJECT`
     symbols, all artifacts of this project's own `nso_to_elf.py`), and
  2. even given a perfectly placed symbol, this compiler will not emit the
     addressing form the original uses.

Blocker 2 is the more fundamental one, and it is another instance of the same
lesson as the stack frames: **the retail code was built by a compiler whose
addressing-mode choices differ from Clang 5.0.1's.** Synthesising symbols cannot
bridge that. `adrp` is closed.

## cbz/tbz is not a reachable pool either

`cbz`/`cbnz`/`tbz`/`tbnz` appear in **78,660** declining bodies, which looked like
the last sizeable reachable instruction. It is not. Breakdown of that population:

    43831  call/3br/1ret
     5523  call/2br/1ret
     4802  call/1br/1ret
     4736  call/3br/0ret
     4156  call/3br/2ret

Every one of the top five shapes contains a **call**. Sampling confirmed it: the
bodies carry stack frames and `adrp` as well --

    mov x8, x0 ; ldr x0, [x0] ; str xzr, [x8] ; cbz x0, #0x2cc
    stp x22, x21, [sp, #-0x30]! ; ... ; blr x8

So this is the same population as everything else, not a new instruction gap.
`cbz` would need if/else lowering over bodies that also contain calls, frames
*and* `adrp` -- three proven blockers at once.

**The pattern in the census is worth stating plainly:** the top decline reasons are
not independent pools. They are the *same bodies* seen from different angles.
Ranking them and treating each as a work item counts the same 78,000 bodies
several times over.

## Re-measured ceiling (current registry, 28,942 matched)

    unmatched bodies             123,085
    contain a call                93,113  (75.6%)
    contain a stack frame         97,547  (79.3%)
    contain adrp/adr              61,742  (50.2%)
    FREE of all three              3,166  ( 2.6%)

Ceiling ~= **21%**, unchanged. The ~3,166 reachable bodies are worth about 2

## Where the remaining addressable population actually goes

The 21% ceiling is a bound, not a plan. Re-censused against the current
registry (28,942 matched, 123,085 unmatched), and then classified with
`auto_match.shape_of` -- the matcher's own classifier, not the side script's, since
`work/ceiling.py` and `auto_match.shape_of` are different classifiers and
comparing their populations is a category error:

    FREE of calls, branches, frames, adrp   3,166   (2.6%)
    ... actually matching a generated shape     801
    ... falling through to `straight`         1,463
    ... of those, TRANSLATED                   326   (before the multiply work)
    ... of those, DECLINED                   1,137

So the whole remaining byte-identical headroom is about 2,264 bodies, and fewer
than 400 of them could be expressed at all. That is the real size of the
opportunity, and it is why new *declaration* work has been landing so few
matches: the population to absorb it is nearly exhausted.

Declines among those 1,137, by cause:

    216  multiply family (mul/madd/msub/mneg/smull/umull/*addl/*subl)
    112  memory base is wzr/xzr -- an absolute address, not an argument
     35  fmov (FP move; the value model is integer-only)
     32  orr with 4 operands (a shifted-register form)
     32  sxtw used standalone rather than as an add/sub extend
     30  sbfiz
     29  add/sub applied to a `cset` value

Only the first is a large, purely-arithmetic win, and it is implemented. The
`wzr`/`xzr` base is the next real one -- an absolute address needs a data symbol,
which is the same blocker `adrp` has.

Note the arithmetic here is *cheap* and the ceiling is *compiler-bound*: adding
every mnemonic on this list to the translator moves the ceiling by at most
~1.4 percentage points, because 79.3% of what remains is frame-blocked and Clang
5.0.1 cannot emit the writeback `sp` form the retail code uses.

percent more; everything else is blocked by the compiler, the harness, or by
needing callee symbols this project does not have.

## Direct call resolution: 64% of `bl` sites resolve

Over every `bl` in every unmatched body:

    bl sites                              514,305
      -> resolves in functions.csv        329,700   (64.1%)
      -> unresolved                       184,605   (35.9%)

So `data/functions.csv` really is a usable callee table, as the plan assumed. The
unresolved targets cluster at the very end of `.text` (0x17e8f10, 0x17e8f30 in
`main`, whose `.text` ends at 0x17ed000) -- import thunks and PLT stubs for
library code outside the module. Those have no entry and cannot acquire one.

Implemented as `tools/call_resolve.py`, with a decoding trap recorded in its
docstring: capstone renders a branch operand as the **absolute target**
(`bl #0x1c0`). Treating it as PC-relative and adding it to the instruction address
gives 0x254 + 0x1c0 = 0x414, which is not a function start -- and that wrong
version resolves 2,398 of 514,305, a 0.5% rate that reads as a damning verdict on
the whole approach. Both were measured; only `int(op_str after '#')` is right.

## The open question for step 2

A `bl` clobbers x0-x18, so the caller sets up arguments in registers *before* the
call, and those moves are part of the byte sequence being matched. Emitting
`sub_YYYY(...)` therefore needs the callee's **arity**, which is not in the CSV --
the table has `decomp_name` but no C prototype. `f()` and `f(a,b,c)` make the
caller emit different setup, and only one will match.

Arity has to be inferred from the caller's own instruction stream, and whether it
is regular enough to infer is unmeasured. That is the next thing to check before
wiring resolution into the translator.

## `--report` hides every failure, so a candidate count is not a match count

`auto_match --report` writes only rows whose `verdict == "match"`. A candidate
that compiles and then mismatches leaves no trace in the report file, so the
report cannot answer "why did this one not match" -- the question it looks like
it exists to answer. `AM.verify(cands, batch, module)` returns every row with its
`verdict` and `reason`, and that is the only way to see the mismatch population.

This matters because the multiply work looked like a no-op for two full rounds:

    --shape none, main   before   MATCH 447 / 626
                        after    MATCH 447 / 663      <- more candidates, no gain

Identical match count with a higher denominator, which is the exact signature of
the earlier `bl` integration that really did yield zero. Reverting on that
evidence would have discarded working code.

It was not a no-op, and the way that was established matters more than the
result:

  * `AM.verify` on the single body `main@0x43870` returns `('match', '')`. It is
    generated, it compiles, and it matches.
  * The full-run verdict distribution was `447 match / 216 mismatch`. The 216 new
    candidates were not missing from the run -- they were *in* it, losing. A
    candidate count rising while the match count holds is ambiguous between
    "no effect" and "all new candidates fail", and only the verdict histogram
    distinguishes them.
  * Of those 216, `206` had a `*` in their source, and the leading reason was
    `orig ('smaddl', 'x8, w1, w8, x0') vs new ('mul', 'w8, w1, w8')`.

So the work was not inert, it was mis-typed, and the fix was three rounds of
narrowing it against the real compiler rather than against my reading of the C:

    (int32_t)m * (int32_t)56                     -> mul w8 ; sxtw x0, w8
    (int64_t)m * (int64_t)56                     -> smull,  but signed is lost
    (int64_t)(int32_t)m * (int64_t)(int32_t)56   -> smull   correct

Each step was chosen by compiling all candidate forms and reading the emitted
mnemonic, because the arithmetic was identical in all three and the *instruction*
was the only thing that differed. That is the only reliable way to settle a
Clang codegen question: the C reads the same and compiles differently.

Result on `main`: `447 -> 480`. Operand order was checked and is not a factor --
`acc + p`, `p + acc` and a product-first form all emit the same fused
instruction.
