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


// sub_3e2bd0  (orig 0x3e2bd0, ret_only)
void main_f_3e2bd0() {}

// sub_3e2be0  (orig 0x3e2be0, ret_only)
void main_f_3e2be0() {}

// sub_3e2bf0  (orig 0x3e2bf0, ret_only)
void main_f_3e2bf0() {}

// sub_3e2c20  (orig 0x3e2c20, ret_only)
void main_f_3e2c20() {}

// sub_3e2c30  (orig 0x3e2c30, ret_only)
void main_f_3e2c30() {}

// sub_3e2c40  (orig 0x3e2c40, ret_only)
void main_f_3e2c40() {}

// sub_3e2c50  (orig 0x3e2c50, ret_only)
void main_f_3e2c50() {}

// sub_3e2c80  (orig 0x3e2c80, ret_only)
void main_f_3e2c80() {}

// sub_3e2c90  (orig 0x3e2c90, ret_only)
void main_f_3e2c90() {}

// sub_3e2ca0  (orig 0x3e2ca0, ret_only)
void main_f_3e2ca0() {}

// sub_3e2cb0  (orig 0x3e2cb0, mov_ret)
uint32_t main_f_3e2cb0() { return 8192; }

// sub_3e2d10  (orig 0x3e2d10, ret_only)
void main_f_3e2d10() {}

// sub_3e3550  (orig 0x3e3550, straight)
void* main_f_3e3550(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1) + 8) = *(uint32_t*)((char*)(a0) + 100);
    *(uint32_t*)((char*)(p1) + 12) = *(uint32_t*)((char*)(p0) + 104);
    *(uint32_t*)((char*)(p1)) = *(uint32_t*)((char*)(p0) + 92);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 96);
    return a0;
}

// sub_3e6d90  (orig 0x3e6d90, mov_ret)
uint32_t main_f_3e6d90() { return 1; }

// sub_3f5540  (orig 0x3f5540, ret_only)
void main_f_3f5540() {}

// sub_3f57a0  (orig 0x3f57a0, straight)
uint32_t main_f_3f57a0(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a1)) = 2217723543158787;
    *(uint8_t*)((char*)(a1) + 8) = (uint8_t)k0;
    return 1;
}

// sub_3f5aa0  (orig 0x3f5aa0, mov_ret)
uint32_t main_f_3f5aa0() { return 45; }

// sub_3f7650  (orig 0x3f7650, ret_only)
void main_f_3f7650() {}

// sub_3f7f40  (orig 0x3f7f40, straight)
void* main_f_3f7f40(void* a0) {
    *(uint32_t*)((char*)(a0)) = 65536;
    return a0;
}

// sub_3f83b0  (orig 0x3f83b0, strlit-ret)
const char *main_f_3f83b0() { static char g_f_3f83b0[1]; __asm__ volatile("" ::: "memory"); return g_f_3f83b0; }

// sub_3fa100  (orig 0x3fa100, mov_ret)
uint64_t main_f_3fa100() { return 0; }

// sub_3fb700  (orig 0x3fb700, getter)
uint32_t main_f_3fb700(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_3fb710  (orig 0x3fb710, getter)
uint32_t main_f_3fb710(void* a0) { return *(uint32_t*)((char*)(a0) - 16); }

// sub_3fbcb0  (orig 0x3fbcb0, straight)
uint64_t main_f_3fbcb0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 144);
    return *(uint64_t*)((char*)(p0) + 128);
}

// sub_3fbcc0  (orig 0x3fbcc0, straight)
uint64_t main_f_3fbcc0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 32);
    return *(uint64_t*)((char*)(p0) + 16);
}

// sub_3fbcd0  (orig 0x3fbcd0, getter)
uint32_t main_f_3fbcd0(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_3fbce0  (orig 0x3fbce0, getter)
uint32_t main_f_3fbce0(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_3fc700  (orig 0x3fc700, straight)
void* main_f_3fc700(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 132);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 136);
    *(uint32_t*)((char*)(p1) + 8) = *(uint32_t*)((char*)(p0) + 140);
    *(uint8_t*)((char*)(p1) + 12) = *(uint8_t*)((char*)(p0) + 185);
    *(uint8_t*)((char*)(p1) + 13) = *(uint8_t*)((char*)(p0) + 100);
    return a0;
}

// sub_3fc730  (orig 0x3fc730, straight)
void* main_f_3fc730(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 20);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 24);
    *(uint32_t*)((char*)(p1) + 8) = *(uint32_t*)((char*)(p0) + 28);
    *(uint8_t*)((char*)(p1) + 12) = *(uint8_t*)((char*)(p0) + 73);
    *(uint8_t*)((char*)(p1) + 13) = *(uint8_t*)((char*)(p0) - 12);
    return a0;
}

// sub_3fcf10  (orig 0x3fcf10, getter)
uint32_t main_f_3fcf10(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_3fcf20  (orig 0x3fcf20, getter)
uint32_t main_f_3fcf20(void* a0) { return *(uint32_t*)((char*)(a0) - 16); }

// sub_3fd890  (orig 0x3fd890, getter)
uint32_t main_f_3fd890(void* a0) { return *(uint32_t*)((char*)(a0) + 148); }

// sub_3fde70  (orig 0x3fde70, straight)
void* main_f_3fde70(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 105) = (uint8_t)k0;
    return a0;
}

// sub_3fe010  (orig 0x3fe010, ret_only)
void main_f_3fe010() {}

// sub_3fe020  (orig 0x3fe020, mov_ret)
uint32_t main_f_3fe020() { return 0; }

// sub_3fe030  (orig 0x3fe030, mov_ret)
uint32_t main_f_3fe030() { return 0; }

// sub_3fe040  (orig 0x3fe040, ret_only)
void main_f_3fe040() {}

// sub_3fe050  (orig 0x3fe050, mov_ret)
uint32_t main_f_3fe050() { return 0; }

// sub_3fe060  (orig 0x3fe060, mov_ret)
uint32_t main_f_3fe060() { return 0; }

// sub_3fe070  (orig 0x3fe070, getter)
uint64_t main_f_3fe070(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_3fe080  (orig 0x3fe080, getter)
uint64_t main_f_3fe080(void* a0) { return *(uint64_t*)((char*)(a0) - 80); }

// sub_3fe090  (orig 0x3fe090, getter)
uint64_t main_f_3fe090(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_3fe0a0  (orig 0x3fe0a0, getter)
uint64_t main_f_3fe0a0(void* a0) { return *(uint64_t*)((char*)(a0) - 80); }

// sub_3ffdb0  (orig 0x3ffdb0, straight)
void* main_f_3ffdb0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 528) = (uint8_t)k0;
    return a0;
}

// sub_403ff0  (orig 0x403ff0, mov_ret)
uint32_t main_f_403ff0() { return 1; }

// sub_404000  (orig 0x404000, straight-line)
uint32_t main_f_404000(void* a0, uint64_t a1, uint64_t a2) {
    *(uint64_t*)((char*)(a0) + 264) = (*(uint64_t*)((char*)(a0) + 264)) + ((((uint64_t)a1)) - (((uint64_t)a2)));
    *(uint64_t*)((char*)(a0) + 272) = (*(uint64_t*)((char*)(a0) + 272)) + ((((uint64_t)a1)) - (((uint64_t)a2)));
    return 1;
}

// sub_404530  (orig 0x404530, ret_only)
void main_f_404530() {}

// sub_404540  (orig 0x404540, getter-chain)
float main_f_404540(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 24);
    return *(float*)((char*)(t0) + 128);
}

// sub_404550  (orig 0x404550, mov_ret)
uint64_t main_f_404550() { return 0; }

// sub_404560  (orig 0x404560, mov_ret)
uint64_t main_f_404560() { return 0; }

// sub_404570  (orig 0x404570, mov_ret)
uint32_t main_f_404570() { return 0; }

// sub_404580  (orig 0x404580, mov_ret)
uint32_t main_f_404580() { return 0; }

// sub_4045b0  (orig 0x4045b0, mov_ret)
uint32_t main_f_4045b0() { return 0; }

// sub_4045c0  (orig 0x4045c0, compare)
bool main_f_4045c0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 16)) != (uint64_t)(0); }

// sub_4045d0  (orig 0x4045d0, mov_ret)
uint32_t main_f_4045d0() { return 0; }

// sub_406230  (orig 0x406230, straight)
uint32_t main_f_406230(void* a0, uint64_t a1, uint64_t a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 48) = -1;
    *(uint16_t*)((char*)(p0) + 64) = (uint16_t)(a1);
    *(uint16_t*)((char*)(p0) + 66) = (uint16_t)(a2);
    return 0;
}

// sub_4190d0  (orig 0x4190d0, compare)
bool main_f_4190d0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 64)) != (uint64_t)(0); }

// sub_423b90  (orig 0x423b90, straight)
uint32_t main_f_423b90(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 2164) = (uint32_t)(a1);
    return 0;
}

// sub_423da0  (orig 0x423da0, straight)
uint32_t main_f_423da0(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 3304) = (uint32_t)(a1);
    return 0;
}

// sub_423ed0  (orig 0x423ed0, straight)
uint32_t main_f_423ed0(void* a0, uint64_t a1, uint64_t a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 112) = a1;
    *(uint32_t*)((char*)(p0) + 120) = (uint32_t)(a2);
    return 0;
}

// sub_424490  (orig 0x424490, straight)
uint32_t main_f_424490(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 3968) = (uint32_t)(a1);
    return 0;
}

// f_2f_MB  (orig 0x43b580, straight)
void main_f_43b580(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 4552L) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_43b9b0  (orig 0x43b9b0, straight)
uint32_t main_f_43b9b0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 4608L) = a1;
    return 0;
}

// sub_43b9c0  (orig 0x43b9c0, getter)
uint64_t main_f_43b9c0(void* a0) { return *(uint64_t*)((char*)(a0) + 4608L); }

// sub_43c1e0  (orig 0x43c1e0, getter)
uint32_t main_f_43c1e0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_43c1f0  (orig 0x43c1f0, straight)
uint32_t main_f_43c1f0(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 24) = (uint32_t)(a1);
    return 1;
}

// sub_43c200  (orig 0x43c200, getter)
uint32_t main_f_43c200(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_43c2f0  (orig 0x43c2f0, straight)
uint64_t main_f_43c2f0(uint64_t unused0, void* a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a1)) - (*(uint64_t*)((char*)(a1) - 8))));
    return *(uint64_t*)((char*)(p0) + 8);
}

// sub_43c300  (orig 0x43c300, ret_only)
void main_f_43c300() {}

// sub_43c310  (orig 0x43c310, ret_only)
void main_f_43c310() {}

// sub_43c320  (orig 0x43c320, mov_ret)
uint64_t main_f_43c320() { return 0; }

// sub_43c330  (orig 0x43c330, ret_only)
void main_f_43c330() {}

// sub_43c340  (orig 0x43c340, mov_ret)
uint64_t main_f_43c340() { return 0; }

// sub_43c350  (orig 0x43c350, mov_ret)
uint64_t main_f_43c350() { return 0; }

// sub_43c360  (orig 0x43c360, mov_ret)
uint64_t main_f_43c360() { return 0; }

// sub_43c370  (orig 0x43c370, ret_only)
void main_f_43c370() {}

// sub_43c380  (orig 0x43c380, ret_only)
void main_f_43c380() {}

// sub_43c390  (orig 0x43c390, mov_ret)
uint64_t main_f_43c390() { return 0; }

// sub_43fc00  (orig 0x43fc00, straight)
uint32_t main_f_43fc00(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 85256L) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 85260L) = (uint32_t)(a1);
    return 0;
}

// sub_43fc90  (orig 0x43fc90, mov_ret)
uint32_t main_f_43fc90() { return 0; }

// GPUInterfaceEffect_cpp_d_PPFX_ERROR  (orig 0x43fca0, straight)
uint32_t main_f_43fca0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 85448L) = a1;
    return 0;
}

// GPUInterfaceEffect_cpp_d_PPFX_ERROR  (orig 0x43fcc0, straight)
uint32_t main_f_43fcc0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 85456L) = a1;
    return 0;
}

// GPUInterfaceEffect_cpp_d_PPFX_ERROR  (orig 0x43fce0, straight)
uint32_t main_f_43fce0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 85464L) = a1;
    return 0;
}

// GPUInterfaceEffect_cpp_d_PPFX_ERROR  (orig 0x43fd00, straight)
uint32_t main_f_43fd00(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 85472L) = a1;
    return 0;
}

// sub_4400c0  (orig 0x4400c0, mov_ret)
uint32_t main_f_4400c0() { return 0; }

// sub_440a90  (orig 0x440a90, mov_ret)
uint32_t main_f_440a90() { return 0; }

// sub_440b40  (orig 0x440b40, mov_ret)
uint32_t main_f_440b40() { return -4; }

// sub_440bf0  (orig 0x440bf0, mov_ret)
uint32_t main_f_440bf0() { return -4; }

// sub_440c00  (orig 0x440c00, mov_ret)
uint32_t main_f_440c00() { return 1; }

// sub_440c10  (orig 0x440c10, mov_ret)
uint32_t main_f_440c10() { return 1; }

// sub_440c20  (orig 0x440c20, mov_ret)
uint32_t main_f_440c20() { return -4; }

// sub_440c30  (orig 0x440c30, mov_ret)
uint32_t main_f_440c30() { return -4; }

// sub_440c40  (orig 0x440c40, mov_ret)
uint32_t main_f_440c40() { return 1; }

// sub_440c50  (orig 0x440c50, mov_ret)
uint32_t main_f_440c50() { return -4; }

// sub_440c60  (orig 0x440c60, mov_ret)
uint32_t main_f_440c60() { return 1; }

// sub_440c70  (orig 0x440c70, mov_ret)
uint32_t main_f_440c70() { return -4; }

// sub_440c80  (orig 0x440c80, mov_ret)
uint32_t main_f_440c80() { return 1; }

// sub_440c90  (orig 0x440c90, mov_ret)
uint32_t main_f_440c90() { return -4; }

// sub_440ca0  (orig 0x440ca0, mov_ret)
uint32_t main_f_440ca0() { return 0; }

// sub_440cb0  (orig 0x440cb0, mov_ret)
uint32_t main_f_440cb0() { return 1; }

// sub_440cc0  (orig 0x440cc0, mov_ret)
uint32_t main_f_440cc0() { return -4; }

// sub_440cd0  (orig 0x440cd0, mov_ret)
uint32_t main_f_440cd0() { return -4; }

// sub_440ce0  (orig 0x440ce0, mov_ret)
uint32_t main_f_440ce0() { return -4; }

// sub_440cf0  (orig 0x440cf0, mov_ret)
uint32_t main_f_440cf0() { return 1; }

// sub_440d00  (orig 0x440d00, mov_ret)
uint32_t main_f_440d00() { return -4; }

// sub_440d10  (orig 0x440d10, mov_ret)
uint32_t main_f_440d10() { return -4; }

// sub_440d20  (orig 0x440d20, mov_ret)
uint32_t main_f_440d20() { return -4; }

// sub_440d30  (orig 0x440d30, mov_ret)
uint32_t main_f_440d30() { return -4; }

// sub_440d40  (orig 0x440d40, mov_ret)
uint32_t main_f_440d40() { return 1; }

// sub_440d50  (orig 0x440d50, mov_ret)
uint32_t main_f_440d50() { return 1; }

// sub_440d60  (orig 0x440d60, straight)
uint32_t main_f_440d60(void* a0) {
    *(uint32_t*)((char*)(a0) + 86036L) = -1;
    return 0;
}

// sub_440d80  (orig 0x440d80, mov_ret)
uint32_t main_f_440d80() { return 1; }

// sub_440f00  (orig 0x440f00, straight)
uint32_t main_f_440f00(void* a0) { return *(uint32_t*)((char*)(a0) + 86040L); }

// sub_440f40  (orig 0x440f40, straight)
uint32_t main_f_440f40(void* a0) { return (*(uint32_t*)((char*)(a0) + 86040L)) & (7); }

// sub_440fd0  (orig 0x440fd0, straight)
uint32_t main_f_440fd0(void* a0) { return ((*(uint32_t*)((char*)(a0) + 86040L)) >> (3)) & (3); }

// sub_441020  (orig 0x441020, straight)
uint32_t main_f_441020(void* a0) { return ((*(uint32_t*)((char*)(a0) + 86040L)) >> (5)) & (1); }

// sub_441040  (orig 0x441040, mov_ret)
uint32_t main_f_441040() { return 0; }

// sub_442a20  (orig 0x442a20, mov_ret)
uint32_t main_f_442a20() { return -1; }

// sub_442c50  (orig 0x442c50, mov_ret)
uint32_t main_f_442c50() { return 1; }

// sub_442de0  (orig 0x442de0, straight)
uint32_t main_f_442de0(void* a0, uint32_t a1, uint64_t a2) {
    *(uint8_t*)((char*)(a0) + 86020L) = (uint8_t)((((uint32_t)a1)) & (1));
    *(uint32_t*)((char*)(a0) + 86024L) = (uint32_t)(a2);
    return 0;
}

// sub_445b20  (orig 0x445b20, mov_ret)
uint32_t main_f_445b20() { return 0; }

// sub_445de0  (orig 0x445de0, ret_only)
void main_f_445de0() {}

// sub_4460a0  (orig 0x4460a0, straight-line)
uint32_t main_f_4460a0(void* a0) { return (((*(uint64_t*)((char*)(a0) + 24) != 0)) ? (-4) : ((0) - (1))); }

// sub_446660  (orig 0x446660, mov_ret)
uint32_t main_f_446660() { return -4; }

// sub_446670  (orig 0x446670, mov_ret)
uint32_t main_f_446670() { return -4; }

// sub_446b10  (orig 0x446b10, mov_ret)
uint32_t main_f_446b10() { return 0; }

// sub_447300  (orig 0x447300, getter)
uint32_t main_f_447300(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_447310  (orig 0x447310, ret_only)
void main_f_447310() {}

// sub_447650  (orig 0x447650, straight)
uint32_t main_f_447650(void* a0) {
    *(uint32_t*)((char*)(a0) + 124) = -1;
    return 0;
}

// sub_447680  (orig 0x447680, getter)
uint32_t main_f_447680(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_4476c0  (orig 0x4476c0, straight)
uint32_t main_f_4476c0(void* a0) { return (*(uint32_t*)((char*)(a0) + 120)) & (3); }

// sub_447700  (orig 0x447700, straight)
uint32_t main_f_447700(void* a0) { return ((*(uint32_t*)((char*)(a0) + 120)) >> (2)) & (3); }

// sub_448680  (orig 0x448680, mov_ret)
uint32_t main_f_448680() { return -4; }

// sub_448690  (orig 0x448690, mov_ret)
uint32_t main_f_448690() { return 0; }

// sub_4486a0  (orig 0x4486a0, mov_ret)
uint64_t main_f_4486a0() { return 0; }

// sub_44a650  (orig 0x44a650, straight)
void* main_f_44a650(void* a0) {
    *(uint32_t*)((char*)(a0) + 44) = -1;
    return a0;
}

// sub_44dd40  (orig 0x44dd40, call)
extern void sub_44b1d0();
uint64_t main_f_44dd40(uint64_t a0, uint64_t a1) {
    uint32_t f_44dd40__r0 = ((uint32_t (*)(uintptr_t, uintptr_t, uintptr_t))&sub_44b1d0)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1)));
    uint64_t r0 = (f_44dd40__r0) + (1);
    asm volatile("");
    return r0;
}

// sub_44dd60  (orig 0x44dd60, call)
extern void sub_44b380();
uint64_t main_f_44dd60(uint64_t a0, uint64_t a1) {
    uint32_t f_44dd60__r0 = ((uint32_t (*)(uintptr_t, uintptr_t))&sub_44b380)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(((uint64_t)a1))));
    uint64_t r0 = (f_44dd60__r0) + (1);
    asm volatile("");
    return r0;
}

// sub_44dd90  (orig 0x44dd90, mov_ret)
uint32_t main_f_44dd90() { return 0; }

// sub_44e5a0  (orig 0x44e5a0, getter)
uint32_t main_f_44e5a0(void* a0) { return *(uint32_t*)((char*)(a0) + 896); }

// sub_44ea80  (orig 0x44ea80, straight)
uint32_t main_f_44ea80(void* a0) {
    *(uint32_t*)((char*)(a0) + 900) = 0;
    return 0;
}

// sub_44f240  (orig 0x44f240, mov_ret)
uint32_t main_f_44f240() { return 0; }

// sub_44fad0  (orig 0x44fad0, getter)
uint64_t main_f_44fad0(void* a0) { return *(uint64_t*)((char*)(a0) + 304); }

// sub_44fae0  (orig 0x44fae0, getter)
uint32_t main_f_44fae0(void* a0) { return *(uint32_t*)((char*)(a0) + 312); }

// sub_44faf0  (orig 0x44faf0, getter)
uint32_t main_f_44faf0(void* a0) { return *(uint32_t*)((char*)(a0) + 316); }

// sub_44fb00  (orig 0x44fb00, ptr_add)
void* main_f_44fb00(void* a0) { return (char*)a0 + 320; }

// sub_44fb10  (orig 0x44fb10, ptr_add)
void* main_f_44fb10(void* a0) { return (char*)a0 + 448; }

// sub_44fb20  (orig 0x44fb20, ptr_add)
void* main_f_44fb20(void* a0) { return (char*)a0 + 512; }

// sub_4527b0  (orig 0x4527b0, call)
extern void callee_17e9220();
uint32_t main_f_4527b0(void* a0, void* a1) {
    uint32_t r0 = ((((uint32_t (*)(uintptr_t, uintptr_t))&callee_17e9220)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8)))) != 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_4527e0  (orig 0x4527e0, call)
extern void callee_17e9220();
uint32_t main_f_4527e0(void* a0) {
    uint32_t r0 = ((((uint32_t (*)(uintptr_t))&callee_17e9220)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8)))) == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_452800  (orig 0x452800, call)
extern void callee_17e9220();
uint32_t main_f_452800(void* a0, void* a1) {
    uint32_t r0 = (((uint32_t (*)(uintptr_t, uintptr_t))&callee_17e9220)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))), ((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))))) >> (31);
    asm volatile("");
    return r0;
}

// sub_4534d0  (orig 0x4534d0, straight)
uint32_t main_f_4534d0(void* a0, uint64_t a1, uint64_t a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 544) = (uint32_t)(a1);
    *(uint64_t*)((char*)(p0) + 536) = a2;
    return 0;
}

// sub_4534e0  (orig 0x4534e0, straight)
uint32_t main_f_4534e0(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 528) = (uint32_t)(a1);
    return 0;
}

// GPUPostEffect_cpp_d_PPFX_ERROR_7  (orig 0x4553a0, straight-line)
uint32_t main_f_4553a0(void* a0, uint32_t a1, void* a2) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 504)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(96))))))));
    *(uint64_t*)((char*)(p0) + 68) = *(uint64_t*)((char*)(a2));
    return 0;
}

// sub_45e920  (orig 0x45e920, straight)
uint32_t main_f_45e920(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 864) = a1;
    return 0;
}

// GPUPostEffect_cpp_d_PPFX_ERROR_7  (orig 0x45e930, straight)
uint32_t main_f_45e930(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 872) = (uint8_t)((((uint32_t)a1)) & (1));
    return 0;
}

// GPUPostEffect_cpp_d_PPFX_ERROR_7  (orig 0x470860, straight)
uint32_t main_f_470860(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 170596L) = (uint32_t)(a1);
    return 0;
}

// GPUPostEffect_cpp_d_PPFX_WARNING_11  (orig 0x470880, straight)
uint32_t main_f_470880(void* a0) {
    *(uint8_t*)((char*)(a0) + 170604L) = 0;
    return 0;
}

// sub_471460  (orig 0x471460, ret_only)
void main_f_471460() {}

// sub_4738c0  (orig 0x4738c0, strlit-ret)
const char *main_f_4738c0() { static char g_f_4738c0[1]; __asm__ volatile("" ::: "memory"); return g_f_4738c0; }

// sub_4738d0  (orig 0x4738d0, strlit-ret)
const char *main_f_4738d0() { static char g_f_4738d0[1]; __asm__ volatile("" ::: "memory"); return g_f_4738d0; }

// sub_499f40  (orig 0x499f40, getter-chain)
uint64_t main_f_499f40(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 120))) + 120); }

// sub_499f50  (orig 0x499f50, indirect-tailcall)
void main_f_499f50(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 120));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 16)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_499f60  (orig 0x499f60, indirect-tailcall)
void main_f_499f60(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 120));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 24)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_499f90  (orig 0x499f90, mov_ret)
uint32_t main_f_499f90() { return 0; }

// sub_49a180  (orig 0x49a180, indirect-tailcall)
void main_f_49a180(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 120));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 152)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_49a250  (orig 0x49a250, indirect-tailcall)
void main_f_49a250(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 424)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_49a270  (orig 0x49a270, indirect-tailcall)
void main_f_49a270(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 120));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 184)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_49a600  (orig 0x49a600, indirect-tailcall)
void main_f_49a600(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint64_t a5, uint64_t a6, uint32_t a7) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 120));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 208)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))), ((uintptr_t)(a1)), ((uintptr_t)(a2)), ((uintptr_t)(a3)), ((uintptr_t)(a4)), ((uintptr_t)(a5)), ((uintptr_t)(a6)), ((uintptr_t)((((uint32_t)a7)) & (1))));
}

// sub_49f260  (orig 0x49f260, mov_ret)
uint32_t main_f_49f260() { return 0; }

// sub_49f270  (orig 0x49f270, mov_ret)
uint32_t main_f_49f270() { return 0; }

// sub_4a0530  (orig 0x4a0530, setter-chain)
void main_f_4a0530(void* a0) { *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_4afa90  (orig 0x4afa90, getter)
float main_f_4afa90(void* a0) { return *(float*)((char*)(a0) + 996); }

// sub_4b72b0  (orig 0x4b72b0, mov_ret)
uint32_t main_f_4b72b0() { return 1; }

// sub_4b72c0  (orig 0x4b72c0, getter)
uint8_t main_f_4b72c0(void* a0) { return *(uint8_t*)((char*)(a0) + 301); }

// sub_4b79a0  (orig 0x4b79a0, setter)
void main_f_4b79a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 152) = a1; }

// sub_4b8b40  (orig 0x4b8b40, straight)
uint32_t main_f_4b8b40(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 1280) = (uint32_t)(a1);
    return 0;
}

// sub_4b91f0  (orig 0x4b91f0, getter)
float main_f_4b91f0(void* a0) { return *(float*)((char*)(a0) + 92); }

// sub_4b9200  (orig 0x4b9200, getter)
float main_f_4b9200(void* a0) { return *(float*)((char*)(a0) + 96); }

// sub_4b9210  (orig 0x4b9210, ptr_add)
void* main_f_4b9210(void* a0) { return (char*)a0 + 100; }

// sub_4b9820  (orig 0x4b9820, getter)
uint32_t main_f_4b9820(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_4b9830  (orig 0x4b9830, compare)
bool main_f_4b9830(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 16)) != (uint64_t)(0); }

// sub_4b9840  (orig 0x4b9840, ptr_add)
void* main_f_4b9840(void* a0) { return (char*)a0 + 16; }

// sub_4b9850  (orig 0x4b9850, ptr_add)
void* main_f_4b9850(void* a0) { return (char*)a0 + 16; }

// sub_4b9a90  (orig 0x4b9a90, ret_only)
void main_f_4b9a90() {}

// sub_4bb5d0  (orig 0x4bb5d0, getter)
uint32_t main_f_4bb5d0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_4bb5e0  (orig 0x4bb5e0, getter)
uint64_t main_f_4bb5e0(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_4bd8c0  (orig 0x4bd8c0, straight)
uint32_t main_f_4bd8c0(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 64) = (uint32_t)(a1);
    return 1;
}

// sub_4bd8d0  (orig 0x4bd8d0, getter)
uint32_t main_f_4bd8d0(void* a0) { return *(uint32_t*)((char*)(a0) + 64); }

// sub_4be6c0  (orig 0x4be6c0, setter)
void main_f_4be6c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 160) = a1; }

// sub_4be6d0  (orig 0x4be6d0, getter)
uint64_t main_f_4be6d0(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_4be6e0  (orig 0x4be6e0, setter)
void main_f_4be6e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 176) = a1; }

// sub_4be6f0  (orig 0x4be6f0, getter)
uint64_t main_f_4be6f0(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_4be720  (orig 0x4be720, getter)
uint64_t main_f_4be720(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_4be790  (orig 0x4be790, getter)
uint64_t main_f_4be790(void* a0) { return *(uint64_t*)((char*)(a0) + 184); }

// sub_4bea70  (orig 0x4bea70, getter)
uint32_t main_f_4bea70(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4bf6a0  (orig 0x4bf6a0, ret_only)
void main_f_4bf6a0() {}

// sub_4c07c0  (orig 0x4c07c0, getter)
uint64_t main_f_4c07c0(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_4c07f0  (orig 0x4c07f0, compare)
bool main_f_4c07f0(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 1152)) > (int64_t)(0); }

// sub_4c0800  (orig 0x4c0800, straight)
void main_f_4c0800(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1156) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_4c0810  (orig 0x4c0810, getter)
uint8_t main_f_4c0810(void* a0) { return *(uint8_t*)((char*)(a0) + 1156); }

// sub_4c08f0  (orig 0x4c08f0, getter)
uint64_t main_f_4c08f0(void* a0) { return *(uint64_t*)((char*)(a0) + 1160); }

// sub_4c0900  (orig 0x4c0900, ptr_add)
void* main_f_4c0900(void* a0) { return (char*)a0 + 1168; }

// sub_4c1760  (orig 0x4c1760, straight)
uint64_t main_f_4c1760(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 4032));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_4c1770  (orig 0x4c1770, mov_ret)
uint32_t main_f_4c1770() { return 1; }

// sub_4c1780  (orig 0x4c1780, mov_ret)
uint32_t main_f_4c1780() { return 1; }

// sub_4c1790  (orig 0x4c1790, mov_ret)
uint32_t main_f_4c1790() { return 1; }

// sub_4c17f0  (orig 0x4c17f0, ptr_add)
void* main_f_4c17f0(void* a0) { return (char*)a0 + 1104; }

// sub_4c1870  (orig 0x4c1870, ptr_add)
void* main_f_4c1870(void* a0) { return (char*)a0 + 1640; }

// sub_4c1880  (orig 0x4c1880, ptr_add)
void* main_f_4c1880(void* a0) { return (char*)a0 + 1648; }

// sub_4c1890  (orig 0x4c1890, straight)
uint64_t main_f_4c1890() { return 0; }

// sub_4c2080  (orig 0x4c2080, ptr_add)
void* main_f_4c2080(void* a0) { return (char*)a0 + 4072; }

// sub_4c20c0  (orig 0x4c20c0, straight)
uint64_t main_f_4c20c0(uint64_t a0) { return (((uint64_t)a0)) + (4120); }

// sub_4c2200  (orig 0x4c2200, getter)
uint32_t main_f_4c2200(void* a0) { return *(uint32_t*)((char*)(a0) + 3888); }

// sub_4c23c0  (orig 0x4c23c0, getter)
uint32_t main_f_4c23c0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4c2e50  (orig 0x4c2e50, straight)
uint32_t main_f_4c2e50(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 24) = (uint32_t)(a1);
    return 1;
}

// sub_4c2e60  (orig 0x4c2e60, getter)
uint32_t main_f_4c2e60(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_4c3220  (orig 0x4c3220, getter)
uint64_t main_f_4c3220(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_4c32d0  (orig 0x4c32d0, getter)
uint32_t main_f_4c32d0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4c3640  (orig 0x4c3640, strlit-ret)
const char *main_f_4c3640() { static char g_f_4c3640[1]; __asm__ volatile("" ::: "memory"); return g_f_4c3640; }

// sub_4c4040  (orig 0x4c4040, straight)
void main_f_4c4040(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 2621560L) = a1;
}

// sub_4c4050  (orig 0x4c4050, straight)
uint64_t main_f_4c4050(void* a0) { return *(uint64_t*)((char*)(a0) + 2621560L); }

// sub_4c4060  (orig 0x4c4060, straight)
void main_f_4c4060(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 2621576L) = a1;
}

