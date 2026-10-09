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


## A decline message that names the wrong thing sends you after the wrong blocker

The census for a long time reported its largest remaining class as:

    90  memory base 'wzr' is not an argument register
    42  memory base 'xzr' is not an argument register

"Absolute address" -- which is the `adrp` blocker, the data-symbol problem, the
thing already known to need a linked symbol that does not exist for a stripped
retail module. So that was where the investigation went.

The instruction was not a memory access at all:

    csinv  w0, w8, wzr, eq      ; w8 ? 0 : w8

`wzr` is the *false arm of a conditional select*, meaning the constant 0. The
error came from `_value_arg` handing it to `arg_reg`, whose message asserted it
was a memory base regardless of what the caller was actually resolving. A
register named in an error that is not a register in that instruction is worse
than no message: it is a confident false lead, and it was the largest number on
the list.

The same bug appeared as `operand 'ne' is not an argument register` -- a
*condition code* reported as a register. `cinc Rd, Rn, cond` is the 3-operand
spelling; only the 4-operand `csinc` form was handled, so `ne` fell into the
operand slot.

`arg_reg` now reports what it was given, and treats a zero register as the
constant it is. The whole `wzr`/`xzr` class -- 132 bodies, the largest remaining
decline -- was arithmetic on a conditional select, and disappeared.

Corollary for the census: a decline *count* ranks the classes, but the message
decides what you go and investigate. Read the instruction before believing the
label.


## One invalid candidate costs a whole batch, and the symptom reads as a compiler disagreement

