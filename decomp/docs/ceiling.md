# The ceiling is a compiler, not a technique

Measured over all 123,191 unmatched bodies:

    contain a call         93,113  (75.6%)   needs callee symbols
    contain a stack frame  97,547  (79.2%)   Clang 5.0.1 cannot reproduce
    contain adrp/adr       61,742  (50.1%)   needs a data symbol + link-time verify
    FREE of all three       3,272  ( 2.7%)

With 28,836 already matched, the byte-identical ceiling under vanilla Clang 5.0.1
is about **32,108 / 152,062 = 21.1%**.

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
