# `straight_line.py`: the generic fallback emits candidates and none of them match

`sl_verify` reports **84 candidates, 0 matches**. That is not a small shortfall
to tune — it is the generic straight-line translator failing completely on
everything it offers.

## Why this matters more than 84

`gen_straight` in `tools/auto_match.py` does `import straight_line`, so this is
**not a side experiment**. It is the fallback used by `collect` whenever a
specialised generator declines a body, and it backs the `straight` shape, which
the yield census measures at **1,088 unmatched bodies with 55 generated (5.1%)**.

So there are two separate failures stacked:

1. **It declines most of what it is offered** — roughly 1,000 of the 1,088
   `straight` bodies never reach it at all.
2. **Of the 84 it does emit, none match.**

A fallback that cannot express the bodies nothing else claims is a structural
gap, not a tuning problem. It also means the `straight` count in
`decomp/docs/yield_sweep.md` understates how much is unreachable: the shape looks
merely unproductive when in fact its engine is inoperative.

## The breakdown, and which half is worth fixing

Of the 84 emitted candidates:

| class | count | share | recoverable by fixing `straight_line.py`? |
|---|---:|---:|---|
| model is wrong | 35 | 41.7% | **no** — the straight-line model does not fit the body |
| compiler rescheduled | 11 | 13.1% | yes |
| length differs (truncated) | 31 | 36.9% | yes |
| batch/emit failure | 7 | 8.3% | partly |

`sl_verify` calls the recoverable half "42 of 84 (50.0%)". That number is honest
but easy to over-read: **42 out of the 1,088-body `straight` bucket is under 4%.**
It is worth doing, and it is not worth doing *instead of* a new specialised
generator, which has historically paid far better per unit of effort (the session's
gains were `+717`, `+216`, `+177`, `+26`, all from fixing existing generators,
none from extending the generic path).

## The specific defects worth knowing

```
opcode-differs: str/mov        16   (19.0%)   <-- largest single class
length-differs: 2-vs-1          14   (16.7%)   <-- largest length class
reordered                        9   (10.7%)
no-code-emitted                  7    (8.3%)
opcode-differs: ldrsw/ldr       5    (6.0%)
```

`str/mov` dominating suggests the emitter folds a store of a materialised
constant into something Clang will not fold back — the mirror image of the
`const-field-set` problem, where Clang materialises the constant *before* the
pointer load and an `__asm__` memory barrier changed nothing because the
reordering happens at instruction selection rather than in the scheduler.

`2-vs-1` (original has two instructions, candidate has one) is truncation: the
emitter is dropping a materialisation step rather than modelling it.

## What to check first

1. Whether the 35 "model is wrong" bodies share one shape. If they do, they are
   not a `straight_line.py` bug at all and should be routed to a new shape, the
   way `getter-chain`'s indexed forms were.
2. `no-code-emitted` (7) — a candidate that produces no instructions is either a
   silent decline or a real emitter failure, and those are very different bugs.
   Worth confirming which before spending effort on the rest.

Reproduce with `python tools/sl_verify.py`.