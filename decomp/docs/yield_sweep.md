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

### Why `compare` declines them: the exact blocker, ranked

`gen_compare_ret` walks the instructions *before* the `cmp` and accepts exactly
two things — a load, or a `mov` of an immediate:

```python
if i.mnemonic in LOADS and len(o) == 2:   ... state[dst] = ("load", ...)
elif i.mnemonic == "mov" and len(o) == 2: ... state[dst] = ("imm", ...)
else:
    return None
```

Every other opcode falls through to `else: return None`. Counting 382 declined
`compare` bodies by the **first** prefix opcode that trips this test:

| blocking opcode | bodies | what it is |
|---|---|---|
| *(passes the loop, fails later)* | 50 | needs the comparison/condition side extended, not the prefix |
| `sub` | 49 | mask idiom: `x & ~m` is usually emitted as `sub` |
| `cmp` | 48 | a *second* comparison in the prefix |
| `cbz` | 42 | early-out test, so the body is not a single comparison |
| `adrp` | 41 | load through a global — same class as the `strlit` families |
| `and` | 40 | mask idiom, incl. the test-one-bit `(x & ~1) == 0` |
| `add` | 19 | pointer arithmetic before the load |
| `movk` | 14 | builds a 32-bit constant from two halves |
| `orr` | 10 | bit-set |
| `ldrsb` | 9 | signed byte load — **probably just missing from `LOADS`** |
| `mov` (register) | 9 | move between registers, not an immediate |
| `ldp` | 8 | 16-byte load |

Ranked by return per unit of work, the sensible order is:

0. ~~**`ldrsb` / `ldrsh`**~~ — **DONE, and it was the smallest item on the list,
   not the largest.** `ldrsb` and `ldrsh` were absent from both `LOADS` *and*
   `access_width`; the latter reported width **8** for `ldrsb`, which reads one
   byte, so it would have produced 8-byte C types for 1-byte accesses. Fixed in
   `566b825`.

   **Measured net effect: +3 bodies**, not the ~9 the table suggests and nowhere
   near the 200 the `compare` match rate appeared to show. Those 200 were already
   matched through other shapes — a *match rate*, not a delta. See the trap noted
   in `HANDOFF.md`; it has now been fallen into twice.

   The lesson for the rest of this list: **a body being declined by
   `gen_compare_ret` does not mean `compare` is the only route to it.** Several
   of the families above are reachable by other shapes once their real blocker is
   removed, so a per-family body count is an upper bound on *this* generator's
   value, not on the shape's.

1. **`movk` (14)** — reuse the two-half constant logic already written for
   `gen_const_ret`; `movz`+`movk` is the same idiom.
2. **`mov` register-to-register (9)** — trivial alias, the state machine already
   tracks registers.
3. **`and`/`sub`/`orr` (99 combined)** — the mask idioms, and by far the largest
   single item left here. These need a new state form carrying a bitwise
   operation rather than a load or an immediate, so it is real work, but the
   arithmetic is fully visible in the operands. **Start here.**
4. **`cmp` as a prefix opcode (48)** — a compound condition
   (`a && b`), which is a different body shape and probably wants its own
   generator rather than an extension to this one.
5. **`cbz` (42) and `adrp` (41)** — skip. `cbz` bodies branch and so belong to
   the branchy population; `adrp` bodies need a global whose address is
   irrelevant to `normalise` (see the `strlit-ret` note above), so they should be
   routed to a shape of their own rather than forced through `compare`.

The 50 "passes the loop, fails later" cases are a separate question and were not
diagnosed; they are the residue once the prefix is understood, so re-measure
after the items above rather than chasing them first.

Re-measure this whole table before acting on it. It was taken at 26,533 bodies
and these counts are only meaningful relative to that baseline.

**`straight` is the largest pool** (1,083 unmatched, 5.1% yield) but it is the
generic fallback translator, so a low yield there is expected and not by itself
evidence of a bug. Worth a separate look at which of its bodies it declines and
why, but it is a broad survey rather than a single defect.

## Caveats

- Yield here is *generator output*, not a match rate. A generator can produce
  source that then fails to match; the figures above are an upper bound on what
  is available, and each candidate still has to pass the batch recompile.
- **A body declining in one generator is not a body only that generator can
  reach.** `ldrsb` measured 9 declines here and delivered +3, because most of
  those bodies are matched by other shapes. Per-family counts are an upper bound
  on the value of *this* generator, not on the shape's.
- `tailcall` shows 100% because its generator only declines when the branch
  target is not another recovered function.
- This sweep counts *unmatched* bodies only, so a drained shape reads as 0
  unmatched rather than 0 generated. `strlit-ret` at 2 unmatched is drained, not
  broken.
- Baseline: taken at 26,533 emitted bodies. Re-measure before acting on any
  count here.