// sub_4c4070  (orig 0x4c4070, straight)
uint64_t main_f_4c4070(void* a0) { return *(uint64_t*)((char*)(a0) + 2621576L); }

// sub_4c4080  (orig 0x4c4080, straight)
uint64_t main_f_4c4080(void* a0) { return *(uint64_t*)((char*)(a0) + 2621520L); }

// sub_4c4090  (orig 0x4c4090, ret_only)
void main_f_4c4090() {}

// sub_4c4cf0  (orig 0x4c4cf0, ret_only)
void main_f_4c4cf0() {}

// sub_4c4d00  (orig 0x4c4d00, ret_only)
void main_f_4c4d00() {}

// sub_4c4d70  (orig 0x4c4d70, ret_only)
void main_f_4c4d70() {}

// sub_4c4d80  (orig 0x4c4d80, ret_only)
void main_f_4c4d80() {}

// sub_4c5b30  (orig 0x4c5b30, call)
extern void sub_4c4700();
uint32_t main_f_4c5b30() {
    sub_4c4700();
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_4c5b50  (orig 0x4c5b50, call)
extern void sub_4c4700();
uint32_t main_f_4c5b50() {
    sub_4c4700();
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_4c66b0  (orig 0x4c66b0, getter)
uint32_t main_f_4c66b0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_4c70b0  (orig 0x4c70b0, ptr_add)
void* main_f_4c70b0(void* a0) { return (char*)a0 + 32; }

// sub_4c70c0  (orig 0x4c70c0, ptr_add)
void* main_f_4c70c0(void* a0) { return (char*)a0 + 24; }

// sub_4c70d0  (orig 0x4c70d0, getter)
uint32_t main_f_4c70d0(void* a0) { return *(uint32_t*)((char*)(a0) + 80); }

// sub_4c70e0  (orig 0x4c70e0, getter)
uint32_t main_f_4c70e0(void* a0) { return *(uint32_t*)((char*)(a0) + 72); }

// sub_4c7100  (orig 0x4c7100, ptr_add)
void* main_f_4c7100(void* a0) { return (char*)a0 + 84; }

// sub_4c7110  (orig 0x4c7110, straight)
uint32_t main_f_4c7110(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 100) = *(uint64_t*)((char*)(a1));
    return 1;
}

// sub_4c7120  (orig 0x4c7120, ptr_add)
void* main_f_4c7120(void* a0) { return (char*)a0 + 100; }

// sub_4c7130  (orig 0x4c7130, straight)
void* main_f_4c7130(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(p0) + 320) = (*(uint32_t*)((char*)(a0) + 320)) + (1);
    return a0;
}

// sub_4c7b10  (orig 0x4c7b10, getter)
uint32_t main_f_4c7b10(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_4c7bc0  (orig 0x4c7bc0, getter)
uint32_t main_f_4c7bc0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4c7c70  (orig 0x4c7c70, getter)
uint32_t main_f_4c7c70(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_4c8760  (orig 0x4c8760, call)
extern void callee_17e9320();
uint32_t main_f_4c8760(void* a0) {
    uint64_t f_4c8760__r0 = ((uint64_t (*)(uintptr_t))&callee_17e9320)(((uintptr_t)((char*)(a0) + 8)));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_4c8780  (orig 0x4c8780, call)
extern void callee_17e9330();
uint32_t main_f_4c8780(void* a0) {
    uint64_t f_4c8780__r0 = ((uint64_t (*)(uintptr_t))&callee_17e9330)(((uintptr_t)((char*)(a0) + 8)));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_4c8830  (orig 0x4c8830, mov_ret)
uint64_t main_f_4c8830() { return 0; }

// sub_4c8d30  (orig 0x4c8d30, ptr_add)
void* main_f_4c8d30(void* a0) { return (char*)a0 + 376; }

// sub_4c8e00  (orig 0x4c8e00, mov_ret)
uint64_t main_f_4c8e00() { return 0; }

// sub_4c8e10  (orig 0x4c8e10, mov_ret)
uint64_t main_f_4c8e10() { return 0; }

// sub_4c8e20  (orig 0x4c8e20, ptr_add)
void* main_f_4c8e20(void* a0) { return (char*)a0 + 328; }

// sub_4c8e30  (orig 0x4c8e30, ptr_add)
void* main_f_4c8e30(void* a0) { return (char*)a0 + 280; }

// sub_4c8ee0  (orig 0x4c8ee0, getter)
uint32_t main_f_4c8ee0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4c8f70  (orig 0x4c8f70, straight)
uint64_t main_f_4c8f70() { return 0; }

// sub_4c9b90  (orig 0x4c9b90, mov_ret)
uint32_t main_f_4c9b90() { return 1; }

// sub_4c9fc0  (orig 0x4c9fc0, getter)
uint32_t main_f_4c9fc0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4c9fd0  (orig 0x4c9fd0, ret_only)
void main_f_4c9fd0() {}

// sub_4cb410  (orig 0x4cb410, ret_only)
void main_f_4cb410() {}

// sub_4cbbb0  (orig 0x4cbbb0, mov_ret)
uint32_t main_f_4cbbb0() { return 1; }

// sub_4ce060  (orig 0x4ce060, getter)
uint64_t main_f_4ce060(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_4ce070  (orig 0x4ce070, getter)
uint64_t main_f_4ce070(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_4ce1b0  (orig 0x4ce1b0, getter)
uint32_t main_f_4ce1b0(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_4ce300  (orig 0x4ce300, getter)
uint64_t main_f_4ce300(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_4ce310  (orig 0x4ce310, getter)
uint64_t main_f_4ce310(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_4ce320  (orig 0x4ce320, getter)
uint64_t main_f_4ce320(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_4ce330  (orig 0x4ce330, getter)
uint64_t main_f_4ce330(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_4ce340  (orig 0x4ce340, getter)
uint64_t main_f_4ce340(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_4ce350  (orig 0x4ce350, getter)
uint64_t main_f_4ce350(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_4ce360  (orig 0x4ce360, getter)
uint64_t main_f_4ce360(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_4ce370  (orig 0x4ce370, getter)
uint64_t main_f_4ce370(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_4ce380  (orig 0x4ce380, getter)
uint64_t main_f_4ce380(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_4ce390  (orig 0x4ce390, getter)
uint64_t main_f_4ce390(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_4ce3a0  (orig 0x4ce3a0, getter)
uint64_t main_f_4ce3a0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_4ce3b0  (orig 0x4ce3b0, getter)
uint64_t main_f_4ce3b0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_4ce3c0  (orig 0x4ce3c0, getter)
uint64_t main_f_4ce3c0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_4ce3d0  (orig 0x4ce3d0, getter)
uint64_t main_f_4ce3d0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_4ce570  (orig 0x4ce570, ptr_add)
void* main_f_4ce570(void* a0) { return (char*)a0 + 360; }

// sub_4ce590  (orig 0x4ce590, ptr_add)
void* main_f_4ce590(void* a0) { return (char*)a0 + 232; }

// sub_4ce5a0  (orig 0x4ce5a0, getter)
uint32_t main_f_4ce5a0(void* a0) { return *(uint32_t*)((char*)(a0) + 296); }

// sub_4ce710  (orig 0x4ce710, straight-line)
uint64_t main_f_4ce710(void* a0, uint32_t a1) { return (*(uint64_t*)((char*)(a0) + 320)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(48)))))); }

// sub_4cf6a0  (orig 0x4cf6a0, getter)
uint64_t main_f_4cf6a0(void* a0) { return *(uint64_t*)((char*)(a0) + 688); }

// sub_4cf750  (orig 0x4cf750, getter)
uint32_t main_f_4cf750(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4cf860  (orig 0x4cf860, getter)
uint32_t main_f_4cf860(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4cf870  (orig 0x4cf870, indirect-tailcall)
void main_f_4cf870(uint64_t a0, void* a1, uint32_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1) + 8));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 112)))))(((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(a1)), ((uintptr_t)((((uint32_t)a2)) & (1))));
}

// sub_4cf890  (orig 0x4cf890, indirect-tailcall)
void main_f_4cf890(uint64_t a0, void* a1, uint32_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1) + 8));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 120)))))(((uintptr_t)(*(uint64_t*)((char*)(a1) + 8))), ((uintptr_t)(a1)), ((uintptr_t)((((uint32_t)a2)) & (1))));
}

// sub_4cfb40  (orig 0x4cfb40, mov_ret)
uint64_t main_f_4cfb40() { return 0; }

// sub_4cfb50  (orig 0x4cfb50, mov_ret)
uint32_t main_f_4cfb50() { return 0; }

// sub_4cfb60  (orig 0x4cfb60, mov_ret)
uint32_t main_f_4cfb60() { return 0; }

// sub_4cfb70  (orig 0x4cfb70, mov_ret)
uint32_t main_f_4cfb70() { return 0; }

// sub_4cfb80  (orig 0x4cfb80, mov_ret)
uint32_t main_f_4cfb80() { return 0; }

// sub_4cfe20  (orig 0x4cfe20, ptr_add)
void* main_f_4cfe20(void* a0) { return (char*)a0 + 176; }

// sub_4cff20  (orig 0x4cff20, ret_only)
void main_f_4cff20() {}

// sub_4cffd0  (orig 0x4cffd0, mov_ret)
uint32_t main_f_4cffd0() { return 1; }

// sub_4cffe0  (orig 0x4cffe0, mov_ret)
uint32_t main_f_4cffe0() { return 1; }

// sub_4cfff0  (orig 0x4cfff0, getter)
uint8_t main_f_4cfff0(void* a0) { return *(uint8_t*)((char*)(a0) + 184); }

// sub_4d13e0  (orig 0x4d13e0, getter)
uint32_t main_f_4d13e0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_4d1650  (orig 0x4d1650, getter)
uint32_t main_f_4d1650(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_4d2710  (orig 0x4d2710, getter)
uint32_t main_f_4d2710(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4d2f00  (orig 0x4d2f00, getter)
uint32_t main_f_4d2f00(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_4d2f10  (orig 0x4d2f10, straight)
uint64_t main_f_4d2f10(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 64));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_4d2f20  (orig 0x4d2f20, straight)
uint64_t main_f_4d2f20(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 64));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_4d3010  (orig 0x4d3010, getter)
uint32_t main_f_4d3010(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4d3180  (orig 0x4d3180, mov_ret)
uint32_t main_f_4d3180() { return 1; }

// sub_4d99c0  (orig 0x4d99c0, getter)
uint32_t main_f_4d99c0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4da480  (orig 0x4da480, mov_ret)
uint32_t main_f_4da480() { return 1; }

// sub_4dad50  (orig 0x4dad50, getter)
uint32_t main_f_4dad50(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_4dad60  (orig 0x4dad60, straight)
uint64_t main_f_4dad60(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 64));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_4db400  (orig 0x4db400, getter)
uint32_t main_f_4db400(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4dc3e0  (orig 0x4dc3e0, getter)
uint32_t main_f_4dc3e0(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_4dc400  (orig 0x4dc400, ptr_add)
void* main_f_4dc400(void* a0) { return (char*)a0 + 64; }

// sub_4dc410  (orig 0x4dc410, ptr_add)
void* main_f_4dc410(void* a0) { return (char*)a0 + 80; }

// sub_4dc420  (orig 0x4dc420, getter)
uint32_t main_f_4dc420(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_4dc430  (orig 0x4dc430, ptr_add)
void* main_f_4dc430(void* a0) { return (char*)a0 + 136; }

// sub_4dc440  (orig 0x4dc440, ptr_add)
void* main_f_4dc440(void* a0) { return (char*)a0 + 72; }

// sub_4dc450  (orig 0x4dc450, getter)
uint32_t main_f_4dc450(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_4dc470  (orig 0x4dc470, ptr_add)
void* main_f_4dc470(void* a0) { return (char*)a0 + 48; }

// sub_4dc480  (orig 0x4dc480, mov_ret)
uint32_t main_f_4dc480() { return -1; }

// sub_4dc490  (orig 0x4dc490, straight-line)
uint64_t main_f_4dc490(uint64_t unused0, void* a1) { return (((*(uint64_t*)((char*)(a1) + 8) != 0) ? 1 : 0)) & (((*(uint64_t*)((char*)(a1)) != 0) ? 1 : 0)); }

// sub_4dcb30  (orig 0x4dcb30, call)
extern void sub_4c4700();
uint32_t main_f_4dcb30(void* a0) {
    uint64_t f_4dcb30__r0 = ((uint64_t (*)(uintptr_t))&sub_4c4700)(((uintptr_t)((char*)(a0) + 136)));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_4dcb50  (orig 0x4dcb50, ret_only)
void main_f_4dcb50() {}

// sub_4dcb60  (orig 0x4dcb60, ret_only)
void main_f_4dcb60() {}

// sub_4dd420  (orig 0x4dd420, mov_ret)
uint32_t main_f_4dd420() { return 1; }

// sub_4ded20  (orig 0x4ded20, mov_ret)
uint32_t main_f_4ded20() { return 3; }

// sub_4df920  (orig 0x4df920, mov_ret)
uint32_t main_f_4df920() { return 2; }

// sub_4dffc0  (orig 0x4dffc0, mov_ret)
uint32_t main_f_4dffc0() { return 3; }

// sub_4e2d70  (orig 0x4e2d70, straight)
uint32_t main_f_4e2d70(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 72) = (uint32_t)(a1);
    return 1;
}

// sub_4e2d80  (orig 0x4e2d80, straight)
uint32_t main_f_4e2d80(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 76) = (uint32_t)(a1);
    return 1;
}

// sub_4e2e30  (orig 0x4e2e30, getter)
uint32_t main_f_4e2e30(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4e2e40  (orig 0x4e2e40, getter)
uint32_t main_f_4e2e40(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_4e2e50  (orig 0x4e2e50, getter)
float main_f_4e2e50(void* a0) { return *(float*)((char*)(a0) + 52); }

// sub_4e2e60  (orig 0x4e2e60, getter)
float main_f_4e2e60(void* a0) { return *(float*)((char*)(a0) + 56); }

// sub_4e2e70  (orig 0x4e2e70, getter)
float main_f_4e2e70(void* a0) { return *(float*)((char*)(a0) + 60); }

// sub_4e2e80  (orig 0x4e2e80, getter)
float main_f_4e2e80(void* a0) { return *(float*)((char*)(a0) + 64); }

// sub_4e2e90  (orig 0x4e2e90, getter)
float main_f_4e2e90(void* a0) { return *(float*)((char*)(a0) + 68); }

// sub_4e2ea0  (orig 0x4e2ea0, ptr_add)
void* main_f_4e2ea0(void* a0) { return (char*)a0 + 28; }

// sub_4e3c30  (orig 0x4e3c30, mov_ret)
uint32_t main_f_4e3c30() { return 1; }

// sub_4e4090  (orig 0x4e4090, straight)
void main_f_4e4090(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 416) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_4e40a0  (orig 0x4e40a0, getter)
uint8_t main_f_4e40a0(void* a0) { return *(uint8_t*)((char*)(a0) + 416); }

// sub_4e4c20  (orig 0x4e4c20, ptr_add)
void* main_f_4e4c20(void* a0) { return (char*)a0 + 272; }

// sub_4e61e0  (orig 0x4e61e0, getter)
uint64_t main_f_4e61e0(void* a0) { return *(uint64_t*)((char*)(a0) + 184); }

// sub_4e7910  (orig 0x4e7910, getter)
uint32_t main_f_4e7910(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4e8b20  (orig 0x4e8b20, mov_ret)
uint32_t main_f_4e8b20() { return 1; }

// sub_4ea190  (orig 0x4ea190, getter)
uint32_t main_f_4ea190(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4eac50  (orig 0x4eac50, mov_ret)
uint32_t main_f_4eac50() { return 1; }

// sub_4eae50  (orig 0x4eae50, indirect-tailcall)
void main_f_4eae50(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint64_t a5, uint64_t a6, uint64_t a7) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uint32_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 64)))))(((uintptr_t)(a0)), ((uintptr_t)(a1)), ((uintptr_t)(a2)), ((uintptr_t)(a3)), ((uintptr_t)(a4)), ((uintptr_t)(0)), ((uint32_t)(0)), ((uint32_t)(0)));
}

// sub_4ebaf0  (orig 0x4ebaf0, mov_ret)
uint32_t main_f_4ebaf0() { return 0; }

// sub_4ebb00  (orig 0x4ebb00, mov_ret)
uint32_t main_f_4ebb00() { return 0; }

// sub_4ebb10  (orig 0x4ebb10, mov_ret)
uint32_t main_f_4ebb10() { return 0; }

// sub_4ec910  (orig 0x4ec910, getter)
uint32_t main_f_4ec910(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4ed6d0  (orig 0x4ed6d0, mov_ret)
uint32_t main_f_4ed6d0() { return 96; }

// sub_4f10c0  (orig 0x4f10c0, getter)
uint32_t main_f_4f10c0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4f1870  (orig 0x4f1870, ptr_add)
void* main_f_4f1870(void* a0) { return (char*)a0 + 32; }

// sub_4f1880  (orig 0x4f1880, ptr_add)
void* main_f_4f1880(void* a0) { return (char*)a0 + 24; }

// sub_4f1890  (orig 0x4f1890, getter)
uint32_t main_f_4f1890(void* a0) { return *(uint32_t*)((char*)(a0) + 80); }

// sub_4f18a0  (orig 0x4f18a0, getter)
uint32_t main_f_4f18a0(void* a0) { return *(uint32_t*)((char*)(a0) + 72); }

// sub_4f3dc0  (orig 0x4f3dc0, straight)
uint32_t main_f_4f3dc0(uint64_t unused0, void* a1) {
    *(uint64_t*)((char*)(a1)) = 0;
    return 1;
}

// sub_4f4690  (orig 0x4f4690, getter)
uint32_t main_f_4f4690(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_4f6620  (orig 0x4f6620, getter)
uint32_t main_f_4f6620(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4f6890  (orig 0x4f6890, straight)
uint32_t main_f_4f6890(uint64_t a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = (uint32_t)(a0);
    return 1;
}

// sub_4f6c50  (orig 0x4f6c50, getter)
uint64_t main_f_4f6c50(void* a0) { return *(uint64_t*)((char*)(a0) + 112); }

// sub_4f6c60  (orig 0x4f6c60, getter)
uint32_t main_f_4f6c60(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_4f6c70  (orig 0x4f6c70, mov_ret)
uint32_t main_f_4f6c70() { return 1; }

// sub_4f6f00  (orig 0x4f6f00, getter)
uint32_t main_f_4f6f00(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4f7190  (orig 0x4f7190, ret_only)
void main_f_4f7190() {}

// sub_4f7d10  (orig 0x4f7d10, getter-chain)
uint64_t main_f_4f7d10(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 1864))) + 80); }

// sub_4f7d20  (orig 0x4f7d20, getter-chain)
uint64_t main_f_4f7d20(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 1872))) + 80); }

// sub_4f8a50  (orig 0x4f8a50, getter)
uint64_t main_f_4f8a50(void* a0) { return *(uint64_t*)((char*)(a0) + 696); }

// sub_4f8a60  (orig 0x4f8a60, getter)
uint32_t main_f_4f8a60(void* a0) { return *(uint32_t*)((char*)(a0) + 704); }

// sub_4f8a70  (orig 0x4f8a70, getter)
uint32_t main_f_4f8a70(void* a0) { return *(uint32_t*)((char*)(a0) + 708); }

// sub_4f9280  (orig 0x4f9280, mov_ret)
uint32_t main_f_4f9280() { return 1; }

// sub_4f9290  (orig 0x4f9290, mov_ret)
uint32_t main_f_4f9290() { return 1; }

// sub_4f96a0  (orig 0x4f96a0, getter)
uint64_t main_f_4f96a0(void* a0) { return *(uint64_t*)((char*)(a0) + 560); }

// sub_4f96b0  (orig 0x4f96b0, getter)
uint64_t main_f_4f96b0(void* a0) { return *(uint64_t*)((char*)(a0) + 568); }

// sub_4f96c0  (orig 0x4f96c0, ptr_add)
void* main_f_4f96c0(void* a0) { return (char*)a0 + 80; }

// sub_4f96d0  (orig 0x4f96d0, getter)
uint32_t main_f_4f96d0(void* a0) { return *(uint32_t*)((char*)(a0) + 576); }

// sub_4f96e0  (orig 0x4f96e0, straight-line)
uint64_t main_f_4f96e0(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(72))))))) + (268); }

// sub_4f96f0  (orig 0x4f96f0, mov_ret)
uint32_t main_f_4f96f0() { return 8; }

// sub_4f9700  (orig 0x4f9700, mov_ret)
uint32_t main_f_4f9700() { return 5; }

// sub_4f9710  (orig 0x4f9710, getter)
uint32_t main_f_4f9710(void* a0) { return *(uint32_t*)((char*)(a0) + 580); }

// sub_4f9720  (orig 0x4f9720, getter)
uint64_t main_f_4f9720(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_4f9730  (orig 0x4f9730, getter)
uint64_t main_f_4f9730(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_4f9740  (orig 0x4f9740, getter)
uint64_t main_f_4f9740(void* a0) { return *(uint64_t*)((char*)(a0) + 600); }

// sub_4f9750  (orig 0x4f9750, getter)
uint64_t main_f_4f9750(void* a0) { return *(uint64_t*)((char*)(a0) + 608); }

// sub_4f9760  (orig 0x4f9760, getter)
uint64_t main_f_4f9760(void* a0) { return *(uint64_t*)((char*)(a0) + 616); }

// sub_4f9770  (orig 0x4f9770, mov_ret)
uint64_t main_f_4f9770() { return 0; }

// sub_4f9dd0  (orig 0x4f9dd0, mov_ret)
uint32_t main_f_4f9dd0() { return 1; }

// sub_4f9e60  (orig 0x4f9e60, mov_ret)
uint32_t main_f_4f9e60() { return 1; }

// sub_4f9e70  (orig 0x4f9e70, getter)
uint8_t main_f_4f9e70(void* a0) { return *(uint8_t*)((char*)(a0) + 624); }

// sub_4f9e80  (orig 0x4f9e80, mov_ret)
uint32_t main_f_4f9e80() { return 0; }

// sub_4f9e90  (orig 0x4f9e90, mov_ret)
uint32_t main_f_4f9e90() { return 1; }

// sub_4fa500  (orig 0x4fa500, straight-line)
int64_t main_f_4fa500(uint64_t unused0, uint64_t unused1, uint64_t unused2, uint32_t a3, uint32_t a4, void* a5, void* a6) {
    *(uint32_t*)((char*)(a5)) = (uint32_t)(a3);
    *(uint32_t*)((char*)(a6)) = 0;
    return ((int64_t)(((int32_t)((((uint32_t)a4)) * (((uint32_t)a3))))));
}

// sub_4fa520  (orig 0x4fa520, ret_only)
void main_f_4fa520() {}

// sub_4faa70  (orig 0x4faa70, straight)
void main_f_4faa70(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 584) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_4faa80  (orig 0x4faa80, getter)
uint8_t main_f_4faa80(void* a0) { return *(uint8_t*)((char*)(a0) + 584); }

// sub_4faa90  (orig 0x4faa90, mov_ret)
uint32_t main_f_4faa90() { return 0; }

// sub_4faaa0  (orig 0x4faaa0, mov_ret)
uint32_t main_f_4faaa0() { return 0; }

// sub_4faab0  (orig 0x4faab0, mov_ret)
uint32_t main_f_4faab0() { return 0; }

// sub_4fb440  (orig 0x4fb440, getter)
uint32_t main_f_4fb440(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4fbb10  (orig 0x4fbb10, straight)
uint32_t main_f_4fbb10(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 40) = a1;
    return 1;
}

// sub_4fcb20  (orig 0x4fcb20, ptr_add)
void* main_f_4fcb20(void* a0) { return (char*)a0 + 56; }

// sub_4fcb30  (orig 0x4fcb30, ptr_add)
void* main_f_4fcb30(void* a0) { return (char*)a0 + 48; }

// sub_4fcb40  (orig 0x4fcb40, getter)
uint32_t main_f_4fcb40(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_4fcb50  (orig 0x4fcb50, getter)
uint32_t main_f_4fcb50(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_4fcb60  (orig 0x4fcb60, getter)
uint64_t main_f_4fcb60(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_4fcb70  (orig 0x4fcb70, getter)
uint64_t main_f_4fcb70(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_4fcb80  (orig 0x4fcb80, getter)
uint64_t main_f_4fcb80(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_4fcb90  (orig 0x4fcb90, ptr_add)
void* main_f_4fcb90(void* a0) { return (char*)a0 + 108; }

// sub_4fcba0  (orig 0x4fcba0, ret_only)
void main_f_4fcba0() {}

// sub_4fcbb0  (orig 0x4fcbb0, indirect-tailcall)
void main_f_4fcbb0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 152)))))(((uintptr_t)(a0)));
}

// sub_4fcbc0  (orig 0x4fcbc0, ret_only)
void main_f_4fcbc0() {}

// sub_4fcbd0  (orig 0x4fcbd0, ret_only)
void main_f_4fcbd0() {}

// sub_4fcbe0  (orig 0x4fcbe0, ret_only)
void main_f_4fcbe0() {}

// sub_4fcbf0  (orig 0x4fcbf0, ret_only)
void main_f_4fcbf0() {}

// sub_4fcc00  (orig 0x4fcc00, ptr_add)
void* main_f_4fcc00(void* a0) { return (char*)a0 + 128; }

// sub_4fcc10  (orig 0x4fcc10, mov_ret)
uint32_t main_f_4fcc10() { return 1; }

// sub_4fcf40  (orig 0x4fcf40, ptr_add)
void* main_f_4fcf40(void* a0) { return (char*)a0 + 192; }

// sub_4fcf50  (orig 0x4fcf50, getter)
uint64_t main_f_4fcf50(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_4fd020  (orig 0x4fd020, getter)
uint8_t main_f_4fd020(void* a0) { return *(uint8_t*)((char*)(a0) + 268); }

// sub_4fd070  (orig 0x4fd070, getter)
uint64_t main_f_4fd070(void* a0) { return *(uint64_t*)((char*)(a0) + 320); }

// sub_4fdc90  (orig 0x4fdc90, straight)
void main_f_4fdc90(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 269) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_4fdca0  (orig 0x4fdca0, getter)
uint8_t main_f_4fdca0(void* a0) { return *(uint8_t*)((char*)(a0) + 269); }

// sub_4fdcb0  (orig 0x4fdcb0, getter)
uint32_t main_f_4fdcb0(void* a0) { return *(uint32_t*)((char*)(a0) + 264); }

// sub_4fdcc0  (orig 0x4fdcc0, getter)
uint32_t main_f_4fdcc0(void* a0) { return *(uint32_t*)((char*)(a0) + 276); }

// sub_4fdcd0  (orig 0x4fdcd0, getter)
uint32_t main_f_4fdcd0(void* a0) { return *(uint32_t*)((char*)(a0) + 280); }

// sub_4fe030  (orig 0x4fe030, mov_ret)
uint32_t main_f_4fe030() { return 0; }

// sub_4fe040  (orig 0x4fe040, mov_ret)
uint32_t main_f_4fe040() { return 0; }

// sub_4fe050  (orig 0x4fe050, ret_only)
void main_f_4fe050() {}

// sub_4fe060  (orig 0x4fe060, mov_ret)
uint32_t main_f_4fe060() { return 0; }

// sub_4fe110  (orig 0x4fe110, getter)
uint32_t main_f_4fe110(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_4fe120  (orig 0x4fe120, getter)
uint64_t main_f_4fe120(void* a0) { return *(uint64_t*)((char*)(a0) + 408); }

// sub_4ff200  (orig 0x4ff200, getter)
uint32_t main_f_4ff200(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_4ff810  (orig 0x4ff810, call)
extern void SiCore_String_74();
uint32_t main_f_4ff810(void* a0) {
    uint64_t f_4ff810__r0 = ((uint64_t (*)(uintptr_t))&SiCore_String_74)(((uintptr_t)((char*)(a0) - 8)));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_4ff830  (orig 0x4ff830, ptr_add)
void* main_f_4ff830(void* a0) { return (char*)a0 + 48; }

// sub_4ff840  (orig 0x4ff840, ptr_add)
void* main_f_4ff840(void* a0) { return (char*)a0 + 40; }

// sub_4ff850  (orig 0x4ff850, getter)
uint32_t main_f_4ff850(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_4ff860  (orig 0x4ff860, getter)
uint32_t main_f_4ff860(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_4ff870  (orig 0x4ff870, getter)
uint64_t main_f_4ff870(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_4ff880  (orig 0x4ff880, getter)
uint64_t main_f_4ff880(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_4ff890  (orig 0x4ff890, getter)
uint64_t main_f_4ff890(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_4ff8a0  (orig 0x4ff8a0, ptr_add)
void* main_f_4ff8a0(void* a0) { return (char*)a0 + 100; }

// sub_4ff8b0  (orig 0x4ff8b0, ret_only)
void main_f_4ff8b0() {}

// sub_4ff8c0  (orig 0x4ff8c0, indirect-tailcall)
void main_f_4ff8c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 152)))))(((uintptr_t)(a0)));
}

// sub_4ff8d0  (orig 0x4ff8d0, ret_only)
void main_f_4ff8d0() {}

// sub_4ff8e0  (orig 0x4ff8e0, ret_only)
void main_f_4ff8e0() {}

// sub_4ff8f0  (orig 0x4ff8f0, ret_only)
void main_f_4ff8f0() {}

// sub_4ff900  (orig 0x4ff900, ret_only)
void main_f_4ff900() {}

// sub_4ff910  (orig 0x4ff910, ptr_add)
void* main_f_4ff910(void* a0) { return (char*)a0 + 152; }

// sub_4ffaf0  (orig 0x4ffaf0, ptr_add)
void* main_f_4ffaf0(void* a0) { return (char*)a0 + 576; }

// sub_4ffb80  (orig 0x4ffb80, call)
extern void sub_500890();
uint64_t main_f_4ffb80(void* a0, uint32_t a1) {
    uint64_t r0 = ((((uint64_t (*)(uintptr_t, uintptr_t))&sub_500890)(((uintptr_t)((char*)(a0) + 120)), ((uintptr_t)((((uint32_t)a1)) & (255)))) != 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_4ffbb0  (orig 0x4ffbb0, straight-line)
void* main_f_4ffbb0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 616));
    return (((*(uint64_t*)((char*)(a0) + 616) == 0)) ? (void *)(uintptr_t)(0) : ((char*)(p0) + 64));
}

// sub_4ffbd0  (orig 0x4ffbd0, ptr_add)
void* main_f_4ffbd0(void* a0) { return (char*)a0 + 120; }

// sub_4ffbf0  (orig 0x4ffbf0, ret_only)
void main_f_4ffbf0() {}

// sub_4ffc00  (orig 0x4ffc00, mov_ret)
uint32_t main_f_4ffc00() { return 0; }

// sub_4ffce0  (orig 0x4ffce0, getter)
uint32_t main_f_4ffce0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_500530  (orig 0x500530, setter)
void main_f_500530(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 24) = a1; }

// sub_500540  (orig 0x500540, getter)
uint64_t main_f_500540(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_501190  (orig 0x501190, getter)
uint32_t main_f_501190(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_503230  (orig 0x503230, setter-chain)
void main_f_503230(void* a0, uint64_t a1, uint64_t a2, uint32_t a3) { *(uint64_t*)((char*)(a0) + 312) = a1; *(uint64_t*)((char*)(a0) + 320) = a2; *(uint32_t*)((char*)(a0) + 328) = a3; *(uint32_t*)((char*)(a0) + 332) = 0; }

// sub_503270  (orig 0x503270, setter-chain)
void main_f_503270(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 64) = 0; *(uint64_t*)((char*)(a0) + 40) = 0; *(uint64_t*)((char*)(a0) + 48) = 0; }

// sub_507260  (orig 0x507260, straight-line)
int32_t main_f_507260(void* a0, void* a1) { return (((*(int16_t*)((char*)(a0)) >= *(int16_t*)((char*)(a1)))) ? (((*(int16_t*)((char*)(a0)) > *(int16_t*)((char*)(a1))) ? 1 : 0)) : ((0) - (1))); }

// sub_507f30  (orig 0x507f30, getter)
uint64_t main_f_507f30(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_50ae50  (orig 0x50ae50, ret_only)
void main_f_50ae50() {}

// sub_50b0d0  (orig 0x50b0d0, ret_only)
void main_f_50b0d0() {}

// sub_50c2b0  (orig 0x50c2b0, ret_only)
void main_f_50c2b0() {}

// sub_50c2c0  (orig 0x50c2c0, ret_only)
void main_f_50c2c0() {}

// sub_50c3b0  (orig 0x50c3b0, getter)
uint32_t main_f_50c3b0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_50d1a0  (orig 0x50d1a0, ret_only)
void main_f_50d1a0() {}

// sub_50d1b0  (orig 0x50d1b0, mov_ret)
uint32_t main_f_50d1b0() { return 0; }

// sub_510cd0  (orig 0x510cd0, ptr_add)
void* main_f_510cd0(void* a0) { return (char*)a0 + 144; }

// sub_510ce0  (orig 0x510ce0, ptr_add)
void* main_f_510ce0(void* a0) { return (char*)a0 + 168; }

// sub_510cf0  (orig 0x510cf0, ptr_add)
void* main_f_510cf0(void* a0) { return (char*)a0 + 224; }

// sub_511580  (orig 0x511580, straight)
void* main_f_511580(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 8) = 0;
    *(uint32_t*)((char*)(p0) + 24) = 0;
    *(uint32_t*)((char*)(p0) + 16) = 1;
    *(uint32_t*)((char*)(p0) + 40) = 0;
    *(uint32_t*)((char*)(p0) + 56) = 0;
    *(uint32_t*)((char*)(p0) + 72) = 0;
    *(uint32_t*)((char*)(p0) + 88) = 0;
    *(uint32_t*)((char*)(p0) + 104) = 0;
    return a0;
}

// sub_512200  (orig 0x512200, straight)
void* main_f_512200(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 8) = 0;
    *(uint32_t*)((char*)(p0) + 24) = 0;
    *(uint32_t*)((char*)(p0) + 16) = 2;
    *(uint32_t*)((char*)(p0) + 40) = 0;
    *(uint32_t*)((char*)(p0) + 56) = 0;
    *(uint32_t*)((char*)(p0) + 72) = 0;
    *(uint32_t*)((char*)(p0) + 88) = 0;
    *(uint32_t*)((char*)(p0) + 104) = 0;
    return a0;
}

// sub_513680  (orig 0x513680, straight)
uint32_t main_f_513680(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 24) = a1;
    return 0;
}

// sub_5152d0  (orig 0x5152d0, mov_ret)
uint32_t main_f_5152d0() { return 0; }

// sub_5152e0  (orig 0x5152e0, straight)
uint32_t main_f_5152e0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1)) = 0;
    return 0;
}

