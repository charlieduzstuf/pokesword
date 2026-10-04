# The verification harness did not use the build's flags

`match_harness.py` opens with a comment stating the requirement:

> These must match what the NX64 build actually uses, or "verified" means
> nothing.

Eight flags did not match. That was not a theoretical gap: **26 bodies were
reported as matching that do not match the linked binary.**

| module | verified before | verified after repair |
|---|---:|---:|
| main | 20,962 / 20,962 | 20,962 / 20,962 |
| sdk | 3,118 / 3,118 | 3,118 / 3,118 |
| subsdk0 | 871 / 871 | 871 / 871 |
| subsdk1 | 1,320 / 1,320 | 1,320 / 1,320 |

The middle column is what the harness reported. The right column is what it
reports now that the flags are faithful and the affected bodies are repaired.

## The eight missing flags

`build_nx64.CXXFLAGS` carried all of these and `match_harness.CFLAGS` had none:

```
-mcpu=cortex-a57+fp+simd+crypto+crc     -DSWITCH
-mno-implicit-float                     -D__DEVKITA64__
-fstandalone-debug                      -D__ELF__
                                        -DNNSDK
                                        -DMATCHING_HACK_NX_CLANG
```

Bisecting them one at a time against a single body puts the entire effect on
**`-mno-implicit-float`**. Adding that one flag to the old list reproduces the
build's output; none of the other seven changes anything about that body.

`-mcpu=cortex-a57` was the obvious suspect and is **not** the cause — verified by
removing it from the full build flag set and confirming the order does not
change. Worth recording, because the obvious suspect being wrong cost more time
than the bisect did.

## The concrete symptom

`main` 0x1661510. Original:

```
stp xzr, xzr, [x0, #0x70]
str wzr, [x0, #0x80]
ret
```

What the harness compiled and called a match:

```
stp xzr, xzr, [x0, #0x70]
str wzr, [x0, #0x80]
ret
```

What the build actually produces, in both `build/prog.elf` and
`build/main.elf`:

```
str wzr, [x0, #0x80]
stp xzr, xzr, [x0, #0x70]
ret
```

Same source, same optimisation level, different store order.

## Why the direction of the error matters

Every other flag and tooling defect recorded in this project made **correct code
look wrong** — an audit reporting a function that was present, a shape blamed for
a mis-signature, `check.py` comparing inter-function padding. Those all go red.

This one made **correct-looking code look right**. Nothing failed. The suite
reported 100.00% clean on all four modules and stayed silent, because from the
harness's point of view nothing was wrong. The only reason it surfaced at all is
that `check.py` compares against the linked ELF — built with the real flags — and
disagreed by exactly one body in `main`, which is what prompted the bisect.

`check.py` was the ground truth here precisely because it never used the harness's
flags. Two instruments with different assumptions were worth more than one.

## The repair

All 26 are a single shape: the original's first instruction is
`stp xzr, xzr, [...]` — a fused pair of 8-byte zero stores — followed by narrower
zero stores. Nothing in the source relates two independent stores, so the
scheduler may order them freely, and under the build's flags it picks the other
one. An empty `memory` barrier between the pair and the remainder pins the order
to the source's:

```c
void f_1661510(void* a0) {
    *(uint64_t*)((char*)(a0) + 112) = 0;
    *(uint64_t*)((char*)(a0) + 120) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)(a0) + 128) = 0;
}
```

This is **not** the `const-field-set` case where a memory barrier changed nothing
because the reordering happened at instruction selection. Here it is pure
scheduling, so a barrier is exactly the right tool — the same instrument fails or
succeeds depending on which stage the reordering occurs at.

`tools/fix_zero_store_order.py` applies it. The family is found by shape rather
than from a stored failure list, because `verify_matches.py` samples its output
and the full 26 was not recoverable from it. For each candidate a barrier is
tried after every statement boundary and the source is kept **only if it compiles
to the original byte for byte under the build's real flags**. Result: 26
repaired, 0 rejected, plus 1 family member that was already correct.

## What this says about the rest of the numbers

The emitted-body count, 26,562 / 152,062 = 17.47%, is unaffected — it counts
bodies, not verification outcomes, and `match_progress.py` derives it from
`prog/`.

But any claim of the form "N verified" was previously a claim about the
harness's flags rather than the build's. They now agree, and the guard against
regression is simply that the two flag lists are identical:

```python
import match_harness as MH, build_nx64 as B
assert set(MH.CFLAGS) == set(B.CXXFLAGS)
```

Worth adding to the audit. It is a one-line invariant that would have caught this
before 26 bodies were registered on the strength of it.
