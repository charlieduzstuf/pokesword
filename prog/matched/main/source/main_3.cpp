/* main -- 48 functions verified to match the original.
 *
 * These bodies were synthesised from the instruction stream by
 * tools/auto_match.py and confirmed by compiling them for
 * aarch64-none-elf and comparing against data/main.elf with
 * tools/match_harness.py. Signatures are recovered, not invented:
 * changing a parameter type changes the codegen and the mangled
 * name, so edit with care.
 *
 * Tail-call thunks were verified strictly: the branch
 * destination was checked against the relocation record the
 * compiler emitted, not ignored.
 *
 * Generated file -- re-run tools/decomp_project.py to regenerate.
 */

/* Self-contained: a bare-metal aarch64-none-elf target has no
 * <stdint.h> under -nostdinc++. */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long int64_t;
typedef unsigned long uintptr_t;

// sub_210  (orig 0x210, ret_only)
void main_f_210() {}

// sub_2ba210  (orig 0x2ba210, ret_only)
void main_f_2ba210() {}

// sub_305c10  (orig 0x305c10, ret_only)
void main_f_305c10() {}

// sub_50b0c0  (orig 0x50b0c0, mov_ret)
uint32_t main_f_50b0c0() { return 1; }

// sub_50c2d0  (orig 0x50c2d0, ret_only)
void main_f_50c2d0() {}

// sub_50c2e0  (orig 0x50c2e0, ret_only)
void main_f_50c2e0() {}

// sub_50c2f0  (orig 0x50c2f0, ret_only)
void main_f_50c2f0() {}

// sub_50c300  (orig 0x50c300, ret_only)
void main_f_50c300() {}

// sub_5c6850  (orig 0x5c6850, ret_only)
void main_f_5c6850() {}

// sub_5db430  (orig 0x5db430, ret_only)
void main_f_5db430() {}

// sub_67abb0  (orig 0x67abb0, ret_only)
void main_f_67abb0() {}

// sub_70d9f0  (orig 0x70d9f0, ret_only)
void main_f_70d9f0() {}

// sub_70da00  (orig 0x70da00, ret_only)
void main_f_70da00() {}

// sub_717010  (orig 0x717010, ret_only)
void main_f_717010() {}

// sub_782ea0  (orig 0x782ea0, ret_only)
void main_f_782ea0() {}

// sub_c628c0  (orig 0xc628c0, mov_ret)
uint32_t main_f_c628c0() { return 1; }

// sub_1130b50  (orig 0x1130b50, ret_only)
void main_f_1130b50() {}

// sub_14e6e00  (orig 0x14e6e00, ret_only)
void main_f_14e6e00() {}

// sub_15bb240  (orig 0x15bb240, ret_only)
void main_f_15bb240() {}

// sub_15d81f0  (orig 0x15d81f0, mov_ret)
uint32_t main_f_15d81f0() { return 0; }

// sub_1688290  (orig 0x1688290, ret_only)
void main_f_1688290() {}

// sub_1688cd0  (orig 0x1688cd0, ret_only)
void main_f_1688cd0() {}

// sub_168dfc0  (orig 0x168dfc0, mov_ret)
uint32_t main_f_168dfc0() { return 400; }

// sub_168dfe0  (orig 0x168dfe0, mov_ret)
uint32_t main_f_168dfe0() { return 0; }

// sub_168dff0  (orig 0x168dff0, mov_ret)
uint32_t main_f_168dff0() { return 0; }

// sub_168e000  (orig 0x168e000, mov_ret)
uint32_t main_f_168e000() { return 1; }

// sub_168e010  (orig 0x168e010, mov_ret)
uint32_t main_f_168e010() { return 1; }

// sub_168e020  (orig 0x168e020, mov_ret)
uint32_t main_f_168e020() { return 0; }

// sub_168e030  (orig 0x168e030, mov_ret)
uint32_t main_f_168e030() { return 0; }

// sub_168e040  (orig 0x168e040, mov_ret)
uint32_t main_f_168e040() { return 0; }

// sub_168e4b0  (orig 0x168e4b0, mov_ret)
uint64_t main_f_168e4b0() { return 0; }

// sub_168e4c0  (orig 0x168e4c0, ret_only)
void main_f_168e4c0() {}

// sub_168e780  (orig 0x168e780, mov_ret)
uint64_t main_f_168e780() { return 0; }

// sub_168e790  (orig 0x168e790, ret_only)
void main_f_168e790() {}

// sub_169aed0  (orig 0x169aed0, ret_only)
void main_f_169aed0() {}

// sub_1723320  (orig 0x1723320, ret_only)
void main_f_1723320() {}

// sub_1724e60  (orig 0x1724e60, ret_only)
void main_f_1724e60() {}

// sub_1733d30  (orig 0x1733d30, ret_only)
void main_f_1733d30() {}

// sub_1733e40  (orig 0x1733e40, ret_only)
void main_f_1733e40() {}

// sub_1739d10  (orig 0x1739d10, ret_only)
void main_f_1739d10() {}

// sub_173cfa0  (orig 0x173cfa0, ret_only)
void main_f_173cfa0() {}

// sub_1777f30  (orig 0x1777f30, mov_ret)
uint32_t main_f_1777f30() { return 0; }

// sub_1777f40  (orig 0x1777f40, mov_ret)
uint32_t main_f_1777f40() { return 0; }

// sub_17792a0  (orig 0x17792a0, ret_only)
void main_f_17792a0() {}

// sub_177cde0  (orig 0x177cde0, ret_only)
void main_f_177cde0() {}

// sub_1787c10  (orig 0x1787c10, ret_only)
void main_f_1787c10() {}

// sub_17913f0  (orig 0x17913f0, ret_only)
void main_f_17913f0() {}

// sub_17a9e80  (orig 0x17a9e80, ret_only)
void main_f_17a9e80() {}