// sub_5210c0  (orig 0x5210c0, guarded)
void* main_f_5210c0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    if (a0) {
        *(uint64_t*)((char*)(a0) + 24) = 0;
        *(uint64_t*)((char*)(a0) + 32) = 0;
        *(uint64_t*)((char*)(a0)) = 0;
        *(uint64_t*)((char*)(p0) + 8) = 0;
        *(uint64_t*)((char*)(p0) + 16) = 0;
        return a0;
    }
    return 0;
}

// sub_5217d0  (orig 0x5217d0, straight)
uint32_t main_f_5217d0(void* a0) {
    *(uint32_t*)((char*)(a0) + 120) = 40;
    return 0;
}

// sub_5217e0  (orig 0x5217e0, ret_only)
void main_f_5217e0() {}

// sub_522740  (orig 0x522740, straight)
uint32_t main_f_522740(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = -1;
    *(uint64_t*)((char*)(a0) + 536) = -1;
    *(uint8_t*)((char*)(p0) + 224) = 0;
    *(uint64_t*)((char*)(p0) + 232) = (uint64_t)k1;
    return 0;
}

// sub_529230  (orig 0x529230, getter)
uint16_t main_f_529230(void* a0) { return *(uint16_t*)((char*)(a0) + 472); }

// sub_529240  (orig 0x529240, straight)
uint64_t main_f_529240(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 688));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_529250  (orig 0x529250, straight-line)
void main_f_529250(void* a0, uint64_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 688));
    *(uint64_t*)(((char*)(p0) + (uintptr_t)a1 * 8)) = a2;
}

// sub_52fca0  (orig 0x52fca0, mov_ret)
uint64_t main_f_52fca0(uint64_t a0, uint64_t a1) { return a1; }

// sub_52fcb0  (orig 0x52fcb0, mov_ret)
uint64_t main_f_52fcb0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_531a80  (orig 0x531a80, getter)
uint32_t main_f_531a80(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_533e00  (orig 0x533e00, mov_ret)
uint32_t main_f_533e00() { return 1; }

// sub_534420  (orig 0x534420, mov_ret)
uint32_t main_f_534420() { return 1; }

// sub_535310  (orig 0x535310, call)
extern void SiCore_Array_179();
uint32_t main_f_535310(void* a0, uint32_t a1) {
    uint64_t f_535310__r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&SiCore_Array_179)(((uintptr_t)((char*)(a0) + 72)), ((uintptr_t)(((int64_t)(((int32_t)(((uint32_t)a1))))))));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_535540  (orig 0x535540, mov_ret)
uint64_t main_f_535540() { return 0; }

// sub_535ff0  (orig 0x535ff0, ret_only)
void main_f_535ff0() {}

// sub_537550  (orig 0x537550, straight)
uint32_t main_f_537550(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 40) = a1;
    return 1;
}

// sub_537640  (orig 0x537640, ptr_add)
void* main_f_537640(void* a0) { return (char*)a0 + 48; }

// sub_537650  (orig 0x537650, ptr_add)
void* main_f_537650(void* a0) { return (char*)a0 + 40; }

// sub_537660  (orig 0x537660, getter)
uint32_t main_f_537660(void* a0) { return *(uint32_t*)((char*)(a0) + 160); }

// sub_537670  (orig 0x537670, getter)
uint32_t main_f_537670(void* a0) { return *(uint32_t*)((char*)(a0) + 152); }

// sub_537680  (orig 0x537680, getter)
uint64_t main_f_537680(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_537690  (orig 0x537690, getter)
uint64_t main_f_537690(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_5376a0  (orig 0x5376a0, getter)
uint64_t main_f_5376a0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_5376b0  (orig 0x5376b0, ptr_add)
void* main_f_5376b0(void* a0) { return (char*)a0 + 164; }

// sub_5376c0  (orig 0x5376c0, ret_only)
void main_f_5376c0() {}

// sub_5376d0  (orig 0x5376d0, indirect-tailcall)
void main_f_5376d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 176)))))(((uintptr_t)(a0)));
}

// sub_5376e0  (orig 0x5376e0, ret_only)
void main_f_5376e0() {}

// sub_5376f0  (orig 0x5376f0, ret_only)
void main_f_5376f0() {}

// sub_537700  (orig 0x537700, ret_only)
void main_f_537700() {}

// sub_537710  (orig 0x537710, ret_only)
void main_f_537710() {}

// sub_537720  (orig 0x537720, ptr_add)
void* main_f_537720(void* a0) { return (char*)a0 + 184; }

// sub_537730  (orig 0x537730, setter)
void main_f_537730(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 192) = a1; }

// sub_537740  (orig 0x537740, getter)
uint64_t main_f_537740(void* a0) { return *(uint64_t*)((char*)(a0) + 264); }

// sub_537750  (orig 0x537750, getter)
uint64_t main_f_537750(void* a0) { return *(uint64_t*)((char*)(a0) + 264); }

// sub_538930  (orig 0x538930, ret_only)
void main_f_538930() {}

// sub_538940  (orig 0x538940, mov_ret)
uint32_t main_f_538940() { return 0; }

// sub_538950  (orig 0x538950, ptr_add)
void* main_f_538950(void* a0) { return (char*)a0 + 208; }

// sub_538960  (orig 0x538960, getter)
uint64_t main_f_538960(void* a0) { return *(uint64_t*)((char*)(a0) + 256); }

// sub_538970  (orig 0x538970, getter)
uint32_t main_f_538970(void* a0) { return *(uint32_t*)((char*)(a0) + 300); }

// sub_538980  (orig 0x538980, getter)
uint64_t main_f_538980(void* a0) { return *(uint64_t*)((char*)(a0) + 328); }

// sub_538990  (orig 0x538990, getter)
uint32_t main_f_538990(void* a0) { return *(uint32_t*)((char*)(a0) + 336); }

// sub_538ae0  (orig 0x538ae0, getter)
uint32_t main_f_538ae0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_538dc0  (orig 0x538dc0, ret_only)
void main_f_538dc0() {}

// sub_5393f0  (orig 0x5393f0, mov_ret)
uint32_t main_f_5393f0() { return 1; }

// sub_539400  (orig 0x539400, getter)
uint64_t main_f_539400(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_539410  (orig 0x539410, getter)
uint64_t main_f_539410(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_539420  (orig 0x539420, ptr_add)
void* main_f_539420(void* a0) { return (char*)a0 + 32; }

// sub_539430  (orig 0x539430, mov_ret)
uint32_t main_f_539430() { return 0; }

// sub_539540  (orig 0x539540, mov_ret)
uint64_t main_f_539540() { return 0; }

// sub_539550  (orig 0x539550, ret_only)
void main_f_539550() {}

// sub_539560  (orig 0x539560, ptr_add)
void* main_f_539560(void* a0) { return (char*)a0 + 128; }

// sub_539570  (orig 0x539570, mov_ret)
uint32_t main_f_539570() { return 0; }

// sub_539580  (orig 0x539580, mov_ret)
uint32_t main_f_539580() { return 1; }

// sub_539590  (orig 0x539590, mov_ret)
uint32_t main_f_539590() { return 6; }

// sub_5395a0  (orig 0x5395a0, mov_ret)
uint32_t main_f_5395a0() { return 1; }

// sub_5395b0  (orig 0x5395b0, mov_ret)
uint32_t main_f_5395b0() { return 1; }

// sub_5395c0  (orig 0x5395c0, mov_ret)
uint32_t main_f_5395c0() { return 16; }

// sub_5395d0  (orig 0x5395d0, mov_ret)
uint32_t main_f_5395d0() { return 1; }

// sub_5395e0  (orig 0x5395e0, mov_ret)
uint32_t main_f_5395e0() { return 0; }

// sub_539600  (orig 0x539600, mov_ret)
uint32_t main_f_539600() { return 1; }

// sub_539610  (orig 0x539610, mov_ret)
uint32_t main_f_539610() { return 1; }

// sub_539620  (orig 0x539620, mov_ret)
uint32_t main_f_539620() { return 0; }

// sub_539630  (orig 0x539630, mov_ret)
uint32_t main_f_539630() { return 0; }

// sub_539640  (orig 0x539640, ptr_add)
void* main_f_539640(void* a0) { return (char*)a0 + 160; }

// sub_5397b0  (orig 0x5397b0, getter)
uint32_t main_f_5397b0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_539890  (orig 0x539890, ret_only)
void main_f_539890() {}

// sub_53a640  (orig 0x53a640, getter)
uint64_t main_f_53a640(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_53a650  (orig 0x53a650, getter)
uint64_t main_f_53a650(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_53a660  (orig 0x53a660, call)
extern void sub_4c4700();
uint32_t main_f_53a660(void* a0) {
    uint64_t f_53a660__r0 = ((uint64_t (*)(uintptr_t))&sub_4c4700)(((uintptr_t)((char*)(a0) + 32)));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_53a680  (orig 0x53a680, ptr_add)
void* main_f_53a680(void* a0) { return (char*)a0 + 32; }

// sub_53a690  (orig 0x53a690, getter)
uint64_t main_f_53a690(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_53a6a0  (orig 0x53a6a0, getter)
uint64_t main_f_53a6a0(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_53a6b0  (orig 0x53a6b0, getter)
uint32_t main_f_53a6b0(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_53a6c0  (orig 0x53a6c0, ptr_add)
void* main_f_53a6c0(void* a0) { return (char*)a0 + 292; }

// sub_53a6d0  (orig 0x53a6d0, ptr_add)
void* main_f_53a6d0(void* a0) { return (char*)a0 + 292; }

// sub_53a6e0  (orig 0x53a6e0, getter)
uint8_t main_f_53a6e0(void* a0) { return *(uint8_t*)((char*)(a0) + 289); }

// sub_53abc0  (orig 0x53abc0, getter)
uint32_t main_f_53abc0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_53abd0  (orig 0x53abd0, getter)
uint64_t main_f_53abd0(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_53abe0  (orig 0x53abe0, getter)
uint64_t main_f_53abe0(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_53bb50  (orig 0x53bb50, getter)
uint64_t main_f_53bb50(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_53bb60  (orig 0x53bb60, getter)
uint64_t main_f_53bb60(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_53bb70  (orig 0x53bb70, getter)
uint32_t main_f_53bb70(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_53be30  (orig 0x53be30, getter)
uint64_t main_f_53be30(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_53cfb0  (orig 0x53cfb0, ret_only)
void main_f_53cfb0() {}

// sub_53d640  (orig 0x53d640, guarded)
void* main_f_53d640(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    if ((*(uint32_t*)((char*)(a0) + 1040)) != (a1)) {
        *(uint32_t*)((char*)(p0) + 1040) = (uint32_t)(a1);
        *(uint32_t*)((char*)(p0) + 2284) = (uint32_t)(a1);
        return a0;
    }
    return a0;
}

// sub_540430  (orig 0x540430, mov_ret)
uint32_t main_f_540430() { return 1; }

// sub_540620  (orig 0x540620, ret_only)
void main_f_540620() {}

// sub_540720  (orig 0x540720, ptr_add)
void* main_f_540720(void* a0) { return (char*)a0 + 1336; }

// sub_540730  (orig 0x540730, ptr_add)
void* main_f_540730(void* a0) { return (char*)a0 + 1336; }

// sub_540740  (orig 0x540740, ptr_add)
void* main_f_540740(void* a0) { return (char*)a0 + 80; }

// sub_540830  (orig 0x540830, mov_ret)
uint32_t main_f_540830() { return 1; }

// sub_5408d0  (orig 0x5408d0, indirect-tailcall)
void main_f_5408d0(void* a0, uint64_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 512)))))(((uintptr_t)(a0)), ((uintptr_t)(a1)), ((uint32_t)(0)));
}

// sub_540950  (orig 0x540950, straight-line)
void* main_f_540950(uint64_t unused0, void* a1) { return (char*)(a1) + 216; }

// sub_540960  (orig 0x540960, mov_ret)
uint32_t main_f_540960() { return 1; }

// sub_540970  (orig 0x540970, mov_ret)
uint32_t main_f_540970() { return 1; }

// sub_540980  (orig 0x540980, mov_ret)
uint32_t main_f_540980() { return 1; }

// sub_541e50  (orig 0x541e50, getter)
uint64_t main_f_541e50(void* a0) { return *(uint64_t*)((char*)(a0) + 14944L); }

// sub_542220  (orig 0x542220, ret_only)
void main_f_542220() {}

// sub_542230  (orig 0x542230, ret_only)
void main_f_542230() {}

// sub_542240  (orig 0x542240, ret_only)
void main_f_542240() {}

// sub_542250  (orig 0x542250, ret_only)
void main_f_542250() {}

// sub_542290  (orig 0x542290, compare)
bool main_f_542290(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 14952L)) > (int64_t)(0); }

// sub_5422a0  (orig 0x5422a0, straight)
uint64_t main_f_5422a0(uint64_t a0) { return (((uint64_t)a0)) + (14960); }

// sub_5422b0  (orig 0x5422b0, straight)
uint64_t main_f_5422b0(uint64_t a0) { return (((uint64_t)a0)) + (14960); }

// sub_5422c0  (orig 0x5422c0, ret_only)
void main_f_5422c0() {}

// sub_5422d0  (orig 0x5422d0, ret_only)
void main_f_5422d0() {}

// sub_5422e0  (orig 0x5422e0, ret_only)
void main_f_5422e0() {}

// sub_5422f0  (orig 0x5422f0, ret_only)
void main_f_5422f0() {}

// sub_542790  (orig 0x542790, ret_only)
void main_f_542790() {}

// sub_542920  (orig 0x542920, getter)
uint32_t main_f_542920(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_542930  (orig 0x542930, ret_only)
void main_f_542930() {}

// sub_542940  (orig 0x542940, mov_ret)
uint32_t main_f_542940() { return 1; }

// sub_543260  (orig 0x543260, ret_only)
void main_f_543260() {}

// sub_543270  (orig 0x543270, ret_only)
void main_f_543270() {}

// sub_544280  (orig 0x544280, getter)
uint64_t main_f_544280(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_545ed0  (orig 0x545ed0, getter)
uint32_t main_f_545ed0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_545f80  (orig 0x545f80, getter)
uint32_t main_f_545f80(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_54d3a0  (orig 0x54d3a0, getter)
uint32_t main_f_54d3a0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_54d850  (orig 0x54d850, getter)
uint64_t main_f_54d850(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_54d860  (orig 0x54d860, getter)
uint64_t main_f_54d860(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_54d870  (orig 0x54d870, getter)
uint32_t main_f_54d870(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_54d920  (orig 0x54d920, getter)
uint32_t main_f_54d920(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_54d930  (orig 0x54d930, ptr_add)
void* main_f_54d930(void* a0) { return (char*)a0 + 40; }

// sub_54d940  (orig 0x54d940, getter)
uint64_t main_f_54d940(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_54e2d0  (orig 0x54e2d0, getter)
uint64_t main_f_54e2d0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_54e2e0  (orig 0x54e2e0, getter)
uint64_t main_f_54e2e0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_54e2f0  (orig 0x54e2f0, mov_ret)
uint32_t main_f_54e2f0() { return 1; }

// sub_54e300  (orig 0x54e300, straight)
uint32_t main_f_54e300(void* a0) {
    void* p0 = (void*)((uintptr_t)(((uint64_t)a0)));
    *(uint64_t*)((char*)(a0) + 68) = 0;
    *(uint64_t*)((char*)(a0) + 60) = 0;
    *(uint64_t*)((char*)(a0) + 52) = 0;
    *(uint64_t*)((char*)(a0) + 44) = 0;
    *(uint64_t*)((char*)(p0) + 36) = 0;
    return 1;
}

// sub_54e320  (orig 0x54e320, mov_ret)
uint32_t main_f_54e320() { return 1; }

// sub_54e490  (orig 0x54e490, ret_only)
void main_f_54e490() {}

// sub_54e590  (orig 0x54e590, ptr_add)
void* main_f_54e590(void* a0) { return (char*)a0 + 36; }

// sub_54e5a0  (orig 0x54e5a0, straight)
void* main_f_54e5a0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 68) = 0;
    *(uint64_t*)((char*)(p0) + 60) = 0;
    *(uint64_t*)((char*)(p0) + 52) = 0;
    *(uint64_t*)((char*)(p0) + 44) = 0;
    *(uint64_t*)((char*)(p0) + 36) = 0;
    return a0;
}

// sub_54e660  (orig 0x54e660, getter)
uint32_t main_f_54e660(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_54e670  (orig 0x54e670, ptr_add)
void* main_f_54e670(void* a0) { return (char*)a0 + 80; }

// sub_54ea20  (orig 0x54ea20, straight)
uint32_t main_f_54ea20(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 32) = (uint32_t)(a1);
    return 1;
}

// sub_54ea30  (orig 0x54ea30, getter)
uint64_t main_f_54ea30(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_54ea40  (orig 0x54ea40, getter)
uint64_t main_f_54ea40(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_54ea50  (orig 0x54ea50, getter)
uint32_t main_f_54ea50(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_54ea60  (orig 0x54ea60, straight)
uint32_t main_f_54ea60(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(p0) + 36) = (*(uint32_t*)((char*)(a0) + 36)) + (1);
    return 1;
}

// sub_54ec90  (orig 0x54ec90, straight-line)
uint8_t main_f_54ec90(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 80)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(40))))))));
    return *(uint8_t*)((char*)(p0) + 16);
}

// sub_54ecf0  (orig 0x54ecf0, ret_only)
void main_f_54ecf0() {}

// sub_54ed00  (orig 0x54ed00, getter)
uint64_t main_f_54ed00(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_54ed10  (orig 0x54ed10, mov_ret)
uint32_t main_f_54ed10() { return 0; }

// sub_54edc0  (orig 0x54edc0, getter)
uint32_t main_f_54edc0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_54f420  (orig 0x54f420, straight)
uint32_t main_f_54f420(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 32) = (uint32_t)(a1);
    return 1;
}

// sub_54f430  (orig 0x54f430, getter)
uint64_t main_f_54f430(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_54f440  (orig 0x54f440, getter)
uint64_t main_f_54f440(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_54f450  (orig 0x54f450, getter)
uint32_t main_f_54f450(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_54f610  (orig 0x54f610, getter)
uint32_t main_f_54f610(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_54f6c0  (orig 0x54f6c0, setter)
void main_f_54f6c0(void* a0) { *(uint32_t*)((char*)(a0) + 120) = 0; }

// sub_54f770  (orig 0x54f770, getter)
uint32_t main_f_54f770(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_550210  (orig 0x550210, getter)
uint64_t main_f_550210(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_550220  (orig 0x550220, getter)
uint64_t main_f_550220(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_550230  (orig 0x550230, getter)
uint32_t main_f_550230(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_550650  (orig 0x550650, getter)
uint32_t main_f_550650(void* a0) { return *(uint32_t*)((char*)(a0) + 160); }

// sub_550680  (orig 0x550680, straight)
uint64_t main_f_550680(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 184));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_5507d0  (orig 0x5507d0, getter)
uint32_t main_f_5507d0(void* a0) { return *(uint32_t*)((char*)(a0) + 72); }

// sub_550800  (orig 0x550800, straight)
uint64_t main_f_550800(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 96));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_550950  (orig 0x550950, getter)
uint32_t main_f_550950(void* a0) { return *(uint32_t*)((char*)(a0) + 248); }

// sub_550980  (orig 0x550980, straight)
uint64_t main_f_550980(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 272));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_550ad0  (orig 0x550ad0, getter)
uint32_t main_f_550ad0(void* a0) { return *(uint32_t*)((char*)(a0) + 336); }

// sub_550b00  (orig 0x550b00, straight)
uint64_t main_f_550b00(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 360));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_550f20  (orig 0x550f20, straight)
void* main_f_550f20(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 400));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(p1) + 400) = (uint64_t)((char*)(p0) + 1);
    return a0;
}

// sub_550f30  (orig 0x550f30, getter)
uint64_t main_f_550f30(void* a0) { return *(uint64_t*)((char*)(a0) + 400); }

// sub_550f40  (orig 0x550f40, mov_ret)
uint32_t main_f_550f40() { return 0; }

// sub_550ff0  (orig 0x550ff0, getter)
uint32_t main_f_550ff0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_552080  (orig 0x552080, getter)
uint32_t main_f_552080(void* a0) { return *(uint32_t*)((char*)(a0) + 92); }

// sub_552840  (orig 0x552840, getter)
uint32_t main_f_552840(void* a0) { return *(uint32_t*)((char*)(a0) + 92); }

// sub_552af0  (orig 0x552af0, mov_ret)
uint32_t main_f_552af0() { return 1; }

// sub_552b80  (orig 0x552b80, ptr_add)
void* main_f_552b80(void* a0) { return (char*)a0 + 40; }

// sub_552b90  (orig 0x552b90, ptr_add)
void* main_f_552b90(void* a0) { return (char*)a0 + 32; }

// sub_552ba0  (orig 0x552ba0, getter)
uint32_t main_f_552ba0(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_552bb0  (orig 0x552bb0, getter)
uint32_t main_f_552bb0(void* a0) { return *(uint32_t*)((char*)(a0) + 80); }

// sub_552bc0  (orig 0x552bc0, getter)
uint64_t main_f_552bc0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_552bd0  (orig 0x552bd0, getter)
uint64_t main_f_552bd0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_552be0  (orig 0x552be0, ptr_add)
void* main_f_552be0(void* a0) { return (char*)a0 + 92; }

// sub_552ef0  (orig 0x552ef0, ret_only)
void main_f_552ef0() {}

// sub_552f00  (orig 0x552f00, indirect-tailcall)
void main_f_552f00(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 72)))))(((uintptr_t)(a0)));
}

// sub_552f10  (orig 0x552f10, ret_only)
void main_f_552f10() {}

// sub_552f20  (orig 0x552f20, ret_only)
void main_f_552f20() {}

// sub_552f30  (orig 0x552f30, ret_only)
void main_f_552f30() {}

// sub_552f40  (orig 0x552f40, ret_only)
void main_f_552f40() {}

// sub_553040  (orig 0x553040, ptr_add)
void* main_f_553040(void* a0) { return (char*)a0 + 128; }

// sub_5530f0  (orig 0x5530f0, getter)
uint32_t main_f_5530f0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_553680  (orig 0x553680, straight)
uint32_t main_f_553680(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 32) = (uint32_t)(a1);
    return 1;
}

// sub_553690  (orig 0x553690, getter)
uint64_t main_f_553690(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_5536a0  (orig 0x5536a0, getter)
uint64_t main_f_5536a0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_5536b0  (orig 0x5536b0, getter)
uint32_t main_f_5536b0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_5536c0  (orig 0x5536c0, straight)
uint32_t main_f_5536c0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(p0) + 36) = (*(uint32_t*)((char*)(a0) + 36)) + (1);
    return 1;
}

// sub_5542c0  (orig 0x5542c0, ptr_add)
void* main_f_5542c0(void* a0) { return (char*)a0 + 40; }

// sub_5542d0  (orig 0x5542d0, ptr_add)
void* main_f_5542d0(void* a0) { return (char*)a0 + 40; }

// sub_5542e0  (orig 0x5542e0, mov_ret)
uint32_t main_f_5542e0() { return 1; }

// sub_554390  (orig 0x554390, getter)
uint32_t main_f_554390(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_5543a0  (orig 0x5543a0, ptr_add)
void* main_f_5543a0(void* a0) { return (char*)a0 + 1368; }

// sub_5543b0  (orig 0x5543b0, ptr_add)
void* main_f_5543b0(void* a0) { return (char*)a0 + 1432; }

// sub_5543c0  (orig 0x5543c0, ptr_add)
void* main_f_5543c0(void* a0) { return (char*)a0 + 1440; }

// sub_5543d0  (orig 0x5543d0, ptr_add)
void* main_f_5543d0(void* a0) { return (char*)a0 + 1448; }

// sub_5543e0  (orig 0x5543e0, ptr_add)
void* main_f_5543e0(void* a0) { return (char*)a0 + 1472; }

// sub_5543f0  (orig 0x5543f0, ptr_add)
void* main_f_5543f0(void* a0) { return (char*)a0 + 1476; }

// sub_554400  (orig 0x554400, ptr_add)
void* main_f_554400(void* a0) { return (char*)a0 + 1480; }

// sub_554410  (orig 0x554410, ptr_add)
void* main_f_554410(void* a0) { return (char*)a0 + 1608; }

// sub_554420  (orig 0x554420, getter)
uint32_t main_f_554420(void* a0) { return *(uint32_t*)((char*)(a0) + 1736); }

// sub_554430  (orig 0x554430, getter)
uint32_t main_f_554430(void* a0) { return *(uint32_t*)((char*)(a0) + 1740); }

// sub_554440  (orig 0x554440, getter)
uint32_t main_f_554440(void* a0) { return *(uint32_t*)((char*)(a0) + 1744); }

// sub_554450  (orig 0x554450, getter)
uint32_t main_f_554450(void* a0) { return *(uint32_t*)((char*)(a0) + 1748); }

// sub_554b80  (orig 0x554b80, straight)
uint32_t main_f_554b80(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 40) = a1;
    return 1;
}

// sub_554c10  (orig 0x554c10, ptr_add)
void* main_f_554c10(void* a0) { return (char*)a0 + 48; }

// sub_554c20  (orig 0x554c20, ptr_add)
void* main_f_554c20(void* a0) { return (char*)a0 + 40; }

// sub_554c30  (orig 0x554c30, getter)
uint32_t main_f_554c30(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_554c40  (orig 0x554c40, getter)
uint32_t main_f_554c40(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_554c50  (orig 0x554c50, getter)
uint64_t main_f_554c50(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_554c60  (orig 0x554c60, getter)
uint64_t main_f_554c60(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_554c70  (orig 0x554c70, getter)
uint64_t main_f_554c70(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_554c80  (orig 0x554c80, ptr_add)
void* main_f_554c80(void* a0) { return (char*)a0 + 100; }

// sub_554c90  (orig 0x554c90, ret_only)
void main_f_554c90() {}

// sub_554ca0  (orig 0x554ca0, indirect-tailcall)
void main_f_554ca0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 152)))))(((uintptr_t)(a0)));
}

// sub_554cb0  (orig 0x554cb0, ret_only)
void main_f_554cb0() {}

// sub_554cc0  (orig 0x554cc0, ret_only)
void main_f_554cc0() {}

// sub_554cd0  (orig 0x554cd0, ret_only)
void main_f_554cd0() {}

// sub_554ce0  (orig 0x554ce0, ret_only)
void main_f_554ce0() {}

// sub_554cf0  (orig 0x554cf0, ptr_add)
void* main_f_554cf0(void* a0) { return (char*)a0 + 120; }

// sub_554f70  (orig 0x554f70, ret_only)
void main_f_554f70() {}

// sub_554f80  (orig 0x554f80, mov_ret)
uint32_t main_f_554f80() { return 0; }

// sub_555030  (orig 0x555030, getter)
uint32_t main_f_555030(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_555160  (orig 0x555160, straight)
uint32_t main_f_555160(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 32) = (uint32_t)(a1);
    return 1;
}

// sub_555170  (orig 0x555170, getter)
uint64_t main_f_555170(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_555180  (orig 0x555180, getter)
uint64_t main_f_555180(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_555190  (orig 0x555190, getter)
uint32_t main_f_555190(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_5551a0  (orig 0x5551a0, straight)
uint32_t main_f_5551a0(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(p0) + 36) = (*(uint32_t*)((char*)(a0) + 36)) + (1);
    return 1;
}

// sub_5551e0  (orig 0x5551e0, ptr_add)
void* main_f_5551e0(void* a0) { return (char*)a0 + 40; }

// sub_5551f0  (orig 0x5551f0, ptr_add)
void* main_f_5551f0(void* a0) { return (char*)a0 + 40; }

// sub_555200  (orig 0x555200, mov_ret)
uint32_t main_f_555200() { return 0; }

// sub_5552b0  (orig 0x5552b0, getter)
uint32_t main_f_5552b0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_555b40  (orig 0x555b40, straight)
uint32_t main_f_555b40(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 40) = a1;
    return 1;
}

// sub_555bd0  (orig 0x555bd0, ptr_add)
void* main_f_555bd0(void* a0) { return (char*)a0 + 48; }

// sub_555be0  (orig 0x555be0, ptr_add)
void* main_f_555be0(void* a0) { return (char*)a0 + 40; }

// sub_555bf0  (orig 0x555bf0, getter)
uint32_t main_f_555bf0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_555c00  (orig 0x555c00, getter)
uint32_t main_f_555c00(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_555c10  (orig 0x555c10, getter)
uint64_t main_f_555c10(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_555c20  (orig 0x555c20, getter)
uint64_t main_f_555c20(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_555c30  (orig 0x555c30, getter)
uint64_t main_f_555c30(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_555c40  (orig 0x555c40, ptr_add)
void* main_f_555c40(void* a0) { return (char*)a0 + 100; }

// sub_555c50  (orig 0x555c50, ret_only)
void main_f_555c50() {}

// sub_555c60  (orig 0x555c60, indirect-tailcall)
void main_f_555c60(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 208)))))(((uintptr_t)(a0)));
}

// sub_555c70  (orig 0x555c70, ret_only)
void main_f_555c70() {}

// sub_555c80  (orig 0x555c80, ret_only)
void main_f_555c80() {}

// sub_555c90  (orig 0x555c90, ret_only)
void main_f_555c90() {}

// sub_555ca0  (orig 0x555ca0, ret_only)
void main_f_555ca0() {}

// sub_555cb0  (orig 0x555cb0, ptr_add)
void* main_f_555cb0(void* a0) { return (char*)a0 + 120; }

// sub_556930  (orig 0x556930, straight-line)
uint64_t main_f_556930(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(56))))))) + (160); }

