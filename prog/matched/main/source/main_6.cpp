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
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;
typedef signed char int8_t;
typedef signed short int16_t;
typedef signed int int32_t;
typedef signed long int64_t;

// sub_8589a0  (orig 0x8589a0, strlit-flag-ret)
void *main_f_8589a0(void* a0) { static char g_f_8589a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8589a0; }

// sub_8589c0  (orig 0x8589c0, strlit-flag-ret)
void *main_f_8589c0(void* a0) { static char g_f_8589c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8589c0; }

// sub_8589e0  (orig 0x8589e0, strlit-flag-ret)
void *main_f_8589e0(void* a0) { static char g_f_8589e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8589e0; }

// sub_858a00  (orig 0x858a00, strlit-flag-ret)
void *main_f_858a00(void* a0) { static char g_f_858a00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858a00; }

// sub_858a20  (orig 0x858a20, strlit-flag-ret)
void *main_f_858a20(void* a0) { static char g_f_858a20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858a20; }

// sub_858a40  (orig 0x858a40, strlit-flag-ret)
void *main_f_858a40(void* a0) { static char g_f_858a40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858a40; }

// sub_858a60  (orig 0x858a60, strlit-flag-ret)
void *main_f_858a60(void* a0) { static char g_f_858a60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858a60; }

// sub_858a80  (orig 0x858a80, strlit-flag-ret)
void *main_f_858a80(void* a0) { static char g_f_858a80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858a80; }

// sub_858aa0  (orig 0x858aa0, strlit-flag-ret)
void *main_f_858aa0(void* a0) { static char g_f_858aa0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858aa0; }

// sub_858ac0  (orig 0x858ac0, strlit-flag-ret)
void *main_f_858ac0(void* a0) { static char g_f_858ac0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858ac0; }

// sub_858ae0  (orig 0x858ae0, strlit-flag-ret)
void *main_f_858ae0(void* a0) { static char g_f_858ae0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858ae0; }

// sub_858b00  (orig 0x858b00, strlit-flag-ret)
void *main_f_858b00(void* a0) { static char g_f_858b00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858b00; }

// sub_858b20  (orig 0x858b20, strlit-flag-ret)
void *main_f_858b20(void* a0) { static char g_f_858b20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858b20; }

// sub_858b40  (orig 0x858b40, strlit-flag-ret)
void *main_f_858b40(void* a0) { static char g_f_858b40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858b40; }

// sub_858b60  (orig 0x858b60, strlit-flag-ret)
void *main_f_858b60(void* a0) { static char g_f_858b60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858b60; }

// sub_858b80  (orig 0x858b80, strlit-flag-ret)
void *main_f_858b80(void* a0) { static char g_f_858b80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858b80; }

// sub_858ba0  (orig 0x858ba0, strlit-flag-ret)
void *main_f_858ba0(void* a0) { static char g_f_858ba0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858ba0; }

// sub_858bc0  (orig 0x858bc0, strlit-flag-ret)
void *main_f_858bc0(void* a0) { static char g_f_858bc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858bc0; }

// sub_858be0  (orig 0x858be0, strlit-flag-ret)
void *main_f_858be0(void* a0) { static char g_f_858be0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858be0; }

// sub_858c00  (orig 0x858c00, strlit-flag-ret)
void *main_f_858c00(void* a0) { static char g_f_858c00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858c00; }