`sdk` stopped printing a MATCH line entirely: 248 candidates generated, no verdict.
The visible text was

    compile failed for the whole batch:
    [('collision across 125 candidates', ".../batch.cpp:516:104: error: cast from
     pointer to smaller type 'uint32_t' loses information
       *(uint16_t*)((char*)(a0) + 22) = (uint16_t)(... (uint32_t)a1 - (uint32_t)a0 ...
                                                   ^~~~~~~~~~~~")]

Read quickly, that is "the compiler disagrees with 125 candidates". It is not. It
is **one** candidate emitting C that does not compile, taking 124 innocent
bodies with it, and the module reporting nothing at all.

The offending body is four instructions:

    sub   w8, w1, w0        <- w0 is the void* parameter
    cmp   x1, #0
    csel  w8, wzr, w8, eq
    strh  w8, [x0, #0x16]
    ret

`(uint32_t)a1 - (uint32_t)a0` subtracts a pointer. The translator had no rule
against it because `_value_arg` produces `("argval", 0, "uint32_t")` *without*
consulting `ptr_args` -- traced, `ptr_args=set()` -- and the argument's pointer
role is only recorded later, when the `strh` resolves it as a base. By the time
the arithmetic runs, nothing in `state` says that register is a pointer.

`base_args_of()` now computes the set of base registers in one pass over the
body, before any value is built, and the arithmetic paths refuse to treat one as
an integer.

Two things worth recording about how this was found:

  * It was **pre-existing at HEAD**, not introduced by the work in progress.
    Confirmed by stashing every change and re-translating the body -- HEAD emits
    the same invalid C. The `csinv` work merely made the body *reachable*,
    turning a latent defect into a live batch failure. A latent bug that new
    coverage exposes is still a bug you own the moment it fires.
  * The first two attempts at the fix failed, and both looked plausible:
    guarding `_b[0] == "arg"` did nothing because the value is `argval`, and
    guarding on the value's declared type did nothing because the type was
    `uint32_t`. Only reading the traced `_value_arg` output -- rather than
    reasoning about which guard *should* work -- showed that the evidence needed
    was not in `state` at all.

The general rule this reinforces: a decline is one body; a compile error is a
batch; a missing MATCH line is neither and must be read as "the generator emitted
invalid C", never as "the compiler disagreed".


## An autonomous loop that commits work-in-progress breaks `git stash` as a measurement tool

`keepalive`'s `sync()` commits every tracked modification whenever the audit
passes, and pushes. That is correct for unattended operation and actively harmful
for an A/B measurement:

    git stash push -- tools/straight_line.py     # -> nothing stashed
    ... run the baseline ...
    git stash pop                               # -> "No stash entries found."

Both "baseline" and "with" then measured identical code and returned identical
numbers, which read as a clean result and were not one at all. The tell was
`git diff --stat` showing only the doc file mid-measurement: the translator had
been committed by five consecutive ticks (`2074`-`2078`) and there was nothing
left to stash.

The rule: **stop the loop before any A/B, and compare against a commit rather
than a stash.** `git checkout <pre-change-commit> -- <file>`, measure,
`git checkout HEAD -- <file>`. A stash is a working-tree operation and the loop
edits the working tree.

This is a general hazard worth naming: an unattended agent sharing a tree with an
attended one will commit or push whatever is in flight. Any measurement that
depends on the tree staying put has to stop the writer first, and the writer is
the thing that is least likely to be considered part of "the experiment".


## Deferred stores do NOT reorder loads -- a guard built on that premise cost 70 matches

I added `check_store_order()` on the reasoning that stores are emitted after
every load expression, so a body that loads an address it also writes would read
the *new* value:

    ldr w8, [x0, #0x10]   ; w8 = the OLD value
    str w8, [x0, #0x10]   ; overwrite it
    return w8             ; emitted after the store -> reads the NEW value

**That reasoning is wrong.** C evaluates a store's right-hand side completely
before the assignment, so the generated source is faithful regardless of where
the store statement is emitted:

    *(uint32_t*)(a0+16) = (cond ? (*(uint32_t*)(a0+16) & M) | 2
                                :  *(uint32_t*)(a0+16) & M);

The loads are not independent of the store -- the store *depends* on them -- so
there is no reordering for Clang to take, and it does not: it CSEs the repeated
loads into the single load the original has.

Measured, main, `--shape none`, everything else identical:

    baseline (adc3b607)          480 / 663
    new work + guard             441 / 644     <- the guard costs 70
    new work, guard call removed 511 / 753     <- +31 over baseline

The guard declined **203** bodies. It cost 70 matches while the rest of the work
gained 31, so reading only the combined number made a net +57 improvement look
like a net -45 regression -- and nearly caused a revert of working code.

Two process failures in one:

  * The premise was backed by a scan that skipped bodies `shape_of` recognised
    and reported "0 affected". The 203 bodies it declined were never in that
    scan's scope, so the measurement structurally could not observe the case.
    A safety argument resting on a measurement that cannot see the danger is not
    a measurement.
  * The regression was visible only as a *net* number. Isolating one change at a
    time is what made it attributable at all.

Reasonable instinct, wrong C semantics. The general rule: when a guard would
decline hundreds of bodies on a semantic argument, that argument has to earn a
measurement before it earns a refusal.


## A guard that exists in one call site is a coincidence, not a fix

The pointer check (`base_args`) was written for `add`/`sub`, after a candidate
doing `(uint32_t)a1 - (uint32_t)a0` killed 125 sdk candidates. The next handler
I added -- division -- re-introduced the identical defect:

    *(uint32_t*)((char*)(a0)+132) = (... (uint32_t)((char*)(a1) - 1) / ...

    error: cast from pointer to smaller type 'uint32_t' loses information

and took **700+ main candidates** with it, so `main` reported no MATCH line at
all. Same cause, same shape, different handler, and the guard was already written
and justified one function away.

The lesson is not "add more guards". It is that a precondition which only one
call site happens to apply is not a precondition -- it is a coincidence that
covered the path that happened to be tested. Both arithmetic handlers now consult
the same set, and the reasoning lives next to the check rather than at the call
site that first needed it.

The margin is worth stating plainly: one missing guard separates "declines one
body" from "loses the module'. Every hand-written verifier here should be read
with that in mind, because the failure is loud but the *cause* is one handler
away from the fix.


## Inlining needs a statement-level translator, not a caller-side trick

The call population is the largest thing left that is not blocked on data
symbols. Measured over framed bodies with a single `bl`, no `adrp` and no
branch:

    5,415   framed, one resolved `bl`, no adrp, no branch
    3,868   callee not in functions.csv (import thunks; matches the 35.9% rate)
    1,466   callee exists but is not inlinable -- it calls, or references data,
           or uses vector registers, or is too large
      81   callee is an inlinable leaf

So a depth-1 inliner is worth ~81 bodies. Extending to recursive inlining would
also reach the 1,466, but that is the wrong next step, because inlining cannot be
written against the current translator at all.

`StraightLine.translate()` returns **one composed function string** --
declarations plus statements, joined and terminated -- and there is no API that
hands back the statement list alone. A caller-side inliner therefore has nothing
to splice into: it can translate a callee, but only into a complete second
function.

The options, and the trade:

  * Give the translator a statement-level entry point, so a callee contributes
    statements to the caller's stream with the caller's parameter bindings.
    Clean, but it touches the code every existing 29,359 matches depend on, and
    the emit path is exactly where the subtle decisions live -- argument
    naming, pointer roles, deferral of stores.
  * Emit the call as a real C call to a generated wrapper for the callee, and
    teach the emulator to redirect it to the retail callee's bytes. No translator
    change, and the emulation side already works (tools/call_emu_test.py). This
    is the cheaper route and the one worth taking.

The second is preferred and is small: the harness already proves a relocated
`bl` reaches a mapped callee and that x30 must be restored on return. What it
needs is the same treatment for a *candidate* whose call target is a mangled C
symbol rather than a patched branch.

Recorded here because the obvious plan -- "just inline it" -- costs a refactor of
the most delicate code in the project, and knowing that before starting is worth
more than the 81 bodies.


## Relaxing a parser can *steal* bodies from the path that already had them

`[x0, x8]` is a real ARM64 addressing form -- a bare register offset with no
extend -- and Clang 5.0.1 emits it for `*(uint32_t*)(base + off)`, verified. The
decline census listed it: 29 bodies reading

    load operand '[x0, x8]' is not a [base] or [base, index, ext] form

which reads as though the *shape* were unmodelled. So `parse_mem_idx`'s regex was
relaxed to make the index's extend optional, giving a bare register offset with
scale 1.

It measured **-38 matches** (main 525 -> 488, subsdk0 41 -> 40) and the candidate
count *fell* (790 -> 781). A falling candidate count is the tell: something that
used to generate stopped generating.

`mem_reg_offset` already handled this form, and handled it better. When the offset
register holds a **constant** the whole address is known at compile time:

    mov  w8, #0x4e5c
    str  wzr, [x0, x8]        ->  *(uint32_t *)((char *)a0 + 0x4e5c) = 0

That is an ordinary `[base, #off]`, not a runtime index. The load path tries
`parse_mem_idx` **first** and only falls back to `mem_reg_offset`, so relaxing the
first parser took those bodies away from the second and rewrote a compile-time
displacement into a runtime index -- different semantics, different C, fewer
matches.

The general lesson, which is the fourth time this session that relaxing a rule has
had to be justified against the path it feeds:

  * "The parser rejects this" is not the same as "this is unmodelled". Something
    downstream may already handle it, and a downstream handler is often the more
    specific one.
  * A candidate count that *falls* while you add support means you have taken
    bodies away from somewhere. Read the denominator before reading the numerator.
  * The message said "not a [base] or [base, index, ext] form" -- which names the
    parser, not the model. That phrasing sent this at a parser when the gap was a
    *precedence* one.

The 29 bodies are real and still unclaimed, but claiming them means teaching
`mem_reg_offset`'s caller to use a runtime index when that path declines -- not
loosening the parser that runs before it.