// sub_556940  (orig 0x556940, straight-line)
uint64_t main_f_556940(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(56))))))) + (160); }

// sub_556950  (orig 0x556950, ptr_add)
void* main_f_556950(void* a0) { return (char*)a0 + 608; }

// sub_556960  (orig 0x556960, ptr_add)
void* main_f_556960(void* a0) { return (char*)a0 + 608; }

// sub_556970  (orig 0x556970, mov_ret)
uint32_t main_f_556970() { return 1; }

// sub_556980  (orig 0x556980, mov_ret)
uint64_t main_f_556980() { return 0; }

// sub_556990  (orig 0x556990, mov_ret)
uint64_t main_f_556990() { return 0; }

// sub_5569a0  (orig 0x5569a0, getter)
uint8_t main_f_5569a0(void* a0) { return *(uint8_t*)((char*)(a0) + 848); }

// sub_5569b0  (orig 0x5569b0, ptr_add)
void* main_f_5569b0(void* a0) { return (char*)a0 + 664; }

// sub_556c20  (orig 0x556c20, getter)
uint32_t main_f_556c20(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_556c30  (orig 0x556c30, ptr_add)
void* main_f_556c30(void* a0) { return (char*)a0 + 704; }

// sub_556c40  (orig 0x556c40, ptr_add)
void* main_f_556c40(void* a0) { return (char*)a0 + 776; }

// sub_556c50  (orig 0x556c50, getter)
uint64_t main_f_556c50(void* a0) { return *(uint64_t*)((char*)(a0) + 768); }

// sub_556c60  (orig 0x556c60, getter)
uint64_t main_f_556c60(void* a0) { return *(uint64_t*)((char*)(a0) + 840); }

// sub_556fe0  (orig 0x556fe0, straight)
uint32_t main_f_556fe0(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 32) = (uint32_t)(a1);
    return 1;
}

// sub_556ff0  (orig 0x556ff0, getter)
uint64_t main_f_556ff0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_557000  (orig 0x557000, getter)
uint64_t main_f_557000(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_557010  (orig 0x557010, getter)
uint32_t main_f_557010(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_5574e0  (orig 0x5574e0, getter)
uint32_t main_f_5574e0(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_557b50  (orig 0x557b50, getter)
uint32_t main_f_557b50(void* a0) { return *(uint32_t*)((char*)(a0) + 136); }

// sub_557c50  (orig 0x557c50, mov_ret)
uint32_t main_f_557c50() { return 0; }

// sub_557c60  (orig 0x557c60, straight-line)
uint64_t main_f_557c60(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 160)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(88))))))));
    return *(uint64_t*)((char*)(p0) + 80);
}

// sub_557d20  (orig 0x557d20, getter)
uint32_t main_f_557d20(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_559190  (orig 0x559190, ptr_add)
void* main_f_559190(void* a0) { return (char*)a0 + 48; }

// sub_5591a0  (orig 0x5591a0, ptr_add)
void* main_f_5591a0(void* a0) { return (char*)a0 + 40; }

// sub_5591b0  (orig 0x5591b0, getter)
uint32_t main_f_5591b0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_5591c0  (orig 0x5591c0, getter)
uint32_t main_f_5591c0(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_5591d0  (orig 0x5591d0, getter)
uint64_t main_f_5591d0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_5591e0  (orig 0x5591e0, getter)
uint64_t main_f_5591e0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_5591f0  (orig 0x5591f0, getter)
uint64_t main_f_5591f0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_559200  (orig 0x559200, ptr_add)
void* main_f_559200(void* a0) { return (char*)a0 + 100; }

// sub_559210  (orig 0x559210, ret_only)
void main_f_559210() {}

// sub_559220  (orig 0x559220, ret_only)
void main_f_559220() {}

// sub_559230  (orig 0x559230, ret_only)
void main_f_559230() {}

// sub_559240  (orig 0x559240, ret_only)
void main_f_559240() {}

// sub_559250  (orig 0x559250, ret_only)
void main_f_559250() {}

// sub_559260  (orig 0x559260, ret_only)
void main_f_559260() {}

// sub_559270  (orig 0x559270, ptr_add)
void* main_f_559270(void* a0) { return (char*)a0 + 120; }

// sub_559280  (orig 0x559280, ret_only)
void main_f_559280() {}

// sub_559290  (orig 0x559290, mov_ret)
uint32_t main_f_559290() { return 0; }

// sub_559340  (orig 0x559340, getter)
uint32_t main_f_559340(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_559350  (orig 0x559350, ptr_add)
void* main_f_559350(void* a0) { return (char*)a0 + 192; }

// sub_559360  (orig 0x559360, getter)
uint32_t main_f_559360(void* a0) { return *(uint32_t*)((char*)(a0) + 288); }

// sub_559880  (orig 0x559880, call)
extern void sub_535310();
uint32_t main_f_559880() {
    sub_535310();
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_559d30  (orig 0x559d30, getter)
uint64_t main_f_559d30(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_55a0f0  (orig 0x55a0f0, straight)
uint32_t main_f_55a0f0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 40) = a1;
    return 1;
}

// sub_55a1e0  (orig 0x55a1e0, ptr_add)
void* main_f_55a1e0(void* a0) { return (char*)a0 + 48; }

// sub_55a1f0  (orig 0x55a1f0, ptr_add)
void* main_f_55a1f0(void* a0) { return (char*)a0 + 40; }

// sub_55a200  (orig 0x55a200, getter)
uint32_t main_f_55a200(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_55a210  (orig 0x55a210, getter)
uint32_t main_f_55a210(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_55a220  (orig 0x55a220, getter)
uint64_t main_f_55a220(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55a230  (orig 0x55a230, getter)
uint64_t main_f_55a230(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55a240  (orig 0x55a240, getter)
uint64_t main_f_55a240(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_55a250  (orig 0x55a250, ptr_add)
void* main_f_55a250(void* a0) { return (char*)a0 + 100; }

// sub_55a260  (orig 0x55a260, ret_only)
void main_f_55a260() {}

// sub_55a270  (orig 0x55a270, indirect-tailcall)
void main_f_55a270(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 176)))))(((uintptr_t)(a0)));
}

// sub_55a280  (orig 0x55a280, ret_only)
void main_f_55a280() {}

// sub_55a290  (orig 0x55a290, ret_only)
void main_f_55a290() {}

// sub_55a2a0  (orig 0x55a2a0, ret_only)
void main_f_55a2a0() {}

// sub_55a2b0  (orig 0x55a2b0, ret_only)
void main_f_55a2b0() {}

// sub_55a2c0  (orig 0x55a2c0, ptr_add)
void* main_f_55a2c0(void* a0) { return (char*)a0 + 120; }

// sub_55a750  (orig 0x55a750, mov_ret)
uint32_t main_f_55a750() { return 1; }

// sub_55a790  (orig 0x55a790, mov_ret)
uint32_t main_f_55a790() { return 1; }

// sub_55a8c0  (orig 0x55a8c0, getter)
uint8_t main_f_55a8c0(void* a0) { return *(uint8_t*)((char*)(a0) + 124); }

// sub_55a8d0  (orig 0x55a8d0, getter)
uint64_t main_f_55a8d0(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_55a8e0  (orig 0x55a8e0, getter)
uint64_t main_f_55a8e0(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_55a8f0  (orig 0x55a8f0, getter)
uint64_t main_f_55a8f0(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_55a900  (orig 0x55a900, getter)
uint64_t main_f_55a900(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_55a910  (orig 0x55a910, getter)
uint64_t main_f_55a910(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_55a920  (orig 0x55a920, getter)
uint64_t main_f_55a920(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_55a930  (orig 0x55a930, getter)
uint64_t main_f_55a930(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_55a940  (orig 0x55a940, getter)
uint64_t main_f_55a940(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_55a950  (orig 0x55a950, getter)
uint64_t main_f_55a950(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_55a960  (orig 0x55a960, getter)
uint64_t main_f_55a960(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_55a970  (orig 0x55a970, getter)
uint64_t main_f_55a970(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_55a980  (orig 0x55a980, getter)
uint64_t main_f_55a980(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_55a990  (orig 0x55a990, getter)
uint64_t main_f_55a990(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_55a9a0  (orig 0x55a9a0, ret_only)
void main_f_55a9a0() {}

// sub_55a9b0  (orig 0x55a9b0, mov_ret)
uint32_t main_f_55a9b0() { return 0; }

// sub_55aa60  (orig 0x55aa60, getter)
uint32_t main_f_55aa60(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_55ab10  (orig 0x55ab10, ptr_add)
void* main_f_55ab10(void* a0) { return (char*)a0 + 184; }

// sub_55ab20  (orig 0x55ab20, getter)
uint32_t main_f_55ab20(void* a0) { return *(uint32_t*)((char*)(a0) + 376); }

// sub_55ac60  (orig 0x55ac60, compare)
bool main_f_55ac60(uint64_t unused0, uint64_t a1) { return (uint64_t)(a1) != (uint64_t)(0); }

// sub_55ac70  (orig 0x55ac70, getter)
uint32_t main_f_55ac70(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_55ac80  (orig 0x55ac80, ptr_add)
void* main_f_55ac80(void* a0) { return (char*)a0 + 36; }

// sub_55ad50  (orig 0x55ad50, getter)
uint32_t main_f_55ad50(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_55b100  (orig 0x55b100, straight)
uint32_t main_f_55b100(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 40) = a1;
    return 1;
}

// sub_55b190  (orig 0x55b190, ptr_add)
void* main_f_55b190(void* a0) { return (char*)a0 + 48; }

// sub_55b1a0  (orig 0x55b1a0, ptr_add)
void* main_f_55b1a0(void* a0) { return (char*)a0 + 40; }

// sub_55b1b0  (orig 0x55b1b0, getter)
uint32_t main_f_55b1b0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_55b1c0  (orig 0x55b1c0, getter)
uint32_t main_f_55b1c0(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_55b1d0  (orig 0x55b1d0, getter)
uint64_t main_f_55b1d0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55b1e0  (orig 0x55b1e0, getter)
uint64_t main_f_55b1e0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55b1f0  (orig 0x55b1f0, getter)
uint64_t main_f_55b1f0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_55b200  (orig 0x55b200, ptr_add)
void* main_f_55b200(void* a0) { return (char*)a0 + 100; }

// sub_55b210  (orig 0x55b210, ret_only)
void main_f_55b210() {}

// sub_55b220  (orig 0x55b220, ret_only)
void main_f_55b220() {}

// sub_55b230  (orig 0x55b230, ret_only)
void main_f_55b230() {}

// sub_55b240  (orig 0x55b240, ret_only)
void main_f_55b240() {}

// sub_55b250  (orig 0x55b250, ret_only)
void main_f_55b250() {}

// sub_55b260  (orig 0x55b260, ret_only)
void main_f_55b260() {}

// sub_55b270  (orig 0x55b270, ptr_add)
void* main_f_55b270(void* a0) { return (char*)a0 + 120; }

// sub_55b550  (orig 0x55b550, compare)
bool main_f_55b550(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 152)) != (uint64_t)(0); }

// sub_55b560  (orig 0x55b560, ret_only)
void main_f_55b560() {}

// sub_55b570  (orig 0x55b570, mov_ret)
uint32_t main_f_55b570() { return 0; }

// sub_55b6a0  (orig 0x55b6a0, getter)
uint32_t main_f_55b6a0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_55b6b0  (orig 0x55b6b0, ptr_add)
void* main_f_55b6b0(void* a0) { return (char*)a0 + 144; }

// sub_55ba20  (orig 0x55ba20, ret_only)
void main_f_55ba20() {}

// sub_55c990  (orig 0x55c990, straight)
uint32_t main_f_55c990(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 40) = a1;
    return 1;
}

// sub_55cb20  (orig 0x55cb20, ptr_add)
void* main_f_55cb20(void* a0) { return (char*)a0 + 48; }

// sub_55cb30  (orig 0x55cb30, ptr_add)
void* main_f_55cb30(void* a0) { return (char*)a0 + 40; }

// sub_55cb40  (orig 0x55cb40, getter)
uint32_t main_f_55cb40(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_55cb50  (orig 0x55cb50, getter)
uint32_t main_f_55cb50(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_55cc20  (orig 0x55cc20, getter)
uint64_t main_f_55cc20(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55cc30  (orig 0x55cc30, getter)
uint64_t main_f_55cc30(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_55cc40  (orig 0x55cc40, getter)
uint64_t main_f_55cc40(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_55cc50  (orig 0x55cc50, ptr_add)
void* main_f_55cc50(void* a0) { return (char*)a0 + 100; }

// sub_55cc60  (orig 0x55cc60, ret_only)
void main_f_55cc60() {}

// sub_55cc70  (orig 0x55cc70, ret_only)
void main_f_55cc70() {}

// sub_55cc80  (orig 0x55cc80, ret_only)
void main_f_55cc80() {}

// sub_55cc90  (orig 0x55cc90, ret_only)
void main_f_55cc90() {}

// sub_55cca0  (orig 0x55cca0, ret_only)
void main_f_55cca0() {}

// sub_55ccb0  (orig 0x55ccb0, ret_only)
void main_f_55ccb0() {}

// sub_55ccc0  (orig 0x55ccc0, ptr_add)
void* main_f_55ccc0(void* a0) { return (char*)a0 + 120; }

// sub_55ccd0  (orig 0x55ccd0, getter)
uint64_t main_f_55ccd0(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_55cce0  (orig 0x55cce0, getter)
uint64_t main_f_55cce0(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_55ccf0  (orig 0x55ccf0, getter)
uint64_t main_f_55ccf0(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_55cd00  (orig 0x55cd00, getter)
uint64_t main_f_55cd00(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_55cd10  (orig 0x55cd10, getter)
uint64_t main_f_55cd10(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_55cd20  (orig 0x55cd20, getter)
uint64_t main_f_55cd20(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_55d3b0  (orig 0x55d3b0, getter)
uint32_t main_f_55d3b0(void* a0) { return *(uint32_t*)((char*)(a0) + 264); }

// sub_55d500  (orig 0x55d500, getter)
uint32_t main_f_55d500(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_55d510  (orig 0x55d510, getter)
uint64_t main_f_55d510(void* a0) { return *(uint64_t*)((char*)(a0) + 224); }

// sub_55d520  (orig 0x55d520, getter)
uint64_t main_f_55d520(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_55f1c0  (orig 0x55f1c0, straight)
uint32_t main_f_55f1c0(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 48) = a1;
    *(uint32_t*)((char*)(p0) + 800) = 11022;
    return 1;
}

// sub_55f2c0  (orig 0x55f2c0, ptr_add)
void* main_f_55f2c0(void* a0) { return (char*)a0 + 56; }

// sub_55f2d0  (orig 0x55f2d0, ptr_add)
void* main_f_55f2d0(void* a0) { return (char*)a0 + 48; }

// sub_55f2e0  (orig 0x55f2e0, getter)
uint32_t main_f_55f2e0(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_55f2f0  (orig 0x55f2f0, getter)
uint32_t main_f_55f2f0(void* a0) { return *(uint32_t*)((char*)(a0) + 160); }

// sub_55f300  (orig 0x55f300, getter)
uint64_t main_f_55f300(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_55f310  (orig 0x55f310, getter)
uint64_t main_f_55f310(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_55f320  (orig 0x55f320, getter)
uint64_t main_f_55f320(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_55f330  (orig 0x55f330, ptr_add)
void* main_f_55f330(void* a0) { return (char*)a0 + 448; }

// sub_55f340  (orig 0x55f340, ret_only)
void main_f_55f340() {}

// sub_55f350  (orig 0x55f350, indirect-tailcall)
void main_f_55f350(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 192)))))(((uintptr_t)(a0)));
}

// sub_55f360  (orig 0x55f360, ret_only)
void main_f_55f360() {}

// sub_55f370  (orig 0x55f370, ret_only)
void main_f_55f370() {}

// sub_55f380  (orig 0x55f380, ret_only)
void main_f_55f380() {}

// sub_55f390  (orig 0x55f390, ret_only)
void main_f_55f390() {}

// sub_55f3a0  (orig 0x55f3a0, ptr_add)
void* main_f_55f3a0(void* a0) { return (char*)a0 + 468; }

// sub_55f3b0  (orig 0x55f3b0, getter)
uint64_t main_f_55f3b0(void* a0) { return *(uint64_t*)((char*)(a0) + 1080); }

// sub_55f3c0  (orig 0x55f3c0, getter)
uint64_t main_f_55f3c0(void* a0) { return *(uint64_t*)((char*)(a0) + 1080); }

// sub_561d80  (orig 0x561d80, setter)
void main_f_561d80(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 800) = a1; }

// sub_561d90  (orig 0x561d90, getter)
uint32_t main_f_561d90(void* a0) { return *(uint32_t*)((char*)(a0) + 800); }

// sub_561da0  (orig 0x561da0, getter)
uint64_t main_f_561da0(void* a0) { return *(uint64_t*)((char*)(a0) + 816); }

// sub_561db0  (orig 0x561db0, getter)
uint32_t main_f_561db0(void* a0) { return *(uint32_t*)((char*)(a0) + 824); }

// sub_562300  (orig 0x562300, getter)
uint64_t main_f_562300(void* a0) { return *(uint64_t*)((char*)(a0) + 792); }

// sub_562310  (orig 0x562310, getter)
uint64_t main_f_562310(void* a0) { return *(uint64_t*)((char*)(a0) + 792); }

// sub_562320  (orig 0x562320, mov_ret)
uint32_t main_f_562320() { return 1; }

// sub_562330  (orig 0x562330, mov_ret)
uint64_t main_f_562330() { return 0; }

// sub_562360  (orig 0x562360, ptr_add)
void* main_f_562360(void* a0) { return (char*)a0 + 176; }

// sub_5624e0  (orig 0x5624e0, getter)
uint32_t main_f_5624e0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_562520  (orig 0x562520, getter)
uint64_t main_f_562520(void* a0) { return *(uint64_t*)((char*)(a0) + 808); }

// sub_5631d0  (orig 0x5631d0, straight)
uint32_t main_f_5631d0(uint32_t a0) { return (((((uint32_t)a0) == 3)) ? (2) : (((((uint32_t)a0) == 2) ? 1 : 0))); }

// sub_5635f0  (orig 0x5635f0, ret_only)
void main_f_5635f0() {}

// sub_5644d0  (orig 0x5644d0, mov_ret)
uint64_t main_f_5644d0() { return 0; }

// sub_564950  (orig 0x564950, straight)
uint32_t main_f_564950(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 40) = a1;
    return 1;
}

// sub_5649e0  (orig 0x5649e0, ptr_add)
void* main_f_5649e0(void* a0) { return (char*)a0 + 48; }

// sub_5649f0  (orig 0x5649f0, ptr_add)
void* main_f_5649f0(void* a0) { return (char*)a0 + 40; }

// sub_564a00  (orig 0x564a00, getter)
uint32_t main_f_564a00(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_564a10  (orig 0x564a10, getter)
uint32_t main_f_564a10(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_564a20  (orig 0x564a20, getter)
uint64_t main_f_564a20(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_564a30  (orig 0x564a30, getter)
uint64_t main_f_564a30(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_564a40  (orig 0x564a40, getter)
uint64_t main_f_564a40(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_564a50  (orig 0x564a50, ptr_add)
void* main_f_564a50(void* a0) { return (char*)a0 + 100; }

// sub_564a60  (orig 0x564a60, ret_only)
void main_f_564a60() {}

// sub_564a70  (orig 0x564a70, indirect-tailcall)
void main_f_564a70(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 168)))))(((uintptr_t)(a0)));
}

// sub_564a80  (orig 0x564a80, ret_only)
void main_f_564a80() {}

// sub_564a90  (orig 0x564a90, ret_only)
void main_f_564a90() {}

// sub_564aa0  (orig 0x564aa0, ret_only)
void main_f_564aa0() {}

// sub_564ab0  (orig 0x564ab0, ret_only)
void main_f_564ab0() {}

// sub_5650b0  (orig 0x5650b0, ret_only)
void main_f_5650b0() {}

// sub_5650c0  (orig 0x5650c0, getter)
uint32_t main_f_5650c0(void* a0) { return *(uint32_t*)((char*)(a0) + 1020); }

// sub_5650d0  (orig 0x5650d0, ptr_add)
void* main_f_5650d0(void* a0) { return (char*)a0 + 124; }

// sub_565120  (orig 0x565120, getter)
uint32_t main_f_565120(void* a0) { return *(uint32_t*)((char*)(a0) + 1088); }

// sub_5653e0  (orig 0x5653e0, ptr_add)
void* main_f_5653e0(void* a0) { return (char*)a0 + 124; }

// sub_5653f0  (orig 0x5653f0, straight)
void main_f_5653f0(void* a0, int32_t a1, uint64_t a2) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 4)));
    *(uint32_t*)((char*)(p0) + 1800) = (uint32_t)(a2);
}

// sub_565400  (orig 0x565400, straight)
uint32_t main_f_565400(void* a0, int32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 4)));
    return *(uint32_t*)((char*)(p0) + 1800);
}

// sub_565410  (orig 0x565410, ret_only)
void main_f_565410() {}

// sub_565420  (orig 0x565420, mov_ret)
uint32_t main_f_565420() { return 0; }

// sub_5654d0  (orig 0x5654d0, getter)
uint32_t main_f_5654d0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_565a40  (orig 0x565a40, ptr_add)
void* main_f_565a40(void* a0) { return (char*)a0 + 48; }

// sub_565a50  (orig 0x565a50, ptr_add)
void* main_f_565a50(void* a0) { return (char*)a0 + 40; }

// sub_565a60  (orig 0x565a60, getter)
uint32_t main_f_565a60(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_565a70  (orig 0x565a70, getter)
uint32_t main_f_565a70(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_565a80  (orig 0x565a80, getter)
uint64_t main_f_565a80(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_565a90  (orig 0x565a90, getter)
uint64_t main_f_565a90(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_565aa0  (orig 0x565aa0, getter)
uint64_t main_f_565aa0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_565b70  (orig 0x565b70, ptr_add)
void* main_f_565b70(void* a0) { return (char*)a0 + 100; }

// sub_565b80  (orig 0x565b80, ret_only)
void main_f_565b80() {}

// sub_565b90  (orig 0x565b90, ret_only)
void main_f_565b90() {}

// sub_565ba0  (orig 0x565ba0, ret_only)
void main_f_565ba0() {}

// sub_565bb0  (orig 0x565bb0, ret_only)
void main_f_565bb0() {}

// sub_565bc0  (orig 0x565bc0, ret_only)
void main_f_565bc0() {}

// sub_565bd0  (orig 0x565bd0, ret_only)
void main_f_565bd0() {}

// sub_565be0  (orig 0x565be0, ptr_add)
void* main_f_565be0(void* a0) { return (char*)a0 + 120; }

// sub_565bf0  (orig 0x565bf0, mov_ret)
uint64_t main_f_565bf0() { return 0; }

// sub_565c00  (orig 0x565c00, mov_ret)
uint64_t main_f_565c00() { return 0; }

// sub_565ea0  (orig 0x565ea0, ret_only)
void main_f_565ea0() {}

// sub_565eb0  (orig 0x565eb0, mov_ret)
uint32_t main_f_565eb0() { return 0; }

// sub_565fe0  (orig 0x565fe0, getter)
uint32_t main_f_565fe0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_568550  (orig 0x568550, ptr_add)
void* main_f_568550(void* a0) { return (char*)a0 + 24; }

// sub_568560  (orig 0x568560, ptr_add)
void* main_f_568560(void* a0) { return (char*)a0 + 72; }

// sub_569580  (orig 0x569580, ptr_add)
void* main_f_569580(void* a0) { return (char*)a0 + 720; }

// sub_569590  (orig 0x569590, ptr_add)
void* main_f_569590(void* a0) { return (char*)a0 + 120; }

// sub_56c860  (orig 0x56c860, getter)
uint32_t main_f_56c860(void* a0) { return *(uint32_t*)((char*)(a0) + 336); }

// sub_56c870  (orig 0x56c870, straight)
uint64_t main_f_56c870(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 360));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_56ce30  (orig 0x56ce30, ptr_add)
void* main_f_56ce30(void* a0) { return (char*)a0 + 3640; }

// sub_56ce40  (orig 0x56ce40, straight)
void main_f_56ce40(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 316) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_56ce50  (orig 0x56ce50, getter)
uint8_t main_f_56ce50(void* a0) { return *(uint8_t*)((char*)(a0) + 316); }

// sub_56d2a0  (orig 0x56d2a0, straight)
void main_f_56d2a0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 317) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_56d2b0  (orig 0x56d2b0, getter)
uint8_t main_f_56d2b0(void* a0) { return *(uint8_t*)((char*)(a0) + 317); }

// sub_56d940  (orig 0x56d940, getter)
uint32_t main_f_56d940(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_56dbf0  (orig 0x56dbf0, getter)
uint32_t main_f_56dbf0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_570010  (orig 0x570010, ptr_add)
void* main_f_570010(void* a0) { return (char*)a0 + 24; }

// sub_570020  (orig 0x570020, ptr_add)
void* main_f_570020(void* a0) { return (char*)a0 + 72; }

// sub_570030  (orig 0x570030, ptr_add)
void* main_f_570030(void* a0) { return (char*)a0 + 120; }

// sub_570040  (orig 0x570040, getter)
uint32_t main_f_570040(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_570050  (orig 0x570050, getter)
uint32_t main_f_570050(void* a0) { return *(uint32_t*)((char*)(a0) + 172); }

// sub_570060  (orig 0x570060, straight-line)
uint64_t main_f_570060(void* a0, uint32_t a1) { return (*(uint64_t*)((char*)(a0) + 176)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(96)))))); }

// sub_5706d0  (orig 0x5706d0, getter)
uint64_t main_f_5706d0(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_5706e0  (orig 0x5706e0, getter)
uint64_t main_f_5706e0(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_570790  (orig 0x570790, getter)
uint32_t main_f_570790(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_5709c0  (orig 0x5709c0, ptr_add)
void* main_f_5709c0(void* a0) { return (char*)a0 + 24; }

// sub_5709d0  (orig 0x5709d0, getter)
uint32_t main_f_5709d0(void* a0) { return *(uint32_t*)((char*)(a0) + 76); }

// sub_570c20  (orig 0x570c20, getter)
uint32_t main_f_570c20(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_570d00  (orig 0x570d00, mov_ret)
uint32_t main_f_570d00() { return 1; }

// sub_5725b0  (orig 0x5725b0, getter)
uint32_t main_f_5725b0(void* a0) { return *(uint32_t*)((char*)(a0) + 184); }

// sub_5725c0  (orig 0x5725c0, straight)
uint64_t main_f_5725c0(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 208));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_573260  (orig 0x573260, getter)
uint32_t main_f_573260(void* a0) { return *(uint32_t*)((char*)(a0) + 264); }

// sub_573350  (orig 0x573350, straight-line)
uint64_t main_f_573350(void* a0, uint32_t a1) { return (*(uint64_t*)((char*)(a0) + 288)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(72)))))); }

// sub_573360  (orig 0x573360, getter)
uint8_t main_f_573360(void* a0) { return *(uint8_t*)((char*)(a0) + 368); }

// sub_573460  (orig 0x573460, ptr_add)
void* main_f_573460(void* a0) { return (char*)a0 + 80; }

// sub_573470  (orig 0x573470, getter)
uint64_t main_f_573470(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_573770  (orig 0x573770, getter)
uint32_t main_f_573770(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_574c60  (orig 0x574c60, ptr_add)
void* main_f_574c60(void* a0) { return (char*)a0 + 24; }

// sub_574c70  (orig 0x574c70, getter)
uint32_t main_f_574c70(void* a0) { return *(uint32_t*)((char*)(a0) + 200); }

// sub_574c80  (orig 0x574c80, getter)
uint32_t main_f_574c80(void* a0) { return *(uint32_t*)((char*)(a0) + 204); }

// sub_575370  (orig 0x575370, getter)
uint32_t main_f_575370(void* a0) { return *(uint32_t*)((char*)(a0) + 336); }

// sub_575380  (orig 0x575380, getter)
uint32_t main_f_575380(void* a0) { return *(uint32_t*)((char*)(a0) + 340); }

// sub_575d50  (orig 0x575d50, getter)
uint32_t main_f_575d50(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_576b90  (orig 0x576b90, getter)
uint64_t main_f_576b90(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_576ba0  (orig 0x576ba0, getter)
uint64_t main_f_576ba0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_576bf0  (orig 0x576bf0, ptr_add)
void* main_f_576bf0(void* a0) { return (char*)a0 + 32; }

// sub_576c00  (orig 0x576c00, ptr_add)
void* main_f_576c00(void* a0) { return (char*)a0 + 144; }

// sub_576c10  (orig 0x576c10, getter)
uint64_t main_f_576c10(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_576c20  (orig 0x576c20, getter)
uint64_t main_f_576c20(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_578af0  (orig 0x578af0, straight)
void main_f_578af0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 88) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_578b00  (orig 0x578b00, getter)
uint8_t main_f_578b00(void* a0) { return *(uint8_t*)((char*)(a0) + 88); }

// sub_5792c0  (orig 0x5792c0, getter)
uint32_t main_f_5792c0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_5793d0  (orig 0x5793d0, getter)
uint32_t main_f_5793d0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_579970  (orig 0x579970, getter)
uint32_t main_f_579970(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_57a640  (orig 0x57a640, mov_ret)
uint32_t main_f_57a640() { return 1; }

// sub_57afc0  (orig 0x57afc0, getter)
uint64_t main_f_57afc0(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_57afd0  (orig 0x57afd0, getter)
uint64_t main_f_57afd0(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_57b430  (orig 0x57b430, compare)
bool main_f_57b430(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 232)) == (uint64_t)(0); }

// sub_57b4f0  (orig 0x57b4f0, ptr_add)
void* main_f_57b4f0(void* a0) { return (char*)a0 + 48; }

// sub_57bef0  (orig 0x57bef0, ptr_add)
void* main_f_57bef0(void* a0) { return (char*)a0 + 304; }

// sub_57bf00  (orig 0x57bf00, call)
extern void sub_4c5630();
uint64_t main_f_57bf00(void* a0, uint64_t a1) {
    uint64_t r0 = ((((uint64_t (*)(uintptr_t, uintptr_t, uintptr_t))&sub_4c5630)(((uintptr_t)((char*)(a0) + 200)), ((uintptr_t)(((uint64_t)a1))), ((uintptr_t)(1))) == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_57bf30  (orig 0x57bf30, setter)
void main_f_57bf30(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 352) = a1; }

// sub_57bf40  (orig 0x57bf40, getter)
uint32_t main_f_57bf40(void* a0) { return *(uint32_t*)((char*)(a0) + 352); }

// sub_57bf50  (orig 0x57bf50, setter)
void main_f_57bf50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 224) = a1; }

// sub_57bf60  (orig 0x57bf60, getter)
uint32_t main_f_57bf60(void* a0) { return *(uint32_t*)((char*)(a0) + 224); }

// sub_57bf70  (orig 0x57bf70, getter)
uint64_t main_f_57bf70(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_57c5c0  (orig 0x57c5c0, getter)
uint32_t main_f_57c5c0(void* a0) { return *(uint32_t*)((char*)(a0) + 448); }

// sub_57c670  (orig 0x57c670, getter)
uint32_t main_f_57c670(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_57c750  (orig 0x57c750, getter)
uint32_t main_f_57c750(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_57d5e0  (orig 0x57d5e0, getter)
uint64_t main_f_57d5e0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_57d5f0  (orig 0x57d5f0, getter)
uint64_t main_f_57d5f0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_57d840  (orig 0x57d840, getter)
uint64_t main_f_57d840(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_57d850  (orig 0x57d850, straight)
uint32_t main_f_57d850(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 56) = a1;
    return 1;
}

// sub_57d860  (orig 0x57d860, getter)
uint64_t main_f_57d860(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_57dd30  (orig 0x57dd30, getter)
uint32_t main_f_57dd30(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_57dff0  (orig 0x57dff0, getter)
uint32_t main_f_57dff0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_57f990  (orig 0x57f990, getter)
uint32_t main_f_57f990(void* a0) { return *(uint32_t*)((char*)(a0) + 48); }

// sub_57f9a0  (orig 0x57f9a0, straight-line)
uint32_t main_f_57f9a0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 72)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(80))))))));
    return *(uint32_t*)((char*)(p0) + 16);
}

// sub_57f9c0  (orig 0x57f9c0, straight-line)
uint64_t main_f_57f9c0(void* a0, uint32_t a1, uint32_t a2) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 72)) + ((((int64_t)(((int32_t)(((uint32_t)a2)))))) * (((int64_t)(((int32_t)(80))))))));
    return (*(uint64_t*)((char*)(p0) + 40)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(48))))));
}

// sub_57ff50  (orig 0x57ff50, getter)
uint32_t main_f_57ff50(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_57ff60  (orig 0x57ff60, straight)
void main_f_57ff60(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 24) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_57ff70  (orig 0x57ff70, getter)
uint8_t main_f_57ff70(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_5807c0  (orig 0x5807c0, getter)
uint64_t main_f_5807c0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_5807f0  (orig 0x5807f0, getter)
uint64_t main_f_5807f0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_580800  (orig 0x580800, straight)
uint8_t main_f_580800(void* a0) { return ((*(uint8_t*)((char*)(a0) + 56)) >> (3)) & (1); }

// sub_580810  (orig 0x580810, straight)
uint8_t main_f_580810(void* a0) { return ((*(uint8_t*)((char*)(a0) + 56)) >> (4)) & (1); }

// sub_580820  (orig 0x580820, setter)
void main_f_580820(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 68) = a1; }

// sub_580830  (orig 0x580830, setter)
void main_f_580830(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 64) = a1; }

// sub_580840  (orig 0x580840, getter)
uint32_t main_f_580840(void* a0) { return *(uint32_t*)((char*)(a0) + 68); }

// sub_580850  (orig 0x580850, getter)
uint32_t main_f_580850(void* a0) { return *(uint32_t*)((char*)(a0) + 64); }

// sub_580860  (orig 0x580860, getter)
uint64_t main_f_580860(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_580b20  (orig 0x580b20, indirect-tailcall)
void main_f_580b20(void* a0, uint32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 184)))))(((uintptr_t)(a0)), ((uintptr_t)((((uint32_t)a1)) & (1))));
}

// sub_581af0  (orig 0x581af0, indirect-tailcall)
void main_f_581af0(void* a0, uint64_t a1, uint32_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 368)))))(((uintptr_t)(a0)), ((uintptr_t)(a1)), ((uintptr_t)((((uint32_t)a2)) & (1))));
}

// sub_582b40  (orig 0x582b40, ret_only)
void main_f_582b40() {}

// sub_582ba0  (orig 0x582ba0, getter)
uint64_t main_f_582ba0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_582bb0  (orig 0x582bb0, getter)
uint64_t main_f_582bb0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_582bc0  (orig 0x582bc0, mov_ret)
uint32_t main_f_582bc0() { return 1; }

// sub_582bd0  (orig 0x582bd0, mov_ret)
uint32_t main_f_582bd0() { return 0; }

// sub_582be0  (orig 0x582be0, mov_ret)
uint32_t main_f_582be0() { return 0; }

// sub_582bf0  (orig 0x582bf0, mov_ret)
uint64_t main_f_582bf0() { return 0; }

// sub_582c00  (orig 0x582c00, mov_ret)
uint64_t main_f_582c00() { return 0; }

// sub_582cb0  (orig 0x582cb0, getter)
uint32_t main_f_582cb0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_582cc0  (orig 0x582cc0, mov_ret)
uint32_t main_f_582cc0() { return 2; }

// sub_582cd0  (orig 0x582cd0, straight-line)
uint32_t main_f_582cd0(void* a0) { return ((*(uint32_t*)((char*)(a0) + 68) != *(uint32_t*)((char*)(a0) + 64)) ? 1 : 0); }

// sub_583970  (orig 0x583970, mov_ret)
uint32_t main_f_583970() { return 1; }

// sub_583cf0  (orig 0x583cf0, getter)
uint32_t main_f_583cf0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_584410  (orig 0x584410, mov_ret)
uint32_t main_f_584410() { return 1; }

// sub_584d80  (orig 0x584d80, getter)
uint8_t main_f_584d80(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_584db0  (orig 0x584db0, straight)
uint32_t main_f_584db0(void* a0) {
    *(uint8_t*)((char*)(a0) + 25) = 0;
    return 1;
}

// sub_584dc0  (orig 0x584dc0, getter)
uint8_t main_f_584dc0(void* a0) { return *(uint8_t*)((char*)(a0) + 25); }

// sub_584dd0  (orig 0x584dd0, getter)
uint64_t main_f_584dd0(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_584de0  (orig 0x584de0, getter)
uint64_t main_f_584de0(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_5856a0  (orig 0x5856a0, mov_ret)
uint64_t main_f_5856a0() { return 0; }

// sub_5856b0  (orig 0x5856b0, mov_ret)
uint64_t main_f_5856b0() { return 0; }

// sub_5856c0  (orig 0x5856c0, straight)
void main_f_5856c0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 26) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_5856d0  (orig 0x5856d0, getter)
uint8_t main_f_5856d0(void* a0) { return *(uint8_t*)((char*)(a0) + 26); }

// sub_5856f0  (orig 0x5856f0, ptr_add)
void* main_f_5856f0(void* a0) { return (char*)a0 + 136; }

// sub_586af0  (orig 0x586af0, getter)
uint32_t main_f_586af0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_587510  (orig 0x587510, mov_ret)
uint32_t main_f_587510() { return 1; }

// sub_587650  (orig 0x587650, getter)
uint64_t main_f_587650(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_587660  (orig 0x587660, getter)
uint64_t main_f_587660(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_587670  (orig 0x587670, getter)
uint64_t main_f_587670(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_587680  (orig 0x587680, getter)
uint64_t main_f_587680(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_587690  (orig 0x587690, ptr_add)
void* main_f_587690(void* a0) { return (char*)a0 + 40; }

// sub_5876a0  (orig 0x5876a0, ptr_add)
void* main_f_5876a0(void* a0) { return (char*)a0 + 88; }

// sub_5876b0  (orig 0x5876b0, getter)
uint8_t main_f_5876b0(void* a0) { return *(uint8_t*)((char*)(a0) + 140); }

// sub_5876c0  (orig 0x5876c0, getter)
uint64_t main_f_5876c0(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_5876d0  (orig 0x5876d0, straight)
uint64_t main_f_5876d0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 240));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_5876e0  (orig 0x5876e0, straight)
uint64_t main_f_5876e0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 240));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_5876f0  (orig 0x5876f0, getter)
uint64_t main_f_5876f0(void* a0) { return *(uint64_t*)((char*)(a0) + 296); }

// sub_587700  (orig 0x587700, straight)
uint64_t main_f_587700(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 320));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_587710  (orig 0x587710, straight)
uint64_t main_f_587710(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 320));
    return *(uint64_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 8)));
}

