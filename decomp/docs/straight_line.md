# `straight_line.py`: the "matches nothing" verdict was wrong twice

> **Superseded.** This file originally recorded `sl_verify` reporting
> **84 candidates, 0 matches**, and concluded the generic fallback was worthless.
> That is no longer true, and neither is the reason.

## What the number really was

The first correction was a flag defect: `match_harness.CFLAGS` was missing eight
of the build's flags (see `decomp/docs/flag_fidelity.md`). Under the corrected
flags the same code matched 85–98% per module.

The second was more mundane and more interesting. Re-running it after the flag fix
still left ~1,057 unmatched `straight` bodies with `straight_line.py` declining
**1,033** of them. Every one of those declines was:

```python
raise Bail
```

Fourteen sites, **no message**. So the pool was not "known impossible", it was
simply unreadable — a missing `ldur` in a tuple is indistinguishable from a
genuinely inexpressible body when the exception carries no reason.

Annotating the bail sites cost about twenty lines and immediately showed three
trivially fixable classes:

| decline reason | bodies |
|---|---:|
| `store source 'wzr'/'xzr' is never written by the body` | **218** |
| `store source 'w1'/'x1' is never written by the body` | **81** |
| `unsupported mnemonic 'ldur'` / `'stur'` | **59** |

### The zero register is not "never written"

`str xzr, [x1]` is the most ordinary store there is. The translator required every
store source to have a defining instruction, so the zero register — which is never
written by anything — was rejected, and 218 bodies with it. `xzr`/`wzr` now
resolve to an immediate 0.

### An argument used only as a store source is still a parameter

`str w1, [x8]` never touches `w1` as a pointer base, so it was not in
`used_args` and the body would not have compiled even had it been accepted. It is
now recorded as an `arg` value and rendered through the existing store-width cast.

### `ldurb` and `ldursw` were in the tables; plain `ldur` and `stur` were not

One word each, 59 bodies.

Candidates generated went from **24 to 357**, and `straight` yielded:

    main      MATCH 500 / 586 = 85.32%
    sdk       MATCH 386 / 401 = 96.26%
    subsdk0   MATCH  53 /  54 = 98.15%
    subsdk1   MATCH  34 /  35 = 97.14%

Of 973 matched, **254 were new** and 719 were re-confirmations of bodies already
registered — `auto_match`'s `MATCH` line counts verifications, not additions.

## An immediate stored through a wider type needs a variable

    mov w8, #-1 ; str x8, [x0]     ->  0x00000000ffffffff
    mov x8, #-1 ; str x8, [x0]     ->  0xffffffffffffffff

Writing `*(uint64_t *)p = (uint64_t)(-1);` asks for the second one and Clang folds
it to a single `mov x8, #-1`. The distinction is carried by the width of the
original's *register*, so only a variable of that width preserves it:

    uint32_t k0 = -1;  *(uint64_t *)p = (uint64_t)k0;

Same principle as the store-width rule that took `gen_zero_fill` to 100%: **the
register class decides the type, never the store's width.**

## What is still declined, and why it is a real ceiling

    memory base 'x8' is not an argument register    236
    add/sub applied to a loaded value                 148
    add/sub third operand is not an immediate         37
    store operand '[x0, x8]' is not [base, #off]      33

These need an indexed memory operand or pointer arithmetic on a loaded pointer —
both real work, both tractable, and now *visible* rather than lumped together
under an exception with no message.

## The general lesson

A decline you cannot diagnose is not a decline, it is a gap in your
instrumentation. The same session found `check.py` reporting 332 matches that
did not exist (`decomp/docs/check_py_vacuous_match.md`) — one tool was too
generous and this one was too silent, and both defects had the same root: nobody
could see inside the verdict.

When a sweep returns a suspiciously round zero, check that the tool can say *why*
before believing it.