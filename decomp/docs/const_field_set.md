# `const-field-set`: a recorded dead end that was a flag bug

`HANDOFF.md` carried this:

> `const-field-set` — all 187 bodies fail identically: the original does
> `ldr x8, [x0]` then `mov w8, #1`, we produce `mov w8, #1` then `ldr x8, [x0]`.
> Clang materialises the constant before the pointer load. **Negative result: an
> `__asm__ memory` barrier changed nothing (0/180, byte-identical).**

That was measured with `match_harness.CFLAGS` missing eight of the build's
flags — the same defect as `decomp/docs/flag_fidelity.md`, where 26 bodies had
been registered as matching that do not match the linked binary.

With the flags corrected, the plain assignment matches. No barrier, no
`volatile`, no inline asm:

```c
*(uint32_t *)((char *)(*(uint64_t *)((char *)a0 + 32)) + 288) = 0x42ca0000;
```

compiles to exactly

```
ldr  x8, [x0, #0x20]
mov  w9, #0x42ca0000
str  w9, [x8, #0x120]
ret
```

`gen_store_chain.py --shape const-field-set` then offered 181 and matched **180
of 187**, a 99.4% yield on a shape that had been written off entirely.

## The lesson

A negative result is only as good as the flags it was measured under. Before
recording any shape as impossible, confirm the measuring instrument against
`build_nx64.CXXFLAGS` — `audit.py` asserts this equality now, so the mistake
cannot silently recur, but a dead end recorded before that assertion existed is
not automatically still true.

This is the second time the flag defect has been mistaken for a codegen wall.
The first was 26 bodies wrongly counted as matching; this one cost 180 bodies of
avoidable work and a wrong entry in the handoff.

## Also fixed in the same pass

Three bugs surfaced only because the shape was finally attempted:

**Parameter slots are assigned by position, not by name.** A body whose lowest
register is `x1` takes two parameters, the first unused. Declaring only the one
it uses puts it in `x0`:

```
insn 0: orig ('ldr', 'x8', [x1]) vs new ('ldr', 'x8', [x0])
```

**`uintptr_t` was undefined in both preambles.** The harness and
`decomp_project.py` each typedef the fixed-width integer types by hand, because a
bare-metal `aarch64-none-elf` target has no `<stdint.h>` under `-nostdinc++`.
Neither listed `uintptr_t`, so 35 bodies that passed per-body verification broke
seven real TUs at link time. Per-body verification cannot see this class of
failure; only the real build does.

**A signed load needs a signed type, of the destination's width.** `ldrsw x8`
produces a sign-extended 64-bit value. Declaring `uint32_t t0` and then using it
as an index zero-extends it, which is wrong semantics rather than a failed
match. See `gen_getter_chain.py`'s `SIGNED` and `SIGNED_W`.