Register-offset addressing: declined deliberately, because it miscompiles

`ldr w0, [x8, x9]` is AArch64 register-offset addressing -- base plus the whole of
a second register, unscaled and unextended. It is a *different grammar* from the
indexed `[base, index, ext]` form, which is why these 6 bodies were declined:

    load operand '[x8, x9]' is not a [base] or [base, index, ext] form

A diagnostic naming a grammar the instruction never used, which is misleading.
`mem_reg_offset` already handled the shape, but only for a register holding a
*constant*; its docstring warned that guessing the runtime case "would silently
miscompile". It was implemented anyway, to check whether that warning still held.

It no longer holds -- the parse is fine and the value is known. But the code the
translator then produces for the surrounding body is wrong:

    main@0x141a8e0  ORIGINAL                GENERATED (first divergence)
        ldr   x8, [x0, #0x60]                 ldr   x8, [x0, #0x60]
        ldrsw x9, [x8]                     **  ldr   w9, [x8]
        sub   x9, x8, x9                  **  ldr   w0, [x8, x9]
        ldrh  w9, [x9, #4]                **  ret
        add   x8, x8, x9
        ldr   w9, [x8]
        ldr   w0, [x8, x9]
        ret

Four instructions are dropped and the final address is computed from the wrong
register. Measured: **+0 on all four modules**, candidates 297 -> 303.

So it was reverted. A change that adds candidates while miscompiling them is
worse than declining them: a declining translator is honest, and a miscompiling
one is only caught because the bytes differ. Nothing was banked either way --
`auto_match` registers only byte-identical bodies -- but there is no reason to
carry latent wrongness for no gain.

## What it would take

The bug is not in the register-offset parse. It is one step earlier: `add x8, x8,
x9` where `x8` holds a *loaded pointer* rather than an `addr`. The address-plus-
value fold added earlier only recognises `("addr", n, off)`, so this falls through
to value arithmetic, where `_rw` types the result `uint64_t` instead of `void*`.
The value is then a plain integer, the later `[x9, #4]` base loses its type, and
the chain collapses.

The fix is to make "address plus a runtime value" a first-class address form --
essentially an `addr_i` with scale 1 -- and to route it through `resolve_base` so
every later use of the register sees a pointer. That is a structural change to how
addresses are represented, not a patch to this one instruction form.
