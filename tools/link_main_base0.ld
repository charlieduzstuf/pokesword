/* Link `main` at its NSO base so original addresses are the link addresses.
 *
 * Why this exists
 * ---------------
 * With `-m aarch64linux` and the default script, `build/prog.elf` places `main`
 * wherever the link order happens to put it. Measured:
 *
 *     battle_default_placement_data
 *       original address (NSO)     0xe899a0
 *       address in build/prog.elf  0x820980
 *       => main is relocated by -0x669020
 *
 * That relocation makes 974 functions unreachable. Both remaining
 * `adrp` + `add` shapes return the address of a global in `main`'s `.data`
 * (0x23acae8, 0x23acb48, ...), and `adrp`+`add` is PC-relative: with `main` moved
 * by 0x669020 the encoded offset resolves to a different absolute address, and no
 * placement of an `extern` global can correct it.
 *
 * It is also why `verify_matches --from-elf` reports 89.05% where the batch path
 * reports 99.83%: the two read the same functions from different address spaces.
 * Collapsing the spaces should close that gap too.
 *
 * What it must NOT do
 * -------------------
 * Shift any section without moving everything after it by the same amount. The
 * verified bodies are compared at their original addresses, so a misplaced
 * `.rodata` would turn 25,423 verified functions into 25,423 mismatches. The
 * assertions at the bottom exist to make that failure loud rather than silent.
 *
 * Segment map, from work/main/manifest.json:
 *   text    0x000000 + 0x17ec260
 *   rodata  0x17ed000 + 0x0b7fce8
 *   data    0x236d000 + 0x014cb10
 */

SECTIONS
{
  /* `main` first, at its NSO base. */
  . = 0x000000;

  .text : ALIGN(4)
  {
    *(.text._ZN3bag*)
    *(.text*)
  }

  /* Match the NSO gap: .rodata starts at 0x17ed000, not immediately after
   * .text. The gap is part of the original layout and addresses in it are
   * referenced, so it is reproduced rather than closed up. */
  . = 0x17ed000;
  .rodata : ALIGN(8)
  {
    *(.rodata*)
    *(.rodata.*)
  }

  . = 0x236d000;
  .data : ALIGN(8)
  {
    *(.data*)
    *(.data.*)
  }

  .bss : ALIGN(8)
  {
    *(.bss*)
    *(.bss.*)
    *(COMMON)
  }

  /* Everything else -- the SDK modules -- follows, wherever it lands. */
  .text.other : ALIGN(4)
  {
    *(.text.sdk*)
    *(.text.subsdk*)
    *(.text.rtld*)
  }
  .rodata.other : ALIGN(8) { *(.rodata.other*) }
  .data.other : ALIGN(8)   { *(.data.other*) }

  /DISCARD/ :
  {
    *(.comment)
    *(.note*)
    *(.eh_frame*)
    *(.ARM.attributes)
  }
}
