# What is still needed

This is the list asked for at the start of the project and not produced until
now, because producing it honestly requires knowing which items are blocked on
artifacts, which are blocked on skills, and which are simply large. Those are
three different problems with three different answers, and collapsing them into
"hard" is how a project stops making progress while looking busy.

**Current: 25,271 / 152,062 = 16.62%**, verified three ways.

```
shape            count   share        shape              count  share
ret_only          6941   27.5%        setter-chain        198   0.8%
tailcall          5241   20.7%        straight-line        36   0.1%
getter            3253   12.9%        fp-conv-store        29   0.1%
mov_ret           3070   12.1%        handwritten          28   0.1%
copy2             2897   11.5%        pair-ret             11   0.0%
ptr_add           1093    4.3%        copy-chain            6   0.0%
setter            1082    4.3%        float_const           5   0.0%
straight           708    2.8%        fp-compare            3   0.0%
compare            356    1.4%        TOTAL              25279
getter-chain       322    1.3%
```

Verification: batch recompile 25,271 · independent re-verification main
19,970/20,012 (99.79%), sdk 3,046/3,049 (99.90%), subsdk0 854/854, subsdk1
1,317/1,317 · full build links clean at 152,115 symbols.

`main`'s 42 mismatches are entirely the documented tail-call artefact: every one
is a `tailcall` whose emitted body is a bare `ret`, because its destination was an
empty function in the same batch. Measured, not assumed —
`failures by (shape, body contains a call): tailcall call=False 42`.

---

# What I need and do not have

The concrete asks, in the order they would unblock the most. Each says what it
would buy, so it can be judged against the cost of getting it.

### 1. A relocated memory image — the single highest-value item

**Ask:** a memory dump of the game's process after static initialisation has run,
or an emulator build that can export it.

Everything about *values* in data regions is blocked on this one artifact. NSO
modules carry no `DT_RELA` — confirmed by scanning `.dynamic` for tag 7 — and all
29,270 GOT slots are zero in the decrypted file. The retail NSP will not yield it
either: `header_kek` derives cleanly from `prod.keys`
(`bc9474c034b89718c8ecd18be61653e1`) but the final step needs a `rights_id` that
lives at offset 0x222 of the plaintext header, and opening the header is what the
key is for.

**Buys:** 29,270 GOT slots become values rather than addresses; 493 layout runs
and 147 field-offset pages become real structures; the 993 RTTI descriptor targets
stop being `.bss` zeros and vtables become findable; `poke_data.prmb` and
`trainer_data.prmb` (1.6 MB) get their layouts from the code that fills them.

**I cannot get it myself.** An emulator is installed and launches, but a dump needs GUI
interaction plus an export facility this build does not expose. No permission
grant supplies it — the blocker is a missing tool path, not a missing capability.

### 2. Someone who can read the game's data tables by hand

**Ask:** time on the seven `.prmb` tables, or the schemas for them.

545 distinct asset keys are already recovered, and `battle_talk.prmb` is
understood well enough to read records (40-byte stride, 96% of adjacent-key
gaps). What is missing is `poke_data.prmb` — 1.18 MB, the species table — and
`trainer_data.prmb`, 423 KB. The 54 pkNX `.fbs` files cover `Placement`,
`Encounter`, `Archive`, `PokeResource` and **none of them these seven battle
tables**.

**Buys:** species stats, learnsets, evolution, trainer rosters and AI flags —
roughly 1.6 MB of structured game data that no amount of decompiling the code
will produce.

### 3. Time, and someone willing to do the arithmetic

**Ask:** the 115,661 `branchy`/`branchy-calls` bodies, done one at a time.

This is ~19,000 hours at a realistic ten minutes per verified body. It is not
parallelisable in the way the automated work was: two people cannot usefully split
a 390-instruction function, and the functions average well over 50 instructions.
**Buys:** everything above ~17%. There is no route past this number that I have
found.

### 4. A second opinion on two open questions