// sub_587720  (orig 0x587720, getter)
uint64_t main_f_587720(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_587a50  (orig 0x587a50, getter)
uint32_t main_f_587a50(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_588940  (orig 0x588940, straight)
uint8_t main_f_588940(void* a0) { return ((*(uint8_t*)((char*)(a0) + 32)) >> (3)) & (1); }

// sub_588950  (orig 0x588950, straight)
uint8_t main_f_588950(void* a0) { return ((*(uint8_t*)((char*)(a0) + 32)) >> (4)) & (1); }

// sub_589030  (orig 0x589030, indirect-tailcall)
void main_f_589030(void* a0, uint32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 184)))))(((uintptr_t)(a0)), ((uintptr_t)((((uint32_t)a1)) & (1))));
}

// sub_58a7e0  (orig 0x58a7e0, indirect-tailcall)
void main_f_58a7e0(void* a0, uint64_t a1, uint32_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 368)))))(((uintptr_t)(a0)), ((uintptr_t)(a1)), ((uintptr_t)((((uint32_t)a2)) & (1))));
}

// sub_58b630  (orig 0x58b630, getter)
uint64_t main_f_58b630(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_58b640  (orig 0x58b640, getter)
uint64_t main_f_58b640(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_58b650  (orig 0x58b650, ptr_add)
void* main_f_58b650(void* a0) { return (char*)a0 + 48; }

// sub_58b660  (orig 0x58b660, ptr_add)
void* main_f_58b660(void* a0) { return (char*)a0 + 96; }

// sub_58b730  (orig 0x58b730, mov_ret)
uint32_t main_f_58b730() { return 0; }

// sub_58b740  (orig 0x58b740, mov_ret)
uint32_t main_f_58b740() { return 0; }

// sub_58b750  (orig 0x58b750, getter)
uint64_t main_f_58b750(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_58b760  (orig 0x58b760, getter)
uint64_t main_f_58b760(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_58b770  (orig 0x58b770, straight)
uint64_t main_f_58b770(void* a0) { return *(uint64_t*)((char*)(a0) + 65824L); }

// sub_58b820  (orig 0x58b820, getter)
uint32_t main_f_58b820(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_58b830  (orig 0x58b830, mov_ret)
uint32_t main_f_58b830() { return 1; }

// sub_58b840  (orig 0x58b840, straight-line)
uint32_t main_f_58b840(void* a0) { return ((*(uint32_t*)((char*)(a0) + 40) != *(uint32_t*)((char*)(a0) + 36)) ? 1 : 0); }

// sub_58bcd0  (orig 0x58bcd0, getter)
uint64_t main_f_58bcd0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_58bce0  (orig 0x58bce0, ptr_add)
void* main_f_58bce0(void* a0) { return (char*)a0 + 40; }

// sub_58bcf0  (orig 0x58bcf0, ptr_add)
void* main_f_58bcf0(void* a0) { return (char*)a0 + 88; }

// sub_58bd00  (orig 0x58bd00, getter)
uint64_t main_f_58bd00(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_58bd10  (orig 0x58bd10, getter)
uint64_t main_f_58bd10(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_58bdc0  (orig 0x58bdc0, getter)
uint32_t main_f_58bdc0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_594440  (orig 0x594440, strlit-ret)
const char *main_f_594440() { static const char s[] = "1.2.5"; __asm__ volatile("" ::: "memory"); return s; }

// sub_594580  (orig 0x594580, ret_only)
void main_f_594580() {}

// sub_594be0  (orig 0x594be0, getter)
uint64_t main_f_594be0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_594bf0  (orig 0x594bf0, getter)
uint64_t main_f_594bf0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_594ca0  (orig 0x594ca0, getter)
uint32_t main_f_594ca0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_595e00  (orig 0x595e00, getter)
uint64_t main_f_595e00(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_595e10  (orig 0x595e10, getter)
uint64_t main_f_595e10(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_595ee0  (orig 0x595ee0, getter)
uint64_t main_f_595ee0(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_596040  (orig 0x596040, getter)
uint32_t main_f_596040(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_5961b0  (orig 0x5961b0, mov_ret)
uint32_t main_f_5961b0() { return 1; }

// sub_5961c0  (orig 0x5961c0, indirect-tailcall)
void main_f_5961c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 64)))))(((uintptr_t)(a0)));
}

// sub_5961f0  (orig 0x5961f0, setter-chain)
void main_f_5961f0(void* a0) { *(uint64_t*)((char*)(a0) + 40) = 0; *(uint32_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; }

// sub_596270  (orig 0x596270, ptr_add)
void* main_f_596270(void* a0) { return (char*)a0 + 24; }

// sub_596280  (orig 0x596280, straight)
uint64_t main_f_596280(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(p0) + 32) = (*(uint32_t*)((char*)(a0) + 32)) + (1);
    return *(uint64_t*)((char*)(p0) + 40);
}

// sub_5962c0  (orig 0x5962c0, getter)
uint64_t main_f_5962c0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_5962d0  (orig 0x5962d0, getter)
uint64_t main_f_5962d0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_596380  (orig 0x596380, getter)
uint32_t main_f_596380(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_5964e0  (orig 0x5964e0, call)
extern void callee_17e9320();
uint32_t main_f_5964e0(void* a0) {
    uint64_t f_5964e0__r0 = ((uint64_t (*)(uintptr_t))&callee_17e9320)(((uintptr_t)((char*)(a0) + 8)));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_596500  (orig 0x596500, call)
extern void callee_17e9330();
uint32_t main_f_596500(void* a0) {
    uint64_t f_596500__r0 = ((uint64_t (*)(uintptr_t))&callee_17e9330)(((uintptr_t)((char*)(a0) + 8)));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_5965f0  (orig 0x5965f0, call)
extern void callee_17e9320();
uint32_t main_f_5965f0(void* a0) {
    uint64_t f_5965f0__r0 = ((uint64_t (*)(uintptr_t))&callee_17e9320)(((uintptr_t)((char*)(a0) + 8)));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_596610  (orig 0x596610, call)
extern void callee_17e9330();
uint32_t main_f_596610(void* a0) {
    uint64_t f_596610__r0 = ((uint64_t (*)(uintptr_t))&callee_17e9330)(((uintptr_t)((char*)(a0) + 8)));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_5966c0  (orig 0x5966c0, mov_ret)
uint64_t main_f_5966c0() { return 0; }

// sub_5966d0  (orig 0x5966d0, ptr_add)
void* main_f_5966d0(void* a0) { return (char*)a0 + 8; }

// sub_596e60  (orig 0x596e60, ptr_add)
void* main_f_596e60(void* a0) { return (char*)a0 + 8; }

// sub_596e70  (orig 0x596e70, ptr_add)
void* main_f_596e70(void* a0) { return (char*)a0 + 104; }

// sub_596e80  (orig 0x596e80, ptr_add)
void* main_f_596e80(void* a0) { return (char*)a0 + 200; }

// sub_597920  (orig 0x597920, ptr_add)
void* main_f_597920(void* a0) { return (char*)a0 + 8; }

// sub_597930  (orig 0x597930, compare)
bool main_f_597930(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) == (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_597b40  (orig 0x597b40, ptr_add)
void* main_f_597b40(void* a0) { return (char*)a0 + 8; }

// sub_597b50  (orig 0x597b50, ptr_add)
void* main_f_597b50(void* a0) { return (char*)a0 + 40; }

// sub_597b60  (orig 0x597b60, ptr_add)
void* main_f_597b60(void* a0) { return (char*)a0 + 136; }

// sub_597b70  (orig 0x597b70, ptr_add)
void* main_f_597b70(void* a0) { return (char*)a0 + 232; }

// sub_59a250  (orig 0x59a250, straight-line)
uint64_t main_f_59a250(void* a0) { return ((*(uint64_t*)((char*)(a0) + 472)) - (*(uint64_t*)((char*)(a0) + 464))) >> (3); }

// sub_59a4f0  (orig 0x59a4f0, setter)
void main_f_59a4f0(void* a0, float a1) { *(float*)((char*)(a0) + 1036) = a1; }

// sub_59a500  (orig 0x59a500, getter)
float main_f_59a500(void* a0) { return *(float*)((char*)(a0) + 1036); }

// sub_59a510  (orig 0x59a510, straight)
void main_f_59a510(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1024) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_59a520  (orig 0x59a520, straight)
void main_f_59a520(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1025) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_59a530  (orig 0x59a530, getter)
uint8_t main_f_59a530(void* a0) { return *(uint8_t*)((char*)(a0) + 1025); }

// sub_59b060  (orig 0x59b060, compare)
bool main_f_59b060(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 624)) != (uint64_t)(0); }

// sub_59b1a0  (orig 0x59b1a0, indirect-tailcall)
void main_f_59b1a0(void* a0, uint64_t a1, uint32_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 624));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 160)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 624))), ((uintptr_t)(a1)), ((uintptr_t)((((uint32_t)a2)) & (1))));
}

// sub_59b230  (orig 0x59b230, indirect-tailcall)
void main_f_59b230(void* a0, uint64_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 624));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t, uintptr_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 200)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 624))), ((uintptr_t)(a1)), ((uint32_t)(0)));
}

// sub_59b2c0  (orig 0x59b2c0, straight)
void* main_f_59b2c0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 1026) = (uint8_t)k0;
    return a0;
}

// sub_59b2d0  (orig 0x59b2d0, setter)
void main_f_59b2d0(void* a0) { *(uint8_t*)((char*)(a0) + 1026) = 0; }

// sub_59b2e0  (orig 0x59b2e0, getter)
uint8_t main_f_59b2e0(void* a0) { return *(uint8_t*)((char*)(a0) + 1026); }

// sub_59cda0  (orig 0x59cda0, ret_only)
void main_f_59cda0() {}

// sub_59cdb0  (orig 0x59cdb0, copy2)
void main_f_59cdb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59cdc0  (orig 0x59cdc0, copy2)
void main_f_59cdc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59cf20  (orig 0x59cf20, ret_only)
void main_f_59cf20() {}

// sub_59cf30  (orig 0x59cf30, copy2)
void main_f_59cf30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59cf40  (orig 0x59cf40, copy2)
void main_f_59cf40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59d0b0  (orig 0x59d0b0, ret_only)
void main_f_59d0b0() {}

// sub_59d0c0  (orig 0x59d0c0, copy2)
void main_f_59d0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59d0d0  (orig 0x59d0d0, copy2)
void main_f_59d0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59d1d0  (orig 0x59d1d0, ret_only)
void main_f_59d1d0() {}

// sub_59d1e0  (orig 0x59d1e0, copy2)
void main_f_59d1e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59d1f0  (orig 0x59d1f0, copy2)
void main_f_59d1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_59d590  (orig 0x59d590, copy2)
void main_f_59d590(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1)); }

// sub_59d960  (orig 0x59d960, call)
extern void sub_5abb00();
uint64_t main_f_59d960(void* a0) {
    uint64_t r0 = ((uint64_t (*)(uintptr_t))&sub_5abb00)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 112))));
    asm volatile("");
    return r0;
}

// sub_59e460  (orig 0x59e460, ret_only)
void main_f_59e460() {}

// sub_59e970  (orig 0x59e970, setter)
void main_f_59e970(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_59f220  (orig 0x59f220, ptr_add)
void* main_f_59f220(void* a0) { return (char*)a0 + 304; }

// sub_59f230  (orig 0x59f230, ptr_add)
void* main_f_59f230(void* a0) { return (char*)a0 + 304; }

// sub_59f300  (orig 0x59f300, setter)
void main_f_59f300(void* a0, float a1) { *(float*)((char*)(a0) + 496) = a1; }

// sub_59f310  (orig 0x59f310, getter)
float main_f_59f310(void* a0) { return *(float*)((char*)(a0) + 496); }

// sub_59f320  (orig 0x59f320, setter)
void main_f_59f320(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_59fa50  (orig 0x59fa50, ret_only)
void main_f_59fa50() {}

// sub_59fa60  (orig 0x59fa60, ret_only)
void main_f_59fa60() {}

// sub_5a00c0  (orig 0x5a00c0, ptr_add)
void* main_f_5a00c0(void* a0) { return (char*)a0 + 8; }

// sub_5a0600  (orig 0x5a0600, getter)
uint32_t main_f_5a0600(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_5a0610  (orig 0x5a0610, straight)
void* main_f_5a0610(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0)) = 257698037760;
    *(uint32_t*)((char*)(p0) + 8) = 1065353216;
    *(uint64_t*)((char*)(p0) + 18) = 0;
    *(uint64_t*)((char*)(p0) + 12) = 0;
    return a0;
}

// sub_5a0630  (orig 0x5a0630, straight)
void* main_f_5a0630(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0)) = 257698037760;
    *(uint32_t*)((char*)(p0) + 8) = 1065353216;
    *(uint64_t*)((char*)(p0) + 18) = 0;
    *(uint64_t*)((char*)(p0) + 12) = 0;
    return a0;
}

// sub_5a0790  (orig 0x5a0790, setter)
void main_f_5a0790(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0)) = a1; }

// sub_5a07a0  (orig 0x5a07a0, getter)
uint32_t main_f_5a07a0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_5a07b0  (orig 0x5a07b0, setter)
void main_f_5a07b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 4) = a1; }

// sub_5a07c0  (orig 0x5a07c0, getter)
uint32_t main_f_5a07c0(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_5a0810  (orig 0x5a0810, getter)
float main_f_5a0810(void* a0) { return *(float*)((char*)(a0) + 20); }

// sub_5a0820  (orig 0x5a0820, setter)
void main_f_5a0820(void* a0, float a1) { *(float*)((char*)(a0) + 8) = a1; }

// sub_5a08f0  (orig 0x5a08f0, getter)
uint8_t main_f_5a08f0(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_5a1180  (orig 0x5a1180, ret_only)
void main_f_5a1180() {}

// sub_5a12c0  (orig 0x5a12c0, ret_only)
void main_f_5a12c0() {}

// sub_5a2420  (orig 0x5a2420, ret_only)
void main_f_5a2420() {}

// sub_5a28c0  (orig 0x5a28c0, ret_only)
void main_f_5a28c0() {}

// sub_5a4e60  (orig 0x5a4e60, ret_only)
void main_f_5a4e60() {}

// sub_5a5060  (orig 0x5a5060, ret_only)
void main_f_5a5060() {}

// sub_5a6840  (orig 0x5a6840, mov_ret)
uint32_t main_f_5a6840() { return 0; }

// sub_5a8600  (orig 0x5a8600, ret_only)
void main_f_5a8600() {}

// sub_5a8610  (orig 0x5a8610, ret_only)
void main_f_5a8610() {}

// sub_5a8720  (orig 0x5a8720, ret_only)
void main_f_5a8720() {}

// sub_5a8740  (orig 0x5a8740, ret_only)
void main_f_5a8740() {}

// sub_5a8d70  (orig 0x5a8d70, ret_only)
void main_f_5a8d70() {}

// sub_5a8e60  (orig 0x5a8e60, ret_only)
void main_f_5a8e60() {}

// sub_5a99f0  (orig 0x5a99f0, setter)
void main_f_5a99f0(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_5a9a40  (orig 0x5a9a40, ret_only)
void main_f_5a9a40() {}

// sub_5a9a50  (orig 0x5a9a50, ret_only)
void main_f_5a9a50() {}

// sub_5a9a60  (orig 0x5a9a60, getter)
float main_f_5a9a60(void* a0) { return *(float*)((char*)(a0) + 8); }

// sub_5abaf0  (orig 0x5abaf0, ret_only)
void main_f_5abaf0() {}

// sub_5abb00  (orig 0x5abb00, ptr_add)
void* main_f_5abb00(void* a0) { return (char*)a0 + 16; }

// sub_5ac270  (orig 0x5ac270, indirect-tailcall)
void main_f_5ac270(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 56)))))(((uintptr_t)(a0)));
}

// sub_5ac2f0  (orig 0x5ac2f0, setter)
void main_f_5ac2f0(void* a0, float a1) { *(float*)((char*)(a0) + 64) = a1; }

// sub_5ac300  (orig 0x5ac300, getter)
float main_f_5ac300(void* a0) { return *(float*)((char*)(a0) + 64); }

// sub_5acc80  (orig 0x5acc80, straight)
void main_f_5acc80(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 80) = (uint8_t)((((uint32_t)a1)) & (1));
    *(uint8_t*)((char*)(a0) + 88) = 0;
}

// sub_5b0eb0  (orig 0x5b0eb0, straight-line)
uint32_t main_f_5b0eb0(void* a0) { return (((*(uint64_t*)((char*)(a0) + 112)) - (*(uint64_t*)((char*)(a0) + 104))) >> (4)) * (2863311531); }

// sub_5b0ed0  (orig 0x5b0ed0, straight-line)
uint32_t main_f_5b0ed0(void* a0) { return (((*(uint64_t*)((char*)(a0) + 40)) - (*(uint64_t*)((char*)(a0) + 32))) >> (4)) * (2863311531); }

// sub_5b13f0  (orig 0x5b13f0, straight-line)
uint32_t main_f_5b13f0(void* a0) { return (((*(uint64_t*)((char*)(a0) + 160)) - (*(uint64_t*)((char*)(a0) + 152))) >> (4)) * (2863311531); }

// sub_5b1410  (orig 0x5b1410, straight-line)
uint32_t main_f_5b1410(void* a0) { return (((*(uint64_t*)((char*)(a0) + 88)) - (*(uint64_t*)((char*)(a0) + 80))) >> (4)) * (2863311531); }

// sub_5b1930  (orig 0x5b1930, straight-line)
uint32_t main_f_5b1930(void* a0) { return (((*(uint64_t*)((char*)(a0) + 208)) - (*(uint64_t*)((char*)(a0) + 200))) >> (4)) * (2863311531); }

// sub_5b1950  (orig 0x5b1950, straight-line)
uint32_t main_f_5b1950(void* a0) { return (((*(uint64_t*)((char*)(a0) + 136)) - (*(uint64_t*)((char*)(a0) + 128))) >> (4)) * (2863311531); }

// sub_5b1e30  (orig 0x5b1e30, straight-line)
uint32_t main_f_5b1e30(void* a0) { return (((*(uint64_t*)((char*)(a0) + 256)) - (*(uint64_t*)((char*)(a0) + 248))) >> (4)) * (2863311531); }

// sub_5b1e50  (orig 0x5b1e50, straight-line)
uint32_t main_f_5b1e50(void* a0) { return (((*(uint64_t*)((char*)(a0) + 184)) - (*(uint64_t*)((char*)(a0) + 176))) >> (4)) * (2863311531); }

// sub_5b4770  (orig 0x5b4770, getter)
uint32_t main_f_5b4770(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_5b4dc0  (orig 0x5b4dc0, ptr_add)
void* main_f_5b4dc0(void* a0) { return (char*)a0 + 104; }

// sub_5b5100  (orig 0x5b5100, call)
extern void sub_5b64c0();
uint64_t main_f_5b5100(void* a0) {
    uint64_t r0 = ((((uint64_t (*)(uintptr_t))&sub_5b64c0)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 432)))) != 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_5b5130  (orig 0x5b5130, call)
extern void sub_5b6ea0();
uint64_t main_f_5b5130(void* a0) {
    uint64_t r0 = ((uint64_t (*)(uintptr_t))&sub_5b6ea0)(((uintptr_t)(*(uint64_t*)((char*)(a0) + 432))));
    asm volatile("");
    return r0;
}

// sub_5b5790  (orig 0x5b5790, ptr_add)
void* main_f_5b5790(void* a0) { return (char*)a0 + 8; }

// sub_5b6420  (orig 0x5b6420, ptr_add)
void* main_f_5b6420(void* a0) { return (char*)a0 + 40; }

// sub_5b6430  (orig 0x5b6430, ptr_add)
void* main_f_5b6430(void* a0) { return (char*)a0 + 72; }

// sub_5b6440  (orig 0x5b6440, ptr_add)
void* main_f_5b6440(void* a0) { return (char*)a0 + 104; }

// sub_5b6490  (orig 0x5b6490, getter)
uint64_t main_f_5b6490(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_5b6530  (orig 0x5b6530, getter)
uint64_t main_f_5b6530(void* a0) { return *(uint64_t*)((char*)(a0) + 280); }

// sub_5b6ea0  (orig 0x5b6ea0, ptr_add)
void* main_f_5b6ea0(void* a0) { return (char*)a0 + 304; }

// sub_5b7990  (orig 0x5b7990, ptr_add)
void* main_f_5b7990(void* a0) { return (char*)a0 + 56; }

// sub_5b8140  (orig 0x5b8140, getter)
uint64_t main_f_5b8140(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_5b8150  (orig 0x5b8150, getter)
uint64_t main_f_5b8150(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_5b8160  (orig 0x5b8160, getter)
uint64_t main_f_5b8160(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_5b90b0  (orig 0x5b90b0, setter)
void main_f_5b90b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_5b9120  (orig 0x5b9120, setter)
void main_f_5b9120(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_5b95e0  (orig 0x5b95e0, ret_only)
void main_f_5b95e0() {}

// sub_5b95f0  (orig 0x5b95f0, getter)
uint64_t main_f_5b95f0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_5b9660  (orig 0x5b9660, ret_only)
void main_f_5b9660() {}

// sub_5b9670  (orig 0x5b9670, getter)
uint64_t main_f_5b9670(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_5b9a80  (orig 0x5b9a80, compare)
bool main_f_5b9a80(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_5b9aa0  (orig 0x5b9aa0, getter)
uint64_t main_f_5b9aa0(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_5bbe30  (orig 0x5bbe30, ptr_add)
void* main_f_5bbe30(void* a0) { return (char*)a0 + 8; }

// sub_5bbe50  (orig 0x5bbe50, indirect-tailcall)
void main_f_5bbe50(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 24)))))(((uintptr_t)(a0)));
}

// sub_5bbe60  (orig 0x5bbe60, indirect-tailcall)
void main_f_5bbe60(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)));
}

// sub_5bc060  (orig 0x5bc060, getter)
uint64_t main_f_5bc060(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_5bd6b0  (orig 0x5bd6b0, ret_only)
void main_f_5bd6b0() {}

// sub_5bd6c0  (orig 0x5bd6c0, ret_only)
void main_f_5bd6c0() {}

// sub_5bd750  (orig 0x5bd750, ret_only)
void main_f_5bd750() {}

// sub_5bdff0  (orig 0x5bdff0, ret_only)
void main_f_5bdff0() {}

// sub_5be000  (orig 0x5be000, ret_only)
void main_f_5be000() {}

// sub_5be010  (orig 0x5be010, ret_only)
void main_f_5be010() {}

// sub_5be020  (orig 0x5be020, ret_only)
void main_f_5be020() {}

// sub_5be040  (orig 0x5be040, ret_only)
void main_f_5be040() {}

// sub_5be2c0  (orig 0x5be2c0, ret_only)
void main_f_5be2c0() {}

// sub_5be7b0  (orig 0x5be7b0, ptr_add)
void* main_f_5be7b0(void* a0) { return (char*)a0 + 8; }

// sub_5be7c0  (orig 0x5be7c0, ret_only)
void main_f_5be7c0() {}

// sub_5be7d0  (orig 0x5be7d0, ret_only)
void main_f_5be7d0() {}

// sub_5be7e0  (orig 0x5be7e0, ret_only)
void main_f_5be7e0() {}

// sub_5be7f0  (orig 0x5be7f0, ret_only)
void main_f_5be7f0() {}

// sub_5be800  (orig 0x5be800, mov_ret)
uint64_t main_f_5be800() { return 0; }

// sub_5be810  (orig 0x5be810, ret_only)
void main_f_5be810() {}

// sub_5be820  (orig 0x5be820, ret_only)
void main_f_5be820() {}

// sub_5be830  (orig 0x5be830, ret_only)
void main_f_5be830() {}

// sub_5bee90  (orig 0x5bee90, getter)
uint64_t main_f_5bee90(void* a0) { return *(uint64_t*)((char*)(a0) + 432); }

// sub_5beea0  (orig 0x5beea0, getter)
uint32_t main_f_5beea0(void* a0) { return *(uint32_t*)((char*)(a0) + 512); }

// sub_5c0a90  (orig 0x5c0a90, ptr_add)
void* main_f_5c0a90(void* a0) { return (char*)a0 + 8; }

// sub_5c0aa0  (orig 0x5c0aa0, ptr_add)
void* main_f_5c0aa0(void* a0) { return (char*)a0 + 80; }

// sub_5c4b60  (orig 0x5c4b60, setter)
void main_f_5c4b60(void* a0, float a1) { *(float*)((char*)(a0) + 536) = a1; }

// sub_5c4b70  (orig 0x5c4b70, straight)
void* main_f_5c4b70(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 544) = (uint8_t)k0;
    return a0;
}

