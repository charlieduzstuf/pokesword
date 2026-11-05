/* sdk -- 360 functions verified to match the original.
 *
 * These bodies were synthesised from the instruction stream by
 * tools/auto_match.py and confirmed by compiling them for
 * aarch64-none-elf and comparing against data/sdk.elf with
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

/* Self-contained preamble: a bare-metal aarch64-none-elf target has no
 * <stdint.h> under -nostdinc++, and a decomp translation unit should not depend
 * on a hosted C library anyway. */
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
/* A 32-byte aggregate of two NEON vectors. `stp q0, q0, [x0]` is ONE register
 * stored twice, so the C has to be a two-field struct -- a 16-byte store emits
 * `str q0, [x0]` instead. Measured, clang 5.0.1 -O3. */
struct Q2 { uint64x2_t a, b; };


// sub_43db60  (orig 0x43db60, setter-chain-zero)
void sdk_f_43db60(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint64_t*)((char*)a0 + 48) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 56) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 60) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 40) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 64) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 88) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 72) = (struct u64x2){ 0, 0 };
}

// sub_4406c0  (orig 0x4406c0, mov_ret)
uint32_t sdk_f_4406c0() { return 0; }

// sub_4406d0  (orig 0x4406d0, mov_ret)
uint32_t sdk_f_4406d0() { return 0; }

// sub_4406e0  (orig 0x4406e0, mov_ret)
uint32_t sdk_f_4406e0() { return 0; }

// sub_4406f0  (orig 0x4406f0, mov_ret)
uint32_t sdk_f_4406f0() { return 0; }

// sub_440700  (orig 0x440700, mov_ret)
uint32_t sdk_f_440700() { return 0; }

// sub_440710  (orig 0x440710, mov_ret)
uint32_t sdk_f_440710() { return 0; }

// sub_440720  (orig 0x440720, mov_ret)
uint32_t sdk_f_440720() { return 0; }

// sub_440730  (orig 0x440730, mov_ret)
uint32_t sdk_f_440730() { return 0; }

// sub_440740  (orig 0x440740, mov_ret)
uint32_t sdk_f_440740() { return 0; }

// sub_440750  (orig 0x440750, mov_ret)
uint32_t sdk_f_440750() { return 0; }

// sub_440760  (orig 0x440760, mov_ret)
uint32_t sdk_f_440760() { return 0; }

// sub_440770  (orig 0x440770, mov_ret)
uint32_t sdk_f_440770() { return 0; }

// sub_440780  (orig 0x440780, mov_ret)
uint32_t sdk_f_440780() { return 0; }

// sub_440790  (orig 0x440790, mov_ret)
uint32_t sdk_f_440790() { return 0; }

// sub_4407a0  (orig 0x4407a0, mov_ret)
uint32_t sdk_f_4407a0() { return 1; }

// sub_4407b0  (orig 0x4407b0, mov_ret)
uint32_t sdk_f_4407b0() { return 1; }

// bad_any_cast  (orig 0x44d400, strlit-ret)
const char *sdk_f_44d400() { static char g_f_44d400[1]; __asm__ volatile("" ::: "memory"); return g_f_44d400; }

// bad_any_cast_2  (orig 0x44d410, strlit-ret)
const char *sdk_f_44d410() { static char g_f_44d410[1]; __asm__ volatile("" ::: "memory"); return g_f_44d410; }

// sub_44dc58  (orig 0x44dc58, straight-line)
uint64_t sdk_f_44dc58(uint64_t a0) { return (((uint64_t)a0)) * (1000000); }

// future  (orig 0x44ffc0, strlit-ret)
const char *sdk_f_44ffc0() { static char g_f_44ffc0[1]; __asm__ volatile("" ::: "memory"); return g_f_44ffc0; }

// sub_452060  (orig 0x452060, straight)
void sdk_f_452060(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 16) = 2;
}

// sub_452070  (orig 0x452070, ptr_add)
void* sdk_f_452070(void* a0) { return (char*)a0 + 8; }

// sub_452e20  (orig 0x452e20, indirect-tailcall)
void sdk_f_452e20(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 48)))))(((uintptr_t)(a0)));
}

// sub_453180  (orig 0x453180, straight)
void sdk_f_453180(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    *(uint64_t*)((char*)(a0) + 24) = (uint64_t)(((char *)(char*)(p0) + (uintptr_t)(((int32_t)a1)) * 1));
}

// sub_453190  (orig 0x453190, setter-chain)
void sdk_f_453190(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint64_t*)((char*)(a0) + 24) = a2; *(uint64_t*)((char*)(a0) + 32) = a3; }

// sub_4531a0  (orig 0x4531a0, straight)
void sdk_f_4531a0(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 48));
    *(uint64_t*)((char*)(a0) + 48) = (uint64_t)(((char *)(char*)(p0) + (uintptr_t)(((int32_t)a1)) * 1));
}

// sub_4531b0  (orig 0x4531b0, setter-chain)
void sdk_f_4531b0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 40) = a1; *(uint64_t*)((char*)(a0) + 48) = a1; *(uint64_t*)((char*)(a0) + 56) = a2; }

// sub_4531c0  (orig 0x4531c0, ret_only)
void sdk_f_4531c0() {}

// sub_4531c8  (orig 0x4531c8, ret_only)
void sdk_f_4531c8() {}

// sub_4531d0  (orig 0x4531d0, straight)
uint64_t sdk_f_4531d0() { return 0; }

// sub_4531e0  (orig 0x4531e0, straight)
uint64_t sdk_f_4531e0() { return 0; }

// sub_4531f0  (orig 0x4531f0, mov_ret)
uint32_t sdk_f_4531f0() { return 0; }

// sub_4531f8  (orig 0x4531f8, mov_ret)
uint64_t sdk_f_4531f8() { return 0; }

// sub_4532d0  (orig 0x4532d0, mov_ret)
uint32_t sdk_f_4532d0() { return -1; }

// sub_453318  (orig 0x453318, mov_ret)
uint32_t sdk_f_453318() { return -1; }

// sub_4533e8  (orig 0x4533e8, mov_ret)
uint32_t sdk_f_4533e8() { return -1; }

// sub_453480  (orig 0x453480, indirect-tailcall)
void sdk_f_453480(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 48)))))(((uintptr_t)(a0)));
}

// sub_4537f0  (orig 0x4537f0, straight)
void sdk_f_4537f0(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    *(uint64_t*)((char*)(a0) + 24) = (uint64_t)(((char *)(char*)(p0) + (uintptr_t)(((int32_t)a1)) * 4));
}

// sub_453800  (orig 0x453800, setter-chain)
void sdk_f_453800(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint64_t*)((char*)(a0) + 24) = a2; *(uint64_t*)((char*)(a0) + 32) = a3; }

