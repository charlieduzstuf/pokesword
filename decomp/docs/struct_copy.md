# `struct-copy`: 374 bodies, and why the existing generator declines them

The largest dead generator in the project. `gen_struct_copy_ret` is registered
and produces **nothing** for any of them, which `decomp/docs/yield_sweep.md`
records as the only shape over the 50-body threshold at 0%.

Reading the actual instructions shows two families, not one. Both are
`ldr`/`str` pairs where **the zero-stores are interleaved with the copies**, which
is why a generator that assumes load-then-store order cannot express them.

## Family A — in-place reinitialisation

`sub_537d0` (main+0x537d0), 12 instructions:

```
  ldur  x8,  [x0, #0xb4]
  ldur  x9,  [x0, #0xbc]
  stur  xzr, [x0, #0xec]        <-- zero store, interleaved
  ldur  x10, [x0, #0xc4]
  stp   x8,  x9, [x0, #0xd0]
  ldr   w8,  [x0, #0xcc]
  str   x10, [x0, #0xe0]
  str   w8,  [x0, #0xe8]
  stur  xzr, [x0, #0xf4]        <-- zero store
  stur  xzr, [x0, #0xfc]        <-- zero store
  str   wzr, [x0, #0x29c]       <-- zero store, far field
  ret
```

`sub_53800` (main+0x53800) is the same shape with every offset shifted down by 8,
which is the signature of a generated family: one template, many instances.

Reading: fields are loaded from the `0xb4..0xcc` region of `this` and stored into
the `0xd0..0xe8` region of the *same* object, and separately several fields are
zeroed. So in C this is something like

```c
this->dst = this->src;      // a sub-struct copy
this->flag  = false;
this->other = 0;
return this;
```

The ordering is the compiler's, not the source's: `stur xzr, [x0,#0xec]` sits
between two loads, so a generator that emits "load everything, then store
everything" produces a different instruction sequence even when the semantics
match.

**What a generator must do:** walk the body once, carrying each loaded value in a
virtual register, and emit the store exactly where it appears — while treating a
store of the zero register as a constant rather than a register move. `stp` of two
loaded registers is the paired-store case.

## Family B — copy, then clear the source

`sub_19f500` (main+0x19f500), 18 instructions:

```
  ldr  w8,  [x1]
  str  w8,  [x0]
  ldr  x8,  [x1, #8]
  str  x8,  [x0, #8]
  ldr  w8,  [x1, #0x10]
  str  w8,  [x0, #0x10]
  ldr  x8,  [x1, #0x18]
  str  x8,  [x0, #0x18]
  ldr  x8,  [x1, #0x20]
  str  x8,  [x0, #0x20]
  ldr  x8,  [x1, #0x28]
  str  x8,  [x0, #0x28]
  str  wzr, [x1]              <-- the source is then zeroed
  str  xzr, [x1, #8]
  str  wzr, [x1, #0x10]
  stp  xzr, xzr, [x1, #0x18]
  str  xzr, [x1, #0x28]
  ret
```

This one is *not* interleaved: all six copies complete before any zeroing
begins. It is a field-by-field struct copy from `x1` to `x0` at offsets
0, 8, 0x10, 0x18, 0x20, 0x28, followed by zeroing those same source offsets.

In C, the shape that produces this is a copy-assignment followed by a reset of
the source — a move, or an `operator=` that releases the source. Note the
**width alternation**: `w8` at 0 and 0x10, `x8` at 8, 0x18, 0x20, 0x28. The field
widths alternate 4, 8, 4, 8, 8, 8, so a generator must read the width per field
from the register class rather than assuming a uniform 8-byte copy. That is the
same register-class trap that has bitten this project repeatedly.

`sub_19f5c0` (37 instructions) is the same family at larger size.

## ANSWER: family B is reachable from C. Here is the recipe.

The open question below was **settled by measurement**, not reasoning.
`sub_19f500` was hand-written as plain C and now matches all 18 instructions
byte-for-byte. The only hard part was the `stp` pairing, and it is fully
determined.

### The one thing that matters: `stp` pairing and order

The original ends:

```
str wzr, [x1]
str xzr, [x1, #8]
str wzr, [x1, #0x10]
stp xzr, xzr, [x1, #0x18]      <-- paired
str xzr, [x1, #0x28]
ret
```

Given six ordinary zero-stores at offsets 0, 8, 0x10, 0x18, 0x20, 0x28, Clang
pairs **`0x20` + `0x28`** and leaves `0x18` alone — the wrong pair. Four
formulations were tried and none of them changed it:

| attempt | result |
|---|---|
| plain ascending-order stores | `stp [x1,#0x20]` + `str [x1,#0x18]` |
| zeroing order reversed | unchanged |
| explicit 16-byte `struct { uint64_t a, b; }` assignment at 0x18 | unchanged |
| `__asm__ volatile("" ::: "memory")` isolating 0x28 | **right instructions, wrong order**: `str [x1,#0x28]` then `stp [x1,#0x18]` |

Source order does not steer it — Clang canonicalises the pairing. What *does*
work is two memory barriers: the first stops `0x28` pairing with `0x20`, which
leaves `0x18`+`0x20` adjacent and so paired; the second keeps the pair ahead of
the now-isolated `0x28` store.

```c
*(uint32_t *)((char *)a1 + 0)    = 0;
*(uint64_t *)((char *)a1 + 8)    = 0;
*(uint32_t *)((char *)a1 + 0x10) = 0;
__asm__ volatile("" ::: "memory");
*(uint64_t *)((char *)a1 + 0x20) = 0;   /* these two become stp [x1,#0x18] */
*(uint64_t *)((char *)a1 + 0x18) = 0;
__asm__ volatile("" ::: "memory");
*(uint64_t *)((char *)a1 + 0x28) = 0;   /* stays a separate str */
```

Result: **18 instructions, 72 bytes, `MH.compare` verdict `match`.**

The barrier is the same device already used elsewhere in this project for the
`strlit` shapes, where it likewise does nothing about instruction *selection*
and everything about *scheduling* — which is exactly the distinction that
matters here.

### What this means for the generator

The 374 bodies are now split by a measured answer rather than a guess:

- **Family B is reachable.** A generator can emit it, and must reproduce the
  barrier placement. Note that the *copy* half needs no barriers; only the
  zeroing tail does.
- **Family A remains untested.** Its zero-stores are interleaved *between the
  loads*, so the same barrier trick may not apply — a barrier also forbids the
  scheduler from doing whatever produced the original interleaving. It should be
  tried on one body before any generator is written for it.

A generator must also carry the field widths (4, 8, 4, 8, 8, 8 here) per field
and the source/target register roles, neither of which is derivable from the
mnemonic sequence alone.

Neither family is "a copy". A generator must:

1. carry register values through the body symbolically,
2. distinguish a **copy store** (store of a loaded register) from a **zero
   store** (store of `xzr`/`wzr`) — these need different C expressions,
3. preserve the **exact interleaving** for family A, because that is what the
   instruction sequence encodes,
4. read each field's **width from the register class**, and
5. reconstruct a field list that a C compiler will re-emit in the same order,
   which for family A means the zero stores have to land between the loads —
   and Clang's scheduler will generally *not* reproduce that from equivalent
   source. That last point is the real risk: family A may be unreachable from C
   at all, in which case a generator would match in the batch harness (which
   compares normalised instructions) while the real build reorders.

**Point 5 is the open question and should be settled before writing the
generator.** The batch harness compares `normalise`d instructions, and
`normalise` preserves order, so a batch match is necessary but may not be
sufficient. One body should be reproduced by hand first and checked against the
**linked object**, the way the tail-call fold was — not against the batch alone.

## Suggested first step

Reproduce `sub_19f500` by hand as plain C — six field copies then six zero
stores — compile it, and compare against `build/prog.elf`. Family B is
order-stable and looks reachable from ordinary source, so it is the cheapest way
to find out whether this family is expressible at all. If it is, family A is
worth attacking; if it is not, the 374 split and the honest answer is that
family A is not hand-decompilable and the effort belongs elsewhere.

Note that `copy-chain` and `copy2` already exist and handle the plain
load-all-then-store-all case; what is missing is specifically the interleaved and
zero-clearing behaviour above.