// sub_5c51a0  (orig 0x5c51a0, setter)
void main_f_5c51a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_5c5480  (orig 0x5c5480, ptr_add)
void* main_f_5c5480(void* a0) { return (char*)a0 + 288; }

// sub_5c5490  (orig 0x5c5490, ptr_add)
void* main_f_5c5490(void* a0) { return (char*)a0 + 288; }

// sub_5c54a0  (orig 0x5c54a0, setter-chain)
void main_f_5c54a0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; *(uint32_t*)((char*)(a0) + 64) = 0; *(uint64_t*)((char*)(a0) + 96) = 0; *(uint32_t*)((char*)(a0) + 104) = 0; }

// sub_5c5e30  (orig 0x5c5e30, setter)
void main_f_5c5e30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_5c6110  (orig 0x5c6110, ret_only)
void main_f_5c6110() {}

// sub_5c6120  (orig 0x5c6120, straight)
void* main_f_5c6120(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1) + 168);
    *(uint32_t*)((char*)(p1) + 4) = *(uint32_t*)((char*)(p0) + 160);
    *(uint64_t*)((char*)(p1) + 24) = *(uint64_t*)((char*)(p0) + 152);
    *(uint64_t*)((char*)(p1) + 16) = *(uint64_t*)((char*)(p0) + 144);
    *(uint64_t*)((char*)(p1) + 40) = *(uint64_t*)((char*)(p0) + 136);
    *(uint64_t*)((char*)(p1) + 32) = *(uint64_t*)((char*)(p0) + 128);
    *(uint64_t*)((char*)(p1) + 56) = *(uint64_t*)((char*)(p0) + 120);
    *(uint64_t*)((char*)(p1) + 48) = *(uint64_t*)((char*)(p0) + 112);
    return a0;
}

// sub_5c6380  (orig 0x5c6380, straight)
void* main_f_5c6380(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint32_t*)((char*)(a1) + 168) = *(uint32_t*)((char*)(a0));
    *(uint32_t*)((char*)(p1) + 160) = *(uint32_t*)((char*)(p0) + 4);
    *(uint64_t*)((char*)(p1) + 152) = *(uint64_t*)((char*)(p0) + 24);
    *(uint64_t*)((char*)(p1) + 144) = *(uint64_t*)((char*)(p0) + 16);
    *(uint64_t*)((char*)(p1) + 136) = *(uint64_t*)((char*)(p0) + 40);
    *(uint64_t*)((char*)(p1) + 128) = *(uint64_t*)((char*)(p0) + 32);
    *(uint64_t*)((char*)(p1) + 120) = *(uint64_t*)((char*)(p0) + 56);
    *(uint64_t*)((char*)(p1) + 112) = *(uint64_t*)((char*)(p0) + 48);
    return a0;
}

// sub_5c6450  (orig 0x5c6450, getter)
uint64_t main_f_5c6450(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_5c6870  (orig 0x5c6870, setter-chain-zero)
void main_f_5c6870(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 8) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 48) = 0;
}

// sub_5c6930  (orig 0x5c6930, getter)
uint8_t main_f_5c6930(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_5cc690  (orig 0x5cc690, ret_only)
void main_f_5cc690() {}

// sub_5cf830  (orig 0x5cf830, ret_only)
void main_f_5cf830() {}

// sub_5cf840  (orig 0x5cf840, mov_ret)
uint32_t main_f_5cf840() { return 1; }

// sub_5cf860  (orig 0x5cf860, ret_only)
void main_f_5cf860() {}

// sub_5cf940  (orig 0x5cf940, setter)
void main_f_5cf940(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 144) = a1; }

// sub_5cfb80  (orig 0x5cfb80, ret_only)
void main_f_5cfb80() {}

// sub_5cfe80  (orig 0x5cfe80, ret_only)
void main_f_5cfe80() {}

// sub_5cfee0  (orig 0x5cfee0, ret_only)
void main_f_5cfee0() {}

// sub_5cfef0  (orig 0x5cfef0, ret_only)
void main_f_5cfef0() {}

// sub_5d1b50  (orig 0x5d1b50, straight)
void main_f_5d1b50(void* a0) {
    *(uint64_t*)((char*)(a0) + 304) = (*(uint64_t*)((char*)(a0) + 304)) | (16);
}

// sub_5d8510  (orig 0x5d8510, ret_only)
void main_f_5d8510() {}

// sub_5d8590  (orig 0x5d8590, ret_only)
void main_f_5d8590() {}

// sub_5d9e70  (orig 0x5d9e70, ret_only)
void main_f_5d9e70() {}

// sub_5d9e80  (orig 0x5d9e80, struct-copy)
void main_f_5d9e80(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_5d9ea0  (orig 0x5d9ea0, struct-copy)
void main_f_5d9ea0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_5db440  (orig 0x5db440, ret_only)
void main_f_5db440() {}

// sub_5db450  (orig 0x5db450, ret_only)
void main_f_5db450() {}

// sub_5db460  (orig 0x5db460, ret_only)
void main_f_5db460() {}

// sub_5dba50  (orig 0x5dba50, mov_ret)
uint32_t main_f_5dba50() { return 0; }

// sub_5dfce0  (orig 0x5dfce0, ret_only)
void main_f_5dfce0() {}

// sub_5dfe10  (orig 0x5dfe10, ret_only)
void main_f_5dfe10() {}

// sub_5dffe0  (orig 0x5dffe0, mov_ret)
uint32_t main_f_5dffe0() { return 2; }

// sub_5dfff0  (orig 0x5dfff0, indexed-getter)
uint64_t main_f_5dfff0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_5e0000  (orig 0x5e0000, indexed-getter)
uint64_t main_f_5e0000(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_5e0030  (orig 0x5e0030, straight)
void* main_f_5e0030(void* a0, int32_t a1) { return ((char *)(char*)(a0) + 8 + (uintptr_t)(((int32_t)a1)) * 16); }

// sub_5e0060  (orig 0x5e0060, straight)
void main_f_5e0060(void* a0, int32_t a1, uint64_t a2) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 16)));
    *(uint64_t*)((char*)(p0) + 16) = a2;
}

// sub_5e0070  (orig 0x5e0070, mov_ret)
uint32_t main_f_5e0070() { return 2; }

// sub_5e0610  (orig 0x5e0610, ret_only)
void main_f_5e0610() {}

// sub_5e0690  (orig 0x5e0690, ret_only)
void main_f_5e0690() {}

// sub_5e08f0  (orig 0x5e08f0, ret_only)
void main_f_5e08f0() {}

// sub_5e0970  (orig 0x5e0970, ret_only)
void main_f_5e0970() {}

// sub_5e1f50  (orig 0x5e1f50, ret_only)
void main_f_5e1f50() {}

// sub_5e1f60  (orig 0x5e1f60, copy2)
void main_f_5e1f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5e1f70  (orig 0x5e1f70, copy2)
void main_f_5e1f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5e3630  (orig 0x5e3630, ret_only)
void main_f_5e3630() {}

// sub_5e3690  (orig 0x5e3690, ret_only)
void main_f_5e3690() {}

// sub_5e36a0  (orig 0x5e36a0, ret_only)
void main_f_5e36a0() {}

// sub_5e65a0  (orig 0x5e65a0, getter)
uint32_t main_f_5e65a0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_5e6760  (orig 0x5e6760, copy2)
void main_f_5e6760(void* a0, void* a1) { *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1)); }

// sub_5eb520  (orig 0x5eb520, mov_ret)
uint32_t main_f_5eb520() { return 2; }

// sub_5eb530  (orig 0x5eb530, indexed-getter)
uint64_t main_f_5eb530(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_5eb540  (orig 0x5eb540, indexed-getter)
uint64_t main_f_5eb540(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_5eb690  (orig 0x5eb690, mov_ret)
uint32_t main_f_5eb690() { return 2; }

// sub_5ec250  (orig 0x5ec250, ret_only)
void main_f_5ec250() {}

// sub_5ec2d0  (orig 0x5ec2d0, ret_only)
void main_f_5ec2d0() {}

// sub_5eca10  (orig 0x5eca10, ret_only)
void main_f_5eca10() {}

// sub_5eca20  (orig 0x5eca20, copy2)
void main_f_5eca20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5eca30  (orig 0x5eca30, copy2)
void main_f_5eca30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5ece00  (orig 0x5ece00, ret_only)
void main_f_5ece00() {}

// sub_5ee0c0  (orig 0x5ee0c0, ret_only)
void main_f_5ee0c0() {}

// sub_5ee0d0  (orig 0x5ee0d0, copy2)
void main_f_5ee0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5ee0e0  (orig 0x5ee0e0, copy2)
void main_f_5ee0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5ee4c0  (orig 0x5ee4c0, ptr_add)
void* main_f_5ee4c0(void* a0) { return (char*)a0 + 360; }

// sub_5eee60  (orig 0x5eee60, indirect-tailcall)
void main_f_5eee60(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 328));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 96)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 328))));
}

// sub_5f1b10  (orig 0x5f1b10, ret_only)
void main_f_5f1b10() {}

// sub_5f1b20  (orig 0x5f1b20, copy2)
void main_f_5f1b20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5f1b30  (orig 0x5f1b30, copy2)
void main_f_5f1b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_5f2180  (orig 0x5f2180, straight)
uint64_t main_f_5f2180(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(((char *)(char*)(p0) + (uintptr_t)(*(int32_t*)((char*)(a0) + 216)) * 8)));
    return *(uint64_t*)((char*)(p1) + 2176);
}

// sub_5f2190  (orig 0x5f2190, straight)
uint64_t main_f_5f2190(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    void* p1 = (void*)((uintptr_t)(((char *)(char*)(p0) + (uintptr_t)(*(int32_t*)((char*)(a0) + 216)) * 8)));
    return *(uint64_t*)((char*)(p1) + 1808);
}

// sub_5f21a0  (orig 0x5f21a0, mov_ret)
uint32_t main_f_5f21a0() { return 1; }

// sub_5f21b0  (orig 0x5f21b0, mov_ret)
uint32_t main_f_5f21b0() { return 1; }

// sub_5f22d0  (orig 0x5f22d0, setter)
void main_f_5f22d0(void* a0) { *(uint8_t*)((char*)(a0) + 2208) = 0; }

// sub_5f5760  (orig 0x5f5760, getter)
uint64_t main_f_5f5760(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_5f5770  (orig 0x5f5770, straight-line)
uint64_t main_f_5f5770(void* a0) { return ((*(uint64_t*)((char*)(a0) + 88)) + (((*(uint64_t*)((char*)(a0) + 88)) << 3))) << (3); }

// sub_5f71b0  (orig 0x5f71b0, ret_only)
void main_f_5f71b0() {}

// sub_5f8310  (orig 0x5f8310, ret_only)
void main_f_5f8310() {}

// sub_5f8320  (orig 0x5f8320, ret_only)
void main_f_5f8320() {}

// sub_5f8ac0  (orig 0x5f8ac0, ret_only)
void main_f_5f8ac0() {}

// sub_5f8ad0  (orig 0x5f8ad0, struct-copy)
void main_f_5f8ad0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_5f8af0  (orig 0x5f8af0, struct-copy)
void main_f_5f8af0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_5f9d30  (orig 0x5f9d30, ret_only)
void main_f_5f9d30() {}

// sub_5f9d40  (orig 0x5f9d40, ret_only)
void main_f_5f9d40() {}

// sub_5fb390  (orig 0x5fb390, call)
extern void callee_17e9e10();
uint32_t main_f_5fb390(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 408));
    uint64_t f_5fb390__r0 = ((uint64_t (*)(uintptr_t))&callee_17e9e10)(((uintptr_t)(*(uint64_t*)((char*)(p0) + 168))));
    void* p1 = (void*)((uintptr_t)(f_5fb390__r0));
    uint32_t r0 = *(uint32_t*)((char*)(p1) + 28);
    asm volatile("");
    return r0;
}

// sub_5fb3b0  (orig 0x5fb3b0, straight-line)
uint64_t main_f_5fb3b0(void* a0, uint32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 408));
    return (*(uint64_t*)((char*)(p0) + 120)) + (((((int64_t)(((int32_t)(((uint32_t)a1)))))) << 5));
}

// sub_5fcff0  (orig 0x5fcff0, straight)
void* main_f_5fcff0(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 1;
    *(uint8_t*)((char*)(a0) + 371) = (uint8_t)(a1);
    *(uint8_t*)((char*)(p0) + 480) = (uint8_t)k1;
    return a0;
}

// sub_5fd510  (orig 0x5fd510, ret_only)
void main_f_5fd510() {}

// sub_5fd590  (orig 0x5fd590, ret_only)
void main_f_5fd590() {}

// sub_5fe3a0  (orig 0x5fe3a0, ret_only)
void main_f_5fe3a0() {}

// sub_5fe3b0  (orig 0x5fe3b0, ret_only)
void main_f_5fe3b0() {}

// sub_5fe3c0  (orig 0x5fe3c0, ret_only)
void main_f_5fe3c0() {}

// sub_5ff310  (orig 0x5ff310, getter)
uint32_t main_f_5ff310(void* a0) { return *(uint32_t*)((char*)(a0) + 1184); }

// sub_5ff320  (orig 0x5ff320, getter)
uint32_t main_f_5ff320(void* a0) { return *(uint32_t*)((char*)(a0) + 1188); }

// sub_5ff390  (orig 0x5ff390, ret_only)
void main_f_5ff390() {}

// sub_5ff3a0  (orig 0x5ff3a0, ret_only)
void main_f_5ff3a0() {}

// sub_5ff3e0  (orig 0x5ff3e0, indirect-tailcall)
void main_f_5ff3e0(void* a0, uint32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t, uint32_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 112)))))(((uintptr_t)(a0)), ((uintptr_t)((((uint32_t)a1)) & (1))), ((uint32_t)(0)));
}

// sub_600360  (orig 0x600360, ret_only)
void main_f_600360() {}

// sub_600370  (orig 0x600370, copy2)
void main_f_600370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_600380  (orig 0x600380, copy2)
void main_f_600380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6008d0  (orig 0x6008d0, ret_only)
void main_f_6008d0() {}

// sub_6008e0  (orig 0x6008e0, copy2)
void main_f_6008e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6008f0  (orig 0x6008f0, copy2)
void main_f_6008f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6014f0  (orig 0x6014f0, ret_only)
void main_f_6014f0() {}

// sub_601800  (orig 0x601800, straight)
void* main_f_601800(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 408));
    return (char*)(p0) + 120;
}

// sub_6036e0  (orig 0x6036e0, ret_only)
void main_f_6036e0() {}

// sub_604130  (orig 0x604130, ret_only)
void main_f_604130() {}

// sub_604140  (orig 0x604140, struct-copy)
void main_f_604140(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_604160  (orig 0x604160, struct-copy)
void main_f_604160(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_606f00  (orig 0x606f00, ret_only)
void main_f_606f00() {}

// sub_606f10  (orig 0x606f10, copy2)
void main_f_606f10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_606f20  (orig 0x606f20, copy2)
void main_f_606f20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_609a40  (orig 0x609a40, ret_only)
void main_f_609a40() {}

// sub_60e850  (orig 0x60e850, ret_only)
void main_f_60e850() {}

// sub_60e860  (orig 0x60e860, copy2)
void main_f_60e860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_60e870  (orig 0x60e870, copy2)
void main_f_60e870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_612340  (orig 0x612340, ret_only)
void main_f_612340() {}

// sub_615d60  (orig 0x615d60, straight)
uint32_t main_f_615d60(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 416));
    return *(uint32_t*)(((char *)p0 + (uintptr_t)((uintptr_t)a1 * 4)));
}

// sub_615d70  (orig 0x615d70, straight-line)
void main_f_615d70(void* a0, int32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 416));
    *(uint32_t*)(((char*)(p0) + (uintptr_t)a1 * 4)) = (uint32_t)(a2);
}

// sub_619490  (orig 0x619490, ret_only)
void main_f_619490() {}

// sub_619980  (orig 0x619980, ret_only)
void main_f_619980() {}

// sub_619990  (orig 0x619990, copy2)
void main_f_619990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6199a0  (orig 0x6199a0, copy2)
void main_f_6199a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_619a80  (orig 0x619a80, mov_ret)
uint32_t main_f_619a80() { return 1; }

// sub_619b70  (orig 0x619b70, indirect-tailcall)
void main_f_619b70(void* a0, void* a1) {
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(a0))))))(((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(a1)));
}

// sub_619b80  (orig 0x619b80, ret_only)
void main_f_619b80() {}

// sub_619b90  (orig 0x619b90, copy2)
void main_f_619b90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_619ba0  (orig 0x619ba0, copy2)
void main_f_619ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_61b1f0  (orig 0x61b1f0, mov_ret)
uint32_t main_f_61b1f0() { return 1; }

// sub_61d200  (orig 0x61d200, mov_ret)
uint32_t main_f_61d200() { return 5; }

// sub_61d680  (orig 0x61d680, ret_only)
void main_f_61d680() {}

// sub_61d690  (orig 0x61d690, copy2)
void main_f_61d690(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_61d6a0  (orig 0x61d6a0, copy2)
void main_f_61d6a0(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_61e860  (orig 0x61e860, ret_only)
void main_f_61e860() {}

// sub_61e870  (orig 0x61e870, copy2)
void main_f_61e870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_61e880  (orig 0x61e880, copy2)
void main_f_61e880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_620110  (orig 0x620110, ret_only)
void main_f_620110() {}

// sub_620820  (orig 0x620820, setter)
void main_f_620820(void* a0, float a1) { *(float*)((char*)(a0)) = a1; }

// sub_620d60  (orig 0x620d60, straight-line)
uint64_t main_f_620d60(void* a0) { return ((*(uint64_t*)((char*)(a0) + 16)) - (*(uint64_t*)((char*)(a0) + 8))) >> (3); }

// sub_621410  (orig 0x621410, straight-line)
uint64_t main_f_621410(void* a0) { return ((*(uint64_t*)((char*)(a0) + 8)) - (*(uint64_t*)((char*)(a0)))) >> (3); }

// sub_622350  (orig 0x622350, mov_ret)
uint32_t main_f_622350() { return 2; }

// sub_623b80  (orig 0x623b80, ret_only)
void main_f_623b80() {}

// sub_623b90  (orig 0x623b90, copy2)
void main_f_623b90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_623ba0  (orig 0x623ba0, copy2)
void main_f_623ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6322c0  (orig 0x6322c0, straight)
void* main_f_6322c0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 280) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 272) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_6322e0  (orig 0x6322e0, straight)
void* main_f_6322e0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 248) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 240) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_632300  (orig 0x632300, straight)
void* main_f_632300(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 216) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 208) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_632620  (orig 0x632620, getter-chain)
float main_f_632620(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 424);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 200);
}

// sub_632630  (orig 0x632630, getter-chain)
float main_f_632630(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 424);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 204);
}

// sub_632640  (orig 0x632640, getter-chain)
float main_f_632640(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 424);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 208);
}

// sub_632650  (orig 0x632650, straight)
void* main_f_632650(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    return (char*)(p0) + 168;
}

// sub_6327c0  (orig 0x6327c0, straight)
uint8_t main_f_6327c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    return ((*(uint8_t*)((char*)(p0) + 312)) >> (2)) & (1);
}

// sub_6327d0  (orig 0x6327d0, straight)
void* main_f_6327d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    return (char*)(p0) + 208;
}

// sub_6327e0  (orig 0x6327e0, straight)
uint8_t main_f_6327e0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    return ((*(uint8_t*)((char*)(p0) + 312)) >> (3)) & (1);
}

// sub_6327f0  (orig 0x6327f0, getter-chain)
float main_f_6327f0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 424);
    return *(float*)((char*)(t0) + 324);
}

// sub_632800  (orig 0x632800, straight)
void* main_f_632800(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 232) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 224) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_632870  (orig 0x632870, straight)
void* main_f_632870(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    return (char*)(p0) + 224;
}

// sub_632890  (orig 0x632890, getter-chain)
float main_f_632890(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 424);
    return *(float*)((char*)(t0) + 320);
}

// sub_6328a0  (orig 0x6328a0, straight)
void* main_f_6328a0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 200) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 192) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_6328c0  (orig 0x6328c0, straight)
void* main_f_6328c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    return (char*)(p0) + 192;
}

// sub_6328d0  (orig 0x6328d0, straight)
void* main_f_6328d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    return (char*)(p0) + 272;
}

// sub_6328e0  (orig 0x6328e0, straight)
void* main_f_6328e0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    return (char*)(p0) + 240;
}

// sub_632910  (orig 0x632910, straight)
void* main_f_632910(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 296) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 288) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_632930  (orig 0x632930, straight)
void* main_f_632930(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    return (char*)(p0) + 288;
}

// sub_632940  (orig 0x632940, straight)
void* main_f_632940(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 264) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 256) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_632960  (orig 0x632960, straight)
void* main_f_632960(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 424));
    return (char*)(p0) + 256;
}

// sub_632fb0  (orig 0x632fb0, straight)
void* main_f_632fb0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    return (char*)(p0) + 272;
}

// sub_632fc0  (orig 0x632fc0, straight)
void* main_f_632fc0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    return (char*)(p0) + 240;
}

// sub_632fe0  (orig 0x632fe0, getter-chain)
float main_f_632fe0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 32);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 200);
}

// sub_633000  (orig 0x633000, getter-chain)
float main_f_633000(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 32);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 204);
}

// sub_633020  (orig 0x633020, getter-chain)
float main_f_633020(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 32);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 208);
}

// sub_633040  (orig 0x633040, straight)
void* main_f_633040(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    return (char*)(p0) + 168;
}

// sub_633070  (orig 0x633070, straight)
void* main_f_633070(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 296) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 288) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633090  (orig 0x633090, straight)
void* main_f_633090(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    return (char*)(p0) + 288;
}

// sub_6330a0  (orig 0x6330a0, straight)
void* main_f_6330a0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 264) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 256) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_6330c0  (orig 0x6330c0, straight)
void* main_f_6330c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    return (char*)(p0) + 256;
}

// sub_6330d0  (orig 0x6330d0, straight)
void* main_f_6330d0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 280) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 272) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_6330f0  (orig 0x6330f0, straight)
void* main_f_6330f0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 248) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 240) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633300  (orig 0x633300, straight)
void* main_f_633300(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return (char*)(p0) + 272;
}

// sub_633310  (orig 0x633310, straight)
void* main_f_633310(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return (char*)(p0) + 240;
}

// sub_633330  (orig 0x633330, getter-chain)
float main_f_633330(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 24);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 200);
}

// sub_633350  (orig 0x633350, getter-chain)
float main_f_633350(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 24);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 204);
}

// sub_633370  (orig 0x633370, getter-chain)
float main_f_633370(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 24);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 208);
}

// sub_633390  (orig 0x633390, straight)
void* main_f_633390(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return (char*)(p0) + 168;
}

// sub_6333c0  (orig 0x6333c0, straight)
void* main_f_6333c0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 296) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 288) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_6333e0  (orig 0x6333e0, straight)
void* main_f_6333e0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return (char*)(p0) + 288;
}

// sub_6333f0  (orig 0x6333f0, straight)
void* main_f_6333f0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 264) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 256) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633410  (orig 0x633410, straight)
void* main_f_633410(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return (char*)(p0) + 256;
}

// sub_633420  (orig 0x633420, straight)
void* main_f_633420(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 248) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 240) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_6335a0  (orig 0x6335a0, straight)
uint8_t main_f_6335a0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return ((*(uint8_t*)((char*)(p0) + 312)) >> (2)) & (1);
}

// sub_6335b0  (orig 0x6335b0, straight)
void* main_f_6335b0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 216) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 208) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_6335d0  (orig 0x6335d0, straight)
void* main_f_6335d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return (char*)(p0) + 208;
}

// sub_633610  (orig 0x633610, straight)
uint8_t main_f_633610(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return ((*(uint8_t*)((char*)(p0) + 312)) >> (3)) & (1);
}

// sub_633630  (orig 0x633630, getter-chain)
float main_f_633630(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 24);
    return *(float*)((char*)(t0) + 324);
}

// sub_633640  (orig 0x633640, straight)
void* main_f_633640(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 200) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 192) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633660  (orig 0x633660, straight)
void* main_f_633660(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return (char*)(p0) + 192;
}

// sub_633860  (orig 0x633860, straight)
void* main_f_633860(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 272;
}

// sub_633870  (orig 0x633870, straight)
void* main_f_633870(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 240;
}

// sub_633890  (orig 0x633890, getter-chain)
float main_f_633890(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 16);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 200);
}

// sub_6338b0  (orig 0x6338b0, getter-chain)
float main_f_6338b0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 16);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 204);
}

// sub_6338d0  (orig 0x6338d0, getter-chain)
float main_f_6338d0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 16);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 208);
}

// sub_6338f0  (orig 0x6338f0, straight)
void* main_f_6338f0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 168;
}

// sub_633920  (orig 0x633920, straight)
void* main_f_633920(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 296) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 288) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633940  (orig 0x633940, straight)
void* main_f_633940(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 288;
}

// sub_633950  (orig 0x633950, straight)
void* main_f_633950(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 264) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 256) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633970  (orig 0x633970, straight)
void* main_f_633970(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 256;
}

// sub_633980  (orig 0x633980, straight)
void* main_f_633980(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 280) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 272) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_6339a0  (orig 0x6339a0, straight)
void* main_f_6339a0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 232) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 224) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633a20  (orig 0x633a20, getter-chain)
float main_f_633a20(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 16);
    return *(float*)((char*)(t0) + 320);
}

// sub_633c20  (orig 0x633c20, straight)
void* main_f_633c20(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return (char*)(p0) + 272;
}

// sub_633c30  (orig 0x633c30, straight)
void* main_f_633c30(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return (char*)(p0) + 240;
}

// sub_633c50  (orig 0x633c50, getter-chain)
float main_f_633c50(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 200);
}

// sub_633c70  (orig 0x633c70, getter-chain)
float main_f_633c70(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 204);
}

// sub_633c90  (orig 0x633c90, getter-chain)
float main_f_633c90(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(float*)((char*)(t1) + 208);
}

// sub_633cb0  (orig 0x633cb0, straight)
void* main_f_633cb0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return (char*)(p0) + 168;
}

// sub_633ce0  (orig 0x633ce0, straight)
void* main_f_633ce0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 296) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 288) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633d00  (orig 0x633d00, straight)
void* main_f_633d00(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return (char*)(p0) + 288;
}

// sub_633d10  (orig 0x633d10, straight)
void* main_f_633d10(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 264) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 256) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633d30  (orig 0x633d30, straight)
void* main_f_633d30(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return (char*)(p0) + 256;
}

// sub_633d40  (orig 0x633d40, straight)
void* main_f_633d40(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 248) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 240) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633ec0  (orig 0x633ec0, straight)
uint8_t main_f_633ec0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return ((*(uint8_t*)((char*)(p0) + 312)) >> (2)) & (1);
}

// sub_633ed0  (orig 0x633ed0, straight)
void* main_f_633ed0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 216) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 208) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633ef0  (orig 0x633ef0, straight)
void* main_f_633ef0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return (char*)(p0) + 208;
}

// sub_633f30  (orig 0x633f30, straight)
uint8_t main_f_633f30(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return ((*(uint8_t*)((char*)(p0) + 312)) >> (3)) & (1);
}

// sub_633f50  (orig 0x633f50, getter-chain)
float main_f_633f50(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    return *(float*)((char*)(t0) + 324);
}

// sub_633f60  (orig 0x633f60, straight)
void* main_f_633f60(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    void* p1 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(p0) + 232) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p0) + 224) = *(uint64_t*)((char*)(p1));
    return a0;
}

// sub_633fd0  (orig 0x633fd0, straight)
void* main_f_633fd0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return (char*)(p0) + 224;
}

// sub_635310  (orig 0x635310, straight)
uint32_t main_f_635310(void* a0) { return (*(uint32_t*)((char*)(a0) + 312)) & (1); }

// sub_635320  (orig 0x635320, straight)
uint8_t main_f_635320(void* a0) { return ((*(uint8_t*)((char*)(a0) + 312)) >> (3)) & (1); }

// sub_635330  (orig 0x635330, straight)
uint8_t main_f_635330(void* a0) { return ((*(uint8_t*)((char*)(a0) + 312)) >> (2)) & (1); }

// sub_635640  (orig 0x635640, getter-chain)
float main_f_635640(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 160);
    return *(float*)((char*)(t0) + 200);
}

// sub_635660  (orig 0x635660, getter-chain)
float main_f_635660(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 160);
    return *(float*)((char*)(t0) + 204);
}

// sub_635680  (orig 0x635680, getter-chain)
float main_f_635680(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 160);
    return *(float*)((char*)(t0) + 208);
}

// sub_6356a0  (orig 0x6356a0, ptr_add)
void* main_f_6356a0(void* a0) { return (char*)a0 + 168; }

// sub_635810  (orig 0x635810, straight)
void* main_f_635810(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 216) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 208) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_635830  (orig 0x635830, ptr_add)
void* main_f_635830(void* a0) { return (char*)a0 + 208; }

// sub_635860  (orig 0x635860, setter)
void main_f_635860(void* a0, float a1) { *(float*)((char*)(a0) + 324) = a1; }

// sub_635870  (orig 0x635870, getter)
float main_f_635870(void* a0) { return *(float*)((char*)(a0) + 324); }

// sub_635880  (orig 0x635880, straight)
void* main_f_635880(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 232) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 224) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_6358f0  (orig 0x6358f0, ptr_add)
void* main_f_6358f0(void* a0) { return (char*)a0 + 224; }

// sub_635900  (orig 0x635900, setter)
void main_f_635900(void* a0, float a1) { *(float*)((char*)(a0) + 320) = a1; }

// sub_635910  (orig 0x635910, getter)
float main_f_635910(void* a0) { return *(float*)((char*)(a0) + 320); }

// sub_635920  (orig 0x635920, straight)
void* main_f_635920(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 200) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 192) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_635940  (orig 0x635940, ptr_add)
void* main_f_635940(void* a0) { return (char*)a0 + 192; }

// sub_635950  (orig 0x635950, straight)
void* main_f_635950(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 280) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 272) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_635970  (orig 0x635970, ptr_add)
void* main_f_635970(void* a0) { return (char*)a0 + 272; }

// sub_635980  (orig 0x635980, straight)
void* main_f_635980(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 248) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 240) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_6359a0  (orig 0x6359a0, ptr_add)
void* main_f_6359a0(void* a0) { return (char*)a0 + 240; }

// sub_635a70  (orig 0x635a70, straight)
void* main_f_635a70(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 296) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 288) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_635a90  (orig 0x635a90, ptr_add)
void* main_f_635a90(void* a0) { return (char*)a0 + 288; }

// sub_635aa0  (orig 0x635aa0, straight)
void* main_f_635aa0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 264) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 256) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_635ac0  (orig 0x635ac0, ptr_add)
void* main_f_635ac0(void* a0) { return (char*)a0 + 256; }

// sub_6362d0  (orig 0x6362d0, ptr_add)
void* main_f_6362d0(void* a0) { return (char*)a0 + 152; }

// sub_6362e0  (orig 0x6362e0, ptr_add)
void* main_f_6362e0(void* a0) { return (char*)a0 + 120; }

// sub_636300  (orig 0x636300, getter-chain)
float main_f_636300(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 40);
    return *(float*)((char*)(t0) + 200);
}

// sub_636320  (orig 0x636320, getter-chain)
float main_f_636320(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 40);
    return *(float*)((char*)(t0) + 204);
}

// sub_636340  (orig 0x636340, getter-chain)
float main_f_636340(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 40);
    return *(float*)((char*)(t0) + 208);
}

// sub_636360  (orig 0x636360, ptr_add)
void* main_f_636360(void* a0) { return (char*)a0 + 48; }

// sub_636430  (orig 0x636430, straight)
void* main_f_636430(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 176) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 168) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_636450  (orig 0x636450, ptr_add)
void* main_f_636450(void* a0) { return (char*)a0 + 168; }

