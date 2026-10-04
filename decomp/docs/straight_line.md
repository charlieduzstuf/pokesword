# `straight_line.py`: the generic fallback matches nothing

`sl_verify` reports **84 candidates, 0 matches**. That is not a small shortfall to
tune — it is the generic straight-line translator failing completely on
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

## The breakdown

Of the 84 emitted candidates, **0 match**:

| class | count | share |
|---|---:|---:|
| wrong opcode | 35 | 41.7% |
| length differs (candidate truncated) | 38 | 45.2% |
| reordered | 9 | 10.7% |
| operand-differs | 2 | 2.4% |

### Which half a source fix could recover — and a correction

`sl_verify` reports:

```
generator-side (a fix to straight_line.py could recover these): 35 of 84  (41.7%)
```

and computes it as `wrong_opcode + batch_compile_failed + no_code_emitted`.

An earlier version of this document had that membership **backwards**, claiming
length-differences were the recoverable half and wrong opcodes were not. The
tool's own docstring says the opposite, and cites the measurement that settles
it:

> the candidate is a different length, or diverges by reordering — the emitted C++
> is semantically right and the compiler scheduled it differently. Source-level
> fixes do not help; forcing load order made this measurably worse.

So: **length-differs and reordered are compiler scheduling, not emitter bugs.**
The recoverable half is wrong-opcode.

Note this figure was **42 of 84** until the signature bug below was fixed; 7 of
those 42 were never emitter failures at all.

## The signature bug that mislabelled 7 bodies

`sl_verify` reported 7 bodies as `no-code-emitted`, which reads as "the emitter
failed to produce code". It did not. All 7 are exactly 3-instruction bodies, and
the cause was in the lookup key:

Itanium omits the return type from an ordinary function's mangling, so `sig`
carries parameter codes only — `uint64_t f(void*)` and `void f(void*)` are both
`_Z..Pv`. What it does not allow is the *absence* of the parameter list. Clang
emits `_Z3f_1v` for `f()`, while `MH.mangle(ident, "")` produced `_Z3f_1`.

`StraightLine._emit` built `sig` from parameter codes and hardcoded `"v"` only on
the void path, so a no-argument function that *returns* a value got `sig == ""`
and a malformed lookup key. The compiled code was there the whole time.

Fixed by making the empty parameter list always mangle as `v`:

```python
if not codes:
    codes.append("v")
```

Effect: `no-code-emitted` and `batch-compile-failed` are now **0**, and the 7
bodies are reclassified as `length-differs:3-vs-2` (which is why that row went
from 2 to 9). No matches were won — a 3-instruction body cannot reduce to
`return 0;` — this is a reporting-accuracy fix, not a yield fix.

Worth stating because the label pointed at the wrong subsystem. "7 emit failures"
sends you into `_emit`; the defect was one line of signature construction.

## The specific defects worth knowing

```
opcode-differs: str/mov       16   (19.0%)   <-- largest single class
length-differs: 2-vs-1        14   (16.7%)   <-- largest length class
reordered                      9   (10.7%)
length-differs: 3-vs-2         9   (10.7%)
opcode-differs: ldrsw/ldr      5    (6.0%)
```

`str/mov` dominating suggests the emitter folds a store of a materialised
constant into something Clang will not fold back — the mirror image of the
`const-field-set` problem, where Clang materialises the constant *before* the
pointer load and an `__asm__` memory barrier changed nothing because the
reordering happens at instruction selection rather than in the scheduler.

`2-vs-1` (original has two instructions, candidate has one) is truncation: the
emitter is dropping a materialisation step rather than modelling it.

## Why the effort is better spent elsewhere

35 of a 1,088-body shape is about 3%. It is worth doing eventually, and not
worth doing *instead of* a new specialised generator — every gain in this project
so far (`+717`, `+216`, `+177`, `+26`) came from fixing an existing generator,
none from extending the generic path.

## What to check first

1. Whether the 35 wrong-opcode bodies share one shape. If they do, they are not
   a `straight_line.py` bug at all and should be routed to a new shape, the way
   `getter-chain`'s indexed forms were.
2. `length-differs` was assumed to be scheduling and never tested. The docstring
   asserts source fixes do not help, but that assertion was inherited, not
   re-measured for these 38.

Reproduce with `python tools/sl_verify.py`.
