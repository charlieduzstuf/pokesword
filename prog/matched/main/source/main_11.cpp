/* main -- 2000 functions verified to match the original.
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
#include <arm_neon.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long int64_t;
typedef unsigned long uintptr_t;

// sub_139cf70  (orig 0x139cf70, ptr_add)
void* main_f_139cf70(void* a0) { return (char*)a0 + 8; }

// sub_139ea50  (orig 0x139ea50, getter)
uint32_t main_f_139ea50(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_139ff50  (orig 0x139ff50, ret_only)
void main_f_139ff50() {}

// sub_139ffb0  (orig 0x139ffb0, getter)
uint32_t main_f_139ffb0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_13a0f80  (orig 0x13a0f80, setter-chain)
void main_f_13a0f80(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint8_t*)((char*)(a0) + 8) = 0; *(uint32_t*)((char*)(a0) + 128) = 0; }

// sub_13a11f0  (orig 0x13a11f0, compare)
bool main_f_13a11f0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 4)) == (uint64_t)(2); }

// sub_13a1200  (orig 0x13a1200, getter)
uint32_t main_f_13a1200(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_13a3530  (orig 0x13a3530, strlit-ret)
const char *main_f_13a3530() { static char g_f_13a3530[1]; __asm__ volatile("" ::: "memory"); return g_f_13a3530; }

// sub_13a5870  (orig 0x13a5870, mov_ret)
uint32_t main_f_13a5870() { return 1; }

// sub_13a5940  (orig 0x13a5940, ret_only)
void main_f_13a5940() {}

// sub_13a60c0  (orig 0x13a60c0, mov_ret)
uint32_t main_f_13a60c0() { return 1; }

// sub_13a60d0  (orig 0x13a60d0, ret_only)
void main_f_13a60d0() {}

// sub_13a6210  (orig 0x13a6210, ret_only)
void main_f_13a6210() {}

// sub_13a6b20  (orig 0x13a6b20, ret_only)
void main_f_13a6b20() {}

// sub_13a6b30  (orig 0x13a6b30, ret_only)
void main_f_13a6b30() {}

// sub_13a6b40  (orig 0x13a6b40, ret_only)
void main_f_13a6b40() {}

// sub_13a72d0  (orig 0x13a72d0, mov_ret)
uint32_t main_f_13a72d0() { return 1; }

// sub_13a7fd0  (orig 0x13a7fd0, ptr_add)
void* main_f_13a7fd0(void* a0) { return (char*)a0 + 96; }

// sub_13a9210  (orig 0x13a9210, ret_only)
void main_f_13a9210() {}

// sub_13a9220  (orig 0x13a9220, copy2)
void main_f_13a9220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a9230  (orig 0x13a9230, copy2)
void main_f_13a9230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a94c0  (orig 0x13a94c0, ret_only)
void main_f_13a94c0() {}

// sub_13a94d0  (orig 0x13a94d0, copy2)
void main_f_13a94d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a94e0  (orig 0x13a94e0, copy2)
void main_f_13a94e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a9670  (orig 0x13a9670, ret_only)
void main_f_13a9670() {}

// sub_13a9680  (orig 0x13a9680, copy2)
void main_f_13a9680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a9690  (orig 0x13a9690, copy2)
void main_f_13a9690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a9900  (orig 0x13a9900, ret_only)
void main_f_13a9900() {}

// sub_13a9910  (orig 0x13a9910, copy2)
void main_f_13a9910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a9920  (orig 0x13a9920, copy2)
void main_f_13a9920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a99b0  (orig 0x13a99b0, ret_only)
void main_f_13a99b0() {}

// sub_13a99c0  (orig 0x13a99c0, copy2)
void main_f_13a99c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13a99d0  (orig 0x13a99d0, copy2)
void main_f_13a99d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa040  (orig 0x13aa040, ret_only)
void main_f_13aa040() {}

// sub_13aa050  (orig 0x13aa050, copy2)
void main_f_13aa050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa060  (orig 0x13aa060, copy2)
void main_f_13aa060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa0f0  (orig 0x13aa0f0, ret_only)
void main_f_13aa0f0() {}

// sub_13aa100  (orig 0x13aa100, copy2)
void main_f_13aa100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa110  (orig 0x13aa110, copy2)
void main_f_13aa110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa420  (orig 0x13aa420, ret_only)
void main_f_13aa420() {}

// sub_13aa430  (orig 0x13aa430, copy2)
void main_f_13aa430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa440  (orig 0x13aa440, copy2)
void main_f_13aa440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa4d0  (orig 0x13aa4d0, ret_only)
void main_f_13aa4d0() {}

// sub_13aa4e0  (orig 0x13aa4e0, copy2)
void main_f_13aa4e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa4f0  (orig 0x13aa4f0, copy2)
void main_f_13aa4f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa890  (orig 0x13aa890, ret_only)
void main_f_13aa890() {}

// sub_13aa8a0  (orig 0x13aa8a0, copy2)
void main_f_13aa8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa8b0  (orig 0x13aa8b0, copy2)
void main_f_13aa8b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa940  (orig 0x13aa940, ret_only)
void main_f_13aa940() {}

// sub_13aa950  (orig 0x13aa950, copy2)
void main_f_13aa950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aa960  (orig 0x13aa960, copy2)
void main_f_13aa960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aab50  (orig 0x13aab50, ret_only)
void main_f_13aab50() {}

// sub_13aab60  (orig 0x13aab60, copy2)
void main_f_13aab60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aab70  (orig 0x13aab70, copy2)
void main_f_13aab70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aac00  (orig 0x13aac00, ret_only)
void main_f_13aac00() {}

// sub_13aac10  (orig 0x13aac10, copy2)
void main_f_13aac10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aac20  (orig 0x13aac20, copy2)
void main_f_13aac20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aafd0  (orig 0x13aafd0, ret_only)
void main_f_13aafd0() {}

// sub_13aafe0  (orig 0x13aafe0, copy2)
void main_f_13aafe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aaff0  (orig 0x13aaff0, copy2)
void main_f_13aaff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab080  (orig 0x13ab080, ret_only)
void main_f_13ab080() {}

// sub_13ab090  (orig 0x13ab090, copy2)
void main_f_13ab090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab0a0  (orig 0x13ab0a0, copy2)
void main_f_13ab0a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab120  (orig 0x13ab120, ret_only)
void main_f_13ab120() {}

// sub_13ab130  (orig 0x13ab130, copy2)
void main_f_13ab130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab140  (orig 0x13ab140, copy2)
void main_f_13ab140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab330  (orig 0x13ab330, ret_only)
void main_f_13ab330() {}

// sub_13ab340  (orig 0x13ab340, copy2)
void main_f_13ab340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab350  (orig 0x13ab350, copy2)
void main_f_13ab350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab3d0  (orig 0x13ab3d0, ret_only)
void main_f_13ab3d0() {}

// sub_13ab3e0  (orig 0x13ab3e0, copy2)
void main_f_13ab3e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ab3f0  (orig 0x13ab3f0, copy2)
void main_f_13ab3f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aba40  (orig 0x13aba40, ret_only)
void main_f_13aba40() {}

// sub_13aba50  (orig 0x13aba50, copy2)
void main_f_13aba50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aba60  (orig 0x13aba60, copy2)
void main_f_13aba60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13aba90  (orig 0x13aba90, ret_only)
void main_f_13aba90() {}

// sub_13abaa0  (orig 0x13abaa0, copy2)
void main_f_13abaa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abab0  (orig 0x13abab0, copy2)
void main_f_13abab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abb40  (orig 0x13abb40, ret_only)
void main_f_13abb40() {}

// sub_13abb50  (orig 0x13abb50, copy2)
void main_f_13abb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abb60  (orig 0x13abb60, copy2)
void main_f_13abb60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abcd0  (orig 0x13abcd0, ret_only)
void main_f_13abcd0() {}

// sub_13abce0  (orig 0x13abce0, copy2)
void main_f_13abce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abcf0  (orig 0x13abcf0, copy2)
void main_f_13abcf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abe90  (orig 0x13abe90, ret_only)
void main_f_13abe90() {}

// sub_13abea0  (orig 0x13abea0, copy2)
void main_f_13abea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abeb0  (orig 0x13abeb0, copy2)
void main_f_13abeb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abf80  (orig 0x13abf80, ret_only)
void main_f_13abf80() {}

// sub_13abf90  (orig 0x13abf90, copy2)
void main_f_13abf90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13abfa0  (orig 0x13abfa0, copy2)
void main_f_13abfa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac110  (orig 0x13ac110, ret_only)
void main_f_13ac110() {}

// sub_13ac120  (orig 0x13ac120, copy2)
void main_f_13ac120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac130  (orig 0x13ac130, copy2)
void main_f_13ac130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac310  (orig 0x13ac310, ret_only)
void main_f_13ac310() {}

// sub_13ac320  (orig 0x13ac320, copy2)
void main_f_13ac320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac330  (orig 0x13ac330, copy2)
void main_f_13ac330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac460  (orig 0x13ac460, ret_only)
void main_f_13ac460() {}

// sub_13ac470  (orig 0x13ac470, copy2)
void main_f_13ac470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac480  (orig 0x13ac480, copy2)
void main_f_13ac480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ac490  (orig 0x13ac490, strlit-ret)
const char *main_f_13ac490() { static char g_f_13ac490[1]; __asm__ volatile("" ::: "memory"); return g_f_13ac490; }

// sub_13ac760  (orig 0x13ac760, getter-chain)
uint64_t main_f_13ac760(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 132))) + 832); }

// sub_13aca70  (orig 0x13aca70, mov_ret)
uint32_t main_f_13aca70() { return 1; }

// sub_13ae820  (orig 0x13ae820, mov_ret)
uint64_t main_f_13ae820() { return 0; }

// sub_13ae830  (orig 0x13ae830, mov_ret)
uint64_t main_f_13ae830() { return 0; }

// sub_13ae840  (orig 0x13ae840, mov_ret)
uint64_t main_f_13ae840() { return 0; }

// sub_13ae850  (orig 0x13ae850, mov_ret)
uint64_t main_f_13ae850() { return 0; }

// sub_13ae860  (orig 0x13ae860, mov_ret)
uint64_t main_f_13ae860() { return 0; }

// sub_13ae870  (orig 0x13ae870, mov_ret)
uint64_t main_f_13ae870() { return 0; }

// sub_13ae880  (orig 0x13ae880, mov_ret)
uint64_t main_f_13ae880() { return 0; }

// sub_13ae890  (orig 0x13ae890, mov_ret)
uint64_t main_f_13ae890() { return 0; }

// sub_13ae8a0  (orig 0x13ae8a0, mov_ret)
uint64_t main_f_13ae8a0() { return 0; }

// sub_13ae8b0  (orig 0x13ae8b0, mov_ret)
uint32_t main_f_13ae8b0() { return 1; }

// sub_13ae8c0  (orig 0x13ae8c0, mov_ret)
uint32_t main_f_13ae8c0() { return 1; }

// sub_13ae8d0  (orig 0x13ae8d0, mov_ret)
uint32_t main_f_13ae8d0() { return 1; }

// sub_13ae8e0  (orig 0x13ae8e0, mov_ret)
uint32_t main_f_13ae8e0() { return 1; }

// sub_13ae8f0  (orig 0x13ae8f0, mov_ret)
uint32_t main_f_13ae8f0() { return 1; }

// sub_13ae900  (orig 0x13ae900, mov_ret)
uint32_t main_f_13ae900() { return 1; }

// sub_13b0130  (orig 0x13b0130, mov_ret)
uint32_t main_f_13b0130() { return 1; }

// sub_13b09e0  (orig 0x13b09e0, mov_ret)
uint32_t main_f_13b09e0() { return 1; }

// sub_13b2050  (orig 0x13b2050, ret_only)
void main_f_13b2050() {}

// sub_13b2090  (orig 0x13b2090, ret_only)
void main_f_13b2090() {}

// sub_13b2230  (orig 0x13b2230, mov_ret)
uint32_t main_f_13b2230() { return 1; }

// sub_13b2240  (orig 0x13b2240, mov_ret)
uint32_t main_f_13b2240() { return 1; }

// sub_13b2250  (orig 0x13b2250, mov_ret)
uint32_t main_f_13b2250() { return 1; }

// sub_13b2310  (orig 0x13b2310, ptr_add)
void* main_f_13b2310(void* a0) { return (char*)a0 + 104; }

// sub_13b2320  (orig 0x13b2320, copy2)
void main_f_13b2320(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1)); }

// sub_13b2330  (orig 0x13b2330, ptr_add)
void* main_f_13b2330(void* a0) { return (char*)a0 + 112; }

// sub_13b4450  (orig 0x13b4450, ret_only)
void main_f_13b4450() {}

// sub_13b4460  (orig 0x13b4460, copy2)
void main_f_13b4460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4470  (orig 0x13b4470, copy2)
void main_f_13b4470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b45b0  (orig 0x13b45b0, ret_only)
void main_f_13b45b0() {}

// sub_13b45c0  (orig 0x13b45c0, copy2)
void main_f_13b45c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b45d0  (orig 0x13b45d0, copy2)
void main_f_13b45d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4660  (orig 0x13b4660, ret_only)
void main_f_13b4660() {}

// sub_13b4670  (orig 0x13b4670, copy2)
void main_f_13b4670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4680  (orig 0x13b4680, copy2)
void main_f_13b4680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4990  (orig 0x13b4990, ret_only)
void main_f_13b4990() {}

// sub_13b49a0  (orig 0x13b49a0, copy2)
void main_f_13b49a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b49b0  (orig 0x13b49b0, copy2)
void main_f_13b49b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4be0  (orig 0x13b4be0, ret_only)
void main_f_13b4be0() {}

// sub_13b4bf0  (orig 0x13b4bf0, copy2)
void main_f_13b4bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4c00  (orig 0x13b4c00, copy2)
void main_f_13b4c00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4e30  (orig 0x13b4e30, ret_only)
void main_f_13b4e30() {}

// sub_13b4e40  (orig 0x13b4e40, copy2)
void main_f_13b4e40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b4e50  (orig 0x13b4e50, copy2)
void main_f_13b4e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b50e0  (orig 0x13b50e0, ret_only)
void main_f_13b50e0() {}

// sub_13b50f0  (orig 0x13b50f0, copy2)
void main_f_13b50f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5100  (orig 0x13b5100, copy2)
void main_f_13b5100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5470  (orig 0x13b5470, ret_only)
void main_f_13b5470() {}

// sub_13b5480  (orig 0x13b5480, copy2)
void main_f_13b5480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5490  (orig 0x13b5490, copy2)
void main_f_13b5490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5730  (orig 0x13b5730, ret_only)
void main_f_13b5730() {}

// sub_13b5740  (orig 0x13b5740, copy2)
void main_f_13b5740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5750  (orig 0x13b5750, copy2)
void main_f_13b5750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5a60  (orig 0x13b5a60, ret_only)
void main_f_13b5a60() {}

// sub_13b5a70  (orig 0x13b5a70, copy2)
void main_f_13b5a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5a80  (orig 0x13b5a80, copy2)
void main_f_13b5a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5d10  (orig 0x13b5d10, ret_only)
void main_f_13b5d10() {}

// sub_13b5d20  (orig 0x13b5d20, copy2)
void main_f_13b5d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5d30  (orig 0x13b5d30, copy2)
void main_f_13b5d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5fc0  (orig 0x13b5fc0, ret_only)
void main_f_13b5fc0() {}

// sub_13b5fd0  (orig 0x13b5fd0, copy2)
void main_f_13b5fd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b5fe0  (orig 0x13b5fe0, copy2)
void main_f_13b5fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6360  (orig 0x13b6360, ret_only)
void main_f_13b6360() {}

// sub_13b6370  (orig 0x13b6370, copy2)
void main_f_13b6370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6380  (orig 0x13b6380, copy2)
void main_f_13b6380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6700  (orig 0x13b6700, ret_only)
void main_f_13b6700() {}

// sub_13b6710  (orig 0x13b6710, copy2)
void main_f_13b6710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6720  (orig 0x13b6720, copy2)
void main_f_13b6720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6b20  (orig 0x13b6b20, ret_only)
void main_f_13b6b20() {}

// sub_13b6b30  (orig 0x13b6b30, copy2)
void main_f_13b6b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6b40  (orig 0x13b6b40, copy2)
void main_f_13b6b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6f40  (orig 0x13b6f40, ret_only)
void main_f_13b6f40() {}

// sub_13b6f50  (orig 0x13b6f50, copy2)
void main_f_13b6f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b6f60  (orig 0x13b6f60, copy2)
void main_f_13b6f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7360  (orig 0x13b7360, ret_only)
void main_f_13b7360() {}

// sub_13b7370  (orig 0x13b7370, copy2)
void main_f_13b7370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7380  (orig 0x13b7380, copy2)
void main_f_13b7380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b73c0  (orig 0x13b73c0, ret_only)
void main_f_13b73c0() {}

// sub_13b73d0  (orig 0x13b73d0, copy2)
void main_f_13b73d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b73e0  (orig 0x13b73e0, copy2)
void main_f_13b73e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7590  (orig 0x13b7590, ret_only)
void main_f_13b7590() {}

// sub_13b75a0  (orig 0x13b75a0, copy2)
void main_f_13b75a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b75b0  (orig 0x13b75b0, copy2)
void main_f_13b75b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7640  (orig 0x13b7640, ret_only)
void main_f_13b7640() {}

// sub_13b7650  (orig 0x13b7650, copy2)
void main_f_13b7650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7660  (orig 0x13b7660, copy2)
void main_f_13b7660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7960  (orig 0x13b7960, ret_only)
void main_f_13b7960() {}

// sub_13b7970  (orig 0x13b7970, copy2)
void main_f_13b7970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7980  (orig 0x13b7980, copy2)
void main_f_13b7980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7a70  (orig 0x13b7a70, ret_only)
void main_f_13b7a70() {}

// sub_13b7a80  (orig 0x13b7a80, copy2)
void main_f_13b7a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7a90  (orig 0x13b7a90, copy2)
void main_f_13b7a90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7b40  (orig 0x13b7b40, ret_only)
void main_f_13b7b40() {}

// sub_13b7b50  (orig 0x13b7b50, copy2)
void main_f_13b7b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7b60  (orig 0x13b7b60, copy2)
void main_f_13b7b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7c10  (orig 0x13b7c10, ret_only)
void main_f_13b7c10() {}

// sub_13b7c20  (orig 0x13b7c20, copy2)
void main_f_13b7c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b7c30  (orig 0x13b7c30, copy2)
void main_f_13b7c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8050  (orig 0x13b8050, ret_only)
void main_f_13b8050() {}

// sub_13b8060  (orig 0x13b8060, copy2)
void main_f_13b8060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8070  (orig 0x13b8070, copy2)
void main_f_13b8070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8520  (orig 0x13b8520, ret_only)
void main_f_13b8520() {}

// sub_13b8530  (orig 0x13b8530, copy2)
void main_f_13b8530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8540  (orig 0x13b8540, copy2)
void main_f_13b8540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8660  (orig 0x13b8660, ret_only)
void main_f_13b8660() {}

// sub_13b8670  (orig 0x13b8670, copy2)
void main_f_13b8670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8680  (orig 0x13b8680, copy2)
void main_f_13b8680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8710  (orig 0x13b8710, ret_only)
void main_f_13b8710() {}

// sub_13b8720  (orig 0x13b8720, copy2)
void main_f_13b8720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8730  (orig 0x13b8730, copy2)
void main_f_13b8730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b89b0  (orig 0x13b89b0, ret_only)
void main_f_13b89b0() {}

// sub_13b89c0  (orig 0x13b89c0, copy2)
void main_f_13b89c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b89d0  (orig 0x13b89d0, copy2)
void main_f_13b89d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8c00  (orig 0x13b8c00, ret_only)
void main_f_13b8c00() {}

// sub_13b8c10  (orig 0x13b8c10, copy2)
void main_f_13b8c10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8c20  (orig 0x13b8c20, copy2)
void main_f_13b8c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8cb0  (orig 0x13b8cb0, ret_only)
void main_f_13b8cb0() {}

// sub_13b8cc0  (orig 0x13b8cc0, copy2)
void main_f_13b8cc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8cd0  (orig 0x13b8cd0, copy2)
void main_f_13b8cd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8d50  (orig 0x13b8d50, ret_only)
void main_f_13b8d50() {}

// sub_13b8d60  (orig 0x13b8d60, copy2)
void main_f_13b8d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8d70  (orig 0x13b8d70, copy2)
void main_f_13b8d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8e00  (orig 0x13b8e00, ret_only)
void main_f_13b8e00() {}

// sub_13b8e10  (orig 0x13b8e10, copy2)
void main_f_13b8e10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b8e20  (orig 0x13b8e20, copy2)
void main_f_13b8e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b9110  (orig 0x13b9110, ret_only)
void main_f_13b9110() {}

// sub_13b9120  (orig 0x13b9120, copy2)
void main_f_13b9120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b9130  (orig 0x13b9130, copy2)
void main_f_13b9130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13b91c0  (orig 0x13b91c0, strlit-ret)
const char *main_f_13b91c0() { static char g_f_13b91c0[1]; __asm__ volatile("" ::: "memory"); return g_f_13b91c0; }

// sub_13bd600  (orig 0x13bd600, strlit-ret)
const char *main_f_13bd600() { static char g_f_13bd600[1]; __asm__ volatile("" ::: "memory"); return g_f_13bd600; }

// sub_13bf710  (orig 0x13bf710, mov_ret)
uint32_t main_f_13bf710() { return 1; }

// sub_13ca620  (orig 0x13ca620, ret_only)
void main_f_13ca620() {}

// sub_13ca6d0  (orig 0x13ca6d0, ret_only)
void main_f_13ca6d0() {}

// sub_13cd090  (orig 0x13cd090, ret_only)
void main_f_13cd090() {}

// sub_13cee80  (orig 0x13cee80, ret_only)
void main_f_13cee80() {}

// sub_13cee90  (orig 0x13cee90, copy2)
void main_f_13cee90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ceea0  (orig 0x13ceea0, copy2)
void main_f_13ceea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d4ea0  (orig 0x13d4ea0, ret_only)
void main_f_13d4ea0() {}

// sub_13d4eb0  (orig 0x13d4eb0, copy2)
void main_f_13d4eb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d4ec0  (orig 0x13d4ec0, copy2)
void main_f_13d4ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d4f50  (orig 0x13d4f50, ret_only)
void main_f_13d4f50() {}

// sub_13d4f60  (orig 0x13d4f60, copy2)
void main_f_13d4f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d4f70  (orig 0x13d4f70, copy2)
void main_f_13d4f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d52e0  (orig 0x13d52e0, ret_only)
void main_f_13d52e0() {}

// sub_13d52f0  (orig 0x13d52f0, copy2)
void main_f_13d52f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5300  (orig 0x13d5300, copy2)
void main_f_13d5300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5390  (orig 0x13d5390, ret_only)
void main_f_13d5390() {}

// sub_13d53a0  (orig 0x13d53a0, copy2)
void main_f_13d53a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d53b0  (orig 0x13d53b0, copy2)
void main_f_13d53b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5860  (orig 0x13d5860, ret_only)
void main_f_13d5860() {}

// sub_13d5870  (orig 0x13d5870, copy2)
void main_f_13d5870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5880  (orig 0x13d5880, copy2)
void main_f_13d5880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5910  (orig 0x13d5910, ret_only)
void main_f_13d5910() {}

// sub_13d5920  (orig 0x13d5920, copy2)
void main_f_13d5920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5930  (orig 0x13d5930, copy2)
void main_f_13d5930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5d30  (orig 0x13d5d30, ret_only)
void main_f_13d5d30() {}

// sub_13d5d40  (orig 0x13d5d40, copy2)
void main_f_13d5d40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5d50  (orig 0x13d5d50, copy2)
void main_f_13d5d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5de0  (orig 0x13d5de0, ret_only)
void main_f_13d5de0() {}

// sub_13d5df0  (orig 0x13d5df0, copy2)
void main_f_13d5df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5e00  (orig 0x13d5e00, copy2)
void main_f_13d5e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5f80  (orig 0x13d5f80, ret_only)
void main_f_13d5f80() {}

// sub_13d5f90  (orig 0x13d5f90, copy2)
void main_f_13d5f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d5fa0  (orig 0x13d5fa0, copy2)
void main_f_13d5fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6030  (orig 0x13d6030, ret_only)
void main_f_13d6030() {}

// sub_13d6040  (orig 0x13d6040, copy2)
void main_f_13d6040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6050  (orig 0x13d6050, copy2)
void main_f_13d6050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6100  (orig 0x13d6100, ret_only)
void main_f_13d6100() {}

// sub_13d6110  (orig 0x13d6110, copy2)
void main_f_13d6110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6120  (orig 0x13d6120, copy2)
void main_f_13d6120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d61b0  (orig 0x13d61b0, ret_only)
void main_f_13d61b0() {}

// sub_13d61c0  (orig 0x13d61c0, copy2)
void main_f_13d61c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d61d0  (orig 0x13d61d0, copy2)
void main_f_13d61d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6260  (orig 0x13d6260, ret_only)
void main_f_13d6260() {}

// sub_13d6270  (orig 0x13d6270, copy2)
void main_f_13d6270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6280  (orig 0x13d6280, copy2)
void main_f_13d6280(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6310  (orig 0x13d6310, ret_only)
void main_f_13d6310() {}

// sub_13d6320  (orig 0x13d6320, copy2)
void main_f_13d6320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6330  (orig 0x13d6330, copy2)
void main_f_13d6330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6660  (orig 0x13d6660, ret_only)
void main_f_13d6660() {}

// sub_13d6670  (orig 0x13d6670, copy2)
void main_f_13d6670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6680  (orig 0x13d6680, copy2)
void main_f_13d6680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6710  (orig 0x13d6710, ret_only)
void main_f_13d6710() {}

// sub_13d6720  (orig 0x13d6720, copy2)
void main_f_13d6720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6730  (orig 0x13d6730, copy2)
void main_f_13d6730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6d90  (orig 0x13d6d90, ret_only)
void main_f_13d6d90() {}

// sub_13d6da0  (orig 0x13d6da0, copy2)
void main_f_13d6da0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6db0  (orig 0x13d6db0, copy2)
void main_f_13d6db0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6e40  (orig 0x13d6e40, ret_only)
void main_f_13d6e40() {}

// sub_13d6e50  (orig 0x13d6e50, copy2)
void main_f_13d6e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6e60  (orig 0x13d6e60, copy2)
void main_f_13d6e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6fd0  (orig 0x13d6fd0, ret_only)
void main_f_13d6fd0() {}

// sub_13d6fe0  (orig 0x13d6fe0, copy2)
void main_f_13d6fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d6ff0  (orig 0x13d6ff0, copy2)
void main_f_13d6ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d71c0  (orig 0x13d71c0, ret_only)
void main_f_13d71c0() {}

// sub_13d71d0  (orig 0x13d71d0, copy2)
void main_f_13d71d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d71e0  (orig 0x13d71e0, copy2)
void main_f_13d71e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9b40  (orig 0x13d9b40, ret_only)
void main_f_13d9b40() {}

// sub_13d9b50  (orig 0x13d9b50, copy2)
void main_f_13d9b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9b60  (orig 0x13d9b60, copy2)
void main_f_13d9b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9d90  (orig 0x13d9d90, ret_only)
void main_f_13d9d90() {}

// sub_13d9da0  (orig 0x13d9da0, copy2)
void main_f_13d9da0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9db0  (orig 0x13d9db0, copy2)
void main_f_13d9db0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9f80  (orig 0x13d9f80, ret_only)
void main_f_13d9f80() {}

// sub_13d9f90  (orig 0x13d9f90, copy2)
void main_f_13d9f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13d9fa0  (orig 0x13d9fa0, copy2)
void main_f_13d9fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da0d0  (orig 0x13da0d0, ret_only)
void main_f_13da0d0() {}

// sub_13da0e0  (orig 0x13da0e0, copy2)
void main_f_13da0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da0f0  (orig 0x13da0f0, copy2)
void main_f_13da0f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da240  (orig 0x13da240, ret_only)
void main_f_13da240() {}

// sub_13da250  (orig 0x13da250, copy2)
void main_f_13da250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da260  (orig 0x13da260, copy2)
void main_f_13da260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da3b0  (orig 0x13da3b0, ret_only)
void main_f_13da3b0() {}

// sub_13da3c0  (orig 0x13da3c0, copy2)
void main_f_13da3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da3d0  (orig 0x13da3d0, copy2)
void main_f_13da3d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da4f0  (orig 0x13da4f0, ret_only)
void main_f_13da4f0() {}

// sub_13da500  (orig 0x13da500, copy2)
void main_f_13da500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da510  (orig 0x13da510, copy2)
void main_f_13da510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da630  (orig 0x13da630, ret_only)
void main_f_13da630() {}

// sub_13da640  (orig 0x13da640, copy2)
void main_f_13da640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da650  (orig 0x13da650, copy2)
void main_f_13da650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da770  (orig 0x13da770, ret_only)
void main_f_13da770() {}

// sub_13da780  (orig 0x13da780, copy2)
void main_f_13da780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da790  (orig 0x13da790, copy2)
void main_f_13da790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da8b0  (orig 0x13da8b0, ret_only)
void main_f_13da8b0() {}

// sub_13da8c0  (orig 0x13da8c0, copy2)
void main_f_13da8c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da8d0  (orig 0x13da8d0, copy2)
void main_f_13da8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13da9f0  (orig 0x13da9f0, ret_only)
void main_f_13da9f0() {}

// sub_13daa00  (orig 0x13daa00, copy2)
void main_f_13daa00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13daa10  (orig 0x13daa10, copy2)
void main_f_13daa10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dab30  (orig 0x13dab30, ret_only)
void main_f_13dab30() {}

// sub_13dab40  (orig 0x13dab40, copy2)
void main_f_13dab40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dab50  (orig 0x13dab50, copy2)
void main_f_13dab50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dac00  (orig 0x13dac00, ret_only)
void main_f_13dac00() {}

// sub_13dac10  (orig 0x13dac10, copy2)
void main_f_13dac10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dac20  (orig 0x13dac20, copy2)
void main_f_13dac20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dad40  (orig 0x13dad40, ret_only)
void main_f_13dad40() {}

// sub_13dad50  (orig 0x13dad50, copy2)
void main_f_13dad50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dad60  (orig 0x13dad60, copy2)
void main_f_13dad60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dae10  (orig 0x13dae10, ret_only)
void main_f_13dae10() {}

// sub_13dae20  (orig 0x13dae20, copy2)
void main_f_13dae20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dae30  (orig 0x13dae30, copy2)
void main_f_13dae30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13daf50  (orig 0x13daf50, ret_only)
void main_f_13daf50() {}

// sub_13daf60  (orig 0x13daf60, copy2)
void main_f_13daf60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13daf70  (orig 0x13daf70, copy2)
void main_f_13daf70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db020  (orig 0x13db020, ret_only)
void main_f_13db020() {}

// sub_13db030  (orig 0x13db030, copy2)
void main_f_13db030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db040  (orig 0x13db040, copy2)
void main_f_13db040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db1d0  (orig 0x13db1d0, ret_only)
void main_f_13db1d0() {}

// sub_13db1e0  (orig 0x13db1e0, copy2)
void main_f_13db1e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db1f0  (orig 0x13db1f0, copy2)
void main_f_13db1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db2a0  (orig 0x13db2a0, ret_only)
void main_f_13db2a0() {}

// sub_13db2b0  (orig 0x13db2b0, copy2)
void main_f_13db2b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db2c0  (orig 0x13db2c0, copy2)
void main_f_13db2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db4e0  (orig 0x13db4e0, ret_only)
void main_f_13db4e0() {}

// sub_13db4f0  (orig 0x13db4f0, copy2)
void main_f_13db4f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db500  (orig 0x13db500, copy2)
void main_f_13db500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db720  (orig 0x13db720, ret_only)
void main_f_13db720() {}

// sub_13db730  (orig 0x13db730, copy2)
void main_f_13db730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db740  (orig 0x13db740, copy2)
void main_f_13db740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db960  (orig 0x13db960, ret_only)
void main_f_13db960() {}

// sub_13db970  (orig 0x13db970, copy2)
void main_f_13db970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13db980  (orig 0x13db980, copy2)
void main_f_13db980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dbbb0  (orig 0x13dbbb0, ret_only)
void main_f_13dbbb0() {}

// sub_13dbbc0  (orig 0x13dbbc0, copy2)
void main_f_13dbbc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dbbd0  (orig 0x13dbbd0, copy2)
void main_f_13dbbd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dbe40  (orig 0x13dbe40, ret_only)
void main_f_13dbe40() {}

// sub_13dbe50  (orig 0x13dbe50, copy2)
void main_f_13dbe50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dbe60  (orig 0x13dbe60, copy2)
void main_f_13dbe60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dc0d0  (orig 0x13dc0d0, ret_only)
void main_f_13dc0d0() {}

// sub_13dc0e0  (orig 0x13dc0e0, copy2)
void main_f_13dc0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dc0f0  (orig 0x13dc0f0, copy2)
void main_f_13dc0f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dc4b0  (orig 0x13dc4b0, ret_only)
void main_f_13dc4b0() {}

// sub_13dc890  (orig 0x13dc890, ret_only)
void main_f_13dc890() {}

// sub_13dc980  (orig 0x13dc980, ret_only)
void main_f_13dc980() {}

// sub_13dc990  (orig 0x13dc990, copy2)
void main_f_13dc990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dc9a0  (orig 0x13dc9a0, copy2)
void main_f_13dc9a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcba0  (orig 0x13dcba0, ret_only)
void main_f_13dcba0() {}

// sub_13dcbb0  (orig 0x13dcbb0, copy2)
void main_f_13dcbb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcbc0  (orig 0x13dcbc0, copy2)
void main_f_13dcbc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcdc0  (orig 0x13dcdc0, ret_only)
void main_f_13dcdc0() {}

// sub_13dcdd0  (orig 0x13dcdd0, copy2)
void main_f_13dcdd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcde0  (orig 0x13dcde0, copy2)
void main_f_13dcde0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcfa0  (orig 0x13dcfa0, ret_only)
void main_f_13dcfa0() {}

// sub_13dcfb0  (orig 0x13dcfb0, copy2)
void main_f_13dcfb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dcfc0  (orig 0x13dcfc0, copy2)
void main_f_13dcfc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dd170  (orig 0x13dd170, ret_only)
void main_f_13dd170() {}

// sub_13dd180  (orig 0x13dd180, copy2)
void main_f_13dd180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dd190  (orig 0x13dd190, copy2)
void main_f_13dd190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dd580  (orig 0x13dd580, ret_only)
void main_f_13dd580() {}

// sub_13dd670  (orig 0x13dd670, ret_only)
void main_f_13dd670() {}

// sub_13dd680  (orig 0x13dd680, copy2)
void main_f_13dd680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dd690  (orig 0x13dd690, copy2)
void main_f_13dd690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dda80  (orig 0x13dda80, ret_only)
void main_f_13dda80() {}

// sub_13dda90  (orig 0x13dda90, copy2)
void main_f_13dda90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ddaa0  (orig 0x13ddaa0, copy2)
void main_f_13ddaa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ddd90  (orig 0x13ddd90, ret_only)
void main_f_13ddd90() {}

// sub_13ddda0  (orig 0x13ddda0, copy2)
void main_f_13ddda0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dddb0  (orig 0x13dddb0, copy2)
void main_f_13dddb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de0d0  (orig 0x13de0d0, ret_only)
void main_f_13de0d0() {}

// sub_13de0e0  (orig 0x13de0e0, copy2)
void main_f_13de0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de0f0  (orig 0x13de0f0, copy2)
void main_f_13de0f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de320  (orig 0x13de320, ret_only)
void main_f_13de320() {}

// sub_13de330  (orig 0x13de330, copy2)
void main_f_13de330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de340  (orig 0x13de340, copy2)
void main_f_13de340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de5c0  (orig 0x13de5c0, ret_only)
void main_f_13de5c0() {}

// sub_13de5d0  (orig 0x13de5d0, copy2)
void main_f_13de5d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de5e0  (orig 0x13de5e0, copy2)
void main_f_13de5e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de880  (orig 0x13de880, ret_only)
void main_f_13de880() {}

// sub_13de890  (orig 0x13de890, copy2)
void main_f_13de890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13de8a0  (orig 0x13de8a0, copy2)
void main_f_13de8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13deb90  (orig 0x13deb90, ret_only)
void main_f_13deb90() {}

// sub_13deba0  (orig 0x13deba0, copy2)
void main_f_13deba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13debb0  (orig 0x13debb0, copy2)
void main_f_13debb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ded70  (orig 0x13ded70, ret_only)
void main_f_13ded70() {}

// sub_13ded80  (orig 0x13ded80, copy2)
void main_f_13ded80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ded90  (orig 0x13ded90, copy2)
void main_f_13ded90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dede0  (orig 0x13dede0, ret_only)
void main_f_13dede0() {}

// sub_13dedf0  (orig 0x13dedf0, copy2)
void main_f_13dedf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dee00  (orig 0x13dee00, copy2)
void main_f_13dee00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dee90  (orig 0x13dee90, ret_only)
void main_f_13dee90() {}

// sub_13deea0  (orig 0x13deea0, copy2)
void main_f_13deea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13deeb0  (orig 0x13deeb0, copy2)
void main_f_13deeb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df070  (orig 0x13df070, ret_only)
void main_f_13df070() {}

// sub_13df080  (orig 0x13df080, copy2)
void main_f_13df080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df090  (orig 0x13df090, copy2)
void main_f_13df090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df250  (orig 0x13df250, ret_only)
void main_f_13df250() {}

// sub_13df260  (orig 0x13df260, copy2)
void main_f_13df260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df270  (orig 0x13df270, copy2)
void main_f_13df270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df430  (orig 0x13df430, ret_only)
void main_f_13df430() {}

// sub_13df440  (orig 0x13df440, copy2)
void main_f_13df440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df450  (orig 0x13df450, copy2)
void main_f_13df450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df610  (orig 0x13df610, ret_only)
void main_f_13df610() {}

// sub_13df620  (orig 0x13df620, copy2)
void main_f_13df620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df630  (orig 0x13df630, copy2)
void main_f_13df630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df680  (orig 0x13df680, ret_only)
void main_f_13df680() {}

// sub_13df690  (orig 0x13df690, copy2)
void main_f_13df690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df6a0  (orig 0x13df6a0, copy2)
void main_f_13df6a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df730  (orig 0x13df730, ret_only)
void main_f_13df730() {}

// sub_13df740  (orig 0x13df740, copy2)
void main_f_13df740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df750  (orig 0x13df750, copy2)
void main_f_13df750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df850  (orig 0x13df850, ret_only)
void main_f_13df850() {}

// sub_13df860  (orig 0x13df860, copy2)
void main_f_13df860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df870  (orig 0x13df870, copy2)
void main_f_13df870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df900  (orig 0x13df900, ret_only)
void main_f_13df900() {}

// sub_13df910  (orig 0x13df910, copy2)
void main_f_13df910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df920  (orig 0x13df920, copy2)
void main_f_13df920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df9d0  (orig 0x13df9d0, ret_only)
void main_f_13df9d0() {}

// sub_13df9e0  (orig 0x13df9e0, copy2)
void main_f_13df9e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13df9f0  (orig 0x13df9f0, copy2)
void main_f_13df9f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dfb40  (orig 0x13dfb40, ret_only)
void main_f_13dfb40() {}

// sub_13dfb50  (orig 0x13dfb50, copy2)
void main_f_13dfb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dfb60  (orig 0x13dfb60, copy2)
void main_f_13dfb60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dfd20  (orig 0x13dfd20, ret_only)
void main_f_13dfd20() {}

// sub_13dfd30  (orig 0x13dfd30, copy2)
void main_f_13dfd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dfd40  (orig 0x13dfd40, copy2)
void main_f_13dfd40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dff00  (orig 0x13dff00, ret_only)
void main_f_13dff00() {}

// sub_13dff10  (orig 0x13dff10, copy2)
void main_f_13dff10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13dff20  (orig 0x13dff20, copy2)
void main_f_13dff20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e00e0  (orig 0x13e00e0, ret_only)
void main_f_13e00e0() {}

// sub_13e00f0  (orig 0x13e00f0, copy2)
void main_f_13e00f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0100  (orig 0x13e0100, copy2)
void main_f_13e0100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e04e0  (orig 0x13e04e0, ret_only)
void main_f_13e04e0() {}

// sub_13e04f0  (orig 0x13e04f0, copy2)
void main_f_13e04f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0500  (orig 0x13e0500, copy2)
void main_f_13e0500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0810  (orig 0x13e0810, ret_only)
void main_f_13e0810() {}

// sub_13e0820  (orig 0x13e0820, copy2)
void main_f_13e0820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0830  (orig 0x13e0830, copy2)
void main_f_13e0830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0c30  (orig 0x13e0c30, ret_only)
void main_f_13e0c30() {}

// sub_13e0c40  (orig 0x13e0c40, copy2)
void main_f_13e0c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0c50  (orig 0x13e0c50, copy2)
void main_f_13e0c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0f00  (orig 0x13e0f00, ret_only)
void main_f_13e0f00() {}

// sub_13e0f10  (orig 0x13e0f10, copy2)
void main_f_13e0f10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e0f20  (orig 0x13e0f20, copy2)
void main_f_13e0f20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1230  (orig 0x13e1230, ret_only)
void main_f_13e1230() {}

// sub_13e1240  (orig 0x13e1240, copy2)
void main_f_13e1240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1250  (orig 0x13e1250, copy2)
void main_f_13e1250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1300  (orig 0x13e1300, ret_only)
void main_f_13e1300() {}

// sub_13e1310  (orig 0x13e1310, copy2)
void main_f_13e1310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1320  (orig 0x13e1320, copy2)
void main_f_13e1320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e13b0  (orig 0x13e13b0, ret_only)
void main_f_13e13b0() {}

// sub_13e13c0  (orig 0x13e13c0, copy2)
void main_f_13e13c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e13d0  (orig 0x13e13d0, copy2)
void main_f_13e13d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e18f0  (orig 0x13e18f0, ret_only)
void main_f_13e18f0() {}

// sub_13e1900  (orig 0x13e1900, copy2)
void main_f_13e1900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1910  (orig 0x13e1910, copy2)
void main_f_13e1910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1b50  (orig 0x13e1b50, ret_only)
void main_f_13e1b50() {}

// sub_13e1b60  (orig 0x13e1b60, copy2)
void main_f_13e1b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1b70  (orig 0x13e1b70, copy2)
void main_f_13e1b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1e80  (orig 0x13e1e80, ret_only)
void main_f_13e1e80() {}

// sub_13e1e90  (orig 0x13e1e90, copy2)
void main_f_13e1e90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e1ea0  (orig 0x13e1ea0, copy2)
void main_f_13e1ea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e2230  (orig 0x13e2230, ret_only)
void main_f_13e2230() {}

// sub_13e2240  (orig 0x13e2240, copy2)
void main_f_13e2240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e2250  (orig 0x13e2250, copy2)
void main_f_13e2250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e23a0  (orig 0x13e23a0, ret_only)
void main_f_13e23a0() {}

// sub_13e23b0  (orig 0x13e23b0, copy2)
void main_f_13e23b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e23c0  (orig 0x13e23c0, copy2)
void main_f_13e23c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e2760  (orig 0x13e2760, ret_only)
void main_f_13e2760() {}

// sub_13e2770  (orig 0x13e2770, copy2)
void main_f_13e2770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e2780  (orig 0x13e2780, copy2)
void main_f_13e2780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13e2ed0  (orig 0x13e2ed0, ptr_add)
void* main_f_13e2ed0(void* a0) { return (char*)a0 + 96; }

// sub_13e41e0  (orig 0x13e41e0, ret_only)
void main_f_13e41e0() {}

// sub_13e4a30  (orig 0x13e4a30, getter)
uint32_t main_f_13e4a30(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_13e6090  (orig 0x13e6090, getter-chain)
uint64_t main_f_13e6090(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 400); }

// sub_13e60a0  (orig 0x13e60a0, getter-chain)
uint64_t main_f_13e60a0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 384); }

// sub_13e6560  (orig 0x13e6560, strlit-ret)
const char *main_f_13e6560() { static char g_f_13e6560[1]; __asm__ volatile("" ::: "memory"); return g_f_13e6560; }

// sub_13e7ee0  (orig 0x13e7ee0, strlit-ret)
const char *main_f_13e7ee0() { static char g_f_13e7ee0[1]; __asm__ volatile("" ::: "memory"); return g_f_13e7ee0; }

// sub_13eb1b0  (orig 0x13eb1b0, strlit-ret)
const char *main_f_13eb1b0() { static char g_f_13eb1b0[1]; __asm__ volatile("" ::: "memory"); return g_f_13eb1b0; }

// sub_13ed4e0  (orig 0x13ed4e0, strlit-ret)
const char *main_f_13ed4e0() { static char g_f_13ed4e0[1]; __asm__ volatile("" ::: "memory"); return g_f_13ed4e0; }

// sub_13ef5a0  (orig 0x13ef5a0, ret_only)
void main_f_13ef5a0() {}

// sub_13ef600  (orig 0x13ef600, ret_only)
void main_f_13ef600() {}

// sub_13ef8a0  (orig 0x13ef8a0, strlit-ret)
const char *main_f_13ef8a0() { static char g_f_13ef8a0[1]; __asm__ volatile("" ::: "memory"); return g_f_13ef8a0; }

// sub_13f5f00  (orig 0x13f5f00, mov_ret)
uint64_t main_f_13f5f00() { return 0; }

// sub_13f5f10  (orig 0x13f5f10, mov_ret)
uint64_t main_f_13f5f10() { return 0; }

// sub_13f73f0  (orig 0x13f73f0, ret_only)
void main_f_13f73f0() {}

// sub_13f7400  (orig 0x13f7400, ret_only)
void main_f_13f7400() {}

// sub_13f7410  (orig 0x13f7410, ret_only)
void main_f_13f7410() {}

// sub_13f9140  (orig 0x13f9140, compare)
bool main_f_13f9140(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 896)) == (uint64_t)(0); }

// sub_13faad0  (orig 0x13faad0, const-field-set-store)
void main_f_13faad0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 1120);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 108) = (uint8_t)(t1);
}

// sub_13fb830  (orig 0x13fb830, copy2)
void main_f_13fb830(void* a0) { *(uint64_t*)((char*)(a0) + 104) = *(uint64_t*)((char*)(a0) + 96); }

// sub_1400490  (orig 0x1400490, setter-chain)
void main_f_1400490(void* a0, uint64_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) { *(uint64_t*)((char*)(a0) + 504) = a1; *(uint32_t*)((char*)(a0) + 520) = a2; *(uint32_t*)((char*)(a0) + 524) = a3; *(uint32_t*)((char*)(a0) + 528) = a4; *(uint32_t*)((char*)(a0) + 532) = a5; }

// sub_1400540  (orig 0x1400540, setter-chain)
void main_f_1400540(void* a0, uint64_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) { *(uint64_t*)((char*)(a0) + 512) = a1; *(uint32_t*)((char*)(a0) + 536) = a2; *(uint32_t*)((char*)(a0) + 540) = a3; *(uint32_t*)((char*)(a0) + 544) = a4; *(uint32_t*)((char*)(a0) + 548) = a5; }

// sub_1400700  (orig 0x1400700, mov_ret)
uint32_t main_f_1400700() { return 10; }

// sub_1400710  (orig 0x1400710, indexed-getter)
uint64_t main_f_1400710(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1400720  (orig 0x1400720, indexed-getter)
uint64_t main_f_1400720(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1401dc0  (orig 0x1401dc0, mov_ret)
uint32_t main_f_1401dc0() { return 1; }

// sub_140cc20  (orig 0x140cc20, mov_ret)
uint32_t main_f_140cc20() { return 1; }

// sub_140cc30  (orig 0x140cc30, ret_only)
void main_f_140cc30() {}

// sub_140cc40  (orig 0x140cc40, ret_only)
void main_f_140cc40() {}

// sub_140d4b0  (orig 0x140d4b0, getter)
uint64_t main_f_140d4b0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_140d620  (orig 0x140d620, mov_ret)
uint32_t main_f_140d620() { return 1; }

// sub_140d630  (orig 0x140d630, indexed-getter)
uint64_t main_f_140d630(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_140d640  (orig 0x140d640, indexed-getter)
uint64_t main_f_140d640(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_140e480  (orig 0x140e480, ret_only)
void main_f_140e480() {}

// sub_140e490  (orig 0x140e490, ret_only)
void main_f_140e490() {}

// sub_140ea40  (orig 0x140ea40, mov_ret)
uint32_t main_f_140ea40() { return 1; }

// sub_1411e90  (orig 0x1411e90, ret_only)
void main_f_1411e90() {}

// sub_1412bc0  (orig 0x1412bc0, ret_only)
void main_f_1412bc0() {}

// sub_1412bd0  (orig 0x1412bd0, copy2)
void main_f_1412bd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412be0  (orig 0x1412be0, copy2)
void main_f_1412be0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412c40  (orig 0x1412c40, ret_only)
void main_f_1412c40() {}

// sub_1412c50  (orig 0x1412c50, copy2)
void main_f_1412c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412c60  (orig 0x1412c60, copy2)
void main_f_1412c60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412cf0  (orig 0x1412cf0, ret_only)
void main_f_1412cf0() {}

// sub_1412d00  (orig 0x1412d00, copy2)
void main_f_1412d00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412d10  (orig 0x1412d10, copy2)
void main_f_1412d10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412d30  (orig 0x1412d30, ret_only)
void main_f_1412d30() {}

// sub_1412d40  (orig 0x1412d40, copy2)
void main_f_1412d40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412d50  (orig 0x1412d50, copy2)
void main_f_1412d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412d70  (orig 0x1412d70, ret_only)
void main_f_1412d70() {}

// sub_1412d80  (orig 0x1412d80, copy2)
void main_f_1412d80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1412d90  (orig 0x1412d90, copy2)
void main_f_1412d90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1413290  (orig 0x1413290, ret_only)
void main_f_1413290() {}

// sub_1416250  (orig 0x1416250, ret_only)
void main_f_1416250() {}

// sub_1416260  (orig 0x1416260, copy2)
void main_f_1416260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1416270  (orig 0x1416270, copy2)
void main_f_1416270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14163a0  (orig 0x14163a0, ret_only)
void main_f_14163a0() {}

// sub_14163b0  (orig 0x14163b0, copy2)
void main_f_14163b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14163c0  (orig 0x14163c0, copy2)
void main_f_14163c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14163f0  (orig 0x14163f0, ret_only)
void main_f_14163f0() {}

// sub_1416400  (orig 0x1416400, copy2)
void main_f_1416400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1416410  (orig 0x1416410, copy2)
void main_f_1416410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1416440  (orig 0x1416440, ret_only)
void main_f_1416440() {}

// sub_1416450  (orig 0x1416450, copy2)
void main_f_1416450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1416460  (orig 0x1416460, copy2)
void main_f_1416460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14164e0  (orig 0x14164e0, ret_only)
void main_f_14164e0() {}

// sub_14164f0  (orig 0x14164f0, copy2)
void main_f_14164f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1416500  (orig 0x1416500, copy2)
void main_f_1416500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14172b0  (orig 0x14172b0, ret_only)
void main_f_14172b0() {}

// sub_1417c20  (orig 0x1417c20, mov_ret)
uint32_t main_f_1417c20() { return 1; }

// sub_1417c30  (orig 0x1417c30, ret_only)
void main_f_1417c30() {}

// sub_1417c40  (orig 0x1417c40, ret_only)
void main_f_1417c40() {}

// sub_1418580  (orig 0x1418580, getter)
uint64_t main_f_1418580(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14186f0  (orig 0x14186f0, mov_ret)
uint32_t main_f_14186f0() { return 1; }

// sub_1418700  (orig 0x1418700, indexed-getter)
uint64_t main_f_1418700(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1418710  (orig 0x1418710, indexed-getter)
uint64_t main_f_1418710(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1419450  (orig 0x1419450, ret_only)
void main_f_1419450() {}

// sub_141a460  (orig 0x141a460, ret_only)
void main_f_141a460() {}

// sub_141a470  (orig 0x141a470, ret_only)
void main_f_141a470() {}

// sub_141a480  (orig 0x141a480, ret_only)
void main_f_141a480() {}

// sub_141c3d0  (orig 0x141c3d0, ret_only)
void main_f_141c3d0() {}

// sub_141c3e0  (orig 0x141c3e0, copy2)
void main_f_141c3e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c3f0  (orig 0x141c3f0, copy2)
void main_f_141c3f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c420  (orig 0x141c420, ret_only)
void main_f_141c420() {}

// sub_141c430  (orig 0x141c430, copy2)
void main_f_141c430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c440  (orig 0x141c440, copy2)
void main_f_141c440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c470  (orig 0x141c470, ret_only)
void main_f_141c470() {}

// sub_141c480  (orig 0x141c480, copy2)
void main_f_141c480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c490  (orig 0x141c490, copy2)
void main_f_141c490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c4b0  (orig 0x141c4b0, ret_only)
void main_f_141c4b0() {}

// sub_141c4c0  (orig 0x141c4c0, copy2)
void main_f_141c4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c4d0  (orig 0x141c4d0, copy2)
void main_f_141c4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c4f0  (orig 0x141c4f0, ret_only)
void main_f_141c4f0() {}

// sub_141c500  (orig 0x141c500, copy2)
void main_f_141c500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c510  (orig 0x141c510, copy2)
void main_f_141c510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c530  (orig 0x141c530, ret_only)
void main_f_141c530() {}

// sub_141c540  (orig 0x141c540, copy2)
void main_f_141c540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c550  (orig 0x141c550, copy2)
void main_f_141c550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c570  (orig 0x141c570, ret_only)
void main_f_141c570() {}

// sub_141c580  (orig 0x141c580, copy2)
void main_f_141c580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141c590  (orig 0x141c590, copy2)
void main_f_141c590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141ebf0  (orig 0x141ebf0, ret_only)
void main_f_141ebf0() {}

// sub_141ec00  (orig 0x141ec00, copy2)
void main_f_141ec00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141ec10  (orig 0x141ec10, copy2)
void main_f_141ec10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141ee20  (orig 0x141ee20, ret_only)
void main_f_141ee20() {}

// sub_141ee30  (orig 0x141ee30, struct-copy)
void main_f_141ee30(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_141ee50  (orig 0x141ee50, struct-copy)
void main_f_141ee50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1420c30  (orig 0x1420c30, ret_only)
void main_f_1420c30() {}

// sub_1421970  (orig 0x1421970, mov_ret)
uint32_t main_f_1421970() { return 1; }

// sub_1421980  (orig 0x1421980, ret_only)
void main_f_1421980() {}

// sub_1421990  (orig 0x1421990, ret_only)
void main_f_1421990() {}

// sub_14220d0  (orig 0x14220d0, mov_ret)
uint32_t main_f_14220d0() { return 1; }

// sub_14220e0  (orig 0x14220e0, ret_only)
void main_f_14220e0() {}

// sub_14220f0  (orig 0x14220f0, ret_only)
void main_f_14220f0() {}

// sub_14221e0  (orig 0x14221e0, mov_ret)
uint32_t main_f_14221e0() { return 1; }

// sub_1422840  (orig 0x1422840, getter)
uint64_t main_f_1422840(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14229b0  (orig 0x14229b0, mov_ret)
uint32_t main_f_14229b0() { return 1; }

// sub_14229c0  (orig 0x14229c0, indexed-getter)
uint64_t main_f_14229c0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14229d0  (orig 0x14229d0, indexed-getter)
uint64_t main_f_14229d0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1423040  (orig 0x1423040, ret_only)
void main_f_1423040() {}

// sub_14239f0  (orig 0x14239f0, mov_ret)
uint32_t main_f_14239f0() { return 1; }

// sub_14242a0  (orig 0x14242a0, getter)
uint64_t main_f_14242a0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1424410  (orig 0x1424410, mov_ret)
uint32_t main_f_1424410() { return 1; }

// sub_1424420  (orig 0x1424420, indexed-getter)
uint64_t main_f_1424420(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1424430  (orig 0x1424430, indexed-getter)
uint64_t main_f_1424430(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14249a0  (orig 0x14249a0, getter)
uint64_t main_f_14249a0(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_14249b0  (orig 0x14249b0, getter)
uint64_t main_f_14249b0(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_14249c0  (orig 0x14249c0, ptr_add)
void* main_f_14249c0(void* a0) { return (char*)a0 + 192; }

// sub_1424f50  (orig 0x1424f50, ret_only)
void main_f_1424f50() {}

// sub_1424f60  (orig 0x1424f60, ret_only)
void main_f_1424f60() {}

// sub_1425a00  (orig 0x1425a00, mov_ret)
uint32_t main_f_1425a00() { return 1; }

// sub_1425a10  (orig 0x1425a10, indexed-getter)
uint64_t main_f_1425a10(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1425a20  (orig 0x1425a20, indexed-getter)
uint64_t main_f_1425a20(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1428ca0  (orig 0x1428ca0, ret_only)
void main_f_1428ca0() {}

// sub_14297c0  (orig 0x14297c0, ret_only)
void main_f_14297c0() {}

// sub_1429c90  (orig 0x1429c90, ret_only)
void main_f_1429c90() {}

// sub_142a1b0  (orig 0x142a1b0, straight)
void main_f_142a1b0(void* a0) {
    *(uint8_t*)((char*)(a0) + 116) = (uint8_t)(1);
}

// sub_142bd00  (orig 0x142bd00, mov_ret)
uint32_t main_f_142bd00() { return 1; }

// sub_142bd10  (orig 0x142bd10, ret_only)
void main_f_142bd10() {}

// sub_142bd20  (orig 0x142bd20, ret_only)
void main_f_142bd20() {}

// sub_142c970  (orig 0x142c970, getter)
uint32_t main_f_142c970(void* a0) { return *(uint32_t*)((char*)(a0) + 640); }

// sub_142c980  (orig 0x142c980, getter)
uint32_t main_f_142c980(void* a0) { return *(uint32_t*)((char*)(a0) + 644); }

// sub_142ca00  (orig 0x142ca00, mov_ret)
uint32_t main_f_142ca00() { return 0; }

// sub_142ca10  (orig 0x142ca10, mov_ret)
uint32_t main_f_142ca10() { return 0; }

// sub_142cbc0  (orig 0x142cbc0, getter)
uint8_t main_f_142cbc0(void* a0) { return *(uint8_t*)((char*)(a0) + 656); }

// sub_142cc40  (orig 0x142cc40, mov_ret)
uint32_t main_f_142cc40() { return 1; }

// sub_142cc50  (orig 0x142cc50, mov_ret)
uint32_t main_f_142cc50() { return 0; }

// sub_142dda0  (orig 0x142dda0, mov_ret)
uint32_t main_f_142dda0() { return 1; }

// sub_142ddb0  (orig 0x142ddb0, ret_only)
void main_f_142ddb0() {}

// sub_142ddc0  (orig 0x142ddc0, ret_only)
void main_f_142ddc0() {}

// sub_142fe80  (orig 0x142fe80, getter)
uint64_t main_f_142fe80(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_142fff0  (orig 0x142fff0, mov_ret)
uint32_t main_f_142fff0() { return 1; }

// sub_1430000  (orig 0x1430000, indexed-getter)
uint64_t main_f_1430000(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1430010  (orig 0x1430010, indexed-getter)
uint64_t main_f_1430010(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1433730  (orig 0x1433730, ret_only)
void main_f_1433730() {}

// sub_1433790  (orig 0x1433790, ret_only)
void main_f_1433790() {}

// sub_1433830  (orig 0x1433830, ret_only)
void main_f_1433830() {}

// sub_1433840  (orig 0x1433840, struct-copy)
void main_f_1433840(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1433860  (orig 0x1433860, struct-copy)
void main_f_1433860(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14338a0  (orig 0x14338a0, ret_only)
void main_f_14338a0() {}

// sub_14338b0  (orig 0x14338b0, struct-copy)
void main_f_14338b0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14338d0  (orig 0x14338d0, struct-copy)
void main_f_14338d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1434750  (orig 0x1434750, setter-chain)
void main_f_1434750(void* a0) { *(uint16_t*)((char*)(a0) + 84) = 0; *(uint32_t*)((char*)(a0) + 80) = 0; }

// sub_14357b0  (orig 0x14357b0, ret_only)
void main_f_14357b0() {}

// sub_14363b0  (orig 0x14363b0, ret_only)
void main_f_14363b0() {}

// sub_1437ad0  (orig 0x1437ad0, ret_only)
void main_f_1437ad0() {}

// sub_14382f0  (orig 0x14382f0, ret_only)
void main_f_14382f0() {}

// sub_14387f0  (orig 0x14387f0, ret_only)
void main_f_14387f0() {}

// sub_1438a50  (orig 0x1438a50, ret_only)
void main_f_1438a50() {}

// sub_1439330  (orig 0x1439330, ret_only)
void main_f_1439330() {}

// sub_143a230  (orig 0x143a230, ret_only)
void main_f_143a230() {}

// sub_143a240  (orig 0x143a240, copy2)
void main_f_143a240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143a250  (orig 0x143a250, copy2)
void main_f_143a250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143a9d0  (orig 0x143a9d0, ret_only)
void main_f_143a9d0() {}

// sub_143b560  (orig 0x143b560, ret_only)
void main_f_143b560() {}

// sub_143b840  (orig 0x143b840, mov_ret)
uint32_t main_f_143b840() { return 1; }

// sub_143b850  (orig 0x143b850, ret_only)
void main_f_143b850() {}

// sub_143bb10  (orig 0x143bb10, compare-pred)
bool main_f_143bb10(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 120)) + 1484)) != (uint32_t)(0); }

// sub_143bd70  (orig 0x143bd70, ret_only)
void main_f_143bd70() {}

// sub_143bd80  (orig 0x143bd80, copy2)
void main_f_143bd80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143bd90  (orig 0x143bd90, copy2)
void main_f_143bd90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143be10  (orig 0x143be10, mov_ret)
uint32_t main_f_143be10() { return 1; }

// sub_143c910  (orig 0x143c910, mov_ret)
uint32_t main_f_143c910() { return 0; }

// sub_143d040  (orig 0x143d040, ret_only)
void main_f_143d040() {}

// sub_143d050  (orig 0x143d050, struct-copy)
void main_f_143d050(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_143d070  (orig 0x143d070, struct-copy)
void main_f_143d070(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_143d4a0  (orig 0x143d4a0, ret_only)
void main_f_143d4a0() {}

// sub_143d4b0  (orig 0x143d4b0, copy2)
void main_f_143d4b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143d4c0  (orig 0x143d4c0, copy2)
void main_f_143d4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143e500  (orig 0x143e500, mov_ret)
uint32_t main_f_143e500() { return 1; }

// sub_143eb20  (orig 0x143eb20, mov_ret)
uint32_t main_f_143eb20() { return 1; }

// sub_143eb30  (orig 0x143eb30, indexed-getter)
uint64_t main_f_143eb30(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_143eb40  (orig 0x143eb40, indexed-getter)
uint64_t main_f_143eb40(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_143f120  (orig 0x143f120, mov_ret)
uint32_t main_f_143f120() { return 1; }

// sub_143f130  (orig 0x143f130, ret_only)
void main_f_143f130() {}

// sub_143f140  (orig 0x143f140, ret_only)
void main_f_143f140() {}

// sub_143fbd0  (orig 0x143fbd0, ret_only)
void main_f_143fbd0() {}

// sub_143fbe0  (orig 0x143fbe0, ret_only)
void main_f_143fbe0() {}

// sub_143fbf0  (orig 0x143fbf0, mov_ret)
uint32_t main_f_143fbf0() { return 1; }

// sub_143fce0  (orig 0x143fce0, setter)
void main_f_143fce0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1792) = a1; }

// sub_14403c0  (orig 0x14403c0, getter)
uint64_t main_f_14403c0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1440530  (orig 0x1440530, mov_ret)
uint32_t main_f_1440530() { return 1; }

// sub_1440540  (orig 0x1440540, indexed-getter)
uint64_t main_f_1440540(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1440550  (orig 0x1440550, indexed-getter)
uint64_t main_f_1440550(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1441ca0  (orig 0x1441ca0, ret_only)
void main_f_1441ca0() {}

// sub_14420a0  (orig 0x14420a0, mov_ret)
uint32_t main_f_14420a0() { return 1; }

// sub_1443160  (orig 0x1443160, setter-chain-zero)
void main_f_1443160(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 32) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
}

// sub_14499e0  (orig 0x14499e0, ret_only)
void main_f_14499e0() {}

// sub_14499f0  (orig 0x14499f0, copy2)
void main_f_14499f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1449a00  (orig 0x1449a00, copy2)
void main_f_1449a00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1449b30  (orig 0x1449b30, ret_only)
void main_f_1449b30() {}

// sub_1449b40  (orig 0x1449b40, copy2)
void main_f_1449b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1449b50  (orig 0x1449b50, copy2)
void main_f_1449b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144a570  (orig 0x144a570, mov_ret)
uint32_t main_f_144a570() { return 1; }

// sub_144a580  (orig 0x144a580, ret_only)
void main_f_144a580() {}

// sub_144a590  (orig 0x144a590, ret_only)
void main_f_144a590() {}

// sub_144b120  (orig 0x144b120, getter)
uint64_t main_f_144b120(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_144b290  (orig 0x144b290, mov_ret)
uint32_t main_f_144b290() { return 1; }

// sub_144b2a0  (orig 0x144b2a0, indexed-getter)
uint64_t main_f_144b2a0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_144b2b0  (orig 0x144b2b0, indexed-getter)
uint64_t main_f_144b2b0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_144b960  (orig 0x144b960, mov_ret)
uint32_t main_f_144b960() { return 1; }

// sub_144be40  (orig 0x144be40, mov_ret)
uint32_t main_f_144be40() { return 1; }

// sub_144cbc0  (orig 0x144cbc0, ret_only)
void main_f_144cbc0() {}

// sub_144d5c0  (orig 0x144d5c0, ret_only)
void main_f_144d5c0() {}

// sub_144dec0  (orig 0x144dec0, ret_only)
void main_f_144dec0() {}

// sub_144ebb0  (orig 0x144ebb0, ret_only)
void main_f_144ebb0() {}

// sub_144ebc0  (orig 0x144ebc0, struct-copy)
void main_f_144ebc0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_144ebe0  (orig 0x144ebe0, struct-copy)
void main_f_144ebe0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_144ec20  (orig 0x144ec20, ret_only)
void main_f_144ec20() {}

// sub_144ec30  (orig 0x144ec30, struct-copy)
void main_f_144ec30(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_144ec50  (orig 0x144ec50, struct-copy)
void main_f_144ec50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_144ec80  (orig 0x144ec80, ret_only)
void main_f_144ec80() {}

// sub_144ec90  (orig 0x144ec90, copy2)
void main_f_144ec90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144eca0  (orig 0x144eca0, copy2)
void main_f_144eca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144ecc0  (orig 0x144ecc0, ret_only)
void main_f_144ecc0() {}

// sub_144ecd0  (orig 0x144ecd0, copy2)
void main_f_144ecd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144ece0  (orig 0x144ece0, copy2)
void main_f_144ece0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144ed30  (orig 0x144ed30, ret_only)
void main_f_144ed30() {}

// sub_144ed40  (orig 0x144ed40, copy2)
void main_f_144ed40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144ed50  (orig 0x144ed50, copy2)
void main_f_144ed50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_144efb0  (orig 0x144efb0, ret_only)
void main_f_144efb0() {}

// sub_144f170  (orig 0x144f170, setter-chain-zero)
void main_f_144f170(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint16_t*)((char*)a0 + 32) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 8) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 6) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint16_t*)((char*)a0 + 4) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)(char*)a0 = 0;
}

// sub_144f650  (orig 0x144f650, mov_ret)
uint32_t main_f_144f650() { return 1; }

// sub_1451c30  (orig 0x1451c30, ret_only)
void main_f_1451c30() {}

// sub_1453cd0  (orig 0x1453cd0, getter)
uint8_t main_f_1453cd0(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_1453ce0  (orig 0x1453ce0, getter)
uint8_t main_f_1453ce0(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_1453e00  (orig 0x1453e00, getter)
uint64_t main_f_1453e00(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1453e10  (orig 0x1453e10, getter)
uint64_t main_f_1453e10(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1453e20  (orig 0x1453e20, compare)
bool main_f_1453e20(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 3)) != (uint64_t)(0); }

// sub_14541a0  (orig 0x14541a0, mov_ret)
uint32_t main_f_14541a0() { return 1; }

// sub_14541b0  (orig 0x14541b0, ret_only)
void main_f_14541b0() {}

// sub_14543c0  (orig 0x14543c0, ret_only)
void main_f_14543c0() {}

// sub_1455110  (orig 0x1455110, getter)
uint64_t main_f_1455110(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1455280  (orig 0x1455280, mov_ret)
uint32_t main_f_1455280() { return 1; }

// sub_1455290  (orig 0x1455290, indexed-getter)
uint64_t main_f_1455290(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14552a0  (orig 0x14552a0, indexed-getter)
uint64_t main_f_14552a0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1456cd0  (orig 0x1456cd0, ret_only)
void main_f_1456cd0() {}

// sub_1456ce0  (orig 0x1456ce0, copy2)
void main_f_1456ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1456cf0  (orig 0x1456cf0, copy2)
void main_f_1456cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145b610  (orig 0x145b610, getter)
uint32_t main_f_145b610(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_145b760  (orig 0x145b760, ret_only)
void main_f_145b760() {}

// sub_145b770  (orig 0x145b770, struct-copy)
void main_f_145b770(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_145b790  (orig 0x145b790, struct-copy)
void main_f_145b790(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_145f0d0  (orig 0x145f0d0, ret_only)
void main_f_145f0d0() {}

// sub_145f0e0  (orig 0x145f0e0, copy2)
void main_f_145f0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f0f0  (orig 0x145f0f0, copy2)
void main_f_145f0f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f120  (orig 0x145f120, ret_only)
void main_f_145f120() {}

// sub_145f130  (orig 0x145f130, copy2)
void main_f_145f130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f140  (orig 0x145f140, copy2)
void main_f_145f140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f190  (orig 0x145f190, ret_only)
void main_f_145f190() {}

// sub_145f1a0  (orig 0x145f1a0, copy2)
void main_f_145f1a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f1b0  (orig 0x145f1b0, copy2)
void main_f_145f1b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f1c0  (orig 0x145f1c0, const-field-set-store)
void main_f_145f1c0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 1536) = (uint32_t)(t1);
}

// sub_145f1d0  (orig 0x145f1d0, ret_only)
void main_f_145f1d0() {}

// sub_145f1e0  (orig 0x145f1e0, copy2)
void main_f_145f1e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f1f0  (orig 0x145f1f0, copy2)
void main_f_145f1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14606f0  (orig 0x14606f0, copy-chain-store)
void main_f_14606f0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1460a90  (orig 0x1460a90, ret_only)
void main_f_1460a90() {}

// sub_1460e00  (orig 0x1460e00, mov_ret)
uint32_t main_f_1460e00() { return 1; }

// sub_1460e10  (orig 0x1460e10, ret_only)
void main_f_1460e10() {}

// sub_1460f00  (orig 0x1460f00, ret_only)
void main_f_1460f00() {}

// sub_1461b40  (orig 0x1461b40, getter)
uint64_t main_f_1461b40(void* a0) { return *(uint64_t*)((char*)(a0) + 184); }

// sub_1461cd0  (orig 0x1461cd0, mov_ret)
uint32_t main_f_1461cd0() { return 4; }

// sub_1461ce0  (orig 0x1461ce0, indexed-getter)
uint64_t main_f_1461ce0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1461cf0  (orig 0x1461cf0, indexed-getter)
uint64_t main_f_1461cf0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_146c920  (orig 0x146c920, ret_only)
void main_f_146c920() {}

// sub_146c930  (orig 0x146c930, copy2)
void main_f_146c930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_146c940  (orig 0x146c940, copy2)
void main_f_146c940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_146c990  (orig 0x146c990, ret_only)
void main_f_146c990() {}

// sub_146c9a0  (orig 0x146c9a0, copy2)
void main_f_146c9a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_146c9b0  (orig 0x146c9b0, copy2)
void main_f_146c9b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_146cc90  (orig 0x146cc90, ret_only)
void main_f_146cc90() {}

// sub_146e280  (orig 0x146e280, ret_only)
void main_f_146e280() {}

// sub_146f290  (orig 0x146f290, ret_only)
void main_f_146f290() {}

// sub_1470a40  (orig 0x1470a40, const-field-set-store)
void main_f_1470a40(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_1470a50  (orig 0x1470a50, ret_only)
void main_f_1470a50() {}

// sub_1470a60  (orig 0x1470a60, copy2)
void main_f_1470a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470a70  (orig 0x1470a70, copy2)
void main_f_1470a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470a80  (orig 0x1470a80, const-field-set-store)
void main_f_1470a80(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 4;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_1470a90  (orig 0x1470a90, ret_only)
void main_f_1470a90() {}

// sub_1470aa0  (orig 0x1470aa0, copy2)
void main_f_1470aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470ab0  (orig 0x1470ab0, copy2)
void main_f_1470ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470ac0  (orig 0x1470ac0, const-field-set-store)
void main_f_1470ac0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_1470ad0  (orig 0x1470ad0, ret_only)
void main_f_1470ad0() {}

// sub_1470ae0  (orig 0x1470ae0, copy2)
void main_f_1470ae0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470af0  (orig 0x1470af0, copy2)
void main_f_1470af0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470b20  (orig 0x1470b20, ret_only)
void main_f_1470b20() {}

// sub_1470b30  (orig 0x1470b30, copy2)
void main_f_1470b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470b40  (orig 0x1470b40, copy2)
void main_f_1470b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1472180  (orig 0x1472180, const-field-set-store)
void main_f_1472180(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1564) = (uint32_t)(t1);
}

// sub_1472190  (orig 0x1472190, ret_only)
void main_f_1472190() {}

// sub_14721a0  (orig 0x14721a0, copy2)
void main_f_14721a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14721b0  (orig 0x14721b0, copy2)
void main_f_14721b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14721e0  (orig 0x14721e0, ret_only)
void main_f_14721e0() {}

// sub_14721f0  (orig 0x14721f0, copy2)
void main_f_14721f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1472200  (orig 0x1472200, copy2)
void main_f_1472200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1472210  (orig 0x1472210, const-field-set-store)
void main_f_1472210(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 1564) = (uint32_t)(t1);
}

// sub_1472220  (orig 0x1472220, ret_only)
void main_f_1472220() {}

// sub_1472230  (orig 0x1472230, copy2)
void main_f_1472230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1472240  (orig 0x1472240, copy2)
void main_f_1472240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1472280  (orig 0x1472280, ret_only)
void main_f_1472280() {}

// sub_1472290  (orig 0x1472290, copy2)
void main_f_1472290(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14722a0  (orig 0x14722a0, copy2)
void main_f_14722a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1473920  (orig 0x1473920, ret_only)
void main_f_1473920() {}

// sub_1474870  (orig 0x1474870, ret_only)
void main_f_1474870() {}

// sub_1476870  (orig 0x1476870, setter)
void main_f_1476870(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1668) = a1; }

// sub_1476c80  (orig 0x1476c80, const-field-set-store)
void main_f_1476c80(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1676) = (uint32_t)(t1);
}

// sub_1476c90  (orig 0x1476c90, ret_only)
void main_f_1476c90() {}

// sub_1476ca0  (orig 0x1476ca0, copy2)
void main_f_1476ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cb0  (orig 0x1476cb0, copy2)
void main_f_1476cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cc0  (orig 0x1476cc0, const-field-set-store)
void main_f_1476cc0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 1676) = (uint32_t)(t1);
}

// sub_1476cd0  (orig 0x1476cd0, ret_only)
void main_f_1476cd0() {}

// sub_1476ce0  (orig 0x1476ce0, copy2)
void main_f_1476ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cf0  (orig 0x1476cf0, copy2)
void main_f_1476cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d00  (orig 0x1476d00, const-field-set-store)
void main_f_1476d00(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 1676) = (uint32_t)(t1);
}

// sub_1476d10  (orig 0x1476d10, ret_only)
void main_f_1476d10() {}

// sub_1476d20  (orig 0x1476d20, copy2)
void main_f_1476d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d30  (orig 0x1476d30, copy2)
void main_f_1476d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d70  (orig 0x1476d70, ret_only)
void main_f_1476d70() {}

// sub_1476d80  (orig 0x1476d80, struct-copy)
void main_f_1476d80(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1476da0  (orig 0x1476da0, struct-copy)
void main_f_1476da0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1477050  (orig 0x1477050, ret_only)
void main_f_1477050() {}

// sub_1477510  (orig 0x1477510, ret_only)
void main_f_1477510() {}

// sub_14778e0  (orig 0x14778e0, compare-pred)
bool main_f_14778e0(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 120)) + 1488)) != (uint32_t)(6); }

// sub_1477900  (orig 0x1477900, ret_only)
void main_f_1477900() {}

// sub_14787b0  (orig 0x14787b0, ret_only)
void main_f_14787b0() {}

// sub_14787c0  (orig 0x14787c0, copy2)
void main_f_14787c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14787d0  (orig 0x14787d0, copy2)
void main_f_14787d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478800  (orig 0x1478800, ret_only)
void main_f_1478800() {}

// sub_1478810  (orig 0x1478810, copy2)
void main_f_1478810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478820  (orig 0x1478820, copy2)
void main_f_1478820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478850  (orig 0x1478850, ret_only)
void main_f_1478850() {}

// sub_1478860  (orig 0x1478860, copy2)
void main_f_1478860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478870  (orig 0x1478870, copy2)
void main_f_1478870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478a90  (orig 0x1478a90, compare-pred)
bool main_f_1478a90(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 120)) + 1484)) != (uint32_t)(3); }

// sub_1478ab0  (orig 0x1478ab0, ret_only)
void main_f_1478ab0() {}

// sub_1479480  (orig 0x1479480, ret_only)
void main_f_1479480() {}

// sub_1479ec0  (orig 0x1479ec0, ret_only)
void main_f_1479ec0() {}

// sub_1479ed0  (orig 0x1479ed0, copy2)
void main_f_1479ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1479ee0  (orig 0x1479ee0, copy2)
void main_f_1479ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_147a330  (orig 0x147a330, ret_only)
void main_f_147a330() {}

// sub_147b910  (orig 0x147b910, ret_only)
void main_f_147b910() {}

// sub_147c080  (orig 0x147c080, ret_only)
void main_f_147c080() {}

// sub_147cbf0  (orig 0x147cbf0, ret_only)
void main_f_147cbf0() {}

// sub_147d030  (orig 0x147d030, ret_only)
void main_f_147d030() {}

// sub_147dc30  (orig 0x147dc30, ret_only)
void main_f_147dc30() {}

// sub_147e6d0  (orig 0x147e6d0, ret_only)
void main_f_147e6d0() {}

// sub_147f010  (orig 0x147f010, ret_only)
void main_f_147f010() {}

// sub_147fc20  (orig 0x147fc20, ret_only)
void main_f_147fc20() {}

// sub_1480440  (orig 0x1480440, ret_only)
void main_f_1480440() {}

// sub_1480810  (orig 0x1480810, ret_only)
void main_f_1480810() {}

// sub_1480cb0  (orig 0x1480cb0, ret_only)
void main_f_1480cb0() {}

// sub_1481090  (orig 0x1481090, ret_only)
void main_f_1481090() {}

// sub_1481470  (orig 0x1481470, ret_only)
void main_f_1481470() {}

// sub_1481850  (orig 0x1481850, ret_only)
void main_f_1481850() {}

// sub_1481ba0  (orig 0x1481ba0, mov_ret)
uint32_t main_f_1481ba0() { return 1; }

// sub_1481bb0  (orig 0x1481bb0, ret_only)
void main_f_1481bb0() {}

// sub_1481ca0  (orig 0x1481ca0, ret_only)
void main_f_1481ca0() {}

// sub_1482810  (orig 0x1482810, getter)
uint64_t main_f_1482810(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1482980  (orig 0x1482980, mov_ret)
uint32_t main_f_1482980() { return 1; }

// sub_1482990  (orig 0x1482990, indexed-getter)
uint64_t main_f_1482990(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14829a0  (orig 0x14829a0, indexed-getter)
uint64_t main_f_14829a0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14842b0  (orig 0x14842b0, ret_only)
void main_f_14842b0() {}

// sub_14842c0  (orig 0x14842c0, copy2)
void main_f_14842c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14842d0  (orig 0x14842d0, copy2)
void main_f_14842d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1484fc0  (orig 0x1484fc0, ret_only)
void main_f_1484fc0() {}

// sub_1485500  (orig 0x1485500, ret_only)
void main_f_1485500() {}

// sub_1485a90  (orig 0x1485a90, mov_ret)
uint32_t main_f_1485a90() { return 1; }

// sub_1485aa0  (orig 0x1485aa0, ret_only)
void main_f_1485aa0() {}

// sub_1485c40  (orig 0x1485c40, ret_only)
void main_f_1485c40() {}

// sub_1486570  (orig 0x1486570, getter)
uint64_t main_f_1486570(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14866e0  (orig 0x14866e0, mov_ret)
uint32_t main_f_14866e0() { return 1; }

// sub_14866f0  (orig 0x14866f0, indexed-getter)
uint64_t main_f_14866f0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1486700  (orig 0x1486700, indexed-getter)
uint64_t main_f_1486700(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1489750  (orig 0x1489750, ret_only)
void main_f_1489750() {}

// sub_1489760  (orig 0x1489760, copy2)
void main_f_1489760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1489770  (orig 0x1489770, copy2)
void main_f_1489770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b640  (orig 0x148b640, ret_only)
void main_f_148b640() {}

// sub_148b650  (orig 0x148b650, copy2)
void main_f_148b650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b660  (orig 0x148b660, copy2)
void main_f_148b660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b690  (orig 0x148b690, ret_only)
void main_f_148b690() {}

// sub_148b6a0  (orig 0x148b6a0, copy2)
void main_f_148b6a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b6b0  (orig 0x148b6b0, copy2)
void main_f_148b6b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b6e0  (orig 0x148b6e0, ret_only)
void main_f_148b6e0() {}

// sub_148b6f0  (orig 0x148b6f0, copy2)
void main_f_148b6f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b700  (orig 0x148b700, copy2)
void main_f_148b700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b870  (orig 0x148b870, ret_only)
void main_f_148b870() {}

// sub_148b880  (orig 0x148b880, copy2)
void main_f_148b880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b890  (orig 0x148b890, copy2)
void main_f_148b890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b8b0  (orig 0x148b8b0, ret_only)
void main_f_148b8b0() {}

// sub_148b8c0  (orig 0x148b8c0, copy2)
void main_f_148b8c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b8d0  (orig 0x148b8d0, copy2)
void main_f_148b8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b8f0  (orig 0x148b8f0, ret_only)
void main_f_148b8f0() {}

// sub_148b900  (orig 0x148b900, copy2)
void main_f_148b900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b910  (orig 0x148b910, copy2)
void main_f_148b910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148ba80  (orig 0x148ba80, ret_only)
void main_f_148ba80() {}

// sub_148ba90  (orig 0x148ba90, copy2)
void main_f_148ba90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148baa0  (orig 0x148baa0, copy2)
void main_f_148baa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148de40  (orig 0x148de40, ret_only)
void main_f_148de40() {}

// sub_148e7e0  (orig 0x148e7e0, ret_only)
void main_f_148e7e0() {}

// sub_148f030  (orig 0x148f030, ret_only)
void main_f_148f030() {}

// sub_148fb30  (orig 0x148fb30, ret_only)
void main_f_148fb30() {}

// sub_1490620  (orig 0x1490620, ret_only)
void main_f_1490620() {}

// sub_1490cf0  (orig 0x1490cf0, mov_ret)
uint32_t main_f_1490cf0() { return 1; }

// sub_1491160  (orig 0x1491160, mov_ret)
uint32_t main_f_1491160() { return 1; }

// sub_1491170  (orig 0x1491170, ret_only)
void main_f_1491170() {}

// sub_14919e0  (orig 0x14919e0, ret_only)
void main_f_14919e0() {}

// sub_1498810  (orig 0x1498810, ret_only)
void main_f_1498810() {}

// sub_149aab0  (orig 0x149aab0, ret_only)
void main_f_149aab0() {}

// sub_149ae30  (orig 0x149ae30, ret_only)
void main_f_149ae30() {}

// sub_149e880  (orig 0x149e880, straight)
void main_f_149e880(void* a0) {
    *(uint32_t*)((char*)(a0) + 2920) = *(uint32_t*)((char*)(a0) + 2924);
    *(uint32_t*)((char*)(a0) + 2928) = *(uint32_t*)((char*)(a0) + 2932);
    *(uint32_t*)((char*)(a0) + 2936) = *(uint32_t*)((char*)(a0) + 2940);
}

// sub_149f130  (orig 0x149f130, ret_only)
void main_f_149f130() {}

// sub_149f140  (orig 0x149f140, copy2)
void main_f_149f140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f150  (orig 0x149f150, copy2)
void main_f_149f150(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f160  (orig 0x149f160, const-field-set-store)
void main_f_149f160(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1484) = (uint32_t)(t1);
}

// sub_149f170  (orig 0x149f170, ret_only)
void main_f_149f170() {}

// sub_149f180  (orig 0x149f180, copy2)
void main_f_149f180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f190  (orig 0x149f190, copy2)
void main_f_149f190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f1f0  (orig 0x149f1f0, ret_only)
void main_f_149f1f0() {}

// sub_149f200  (orig 0x149f200, copy2)
void main_f_149f200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f210  (orig 0x149f210, copy2)
void main_f_149f210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f2b0  (orig 0x149f2b0, ret_only)
void main_f_149f2b0() {}

// sub_149f2c0  (orig 0x149f2c0, copy2)
void main_f_149f2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f2d0  (orig 0x149f2d0, copy2)
void main_f_149f2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f370  (orig 0x149f370, ret_only)
void main_f_149f370() {}

// sub_149f380  (orig 0x149f380, copy2)
void main_f_149f380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f390  (orig 0x149f390, copy2)
void main_f_149f390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f430  (orig 0x149f430, ret_only)
void main_f_149f430() {}

// sub_149f440  (orig 0x149f440, copy2)
void main_f_149f440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f450  (orig 0x149f450, copy2)
void main_f_149f450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f4b0  (orig 0x149f4b0, ret_only)
void main_f_149f4b0() {}

// sub_149f4c0  (orig 0x149f4c0, copy2)
void main_f_149f4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f4d0  (orig 0x149f4d0, copy2)
void main_f_149f4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f760  (orig 0x149f760, ret_only)
void main_f_149f760() {}

// sub_149f770  (orig 0x149f770, struct-copy)
void main_f_149f770(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_149f790  (orig 0x149f790, struct-copy)
void main_f_149f790(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14a1ed0  (orig 0x14a1ed0, ret_only)
void main_f_14a1ed0() {}

// sub_14a1ee0  (orig 0x14a1ee0, copy2)
void main_f_14a1ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1ef0  (orig 0x14a1ef0, copy2)
void main_f_14a1ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1f40  (orig 0x14a1f40, ret_only)
void main_f_14a1f40() {}

// sub_14a1f50  (orig 0x14a1f50, copy2)
void main_f_14a1f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1f60  (orig 0x14a1f60, copy2)
void main_f_14a1f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1f90  (orig 0x14a1f90, ret_only)
void main_f_14a1f90() {}

// sub_14a1fa0  (orig 0x14a1fa0, copy2)
void main_f_14a1fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1fb0  (orig 0x14a1fb0, copy2)
void main_f_14a1fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a4290  (orig 0x14a4290, mov_ret)
uint32_t main_f_14a4290() { return 1; }

// sub_14a52a0  (orig 0x14a52a0, straight)
void main_f_14a52a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 1484) = 2;
}

// sub_14a58a0  (orig 0x14a58a0, ret_only)
void main_f_14a58a0() {}

// sub_14a58b0  (orig 0x14a58b0, struct-copy)
void main_f_14a58b0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14a58d0  (orig 0x14a58d0, struct-copy)
void main_f_14a58d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14a58f0  (orig 0x14a58f0, const-field-set-store)
void main_f_14a58f0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1484) = (uint32_t)(t1);
}

// sub_14a5900  (orig 0x14a5900, ret_only)
void main_f_14a5900() {}

// sub_14a5910  (orig 0x14a5910, copy2)
void main_f_14a5910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a5920  (orig 0x14a5920, copy2)
void main_f_14a5920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a5950  (orig 0x14a5950, ret_only)
void main_f_14a5950() {}

// sub_14a5960  (orig 0x14a5960, struct-copy)
void main_f_14a5960(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14a5980  (orig 0x14a5980, struct-copy)
void main_f_14a5980(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14a6580  (orig 0x14a6580, const-field-set-store)
void main_f_14a6580(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_14a6590  (orig 0x14a6590, ret_only)
void main_f_14a6590() {}

// sub_14a65a0  (orig 0x14a65a0, copy2)
void main_f_14a65a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65b0  (orig 0x14a65b0, copy2)
void main_f_14a65b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65c0  (orig 0x14a65c0, const-field-set-store)
void main_f_14a65c0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_14a65d0  (orig 0x14a65d0, ret_only)
void main_f_14a65d0() {}

// sub_14a65e0  (orig 0x14a65e0, copy2)
void main_f_14a65e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65f0  (orig 0x14a65f0, copy2)
void main_f_14a65f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a6600  (orig 0x14a6600, const-field-set-store)
void main_f_14a6600(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1504) = (uint32_t)(t1);
}

// sub_14a6610  (orig 0x14a6610, ret_only)
void main_f_14a6610() {}

// sub_14a6620  (orig 0x14a6620, copy2)
void main_f_14a6620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a6630  (orig 0x14a6630, copy2)
void main_f_14a6630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7e30  (orig 0x14a7e30, const-field-set-store)
void main_f_14a7e30(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 1512) = (uint32_t)(t1);
}

// sub_14a7e40  (orig 0x14a7e40, ret_only)
void main_f_14a7e40() {}

// sub_14a7e50  (orig 0x14a7e50, copy2)
void main_f_14a7e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7e60  (orig 0x14a7e60, copy2)
void main_f_14a7e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7e70  (orig 0x14a7e70, const-field-set-store)
void main_f_14a7e70(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 1512) = (uint32_t)(t1);
}

// sub_14a7e80  (orig 0x14a7e80, ret_only)
void main_f_14a7e80() {}

// sub_14a7e90  (orig 0x14a7e90, copy2)
void main_f_14a7e90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7ea0  (orig 0x14a7ea0, copy2)
void main_f_14a7ea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a8b70  (orig 0x14a8b70, mov_ret)
uint32_t main_f_14a8b70() { return 1; }

// sub_14a91a0  (orig 0x14a91a0, straight)
void main_f_14a91a0(void* a0) {
    *(uint8_t*)((char*)(a0) + 216) = (uint8_t)(1);
    *(uint32_t*)((char*)(a0) + 120) = 2;
}

// sub_14a92b0  (orig 0x14a92b0, getter)
uint32_t main_f_14a92b0(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_14a92c0  (orig 0x14a92c0, getter)
uint32_t main_f_14a92c0(void* a0) { return *(uint32_t*)((char*)(a0) + 176); }

// sub_14a9360  (orig 0x14a9360, ret_only)
void main_f_14a9360() {}

// sub_14a9590  (orig 0x14a9590, ret_only)
void main_f_14a9590() {}

// sub_14a95a0  (orig 0x14a95a0, mov_ret)
uint32_t main_f_14a95a0() { return 0; }

// sub_14a96c0  (orig 0x14a96c0, mov_ret)
uint32_t main_f_14a96c0() { return 2; }

// sub_14a97b0  (orig 0x14a97b0, mov_ret)
uint32_t main_f_14a97b0() { return 0; }

// sub_14a97c0  (orig 0x14a97c0, ret_only)
void main_f_14a97c0() {}

// sub_14a97d0  (orig 0x14a97d0, mov_ret)
uint32_t main_f_14a97d0() { return 0; }

// sub_14aa670  (orig 0x14aa670, setter-chain)
void main_f_14aa670(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 64) = 0; *(uint64_t*)((char*)(a0) + 80) = 0; *(uint64_t*)((char*)(a0) + 96) = 0; *(uint64_t*)((char*)(a0) + 112) = 0; *(uint64_t*)((char*)(a0) + 128) = 0; *(uint64_t*)((char*)(a0) + 144) = 0; *(uint64_t*)((char*)(a0) + 160) = 0; *(uint64_t*)((char*)(a0) + 176) = 0; *(uint64_t*)((char*)(a0) + 192) = 0; *(uint64_t*)((char*)(a0) + 208) = 0; *(uint64_t*)((char*)(a0) + 224) = 0; *(uint64_t*)((char*)(a0) + 240) = 0; *(uint64_t*)((char*)(a0) + 256) = 0; *(uint64_t*)((char*)(a0) + 272) = 0; *(uint64_t*)((char*)(a0) + 288) = 0; *(uint64_t*)((char*)(a0) + 304) = 0; *(uint64_t*)((char*)(a0) + 320) = 0; *(uint64_t*)((char*)(a0) + 336) = 0; *(uint64_t*)((char*)(a0) + 352) = 0; *(uint64_t*)((char*)(a0) + 368) = 0; *(uint64_t*)((char*)(a0) + 384) = 0; *(uint64_t*)((char*)(a0) + 400) = 0; *(uint64_t*)((char*)(a0) + 416) = 0; *(uint64_t*)((char*)(a0) + 432) = 0; *(uint64_t*)((char*)(a0) + 448) = 0; *(uint64_t*)((char*)(a0) + 464) = 0; *(uint64_t*)((char*)(a0) + 480) = 0; *(uint64_t*)((char*)(a0) + 496) = 0; *(uint64_t*)((char*)(a0) + 512) = 0; *(uint64_t*)((char*)(a0) + 528) = 0; *(uint64_t*)((char*)(a0) + 544) = 0; *(uint64_t*)((char*)(a0) + 560) = 0; *(uint64_t*)((char*)(a0) + 576) = 0; *(uint64_t*)((char*)(a0) + 592) = 0; *(uint64_t*)((char*)(a0) + 608) = 0; *(uint64_t*)((char*)(a0) + 624) = 0; *(uint64_t*)((char*)(a0) + 640) = 0; *(uint64_t*)((char*)(a0) + 656) = 0; *(uint64_t*)((char*)(a0) + 672) = 0; *(uint64_t*)((char*)(a0) + 688) = 0; *(uint64_t*)((char*)(a0) + 704) = 0; *(uint64_t*)((char*)(a0) + 720) = 0; *(uint64_t*)((char*)(a0) + 736) = 0; *(uint64_t*)((char*)(a0) + 752) = 0; *(uint64_t*)((char*)(a0) + 768) = 0; *(uint64_t*)((char*)(a0) + 784) = 0; *(uint64_t*)((char*)(a0) + 800) = 0; *(uint64_t*)((char*)(a0) + 816) = 0; *(uint64_t*)((char*)(a0) + 832) = 0; *(uint64_t*)((char*)(a0) + 848) = 0; *(uint64_t*)((char*)(a0) + 864) = 0; *(uint64_t*)((char*)(a0) + 880) = 0; *(uint64_t*)((char*)(a0) + 896) = 0; *(uint64_t*)((char*)(a0) + 912) = 0; *(uint64_t*)((char*)(a0) + 928) = 0; *(uint64_t*)((char*)(a0) + 944) = 0; *(uint64_t*)((char*)(a0) + 960) = 0; *(uint64_t*)((char*)(a0) + 976) = 0; *(uint64_t*)((char*)(a0) + 992) = 0; *(uint64_t*)((char*)(a0) + 1008) = 0; *(uint64_t*)((char*)(a0) + 1024) = 0; *(uint64_t*)((char*)(a0) + 1040) = 0; *(uint64_t*)((char*)(a0) + 1056) = 0; *(uint64_t*)((char*)(a0) + 1072) = 0; *(uint64_t*)((char*)(a0) + 1088) = 0; *(uint64_t*)((char*)(a0) + 1104) = 0; *(uint64_t*)((char*)(a0) + 1120) = 0; *(uint64_t*)((char*)(a0) + 1136) = 0; *(uint64_t*)((char*)(a0) + 1152) = 0; *(uint64_t*)((char*)(a0) + 1168) = 0; *(uint64_t*)((char*)(a0) + 1184) = 0; *(uint64_t*)((char*)(a0) + 1200) = 0; *(uint64_t*)((char*)(a0) + 1216) = 0; *(uint64_t*)((char*)(a0) + 1232) = 0; *(uint64_t*)((char*)(a0) + 1248) = 0; *(uint64_t*)((char*)(a0) + 1264) = 0; *(uint64_t*)((char*)(a0) + 1280) = 0; *(uint64_t*)((char*)(a0) + 1296) = 0; *(uint64_t*)((char*)(a0) + 1312) = 0; *(uint64_t*)((char*)(a0) + 1328) = 0; *(uint64_t*)((char*)(a0) + 1344) = 0; *(uint64_t*)((char*)(a0) + 1360) = 0; *(uint64_t*)((char*)(a0) + 1376) = 0; *(uint64_t*)((char*)(a0) + 1392) = 0; *(uint64_t*)((char*)(a0) + 1408) = 0; *(uint64_t*)((char*)(a0) + 1424) = 0; *(uint64_t*)((char*)(a0) + 1440) = 0; *(uint64_t*)((char*)(a0) + 1456) = 0; *(uint64_t*)((char*)(a0) + 1472) = 0; *(uint64_t*)((char*)(a0) + 1488) = 0; *(uint64_t*)((char*)(a0) + 1504) = 0; *(uint64_t*)((char*)(a0) + 1520) = 0; *(uint64_t*)((char*)(a0) + 1536) = 0; *(uint64_t*)((char*)(a0) + 1552) = 0; *(uint64_t*)((char*)(a0) + 1568) = 0; *(uint64_t*)((char*)(a0) + 1584) = 0; *(uint64_t*)((char*)(a0) + 1600) = 0; *(uint64_t*)((char*)(a0) + 1616) = 0; *(uint64_t*)((char*)(a0) + 1632) = 0; *(uint64_t*)((char*)(a0) + 1648) = 0; *(uint64_t*)((char*)(a0) + 1664) = 0; *(uint64_t*)((char*)(a0) + 1680) = 0; *(uint64_t*)((char*)(a0) + 1696) = 0; *(uint64_t*)((char*)(a0) + 1712) = 0; *(uint64_t*)((char*)(a0) + 1728) = 0; *(uint64_t*)((char*)(a0) + 1744) = 0; *(uint64_t*)((char*)(a0) + 1760) = 0; *(uint64_t*)((char*)(a0) + 1776) = 0; *(uint64_t*)((char*)(a0) + 1792) = 0; *(uint64_t*)((char*)(a0) + 1808) = 0; *(uint64_t*)((char*)(a0) + 1824) = 0; *(uint64_t*)((char*)(a0) + 1840) = 0; *(uint64_t*)((char*)(a0) + 1856) = 0; *(uint64_t*)((char*)(a0) + 1872) = 0; *(uint64_t*)((char*)(a0) + 1888) = 0; *(uint64_t*)((char*)(a0) + 1904) = 0; *(uint64_t*)((char*)(a0) + 1920) = 0; *(uint64_t*)((char*)(a0) + 1936) = 0; *(uint64_t*)((char*)(a0) + 1952) = 0; *(uint64_t*)((char*)(a0) + 1968) = 0; *(uint64_t*)((char*)(a0) + 1984) = 0; *(uint64_t*)((char*)(a0) + 2000) = 0; *(uint64_t*)((char*)(a0) + 2016) = 0; *(uint64_t*)((char*)(a0) + 2032) = 0; }

// sub_14ac420  (orig 0x14ac420, getter)
uint8_t main_f_14ac420(void* a0) { return *(uint8_t*)((char*)(a0) + 764); }

// sub_14b2d60  (orig 0x14b2d60, mov_ret)
uint32_t main_f_14b2d60() { return 0; }

// sub_14b3230  (orig 0x14b3230, ret_only)
void main_f_14b3230() {}

// sub_14b3240  (orig 0x14b3240, ret_only)
void main_f_14b3240() {}

// sub_14b3250  (orig 0x14b3250, ret_only)
void main_f_14b3250() {}

// sub_14b3260  (orig 0x14b3260, ret_only)
void main_f_14b3260() {}

// sub_14b5880  (orig 0x14b5880, mov_ret)
uint32_t main_f_14b5880() { return 3; }

// sub_14b5a40  (orig 0x14b5a40, ret_only)
void main_f_14b5a40() {}

// sub_14b5f30  (orig 0x14b5f30, mov_ret)
uint32_t main_f_14b5f30() { return 3; }

// sub_14b6040  (orig 0x14b6040, ret_only)
void main_f_14b6040() {}

// sub_14b6320  (orig 0x14b6320, mov_ret)
uint32_t main_f_14b6320() { return 3; }

// sub_14b64d0  (orig 0x14b64d0, ret_only)
void main_f_14b64d0() {}

// sub_14b64e0  (orig 0x14b64e0, mov_ret)
uint32_t main_f_14b64e0() { return 5; }

// sub_14b67b0  (orig 0x14b67b0, mov_ret)
uint32_t main_f_14b67b0() { return 4; }

// sub_14b7190  (orig 0x14b7190, mov_ret)
uint32_t main_f_14b7190() { return 7; }

// sub_14b74a0  (orig 0x14b74a0, mov_ret)
uint32_t main_f_14b74a0() { return 6; }

// sub_14b75d0  (orig 0x14b75d0, mov_ret)
uint32_t main_f_14b75d0() { return 1; }

// sub_14b75e0  (orig 0x14b75e0, mov_ret)
uint32_t main_f_14b75e0() { return 1; }

// sub_14b78c0  (orig 0x14b78c0, ret_only)
void main_f_14b78c0() {}

// sub_14b81f0  (orig 0x14b81f0, mov_ret)
uint32_t main_f_14b81f0() { return 6; }

// sub_14ba810  (orig 0x14ba810, mov_ret)
uint32_t main_f_14ba810() { return 1; }

// sub_14bcf10  (orig 0x14bcf10, ret_only)
void main_f_14bcf10() {}

// sub_14bcf40  (orig 0x14bcf40, mov_ret)
uint32_t main_f_14bcf40() { return 0; }

// sub_14bcf50  (orig 0x14bcf50, mov_ret)
uint64_t main_f_14bcf50() { return 0; }

// sub_14bcf60  (orig 0x14bcf60, mov_ret)
uint64_t main_f_14bcf60() { return 0; }

// sub_14bcf70  (orig 0x14bcf70, mov_ret)
uint64_t main_f_14bcf70() { return 0; }

// sub_14bcf80  (orig 0x14bcf80, ret_only)
void main_f_14bcf80() {}

// sub_14bfb70  (orig 0x14bfb70, getter-chain)
uint8_t main_f_14bfb70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 1648); }

// sub_14bfb80  (orig 0x14bfb80, compare-pred)
bool main_f_14bfb80(void* a0) { return (uint32_t)((*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 88)) + 1644) | 2)) == (uint32_t)(2); }

// sub_14bfba0  (orig 0x14bfba0, getter-chain)
uint8_t main_f_14bfba0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 1649); }

// sub_14c33f0  (orig 0x14c33f0, ret_only)
void main_f_14c33f0() {}

// sub_14c3400  (orig 0x14c3400, struct-copy)
void main_f_14c3400(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14c3420  (orig 0x14c3420, struct-copy)
void main_f_14c3420(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14c4b80  (orig 0x14c4b80, mov_ret)
uint32_t main_f_14c4b80() { return 1; }

// sub_14c4b90  (orig 0x14c4b90, indexed-getter)
uint64_t main_f_14c4b90(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14c4ba0  (orig 0x14c4ba0, indexed-getter)
uint64_t main_f_14c4ba0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14c5510  (orig 0x14c5510, const-field-set-store)
void main_f_14c5510(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 88);
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 104) = (uint32_t)(t1);
}

// sub_14c5e60  (orig 0x14c5e60, getter-chain)
uint8_t main_f_14c5e60(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 136); }

// sub_14c5e70  (orig 0x14c5e70, compare-pred)
bool main_f_14c5e70(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 88)) + 136)) == (uint32_t)(0); }

// sub_14c6660  (orig 0x14c6660, ret_only)
void main_f_14c6660() {}

// sub_14c6970  (orig 0x14c6970, ret_only)
void main_f_14c6970() {}

// sub_14c6c60  (orig 0x14c6c60, mov_ret)
uint32_t main_f_14c6c60() { return 1; }

// sub_14c6c70  (orig 0x14c6c70, indexed-getter)
uint64_t main_f_14c6c70(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14c6c80  (orig 0x14c6c80, indexed-getter)
uint64_t main_f_14c6c80(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14ca680  (orig 0x14ca680, ret_only)
void main_f_14ca680() {}

// sub_14caaf0  (orig 0x14caaf0, mov_ret)
uint32_t main_f_14caaf0() { return 3; }

// sub_14cab00  (orig 0x14cab00, indexed-getter)
uint64_t main_f_14cab00(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14cab10  (orig 0x14cab10, indexed-getter)
uint64_t main_f_14cab10(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14ce010  (orig 0x14ce010, ret_only)
void main_f_14ce010() {}

// sub_14ce060  (orig 0x14ce060, ret_only)
void main_f_14ce060() {}

// sub_14ce070  (orig 0x14ce070, copy2)
void main_f_14ce070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce080  (orig 0x14ce080, copy2)
void main_f_14ce080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce090  (orig 0x14ce090, const-field-set-store)
void main_f_14ce090(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 3928) = (uint8_t)(t1);
}

// sub_14ce0a0  (orig 0x14ce0a0, ret_only)
void main_f_14ce0a0() {}

// sub_14ce0b0  (orig 0x14ce0b0, copy2)
void main_f_14ce0b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce0c0  (orig 0x14ce0c0, copy2)
void main_f_14ce0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce1c0  (orig 0x14ce1c0, ret_only)
void main_f_14ce1c0() {}

// sub_14d13c0  (orig 0x14d13c0, ret_only)
void main_f_14d13c0() {}

// sub_14d13d0  (orig 0x14d13d0, struct-copy)
void main_f_14d13d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14d13f0  (orig 0x14d13f0, struct-copy)
void main_f_14d13f0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14d5a80  (orig 0x14d5a80, compare)
bool main_f_14d5a80(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(0); }

// sub_14d6890  (orig 0x14d6890, compare)
bool main_f_14d6890(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(0); }

// sub_14db760  (orig 0x14db760, ret_only)
void main_f_14db760() {}

// sub_14db770  (orig 0x14db770, ret_only)
void main_f_14db770() {}

// sub_14db780  (orig 0x14db780, ret_only)
void main_f_14db780() {}

// sub_14dbb00  (orig 0x14dbb00, compare)
bool main_f_14dbb00(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(0); }

// sub_14dbb60  (orig 0x14dbb60, getter)
uint64_t main_f_14dbb60(void* a0) { return *(uint64_t*)((char*)(a0) + 440); }

// sub_14dbcc0  (orig 0x14dbcc0, ret_only)
void main_f_14dbcc0() {}

// sub_14dbdd0  (orig 0x14dbdd0, ret_only)
void main_f_14dbdd0() {}

// sub_14dd690  (orig 0x14dd690, ret_only)
void main_f_14dd690() {}

// sub_14dde20  (orig 0x14dde20, getter)
uint64_t main_f_14dde20(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_14ddfb0  (orig 0x14ddfb0, mov_ret)
uint32_t main_f_14ddfb0() { return 2; }

// sub_14ddfc0  (orig 0x14ddfc0, indexed-getter)
uint64_t main_f_14ddfc0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14ddfd0  (orig 0x14ddfd0, indexed-getter)
uint64_t main_f_14ddfd0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14de3f0  (orig 0x14de3f0, mov_ret)
uint32_t main_f_14de3f0() { return 1; }

// sub_14deda0  (orig 0x14deda0, getter)
uint64_t main_f_14deda0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14def10  (orig 0x14def10, mov_ret)
uint32_t main_f_14def10() { return 1; }

// sub_14def20  (orig 0x14def20, indexed-getter)
uint64_t main_f_14def20(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14def30  (orig 0x14def30, indexed-getter)
uint64_t main_f_14def30(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14e0aa0  (orig 0x14e0aa0, ret_only)
void main_f_14e0aa0() {}

// sub_14e11c0  (orig 0x14e11c0, getter)
uint64_t main_f_14e11c0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14e1330  (orig 0x14e1330, mov_ret)
uint32_t main_f_14e1330() { return 1; }

// sub_14e1340  (orig 0x14e1340, indexed-getter)
uint64_t main_f_14e1340(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_14e1350  (orig 0x14e1350, indexed-getter)
uint64_t main_f_14e1350(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_14e1830  (orig 0x14e1830, ret_only)
void main_f_14e1830() {}

// sub_14e1ce0  (orig 0x14e1ce0, ret_only)
void main_f_14e1ce0() {}

// sub_14e1cf0  (orig 0x14e1cf0, ret_only)
void main_f_14e1cf0() {}

// sub_14e1d00  (orig 0x14e1d00, ret_only)
void main_f_14e1d00() {}

// sub_14e1d10  (orig 0x14e1d10, ret_only)
void main_f_14e1d10() {}

// sub_14e1d40  (orig 0x14e1d40, ret_only)
void main_f_14e1d40() {}

// sub_14e1d50  (orig 0x14e1d50, mov_ret)
uint32_t main_f_14e1d50() { return 0; }

// sub_14e1d60  (orig 0x14e1d60, getter)
uint8_t main_f_14e1d60(void* a0) { return *(uint8_t*)((char*)(a0) + 132); }

// sub_14e28f0  (orig 0x14e28f0, compare)
bool main_f_14e28f0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 129)) == (uint64_t)(0); }

// sub_14e2c30  (orig 0x14e2c30, ret_only)
void main_f_14e2c30() {}

// sub_14e2c40  (orig 0x14e2c40, ret_only)
void main_f_14e2c40() {}

// sub_14e2c50  (orig 0x14e2c50, ret_only)
void main_f_14e2c50() {}

// sub_14e2f00  (orig 0x14e2f00, ret_only)
void main_f_14e2f00() {}

// sub_14e2f10  (orig 0x14e2f10, ret_only)
void main_f_14e2f10() {}

// sub_14e2f20  (orig 0x14e2f20, ret_only)
void main_f_14e2f20() {}

// sub_14e2f30  (orig 0x14e2f30, ret_only)
void main_f_14e2f30() {}

// sub_14e2f40  (orig 0x14e2f40, ret_only)
void main_f_14e2f40() {}

// sub_14e2f50  (orig 0x14e2f50, mov_ret)
uint32_t main_f_14e2f50() { return 1; }

// sub_14e2f60  (orig 0x14e2f60, mov_ret)
uint32_t main_f_14e2f60() { return 1; }

// sub_14e4110  (orig 0x14e4110, straight)
void main_f_14e4110(void* a0) {
    *(uint8_t*)((char*)(a0) + 1151) = (uint8_t)(1);
}

// sub_14e4120  (orig 0x14e4120, compare-pred)
bool main_f_14e4120(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 640) - 2)) < (uint32_t)(4); }

// sub_14e4180  (orig 0x14e4180, compare)
bool main_f_14e4180(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 640)) == (uint64_t)(0); }

// sub_14e5040  (orig 0x14e5040, mov_ret)
uint32_t main_f_14e5040() { return 1; }

// sub_14e5740  (orig 0x14e5740, ret_only)
void main_f_14e5740() {}

// sub_14e5750  (orig 0x14e5750, ret_only)
void main_f_14e5750() {}

// sub_14e5980  (orig 0x14e5980, ret_only)
void main_f_14e5980() {}

// sub_14e5a60  (orig 0x14e5a60, ret_only)
void main_f_14e5a60() {}

// sub_14e5a70  (orig 0x14e5a70, ret_only)
void main_f_14e5a70() {}

// sub_14e5a80  (orig 0x14e5a80, ret_only)
void main_f_14e5a80() {}

// sub_14e5a90  (orig 0x14e5a90, ret_only)
void main_f_14e5a90() {}

// sub_14e5aa0  (orig 0x14e5aa0, ret_only)
void main_f_14e5aa0() {}

// sub_14e5ab0  (orig 0x14e5ab0, mov_ret)
uint32_t main_f_14e5ab0() { return 1; }

// sub_14e5ac0  (orig 0x14e5ac0, mov_ret)
uint32_t main_f_14e5ac0() { return 1; }

// sub_14e5ad0  (orig 0x14e5ad0, ret_only)
void main_f_14e5ad0() {}

// sub_14e6540  (orig 0x14e6540, getter-chain)
uint64_t main_f_14e6540(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 1032))) + 12); }

// sub_14e6f30  (orig 0x14e6f30, mov_ret)
uint32_t main_f_14e6f30() { return 1; }

// sub_14eac60  (orig 0x14eac60, mov_ret)
uint32_t main_f_14eac60() { return 1; }

// sub_14eb420  (orig 0x14eb420, ret_only)
void main_f_14eb420() {}

// sub_14eb430  (orig 0x14eb430, ret_only)
void main_f_14eb430() {}

// sub_14ec830  (orig 0x14ec830, compare)
bool main_f_14ec830(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 129)) == (uint64_t)(0); }

// sub_14ee7c0  (orig 0x14ee7c0, copy2)
void main_f_14ee7c0(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 2064) = *(uint64_t*)((char*)(a1)); }

// sub_14eebd0  (orig 0x14eebd0, getter-chain)
uint32_t main_f_14eebd0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 1872))) + 20); }

// sub_14eebe0  (orig 0x14eebe0, getter-chain)
uint32_t main_f_14eebe0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 1872))) + 16); }

// sub_14eec80  (orig 0x14eec80, ret_only)
void main_f_14eec80() {}

// sub_14ef1e0  (orig 0x14ef1e0, mov_ret)
uint32_t main_f_14ef1e0() { return 1; }

// sub_14f1850  (orig 0x14f1850, setter)
void main_f_14f1850(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1948) = a1; }

// sub_14f1ef0  (orig 0x14f1ef0, setter-chain)
void main_f_14f1ef0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 1968) = a2; *(uint64_t*)((char*)(a0) + 1960) = a1; }

// sub_14f22e0  (orig 0x14f22e0, ret_only)
void main_f_14f22e0() {}

// sub_14f22f0  (orig 0x14f22f0, copy2)
void main_f_14f22f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2300  (orig 0x14f2300, copy2)
void main_f_14f2300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2330  (orig 0x14f2330, ret_only)
void main_f_14f2330() {}

// sub_14f2340  (orig 0x14f2340, copy2)
void main_f_14f2340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2350  (orig 0x14f2350, copy2)
void main_f_14f2350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2360  (orig 0x14f2360, ret_only)
void main_f_14f2360() {}

// sub_14f2370  (orig 0x14f2370, ret_only)
void main_f_14f2370() {}

// sub_14f2380  (orig 0x14f2380, ret_only)
void main_f_14f2380() {}

// sub_14f2390  (orig 0x14f2390, ret_only)
void main_f_14f2390() {}

// sub_14f3140  (orig 0x14f3140, ret_only)
void main_f_14f3140() {}

// sub_14f3150  (orig 0x14f3150, struct-copy)
void main_f_14f3150(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14f3170  (orig 0x14f3170, struct-copy)
void main_f_14f3170(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14f31b0  (orig 0x14f31b0, ret_only)
void main_f_14f31b0() {}

// sub_14f31c0  (orig 0x14f31c0, struct-copy)
void main_f_14f31c0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14f31e0  (orig 0x14f31e0, struct-copy)
void main_f_14f31e0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_14f4070  (orig 0x14f4070, ret_only)
void main_f_14f4070() {}

// sub_14f4080  (orig 0x14f4080, copy2)
void main_f_14f4080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f4090  (orig 0x14f4090, copy2)
void main_f_14f4090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f4d60  (orig 0x14f4d60, getter)
uint32_t main_f_14f4d60(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_14f4d70  (orig 0x14f4d70, setter)
void main_f_14f4d70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_14f5060  (orig 0x14f5060, mov_ret)
uint32_t main_f_14f5060() { return 0; }

// sub_14f5070  (orig 0x14f5070, mov_ret)
uint32_t main_f_14f5070() { return 0; }

// sub_14f5080  (orig 0x14f5080, mov_ret)
uint32_t main_f_14f5080() { return 0; }

// sub_14f5090  (orig 0x14f5090, compare)
bool main_f_14f5090(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 104)) == (uint64_t)(3); }

// sub_14f5b60  (orig 0x14f5b60, compare)
bool main_f_14f5b60(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 12)) > (int64_t)(0); }

// sub_14f5c60  (orig 0x14f5c60, mov_ret)
uint32_t main_f_14f5c60() { return 0; }

// sub_14f63b0  (orig 0x14f63b0, ret_only)
void main_f_14f63b0() {}

// sub_14f63d0  (orig 0x14f63d0, getter)
uint32_t main_f_14f63d0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_14f63e0  (orig 0x14f63e0, setter)
void main_f_14f63e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_14f76f0  (orig 0x14f76f0, setter-chain)
void main_f_14f76f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; *(uint8_t*)((char*)(a0) + 8) = 0; }

// sub_14f7700  (orig 0x14f7700, straight)
void main_f_14f7700(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = -1;
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)(1);
}

// sub_14f7e40  (orig 0x14f7e40, compare)
bool main_f_14f7e40(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 440)) != (uint64_t)(0); }

// sub_14f8030  (orig 0x14f8030, getter)
uint8_t main_f_14f8030(void* a0) { return *(uint8_t*)((char*)(a0) + 476); }

// sub_14f8bc0  (orig 0x14f8bc0, ret_only)
void main_f_14f8bc0() {}

// sub_14f8f30  (orig 0x14f8f30, compare)
bool main_f_14f8f30(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 104)) == (uint64_t)(11); }

// sub_14fb430  (orig 0x14fb430, ret_only)
void main_f_14fb430() {}

// sub_14fb440  (orig 0x14fb440, ret_only)
void main_f_14fb440() {}

// sub_14fb450  (orig 0x14fb450, ret_only)
void main_f_14fb450() {}

// sub_14fbc60  (orig 0x14fbc60, ret_only)
void main_f_14fbc60() {}

// sub_14fbc70  (orig 0x14fbc70, ret_only)
void main_f_14fbc70() {}

// sub_14fbc80  (orig 0x14fbc80, ret_only)
void main_f_14fbc80() {}

// sub_14fbfe0  (orig 0x14fbfe0, ret_only)
void main_f_14fbfe0() {}

// sub_14fc060  (orig 0x14fc060, mov_ret)
uint32_t main_f_14fc060() { return 1; }

// sub_14fc070  (orig 0x14fc070, mov_ret)
uint32_t main_f_14fc070() { return 1; }

// sub_14fc080  (orig 0x14fc080, ret_only)
void main_f_14fc080() {}

// sub_14fc090  (orig 0x14fc090, ret_only)
void main_f_14fc090() {}

// sub_14fcd70  (orig 0x14fcd70, ret_only)
void main_f_14fcd70() {}

// sub_14fcd80  (orig 0x14fcd80, ret_only)
void main_f_14fcd80() {}

// sub_14fcd90  (orig 0x14fcd90, ret_only)
void main_f_14fcd90() {}

// sub_14fd5b0  (orig 0x14fd5b0, ret_only)
void main_f_14fd5b0() {}

// sub_14fd5c0  (orig 0x14fd5c0, ret_only)
void main_f_14fd5c0() {}

// sub_14fd5d0  (orig 0x14fd5d0, ret_only)
void main_f_14fd5d0() {}

// sub_14fdd60  (orig 0x14fdd60, ret_only)
void main_f_14fdd60() {}

// sub_14fdd70  (orig 0x14fdd70, ret_only)
void main_f_14fdd70() {}

// sub_14fdd80  (orig 0x14fdd80, ret_only)
void main_f_14fdd80() {}

// sub_14fe4f0  (orig 0x14fe4f0, ret_only)
void main_f_14fe4f0() {}

// sub_14fe500  (orig 0x14fe500, ret_only)
void main_f_14fe500() {}

// sub_14fe510  (orig 0x14fe510, ret_only)
void main_f_14fe510() {}

// sub_14fe890  (orig 0x14fe890, ret_only)
void main_f_14fe890() {}

// sub_14fe8a0  (orig 0x14fe8a0, ret_only)
void main_f_14fe8a0() {}

// sub_14fe8b0  (orig 0x14fe8b0, ret_only)
void main_f_14fe8b0() {}

// sub_14ff4c0  (orig 0x14ff4c0, ret_only)
void main_f_14ff4c0() {}

// sub_14ff4d0  (orig 0x14ff4d0, ret_only)
void main_f_14ff4d0() {}

// sub_14ff4e0  (orig 0x14ff4e0, ret_only)
void main_f_14ff4e0() {}

// sub_1500080  (orig 0x1500080, ret_only)
void main_f_1500080() {}

// sub_1500090  (orig 0x1500090, ret_only)
void main_f_1500090() {}

// sub_15000a0  (orig 0x15000a0, ret_only)
void main_f_15000a0() {}

// sub_1501c90  (orig 0x1501c90, ret_only)
void main_f_1501c90() {}

// sub_15030d0  (orig 0x15030d0, mov_ret)
uint32_t main_f_15030d0() { return 1; }

// sub_15030e0  (orig 0x15030e0, ret_only)
void main_f_15030e0() {}

// sub_1505a10  (orig 0x1505a10, compare)
bool main_f_1505a10(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 288)) == (uint64_t)(2); }

// sub_1505a20  (orig 0x1505a20, compare)
bool main_f_1505a20(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 288)) == (uint64_t)(5); }

// sub_1505fc0  (orig 0x1505fc0, ptr_add)
void* main_f_1505fc0(void* a0) { return (char*)a0 + 432; }

// sub_1506190  (orig 0x1506190, mov_ret)
uint32_t main_f_1506190() { return 4; }

// sub_15061a0  (orig 0x15061a0, indexed-getter)
uint64_t main_f_15061a0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_15061b0  (orig 0x15061b0, indexed-getter)
uint64_t main_f_15061b0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1506360  (orig 0x1506360, ret_only)
void main_f_1506360() {}

// sub_1506370  (orig 0x1506370, copy2)
void main_f_1506370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1506380  (orig 0x1506380, copy2)
void main_f_1506380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1506440  (orig 0x1506440, ret_only)
void main_f_1506440() {}

// sub_1506450  (orig 0x1506450, copy2)
void main_f_1506450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1506460  (orig 0x1506460, copy2)
void main_f_1506460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_15064c0  (orig 0x15064c0, ret_only)
void main_f_15064c0() {}

// sub_1506540  (orig 0x1506540, ret_only)
void main_f_1506540() {}

// sub_1506b20  (orig 0x1506b20, mov_ret)
uint32_t main_f_1506b20() { return 1; }

// sub_1507bb0  (orig 0x1507bb0, ret_only)
void main_f_1507bb0() {}

// sub_150c650  (orig 0x150c650, ret_only)
void main_f_150c650() {}

// sub_150c660  (orig 0x150c660, copy2)
void main_f_150c660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150c670  (orig 0x150c670, copy2)
void main_f_150c670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150c6d0  (orig 0x150c6d0, ret_only)
void main_f_150c6d0() {}

// sub_150c6e0  (orig 0x150c6e0, copy2)
void main_f_150c6e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150c6f0  (orig 0x150c6f0, copy2)
void main_f_150c6f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150ca80  (orig 0x150ca80, ret_only)
void main_f_150ca80() {}

// sub_150ca90  (orig 0x150ca90, copy2)
void main_f_150ca90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150caa0  (orig 0x150caa0, copy2)
void main_f_150caa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150d900  (orig 0x150d900, ret_only)
void main_f_150d900() {}

// sub_150e600  (orig 0x150e600, ret_only)
void main_f_150e600() {}

// sub_150f2a0  (orig 0x150f2a0, ret_only)
void main_f_150f2a0() {}

// sub_150f8f0  (orig 0x150f8f0, mov_ret)
uint32_t main_f_150f8f0() { return 1; }

// sub_150f910  (orig 0x150f910, ret_only)
void main_f_150f910() {}

// sub_15103b0  (orig 0x15103b0, getter)
uint64_t main_f_15103b0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1510520  (orig 0x1510520, mov_ret)
uint32_t main_f_1510520() { return 1; }

// sub_1510530  (orig 0x1510530, indexed-getter)
uint64_t main_f_1510530(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1510540  (orig 0x1510540, indexed-getter)
uint64_t main_f_1510540(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_15106d0  (orig 0x15106d0, getter)
uint64_t main_f_15106d0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_15106e0  (orig 0x15106e0, setter)
void main_f_15106e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_1510ec0  (orig 0x1510ec0, setter)
void main_f_1510ec0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1792) = a1; }

// sub_15114f0  (orig 0x15114f0, ret_only)
void main_f_15114f0() {}

// sub_1511800  (orig 0x1511800, mov_ret)
uint32_t main_f_1511800() { return 1; }

// sub_1514640  (orig 0x1514640, ret_only)
void main_f_1514640() {}

// sub_1515000  (orig 0x1515000, setter)
void main_f_1515000(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_1515010  (orig 0x1515010, getter)
uint32_t main_f_1515010(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_15169f0  (orig 0x15169f0, ret_only)
void main_f_15169f0() {}

// sub_1516ee0  (orig 0x1516ee0, ret_only)
void main_f_1516ee0() {}

// sub_1516ef0  (orig 0x1516ef0, copy2)
void main_f_1516ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1516f00  (orig 0x1516f00, copy2)
void main_f_1516f00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1517500  (orig 0x1517500, ret_only)
void main_f_1517500() {}

// sub_1517be0  (orig 0x1517be0, ret_only)
void main_f_1517be0() {}

// sub_15180e0  (orig 0x15180e0, ret_only)
void main_f_15180e0() {}

// sub_15180f0  (orig 0x15180f0, copy2)
void main_f_15180f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1518100  (orig 0x1518100, copy2)
void main_f_1518100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_151a420  (orig 0x151a420, mov_ret)
uint32_t main_f_151a420() { return 9; }

// sub_151ad40  (orig 0x151ad40, mov_ret)
uint32_t main_f_151ad40() { return 1; }

// sub_151ad50  (orig 0x151ad50, ret_only)
void main_f_151ad50() {}

// sub_151bc50  (orig 0x151bc50, getter)
uint64_t main_f_151bc50(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_151bde0  (orig 0x151bde0, mov_ret)
uint32_t main_f_151bde0() { return 5; }

// sub_151bdf0  (orig 0x151bdf0, indexed-getter)
uint64_t main_f_151bdf0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_151be00  (orig 0x151be00, indexed-getter)
uint64_t main_f_151be00(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_151c2d0  (orig 0x151c2d0, getter)
uint64_t main_f_151c2d0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_151c2e0  (orig 0x151c2e0, getter)
uint32_t main_f_151c2e0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_151c2f0  (orig 0x151c2f0, setter)
void main_f_151c2f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_151c300  (orig 0x151c300, getter)
uint32_t main_f_151c300(void* a0) { return *(uint32_t*)((char*)(a0) + 116); }

// sub_151c310  (orig 0x151c310, getter)
uint32_t main_f_151c310(void* a0) { return *(uint32_t*)((char*)(a0) + 124); }

// sub_151c320  (orig 0x151c320, setter)
void main_f_151c320(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 124) = a1; }

// sub_151c330  (orig 0x151c330, getter)
uint32_t main_f_151c330(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_151c340  (orig 0x151c340, setter)
void main_f_151c340(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 120) = a1; }

// sub_151ca40  (orig 0x151ca40, ptr_add)
void* main_f_151ca40(void* a0) { return (char*)a0 + 168; }

// sub_151cf70  (orig 0x151cf70, getter)
uint32_t main_f_151cf70(void* a0) { return *(uint32_t*)((char*)(a0) + 1804); }

// sub_151d580  (orig 0x151d580, setter)
void main_f_151d580(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1856) = a1; }

// sub_151d590  (orig 0x151d590, getter)
uint32_t main_f_151d590(void* a0) { return *(uint32_t*)((char*)(a0) + 1856); }

// sub_151d5b0  (orig 0x151d5b0, getter)
uint8_t main_f_151d5b0(void* a0) { return *(uint8_t*)((char*)(a0) + 2652); }

// sub_151d5c0  (orig 0x151d5c0, compare)
bool main_f_151d5c0(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 3104)) > (uint64_t)(7); }

// sub_151e0d0  (orig 0x151e0d0, setter)
void main_f_151e0d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1920) = a1; }

// sub_1523aa0  (orig 0x1523aa0, ret_only)
void main_f_1523aa0() {}

// sub_15247d0  (orig 0x15247d0, setter)
void main_f_15247d0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_15248f0  (orig 0x15248f0, getter)
uint32_t main_f_15248f0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1524900  (orig 0x1524900, setter)
void main_f_1524900(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 2576) = a1; }

// sub_1525130  (orig 0x1525130, getter)
uint64_t main_f_1525130(void* a0) { return *(uint64_t*)((char*)(a0) + 1496); }

// sub_1525940  (orig 0x1525940, getter)
uint32_t main_f_1525940(void* a0) { return *(uint32_t*)((char*)(a0) + 1492); }

// sub_1527bd0  (orig 0x1527bd0, setter-chain)
void main_f_1527bd0(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 2584) = a1; *(uint32_t*)((char*)(a0) + 2592) = a2; }

// sub_15288d0  (orig 0x15288d0, getter)
uint32_t main_f_15288d0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1529670  (orig 0x1529670, ptr_add)
void* main_f_1529670(void* a0) { return (char*)a0 + 1488; }

// sub_152a130  (orig 0x152a130, ret_only)
void main_f_152a130() {}

// sub_152a6b0  (orig 0x152a6b0, ret_only)
void main_f_152a6b0() {}

// sub_152a6c0  (orig 0x152a6c0, ret_only)
void main_f_152a6c0() {}

// sub_152a6d0  (orig 0x152a6d0, mov_ret)
uint32_t main_f_152a6d0() { return 0; }

// sub_152af80  (orig 0x152af80, ret_only)
void main_f_152af80() {}

// sub_152b4b0  (orig 0x152b4b0, ret_only)
void main_f_152b4b0() {}

// sub_152bf60  (orig 0x152bf60, ret_only)
void main_f_152bf60() {}

// sub_152c1b0  (orig 0x152c1b0, setter)
void main_f_152c1b0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_152c2d0  (orig 0x152c2d0, getter)
uint32_t main_f_152c2d0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_152f6c0  (orig 0x152f6c0, getter)
uint32_t main_f_152f6c0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_152fd80  (orig 0x152fd80, ret_only)
void main_f_152fd80() {}

// sub_152fd90  (orig 0x152fd90, struct-copy)
void main_f_152fd90(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_152fdb0  (orig 0x152fdb0, struct-copy)
void main_f_152fdb0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_152fdf0  (orig 0x152fdf0, ret_only)
void main_f_152fdf0() {}

// sub_152fe00  (orig 0x152fe00, struct-copy)
void main_f_152fe00(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_152fe20  (orig 0x152fe20, struct-copy)
void main_f_152fe20(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1530270  (orig 0x1530270, ret_only)
void main_f_1530270() {}

// sub_1530ba0  (orig 0x1530ba0, ret_only)
void main_f_1530ba0() {}

// sub_1531390  (orig 0x1531390, ret_only)
void main_f_1531390() {}

// sub_15317e0  (orig 0x15317e0, setter)
void main_f_15317e0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_1531900  (orig 0x1531900, getter)
uint32_t main_f_1531900(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1531910  (orig 0x1531910, setter-chain)
void main_f_1531910(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0) + 1492) = a1; *(uint64_t*)((char*)(a0) + 1496) = a2; }

// sub_1532790  (orig 0x1532790, getter)
uint8_t main_f_1532790(void* a0) { return *(uint8_t*)((char*)(a0) + 1528); }

// sub_15327a0  (orig 0x15327a0, getter)
uint64_t main_f_15327a0(void* a0) { return *(uint64_t*)((char*)(a0) + 1496); }

// sub_1532f00  (orig 0x1532f00, ret_only)
void main_f_1532f00() {}

// sub_15334c0  (orig 0x15334c0, ret_only)
void main_f_15334c0() {}

// sub_1533a80  (orig 0x1533a80, ret_only)
void main_f_1533a80() {}

// sub_1533f30  (orig 0x1533f30, ret_only)
void main_f_1533f30() {}

// sub_1534b50  (orig 0x1534b50, ret_only)
void main_f_1534b50() {}

// sub_1535410  (orig 0x1535410, ret_only)
void main_f_1535410() {}

// sub_1535910  (orig 0x1535910, ret_only)
void main_f_1535910() {}

// sub_15368d0  (orig 0x15368d0, ret_only)
void main_f_15368d0() {}

// sub_1536ab0  (orig 0x1536ab0, ret_only)
void main_f_1536ab0() {}

// sub_1536ac0  (orig 0x1536ac0, struct-copy)
void main_f_1536ac0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1536ae0  (orig 0x1536ae0, struct-copy)
void main_f_1536ae0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1536b20  (orig 0x1536b20, ret_only)
void main_f_1536b20() {}

// sub_1536b30  (orig 0x1536b30, struct-copy)
void main_f_1536b30(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1536b50  (orig 0x1536b50, struct-copy)
void main_f_1536b50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_15372c0  (orig 0x15372c0, ret_only)
void main_f_15372c0() {}

// sub_1537810  (orig 0x1537810, ret_only)
void main_f_1537810() {}

// sub_1538390  (orig 0x1538390, ret_only)
void main_f_1538390() {}

// sub_1539950  (orig 0x1539950, ret_only)
void main_f_1539950() {}

// sub_1539eb0  (orig 0x1539eb0, mov_ret)
uint32_t main_f_1539eb0() { return 1; }

// sub_153b630  (orig 0x153b630, getter)
uint64_t main_f_153b630(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_153b7c0  (orig 0x153b7c0, mov_ret)
uint32_t main_f_153b7c0() { return 5; }

// sub_153b7d0  (orig 0x153b7d0, indexed-getter)
uint64_t main_f_153b7d0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_153b7e0  (orig 0x153b7e0, indexed-getter)
uint64_t main_f_153b7e0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_153bdb0  (orig 0x153bdb0, getter)
uint64_t main_f_153bdb0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_153bdc0  (orig 0x153bdc0, ptr_add)
void* main_f_153bdc0(void* a0) { return (char*)a0 + 136; }

// sub_153bdd0  (orig 0x153bdd0, setter)
void main_f_153bdd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_153c340  (orig 0x153c340, compare)
bool main_f_153c340(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 176)) == (uint64_t)(3); }

// sub_153c410  (orig 0x153c410, setter)
void main_f_153c410(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1920) = a1; }

// sub_1540510  (orig 0x1540510, ret_only)
void main_f_1540510() {}

// sub_15407f0  (orig 0x15407f0, getter)
uint32_t main_f_15407f0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1540800  (orig 0x1540800, setter)
void main_f_1540800(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1496) = a1; }

// sub_1542510  (orig 0x1542510, ret_only)
void main_f_1542510() {}

// sub_1542a80  (orig 0x1542a80, ret_only)
void main_f_1542a80() {}

// sub_1542a90  (orig 0x1542a90, ret_only)
void main_f_1542a90() {}

// sub_1542aa0  (orig 0x1542aa0, mov_ret)
uint32_t main_f_1542aa0() { return 0; }

// sub_15434f0  (orig 0x15434f0, ret_only)
void main_f_15434f0() {}

// sub_1543500  (orig 0x1543500, mov_ret)
uint32_t main_f_1543500() { return 0; }

// sub_15452c0  (orig 0x15452c0, ret_only)
void main_f_15452c0() {}

// sub_1545d10  (orig 0x1545d10, ret_only)
void main_f_1545d10() {}

// sub_1546de0  (orig 0x1546de0, ret_only)
void main_f_1546de0() {}

// sub_1547260  (orig 0x1547260, ret_only)
void main_f_1547260() {}

// sub_1547630  (orig 0x1547630, ret_only)
void main_f_1547630() {}

// sub_1547c40  (orig 0x1547c40, ret_only)
void main_f_1547c40() {}

// sub_154db40  (orig 0x154db40, getter)
uint8_t main_f_154db40(void* a0) { return *(uint8_t*)((char*)(a0) + 12); }

// sub_1551c30  (orig 0x1551c30, compare)
bool main_f_1551c30(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 196)) == (uint64_t)(0); }

// sub_1552e80  (orig 0x1552e80, getter)
uint64_t main_f_1552e80(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_1552e90  (orig 0x1552e90, getter)
uint32_t main_f_1552e90(void* a0) { return *(uint32_t*)((char*)(a0) + 200); }

// sub_1552ea0  (orig 0x1552ea0, getter)
uint32_t main_f_1552ea0(void* a0) { return *(uint32_t*)((char*)(a0) + 188); }

// sub_15621a0  (orig 0x15621a0, straight)
uint32_t main_f_15621a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 36) = *(uint32_t*)((char*)(a0) + 32);
    return *(uint32_t*)((char*)(a0) + 32);
}

// sub_1570e40  (orig 0x1570e40, ret_only)
void main_f_1570e40() {}

// sub_1571110  (orig 0x1571110, getter)
uint64_t main_f_1571110(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1571120  (orig 0x1571120, setter)
void main_f_1571120(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_157f0b0  (orig 0x157f0b0, setter)
void main_f_157f0b0(void* a0, uint64_t unused1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 664) = a2; }

// sub_157f0c0  (orig 0x157f0c0, setter)
void main_f_157f0c0(void* a0, uint64_t unused1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 504) = a2; }

// sub_158a780  (orig 0x158a780, ret_only)
void main_f_158a780() {}

// sub_158c0f0  (orig 0x158c0f0, straight)
void main_f_158c0f0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint16_t*)((char*)(a0) + 10) = *(uint16_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 12) = *(uint8_t*)((char*)(a1) + 12);
}

// sub_158c1f0  (orig 0x158c1f0, straight)
void main_f_158c1f0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1) + 16);
    *(uint16_t*)((char*)(a0) + 24) = *(uint16_t*)((char*)(a1) + 24);
}

// sub_158cf90  (orig 0x158cf90, ret_only)
void main_f_158cf90() {}

// sub_158cfa0  (orig 0x158cfa0, ret_only)
void main_f_158cfa0() {}

// sub_158d020  (orig 0x158d020, ret_only)
void main_f_158d020() {}

// sub_158d3b0  (orig 0x158d3b0, ret_only)
void main_f_158d3b0() {}

// sub_158d8a0  (orig 0x158d8a0, ret_only)
void main_f_158d8a0() {}

// sub_158da60  (orig 0x158da60, ret_only)
void main_f_158da60() {}

// sub_158dd30  (orig 0x158dd30, ret_only)
void main_f_158dd30() {}

// sub_158e030  (orig 0x158e030, ret_only)
void main_f_158e030() {}

// sub_158e040  (orig 0x158e040, ret_only)
void main_f_158e040() {}

// sub_158e480  (orig 0x158e480, ret_only)
void main_f_158e480() {}

// sub_158e490  (orig 0x158e490, ret_only)
void main_f_158e490() {}

// sub_158e610  (orig 0x158e610, ret_only)
void main_f_158e610() {}

// sub_158e9d0  (orig 0x158e9d0, ret_only)
void main_f_158e9d0() {}

// sub_158e9e0  (orig 0x158e9e0, ret_only)
void main_f_158e9e0() {}

// sub_158e9f0  (orig 0x158e9f0, ret_only)
void main_f_158e9f0() {}

// sub_158ea00  (orig 0x158ea00, ret_only)
void main_f_158ea00() {}

// sub_1591b40  (orig 0x1591b40, mov_ret)
uint32_t main_f_1591b40() { return 1; }

// sub_1591b70  (orig 0x1591b70, mov_ret)
uint32_t main_f_1591b70() { return 1; }

// sub_1591c00  (orig 0x1591c00, ret_only)
void main_f_1591c00() {}

// sub_1591c10  (orig 0x1591c10, mov_ret)
uint32_t main_f_1591c10() { return 1; }

// sub_1591c20  (orig 0x1591c20, straight)
uint64_t main_f_1591c20(uint64_t unused0, uint64_t unused1, uint64_t unused2, uint64_t unused3, void* a4) {
    *(uint8_t*)((char*)(a4)) = (uint8_t)(1);
    return 0;
}

// sub_1593100  (orig 0x1593100, ret_only)
void main_f_1593100() {}

// sub_15946f0  (orig 0x15946f0, ret_only)
void main_f_15946f0() {}

// sub_1599450  (orig 0x1599450, ret_only)
void main_f_1599450() {}

// sub_15994d0  (orig 0x15994d0, ret_only)
void main_f_15994d0() {}

// sub_1599790  (orig 0x1599790, getter)
uint64_t main_f_1599790(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15997a0  (orig 0x15997a0, setter)
void main_f_15997a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_159b3d0  (orig 0x159b3d0, getter-chain)
uint64_t main_f_159b3d0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 8))) + 192); }

// sub_159c6f0  (orig 0x159c6f0, ret_only)
void main_f_159c6f0() {}

// sub_15a37e0  (orig 0x15a37e0, straight)
void main_f_15a37e0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 12) = *(uint32_t*)((char*)(a1) + 12);
}

// sub_15a3960  (orig 0x15a3960, ret_only)
void main_f_15a3960() {}

// sub_15a3a70  (orig 0x15a3a70, ret_only)
void main_f_15a3a70() {}

// sub_15a3a80  (orig 0x15a3a80, ret_only)
void main_f_15a3a80() {}

// sub_15a3a90  (orig 0x15a3a90, ret_only)
void main_f_15a3a90() {}

// sub_15a3aa0  (orig 0x15a3aa0, ret_only)
void main_f_15a3aa0() {}

// sub_15a3ab0  (orig 0x15a3ab0, ret_only)
void main_f_15a3ab0() {}

// sub_15a3b60  (orig 0x15a3b60, ret_only)
void main_f_15a3b60() {}

// sub_15a3b70  (orig 0x15a3b70, ret_only)
void main_f_15a3b70() {}

// sub_15a3df0  (orig 0x15a3df0, ret_only)
void main_f_15a3df0() {}

// sub_15a3e90  (orig 0x15a3e90, ret_only)
void main_f_15a3e90() {}

// sub_15a4320  (orig 0x15a4320, ret_only)
void main_f_15a4320() {}

// sub_15a5840  (orig 0x15a5840, setter)
void main_f_15a5840(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 100) = a1; }

// sub_15a5890  (orig 0x15a5890, getter-chain)
uint32_t main_f_15a5890(void* a0, uint32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 104);
    return *(uint32_t*)((char*)(t0) + (uintptr_t)(a1) * 4);
}

// sub_15a6ab0  (orig 0x15a6ab0, setter)
void main_f_15a6ab0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 204) = a1; }

// sub_15a73b0  (orig 0x15a73b0, setter)
void main_f_15a73b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 100) = a1; }

// sub_15a73c0  (orig 0x15a73c0, getter)
uint32_t main_f_15a73c0(void* a0) { return *(uint32_t*)((char*)(a0) + 100); }

// ServerProtocol  (orig 0x15a9050, strlit-ret)
const char *main_f_15a9050() { static const char s[] = "ServerProtocol"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15a90e0  (orig 0x15a90e0, ret_only)
void main_f_15a90e0() {}

// sub_15a90f0  (orig 0x15a90f0, ret_only)
void main_f_15a90f0() {}

// sub_15a9120  (orig 0x15a9120, mov_ret)
uint32_t main_f_15a9120() { return 1; }

// sub_15a9130  (orig 0x15a9130, mov_ret)
uint32_t main_f_15a9130() { return 1; }

// sub_15a9140  (orig 0x15a9140, getter)
uint32_t main_f_15a9140(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_15a9150  (orig 0x15a9150, ret_only)
void main_f_15a9150() {}

// sub_15a9160  (orig 0x15a9160, mov_ret)
uint32_t main_f_15a9160() { return 1; }

// sub_15a9170  (orig 0x15a9170, ret_only)
void main_f_15a9170() {}

// sub_15a9180  (orig 0x15a9180, ret_only)
void main_f_15a9180() {}

// sub_15a9190  (orig 0x15a9190, mov_ret)
uint64_t main_f_15a9190() { return 0; }

// sub_15a91a0  (orig 0x15a91a0, mov_ret)
uint32_t main_f_15a91a0() { return 1; }

// sub_15a91b0  (orig 0x15a91b0, ret_only)
void main_f_15a91b0() {}

// sub_15a91c0  (orig 0x15a91c0, mov_ret)
uint32_t main_f_15a91c0() { return 0; }

// sub_15a91e0  (orig 0x15a91e0, ret_only)
void main_f_15a91e0() {}

// sub_15a9200  (orig 0x15a9200, mov_ret)
uint32_t main_f_15a9200() { return 0; }

// sub_15a9210  (orig 0x15a9210, ret_only)
void main_f_15a9210() {}

// sub_15a9220  (orig 0x15a9220, ret_only)
void main_f_15a9220() {}

// sub_15a9230  (orig 0x15a9230, ret_only)
void main_f_15a9230() {}

// ClientProtocol  (orig 0x15a9270, strlit-ret)
const char *main_f_15a9270() { static const char s[] = "ClientProtocol"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15a9300  (orig 0x15a9300, ret_only)
void main_f_15a9300() {}

// sub_15a9310  (orig 0x15a9310, mov_ret)
uint32_t main_f_15a9310() { return 0; }

// sub_15ad640  (orig 0x15ad640, getter)
uint64_t main_f_15ad640(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15ad650  (orig 0x15ad650, setter)
void main_f_15ad650(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15af2d0  (orig 0x15af2d0, ret_only)
void main_f_15af2d0() {}

// sub_15af720  (orig 0x15af720, ret_only)
void main_f_15af720() {}

// sub_15b05a0  (orig 0x15b05a0, straight)
void main_f_15b05a0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1) + 16);
    *(uint32_t*)((char*)(a0) + 24) = *(uint32_t*)((char*)(a1) + 24);
}

// sub_15b1200  (orig 0x15b1200, getter)
uint64_t main_f_15b1200(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15b1210  (orig 0x15b1210, setter)
void main_f_15b1210(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15b38c0  (orig 0x15b38c0, getter)
uint32_t main_f_15b38c0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_15b38e0  (orig 0x15b38e0, ret_only)
void main_f_15b38e0() {}

// sub_15b3df0  (orig 0x15b3df0, ret_only)
void main_f_15b3df0() {}

// sub_15b3e00  (orig 0x15b3e00, ret_only)
void main_f_15b3e00() {}

// sub_15b40e0  (orig 0x15b40e0, ret_only)
void main_f_15b40e0() {}

// sub_15b4680  (orig 0x15b4680, ret_only)
void main_f_15b4680() {}

// sub_15b48d0  (orig 0x15b48d0, getter)
uint64_t main_f_15b48d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15b48e0  (orig 0x15b48e0, setter)
void main_f_15b48e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15b58c0  (orig 0x15b58c0, ret_only)
void main_f_15b58c0() {}

// sub_15b59d0  (orig 0x15b59d0, ret_only)
void main_f_15b59d0() {}

// sub_15b59e0  (orig 0x15b59e0, ret_only)
void main_f_15b59e0() {}

// sub_15b59f0  (orig 0x15b59f0, ret_only)
void main_f_15b59f0() {}

// sub_15b66c0  (orig 0x15b66c0, ret_only)
void main_f_15b66c0() {}

// sub_15b66d0  (orig 0x15b66d0, ret_only)
void main_f_15b66d0() {}

// sub_15b66e0  (orig 0x15b66e0, ret_only)
void main_f_15b66e0() {}

// sub_15b66f0  (orig 0x15b66f0, ret_only)
void main_f_15b66f0() {}

// sub_15b6700  (orig 0x15b6700, ret_only)
void main_f_15b6700() {}

// sub_15b6710  (orig 0x15b6710, ret_only)
void main_f_15b6710() {}

// sub_15b6850  (orig 0x15b6850, ret_only)
void main_f_15b6850() {}

// sub_15b6c40  (orig 0x15b6c40, getter)
uint64_t main_f_15b6c40(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15b6c50  (orig 0x15b6c50, setter)
void main_f_15b6c50(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15b79f0  (orig 0x15b79f0, ret_only)
void main_f_15b79f0() {}

// sub_15b7a70  (orig 0x15b7a70, setter)
void main_f_15b7a70(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_15b7a80  (orig 0x15b7a80, copy2)
void main_f_15b7a80(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); }

// sub_15b7b20  (orig 0x15b7b20, copy2)
void main_f_15b7b20(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); }

// sub_15b7d30  (orig 0x15b7d30, getter)
uint64_t main_f_15b7d30(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_15b7d40  (orig 0x15b7d40, getter)
uint64_t main_f_15b7d40(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_15b7d50  (orig 0x15b7d50, compare)
bool main_f_15b7d50(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) > (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_15b7d70  (orig 0x15b7d70, compare)
bool main_f_15b7d70(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) <= (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_15b8f60  (orig 0x15b8f60, ret_only)
void main_f_15b8f60() {}

// sub_15b9280  (orig 0x15b9280, getter)
uint64_t main_f_15b9280(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_15baa10  (orig 0x15baa10, straight)
void main_f_15baa10(void* a0) {
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(2);
}

// sub_15baaf0  (orig 0x15baaf0, straight)
void main_f_15baaf0(void* a0) {
    *(uint8_t*)((char*)(a0) + 81) = (uint8_t)(1);
}

// sub_15bab40  (orig 0x15bab40, setter)
void main_f_15bab40(uint64_t unused0, void* a1) { *(uint8_t*)((char*)(a1)) = 0; }

// sub_15babb0  (orig 0x15babb0, ret_only)
void main_f_15babb0() {}

// sub_15babc0  (orig 0x15babc0, ret_only)
void main_f_15babc0() {}

// sub_15babd0  (orig 0x15babd0, ret_only)
void main_f_15babd0() {}

// sub_15bacb0  (orig 0x15bacb0, ret_only)
void main_f_15bacb0() {}

// sub_15bacf0  (orig 0x15bacf0, straight)
void main_f_15bacf0(void* a0) {
    *(uint8_t*)((char*)(a0) + 288) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 291) = (uint8_t)(1);
}

// sub_15bad00  (orig 0x15bad00, setter)
void main_f_15bad00(void* a0) { *(uint8_t*)((char*)(a0) + 289) = 0; }

// sub_15bb880  (orig 0x15bb880, setter-chain-zero)
void main_f_15bb880(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 32) = 0;
}

// sub_15bb900  (orig 0x15bb900, ret_only)
void main_f_15bb900() {}

// sub_15bbc70  (orig 0x15bbc70, compare)
bool main_f_15bbc70(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) == (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_15bbd10  (orig 0x15bbd10, straight)
void main_f_15bbd10(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a1) + 16);
}

// sub_15bc130  (orig 0x15bc130, ret_only)
void main_f_15bc130() {}

// sub_15bd7f0  (orig 0x15bd7f0, getter)
uint64_t main_f_15bd7f0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_15bd800  (orig 0x15bd800, getter)
uint64_t main_f_15bd800(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15beca0  (orig 0x15beca0, setter)
void main_f_15beca0(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_15bf100  (orig 0x15bf100, straight)
void main_f_15bf100(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint32_t*)((char*)(a0) + 8) = 5;
}

// sub_15bf120  (orig 0x15bf120, getter)
uint32_t main_f_15bf120(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_15c0590  (orig 0x15c0590, mov_ret)
uint32_t main_f_15c0590() { return 0; }

// sub_15c05a0  (orig 0x15c05a0, mov_ret)
uint32_t main_f_15c05a0() { return 1; }

// sub_15c05d0  (orig 0x15c05d0, ret_only)
void main_f_15c05d0() {}

// sub_15c05e0  (orig 0x15c05e0, ret_only)
void main_f_15c05e0() {}

// sub_15c05f0  (orig 0x15c05f0, ret_only)
void main_f_15c05f0() {}

// sub_15c06d0  (orig 0x15c06d0, mov_ret)
uint32_t main_f_15c06d0() { return 1; }

// sub_15c06e0  (orig 0x15c06e0, mov_ret)
uint32_t main_f_15c06e0() { return 1; }

// sub_15c0ac0  (orig 0x15c0ac0, mov_ret)
uint32_t main_f_15c0ac0() { return 0; }

// sub_15c3ed0  (orig 0x15c3ed0, ret_only)
void main_f_15c3ed0() {}

// sub_15c4610  (orig 0x15c4610, mov_ret)
uint32_t main_f_15c4610() { return 16; }

// sub_15c66f0  (orig 0x15c66f0, mov_ret)
uint32_t main_f_15c66f0() { return 16; }

// sub_15c9350  (orig 0x15c9350, setter-chain)
void main_f_15c9350(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 112) = a1; *(uint32_t*)((char*)(a0) + 120) = a2; }

// sub_15cdff0  (orig 0x15cdff0, ret_only)
void main_f_15cdff0() {}

// sub_15ce110  (orig 0x15ce110, ret_only)
void main_f_15ce110() {}

// sub_15ce670  (orig 0x15ce670, ret_only)
void main_f_15ce670() {}

// sub_15cedf0  (orig 0x15cedf0, compare)
bool main_f_15cedf0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 100)) == (uint64_t)(0); }

// sub_15cee00  (orig 0x15cee00, ret_only)
void main_f_15cee00() {}

// sub_15cefa0  (orig 0x15cefa0, ret_only)
void main_f_15cefa0() {}

// sub_15d2cd0  (orig 0x15d2cd0, setter)
void main_f_15d2cd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_15d2fc0  (orig 0x15d2fc0, ret_only)
void main_f_15d2fc0() {}

// sub_15d45f0  (orig 0x15d45f0, mov_ret)
uint32_t main_f_15d45f0() { return 1; }

// sub_15d4640  (orig 0x15d4640, ret_only)
void main_f_15d4640() {}

// sub_15d4650  (orig 0x15d4650, ret_only)
void main_f_15d4650() {}

// sub_15d4660  (orig 0x15d4660, ret_only)
void main_f_15d4660() {}

// sub_15d4670  (orig 0x15d4670, mov_ret)
uint32_t main_f_15d4670() { return 1; }

// sub_15d4680  (orig 0x15d4680, mov_ret)
uint32_t main_f_15d4680() { return 16; }

// sub_15d4690  (orig 0x15d4690, ret_only)
void main_f_15d4690() {}

// CallContextRegister_2  (orig 0x15d46c0, strlit-ret)
const char *main_f_15d46c0() { static const char s[] = "CallContextRegister"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15d4730  (orig 0x15d4730, ret_only)
void main_f_15d4730() {}

// sub_15d4750  (orig 0x15d4750, getter)
uint32_t main_f_15d4750(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_15d47c0  (orig 0x15d47c0, getter)
uint32_t main_f_15d47c0(void* a0) { return *(uint32_t*)((char*)(a0) + 80); }

// SystemComponent_4  (orig 0x15d47d0, strlit-ret)
const char *main_f_15d47d0() { static const char s[] = "SystemComponent"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15d4810  (orig 0x15d4810, mov_ret)
uint32_t main_f_15d4810() { return 1; }

// sub_15d4820  (orig 0x15d4820, mov_ret)
uint32_t main_f_15d4820() { return 1; }

// SystemComponentGroup  (orig 0x15d4830, strlit-ret)
const char *main_f_15d4830() { static const char s[] = "SystemComponentGroup"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15d48a0  (orig 0x15d48a0, ret_only)
void main_f_15d48a0() {}

// sub_15d48b0  (orig 0x15d48b0, ret_only)
void main_f_15d48b0() {}

// sub_15d48c0  (orig 0x15d48c0, ret_only)
void main_f_15d48c0() {}

// sub_15d48d0  (orig 0x15d48d0, ret_only)
void main_f_15d48d0() {}

// sub_15d48e0  (orig 0x15d48e0, ret_only)
void main_f_15d48e0() {}

// sub_15d48f0  (orig 0x15d48f0, ret_only)
void main_f_15d48f0() {}

// sub_15d65c0  (orig 0x15d65c0, ptr_add)
void* main_f_15d65c0(void* a0) { return (char*)a0 + 8; }

// sub_15d65d0  (orig 0x15d65d0, ptr_add)
void* main_f_15d65d0(void* a0) { return (char*)a0 + 128; }

// sub_15d65e0  (orig 0x15d65e0, getter)
uint32_t main_f_15d65e0(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_15d7280  (orig 0x15d7280, compare)
bool main_f_15d7280(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 72)) == (uint64_t)(64); }

// sub_15d7fb0  (orig 0x15d7fb0, ret_only)
void main_f_15d7fb0() {}

// sub_15d80e0  (orig 0x15d80e0, ret_only)
void main_f_15d80e0() {}

// sub_15d80f0  (orig 0x15d80f0, mov_ret)
uint32_t main_f_15d80f0() { return 0; }

// sub_15d8100  (orig 0x15d8100, mov_ret)
uint64_t main_f_15d8100() { return 0; }

// sub_15d8110  (orig 0x15d8110, ret_only)
void main_f_15d8110() {}

// sub_15d8120  (orig 0x15d8120, mov_ret)
uint32_t main_f_15d8120() { return 0; }

// sub_15d8130  (orig 0x15d8130, mov_ret)
uint64_t main_f_15d8130() { return 0; }

// sub_15d8150  (orig 0x15d8150, mov_ret)
uint32_t main_f_15d8150() { return 0; }

// sub_15d8160  (orig 0x15d8160, ret_only)
void main_f_15d8160() {}

// sub_15d8170  (orig 0x15d8170, ret_only)
void main_f_15d8170() {}

// sub_15d8180  (orig 0x15d8180, ret_only)
void main_f_15d8180() {}

// sub_15d8df0  (orig 0x15d8df0, setter)
void main_f_15d8df0(void* a0, float a1) { *(float*)((char*)(a0) + 36) = a1; }

// sub_15d98d0  (orig 0x15d98d0, ret_only)
void main_f_15d98d0() {}

// sub_15de580  (orig 0x15de580, ret_only)
void main_f_15de580() {}

// sub_15df270  (orig 0x15df270, ret_only)
void main_f_15df270() {}

// sub_15e6fc0  (orig 0x15e6fc0, ptr_add)
void* main_f_15e6fc0(void* a0) { return (char*)a0 + 128; }

// sub_15e7d10  (orig 0x15e7d10, ptr_add)
void* main_f_15e7d10(void* a0) { return (char*)a0 + 64; }

// sub_15e8a50  (orig 0x15e8a50, ret_only)
void main_f_15e8a50() {}

// sub_15e8a70  (orig 0x15e8a70, mov_ret)
uint64_t main_f_15e8a70() { return 0; }

// sub_15e8a80  (orig 0x15e8a80, mov_ret)
uint64_t main_f_15e8a80() { return 0; }

// sub_15eaa80  (orig 0x15eaa80, mov_ret)
uint32_t main_f_15eaa80() { return 3; }

// sub_15ec6b0  (orig 0x15ec6b0, ret_only)
void main_f_15ec6b0() {}

// sub_15ec6c0  (orig 0x15ec6c0, mov_ret)
uint32_t main_f_15ec6c0() { return 1; }

// sub_15ecbe0  (orig 0x15ecbe0, ret_only)
void main_f_15ecbe0() {}

// sub_15ecbf0  (orig 0x15ecbf0, ret_only)
void main_f_15ecbf0() {}

// sub_15ecc00  (orig 0x15ecc00, ret_only)
void main_f_15ecc00() {}

// sub_15ecc10  (orig 0x15ecc10, mov_ret)
uint32_t main_f_15ecc10() { return 0; }

// sub_15ed920  (orig 0x15ed920, ret_only)
void main_f_15ed920() {}

// sub_15f3d30  (orig 0x15f3d30, ptr_add)
void* main_f_15f3d30(void* a0) { return (char*)a0 + 1080; }

// sub_15f5f10  (orig 0x15f5f10, mov_ret)
uint64_t main_f_15f5f10() { return 0; }

// sub_15f5f20  (orig 0x15f5f20, mov_ret)
uint64_t main_f_15f5f20() { return 0; }

// sub_15f71b0  (orig 0x15f71b0, getter-chain)
uint64_t main_f_15f71b0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 224);
    uint64_t t1 = *(uint64_t*)(char*)(t0);
    return *(uint64_t*)((char*)(t1) + 24);
}

// sub_1601d50  (orig 0x1601d50, strlit-ret)
const char *main_f_1601d50() { static const char s[] = "prudp"; __asm__ volatile("" ::: "memory"); return s; }

// sub_1606400  (orig 0x1606400, ret_only)
void main_f_1606400() {}

// sub_1607c60  (orig 0x1607c60, ret_only)
void main_f_1607c60() {}

// sub_16092b0  (orig 0x16092b0, ret_only)
void main_f_16092b0() {}

// sub_1609f50  (orig 0x1609f50, ret_only)
void main_f_1609f50() {}

// sub_1609f60  (orig 0x1609f60, ret_only)
void main_f_1609f60() {}

// sub_160a2e0  (orig 0x160a2e0, getter)
uint32_t main_f_160a2e0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_160a510  (orig 0x160a510, ret_only)
void main_f_160a510() {}

// sub_160a750  (orig 0x160a750, ret_only)
void main_f_160a750() {}

// sub_160aff0  (orig 0x160aff0, ret_only)
void main_f_160aff0() {}

// sub_160cf80  (orig 0x160cf80, ret_only)
void main_f_160cf80() {}

// sub_160f5d0  (orig 0x160f5d0, mov_ret)
uint32_t main_f_160f5d0() { return 1; }

// sub_160fc90  (orig 0x160fc90, ret_only)
void main_f_160fc90() {}

// sub_160fce0  (orig 0x160fce0, mov_ret)
uint32_t main_f_160fce0() { return 0; }

// sub_160fcf0  (orig 0x160fcf0, ret_only)
void main_f_160fcf0() {}

// sub_160fd10  (orig 0x160fd10, mov_ret)
uint32_t main_f_160fd10() { return 0; }

// sub_160fd20  (orig 0x160fd20, ret_only)
void main_f_160fd20() {}

// sub_160fd30  (orig 0x160fd30, mov_ret)
uint32_t main_f_160fd30() { return 0; }

// sub_160fd40  (orig 0x160fd40, mov_ret)
uint32_t main_f_160fd40() { return 3; }

// sub_160fd50  (orig 0x160fd50, mov_ret)
uint32_t main_f_160fd50() { return 0; }

// sub_160fdc0  (orig 0x160fdc0, straight)
void main_f_160fdc0(void* a0) {
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)(1);
}

// sub_160fde0  (orig 0x160fde0, setter)
void main_f_160fde0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 168) = a1; }

// sub_160fdf0  (orig 0x160fdf0, setter)
void main_f_160fdf0(void* a0) { *(uint64_t*)((char*)(a0) + 168) = 0; }

// sub_160fe00  (orig 0x160fe00, ret_only)
void main_f_160fe00() {}

// sub_160fe10  (orig 0x160fe10, ret_only)
void main_f_160fe10() {}

// sub_160fe80  (orig 0x160fe80, ret_only)
void main_f_160fe80() {}

// sub_160fe90  (orig 0x160fe90, ret_only)
void main_f_160fe90() {}

// sub_160fea0  (orig 0x160fea0, ret_only)
void main_f_160fea0() {}

// sub_160feb0  (orig 0x160feb0, ptr_add)
void* main_f_160feb0(void* a0) { return (char*)a0 + 1112; }

// sub_160fec0  (orig 0x160fec0, straight)
void main_f_160fec0(void* a0) {
    *(uint8_t*)((char*)(a0) + 736) = (uint8_t)(1);
}

// sub_160fed0  (orig 0x160fed0, getter)
uint8_t main_f_160fed0(void* a0) { return *(uint8_t*)((char*)(a0) + 384); }

// sub_160fee0  (orig 0x160fee0, compare)
bool main_f_160fee0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(0); }

// sub_160fef0  (orig 0x160fef0, compare)
bool main_f_160fef0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(1); }

// sub_160ff00  (orig 0x160ff00, compare)
bool main_f_160ff00(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(3); }

// sub_160ff10  (orig 0x160ff10, compare)
bool main_f_160ff10(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(4); }

// sub_160ff20  (orig 0x160ff20, compare)
bool main_f_160ff20(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(2); }

// sub_160ff30  (orig 0x160ff30, getter)
uint8_t main_f_160ff30(void* a0) { return *(uint8_t*)((char*)(a0) + 280); }

// sub_160ff40  (orig 0x160ff40, compare)
bool main_f_160ff40(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 280)) == (uint64_t)(0); }

// sub_160ff50  (orig 0x160ff50, setter)
void main_f_160ff50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 268) = a1; }

// sub_160ff60  (orig 0x160ff60, getter)
uint32_t main_f_160ff60(void* a0) { return *(uint32_t*)((char*)(a0) + 272); }

// sub_160ff70  (orig 0x160ff70, getter)
uint32_t main_f_160ff70(void* a0) { return *(uint32_t*)((char*)(a0) + 268); }

// sub_160ff80  (orig 0x160ff80, straight)
void main_f_160ff80(void* a0) {
    *(uint8_t*)((char*)(a0) + 280) = (uint8_t)(1);
}

// sub_160ff90  (orig 0x160ff90, setter)
void main_f_160ff90(void* a0) { *(uint8_t*)((char*)(a0) + 280) = 0; }

// sub_160ffa0  (orig 0x160ffa0, getter)
uint32_t main_f_160ffa0(void* a0) { return *(uint32_t*)((char*)(a0) + 276); }

// sub_160ffb0  (orig 0x160ffb0, getter)
uint32_t main_f_160ffb0(void* a0) { return *(uint32_t*)((char*)(a0) + 284); }

// sub_160ffc0  (orig 0x160ffc0, getter)
uint32_t main_f_160ffc0(void* a0) { return *(uint32_t*)((char*)(a0) + 304); }

// sub_160ffe0  (orig 0x160ffe0, getter)
uint64_t main_f_160ffe0(void* a0) { return *(uint64_t*)((char*)(a0) + 496); }

// sub_1610010  (orig 0x1610010, getter)
uint32_t main_f_1610010(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1610020  (orig 0x1610020, setter)
void main_f_1610020(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_1610030  (orig 0x1610030, ptr_add)
void* main_f_1610030(void* a0) { return (char*)a0 + 16; }

// sub_1610040  (orig 0x1610040, ptr_add)
void* main_f_1610040(void* a0) { return (char*)a0 + 16; }

// sub_1610050  (orig 0x1610050, getter)
uint32_t main_f_1610050(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1610110  (orig 0x1610110, mov_ret)
uint64_t main_f_1610110() { return 0; }

// ComponentState  (orig 0x1610480, strlit-ret)
const char *main_f_1610480() { static const char s[] = "ComponentState"; __asm__ volatile("" ::: "memory"); return s; }

// sub_16104f0  (orig 0x16104f0, ret_only)
void main_f_16104f0() {}

// sub_1611c40  (orig 0x1611c40, mov_ret)
uint32_t main_f_1611c40() { return 1; }

// sub_1611c50  (orig 0x1611c50, ret_only)
void main_f_1611c50() {}

// sub_1611c60  (orig 0x1611c60, ret_only)
void main_f_1611c60() {}

// sub_1611c70  (orig 0x1611c70, ret_only)
void main_f_1611c70() {}

// sub_1611c80  (orig 0x1611c80, ret_only)
void main_f_1611c80() {}

// sub_1611c90  (orig 0x1611c90, mov_ret)
uint64_t main_f_1611c90() { return 0; }

// sub_1611ca0  (orig 0x1611ca0, ret_only)
void main_f_1611ca0() {}

// sub_1611cb0  (orig 0x1611cb0, ret_only)
void main_f_1611cb0() {}

// sub_1612510  (orig 0x1612510, ret_only)
void main_f_1612510() {}

// sub_1612690  (orig 0x1612690, getter)
uint64_t main_f_1612690(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_16126a0  (orig 0x16126a0, setter)
void main_f_16126a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1612d60  (orig 0x1612d60, getter)
uint64_t main_f_1612d60(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1612d70  (orig 0x1612d70, setter)
void main_f_1612d70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1612f20  (orig 0x1612f20, getter)
uint64_t main_f_1612f20(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1612f30  (orig 0x1612f30, setter)
void main_f_1612f30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1613bb0  (orig 0x1613bb0, getter)
uint64_t main_f_1613bb0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1613bc0  (orig 0x1613bc0, setter)
void main_f_1613bc0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1614b20  (orig 0x1614b20, getter)
uint64_t main_f_1614b20(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1614b30  (orig 0x1614b30, setter)
void main_f_1614b30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1616be0  (orig 0x1616be0, mov_ret)
uint32_t main_f_1616be0() { return 0; }

// sub_1616bf0  (orig 0x1616bf0, ret_only)
void main_f_1616bf0() {}

// sub_1617390  (orig 0x1617390, getter)
uint8_t main_f_1617390(void* a0) { return *(uint8_t*)((char*)(a0) + 20); }

// sub_1617790  (orig 0x1617790, mov_ret)
uint32_t main_f_1617790() { return 1; }

// sub_16179b0  (orig 0x16179b0, mov_ret)
uint32_t main_f_16179b0() { return 1; }

// sub_1617a00  (orig 0x1617a00, mov_ret)
uint32_t main_f_1617a00() { return 1; }

// sub_1617a10  (orig 0x1617a10, mov_ret)
uint32_t main_f_1617a10() { return 1; }

// sub_1617c70  (orig 0x1617c70, mov_ret)
uint32_t main_f_1617c70() { return 1; }

// sub_1617c80  (orig 0x1617c80, mov_ret)
uint32_t main_f_1617c80() { return 0; }

// sub_1617c90  (orig 0x1617c90, mov_ret)
uint32_t main_f_1617c90() { return 1; }

// sub_1617d90  (orig 0x1617d90, mov_ret)
uint32_t main_f_1617d90() { return 1; }

// sub_1617db0  (orig 0x1617db0, mov_ret)
uint32_t main_f_1617db0() { return 1; }

// sub_16180c0  (orig 0x16180c0, mov_ret)
uint32_t main_f_16180c0() { return 1; }

// sub_16180d0  (orig 0x16180d0, mov_ret)
uint32_t main_f_16180d0() { return 1; }

// sub_16184e0  (orig 0x16184e0, ret_only)
void main_f_16184e0() {}

// sub_1618570  (orig 0x1618570, setter)
void main_f_1618570(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; }

// sub_1618830  (orig 0x1618830, getter)
uint32_t main_f_1618830(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_1618840  (orig 0x1618840, getter)
uint32_t main_f_1618840(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_1618850  (orig 0x1618850, getter)
uint32_t main_f_1618850(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_1618860  (orig 0x1618860, setter-chain)
void main_f_1618860(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_1618a20  (orig 0x1618a20, getter)
uint32_t main_f_1618a20(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_161cea0  (orig 0x161cea0, ptr_add)
void* main_f_161cea0(void* a0) { return (char*)a0 + 8; }

// sub_1621f70  (orig 0x1621f70, mov_ret)
uint32_t main_f_1621f70() { return 0; }

// sub_1621f80  (orig 0x1621f80, mov_ret)
uint64_t main_f_1621f80() { return 0; }

// sub_1621f90  (orig 0x1621f90, getter)
uint8_t main_f_1621f90(void* a0) { return *(uint8_t*)((char*)(a0) + 21); }

// sub_1621fa0  (orig 0x1621fa0, mov_ret)
uint32_t main_f_1621fa0() { return 1; }

// sub_1621fb0  (orig 0x1621fb0, ret_only)
void main_f_1621fb0() {}

// sub_1621fc0  (orig 0x1621fc0, getter)
uint32_t main_f_1621fc0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// BerkeleySocketDriver_BerkeleySocket  (orig 0x1621fd0, strlit-ret)
const char *main_f_1621fd0() { static const char s[] = "BerkeleySocketDriver::BerkeleySocket"; __asm__ volatile("" ::: "memory"); return s; }

// sub_1621fe0  (orig 0x1621fe0, ret_only)
void main_f_1621fe0() {}

// sub_1622050  (orig 0x1622050, getter)
uint8_t main_f_1622050(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_16220a0  (orig 0x16220a0, ret_only)
void main_f_16220a0() {}

// sub_16220b0  (orig 0x16220b0, ret_only)
void main_f_16220b0() {}

// sub_16220c0  (orig 0x16220c0, ret_only)
void main_f_16220c0() {}

// sub_16220d0  (orig 0x16220d0, ret_only)
void main_f_16220d0() {}

// sub_16220e0  (orig 0x16220e0, ret_only)
void main_f_16220e0() {}

// sub_16220f0  (orig 0x16220f0, mov_ret)
uint32_t main_f_16220f0() { return 0; }

// sub_1622100  (orig 0x1622100, ret_only)
void main_f_1622100() {}

// sub_1622110  (orig 0x1622110, mov_ret)
uint32_t main_f_1622110() { return 0; }

// sub_1622120  (orig 0x1622120, mov_ret)
uint32_t main_f_1622120() { return 1; }

// ClientWebSocketDriver_ClientWebSocket  (orig 0x1622130, strlit-ret)
const char *main_f_1622130() { static const char s[] = "ClientWebSocketDriver::ClientWebSocket"; __asm__ volatile("" ::: "memory"); return s; }

// sub_1622150  (orig 0x1622150, mov_ret)
uint32_t main_f_1622150() { return 0; }

// sub_1622160  (orig 0x1622160, mov_ret)
uint32_t main_f_1622160() { return 0; }

// sub_1622170  (orig 0x1622170, mov_ret)
uint32_t main_f_1622170() { return 1; }

// sub_1622180  (orig 0x1622180, mov_ret)
uint32_t main_f_1622180() { return 1; }

// sub_1622190  (orig 0x1622190, mov_ret)
uint32_t main_f_1622190() { return 0; }

// sub_16221a0  (orig 0x16221a0, mov_ret)
uint32_t main_f_16221a0() { return -1; }

// SocketDriver_Socket  (orig 0x16221b0, strlit-ret)
const char *main_f_16221b0() { static const char s[] = "SocketDriver::Socket"; __asm__ volatile("" ::: "memory"); return s; }

// sub_16221c0  (orig 0x16221c0, ret_only)
void main_f_16221c0() {}

// sub_1622470  (orig 0x1622470, ret_only)
void main_f_1622470() {}

// sub_16224d0  (orig 0x16224d0, ret_only)
void main_f_16224d0() {}

// sub_16224f0  (orig 0x16224f0, ret_only)
void main_f_16224f0() {}

// sub_16228d0  (orig 0x16228d0, getter)
uint64_t main_f_16228d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_16228e0  (orig 0x16228e0, setter)
void main_f_16228e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1622ba0  (orig 0x1622ba0, ret_only)
void main_f_1622ba0() {}

// sub_1622bd0  (orig 0x1622bd0, ret_only)
void main_f_1622bd0() {}

// sub_16234f0  (orig 0x16234f0, ret_only)
void main_f_16234f0() {}

// sub_1624b10  (orig 0x1624b10, ret_only)
void main_f_1624b10() {}

// sub_1624bb0  (orig 0x1624bb0, ret_only)
void main_f_1624bb0() {}

// sub_1624c10  (orig 0x1624c10, ret_only)
void main_f_1624c10() {}

// sub_1626b00  (orig 0x1626b00, getter)
uint8_t main_f_1626b00(void* a0) { return *(uint8_t*)((char*)(a0) + 516); }

// sub_1626e50  (orig 0x1626e50, mov_ret)
uint32_t main_f_1626e50() { return 1; }

// sub_1626e80  (orig 0x1626e80, ret_only)
void main_f_1626e80() {}

// sub_1627140  (orig 0x1627140, getter)
uint8_t main_f_1627140(void* a0) { return *(uint8_t*)((char*)(a0) + 32); }

// sub_162a8c0  (orig 0x162a8c0, ret_only)
void main_f_162a8c0() {}

// sub_162a8e0  (orig 0x162a8e0, ret_only)
void main_f_162a8e0() {}

// sub_162a8f0  (orig 0x162a8f0, setter)
void main_f_162a8f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 592) = a1; }

// sub_162bf70  (orig 0x162bf70, setter)
void main_f_162bf70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 112) = a1; }

// sub_162bf80  (orig 0x162bf80, getter)
uint8_t main_f_162bf80(void* a0) { return *(uint8_t*)((char*)(a0) + 32); }

// sub_162c010  (orig 0x162c010, getter)
uint8_t main_f_162c010(void* a0) { return *(uint8_t*)((char*)(a0) + 33); }

// sub_162cca0  (orig 0x162cca0, getter-chain)
uint64_t main_f_162cca0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0))))); }

// sub_162ccb0  (orig 0x162ccb0, getter-chain)
uint64_t main_f_162ccb0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 8)))); }

// sub_162ccc0  (orig 0x162ccc0, compare)
bool main_f_162ccc0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(0); }

// sub_162cd20  (orig 0x162cd20, ret_only)
void main_f_162cd20() {}

// sub_162cd80  (orig 0x162cd80, ret_only)
void main_f_162cd80() {}

// sub_162d880  (orig 0x162d880, ret_only)
void main_f_162d880() {}

// sub_162dae0  (orig 0x162dae0, getter)
uint64_t main_f_162dae0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162daf0  (orig 0x162daf0, setter)
void main_f_162daf0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162ddd0  (orig 0x162ddd0, getter)
uint64_t main_f_162ddd0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162dde0  (orig 0x162dde0, setter)
void main_f_162dde0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162dfd0  (orig 0x162dfd0, getter)
uint64_t main_f_162dfd0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162dfe0  (orig 0x162dfe0, setter)
void main_f_162dfe0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162e190  (orig 0x162e190, getter)
uint64_t main_f_162e190(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162e1a0  (orig 0x162e1a0, setter)
void main_f_162e1a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162e350  (orig 0x162e350, getter)
uint64_t main_f_162e350(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162e360  (orig 0x162e360, setter)
void main_f_162e360(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162ee30  (orig 0x162ee30, ret_only)
void main_f_162ee30() {}

// sub_162ee40  (orig 0x162ee40, ret_only)
void main_f_162ee40() {}

// sub_162eec0  (orig 0x162eec0, getter)
uint64_t main_f_162eec0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_162fef0  (orig 0x162fef0, setter-chain)
void main_f_162fef0(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint8_t*)((char*)(a0) + 24) = 0; }

// sub_16305b0  (orig 0x16305b0, setter-chain)
void main_f_16305b0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint8_t*)((char*)(a0) + 24) = 0; }

// sub_1630750  (orig 0x1630750, ret_only)
void main_f_1630750() {}

// sub_1630a10  (orig 0x1630a10, setter)
void main_f_1630a10(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 72) = a1; }

// sub_1630cb0  (orig 0x1630cb0, ret_only)
void main_f_1630cb0() {}

// sub_16317b0  (orig 0x16317b0, ret_only)
void main_f_16317b0() {}

// sub_1632860  (orig 0x1632860, ret_only)
void main_f_1632860() {}

// sub_1633bd0  (orig 0x1633bd0, setter)
void main_f_1633bd0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 80) = a1; }

// sub_16340b0  (orig 0x16340b0, getter-chain)
uint64_t main_f_16340b0(void* a0, uint32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 144);
    return *(uint64_t*)((char*)(t0) + (uintptr_t)(a1) * 8);
}

// sub_1634130  (orig 0x1634130, ret_only)
void main_f_1634130() {}

// sub_1634590  (orig 0x1634590, straight)
void main_f_1634590(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 12) = *(uint32_t*)((char*)(a1) + 12);
    *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a1) + 16);
}

// sub_1634b90  (orig 0x1634b90, ret_only)
void main_f_1634b90() {}

// sub_1634ba0  (orig 0x1634ba0, ret_only)
void main_f_1634ba0() {}

// sub_1634bb0  (orig 0x1634bb0, ret_only)
void main_f_1634bb0() {}

// sub_1635d80  (orig 0x1635d80, ret_only)
void main_f_1635d80() {}

// sub_1637270  (orig 0x1637270, getter)
uint8_t main_f_1637270(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_1638190  (orig 0x1638190, mov_ret)
uint32_t main_f_1638190() { return 19; }

// CallProtocolMethod  (orig 0x16381a0, strlit-ret)
const char *main_f_16381a0() { static const char s[] = "CallProtocolMethod"; __asm__ volatile("" ::: "memory"); return s; }

// sub_16381b0  (orig 0x16381b0, ret_only)
void main_f_16381b0() {}

// sub_16381f0  (orig 0x16381f0, ret_only)
void main_f_16381f0() {}

// sub_1638200  (orig 0x1638200, ret_only)
void main_f_1638200() {}

// sub_1638210  (orig 0x1638210, ret_only)
void main_f_1638210() {}

// sub_1638320  (orig 0x1638320, ret_only)
void main_f_1638320() {}

// sub_1638500  (orig 0x1638500, ret_only)
void main_f_1638500() {}

// sub_1639140  (orig 0x1639140, getter)
uint64_t main_f_1639140(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639150  (orig 0x1639150, setter)
void main_f_1639150(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639430  (orig 0x1639430, getter)
uint64_t main_f_1639430(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639440  (orig 0x1639440, setter)
void main_f_1639440(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639720  (orig 0x1639720, getter)
uint64_t main_f_1639720(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639730  (orig 0x1639730, setter)
void main_f_1639730(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639a10  (orig 0x1639a10, getter)
uint64_t main_f_1639a10(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639a20  (orig 0x1639a20, setter)
void main_f_1639a20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639d00  (orig 0x1639d00, getter)
uint64_t main_f_1639d00(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639d10  (orig 0x1639d10, setter)
void main_f_1639d10(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_163a5d0  (orig 0x163a5d0, ret_only)
void main_f_163a5d0() {}

// sub_1640e90  (orig 0x1640e90, mov_ret)
uint32_t main_f_1640e90() { return 0; }

// sub_1640ea0  (orig 0x1640ea0, ret_only)
void main_f_1640ea0() {}

// sub_1640eb0  (orig 0x1640eb0, mov_ret)
uint64_t main_f_1640eb0() { return 0; }

// sub_1640ec0  (orig 0x1640ec0, mov_ret)
uint32_t main_f_1640ec0() { return 0; }

// sub_1640ed0  (orig 0x1640ed0, mov_ret)
uint32_t main_f_1640ed0() { return 0; }

// sub_1641680  (orig 0x1641680, ret_only)
void main_f_1641680() {}

// sub_1647f60  (orig 0x1647f60, ret_only)
void main_f_1647f60() {}

// sub_1647f80  (orig 0x1647f80, ret_only)
void main_f_1647f80() {}

// prudps_2  (orig 0x164ac60, strlit-ret)
const char *main_f_164ac60() { static const char s[] = "prudps"; __asm__ volatile("" ::: "memory"); return s; }

// sub_164ad60  (orig 0x164ad60, mov_ret)
uint64_t main_f_164ad60() { return 0; }

// sub_164add0  (orig 0x164add0, mov_ret)
uint32_t main_f_164add0() { return 0; }

// sub_164ade0  (orig 0x164ade0, ret_only)
void main_f_164ade0() {}

// sub_164af80  (orig 0x164af80, ret_only)
void main_f_164af80() {}

// sub_164b560  (orig 0x164b560, ret_only)
void main_f_164b560() {}

// sub_164b620  (orig 0x164b620, mov_ret)
uint32_t main_f_164b620() { return 21; }

// RendezVousLogin  (orig 0x164b630, strlit-ret)
const char *main_f_164b630() { static const char s[] = "RendezVousLogin"; __asm__ volatile("" ::: "memory"); return s; }

// sub_164b640  (orig 0x164b640, ret_only)
void main_f_164b640() {}

// sub_164b650  (orig 0x164b650, mov_ret)
uint32_t main_f_164b650() { return 22; }

// RendezVousLogout  (orig 0x164b660, strlit-ret)
const char *main_f_164b660() { static const char s[] = "RendezVousLogout"; __asm__ volatile("" ::: "memory"); return s; }

// sub_164b670  (orig 0x164b670, ret_only)
void main_f_164b670() {}

// sub_164b680  (orig 0x164b680, ret_only)
void main_f_164b680() {}

// sub_164b690  (orig 0x164b690, mov_ret)
uint32_t main_f_164b690() { return 0; }

// sub_164b6a0  (orig 0x164b6a0, mov_ret)
uint64_t main_f_164b6a0() { return 0; }

// sub_164b6b0  (orig 0x164b6b0, ret_only)
void main_f_164b6b0() {}

// sub_164b6c0  (orig 0x164b6c0, mov_ret)
uint32_t main_f_164b6c0() { return 0; }

// sub_164b710  (orig 0x164b710, mov_ret)
uint32_t main_f_164b710() { return 0; }

// sub_164bf90  (orig 0x164bf90, getter)
uint64_t main_f_164bf90(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_164bfa0  (orig 0x164bfa0, setter)
void main_f_164bfa0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_164c190  (orig 0x164c190, ret_only)
void main_f_164c190() {}

// sub_164c1a0  (orig 0x164c1a0, ret_only)
void main_f_164c1a0() {}

// sub_164c330  (orig 0x164c330, ret_only)
void main_f_164c330() {}

// sub_164e5f0  (orig 0x164e5f0, ret_only)
void main_f_164e5f0() {}

// sub_164e820  (orig 0x164e820, ret_only)
void main_f_164e820() {}

// sub_164e830  (orig 0x164e830, ret_only)
void main_f_164e830() {}

// sub_164e840  (orig 0x164e840, ret_only)
void main_f_164e840() {}

// sub_164ea30  (orig 0x164ea30, ret_only)
void main_f_164ea30() {}

// sub_1650100  (orig 0x1650100, getter)
uint64_t main_f_1650100(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1650110  (orig 0x1650110, setter)
void main_f_1650110(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1650a60  (orig 0x1650a60, ret_only)
void main_f_1650a60() {}

// sub_1651310  (orig 0x1651310, getter)
uint64_t main_f_1651310(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1651320  (orig 0x1651320, setter)
void main_f_1651320(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1652460  (orig 0x1652460, ret_only)
void main_f_1652460() {}

// sub_1652470  (orig 0x1652470, getter)
uint32_t main_f_1652470(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_1652480  (orig 0x1652480, mov_ret)
uint32_t main_f_1652480() { return 119; }

// sub_1652490  (orig 0x1652490, setter)
void main_f_1652490(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_1652660  (orig 0x1652660, ret_only)
void main_f_1652660() {}

// sub_1652910  (orig 0x1652910, mov_ret)
uint64_t main_f_1652910() { return 0; }

// sub_1652930  (orig 0x1652930, ret_only)
void main_f_1652930() {}

// sub_1652990  (orig 0x1652990, ret_only)
void main_f_1652990() {}

// sub_1652d30  (orig 0x1652d30, ret_only)
void main_f_1652d30() {}

// sub_1653bb0  (orig 0x1653bb0, ret_only)
void main_f_1653bb0() {}

// sub_1654290  (orig 0x1654290, ptr_add)
void* main_f_1654290(void* a0) { return (char*)a0 + 1392; }

// sub_1654870  (orig 0x1654870, getter)
uint8_t main_f_1654870(void* a0) { return *(uint8_t*)((char*)(a0) + 1424); }

// sub_1654880  (orig 0x1654880, setter)
void main_f_1654880(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1432) = a1; }

// sub_1654890  (orig 0x1654890, setter)
void main_f_1654890(void* a0) { *(uint64_t*)((char*)(a0) + 1432) = 0; }

// sub_16548a0  (orig 0x16548a0, getter)
uint8_t main_f_16548a0(void* a0) { return *(uint8_t*)((char*)(a0) + 1384); }

// sub_1655070  (orig 0x1655070, ret_only)
void main_f_1655070() {}

// sub_1655170  (orig 0x1655170, ret_only)
void main_f_1655170() {}

// sub_1655330  (orig 0x1655330, straight)
void main_f_1655330(void* a0) {
    *(uint8_t*)((char*)(a0) + 40) = (uint8_t)(1);
}

// sub_1657630  (orig 0x1657630, ret_only)
void main_f_1657630() {}

// sub_16580b0  (orig 0x16580b0, setter-chain)
void main_f_16580b0(void* a0) { *(void**)((char*)(a0)) = a0; *(void**)((char*)(a0) + 8) = a0; *(uint32_t*)((char*)(a0) + 16) = 0; }

// sub_16598a0  (orig 0x16598a0, mov_ret)
uint32_t main_f_16598a0() { return 16; }

// sub_1659bf0  (orig 0x1659bf0, mov_ret)
uint32_t main_f_1659bf0() { return 16; }

// sub_165af80  (orig 0x165af80, ret_only)
void main_f_165af80() {}

// sub_165ba30  (orig 0x165ba30, ret_only)
void main_f_165ba30() {}

// sub_165ba40  (orig 0x165ba40, ret_only)
void main_f_165ba40() {}

// sub_165bab0  (orig 0x165bab0, ret_only)
void main_f_165bab0() {}

// sub_165bc60  (orig 0x165bc60, ret_only)
void main_f_165bc60() {}

// sub_165bc80  (orig 0x165bc80, ret_only)
void main_f_165bc80() {}

// sub_165be70  (orig 0x165be70, getter)
uint64_t main_f_165be70(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_165be80  (orig 0x165be80, getter)
uint32_t main_f_165be80(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_165be90  (orig 0x165be90, getter)
uint64_t main_f_165be90(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_165c180  (orig 0x165c180, getter)
uint32_t main_f_165c180(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_165c5e0  (orig 0x165c5e0, ret_only)
void main_f_165c5e0() {}

// sub_165ca00  (orig 0x165ca00, setter)
void main_f_165ca00(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0)) = a1; }

// sub_165ca10  (orig 0x165ca10, getter)
uint8_t main_f_165ca10(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_165d640  (orig 0x165d640, mov_ret)
uint32_t main_f_165d640() { return 16; }

// sub_165d650  (orig 0x165d650, mov_ret)
uint32_t main_f_165d650() { return 64; }

// sub_165d900  (orig 0x165d900, straight)
void main_f_165d900(void* a0) {
    *(uint8_t*)((char*)(a0) + 32) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 136) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 240) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 344) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 448) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 552) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 656) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 760) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 864) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 968) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 1072) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 1176) = (uint8_t)(1);
}

// sub_165da10  (orig 0x165da10, ret_only)
void main_f_165da10() {}

// sub_165dad0  (orig 0x165dad0, setter-chain-zero)
void main_f_165dad0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 16) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 24) = 0;
}

// sub_165dae0  (orig 0x165dae0, ret_only)
void main_f_165dae0() {}

// sub_165dba0  (orig 0x165dba0, setter-chain)
void main_f_165dba0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_165fea0  (orig 0x165fea0, ret_only)
void main_f_165fea0() {}

// sub_165ffd0  (orig 0x165ffd0, setter)
void main_f_165ffd0(void* a0) { *(uint8_t*)((char*)(a0) + 8) = 0; }

// sub_1660970  (orig 0x1660970, ret_only)
void main_f_1660970() {}

// sub_16609a0  (orig 0x16609a0, ret_only)
void main_f_16609a0() {}

// sub_16609c0  (orig 0x16609c0, mov_ret)
uint32_t main_f_16609c0() { return 32; }

// sub_1660a30  (orig 0x1660a30, ret_only)
void main_f_1660a30() {}

// sub_1660cb0  (orig 0x1660cb0, setter)
void main_f_1660cb0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_1661340  (orig 0x1661340, mov_ret)
uint32_t main_f_1661340() { return 32; }

// sub_1661350  (orig 0x1661350, mov_ret)
uint32_t main_f_1661350() { return 64; }

// sub_1661510  (orig 0x1661510, setter-chain)
void main_f_1661510(void* a0) { *(uint64_t*)((char*)(a0) + 112) = 0; *(uint64_t*)((char*)(a0) + 120) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 128) = 0; }

// sub_1661520  (orig 0x1661520, ret_only)
void main_f_1661520() {}

// sub_16615e0  (orig 0x16615e0, setter-chain)
void main_f_16615e0(void* a0) { *(uint64_t*)((char*)(a0) + 112) = 0; *(uint32_t*)((char*)(a0) + 120) = 0; }

// sub_1661d50  (orig 0x1661d50, getter)
uint32_t main_f_1661d50(void* a0) { return *(uint32_t*)((char*)(a0) + 432); }

// sub_1661d90  (orig 0x1661d90, getter)
uint32_t main_f_1661d90(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1661db0  (orig 0x1661db0, getter)
uint32_t main_f_1661db0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1661ec0  (orig 0x1661ec0, getter)
uint8_t main_f_1661ec0(void* a0) { return *(uint8_t*)((char*)(a0) + 436); }

// sub_1661ee0  (orig 0x1661ee0, ret_only)
void main_f_1661ee0() {}

// sub_16621d0  (orig 0x16621d0, getter)
uint64_t main_f_16621d0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_1662350  (orig 0x1662350, getter-chain)
uint8_t main_f_1662350(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 152); }

// sub_1662650  (orig 0x1662650, ptr_add)
void* main_f_1662650(void* a0) { return (char*)a0 + 8; }

// sub_1662680  (orig 0x1662680, ptr_add)
void* main_f_1662680(void* a0) { return (char*)a0 + 8; }

// sub_16626b0  (orig 0x16626b0, ret_only)
void main_f_16626b0() {}

// sub_16626c0  (orig 0x16626c0, getter)
uint32_t main_f_16626c0(void* a0) { return *(uint32_t*)((char*)(a0) + 1688); }

// sub_1662740  (orig 0x1662740, ret_only)
void main_f_1662740() {}

// sub_16627d0  (orig 0x16627d0, mov_ret)
uint32_t main_f_16627d0() { return 16; }

// sub_16627e0  (orig 0x16627e0, mov_ret)
uint32_t main_f_16627e0() { return 48; }

// sub_16627f0  (orig 0x16627f0, mov_ret)
uint32_t main_f_16627f0() { return 1364; }

// sub_1662800  (orig 0x1662800, mov_ret)
uint32_t main_f_1662800() { return 1364; }

// sub_1662810  (orig 0x1662810, mov_ret)
uint32_t main_f_1662810() { return 400; }

// sub_1662830  (orig 0x1662830, mov_ret)
uint32_t main_f_1662830() { return 0; }

// sub_1662840  (orig 0x1662840, mov_ret)
uint32_t main_f_1662840() { return 0; }

// sub_1662850  (orig 0x1662850, mov_ret)
uint32_t main_f_1662850() { return 2; }

// sub_1662860  (orig 0x1662860, mov_ret)
uint32_t main_f_1662860() { return 10; }

// sub_1662870  (orig 0x1662870, mov_ret)
uint32_t main_f_1662870() { return 0; }

// sub_1662880  (orig 0x1662880, mov_ret)
uint32_t main_f_1662880() { return 1; }

// sub_1662890  (orig 0x1662890, mov_ret)
uint32_t main_f_1662890() { return 0; }

// sub_16628a0  (orig 0x16628a0, mov_ret)
uint32_t main_f_16628a0() { return 0; }

// sub_16628b0  (orig 0x16628b0, mov_ret)
uint32_t main_f_16628b0() { return 1; }

// sub_16628c0  (orig 0x16628c0, mov_ret)
uint32_t main_f_16628c0() { return 1; }

// sub_16635f0  (orig 0x16635f0, ret_only)
void main_f_16635f0() {}

// sub_1663860  (orig 0x1663860, getter)
uint64_t main_f_1663860(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1663870  (orig 0x1663870, getter)
uint64_t main_f_1663870(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_16638a0  (orig 0x16638a0, getter)
uint16_t main_f_16638a0(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_16638b0  (orig 0x16638b0, getter)
uint16_t main_f_16638b0(void* a0) { return *(uint16_t*)((char*)(a0) + 10); }

// sub_1663d40  (orig 0x1663d40, setter)
void main_f_1663d40(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 176) = a1; }

// sub_1663d50  (orig 0x1663d50, setter)
void main_f_1663d50(void* a0) { *(uint64_t*)((char*)(a0) + 176) = 0; }

// sub_1667420  (orig 0x1667420, getter)
uint32_t main_f_1667420(void* a0) { return *(uint32_t*)((char*)(a0) + 5832L); }

// sub_1667430  (orig 0x1667430, ptr_add)
void* main_f_1667430(void* a0) { return (char*)a0 + 24; }

// sub_1667440  (orig 0x1667440, ptr_add)
void* main_f_1667440(void* a0) { return (char*)a0 + 2304; }

// sub_1667450  (orig 0x1667450, getter)
uint64_t main_f_1667450(void* a0) { return *(uint64_t*)((char*)(a0) + 5824L); }

// sub_1667490  (orig 0x1667490, setter)
void main_f_1667490(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 5836L) = a1; }

// sub_16674a0  (orig 0x16674a0, setter)
void main_f_16674a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 5840L) = a1; }

// sub_16675d0  (orig 0x16675d0, getter)
uint64_t main_f_16675d0(void* a0) { return *(uint64_t*)((char*)(a0) + 5824L); }

// sub_1667c60  (orig 0x1667c60, ret_only)
void main_f_1667c60() {}

// sub_1668f30  (orig 0x1668f30, ret_only)
void main_f_1668f30() {}

// sub_1668f40  (orig 0x1668f40, ret_only)
void main_f_1668f40() {}

// sub_1668f50  (orig 0x1668f50, getter)
uint32_t main_f_1668f50(void* a0) { return *(uint32_t*)((char*)(a0) + 272); }

// sub_166a430  (orig 0x166a430, ret_only)
void main_f_166a430() {}

// sub_166a440  (orig 0x166a440, mov_ret)
uint32_t main_f_166a440() { return 0; }

// sub_166a450  (orig 0x166a450, ret_only)
void main_f_166a450() {}

// sub_166a580  (orig 0x166a580, ret_only)
void main_f_166a580() {}

// sub_166a590  (orig 0x166a590, ret_only)
void main_f_166a590() {}

// sub_166a5a0  (orig 0x166a5a0, ret_only)
void main_f_166a5a0() {}

// sub_166a5b0  (orig 0x166a5b0, ret_only)
void main_f_166a5b0() {}

// sub_166a660  (orig 0x166a660, ret_only)
void main_f_166a660() {}

// sub_166a670  (orig 0x166a670, mov_ret)
uint32_t main_f_166a670() { return 0; }

// sub_166ae60  (orig 0x166ae60, ret_only)
void main_f_166ae60() {}

// sub_166b0b0  (orig 0x166b0b0, ret_only)
void main_f_166b0b0() {}

// sub_166b640  (orig 0x166b640, ret_only)
void main_f_166b640() {}

// sub_166cad0  (orig 0x166cad0, ret_only)
void main_f_166cad0() {}

// sub_166cae0  (orig 0x166cae0, getter)
uint32_t main_f_166cae0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_166caf0  (orig 0x166caf0, ret_only)
void main_f_166caf0() {}

// sub_166cb40  (orig 0x166cb40, ret_only)
void main_f_166cb40() {}

// sub_166d0f0  (orig 0x166d0f0, straight)
void main_f_166d0f0(void* a0) {
    *(uint32_t*)((char*)(a0) + 688) = 3;
}

// sub_166d2d0  (orig 0x166d2d0, ret_only)
void main_f_166d2d0() {}

// sub_166d340  (orig 0x166d340, mov_ret)
uint32_t main_f_166d340() { return 0; }

// sub_166d370  (orig 0x166d370, getter)
uint8_t main_f_166d370(void* a0) { return *(uint8_t*)((char*)(a0) + 552); }

// sub_166d380  (orig 0x166d380, getter)
uint8_t main_f_166d380(void* a0) { return *(uint8_t*)((char*)(a0) + 554); }

// sub_166d390  (orig 0x166d390, getter)
uint8_t main_f_166d390(void* a0) { return *(uint8_t*)((char*)(a0) + 553); }

// sub_166d3a0  (orig 0x166d3a0, getter)
uint8_t main_f_166d3a0(void* a0) { return *(uint8_t*)((char*)(a0) + 564); }

// sub_166d3b0  (orig 0x166d3b0, getter)
uint8_t main_f_166d3b0(void* a0) { return *(uint8_t*)((char*)(a0) + 641); }

// sub_166d890  (orig 0x166d890, ret_only)
void main_f_166d890() {}

// sub_166dd10  (orig 0x166dd10, ret_only)
void main_f_166dd10() {}

// sub_166dd70  (orig 0x166dd70, ret_only)
void main_f_166dd70() {}

// sub_166de50  (orig 0x166de50, ret_only)
void main_f_166de50() {}

// sub_166e080  (orig 0x166e080, setter)
void main_f_166e080(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 544) = a1; }

// sub_166e090  (orig 0x166e090, setter)
void main_f_166e090(void* a0) { *(uint64_t*)((char*)(a0) + 544) = 0; }

// sub_166eba0  (orig 0x166eba0, mov_ret)
uint32_t main_f_166eba0() { return 16; }

// sub_166ebb0  (orig 0x166ebb0, mov_ret)
uint32_t main_f_166ebb0() { return 16; }

// sub_166ebc0  (orig 0x166ebc0, mov_ret)
uint32_t main_f_166ebc0() { return 1; }

// sub_166ebd0  (orig 0x166ebd0, mov_ret)
uint32_t main_f_166ebd0() { return 1; }

// sub_166ebe0  (orig 0x166ebe0, mov_ret)
uint32_t main_f_166ebe0() { return 1; }

// sub_166ebf0  (orig 0x166ebf0, mov_ret)
uint32_t main_f_166ebf0() { return 1; }

// sub_16709f0  (orig 0x16709f0, getter)
uint8_t main_f_16709f0(void* a0) { return *(uint8_t*)((char*)(a0) + 417); }

// sub_1670a10  (orig 0x1670a10, mov_ret)
uint32_t main_f_1670a10() { return 1; }

// sub_1670a20  (orig 0x1670a20, ret_only)
void main_f_1670a20() {}

// sub_1670a30  (orig 0x1670a30, ret_only)
void main_f_1670a30() {}

// sub_16711e0  (orig 0x16711e0, compare)
bool main_f_16711e0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 4940L)) != (uint64_t)(0); }

// sub_16735f0  (orig 0x16735f0, compare-pred)
bool main_f_16735f0(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 4768) - 2)) < (uint32_t)(3); }

// sub_1673660  (orig 0x1673660, compare-pred)
bool main_f_1673660(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 4880) - 2)) < (uint32_t)(3); }

// sub_1673e40  (orig 0x1673e40, compare-pred)
bool main_f_1673e40(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 4824) - 2)) < (uint32_t)(3); }

// sub_1673e70  (orig 0x1673e70, ret_only)
void main_f_1673e70() {}

// sub_1674e80  (orig 0x1674e80, mov_ret)
uint32_t main_f_1674e80() { return 68; }

// sub_1674e90  (orig 0x1674e90, mov_ret)
uint32_t main_f_1674e90() { return 0; }

// sub_1674ea0  (orig 0x1674ea0, getter)
uint64_t main_f_1674ea0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_1674f80  (orig 0x1674f80, mov_ret)
uint32_t main_f_1674f80() { return 12; }

// sub_16751c0  (orig 0x16751c0, mov_ret)
uint32_t main_f_16751c0() { return 16; }

// sub_16756c0  (orig 0x16756c0, mov_ret)
uint32_t main_f_16756c0() { return 16; }

// sub_1675be0  (orig 0x1675be0, mov_ret)
uint32_t main_f_1675be0() { return 12; }

// sub_16768b0  (orig 0x16768b0, compare-pred)
bool main_f_16768b0(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 3464) - 2)) < (uint32_t)(3); }

// sub_16777e0  (orig 0x16777e0, ret_only)
void main_f_16777e0() {}

// sub_1678240  (orig 0x1678240, getter)
uint16_t main_f_1678240(void* a0) { return *(uint16_t*)((char*)(a0) + 58); }

// sub_1678260  (orig 0x1678260, getter)
uint32_t main_f_1678260(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1678270  (orig 0x1678270, getter)
uint32_t main_f_1678270(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1678280  (orig 0x1678280, getter)
uint16_t main_f_1678280(void* a0) { return *(uint16_t*)((char*)(a0) + 24); }

// sub_1678290  (orig 0x1678290, getter)
uint16_t main_f_1678290(void* a0) { return *(uint16_t*)((char*)(a0) + 26); }

// sub_16782a0  (orig 0x16782a0, getter)
uint16_t main_f_16782a0(void* a0) { return *(uint16_t*)((char*)(a0) + 28); }

// sub_16782b0  (orig 0x16782b0, getter)
uint8_t main_f_16782b0(void* a0) { return *(uint8_t*)((char*)(a0) + 30); }

// sub_16782c0  (orig 0x16782c0, setter)
void main_f_16782c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 16) = a1; }

// sub_16782d0  (orig 0x16782d0, setter)
void main_f_16782d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_16782e0  (orig 0x16782e0, setter)
void main_f_16782e0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 24) = a1; }

// sub_16782f0  (orig 0x16782f0, setter)
void main_f_16782f0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 26) = a1; }

// sub_1678300  (orig 0x1678300, setter)
void main_f_1678300(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 28) = a1; }

// sub_1678560  (orig 0x1678560, ptr_add)
void* main_f_1678560(void* a0) { return (char*)a0 + 480; }

// sub_1678570  (orig 0x1678570, setter)
void main_f_1678570(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 58) = a1; }

// sub_1678580  (orig 0x1678580, setter)
void main_f_1678580(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 56) = a1; }

// sub_1678590  (orig 0x1678590, getter)
uint8_t main_f_1678590(void* a0) { return *(uint8_t*)((char*)(a0) + 56); }

// sub_16785a0  (orig 0x16785a0, setter)
void main_f_16785a0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 57) = a1; }

// sub_16785b0  (orig 0x16785b0, getter)
uint8_t main_f_16785b0(void* a0) { return *(uint8_t*)((char*)(a0) + 57); }

// sub_16785c0  (orig 0x16785c0, ptr_add)
void* main_f_16785c0(void* a0) { return (char*)a0 + 60; }

// sub_16786e0  (orig 0x16786e0, getter)
uint32_t main_f_16786e0(void* a0) { return *(uint32_t*)((char*)(a0) + 476); }

// sub_1678700  (orig 0x1678700, mov_ret)
uint32_t main_f_1678700() { return 0; }

// sub_1679c00  (orig 0x1679c00, ret_only)
void main_f_1679c00() {}

// sub_167acd0  (orig 0x167acd0, mov_ret)
uint32_t main_f_167acd0() { return 570; }

// sub_167ace0  (orig 0x167ace0, mov_ret)
uint32_t main_f_167ace0() { return 570; }

// sub_167aec0  (orig 0x167aec0, ret_only)
void main_f_167aec0() {}

// sub_167b070  (orig 0x167b070, setter)
void main_f_167b070(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_167b080  (orig 0x167b080, getter)
uint64_t main_f_167b080(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_167b0c0  (orig 0x167b0c0, ptr_add)
void* main_f_167b0c0(void* a0) { return (char*)a0 + 24; }

// sub_167b850  (orig 0x167b850, mov_ret)
uint32_t main_f_167b850() { return 50; }

// sub_167b860  (orig 0x167b860, mov_ret)
uint32_t main_f_167b860() { return 50; }