// sub_453810  (orig 0x453810, straight)
void sdk_f_453810(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 48));
    *(uint64_t*)((char*)(a0) + 48) = (uint64_t)(((char *)(char*)(p0) + (uintptr_t)(((int32_t)a1)) * 4));
}

// sub_453820  (orig 0x453820, setter-chain)
void sdk_f_453820(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 40) = a1; *(uint64_t*)((char*)(a0) + 48) = a1; *(uint64_t*)((char*)(a0) + 56) = a2; }

// sub_453830  (orig 0x453830, ret_only)
void sdk_f_453830() {}

// sub_453838  (orig 0x453838, ret_only)
void sdk_f_453838() {}

// sub_453840  (orig 0x453840, straight)
uint64_t sdk_f_453840() { return 0; }

// sub_453850  (orig 0x453850, straight)
uint64_t sdk_f_453850() { return 0; }

// sub_453860  (orig 0x453860, mov_ret)
uint32_t sdk_f_453860() { return 0; }

// sub_453868  (orig 0x453868, mov_ret)
uint64_t sdk_f_453868() { return 0; }

// sub_453950  (orig 0x453950, mov_ret)
uint32_t sdk_f_453950() { return -1; }

// sub_453998  (orig 0x453998, mov_ret)
uint32_t sdk_f_453998() { return -1; }

// sub_453a70  (orig 0x453a70, mov_ret)
uint32_t sdk_f_453a70() { return -1; }

// sub_453b88  (orig 0x453b88, ret_only)
void sdk_f_453b88() {}

// sub_4567d8  (orig 0x4567d8, ret_only)
void sdk_f_4567d8() {}

// sub_4593d8  (orig 0x4593d8, ret_only)
void sdk_f_4593d8() {}

// sub_45b4e0  (orig 0x45b4e0, ret_only)
void sdk_f_45b4e0() {}

// sub_45d688  (orig 0x45d688, ret_only)
void sdk_f_45d688() {}

// iostream  (orig 0x45d7a0, strlit-ret)
const char *sdk_f_45d7a0() { static char g_f_45d7a0[1]; __asm__ volatile("" ::: "memory"); return g_f_45d7a0; }

// sub_46c5f0  (orig 0x46c5f0, mov_ret)
uint32_t sdk_f_46c5f0() { return 2; }

// sub_46e4b0  (orig 0x46e4b0, mov_ret)
uint32_t sdk_f_46e4b0() { return 2; }

// sub_4717b0  (orig 0x4717b0, ptr_add)
void* sdk_f_4717b0(void* a0) { return (char*)a0 + 32; }

// sub_4717b8  (orig 0x4717b8, ptr_add)
void* sdk_f_4717b8(void* a0) { return (char*)a0 + 16; }

// sub_4717c0  (orig 0x4717c0, ptr_add)
void* sdk_f_4717c0(void* a0) { return (char*)a0 + 368; }

// sub_4717c8  (orig 0x4717c8, ptr_add)
void* sdk_f_4717c8(void* a0) { return (char*)a0 + 352; }

// sub_4717d0  (orig 0x4717d0, ptr_add)
void* sdk_f_4717d0(void* a0) { return (char*)a0 + 944; }

// sub_4717d8  (orig 0x4717d8, ptr_add)
void* sdk_f_4717d8(void* a0) { return (char*)a0 + 928; }

// sub_4717e0  (orig 0x4717e0, ptr_add)
void* sdk_f_4717e0(void* a0) { return (char*)a0 + 992; }

// sub_4717e8  (orig 0x4717e8, ptr_add)
void* sdk_f_4717e8(void* a0) { return (char*)a0 + 976; }

// sub_4717f0  (orig 0x4717f0, ptr_add)
void* sdk_f_4717f0(void* a0) { return (char*)a0 + 1016; }

// sub_4717f8  (orig 0x4717f8, ptr_add)
void* sdk_f_4717f8(void* a0) { return (char*)a0 + 1000; }

// sub_471800  (orig 0x471800, ptr_add)
void* sdk_f_471800(void* a0) { return (char*)a0 + 1040; }

// sub_471808  (orig 0x471808, ptr_add)
void* sdk_f_471808(void* a0) { return (char*)a0 + 1024; }

// sub_471810  (orig 0x471810, ptr_add)
void* sdk_f_471810(void* a0) { return (char*)a0 + 1064; }

// sub_471818  (orig 0x471818, ptr_add)
void* sdk_f_471818(void* a0) { return (char*)a0 + 1048; }

// sub_4730d8  (orig 0x4730d8, ptr_add)
void* sdk_f_4730d8(void* a0) { return (char*)a0 + 32; }

// sub_4730e0  (orig 0x4730e0, ptr_add)
void* sdk_f_4730e0(void* a0) { return (char*)a0 + 16; }

// sub_4730e8  (orig 0x4730e8, ptr_add)
void* sdk_f_4730e8(void* a0) { return (char*)a0 + 368; }

// sub_4730f0  (orig 0x4730f0, ptr_add)
void* sdk_f_4730f0(void* a0) { return (char*)a0 + 352; }

// sub_4730f8  (orig 0x4730f8, ptr_add)
void* sdk_f_4730f8(void* a0) { return (char*)a0 + 944; }

// sub_473100  (orig 0x473100, ptr_add)
void* sdk_f_473100(void* a0) { return (char*)a0 + 928; }

// sub_473108  (orig 0x473108, ptr_add)
void* sdk_f_473108(void* a0) { return (char*)a0 + 992; }

// sub_473110  (orig 0x473110, ptr_add)
void* sdk_f_473110(void* a0) { return (char*)a0 + 976; }

// sub_473118  (orig 0x473118, ptr_add)
void* sdk_f_473118(void* a0) { return (char*)a0 + 1016; }

// sub_473120  (orig 0x473120, ptr_add)
void* sdk_f_473120(void* a0) { return (char*)a0 + 1000; }

// sub_473128  (orig 0x473128, ptr_add)
void* sdk_f_473128(void* a0) { return (char*)a0 + 1040; }

// sub_473130  (orig 0x473130, ptr_add)
void* sdk_f_473130(void* a0) { return (char*)a0 + 1024; }

// sub_473138  (orig 0x473138, ptr_add)
void* sdk_f_473138(void* a0) { return (char*)a0 + 1064; }

// sub_473140  (orig 0x473140, ptr_add)
void* sdk_f_473140(void* a0) { return (char*)a0 + 1048; }

// sub_473e80  (orig 0x473e80, mov_ret)
uint32_t sdk_f_473e80() { return 255; }

// sub_473e88  (orig 0x473e88, mov_ret)
uint32_t sdk_f_473e88() { return 255; }

// sub_473ed8  (orig 0x473ed8, mov_ret)
uint32_t sdk_f_473ed8() { return 0; }

// sub_473ee0  (orig 0x473ee0, const-ret)
uint32_t sdk_f_473ee0() { return 67109634u; }

