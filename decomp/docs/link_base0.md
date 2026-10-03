# Linking `main` at its original base — unlocks 974 functions

## The measurement

`build/prog.elf` does not place `main` where the NSO has it:

```
battle_default_placement_data
  original address (NSO)   0xe899a0
  address in build/prog.elf 0x820980
  => main is relocated by -0x669020   (6,721,568 bytes)
```

The link uses `ld.lld -m aarch64linux` with the **default** linker script
(`tools/build_nx64.py`, `lld()`), so sections get default placement and `main`
lands wherever the link order puts it.

## Why that blocks 974 functions

Both remaining `adrp`+`add` shapes return the address of a **global**:

| shape | bodies | target |
|---|---|---|
| `adrp x0, <page> ; add x0, x0, #off ; ret` | 254 | rodata string (152 done) or `.data` global |
| `mov wM, #imm ; str wM, [x0] ; adrp ; add ; ret` | 720 | `.data` global |

The targets are real — `0x23acae8`, `0x23acb48`, `0x23acb58` and so on, all
inside `main`'s `.data` at `0x236d000`+`0x14cb10`, holding non-string bytes
(`\x01`, `j`, `\x91`, `l`).

Emitting them needs `extern` declarations of globals at those addresses, and
`adrp`+`add` is PC-relative. With `main` relocated by `0x669020`, a global placed
at original `0x23acae8` would need to sit at ELF `0x1d43ac8` for the encoded
offset to come out right, and nothing puts it there. The candidate compiles
against the relocated base, so the absolute target differs by exactly the
relocation.

## Why the 152 string getters *did* match

`strlit-ret` emits a **TU-local `static const char s[]`**, and `normalise`
resolves both sides to the same absolute address regardless of where the literal
lands. That is why 152/152 matched with no link change at all.

The distinction is the whole finding:

* a **TU-local static** works today, because the compiler chooses its address and
  the comparison is address-independent
* an **external global** cannot work until the global exists at the address the
  original encoded, which means until `main` is linked at base 0

## The change

1. **Link `main` at base `0x0`**, reproducing the NSO layout:
   `.text` at `0x0` (25,084,512 bytes), `.rodata` at `0x17ed000`
   (12,057,832), `.data` at `0x236d000` (1,362,704). This means supplying
   `ld.lld` a linker script instead of relying on `-m aarch64linux`'s default.
2. **Extract the referenced globals** from `work/main/rodata.bin` and
   `work/main/data.bin` at the addresses the 974 functions reference, and emit
   them as real symbols. The bytes are static and already on disk; only the
   placement is missing. This is *not* the relocated image — no runtime values
   are needed, just the file bytes at known offsets.
3. **`extern`-declare them** in the generated candidates so `adrp`+`add` resolves.

## Why this is also the `--from-elf` fix

`verify_matches --from-elf` compares against the linked image and reports
**89.05%** for `main` where the batch path reports 99.83%. The two disagree
because they live in different address spaces — `linked_symbols` keys on the
*module* address while the bytes come from the *linked* image, and `main` is
relocated by `0x669020` between them. Linking `main` at base 0 collapses the two
spaces and the gap should close on its own.

So this is one change that fixes **974 unmatched functions** *and* **the
verification-path discrepancy**. Nothing else on the remaining list has that
ratio.

## Blast radius, and why it is not done yet

This changes the placement of every module and the link order, so
`tools/build_nx64.py` and `tools/prog_cmake.py` both change and all four modules
must be re-verified from scratch. A partial version is worse than none: a
misplaced `.rodata` would shift every address after it and turn 25,423 verified
bodies into 25,423 mismatches.

It is a build change, not a reverse-engineering one, and it should be made as a
single deliberate step with the full four-module verification afterwards — not
improvised against a live tree.
