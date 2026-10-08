# Stack frames are unreachable under Clang 5.0.1

`ldp`/`stp` appear in **97,370** unmatched bodies -- 80% of the `None` pool. It
looked like the largest tractable target: model the frame instead of refusing
`sp` as a base. That is not reachable, and the reason is the compiler rather than
the translator.

Measured, compiling the same function three ways:

    A unused local array   sub sp, sp, #0x10
                           ldr x8, [sp, #8]
                           str x8, [sp], #0x10
                           ldr x0, [x0, #8]
                           ret

    B no local at all      ldr x0, [x0, #8]
                           ret

    C local forcing x19    sub sp, sp, #0x20
                           stp x29, x30, [sp, #0x10]
                           add x29, sp, #0x10
                           ...
                           ldp x29, x30, [sp, #0x10]
                           add sp, sp, #0x20
                           ret

    target frame           str x19, [sp, #-0x20]!
                           stp x29, x30, [sp, #0x10]
                           add x29, sp, #0x10
                           ldp x29, x30, [sp], #0x20
                           ret

Two independent mismatches, neither of which is about the size or the saved
register set:

  1. **Writeback addressing.** The original adjusts `sp` in the load/store itself
     (`[sp, #-0x20]!`, `[sp], #0x20`). Clang 5.0.1 emits a separate `sub sp, sp, #n`
     and `add sp, sp, #n`. The frame size matches in variant C -- so this is not a
     layout problem, it is a codegen *form* the compiler simply does not produce.
  2. **Callee-saved spill selection.** The original spills `x19` into the frame;
     Clang 5.0.1 spills only the frame pointer and link register.

Writeback `sp` forms in the prologue are characteristic of a newer AArch64
backend. The original module was very likely built with a different Clang than the
5.0.1 this project matches against.

## Consequence

Any body whose byte sequence includes a frame cannot be reproduced under this
compiler, no matter how the translator models `sp`. That closes the whole
`ldp`/`stp` family -- not just the ~780 no-call/no-branch bodies, but every one of
the 97,370.

Combined with the `adrp` finding (unreachable in an object file, and needing a
named data symbol the project does not have), the two largest remaining blockers
are both *harness and compiler* limits rather than missing decompilation work.

## The lesson, which is the sixth instance

`adrp` needed a symbol and link-time verification. `ldp`/`stp` needs a newer
backend. Both were recorded as "the biggest remaining pool" before being tested.
Testing took one compile each. Six documented dead ends in this project now, and
the pattern holds: **a decline count says how many bodies stop there, never why,
and never whether the stop is even in our control.**