**Ask:** someone to look at these with fresh eyes, because I have been inside them
too long.

- **`verify_matches --from-elf` disagrees with the batch path** — 2,194
  mismatches against 42. The `len=` bug is fixed (main 73.96% → 89.05%) but this
  gap is unexplained. Until it is, `--from-elf` must not be quoted as a quality
  figure.
- **The `--from-elf` address question I got wrong.** I asserted an address-space
  bug, wrote it into a docstring, then found `linked_symbols` keys on the module
  address and retracted it. The docstring now says the gap is open rather than
  asserting a cause. I would rather a second reader check that retraction than
  take my word for it.

---

# For completeness: the rest

The remaining tractable classes are listed in section B below and the blocked
artifacts in section A. Both are ordered by what they would unblock.



**1. A relocated memory image.** Everything about *values* in data regions is
blocked on this. NSO modules carry no `DT_RELA` — confirmed by scanning
`.dynamic` for tag 7 and finding nothing — and every GOT slot is zero in the
decrypted file. The retail NSP is card-descriptor form: `header_kek` derives
successfully from `prod.keys`, but the last step needs a `rights_id` that lives
at offset 0x222 of the plaintext header, and opening the header is what the key
is for. The `.cnmt.nca` that would supply it is itself card-locked.

*What unblocks it:* a memory dump from a running process, or an emulator that
applies relocations and exports memory. An emulator is installed and launches
(v0.0.10, responds, complete `prod.keys`), so the missing piece is a
memory-export path or a human at a GUI — not a permission.

**Consequence if obtained:** 29,270 GOT slots stop being addresses and become
values; the 493 layout runs and 147 field-offset pages become real structures;
the 993 RTTI descriptor targets stop being `.bss` zeros.

**2. Schemas for the seven `.prmb` battle tables.** 2,986 asset keys recovered;
545 distinct. `poke_data.prmb` (1.18 MB) and `trainer_data.prmb` (423 KB) hold
the species and trainer tables. The 54 pkNX `.fbs` files in `vendor/pkNX/` cover
`Placement`, `Encounter`, `Archive`, `PokeResource` — **none covers these**.
*What unblocks it:* the schemas, or hand-derived layouts from the field widths.

**3. Vtables.** Measured unrecoverable three independent ways; longest
consecutive run of code pointers in read-only data is **1**. RTTI does not
rescue it — the 993 typeinfo pointers found are a `dynamic_cast` descriptor
table (`[typeinfo][data_ptr][0x403]`), not a vtable, because no code pointer
follows the typeinfo. *What unblocks it:* the relocated image, again.

---

## B. Needs a generator that does not exist yet

Each of these was measured before being listed. None is "impossible"; each is
real work with a known shape.

| item | population | why it is not done |
|---|---|---|
| `fp` — matrix/SIMD kernels in `main` | ~242 | **Measured, not estimated.** A corrected census (control flow excluded) puts `fp` at 445 total, not the 6,980 an unguarded census claimed. 32 of subsdk1's are now done via `fp-conv-store` and `fp-compare` at 100%. What remains in `main` is `fmul`/`fadd`/`fsub` matrix work with `tbl`/`ext` byte shuffling: 102 bodies ≤12 instructions, 61 over 40. The short ones are translatable; the long ones are hand-tuned kernels. |
| `copy` — copy-constructor + zero-fill | ~1,150 | confirmed by sampling: 17 fields copied then the source's own fields zeroed, `stp` forms among the zero stores. Needs load semantics carried through to stores with interleaving preserved. |
| `getter` leftovers | 287 | declines for reasons not yet isolated. **Indexed addressing is only 41 functions** across all four modules — measured, not worth a generator on its own. |
| `setter` leftovers | 270 | the optimiser merges adjacent zero stores into `movi v0.2d`; the original does not. Needs a way to defeat that merge. |
| `copy-chain` pair forms | 1 | 299 of 300 missed. Clang emits `ldp` only for a whole-aggregate assignment, and the field layouts are not recovered. Declining is correct today. |
| `sdk` float scalers | ~17 | `ldr s0,[x0] ; ldr s1,[const] ; scvtf ; fmul ; ret` — getter-chain plus one multiply by a constant loaded from `.rodata`. Needs a float-constant materialiser that reads the constant's value rather than its address. |