// sub_473ef0  (orig 0x473ef0, const-ret)
uint32_t sdk_f_473ef0() { return 67109634u; }

// sub_473f30  (orig 0x473f30, mov_ret)
uint32_t sdk_f_473f30() { return 255; }

// sub_473f38  (orig 0x473f38, mov_ret)
uint32_t sdk_f_473f38() { return 255; }

// sub_473f88  (orig 0x473f88, mov_ret)
uint32_t sdk_f_473f88() { return 0; }

// sub_473f90  (orig 0x473f90, const-ret)
uint32_t sdk_f_473f90() { return 67109634u; }

// sub_473fa0  (orig 0x473fa0, const-ret)
uint32_t sdk_f_473fa0() { return 67109634u; }

// sub_473fe0  (orig 0x473fe0, mov_ret)
uint32_t sdk_f_473fe0() { return -1; }

// sub_473fe8  (orig 0x473fe8, mov_ret)
uint32_t sdk_f_473fe8() { return -1; }

// sub_474068  (orig 0x474068, mov_ret)
uint32_t sdk_f_474068() { return 0; }

// sub_474070  (orig 0x474070, const-ret)
uint32_t sdk_f_474070() { return 67109634u; }

// sub_474080  (orig 0x474080, const-ret)
uint32_t sdk_f_474080() { return 67109634u; }

// sub_4740c0  (orig 0x4740c0, mov_ret)
uint32_t sdk_f_4740c0() { return -1; }

// sub_4740c8  (orig 0x4740c8, mov_ret)
uint32_t sdk_f_4740c8() { return -1; }

// sub_474148  (orig 0x474148, mov_ret)
uint32_t sdk_f_474148() { return 0; }

// sub_474150  (orig 0x474150, const-ret)
uint32_t sdk_f_474150() { return 67109634u; }

// sub_474160  (orig 0x474160, const-ret)
uint32_t sdk_f_474160() { return 67109634u; }