// sub_636460  (orig 0x636460, straight)
void* main_f_636460(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 144) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 136) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_636480  (orig 0x636480, ptr_add)
void* main_f_636480(void* a0) { return (char*)a0 + 136; }

// sub_636490  (orig 0x636490, straight)
void* main_f_636490(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 160) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 152) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_6364b0  (orig 0x6364b0, straight)
void* main_f_6364b0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 128) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 120) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_636760  (orig 0x636760, ptr_add)
void* main_f_636760(void* a0) { return (char*)a0 + 144; }

// sub_636770  (orig 0x636770, ptr_add)
void* main_f_636770(void* a0) { return (char*)a0 + 112; }

// sub_636790  (orig 0x636790, getter-chain)
float main_f_636790(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 32);
    return *(float*)((char*)(t0) + 200);
}

// sub_6367b0  (orig 0x6367b0, getter-chain)
float main_f_6367b0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 32);
    return *(float*)((char*)(t0) + 204);
}

// sub_6367d0  (orig 0x6367d0, getter-chain)
float main_f_6367d0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 32);
    return *(float*)((char*)(t0) + 208);
}

// sub_6367f0  (orig 0x6367f0, ptr_add)
void* main_f_6367f0(void* a0) { return (char*)a0 + 40; }

// sub_6368c0  (orig 0x6368c0, straight)
void* main_f_6368c0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 168) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 160) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_6368e0  (orig 0x6368e0, ptr_add)
void* main_f_6368e0(void* a0) { return (char*)a0 + 160; }

// sub_6368f0  (orig 0x6368f0, straight)
void* main_f_6368f0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 136) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 128) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_636910  (orig 0x636910, ptr_add)
void* main_f_636910(void* a0) { return (char*)a0 + 128; }

// sub_636920  (orig 0x636920, straight)
void* main_f_636920(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 112) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_636aa0  (orig 0x636aa0, straight)
uint8_t main_f_636aa0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 184)) >> (2)) & (1); }

// sub_636ab0  (orig 0x636ab0, straight)
void* main_f_636ab0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 88) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 80) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_636ad0  (orig 0x636ad0, ptr_add)
void* main_f_636ad0(void* a0) { return (char*)a0 + 80; }

// sub_636b00  (orig 0x636b00, straight)
uint8_t main_f_636b00(void* a0) { return ((*(uint8_t*)((char*)(a0) + 184)) >> (3)) & (1); }

// sub_636b10  (orig 0x636b10, setter)
void main_f_636b10(void* a0, float a1) { *(float*)((char*)(a0) + 196) = a1; }

// sub_636b20  (orig 0x636b20, getter)
float main_f_636b20(void* a0) { return *(float*)((char*)(a0) + 196); }

// sub_636b30  (orig 0x636b30, straight)
void* main_f_636b30(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 72) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 64) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_636b50  (orig 0x636b50, ptr_add)
void* main_f_636b50(void* a0) { return (char*)a0 + 64; }

// sub_636df0  (orig 0x636df0, ptr_add)
void* main_f_636df0(void* a0) { return (char*)a0 + 136; }

// sub_636e00  (orig 0x636e00, ptr_add)
void* main_f_636e00(void* a0) { return (char*)a0 + 104; }

// sub_636e20  (orig 0x636e20, getter-chain)
float main_f_636e20(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 24);
    return *(float*)((char*)(t0) + 200);
}

// sub_636e40  (orig 0x636e40, getter-chain)
float main_f_636e40(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 24);
    return *(float*)((char*)(t0) + 204);
}

// sub_636e60  (orig 0x636e60, getter-chain)
float main_f_636e60(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 24);
    return *(float*)((char*)(t0) + 208);
}

// sub_636e80  (orig 0x636e80, ptr_add)
void* main_f_636e80(void* a0) { return (char*)a0 + 32; }

// sub_636f50  (orig 0x636f50, straight)
void* main_f_636f50(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 160) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 152) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_636f70  (orig 0x636f70, ptr_add)
void* main_f_636f70(void* a0) { return (char*)a0 + 152; }

// sub_636f80  (orig 0x636f80, straight)
void* main_f_636f80(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 128) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 120) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_636fa0  (orig 0x636fa0, ptr_add)
void* main_f_636fa0(void* a0) { return (char*)a0 + 120; }

// sub_636fb0  (orig 0x636fb0, straight)
void* main_f_636fb0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 144) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 136) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_636fd0  (orig 0x636fd0, straight)
void* main_f_636fd0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 96) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 88) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637040  (orig 0x637040, setter)
void main_f_637040(void* a0, float a1) { *(float*)((char*)(a0) + 184) = a1; }

// sub_637050  (orig 0x637050, getter)
float main_f_637050(void* a0) { return *(float*)((char*)(a0) + 184); }

// sub_6372f0  (orig 0x6372f0, ptr_add)
void* main_f_6372f0(void* a0) { return (char*)a0 + 128; }

// sub_637300  (orig 0x637300, ptr_add)
void* main_f_637300(void* a0) { return (char*)a0 + 96; }

// sub_637320  (orig 0x637320, getter-chain)
float main_f_637320(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 16);
    return *(float*)((char*)(t0) + 200);
}

// sub_637340  (orig 0x637340, getter-chain)
float main_f_637340(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 16);
    return *(float*)((char*)(t0) + 204);
}

// sub_637360  (orig 0x637360, getter-chain)
float main_f_637360(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 16);
    return *(float*)((char*)(t0) + 208);
}

// sub_637380  (orig 0x637380, ptr_add)
void* main_f_637380(void* a0) { return (char*)a0 + 24; }

// sub_637450  (orig 0x637450, straight)
void* main_f_637450(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 152) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 144) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637470  (orig 0x637470, ptr_add)
void* main_f_637470(void* a0) { return (char*)a0 + 144; }

// sub_637480  (orig 0x637480, straight)
void* main_f_637480(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 112) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_6374a0  (orig 0x6374a0, ptr_add)
void* main_f_6374a0(void* a0) { return (char*)a0 + 112; }

// sub_6374b0  (orig 0x6374b0, straight)
void* main_f_6374b0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 104) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 96) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637630  (orig 0x637630, straight)
uint8_t main_f_637630(void* a0) { return ((*(uint8_t*)((char*)(a0) + 168)) >> (2)) & (1); }

// sub_637640  (orig 0x637640, straight)
void* main_f_637640(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 72) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 64) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637660  (orig 0x637660, ptr_add)
void* main_f_637660(void* a0) { return (char*)a0 + 64; }

// sub_637690  (orig 0x637690, straight)
uint8_t main_f_637690(void* a0) { return ((*(uint8_t*)((char*)(a0) + 168)) >> (3)) & (1); }

// sub_6376a0  (orig 0x6376a0, setter)
void main_f_6376a0(void* a0, float a1) { *(float*)((char*)(a0) + 180) = a1; }

// sub_6376b0  (orig 0x6376b0, getter)
float main_f_6376b0(void* a0) { return *(float*)((char*)(a0) + 180); }

// sub_6376c0  (orig 0x6376c0, straight)
void* main_f_6376c0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 88) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 80) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637730  (orig 0x637730, ptr_add)
void* main_f_637730(void* a0) { return (char*)a0 + 80; }

// sub_6379d0  (orig 0x6379d0, ptr_add)
void* main_f_6379d0(void* a0) { return (char*)a0 + 120; }

// sub_6379e0  (orig 0x6379e0, ptr_add)
void* main_f_6379e0(void* a0) { return (char*)a0 + 88; }

// sub_637a00  (orig 0x637a00, getter-chain)
float main_f_637a00(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    return *(float*)((char*)(t0) + 200);
}

// sub_637a20  (orig 0x637a20, getter-chain)
float main_f_637a20(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    return *(float*)((char*)(t0) + 204);
}

// sub_637a40  (orig 0x637a40, getter-chain)
float main_f_637a40(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    return *(float*)((char*)(t0) + 208);
}

// sub_637a60  (orig 0x637a60, ptr_add)
void* main_f_637a60(void* a0) { return (char*)a0 + 16; }

// sub_637b30  (orig 0x637b30, straight)
void* main_f_637b30(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 144) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 136) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637b50  (orig 0x637b50, ptr_add)
void* main_f_637b50(void* a0) { return (char*)a0 + 136; }

// sub_637b60  (orig 0x637b60, straight)
void* main_f_637b60(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 104) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637b80  (orig 0x637b80, ptr_add)
void* main_f_637b80(void* a0) { return (char*)a0 + 104; }

// sub_637b90  (orig 0x637b90, straight)
void* main_f_637b90(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 128) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 120) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637bb0  (orig 0x637bb0, straight)
void* main_f_637bb0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 96) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 88) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637bd0  (orig 0x637bd0, straight)
uint8_t main_f_637bd0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 160)) >> (2)) & (1); }

// sub_637be0  (orig 0x637be0, straight)
void* main_f_637be0(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 64) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 56) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637c00  (orig 0x637c00, ptr_add)
void* main_f_637c00(void* a0) { return (char*)a0 + 56; }

// sub_637c10  (orig 0x637c10, straight)
uint8_t main_f_637c10(void* a0) { return ((*(uint8_t*)((char*)(a0) + 160)) >> (3)) & (1); }

// sub_637c20  (orig 0x637c20, setter)
void main_f_637c20(void* a0, float a1) { *(float*)((char*)(a0) + 172) = a1; }

// sub_637c30  (orig 0x637c30, getter)
float main_f_637c30(void* a0) { return *(float*)((char*)(a0) + 172); }

// sub_637c40  (orig 0x637c40, straight)
void* main_f_637c40(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 48) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 40) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637c60  (orig 0x637c60, ptr_add)
void* main_f_637c60(void* a0) { return (char*)a0 + 40; }

// sub_637c70  (orig 0x637c70, straight)
void* main_f_637c70(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 80) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 72) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_637ce0  (orig 0x637ce0, ptr_add)
void* main_f_637ce0(void* a0) { return (char*)a0 + 72; }

// sub_637cf0  (orig 0x637cf0, straight)
uint32_t main_f_637cf0(void* a0) { return (*(uint32_t*)((char*)(a0) + 160)) & (1); }

// sub_63bea0  (orig 0x63bea0, straight)
void* main_f_63bea0(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint16_t*)((char*)(a0) + 1588) = *(uint16_t*)((char*)(a1));
    *(uint16_t*)((char*)(p0) + 1590) = *(uint16_t*)((char*)(a2));
    return a0;
}

// sub_63bec0  (orig 0x63bec0, copy2)
void main_f_63bec0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1728) = *(uint32_t*)((char*)(a1)); }

// sub_63bed0  (orig 0x63bed0, copy2)
void main_f_63bed0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1732) = *(uint32_t*)((char*)(a1)); }

// sub_63bee0  (orig 0x63bee0, copy2)
void main_f_63bee0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1576) = *(uint32_t*)((char*)(a1)); }

// sub_63bef0  (orig 0x63bef0, copy2)
void main_f_63bef0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1580) = *(uint32_t*)((char*)(a1)); }

// sub_63bf00  (orig 0x63bf00, copy2)
void main_f_63bf00(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1584) = *(uint32_t*)((char*)(a1)); }

// sub_63bf10  (orig 0x63bf10, copy2)
void main_f_63bf10(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1736) = *(uint32_t*)((char*)(a1)); }

// sub_63e2f0  (orig 0x63e2f0, ret_only)
void main_f_63e2f0() {}

// sub_63e300  (orig 0x63e300, copy2)
void main_f_63e300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_63e310  (orig 0x63e310, copy2)
void main_f_63e310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6403d0  (orig 0x6403d0, ret_only)
void main_f_6403d0() {}

// sub_6403e0  (orig 0x6403e0, ret_only)
void main_f_6403e0() {}

// sub_6403f0  (orig 0x6403f0, ret_only)
void main_f_6403f0() {}

// sub_640400  (orig 0x640400, ret_only)
void main_f_640400() {}

// sub_640420  (orig 0x640420, ret_only)
void main_f_640420() {}

// sub_6431d0  (orig 0x6431d0, indirect-tailcall)
void main_f_6431d0(void* a0, void* a1) {
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(a0))))))(((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(a1)));
}

// sub_6431e0  (orig 0x6431e0, ret_only)
void main_f_6431e0() {}

// sub_6431f0  (orig 0x6431f0, copy2)
void main_f_6431f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_643200  (orig 0x643200, copy2)
void main_f_643200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// Set_State_NightTime  (orig 0x645e20, straight)
void main_f_645e20(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 680) = *(uint64_t*)((char*)(a1) + 24);
    *(uint64_t*)((char*)(a0) + 664) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 712) = *(uint64_t*)((char*)(a1) + 56);
    *(uint64_t*)((char*)(a0) + 696) = *(uint64_t*)((char*)(a1) + 40);
    *(uint64_t*)((char*)(a0) + 672) = *(uint64_t*)((char*)(a1) + 16);
    *(uint64_t*)((char*)(a0) + 656) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 704) = *(uint64_t*)((char*)(a1) + 48);
    *(uint64_t*)((char*)(a0) + 688) = *(uint64_t*)((char*)(a1) + 32);
}

// sub_64d770  (orig 0x64d770, setter)
void main_f_64d770(void* a0, float a1) { *(float*)((char*)(a0) + 624) = a1; }

// sub_64ece0  (orig 0x64ece0, straight-line)
uint8_t main_f_64ece0(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 1000)) + ((((uint64_t)a1)) * (464))));
    return *(uint8_t*)((char*)(p0) + 448);
}

// sub_658df0  (orig 0x658df0, getter)
uint32_t main_f_658df0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_65b680  (orig 0x65b680, mov_ret)
uint32_t main_f_65b680() { return -1; }

// sub_65c590  (orig 0x65c590, call)
extern void sub_154bf60();
uint32_t main_f_65c590(uint64_t a0, uint64_t unused1, uint64_t unused2, uint64_t a3) {
    uint64_t f_65c590__r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&sub_154bf60)(((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(((uint64_t)a3))));
    uint32_t r0 = 1;
    asm volatile("");
    return r0;
}

// sub_65cd10  (orig 0x65cd10, straight)
void* main_f_65cd10(void* a0, void* a1, void* a2, void* a3) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    void* p2 = (void*)((uintptr_t)(a2));
    void* p3 = (void*)((uintptr_t)(a3));
    *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1)) = *(uint64_t*)((char*)(p0));
    *(uint64_t*)((char*)(p1) + 24) = *(uint64_t*)((char*)(a2) + 8);
    *(uint64_t*)((char*)(p1) + 16) = *(uint64_t*)((char*)(p2));
    *(uint64_t*)((char*)(p1) + 40) = *(uint64_t*)((char*)(a3) + 8);
    *(uint64_t*)((char*)(p1) + 32) = *(uint64_t*)((char*)(p3));
    return a0;
}

// sub_65cd50  (orig 0x65cd50, straight)
void* main_f_65cd50(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1)) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_65cd70  (orig 0x65cd70, straight)
void* main_f_65cd70(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 24) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 16) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_65cd90  (orig 0x65cd90, straight)
void* main_f_65cd90(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 40) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 32) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_65dbb0  (orig 0x65dbb0, mov_ret)
uint32_t main_f_65dbb0() { return -1; }

// sub_65dbc0  (orig 0x65dbc0, ret_only)
void main_f_65dbc0() {}

// sub_65dbd0  (orig 0x65dbd0, mov_ret)
uint64_t main_f_65dbd0() { return 0; }

// sub_65dc70  (orig 0x65dc70, straight)
uint64_t main_f_65dc70(void* a0) { return ((((uint64_t)a0)) + (*(uint8_t*)((char*)(a0) + 13))) + (16); }

// sub_65dc80  (orig 0x65dc80, straight)
uint64_t main_f_65dc80(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    return (*(uint64_t*)((char*)(a0))) - (*(uint8_t*)((char*)(p0) + 13));
}

// sub_65dc90  (orig 0x65dc90, straight)
void* main_f_65dc90(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return (((*(uint64_t*)((char*)(a0)) > 16)) ? ((char*)(p0) + 24) : (void *)(uintptr_t)(40));
}

// sub_65dd50  (orig 0x65dd50, setter)
void main_f_65dd50(void* a0) { *(uint8_t*)((char*)(a0) + 13) = 0; }

// sub_65e010  (orig 0x65e010, straight)
uint8_t main_f_65e010(void* a0) { return ((*(uint8_t*)((char*)(a0) + 12)) >> (3)) & (1); }

// sub_65e0c0  (orig 0x65e0c0, getter)
uint32_t main_f_65e0c0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_65ea00  (orig 0x65ea00, getter)
uint64_t main_f_65ea00(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_65edc0  (orig 0x65edc0, setter-chain)
void main_f_65edc0(void* a0) { *(uint64_t*)((char*)(a0) + 56) = 0; *(uint64_t*)((char*)(a0) + 64) = 0; *(uint64_t*)((char*)(a0) + 48) = 0; }

// sub_65edd0  (orig 0x65edd0, getter)
uint64_t main_f_65edd0(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_65ede0  (orig 0x65ede0, getter)
uint64_t main_f_65ede0(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_65edf0  (orig 0x65edf0, straight-line)
uint64_t main_f_65edf0(void* a0) { return ((*(uint64_t*)((char*)(a0) + 56)) - (*(uint64_t*)((char*)(a0) + 64))) - (*(uint64_t*)((char*)(a0) + 88)); }

// sub_65ee30  (orig 0x65ee30, getter)
uint64_t main_f_65ee30(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_65f1a0  (orig 0x65f1a0, getter)
uint64_t main_f_65f1a0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_65f1b0  (orig 0x65f1b0, setter)
void main_f_65f1b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_65fb00  (orig 0x65fb00, ret_only)
void main_f_65fb00() {}

// sub_65fb10  (orig 0x65fb10, mov_ret)
uint64_t main_f_65fb10() { return 0; }

// sub_663d20  (orig 0x663d20, ret_only)
void main_f_663d20() {}

// sub_664300  (orig 0x664300, call)
extern void callee_17ea150();
uint32_t main_f_664300(void* a0) {
    uint64_t f_664300__r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&callee_17ea150)(((uintptr_t)((char*)(a0) + 608)), ((uintptr_t)(1)));
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_664b00  (orig 0x664b00, call)
extern void callee_17ea150();
uint32_t main_f_664b00(void* a0) {
    uint64_t f_664b00__r0 = ((uint64_t (*)(uintptr_t, uintptr_t))&callee_17ea150)(((uintptr_t)((char*)(a0) + 608)), ((uintptr_t)(1)));
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_666a30  (orig 0x666a30, ret_only)
void main_f_666a30() {}

// sub_6675e0  (orig 0x6675e0, call)
extern void callee_17e90a0();
uint32_t main_f_6675e0(void* a0) {
    uint64_t f_6675e0__r0 = ((uint64_t (*)(uintptr_t))&callee_17e90a0)(((uintptr_t)((char*)(a0) + 56)));
    uint32_t r0 = 0;
    asm volatile("");
    return r0;
}

// sub_667cc0  (orig 0x667cc0, ret_only)
void main_f_667cc0() {}

// sub_667e60  (orig 0x667e60, compare)
bool main_f_667e60(void* a0) { return (int64_t)(*(uint64_t*)((char*)(a0) + 168)) > (int64_t)(1); }

// height_3  (orig 0x669140, straight-line)
uint64_t main_f_669140(void* a0, uint32_t a1) { return ((*(uint64_t*)((char*)(a0) + 136)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(112))))))) + (88); }

// sub_669f70  (orig 0x669f70, indirect-tailcall)
void main_f_669f70(uint64_t a0, void* a1, uint64_t a2, uint64_t a3) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 24)))))(((uintptr_t)(a1)), ((uintptr_t)(((uint64_t)a0))), ((uintptr_t)(0)), ((uintptr_t)(0)));
}

// sub_66abc0  (orig 0x66abc0, ret_only)
void main_f_66abc0() {}

// sub_66abd0  (orig 0x66abd0, copy2)
void main_f_66abd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_66abe0  (orig 0x66abe0, copy2)
void main_f_66abe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_66b900  (orig 0x66b900, straight)
uint64_t main_f_66b900(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 132));
    *(uint32_t*)((char*)(p0) + 632) = (*(uint32_t*)((char*)(a1) + 8)) - (1);
    return 0;
}

// sub_66c130  (orig 0x66c130, mov_ret)
uint32_t main_f_66c130() { return 0; }

// sub_66efd0  (orig 0x66efd0, straight)
uint32_t main_f_66efd0(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 164) = (uint32_t)(a1);
    return 0;
}

// sub_66fc10  (orig 0x66fc10, mov_ret)
uint32_t main_f_66fc10() { return 0; }

// sub_66fc20  (orig 0x66fc20, mov_ret)
uint32_t main_f_66fc20() { return 0; }

// sub_670430  (orig 0x670430, straight)
uint64_t main_f_670430(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    return (*(uint64_t*)((char*)(a0) + 80)) - (*(uint64_t*)((char*)(p0) + 64));
}

// sub_670680  (orig 0x670680, straight-line)
uint64_t main_f_670680(uint64_t unused0, void* a1) { return __builtin_bswap64(*(uint64_t*)((char*)(a1) + 8)); }

// sub_6707e0  (orig 0x6707e0, getter)
uint32_t main_f_6707e0(void* a0) { return *(uint32_t*)((char*)(a0) + 472); }

// sub_670800  (orig 0x670800, getter)
uint8_t main_f_670800(void* a0) { return *(uint8_t*)((char*)(a0) + 496); }

// sub_670810  (orig 0x670810, getter)
uint32_t main_f_670810(void* a0) { return *(uint32_t*)((char*)(a0) + 500); }

// sub_670820  (orig 0x670820, getter)
uint32_t main_f_670820(void* a0) { return *(uint32_t*)((char*)(a0) + 504); }

// sub_671ce0  (orig 0x671ce0, setter)
void main_f_671ce0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 504) = a1; }

// sub_671cf0  (orig 0x671cf0, setter)
void main_f_671cf0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 404) = a1; }

// sub_6791a0  (orig 0x6791a0, ret_only)
void main_f_6791a0() {}

// sub_679bd0  (orig 0x679bd0, ret_only)
void main_f_679bd0() {}

// sub_679be0  (orig 0x679be0, copy2)
void main_f_679be0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679bf0  (orig 0x679bf0, copy2)
void main_f_679bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679c20  (orig 0x679c20, ret_only)
void main_f_679c20() {}

// sub_679c30  (orig 0x679c30, copy2)
void main_f_679c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679c40  (orig 0x679c40, copy2)
void main_f_679c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679c60  (orig 0x679c60, ret_only)
void main_f_679c60() {}

// sub_679c70  (orig 0x679c70, copy2)
void main_f_679c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679c80  (orig 0x679c80, copy2)
void main_f_679c80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_679cd0  (orig 0x679cd0, ret_only)
void main_f_679cd0() {}

// sub_679ce0  (orig 0x679ce0, ret_only)
void main_f_679ce0() {}

// sub_679d30  (orig 0x679d30, ret_only)
void main_f_679d30() {}

// sub_67a0b0  (orig 0x67a0b0, ret_only)
void main_f_67a0b0() {}

// sub_67a160  (orig 0x67a160, ret_only)
void main_f_67a160() {}

// sub_67a1c0  (orig 0x67a1c0, ret_only)
void main_f_67a1c0() {}

// sub_67a650  (orig 0x67a650, ret_only)
void main_f_67a650() {}

// sub_67b740  (orig 0x67b740, mov_ret)
uint32_t main_f_67b740() { return 1; }

// sub_67b750  (orig 0x67b750, mov_ret)
uint32_t main_f_67b750() { return 1; }

// sub_67b760  (orig 0x67b760, ret_only)
void main_f_67b760() {}

// sub_67b770  (orig 0x67b770, ret_only)
void main_f_67b770() {}

// sub_67b780  (orig 0x67b780, getter)
uint8_t main_f_67b780(void* a0) { return *(uint8_t*)((char*)(a0) + 808); }

// sub_67b790  (orig 0x67b790, getter)
uint8_t main_f_67b790(void* a0) { return *(uint8_t*)((char*)(a0) + 800); }

// sub_67b7a0  (orig 0x67b7a0, ret_only)
void main_f_67b7a0() {}

// sub_67b7c0  (orig 0x67b7c0, ret_only)
void main_f_67b7c0() {}

// sub_67bdb0  (orig 0x67bdb0, getter)
uint64_t main_f_67bdb0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_67bdc0  (orig 0x67bdc0, getter)
uint16_t main_f_67bdc0(void* a0) { return *(uint16_t*)((char*)(a0) + 122); }

// sub_67bdd0  (orig 0x67bdd0, getter)
uint16_t main_f_67bdd0(void* a0) { return *(uint16_t*)((char*)(a0) + 120); }

// sub_67c470  (orig 0x67c470, guarded)
void* main_f_67c470(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    if ((*(uint16_t*)((char*)(a0))) == (16)) {
        return ((char *)(char*)(p0) + 4 + (uintptr_t)(*(uint16_t*)((char*)(p0) + 2)) * 2);
    }
    return a0;
}

// sub_67c960  (orig 0x67c960, ret_only)
void main_f_67c960() {}

// sub_67d360  (orig 0x67d360, getter-chain)
uint16_t main_f_67d360(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0) + 144))) + 2); }

// sub_67e9f0  (orig 0x67e9f0, setter-chain)
void main_f_67e9f0(void* a0, uint8_t a1, uint8_t a2) { *(uint8_t*)((char*)(a0) + 157) = a1; *(uint8_t*)((char*)(a0) + 165) = a1; *(uint8_t*)((char*)(a0) + 164) = a2; *(uint8_t*)((char*)(a0) + 166) = a2; }

// sub_67ea10  (orig 0x67ea10, setter-chain)
void main_f_67ea10(void* a0, uint8_t a1, uint8_t a2) { *(uint8_t*)((char*)(a0) + 157) = a1; *(uint8_t*)((char*)(a0) + 164) = a2; }

// sub_67ea20  (orig 0x67ea20, straight)
void* main_f_67ea20(void* a0, void* a1, void* a2) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a1)) = (uint32_t)(*(uint8_t*)((char*)(a0) + 157));
    *(uint32_t*)((char*)(a2)) = (uint32_t)(*(uint8_t*)((char*)(p0) + 164));
    return a0;
}

// sub_67ea40  (orig 0x67ea40, setter)
void main_f_67ea40(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 148) = a1; }

// sub_67ea50  (orig 0x67ea50, setter)
void main_f_67ea50(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 150) = a1; }

// sub_67ebe0  (orig 0x67ebe0, ret_only)
void main_f_67ebe0() {}

// sub_67ebf0  (orig 0x67ebf0, ret_only)
void main_f_67ebf0() {}

// sub_67ec00  (orig 0x67ec00, mov_ret)
uint32_t main_f_67ec00() { return 0; }

// sub_67ec10  (orig 0x67ec10, mov_ret)
uint32_t main_f_67ec10() { return 1; }

// sub_67ec20  (orig 0x67ec20, mov_ret)
uint32_t main_f_67ec20() { return 0; }

// sub_67ec30  (orig 0x67ec30, ret_only)
void main_f_67ec30() {}

// sub_67ec40  (orig 0x67ec40, mov_ret)
uint32_t main_f_67ec40() { return 0; }

// sub_67f480  (orig 0x67f480, straight-line)
void main_f_67f480(void* a0) {
    *(uint32_t*)((char*)(a0) + 168) = (((*(uint32_t*)((char*)(a0) + 168) == 0)) ? (3) : ((0) + (1)));
}

// sub_67f4a0  (orig 0x67f4a0, straight)
void* main_f_67f4a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 168) = 2;
    return a0;
}

// sub_67f4b0  (orig 0x67f4b0, getter)
uint32_t main_f_67f4b0(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_67f540  (orig 0x67f540, getter)
uint64_t main_f_67f540(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_67f940  (orig 0x67f940, ret_only)
void main_f_67f940() {}

// sub_67f950  (orig 0x67f950, copy2)
void main_f_67f950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_67f960  (orig 0x67f960, copy2)
void main_f_67f960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_67fb20  (orig 0x67fb20, setter)
void main_f_67fb20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_680570  (orig 0x680570, getter)
float main_f_680570(void* a0) { return *(float*)((char*)(a0) + 152); }

// sub_680be0  (orig 0x680be0, ptr_add)
void* main_f_680be0(void* a0) { return (char*)a0 + 8; }

// sub_680bf0  (orig 0x680bf0, ptr_add)
void* main_f_680bf0(void* a0) { return (char*)a0 + 40; }

// sub_6812d0  (orig 0x6812d0, getter)
uint32_t main_f_6812d0(void* a0) { return *(uint32_t*)((char*)(a0) + 72); }

// sub_681620  (orig 0x681620, ptr_add)
void* main_f_681620(void* a0) { return (char*)a0 + 88; }

// sub_681630  (orig 0x681630, ret_only)
void main_f_681630() {}

// sub_6816b0  (orig 0x6816b0, ret_only)
void main_f_6816b0() {}

// sub_681fa0  (orig 0x681fa0, ret_only)
void main_f_681fa0() {}

// sub_683670  (orig 0x683670, copy2)
void main_f_683670(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 208) = *(uint64_t*)((char*)(a1)); }

// sub_683680  (orig 0x683680, ptr_add)
void* main_f_683680(void* a0) { return (char*)a0 + 208; }

// sub_683690  (orig 0x683690, ptr_add)
void* main_f_683690(void* a0) { return (char*)a0 + 16; }

// sub_683cc0  (orig 0x683cc0, ptr_add)
void* main_f_683cc0(void* a0) { return (char*)a0 + 144; }

// sub_683cd0  (orig 0x683cd0, ptr_add)
void* main_f_683cd0(void* a0) { return (char*)a0 + 80; }

// sub_685230  (orig 0x685230, setter-chain)
void main_f_685230(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 640) = a1; *(uint8_t*)((char*)(a0) + 185) = 0; }

// sub_685240  (orig 0x685240, getter-chain)
uint64_t main_f_685240(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 192))) + 24); }

// sub_685810  (orig 0x685810, getter)
uint32_t main_f_685810(void* a0) { return *(uint32_t*)((char*)(a0) + 680); }

// sub_6861b0  (orig 0x6861b0, indirect-tailcall)
void main_f_6861b0(void* a0, void* a1) {
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(a0))))))(((uintptr_t)(*(uint64_t*)((char*)(a1)))), ((uintptr_t)(a1)));
}

// sub_6861c0  (orig 0x6861c0, ret_only)
void main_f_6861c0() {}

// sub_6861d0  (orig 0x6861d0, copy2)
void main_f_6861d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6861e0  (orig 0x6861e0, copy2)
void main_f_6861e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_686970  (orig 0x686970, ret_only)
void main_f_686970() {}

// sub_686980  (orig 0x686980, copy2)
void main_f_686980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_686990  (orig 0x686990, copy2)
void main_f_686990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6869a0  (orig 0x6869a0, copy2)
void main_f_6869a0(void* a0) { (*(uint8_t *)((char *)(*(void **)((char*)(a0))) + 800)) = 0; }

// sub_6869b0  (orig 0x6869b0, ret_only)
void main_f_6869b0() {}

// sub_6869c0  (orig 0x6869c0, copy2)
void main_f_6869c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6869d0  (orig 0x6869d0, copy2)
void main_f_6869d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_686de0  (orig 0x686de0, ret_only)
void main_f_686de0() {}

// sub_686df0  (orig 0x686df0, copy2)
void main_f_686df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_686e00  (orig 0x686e00, copy2)
void main_f_686e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_686fa0  (orig 0x686fa0, getter)
uint8_t main_f_686fa0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_6870c0  (orig 0x6870c0, getter)
uint8_t main_f_6870c0(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_687100  (orig 0x687100, getter)
uint8_t main_f_687100(void* a0) { return *(uint8_t*)((char*)(a0) + 3); }

// sub_687270  (orig 0x687270, getter)
uint8_t main_f_687270(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_687280  (orig 0x687280, straight)
void main_f_687280(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_687290  (orig 0x687290, getter)
uint64_t main_f_687290(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_6872a0  (orig 0x6872a0, getter)
uint64_t main_f_6872a0(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_687aa0  (orig 0x687aa0, getter)
uint64_t main_f_687aa0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_687de0  (orig 0x687de0, straight)
void* main_f_687de0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 408));
    return (char*)(p0) + 128;
}

// sub_68d900  (orig 0x68d900, ptr_add)
void* main_f_68d900(void* a0) { return (char*)a0 + 608; }

// sub_68d910  (orig 0x68d910, straight)
void* main_f_68d910(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint64_t*)((char*)(a0) + 616) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(p1) + 608) = *(uint64_t*)((char*)(p0));
    return a0;
}