---

## C. Needs a human, and is most of the project

**115,661 `branchy` / `branchy-calls` bodies — 91% of what remains.**

These have real control flow and real calls. Matching one means recreating the
compiler's register allocation and instruction scheduling deliberately, because
any C++ that computes the same answer can schedule differently. At ten minutes
each — a realistic figure for one verified body — that is **~19,000 hours**.

There is no automation for this class that I have found, and the reason is
structural rather than a tooling gap: the search space of register assignments is
exponential in the number of live values, and matching is a needle-in-haystack
problem in which a single wrong allocation produces a plausible-looking body that
differs in one instruction. Every generator that worked this session did so
because it had a *specific, measurable* defect behind it:

- `classify_shape` computed `tail` and no branch read it
- `shape_of` tested `n == 2` where a pattern test belonged
- `gen_pair_ret` emitted a shared struct tag, colliding within a batch
- the ELF verifier never truncated the candidate to the original's length

Each was found by a check running over the whole population. None of those
defects exists in the branchy population, because it is not misclassified — it is
correctly classified as work.

---

## D. Smaller open items

**The 902 non-function entries are still in the denominator.** They were proven
not to be functions: only two distinct byte values across all 902
(`fedeffe7` × 901), LLVM refuses every one, all 1,804 surrounding words decode,
and zero branch targets across 738,737 sites land on any of them. 901
byte-identical words cannot be 901 distinct functions. But
`decomp_project.py --all` regenerates `functions.csv` from the module manifests,
which reverted the exclusion. **The fix belongs in `decomp_project.py`, not in
the CSV** — until then the honest denominator is 152,062, not 151,160.

**`verify_matches --from-elf` still disagrees with the batch path** — 2,194
mismatches where the batch path reports 42. The `len=` bug is fixed (main
73.96% → 89.05%) but this gap is unexplained. Do not quote `--from-elf` as a
quality figure until it is. Every number here comes from the batch-recompile
path, which is the one the matching decisions are made with.

**14,709 pokesword names** need call-graph propagation with confidence scores.
`tools/name_propagate.py` exists and honestly reports **0**: its one sound rule
needs a donor call graph to anchor both builds through, and pokesword does not
ship one. The earlier version of that tool reported 6,176 propagated names; all
6,176 were fabricated — 5,239 of them gave a callee its *caller's* name, which
would have written two different functions under one identifier. Reverted, and
`propose()` now returns `None` unconditionally.

**14,492 functions named from an asset key** — reverted. All were confirmed
absent from the 38,727-name donor, so all were fabricated rather than donated.
Recorded because the failure mode matters: a function that *mentions* a string
is not *named by* it, and the two worst names (`Set_Volume_m96_Field_Music`,
`a_btl36_vs02` — applied for mentioning a *neighbouring* key) read exactly like
real decompilation names.

---

## What I would do next, in order

1. **Wire the 902 exclusion into `decomp_project.py`.** Ten minutes, and it makes
   the denominator honest rather than flattering.
2. **Build the `fp` generator.** ~1,036 functions, the largest untouched class,
   and unlike the branchy population it is *translatable* — it is the same kind
   of work as the chain generators, just wider.
3. **Hand-decompile from the top of `main` downward, one function at a time**,
   registering each through `tools/add_handwritten.py` so it is verify-gated.
   This is the 19,000 hours, and it is the only route to a number above ~17%.

I would not spend more effort on new shape generators beyond `fp`. The classes
left in section B are thinning — `copy-chain` measured 1 of 300, indexed
addressing totals 41 — and each new generator now costs more to find its
declines than its predecessors did, because the easy exactness bugs have been
fixed. That is what an exhausted automation frontier looks like from the inside.
