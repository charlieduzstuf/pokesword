# Yield sweep: which registered generators actually produce anything

Measured 2026-10-04 against the four decompiled modules. Method: for every
*unmatched* body, ask `auto_match.shape_of` for its shape, then call that
shape's generator directly and count whether it returned source. This is the
check that finds generators which are registered, reachable, and still dead.

Reproduce with `work/sweep.py` (regenerate it from this file's description if
the scratch copy has been cleaned: walk `MH.load_functions` per module,
`MH.text_blob` + `MH._md()` to disassemble, skip addresses present in
`data/matched_<mod>.json`, and compare `A.shape_of(...)` against
`A.SHAPE_GENERATORS`).

## Results

| shape | unmatched | generated | yield |
|---|---|---|---|
| straight | 1,083 | 55 | 5.1% |
| tailcall | 1,037 | 1,037 | 100.0% |
| compare | 393 | 3 | 0.8% |
| struct-copy | 374 | 0 | **0.0%** |
| setter-chain | 227 | 159 | 70.0% |
| copy-chain | 199 | 121 | 60.8% |
| getter-chain | 189 | 1 | 0.5% |
| const-field-set | 187 | 182 | 97.3% |
| copy2 | 99 | 12 | 12.1% |
| indexed-getter | 30 | 11 | 36.7% |
| getter | 27 | 27 | 100.0% |
| setter | 24 | 24 | 100.0% |

Shapes below 15 unmatched bodies are omitted; several of those are 0/0 or
fully drained.

## What this says

**`struct-copy` is the only shape over the 50-body threshold that produces
literally nothing.** 374 bodies. This is the known copy-constructor family
(`ldp ; stp ; ret`, and the wider interleaved forms): the loads and the stores
are interleaved with the *zero* stores, so a generator that assumes
load-then-store order cannot express them. `gen_struct_copy_ret` declines all of
them and the reason is recorded in its docstring. This is a real gap, not a bug
— but it is the largest single dead generator in the project.

**`compare` is the most suspicious entry.** 393 unmatched bodies, 3 generated.
A generator holding 393 bodies and yielding 3 is the same signature
`indexed-getter` had before it was fixed (+216 bodies). The declines cluster
into recognisable families rather than one shape:

```
 22  sub cmp cset ret              w8,w1,#0x4ff | w8,#0x12c | w0,lo
 18  adrp ldr ldr cmp cset ret     two loads through a global, cmp #0
 16  ldr ldrb cmp cset ret         byte field compared against a constant
 16  ldr ldr cmp cset ret          two chained loads, cmp #0
 15  ldr sub cmp cset ret          mask-then-compare, unsigned
 10  and cmp cset ret              test-one-bit idiom
 10  ldr and cmp cset ret          load, mask, compare
  7  ldr mov movk cmp cset ret     32-bit constant built from two halves
  6  ldr ldr ldr cmp cset ret
```

The dominant pattern is a **flag test**: load a field, compare it against a
constant, `cset w0, <cond>`. That is `return (obj->field & mask) == value;` in C.
Each family needs the comparison operand, the mask, and the condition wired
through, and the `cmp`-against-`#0` forms additionally need the zero case
recognised. This is the highest-value target after `struct-copy` and is
tractable by hand — the arithmetic is all visible in the operands.

**`straight` is the largest pool** (1,083 unmatched, 5.1% yield) but it is the
generic fallback translator, so a low yield there is expected and not by itself
evidence of a bug. Worth a separate look at which of its bodies it declines and
why, but it is a broad survey rather than a single defect.

## Caveats

- Yield here is *generator output*, not a match rate. A generator can produce
  source that then fails to match; the figures above are an upper bound on what
  is available, and each candidate still has to pass the batch recompile.
- `tailcall` shows 100% because its generator only declines when the branch
  target is not another recovered function.
- This sweep counts *unmatched* bodies only, so a drained shape reads as 0
  unmatched rather than 0 generated. `strlit-ret` at 2 unmatched is drained, not
  broken.