// sub_68d930  (orig 0x68d930, straight)
void* main_f_68d930(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 634) = (uint8_t)k0;
    return a0;
}

// sub_68d940  (orig 0x68d940, setter)
void main_f_68d940(void* a0) { *(uint8_t*)((char*)(a0) + 634) = 0; }

// sub_68f160  (orig 0x68f160, setter)
void main_f_68f160(void* a0, float a1) { *(float*)((char*)(a0) + 104) = a1; }

// sub_690380  (orig 0x690380, ret_only)
void main_f_690380() {}

// sub_690390  (orig 0x690390, copy2)
void main_f_690390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_6903a0  (orig 0x6903a0, copy2)
void main_f_6903a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_691100  (orig 0x691100, copy-chain-store)
void main_f_691100(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_692590  (orig 0x692590, ret_only)
void main_f_692590() {}

// sub_692920  (orig 0x692920, getter-chain)
uint32_t main_f_692920(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 408))) + 128); }

// sub_694160  (orig 0x694160, ret_only)
void main_f_694160() {}

// sub_694510  (orig 0x694510, ret_only)
void main_f_694510() {}

// sub_6954d0  (orig 0x6954d0, straight-line)
void main_f_6954d0(void* a0, int32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 1928));
    *(uint64_t*)(((char*)(p0) + (uintptr_t)a1 * 8)) = a2;
}

// sub_6955b0  (orig 0x6955b0, ret_only)
void main_f_6955b0() {}

// sub_6965e0  (orig 0x6965e0, indirect-tailcall)
void main_f_6965e0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0)));
    return ((void (*)(uintptr_t, uintptr_t, uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p1) + 24)))))(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))), ((uintptr_t)(a1)), ((uintptr_t)(0)), ((uintptr_t)(0)));
}

// sub_696600  (orig 0x696600, ret_only)
void main_f_696600() {}

// sub_696bf0  (orig 0x696bf0, ret_only)
void main_f_696bf0() {}

// sub_696d80  (orig 0x696d80, copy2)
void main_f_696d80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_696d90  (orig 0x696d90, copy2)
void main_f_696d90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_699710  (orig 0x699710, ret_only)
void main_f_699710() {}

// sub_699720  (orig 0x699720, copy2)
void main_f_699720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_699730  (orig 0x699730, copy2)
void main_f_699730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_69a2a0  (orig 0x69a2a0, ret_only)
void main_f_69a2a0() {}

// sub_69a490  (orig 0x69a490, ret_only)
void main_f_69a490() {}

// sub_69a4a0  (orig 0x69a4a0, copy2)
void main_f_69a4a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_69a4b0  (orig 0x69a4b0, copy2)
void main_f_69a4b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_69a510  (orig 0x69a510, ret_only)
void main_f_69a510() {}

// sub_69a520  (orig 0x69a520, copy2)
void main_f_69a520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_69a530  (orig 0x69a530, copy2)
void main_f_69a530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_69bdf0  (orig 0x69bdf0, getter-chain)
uint8_t main_f_69bdf0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 80))) + 176); }

// sub_69c250  (orig 0x69c250, call)
extern void sub_418310();
uint32_t main_f_69c250(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 80));
    uint32_t r0 = ((((uint32_t (*)(uintptr_t))&sub_418310)(((uintptr_t)(*(uint64_t*)((char*)(p0) + 104)))) == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_69c4b0  (orig 0x69c4b0, ret_only)
void main_f_69c4b0() {}

// sub_69c530  (orig 0x69c530, ret_only)
void main_f_69c530() {}

// sub_69d640  (orig 0x69d640, ret_only)
void main_f_69d640() {}

// sub_69e390  (orig 0x69e390, compare-pred)
bool main_f_69e390(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 80)) + 32)) + 72)) == (uint32_t)(0); }

// sub_69e3b0  (orig 0x69e3b0, compare)
bool main_f_69e3b0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 80)) != (uint64_t)(0); }

// sub_69e920  (orig 0x69e920, ret_only)
void main_f_69e920() {}

// sub_69e9a0  (orig 0x69e9a0, ret_only)
void main_f_69e9a0() {}

// sub_69f060  (orig 0x69f060, straight)
void* main_f_69f060(void* a0) {
    *(uint32_t*)((char*)(a0) + 616) = 3;
    return a0;
}

// sub_69fb90  (orig 0x69fb90, straight)
void* main_f_69fb90(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 888) = (uint8_t)k0;
    return a0;
}

// sub_6a0d90  (orig 0x6a0d90, strlit-ret)
const char *main_f_6a0d90() { static char g_f_6a0d90[1]; __asm__ volatile("" ::: "memory"); return g_f_6a0d90; }

// sub_6a1620  (orig 0x6a1620, ret_only)
void main_f_6a1620() {}

// sub_6a16a0  (orig 0x6a16a0, ret_only)
void main_f_6a16a0() {}

// sub_6a1f70  (orig 0x6a1f70, getter)
uint64_t main_f_6a1f70(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_6a2080  (orig 0x6a2080, ret_only)
void main_f_6a2080() {}

// sub_6a2100  (orig 0x6a2100, ret_only)
void main_f_6a2100() {}

// sub_6a2a20  (orig 0x6a2a20, setter)
void main_f_6a2a20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 80) = a1; }

// sub_6a2a30  (orig 0x6a2a30, setter)
void main_f_6a2a30(void* a0) { *(uint64_t*)((char*)(a0) + 80) = 0; }

// sub_6a2b60  (orig 0x6a2b60, getter)
uint8_t main_f_6a2b60(void* a0) { return *(uint8_t*)((char*)(a0) + 136); }

// sub_6a3240  (orig 0x6a3240, ptr_add)
void* main_f_6a3240(void* a0) { return (char*)a0 + 152; }

// sub_6a3250  (orig 0x6a3250, getter)
uint64_t main_f_6a3250(void* a0) { return *(uint64_t*)((char*)(a0) + 3224); }

// sub_6a3470  (orig 0x6a3470, ret_only)
void main_f_6a3470() {}

// sub_6a34f0  (orig 0x6a34f0, ret_only)
void main_f_6a34f0() {}

// sub_6a35b0  (orig 0x6a35b0, ret_only)
void main_f_6a35b0() {}

// sub_6a35c0  (orig 0x6a35c0, ret_only)
void main_f_6a35c0() {}

// sub_6a35d0  (orig 0x6a35d0, ret_only)
void main_f_6a35d0() {}

// sub_6a4020  (orig 0x6a4020, getter)
uint64_t main_f_6a4020(void* a0) { return *(uint64_t*)((char*)(a0) + 184); }

// sub_6a4100  (orig 0x6a4100, getter)
uint64_t main_f_6a4100(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_6a41e0  (orig 0x6a41e0, getter)
uint64_t main_f_6a41e0(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_6a42c0  (orig 0x6a42c0, getter)
uint64_t main_f_6a42c0(void* a0) { return *(uint64_t*)((char*)(a0) + 208); }

// sub_6a43a0  (orig 0x6a43a0, getter)
uint64_t main_f_6a43a0(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_6a4480  (orig 0x6a4480, getter)
uint64_t main_f_6a4480(void* a0) { return *(uint64_t*)((char*)(a0) + 224); }

// sub_6a4700  (orig 0x6a4700, ret_only)
void main_f_6a4700() {}

// sub_6a4b80  (orig 0x6a4b80, getter)
uint8_t main_f_6a4b80(void* a0) { return *(uint8_t*)((char*)(a0) + 145); }

// sub_6a4b90  (orig 0x6a4b90, getter)
uint8_t main_f_6a4b90(void* a0) { return *(uint8_t*)((char*)(a0) + 147); }

// sub_6a4d50  (orig 0x6a4d50, getter)
uint64_t main_f_6a4d50(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_6a50e0  (orig 0x6a50e0, ret_only)
void main_f_6a50e0() {}

// sub_6a5160  (orig 0x6a5160, ret_only)
void main_f_6a5160() {}

// sub_6a5220  (orig 0x6a5220, ret_only)
void main_f_6a5220() {}

// sub_6a5650  (orig 0x6a5650, mov_ret)
uint32_t main_f_6a5650() { return 1; }

// sub_6a5660  (orig 0x6a5660, indexed-getter)
uint64_t main_f_6a5660(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_6a5670  (orig 0x6a5670, indexed-getter)
uint64_t main_f_6a5670(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_6a56b0  (orig 0x6a56b0, indirect-tailcall)
void main_f_6a56b0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 24)))))(((uintptr_t)(a0)));
}

// sub_6ace10  (orig 0x6ace10, ret_only)
void main_f_6ace10() {}

// sub_6ad270  (orig 0x6ad270, setter-chain)
void main_f_6ad270(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; *(uint16_t*)((char*)(a0) + 12) = 0; }

// sub_6ad280  (orig 0x6ad280, mov_ret)
uint32_t main_f_6ad280() { return 1; }

// sub_6ad290  (orig 0x6ad290, straight)
void* main_f_6ad290(void* a0, void* a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    void* p1 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(p1) + 12) = *(uint8_t*)((char*)(p0) + 12);
    *(uint8_t*)((char*)(p1) + 13) = *(uint8_t*)((char*)(p0) + 13);
    return a0;
}

// sub_6ad2b0  (orig 0x6ad2b0, ret_only)
void main_f_6ad2b0() {}

// sub_6aedd0  (orig 0x6aedd0, straight)
void main_f_6aedd0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 537) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_6aede0  (orig 0x6aede0, getter)
uint8_t main_f_6aede0(void* a0) { return *(uint8_t*)((char*)(a0) + 537); }

// sub_6af550  (orig 0x6af550, ret_only)
void main_f_6af550() {}

// sub_6af5d0  (orig 0x6af5d0, ret_only)
void main_f_6af5d0() {}

// sub_6af690  (orig 0x6af690, ret_only)
void main_f_6af690() {}

// sub_6b0780  (orig 0x6b0780, compare)
bool main_f_6b0780(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 152)) != (uint64_t)(0); }

// sub_6b0b50  (orig 0x6b0b50, setter-chain)
void main_f_6b0b50(void* a0) { *(uint64_t*)((char*)(a0) + 152) = 0; *(uint64_t*)((char*)(a0) + 248) = 0; }

// sub_6b1480  (orig 0x6b1480, getter)
uint8_t main_f_6b1480(void* a0) { return *(uint8_t*)((char*)(a0) + 1267); }

// sub_6b21b0  (orig 0x6b21b0, mov_ret)
uint32_t main_f_6b21b0() { return 1; }

// sub_6b2c10  (orig 0x6b2c10, setter)
void main_f_6b2c10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 496) = a1; }

// sub_6b2c20  (orig 0x6b2c20, setter)
void main_f_6b2c20(void* a0) { *(uint64_t*)((char*)(a0) + 1224) = 0; }

// sub_6b2f70  (orig 0x6b2f70, getter)
uint8_t main_f_6b2f70(void* a0) { return *(uint8_t*)((char*)(a0) + 1265); }

// sub_6b2f80  (orig 0x6b2f80, getter)
uint8_t main_f_6b2f80(void* a0) { return *(uint8_t*)((char*)(a0) + 1268); }

// sub_6b2f90  (orig 0x6b2f90, getter)
uint8_t main_f_6b2f90(void* a0) { return *(uint8_t*)((char*)(a0) + 1270); }

// sub_6b2fa0  (orig 0x6b2fa0, getter)
uint8_t main_f_6b2fa0(void* a0) { return *(uint8_t*)((char*)(a0) + 1266); }

// sub_6b2fb0  (orig 0x6b2fb0, mov_ret)
uint32_t main_f_6b2fb0() { return 24; }

// sub_6b2fc0  (orig 0x6b2fc0, mov_ret)
uint32_t main_f_6b2fc0() { return 1; }

// sub_6b2fd0  (orig 0x6b2fd0, ret_only)
void main_f_6b2fd0() {}

// sub_6b2fe0  (orig 0x6b2fe0, mov_ret)
uint32_t main_f_6b2fe0() { return 0; }

// sub_6b2ff0  (orig 0x6b2ff0, mov_ret)
uint64_t main_f_6b2ff0() { return 0; }

// LeaveSession  (orig 0x6b3000, strlit-ret)
const char *main_f_6b3000() { static const char s[] = "LeaveSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3010  (orig 0x6b3010, mov_ret)
uint32_t main_f_6b3010() { return 0; }

// StartSession  (orig 0x6b3020, strlit-ret)
const char *main_f_6b3020() { static const char s[] = "StartSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3030  (orig 0x6b3030, mov_ret)
uint32_t main_f_6b3030() { return 0; }

// CleanupSession  (orig 0x6b3040, strlit-ret)
const char *main_f_6b3040() { static const char s[] = "CleanupSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3050  (orig 0x6b3050, mov_ret)
uint32_t main_f_6b3050() { return 0; }

// sub_6b3060  (orig 0x6b3060, mov_ret)
uint32_t main_f_6b3060() { return 0; }

// CloseSession  (orig 0x6b3070, strlit-ret)
const char *main_f_6b3070() { static const char s[] = "CloseSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3080  (orig 0x6b3080, mov_ret)
uint32_t main_f_6b3080() { return 1; }

// ExecSuccess  (orig 0x6b3090, strlit-ret)
const char *main_f_6b3090() { static const char s[] = "ExecSuccess"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b30a0  (orig 0x6b30a0, mov_ret)
uint32_t main_f_6b30a0() { return 1; }

// ExecCancel  (orig 0x6b30b0, strlit-ret)
const char *main_f_6b30b0() { static const char s[] = "ExecCancel"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b30c0  (orig 0x6b30c0, mov_ret)
uint32_t main_f_6b30c0() { return 1; }

// ExecTimeout  (orig 0x6b30d0, strlit-ret)
const char *main_f_6b30d0() { static const char s[] = "ExecTimeout"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b30e0  (orig 0x6b30e0, mov_ret)
uint32_t main_f_6b30e0() { return 1; }

// IndexSelectSession  (orig 0x6b30f0, strlit-ret)
const char *main_f_6b30f0() { static const char s[] = "IndexSelectSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3100  (orig 0x6b3100, mov_ret)
uint32_t main_f_6b3100() { return 0; }

// NotifyErrorFunc  (orig 0x6b3110, strlit-ret)
const char *main_f_6b3110() { static const char s[] = "NotifyErrorFunc"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3120  (orig 0x6b3120, mov_ret)
uint32_t main_f_6b3120() { return 1; }

// WaitMemberConnection  (orig 0x6b3130, strlit-ret)
const char *main_f_6b3130() { static const char s[] = "WaitMemberConnection"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3140  (orig 0x6b3140, mov_ret)
uint32_t main_f_6b3140() { return 0; }

// CancelJoinRandomSession  (orig 0x6b3150, strlit-ret)
const char *main_f_6b3150() { static const char s[] = "CancelJoinRandomSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3160  (orig 0x6b3160, mov_ret)
uint32_t main_f_6b3160() { return 0; }

// CancelJoinSession  (orig 0x6b3170, strlit-ret)
const char *main_f_6b3170() { static const char s[] = "CancelJoinSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b3180  (orig 0x6b3180, mov_ret)
uint32_t main_f_6b3180() { return 1; }

// sub_6b3190  (orig 0x6b3190, mov_ret)
uint32_t main_f_6b3190() { return 1; }

// sub_6b31a0  (orig 0x6b31a0, mov_ret)
uint32_t main_f_6b31a0() { return 0; }

// NullFunc  (orig 0x6b31b0, strlit-ret)
const char *main_f_6b31b0() { static const char s[] = "NullFunc"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b4380  (orig 0x6b4380, getter)
uint8_t main_f_6b4380(void* a0) { return *(uint8_t*)((char*)(a0) + 1269); }

// sub_6b6400  (orig 0x6b6400, mov_ret)
uint32_t main_f_6b6400() { return 3; }

// RandomSession  (orig 0x6b6410, strlit-ret)
const char *main_f_6b6410() { static const char s[] = "RandomSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b6420  (orig 0x6b6420, mov_ret)
uint32_t main_f_6b6420() { return 0; }

// SearchSession  (orig 0x6b6430, strlit-ret)
const char *main_f_6b6430() { static const char s[] = "SearchSession"; __asm__ volatile("" ::: "memory"); return s; }

// JoinSession  (orig 0x6b6440, strlit-ret)
const char *main_f_6b6440() { static const char s[] = "JoinSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b6450  (orig 0x6b6450, mov_ret)
uint32_t main_f_6b6450() { return 0; }

// BrowseJoinSession  (orig 0x6b6460, strlit-ret)
const char *main_f_6b6460() { static const char s[] = "BrowseJoinSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b6470  (orig 0x6b6470, mov_ret)
uint32_t main_f_6b6470() { return 0; }

// CreateSession  (orig 0x6b6480, strlit-ret)
const char *main_f_6b6480() { static const char s[] = "CreateSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b6490  (orig 0x6b6490, mov_ret)
uint32_t main_f_6b6490() { return 0; }

// UpdateSettingSession  (orig 0x6b64a0, strlit-ret)
const char *main_f_6b64a0() { static const char s[] = "UpdateSettingSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b64b0  (orig 0x6b64b0, mov_ret)
uint32_t main_f_6b64b0() { return 1; }

// CheckBlock  (orig 0x6b64c0, strlit-ret)
const char *main_f_6b64c0() { static const char s[] = "CheckBlock"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6b7650  (orig 0x6b7650, getter)
uint32_t main_f_6b7650(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_6b7660  (orig 0x6b7660, getter)
uint32_t main_f_6b7660(void* a0) { return *(uint32_t*)((char*)(a0) + 352); }

// sub_6b8010  (orig 0x6b8010, getter)
uint16_t main_f_6b8010(void* a0) { return *(uint16_t*)((char*)(a0) + 352); }

// sub_6bb9f0  (orig 0x6bb9f0, ret_only)
void main_f_6bb9f0() {}

// sub_6bc640  (orig 0x6bc640, setter)
void main_f_6bc640(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6bc710  (orig 0x6bc710, ret_only)
void main_f_6bc710() {}

// sub_6bc7c0  (orig 0x6bc7c0, ret_only)
void main_f_6bc7c0() {}

// sub_6bc7d0  (orig 0x6bc7d0, mov_ret)
uint64_t main_f_6bc7d0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_6bc7e0  (orig 0x6bc7e0, straight)
uint32_t main_f_6bc7e0(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_6bc940  (orig 0x6bc940, mov_ret)
uint32_t main_f_6bc940() { return 1; }

// sub_6bcad0  (orig 0x6bcad0, setter)
void main_f_6bcad0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6bcba0  (orig 0x6bcba0, ret_only)
void main_f_6bcba0() {}

// sub_6bcc50  (orig 0x6bcc50, ret_only)
void main_f_6bcc50() {}

// sub_6bcc60  (orig 0x6bcc60, mov_ret)
uint64_t main_f_6bcc60(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_6bcc70  (orig 0x6bcc70, straight)
uint32_t main_f_6bcc70(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_6bcdd0  (orig 0x6bcdd0, mov_ret)
uint32_t main_f_6bcdd0() { return 1; }

// sub_6bcf60  (orig 0x6bcf60, setter)
void main_f_6bcf60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6bd030  (orig 0x6bd030, ret_only)
void main_f_6bd030() {}

// sub_6bd0e0  (orig 0x6bd0e0, ret_only)
void main_f_6bd0e0() {}

// sub_6bd0f0  (orig 0x6bd0f0, mov_ret)
uint64_t main_f_6bd0f0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_6bd100  (orig 0x6bd100, straight)
uint32_t main_f_6bd100(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_6bd260  (orig 0x6bd260, mov_ret)
uint32_t main_f_6bd260() { return 1; }

// sub_6bd2e0  (orig 0x6bd2e0, indirect-tailcall)
void main_f_6bd2e0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6bd2f0  (orig 0x6bd2f0, mov_ret)
uint64_t main_f_6bd2f0() { return 0; }

// sub_6bd300  (orig 0x6bd300, indirect-tailcall)
void main_f_6bd300(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 40)))))(((uintptr_t)(a0)));
}

// sub_6bd330  (orig 0x6bd330, getter)
uint32_t main_f_6bd330(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6bd360  (orig 0x6bd360, mov_ret)
uint32_t main_f_6bd360() { return 1; }

// sub_6bd370  (orig 0x6bd370, indirect-tailcall)
void main_f_6bd370(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6bd3a0  (orig 0x6bd3a0, getter)
uint32_t main_f_6bd3a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6bd3b0  (orig 0x6bd3b0, mov_ret)
uint32_t main_f_6bd3b0() { return 1; }

// sub_6bd3c0  (orig 0x6bd3c0, indirect-tailcall)
void main_f_6bd3c0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6bd3f0  (orig 0x6bd3f0, getter)
uint32_t main_f_6bd3f0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6bd400  (orig 0x6bd400, mov_ret)
uint32_t main_f_6bd400() { return 1; }

// sub_6bdbe0  (orig 0x6bdbe0, setter)
void main_f_6bdbe0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_6be450  (orig 0x6be450, mov_ret)
uint32_t main_f_6be450() { return 1; }

// sub_6be4d0  (orig 0x6be4d0, indirect-tailcall)
void main_f_6be4d0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6be500  (orig 0x6be500, getter)
uint32_t main_f_6be500(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_6be510  (orig 0x6be510, mov_ret)
uint32_t main_f_6be510() { return 1; }

// sub_6bee70  (orig 0x6bee70, straight)
void main_f_6bee70(void* a0, uint64_t a1) {
    *(uint8_t*)((char*)(a0) + 295152L) = (uint8_t)(a1);
}

// sub_6bf510  (orig 0x6bf510, ret_only)
void main_f_6bf510() {}

// sub_6bf590  (orig 0x6bf590, ret_only)
void main_f_6bf590() {}

// sub_6bfa40  (orig 0x6bfa40, ret_only)
void main_f_6bfa40() {}

// sub_6bfa90  (orig 0x6bfa90, ret_only)
void main_f_6bfa90() {}

// sub_6c04d0  (orig 0x6c04d0, setter)
void main_f_6c04d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_6c0b70  (orig 0x6c0b70, mov_ret)
uint32_t main_f_6c0b70() { return 1; }

// sub_6c0bf0  (orig 0x6c0bf0, indirect-tailcall)
void main_f_6c0bf0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6c0c20  (orig 0x6c0c20, getter)
uint32_t main_f_6c0c20(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_6c0c30  (orig 0x6c0c30, mov_ret)
uint32_t main_f_6c0c30() { return 1; }

// sub_6c1150  (orig 0x6c1150, setter)
void main_f_6c1150(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6c1220  (orig 0x6c1220, setter)
void main_f_6c1220(void* a0) { *(uint8_t*)((char*)(a0) + 17) = 0; }

// sub_6c1390  (orig 0x6c1390, straight-line)
uint8_t main_f_6c1390(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = (uint32_t)((((*(uint8_t*)((char*)(a0) + 17) == 0)) ? (0) : (2)));
    return (((*(uint8_t*)((char*)(a0) + 17) == 0)) ? (0) : (2));
}

// sub_6c1540  (orig 0x6c1540, mov_ret)
uint32_t main_f_6c1540() { return 1; }

// sub_6c16e0  (orig 0x6c16e0, setter)
void main_f_6c16e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_6c17b0  (orig 0x6c17b0, setter)
void main_f_6c17b0(void* a0) { *(uint8_t*)((char*)(a0) + 17) = 0; }

// sub_6c1920  (orig 0x6c1920, straight-line)
uint8_t main_f_6c1920(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = (uint32_t)((((*(uint8_t*)((char*)(a0) + 17) == 0)) ? (0) : (2)));
    return (((*(uint8_t*)((char*)(a0) + 17) == 0)) ? (0) : (2));
}

// sub_6c1ad0  (orig 0x6c1ad0, mov_ret)
uint32_t main_f_6c1ad0() { return 1; }

// sub_6c1b50  (orig 0x6c1b50, indirect-tailcall)
void main_f_6c1b50(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6c1b80  (orig 0x6c1b80, getter)
uint32_t main_f_6c1b80(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6c1b90  (orig 0x6c1b90, mov_ret)
uint32_t main_f_6c1b90() { return 1; }

// sub_6c1ba0  (orig 0x6c1ba0, indirect-tailcall)
void main_f_6c1ba0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return ((void (*)(uintptr_t, uintptr_t))((void *)((uintptr_t)(*(uint64_t*)((char*)(p0) + 32)))))(((uintptr_t)(a0)), ((uintptr_t)(0)));
}

// sub_6c1bd0  (orig 0x6c1bd0, getter)
uint32_t main_f_6c1bd0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_6c1be0  (orig 0x6c1be0, mov_ret)
uint32_t main_f_6c1be0() { return 1; }

// sub_6c1cd0  (orig 0x6c1cd0, straight)
uint16_t main_f_6c1cd0(void* a0) { return ((*(uint16_t*)((char*)(a0))) >> (4)) & (15); }

// sub_6c1f30  (orig 0x6c1f30, getter)
uint8_t main_f_6c1f30(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_6c1ff0  (orig 0x6c1ff0, ret_only)
void main_f_6c1ff0() {}

// sub_6c2000  (orig 0x6c2000, ptr_add)
void* main_f_6c2000(void* a0) { return (char*)a0 + 2; }

// sub_6c2010  (orig 0x6c2010, ptr_add)
void* main_f_6c2010(void* a0) { return (char*)a0 + 4; }

// sub_6c2070  (orig 0x6c2070, getter)
uint32_t main_f_6c2070(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_6c2080  (orig 0x6c2080, getter)
uint16_t main_f_6c2080(void* a0) { return *(uint16_t*)((char*)(a0) + 4); }

// sub_6c27d0  (orig 0x6c27d0, ptr_add)
void* main_f_6c27d0(void* a0) { return (char*)a0 + 8; }

// sub_6c2840  (orig 0x6c2840, getter)
uint64_t main_f_6c2840(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_6c6bc0  (orig 0x6c6bc0, getter)
uint8_t main_f_6c6bc0(void* a0) { return *(uint8_t*)((char*)(a0) + 1269); }

// sub_6c8cd0  (orig 0x6c8cd0, mov_ret)
uint32_t main_f_6c8cd0() { return 2; }

// RandomSession_2  (orig 0x6c8ce0, strlit-ret)
const char *main_f_6c8ce0() { static const char s[] = "RandomSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c8cf0  (orig 0x6c8cf0, mov_ret)
uint32_t main_f_6c8cf0() { return 0; }

// BindNgs  (orig 0x6c8d00, strlit-ret)
const char *main_f_6c8d00() { static const char s[] = "BindNgs"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c8d10  (orig 0x6c8d10, mov_ret)
uint32_t main_f_6c8d10() { return 0; }

// UnbindNgs  (orig 0x6c8d20, strlit-ret)
const char *main_f_6c8d20() { static const char s[] = "UnbindNgs"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c8d30  (orig 0x6c8d30, mov_ret)
uint32_t main_f_6c8d30() { return 0; }

// SearchSession_2  (orig 0x6c8d40, strlit-ret)
const char *main_f_6c8d40() { static const char s[] = "SearchSession"; __asm__ volatile("" ::: "memory"); return s; }

// JoinSession_2  (orig 0x6c8d50, strlit-ret)
const char *main_f_6c8d50() { static const char s[] = "JoinSession"; __asm__ volatile("" ::: "memory"); return s; }

// JoinSessionWithId  (orig 0x6c8d60, strlit-ret)
const char *main_f_6c8d60() { static const char s[] = "JoinSessionWithId"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c8d70  (orig 0x6c8d70, mov_ret)
uint32_t main_f_6c8d70() { return 0; }

// CreateSession_2  (orig 0x6c8d80, strlit-ret)
const char *main_f_6c8d80() { static const char s[] = "CreateSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c8d90  (orig 0x6c8d90, mov_ret)
uint32_t main_f_6c8d90() { return 1; }

// CheckBlock_2  (orig 0x6c8da0, strlit-ret)
const char *main_f_6c8da0() { static const char s[] = "CheckBlock"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6c9e40  (orig 0x6c9e40, call)
extern void callee_17ea650();
uint32_t main_f_6c9e40() {
    uint32_t r0 = ((((uint32_t (*)(void))&callee_17ea650)() == 1) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_6ca0c0  (orig 0x6ca0c0, call)
extern void callee_17ea650();
uint32_t main_f_6ca0c0() {
    uint32_t r0 = ((((uint32_t (*)(void))&callee_17ea650)() == 0) ? 1 : 0);
    asm volatile("");
    return r0;
}

// sub_6ccec0  (orig 0x6ccec0, getter)
uint8_t main_f_6ccec0(void* a0) { return *(uint8_t*)((char*)(a0) + 1269); }

// sub_6cd5f0  (orig 0x6cd5f0, mov_ret)
uint32_t main_f_6cd5f0() { return 1; }

// WaitMinMember  (orig 0x6cd600, strlit-ret)
const char *main_f_6cd600() { static const char s[] = "WaitMinMember"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd610  (orig 0x6cd610, mov_ret)
uint32_t main_f_6cd610() { return 0; }

// InitializeLdn_2  (orig 0x6cd620, strlit-ret)
const char *main_f_6cd620() { static const char s[] = "InitializeLdn"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd630  (orig 0x6cd630, mov_ret)
uint32_t main_f_6cd630() { return 0; }

// FinalizeLdn_2  (orig 0x6cd640, strlit-ret)
const char *main_f_6cd640() { static const char s[] = "FinalizeLdn"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd650  (orig 0x6cd650, mov_ret)
uint32_t main_f_6cd650() { return 0; }

// SearchSession_3  (orig 0x6cd660, strlit-ret)
const char *main_f_6cd660() { static const char s[] = "SearchSession"; __asm__ volatile("" ::: "memory"); return s; }

// JoinSession_3  (orig 0x6cd670, strlit-ret)
const char *main_f_6cd670() { static const char s[] = "JoinSession"; __asm__ volatile("" ::: "memory"); return s; }

// JoinSessionOnRandom  (orig 0x6cd680, strlit-ret)
const char *main_f_6cd680() { static const char s[] = "JoinSessionOnRandom"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd690  (orig 0x6cd690, mov_ret)
uint32_t main_f_6cd690() { return 0; }

// CreateSession_3  (orig 0x6cd6a0, strlit-ret)
const char *main_f_6cd6a0() { static const char s[] = "CreateSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd6b0  (orig 0x6cd6b0, mov_ret)
uint32_t main_f_6cd6b0() { return 0; }

// UpdateSettingSession_2  (orig 0x6cd6c0, strlit-ret)
const char *main_f_6cd6c0() { static const char s[] = "UpdateSettingSession"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd6d0  (orig 0x6cd6d0, mov_ret)
uint32_t main_f_6cd6d0() { return 1; }

// BranchSequenceOnRandom  (orig 0x6cd6e0, strlit-ret)
const char *main_f_6cd6e0() { static const char s[] = "BranchSequenceOnRandom"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd6f0  (orig 0x6cd6f0, mov_ret)
uint32_t main_f_6cd6f0() { return 1; }

// CheckBlock_3  (orig 0x6cd700, strlit-ret)
const char *main_f_6cd700() { static const char s[] = "CheckBlock"; __asm__ volatile("" ::: "memory"); return s; }

// sub_6cd710  (orig 0x6cd710, mov_ret)
uint32_t main_f_6cd710() { return 1; }

// LocalCloseSession  (orig 0x6cd720, strlit-ret)
const char *main_f_6cd720() { static const char s[] = "LocalCloseSession"; __asm__ volatile("" ::: "memory"); return s; }