// sub_474560  (orig 0x474560, getter)
uint8_t sdk_f_474560(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_474568  (orig 0x474568, getter)
uint8_t sdk_f_474568(void* a0) { return *(uint8_t*)((char*)(a0) + 17); }

// sub_4745b0  (orig 0x4745b0, getter)
uint32_t sdk_f_4745b0(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_4745b8  (orig 0x4745b8, getter)
uint32_t sdk_f_4745b8(void* a0) { return *(uint32_t*)((char*)(a0) + 124); }

// sub_4745c0  (orig 0x4745c0, getter)
uint32_t sdk_f_4745c0(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_4749b8  (orig 0x4749b8, getter)
uint8_t sdk_f_4749b8(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_4749c0  (orig 0x4749c0, getter)
uint8_t sdk_f_4749c0(void* a0) { return *(uint8_t*)((char*)(a0) + 17); }

// sub_474a08  (orig 0x474a08, getter)
uint32_t sdk_f_474a08(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_474a10  (orig 0x474a10, getter)
uint32_t sdk_f_474a10(void* a0) { return *(uint32_t*)((char*)(a0) + 124); }

// sub_474a18  (orig 0x474a18, getter)
uint32_t sdk_f_474a18(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_475338  (orig 0x475338, getter)
uint32_t sdk_f_475338(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_475340  (orig 0x475340, getter)
uint32_t sdk_f_475340(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_475388  (orig 0x475388, getter)
uint32_t sdk_f_475388(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_475390  (orig 0x475390, getter)
uint32_t sdk_f_475390(void* a0) { return *(uint32_t*)((char*)(a0) + 124); }

// sub_475398  (orig 0x475398, getter)
uint32_t sdk_f_475398(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_475cb8  (orig 0x475cb8, getter)
uint32_t sdk_f_475cb8(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_475cc0  (orig 0x475cc0, getter)
uint32_t sdk_f_475cc0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_475d08  (orig 0x475d08, getter)
uint32_t sdk_f_475d08(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_475d10  (orig 0x475d10, getter)
uint32_t sdk_f_475d10(void* a0) { return *(uint32_t*)((char*)(a0) + 124); }

// sub_475d18  (orig 0x475d18, getter)
uint32_t sdk_f_475d18(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_476180  (orig 0x476180, ret_only)
void sdk_f_476180() {}

// sub_47c268  (orig 0x47c268, mov_ret)
uint64_t sdk_f_47c268() { return -1; }

// sub_47c280  (orig 0x47c280, ret_only)
void sdk_f_47c280() {}

// sub_47c2b8  (orig 0x47c2b8, mov_ret)
uint64_t sdk_f_47c2b8() { return -1; }

// sub_47c2d0  (orig 0x47c2d0, ret_only)
void sdk_f_47c2d0() {}

// sub_4850d8  (orig 0x4850d8, strlit-ret)
const char *sdk_f_4850d8() { static char g_f_4850d8[1]; __asm__ volatile("" ::: "memory"); return g_f_4850d8; }

// sub_485530  (orig 0x485530, straight)
uint32_t sdk_f_485530(uint64_t unused0, uint32_t a1) { return (((uint32_t)a1)) & (255); }

// sub_485560  (orig 0x485560, straight)
uint32_t sdk_f_485560(uint64_t unused0, uint32_t a1, uint32_t a2) { return (((((uint32_t)a1) < 128)) ? (((uint32_t)a1)) : (((uint32_t)a2))); }

// sub_485a78  (orig 0x485a78, mov_ret)
uint32_t sdk_f_485a78(uint32_t a0, uint32_t a1) { return a1; }

// sub_485e90  (orig 0x485e90, call)
extern void callee_52b4f0();
uint64_t sdk_f_485e90(void* a0, uint32_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = ((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_52b4f0)(((uintptr_t)((((uint32_t)a1)) & (255))), ((uintptr_t)(*(uint64_t*)((char*)(a0) + 32))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))));
    asm volatile("");
    return r0;
}

// sub_485f08  (orig 0x485f08, call)
extern void callee_52b500();
uint64_t sdk_f_485f08(void* a0, uint32_t a1, uint64_t a2, uint64_t a3) {
    uint64_t r0 = ((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))&callee_52b500)(((uintptr_t)((((uint32_t)a1)) & (255))), ((uintptr_t)(*(uint64_t*)((char*)(a0) + 32))), ((uintptr_t)(((uint64_t)a2))), ((uintptr_t)(((uint64_t)a3))));
    asm volatile("");
    return r0;
}

// sub_486c18  (orig 0x486c18, straight)
uint32_t sdk_f_486c18(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4, uint64_t a5, uint64_t unused6, void* a7) {
    *(uint64_t*)((char*)(a4)) = a2;
    *(uint64_t*)((char*)(a7)) = a5;
    return 3;
}

// sub_486c28  (orig 0x486c28, straight)
uint32_t sdk_f_486c28(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4, uint64_t a5, uint64_t unused6, void* a7) {
    *(uint64_t*)((char*)(a4)) = a2;
    *(uint64_t*)((char*)(a7)) = a5;
    return 3;
}

// sub_486c38  (orig 0x486c38, straight)
uint32_t sdk_f_486c38(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_486c48  (orig 0x486c48, mov_ret)
uint32_t sdk_f_486c48() { return 1; }

// sub_486c50  (orig 0x486c50, mov_ret)
uint32_t sdk_f_486c50() { return 1; }

// sub_486c68  (orig 0x486c68, mov_ret)
uint32_t sdk_f_486c68() { return 1; }

// sub_487560  (orig 0x487560, mov_ret)
uint32_t sdk_f_487560() { return 0; }

// sub_487d80  (orig 0x487d80, straight)
uint32_t sdk_f_487d80(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_487d90  (orig 0x487d90, mov_ret)
uint32_t sdk_f_487d90() { return 0; }

// sub_487d98  (orig 0x487d98, mov_ret)
uint32_t sdk_f_487d98() { return 0; }

// sub_487fe0  (orig 0x487fe0, mov_ret)
uint32_t sdk_f_487fe0() { return 4; }

// sub_488658  (orig 0x488658, straight)
uint32_t sdk_f_488658(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_488668  (orig 0x488668, mov_ret)
uint32_t sdk_f_488668() { return 0; }

// sub_488670  (orig 0x488670, mov_ret)
uint32_t sdk_f_488670() { return 0; }

// sub_4888a0  (orig 0x4888a0, mov_ret)
uint32_t sdk_f_4888a0() { return 4; }

// sub_488978  (orig 0x488978, straight)
uint32_t sdk_f_488978(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_488988  (orig 0x488988, mov_ret)
uint32_t sdk_f_488988() { return 0; }

// sub_488990  (orig 0x488990, mov_ret)
uint32_t sdk_f_488990() { return 0; }

// sub_488d38  (orig 0x488d38, straight)
uint32_t sdk_f_488d38(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_488d48  (orig 0x488d48, mov_ret)
uint32_t sdk_f_488d48() { return 0; }

// sub_488d50  (orig 0x488d50, mov_ret)
uint32_t sdk_f_488d50() { return 0; }

// sub_488fb0  (orig 0x488fb0, straight)
uint32_t sdk_f_488fb0(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_488fc0  (orig 0x488fc0, mov_ret)
uint32_t sdk_f_488fc0() { return 0; }

// sub_488fc8  (orig 0x488fc8, mov_ret)
uint32_t sdk_f_488fc8() { return 0; }

// sub_489258  (orig 0x489258, straight)
uint32_t sdk_f_489258(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_489268  (orig 0x489268, mov_ret)
uint32_t sdk_f_489268() { return 0; }

// sub_489270  (orig 0x489270, mov_ret)
uint32_t sdk_f_489270() { return 0; }

// sub_4895d8  (orig 0x4895d8, straight)
uint32_t sdk_f_4895d8(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_4895e8  (orig 0x4895e8, mov_ret)
uint32_t sdk_f_4895e8() { return 0; }

// sub_4895f0  (orig 0x4895f0, mov_ret)
uint32_t sdk_f_4895f0() { return 0; }

// sub_489868  (orig 0x489868, straight)
uint32_t sdk_f_489868(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_489878  (orig 0x489878, mov_ret)
uint32_t sdk_f_489878() { return 0; }

// sub_489880  (orig 0x489880, mov_ret)
uint32_t sdk_f_489880() { return 0; }

// sub_489a88  (orig 0x489a88, straight)
uint32_t sdk_f_489a88(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_489a98  (orig 0x489a98, mov_ret)
uint32_t sdk_f_489a98() { return 0; }

// sub_489aa0  (orig 0x489aa0, mov_ret)
uint32_t sdk_f_489aa0() { return 0; }

// sub_489dc0  (orig 0x489dc0, straight)
uint32_t sdk_f_489dc0(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_489dd0  (orig 0x489dd0, mov_ret)
uint32_t sdk_f_489dd0() { return 0; }

// sub_489dd8  (orig 0x489dd8, mov_ret)
uint32_t sdk_f_489dd8() { return 0; }

// sub_48a140  (orig 0x48a140, straight)
uint32_t sdk_f_48a140(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_48a150  (orig 0x48a150, mov_ret)
uint32_t sdk_f_48a150() { return 0; }

// sub_48a158  (orig 0x48a158, mov_ret)
uint32_t sdk_f_48a158() { return 0; }

// sub_48a8d0  (orig 0x48a8d0, straight)
uint32_t sdk_f_48a8d0(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_48a8e0  (orig 0x48a8e0, mov_ret)
uint32_t sdk_f_48a8e0() { return 0; }

// sub_48a8e8  (orig 0x48a8e8, mov_ret)
uint32_t sdk_f_48a8e8() { return 0; }

// sub_48a9f8  (orig 0x48a9f8, straight)
uint32_t sdk_f_48a9f8(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_48aa08  (orig 0x48aa08, mov_ret)
uint32_t sdk_f_48aa08() { return 0; }

// sub_48aa10  (orig 0x48aa10, mov_ret)
uint32_t sdk_f_48aa10() { return 0; }

// sub_48ab20  (orig 0x48ab20, straight)
uint32_t sdk_f_48ab20(uint64_t unused0, uint64_t unused1, uint64_t a2, uint64_t unused3, void* a4) {
    *(uint64_t*)((char*)(a4)) = a2;
    return 3;
}

// sub_48ab30  (orig 0x48ab30, mov_ret)
uint32_t sdk_f_48ab30() { return 0; }

// sub_48ab38  (orig 0x48ab38, mov_ret)
uint32_t sdk_f_48ab38() { return 0; }

// sub_48ad80  (orig 0x48ad80, getter)
uint8_t sdk_f_48ad80(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_48ad88  (orig 0x48ad88, getter)
uint32_t sdk_f_48ad88(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_48ad90  (orig 0x48ad90, getter)
uint8_t sdk_f_48ad90(void* a0) { return *(uint8_t*)((char*)(a0) + 17); }

// sub_48ad98  (orig 0x48ad98, getter)
uint32_t sdk_f_48ad98(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// bad_weak_ptr  (orig 0x492110, strlit-ret)
const char *sdk_f_492110() { static char g_f_492110[1]; __asm__ volatile("" ::: "memory"); return g_f_492110; }

// sub_492120  (orig 0x492120, ret_only)
void sdk_f_492120() {}

// sub_4922c0  (orig 0x4922c0, mov_ret)
uint64_t sdk_f_4922c0() { return 0; }

// sub_492490  (orig 0x492490, ret_only)
void sdk_f_492490() {}

// sub_492498  (orig 0x492498, ret_only)
void sdk_f_492498() {}

// sub_4924a0  (orig 0x4924a0, ret_only)
void sdk_f_4924a0() {}

// sub_4924a8  (orig 0x4924a8, mov_ret)
uint64_t sdk_f_4924a8() { return 0; }

// sub_4924b0  (orig 0x4924b0, ret_only)
void sdk_f_4924b0() {}

// bad_optional_access  (orig 0x492e38, strlit-ret)
const char *sdk_f_492e38() { static char g_f_492e38[1]; __asm__ volatile("" ::: "memory"); return g_f_492e38; }

// sub_492ed8  (orig 0x492ed8, ret_only)
void sdk_f_492ed8() {}

// sub_49cb78  (orig 0x49cb78, straight)
uint32_t sdk_f_49cb78(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    return (*(uint32_t*)((char*)(a0) + 48)) - (*(uint32_t*)((char*)(p0) + 40));
}

// sub_49d540  (orig 0x49d540, straight)
uint32_t sdk_f_49d540(uint64_t a0, uint32_t a1) { return ((uint32_t)a1); }

// sub_49d598  (orig 0x49d598, straight)
uint64_t sdk_f_49d598(uint64_t a0, void* a1, uint32_t a2) { return (((*(uint64_t*)((char*)(a1) + 8) == ((uint64_t)a0)) ? 1 : 0)) & (((*(uint32_t*)((char*)(a1)) == ((uint32_t)a2)) ? 1 : 0)); }

// generic  (orig 0x49d6d0, strlit-ret)
const char *sdk_f_49d6d0() { static char g_f_49d6d0[1]; __asm__ volatile("" ::: "memory"); return g_f_49d6d0; }

// system  (orig 0x49d7b0, strlit-ret)
const char *sdk_f_49d7b0() { static char g_f_49d7b0[1]; __asm__ volatile("" ::: "memory"); return g_f_49d7b0; }

// sub_49e1b0  (orig 0x49e1b0, ret_only)
void sdk_f_49e1b0() {}

// sub_49e3a0  (orig 0x49e3a0, ret_only)
void sdk_f_49e3a0() {}

// sub_49e758  (orig 0x49e758, call)
extern void sub_49f240();
uint32_t sdk_f_49e758(uint64_t a0) {
    uint64_t f_49e758__r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&sub_49f240)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(1)));
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49e778  (orig 0x49e778, call)
extern void sub_49f268();
uint32_t sdk_f_49e778() {
    sub_49f268();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49e790  (orig 0x49e790, call)
extern void sub_49f268();
uint32_t sdk_f_49e790() {
    sub_49f268();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49e7a8  (orig 0x49e7a8, call)
extern void sub_49f250();
uint32_t sdk_f_49e7a8() {
    sub_49f250();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49e7c8  (orig 0x49e7c8, call)
extern void sub_49f260();
uint32_t sdk_f_49e7c8() {
    sub_49f260();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49e7e0  (orig 0x49e7e0, call)
extern void sub_49f250();
uint32_t sdk_f_49e7e0() {
    sub_49f250();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49e800  (orig 0x49e800, call)
extern void sub_49f260();
uint32_t sdk_f_49e800() {
    sub_49f260();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49e818  (orig 0x49e818, call)
extern void sub_49f198();
uint32_t sdk_f_49e818() {
    sub_49f198();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49e830  (orig 0x49e830, call)
extern void sub_49f1a0();
uint32_t sdk_f_49e830() {
    sub_49f1a0();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49e848  (orig 0x49e848, call)
extern void sub_49f1a8();
uint32_t sdk_f_49e848() {
    sub_49f1a8();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49e8d0  (orig 0x49e8d0, call)
extern void sub_49f1d0();
uint32_t sdk_f_49e8d0() {
    sub_49f1d0();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49e8e8  (orig 0x49e8e8, compare)
bool sdk_f_49e8e8(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(0); }

// sub_49ea98  (orig 0x49ea98, call)
extern void callee_52bb80();
uint32_t sdk_f_49ea98() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&callee_52bb80)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_49eac0  (orig 0x49eac0, call)
extern void callee_52bba0();
uint32_t sdk_f_49eac0(uint64_t a0) {
    uint64_t f_49eac0__r0 = ((uint64_t (*)(uintptr_t))&callee_52bba0)(((uintptr_t)((((uint64_t)a0)) & (4294967295))));
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49eae0  (orig 0x49eae0, call)
extern void sub_49f240();
uint32_t sdk_f_49eae0(uint64_t a0) {
    uint64_t f_49eae0__r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&sub_49f240)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(1)));
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49eb00  (orig 0x49eb00, call)
extern void sub_49f250();
uint32_t sdk_f_49eb00() {
    sub_49f250();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49eb18  (orig 0x49eb18, call)
extern void sub_49f258();
uint32_t sdk_f_49eb18() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_49f258)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_49eb38  (orig 0x49eb38, call)
extern void sub_49f260();
uint32_t sdk_f_49eb38() {
    sub_49f260();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49eb50  (orig 0x49eb50, call)
extern void sub_49f268();
uint32_t sdk_f_49eb50() {
    sub_49f268();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49eb68  (orig 0x49eb68, call)
extern void sub_49f268();
uint32_t sdk_f_49eb68() {
    sub_49f268();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49eb80  (orig 0x49eb80, call)
extern void sub_49f250();
uint32_t sdk_f_49eb80() {
    sub_49f250();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49eb98  (orig 0x49eb98, call)
extern void sub_49f258();
uint32_t sdk_f_49eb98() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&sub_49f258)()))) & (1);
    asm volatile("");
    return r0;
}

// sub_49ebb8  (orig 0x49ebb8, call)
extern void sub_49f260();
uint32_t sdk_f_49ebb8() {
    sub_49f260();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_49ec20  (orig 0x49ec20, call)
extern void callee_52bb80();
uint32_t sdk_f_49ec20() {
    uint32_t r0 = ((~((uint32_t)((uint32_t (*)(void))&callee_52bb80)()))) & (1);
    asm volatile("");
    return r0;
}

// bad_variant_access  (orig 0x49f0a0, strlit-ret)
const char *sdk_f_49f0a0() { static char g_f_49f0a0[1]; __asm__ volatile("" ::: "memory"); return g_f_49f0a0; }

// sub_49f1b0  (orig 0x49f1b0, call)
extern void callee_5242a0();
uint32_t sdk_f_49f1b0() {
    uint32_t r0 = (((((uint32_t (*)(void))&callee_5242a0)() == 1)) ? (0) : (110));
    asm volatile("");
    return r0;
}

// sub_49f288  (orig 0x49f288, delegator)
extern void callee_51fab0();
void sdk_f_49f288(unsigned long a0) { ((void(*)(unsigned long))callee_51fab0)(a0); asm volatile(""); }

// sub_49f338  (orig 0x49f338, mov_ret)
uint32_t sdk_f_49f338() { return 4096; }

// sub_49f3b8  (orig 0x49f3b8, call)
extern void callee_50ff20();
uint32_t sdk_f_49f3b8() {
    uint32_t r0 = ((((uint32_t (*)(void))&callee_50ff20)() == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_4a3d10  (orig 0x4a3d10, mov_ret)
uint32_t sdk_f_4a3d10() { return 0; }

// sub_4a3d18  (orig 0x4a3d18, mov_ret)
uint32_t sdk_f_4a3d18() { return 0; }

// sub_4a3d20  (orig 0x4a3d20, mov_ret)
uint32_t sdk_f_4a3d20() { return 0; }

// sub_4a3d28  (orig 0x4a3d28, ret_only)
void sdk_f_4a3d28() {}

// sub_4a3e08  (orig 0x4a3e08, ret_only)
void sdk_f_4a3e08() {}

// sub_4a3e10  (orig 0x4a3e10, straight)
uint64_t sdk_f_4a3e10() { return 0; }

// sub_4a59a8  (orig 0x4a59a8, pair-ret)
struct pair16_f_4a59a8_ { uint64_t f[2]; }; pair16_f_4a59a8_ sdk_f_4a59a8(void* a0) { return *(struct pair16_f_4a59a8_ *)((char*)(a0) + 16); }

// sub_4a5d50  (orig 0x4a5d50, indirect-tailcall)
void sdk_f_4a5d50(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 48)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_4acf38  (orig 0x4acf38, indirect-tailcall)
void sdk_f_4acf38(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 48)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_4ae4f0  (orig 0x4ae4f0, indirect-tailcall)
void sdk_f_4ae4f0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 48)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 16))));
}

// sub_4af868  (orig 0x4af868, ret_only)
void sdk_f_4af868() {}

// sub_4b0f28  (orig 0x4b0f28, indirect-tailcall)
void sdk_f_4b0f28(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 48)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 16))));
}

// sub_4b1008  (orig 0x4b1008, indirect-tailcall)
void sdk_f_4b1008(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 48)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 16))));
}

// sub_4b1330  (orig 0x4b1330, mov_ret)
uint32_t sdk_f_4b1330() { return 1; }

// sub_4b1338  (orig 0x4b1338, mov_ret)
uint32_t sdk_f_4b1338() { return 1; }

// sub_4b2a98  (orig 0x4b2a98, mov_ret)
uint32_t sdk_f_4b2a98() { return 1; }

// sub_4b2aa0  (orig 0x4b2aa0, mov_ret)
uint32_t sdk_f_4b2aa0() { return 1; }

// sub_4b3740  (orig 0x4b3740, mov_ret)
uint32_t sdk_f_4b3740() { return 1; }

// sub_4b3748  (orig 0x4b3748, mov_ret)
uint32_t sdk_f_4b3748() { return 1; }

// sub_4b52d8  (orig 0x4b52d8, ret_only)
void sdk_f_4b52d8() {}

// std_exception  (orig 0x4b52e8, strlit-ret)
const char *sdk_f_4b52e8() { static char g_f_4b52e8[1]; __asm__ volatile("" ::: "memory"); return g_f_4b52e8; }

// std_bad_exception  (orig 0x4b5300, strlit-ret)
const char *sdk_f_4b5300() { static char g_f_4b5300[1]; __asm__ volatile("" ::: "memory"); return g_f_4b5300; }

// std_bad_alloc  (orig 0x4b5330, strlit-ret)
const char *sdk_f_4b5330() { static char g_f_4b5330[1]; __asm__ volatile("" ::: "memory"); return g_f_4b5330; }

// bad_array_new_length  (orig 0x4b5360, strlit-ret)
const char *sdk_f_4b5360() { static char g_f_4b5360[1]; __asm__ volatile("" ::: "memory"); return g_f_4b5360; }

// bad_array_length  (orig 0x4b5390, strlit-ret)
const char *sdk_f_4b5390() { static char g_f_4b5390[1]; __asm__ volatile("" ::: "memory"); return g_f_4b5390; }

// sub_4b5468  (orig 0x4b5468, getter)
uint64_t sdk_f_4b5468(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_4b5538  (orig 0x4b5538, getter)
uint64_t sdk_f_4b5538(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_4b57e0  (orig 0x4b57e0, ret_only)
void sdk_f_4b57e0() {}

// std_bad_cast  (orig 0x4b5838, strlit-ret)
const char *sdk_f_4b5838() { static char g_f_4b5838[1]; __asm__ volatile("" ::: "memory"); return g_f_4b5838; }

// std_bad_typeid  (orig 0x4b5890, strlit-ret)
const char *sdk_f_4b5890() { static char g_f_4b5890[1]; __asm__ volatile("" ::: "memory"); return g_f_4b5890; }

// sub_4b5cf0  (orig 0x4b5cf0, ret_only)
void sdk_f_4b5cf0() {}

// sub_4b5cf8  (orig 0x4b5cf8, ret_only)
void sdk_f_4b5cf8() {}

// sub_4b5e90  (orig 0x4b5e90, compare)
bool sdk_f_4b5e90(uint64_t a0, uint64_t a1) { return (uint64_t)(a0) == (uint64_t)(a1); }

// sub_4b5ea0  (orig 0x4b5ea0, mov_ret)
uint32_t sdk_f_4b5ea0() { return 0; }

// sub_4b5ea8  (orig 0x4b5ea8, mov_ret)
uint32_t sdk_f_4b5ea8() { return 0; }

// sub_4b5eb0  (orig 0x4b5eb0, compare)
bool sdk_f_4b5eb0(uint64_t a0, uint64_t a1) { return (uint64_t)(a0) == (uint64_t)(a1); }

// sub_4b7680  (orig 0x4b7680, getter)
uint64_t sdk_f_4b7680(void* a0) { return *(uint64_t*)((char*)(a0) - 16); }

// sub_4b9178  (orig 0x4b9178, getter)
uint32_t sdk_f_4b9178(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_4b9180  (orig 0x4b9180, mov_ret)
uint64_t sdk_f_4b9180() { return 0; }

// sub_4b93d0  (orig 0x4b93d0, getter)
uint64_t sdk_f_4b93d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_4b93d8  (orig 0x4b93d8, ret_only)
void sdk_f_4b93d8() {}

// sub_4b93e8  (orig 0x4b93e8, ret_only)
void sdk_f_4b93e8() {}

// sub_4b9488  (orig 0x4b9488, ret_only)
void sdk_f_4b9488() {}

// sub_4bad80  (orig 0x4bad80, mov_ret)
uint32_t sdk_f_4bad80() { return 0; }

// sub_4bb5c0  (orig 0x4bb5c0, mov_ret)
uint32_t sdk_f_4bb5c0() { return 0; }

// sub_4bb838  (orig 0x4bb838, mov_ret)
uint32_t sdk_f_4bb838() { return 0; }

// sub_4bcaa8  (orig 0x4bcaa8, mov_ret)
uint64_t sdk_f_4bcaa8() { return 0; }

// sub_4bcab0  (orig 0x4bcab0, ret_only)
void sdk_f_4bcab0() {}

// sub_4bcd48  (orig 0x4bcd48, mov_ret)
uint32_t sdk_f_4bcd48() { return 0; }

// sub_4bcd50  (orig 0x4bcd50, mov_ret)
uint64_t sdk_f_4bcd50(uint64_t a0, uint64_t a1) { return a1; }

// sub_4bce80  (orig 0x4bce80, straight)
uint32_t sdk_f_4bce80(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 28);
    return 0;
}

// sub_4bce90  (orig 0x4bce90, straight)
uint32_t sdk_f_4bce90(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 36);
    return 0;
}

// sub_4bcea0  (orig 0x4bcea0, straight)
uint32_t sdk_f_4bcea0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 32);
    return 0;
}

// sub_4bcec8  (orig 0x4bcec8, straight)
uint32_t sdk_f_4bcec8(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = (*(uint32_t*)((char*)(a0))) >> (31);
    return 0;
}

// sub_4bcee0  (orig 0x4bcee0, straight)
uint32_t sdk_f_4bcee0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = (*(uint32_t*)((char*)(a0))) & (3);
    return 0;
}

// sub_4cdba0  (orig 0x4cdba0, ret_only)
void sdk_f_4cdba0() {}

// sub_4cdba8  (orig 0x4cdba8, ret_only)
void sdk_f_4cdba8() {}

// sub_4cdbb0  (orig 0x4cdbb0, ret_only)
void sdk_f_4cdbb0() {}

// sub_4d6be0  (orig 0x4d6be0, straight-line)
uint32_t sdk_f_4d6be0(uint32_t a0) { return ((((((uint32_t)a0)) | (32)) - (97) < 26) ? 1 : 0); }

// sub_4d6bf8  (orig 0x4d6bf8, straight-line)
uint32_t sdk_f_4d6bf8(uint32_t a0) { return ((((((uint32_t)a0)) | (32)) - (97) < 26) ? 1 : 0); }

// sub_4d6c10  (orig 0x4d6c10, straight-line)
uint32_t sdk_f_4d6c10(uint32_t a0) { return ((((uint32_t)a0) < 128) ? 1 : 0); }

// sub_4d6c20  (orig 0x4d6c20, straight)
uint32_t sdk_f_4d6c20(uint32_t a0) { return (((((uint32_t)a0) == 32) ? 1 : 0)) | (((((uint32_t)a0) == 9) ? 1 : 0)); }

// sub_4d6c38  (orig 0x4d6c38, straight)
uint32_t sdk_f_4d6c38(uint32_t a0) { return (((((uint32_t)a0) == 32) ? 1 : 0)) | (((((uint32_t)a0) == 9) ? 1 : 0)); }

// sub_4d6c50  (orig 0x4d6c50, straight)
uint32_t sdk_f_4d6c50(uint32_t a0) { return (((((uint32_t)a0) < 32) ? 1 : 0)) | (((((uint32_t)a0) == 127) ? 1 : 0)); }

// sub_4d6c68  (orig 0x4d6c68, straight)
uint32_t sdk_f_4d6c68(uint32_t a0) { return (((((uint32_t)a0) < 32) ? 1 : 0)) | (((((uint32_t)a0) == 127) ? 1 : 0)); }

// sub_4d75a8  (orig 0x4d75a8, straight)
uint32_t sdk_f_4d75a8(uint32_t a0) { return (((uint32_t)a0)) & (127); }

// sub_4d7ba8  (orig 0x4d7ba8, strlit-ret)
const char *sdk_f_4d7ba8() { static char g_f_4d7ba8[1]; __asm__ volatile("" ::: "memory"); return g_f_4d7ba8; }

// sub_4d7bb8  (orig 0x4d7bb8, mov_ret)
uint32_t sdk_f_4d7bb8() { return 4; }

// sub_4d7bc0  (orig 0x4d7bc0, strlit-ret)
const char *sdk_f_4d7bc0() { static char g_f_4d7bc0[1]; __asm__ volatile("" ::: "memory"); return g_f_4d7bc0; }

// sub_4d7bd0  (orig 0x4d7bd0, strlit-ret)
const char *sdk_f_4d7bd0() { static char g_f_4d7bd0[1]; __asm__ volatile("" ::: "memory"); return g_f_4d7bd0; }

// sub_4d85c0  (orig 0x4d85c0, mov_ret)
uint32_t sdk_f_4d85c0() { return 0; }

// sub_4d85c8  (orig 0x4d85c8, mov_ret)
uint64_t sdk_f_4d85c8(uint64_t a0, uint64_t a1, uint64_t a2, uint64_t a3) { return a3; }

// sub_4d9fe8  (orig 0x4d9fe8, strlit-ret)
const char *sdk_f_4d9fe8() { static char g_f_4d9fe8[1]; __asm__ volatile("" ::: "memory"); return g_f_4d9fe8; }

// sub_4e8b30  (orig 0x4e8b30, straight-line)
uint32_t sdk_f_4e8b30(uint32_t a0) { return (((((uint32_t)a0) < 128)) ? (((uint32_t)a0)) : ((0) - (1))); }

// sub_4edce8  (orig 0x4edce8, straight)
uint32_t sdk_f_4edce8(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1)));
    void* p1 = (void*)(*(uint64_t *)((char*)(a0)));
    return (*(uint32_t*)((char*)(p1))) - (*(uint32_t*)((char*)(p0)));
}

// sub_4f1de0  (orig 0x4f1de0, mov_ret)
uint32_t sdk_f_4f1de0() { return 0; }

// sub_4f1e48  (orig 0x4f1e48, straight)
uint8_t sdk_f_4f1e48(void* a0) { return ((*(uint8_t*)((char*)(a0) + 131)) >> (7)) ^ (1); }

// sub_4f1e58  (orig 0x4f1e58, getter)
uint64_t sdk_f_4f1e58(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_4f1ee0  (orig 0x4f1ee0, straight)
void* sdk_f_4f1ee0(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(p0) + 8) = (*(uint64_t*)((char*)(a0) + 8)) + (((uint64_t)a1));
    return a0;
}

// sub_4f1ef0  (orig 0x4f1ef0, straight)
void sdk_f_4f1ef0(void* a0) {
    *(uint32_t*)((char*)(a0)) = (*(uint32_t*)((char*)(a0))) | (32);
}

// sub_4f1f00  (orig 0x4f1f00, ret_only)
void sdk_f_4f1f00() {}

// sub_4f9aa0  (orig 0x4f9aa0, mov_ret)
uint32_t sdk_f_4f9aa0() { return 0; }

// sub_4f9aa8  (orig 0x4f9aa8, mov_ret)
uint32_t sdk_f_4f9aa8() { return 0; }

// sub_4f9ab0  (orig 0x4f9ab0, straight)
uint32_t sdk_f_4f9ab0(uint64_t a0) {
    void* p0 = (void*)((uintptr_t)(((uint64_t)a0)));
    *(uint32_t*)((char*)(p0)) = 0;
    return 0;
}

// sub_4f9ac0  (orig 0x4f9ac0, mov_ret)
uint32_t sdk_f_4f9ac0() { return 0; }

// sub_4f9ac8  (orig 0x4f9ac8, straight)
uint32_t sdk_f_4f9ac8(uint64_t a0) {
    void* p0 = (void*)((uintptr_t)(((uint64_t)a0)));
    *(uint32_t*)((char*)(p0)) = 0;
    return 0;
}

// sub_4f9ad8  (orig 0x4f9ad8, mov_ret)
uint32_t sdk_f_4f9ad8() { return 0; }

// sub_4f9ae0  (orig 0x4f9ae0, straight)
uint32_t sdk_f_4f9ae0(uint64_t a0) {
    void* p0 = (void*)((uintptr_t)(((uint64_t)a0)));
    *(uint32_t*)((char*)(p0)) = 0;
    return 0;
}

// sub_4fd2f8  (orig 0x4fd2f8, straight-line)
uint64_t sdk_f_4fd2f8(uint64_t a0) { return __builtin_bswap64(((uint64_t)a0)); }

// sub_4fd300  (orig 0x4fd300, straight-line)
uint32_t sdk_f_4fd300(uint32_t a0) { return __builtin_bswap32(((uint32_t)a0)); }

// sub_501390  (orig 0x501390, straight)
uint64_t sdk_f_501390(uint64_t a0) { return (0 - ((uint64_t)((uint64_t)a0))); }

// sub_5068a0  (orig 0x5068a0, call)
extern void callee_510100();
uint32_t sdk_f_5068a0() {
    callee_510100();
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_5068e0  (orig 0x5068e0, mov_ret)
uint64_t sdk_f_5068e0() { return -1; }

// sub_506950  (orig 0x506950, call)
extern void callee_51ee40();
uint32_t sdk_f_506950() {
    callee_51ee40();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_506a50  (orig 0x506a50, call)
extern void callee_50ff10();
uint32_t sdk_f_506a50(void* a0) {
    uint64_t f_506a50__r0 = ((uint64_t (*)(uintptr_t))&callee_50ff10)(((uintptr_t)((*(uint64_t*)((char*)(a0) + 8)) + ((*(uint64_t*)((char*)(a0))) * (1000000000)))));
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_5070a8  (orig 0x5070a8, ret_only)
void sdk_f_5070a8() {}

// sub_507398  (orig 0x507398, call)
extern void callee_520430();
uint32_t sdk_f_507398() {
    callee_520430();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_5073e8  (orig 0x5073e8, call)
extern void callee_50f740();
uint32_t sdk_f_5073e8() {
    callee_50f740();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_507400  (orig 0x507400, call)
extern void callee_50f720();
uint32_t sdk_f_507400() {
    callee_50f720();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_507438  (orig 0x507438, call)
extern void callee_50f730();
uint32_t sdk_f_507438() {
    callee_50f730();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_507450  (orig 0x507450, call)
extern void callee_510410();
uint32_t sdk_f_507450(void* a0) {
    uint64x2_t vq0 = (uint64x2_t){0, 0};
    __asm__ volatile("" : "=w"(vq0) : "w"(vq0));
    *(struct Q2*)((char*)(a0)) = (struct Q2){vq0, vq0};
    uint64_t f_507450__r0 = ((uint64_t (*)(void))&callee_510410)();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_507470  (orig 0x507470, call)
extern void callee_510450();
uint32_t sdk_f_507470() {
    callee_510450();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_507488  (orig 0x507488, call)
extern void callee_5103b0();
uint32_t sdk_f_507488() {
    callee_5103b0();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_5074a0  (orig 0x5074a0, call)
extern void callee_524290();
uint32_t sdk_f_5074a0() {
    callee_524290();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_5074b8  (orig 0x5074b8, call)
extern void callee_510480();
uint32_t sdk_f_5074b8() {
    callee_510480();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_5075c0  (orig 0x5075c0, call)
extern void callee_520560();
uint32_t sdk_f_5075c0() {
    callee_520560();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_5075d8  (orig 0x5075d8, call)
extern void callee_520510();
uint32_t sdk_f_5075d8() {
    callee_520510();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_5076d8  (orig 0x5076d8, call)
extern void callee_520540();
uint32_t sdk_f_5076d8() {
    callee_520540();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_507728  (orig 0x507728, mov_ret)
uint32_t sdk_f_507728() { return 42; }

// sub_507770  (orig 0x507770, ret_only)
void sdk_f_507770() {}

// sub_507788  (orig 0x507788, straight-line)
uint32_t sdk_f_507788(uint32_t a0) { return (((((uint32_t)a0) > 1)) ? ((15) + (1)) : (15)); }

// sub_507848  (orig 0x507848, straight)
uint32_t sdk_f_507848(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1)) = 1;
    return 0;
}

// sub_507880  (orig 0x507880, straight)
uint32_t sdk_f_507880(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
    return 0;
}

// sub_507948  (orig 0x507948, call)
extern void callee_52d6e0();
uint32_t sdk_f_507948() {
    callee_52d6e0();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_507960  (orig 0x507960, call)
extern void callee_52d6f0();
uint32_t sdk_f_507960() {
    callee_52d6f0();
    uint32_t r0 = -1;
    asm volatile("");
    return r0;
}

// sub_508b18  (orig 0x508b18, call)
extern void callee_510e80();
uint32_t sdk_f_508b18() {
    callee_510e80();
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_508f00  (orig 0x508f00, call)
extern void callee_52d790();
uint64_t sdk_f_508f00() {
    uint64_t f_508f00__r0 = ((uint64_t (*)(void))&callee_52d790)();
    uint64_t r0 = (f_508f00__r0) - (24);
    asm volatile("");
    return r0;
}

// sub_50bd20  (orig 0x50bd20, indirect-tailcall)
void sdk_f_50bd20(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 64)))))(((uintptr_t)(a0)));
}

// sub_50c0a8  (orig 0x50c0a8, ret_only)
void sdk_f_50c0a8() {}

// sub_50c0b0  (orig 0x50c0b0, ret_only)
void sdk_f_50c0b0() {}

// sub_50c328  (orig 0x50c328, getter)
uint8_t sdk_f_50c328(void* a0) { return *(uint8_t*)((char*)(a0) + 617); }