// sub_858c20  (orig 0x858c20, strlit-flag-ret)
void *main_f_858c20(void* a0) { static char g_f_858c20[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858c20; }

// sub_858c40  (orig 0x858c40, strlit-flag-ret)
void *main_f_858c40(void* a0) { static char g_f_858c40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858c40; }

// sub_858c60  (orig 0x858c60, strlit-flag-ret)
void *main_f_858c60(void* a0) { static char g_f_858c60[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858c60; }

// sub_858c80  (orig 0x858c80, strlit-flag-ret)
void *main_f_858c80(void* a0) { static char g_f_858c80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858c80; }

// sub_858ca0  (orig 0x858ca0, strlit-flag-ret)
void *main_f_858ca0(void* a0) { static char g_f_858ca0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_858ca0; }

// sub_858cc0  (orig 0x858cc0, strlit-flag-ret)
void *main_f_858cc0(void* a0) { static char g_f_858cc0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858cc0; }

// sub_858ce0  (orig 0x858ce0, strlit-flag-ret)
void *main_f_858ce0(void* a0) { static char g_f_858ce0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858ce0; }

// sub_858d00  (orig 0x858d00, strlit-flag-ret)
void *main_f_858d00(void* a0) { static char g_f_858d00[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858d00; }

// sub_858d20  (orig 0x858d20, strlit-flag-ret)
void *main_f_858d20(void* a0) { static char g_f_858d20[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858d20; }

// sub_858d40  (orig 0x858d40, strlit-flag-ret)
void *main_f_858d40(void* a0) { static char g_f_858d40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858d40; }

// sub_858d60  (orig 0x858d60, strlit-flag-ret)
void *main_f_858d60(void* a0) { static char g_f_858d60[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858d60; }

// sub_858d80  (orig 0x858d80, strlit-flag-ret)
void *main_f_858d80(void* a0) { static char g_f_858d80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858d80; }

// sub_858da0  (orig 0x858da0, strlit-flag-ret)
void *main_f_858da0(void* a0) { static char g_f_858da0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858da0; }

// sub_858dc0  (orig 0x858dc0, strlit-flag-ret)
void *main_f_858dc0(void* a0) { static char g_f_858dc0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858dc0; }

// sub_858de0  (orig 0x858de0, strlit-flag-ret)
void *main_f_858de0(void* a0) { static char g_f_858de0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858de0; }

// sub_858e00  (orig 0x858e00, strlit-flag-ret)
void *main_f_858e00(void* a0) { static char g_f_858e00[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858e00; }

// sub_858e20  (orig 0x858e20, strlit-flag-ret)
void *main_f_858e20(void* a0) { static char g_f_858e20[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858e20; }

// sub_858e40  (orig 0x858e40, strlit-flag-ret)
void *main_f_858e40(void* a0) { static char g_f_858e40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858e40; }

// sub_858e60  (orig 0x858e60, strlit-flag-ret)
void *main_f_858e60(void* a0) { static char g_f_858e60[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858e60; }

// sub_858e80  (orig 0x858e80, strlit-flag-ret)
void *main_f_858e80(void* a0) { static char g_f_858e80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858e80; }

// sub_858ea0  (orig 0x858ea0, strlit-flag-ret)
void *main_f_858ea0(void* a0) { static char g_f_858ea0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858ea0; }

// sub_858ec0  (orig 0x858ec0, strlit-flag-ret)
void *main_f_858ec0(void* a0) { static char g_f_858ec0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858ec0; }

// sub_858ee0  (orig 0x858ee0, strlit-flag-ret)
void *main_f_858ee0(void* a0) { static char g_f_858ee0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858ee0; }

// sub_858f00  (orig 0x858f00, strlit-flag-ret)
void *main_f_858f00(void* a0) { static char g_f_858f00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858f00; }

// sub_858f20  (orig 0x858f20, strlit-flag-ret)
void *main_f_858f20(void* a0) { static char g_f_858f20[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858f20; }

// sub_858f40  (orig 0x858f40, strlit-flag-ret)
void *main_f_858f40(void* a0) { static char g_f_858f40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858f40; }

// sub_858f60  (orig 0x858f60, strlit-flag-ret)
void *main_f_858f60(void* a0) { static char g_f_858f60[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858f60; }

// sub_858f80  (orig 0x858f80, strlit-flag-ret)
void *main_f_858f80(void* a0) { static char g_f_858f80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858f80; }

// sub_858fa0  (orig 0x858fa0, strlit-flag-ret)
void *main_f_858fa0(void* a0) { static char g_f_858fa0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858fa0; }

// sub_858fc0  (orig 0x858fc0, strlit-flag-ret)
void *main_f_858fc0(void* a0) { static char g_f_858fc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858fc0; }

// sub_858fe0  (orig 0x858fe0, strlit-flag-ret)
void *main_f_858fe0(void* a0) { static char g_f_858fe0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858fe0; }

// sub_859000  (orig 0x859000, strlit-flag-ret)
void *main_f_859000(void* a0) { static char g_f_859000[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_859000; }

// sub_859020  (orig 0x859020, strlit-flag-ret)
void *main_f_859020(void* a0) { static char g_f_859020[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_859020; }

// sub_859040  (orig 0x859040, strlit-flag-ret)
void *main_f_859040(void* a0) { static char g_f_859040[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_859040; }

// sub_859060  (orig 0x859060, strlit-flag-ret)
void *main_f_859060(void* a0) { static char g_f_859060[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_859060; }

// sub_859080  (orig 0x859080, strlit-flag-ret)
void *main_f_859080(void* a0) { static char g_f_859080[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_859080; }

// sub_8590a0  (orig 0x8590a0, strlit-flag-ret)
void *main_f_8590a0(void* a0) { static char g_f_8590a0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8590a0; }

// sub_8590e0  (orig 0x8590e0, strlit-flag-ret)
void *main_f_8590e0(void* a0) { static char g_f_8590e0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8590e0; }

// sub_859100  (orig 0x859100, strlit-flag-ret)
void *main_f_859100(void* a0) { static char g_f_859100[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_859100; }

// sub_859120  (orig 0x859120, strlit-flag-ret)
void *main_f_859120(void* a0) { static char g_f_859120[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_859120; }

// sub_859140  (orig 0x859140, strlit-flag-ret)
void *main_f_859140(void* a0) { static char g_f_859140[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_859140; }

// sub_859160  (orig 0x859160, strlit-flag-ret)
void *main_f_859160(void* a0) { static char g_f_859160[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_859160; }

// sub_861c20  (orig 0x861c20, ret_only)
void main_f_861c20() {}

// sub_861c30  (orig 0x861c30, ret_only)
void main_f_861c30() {}

// sub_864c10  (orig 0x864c10, strlit-flag-ret)
void *main_f_864c10(void* a0) { static char g_f_864c10[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864c10; }

// sub_864c30  (orig 0x864c30, strlit-flag-ret)
void *main_f_864c30(void* a0) { static char g_f_864c30[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864c30; }

// sub_864c50  (orig 0x864c50, strlit-flag-ret)
void *main_f_864c50(void* a0) { static char g_f_864c50[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_864c50; }

// sub_864c70  (orig 0x864c70, strlit-flag-ret)
void *main_f_864c70(void* a0) { static char g_f_864c70[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_864c70; }

// sub_864c90  (orig 0x864c90, strlit-flag-ret)
void *main_f_864c90(void* a0) { static char g_f_864c90[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864c90; }

// sub_864cb0  (orig 0x864cb0, strlit-flag-ret)
void *main_f_864cb0(void* a0) { static char g_f_864cb0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864cb0; }

// sub_864cd0  (orig 0x864cd0, strlit-flag-ret)
void *main_f_864cd0(void* a0) { static char g_f_864cd0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864cd0; }

// sub_864cf0  (orig 0x864cf0, strlit-flag-ret)
void *main_f_864cf0(void* a0) { static char g_f_864cf0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864cf0; }

// sub_864d10  (orig 0x864d10, strlit-flag-ret)
void *main_f_864d10(void* a0) { static char g_f_864d10[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864d10; }

// sub_864d30  (orig 0x864d30, strlit-flag-ret)
void *main_f_864d30(void* a0) { static char g_f_864d30[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864d30; }

// sub_864d50  (orig 0x864d50, strlit-flag-ret)
void *main_f_864d50(void* a0) { static char g_f_864d50[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864d50; }

// sub_864d70  (orig 0x864d70, strlit-flag-ret)
void *main_f_864d70(void* a0) { static char g_f_864d70[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_864d70; }

// sub_864d90  (orig 0x864d90, strlit-flag-ret)
void *main_f_864d90(void* a0) { static char g_f_864d90[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_864d90; }

// sub_864db0  (orig 0x864db0, strlit-flag-ret)
void *main_f_864db0(void* a0) { static char g_f_864db0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864db0; }

// sub_864dd0  (orig 0x864dd0, strlit-flag-ret)
void *main_f_864dd0(void* a0) { static char g_f_864dd0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864dd0; }

// sub_864df0  (orig 0x864df0, strlit-flag-ret)
void *main_f_864df0(void* a0) { static char g_f_864df0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864df0; }

// sub_864e10  (orig 0x864e10, strlit-flag-ret)
void *main_f_864e10(void* a0) { static char g_f_864e10[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_864e10; }

// sub_864e30  (orig 0x864e30, strlit-flag-ret)
void *main_f_864e30(void* a0) { static char g_f_864e30[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864e30; }

// sub_864e50  (orig 0x864e50, strlit-flag-ret)
void *main_f_864e50(void* a0) { static char g_f_864e50[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864e50; }

// sub_864e70  (orig 0x864e70, strlit-flag-ret)
void *main_f_864e70(void* a0) { static char g_f_864e70[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864e70; }

// sub_864e90  (orig 0x864e90, strlit-flag-ret)
void *main_f_864e90(void* a0) { static char g_f_864e90[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864e90; }

// sub_864eb0  (orig 0x864eb0, strlit-flag-ret)
void *main_f_864eb0(void* a0) { static char g_f_864eb0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864eb0; }

// sub_865680  (orig 0x865680, ret_only)
void main_f_865680() {}

// sub_866300  (orig 0x866300, ret_only)
void main_f_866300() {}

// sub_8669a0  (orig 0x8669a0, strlit-flag-ret)
void *main_f_8669a0(void* a0) { static char g_f_8669a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8669a0; }

// sub_8669c0  (orig 0x8669c0, strlit-flag-ret)
void *main_f_8669c0(void* a0) { static char g_f_8669c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8669c0; }

// sub_8669e0  (orig 0x8669e0, strlit-flag-ret)
void *main_f_8669e0(void* a0) { static char g_f_8669e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8669e0; }

// sub_866a00  (orig 0x866a00, strlit-flag-ret)
void *main_f_866a00(void* a0) { static char g_f_866a00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866a00; }

// sub_866a20  (orig 0x866a20, strlit-flag-ret)
void *main_f_866a20(void* a0) { static char g_f_866a20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866a20; }

// sub_866a40  (orig 0x866a40, strlit-flag-ret)
void *main_f_866a40(void* a0) { static char g_f_866a40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866a40; }

// sub_866a60  (orig 0x866a60, strlit-flag-ret)
void *main_f_866a60(void* a0) { static char g_f_866a60[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866a60; }

// sub_866a80  (orig 0x866a80, strlit-flag-ret)
void *main_f_866a80(void* a0) { static char g_f_866a80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866a80; }

// sub_866aa0  (orig 0x866aa0, strlit-flag-ret)
void *main_f_866aa0(void* a0) { static char g_f_866aa0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866aa0; }

// sub_866ac0  (orig 0x866ac0, strlit-flag-ret)
void *main_f_866ac0(void* a0) { static char g_f_866ac0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866ac0; }

// sub_866ae0  (orig 0x866ae0, strlit-flag-ret)
void *main_f_866ae0(void* a0) { static char g_f_866ae0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866ae0; }

// sub_866b00  (orig 0x866b00, strlit-flag-ret)
void *main_f_866b00(void* a0) { static char g_f_866b00[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_866b00; }

// sub_866b20  (orig 0x866b20, strlit-flag-ret)
void *main_f_866b20(void* a0) { static char g_f_866b20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866b20; }

// sub_866b40  (orig 0x866b40, strlit-flag-ret)
void *main_f_866b40(void* a0) { static char g_f_866b40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866b40; }

// sub_866b60  (orig 0x866b60, strlit-flag-ret)
void *main_f_866b60(void* a0) { static char g_f_866b60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866b60; }

// sub_866b80  (orig 0x866b80, strlit-flag-ret)
void *main_f_866b80(void* a0) { static char g_f_866b80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866b80; }

// sub_866ba0  (orig 0x866ba0, strlit-flag-ret)
void *main_f_866ba0(void* a0) { static char g_f_866ba0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866ba0; }

// sub_866bc0  (orig 0x866bc0, strlit-flag-ret)
void *main_f_866bc0(void* a0) { static char g_f_866bc0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866bc0; }

// sub_866be0  (orig 0x866be0, strlit-flag-ret)
void *main_f_866be0(void* a0) { static char g_f_866be0[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_866be0; }

// sub_866c00  (orig 0x866c00, strlit-flag-ret)
void *main_f_866c00(void* a0) { static char g_f_866c00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866c00; }

// sub_866c20  (orig 0x866c20, strlit-flag-ret)
void *main_f_866c20(void* a0) { static char g_f_866c20[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866c20; }

// sub_866c40  (orig 0x866c40, strlit-flag-ret)
void *main_f_866c40(void* a0) { static char g_f_866c40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866c40; }

// sub_866c60  (orig 0x866c60, strlit-flag-ret)
void *main_f_866c60(void* a0) { static char g_f_866c60[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_866c60; }

// sub_866c80  (orig 0x866c80, strlit-flag-ret)
void *main_f_866c80(void* a0) { static char g_f_866c80[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_866c80; }

// sub_866ca0  (orig 0x866ca0, strlit-flag-ret)
void *main_f_866ca0(void* a0) { static char g_f_866ca0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866ca0; }

// sub_866cc0  (orig 0x866cc0, strlit-flag-ret)
void *main_f_866cc0(void* a0) { static char g_f_866cc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866cc0; }

// sub_866ce0  (orig 0x866ce0, strlit-flag-ret)
void *main_f_866ce0(void* a0) { static char g_f_866ce0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866ce0; }

// sub_866d00  (orig 0x866d00, strlit-flag-ret)
void *main_f_866d00(void* a0) { static char g_f_866d00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866d00; }

// sub_866d20  (orig 0x866d20, strlit-flag-ret)
void *main_f_866d20(void* a0) { static char g_f_866d20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866d20; }

// sub_866d40  (orig 0x866d40, strlit-flag-ret)
void *main_f_866d40(void* a0) { static char g_f_866d40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866d40; }

// sub_866d60  (orig 0x866d60, strlit-flag-ret)
void *main_f_866d60(void* a0) { static char g_f_866d60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866d60; }

// sub_866d80  (orig 0x866d80, strlit-flag-ret)
void *main_f_866d80(void* a0) { static char g_f_866d80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866d80; }

// sub_866da0  (orig 0x866da0, strlit-flag-ret)
void *main_f_866da0(void* a0) { static char g_f_866da0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866da0; }

// sub_866dc0  (orig 0x866dc0, strlit-flag-ret)
void *main_f_866dc0(void* a0) { static char g_f_866dc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866dc0; }

// sub_866de0  (orig 0x866de0, strlit-flag-ret)
void *main_f_866de0(void* a0) { static char g_f_866de0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866de0; }

// sub_866e00  (orig 0x866e00, strlit-flag-ret)
void *main_f_866e00(void* a0) { static char g_f_866e00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866e00; }

// sub_866e20  (orig 0x866e20, strlit-flag-ret)
void *main_f_866e20(void* a0) { static char g_f_866e20[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866e20; }

// sub_866e40  (orig 0x866e40, strlit-flag-ret)
void *main_f_866e40(void* a0) { static char g_f_866e40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866e40; }

// sub_866e60  (orig 0x866e60, strlit-flag-ret)
void *main_f_866e60(void* a0) { static char g_f_866e60[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_866e60; }

// sub_866e80  (orig 0x866e80, strlit-flag-ret)
void *main_f_866e80(void* a0) { static char g_f_866e80[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_866e80; }

// sub_866ea0  (orig 0x866ea0, strlit-flag-ret)
void *main_f_866ea0(void* a0) { static char g_f_866ea0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866ea0; }

// sub_866ec0  (orig 0x866ec0, strlit-flag-ret)
void *main_f_866ec0(void* a0) { static char g_f_866ec0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866ec0; }

// sub_866ee0  (orig 0x866ee0, strlit-flag-ret)
void *main_f_866ee0(void* a0) { static char g_f_866ee0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866ee0; }

// sub_866f00  (orig 0x866f00, strlit-flag-ret)
void *main_f_866f00(void* a0) { static char g_f_866f00[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_866f00; }

// sub_866f20  (orig 0x866f20, strlit-flag-ret)
void *main_f_866f20(void* a0) { static char g_f_866f20[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866f20; }

// sub_866f40  (orig 0x866f40, strlit-flag-ret)
void *main_f_866f40(void* a0) { static char g_f_866f40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866f40; }

// sub_866f60  (orig 0x866f60, strlit-flag-ret)
void *main_f_866f60(void* a0) { static char g_f_866f60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866f60; }

// sub_866f80  (orig 0x866f80, strlit-flag-ret)
void *main_f_866f80(void* a0) { static char g_f_866f80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866f80; }

// sub_866fa0  (orig 0x866fa0, strlit-flag-ret)
void *main_f_866fa0(void* a0) { static char g_f_866fa0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866fa0; }

// sub_866fc0  (orig 0x866fc0, strlit-flag-ret)
void *main_f_866fc0(void* a0) { static char g_f_866fc0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866fc0; }

// sub_866fe0  (orig 0x866fe0, strlit-flag-ret)
void *main_f_866fe0(void* a0) { static char g_f_866fe0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866fe0; }

// sub_867000  (orig 0x867000, strlit-flag-ret)
void *main_f_867000(void* a0) { static char g_f_867000[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867000; }

// sub_867020  (orig 0x867020, strlit-flag-ret)
void *main_f_867020(void* a0) { static char g_f_867020[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867020; }

// sub_867040  (orig 0x867040, strlit-flag-ret)
void *main_f_867040(void* a0) { static char g_f_867040[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867040; }

// sub_867060  (orig 0x867060, strlit-flag-ret)
void *main_f_867060(void* a0) { static char g_f_867060[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867060; }

// sub_867080  (orig 0x867080, strlit-flag-ret)
void *main_f_867080(void* a0) { static char g_f_867080[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867080; }

// sub_8670a0  (orig 0x8670a0, strlit-flag-ret)
void *main_f_8670a0(void* a0) { static char g_f_8670a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8670a0; }

// sub_8670c0  (orig 0x8670c0, strlit-flag-ret)
void *main_f_8670c0(void* a0) { static char g_f_8670c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8670c0; }

// sub_8670e0  (orig 0x8670e0, strlit-flag-ret)
void *main_f_8670e0(void* a0) { static char g_f_8670e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8670e0; }

// sub_867100  (orig 0x867100, strlit-flag-ret)
void *main_f_867100(void* a0) { static char g_f_867100[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867100; }

// sub_867120  (orig 0x867120, strlit-flag-ret)
void *main_f_867120(void* a0) { static char g_f_867120[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867120; }

// sub_867140  (orig 0x867140, strlit-flag-ret)
void *main_f_867140(void* a0) { static char g_f_867140[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867140; }

// sub_867160  (orig 0x867160, strlit-flag-ret)
void *main_f_867160(void* a0) { static char g_f_867160[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867160; }

// sub_867180  (orig 0x867180, strlit-flag-ret)
void *main_f_867180(void* a0) { static char g_f_867180[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867180; }

// sub_8671a0  (orig 0x8671a0, strlit-flag-ret)
void *main_f_8671a0(void* a0) { static char g_f_8671a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8671a0; }

// sub_8671c0  (orig 0x8671c0, strlit-flag-ret)
void *main_f_8671c0(void* a0) { static char g_f_8671c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8671c0; }

// sub_8671e0  (orig 0x8671e0, strlit-flag-ret)
void *main_f_8671e0(void* a0) { static char g_f_8671e0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8671e0; }

// sub_867200  (orig 0x867200, strlit-flag-ret)
void *main_f_867200(void* a0) { static char g_f_867200[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867200; }

// sub_867220  (orig 0x867220, strlit-flag-ret)
void *main_f_867220(void* a0) { static char g_f_867220[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867220; }

// sub_867240  (orig 0x867240, strlit-flag-ret)
void *main_f_867240(void* a0) { static char g_f_867240[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867240; }

// sub_867260  (orig 0x867260, strlit-flag-ret)
void *main_f_867260(void* a0) { static char g_f_867260[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867260; }

// sub_867280  (orig 0x867280, strlit-flag-ret)
void *main_f_867280(void* a0) { static char g_f_867280[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867280; }

// sub_8672a0  (orig 0x8672a0, strlit-flag-ret)
void *main_f_8672a0(void* a0) { static char g_f_8672a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8672a0; }

// sub_8672c0  (orig 0x8672c0, strlit-flag-ret)
void *main_f_8672c0(void* a0) { static char g_f_8672c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8672c0; }

// sub_8672e0  (orig 0x8672e0, strlit-flag-ret)
void *main_f_8672e0(void* a0) { static char g_f_8672e0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8672e0; }

// sub_867300  (orig 0x867300, strlit-flag-ret)
void *main_f_867300(void* a0) { static char g_f_867300[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867300; }

// sub_867320  (orig 0x867320, strlit-flag-ret)
void *main_f_867320(void* a0) { static char g_f_867320[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867320; }

// sub_867340  (orig 0x867340, strlit-flag-ret)
void *main_f_867340(void* a0) { static char g_f_867340[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867340; }

// sub_867360  (orig 0x867360, strlit-flag-ret)
void *main_f_867360(void* a0) { static char g_f_867360[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867360; }

// sub_867380  (orig 0x867380, strlit-flag-ret)
void *main_f_867380(void* a0) { static char g_f_867380[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867380; }

// sub_8673a0  (orig 0x8673a0, strlit-flag-ret)
void *main_f_8673a0(void* a0) { static char g_f_8673a0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8673a0; }

// sub_8673c0  (orig 0x8673c0, strlit-flag-ret)
void *main_f_8673c0(void* a0) { static char g_f_8673c0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8673c0; }

// sub_8673e0  (orig 0x8673e0, strlit-flag-ret)
void *main_f_8673e0(void* a0) { static char g_f_8673e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8673e0; }

// sub_867400  (orig 0x867400, strlit-flag-ret)
void *main_f_867400(void* a0) { static char g_f_867400[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867400; }

// sub_867420  (orig 0x867420, strlit-flag-ret)
void *main_f_867420(void* a0) { static char g_f_867420[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867420; }

// sub_867440  (orig 0x867440, strlit-flag-ret)
void *main_f_867440(void* a0) { static char g_f_867440[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_867440; }

// sub_867460  (orig 0x867460, strlit-flag-ret)
void *main_f_867460(void* a0) { static char g_f_867460[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867460; }

// sub_867480  (orig 0x867480, strlit-flag-ret)
void *main_f_867480(void* a0) { static char g_f_867480[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867480; }

// sub_8674a0  (orig 0x8674a0, strlit-flag-ret)
void *main_f_8674a0(void* a0) { static char g_f_8674a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8674a0; }

// sub_8674c0  (orig 0x8674c0, strlit-flag-ret)
void *main_f_8674c0(void* a0) { static char g_f_8674c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8674c0; }

// sub_8674e0  (orig 0x8674e0, strlit-flag-ret)
void *main_f_8674e0(void* a0) { static char g_f_8674e0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8674e0; }

// sub_867500  (orig 0x867500, strlit-flag-ret)
void *main_f_867500(void* a0) { static char g_f_867500[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867500; }

// sub_867520  (orig 0x867520, strlit-flag-ret)
void *main_f_867520(void* a0) { static char g_f_867520[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867520; }

// sub_867540  (orig 0x867540, strlit-flag-ret)
void *main_f_867540(void* a0) { static char g_f_867540[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867540; }

// sub_867560  (orig 0x867560, strlit-flag-ret)
void *main_f_867560(void* a0) { static char g_f_867560[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867560; }

// sub_867580  (orig 0x867580, strlit-flag-ret)
void *main_f_867580(void* a0) { static char g_f_867580[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867580; }

// sub_8675a0  (orig 0x8675a0, strlit-flag-ret)
void *main_f_8675a0(void* a0) { static char g_f_8675a0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8675a0; }

// sub_8675c0  (orig 0x8675c0, strlit-flag-ret)
void *main_f_8675c0(void* a0) { static char g_f_8675c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8675c0; }

// sub_8675e0  (orig 0x8675e0, strlit-flag-ret)
void *main_f_8675e0(void* a0) { static char g_f_8675e0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8675e0; }

// sub_867600  (orig 0x867600, strlit-flag-ret)
void *main_f_867600(void* a0) { static char g_f_867600[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867600; }

// sub_867620  (orig 0x867620, strlit-flag-ret)
void *main_f_867620(void* a0) { static char g_f_867620[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867620; }

// sub_867640  (orig 0x867640, strlit-flag-ret)
void *main_f_867640(void* a0) { static char g_f_867640[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867640; }

// sub_867660  (orig 0x867660, strlit-flag-ret)
void *main_f_867660(void* a0) { static char g_f_867660[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867660; }

// sub_867680  (orig 0x867680, strlit-flag-ret)
void *main_f_867680(void* a0) { static char g_f_867680[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867680; }

// sub_8676c0  (orig 0x8676c0, strlit-flag-ret)
void *main_f_8676c0(void* a0) { static char g_f_8676c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8676c0; }

// sub_8676e0  (orig 0x8676e0, strlit-flag-ret)
void *main_f_8676e0(void* a0) { static char g_f_8676e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8676e0; }

// sub_867700  (orig 0x867700, strlit-flag-ret)
void *main_f_867700(void* a0) { static char g_f_867700[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867700; }

// sub_867720  (orig 0x867720, strlit-flag-ret)
void *main_f_867720(void* a0) { static char g_f_867720[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867720; }

// sub_867740  (orig 0x867740, strlit-flag-ret)
void *main_f_867740(void* a0) { static char g_f_867740[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867740; }

// sub_867760  (orig 0x867760, strlit-flag-ret)
void *main_f_867760(void* a0) { static char g_f_867760[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867760; }

// sub_867780  (orig 0x867780, strlit-flag-ret)
void *main_f_867780(void* a0) { static char g_f_867780[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867780; }

// sub_8677a0  (orig 0x8677a0, strlit-flag-ret)
void *main_f_8677a0(void* a0) { static char g_f_8677a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8677a0; }

// sub_8677c0  (orig 0x8677c0, strlit-flag-ret)
void *main_f_8677c0(void* a0) { static char g_f_8677c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8677c0; }

// sub_8677e0  (orig 0x8677e0, strlit-flag-ret)
void *main_f_8677e0(void* a0) { static char g_f_8677e0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8677e0; }

// sub_867800  (orig 0x867800, strlit-flag-ret)
void *main_f_867800(void* a0) { static char g_f_867800[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867800; }

// sub_867820  (orig 0x867820, strlit-flag-ret)
void *main_f_867820(void* a0) { static char g_f_867820[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867820; }

// sub_867840  (orig 0x867840, strlit-flag-ret)
void *main_f_867840(void* a0) { static char g_f_867840[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867840; }

// sub_867860  (orig 0x867860, strlit-flag-ret)
void *main_f_867860(void* a0) { static char g_f_867860[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867860; }

// sub_867880  (orig 0x867880, strlit-flag-ret)
void *main_f_867880(void* a0) { static char g_f_867880[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867880; }

// sub_8678a0  (orig 0x8678a0, strlit-flag-ret)
void *main_f_8678a0(void* a0) { static char g_f_8678a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8678a0; }

// sub_8678c0  (orig 0x8678c0, strlit-flag-ret)
void *main_f_8678c0(void* a0) { static char g_f_8678c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8678c0; }

// sub_8678e0  (orig 0x8678e0, strlit-flag-ret)
void *main_f_8678e0(void* a0) { static char g_f_8678e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8678e0; }

// sub_867900  (orig 0x867900, strlit-flag-ret)
void *main_f_867900(void* a0) { static char g_f_867900[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867900; }

// sub_867920  (orig 0x867920, strlit-flag-ret)
void *main_f_867920(void* a0) { static char g_f_867920[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867920; }

// sub_867940  (orig 0x867940, strlit-flag-ret)
void *main_f_867940(void* a0) { static char g_f_867940[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867940; }

// sub_867960  (orig 0x867960, strlit-flag-ret)
void *main_f_867960(void* a0) { static char g_f_867960[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867960; }

// sub_867980  (orig 0x867980, strlit-flag-ret)
void *main_f_867980(void* a0) { static char g_f_867980[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867980; }

// sub_8679a0  (orig 0x8679a0, strlit-flag-ret)
void *main_f_8679a0(void* a0) { static char g_f_8679a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8679a0; }

// sub_8679c0  (orig 0x8679c0, strlit-flag-ret)
void *main_f_8679c0(void* a0) { static char g_f_8679c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8679c0; }

// sub_8679e0  (orig 0x8679e0, strlit-flag-ret)
void *main_f_8679e0(void* a0) { static char g_f_8679e0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_8679e0; }

// sub_867a00  (orig 0x867a00, strlit-flag-ret)
void *main_f_867a00(void* a0) { static char g_f_867a00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867a00; }

// sub_867a20  (orig 0x867a20, strlit-flag-ret)
void *main_f_867a20(void* a0) { static char g_f_867a20[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_867a20; }

// sub_867a40  (orig 0x867a40, strlit-flag-ret)
void *main_f_867a40(void* a0) { static char g_f_867a40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867a40; }

// sub_867a60  (orig 0x867a60, strlit-flag-ret)
void *main_f_867a60(void* a0) { static char g_f_867a60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867a60; }

// sub_867a80  (orig 0x867a80, strlit-flag-ret)
void *main_f_867a80(void* a0) { static char g_f_867a80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867a80; }

// sub_867aa0  (orig 0x867aa0, strlit-flag-ret)
void *main_f_867aa0(void* a0) { static char g_f_867aa0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_867aa0; }

// sub_867ac0  (orig 0x867ac0, strlit-flag-ret)
void *main_f_867ac0(void* a0) { static char g_f_867ac0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ac0; }

// sub_867ae0  (orig 0x867ae0, strlit-flag-ret)
void *main_f_867ae0(void* a0) { static char g_f_867ae0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ae0; }

// sub_867b00  (orig 0x867b00, strlit-flag-ret)
void *main_f_867b00(void* a0) { static char g_f_867b00[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867b00; }

// sub_867b20  (orig 0x867b20, strlit-flag-ret)
void *main_f_867b20(void* a0) { static char g_f_867b20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867b20; }

// sub_867b40  (orig 0x867b40, strlit-flag-ret)
void *main_f_867b40(void* a0) { static char g_f_867b40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867b40; }

// sub_867b60  (orig 0x867b60, strlit-flag-ret)
void *main_f_867b60(void* a0) { static char g_f_867b60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867b60; }

// sub_867b80  (orig 0x867b80, strlit-flag-ret)
void *main_f_867b80(void* a0) { static char g_f_867b80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867b80; }

// sub_867ba0  (orig 0x867ba0, strlit-flag-ret)
void *main_f_867ba0(void* a0) { static char g_f_867ba0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ba0; }

// sub_867bc0  (orig 0x867bc0, strlit-flag-ret)
void *main_f_867bc0(void* a0) { static char g_f_867bc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867bc0; }

// sub_867be0  (orig 0x867be0, strlit-flag-ret)
void *main_f_867be0(void* a0) { static char g_f_867be0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_867be0; }

// sub_867c00  (orig 0x867c00, strlit-flag-ret)
void *main_f_867c00(void* a0) { static char g_f_867c00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867c00; }

// sub_867c20  (orig 0x867c20, strlit-flag-ret)
void *main_f_867c20(void* a0) { static char g_f_867c20[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867c20; }

// sub_867c40  (orig 0x867c40, strlit-flag-ret)
void *main_f_867c40(void* a0) { static char g_f_867c40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867c40; }

// sub_867c60  (orig 0x867c60, strlit-flag-ret)
void *main_f_867c60(void* a0) { static char g_f_867c60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867c60; }

// sub_867c80  (orig 0x867c80, strlit-flag-ret)
void *main_f_867c80(void* a0) { static char g_f_867c80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867c80; }

// sub_867ca0  (orig 0x867ca0, strlit-flag-ret)
void *main_f_867ca0(void* a0) { static char g_f_867ca0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ca0; }

// sub_867cc0  (orig 0x867cc0, strlit-flag-ret)
void *main_f_867cc0(void* a0) { static char g_f_867cc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867cc0; }

// sub_867ce0  (orig 0x867ce0, strlit-flag-ret)
void *main_f_867ce0(void* a0) { static char g_f_867ce0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ce0; }

// sub_867d00  (orig 0x867d00, strlit-flag-ret)
void *main_f_867d00(void* a0) { static char g_f_867d00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867d00; }

// sub_867d20  (orig 0x867d20, strlit-flag-ret)
void *main_f_867d20(void* a0) { static char g_f_867d20[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_867d20; }

// sub_867d40  (orig 0x867d40, strlit-flag-ret)
void *main_f_867d40(void* a0) { static char g_f_867d40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867d40; }

// sub_867d60  (orig 0x867d60, strlit-flag-ret)
void *main_f_867d60(void* a0) { static char g_f_867d60[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867d60; }

// sub_867d80  (orig 0x867d80, strlit-flag-ret)
void *main_f_867d80(void* a0) { static char g_f_867d80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867d80; }

// sub_867da0  (orig 0x867da0, strlit-flag-ret)
void *main_f_867da0(void* a0) { static char g_f_867da0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867da0; }

// sub_867dc0  (orig 0x867dc0, strlit-flag-ret)
void *main_f_867dc0(void* a0) { static char g_f_867dc0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867dc0; }

// sub_867de0  (orig 0x867de0, strlit-flag-ret)
void *main_f_867de0(void* a0) { static char g_f_867de0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867de0; }

// sub_867e00  (orig 0x867e00, strlit-flag-ret)
void *main_f_867e00(void* a0) { static char g_f_867e00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867e00; }

// sub_867e20  (orig 0x867e20, strlit-flag-ret)
void *main_f_867e20(void* a0) { static char g_f_867e20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867e20; }

// sub_867e40  (orig 0x867e40, strlit-flag-ret)
void *main_f_867e40(void* a0) { static char g_f_867e40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867e40; }

// sub_867e60  (orig 0x867e60, strlit-flag-ret)
void *main_f_867e60(void* a0) { static char g_f_867e60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867e60; }

// sub_867e80  (orig 0x867e80, strlit-flag-ret)
void *main_f_867e80(void* a0) { static char g_f_867e80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867e80; }

// sub_867ea0  (orig 0x867ea0, strlit-flag-ret)
void *main_f_867ea0(void* a0) { static char g_f_867ea0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ea0; }

// sub_867ec0  (orig 0x867ec0, strlit-flag-ret)
void *main_f_867ec0(void* a0) { static char g_f_867ec0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867ec0; }

// sub_867ee0  (orig 0x867ee0, strlit-flag-ret)
void *main_f_867ee0(void* a0) { static char g_f_867ee0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ee0; }

// sub_867f00  (orig 0x867f00, strlit-flag-ret)
void *main_f_867f00(void* a0) { static char g_f_867f00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867f00; }

// sub_867f20  (orig 0x867f20, strlit-flag-ret)
void *main_f_867f20(void* a0) { static char g_f_867f20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867f20; }

// sub_867f40  (orig 0x867f40, strlit-flag-ret)
void *main_f_867f40(void* a0) { static char g_f_867f40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867f40; }

// sub_867f60  (orig 0x867f60, strlit-flag-ret)
void *main_f_867f60(void* a0) { static char g_f_867f60[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867f60; }

// sub_867f80  (orig 0x867f80, strlit-flag-ret)
void *main_f_867f80(void* a0) { static char g_f_867f80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867f80; }

// sub_867fa0  (orig 0x867fa0, strlit-flag-ret)
void *main_f_867fa0(void* a0) { static char g_f_867fa0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867fa0; }

// sub_867fc0  (orig 0x867fc0, strlit-flag-ret)
void *main_f_867fc0(void* a0) { static char g_f_867fc0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867fc0; }

// sub_867fe0  (orig 0x867fe0, strlit-flag-ret)
void *main_f_867fe0(void* a0) { static char g_f_867fe0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867fe0; }

// sub_868000  (orig 0x868000, strlit-flag-ret)
void *main_f_868000(void* a0) { static char g_f_868000[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868000; }

// sub_868020  (orig 0x868020, strlit-flag-ret)
void *main_f_868020(void* a0) { static char g_f_868020[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868020; }

// sub_868040  (orig 0x868040, strlit-flag-ret)
void *main_f_868040(void* a0) { static char g_f_868040[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868040; }

// sub_868060  (orig 0x868060, strlit-flag-ret)
void *main_f_868060(void* a0) { static char g_f_868060[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868060; }

// sub_868080  (orig 0x868080, strlit-flag-ret)
void *main_f_868080(void* a0) { static char g_f_868080[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868080; }

// sub_8680a0  (orig 0x8680a0, strlit-flag-ret)
void *main_f_8680a0(void* a0) { static char g_f_8680a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8680a0; }

// sub_8680c0  (orig 0x8680c0, strlit-flag-ret)
void *main_f_8680c0(void* a0) { static char g_f_8680c0[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_8680c0; }

// sub_8680e0  (orig 0x8680e0, strlit-flag-ret)
void *main_f_8680e0(void* a0) { static char g_f_8680e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8680e0; }

// sub_868100  (orig 0x868100, strlit-flag-ret)
void *main_f_868100(void* a0) { static char g_f_868100[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868100; }

// sub_868120  (orig 0x868120, strlit-flag-ret)
void *main_f_868120(void* a0) { static char g_f_868120[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868120; }

// sub_868140  (orig 0x868140, strlit-flag-ret)
void *main_f_868140(void* a0) { static char g_f_868140[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868140; }

// sub_868160  (orig 0x868160, strlit-flag-ret)
void *main_f_868160(void* a0) { static char g_f_868160[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868160; }

// sub_868180  (orig 0x868180, strlit-flag-ret)
void *main_f_868180(void* a0) { static char g_f_868180[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868180; }

// sub_8681a0  (orig 0x8681a0, strlit-flag-ret)
void *main_f_8681a0(void* a0) { static char g_f_8681a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8681a0; }

// sub_8681c0  (orig 0x8681c0, strlit-flag-ret)
void *main_f_8681c0(void* a0) { static char g_f_8681c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8681c0; }

// sub_8681e0  (orig 0x8681e0, strlit-flag-ret)
void *main_f_8681e0(void* a0) { static char g_f_8681e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8681e0; }

// sub_868200  (orig 0x868200, strlit-flag-ret)
void *main_f_868200(void* a0) { static char g_f_868200[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868200; }

// sub_868220  (orig 0x868220, strlit-flag-ret)
void *main_f_868220(void* a0) { static char g_f_868220[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868220; }

// sub_868240  (orig 0x868240, strlit-flag-ret)
void *main_f_868240(void* a0) { static char g_f_868240[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868240; }

// sub_868260  (orig 0x868260, strlit-flag-ret)
void *main_f_868260(void* a0) { static char g_f_868260[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_868260; }

// sub_868280  (orig 0x868280, strlit-flag-ret)
void *main_f_868280(void* a0) { static char g_f_868280[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868280; }

// sub_8682a0  (orig 0x8682a0, strlit-flag-ret)
void *main_f_8682a0(void* a0) { static char g_f_8682a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8682a0; }

// sub_8682c0  (orig 0x8682c0, strlit-flag-ret)
void *main_f_8682c0(void* a0) { static char g_f_8682c0[1]; *(uint32_t *)((char*)(a0)) = 9; __asm__ volatile("" ::: "memory"); return g_f_8682c0; }

// sub_8682e0  (orig 0x8682e0, strlit-flag-ret)
void *main_f_8682e0(void* a0) { static char g_f_8682e0[1]; *(uint32_t *)((char*)(a0)) = 9; __asm__ volatile("" ::: "memory"); return g_f_8682e0; }

// sub_868300  (orig 0x868300, strlit-flag-ret)
void *main_f_868300(void* a0) { static char g_f_868300[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868300; }

// sub_868320  (orig 0x868320, strlit-flag-ret)
void *main_f_868320(void* a0) { static char g_f_868320[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_868320; }

// sub_868340  (orig 0x868340, strlit-flag-ret)
void *main_f_868340(void* a0) { static char g_f_868340[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868340; }

// sub_868360  (orig 0x868360, strlit-flag-ret)
void *main_f_868360(void* a0) { static char g_f_868360[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868360; }

// sub_868380  (orig 0x868380, strlit-flag-ret)
void *main_f_868380(void* a0) { static char g_f_868380[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868380; }

// sub_8683a0  (orig 0x8683a0, strlit-flag-ret)
void *main_f_8683a0(void* a0) { static char g_f_8683a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8683a0; }

// sub_8683c0  (orig 0x8683c0, strlit-flag-ret)
void *main_f_8683c0(void* a0) { static char g_f_8683c0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8683c0; }

// sub_8683e0  (orig 0x8683e0, strlit-flag-ret)
void *main_f_8683e0(void* a0) { static char g_f_8683e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8683e0; }

// sub_868400  (orig 0x868400, strlit-flag-ret)
void *main_f_868400(void* a0) { static char g_f_868400[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868400; }

// sub_868420  (orig 0x868420, strlit-flag-ret)
void *main_f_868420(void* a0) { static char g_f_868420[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868420; }

// sub_868440  (orig 0x868440, strlit-flag-ret)
void *main_f_868440(void* a0) { static char g_f_868440[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868440; }

// sub_868460  (orig 0x868460, strlit-flag-ret)
void *main_f_868460(void* a0) { static char g_f_868460[1]; *(uint32_t *)((char*)(a0)) = 9; __asm__ volatile("" ::: "memory"); return g_f_868460; }

// sub_868480  (orig 0x868480, strlit-flag-ret)
void *main_f_868480(void* a0) { static char g_f_868480[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868480; }

// sub_8684a0  (orig 0x8684a0, strlit-flag-ret)
void *main_f_8684a0(void* a0) { static char g_f_8684a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8684a0; }

// sub_8684c0  (orig 0x8684c0, strlit-flag-ret)
void *main_f_8684c0(void* a0) { static char g_f_8684c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8684c0; }

// sub_8684e0  (orig 0x8684e0, strlit-flag-ret)
void *main_f_8684e0(void* a0) { static char g_f_8684e0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_8684e0; }

// sub_868500  (orig 0x868500, strlit-flag-ret)
void *main_f_868500(void* a0) { static char g_f_868500[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_868500; }

// sub_868520  (orig 0x868520, strlit-flag-ret)
void *main_f_868520(void* a0) { static char g_f_868520[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868520; }

// sub_868540  (orig 0x868540, strlit-flag-ret)
void *main_f_868540(void* a0) { static char g_f_868540[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868540; }

// sub_868560  (orig 0x868560, strlit-flag-ret)
void *main_f_868560(void* a0) { static char g_f_868560[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868560; }

// sub_868580  (orig 0x868580, strlit-flag-ret)
void *main_f_868580(void* a0) { static char g_f_868580[1]; *(uint32_t *)((char*)(a0)) = 9; __asm__ volatile("" ::: "memory"); return g_f_868580; }

// sub_8685a0  (orig 0x8685a0, strlit-flag-ret)
void *main_f_8685a0(void* a0) { static char g_f_8685a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8685a0; }

// sub_8685c0  (orig 0x8685c0, strlit-flag-ret)
void *main_f_8685c0(void* a0) { static char g_f_8685c0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8685c0; }

// sub_8685e0  (orig 0x8685e0, strlit-flag-ret)
void *main_f_8685e0(void* a0) { static char g_f_8685e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8685e0; }

// sub_868600  (orig 0x868600, strlit-flag-ret)
void *main_f_868600(void* a0) { static char g_f_868600[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868600; }

// sub_868620  (orig 0x868620, strlit-flag-ret)
void *main_f_868620(void* a0) { static char g_f_868620[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868620; }

// sub_868640  (orig 0x868640, strlit-flag-ret)
void *main_f_868640(void* a0) { static char g_f_868640[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_868640; }

// sub_868660  (orig 0x868660, strlit-flag-ret)
void *main_f_868660(void* a0) { static char g_f_868660[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868660; }

// sub_868680  (orig 0x868680, strlit-flag-ret)
void *main_f_868680(void* a0) { static char g_f_868680[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868680; }

// sub_8686a0  (orig 0x8686a0, strlit-flag-ret)
void *main_f_8686a0(void* a0) { static char g_f_8686a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8686a0; }

// sub_8686c0  (orig 0x8686c0, strlit-flag-ret)
void *main_f_8686c0(void* a0) { static char g_f_8686c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8686c0; }

// sub_8686e0  (orig 0x8686e0, strlit-flag-ret)
void *main_f_8686e0(void* a0) { static char g_f_8686e0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8686e0; }

// sub_868700  (orig 0x868700, strlit-flag-ret)
void *main_f_868700(void* a0) { static char g_f_868700[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868700; }

// sub_868720  (orig 0x868720, strlit-flag-ret)
void *main_f_868720(void* a0) { static char g_f_868720[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_868720; }

// sub_868740  (orig 0x868740, strlit-flag-ret)
void *main_f_868740(void* a0) { static char g_f_868740[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_868740; }

// sub_868760  (orig 0x868760, strlit-flag-ret)
void *main_f_868760(void* a0) { static char g_f_868760[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868760; }

// sub_868780  (orig 0x868780, strlit-flag-ret)
void *main_f_868780(void* a0) { static char g_f_868780[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868780; }

// sub_8687a0  (orig 0x8687a0, strlit-flag-ret)
void *main_f_8687a0(void* a0) { static char g_f_8687a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8687a0; }

// sub_8687c0  (orig 0x8687c0, strlit-flag-ret)
void *main_f_8687c0(void* a0) { static char g_f_8687c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8687c0; }

// sub_8687e0  (orig 0x8687e0, strlit-flag-ret)
void *main_f_8687e0(void* a0) { static char g_f_8687e0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8687e0; }

// sub_868800  (orig 0x868800, strlit-flag-ret)
void *main_f_868800(void* a0) { static char g_f_868800[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868800; }

// sub_868820  (orig 0x868820, strlit-flag-ret)
void *main_f_868820(void* a0) { static char g_f_868820[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868820; }

// sub_868840  (orig 0x868840, strlit-flag-ret)
void *main_f_868840(void* a0) { static char g_f_868840[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868840; }

// sub_868860  (orig 0x868860, strlit-flag-ret)
void *main_f_868860(void* a0) { static char g_f_868860[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_868860; }

// sub_868880  (orig 0x868880, strlit-flag-ret)
void *main_f_868880(void* a0) { static char g_f_868880[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868880; }

// sub_8688a0  (orig 0x8688a0, strlit-flag-ret)
void *main_f_8688a0(void* a0) { static char g_f_8688a0[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_8688a0; }

// sub_8688c0  (orig 0x8688c0, strlit-flag-ret)
void *main_f_8688c0(void* a0) { static char g_f_8688c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8688c0; }

// sub_8688e0  (orig 0x8688e0, strlit-flag-ret)
void *main_f_8688e0(void* a0) { static char g_f_8688e0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8688e0; }

// sub_868900  (orig 0x868900, strlit-flag-ret)
void *main_f_868900(void* a0) { static char g_f_868900[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_868900; }

// sub_868920  (orig 0x868920, strlit-flag-ret)
void *main_f_868920(void* a0) { static char g_f_868920[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868920; }

// sub_868940  (orig 0x868940, strlit-flag-ret)
void *main_f_868940(void* a0) { static char g_f_868940[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868940; }

// sub_868960  (orig 0x868960, strlit-flag-ret)
void *main_f_868960(void* a0) { static char g_f_868960[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868960; }

// sub_868980  (orig 0x868980, strlit-flag-ret)
void *main_f_868980(void* a0) { static char g_f_868980[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868980; }

// sub_8689a0  (orig 0x8689a0, strlit-flag-ret)
void *main_f_8689a0(void* a0) { static char g_f_8689a0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8689a0; }

// sub_8689c0  (orig 0x8689c0, strlit-flag-ret)
void *main_f_8689c0(void* a0) { static char g_f_8689c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8689c0; }

// sub_8689e0  (orig 0x8689e0, strlit-flag-ret)
void *main_f_8689e0(void* a0) { static char g_f_8689e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8689e0; }

// sub_87d610  (orig 0x87d610, strlit-flag-ret)
void *main_f_87d610(void* a0) { static char g_f_87d610[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d610; }

// sub_87d630  (orig 0x87d630, strlit-flag-ret)
void *main_f_87d630(void* a0) { static char g_f_87d630[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_87d630; }

// sub_87d650  (orig 0x87d650, strlit-flag-ret)
void *main_f_87d650(void* a0) { static char g_f_87d650[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d650; }

// sub_87d670  (orig 0x87d670, strlit-flag-ret)
void *main_f_87d670(void* a0) { static char g_f_87d670[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d670; }

// sub_87d690  (orig 0x87d690, strlit-flag-ret)
void *main_f_87d690(void* a0) { static char g_f_87d690[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d690; }

// sub_87d6b0  (orig 0x87d6b0, strlit-flag-ret)
void *main_f_87d6b0(void* a0) { static char g_f_87d6b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d6b0; }

// sub_87d6d0  (orig 0x87d6d0, strlit-flag-ret)
void *main_f_87d6d0(void* a0) { static char g_f_87d6d0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_87d6d0; }

// sub_87d740  (orig 0x87d740, strlit-flag-ret)
void *main_f_87d740(void* a0) { static char g_f_87d740[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d740; }

// sub_87dad0  (orig 0x87dad0, ret_only)
void main_f_87dad0() {}

// sub_87e6b0  (orig 0x87e6b0, strlit-flag-ret)
void *main_f_87e6b0(void* a0) { static char g_f_87e6b0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_87e6b0; }

// sub_87e7c0  (orig 0x87e7c0, strlit-flag-ret)
void *main_f_87e7c0(void* a0) { static char g_f_87e7c0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_87e7c0; }

// sub_87e8b0  (orig 0x87e8b0, strlit-flag-ret)
void *main_f_87e8b0(void* a0) { static char g_f_87e8b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87e8b0; }

// sub_87e980  (orig 0x87e980, strlit-flag-ret)
void *main_f_87e980(void* a0) { static char g_f_87e980[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87e980; }

// sub_87ea10  (orig 0x87ea10, strlit-flag-ret)
void *main_f_87ea10(void* a0) { static char g_f_87ea10[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87ea10; }

// sub_87eb10  (orig 0x87eb10, strlit-flag-ret)
void *main_f_87eb10(void* a0) { static char g_f_87eb10[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87eb10; }

// sub_87eb90  (orig 0x87eb90, strlit-flag-ret)
void *main_f_87eb90(void* a0) { static char g_f_87eb90[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87eb90; }

// sub_87ec20  (orig 0x87ec20, strlit-flag-ret)
void *main_f_87ec20(void* a0) { static char g_f_87ec20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87ec20; }

// sub_87eca0  (orig 0x87eca0, strlit-flag-ret)
void *main_f_87eca0(void* a0) { static char g_f_87eca0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_87eca0; }

// sub_87ee30  (orig 0x87ee30, strlit-flag-ret)
void *main_f_87ee30(void* a0) { static char g_f_87ee30[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_87ee30; }

// sub_87f110  (orig 0x87f110, strlit-flag-ret)
void *main_f_87f110(void* a0) { static char g_f_87f110[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f110; }

// sub_87f180  (orig 0x87f180, strlit-flag-ret)
void *main_f_87f180(void* a0) { static char g_f_87f180[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_87f180; }

// sub_87f270  (orig 0x87f270, strlit-flag-ret)
void *main_f_87f270(void* a0) { static char g_f_87f270[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_87f270; }

// sub_87f360  (orig 0x87f360, strlit-flag-ret)
void *main_f_87f360(void* a0) { static char g_f_87f360[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f360; }

// sub_87f3e0  (orig 0x87f3e0, strlit-flag-ret)
void *main_f_87f3e0(void* a0) { static char g_f_87f3e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f3e0; }

// sub_87f460  (orig 0x87f460, strlit-flag-ret)
void *main_f_87f460(void* a0) { static char g_f_87f460[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f460; }

// sub_87f4e0  (orig 0x87f4e0, strlit-flag-ret)
void *main_f_87f4e0(void* a0) { static char g_f_87f4e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f4e0; }

// sub_87f5b0  (orig 0x87f5b0, strlit-flag-ret)
void *main_f_87f5b0(void* a0) { static char g_f_87f5b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f5b0; }

// sub_87f630  (orig 0x87f630, strlit-flag-ret)
void *main_f_87f630(void* a0) { static char g_f_87f630[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f630; }

// sub_87f6f0  (orig 0x87f6f0, strlit-flag-ret)
void *main_f_87f6f0(void* a0) { static char g_f_87f6f0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f6f0; }

// sub_87f7b0  (orig 0x87f7b0, strlit-flag-ret)
void *main_f_87f7b0(void* a0) { static char g_f_87f7b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f7b0; }

// sub_87f870  (orig 0x87f870, strlit-flag-ret)
void *main_f_87f870(void* a0) { static char g_f_87f870[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f870; }

// sub_87f930  (orig 0x87f930, strlit-flag-ret)
void *main_f_87f930(void* a0) { static char g_f_87f930[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f930; }

// sub_87f9e0  (orig 0x87f9e0, strlit-flag-ret)
void *main_f_87f9e0(void* a0) { static char g_f_87f9e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f9e0; }

// sub_87fb70  (orig 0x87fb70, strlit-flag-ret)
void *main_f_87fb70(void* a0) { static char g_f_87fb70[1]; *(uint32_t *)((char*)(a0)) = 10; __asm__ volatile("" ::: "memory"); return g_f_87fb70; }

// sub_880210  (orig 0x880210, strlit-flag-ret)
void *main_f_880210(void* a0) { static char g_f_880210[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880210; }

// sub_880300  (orig 0x880300, strlit-flag-ret)
void *main_f_880300(void* a0) { static char g_f_880300[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880300; }

// sub_880380  (orig 0x880380, strlit-flag-ret)
void *main_f_880380(void* a0) { static char g_f_880380[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880380; }

// sub_880400  (orig 0x880400, strlit-flag-ret)
void *main_f_880400(void* a0) { static char g_f_880400[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880400; }

// sub_8804a0  (orig 0x8804a0, strlit-flag-ret)
void *main_f_8804a0(void* a0) { static char g_f_8804a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8804a0; }

// sub_880540  (orig 0x880540, strlit-flag-ret)
void *main_f_880540(void* a0) { static char g_f_880540[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880540; }

// sub_8805b0  (orig 0x8805b0, strlit-flag-ret)
void *main_f_8805b0(void* a0) { static char g_f_8805b0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8805b0; }

// sub_8807b0  (orig 0x8807b0, strlit-flag-ret)
void *main_f_8807b0(void* a0) { static char g_f_8807b0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8807b0; }

// sub_880840  (orig 0x880840, strlit-flag-ret)
void *main_f_880840(void* a0) { static char g_f_880840[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_880840; }

// sub_880880  (orig 0x880880, strlit-flag-ret)
void *main_f_880880(void* a0) { static char g_f_880880[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880880; }

// sub_880910  (orig 0x880910, strlit-flag-ret)
void *main_f_880910(void* a0) { static char g_f_880910[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_880910; }

// sub_880a90  (orig 0x880a90, strlit-flag-ret)
void *main_f_880a90(void* a0) { static char g_f_880a90[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_880a90; }

// sub_880bf0  (orig 0x880bf0, strlit-flag-ret)
void *main_f_880bf0(void* a0) { static char g_f_880bf0[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_880bf0; }

// sub_880d30  (orig 0x880d30, strlit-flag-ret)
void *main_f_880d30(void* a0) { static char g_f_880d30[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_880d30; }

// sub_880de0  (orig 0x880de0, strlit-flag-ret)
void *main_f_880de0(void* a0) { static char g_f_880de0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_880de0; }

// sub_880ec0  (orig 0x880ec0, strlit-flag-ret)
void *main_f_880ec0(void* a0) { static char g_f_880ec0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_880ec0; }

// sub_880f70  (orig 0x880f70, strlit-flag-ret)
void *main_f_880f70(void* a0) { static char g_f_880f70[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_880f70; }

// sub_8811b0  (orig 0x8811b0, strlit-flag-ret)
void *main_f_8811b0(void* a0) { static char g_f_8811b0[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_8811b0; }

// sub_881470  (orig 0x881470, strlit-flag-ret)
void *main_f_881470(void* a0) { static char g_f_881470[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_881470; }

// sub_8817a0  (orig 0x8817a0, strlit-flag-ret)
void *main_f_8817a0(void* a0) { static char g_f_8817a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8817a0; }

// sub_881890  (orig 0x881890, strlit-flag-ret)
void *main_f_881890(void* a0) { static char g_f_881890[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_881890; }

// sub_881980  (orig 0x881980, strlit-flag-ret)
void *main_f_881980(void* a0) { static char g_f_881980[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_881980; }

// sub_881a70  (orig 0x881a70, strlit-flag-ret)
void *main_f_881a70(void* a0) { static char g_f_881a70[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_881a70; }

// sub_881b70  (orig 0x881b70, strlit-flag-ret)
void *main_f_881b70(void* a0) { static char g_f_881b70[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_881b70; }

// sub_881c60  (orig 0x881c60, strlit-flag-ret)
void *main_f_881c60(void* a0) { static char g_f_881c60[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_881c60; }

// sub_881e40  (orig 0x881e40, strlit-flag-ret)
void *main_f_881e40(void* a0) { static char g_f_881e40[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_881e40; }

// sub_882020  (orig 0x882020, strlit-flag-ret)
void *main_f_882020(void* a0) { static char g_f_882020[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_882020; }

// sub_882200  (orig 0x882200, strlit-flag-ret)
void *main_f_882200(void* a0) { static char g_f_882200[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_882200; }

// sub_8822c0  (orig 0x8822c0, strlit-flag-ret)
void *main_f_8822c0(void* a0) { static char g_f_8822c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8822c0; }

// sub_882400  (orig 0x882400, strlit-flag-ret)
void *main_f_882400(void* a0) { static char g_f_882400[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882400; }

// sub_882430  (orig 0x882430, strlit-flag-ret)
void *main_f_882430(void* a0) { static char g_f_882430[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_882430; }

// sub_8825a0  (orig 0x8825a0, strlit-flag-ret)
void *main_f_8825a0(void* a0) { static char g_f_8825a0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_8825a0; }

// sub_8827b0  (orig 0x8827b0, strlit-flag-ret)
void *main_f_8827b0(void* a0) { static char g_f_8827b0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8827b0; }

// sub_882880  (orig 0x882880, strlit-flag-ret)
void *main_f_882880(void* a0) { static char g_f_882880[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882880; }

// sub_882970  (orig 0x882970, strlit-flag-ret)
void *main_f_882970(void* a0) { static char g_f_882970[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882970; }

// sub_882a40  (orig 0x882a40, strlit-flag-ret)
void *main_f_882a40(void* a0) { static char g_f_882a40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882a40; }

// sub_882b30  (orig 0x882b30, strlit-flag-ret)
void *main_f_882b30(void* a0) { static char g_f_882b30[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882b30; }

// sub_882ba0  (orig 0x882ba0, strlit-flag-ret)
void *main_f_882ba0(void* a0) { static char g_f_882ba0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882ba0; }

// sub_882c20  (orig 0x882c20, strlit-flag-ret)
void *main_f_882c20(void* a0) { static char g_f_882c20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882c20; }

// sub_882d50  (orig 0x882d50, strlit-flag-ret)
void *main_f_882d50(void* a0) { static char g_f_882d50[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882d50; }

// sub_882ea0  (orig 0x882ea0, strlit-flag-ret)
void *main_f_882ea0(void* a0) { static char g_f_882ea0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882ea0; }

// sub_882f10  (orig 0x882f10, strlit-flag-ret)
void *main_f_882f10(void* a0) { static char g_f_882f10[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882f10; }

// sub_882f80  (orig 0x882f80, strlit-flag-ret)
void *main_f_882f80(void* a0) { static char g_f_882f80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882f80; }

// sub_8830a0  (orig 0x8830a0, strlit-flag-ret)
void *main_f_8830a0(void* a0) { static char g_f_8830a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8830a0; }

// sub_8831b0  (orig 0x8831b0, strlit-flag-ret)
void *main_f_8831b0(void* a0) { static char g_f_8831b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8831b0; }

// sub_883310  (orig 0x883310, strlit-flag-ret)
void *main_f_883310(void* a0) { static char g_f_883310[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_883310; }

// sub_883640  (orig 0x883640, strlit-flag-ret)
void *main_f_883640(void* a0) { static char g_f_883640[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_883640; }

// sub_883750  (orig 0x883750, strlit-flag-ret)
void *main_f_883750(void* a0) { static char g_f_883750[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_883750; }

// sub_8838c0  (orig 0x8838c0, strlit-flag-ret)
void *main_f_8838c0(void* a0) { static char g_f_8838c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8838c0; }

// sub_883930  (orig 0x883930, strlit-flag-ret)
void *main_f_883930(void* a0) { static char g_f_883930[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_883930; }

// sub_883a80  (orig 0x883a80, strlit-flag-ret)
void *main_f_883a80(void* a0) { static char g_f_883a80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_883a80; }

// sub_883cd0  (orig 0x883cd0, strlit-flag-ret)
void *main_f_883cd0(void* a0) { static char g_f_883cd0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_883cd0; }

// sub_883d80  (orig 0x883d80, strlit-flag-ret)
void *main_f_883d80(void* a0) { static char g_f_883d80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_883d80; }

// sub_883ec0  (orig 0x883ec0, strlit-flag-ret)
void *main_f_883ec0(void* a0) { static char g_f_883ec0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_883ec0; }

// sub_884100  (orig 0x884100, strlit-flag-ret)
void *main_f_884100(void* a0) { static char g_f_884100[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_884100; }

// sub_884320  (orig 0x884320, strlit-flag-ret)
void *main_f_884320(void* a0) { static char g_f_884320[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_884320; }

// sub_8844c0  (orig 0x8844c0, strlit-flag-ret)
void *main_f_8844c0(void* a0) { static char g_f_8844c0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8844c0; }

// sub_8846f0  (orig 0x8846f0, strlit-flag-ret)
void *main_f_8846f0(void* a0) { static char g_f_8846f0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8846f0; }

// sub_884820  (orig 0x884820, strlit-flag-ret)
void *main_f_884820(void* a0) { static char g_f_884820[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_884820; }

// sub_884b50  (orig 0x884b50, strlit-flag-ret)
void *main_f_884b50(void* a0) { static char g_f_884b50[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_884b50; }

// sub_884dc0  (orig 0x884dc0, strlit-flag-ret)
void *main_f_884dc0(void* a0) { static char g_f_884dc0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_884dc0; }

// sub_884ea0  (orig 0x884ea0, strlit-flag-ret)
void *main_f_884ea0(void* a0) { static char g_f_884ea0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_884ea0; }

// sub_884f70  (orig 0x884f70, strlit-flag-ret)
void *main_f_884f70(void* a0) { static char g_f_884f70[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_884f70; }

// sub_885040  (orig 0x885040, strlit-flag-ret)
void *main_f_885040(void* a0) { static char g_f_885040[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_885040; }

// sub_885120  (orig 0x885120, strlit-flag-ret)
void *main_f_885120(void* a0) { static char g_f_885120[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_885120; }

// sub_8852d0  (orig 0x8852d0, strlit-flag-ret)
void *main_f_8852d0(void* a0) { static char g_f_8852d0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8852d0; }

// sub_8853e0  (orig 0x8853e0, strlit-flag-ret)
void *main_f_8853e0(void* a0) { static char g_f_8853e0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8853e0; }

// sub_885580  (orig 0x885580, strlit-flag-ret)
void *main_f_885580(void* a0) { static char g_f_885580[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_885580; }

// sub_885680  (orig 0x885680, strlit-flag-ret)
void *main_f_885680(void* a0) { static char g_f_885680[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_885680; }

// sub_885910  (orig 0x885910, strlit-flag-ret)
void *main_f_885910(void* a0) { static char g_f_885910[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_885910; }

// sub_885b20  (orig 0x885b20, strlit-flag-ret)
void *main_f_885b20(void* a0) { static char g_f_885b20[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_885b20; }

// sub_885db0  (orig 0x885db0, strlit-flag-ret)
void *main_f_885db0(void* a0) { static char g_f_885db0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_885db0; }

// sub_885f50  (orig 0x885f50, strlit-flag-ret)
void *main_f_885f50(void* a0) { static char g_f_885f50[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_885f50; }

// sub_886010  (orig 0x886010, strlit-flag-ret)
void *main_f_886010(void* a0) { static char g_f_886010[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_886010; }

// sub_886230  (orig 0x886230, strlit-flag-ret)
void *main_f_886230(void* a0) { static char g_f_886230[1]; *(uint32_t *)((char*)(a0)) = 8; __asm__ volatile("" ::: "memory"); return g_f_886230; }

// sub_8865d0  (orig 0x8865d0, strlit-flag-ret)
void *main_f_8865d0(void* a0) { static char g_f_8865d0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8865d0; }

// sub_886870  (orig 0x886870, strlit-flag-ret)
void *main_f_886870(void* a0) { static char g_f_886870[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_886870; }

// sub_886a60  (orig 0x886a60, strlit-flag-ret)
void *main_f_886a60(void* a0) { static char g_f_886a60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_886a60; }

// sub_886b40  (orig 0x886b40, strlit-flag-ret)
void *main_f_886b40(void* a0) { static char g_f_886b40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_886b40; }

// sub_886ca0  (orig 0x886ca0, strlit-flag-ret)
void *main_f_886ca0(void* a0) { static char g_f_886ca0[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_886ca0; }

// sub_887020  (orig 0x887020, strlit-flag-ret)
void *main_f_887020(void* a0) { static char g_f_887020[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_887020; }

// sub_887240  (orig 0x887240, strlit-flag-ret)
void *main_f_887240(void* a0) { static char g_f_887240[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_887240; }

// sub_8873c0  (orig 0x8873c0, strlit-flag-ret)
void *main_f_8873c0(void* a0) { static char g_f_8873c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8873c0; }

// sub_887430  (orig 0x887430, strlit-flag-ret)
void *main_f_887430(void* a0) { static char g_f_887430[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887430; }

// sub_8875a0  (orig 0x8875a0, strlit-flag-ret)
void *main_f_8875a0(void* a0) { static char g_f_8875a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8875a0; }

// sub_8876a0  (orig 0x8876a0, strlit-flag-ret)
void *main_f_8876a0(void* a0) { static char g_f_8876a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8876a0; }

// sub_887780  (orig 0x887780, strlit-flag-ret)
void *main_f_887780(void* a0) { static char g_f_887780[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_887780; }

// sub_887890  (orig 0x887890, strlit-flag-ret)
void *main_f_887890(void* a0) { static char g_f_887890[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887890; }

// sub_887ae0  (orig 0x887ae0, strlit-flag-ret)
void *main_f_887ae0(void* a0) { static char g_f_887ae0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887ae0; }

// sub_887bf0  (orig 0x887bf0, strlit-flag-ret)
void *main_f_887bf0(void* a0) { static char g_f_887bf0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887bf0; }

// sub_887d50  (orig 0x887d50, strlit-flag-ret)
void *main_f_887d50(void* a0) { static char g_f_887d50[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887d50; }

// sub_887ec0  (orig 0x887ec0, strlit-flag-ret)
void *main_f_887ec0(void* a0) { static char g_f_887ec0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887ec0; }

// sub_888050  (orig 0x888050, strlit-flag-ret)
void *main_f_888050(void* a0) { static char g_f_888050[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_888050; }

// sub_8882f0  (orig 0x8882f0, strlit-flag-ret)
void *main_f_8882f0(void* a0) { static char g_f_8882f0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8882f0; }

// sub_8883e0  (orig 0x8883e0, strlit-flag-ret)
void *main_f_8883e0(void* a0) { static char g_f_8883e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8883e0; }

// sub_8884e0  (orig 0x8884e0, strlit-flag-ret)
void *main_f_8884e0(void* a0) { static char g_f_8884e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8884e0; }

// sub_888590  (orig 0x888590, strlit-flag-ret)
void *main_f_888590(void* a0) { static char g_f_888590[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888590; }

// sub_888610  (orig 0x888610, strlit-flag-ret)
void *main_f_888610(void* a0) { static char g_f_888610[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888610; }

// sub_888690  (orig 0x888690, strlit-flag-ret)
void *main_f_888690(void* a0) { static char g_f_888690[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888690; }

// sub_8887e0  (orig 0x8887e0, strlit-flag-ret)
void *main_f_8887e0(void* a0) { static char g_f_8887e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8887e0; }

// sub_888880  (orig 0x888880, strlit-flag-ret)
void *main_f_888880(void* a0) { static char g_f_888880[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888880; }

// sub_888920  (orig 0x888920, strlit-flag-ret)
void *main_f_888920(void* a0) { static char g_f_888920[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888920; }

// sub_888a40  (orig 0x888a40, strlit-flag-ret)
void *main_f_888a40(void* a0) { static char g_f_888a40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888a40; }

// sub_888ee0  (orig 0x888ee0, strlit-flag-ret)
void *main_f_888ee0(void* a0) { static char g_f_888ee0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_888ee0; }

// sub_889100  (orig 0x889100, strlit-flag-ret)
void *main_f_889100(void* a0) { static char g_f_889100[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889100; }

// sub_8891f0  (orig 0x8891f0, strlit-flag-ret)
void *main_f_8891f0(void* a0) { static char g_f_8891f0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8891f0; }

// sub_889230  (orig 0x889230, strlit-flag-ret)
void *main_f_889230(void* a0) { static char g_f_889230[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_889230; }

// sub_8892b0  (orig 0x8892b0, strlit-flag-ret)
void *main_f_8892b0(void* a0) { static char g_f_8892b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8892b0; }

// sub_889340  (orig 0x889340, strlit-flag-ret)
void *main_f_889340(void* a0) { static char g_f_889340[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889340; }

// sub_8893d0  (orig 0x8893d0, strlit-flag-ret)
void *main_f_8893d0(void* a0) { static char g_f_8893d0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8893d0; }

// sub_889480  (orig 0x889480, strlit-flag-ret)
void *main_f_889480(void* a0) { static char g_f_889480[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_889480; }

// sub_8896c0  (orig 0x8896c0, strlit-flag-ret)
void *main_f_8896c0(void* a0) { static char g_f_8896c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8896c0; }

// sub_889790  (orig 0x889790, strlit-flag-ret)
void *main_f_889790(void* a0) { static char g_f_889790[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_889790; }

// sub_889910  (orig 0x889910, strlit-flag-ret)
void *main_f_889910(void* a0) { static char g_f_889910[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_889910; }

// sub_8899a0  (orig 0x8899a0, strlit-flag-ret)
void *main_f_8899a0(void* a0) { static char g_f_8899a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8899a0; }

// sub_889a60  (orig 0x889a60, strlit-flag-ret)
void *main_f_889a60(void* a0) { static char g_f_889a60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889a60; }

// sub_889bb0  (orig 0x889bb0, strlit-flag-ret)
void *main_f_889bb0(void* a0) { static char g_f_889bb0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889bb0; }

// sub_889c80  (orig 0x889c80, strlit-flag-ret)
void *main_f_889c80(void* a0) { static char g_f_889c80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_889c80; }

// sub_889ea0  (orig 0x889ea0, strlit-flag-ret)
void *main_f_889ea0(void* a0) { static char g_f_889ea0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889ea0; }

// sub_889f80  (orig 0x889f80, strlit-flag-ret)
void *main_f_889f80(void* a0) { static char g_f_889f80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889f80; }

// sub_88a100  (orig 0x88a100, strlit-flag-ret)
void *main_f_88a100(void* a0) { static char g_f_88a100[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a100; }

// sub_88a240  (orig 0x88a240, strlit-flag-ret)
void *main_f_88a240(void* a0) { static char g_f_88a240[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a240; }

// sub_88a340  (orig 0x88a340, strlit-flag-ret)
void *main_f_88a340(void* a0) { static char g_f_88a340[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a340; }

// sub_88a420  (orig 0x88a420, strlit-flag-ret)
void *main_f_88a420(void* a0) { static char g_f_88a420[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88a420; }

// sub_88a610  (orig 0x88a610, strlit-flag-ret)
void *main_f_88a610(void* a0) { static char g_f_88a610[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88a610; }

// sub_88a630  (orig 0x88a630, strlit-flag-ret)
void *main_f_88a630(void* a0) { static char g_f_88a630[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a630; }

// sub_88a760  (orig 0x88a760, strlit-flag-ret)
void *main_f_88a760(void* a0) { static char g_f_88a760[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a760; }

// sub_88a7d0  (orig 0x88a7d0, strlit-flag-ret)
void *main_f_88a7d0(void* a0) { static char g_f_88a7d0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a7d0; }

// sub_88a840  (orig 0x88a840, strlit-flag-ret)
void *main_f_88a840(void* a0) { static char g_f_88a840[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a840; }

// sub_88a8d0  (orig 0x88a8d0, strlit-flag-ret)
void *main_f_88a8d0(void* a0) { static char g_f_88a8d0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88a8d0; }

// sub_88aa30  (orig 0x88aa30, strlit-flag-ret)
void *main_f_88aa30(void* a0) { static char g_f_88aa30[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88aa30; }

// sub_88ab80  (orig 0x88ab80, strlit-flag-ret)
void *main_f_88ab80(void* a0) { static char g_f_88ab80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88ab80; }

// sub_88ac00  (orig 0x88ac00, strlit-flag-ret)
void *main_f_88ac00(void* a0) { static char g_f_88ac00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88ac00; }

// sub_88ad30  (orig 0x88ad30, strlit-flag-ret)
void *main_f_88ad30(void* a0) { static char g_f_88ad30[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88ad30; }

// sub_88aef0  (orig 0x88aef0, strlit-flag-ret)
void *main_f_88aef0(void* a0) { static char g_f_88aef0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88aef0; }

// sub_88af70  (orig 0x88af70, strlit-flag-ret)
void *main_f_88af70(void* a0) { static char g_f_88af70[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88af70; }

// sub_88b050  (orig 0x88b050, strlit-flag-ret)
void *main_f_88b050(void* a0) { static char g_f_88b050[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_88b050; }

// sub_88b340  (orig 0x88b340, strlit-flag-ret)
void *main_f_88b340(void* a0) { static char g_f_88b340[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88b340; }

// sub_88b470  (orig 0x88b470, strlit-flag-ret)
void *main_f_88b470(void* a0) { static char g_f_88b470[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88b470; }

// sub_88b620  (orig 0x88b620, strlit-flag-ret)
void *main_f_88b620(void* a0) { static char g_f_88b620[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88b620; }

// sub_88b750  (orig 0x88b750, strlit-flag-ret)
void *main_f_88b750(void* a0) { static char g_f_88b750[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88b750; }

// sub_88b820  (orig 0x88b820, strlit-flag-ret)
void *main_f_88b820(void* a0) { static char g_f_88b820[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88b820; }

// sub_88b950  (orig 0x88b950, strlit-flag-ret)
void *main_f_88b950(void* a0) { static char g_f_88b950[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88b950; }

// sub_88b9f0  (orig 0x88b9f0, strlit-flag-ret)
void *main_f_88b9f0(void* a0) { static char g_f_88b9f0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88b9f0; }

// sub_88ba90  (orig 0x88ba90, strlit-flag-ret)
void *main_f_88ba90(void* a0) { static char g_f_88ba90[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88ba90; }

// sub_88bad0  (orig 0x88bad0, strlit-flag-ret)
void *main_f_88bad0(void* a0) { static char g_f_88bad0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88bad0; }

// sub_88bb50  (orig 0x88bb50, strlit-flag-ret)
void *main_f_88bb50(void* a0) { static char g_f_88bb50[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_88bb50; }

// sub_88bd70  (orig 0x88bd70, strlit-flag-ret)
void *main_f_88bd70(void* a0) { static char g_f_88bd70[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88bd70; }

// sub_88bdf0  (orig 0x88bdf0, strlit-flag-ret)
void *main_f_88bdf0(void* a0) { static char g_f_88bdf0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88bdf0; }

// sub_88be80  (orig 0x88be80, strlit-flag-ret)
void *main_f_88be80(void* a0) { static char g_f_88be80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88be80; }

// sub_88bfa0  (orig 0x88bfa0, strlit-flag-ret)
void *main_f_88bfa0(void* a0) { static char g_f_88bfa0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88bfa0; }

// sub_88c020  (orig 0x88c020, strlit-flag-ret)
void *main_f_88c020(void* a0) { static char g_f_88c020[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88c020; }

// sub_88c1a0  (orig 0x88c1a0, strlit-flag-ret)
void *main_f_88c1a0(void* a0) { static char g_f_88c1a0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88c1a0; }

// sub_88c310  (orig 0x88c310, strlit-flag-ret)
void *main_f_88c310(void* a0) { static char g_f_88c310[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88c310; }

// sub_88c480  (orig 0x88c480, strlit-flag-ret)
void *main_f_88c480(void* a0) { static char g_f_88c480[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88c480; }

// sub_88c590  (orig 0x88c590, strlit-flag-ret)
void *main_f_88c590(void* a0) { static char g_f_88c590[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88c590; }

// sub_88c630  (orig 0x88c630, strlit-flag-ret)
void *main_f_88c630(void* a0) { static char g_f_88c630[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88c630; }

// sub_88c730  (orig 0x88c730, strlit-flag-ret)
void *main_f_88c730(void* a0) { static char g_f_88c730[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88c730; }

// sub_88c7f0  (orig 0x88c7f0, strlit-flag-ret)
void *main_f_88c7f0(void* a0) { static char g_f_88c7f0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88c7f0; }

// sub_88ca30  (orig 0x88ca30, strlit-flag-ret)
void *main_f_88ca30(void* a0) { static char g_f_88ca30[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88ca30; }

// sub_88cd70  (orig 0x88cd70, strlit-flag-ret)
void *main_f_88cd70(void* a0) { static char g_f_88cd70[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88cd70; }

// sub_88cfa0  (orig 0x88cfa0, strlit-flag-ret)
void *main_f_88cfa0(void* a0) { static char g_f_88cfa0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88cfa0; }

// sub_88d080  (orig 0x88d080, strlit-flag-ret)
void *main_f_88d080(void* a0) { static char g_f_88d080[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d080; }

// sub_88d150  (orig 0x88d150, strlit-flag-ret)
void *main_f_88d150(void* a0) { static char g_f_88d150[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_88d150; }

// sub_88d210  (orig 0x88d210, strlit-flag-ret)
void *main_f_88d210(void* a0) { static char g_f_88d210[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d210; }

// sub_88d290  (orig 0x88d290, strlit-flag-ret)
void *main_f_88d290(void* a0) { static char g_f_88d290[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d290; }

// sub_88d310  (orig 0x88d310, strlit-flag-ret)
void *main_f_88d310(void* a0) { static char g_f_88d310[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d310; }

// sub_88d3a0  (orig 0x88d3a0, strlit-flag-ret)
void *main_f_88d3a0(void* a0) { static char g_f_88d3a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d3a0; }

// sub_88d420  (orig 0x88d420, strlit-flag-ret)
void *main_f_88d420(void* a0) { static char g_f_88d420[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d420; }

// sub_88d4b0  (orig 0x88d4b0, strlit-flag-ret)
void *main_f_88d4b0(void* a0) { static char g_f_88d4b0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88d4b0; }

// sub_88d620  (orig 0x88d620, strlit-flag-ret)
void *main_f_88d620(void* a0) { static char g_f_88d620[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d620; }

// sub_88d6a0  (orig 0x88d6a0, strlit-flag-ret)
void *main_f_88d6a0(void* a0) { static char g_f_88d6a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d6a0; }

// sub_88d730  (orig 0x88d730, strlit-flag-ret)
void *main_f_88d730(void* a0) { static char g_f_88d730[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d730; }

// sub_88d7a0  (orig 0x88d7a0, strlit-flag-ret)
void *main_f_88d7a0(void* a0) { static char g_f_88d7a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d7a0; }

// sub_88d8c0  (orig 0x88d8c0, strlit-flag-ret)
void *main_f_88d8c0(void* a0) { static char g_f_88d8c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d8c0; }

// sub_88d960  (orig 0x88d960, strlit-flag-ret)
void *main_f_88d960(void* a0) { static char g_f_88d960[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d960; }

// sub_88d9e0  (orig 0x88d9e0, strlit-flag-ret)
void *main_f_88d9e0(void* a0) { static char g_f_88d9e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d9e0; }

// sub_88da80  (orig 0x88da80, strlit-flag-ret)
void *main_f_88da80(void* a0) { static char g_f_88da80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88da80; }

// sub_88db00  (orig 0x88db00, strlit-flag-ret)
void *main_f_88db00(void* a0) { static char g_f_88db00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88db00; }

// sub_88dc10  (orig 0x88dc10, strlit-flag-ret)
void *main_f_88dc10(void* a0) { static char g_f_88dc10[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88dc10; }

// sub_88de30  (orig 0x88de30, strlit-flag-ret)
void *main_f_88de30(void* a0) { static char g_f_88de30[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_88de30; }

// sub_88e050  (orig 0x88e050, strlit-flag-ret)
void *main_f_88e050(void* a0) { static char g_f_88e050[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88e050; }

// sub_88e1a0  (orig 0x88e1a0, strlit-flag-ret)
void *main_f_88e1a0(void* a0) { static char g_f_88e1a0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88e1a0; }

// sub_88e440  (orig 0x88e440, strlit-flag-ret)
void *main_f_88e440(void* a0) { static char g_f_88e440[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_88e440; }

// sub_88ea20  (orig 0x88ea20, strlit-flag-ret)
void *main_f_88ea20(void* a0) { static char g_f_88ea20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88ea20; }

// sub_88ead0  (orig 0x88ead0, strlit-flag-ret)
void *main_f_88ead0(void* a0) { static char g_f_88ead0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88ead0; }

// sub_88ed70  (orig 0x88ed70, strlit-flag-ret)
void *main_f_88ed70(void* a0) { static char g_f_88ed70[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88ed70; }

// sub_88ee00  (orig 0x88ee00, strlit-flag-ret)
void *main_f_88ee00(void* a0) { static char g_f_88ee00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88ee00; }

// sub_88eee0  (orig 0x88eee0, strlit-flag-ret)
void *main_f_88eee0(void* a0) { static char g_f_88eee0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88eee0; }

// sub_88efc0  (orig 0x88efc0, strlit-flag-ret)
void *main_f_88efc0(void* a0) { static char g_f_88efc0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88efc0; }

// sub_88f0a0  (orig 0x88f0a0, strlit-flag-ret)
void *main_f_88f0a0(void* a0) { static char g_f_88f0a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88f0a0; }

// sub_88f180  (orig 0x88f180, strlit-flag-ret)
void *main_f_88f180(void* a0) { static char g_f_88f180[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88f180; }

// sub_88f330  (orig 0x88f330, strlit-flag-ret)
void *main_f_88f330(void* a0) { static char g_f_88f330[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88f330; }

// sub_88f3c0  (orig 0x88f3c0, strlit-flag-ret)
void *main_f_88f3c0(void* a0) { static char g_f_88f3c0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88f3c0; }

// sub_88f690  (orig 0x88f690, strlit-flag-ret)
void *main_f_88f690(void* a0) { static char g_f_88f690[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_88f690; }

// sub_88faf0  (orig 0x88faf0, strlit-flag-ret)
void *main_f_88faf0(void* a0) { static char g_f_88faf0[1]; *(uint32_t *)((char*)(a0)) = 8; __asm__ volatile("" ::: "memory"); return g_f_88faf0; }

// sub_88fff0  (orig 0x88fff0, strlit-flag-ret)
void *main_f_88fff0(void* a0) { static char g_f_88fff0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88fff0; }

// sub_890400  (orig 0x890400, strlit-flag-ret)
void *main_f_890400(void* a0) { static char g_f_890400[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_890400; }

// sub_890530  (orig 0x890530, strlit-flag-ret)
void *main_f_890530(void* a0) { static char g_f_890530[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_890530; }

// sub_8905b0  (orig 0x8905b0, strlit-flag-ret)
void *main_f_8905b0(void* a0) { static char g_f_8905b0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8905b0; }

// sub_890670  (orig 0x890670, strlit-flag-ret)
void *main_f_890670(void* a0) { static char g_f_890670[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_890670; }

// sub_890730  (orig 0x890730, strlit-flag-ret)
void *main_f_890730(void* a0) { static char g_f_890730[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_890730; }

// sub_890c10  (orig 0x890c10, straight)
void main_f_890c10(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1) + 16);
    *(uint64_t*)((char*)(a0) + 24) = *(uint64_t*)((char*)(a1) + 24);
}

// sub_892310  (orig 0x892310, getter)
uint16_t main_f_892310(void* a0) { return *(uint16_t*)((char*)(a0)); }

// sub_892320  (orig 0x892320, getter)
uint8_t main_f_892320(void* a0) { return *(uint8_t*)((char*)(a0) + 6); }

// sub_892330  (orig 0x892330, getter)
uint8_t main_f_892330(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_892340  (orig 0x892340, ptr_add)
void* main_f_892340(void* a0) { return (char*)a0 + 8; }

// sub_892350  (orig 0x892350, getter)
uint16_t main_f_892350(void* a0) { return *(uint16_t*)((char*)(a0) + 4); }

// sub_892380  (orig 0x892380, straight)
void main_f_892380(void* a0) {
    *(uint64_t*)((char*)(a0) + 8) = 14355223812243456;
}

// sub_8923d0  (orig 0x8923d0, ptr_add)
void* main_f_8923d0(void* a0) { return (char*)a0 + 8; }

// sub_8923e0  (orig 0x8923e0, ret_only)
void main_f_8923e0() {}

// sub_892490  (orig 0x892490, getter)
uint16_t main_f_892490(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_8924a0  (orig 0x8924a0, getter)
uint8_t main_f_8924a0(void* a0) { return *(uint8_t*)((char*)(a0) + 14); }

// sub_8924b0  (orig 0x8924b0, getter)
uint8_t main_f_8924b0(void* a0) { return *(uint8_t*)((char*)(a0) + 10); }

// sub_8924c0  (orig 0x8924c0, ptr_add)
void* main_f_8924c0(void* a0) { return (char*)a0 + 16; }

// sub_8924d0  (orig 0x8924d0, getter)
uint16_t main_f_8924d0(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_8925a0  (orig 0x8925a0, getter)
uint8_t main_f_8925a0(void* a0) { return *(uint8_t*)((char*)(a0) + 132); }

// sub_8925b0  (orig 0x8925b0, getter)
uint8_t main_f_8925b0(void* a0) { return *(uint8_t*)((char*)(a0) + 131); }

// sub_8925c0  (orig 0x8925c0, setter)
void main_f_8925c0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 72) = a1; }

// sub_892af0  (orig 0x892af0, ret_only)
void main_f_892af0() {}

// sub_892b10  (orig 0x892b10, setter)
void main_f_892b10(void* a0) { *(uint32_t*)((char*)(a0)) = 0; }

// sub_892b20  (orig 0x892b20, ret_only)
void main_f_892b20() {}

// sub_892bd0  (orig 0x892bd0, setter)
void main_f_892bd0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_892be0  (orig 0x892be0, ret_only)
void main_f_892be0() {}

// sub_8944f0  (orig 0x8944f0, setter)
void main_f_8944f0(void* a0) { *(uint64_t*)((char*)(a0) + 856) = 0; }

// sub_894500  (orig 0x894500, getter)
uint8_t main_f_894500(void* a0) { return *(uint8_t*)((char*)(a0) + 321); }

// sub_894f90  (orig 0x894f90, compare)
bool main_f_894f90(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 529)) != (uint64_t)(5); }

// sub_895540  (orig 0x895540, getter)
uint8_t main_f_895540(void* a0) { return *(uint8_t*)((char*)(a0) + 564); }

// sub_895550  (orig 0x895550, ptr_add)
void* main_f_895550(void* a0) { return (char*)a0 + 544; }

// sub_896c60  (orig 0x896c60, setter)
void main_f_896c60(void* a0) { *(uint64_t*)((char*)(a0) + 864) = 0; }

// sub_898320  (orig 0x898320, straight)
void main_f_898320(void* a0) {
    *(uint8_t*)((char*)(a0) + 321) = (uint8_t)(1);
}

// sub_898330  (orig 0x898330, straight)
void main_f_898330(void* a0) {
    *(uint8_t*)((char*)(a0) + 217) = (uint8_t)(1);
}

// sub_898340  (orig 0x898340, setter)
void main_f_898340(void* a0) { *(uint8_t*)((char*)(a0) + 321) = 0; }

// sub_898350  (orig 0x898350, setter)
void main_f_898350(void* a0) { *(uint8_t*)((char*)(a0) + 217) = 0; }

// sub_898360  (orig 0x898360, straight)
void main_f_898360(void* a0) {
    *(uint8_t*)((char*)(a0) + 321) = (uint8_t)(1);
}

// sub_898370  (orig 0x898370, straight)
void main_f_898370(void* a0) {
    *(uint8_t*)((char*)(a0) + 217) = (uint8_t)(1);
}

// sub_898b40  (orig 0x898b40, setter)
void main_f_898b40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 944) = a1; }

// sub_898d20  (orig 0x898d20, ret_only)
void main_f_898d20() {}

// sub_898d30  (orig 0x898d30, ret_only)
void main_f_898d30() {}

// sub_898d40  (orig 0x898d40, ret_only)
void main_f_898d40() {}

// sub_898d50  (orig 0x898d50, ret_only)
void main_f_898d50() {}

// sub_898d60  (orig 0x898d60, ret_only)
void main_f_898d60() {}

// sub_898d70  (orig 0x898d70, ret_only)
void main_f_898d70() {}

// sub_899e50  (orig 0x899e50, ret_only)
void main_f_899e50() {}

// sub_89a2e0  (orig 0x89a2e0, ret_only)
void main_f_89a2e0() {}

// sub_89a720  (orig 0x89a720, ret_only)
void main_f_89a720() {}

// sub_89abc0  (orig 0x89abc0, struct-copy)
void main_f_89abc0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_89abe0  (orig 0x89abe0, struct-copy)
void main_f_89abe0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_89ace0  (orig 0x89ace0, ret_only)
void main_f_89ace0() {}

// sub_89acf0  (orig 0x89acf0, struct-copy)
void main_f_89acf0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_89ad10  (orig 0x89ad10, struct-copy)
void main_f_89ad10(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_89b100  (orig 0x89b100, getter)
uint64_t main_f_89b100(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_89b960  (orig 0x89b960, getter)
uint64_t main_f_89b960(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_89dff0  (orig 0x89dff0, setter)
void main_f_89dff0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_89e150  (orig 0x89e150, setter)
void main_f_89e150(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_89e6d0  (orig 0x89e6d0, mov_ret)
uint32_t main_f_89e6d0() { return 1; }

// sub_89e780  (orig 0x89e780, getter)
uint32_t main_f_89e780(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_89e790  (orig 0x89e790, mov_ret)
uint32_t main_f_89e790() { return 1; }

// sub_89ecf0  (orig 0x89ecf0, setter)
void main_f_89ecf0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_89ee50  (orig 0x89ee50, ret_only)
void main_f_89ee50() {}

// sub_89ef00  (orig 0x89ef00, ret_only)
void main_f_89ef00() {}

// sub_89ef10  (orig 0x89ef10, mov_ret)
uint64_t main_f_89ef10(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_89f100  (orig 0x89f100, mov_ret)
uint32_t main_f_89f100() { return 1; }

// sub_89f1b0  (orig 0x89f1b0, getter)
uint32_t main_f_89f1b0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_89f1c0  (orig 0x89f1c0, mov_ret)
uint32_t main_f_89f1c0() { return 1; }

// sub_89f8a0  (orig 0x89f8a0, setter)
void main_f_89f8a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_8a01c0  (orig 0x8a01c0, mov_ret)
uint32_t main_f_8a01c0() { return 1; }

// sub_8a0350  (orig 0x8a0350, setter)
void main_f_8a0350(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_8a0420  (orig 0x8a0420, ret_only)
void main_f_8a0420() {}

// sub_8a04d0  (orig 0x8a04d0, ret_only)
void main_f_8a04d0() {}

// sub_8a04e0  (orig 0x8a04e0, mov_ret)
uint64_t main_f_8a04e0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_8a0630  (orig 0x8a0630, mov_ret)
uint32_t main_f_8a0630() { return 1; }

// sub_8a06e0  (orig 0x8a06e0, getter)
uint32_t main_f_8a06e0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_8a06f0  (orig 0x8a06f0, mov_ret)
uint32_t main_f_8a06f0() { return 1; }

// sub_8a0730  (orig 0x8a0730, getter)
uint32_t main_f_8a0730(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_8a0740  (orig 0x8a0740, mov_ret)
uint32_t main_f_8a0740() { return 1; }

// sub_8a0de0  (orig 0x8a0de0, setter)
void main_f_8a0de0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8a1650  (orig 0x8a1650, mov_ret)
uint32_t main_f_8a1650() { return 1; }

// sub_8a1700  (orig 0x8a1700, getter)
uint32_t main_f_8a1700(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8a1710  (orig 0x8a1710, mov_ret)
uint32_t main_f_8a1710() { return 1; }

// sub_8a1c10  (orig 0x8a1c10, setter)
void main_f_8a1c10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_8a23f0  (orig 0x8a23f0, mov_ret)
uint32_t main_f_8a23f0() { return 1; }

// sub_8a24a0  (orig 0x8a24a0, getter)
uint32_t main_f_8a24a0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_8a24b0  (orig 0x8a24b0, mov_ret)
uint32_t main_f_8a24b0() { return 1; }

// sub_8a2ac0  (orig 0x8a2ac0, setter)
void main_f_8a2ac0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_8a3160  (orig 0x8a3160, mov_ret)
uint32_t main_f_8a3160() { return 1; }

// sub_8a3210  (orig 0x8a3210, getter)
uint32_t main_f_8a3210(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_8a3220  (orig 0x8a3220, mov_ret)
uint32_t main_f_8a3220() { return 1; }

// sub_8a3700  (orig 0x8a3700, setter)
void main_f_8a3700(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_8a3860  (orig 0x8a3860, setter)
void main_f_8a3860(void* a0) { *(uint32_t*)((char*)(a0) + 20) = 0; }

// sub_8a3c80  (orig 0x8a3c80, mov_ret)
uint32_t main_f_8a3c80() { return 1; }

// sub_8a3d30  (orig 0x8a3d30, getter)
uint32_t main_f_8a3d30(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_8a3d40  (orig 0x8a3d40, mov_ret)
uint32_t main_f_8a3d40() { return 1; }

// sub_8a45d0  (orig 0x8a45d0, setter)
void main_f_8a45d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8a5210  (orig 0x8a5210, mov_ret)
uint32_t main_f_8a5210() { return 1; }

// sub_8a52c0  (orig 0x8a52c0, getter)
uint32_t main_f_8a52c0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8a52d0  (orig 0x8a52d0, mov_ret)
uint32_t main_f_8a52d0() { return 1; }

// sub_8a57b0  (orig 0x8a57b0, setter)
void main_f_8a57b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8a5910  (orig 0x8a5910, setter)
void main_f_8a5910(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8a5e90  (orig 0x8a5e90, mov_ret)
uint32_t main_f_8a5e90() { return 1; }

// sub_8a5f40  (orig 0x8a5f40, getter)
uint32_t main_f_8a5f40(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8a5f50  (orig 0x8a5f50, mov_ret)
uint32_t main_f_8a5f50() { return 1; }

// sub_8a6d00  (orig 0x8a6d00, straight)
void main_f_8a6d00(void* a0) {
    *(uint8_t*)((char*)(a0) + 117) = (uint8_t)(1);
}

// sub_8a7f50  (orig 0x8a7f50, setter)
void main_f_8a7f50(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_8a7f60  (orig 0x8a7f60, setter)
void main_f_8a7f60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_8a7f70  (orig 0x8a7f70, setter)
void main_f_8a7f70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; }

// sub_8a7f80  (orig 0x8a7f80, getter)
uint32_t main_f_8a7f80(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_8a7f90  (orig 0x8a7f90, getter)
uint32_t main_f_8a7f90(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_8a7fa0  (orig 0x8a7fa0, ret_only)
void main_f_8a7fa0() {}

// sub_8a8010  (orig 0x8a8010, getter)
uint8_t main_f_8a8010(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_8a8020  (orig 0x8a8020, straight)
void main_f_8a8020(void* a0) {
    *(uint8_t*)((char*)(a0) + 17) = (uint8_t)(1);
}

// sub_8a8110  (orig 0x8a8110, compare)
bool main_f_8a8110(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 51)) != (uint64_t)(0); }

// sub_8a8250  (orig 0x8a8250, ret_only)
void main_f_8a8250() {}

// sub_8a89b0  (orig 0x8a89b0, setter-chain)
void main_f_8a89b0(void* a0) { *(uint32_t*)((char*)(a0) + 40) = 0; *(uint8_t*)((char*)(a0) + 44) = 0; }

// sub_8a89c0  (orig 0x8a89c0, getter)
uint8_t main_f_8a89c0(void* a0) { return *(uint8_t*)((char*)(a0) + 44); }

// sub_8a8bb0  (orig 0x8a8bb0, setter-chain)
void main_f_8a8bb0(void* a0) { *(uint32_t*)((char*)(a0) + 40) = 0; *(uint8_t*)((char*)(a0) + 44) = 0; }

// sub_8a8bc0  (orig 0x8a8bc0, getter)
uint8_t main_f_8a8bc0(void* a0) { return *(uint8_t*)((char*)(a0) + 44); }

// sub_8a9060  (orig 0x8a9060, getter)
uint64_t main_f_8a9060(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8a9070  (orig 0x8a9070, getter)
uint64_t main_f_8a9070(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8a9080  (orig 0x8a9080, getter)
uint64_t main_f_8a9080(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_8a9300  (orig 0x8a9300, getter)
uint64_t main_f_8a9300(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_8a9310  (orig 0x8a9310, getter)
uint64_t main_f_8a9310(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_8a9880  (orig 0x8a9880, getter)
uint32_t main_f_8a9880(void* a0) { return *(uint32_t*)((char*)(a0) + 116); }

// sub_8aac00  (orig 0x8aac00, setter)
void main_f_8aac00(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 2) = a1; }

// sub_8aadb0  (orig 0x8aadb0, mov_ret)
uint32_t main_f_8aadb0() { return 1; }

// sub_8aadc0  (orig 0x8aadc0, mov_ret)
uint32_t main_f_8aadc0() { return 1; }

// sub_8aadd0  (orig 0x8aadd0, mov_ret)
uint32_t main_f_8aadd0() { return 1; }

// sub_8aade0  (orig 0x8aade0, mov_ret)
uint32_t main_f_8aade0() { return 1; }

// sub_8aadf0  (orig 0x8aadf0, ret_only)
void main_f_8aadf0() {}

// sub_8aae00  (orig 0x8aae00, ret_only)
void main_f_8aae00() {}

// sub_8aae10  (orig 0x8aae10, ret_only)
void main_f_8aae10() {}

// sub_8aae20  (orig 0x8aae20, ret_only)
void main_f_8aae20() {}

// sub_8aae30  (orig 0x8aae30, ret_only)
void main_f_8aae30() {}

// sub_8aae40  (orig 0x8aae40, mov_ret)
uint32_t main_f_8aae40() { return 1; }

// sub_8aae50  (orig 0x8aae50, mov_ret)
uint32_t main_f_8aae50() { return 1; }

// sub_8aae60  (orig 0x8aae60, ret_only)
void main_f_8aae60() {}

// sub_8aae70  (orig 0x8aae70, mov_ret)
uint32_t main_f_8aae70() { return 1; }

// sub_8aae80  (orig 0x8aae80, mov_ret)
uint32_t main_f_8aae80() { return 1; }

// sub_8aae90  (orig 0x8aae90, mov_ret)
uint32_t main_f_8aae90() { return 1; }

// sub_8aaea0  (orig 0x8aaea0, ret_only)
void main_f_8aaea0() {}

// sub_8aaeb0  (orig 0x8aaeb0, mov_ret)
uint32_t main_f_8aaeb0() { return 1; }

// sub_8aaec0  (orig 0x8aaec0, ret_only)
void main_f_8aaec0() {}

// sub_8aaed0  (orig 0x8aaed0, ret_only)
void main_f_8aaed0() {}

// sub_8aaee0  (orig 0x8aaee0, mov_ret)
uint32_t main_f_8aaee0() { return 1; }

// sub_8aaef0  (orig 0x8aaef0, ret_only)
void main_f_8aaef0() {}

// sub_8aaf00  (orig 0x8aaf00, ret_only)
void main_f_8aaf00() {}

// sub_8aaf10  (orig 0x8aaf10, mov_ret)
uint32_t main_f_8aaf10() { return 1; }

// sub_8aaf20  (orig 0x8aaf20, ret_only)
void main_f_8aaf20() {}

// sub_8aaf30  (orig 0x8aaf30, ret_only)
void main_f_8aaf30() {}

// sub_8aaf40  (orig 0x8aaf40, ret_only)
void main_f_8aaf40() {}

// sub_8aaf50  (orig 0x8aaf50, mov_ret)
uint32_t main_f_8aaf50() { return 1; }

// sub_8aaf60  (orig 0x8aaf60, mov_ret)
uint32_t main_f_8aaf60() { return 1; }

// sub_8aaf70  (orig 0x8aaf70, ret_only)
void main_f_8aaf70() {}

// sub_8aaf80  (orig 0x8aaf80, ret_only)
void main_f_8aaf80() {}

// sub_8aaf90  (orig 0x8aaf90, mov_ret)
uint32_t main_f_8aaf90() { return 1; }

// sub_8aafa0  (orig 0x8aafa0, ret_only)
void main_f_8aafa0() {}

// sub_8aafb0  (orig 0x8aafb0, ret_only)
void main_f_8aafb0() {}

// sub_8aafc0  (orig 0x8aafc0, ret_only)
void main_f_8aafc0() {}

// sub_8aafd0  (orig 0x8aafd0, mov_ret)
uint32_t main_f_8aafd0() { return 1; }

// sub_8aafe0  (orig 0x8aafe0, ret_only)
void main_f_8aafe0() {}

// sub_8aaff0  (orig 0x8aaff0, mov_ret)
uint32_t main_f_8aaff0() { return 1; }

// sub_8ab000  (orig 0x8ab000, ret_only)
void main_f_8ab000() {}

// sub_8ab010  (orig 0x8ab010, ret_only)
void main_f_8ab010() {}

// sub_8ab020  (orig 0x8ab020, ret_only)
void main_f_8ab020() {}

// sub_8ab030  (orig 0x8ab030, ret_only)
void main_f_8ab030() {}

// sub_8ab040  (orig 0x8ab040, ret_only)
void main_f_8ab040() {}

// sub_8ab050  (orig 0x8ab050, mov_ret)
uint32_t main_f_8ab050() { return 1; }

// sub_8ab060  (orig 0x8ab060, ret_only)
void main_f_8ab060() {}

// sub_8ab070  (orig 0x8ab070, mov_ret)
uint32_t main_f_8ab070() { return 1; }

// sub_8ab080  (orig 0x8ab080, ret_only)
void main_f_8ab080() {}

// sub_8ab090  (orig 0x8ab090, mov_ret)
uint32_t main_f_8ab090() { return 1; }

// sub_8ab0a0  (orig 0x8ab0a0, ret_only)
void main_f_8ab0a0() {}

// sub_8ab0b0  (orig 0x8ab0b0, mov_ret)
uint32_t main_f_8ab0b0() { return 1; }

// sub_8ab0c0  (orig 0x8ab0c0, ret_only)
void main_f_8ab0c0() {}

// sub_8ab0d0  (orig 0x8ab0d0, ret_only)
void main_f_8ab0d0() {}

// sub_8ab0e0  (orig 0x8ab0e0, ret_only)
void main_f_8ab0e0() {}

// sub_8ab0f0  (orig 0x8ab0f0, ret_only)
void main_f_8ab0f0() {}

// sub_8ab100  (orig 0x8ab100, ret_only)
void main_f_8ab100() {}

// sub_8ab110  (orig 0x8ab110, ret_only)
void main_f_8ab110() {}

// sub_8ab120  (orig 0x8ab120, mov_ret)
uint32_t main_f_8ab120() { return 1; }

// sub_8ab130  (orig 0x8ab130, mov_ret)
uint32_t main_f_8ab130() { return 1; }

// sub_8ab140  (orig 0x8ab140, mov_ret)
uint32_t main_f_8ab140() { return 1; }

// sub_8ab150  (orig 0x8ab150, ret_only)
void main_f_8ab150() {}

// sub_8ab160  (orig 0x8ab160, ret_only)
void main_f_8ab160() {}

// sub_8ab170  (orig 0x8ab170, mov_ret)
uint32_t main_f_8ab170() { return 1; }

// sub_8ab180  (orig 0x8ab180, ret_only)
void main_f_8ab180() {}

// sub_8ab190  (orig 0x8ab190, ret_only)
void main_f_8ab190() {}

// sub_8ab1a0  (orig 0x8ab1a0, mov_ret)
uint32_t main_f_8ab1a0() { return 1; }

// sub_8ab1b0  (orig 0x8ab1b0, ret_only)
void main_f_8ab1b0() {}

// sub_8ab1c0  (orig 0x8ab1c0, mov_ret)
uint32_t main_f_8ab1c0() { return 1; }

// sub_8ab1d0  (orig 0x8ab1d0, ret_only)
void main_f_8ab1d0() {}

// sub_8ab1e0  (orig 0x8ab1e0, mov_ret)
uint32_t main_f_8ab1e0() { return 1; }

// sub_8ab1f0  (orig 0x8ab1f0, ret_only)
void main_f_8ab1f0() {}

// sub_8ab200  (orig 0x8ab200, mov_ret)
uint32_t main_f_8ab200() { return 1; }

// sub_8ab210  (orig 0x8ab210, ret_only)
void main_f_8ab210() {}

// sub_8ab220  (orig 0x8ab220, mov_ret)
uint32_t main_f_8ab220() { return 1; }

// sub_8ab230  (orig 0x8ab230, ret_only)
void main_f_8ab230() {}

// sub_8ab240  (orig 0x8ab240, mov_ret)
uint32_t main_f_8ab240() { return 1; }

// sub_8ab250  (orig 0x8ab250, ret_only)
void main_f_8ab250() {}

// sub_8ab260  (orig 0x8ab260, mov_ret)
uint32_t main_f_8ab260() { return 1; }

// sub_8ab270  (orig 0x8ab270, ret_only)
void main_f_8ab270() {}

// sub_8ab280  (orig 0x8ab280, ret_only)
void main_f_8ab280() {}

// sub_8ab290  (orig 0x8ab290, mov_ret)
uint32_t main_f_8ab290() { return 1; }

// sub_8ab2a0  (orig 0x8ab2a0, ret_only)
void main_f_8ab2a0() {}

// sub_8ab2b0  (orig 0x8ab2b0, mov_ret)
uint32_t main_f_8ab2b0() { return 1; }

// sub_8ab2c0  (orig 0x8ab2c0, ret_only)
void main_f_8ab2c0() {}

// sub_8ab2d0  (orig 0x8ab2d0, mov_ret)
uint32_t main_f_8ab2d0() { return 1; }

// sub_8ab2e0  (orig 0x8ab2e0, ret_only)
void main_f_8ab2e0() {}

// sub_8ab2f0  (orig 0x8ab2f0, mov_ret)
uint32_t main_f_8ab2f0() { return 1; }

// sub_8ab300  (orig 0x8ab300, ret_only)
void main_f_8ab300() {}

// sub_8ab310  (orig 0x8ab310, mov_ret)
uint32_t main_f_8ab310() { return 1; }

// sub_8ab320  (orig 0x8ab320, ret_only)
void main_f_8ab320() {}

// sub_8ab330  (orig 0x8ab330, mov_ret)
uint32_t main_f_8ab330() { return 1; }

// sub_8ab340  (orig 0x8ab340, ret_only)
void main_f_8ab340() {}

// sub_8ab350  (orig 0x8ab350, mov_ret)
uint32_t main_f_8ab350() { return 1; }

// sub_8ab360  (orig 0x8ab360, ret_only)
void main_f_8ab360() {}

// sub_8ab370  (orig 0x8ab370, mov_ret)
uint32_t main_f_8ab370() { return 1; }

// sub_8ab380  (orig 0x8ab380, ret_only)
void main_f_8ab380() {}

// sub_8ab390  (orig 0x8ab390, mov_ret)
uint32_t main_f_8ab390() { return 1; }

// sub_8ab3a0  (orig 0x8ab3a0, ret_only)
void main_f_8ab3a0() {}

// sub_8ab3b0  (orig 0x8ab3b0, ret_only)
void main_f_8ab3b0() {}

// sub_8ab3c0  (orig 0x8ab3c0, mov_ret)
uint32_t main_f_8ab3c0() { return 1; }

// sub_8ab3d0  (orig 0x8ab3d0, ret_only)
void main_f_8ab3d0() {}

// sub_8ab3e0  (orig 0x8ab3e0, mov_ret)
uint32_t main_f_8ab3e0() { return 1; }

// sub_8ab3f0  (orig 0x8ab3f0, ret_only)
void main_f_8ab3f0() {}

// sub_8ab400  (orig 0x8ab400, ret_only)
void main_f_8ab400() {}

// sub_8ab410  (orig 0x8ab410, mov_ret)
uint32_t main_f_8ab410() { return 1; }

// sub_8ab420  (orig 0x8ab420, ret_only)
void main_f_8ab420() {}

// sub_8ab430  (orig 0x8ab430, mov_ret)
uint32_t main_f_8ab430() { return 1; }

// sub_8ab440  (orig 0x8ab440, ret_only)
void main_f_8ab440() {}

// sub_8ab450  (orig 0x8ab450, mov_ret)
uint32_t main_f_8ab450() { return 1; }

// sub_8ab460  (orig 0x8ab460, ret_only)
void main_f_8ab460() {}

// sub_8ab470  (orig 0x8ab470, mov_ret)
uint32_t main_f_8ab470() { return 1; }

// sub_8ab480  (orig 0x8ab480, ret_only)
void main_f_8ab480() {}

// sub_8ab490  (orig 0x8ab490, mov_ret)
uint32_t main_f_8ab490() { return 1; }

// sub_8ab4a0  (orig 0x8ab4a0, ret_only)
void main_f_8ab4a0() {}

// sub_8ab4b0  (orig 0x8ab4b0, mov_ret)
uint32_t main_f_8ab4b0() { return 1; }

// sub_8ab4c0  (orig 0x8ab4c0, ret_only)
void main_f_8ab4c0() {}

// sub_8ab4d0  (orig 0x8ab4d0, mov_ret)
uint32_t main_f_8ab4d0() { return 1; }

// sub_8ab4e0  (orig 0x8ab4e0, ret_only)
void main_f_8ab4e0() {}

// sub_8ab4f0  (orig 0x8ab4f0, mov_ret)
uint32_t main_f_8ab4f0() { return 1; }

// sub_8ab500  (orig 0x8ab500, mov_ret)
uint32_t main_f_8ab500() { return 0; }

// sub_8ab510  (orig 0x8ab510, mov_ret)
uint32_t main_f_8ab510() { return 0; }

// sub_8ab520  (orig 0x8ab520, mov_ret)
uint32_t main_f_8ab520() { return 0; }

// sub_8ab530  (orig 0x8ab530, mov_ret)
uint32_t main_f_8ab530() { return 0; }

// sub_8ab540  (orig 0x8ab540, ret_only)
void main_f_8ab540() {}

// sub_8ab550  (orig 0x8ab550, ret_only)
void main_f_8ab550() {}

// sub_8ab560  (orig 0x8ab560, mov_ret)
uint32_t main_f_8ab560() { return 1; }

// sub_8ab570  (orig 0x8ab570, ret_only)
void main_f_8ab570() {}

// sub_8ab580  (orig 0x8ab580, ret_only)
void main_f_8ab580() {}

// sub_8ab590  (orig 0x8ab590, ret_only)
void main_f_8ab590() {}

// sub_8ab5a0  (orig 0x8ab5a0, mov_ret)
uint32_t main_f_8ab5a0() { return 1; }

// sub_8ab5b0  (orig 0x8ab5b0, ret_only)
void main_f_8ab5b0() {}

// sub_8ab5c0  (orig 0x8ab5c0, mov_ret)
uint32_t main_f_8ab5c0() { return 1; }

// sub_8ab5d0  (orig 0x8ab5d0, ret_only)
void main_f_8ab5d0() {}

// sub_8ab5e0  (orig 0x8ab5e0, mov_ret)
uint32_t main_f_8ab5e0() { return 1; }

// sub_8ab5f0  (orig 0x8ab5f0, ret_only)
void main_f_8ab5f0() {}

// sub_8ab600  (orig 0x8ab600, mov_ret)
uint32_t main_f_8ab600() { return 1; }

// sub_8ab610  (orig 0x8ab610, ret_only)
void main_f_8ab610() {}

// sub_8ab620  (orig 0x8ab620, mov_ret)
uint32_t main_f_8ab620() { return 1; }

// sub_8ab630  (orig 0x8ab630, ret_only)
void main_f_8ab630() {}

// sub_8ab640  (orig 0x8ab640, mov_ret)
uint32_t main_f_8ab640() { return 1; }

// sub_8ab650  (orig 0x8ab650, ret_only)
void main_f_8ab650() {}

// sub_8ab660  (orig 0x8ab660, mov_ret)
uint32_t main_f_8ab660() { return 1; }

// sub_8ab670  (orig 0x8ab670, ret_only)
void main_f_8ab670() {}

// sub_8ab680  (orig 0x8ab680, mov_ret)
uint32_t main_f_8ab680() { return 1; }

// sub_8ab690  (orig 0x8ab690, ret_only)
void main_f_8ab690() {}

// sub_8ab6a0  (orig 0x8ab6a0, mov_ret)
uint32_t main_f_8ab6a0() { return 1; }

// sub_8ab6b0  (orig 0x8ab6b0, ret_only)
void main_f_8ab6b0() {}

// sub_8ab6c0  (orig 0x8ab6c0, mov_ret)
uint32_t main_f_8ab6c0() { return 1; }

// sub_8ab6d0  (orig 0x8ab6d0, ret_only)
void main_f_8ab6d0() {}

// sub_8ab6e0  (orig 0x8ab6e0, mov_ret)
uint32_t main_f_8ab6e0() { return 1; }

// sub_8ab6f0  (orig 0x8ab6f0, ret_only)
void main_f_8ab6f0() {}

// sub_8ab700  (orig 0x8ab700, mov_ret)
uint32_t main_f_8ab700() { return 0; }

// sub_8ab710  (orig 0x8ab710, ret_only)
void main_f_8ab710() {}

// sub_8ab720  (orig 0x8ab720, ret_only)
void main_f_8ab720() {}

// sub_8ab730  (orig 0x8ab730, ret_only)
void main_f_8ab730() {}

// sub_8ab740  (orig 0x8ab740, ret_only)
void main_f_8ab740() {}

// sub_8ab750  (orig 0x8ab750, ret_only)
void main_f_8ab750() {}

// sub_8ab760  (orig 0x8ab760, ret_only)
void main_f_8ab760() {}

// sub_8ab770  (orig 0x8ab770, ret_only)
void main_f_8ab770() {}

// sub_8ab780  (orig 0x8ab780, mov_ret)
uint32_t main_f_8ab780() { return 1; }

// sub_8ab790  (orig 0x8ab790, ret_only)
void main_f_8ab790() {}

// sub_8ab7a0  (orig 0x8ab7a0, mov_ret)
uint32_t main_f_8ab7a0() { return 0; }

// sub_8ab7b0  (orig 0x8ab7b0, ret_only)
void main_f_8ab7b0() {}

// sub_8ab7c0  (orig 0x8ab7c0, ret_only)
void main_f_8ab7c0() {}

// sub_8ab7d0  (orig 0x8ab7d0, mov_ret)
uint32_t main_f_8ab7d0() { return 1; }

// sub_8ab7e0  (orig 0x8ab7e0, ret_only)
void main_f_8ab7e0() {}

// sub_8ab7f0  (orig 0x8ab7f0, ret_only)
void main_f_8ab7f0() {}

// sub_8ab800  (orig 0x8ab800, mov_ret)
uint32_t main_f_8ab800() { return 1; }

// sub_8ab810  (orig 0x8ab810, mov_ret)
uint32_t main_f_8ab810() { return 1; }

// sub_8ab820  (orig 0x8ab820, ret_only)
void main_f_8ab820() {}

// sub_8ab830  (orig 0x8ab830, ret_only)
void main_f_8ab830() {}

// sub_8ab840  (orig 0x8ab840, mov_ret)
uint32_t main_f_8ab840() { return 1; }

// sub_8ab850  (orig 0x8ab850, ret_only)
void main_f_8ab850() {}

// sub_8ab860  (orig 0x8ab860, mov_ret)
uint32_t main_f_8ab860() { return 1; }

// sub_8ab870  (orig 0x8ab870, ret_only)
void main_f_8ab870() {}

// sub_8ab880  (orig 0x8ab880, mov_ret)
uint32_t main_f_8ab880() { return 1; }

// sub_8ab890  (orig 0x8ab890, ret_only)
void main_f_8ab890() {}

// sub_8ab8a0  (orig 0x8ab8a0, mov_ret)
uint32_t main_f_8ab8a0() { return 1; }

// sub_8ab8b0  (orig 0x8ab8b0, ret_only)
void main_f_8ab8b0() {}

// sub_8ab8c0  (orig 0x8ab8c0, ret_only)
void main_f_8ab8c0() {}

// sub_8ab8d0  (orig 0x8ab8d0, mov_ret)
uint32_t main_f_8ab8d0() { return 1; }

// sub_8ab8e0  (orig 0x8ab8e0, ret_only)
void main_f_8ab8e0() {}

// sub_8ab8f0  (orig 0x8ab8f0, ret_only)
void main_f_8ab8f0() {}

// sub_8ab900  (orig 0x8ab900, mov_ret)
uint32_t main_f_8ab900() { return 0; }

// sub_8ab910  (orig 0x8ab910, ret_only)
void main_f_8ab910() {}

// sub_8ab920  (orig 0x8ab920, ret_only)
void main_f_8ab920() {}

// sub_8ab930  (orig 0x8ab930, ret_only)
void main_f_8ab930() {}

// sub_8ab940  (orig 0x8ab940, ret_only)
void main_f_8ab940() {}

// sub_8ab950  (orig 0x8ab950, ret_only)
void main_f_8ab950() {}

// sub_8ab960  (orig 0x8ab960, mov_ret)
uint32_t main_f_8ab960() { return 1; }

// sub_8ab970  (orig 0x8ab970, mov_ret)
uint32_t main_f_8ab970() { return 0; }

// sub_8ab980  (orig 0x8ab980, ret_only)
void main_f_8ab980() {}

// sub_8ab990  (orig 0x8ab990, mov_ret)
uint32_t main_f_8ab990() { return 1; }

// sub_8ab9a0  (orig 0x8ab9a0, ret_only)
void main_f_8ab9a0() {}

// sub_8ab9b0  (orig 0x8ab9b0, ret_only)
void main_f_8ab9b0() {}

// sub_8ab9c0  (orig 0x8ab9c0, mov_ret)
uint32_t main_f_8ab9c0() { return 1; }

// sub_8ab9d0  (orig 0x8ab9d0, ret_only)
void main_f_8ab9d0() {}

// sub_8ab9e0  (orig 0x8ab9e0, mov_ret)
uint32_t main_f_8ab9e0() { return 1; }

// sub_8ab9f0  (orig 0x8ab9f0, ret_only)
void main_f_8ab9f0() {}

// sub_8aba00  (orig 0x8aba00, mov_ret)
uint32_t main_f_8aba00() { return 1; }

// sub_8aba10  (orig 0x8aba10, ret_only)
void main_f_8aba10() {}

// sub_8aba20  (orig 0x8aba20, mov_ret)
uint32_t main_f_8aba20() { return 1; }

// sub_8aba30  (orig 0x8aba30, ret_only)
void main_f_8aba30() {}

// sub_8aba40  (orig 0x8aba40, mov_ret)
uint32_t main_f_8aba40() { return 1; }

// sub_8aba50  (orig 0x8aba50, ret_only)
void main_f_8aba50() {}

// sub_8aba60  (orig 0x8aba60, ret_only)
void main_f_8aba60() {}

// sub_8aba70  (orig 0x8aba70, mov_ret)
uint32_t main_f_8aba70() { return 1; }

// sub_8aba80  (orig 0x8aba80, ret_only)
void main_f_8aba80() {}

// sub_8aba90  (orig 0x8aba90, mov_ret)
uint32_t main_f_8aba90() { return 1; }

// sub_8abaa0  (orig 0x8abaa0, ret_only)
void main_f_8abaa0() {}

// sub_8abab0  (orig 0x8abab0, mov_ret)
uint32_t main_f_8abab0() { return 1; }

// sub_8abac0  (orig 0x8abac0, ret_only)
void main_f_8abac0() {}

// sub_8abad0  (orig 0x8abad0, mov_ret)
uint32_t main_f_8abad0() { return 1; }

// sub_8abae0  (orig 0x8abae0, ret_only)
void main_f_8abae0() {}

// sub_8abaf0  (orig 0x8abaf0, mov_ret)
uint32_t main_f_8abaf0() { return 1; }

// sub_8abb00  (orig 0x8abb00, ret_only)
void main_f_8abb00() {}

// sub_8abb10  (orig 0x8abb10, ret_only)
void main_f_8abb10() {}

// sub_8abb20  (orig 0x8abb20, mov_ret)
uint32_t main_f_8abb20() { return 1; }

// sub_8abb30  (orig 0x8abb30, ret_only)
void main_f_8abb30() {}

// sub_8abb40  (orig 0x8abb40, mov_ret)
uint32_t main_f_8abb40() { return 1; }

// sub_8abb50  (orig 0x8abb50, getter)
uint32_t main_f_8abb50(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_8abb60  (orig 0x8abb60, ret_only)
void main_f_8abb60() {}

// sub_8abb70  (orig 0x8abb70, mov_ret)
uint32_t main_f_8abb70() { return 1; }

// sub_8abb80  (orig 0x8abb80, ret_only)
void main_f_8abb80() {}

// sub_8abb90  (orig 0x8abb90, mov_ret)
uint32_t main_f_8abb90() { return 1; }

// sub_8abba0  (orig 0x8abba0, ret_only)
void main_f_8abba0() {}

// sub_8abbb0  (orig 0x8abbb0, ret_only)
void main_f_8abbb0() {}

// sub_8abbc0  (orig 0x8abbc0, ret_only)
void main_f_8abbc0() {}

// sub_8abf40  (orig 0x8abf40, ret_only)
void main_f_8abf40() {}

// sub_8abf50  (orig 0x8abf50, ret_only)
void main_f_8abf50() {}

// sub_8abf60  (orig 0x8abf60, ret_only)
void main_f_8abf60() {}

// sub_8abf70  (orig 0x8abf70, ret_only)
void main_f_8abf70() {}

// sub_8ac690  (orig 0x8ac690, ret_only)
void main_f_8ac690() {}

// sub_8ac6a0  (orig 0x8ac6a0, ret_only)
void main_f_8ac6a0() {}

// sub_8ac6b0  (orig 0x8ac6b0, ret_only)
void main_f_8ac6b0() {}

// sub_8ac6c0  (orig 0x8ac6c0, ret_only)
void main_f_8ac6c0() {}

// sub_8ac9e0  (orig 0x8ac9e0, setter-chain)
void main_f_8ac9e0(void* a0, uint8_t a1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 32) = 0; *(uint8_t*)((char*)(a0) + 36) = 0; *(uint8_t*)((char*)(a0) + 37) = a1; *(uint32_t*)((char*)(a0) + 40) = a2; }

// sub_8acb50  (orig 0x8acb50, getter)
uint8_t main_f_8acb50(void* a0) { return *(uint8_t*)((char*)(a0) + 36); }

// sub_8acbe0  (orig 0x8acbe0, getter)
uint8_t main_f_8acbe0(void* a0) { return *(uint8_t*)((char*)(a0) + 48); }

// sub_8ad930  (orig 0x8ad930, compare)
bool main_f_8ad930(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 9520L)) > (int64_t)(2); }

// sub_8ad940  (orig 0x8ad940, compare)
bool main_f_8ad940(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 9520L)) == (uint64_t)(8); }

// sub_8af080  (orig 0x8af080, compare)
bool main_f_8af080(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 224)) == (uint64_t)(1); }

// sub_8af850  (orig 0x8af850, compare)
bool main_f_8af850(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 248)) != (uint64_t)(5); }

// sub_8afc30  (orig 0x8afc30, compare)
bool main_f_8afc30(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 11304L)) != (uint64_t)(0); }

// sub_8b0010  (orig 0x8b0010, compare)
bool main_f_8b0010(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 13384L)) != (uint64_t)(0); }

// sub_8b0380  (orig 0x8b0380, setter)
void main_f_8b0380(void* a0) { *(uint64_t*)((char*)(a0) + 13392L) = 0; }

// sub_8b09f0  (orig 0x8b09f0, setter)
void main_f_8b09f0(void* a0) { *(uint32_t*)((char*)(a0) + 13400L) = 0; }

// sub_8b1480  (orig 0x8b1480, ret_only)
void main_f_8b1480() {}

// sub_8b1490  (orig 0x8b1490, ret_only)
void main_f_8b1490() {}

// sub_8b14a0  (orig 0x8b14a0, ret_only)
void main_f_8b14a0() {}

// sub_8b14b0  (orig 0x8b14b0, straight)
void main_f_8b14b0(void* a0) {
    *(uint8_t*)((char*)(a0) + 208) = (uint8_t)(1);
}

// sub_8b14c0  (orig 0x8b14c0, straight)
void main_f_8b14c0(void* a0) {
    *(uint8_t*)((char*)(a0) + 208) = (uint8_t)(1);
}

// sub_8b14d0  (orig 0x8b14d0, straight)
void main_f_8b14d0(void* a0) {
    *(uint8_t*)((char*)(a0) + 208) = (uint8_t)(1);
}

// sub_8b1760  (orig 0x8b1760, ret_only)
void main_f_8b1760() {}

// sub_8b1770  (orig 0x8b1770, ret_only)
void main_f_8b1770() {}

// sub_8b1780  (orig 0x8b1780, ret_only)
void main_f_8b1780() {}

// sub_8b1790  (orig 0x8b1790, ret_only)
void main_f_8b1790() {}

// sub_8b2660  (orig 0x8b2660, ret_only)
void main_f_8b2660() {}

// sub_8b2710  (orig 0x8b2710, ret_only)
void main_f_8b2710() {}

// sub_8b2720  (orig 0x8b2720, struct-copy)
void main_f_8b2720(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8b2740  (orig 0x8b2740, struct-copy)
void main_f_8b2740(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8b2840  (orig 0x8b2840, ret_only)
void main_f_8b2840() {}

// sub_8b2850  (orig 0x8b2850, struct-copy)
void main_f_8b2850(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8b2870  (orig 0x8b2870, struct-copy)
void main_f_8b2870(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8b2c60  (orig 0x8b2c60, getter)
uint64_t main_f_8b2c60(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_8b5040  (orig 0x8b5040, setter)
void main_f_8b5040(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8b55c0  (orig 0x8b55c0, mov_ret)
uint32_t main_f_8b55c0() { return 1; }

// sub_8b5670  (orig 0x8b5670, getter)
uint32_t main_f_8b5670(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8b5680  (orig 0x8b5680, mov_ret)
uint32_t main_f_8b5680() { return 1; }

// sub_8b5b60  (orig 0x8b5b60, setter)
void main_f_8b5b60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8b5cc0  (orig 0x8b5cc0, setter)
void main_f_8b5cc0(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8b6240  (orig 0x8b6240, mov_ret)
uint32_t main_f_8b6240() { return 1; }

// sub_8b62f0  (orig 0x8b62f0, getter)
uint32_t main_f_8b62f0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8b6300  (orig 0x8b6300, mov_ret)
uint32_t main_f_8b6300() { return 1; }

// sub_8b6910  (orig 0x8b6910, setter)
void main_f_8b6910(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_8b7230  (orig 0x8b7230, mov_ret)
uint32_t main_f_8b7230() { return 1; }

// sub_8b72e0  (orig 0x8b72e0, getter)
uint32_t main_f_8b72e0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_8b72f0  (orig 0x8b72f0, mov_ret)
uint32_t main_f_8b72f0() { return 1; }

// sub_8b77e0  (orig 0x8b77e0, setter)
void main_f_8b77e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8b7940  (orig 0x8b7940, setter)
void main_f_8b7940(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8b7ec0  (orig 0x8b7ec0, mov_ret)
uint32_t main_f_8b7ec0() { return 1; }

// sub_8b7f70  (orig 0x8b7f70, getter)
uint32_t main_f_8b7f70(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8b7f80  (orig 0x8b7f80, mov_ret)
uint32_t main_f_8b7f80() { return 1; }

// sub_8b8570  (orig 0x8b8570, setter)
void main_f_8b8570(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_8b8c70  (orig 0x8b8c70, mov_ret)
uint32_t main_f_8b8c70() { return 1; }

// sub_8b8d20  (orig 0x8b8d20, getter)
uint32_t main_f_8b8d20(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_8b8d30  (orig 0x8b8d30, mov_ret)
uint32_t main_f_8b8d30() { return 1; }

// sub_8b9290  (orig 0x8b9290, setter)
void main_f_8b9290(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8b9810  (orig 0x8b9810, mov_ret)
uint32_t main_f_8b9810() { return 1; }

// sub_8b98c0  (orig 0x8b98c0, getter)
uint32_t main_f_8b98c0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8b98d0  (orig 0x8b98d0, mov_ret)
uint32_t main_f_8b98d0() { return 1; }

// sub_8b9d60  (orig 0x8b9d60, setter)
void main_f_8b9d60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8ba260  (orig 0x8ba260, mov_ret)
uint32_t main_f_8ba260() { return 1; }

// sub_8ba310  (orig 0x8ba310, getter)
uint32_t main_f_8ba310(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8ba320  (orig 0x8ba320, mov_ret)
uint32_t main_f_8ba320() { return 1; }

// sub_8ba880  (orig 0x8ba880, setter)
void main_f_8ba880(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_8bb050  (orig 0x8bb050, mov_ret)
uint32_t main_f_8bb050() { return 1; }

// sub_8bb100  (orig 0x8bb100, getter)
uint32_t main_f_8bb100(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_8bb110  (orig 0x8bb110, mov_ret)
uint32_t main_f_8bb110() { return 1; }

// sub_8bba10  (orig 0x8bba10, setter)
void main_f_8bba10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8bc980  (orig 0x8bc980, mov_ret)
uint32_t main_f_8bc980() { return 1; }

// sub_8bca30  (orig 0x8bca30, getter)
uint32_t main_f_8bca30(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8bca40  (orig 0x8bca40, mov_ret)
uint32_t main_f_8bca40() { return 1; }

// sub_8bcf20  (orig 0x8bcf20, setter)
void main_f_8bcf20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8bd080  (orig 0x8bd080, setter)
void main_f_8bd080(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8bd600  (orig 0x8bd600, mov_ret)
uint32_t main_f_8bd600() { return 1; }

// sub_8bd6b0  (orig 0x8bd6b0, getter)
uint32_t main_f_8bd6b0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8bd6c0  (orig 0x8bd6c0, mov_ret)
uint32_t main_f_8bd6c0() { return 1; }

// sub_8bdea0  (orig 0x8bdea0, setter)
void main_f_8bdea0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 112) = a1; }

// sub_8bf440  (orig 0x8bf440, mov_ret)
uint32_t main_f_8bf440() { return 1; }

// sub_8bf4f0  (orig 0x8bf4f0, getter)
uint32_t main_f_8bf4f0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_8bf500  (orig 0x8bf500, mov_ret)
uint32_t main_f_8bf500() { return 1; }

// sub_8bfa90  (orig 0x8bfa90, ret_only)
void main_f_8bfa90() {}

// sub_8bfaa0  (orig 0x8bfaa0, ret_only)
void main_f_8bfaa0() {}

// sub_8c0040  (orig 0x8c0040, getter)
uint8_t main_f_8c0040(void* a0) { return *(uint8_t*)((char*)(a0) + 136); }

// sub_8c0050  (orig 0x8c0050, ptr_add)
void* main_f_8c0050(void* a0) { return (char*)a0 + 116; }

// sub_8c1750  (orig 0x8c1750, getter)
uint8_t main_f_8c1750(void* a0) { return *(uint8_t*)((char*)(a0) + 196); }

// sub_8c1760  (orig 0x8c1760, getter)
uint32_t main_f_8c1760(void* a0) { return *(uint32_t*)((char*)(a0) + 188); }

// sub_8c1d30  (orig 0x8c1d30, ptr_add)
void* main_f_8c1d30(void* a0) { return (char*)a0 + 172; }

// sub_8c1e70  (orig 0x8c1e70, ret_only)
void main_f_8c1e70() {}

// sub_8c1e80  (orig 0x8c1e80, ret_only)
void main_f_8c1e80() {}

// sub_8c1e90  (orig 0x8c1e90, ret_only)
void main_f_8c1e90() {}

// sub_8c1ea0  (orig 0x8c1ea0, ret_only)
void main_f_8c1ea0() {}

// sub_8c1ee0  (orig 0x8c1ee0, ptr_add)
void* main_f_8c1ee0(void* a0) { return (char*)a0 + 112; }

// sub_8c1ef0  (orig 0x8c1ef0, ptr_add)
void* main_f_8c1ef0(void* a0) { return (char*)a0 + 656; }

// sub_8c1f00  (orig 0x8c1f00, getter)
uint64_t main_f_8c1f00(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8c1f10  (orig 0x8c1f10, getter)
uint64_t main_f_8c1f10(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_8c1f30  (orig 0x8c1f30, getter)
uint64_t main_f_8c1f30(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_8c1f40  (orig 0x8c1f40, getter)
uint64_t main_f_8c1f40(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_8c1f50  (orig 0x8c1f50, getter)
uint64_t main_f_8c1f50(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_8c2040  (orig 0x8c2040, getter)
uint8_t main_f_8c2040(void* a0) { return *(uint8_t*)((char*)(a0) + 136); }

// sub_8c2050  (orig 0x8c2050, getter)
uint32_t main_f_8c2050(void* a0) { return *(uint32_t*)((char*)(a0) + 140); }

// sub_8c2060  (orig 0x8c2060, getter)
uint16_t main_f_8c2060(void* a0) { return *(uint16_t*)((char*)(a0) + 144); }

// sub_8c2610  (orig 0x8c2610, setter)
void main_f_8c2610(void* a0) { *(uint8_t*)((char*)(a0) + 648) = 0; }

// sub_8c2620  (orig 0x8c2620, straight)
void main_f_8c2620(void* a0) {
    *(uint8_t*)((char*)(a0) + 648) = (uint8_t)(1);
}

// sub_8c2630  (orig 0x8c2630, getter)
uint8_t main_f_8c2630(void* a0) { return *(uint8_t*)((char*)(a0) + 648); }

// sub_8c5b00  (orig 0x8c5b00, mov_ret)
uint64_t main_f_8c5b00() { return 0; }

// sub_8c5b10  (orig 0x8c5b10, mov_ret)
uint64_t main_f_8c5b10() { return 0; }

// sub_8c67d0  (orig 0x8c67d0, ret_only)
void main_f_8c67d0() {}

// sub_8c67e0  (orig 0x8c67e0, ret_only)
void main_f_8c67e0() {}

// sub_8c6810  (orig 0x8c6810, getter)
uint8_t main_f_8c6810(void* a0) { return *(uint8_t*)((char*)(a0) + 100); }

// sub_8c6820  (orig 0x8c6820, getter)
uint32_t main_f_8c6820(void* a0) { return *(uint32_t*)((char*)(a0) + 92); }

// sub_8c6ea0  (orig 0x8c6ea0, getter)
uint8_t main_f_8c6ea0(void* a0) { return *(uint8_t*)((char*)(a0) + 418); }

// sub_8c82c0  (orig 0x8c82c0, getter)
uint8_t main_f_8c82c0(void* a0) { return *(uint8_t*)((char*)(a0) + 417); }

// sub_8c82d0  (orig 0x8c82d0, getter)
uint32_t main_f_8c82d0(void* a0) { return *(uint32_t*)((char*)(a0) + 408); }

// sub_8c8c70  (orig 0x8c8c70, getter)
uint8_t main_f_8c8c70(void* a0) { return *(uint8_t*)((char*)(a0) + 196); }

// sub_8c8c80  (orig 0x8c8c80, ptr_add)
void* main_f_8c8c80(void* a0) { return (char*)a0 + 248; }

// sub_8ce700  (orig 0x8ce700, ret_only)
void main_f_8ce700() {}

// sub_8ce710  (orig 0x8ce710, ret_only)
void main_f_8ce710() {}

// sub_8ce740  (orig 0x8ce740, ret_only)
void main_f_8ce740() {}

// sub_8cf5c0  (orig 0x8cf5c0, mov_ret)
uint32_t main_f_8cf5c0() { return 12; }

// sub_8cf5d0  (orig 0x8cf5d0, indexed-getter)
uint64_t main_f_8cf5d0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_8cf5e0  (orig 0x8cf5e0, indexed-getter)
uint64_t main_f_8cf5e0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_8cfb90  (orig 0x8cfb90, mov_ret)
uint32_t main_f_8cfb90() { return 1; }

// sub_8cfd00  (orig 0x8cfd00, ret_only)
void main_f_8cfd00() {}

// sub_8d07d0  (orig 0x8d07d0, getter)
uint64_t main_f_8d07d0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8d0940  (orig 0x8d0940, mov_ret)
uint32_t main_f_8d0940() { return 1; }

// sub_8d0950  (orig 0x8d0950, indexed-getter)
uint64_t main_f_8d0950(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_8d0960  (orig 0x8d0960, indexed-getter)
uint64_t main_f_8d0960(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_8d5c00  (orig 0x8d5c00, ret_only)
void main_f_8d5c00() {}

// sub_8d7c80  (orig 0x8d7c80, getter)
uint32_t main_f_8d7c80(void* a0) { return *(uint32_t*)((char*)(a0) + 1716); }

// sub_8d8700  (orig 0x8d8700, ret_only)
void main_f_8d8700() {}

// sub_8d8710  (orig 0x8d8710, copy2)
void main_f_8d8710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8720  (orig 0x8d8720, copy2)
void main_f_8d8720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8750  (orig 0x8d8750, ret_only)
void main_f_8d8750() {}

// sub_8d8760  (orig 0x8d8760, copy2)
void main_f_8d8760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8770  (orig 0x8d8770, copy2)
void main_f_8d8770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8800  (orig 0x8d8800, ret_only)
void main_f_8d8800() {}

// sub_8d8810  (orig 0x8d8810, copy2)
void main_f_8d8810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8820  (orig 0x8d8820, copy2)
void main_f_8d8820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8da660  (orig 0x8da660, ret_only)
void main_f_8da660() {}

// sub_8da670  (orig 0x8da670, copy2)
void main_f_8da670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8da680  (orig 0x8da680, copy2)
void main_f_8da680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8dbb90  (orig 0x8dbb90, ret_only)
void main_f_8dbb90() {}

// sub_8dc120  (orig 0x8dc120, ret_only)
void main_f_8dc120() {}

// sub_8dc670  (orig 0x8dc670, ret_only)
void main_f_8dc670() {}

// sub_8dc9f0  (orig 0x8dc9f0, ret_only)
void main_f_8dc9f0() {}

// sub_8dd190  (orig 0x8dd190, ret_only)
void main_f_8dd190() {}

// sub_8dd7e0  (orig 0x8dd7e0, ret_only)
void main_f_8dd7e0() {}

// sub_8ddba0  (orig 0x8ddba0, ret_only)
void main_f_8ddba0() {}

// sub_8e04b0  (orig 0x8e04b0, compare)
bool main_f_8e04b0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 392)) != (uint64_t)(0); }

// sub_8e16c0  (orig 0x8e16c0, ret_only)
void main_f_8e16c0() {}

// sub_8e16d0  (orig 0x8e16d0, copy2)
void main_f_8e16d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e16e0  (orig 0x8e16e0, copy2)
void main_f_8e16e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e2200  (orig 0x8e2200, mov_ret)
uint32_t main_f_8e2200() { return 1; }

// sub_8e2330  (orig 0x8e2330, ret_only)
void main_f_8e2330() {}

// sub_8e4150  (orig 0x8e4150, mov_ret)
uint32_t main_f_8e4150() { return 1; }

// sub_8e4a50  (orig 0x8e4a50, ret_only)
void main_f_8e4a50() {}

// sub_8e54e0  (orig 0x8e54e0, getter)
uint64_t main_f_8e54e0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8e5650  (orig 0x8e5650, mov_ret)
uint32_t main_f_8e5650() { return 1; }

// sub_8e5660  (orig 0x8e5660, indexed-getter)
uint64_t main_f_8e5660(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_8e5670  (orig 0x8e5670, indexed-getter)
uint64_t main_f_8e5670(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_8e84a0  (orig 0x8e84a0, ret_only)
void main_f_8e84a0() {}

// sub_8e84b0  (orig 0x8e84b0, copy2)
void main_f_8e84b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e84c0  (orig 0x8e84c0, copy2)
void main_f_8e84c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e8530  (orig 0x8e8530, ret_only)
void main_f_8e8530() {}

// sub_8e85b0  (orig 0x8e85b0, ret_only)
void main_f_8e85b0() {}

// sub_8e8630  (orig 0x8e8630, ret_only)
void main_f_8e8630() {}

// sub_8e8730  (orig 0x8e8730, ret_only)
void main_f_8e8730() {}

// sub_8e9560  (orig 0x8e9560, ret_only)
void main_f_8e9560() {}

// sub_8e9910  (orig 0x8e9910, ret_only)
void main_f_8e9910() {}

// sub_8e9d50  (orig 0x8e9d50, ret_only)
void main_f_8e9d50() {}

// sub_8eb220  (orig 0x8eb220, ret_only)
void main_f_8eb220() {}

// sub_8ec4c0  (orig 0x8ec4c0, getter)
uint8_t main_f_8ec4c0(void* a0) { return *(uint8_t*)((char*)(a0) + 66); }

// sub_8ec540  (orig 0x8ec540, getter)
uint8_t main_f_8ec540(void* a0) { return *(uint8_t*)((char*)(a0) + 58); }

// sub_8ec6f0  (orig 0x8ec6f0, ret_only)
void main_f_8ec6f0() {}

// sub_8ec7f0  (orig 0x8ec7f0, ret_only)
void main_f_8ec7f0() {}

// sub_8ec830  (orig 0x8ec830, getter)
uint32_t main_f_8ec830(void* a0) { return *(uint32_t*)((char*)(a0) + 80); }

// sub_8ec8a0  (orig 0x8ec8a0, getter)
uint8_t main_f_8ec8a0(void* a0) { return *(uint8_t*)((char*)(a0) + 57); }

// sub_8ec930  (orig 0x8ec930, getter)
uint8_t main_f_8ec930(void* a0) { return *(uint8_t*)((char*)(a0) + 45); }

// sub_8ec940  (orig 0x8ec940, getter)
uint16_t main_f_8ec940(void* a0) { return *(uint16_t*)((char*)(a0) + 38); }

// sub_8ec950  (orig 0x8ec950, getter)
uint8_t main_f_8ec950(void* a0) { return *(uint8_t*)((char*)(a0) + 40); }

// sub_8ec960  (orig 0x8ec960, getter)
uint8_t main_f_8ec960(void* a0) { return *(uint8_t*)((char*)(a0) + 41); }

// sub_8ec970  (orig 0x8ec970, ret_only)
void main_f_8ec970() {}

// sub_8ec9e0  (orig 0x8ec9e0, getter)
uint8_t main_f_8ec9e0(void* a0) { return *(uint8_t*)((char*)(a0) + 432); }

// sub_8eca00  (orig 0x8eca00, setter-chain)
void main_f_8eca00(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; *(uint8_t*)((char*)(a0) + 12) = 0; *(uint16_t*)((char*)(a0) + 16) = 0; *(uint32_t*)((char*)(a0) + 20) = 0; *(uint16_t*)((char*)(a0) + 24) = 0; *(uint32_t*)((char*)(a0) + 28) = 0; *(uint16_t*)((char*)(a0) + 32) = 0; *(uint32_t*)((char*)(a0) + 36) = 0; *(uint16_t*)((char*)(a0) + 40) = 0; *(uint32_t*)((char*)(a0) + 44) = 0; *(uint16_t*)((char*)(a0) + 48) = 0; *(uint32_t*)((char*)(a0) + 52) = 0; *(uint16_t*)((char*)(a0) + 56) = 0; *(uint32_t*)((char*)(a0) + 60) = 0; *(uint16_t*)((char*)(a0) + 64) = 0; *(uint32_t*)((char*)(a0) + 68) = 0; *(uint16_t*)((char*)(a0) + 72) = 0; *(uint32_t*)((char*)(a0) + 76) = 0; *(uint16_t*)((char*)(a0) + 80) = 0; *(uint32_t*)((char*)(a0) + 84) = 0; *(uint16_t*)((char*)(a0) + 88) = 0; *(uint32_t*)((char*)(a0) + 92) = 0; *(uint16_t*)((char*)(a0) + 96) = 0; *(uint32_t*)((char*)(a0) + 100) = 0; *(uint16_t*)((char*)(a0) + 104) = 0; *(uint32_t*)((char*)(a0) + 108) = 0; *(uint16_t*)((char*)(a0) + 112) = 0; *(uint32_t*)((char*)(a0) + 116) = 0; *(uint16_t*)((char*)(a0) + 120) = 0; *(uint32_t*)((char*)(a0) + 124) = 0; *(uint16_t*)((char*)(a0) + 128) = 0; *(uint32_t*)((char*)(a0) + 132) = 0; *(uint16_t*)((char*)(a0) + 136) = 0; *(uint32_t*)((char*)(a0) + 140) = 0; *(uint16_t*)((char*)(a0) + 144) = 0; *(uint32_t*)((char*)(a0) + 148) = 0; *(uint16_t*)((char*)(a0) + 152) = 0; *(uint32_t*)((char*)(a0) + 156) = 0; *(uint16_t*)((char*)(a0) + 160) = 0; *(uint32_t*)((char*)(a0) + 164) = 0; *(uint16_t*)((char*)(a0) + 168) = 0; *(uint32_t*)((char*)(a0) + 172) = 0; *(uint16_t*)((char*)(a0) + 176) = 0; *(uint32_t*)((char*)(a0) + 180) = 0; *(uint16_t*)((char*)(a0) + 184) = 0; *(uint32_t*)((char*)(a0) + 188) = 0; *(uint16_t*)((char*)(a0) + 192) = 0; *(uint32_t*)((char*)(a0) + 196) = 0; *(uint16_t*)((char*)(a0) + 200) = 0; *(uint32_t*)((char*)(a0) + 204) = 0; *(uint16_t*)((char*)(a0) + 208) = 0; *(uint32_t*)((char*)(a0) + 212) = 0; *(uint16_t*)((char*)(a0) + 216) = 0; *(uint32_t*)((char*)(a0) + 220) = 0; *(uint16_t*)((char*)(a0) + 224) = 0; *(uint32_t*)((char*)(a0) + 228) = 0; *(uint16_t*)((char*)(a0) + 232) = 0; *(uint32_t*)((char*)(a0) + 236) = 0; *(uint16_t*)((char*)(a0) + 240) = 0; *(uint32_t*)((char*)(a0) + 244) = 0; *(uint16_t*)((char*)(a0) + 248) = 0; *(uint32_t*)((char*)(a0) + 252) = 0; *(uint16_t*)((char*)(a0) + 256) = 0; *(uint32_t*)((char*)(a0) + 260) = 0; *(uint16_t*)((char*)(a0) + 264) = 0; *(uint32_t*)((char*)(a0) + 268) = 0; *(uint16_t*)((char*)(a0) + 272) = 0; *(uint32_t*)((char*)(a0) + 276) = 0; *(uint16_t*)((char*)(a0) + 280) = 0; *(uint32_t*)((char*)(a0) + 284) = 0; *(uint16_t*)((char*)(a0) + 288) = 0; *(uint32_t*)((char*)(a0) + 292) = 0; *(uint16_t*)((char*)(a0) + 296) = 0; *(uint32_t*)((char*)(a0) + 300) = 0; *(uint16_t*)((char*)(a0) + 304) = 0; *(uint32_t*)((char*)(a0) + 308) = 0; *(uint16_t*)((char*)(a0) + 312) = 0; *(uint32_t*)((char*)(a0) + 316) = 0; *(uint16_t*)((char*)(a0) + 320) = 0; *(uint32_t*)((char*)(a0) + 324) = 0; *(uint16_t*)((char*)(a0) + 328) = 0; *(uint32_t*)((char*)(a0) + 332) = 0; *(uint16_t*)((char*)(a0) + 336) = 0; *(uint32_t*)((char*)(a0) + 340) = 0; *(uint16_t*)((char*)(a0) + 344) = 0; *(uint32_t*)((char*)(a0) + 348) = 0; *(uint16_t*)((char*)(a0) + 352) = 0; *(uint32_t*)((char*)(a0) + 356) = 0; *(uint16_t*)((char*)(a0) + 360) = 0; *(uint32_t*)((char*)(a0) + 364) = 0; *(uint16_t*)((char*)(a0) + 368) = 0; *(uint32_t*)((char*)(a0) + 372) = 0; *(uint16_t*)((char*)(a0) + 376) = 0; *(uint32_t*)((char*)(a0) + 380) = 0; *(uint16_t*)((char*)(a0) + 384) = 0; *(uint32_t*)((char*)(a0) + 388) = 0; *(uint16_t*)((char*)(a0) + 392) = 0; *(uint32_t*)((char*)(a0) + 396) = 0; }

// sub_8edd80  (orig 0x8edd80, strlit-ret)
const char *main_f_8edd80() { static char g_f_8edd80[1]; __asm__ volatile("" ::: "memory"); return g_f_8edd80; }

// sub_8edd90  (orig 0x8edd90, mov_ret)
uint32_t main_f_8edd90() { return 75; }

// sub_8efda0  (orig 0x8efda0, ret_only)
void main_f_8efda0() {}

// sub_8efdb0  (orig 0x8efdb0, ret_only)
void main_f_8efdb0() {}

// sub_8f0770  (orig 0x8f0770, ret_only)
void main_f_8f0770() {}

// sub_8f0780  (orig 0x8f0780, copy2)
void main_f_8f0780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8f0790  (orig 0x8f0790, copy2)
void main_f_8f0790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8f1dd0  (orig 0x8f1dd0, getter-chain)
uint32_t main_f_8f1dd0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 344))) + 240); }

// sub_8f3740  (orig 0x8f3740, ret_only)
void main_f_8f3740() {}

// sub_8faf50  (orig 0x8faf50, ret_only)
void main_f_8faf50() {}

// sub_8faf60  (orig 0x8faf60, struct-copy)
void main_f_8faf60(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8faf80  (orig 0x8faf80, struct-copy)
void main_f_8faf80(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8faff0  (orig 0x8faff0, ret_only)
void main_f_8faff0() {}

// sub_8fb000  (orig 0x8fb000, struct-copy)
void main_f_8fb000(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8fb020  (orig 0x8fb020, struct-copy)
void main_f_8fb020(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_8ffe70  (orig 0x8ffe70, ret_only)
void main_f_8ffe70() {}

// sub_8ffe80  (orig 0x8ffe80, copy2)
void main_f_8ffe80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8ffe90  (orig 0x8ffe90, copy2)
void main_f_8ffe90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901010  (orig 0x901010, ret_only)
void main_f_901010() {}

// sub_901020  (orig 0x901020, copy2)
void main_f_901020(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901030  (orig 0x901030, copy2)
void main_f_901030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901060  (orig 0x901060, ret_only)
void main_f_901060() {}

// sub_901070  (orig 0x901070, copy2)
void main_f_901070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901080  (orig 0x901080, copy2)
void main_f_901080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9010b0  (orig 0x9010b0, ret_only)
void main_f_9010b0() {}

// sub_9010c0  (orig 0x9010c0, copy2)
void main_f_9010c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9010d0  (orig 0x9010d0, copy2)
void main_f_9010d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901100  (orig 0x901100, ret_only)
void main_f_901100() {}

// sub_901110  (orig 0x901110, copy2)
void main_f_901110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901120  (orig 0x901120, copy2)
void main_f_901120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901160  (orig 0x901160, ret_only)
void main_f_901160() {}

// sub_901170  (orig 0x901170, struct-copy)
void main_f_901170(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_901190  (orig 0x901190, struct-copy)
void main_f_901190(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_90e2d0  (orig 0x90e2d0, ret_only)
void main_f_90e2d0() {}

// sub_913870  (orig 0x913870, getter-chain)
uint64_t main_f_913870(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 1832); }

// sub_913880  (orig 0x913880, ret_only)
void main_f_913880() {}

// sub_913890  (orig 0x913890, copy2)
void main_f_913890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9138a0  (orig 0x9138a0, copy2)
void main_f_9138a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9176b0  (orig 0x9176b0, ret_only)
void main_f_9176b0() {}

// sub_9176c0  (orig 0x9176c0, struct-copy)
void main_f_9176c0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_9176e0  (orig 0x9176e0, struct-copy)
void main_f_9176e0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_917750  (orig 0x917750, ret_only)
void main_f_917750() {}

// sub_917760  (orig 0x917760, struct-copy)
void main_f_917760(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_917780  (orig 0x917780, struct-copy)
void main_f_917780(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_917990  (orig 0x917990, ret_only)
void main_f_917990() {}

// sub_9179a0  (orig 0x9179a0, struct-copy)
void main_f_9179a0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_9179c0  (orig 0x9179c0, struct-copy)
void main_f_9179c0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_919be0  (orig 0x919be0, ret_only)
void main_f_919be0() {}

// sub_919bf0  (orig 0x919bf0, copy2)
void main_f_919bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_919c00  (orig 0x919c00, copy2)
void main_f_919c00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_919f80  (orig 0x919f80, ret_only)
void main_f_919f80() {}

// sub_91b5f0  (orig 0x91b5f0, ret_only)
void main_f_91b5f0() {}

// sub_91b600  (orig 0x91b600, ret_only)
void main_f_91b600() {}

// sub_91d190  (orig 0x91d190, straight)
void main_f_91d190(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_91d4d0  (orig 0x91d4d0, ret_only)
void main_f_91d4d0() {}

// sub_91dfe0  (orig 0x91dfe0, ret_only)
void main_f_91dfe0() {}

// sub_91e870  (orig 0x91e870, ret_only)
void main_f_91e870() {}

// sub_91f910  (orig 0x91f910, setter-chain)
void main_f_91f910(void* a0) { *(uint64_t*)((char*)(a0) + 1520) = 0; *(uint32_t*)((char*)(a0) + 1536) = 0; *(uint32_t*)((char*)(a0) + 1544) = 0; }

// sub_91ff60  (orig 0x91ff60, ret_only)
void main_f_91ff60() {}

// sub_91ff70  (orig 0x91ff70, copy2)
void main_f_91ff70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_91ff80  (orig 0x91ff80, copy2)
void main_f_91ff80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_91ffa0  (orig 0x91ffa0, ret_only)
void main_f_91ffa0() {}

// sub_91ffb0  (orig 0x91ffb0, copy2)
void main_f_91ffb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_91ffc0  (orig 0x91ffc0, copy2)
void main_f_91ffc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9215a0  (orig 0x9215a0, ret_only)
void main_f_9215a0() {}

// sub_9215b0  (orig 0x9215b0, copy2)
void main_f_9215b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9215c0  (orig 0x9215c0, copy2)
void main_f_9215c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_921f70  (orig 0x921f70, ret_only)
void main_f_921f70() {}

// sub_921f80  (orig 0x921f80, copy2)
void main_f_921f80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_921f90  (orig 0x921f90, copy2)
void main_f_921f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_922960  (orig 0x922960, getter)
uint32_t main_f_922960(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_923620  (orig 0x923620, ret_only)
void main_f_923620() {}

// sub_923630  (orig 0x923630, copy2)
void main_f_923630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_923640  (orig 0x923640, copy2)
void main_f_923640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9244c0  (orig 0x9244c0, mov_ret)
uint32_t main_f_9244c0() { return 0; }

// sub_9244d0  (orig 0x9244d0, ret_only)
void main_f_9244d0() {}

// sub_924780  (orig 0x924780, straight)
void main_f_924780(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_924ab0  (orig 0x924ab0, ret_only)
void main_f_924ab0() {}

// sub_925490  (orig 0x925490, setter)
void main_f_925490(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_925ad0  (orig 0x925ad0, ret_only)
void main_f_925ad0() {}

// sub_9260c0  (orig 0x9260c0, straight)
void main_f_9260c0(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_926380  (orig 0x926380, ret_only)
void main_f_926380() {}

// sub_9269f0  (orig 0x9269f0, ret_only)
void main_f_9269f0() {}

// sub_927530  (orig 0x927530, ret_only)
void main_f_927530() {}

// sub_92a7c0  (orig 0x92a7c0, ret_only)
void main_f_92a7c0() {}

// sub_92a7d0  (orig 0x92a7d0, copy2)
void main_f_92a7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a7e0  (orig 0x92a7e0, copy2)
void main_f_92a7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a800  (orig 0x92a800, ret_only)
void main_f_92a800() {}

// sub_92a810  (orig 0x92a810, copy2)
void main_f_92a810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a820  (orig 0x92a820, copy2)
void main_f_92a820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a920  (orig 0x92a920, straight)
void main_f_92a920(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_92aab0  (orig 0x92aab0, straight)
void main_f_92aab0(void* a0) {
    *(uint32_t*)((char*)(a0) + 124) = 3;
}

// sub_92aac0  (orig 0x92aac0, ret_only)
void main_f_92aac0() {}

// sub_92ad60  (orig 0x92ad60, straight)
void main_f_92ad60(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_92bcb0  (orig 0x92bcb0, ret_only)
void main_f_92bcb0() {}

// sub_92c2c0  (orig 0x92c2c0, ret_only)
void main_f_92c2c0() {}

// sub_92c2d0  (orig 0x92c2d0, copy2)
void main_f_92c2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c2e0  (orig 0x92c2e0, copy2)
void main_f_92c2e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c300  (orig 0x92c300, ret_only)
void main_f_92c300() {}

// sub_92c310  (orig 0x92c310, copy2)
void main_f_92c310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c320  (orig 0x92c320, copy2)
void main_f_92c320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c370  (orig 0x92c370, ret_only)
void main_f_92c370() {}

// sub_92c380  (orig 0x92c380, copy2)
void main_f_92c380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c390  (orig 0x92c390, copy2)
void main_f_92c390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c590  (orig 0x92c590, ret_only)
void main_f_92c590() {}

// sub_92c5a0  (orig 0x92c5a0, ret_only)
void main_f_92c5a0() {}

// sub_92c5d0  (orig 0x92c5d0, getter-chain)
uint8_t main_f_92c5d0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 8))) + 829); }

// sub_92c650  (orig 0x92c650, copy2)
void main_f_92c650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c660  (orig 0x92c660, copy2)
void main_f_92c660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c690  (orig 0x92c690, ret_only)
void main_f_92c690() {}

// sub_92c6a0  (orig 0x92c6a0, copy2)
void main_f_92c6a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c6b0  (orig 0x92c6b0, copy2)
void main_f_92c6b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c760  (orig 0x92c760, ret_only)
void main_f_92c760() {}

// sub_92c770  (orig 0x92c770, copy2)
void main_f_92c770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c780  (orig 0x92c780, copy2)
void main_f_92c780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c7e0  (orig 0x92c7e0, ret_only)
void main_f_92c7e0() {}

// sub_92c7f0  (orig 0x92c7f0, copy2)
void main_f_92c7f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c800  (orig 0x92c800, copy2)
void main_f_92c800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c980  (orig 0x92c980, ret_only)
void main_f_92c980() {}

// sub_92c990  (orig 0x92c990, copy2)
void main_f_92c990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c9a0  (orig 0x92c9a0, copy2)
void main_f_92c9a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92fb90  (orig 0x92fb90, ret_only)
void main_f_92fb90() {}

// sub_92fdd0  (orig 0x92fdd0, straight)
void main_f_92fdd0(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_930060  (orig 0x930060, getter-chain)
uint8_t main_f_930060(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 128))) + 1492); }

// sub_9305a0  (orig 0x9305a0, straight)
void main_f_9305a0(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_930f90  (orig 0x930f90, straight)
void main_f_930f90(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_931f70  (orig 0x931f70, ret_only)
void main_f_931f70() {}

// sub_932220  (orig 0x932220, straight)
void main_f_932220(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_932b30  (orig 0x932b30, ret_only)
void main_f_932b30() {}

// sub_936450  (orig 0x936450, ret_only)
void main_f_936450() {}

// sub_936460  (orig 0x936460, copy2)
void main_f_936460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_936470  (orig 0x936470, copy2)
void main_f_936470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_936490  (orig 0x936490, ret_only)
void main_f_936490() {}

// sub_9364a0  (orig 0x9364a0, copy2)
void main_f_9364a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9364b0  (orig 0x9364b0, copy2)
void main_f_9364b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_936640  (orig 0x936640, ret_only)
void main_f_936640() {}

// sub_9372c0  (orig 0x9372c0, ret_only)
void main_f_9372c0() {}

// sub_9372d0  (orig 0x9372d0, copy2)
void main_f_9372d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9372e0  (orig 0x9372e0, copy2)
void main_f_9372e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_937e00  (orig 0x937e00, straight)
void main_f_937e00(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_9380b0  (orig 0x9380b0, getter-chain)
uint8_t main_f_9380b0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 128))) + 1928); }

// sub_939650  (orig 0x939650, setter)
void main_f_939650(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 56) = a1; }

// sub_939f60  (orig 0x939f60, ret_only)
void main_f_939f60() {}

// sub_93c440  (orig 0x93c440, ret_only)
void main_f_93c440() {}

// sub_93c8b0  (orig 0x93c8b0, ret_only)
void main_f_93c8b0() {}

// sub_93c8c0  (orig 0x93c8c0, copy2)
void main_f_93c8c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_93c8d0  (orig 0x93c8d0, copy2)
void main_f_93c8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_93ccc0  (orig 0x93ccc0, mov_ret)
uint32_t main_f_93ccc0() { return 0; }

// sub_93dfa0  (orig 0x93dfa0, mov_ret)
uint32_t main_f_93dfa0() { return 1; }

// sub_93fbe0  (orig 0x93fbe0, mov_ret)
uint32_t main_f_93fbe0() { return 1; }

// sub_93fee0  (orig 0x93fee0, ret_only)
void main_f_93fee0() {}

// sub_93fef0  (orig 0x93fef0, struct-copy)
void main_f_93fef0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_93ff10  (orig 0x93ff10, struct-copy)
void main_f_93ff10(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_9470b0  (orig 0x9470b0, mov_ret)
uint32_t main_f_9470b0() { return 1; }

// sub_95abd0  (orig 0x95abd0, compare)
bool main_f_95abd0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 160)) == (uint64_t)(0); }

// sub_967110  (orig 0x967110, mov_ret)
uint32_t main_f_967110() { return 1; }

// sub_967120  (orig 0x967120, mov_ret)
uint32_t main_f_967120() { return 1; }

// sub_967130  (orig 0x967130, ret_only)
void main_f_967130() {}

// sub_967140  (orig 0x967140, ret_only)
void main_f_967140() {}

// sub_967150  (orig 0x967150, ret_only)
void main_f_967150() {}

// sub_967190  (orig 0x967190, mov_ret)
uint32_t main_f_967190() { return 0; }

// sub_967920  (orig 0x967920, mov_ret)
uint32_t main_f_967920() { return 16; }

// sub_967930  (orig 0x967930, indexed-getter)
uint64_t main_f_967930(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_967940  (orig 0x967940, indexed-getter)
uint64_t main_f_967940(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_967b80  (orig 0x967b80, mov_ret)
uint32_t main_f_967b80() { return 1; }

// sub_967b90  (orig 0x967b90, mov_ret)
uint32_t main_f_967b90() { return 1; }

// sub_967ba0  (orig 0x967ba0, ret_only)
void main_f_967ba0() {}

// sub_967bb0  (orig 0x967bb0, ret_only)
void main_f_967bb0() {}

// sub_967bc0  (orig 0x967bc0, ret_only)
void main_f_967bc0() {}

// sub_96a390  (orig 0x96a390, ret_only)
void main_f_96a390() {}

// sub_96a570  (orig 0x96a570, ret_only)
void main_f_96a570() {}

// sub_96a580  (orig 0x96a580, copy2)
void main_f_96a580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96a590  (orig 0x96a590, copy2)
void main_f_96a590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b000  (orig 0x96b000, ret_only)
void main_f_96b000() {}

// sub_96b010  (orig 0x96b010, copy2)
void main_f_96b010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b020  (orig 0x96b020, copy2)
void main_f_96b020(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b080  (orig 0x96b080, ret_only)
void main_f_96b080() {}

// sub_96b090  (orig 0x96b090, copy2)
void main_f_96b090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b0a0  (orig 0x96b0a0, copy2)
void main_f_96b0a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b2c0  (orig 0x96b2c0, ret_only)
void main_f_96b2c0() {}

// sub_96b940  (orig 0x96b940, copy2)
void main_f_96b940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b950  (orig 0x96b950, copy2)
void main_f_96b950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96bb70  (orig 0x96bb70, ret_only)
void main_f_96bb70() {}

// sub_96c900  (orig 0x96c900, ret_only)
void main_f_96c900() {}

// sub_96c910  (orig 0x96c910, copy2)
void main_f_96c910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96c920  (orig 0x96c920, copy2)
void main_f_96c920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96ca90  (orig 0x96ca90, ret_only)
void main_f_96ca90() {}

// sub_96caa0  (orig 0x96caa0, copy2)
void main_f_96caa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cab0  (orig 0x96cab0, copy2)
void main_f_96cab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cae0  (orig 0x96cae0, ret_only)
void main_f_96cae0() {}

// sub_96caf0  (orig 0x96caf0, copy2)
void main_f_96caf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb00  (orig 0x96cb00, copy2)
void main_f_96cb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb30  (orig 0x96cb30, ret_only)
void main_f_96cb30() {}

// sub_96cb40  (orig 0x96cb40, copy2)
void main_f_96cb40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb50  (orig 0x96cb50, copy2)
void main_f_96cb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96ccc0  (orig 0x96ccc0, ret_only)
void main_f_96ccc0() {}

// sub_96ccd0  (orig 0x96ccd0, copy2)
void main_f_96ccd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cce0  (orig 0x96cce0, copy2)
void main_f_96cce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96d2b0  (orig 0x96d2b0, ret_only)
void main_f_96d2b0() {}

// sub_96d2c0  (orig 0x96d2c0, struct-copy)
void main_f_96d2c0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_96d2e0  (orig 0x96d2e0, struct-copy)
void main_f_96d2e0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_96d970  (orig 0x96d970, ret_only)
void main_f_96d970() {}

// sub_96d980  (orig 0x96d980, copy2)
void main_f_96d980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96d990  (orig 0x96d990, copy2)
void main_f_96d990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db00  (orig 0x96db00, ret_only)
void main_f_96db00() {}

// sub_96db10  (orig 0x96db10, copy2)
void main_f_96db10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db20  (orig 0x96db20, copy2)
void main_f_96db20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db50  (orig 0x96db50, ret_only)
void main_f_96db50() {}

// sub_96db60  (orig 0x96db60, copy2)
void main_f_96db60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db70  (orig 0x96db70, copy2)
void main_f_96db70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96dd70  (orig 0x96dd70, ret_only)
void main_f_96dd70() {}

// sub_96e0c0  (orig 0x96e0c0, ret_only)
void main_f_96e0c0() {}

// sub_96e490  (orig 0x96e490, ret_only)
void main_f_96e490() {}

// sub_96e6b0  (orig 0x96e6b0, ret_only)
void main_f_96e6b0() {}

// sub_96e8d0  (orig 0x96e8d0, ret_only)
void main_f_96e8d0() {}

// sub_96eaf0  (orig 0x96eaf0, ret_only)
void main_f_96eaf0() {}

// sub_96ed10  (orig 0x96ed10, ret_only)
void main_f_96ed10() {}

// sub_96ef30  (orig 0x96ef30, ret_only)
void main_f_96ef30() {}

// sub_96f150  (orig 0x96f150, ret_only)
void main_f_96f150() {}

// sub_96f370  (orig 0x96f370, ret_only)
void main_f_96f370() {}

// sub_96f3c0  (orig 0x96f3c0, ret_only)
void main_f_96f3c0() {}

// sub_96f3d0  (orig 0x96f3d0, struct-copy)
void main_f_96f3d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_96f3f0  (orig 0x96f3f0, struct-copy)
void main_f_96f3f0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_96f500  (orig 0x96f500, ret_only)
void main_f_96f500() {}

// sub_96f510  (orig 0x96f510, copy2)
void main_f_96f510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96f520  (orig 0x96f520, copy2)
void main_f_96f520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96f5d0  (orig 0x96f5d0, ret_only)
void main_f_96f5d0() {}

// sub_96f670  (orig 0x96f670, ret_only)
void main_f_96f670() {}

// sub_96f790  (orig 0x96f790, ret_only)
void main_f_96f790() {}

// sub_96f7f0  (orig 0x96f7f0, ret_only)
void main_f_96f7f0() {}

// sub_96fa00  (orig 0x96fa00, ret_only)
void main_f_96fa00() {}

// sub_96fa10  (orig 0x96fa10, copy2)
void main_f_96fa10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96fa20  (orig 0x96fa20, copy2)
void main_f_96fa20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96fb20  (orig 0x96fb20, ret_only)
void main_f_96fb20() {}

// sub_96fb30  (orig 0x96fb30, ret_only)
void main_f_96fb30() {}

// sub_96fb40  (orig 0x96fb40, ret_only)
void main_f_96fb40() {}

// sub_970160  (orig 0x970160, straight)
void main_f_970160(void* a0) {
    *(uint32_t*)((char*)(a0) + 1120) = 257;
    *(uint16_t*)((char*)(a0) + 1124) = (uint16_t)(257);
}

// sub_9780f0  (orig 0x9780f0, ret_only)
void main_f_9780f0() {}

// sub_978100  (orig 0x978100, ret_only)
void main_f_978100() {}

// sub_978110  (orig 0x978110, mov_ret)
uint32_t main_f_978110() { return 0; }

// sub_978120  (orig 0x978120, getter)
uint8_t main_f_978120(void* a0) { return *(uint8_t*)((char*)(a0) + 480); }

// sub_978130  (orig 0x978130, getter)
uint8_t main_f_978130(void* a0) { return *(uint8_t*)((char*)(a0) + 481); }

// sub_978140  (orig 0x978140, getter)
uint8_t main_f_978140(void* a0) { return *(uint8_t*)((char*)(a0) + 482); }

// sub_9781a0  (orig 0x9781a0, compare)
bool main_f_9781a0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 488)) != (uint64_t)(0); }

// sub_9781b0  (orig 0x9781b0, ret_only)
void main_f_9781b0() {}

// sub_9781c0  (orig 0x9781c0, ret_only)
void main_f_9781c0() {}

// sub_9781d0  (orig 0x9781d0, mov_ret)
uint32_t main_f_9781d0() { return 0; }

// sub_9781e0  (orig 0x9781e0, ret_only)
void main_f_9781e0() {}

// sub_978200  (orig 0x978200, copy2)
void main_f_978200(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 392) = *(uint64_t*)((char*)(a1)); }

// sub_978210  (orig 0x978210, ret_only)
void main_f_978210() {}

// sub_978220  (orig 0x978220, ret_only)
void main_f_978220() {}

// sub_978230  (orig 0x978230, ret_only)
void main_f_978230() {}

// sub_978240  (orig 0x978240, mov_ret)
uint32_t main_f_978240() { return 0; }

// sub_978250  (orig 0x978250, ret_only)
void main_f_978250() {}

// sub_978260  (orig 0x978260, ret_only)
void main_f_978260() {}

// sub_978270  (orig 0x978270, mov_ret)
uint32_t main_f_978270() { return 0; }

// sub_978290  (orig 0x978290, mov_ret)
uint64_t main_f_978290() { return 0; }

// sub_9782a0  (orig 0x9782a0, mov_ret)
uint32_t main_f_9782a0() { return 0; }

// sub_9782b0  (orig 0x9782b0, mov_ret)
uint32_t main_f_9782b0() { return 1; }

// sub_9782e0  (orig 0x9782e0, mov_ret)
uint32_t main_f_9782e0() { return 15; }

// sub_978890  (orig 0x978890, getter)
uint32_t main_f_978890(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_9788a0  (orig 0x9788a0, getter)
uint32_t main_f_9788a0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_9788b0  (orig 0x9788b0, straight)
void main_f_9788b0(void* a0) {
    *(uint8_t*)((char*)(a0) + 116) = (uint8_t)(1);
}

// sub_9788c0  (orig 0x9788c0, getter)
uint8_t main_f_9788c0(void* a0) { return *(uint8_t*)((char*)(a0) + 116); }

// sub_9788d0  (orig 0x9788d0, ret_only)
void main_f_9788d0() {}

// sub_978b20  (orig 0x978b20, getter)
uint32_t main_f_978b20(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_978b30  (orig 0x978b30, getter)
uint32_t main_f_978b30(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_978b40  (orig 0x978b40, straight)
void main_f_978b40(void* a0) {
    *(uint8_t*)((char*)(a0) + 44) = (uint8_t)(1);
}

// sub_978b50  (orig 0x978b50, getter)
uint8_t main_f_978b50(void* a0) { return *(uint8_t*)((char*)(a0) + 44); }

// sub_983f60  (orig 0x983f60, getter)
uint8_t main_f_983f60(void* a0) { return *(uint8_t*)((char*)(a0) + 1201); }

// sub_984f30  (orig 0x984f30, getter)
uint32_t main_f_984f30(void* a0) { return *(uint32_t*)((char*)(a0) + 1216); }

// sub_984f40  (orig 0x984f40, getter)
uint8_t main_f_984f40(void* a0) { return *(uint8_t*)((char*)(a0) + 1220); }

// sub_984fa0  (orig 0x984fa0, getter)
uint32_t main_f_984fa0(void* a0) { return *(uint32_t*)((char*)(a0) + 1236); }

// sub_985010  (orig 0x985010, ret_only)
void main_f_985010() {}

// sub_985e20  (orig 0x985e20, ret_only)
void main_f_985e20() {}

// sub_9861d0  (orig 0x9861d0, ret_only)
void main_f_9861d0() {}

// sub_9861e0  (orig 0x9861e0, copy2)
void main_f_9861e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9861f0  (orig 0x9861f0, copy2)
void main_f_9861f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_986650  (orig 0x986650, ret_only)
void main_f_986650() {}

// sub_986720  (orig 0x986720, ret_only)
void main_f_986720() {}

// sub_986820  (orig 0x986820, ret_only)
void main_f_986820() {}

// sub_9868b0  (orig 0x9868b0, ret_only)
void main_f_9868b0() {}

// sub_986930  (orig 0x986930, ret_only)
void main_f_986930() {}

// sub_986a30  (orig 0x986a30, ret_only)
void main_f_986a30() {}

// sub_9871a0  (orig 0x9871a0, ret_only)
void main_f_9871a0() {}

// sub_987420  (orig 0x987420, ret_only)
void main_f_987420() {}

// sub_987430  (orig 0x987430, straight)
void main_f_987430(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
}

// sub_987450  (orig 0x987450, straight)
void main_f_987450(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
}

// sub_9874e0  (orig 0x9874e0, ret_only)
void main_f_9874e0() {}

// sub_9875b0  (orig 0x9875b0, ret_only)
void main_f_9875b0() {}

// sub_9875c0  (orig 0x9875c0, straight)
void main_f_9875c0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
}

// sub_9875e0  (orig 0x9875e0, straight)
void main_f_9875e0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
}

// sub_987600  (orig 0x987600, getter)
float main_f_987600(void* a0) { return *(float*)((char*)(a0)); }

// sub_987610  (orig 0x987610, ret_only)
void main_f_987610() {}

// sub_987620  (orig 0x987620, copy2)
void main_f_987620(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_987630  (orig 0x987630, copy2)
void main_f_987630(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_9876b0  (orig 0x9876b0, ret_only)
void main_f_9876b0() {}

// sub_987770  (orig 0x987770, getter)
float main_f_987770(void* a0) { return *(float*)((char*)(a0)); }

// sub_987780  (orig 0x987780, ret_only)
void main_f_987780() {}

// sub_987790  (orig 0x987790, copy2)
void main_f_987790(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_9877a0  (orig 0x9877a0, copy2)
void main_f_9877a0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_9877b0  (orig 0x9877b0, compare)
bool main_f_9877b0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_9877c0  (orig 0x9877c0, ret_only)
void main_f_9877c0() {}

// sub_9877d0  (orig 0x9877d0, copy2)
void main_f_9877d0(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_9877e0  (orig 0x9877e0, copy2)
void main_f_9877e0(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_9877f0  (orig 0x9877f0, ret_only)
void main_f_9877f0() {}

// sub_987870  (orig 0x987870, ret_only)
void main_f_987870() {}

// sub_987930  (orig 0x987930, compare)
bool main_f_987930(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_987940  (orig 0x987940, ret_only)
void main_f_987940() {}

// sub_987950  (orig 0x987950, copy2)
void main_f_987950(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_987960  (orig 0x987960, copy2)
void main_f_987960(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_9879e0  (orig 0x9879e0, ret_only)
void main_f_9879e0() {}

// sub_987af0  (orig 0x987af0, ret_only)
void main_f_987af0() {}

// sub_987c00  (orig 0x987c00, ret_only)
void main_f_987c00() {}

// sub_987ec0  (orig 0x987ec0, ret_only)
void main_f_987ec0() {}

// sub_98af00  (orig 0x98af00, ret_only)
void main_f_98af00() {}

// sub_98af10  (orig 0x98af10, copy2)
void main_f_98af10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_98af20  (orig 0x98af20, copy2)
void main_f_98af20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_98dc80  (orig 0x98dc80, getter)
uint32_t main_f_98dc80(void* a0) { return *(uint32_t*)((char*)(a0) + 1200); }

// sub_98dc90  (orig 0x98dc90, getter)
uint8_t main_f_98dc90(void* a0) { return *(uint8_t*)((char*)(a0) + 1204); }

// sub_98def0  (orig 0x98def0, ret_only)
void main_f_98def0() {}

// sub_98e040  (orig 0x98e040, ret_only)
void main_f_98e040() {}

// sub_98e140  (orig 0x98e140, ret_only)
void main_f_98e140() {}

// sub_98e820  (orig 0x98e820, ret_only)
void main_f_98e820() {}

// sub_9a42f0  (orig 0x9a42f0, ret_only)
void main_f_9a42f0() {}

// sub_9a48f0  (orig 0x9a48f0, ret_only)
void main_f_9a48f0() {}

// sub_9a4900  (orig 0x9a4900, copy2)
void main_f_9a4900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9a4910  (orig 0x9a4910, copy2)
void main_f_9a4910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9a78c0  (orig 0x9a78c0, setter)
void main_f_9a78c0(void* a0) { *(uint8_t*)((char*)(a0) + 256) = 0; }

// sub_9ac5e0  (orig 0x9ac5e0, ret_only)
void main_f_9ac5e0() {}

// sub_9ac5f0  (orig 0x9ac5f0, ret_only)
void main_f_9ac5f0() {}

// sub_9acf50  (orig 0x9acf50, ret_only)
void main_f_9acf50() {}

// sub_9ad060  (orig 0x9ad060, ret_only)
void main_f_9ad060() {}

// sub_9ae1b0  (orig 0x9ae1b0, ret_only)
void main_f_9ae1b0() {}

// sub_9ae3b0  (orig 0x9ae3b0, ret_only)
void main_f_9ae3b0() {}

// sub_9b02f0  (orig 0x9b02f0, ret_only)
void main_f_9b02f0() {}

// sub_9b32b0  (orig 0x9b32b0, mov_ret)
uint32_t main_f_9b32b0() { return 1; }

// sub_9b7700  (orig 0x9b7700, mov_ret)
uint32_t main_f_9b7700() { return 1; }

// sub_9b7730  (orig 0x9b7730, mov_ret)
uint32_t main_f_9b7730() { return 1; }

// sub_9b79b0  (orig 0x9b79b0, mov_ret)
uint32_t main_f_9b79b0() { return 0; }

// sub_9b84c0  (orig 0x9b84c0, ret_only)
void main_f_9b84c0() {}

// sub_9b84d0  (orig 0x9b84d0, mov_ret)
uint32_t main_f_9b84d0() { return 1; }

// sub_9bad40  (orig 0x9bad40, compare)
bool main_f_9bad40(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 16)) == (uint64_t)(4); }

// sub_9bbb40  (orig 0x9bbb40, ret_only)
void main_f_9bbb40() {}

// sub_9bbb50  (orig 0x9bbb50, struct-copy)
void main_f_9bbb50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_9bbb70  (orig 0x9bbb70, struct-copy)
void main_f_9bbb70(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_9bc910  (orig 0x9bc910, ret_only)
void main_f_9bc910() {}

// sub_9bde40  (orig 0x9bde40, straight)
void main_f_9bde40(void* a0) {
    *(uint8_t*)((char*)(a0) + 52) = (uint8_t)(1);
}

// sub_9bde50  (orig 0x9bde50, compare)
bool main_f_9bde50(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 16)) == (uint64_t)(0); }

// sub_9be200  (orig 0x9be200, mov_ret)
uint32_t main_f_9be200() { return 1; }

// sub_9be840  (orig 0x9be840, ret_only)
void main_f_9be840() {}

// sub_9f9350  (orig 0x9f9350, compare)
bool main_f_9f9350(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 16)) == (uint64_t)(0); }

// sub_a37b70  (orig 0xa37b70, ret_only)
void main_f_a37b70() {}

// sub_a37b80  (orig 0xa37b80, ret_only)
void main_f_a37b80() {}

// sub_a37b90  (orig 0xa37b90, ret_only)
void main_f_a37b90() {}

// sub_a3cdd0  (orig 0xa3cdd0, ret_only)
void main_f_a3cdd0() {}

// sub_a3cde0  (orig 0xa3cde0, ret_only)
void main_f_a3cde0() {}

// sub_a3ec10  (orig 0xa3ec10, ret_only)
void main_f_a3ec10() {}

// sub_a40220  (orig 0xa40220, ret_only)
void main_f_a40220() {}

// sub_a40840  (orig 0xa40840, ret_only)
void main_f_a40840() {}

// sub_a40ab0  (orig 0xa40ab0, ret_only)
void main_f_a40ab0() {}

// sub_a41560  (orig 0xa41560, ret_only)
void main_f_a41560() {}

// sub_a41880  (orig 0xa41880, ret_only)
void main_f_a41880() {}

// sub_a42630  (orig 0xa42630, ret_only)
void main_f_a42630() {}

// sub_a42800  (orig 0xa42800, ret_only)
void main_f_a42800() {}

// sub_a42980  (orig 0xa42980, ret_only)
void main_f_a42980() {}

// sub_a42b50  (orig 0xa42b50, ret_only)
void main_f_a42b50() {}

// sub_a42cd0  (orig 0xa42cd0, ret_only)
void main_f_a42cd0() {}

// sub_a47fc0  (orig 0xa47fc0, ret_only)
void main_f_a47fc0() {}

// sub_a488f0  (orig 0xa488f0, ret_only)
void main_f_a488f0() {}

// sub_a49140  (orig 0xa49140, ret_only)
void main_f_a49140() {}

// sub_a497e0  (orig 0xa497e0, ret_only)
void main_f_a497e0() {}

// sub_a4c310  (orig 0xa4c310, ret_only)
void main_f_a4c310() {}

// sub_a4c9a0  (orig 0xa4c9a0, ret_only)
void main_f_a4c9a0() {}

// sub_a4ddb0  (orig 0xa4ddb0, ret_only)
void main_f_a4ddb0() {}

// sub_a4ddc0  (orig 0xa4ddc0, ret_only)
void main_f_a4ddc0() {}

// sub_a4e380  (orig 0xa4e380, ret_only)
void main_f_a4e380() {}

// sub_a4ea20  (orig 0xa4ea20, ret_only)
void main_f_a4ea20() {}

// sub_a4ebf0  (orig 0xa4ebf0, ret_only)
void main_f_a4ebf0() {}

// sub_a4f260  (orig 0xa4f260, ret_only)
void main_f_a4f260() {}

// sub_a51e30  (orig 0xa51e30, ret_only)
void main_f_a51e30() {}

// sub_a51e40  (orig 0xa51e40, ret_only)
void main_f_a51e40() {}

// sub_a51e50  (orig 0xa51e50, ret_only)
void main_f_a51e50() {}

// sub_a51e60  (orig 0xa51e60, ret_only)
void main_f_a51e60() {}

// sub_a51e70  (orig 0xa51e70, ret_only)
void main_f_a51e70() {}

// sub_a51e80  (orig 0xa51e80, ret_only)
void main_f_a51e80() {}

// sub_a51e90  (orig 0xa51e90, ret_only)
void main_f_a51e90() {}

// sub_a51ea0  (orig 0xa51ea0, ret_only)
void main_f_a51ea0() {}

// sub_a51eb0  (orig 0xa51eb0, ret_only)
void main_f_a51eb0() {}

// sub_a51ec0  (orig 0xa51ec0, ret_only)
void main_f_a51ec0() {}

// sub_a51ed0  (orig 0xa51ed0, ret_only)
void main_f_a51ed0() {}

// sub_a51ee0  (orig 0xa51ee0, ret_only)
void main_f_a51ee0() {}

// sub_a51ef0  (orig 0xa51ef0, ret_only)
void main_f_a51ef0() {}

// sub_a529a0  (orig 0xa529a0, ret_only)
void main_f_a529a0() {}

// sub_a53990  (orig 0xa53990, ret_only)
void main_f_a53990() {}

// sub_a53b30  (orig 0xa53b30, ret_only)
void main_f_a53b30() {}

// sub_a53b40  (orig 0xa53b40, ret_only)
void main_f_a53b40() {}

// sub_a5bb00  (orig 0xa5bb00, ret_only)
void main_f_a5bb00() {}

// sub_a5bb10  (orig 0xa5bb10, ret_only)
void main_f_a5bb10() {}

// sub_a5bb20  (orig 0xa5bb20, ret_only)
void main_f_a5bb20() {}

// sub_a5bb30  (orig 0xa5bb30, ret_only)
void main_f_a5bb30() {}

// sub_a5bb40  (orig 0xa5bb40, ret_only)
void main_f_a5bb40() {}

// sub_a5bb50  (orig 0xa5bb50, ret_only)
void main_f_a5bb50() {}

// sub_a5bb60  (orig 0xa5bb60, ret_only)
void main_f_a5bb60() {}

// sub_a5bb70  (orig 0xa5bb70, ret_only)
void main_f_a5bb70() {}

// sub_a5bb80  (orig 0xa5bb80, ret_only)
void main_f_a5bb80() {}

// sub_a5bb90  (orig 0xa5bb90, ret_only)
void main_f_a5bb90() {}

// sub_a5bba0  (orig 0xa5bba0, ret_only)
void main_f_a5bba0() {}

// sub_a5bbb0  (orig 0xa5bbb0, ret_only)
void main_f_a5bbb0() {}

// sub_a5bbc0  (orig 0xa5bbc0, ret_only)
void main_f_a5bbc0() {}

// sub_a5bbd0  (orig 0xa5bbd0, ret_only)
void main_f_a5bbd0() {}

// sub_a5bbe0  (orig 0xa5bbe0, ret_only)
void main_f_a5bbe0() {}

// sub_a5bbf0  (orig 0xa5bbf0, ret_only)
void main_f_a5bbf0() {}

// sub_a5bc00  (orig 0xa5bc00, ret_only)
void main_f_a5bc00() {}

// sub_a5bc10  (orig 0xa5bc10, ret_only)
void main_f_a5bc10() {}

// sub_a5bc20  (orig 0xa5bc20, ret_only)
void main_f_a5bc20() {}

// sub_a5bc30  (orig 0xa5bc30, ret_only)
void main_f_a5bc30() {}

// sub_a5bc90  (orig 0xa5bc90, ret_only)
void main_f_a5bc90() {}

// sub_a5bca0  (orig 0xa5bca0, ret_only)
void main_f_a5bca0() {}

// sub_a5d4e0  (orig 0xa5d4e0, ret_only)
void main_f_a5d4e0() {}

// sub_a5d4f0  (orig 0xa5d4f0, ret_only)
void main_f_a5d4f0() {}

// sub_a5d500  (orig 0xa5d500, ret_only)
void main_f_a5d500() {}

// sub_a5d510  (orig 0xa5d510, ret_only)
void main_f_a5d510() {}

// sub_a5d520  (orig 0xa5d520, ret_only)
void main_f_a5d520() {}

// sub_a5da20  (orig 0xa5da20, ret_only)
void main_f_a5da20() {}

// sub_a5ef70  (orig 0xa5ef70, ret_only)
void main_f_a5ef70() {}

// sub_a5f350  (orig 0xa5f350, ret_only)
void main_f_a5f350() {}

// sub_a5fb30  (orig 0xa5fb30, ret_only)
void main_f_a5fb30() {}

// sub_a5fb40  (orig 0xa5fb40, ret_only)
void main_f_a5fb40() {}

// sub_a5fb50  (orig 0xa5fb50, ret_only)
void main_f_a5fb50() {}

// sub_a5fb60  (orig 0xa5fb60, ret_only)
void main_f_a5fb60() {}

// sub_a5fb70  (orig 0xa5fb70, ret_only)
void main_f_a5fb70() {}

// sub_a5fb80  (orig 0xa5fb80, ret_only)
void main_f_a5fb80() {}

// sub_a5fb90  (orig 0xa5fb90, ret_only)
void main_f_a5fb90() {}

// sub_a61150  (orig 0xa61150, ret_only)
void main_f_a61150() {}

// sub_a61160  (orig 0xa61160, ret_only)
void main_f_a61160() {}

// sub_a61170  (orig 0xa61170, ret_only)
void main_f_a61170() {}

// sub_a61180  (orig 0xa61180, ret_only)
void main_f_a61180() {}

// sub_a61190  (orig 0xa61190, ret_only)
void main_f_a61190() {}

// sub_a61470  (orig 0xa61470, ret_only)
void main_f_a61470() {}

// sub_a63590  (orig 0xa63590, ret_only)
void main_f_a63590() {}

// sub_a635a0  (orig 0xa635a0, ret_only)
void main_f_a635a0() {}

// sub_a63760  (orig 0xa63760, ret_only)
void main_f_a63760() {}

// sub_a63770  (orig 0xa63770, ret_only)
void main_f_a63770() {}

// sub_a63780  (orig 0xa63780, ret_only)
void main_f_a63780() {}

// sub_a63790  (orig 0xa63790, ret_only)
void main_f_a63790() {}

// sub_a637a0  (orig 0xa637a0, ret_only)
void main_f_a637a0() {}

// sub_a637b0  (orig 0xa637b0, ret_only)
void main_f_a637b0() {}

// sub_a637c0  (orig 0xa637c0, ret_only)
void main_f_a637c0() {}

// sub_a637d0  (orig 0xa637d0, ret_only)
void main_f_a637d0() {}

// sub_a637e0  (orig 0xa637e0, ret_only)
void main_f_a637e0() {}

// sub_a637f0  (orig 0xa637f0, ret_only)
void main_f_a637f0() {}

// sub_a63800  (orig 0xa63800, ret_only)
void main_f_a63800() {}

// sub_a63810  (orig 0xa63810, ret_only)
void main_f_a63810() {}

// sub_a63820  (orig 0xa63820, ret_only)
void main_f_a63820() {}

// sub_a63830  (orig 0xa63830, ret_only)
void main_f_a63830() {}

// sub_a63840  (orig 0xa63840, ret_only)
void main_f_a63840() {}

// sub_a63850  (orig 0xa63850, ret_only)
void main_f_a63850() {}

// sub_a63860  (orig 0xa63860, ret_only)
void main_f_a63860() {}

// sub_a63870  (orig 0xa63870, ret_only)
void main_f_a63870() {}

// sub_a63880  (orig 0xa63880, ret_only)
void main_f_a63880() {}

// sub_a63890  (orig 0xa63890, ret_only)
void main_f_a63890() {}

// sub_a638a0  (orig 0xa638a0, ret_only)
void main_f_a638a0() {}

// sub_a638b0  (orig 0xa638b0, ret_only)
void main_f_a638b0() {}

// sub_a638c0  (orig 0xa638c0, ret_only)
void main_f_a638c0() {}

// sub_a638d0  (orig 0xa638d0, ret_only)
void main_f_a638d0() {}

// sub_a638e0  (orig 0xa638e0, ret_only)
void main_f_a638e0() {}

// sub_a638f0  (orig 0xa638f0, ret_only)
void main_f_a638f0() {}

// sub_a63900  (orig 0xa63900, ret_only)
void main_f_a63900() {}

// sub_a63910  (orig 0xa63910, ret_only)
void main_f_a63910() {}

// sub_a63920  (orig 0xa63920, ret_only)
void main_f_a63920() {}

// sub_a63930  (orig 0xa63930, ret_only)
void main_f_a63930() {}

// sub_a63940  (orig 0xa63940, ret_only)
void main_f_a63940() {}

// sub_a63950  (orig 0xa63950, ret_only)
void main_f_a63950() {}

// sub_a63960  (orig 0xa63960, ret_only)
void main_f_a63960() {}

// sub_a63970  (orig 0xa63970, ret_only)
void main_f_a63970() {}

// sub_a63980  (orig 0xa63980, ret_only)
void main_f_a63980() {}

// sub_a63990  (orig 0xa63990, ret_only)
void main_f_a63990() {}

// sub_a639a0  (orig 0xa639a0, ret_only)
void main_f_a639a0() {}

// sub_a639b0  (orig 0xa639b0, ret_only)
void main_f_a639b0() {}

// sub_a639c0  (orig 0xa639c0, ret_only)
void main_f_a639c0() {}

// sub_a639d0  (orig 0xa639d0, ret_only)
void main_f_a639d0() {}

// sub_a639e0  (orig 0xa639e0, ret_only)
void main_f_a639e0() {}

// sub_a639f0  (orig 0xa639f0, ret_only)
void main_f_a639f0() {}

// sub_a63a00  (orig 0xa63a00, ret_only)
void main_f_a63a00() {}

// sub_a63a10  (orig 0xa63a10, ret_only)
void main_f_a63a10() {}

// sub_a63a20  (orig 0xa63a20, ret_only)
void main_f_a63a20() {}

// sub_a63a30  (orig 0xa63a30, ret_only)
void main_f_a63a30() {}

// sub_a63a40  (orig 0xa63a40, ret_only)
void main_f_a63a40() {}

// sub_a63a50  (orig 0xa63a50, ret_only)
void main_f_a63a50() {}

// sub_a63a60  (orig 0xa63a60, ret_only)
void main_f_a63a60() {}

// sub_a63a70  (orig 0xa63a70, ret_only)
void main_f_a63a70() {}

// sub_a63a80  (orig 0xa63a80, ret_only)
void main_f_a63a80() {}

// sub_a63a90  (orig 0xa63a90, ret_only)
void main_f_a63a90() {}

// sub_a63aa0  (orig 0xa63aa0, ret_only)
void main_f_a63aa0() {}

// sub_a63ab0  (orig 0xa63ab0, ret_only)
void main_f_a63ab0() {}

// sub_a63ac0  (orig 0xa63ac0, ret_only)
void main_f_a63ac0() {}

// sub_a63ad0  (orig 0xa63ad0, ret_only)
void main_f_a63ad0() {}

// sub_a63ae0  (orig 0xa63ae0, ret_only)
void main_f_a63ae0() {}

// sub_a63af0  (orig 0xa63af0, ret_only)
void main_f_a63af0() {}

// sub_a63b00  (orig 0xa63b00, ret_only)
void main_f_a63b00() {}

// sub_a63b10  (orig 0xa63b10, ret_only)
void main_f_a63b10() {}

// sub_a63b20  (orig 0xa63b20, ret_only)
void main_f_a63b20() {}

// sub_a63b30  (orig 0xa63b30, ret_only)
void main_f_a63b30() {}

// sub_a63b40  (orig 0xa63b40, ret_only)
void main_f_a63b40() {}

// sub_a63b50  (orig 0xa63b50, ret_only)
void main_f_a63b50() {}

// sub_a63b60  (orig 0xa63b60, ret_only)
void main_f_a63b60() {}

// sub_a63b70  (orig 0xa63b70, ret_only)
void main_f_a63b70() {}

// sub_a63b80  (orig 0xa63b80, ret_only)
void main_f_a63b80() {}

// sub_a63b90  (orig 0xa63b90, ret_only)
void main_f_a63b90() {}

// sub_a63ba0  (orig 0xa63ba0, ret_only)
void main_f_a63ba0() {}

// sub_a63bb0  (orig 0xa63bb0, ret_only)
void main_f_a63bb0() {}

// sub_a63bc0  (orig 0xa63bc0, ret_only)
void main_f_a63bc0() {}

// sub_a63bd0  (orig 0xa63bd0, ret_only)
void main_f_a63bd0() {}

// sub_a63be0  (orig 0xa63be0, ret_only)
void main_f_a63be0() {}

// sub_a63bf0  (orig 0xa63bf0, ret_only)
void main_f_a63bf0() {}

// sub_a63c00  (orig 0xa63c00, ret_only)
void main_f_a63c00() {}

// sub_a63c10  (orig 0xa63c10, ret_only)
void main_f_a63c10() {}

// sub_a63c20  (orig 0xa63c20, ret_only)
void main_f_a63c20() {}

// sub_a63c30  (orig 0xa63c30, ret_only)
void main_f_a63c30() {}

// sub_a63c40  (orig 0xa63c40, ret_only)
void main_f_a63c40() {}

// sub_a63c50  (orig 0xa63c50, ret_only)
void main_f_a63c50() {}

// sub_a63c60  (orig 0xa63c60, ret_only)
void main_f_a63c60() {}

// sub_a63c70  (orig 0xa63c70, ret_only)
void main_f_a63c70() {}

// sub_a63c80  (orig 0xa63c80, ret_only)
void main_f_a63c80() {}

// sub_a63c90  (orig 0xa63c90, ret_only)
void main_f_a63c90() {}

// sub_a63ca0  (orig 0xa63ca0, ret_only)
void main_f_a63ca0() {}

// sub_a63cb0  (orig 0xa63cb0, ret_only)
void main_f_a63cb0() {}

// sub_a63cc0  (orig 0xa63cc0, ret_only)
void main_f_a63cc0() {}

// sub_a63cd0  (orig 0xa63cd0, ret_only)
void main_f_a63cd0() {}

// sub_a63ce0  (orig 0xa63ce0, ret_only)
void main_f_a63ce0() {}

// sub_a63cf0  (orig 0xa63cf0, ret_only)
void main_f_a63cf0() {}

// sub_a63d00  (orig 0xa63d00, ret_only)
void main_f_a63d00() {}

// sub_a63d10  (orig 0xa63d10, ret_only)
void main_f_a63d10() {}

// sub_a63d20  (orig 0xa63d20, ret_only)
void main_f_a63d20() {}

// sub_a63d30  (orig 0xa63d30, ret_only)
void main_f_a63d30() {}

// sub_a63d40  (orig 0xa63d40, ret_only)
void main_f_a63d40() {}

// sub_a63d50  (orig 0xa63d50, ret_only)
void main_f_a63d50() {}

// sub_a63d60  (orig 0xa63d60, ret_only)
void main_f_a63d60() {}

// sub_a63d70  (orig 0xa63d70, ret_only)
void main_f_a63d70() {}

// sub_a63d80  (orig 0xa63d80, ret_only)
void main_f_a63d80() {}

// sub_a63d90  (orig 0xa63d90, ret_only)
void main_f_a63d90() {}

// sub_a63da0  (orig 0xa63da0, ret_only)
void main_f_a63da0() {}

// sub_a63db0  (orig 0xa63db0, ret_only)
void main_f_a63db0() {}

// sub_a63dc0  (orig 0xa63dc0, ret_only)
void main_f_a63dc0() {}

// sub_a63dd0  (orig 0xa63dd0, ret_only)
void main_f_a63dd0() {}

// sub_a63de0  (orig 0xa63de0, ret_only)
void main_f_a63de0() {}

// sub_a63df0  (orig 0xa63df0, ret_only)
void main_f_a63df0() {}

// sub_a63e00  (orig 0xa63e00, ret_only)
void main_f_a63e00() {}

// sub_a63e10  (orig 0xa63e10, ret_only)
void main_f_a63e10() {}

// sub_a63e20  (orig 0xa63e20, ret_only)
void main_f_a63e20() {}

// sub_a63e30  (orig 0xa63e30, ret_only)
void main_f_a63e30() {}

// sub_a63e40  (orig 0xa63e40, ret_only)
void main_f_a63e40() {}

// sub_a63e50  (orig 0xa63e50, ret_only)
void main_f_a63e50() {}

// sub_a63e60  (orig 0xa63e60, ret_only)
void main_f_a63e60() {}

// sub_a63e70  (orig 0xa63e70, ret_only)
void main_f_a63e70() {}

// sub_a63e80  (orig 0xa63e80, ret_only)
void main_f_a63e80() {}

// sub_a63e90  (orig 0xa63e90, ret_only)
void main_f_a63e90() {}

// sub_a63ea0  (orig 0xa63ea0, ret_only)
void main_f_a63ea0() {}

// sub_a63eb0  (orig 0xa63eb0, ret_only)
void main_f_a63eb0() {}

// sub_a63ec0  (orig 0xa63ec0, ret_only)
void main_f_a63ec0() {}

// sub_a63ed0  (orig 0xa63ed0, ret_only)
void main_f_a63ed0() {}

// sub_a63ee0  (orig 0xa63ee0, ret_only)
void main_f_a63ee0() {}

// sub_a63ef0  (orig 0xa63ef0, ret_only)
void main_f_a63ef0() {}

// sub_a63f00  (orig 0xa63f00, ret_only)
void main_f_a63f00() {}

// sub_a63f10  (orig 0xa63f10, ret_only)
void main_f_a63f10() {}

// sub_a63f20  (orig 0xa63f20, ret_only)
void main_f_a63f20() {}

// sub_a63f30  (orig 0xa63f30, ret_only)
void main_f_a63f30() {}

// sub_a63f40  (orig 0xa63f40, ret_only)
void main_f_a63f40() {}

// sub_a63f50  (orig 0xa63f50, ret_only)
void main_f_a63f50() {}

// sub_a63f60  (orig 0xa63f60, ret_only)
void main_f_a63f60() {}

// sub_a63f70  (orig 0xa63f70, ret_only)
void main_f_a63f70() {}

// sub_a63f80  (orig 0xa63f80, ret_only)
void main_f_a63f80() {}

// sub_a63f90  (orig 0xa63f90, ret_only)
void main_f_a63f90() {}

// sub_a63fa0  (orig 0xa63fa0, ret_only)
void main_f_a63fa0() {}

// sub_a63fb0  (orig 0xa63fb0, ret_only)
void main_f_a63fb0() {}

// sub_a63fc0  (orig 0xa63fc0, ret_only)
void main_f_a63fc0() {}

// sub_a63fd0  (orig 0xa63fd0, ret_only)
void main_f_a63fd0() {}

// sub_a63fe0  (orig 0xa63fe0, ret_only)
void main_f_a63fe0() {}

// sub_a63ff0  (orig 0xa63ff0, ret_only)
void main_f_a63ff0() {}

// sub_a64000  (orig 0xa64000, ret_only)
void main_f_a64000() {}

// sub_a64010  (orig 0xa64010, ret_only)
void main_f_a64010() {}

// sub_a64020  (orig 0xa64020, ret_only)
void main_f_a64020() {}

// sub_a64030  (orig 0xa64030, ret_only)
void main_f_a64030() {}

// sub_a64040  (orig 0xa64040, ret_only)
void main_f_a64040() {}

// sub_a64050  (orig 0xa64050, ret_only)
void main_f_a64050() {}

// sub_a64060  (orig 0xa64060, ret_only)
void main_f_a64060() {}

// sub_a64070  (orig 0xa64070, ret_only)
void main_f_a64070() {}

// sub_a64080  (orig 0xa64080, ret_only)
void main_f_a64080() {}

// sub_a64090  (orig 0xa64090, ret_only)
void main_f_a64090() {}

// sub_a640a0  (orig 0xa640a0, ret_only)
void main_f_a640a0() {}

// sub_a640b0  (orig 0xa640b0, ret_only)
void main_f_a640b0() {}

// sub_a640c0  (orig 0xa640c0, ret_only)
void main_f_a640c0() {}

// sub_a640d0  (orig 0xa640d0, ret_only)
void main_f_a640d0() {}

// sub_a640e0  (orig 0xa640e0, ret_only)
void main_f_a640e0() {}

// sub_a640f0  (orig 0xa640f0, ret_only)
void main_f_a640f0() {}

// sub_a64100  (orig 0xa64100, ret_only)
void main_f_a64100() {}

// sub_a64110  (orig 0xa64110, ret_only)
void main_f_a64110() {}

// sub_a64120  (orig 0xa64120, ret_only)
void main_f_a64120() {}

// sub_a64130  (orig 0xa64130, ret_only)
void main_f_a64130() {}

// sub_a64140  (orig 0xa64140, ret_only)
void main_f_a64140() {}

// sub_a64150  (orig 0xa64150, ret_only)
void main_f_a64150() {}

// sub_a64160  (orig 0xa64160, ret_only)
void main_f_a64160() {}

// sub_a64170  (orig 0xa64170, ret_only)
void main_f_a64170() {}

// sub_a64180  (orig 0xa64180, ret_only)
void main_f_a64180() {}

// sub_a64190  (orig 0xa64190, ret_only)
void main_f_a64190() {}

// sub_a641a0  (orig 0xa641a0, ret_only)
void main_f_a641a0() {}

// sub_a641b0  (orig 0xa641b0, ret_only)
void main_f_a641b0() {}

// sub_a641c0  (orig 0xa641c0, ret_only)
void main_f_a641c0() {}

// sub_a641d0  (orig 0xa641d0, ret_only)
void main_f_a641d0() {}

// sub_a641e0  (orig 0xa641e0, ret_only)
void main_f_a641e0() {}

// sub_a641f0  (orig 0xa641f0, ret_only)
void main_f_a641f0() {}

// sub_a64200  (orig 0xa64200, ret_only)
void main_f_a64200() {}

// sub_a64210  (orig 0xa64210, ret_only)
void main_f_a64210() {}

// sub_a64220  (orig 0xa64220, ret_only)
void main_f_a64220() {}

// sub_a64230  (orig 0xa64230, ret_only)
void main_f_a64230() {}

// sub_a64240  (orig 0xa64240, ret_only)
void main_f_a64240() {}

// sub_a64250  (orig 0xa64250, ret_only)
void main_f_a64250() {}

// sub_a64260  (orig 0xa64260, ret_only)
void main_f_a64260() {}

// sub_a64270  (orig 0xa64270, ret_only)
void main_f_a64270() {}

// sub_a64280  (orig 0xa64280, ret_only)
void main_f_a64280() {}

// sub_a64290  (orig 0xa64290, ret_only)
void main_f_a64290() {}

// sub_a642a0  (orig 0xa642a0, ret_only)
void main_f_a642a0() {}

// sub_a642b0  (orig 0xa642b0, ret_only)
void main_f_a642b0() {}

// sub_a642c0  (orig 0xa642c0, ret_only)
void main_f_a642c0() {}

// sub_a642d0  (orig 0xa642d0, ret_only)
void main_f_a642d0() {}

// sub_a642e0  (orig 0xa642e0, ret_only)
void main_f_a642e0() {}

// sub_a642f0  (orig 0xa642f0, ret_only)
void main_f_a642f0() {}

// sub_a64300  (orig 0xa64300, ret_only)
void main_f_a64300() {}

// sub_a64310  (orig 0xa64310, ret_only)
void main_f_a64310() {}

// sub_a64320  (orig 0xa64320, ret_only)
void main_f_a64320() {}

// sub_a64330  (orig 0xa64330, ret_only)
void main_f_a64330() {}

// sub_a64340  (orig 0xa64340, ret_only)
void main_f_a64340() {}

// sub_a64350  (orig 0xa64350, ret_only)
void main_f_a64350() {}

// sub_a64360  (orig 0xa64360, ret_only)
void main_f_a64360() {}

// sub_a64370  (orig 0xa64370, ret_only)
void main_f_a64370() {}

// sub_a64380  (orig 0xa64380, ret_only)
void main_f_a64380() {}

// sub_a64390  (orig 0xa64390, ret_only)
void main_f_a64390() {}

// sub_a643a0  (orig 0xa643a0, ret_only)
void main_f_a643a0() {}

// sub_a643b0  (orig 0xa643b0, ret_only)
void main_f_a643b0() {}

// sub_a643c0  (orig 0xa643c0, ret_only)
void main_f_a643c0() {}

// sub_a643d0  (orig 0xa643d0, ret_only)
void main_f_a643d0() {}

// sub_a643e0  (orig 0xa643e0, ret_only)
void main_f_a643e0() {}

// sub_a643f0  (orig 0xa643f0, ret_only)
void main_f_a643f0() {}

// sub_a64400  (orig 0xa64400, ret_only)
void main_f_a64400() {}

// sub_a64410  (orig 0xa64410, ret_only)
void main_f_a64410() {}

// sub_a64420  (orig 0xa64420, ret_only)
void main_f_a64420() {}

// sub_a64430  (orig 0xa64430, ret_only)
void main_f_a64430() {}

// sub_a64440  (orig 0xa64440, ret_only)
void main_f_a64440() {}

// sub_a64450  (orig 0xa64450, ret_only)
void main_f_a64450() {}

// sub_a64460  (orig 0xa64460, ret_only)
void main_f_a64460() {}

// sub_a64470  (orig 0xa64470, ret_only)
void main_f_a64470() {}

// sub_a64480  (orig 0xa64480, ret_only)
void main_f_a64480() {}

// sub_a64490  (orig 0xa64490, ret_only)
void main_f_a64490() {}

// sub_a644a0  (orig 0xa644a0, ret_only)
void main_f_a644a0() {}

// sub_a644b0  (orig 0xa644b0, ret_only)
void main_f_a644b0() {}

// sub_a644c0  (orig 0xa644c0, ret_only)
void main_f_a644c0() {}

// sub_a644d0  (orig 0xa644d0, ret_only)
void main_f_a644d0() {}

// sub_a644e0  (orig 0xa644e0, ret_only)
void main_f_a644e0() {}

// sub_a644f0  (orig 0xa644f0, ret_only)
void main_f_a644f0() {}

// sub_a64500  (orig 0xa64500, ret_only)
void main_f_a64500() {}

// sub_a64510  (orig 0xa64510, ret_only)
void main_f_a64510() {}

// sub_a64520  (orig 0xa64520, ret_only)
void main_f_a64520() {}

// sub_a64530  (orig 0xa64530, ret_only)
void main_f_a64530() {}

// sub_a64540  (orig 0xa64540, ret_only)
void main_f_a64540() {}

// sub_a64550  (orig 0xa64550, ret_only)
void main_f_a64550() {}

// sub_a64560  (orig 0xa64560, ret_only)
void main_f_a64560() {}

// sub_a64570  (orig 0xa64570, ret_only)
void main_f_a64570() {}

// sub_a64580  (orig 0xa64580, ret_only)
void main_f_a64580() {}

// sub_a64590  (orig 0xa64590, ret_only)
void main_f_a64590() {}

// sub_a645a0  (orig 0xa645a0, ret_only)
void main_f_a645a0() {}

// sub_a645b0  (orig 0xa645b0, ret_only)
void main_f_a645b0() {}

// sub_a645c0  (orig 0xa645c0, ret_only)
void main_f_a645c0() {}

// sub_a645d0  (orig 0xa645d0, ret_only)
void main_f_a645d0() {}

// sub_a645e0  (orig 0xa645e0, ret_only)
void main_f_a645e0() {}

// sub_a645f0  (orig 0xa645f0, ret_only)
void main_f_a645f0() {}

// sub_a64600  (orig 0xa64600, ret_only)
void main_f_a64600() {}

// sub_a64610  (orig 0xa64610, ret_only)
void main_f_a64610() {}

// sub_a64620  (orig 0xa64620, ret_only)
void main_f_a64620() {}

// sub_a64630  (orig 0xa64630, ret_only)
void main_f_a64630() {}

// sub_a64640  (orig 0xa64640, ret_only)
void main_f_a64640() {}

// sub_a64650  (orig 0xa64650, ret_only)
void main_f_a64650() {}

// sub_a64660  (orig 0xa64660, ret_only)
void main_f_a64660() {}

// sub_a64670  (orig 0xa64670, ret_only)
void main_f_a64670() {}

// sub_a64680  (orig 0xa64680, ret_only)
void main_f_a64680() {}

// sub_a64690  (orig 0xa64690, ret_only)
void main_f_a64690() {}

// sub_a646a0  (orig 0xa646a0, ret_only)
void main_f_a646a0() {}

// sub_a646b0  (orig 0xa646b0, ret_only)
void main_f_a646b0() {}

// sub_a646c0  (orig 0xa646c0, ret_only)
void main_f_a646c0() {}

// sub_a646d0  (orig 0xa646d0, ret_only)
void main_f_a646d0() {}

// sub_a646e0  (orig 0xa646e0, ret_only)
void main_f_a646e0() {}

// sub_a646f0  (orig 0xa646f0, ret_only)
void main_f_a646f0() {}

// sub_a64700  (orig 0xa64700, ret_only)
void main_f_a64700() {}

// sub_a64710  (orig 0xa64710, ret_only)
void main_f_a64710() {}

// sub_a64720  (orig 0xa64720, ret_only)
void main_f_a64720() {}

// sub_a64730  (orig 0xa64730, ret_only)
void main_f_a64730() {}

// sub_a64740  (orig 0xa64740, ret_only)
void main_f_a64740() {}

// sub_a64750  (orig 0xa64750, ret_only)
void main_f_a64750() {}

// sub_a64760  (orig 0xa64760, ret_only)
void main_f_a64760() {}

// sub_a64770  (orig 0xa64770, ret_only)
void main_f_a64770() {}

// sub_a64780  (orig 0xa64780, ret_only)
void main_f_a64780() {}

// sub_a64790  (orig 0xa64790, ret_only)
void main_f_a64790() {}

// sub_a647a0  (orig 0xa647a0, ret_only)
void main_f_a647a0() {}

// sub_a647b0  (orig 0xa647b0, ret_only)
void main_f_a647b0() {}

// sub_a647c0  (orig 0xa647c0, ret_only)
void main_f_a647c0() {}

// sub_a647d0  (orig 0xa647d0, ret_only)
void main_f_a647d0() {}

// sub_a647e0  (orig 0xa647e0, ret_only)
void main_f_a647e0() {}

// sub_a647f0  (orig 0xa647f0, ret_only)
void main_f_a647f0() {}

// sub_a64800  (orig 0xa64800, ret_only)
void main_f_a64800() {}

// sub_a64810  (orig 0xa64810, ret_only)
void main_f_a64810() {}

// sub_a64820  (orig 0xa64820, ret_only)
void main_f_a64820() {}

// sub_a64830  (orig 0xa64830, ret_only)
void main_f_a64830() {}

// sub_a64840  (orig 0xa64840, ret_only)
void main_f_a64840() {}

// sub_a64850  (orig 0xa64850, ret_only)
void main_f_a64850() {}

// sub_a64860  (orig 0xa64860, ret_only)
void main_f_a64860() {}

// sub_a64870  (orig 0xa64870, ret_only)
void main_f_a64870() {}

// sub_a64880  (orig 0xa64880, ret_only)
void main_f_a64880() {}

// sub_a64890  (orig 0xa64890, ret_only)
void main_f_a64890() {}

// sub_a648a0  (orig 0xa648a0, ret_only)
void main_f_a648a0() {}

// sub_a648b0  (orig 0xa648b0, ret_only)
void main_f_a648b0() {}

// sub_a648c0  (orig 0xa648c0, ret_only)
void main_f_a648c0() {}

// sub_a648d0  (orig 0xa648d0, ret_only)
void main_f_a648d0() {}

// sub_a648e0  (orig 0xa648e0, ret_only)
void main_f_a648e0() {}

// sub_a648f0  (orig 0xa648f0, ret_only)
void main_f_a648f0() {}

// sub_a64900  (orig 0xa64900, ret_only)
void main_f_a64900() {}

// sub_a64910  (orig 0xa64910, ret_only)
void main_f_a64910() {}

// sub_a64920  (orig 0xa64920, ret_only)
void main_f_a64920() {}

// sub_a64930  (orig 0xa64930, ret_only)
void main_f_a64930() {}

// sub_a64940  (orig 0xa64940, ret_only)
void main_f_a64940() {}

// sub_a64950  (orig 0xa64950, ret_only)
void main_f_a64950() {}

// sub_a64960  (orig 0xa64960, ret_only)
void main_f_a64960() {}

// sub_a64970  (orig 0xa64970, ret_only)
void main_f_a64970() {}

// sub_a64980  (orig 0xa64980, ret_only)
void main_f_a64980() {}

// sub_a64990  (orig 0xa64990, ret_only)
void main_f_a64990() {}

// sub_a649a0  (orig 0xa649a0, ret_only)
void main_f_a649a0() {}

// sub_a649b0  (orig 0xa649b0, ret_only)
void main_f_a649b0() {}

// sub_a649c0  (orig 0xa649c0, ret_only)
void main_f_a649c0() {}

// sub_a649d0  (orig 0xa649d0, ret_only)
void main_f_a649d0() {}

// sub_a649e0  (orig 0xa649e0, ret_only)
void main_f_a649e0() {}

// sub_a649f0  (orig 0xa649f0, ret_only)
void main_f_a649f0() {}

// sub_a64a00  (orig 0xa64a00, ret_only)
void main_f_a64a00() {}

// sub_a64a10  (orig 0xa64a10, ret_only)
void main_f_a64a10() {}

// sub_a64a20  (orig 0xa64a20, ret_only)
void main_f_a64a20() {}

// sub_a64a30  (orig 0xa64a30, ret_only)
void main_f_a64a30() {}

// sub_a64a40  (orig 0xa64a40, ret_only)
void main_f_a64a40() {}

// sub_a64a50  (orig 0xa64a50, ret_only)
void main_f_a64a50() {}

// sub_a64a60  (orig 0xa64a60, ret_only)
void main_f_a64a60() {}

// sub_a64a70  (orig 0xa64a70, ret_only)
void main_f_a64a70() {}

// sub_a64a80  (orig 0xa64a80, ret_only)
void main_f_a64a80() {}

// sub_a64a90  (orig 0xa64a90, ret_only)
void main_f_a64a90() {}

// sub_a64aa0  (orig 0xa64aa0, ret_only)
void main_f_a64aa0() {}

// sub_a64ab0  (orig 0xa64ab0, ret_only)
void main_f_a64ab0() {}

// sub_a64ac0  (orig 0xa64ac0, ret_only)
void main_f_a64ac0() {}

// sub_a64ad0  (orig 0xa64ad0, ret_only)
void main_f_a64ad0() {}

// sub_a64ae0  (orig 0xa64ae0, ret_only)
void main_f_a64ae0() {}

// sub_a64af0  (orig 0xa64af0, ret_only)
void main_f_a64af0() {}

// sub_a64b00  (orig 0xa64b00, ret_only)
void main_f_a64b00() {}

// sub_a64b10  (orig 0xa64b10, ret_only)
void main_f_a64b10() {}

// sub_a64b20  (orig 0xa64b20, ret_only)
void main_f_a64b20() {}

// sub_a64b30  (orig 0xa64b30, ret_only)
void main_f_a64b30() {}

// sub_a64b40  (orig 0xa64b40, ret_only)
void main_f_a64b40() {}

// sub_a64b50  (orig 0xa64b50, ret_only)
void main_f_a64b50() {}

// sub_a64b60  (orig 0xa64b60, ret_only)
void main_f_a64b60() {}

// sub_a64b70  (orig 0xa64b70, ret_only)
void main_f_a64b70() {}

// sub_a64b80  (orig 0xa64b80, ret_only)
void main_f_a64b80() {}

// sub_a64b90  (orig 0xa64b90, ret_only)
void main_f_a64b90() {}

// sub_a64ba0  (orig 0xa64ba0, ret_only)
void main_f_a64ba0() {}

// sub_a64bb0  (orig 0xa64bb0, ret_only)
void main_f_a64bb0() {}

// sub_a64bc0  (orig 0xa64bc0, ret_only)
void main_f_a64bc0() {}

// sub_a64bd0  (orig 0xa64bd0, ret_only)
void main_f_a64bd0() {}

// sub_a64be0  (orig 0xa64be0, ret_only)
void main_f_a64be0() {}

// sub_a64bf0  (orig 0xa64bf0, ret_only)
void main_f_a64bf0() {}

// sub_a64c00  (orig 0xa64c00, ret_only)
void main_f_a64c00() {}

// sub_a64c10  (orig 0xa64c10, ret_only)
void main_f_a64c10() {}

// sub_a64c20  (orig 0xa64c20, ret_only)
void main_f_a64c20() {}

// sub_a64c30  (orig 0xa64c30, ret_only)
void main_f_a64c30() {}

// sub_a64c40  (orig 0xa64c40, ret_only)
void main_f_a64c40() {}

// sub_a64c50  (orig 0xa64c50, ret_only)
void main_f_a64c50() {}

// sub_a64c60  (orig 0xa64c60, ret_only)
void main_f_a64c60() {}

// sub_a64c70  (orig 0xa64c70, ret_only)
void main_f_a64c70() {}

// sub_a64c80  (orig 0xa64c80, ret_only)
void main_f_a64c80() {}

// sub_a64c90  (orig 0xa64c90, ret_only)
void main_f_a64c90() {}

// sub_a64ca0  (orig 0xa64ca0, ret_only)
void main_f_a64ca0() {}

// sub_a64cb0  (orig 0xa64cb0, ret_only)
void main_f_a64cb0() {}

// sub_a64cc0  (orig 0xa64cc0, ret_only)
void main_f_a64cc0() {}

// sub_a64cd0  (orig 0xa64cd0, ret_only)
void main_f_a64cd0() {}

// sub_a64ce0  (orig 0xa64ce0, ret_only)
void main_f_a64ce0() {}

// sub_a64cf0  (orig 0xa64cf0, ret_only)
void main_f_a64cf0() {}

// sub_a64d00  (orig 0xa64d00, ret_only)
void main_f_a64d00() {}

// sub_a64d10  (orig 0xa64d10, ret_only)
void main_f_a64d10() {}

// sub_a64d20  (orig 0xa64d20, ret_only)
void main_f_a64d20() {}

// sub_a64d30  (orig 0xa64d30, ret_only)
void main_f_a64d30() {}

// sub_a64d40  (orig 0xa64d40, ret_only)
void main_f_a64d40() {}

// sub_a64d50  (orig 0xa64d50, ret_only)
void main_f_a64d50() {}

// sub_a64d60  (orig 0xa64d60, ret_only)
void main_f_a64d60() {}

// sub_a64d70  (orig 0xa64d70, ret_only)
void main_f_a64d70() {}

// sub_a64d80  (orig 0xa64d80, ret_only)
void main_f_a64d80() {}

// sub_a64d90  (orig 0xa64d90, ret_only)
void main_f_a64d90() {}

// sub_a64da0  (orig 0xa64da0, ret_only)
void main_f_a64da0() {}

// sub_a64db0  (orig 0xa64db0, ret_only)
void main_f_a64db0() {}

// sub_a64dc0  (orig 0xa64dc0, ret_only)
void main_f_a64dc0() {}

// sub_a64dd0  (orig 0xa64dd0, ret_only)
void main_f_a64dd0() {}

// sub_a64de0  (orig 0xa64de0, ret_only)
void main_f_a64de0() {}

// sub_a64df0  (orig 0xa64df0, ret_only)
void main_f_a64df0() {}

// sub_a64e00  (orig 0xa64e00, ret_only)
void main_f_a64e00() {}

// sub_a64e10  (orig 0xa64e10, ret_only)
void main_f_a64e10() {}

// sub_a64e20  (orig 0xa64e20, ret_only)
void main_f_a64e20() {}

// sub_a64e30  (orig 0xa64e30, ret_only)
void main_f_a64e30() {}

// sub_a64e40  (orig 0xa64e40, ret_only)
void main_f_a64e40() {}

// sub_a64e50  (orig 0xa64e50, ret_only)
void main_f_a64e50() {}

// sub_a64e60  (orig 0xa64e60, ret_only)
void main_f_a64e60() {}

// sub_a64e70  (orig 0xa64e70, ret_only)
void main_f_a64e70() {}

// sub_a64e80  (orig 0xa64e80, ret_only)
void main_f_a64e80() {}

// sub_a64e90  (orig 0xa64e90, ret_only)
void main_f_a64e90() {}

// sub_a64ea0  (orig 0xa64ea0, ret_only)
void main_f_a64ea0() {}

// sub_a64eb0  (orig 0xa64eb0, ret_only)
void main_f_a64eb0() {}

// sub_a64ec0  (orig 0xa64ec0, ret_only)
void main_f_a64ec0() {}

// sub_a64ed0  (orig 0xa64ed0, ret_only)
void main_f_a64ed0() {}

// sub_a64ee0  (orig 0xa64ee0, ret_only)
void main_f_a64ee0() {}

// sub_a64ef0  (orig 0xa64ef0, ret_only)
void main_f_a64ef0() {}

// sub_a64f00  (orig 0xa64f00, ret_only)
void main_f_a64f00() {}

// sub_a64f10  (orig 0xa64f10, ret_only)
void main_f_a64f10() {}

// sub_a64f20  (orig 0xa64f20, ret_only)
void main_f_a64f20() {}

// sub_a64f30  (orig 0xa64f30, ret_only)
void main_f_a64f30() {}

// sub_a64f40  (orig 0xa64f40, ret_only)
void main_f_a64f40() {}

// sub_a64f50  (orig 0xa64f50, ret_only)
void main_f_a64f50() {}

// sub_a64f60  (orig 0xa64f60, ret_only)
void main_f_a64f60() {}

// sub_a64f70  (orig 0xa64f70, ret_only)
void main_f_a64f70() {}

// sub_a64f80  (orig 0xa64f80, ret_only)
void main_f_a64f80() {}

// sub_a64f90  (orig 0xa64f90, ret_only)
void main_f_a64f90() {}

// sub_a64fa0  (orig 0xa64fa0, ret_only)
void main_f_a64fa0() {}

// sub_a64fb0  (orig 0xa64fb0, ret_only)
void main_f_a64fb0() {}

// sub_a64fc0  (orig 0xa64fc0, ret_only)
void main_f_a64fc0() {}

// sub_a64fd0  (orig 0xa64fd0, ret_only)
void main_f_a64fd0() {}

// sub_a64ff0  (orig 0xa64ff0, ret_only)
void main_f_a64ff0() {}

// sub_a65000  (orig 0xa65000, copy2)
void main_f_a65000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65010  (orig 0xa65010, copy2)
void main_f_a65010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65030  (orig 0xa65030, ret_only)
void main_f_a65030() {}

// sub_a65040  (orig 0xa65040, copy2)
void main_f_a65040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65050  (orig 0xa65050, copy2)
void main_f_a65050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65290  (orig 0xa65290, ret_only)
void main_f_a65290() {}

// sub_a652a0  (orig 0xa652a0, copy2)
void main_f_a652a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a652b0  (orig 0xa652b0, copy2)
void main_f_a652b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a652d0  (orig 0xa652d0, ret_only)
void main_f_a652d0() {}

// sub_a652e0  (orig 0xa652e0, copy2)
void main_f_a652e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a652f0  (orig 0xa652f0, copy2)
void main_f_a652f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65310  (orig 0xa65310, ret_only)
void main_f_a65310() {}

// sub_a65320  (orig 0xa65320, copy2)
void main_f_a65320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65330  (orig 0xa65330, copy2)
void main_f_a65330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a654a0  (orig 0xa654a0, ret_only)
void main_f_a654a0() {}

// sub_a654b0  (orig 0xa654b0, copy2)
void main_f_a654b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a654c0  (orig 0xa654c0, copy2)
void main_f_a654c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65630  (orig 0xa65630, ret_only)
void main_f_a65630() {}

// sub_a65640  (orig 0xa65640, copy2)
void main_f_a65640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65650  (orig 0xa65650, copy2)
void main_f_a65650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a657c0  (orig 0xa657c0, ret_only)
void main_f_a657c0() {}

// sub_a657d0  (orig 0xa657d0, copy2)
void main_f_a657d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a657e0  (orig 0xa657e0, copy2)
void main_f_a657e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65810  (orig 0xa65810, ret_only)
void main_f_a65810() {}

// sub_a65820  (orig 0xa65820, copy2)
void main_f_a65820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65830  (orig 0xa65830, copy2)
void main_f_a65830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65860  (orig 0xa65860, ret_only)
void main_f_a65860() {}

// sub_a65870  (orig 0xa65870, copy2)
void main_f_a65870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65880  (orig 0xa65880, copy2)
void main_f_a65880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a658b0  (orig 0xa658b0, ret_only)
void main_f_a658b0() {}

// sub_a658c0  (orig 0xa658c0, copy2)
void main_f_a658c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a658d0  (orig 0xa658d0, copy2)
void main_f_a658d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65900  (orig 0xa65900, ret_only)
void main_f_a65900() {}

// sub_a65910  (orig 0xa65910, copy2)
void main_f_a65910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65920  (orig 0xa65920, copy2)
void main_f_a65920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65950  (orig 0xa65950, ret_only)
void main_f_a65950() {}

// sub_a65960  (orig 0xa65960, copy2)
void main_f_a65960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65970  (orig 0xa65970, copy2)
void main_f_a65970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a659a0  (orig 0xa659a0, ret_only)
void main_f_a659a0() {}

// sub_a659b0  (orig 0xa659b0, copy2)
void main_f_a659b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a659c0  (orig 0xa659c0, copy2)
void main_f_a659c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65bf0  (orig 0xa65bf0, ret_only)
void main_f_a65bf0() {}

// sub_a65c30  (orig 0xa65c30, ret_only)
void main_f_a65c30() {}

// sub_a65c40  (orig 0xa65c40, copy2)
void main_f_a65c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65c50  (orig 0xa65c50, copy2)
void main_f_a65c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65dc0  (orig 0xa65dc0, ret_only)
void main_f_a65dc0() {}

// sub_a65dd0  (orig 0xa65dd0, copy2)
void main_f_a65dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

