/* subsdk0 -- 978 functions verified to match the original.
 *
 * These bodies were synthesised from the instruction stream by
 * tools/auto_match.py and confirmed by compiling them for
 * aarch64-none-elf and comparing against data/subsdk0.elf with
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

// sub_1b0  (orig 0x1b0, mov_ret)
uint32_t subsdk0_f_1b0() { return 0; }

// sub_1c0  (orig 0x1c0, mov_ret)
uint32_t subsdk0_f_1c0() { return 0; }

// sub_1d0  (orig 0x1d0, mov_ret)
uint32_t subsdk0_f_1d0() { return 0; }

// sub_470  (orig 0x470, straight)
void subsdk0_f_470(void* a0) {
    *(uint32_t*)((char*)(a0)) = -1;
}

// sub_560  (orig 0x560, ret_only)
void subsdk0_f_560() {}

// sub_730  (orig 0x730, ptr_add)
void* subsdk0_f_730(void* a0) { return (char*)a0 + 16; }

// sub_740  (orig 0x740, mov_ret)
uint64_t subsdk0_f_740() { return 0; }

// sub_8d0  (orig 0x8d0, ptr_add)
void* subsdk0_f_8d0(void* a0) { return (char*)a0 + 8; }

// sub_8e0  (orig 0x8e0, straight)
void* subsdk0_f_8e0(void* a0) { return (char*)(a0) - 8; }

// sub_1000  (orig 0x1000, ret_only)
void subsdk0_f_1000() {}

// sub_1070  (orig 0x1070, straight)
void subsdk0_f_1070(void* a0) {
    uint32_t k0 = 2064;
    uint32_t k1 = 16;
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)k0;
    *(uint64_t*)((char*)(a0)) = 0;
    *(uint8_t*)((char*)(a0) + 10) = (uint8_t)k1;
}

// sub_1520  (orig 0x1520, mov_ret)
uint32_t subsdk0_f_1520() { return 13; }

// sub_17d0  (orig 0x17d0, mov_ret)
uint32_t subsdk0_f_17d0() { return 1; }

// sub_17e0  (orig 0x17e0, mov_ret)
uint32_t subsdk0_f_17e0() { return 0; }

// sub_1870  (orig 0x1870, mov_ret)
uint32_t subsdk0_f_1870() { return -38; }

// sub_1920  (orig 0x1920, mov_ret)
uint32_t subsdk0_f_1920() { return -38; }

// sub_1930  (orig 0x1930, mov_ret)
uint32_t subsdk0_f_1930() { return 0; }

// sub_1940  (orig 0x1940, mov_ret)
uint32_t subsdk0_f_1940() { return 0; }

// sub_1950  (orig 0x1950, mov_ret)
uint32_t subsdk0_f_1950() { return 0; }

// sub_1d80  (orig 0x1d80, ret_only)
void subsdk0_f_1d80() {}

// sub_1fc0  (orig 0x1fc0, mov_ret)
uint32_t subsdk0_f_1fc0() { return -38; }

// sub_1fd0  (orig 0x1fd0, mov_ret)
uint32_t subsdk0_f_1fd0() { return 1; }

// sub_1fe0  (orig 0x1fe0, mov_ret)
uint32_t subsdk0_f_1fe0() { return 0; }

// sub_2000  (orig 0x2000, mov_ret)
uint32_t subsdk0_f_2000() { return -38; }

// sub_2010  (orig 0x2010, mov_ret)
uint32_t subsdk0_f_2010() { return -38; }

// sub_24b0  (orig 0x24b0, ret_only)
void subsdk0_f_24b0() {}

// sub_2fe0  (orig 0x2fe0, mov_ret)
uint32_t subsdk0_f_2fe0() { return 4103; }

// sub_2ff0  (orig 0x2ff0, mov_ret)
uint32_t subsdk0_f_2ff0() { return 1; }

// sub_3000  (orig 0x3000, ret_only)
void subsdk0_f_3000() {}

// sub_39b0  (orig 0x39b0, mov_ret)
uint32_t subsdk0_f_39b0() { return 4102; }

// sub_44b0  (orig 0x44b0, mov_ret)
uint32_t subsdk0_f_44b0() { return 4102; }

// sub_44c0  (orig 0x44c0, mov_ret)
uint32_t subsdk0_f_44c0() { return 4102; }

// sub_55c0  (orig 0x55c0, mov_ret)
uint32_t subsdk0_f_55c0() { return 0; }

// sub_55d0  (orig 0x55d0, straight)
uint32_t subsdk0_f_55d0(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = 0;
    return 0;
}

// sub_56f0  (orig 0x56f0, setter-chain-zero)
void subsdk0_f_56f0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 240) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 224) = (struct u64x2){ 0, 0 };
}

// sub_5d10  (orig 0x5d10, ret_only)
void subsdk0_f_5d10() {}

// sub_6860  (orig 0x6860, mov_ret)
uint32_t subsdk0_f_6860() { return 4096; }

// sub_7c60  (orig 0x7c60, ret_only)
void subsdk0_f_7c60() {}

// sub_7cd0  (orig 0x7cd0, ret_only)
void subsdk0_f_7cd0() {}

// sub_9920  (orig 0x9920, straight)
uint32_t subsdk0_f_9920(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 40);
    return 0;
}

// sub_b9b0  (orig 0xb9b0, straight)
uint32_t subsdk0_f_b9b0(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 420) = (uint32_t)(a1);
    return 0;
}

// sub_bab0  (orig 0xbab0, straight)
uint32_t subsdk0_f_bab0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 112);
    return 0;
}

// sub_c800  (orig 0xc800, straight)
uint32_t subsdk0_f_c800(void* a0, void* a1) {
    *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0) + 185);
    return 0;
}

// sub_d810  (orig 0xd810, ret_only)
void subsdk0_f_d810() {}

// sub_d830  (orig 0xd830, mov_ret)
uint32_t subsdk0_f_d830() { return 0; }

// sub_d840  (orig 0xd840, mov_ret)
uint32_t subsdk0_f_d840() { return 0; }

// sub_d850  (orig 0xd850, mov_ret)
uint32_t subsdk0_f_d850() { return 0; }

// sub_d860  (orig 0xd860, mov_ret)
uint32_t subsdk0_f_d860() { return 0; }

// sub_d870  (orig 0xd870, ret_only)
void subsdk0_f_d870() {}

// sub_da20  (orig 0xda20, setter)
void subsdk0_f_da20(void* a0) { *(uint64_t*)((char*)(a0) + 2560) = 0; }

// sub_e9f0  (orig 0xe9f0, getter)
uint64_t subsdk0_f_e9f0(void* a0) { return *(uint64_t*)((char*)(a0) + 2560); }

// sub_11970  (orig 0x11970, ret_only)
void subsdk0_f_11970() {}

// sub_128c0  (orig 0x128c0, straight)
uint32_t subsdk0_f_128c0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 40);
    return 0;
}

// sub_14520  (orig 0x14520, copy2)
void subsdk0_f_14520(void* a0) { *(uint64_t*)((char*)(a0) + 1832) = *(uint64_t*)((char*)(a0) + 1824); }

// sub_14530  (orig 0x14530, getter)
uint32_t subsdk0_f_14530(void* a0) { return *(uint32_t*)((char*)(a0) + 1628); }

// sub_15100  (orig 0x15100, getter)
uint8_t subsdk0_f_15100(void* a0) { return *(uint8_t*)((char*)(a0) + 1810); }

// sub_15d70  (orig 0x15d70, getter)
uint8_t subsdk0_f_15d70(void* a0) { return *(uint8_t*)((char*)(a0) + 156); }

// sub_161b0  (orig 0x161b0, copy-chain-store)
void subsdk0_f_161b0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 104);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 16);
    *(uint64_t*)(char*)a1 = (uint64_t)(t1);
}

// sub_161c0  (orig 0x161c0, ret_only)
void subsdk0_f_161c0() {}

// sub_168f0  (orig 0x168f0, straight)
uint32_t subsdk0_f_168f0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 120) = (uint64_t)(a1);
    return 0;
}

// sub_16a50  (orig 0x16a50, straight)
void subsdk0_f_16a50(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1809) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_16a60  (orig 0x16a60, getter)
uint8_t subsdk0_f_16a60(void* a0) { return *(uint8_t*)((char*)(a0) + 1848); }

// sub_176c0  (orig 0x176c0, straight)
uint32_t subsdk0_f_176c0(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 48) = (uint32_t)(a1);
    return 0;
}

// sub_19a20  (orig 0x19a20, getter)
uint8_t subsdk0_f_19a20(void* a0) { return *(uint8_t*)((char*)(a0) + 344); }

// sub_19b20  (orig 0x19b20, getter)
uint32_t subsdk0_f_19b20(void* a0) { return *(uint32_t*)((char*)(a0) + 124); }

// sub_19f00  (orig 0x19f00, copy2)
void subsdk0_f_19f00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 128); }

// sub_19f10  (orig 0x19f10, straight)
void subsdk0_f_19f10(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 1256) = (uint8_t)k0;
}

// sub_1a050  (orig 0x1a050, straight)
uint32_t subsdk0_f_1a050(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 56) = (uint64_t)(a1);
    return 0;
}

// sub_1a1b0  (orig 0x1a1b0, getter)
uint8_t subsdk0_f_1a1b0(void* a0) { return *(uint8_t*)((char*)(a0) + 1273); }

// sub_1b090  (orig 0x1b090, straight)
uint32_t subsdk0_f_1b090(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 280) = (uint8_t)((((uint32_t)a1)) & (1));
    return 0;
}

// sub_1c770  (orig 0x1c770, setter)
void subsdk0_f_1c770(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 32) = a1; }

// sub_1ca60  (orig 0x1ca60, straight)
uint32_t subsdk0_f_1ca60(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 16);
    return 0;
}

// sub_1ca70  (orig 0x1ca70, ret_only)
void subsdk0_f_1ca70() {}

// sub_1ca80  (orig 0x1ca80, mov_ret)
uint32_t subsdk0_f_1ca80() { return 0; }

// sub_1ca90  (orig 0x1ca90, mov_ret)
uint32_t subsdk0_f_1ca90() { return -1010; }

// sub_1caa0  (orig 0x1caa0, straight-line)
typedef struct { unsigned char b[24]; } __S_f_1caa0;
__S_f_1caa0 subsdk0_f_1caa0() {
    __S_f_1caa0 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_1cab0  (orig 0x1cab0, ret_only)
void subsdk0_f_1cab0() {}

// sub_1e1b0  (orig 0x1e1b0, straight)
uint32_t subsdk0_f_1e1b0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 208) = (uint64_t)(a1);
    return 0;
}

// sub_1e240  (orig 0x1e240, mov_ret)
uint32_t subsdk0_f_1e240() { return 0; }

// sub_1fc70  (orig 0x1fc70, getter)
uint32_t subsdk0_f_1fc70(void* a0) { return *(uint32_t*)((char*)(a0) + 216); }

// sub_1fea0  (orig 0x1fea0, setter)
void subsdk0_f_1fea0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 216) = a1; }

// sub_21c60  (orig 0x21c60, straight)
uint32_t subsdk0_f_21c60(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 184) = (uint64_t)(a1);
    return 0;
}

// sub_223b0  (orig 0x223b0, getter)
uint32_t subsdk0_f_223b0(void* a0) { return *(uint32_t*)((char*)(a0) + 192); }

// sub_223c0  (orig 0x223c0, setter)
void subsdk0_f_223c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 192) = a1; }

// sub_23a60  (orig 0x23a60, setter-chain-zero)
void subsdk0_f_23a60(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 16) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 24) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
}

// sub_23b30  (orig 0x23b30, getter)
uint64_t subsdk0_f_23b30(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_23b40  (orig 0x23b40, straight)
uint64_t subsdk0_f_23b40(void* a0) { return (*(uint64_t*)((char*)(a0) + 40)) + (*(int32_t*)((char*)(a0))); }

// sub_23b50  (orig 0x23b50, getter)
uint64_t subsdk0_f_23b50(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_23b60  (orig 0x23b60, getter)
uint32_t subsdk0_f_23b60(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_23b70  (orig 0x23b70, getter)
uint32_t subsdk0_f_23b70(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_23c80  (orig 0x23c80, setter)
void subsdk0_f_23c80(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 24) = a1; }

// sub_23c90  (orig 0x23c90, getter)
uint32_t subsdk0_f_23c90(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_23ca0  (orig 0x23ca0, setter)
void subsdk0_f_23ca0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_23cb0  (orig 0x23cb0, getter)
uint64_t subsdk0_f_23cb0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_23cc0  (orig 0x23cc0, setter)
void subsdk0_f_23cc0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 32) = a1; }

// sub_23cd0  (orig 0x23cd0, getter)
uint32_t subsdk0_f_23cd0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_23ce0  (orig 0x23ce0, setter)
void subsdk0_f_23ce0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; }

// sub_23cf0  (orig 0x23cf0, setter)
void subsdk0_f_23cf0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_23d00  (orig 0x23d00, setter)
void subsdk0_f_23d00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 56) = a1; }

// sub_23d10  (orig 0x23d10, getter)
uint64_t subsdk0_f_23d10(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_23d20  (orig 0x23d20, getter)
uint64_t subsdk0_f_23d20(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_23d40  (orig 0x23d40, ret_only)
void subsdk0_f_23d40() {}

// sub_25870  (orig 0x25870, getter)
uint64_t subsdk0_f_25870(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_26840  (orig 0x26840, straight)
uint32_t subsdk0_f_26840(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 2320) = (uint32_t)(a1);
    return 0;
}

// sub_26890  (orig 0x26890, ptr_add)
void* subsdk0_f_26890(void* a0) { return (char*)a0 + 8; }

// sub_26ad0  (orig 0x26ad0, ret_only)
void subsdk0_f_26ad0() {}

// sub_283b0  (orig 0x283b0, ret_only)
void subsdk0_f_283b0() {}

// sub_283c0  (orig 0x283c0, setter)
void subsdk0_f_283c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_28f00  (orig 0x28f00, compare)
bool subsdk0_f_28f00(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 192)) != (uint64_t)(0); }

// sub_29370  (orig 0x29370, straight)
uint32_t subsdk0_f_29370(void* a0) { return (*(uint32_t*)((char*)(a0) + 444)) - (*(uint32_t*)((char*)(a0) + 464)); }

// sub_29540  (orig 0x29540, getter)
uint32_t subsdk0_f_29540(void* a0) { return *(uint32_t*)((char*)(a0) + 464); }

// sub_2b020  (orig 0x2b020, ret_only)
void subsdk0_f_2b020() {}

// sub_2b030  (orig 0x2b030, ret_only)
void subsdk0_f_2b030() {}

// sub_2b690  (orig 0x2b690, ret_only)
void subsdk0_f_2b690() {}

// sub_2b6a0  (orig 0x2b6a0, ret_only)
void subsdk0_f_2b6a0() {}

// sub_2b7b0  (orig 0x2b7b0, ret_only)
void subsdk0_f_2b7b0() {}

// sub_2b7c0  (orig 0x2b7c0, ret_only)
void subsdk0_f_2b7c0() {}

// sub_2b8d0  (orig 0x2b8d0, mov_ret)
uint32_t subsdk0_f_2b8d0() { return 16200; }

// sub_2b920  (orig 0x2b920, mov_ret)
uint32_t subsdk0_f_2b920() { return 37184; }

// sub_2b970  (orig 0x2b970, mov_ret)
uint32_t subsdk0_f_2b970() { return 1984; }

// sub_2b9c0  (orig 0x2b9c0, mov_ret)
uint32_t subsdk0_f_2b9c0() { return 65536; }

// sub_2ba10  (orig 0x2ba10, mov_ret)
uint32_t subsdk0_f_2ba10() { return 56; }

// sub_2ba60  (orig 0x2ba60, mov_ret)
uint32_t subsdk0_f_2ba60() { return 32784; }

// sub_2bab0  (orig 0x2bab0, mov_ret)
uint32_t subsdk0_f_2bab0() { return 8208; }

// sub_2ebb0  (orig 0x2ebb0, getter)
uint32_t subsdk0_f_2ebb0(void* a0) { return *(uint32_t*)((char*)(a0) + 13456L); }

// sub_32210  (orig 0x32210, setter-chain)
void subsdk0_f_32210(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 144) = a2; *(uint64_t*)((char*)(a0) + 152) = a3; }

// sub_34010  (orig 0x34010, ret_only)
void subsdk0_f_34010() {}

// sub_40b60  (orig 0x40b60, ret_only)
void subsdk0_f_40b60() {}

// sub_41130  (orig 0x41130, getter)
uint32_t subsdk0_f_41130(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_41140  (orig 0x41140, straight)
uint32_t subsdk0_f_41140(void* a0) { return (*(uint32_t*)((char*)(a0) + 28)) - (*(uint32_t*)((char*)(a0))); }

// sub_41c90  (orig 0x41c90, copy-chain)
void subsdk0_f_41c90(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint8_t*)((char*)(a0) + 16) = 0; *(uint8_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 64) = 0; *(uint16_t*)((char*)(a0) + 72) = *(uint16_t*)((char*)(a0) + 60); }

// sub_48930  (orig 0x48930, ret_only)
void subsdk0_f_48930() {}

// sub_49920  (orig 0x49920, ret_only)
void subsdk0_f_49920() {}

// sub_49960  (orig 0x49960, ret_only)
void subsdk0_f_49960() {}

// sub_4a820  (orig 0x4a820, setter-chain)
void subsdk0_f_4a820(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint32_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint32_t*)((char*)(a0) + 32) = a2; }

// sub_4cbf0  (orig 0x4cbf0, setter)
void subsdk0_f_4cbf0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 64) = a1; }

// sub_4dfa0  (orig 0x4dfa0, setter)
void subsdk0_f_4dfa0(void* a0) { *(uint8_t*)((char*)(a0) + 464) = 0; }

// sub_4dfe0  (orig 0x4dfe0, compare)
bool subsdk0_f_4dfe0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 461)) != (uint64_t)(0); }

// sub_52e60  (orig 0x52e60, getter)
uint32_t subsdk0_f_52e60(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_52e70  (orig 0x52e70, compare)
bool subsdk0_f_52e70(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 52)) != (uint64_t)(0); }

// sub_52e80  (orig 0x52e80, getter)
uint32_t subsdk0_f_52e80(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_52e90  (orig 0x52e90, getter)
uint8_t subsdk0_f_52e90(void* a0) { return *(uint8_t*)((char*)(a0) + 48); }

// sub_52ee0  (orig 0x52ee0, mov_ret)
uint32_t subsdk0_f_52ee0() { return 1408; }

// sub_52f30  (orig 0x52f30, mov_ret)
uint32_t subsdk0_f_52f30() { return 8192; }

// sub_53380  (orig 0x53380, straight-line)
uint64_t subsdk0_f_53380(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((uint64_t)(((uint32_t)(((uint32_t)a1)))))) * (((uint64_t)(((uint32_t)(48))))))) + (56); }

// sub_53390  (orig 0x53390, getter)
uint32_t subsdk0_f_53390(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_53ff0  (orig 0x53ff0, straight-line)
uint32_t subsdk0_f_53ff0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 4)));
    return *(uint32_t*)((char*)(p0) + 1364);
}

// sub_54000  (orig 0x54000, straight)
uint32_t subsdk0_f_54000(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1) + 1388);
    return 0;
}

// sub_55980  (orig 0x55980, getter)
uint32_t subsdk0_f_55980(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_609b0  (orig 0x609b0, mov_ret)
uint32_t subsdk0_f_609b0() { return 0; }

// sub_70dc0  (orig 0x70dc0, mov_ret)
uint32_t subsdk0_f_70dc0() { return 3448; }

// sub_70e10  (orig 0x70e10, mov_ret)
uint32_t subsdk0_f_70e10() { return 960; }

// sub_70e60  (orig 0x70e60, mov_ret)
uint32_t subsdk0_f_70e60() { return 38808; }

// sub_70eb0  (orig 0x70eb0, mov_ret)
uint32_t subsdk0_f_70eb0() { return 20880; }

// sub_70f00  (orig 0x70f00, mov_ret)
uint32_t subsdk0_f_70f00() { return 27792; }

// sub_70f50  (orig 0x70f50, mov_ret)
uint32_t subsdk0_f_70f50() { return 8584; }

// sub_70fa0  (orig 0x70fa0, mov_ret)
uint32_t subsdk0_f_70fa0() { return 8208; }

// sub_70ff0  (orig 0x70ff0, mov_ret)
uint32_t subsdk0_f_70ff0() { return 8208; }

// sub_76ae0  (orig 0x76ae0, mov_ret)
uint32_t subsdk0_f_76ae0() { return -1; }

// sub_78e40  (orig 0x78e40, mov_ret)
uint32_t subsdk0_f_78e40() { return -1010; }

// sub_78e50  (orig 0x78e50, mov_ret)
uint32_t subsdk0_f_78e50() { return -1010; }

// sub_78e60  (orig 0x78e60, mov_ret)
uint32_t subsdk0_f_78e60() { return -1010; }

// sub_78e70  (orig 0x78e70, mov_ret)
uint32_t subsdk0_f_78e70() { return -1010; }

// sub_78e80  (orig 0x78e80, mov_ret)
uint32_t subsdk0_f_78e80() { return -1010; }

// sub_7a810  (orig 0x7a810, mov_ret)
uint64_t subsdk0_f_7a810() { return 0; }

// sub_7caf0  (orig 0x7caf0, setter)
void subsdk0_f_7caf0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 34) = a1; }

// sub_7e110  (orig 0x7e110, getter)
uint16_t subsdk0_f_7e110(void* a0) { return *(uint16_t*)((char*)(a0) + 30); }

// sub_82b20  (orig 0x82b20, mov_ret)
uint32_t subsdk0_f_82b20() { return 0; }

// sub_84460  (orig 0x84460, ret_only)
void subsdk0_f_84460() {}

// sub_8a610  (orig 0x8a610, mov_ret)
uint64_t subsdk0_f_8a610() { return 0; }

// sub_8b4c0  (orig 0x8b4c0, ret_only)
void subsdk0_f_8b4c0() {}

// sub_8b4d0  (orig 0x8b4d0, ret_only)
void subsdk0_f_8b4d0() {}

// sub_8bbf0  (orig 0x8bbf0, ret_only)
void subsdk0_f_8bbf0() {}

// sub_8c070  (orig 0x8c070, getter)
uint32_t subsdk0_f_8c070(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_98f10  (orig 0x98f10, ret_only)
void subsdk0_f_98f10() {}

// sub_98f20  (orig 0x98f20, ret_only)
void subsdk0_f_98f20() {}

// sub_99030  (orig 0x99030, straight)
void subsdk0_f_99030(void* a0) {
    *(uint16_t*)((char*)(a0) + 112) = (*(uint16_t*)((char*)(a0))) << (3);
    *(uint16_t*)((char*)(a0) + 96) = (*(uint16_t*)((char*)(a0))) << (3);
    *(uint16_t*)((char*)(a0) + 80) = (*(uint16_t*)((char*)(a0))) << (3);
    *(uint16_t*)((char*)(a0) + 64) = (*(uint16_t*)((char*)(a0))) << (3);
    *(uint16_t*)((char*)(a0) + 48) = (*(uint16_t*)((char*)(a0))) << (3);
    *(uint16_t*)((char*)(a0) + 32) = (*(uint16_t*)((char*)(a0))) << (3);
    *(uint16_t*)((char*)(a0) + 16) = (*(uint16_t*)((char*)(a0))) << (3);
    *(uint16_t*)((char*)(a0)) = (*(uint16_t*)((char*)(a0))) << (3);
}

// sub_99830  (orig 0x99830, ret_only)
void subsdk0_f_99830() {}

// sub_9d060  (orig 0x9d060, straight)
void subsdk0_f_9d060(void* a0, void* a1, void* a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(p0) + 200);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 204);
}

// sub_9d080  (orig 0x9d080, straight)
void subsdk0_f_9d080(void* a0, void* a1, void* a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(p0) + 192);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 196);
}

// sub_9d0a0  (orig 0x9d0a0, getter-chain)
uint32_t subsdk0_f_9d0a0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 224); }

// sub_9d0b0  (orig 0x9d0b0, copy2)
void subsdk0_f_9d0b0(void* a0, uint64_t a1) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 32)) + 312)) = a1; }

// sub_9d110  (orig 0x9d110, getter-chain)
uint32_t subsdk0_f_9d110(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 216); }

// sub_9d120  (orig 0x9d120, getter)
uint64_t subsdk0_f_9d120(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_9d130  (orig 0x9d130, getter-chain)
uint32_t subsdk0_f_9d130(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 228); }

// sub_9d140  (orig 0x9d140, getter-chain)
uint32_t subsdk0_f_9d140(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 296); }

// sub_9d150  (orig 0x9d150, compare-pred)
bool subsdk0_f_9d150(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 32)) + 232)) == (uint32_t)(0); }

// sub_9d980  (orig 0x9d980, mov_ret)
uint32_t subsdk0_f_9d980() { return 0; }

// sub_9d990  (orig 0x9d990, compare-pred)
bool subsdk0_f_9d990(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 32)) + 256)) == (uint32_t)(0); }

// sub_a44f0  (orig 0xa44f0, ret_only)
void subsdk0_f_a44f0() {}

// sub_a4500  (orig 0xa4500, ret_only)
void subsdk0_f_a4500() {}

// sub_b08d0  (orig 0xb08d0, straight)
uint32_t subsdk0_f_b08d0(uint32_t a0) { return (((((uint32_t)a0) < 6)) ? (2) : (((((uint32_t)a0) != 6) ? 1 : 0))); }

// sub_b1160  (orig 0xb1160, ret_only)
void subsdk0_f_b1160() {}

// sub_b80c0  (orig 0xb80c0, compare)
bool subsdk0_f_b80c0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 2356)) == (uint64_t)(0); }

// sub_b8800  (orig 0xb8800, compare)
bool subsdk0_f_b8800(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 16)) == (uint64_t)(0); }

// sub_b9cd0  (orig 0xb9cd0, ret_only)
void subsdk0_f_b9cd0() {}

// sub_bd800  (orig 0xbd800, straight)
uint32_t subsdk0_f_bd800(void* a0) { return (*(uint32_t*)((char*)(a0))) + (1); }

// sub_be2a0  (orig 0xbe2a0, getter)
uint32_t subsdk0_f_be2a0(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_c1330  (orig 0xc1330, setter-chain-zero)
void subsdk0_f_c1330(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_cd010  (orig 0xcd010, straight-line)
uint64_t subsdk0_f_cd010(uint32_t a0) { return (1013904223) + ((((uint32_t)a0)) * (1664525)); }

// libopus_unknown_fixed  (orig 0xd2620, strlit-ret)
const char *subsdk0_f_d2620() { static char g_f_d2620[1]; __asm__ volatile("" ::: "memory"); return g_f_d2620; }

// sub_e0160  (orig 0xe0160, straight)
uint32_t subsdk0_f_e0160(void* a0) {
    *(uint32_t*)((char*)(a0)) = 8600;
    return 0;
}

// sub_e2930  (orig 0xe2930, straight)
uint32_t subsdk0_f_e2930(void* a0) {
    *(uint32_t*)((char*)(a0)) = 19688;
    return 0;
}

// sub_e61a0  (orig 0xe61a0, straight)
void subsdk0_f_e61a0(void* a0, uint64_t a1, uint64_t a2) {
    uint32_t k0 = -1;
    *(uint64_t*)((char*)(a0) + 20) = 141733920768;
    *(uint64_t*)((char*)(a0) + 28) = -9223372036854775808;
    *(uint64_t*)((char*)(a0)) = (uint64_t)(a1);
    *(uint64_t*)((char*)(a0) + 12) = 0;
    *(uint64_t*)((char*)(a0) + 36) = 0;
    *(uint32_t*)((char*)(a0) + 8) = (uint32_t)(a2);
    *(uint64_t*)((char*)(a0) + 44) = (uint64_t)k0;
}

// sub_ed5a0  (orig 0xed5a0, straight-line)
uint32_t subsdk0_f_ed5a0(uint32_t a0) { return ((18439) + (((((uint32_t)a0)) << 11))) & (4294965248); }

// sub_ef480  (orig 0xef480, straight-line)
uint32_t subsdk0_f_ef480(uint32_t a0) { return ((22535) + ((((uint32_t)a0)) * (10240))) & (4294965248); }

// sub_f54a0  (orig 0xf54a0, mov_ret)
uint32_t subsdk0_f_f54a0() { return 47104; }

// sub_f76b0  (orig 0xf76b0, straight-line)
uint32_t subsdk0_f_f76b0(uint32_t a0) { return (59392) + ((((uint32_t)a0)) * (40)); }

// sub_100520  (orig 0x100520, mov_ret)
uint32_t subsdk0_f_100520() { return 496; }

// sub_100530  (orig 0x100530, setter)
void subsdk0_f_100530(void* a0) { *(uint32_t*)((char*)(a0) + 4) = 0; }

// sub_100660  (orig 0x100660, getter)
uint32_t subsdk0_f_100660(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_1076b0  (orig 0x1076b0, getter)
uint32_t subsdk0_f_1076b0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_1076d0  (orig 0x1076d0, getter)
uint8_t subsdk0_f_1076d0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_107f60  (orig 0x107f60, ptr_add)
void* subsdk0_f_107f60(void* a0) { return (char*)a0 + 8; }

// sub_10eeb0  (orig 0x10eeb0, ptr_add)
void* subsdk0_f_10eeb0(void* a0) { return (char*)a0 + 8; }

// sub_10f3a0  (orig 0x10f3a0, ptr_add)
void* subsdk0_f_10f3a0(void* a0) { return (char*)a0 + 8; }

// sub_10f8f0  (orig 0x10f8f0, ret_only)
void subsdk0_f_10f8f0() {}

// sub_10f900  (orig 0x10f900, ret_only)
void subsdk0_f_10f900() {}

// sub_10fe80  (orig 0x10fe80, ret_only)
void subsdk0_f_10fe80() {}

// sub_10fe90  (orig 0x10fe90, ret_only)
void subsdk0_f_10fe90() {}

// sub_115e10  (orig 0x115e10, straight)
uint32_t subsdk0_f_115e10(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return ((*(uint32_t*)((char*)(p0) + 28)) >> (10)) & (1);
}

// sub_116000  (orig 0x116000, getter)
uint64_t subsdk0_f_116000(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_1165a0  (orig 0x1165a0, straight)
void subsdk0_f_1165a0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 120) = (uint8_t)k0;
}

// sub_1165b0  (orig 0x1165b0, getter)
uint64_t subsdk0_f_1165b0(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_1165c0  (orig 0x1165c0, getter)
uint64_t subsdk0_f_1165c0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_1168d0  (orig 0x1168d0, getter-chain)
uint32_t subsdk0_f_1168d0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 44); }

// sub_116910  (orig 0x116910, mov_ret)
uint64_t subsdk0_f_116910() { return 0; }

// sub_116920  (orig 0x116920, mov_ret)
uint32_t subsdk0_f_116920() { return 0; }

// sub_116990  (orig 0x116990, ret_only)
void subsdk0_f_116990() {}

// sub_1169a0  (orig 0x1169a0, getter-chain)
uint32_t subsdk0_f_1169a0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 44); }

// sub_1169b0  (orig 0x1169b0, getter-chain)
uint32_t subsdk0_f_1169b0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16)))); }

// sub_1169f0  (orig 0x1169f0, mov_ret)
uint32_t subsdk0_f_1169f0() { return 0; }

// sub_118020  (orig 0x118020, ptr_add)
void* subsdk0_f_118020(void* a0) { return (char*)a0 + 8; }

// sub_118250  (orig 0x118250, getter)
uint64_t subsdk0_f_118250(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_11afc0  (orig 0x11afc0, getter)
uint64_t subsdk0_f_11afc0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_11b680  (orig 0x11b680, getter)
uint64_t subsdk0_f_11b680(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_11bec0  (orig 0x11bec0, ptr_add)
void* subsdk0_f_11bec0(void* a0) { return (char*)a0 + 8; }

// sub_11c0f0  (orig 0x11c0f0, getter)
uint64_t subsdk0_f_11c0f0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_11cb60  (orig 0x11cb60, getter)
uint64_t subsdk0_f_11cb60(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_11d220  (orig 0x11d220, ptr_add)
void* subsdk0_f_11d220(void* a0) { return (char*)a0 + 8; }

// sub_11d450  (orig 0x11d450, getter)
uint64_t subsdk0_f_11d450(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_11d530  (orig 0x11d530, mov_ret)
uint64_t subsdk0_f_11d530() { return 0; }

// sub_11d540  (orig 0x11d540, straight-line)
typedef struct { unsigned char b[24]; } __S_f_11d540;
__S_f_11d540 subsdk0_f_11d540() {
    __S_f_11d540 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_11d550  (orig 0x11d550, straight-line)
uint64_t subsdk0_f_11d550(uint64_t unused0, uint64_t unused1, uint64_t unused2, uint64_t a3) { return ((((((uint64_t)a3)) >> (31) != 0)) ? (-2) : (0)); }

// sub_11d570  (orig 0x11d570, mov_ret)
uint64_t subsdk0_f_11d570() { return 0; }

// sub_11e470  (orig 0x11e470, ptr_add)
void* subsdk0_f_11e470(void* a0) { return (char*)a0 + 8; }

// sub_11e6a0  (orig 0x11e6a0, getter)
uint64_t subsdk0_f_11e6a0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_11ec10  (orig 0x11ec10, mov_ret)
uint32_t subsdk0_f_11ec10() { return -38; }

// sub_11ec20  (orig 0x11ec20, mov_ret)
uint32_t subsdk0_f_11ec20() { return -38; }

// sub_11ee90  (orig 0x11ee90, ptr_add)
void* subsdk0_f_11ee90(void* a0) { return (char*)a0 + 8; }

// sub_11f060  (orig 0x11f060, mov_ret)
uint32_t subsdk0_f_11f060() { return 0; }

// sub_11f0d0  (orig 0x11f0d0, ptr_add)
void* subsdk0_f_11f0d0(void* a0) { return (char*)a0 + 8; }

// sub_11f300  (orig 0x11f300, getter)
uint64_t subsdk0_f_11f300(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_11f3e0  (orig 0x11f3e0, mov_ret)
uint32_t subsdk0_f_11f3e0() { return 1; }

// sub_11f4e0  (orig 0x11f4e0, mov_ret)
uint32_t subsdk0_f_11f4e0() { return 0; }

// sub_11f4f0  (orig 0x11f4f0, mov_ret)
uint32_t subsdk0_f_11f4f0() { return 0; }

// sub_11f500  (orig 0x11f500, mov_ret)
uint32_t subsdk0_f_11f500() { return 0; }

// sub_11f510  (orig 0x11f510, mov_ret)
uint32_t subsdk0_f_11f510() { return 0; }

// sub_11f520  (orig 0x11f520, mov_ret)
uint32_t subsdk0_f_11f520() { return 0; }

// sub_11f530  (orig 0x11f530, mov_ret)
uint32_t subsdk0_f_11f530() { return 0; }

// sub_11f540  (orig 0x11f540, mov_ret)
uint32_t subsdk0_f_11f540() { return 0; }

// sub_11f550  (orig 0x11f550, mov_ret)
uint32_t subsdk0_f_11f550() { return 0; }

// sub_11f560  (orig 0x11f560, mov_ret)
uint32_t subsdk0_f_11f560() { return 0; }

// sub_11f570  (orig 0x11f570, mov_ret)
uint32_t subsdk0_f_11f570() { return 0; }

// sub_11f580  (orig 0x11f580, mov_ret)
uint32_t subsdk0_f_11f580() { return 0; }

// sub_11f590  (orig 0x11f590, mov_ret)
uint32_t subsdk0_f_11f590() { return 0; }

// sub_11f5a0  (orig 0x11f5a0, mov_ret)
uint32_t subsdk0_f_11f5a0() { return 0; }

// sub_11f5b0  (orig 0x11f5b0, mov_ret)
uint32_t subsdk0_f_11f5b0() { return 0; }

// sub_11f5c0  (orig 0x11f5c0, mov_ret)
uint32_t subsdk0_f_11f5c0() { return 0; }

// sub_11f5d0  (orig 0x11f5d0, mov_ret)
uint32_t subsdk0_f_11f5d0() { return 0; }

// sub_11f5e0  (orig 0x11f5e0, mov_ret)
uint32_t subsdk0_f_11f5e0() { return 0; }

// sub_11f5f0  (orig 0x11f5f0, mov_ret)
uint32_t subsdk0_f_11f5f0() { return 0; }

// sub_11f600  (orig 0x11f600, mov_ret)
uint32_t subsdk0_f_11f600() { return 0; }

// sub_11f610  (orig 0x11f610, mov_ret)
uint32_t subsdk0_f_11f610() { return 0; }

// sub_11f620  (orig 0x11f620, mov_ret)
uint32_t subsdk0_f_11f620() { return 0; }

// sub_11f630  (orig 0x11f630, mov_ret)
uint32_t subsdk0_f_11f630() { return 0; }

// sub_11f640  (orig 0x11f640, mov_ret)
uint32_t subsdk0_f_11f640() { return 0; }

// sub_11f650  (orig 0x11f650, mov_ret)
uint32_t subsdk0_f_11f650() { return 0; }

// sub_11f660  (orig 0x11f660, mov_ret)
uint32_t subsdk0_f_11f660() { return 0; }

// sub_11f900  (orig 0x11f900, getter)
uint64_t subsdk0_f_11f900(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_11f9e0  (orig 0x11f9e0, ret_only)
void subsdk0_f_11f9e0() {}

// sub_1203f0  (orig 0x1203f0, mov_ret)
uint32_t subsdk0_f_1203f0() { return 0; }

// sub_120420  (orig 0x120420, ptr_add)
void* subsdk0_f_120420(void* a0) { return (char*)a0 + 8; }

// sub_120650  (orig 0x120650, ptr_add)
void* subsdk0_f_120650(void* a0) { return (char*)a0 + 8; }

// sub_120880  (orig 0x120880, getter)
uint64_t subsdk0_f_120880(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_120d30  (orig 0x120d30, getter)
uint64_t subsdk0_f_120d30(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_121410  (orig 0x121410, getter)
uint32_t subsdk0_f_121410(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_121870  (orig 0x121870, getter)
uint8_t subsdk0_f_121870(void* a0) { return *(uint8_t*)((char*)(a0) + 40); }

// sub_122700  (orig 0x122700, ret_only)
void subsdk0_f_122700() {}

// sub_122710  (orig 0x122710, ret_only)
void subsdk0_f_122710() {}

// sub_122980  (orig 0x122980, ret_only)
void subsdk0_f_122980() {}

// sub_122990  (orig 0x122990, ret_only)
void subsdk0_f_122990() {}

// sub_1241a0  (orig 0x1241a0, straight)
void subsdk0_f_1241a0(void* a0) {
    *(uint64_t*)((char*)(a0) + 140) = -1;
    *(uint64_t*)((char*)(a0) + 180) = 0;
    *(uint8_t*)((char*)(a0) + 212) = 0;
}

// sub_1261b0  (orig 0x1261b0, ret_only)
void subsdk0_f_1261b0() {}

// sub_1261e0  (orig 0x1261e0, ret_only)
void subsdk0_f_1261e0() {}

// sub_126220  (orig 0x126220, ret_only)
void subsdk0_f_126220() {}

// sub_126520  (orig 0x126520, ret_only)
void subsdk0_f_126520() {}

// sub_126530  (orig 0x126530, ret_only)
void subsdk0_f_126530() {}

// sub_126540  (orig 0x126540, setter-chain-zero)
void subsdk0_f_126540(void* a0) {
    *(uint32_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 4) = 0;
}

// sub_126550  (orig 0x126550, ret_only)
void subsdk0_f_126550() {}

// sub_126560  (orig 0x126560, ret_only)
void subsdk0_f_126560() {}

// sub_126570  (orig 0x126570, setter-chain-zero)
void subsdk0_f_126570(void* a0) {
    *(uint32_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 4) = 0;
}

// sub_1267d0  (orig 0x1267d0, setter)
void subsdk0_f_1267d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 32) = a1; }

// sub_1276a0  (orig 0x1276a0, ret_only)
void subsdk0_f_1276a0() {}

// sub_1286e0  (orig 0x1286e0, ret_only)
void subsdk0_f_1286e0() {}

// sub_129920  (orig 0x129920, ret_only)
void subsdk0_f_129920() {}

// sub_12a0c0  (orig 0x12a0c0, mov_ret)
uint32_t subsdk0_f_12a0c0() { return 0; }

// sub_12a100  (orig 0x12a100, mov_ret)
uint32_t subsdk0_f_12a100() { return -38; }

// sub_12a2c0  (orig 0x12a2c0, mov_ret)
uint32_t subsdk0_f_12a2c0() { return 3; }

// sub_12a450  (orig 0x12a450, mov_ret)
uint32_t subsdk0_f_12a450() { return 0; }

// sub_12a460  (orig 0x12a460, mov_ret)
uint32_t subsdk0_f_12a460() { return -38; }

// sub_12a470  (orig 0x12a470, mov_ret)
uint32_t subsdk0_f_12a470() { return -38; }

// sub_12a480  (orig 0x12a480, mov_ret)
uint32_t subsdk0_f_12a480() { return -38; }

// sub_12a490  (orig 0x12a490, mov_ret)
uint32_t subsdk0_f_12a490() { return 0; }

// sub_12a510  (orig 0x12a510, mov_ret)
uint32_t subsdk0_f_12a510() { return -38; }

// sub_12a520  (orig 0x12a520, mov_ret)
uint32_t subsdk0_f_12a520() { return -38; }

// sub_12a530  (orig 0x12a530, mov_ret)
uint32_t subsdk0_f_12a530() { return -38; }

// sub_12a540  (orig 0x12a540, mov_ret)
uint32_t subsdk0_f_12a540() { return -38; }

// sub_12a700  (orig 0x12a700, setter)
void subsdk0_f_12a700(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 128) = a1; }

// sub_12adf0  (orig 0x12adf0, getter)
uint64_t subsdk0_f_12adf0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_12b020  (orig 0x12b020, straight)
void subsdk0_f_12b020(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_12b170  (orig 0x12b170, getter)
uint32_t subsdk0_f_12b170(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_12b760  (orig 0x12b760, ret_only)
void subsdk0_f_12b760() {}

// sub_12b770  (orig 0x12b770, ret_only)
void subsdk0_f_12b770() {}

// sub_12e4b0  (orig 0x12e4b0, straight-line)
uint32_t subsdk0_f_12e4b0(uint64_t unused0, void* a1, void* a2) { return (((*(uint32_t*)((char*)(a2)) < *(uint32_t*)((char*)(a1))) ? 1 : 0)) - (((*(uint32_t*)((char*)(a1)) < *(uint32_t*)((char*)(a2))) ? 1 : 0)); }

// sub_130ea0  (orig 0x130ea0, getter)
uint32_t subsdk0_f_130ea0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_133c40  (orig 0x133c40, ret_only)
void subsdk0_f_133c40() {}

// sub_133c50  (orig 0x133c50, ret_only)
void subsdk0_f_133c50() {}

// sub_1370e0  (orig 0x1370e0, getter)
uint8_t subsdk0_f_1370e0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_1370f0  (orig 0x1370f0, getter)
uint64_t subsdk0_f_1370f0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_1389e0  (orig 0x1389e0, ret_only)
void subsdk0_f_1389e0() {}

// sub_138a80  (orig 0x138a80, mov_ret)
uint32_t subsdk0_f_138a80() { return 0; }

// sub_139260  (orig 0x139260, setter)
void subsdk0_f_139260(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 160) = a1; }

// sub_139270  (orig 0x139270, ret_only)
void subsdk0_f_139270() {}

// sub_139280  (orig 0x139280, ret_only)
void subsdk0_f_139280() {}

// sub_139290  (orig 0x139290, ret_only)
void subsdk0_f_139290() {}

// sub_1392a0  (orig 0x1392a0, ret_only)
void subsdk0_f_1392a0() {}

// sub_1392b0  (orig 0x1392b0, straight-line)
typedef struct { unsigned char b[24]; } __S_f_1392b0;
__S_f_1392b0 subsdk0_f_1392b0() {
    __S_f_1392b0 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_1392c0  (orig 0x1392c0, straight-line)
typedef struct { unsigned char b[24]; } __S_f_1392c0;
__S_f_1392c0 subsdk0_f_1392c0() {
    __S_f_1392c0 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_1392d0  (orig 0x1392d0, mov_ret)
uint32_t subsdk0_f_1392d0() { return -38; }

// sub_1392e0  (orig 0x1392e0, mov_ret)
uint32_t subsdk0_f_1392e0() { return 0; }

// sub_139370  (orig 0x139370, straight)
void subsdk0_f_139370(void* a0) {
    *(uint64_t*)((char*)(a0) + 48) = 0;
    *(uint64_t*)((char*)(a0) + 8) = -1;
}

// sub_13b860  (orig 0x13b860, straight)
void subsdk0_f_13b860(void* a0) {
    *(uint8_t*)((char*)(a0) + 464) = 0;
    *(uint32_t*)((char*)(a0) + 456) = (*(uint32_t*)((char*)(a0) + 456)) + (1);
}

// sub_13bcc0  (orig 0x13bcc0, mov_ret)
uint32_t subsdk0_f_13bcc0() { return 0; }

// sub_13da50  (orig 0x13da50, straight)
uint32_t subsdk0_f_13da50(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 216);
    return 0;
}

// sub_13da60  (orig 0x13da60, getter)
uint64_t subsdk0_f_13da60(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_13ef40  (orig 0x13ef40, straight)
void subsdk0_f_13ef40(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 40) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 44) = (uint32_t)(a1);
}

// sub_1441d0  (orig 0x1441d0, straight)
uint32_t subsdk0_f_1441d0(void* a0) { return (((*(uint32_t*)((char*)(a0) + 188) != 5) ? 1 : 0)) & (((*(uint32_t*)((char*)(a0) + 188) != 3) ? 1 : 0)); }

// sub_144960  (orig 0x144960, straight)
void subsdk0_f_144960(void* a0) {
    *(uint32_t*)((char*)(a0) + 176) = (*(uint32_t*)((char*)(a0) + 176)) + (1);
}

// sub_145330  (orig 0x145330, mov_ret)
uint32_t subsdk0_f_145330() { return -38; }

// sub_145340  (orig 0x145340, mov_ret)
uint64_t subsdk0_f_145340() { return 0; }

// sub_145350  (orig 0x145350, straight-line)
typedef struct { unsigned char b[24]; } __S_f_145350;
__S_f_145350 subsdk0_f_145350() {
    __S_f_145350 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_145360  (orig 0x145360, mov_ret)
uint64_t subsdk0_f_145360() { return -38; }

// sub_145370  (orig 0x145370, mov_ret)
uint32_t subsdk0_f_145370() { return -38; }

// sub_145380  (orig 0x145380, mov_ret)
uint32_t subsdk0_f_145380() { return -38; }

// sub_145870  (orig 0x145870, ret_only)
void subsdk0_f_145870() {}

// sub_145880  (orig 0x145880, ret_only)
void subsdk0_f_145880() {}

// sub_1459f0  (orig 0x1459f0, getter)
uint64_t subsdk0_f_1459f0(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_145b40  (orig 0x145b40, compare)
bool subsdk0_f_145b40(void* a0, uint64_t a1) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 120)) > (uint64_t)(a1); }

// sub_1468c0  (orig 0x1468c0, ret_only)
void subsdk0_f_1468c0() {}

// sub_1468d0  (orig 0x1468d0, ret_only)
void subsdk0_f_1468d0() {}

// sub_147020  (orig 0x147020, straight)
void subsdk0_f_147020(void* a0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 480);
    *(uint64_t*)((char*)(a2)) = *(uint64_t*)((char*)(a0) + 488);
}

// sub_1498b0  (orig 0x1498b0, ret_only)
void subsdk0_f_1498b0() {}

// sub_1498c0  (orig 0x1498c0, ret_only)
void subsdk0_f_1498c0() {}

// sub_14a420  (orig 0x14a420, setter-chain)
void subsdk0_f_14a420(uint64_t unused0, void* a1, void* a2) { *(uint64_t*)((char*)(a1)) = 0; *(uint64_t*)((char*)(a2)) = 0; }

// sub_14a4b0  (orig 0x14a4b0, ret_only)
void subsdk0_f_14a4b0() {}

// sub_14a4c0  (orig 0x14a4c0, ret_only)
void subsdk0_f_14a4c0() {}

// sub_14b480  (orig 0x14b480, mov_ret)
uint32_t subsdk0_f_14b480() { return 0; }

// sub_14b730  (orig 0x14b730, mov_ret)
uint32_t subsdk0_f_14b730() { return -38; }

// sub_14c300  (orig 0x14c300, straight)
uint32_t subsdk0_f_14c300(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 181) = (uint8_t)(((((uint32_t)a1) != 0) ? 1 : 0));
    return 0;
}

// sub_14c320  (orig 0x14c320, mov_ret)
uint32_t subsdk0_f_14c320() { return 4; }

// sub_14c500  (orig 0x14c500, mov_ret)
uint32_t subsdk0_f_14c500() { return -38; }

// sub_14c510  (orig 0x14c510, mov_ret)
uint32_t subsdk0_f_14c510() { return -38; }

// sub_14d060  (orig 0x14d060, straight)
void subsdk0_f_14d060(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 388) = (uint8_t)k0;
}

// sub_14d070  (orig 0x14d070, straight)
void subsdk0_f_14d070(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 389) = (uint8_t)k0;
}

// sub_155870  (orig 0x155870, ret_only)
void subsdk0_f_155870() {}

// sub_155f40  (orig 0x155f40, mov_ret)
uint32_t subsdk0_f_155f40() { return 0; }

// sub_1561e0  (orig 0x1561e0, ret_only)
void subsdk0_f_1561e0() {}

// sub_1561f0  (orig 0x1561f0, ret_only)
void subsdk0_f_1561f0() {}

// sub_157760  (orig 0x157760, straight-line)
uint32_t subsdk0_f_157760(uint64_t unused0, void* a1, void* a2) { return (((*(uint32_t*)((char*)(a2)) < *(uint32_t*)((char*)(a1))) ? 1 : 0)) - (((*(uint32_t*)((char*)(a1)) < *(uint32_t*)((char*)(a2))) ? 1 : 0)); }

// sub_158a90  (orig 0x158a90, setter)
void subsdk0_f_158a90(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 408) = a1; }

// sub_158aa0  (orig 0x158aa0, getter)
uint32_t subsdk0_f_158aa0(void* a0) { return *(uint32_t*)((char*)(a0) + 408); }

// sub_158ab0  (orig 0x158ab0, setter)
void subsdk0_f_158ab0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 412) = a1; }

// sub_158ac0  (orig 0x158ac0, getter)
uint32_t subsdk0_f_158ac0(void* a0) { return *(uint32_t*)((char*)(a0) + 412); }

// sub_15b140  (orig 0x15b140, getter)
uint64_t subsdk0_f_15b140(void* a0) { return *(uint64_t*)((char*)(a0) + 400); }

// sub_15b830  (orig 0x15b830, getter)
uint64_t subsdk0_f_15b830(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15ba20  (orig 0x15ba20, getter)
uint64_t subsdk0_f_15ba20(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_15ba30  (orig 0x15ba30, compare)
bool subsdk0_f_15ba30(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) == (uint64_t)(0); }

// sub_15d8d0  (orig 0x15d8d0, mov_ret)
uint32_t subsdk0_f_15d8d0() { return 0; }

// sub_15d8e0  (orig 0x15d8e0, ret_only)
void subsdk0_f_15d8e0() {}

// sub_15d8f0  (orig 0x15d8f0, ret_only)
void subsdk0_f_15d8f0() {}

// sub_15d900  (orig 0x15d900, ret_only)
void subsdk0_f_15d900() {}

// sub_15ff80  (orig 0x15ff80, mov_ret)
uint32_t subsdk0_f_15ff80() { return 0; }

// sub_1662a0  (orig 0x1662a0, straight)
void subsdk0_f_1662a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 1080) = (*(uint32_t*)((char*)(a0) + 1080)) + (1);
}

// sub_167030  (orig 0x167030, mov_ret)
uint32_t subsdk0_f_167030() { return 0; }

// sub_167ce0  (orig 0x167ce0, ret_only)
void subsdk0_f_167ce0() {}

// sub_167cf0  (orig 0x167cf0, ret_only)
void subsdk0_f_167cf0() {}

// sub_168610  (orig 0x168610, ret_only)
void subsdk0_f_168610() {}

// sub_168620  (orig 0x168620, ret_only)
void subsdk0_f_168620() {}

// sub_168950  (orig 0x168950, getter)
uint32_t subsdk0_f_168950(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_168bf0  (orig 0x168bf0, getter)
uint64_t subsdk0_f_168bf0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_169ae0  (orig 0x169ae0, getter)
uint32_t subsdk0_f_169ae0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_169af0  (orig 0x169af0, getter)
uint8_t subsdk0_f_169af0(void* a0) { return *(uint8_t*)((char*)(a0) + 56); }

// sub_169b00  (orig 0x169b00, getter)
uint8_t subsdk0_f_169b00(void* a0) { return *(uint8_t*)((char*)(a0) + 57); }

// sub_169b10  (orig 0x169b10, getter)
uint8_t subsdk0_f_169b10(void* a0) { return *(uint8_t*)((char*)(a0) + 58); }

// sub_169b20  (orig 0x169b20, getter)
uint8_t subsdk0_f_169b20(void* a0) { return *(uint8_t*)((char*)(a0) + 59); }

// sub_169b30  (orig 0x169b30, getter)
uint64_t subsdk0_f_169b30(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_16a230  (orig 0x16a230, getter)
uint64_t subsdk0_f_16a230(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_16aeb0  (orig 0x16aeb0, getter)
uint64_t subsdk0_f_16aeb0(void* a0) { return *(uint64_t*)((char*)(a0) + 112); }

// sub_16e160  (orig 0x16e160, straight)
void subsdk0_f_16e160(void* a0) {
    *(uint32_t*)((char*)(a0) + 272) = (*(uint32_t*)((char*)(a0) + 272)) + (1);
}

// sub_16eca0  (orig 0x16eca0, straight)
void subsdk0_f_16eca0(void* a0) {
    *(uint32_t*)((char*)(a0) + 272) = (*(uint32_t*)((char*)(a0) + 272)) + (1);
}

// sub_1731a0  (orig 0x1731a0, getter)
uint8_t subsdk0_f_1731a0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_1731b0  (orig 0x1731b0, getter)
uint32_t subsdk0_f_1731b0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_173950  (orig 0x173950, compare)
bool subsdk0_f_173950(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 24)) == (uint64_t)(0); }

// sub_1744f0  (orig 0x1744f0, mov_ret)
uint32_t subsdk0_f_1744f0() { return 0; }

// sub_1749f0  (orig 0x1749f0, mov_ret)
uint32_t subsdk0_f_1749f0() { return 0; }

// sub_174a00  (orig 0x174a00, mov_ret)
uint32_t subsdk0_f_174a00() { return 0; }

// sub_179910  (orig 0x179910, straight-line)
uint32_t subsdk0_f_179910(uint64_t unused0, void* a1, void* a2) { return (((*(uint32_t*)((char*)(a2)) < *(uint32_t*)((char*)(a1))) ? 1 : 0)) - (((*(uint32_t*)((char*)(a1)) < *(uint32_t*)((char*)(a2))) ? 1 : 0)); }

// sub_179c00  (orig 0x179c00, straight-line)
uint32_t subsdk0_f_179c00(uint64_t unused0, void* a1, void* a2) { return (((*(uint32_t*)((char*)(a2)) < *(uint32_t*)((char*)(a1))) ? 1 : 0)) - (((*(uint32_t*)((char*)(a1)) < *(uint32_t*)((char*)(a2))) ? 1 : 0)); }

// sub_179c60  (orig 0x179c60, ret_only)
void subsdk0_f_179c60() {}

// sub_179c70  (orig 0x179c70, ret_only)
void subsdk0_f_179c70() {}

// sub_17a120  (orig 0x17a120, straight)
void subsdk0_f_17a120(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 40) = (uint8_t)k0;
}

// sub_17c750  (orig 0x17c750, ret_only)
void subsdk0_f_17c750() {}

// sub_17c760  (orig 0x17c760, ret_only)
void subsdk0_f_17c760() {}

// sub_17cd40  (orig 0x17cd40, getter)
uint64_t subsdk0_f_17cd40(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_17cf80  (orig 0x17cf80, mov_ret)
uint32_t subsdk0_f_17cf80() { return 4; }

// sub_17e3f0  (orig 0x17e3f0, mov_ret)
uint64_t subsdk0_f_17e3f0() { return 0; }

// sub_17e400  (orig 0x17e400, ret_only)
void subsdk0_f_17e400() {}

// sub_17e490  (orig 0x17e490, ret_only)
void subsdk0_f_17e490() {}

// sub_17e4a0  (orig 0x17e4a0, ret_only)
void subsdk0_f_17e4a0() {}

// sub_17e570  (orig 0x17e570, straight-line)
uint32_t subsdk0_f_17e570(uint64_t unused0, void* a1, void* a2) { return (((*(uint32_t*)((char*)(a2)) < *(uint32_t*)((char*)(a1))) ? 1 : 0)) - (((*(uint32_t*)((char*)(a1)) < *(uint32_t*)((char*)(a2))) ? 1 : 0)); }

// sub_17e8d0  (orig 0x17e8d0, straight-line)
uint32_t subsdk0_f_17e8d0(uint64_t unused0, void* a1, void* a2) { return (((*(uint32_t*)((char*)(a2)) < *(uint32_t*)((char*)(a1))) ? 1 : 0)) - (((*(uint32_t*)((char*)(a1)) < *(uint32_t*)((char*)(a2))) ? 1 : 0)); }

// sub_17ef00  (orig 0x17ef00, getter)
uint64_t subsdk0_f_17ef00(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_17f180  (orig 0x17f180, mov_ret)
uint32_t subsdk0_f_17f180() { return 4; }

// sub_181770  (orig 0x181770, ret_only)
void subsdk0_f_181770() {}

// sub_181b60  (orig 0x181b60, ret_only)
void subsdk0_f_181b60() {}

// sub_181b70  (orig 0x181b70, ret_only)
void subsdk0_f_181b70() {}

// sub_184d90  (orig 0x184d90, straight-line)
uint32_t subsdk0_f_184d90(uint64_t unused0, void* a1, void* a2) { return (((*(uint32_t*)((char*)(a2)) < *(uint32_t*)((char*)(a1))) ? 1 : 0)) - (((*(uint32_t*)((char*)(a1)) < *(uint32_t*)((char*)(a2))) ? 1 : 0)); }

// sub_184e30  (orig 0x184e30, ret_only)
void subsdk0_f_184e30() {}

// sub_184e40  (orig 0x184e40, ret_only)
void subsdk0_f_184e40() {}

// sub_184f20  (orig 0x184f20, straight-line)
uint32_t subsdk0_f_184f20(uint64_t unused0, void* a1, void* a2) { return (((*(uint32_t*)((char*)(a2)) < *(uint32_t*)((char*)(a1))) ? 1 : 0)) - (((*(uint32_t*)((char*)(a1)) < *(uint32_t*)((char*)(a2))) ? 1 : 0)); }

// sub_185570  (orig 0x185570, ret_only)
void subsdk0_f_185570() {}

// sub_185990  (orig 0x185990, ret_only)
void subsdk0_f_185990() {}

// sub_185d50  (orig 0x185d50, ret_only)
void subsdk0_f_185d50() {}

// sub_185d60  (orig 0x185d60, ret_only)
void subsdk0_f_185d60() {}

// sub_1867d0  (orig 0x1867d0, getter)
uint64_t subsdk0_f_1867d0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_186810  (orig 0x186810, getter)
uint32_t subsdk0_f_186810(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_189a00  (orig 0x189a00, ret_only)
void subsdk0_f_189a00() {}

// sub_189a10  (orig 0x189a10, ret_only)
void subsdk0_f_189a10() {}

// sub_189bc0  (orig 0x189bc0, ret_only)
void subsdk0_f_189bc0() {}

// sub_189bd0  (orig 0x189bd0, ret_only)
void subsdk0_f_189bd0() {}

// sub_189cb0  (orig 0x189cb0, straight-line)
uint32_t subsdk0_f_189cb0(uint64_t unused0, void* a1, void* a2) { return (((*(uint32_t*)((char*)(a2)) < *(uint32_t*)((char*)(a1))) ? 1 : 0)) - (((*(uint32_t*)((char*)(a1)) < *(uint32_t*)((char*)(a2))) ? 1 : 0)); }

// sub_189d10  (orig 0x189d10, ret_only)
void subsdk0_f_189d10() {}

// sub_189d20  (orig 0x189d20, ret_only)
void subsdk0_f_189d20() {}

// sub_189f50  (orig 0x189f50, ret_only)
void subsdk0_f_189f50() {}

// sub_189f60  (orig 0x189f60, ret_only)
void subsdk0_f_189f60() {}

// sub_18bfc0  (orig 0x18bfc0, ret_only)
void subsdk0_f_18bfc0() {}

// sub_18c0f0  (orig 0x18c0f0, ret_only)
void subsdk0_f_18c0f0() {}

// sub_18c100  (orig 0x18c100, ret_only)
void subsdk0_f_18c100() {}

// sub_18c110  (orig 0x18c110, ret_only)
void subsdk0_f_18c110() {}

// sub_18c7e0  (orig 0x18c7e0, getter)
uint64_t subsdk0_f_18c7e0(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_18c7f0  (orig 0x18c7f0, mov_ret)
uint32_t subsdk0_f_18c7f0() { return 0; }

// sub_18c870  (orig 0x18c870, const-ret)
uint32_t subsdk0_f_18c870() { return 2147487745u; }

// sub_18c880  (orig 0x18c880, const-ret)
uint32_t subsdk0_f_18c880() { return 2147487745u; }

// sub_18c890  (orig 0x18c890, const-ret)
uint32_t subsdk0_f_18c890() { return 2147487745u; }

// sub_18c8a0  (orig 0x18c8a0, const-ret)
uint32_t subsdk0_f_18c8a0() { return 2147487745u; }

// sub_18c8b0  (orig 0x18c8b0, const-ret)
uint32_t subsdk0_f_18c8b0() { return 2147487745u; }

// sub_18c8c0  (orig 0x18c8c0, const-ret)
uint32_t subsdk0_f_18c8c0() { return 2147487770u; }

// sub_18c8d0  (orig 0x18c8d0, const-ret)
uint32_t subsdk0_f_18c8d0() { return 2147487745u; }

// sub_18c8e0  (orig 0x18c8e0, const-ret)
uint32_t subsdk0_f_18c8e0() { return 2147487745u; }

// sub_18c8f0  (orig 0x18c8f0, const-ret)
uint32_t subsdk0_f_18c8f0() { return 2147487745u; }

// sub_18c900  (orig 0x18c900, const-ret)
uint32_t subsdk0_f_18c900() { return 2147487745u; }

// sub_18c910  (orig 0x18c910, const-ret)
uint32_t subsdk0_f_18c910() { return 2147487745u; }

// sub_18c920  (orig 0x18c920, const-ret)
uint32_t subsdk0_f_18c920() { return 2147487745u; }

// sub_18c930  (orig 0x18c930, ret_only)
void subsdk0_f_18c930() {}

// sub_18cda0  (orig 0x18cda0, ret_only)
void subsdk0_f_18cda0() {}

// sub_18e930  (orig 0x18e930, ret_only)
void subsdk0_f_18e930() {}

// sub_18eaa0  (orig 0x18eaa0, ret_only)
void subsdk0_f_18eaa0() {}

// sub_18eb00  (orig 0x18eb00, ret_only)
void subsdk0_f_18eb00() {}

// sub_18eb10  (orig 0x18eb10, ret_only)
void subsdk0_f_18eb10() {}

// sub_18f500  (orig 0x18f500, mov_ret)
uint32_t subsdk0_f_18f500() { return 1; }

// sub_18f6b0  (orig 0x18f6b0, mov_ret)
uint32_t subsdk0_f_18f6b0() { return 0; }

// sub_18f6c0  (orig 0x18f6c0, mov_ret)
uint32_t subsdk0_f_18f6c0() { return 0; }

// sub_18f6d0  (orig 0x18f6d0, mov_ret)
uint32_t subsdk0_f_18f6d0() { return 0; }

// sub_18f6e0  (orig 0x18f6e0, mov_ret)
uint32_t subsdk0_f_18f6e0() { return 0; }

// sub_18f6f0  (orig 0x18f6f0, mov_ret)
uint32_t subsdk0_f_18f6f0() { return 0; }

// sub_195a60  (orig 0x195a60, getter)
uint32_t subsdk0_f_195a60(void* a0) { return *(uint32_t*)((char*)(a0) + 116); }

// sub_1961b0  (orig 0x1961b0, ret_only)
void subsdk0_f_1961b0() {}

// sub_19e0b0  (orig 0x19e0b0, straight)
void subsdk0_f_19e0b0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = (*(uint32_t*)((char*)(a0) + 168)) - (1);
    *(uint32_t*)((char*)(a1) + 4) = (*(uint32_t*)((char*)(a0) + 172)) - (1);
    *(uint32_t*)((char*)(a1) + 8) = (*(uint32_t*)((char*)(a0) + 176)) - (1);
    *(uint32_t*)((char*)(a1) + 12) = (*(uint32_t*)((char*)(a0) + 180)) - (1);
}

// sub_1ae5c0  (orig 0x1ae5c0, setter)
void subsdk0_f_1ae5c0(void* a0) { *(uint32_t*)((char*)(a0) + 204) = 0; }

// sub_1b0310  (orig 0x1b0310, ret_only)
void subsdk0_f_1b0310() {}

// sub_1b2150  (orig 0x1b2150, ret_only)
void subsdk0_f_1b2150() {}

// sub_1b2160  (orig 0x1b2160, ret_only)
void subsdk0_f_1b2160() {}

// sub_1b3900  (orig 0x1b3900, straight-line)
typedef struct { unsigned char b[24]; } __S_f_1b3900;
__S_f_1b3900 subsdk0_f_1b3900() {
    __S_f_1b3900 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_1b3920  (orig 0x1b3920, mov_ret)
uint32_t subsdk0_f_1b3920() { return -38; }

// sub_1b4460  (orig 0x1b4460, ret_only)
void subsdk0_f_1b4460() {}

// sub_1b4470  (orig 0x1b4470, ret_only)
void subsdk0_f_1b4470() {}

// sub_1b4e10  (orig 0x1b4e10, compare)
bool subsdk0_f_1b4e10(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 40)) == (uint64_t)(0); }

// sub_1bf2f0  (orig 0x1bf2f0, getter)
uint64_t subsdk0_f_1bf2f0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_1bf300  (orig 0x1bf300, getter-chain)
uint32_t subsdk0_f_1bf300(void* a0, uint64_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 24);
    return *(uint32_t*)((char*)(t0) + (uintptr_t)(a1) * 4);
}

// sub_1bf370  (orig 0x1bf370, mov_ret)
uint32_t subsdk0_f_1bf370() { return 0; }

// sub_1c2f90  (orig 0x1c2f90, ret_only)
void subsdk0_f_1c2f90() {}

// sub_1c3480  (orig 0x1c3480, mov_ret)
uint32_t subsdk0_f_1c3480() { return 1; }

// sub_1c40c0  (orig 0x1c40c0, ret_only)
void subsdk0_f_1c40c0() {}

// sub_1c4540  (orig 0x1c4540, copy-chain-store)
void subsdk0_f_1c4540(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 24);
    *(uint8_t*)((char*)a0 + 32) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)(t0) + 608) = 0;
}

// sub_1c4b30  (orig 0x1c4b30, ret_only)
void subsdk0_f_1c4b30() {}

// sub_1c4d90  (orig 0x1c4d90, setter)
void subsdk0_f_1c4d90(void* a0) { *(uint16_t*)((char*)(a0) + 32) = 0; }

// sub_1c6a00  (orig 0x1c6a00, compare)
bool subsdk0_f_1c6a00(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 40)) == (uint64_t)(0); }

// sub_1c9450  (orig 0x1c9450, getter)
uint32_t subsdk0_f_1c9450(void* a0) { return *(uint32_t*)((char*)(a0) + 72); }

// sub_1cd0f0  (orig 0x1cd0f0, getter)
uint64_t subsdk0_f_1cd0f0(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_1ceec0  (orig 0x1ceec0, ret_only)
void subsdk0_f_1ceec0() {}

// sub_1ceed0  (orig 0x1ceed0, ret_only)
void subsdk0_f_1ceed0() {}

// sub_1cf0c0  (orig 0x1cf0c0, ret_only)
void subsdk0_f_1cf0c0() {}

// sub_1d0fc0  (orig 0x1d0fc0, ret_only)
void subsdk0_f_1d0fc0() {}

// sub_1d1100  (orig 0x1d1100, straight)
void subsdk0_f_1d1100(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 300) = (uint32_t)(a1);
    *(uint8_t*)((char*)(a0) + 296) = (uint8_t)k0;
}

// sub_1d1960  (orig 0x1d1960, mov_ret)
uint32_t subsdk0_f_1d1960() { return -38; }

// sub_1d36a0  (orig 0x1d36a0, compare)
bool subsdk0_f_1d36a0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 736)) != (uint64_t)(0); }

// sub_1d3ee0  (orig 0x1d3ee0, straight)
uint8_t subsdk0_f_1d3ee0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 524) & (uint64_t)(129)) ? 1 : 0); }

// sub_1d5420  (orig 0x1d5420, getter)
uint32_t subsdk0_f_1d5420(void* a0) { return *(uint32_t*)((char*)(a0) + 528); }

// sub_1d61f0  (orig 0x1d61f0, mov_ret)
uint32_t subsdk0_f_1d61f0() { return 0; }

// sub_1d6df0  (orig 0x1d6df0, setter-chain-zero)
void subsdk0_f_1d6df0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1d6e00  (orig 0x1d6e00, setter-chain-zero)
void subsdk0_f_1d6e00(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1d7580  (orig 0x1d7580, straight)
uint32_t subsdk0_f_1d7580(uint64_t unused0, void* a1) {
    *(uint64_t*)((char*)(a1)) = 0;
    return -1010;
}

// sub_1d8870  (orig 0x1d8870, mov_ret)
uint32_t subsdk0_f_1d8870() { return 0; }

// sub_1d8900  (orig 0x1d8900, straight)
uint32_t subsdk0_f_1d8900(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(p0) + 64);
    return 0;
}

// sub_1d8a70  (orig 0x1d8a70, getter)
uint32_t subsdk0_f_1d8a70(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1d9330  (orig 0x1d9330, mov_ret)
uint32_t subsdk0_f_1d9330() { return 16; }

// sub_1d95d0  (orig 0x1d95d0, straight-line)
typedef struct { unsigned char b[24]; } __S_f_1d95d0;
__S_f_1d95d0 subsdk0_f_1d95d0() {
    __S_f_1d95d0 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_1d95e0  (orig 0x1d95e0, ret_only)
void subsdk0_f_1d95e0() {}

// sub_1d95f0  (orig 0x1d95f0, mov_ret)
uint32_t subsdk0_f_1d95f0() { return 16; }

// sub_1d98e0  (orig 0x1d98e0, setter)
void subsdk0_f_1d98e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 88) = a1; }

// sub_1d98f0  (orig 0x1d98f0, straight)
void subsdk0_f_1d98f0(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 112) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 116) = (uint32_t)(a1);
}

// sub_1d9d90  (orig 0x1d9d90, mov_ret)
uint32_t subsdk0_f_1d9d90() { return -38; }

// sub_1d9da0  (orig 0x1d9da0, mov_ret)
uint32_t subsdk0_f_1d9da0() { return 0; }

// sub_1d9db0  (orig 0x1d9db0, mov_ret)
uint32_t subsdk0_f_1d9db0() { return 0; }

// sub_1d9dc0  (orig 0x1d9dc0, ret_only)
void subsdk0_f_1d9dc0() {}

// sub_1d9dd0  (orig 0x1d9dd0, mov_ret)
uint32_t subsdk0_f_1d9dd0() { return 0; }

// sub_1d9de0  (orig 0x1d9de0, mov_ret)
uint32_t subsdk0_f_1d9de0() { return -38; }

// sub_1d9df0  (orig 0x1d9df0, ret_only)
void subsdk0_f_1d9df0() {}

// sub_1d9e00  (orig 0x1d9e00, ret_only)
void subsdk0_f_1d9e00() {}

// sub_1d9e10  (orig 0x1d9e10, mov_ret)
uint32_t subsdk0_f_1d9e10() { return -38; }

// sub_1d9e20  (orig 0x1d9e20, mov_ret)
uint64_t subsdk0_f_1d9e20() { return 0; }

// sub_1d9e30  (orig 0x1d9e30, mov_ret)
uint64_t subsdk0_f_1d9e30() { return 0; }

// sub_1d9e40  (orig 0x1d9e40, mov_ret)
uint64_t subsdk0_f_1d9e40() { return 0; }

// sub_1d9e50  (orig 0x1d9e50, mov_ret)
uint32_t subsdk0_f_1d9e50() { return -38; }

// sub_1d9e60  (orig 0x1d9e60, mov_ret)
uint32_t subsdk0_f_1d9e60() { return 0; }

// sub_1d9e90  (orig 0x1d9e90, mov_ret)
uint32_t subsdk0_f_1d9e90() { return -38; }

// sub_1d9ea0  (orig 0x1d9ea0, ret_only)
void subsdk0_f_1d9ea0() {}

// sub_1db5a0  (orig 0x1db5a0, getter)
uint64_t subsdk0_f_1db5a0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_1db5b0  (orig 0x1db5b0, getter)
uint64_t subsdk0_f_1db5b0(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_1db810  (orig 0x1db810, setter)
void subsdk0_f_1db810(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_1db820  (orig 0x1db820, getter)
uint64_t subsdk0_f_1db820(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1db830  (orig 0x1db830, getter)
uint32_t subsdk0_f_1db830(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_1dbe30  (orig 0x1dbe30, ret_only)
void subsdk0_f_1dbe30() {}

// sub_1dbe40  (orig 0x1dbe40, ret_only)
void subsdk0_f_1dbe40() {}

// sub_1de760  (orig 0x1de760, straight)
uint32_t subsdk0_f_1de760(void* a0) { return (((*(uint32_t*)((char*)(a0) + 20) == 6) ? 1 : 0)) | (((*(uint32_t*)((char*)(a0) + 20) == 8) ? 1 : 0)); }

// sub_1e32e0  (orig 0x1e32e0, ret_only)
void subsdk0_f_1e32e0() {}

// sub_1e3ba0  (orig 0x1e3ba0, getter)
uint32_t subsdk0_f_1e3ba0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1e4040  (orig 0x1e4040, ret_only)
void subsdk0_f_1e4040() {}

// sub_1e5cc0  (orig 0x1e5cc0, getter)
uint64_t subsdk0_f_1e5cc0(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_1e5e10  (orig 0x1e5e10, ret_only)
void subsdk0_f_1e5e10() {}

// sub_1e5e20  (orig 0x1e5e20, ret_only)
void subsdk0_f_1e5e20() {}

// sub_1e6050  (orig 0x1e6050, ret_only)
void subsdk0_f_1e6050() {}

// sub_1e6060  (orig 0x1e6060, ret_only)
void subsdk0_f_1e6060() {}

// sub_1e9780  (orig 0x1e9780, mov_ret)
uint32_t subsdk0_f_1e9780() { return 15; }

// sub_1ea780  (orig 0x1ea780, ret_only)
void subsdk0_f_1ea780() {}

// sub_1ea7d0  (orig 0x1ea7d0, setter-chain)
void subsdk0_f_1ea7d0(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint8_t*)((char*)(a0) + 32) = 0; }

// sub_1ea7f0  (orig 0x1ea7f0, setter-chain)
void subsdk0_f_1ea7f0(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint8_t*)((char*)(a0) + 32) = 0; }

// sub_1ea810  (orig 0x1ea810, straight)
void subsdk0_f_1ea810(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 32) = (uint8_t)k0;
}

// sub_1ea820  (orig 0x1ea820, setter)
void subsdk0_f_1ea820(void* a0) { *(uint8_t*)((char*)(a0) + 32) = 0; }

// sub_1ea830  (orig 0x1ea830, getter)
uint8_t subsdk0_f_1ea830(void* a0) { return *(uint8_t*)((char*)(a0) + 32); }

// sub_1ea840  (orig 0x1ea840, straight)
void subsdk0_f_1ea840(void* a0, uint64_t a1, uint64_t a2) {
    *(uint32_t*)((char*)(a0)) = (*(uint32_t*)((char*)(a0))) | (1);
    *(uint64_t*)((char*)(a0) + 8) = a1;
    *(uint32_t*)((char*)(a0) + 16) = (uint32_t)(a2);
}

// sub_1ea860  (orig 0x1ea860, straight)
void subsdk0_f_1ea860(void* a0) {
    *(uint32_t*)((char*)(a0)) = (*(uint32_t*)((char*)(a0))) & (4294967294);
    *(uint64_t*)((char*)(a0) + 8) = 0;
    *(uint32_t*)((char*)(a0) + 16) = 2;
}

// sub_1ea880  (orig 0x1ea880, straight)
uint32_t subsdk0_f_1ea880(void* a0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 8);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(a0) + 16);
    return (*(uint32_t*)((char*)(a0))) & (1);
}

// sub_1ea8a0  (orig 0x1ea8a0, setter)
void subsdk0_f_1ea8a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 24) = a1; }

// sub_1ea8b0  (orig 0x1ea8b0, getter)
uint64_t subsdk0_f_1ea8b0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_1eb6d0  (orig 0x1eb6d0, setter-chain)
void subsdk0_f_1eb6d0(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_1ec050  (orig 0x1ec050, straight-line)
uint32_t subsdk0_f_1ec050(uint64_t unused0, void* a1, void* a2) { return (((*(uint32_t*)((char*)(a2)) < *(uint32_t*)((char*)(a1))) ? 1 : 0)) - (((*(uint32_t*)((char*)(a1)) < *(uint32_t*)((char*)(a2))) ? 1 : 0)); }

// sub_1ecb30  (orig 0x1ecb30, compare)
bool subsdk0_f_1ecb30(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 20)) == (uint64_t)(0); }

// sub_1eda90  (orig 0x1eda90, getter)
uint32_t subsdk0_f_1eda90(void* a0) { return *(uint32_t*)((char*)(a0) + 76); }

// sub_1eed80  (orig 0x1eed80, getter)
uint8_t subsdk0_f_1eed80(void* a0) { return *(uint8_t*)((char*)(a0) + 72); }

// sub_1ef6e0  (orig 0x1ef6e0, mov_ret)
uint32_t subsdk0_f_1ef6e0() { return 0; }

// sub_1f0a20  (orig 0x1f0a20, setter)
void subsdk0_f_1f0a20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_1f0a30  (orig 0x1f0a30, setter)
void subsdk0_f_1f0a30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 24) = a1; }

// sub_1f0aa0  (orig 0x1f0aa0, ret_only)
void subsdk0_f_1f0aa0() {}

// sub_1f0ab0  (orig 0x1f0ab0, mov_ret)
uint32_t subsdk0_f_1f0ab0() { return 0; }

// sub_1f0b20  (orig 0x1f0b20, mov_ret)
uint32_t subsdk0_f_1f0b20() { return 0; }

// sub_1f7920  (orig 0x1f7920, straight)
uint32_t subsdk0_f_1f7920(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 140);
    return 0;
}

// sub_1fb540  (orig 0x1fb540, ret_only)
void subsdk0_f_1fb540() {}

// sub_1fb550  (orig 0x1fb550, ret_only)
void subsdk0_f_1fb550() {}

// sub_1fb760  (orig 0x1fb760, ret_only)
void subsdk0_f_1fb760() {}

// sub_1fb770  (orig 0x1fb770, ret_only)
void subsdk0_f_1fb770() {}

// sub_1fba20  (orig 0x1fba20, ret_only)
void subsdk0_f_1fba20() {}

// sub_1fba30  (orig 0x1fba30, ret_only)
void subsdk0_f_1fba30() {}

// sub_1fde80  (orig 0x1fde80, getter)
uint8_t subsdk0_f_1fde80(void* a0) { return *(uint8_t*)((char*)(a0) + 62); }

// sub_1fded0  (orig 0x1fded0, straight)
uint32_t subsdk0_f_1fded0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 25) = (uint8_t)k0;
    return 0;
}

// sub_1fe160  (orig 0x1fe160, getter)
uint64_t subsdk0_f_1fe160(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_1fec10  (orig 0x1fec10, straight)
uint32_t subsdk0_f_1fec10(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 136) = (uint32_t)(a1);
    return 0;
}

// sub_1ff2d0  (orig 0x1ff2d0, getter)
uint8_t subsdk0_f_1ff2d0(void* a0) { return *(uint8_t*)((char*)(a0) + 120); }

// sub_1ff370  (orig 0x1ff370, getter)
uint64_t subsdk0_f_1ff370(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_1ff400  (orig 0x1ff400, getter)
uint8_t subsdk0_f_1ff400(void* a0) { return *(uint8_t*)((char*)(a0) + 690); }

// sub_2008b0  (orig 0x2008b0, ret_only)
void subsdk0_f_2008b0() {}

// sub_2011a0  (orig 0x2011a0, getter)
uint8_t subsdk0_f_2011a0(void* a0) { return *(uint8_t*)((char*)(a0) + 60); }

// sub_202920  (orig 0x202920, getter)
uint8_t subsdk0_f_202920(void* a0) { return *(uint8_t*)((char*)(a0) + 61); }

// sub_205ce0  (orig 0x205ce0, setter)
void subsdk0_f_205ce0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 164) = a1; }

// sub_205cf0  (orig 0x205cf0, getter)
uint32_t subsdk0_f_205cf0(void* a0) { return *(uint32_t*)((char*)(a0) + 164); }

// sub_206d40  (orig 0x206d40, ret_only)
void subsdk0_f_206d40() {}

// sub_207ee0  (orig 0x207ee0, setter)
void subsdk0_f_207ee0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 208) = a1; }

// sub_208680  (orig 0x208680, getter)
uint64_t subsdk0_f_208680(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_208690  (orig 0x208690, getter)
uint64_t subsdk0_f_208690(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_2087a0  (orig 0x2087a0, getter)
uint32_t subsdk0_f_2087a0(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_20b660  (orig 0x20b660, setter)
void subsdk0_f_20b660(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 72) = a1; }

// sub_20b8e0  (orig 0x20b8e0, setter-chain-zero)
void subsdk0_f_20b8e0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 216) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 200) = (struct u64x2){ 0, 0 };
}

// sub_20bfd0  (orig 0x20bfd0, straight)
uint32_t subsdk0_f_20bfd0(void* a0) {
    *(uint8_t*)((char*)(a0) + 16) = 0;
    return 0;
}

// sub_20d910  (orig 0x20d910, compare)
bool subsdk0_f_20d910(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 32)) == (uint64_t)(0); }

// sub_20db40  (orig 0x20db40, ret_only)
void subsdk0_f_20db40() {}

// sub_20db50  (orig 0x20db50, ret_only)
void subsdk0_f_20db50() {}

// sub_20df10  (orig 0x20df10, mov_ret)
uint32_t subsdk0_f_20df10() { return 0; }

// sub_20e180  (orig 0x20e180, compare)
bool subsdk0_f_20e180(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 168)) > (uint64_t)(1); }

// sub_20ed60  (orig 0x20ed60, mov_ret)
uint32_t subsdk0_f_20ed60() { return 0; }

// sub_20ef10  (orig 0x20ef10, compare)
bool subsdk0_f_20ef10(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 168)) != (uint64_t)(0); }

// sub_20fb20  (orig 0x20fb20, mov_ret)
uint32_t subsdk0_f_20fb20() { return 0; }

// sub_210d40  (orig 0x210d40, setter)
void subsdk0_f_210d40(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_211060  (orig 0x211060, ret_only)
void subsdk0_f_211060() {}

// sub_211070  (orig 0x211070, ret_only)
void subsdk0_f_211070() {}

// sub_211180  (orig 0x211180, straight-line)
uint32_t subsdk0_f_211180(uint64_t unused0, void* a1, void* a2) { return (((*(uint32_t*)((char*)(a2)) < *(uint32_t*)((char*)(a1))) ? 1 : 0)) - (((*(uint32_t*)((char*)(a1)) < *(uint32_t*)((char*)(a2))) ? 1 : 0)); }

// sub_21ffe0  (orig 0x21ffe0, ret_only)
void subsdk0_f_21ffe0() {}

// sub_21fff0  (orig 0x21fff0, ret_only)
void subsdk0_f_21fff0() {}

// sub_2206d0  (orig 0x2206d0, straight-line)
void subsdk0_f_2206d0(void* a0) {
    *(uint32_t*)((char*)(a0) + 36) = 0;
    *(uint64_t*)((char*)(a0) + 28) = 0;
    *(uint64_t*)((char*)(a0) + 20) = 0;
    *(uint64_t*)((char*)(a0) + 12) = 0;
}

// sub_221e20  (orig 0x221e20, getter)
uint32_t subsdk0_f_221e20(void* a0) { return *(uint32_t*)((char*)(a0) + 68); }

// sub_221e30  (orig 0x221e30, getter)
uint32_t subsdk0_f_221e30(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_221f00  (orig 0x221f00, straight-line)
uint32_t subsdk0_f_221f00(void* a0, void* a1) { return (((*(uint32_t*)((char*)(a0) + 4) >= *(uint32_t*)((char*)(a1) + 4))) ? (((*(uint32_t*)((char*)(a0) + 4) > *(uint32_t*)((char*)(a1) + 4)) ? 1 : 0)) : ((0) - (1))); }

// sub_2227d0  (orig 0x2227d0, setter)
void subsdk0_f_2227d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 212) = a1; }

// sub_2227e0  (orig 0x2227e0, setter)
void subsdk0_f_2227e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 208) = a1; }

// sub_222a40  (orig 0x222a40, setter-chain)
void subsdk0_f_222a40(void* a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a4) { *(uint32_t*)((char*)(a0) + 848) = a1; *(uint32_t*)((char*)(a0) + 852) = a2; *(uint32_t*)((char*)(a0) + 856) = a3; *(uint32_t*)((char*)(a0) + 860) = a4; }

// sub_222d80  (orig 0x222d80, setter)
void subsdk0_f_222d80(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1656) = a1; }

// sub_222f90  (orig 0x222f90, straight)
void subsdk0_f_222f90(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 1464);
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(a0) + 1468);
}

// sub_224f30  (orig 0x224f30, mov_ret)
uint32_t subsdk0_f_224f30() { return -1; }

// sub_224f40  (orig 0x224f40, mov_ret)
uint64_t subsdk0_f_224f40() { return -1; }

// sub_224f50  (orig 0x224f50, ret_only)
void subsdk0_f_224f50() {}

// sub_225630  (orig 0x225630, mov_ret)
uint32_t subsdk0_f_225630() { return 0; }

// sub_2257a0  (orig 0x2257a0, mov_ret)
uint32_t subsdk0_f_2257a0() { return -1; }

// sub_2257b0  (orig 0x2257b0, mov_ret)
uint64_t subsdk0_f_2257b0() { return -1; }

// sub_2257c0  (orig 0x2257c0, mov_ret)
uint64_t subsdk0_f_2257c0() { return -1; }

// sub_2257d0  (orig 0x2257d0, mov_ret)
uint32_t subsdk0_f_2257d0() { return -1; }

// sub_2257e0  (orig 0x2257e0, mov_ret)
uint32_t subsdk0_f_2257e0() { return -1; }

// sub_225820  (orig 0x225820, mov_ret)
uint64_t subsdk0_f_225820() { return -1; }

// sub_225860  (orig 0x225860, mov_ret)
uint32_t subsdk0_f_225860() { return -1; }

// sub_225dc0  (orig 0x225dc0, getter)
uint64_t subsdk0_f_225dc0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_225df0  (orig 0x225df0, getter)
uint64_t subsdk0_f_225df0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_225e20  (orig 0x225e20, getter)
uint64_t subsdk0_f_225e20(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_225e30  (orig 0x225e30, getter)
uint32_t subsdk0_f_225e30(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_225e60  (orig 0x225e60, mov_ret)
uint32_t subsdk0_f_225e60() { return 0; }

// sub_225e70  (orig 0x225e70, mov_ret)
uint32_t subsdk0_f_225e70() { return 0; }

// sub_225e80  (orig 0x225e80, mov_ret)
uint32_t subsdk0_f_225e80() { return -1; }

// sub_225e90  (orig 0x225e90, mov_ret)
uint32_t subsdk0_f_225e90() { return -1; }

// sub_2262f0  (orig 0x2262f0, ptr_add)
void* subsdk0_f_2262f0(void* a0) { return (char*)a0 + 8; }

// sub_226d90  (orig 0x226d90, copy-chain)
void subsdk0_f_226d90(void* a0) { *(uint64_t*)((char*)(a0) + 28) = 0; *(uint32_t*)((char*)(a0) + 20) = *(uint32_t*)((char*)(a0) + 16); }

// sub_227a10  (orig 0x227a10, mov_ret)
uint32_t subsdk0_f_227a10() { return 1; }

// sub_228530  (orig 0x228530, ret_only)
void subsdk0_f_228530() {}

// sub_228540  (orig 0x228540, ret_only)
void subsdk0_f_228540() {}

// sub_2298a0  (orig 0x2298a0, straight)
void subsdk0_f_2298a0(uint64_t unused0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1) + 77) = (uint8_t)k0;
}

// sub_2299c0  (orig 0x2299c0, ret_only)
void subsdk0_f_2299c0() {}

// sub_2299f0  (orig 0x2299f0, straight-line)
uint32_t subsdk0_f_2299f0(void* a0) { return __builtin_bswap32(*(uint32_t*)((char*)(a0))); }

// sub_229a00  (orig 0x229a00, straight-line)
uint64_t subsdk0_f_229a00(void* a0) { return __builtin_bswap64(*(uint64_t*)((char*)(a0))); }

// sub_229a10  (orig 0x229a10, getter)
uint16_t subsdk0_f_229a10(void* a0) { return *(uint16_t*)((char*)(a0)); }

// sub_229a20  (orig 0x229a20, getter)
uint32_t subsdk0_f_229a20(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_229a30  (orig 0x229a30, getter)
uint64_t subsdk0_f_229a30(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_22bc70  (orig 0x22bc70, mov_ret)
uint32_t subsdk0_f_22bc70() { return 0; }

// sub_22cbc0  (orig 0x22cbc0, compare)
bool subsdk0_f_22cbc0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 32)) == (uint64_t)(0); }

// sub_22e0d0  (orig 0x22e0d0, getter)
uint32_t subsdk0_f_22e0d0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_22e0e0  (orig 0x22e0e0, getter)
uint32_t subsdk0_f_22e0e0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_230700  (orig 0x230700, getter)
uint8_t subsdk0_f_230700(void* a0) { return *(uint8_t*)((char*)(a0) + 129); }

// sub_231150  (orig 0x231150, getter)
uint64_t subsdk0_f_231150(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_2323f0  (orig 0x2323f0, ret_only)
void subsdk0_f_2323f0() {}

// sub_232400  (orig 0x232400, ret_only)
void subsdk0_f_232400() {}

// sub_2324d0  (orig 0x2324d0, ret_only)
void subsdk0_f_2324d0() {}

// sub_2324f0  (orig 0x2324f0, straight)
void subsdk0_f_2324f0(void* a0, void* a1, void* a2, void* a3) {
    *(uint32_t*)((char*)(a0)) = 1;
    *(uint32_t*)((char*)(a1)) = 0;
    *(uint32_t*)((char*)(a2)) = 0;
    *(uint32_t*)((char*)(a3)) = 30;
}

// sub_236ea0  (orig 0x236ea0, getter)
uint64_t subsdk0_f_236ea0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_237a70  (orig 0x237a70, setter-chain-zero)
void subsdk0_f_237a70(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_237a80  (orig 0x237a80, setter-chain)
void subsdk0_f_237a80(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint64_t a5) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint32_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 56) = 0; *(uint32_t*)((char*)(a0) + 64) = 0; *(uint64_t*)((char*)(a0) + 16) = a3; *(uint64_t*)((char*)(a0) + 24) = a4; *(uint64_t*)((char*)(a0) + 32) = a5; *(uint64_t*)((char*)(a0) + 40) = 0; }

// sub_2380c0  (orig 0x2380c0, getter)
uint32_t subsdk0_f_2380c0(void* a0) { return *(uint32_t*)((char*)(a0) + 48); }

// sub_238100  (orig 0x238100, getter)
uint32_t subsdk0_f_238100(void* a0) { return *(uint32_t*)((char*)(a0) + 64); }

// sub_238e30  (orig 0x238e30, getter)
uint64_t subsdk0_f_238e30(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_23a200  (orig 0x23a200, getter)
uint64_t subsdk0_f_23a200(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_23a210  (orig 0x23a210, getter)
uint64_t subsdk0_f_23a210(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_23a220  (orig 0x23a220, getter)
uint64_t subsdk0_f_23a220(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_23a320  (orig 0x23a320, getter)
uint64_t subsdk0_f_23a320(void* a0) { return *(uint64_t*)((char*)(a0) + 184); }

// sub_23ab80  (orig 0x23ab80, getter)
uint64_t subsdk0_f_23ab80(void* a0) { return *(uint64_t*)((char*)(a0) + 208); }

// sub_23c040  (orig 0x23c040, getter)
uint64_t subsdk0_f_23c040(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_23c050  (orig 0x23c050, getter)
uint64_t subsdk0_f_23c050(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_23c060  (orig 0x23c060, getter)
uint64_t subsdk0_f_23c060(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_23c070  (orig 0x23c070, getter)
uint64_t subsdk0_f_23c070(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_23c080  (orig 0x23c080, getter)
uint64_t subsdk0_f_23c080(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_23c370  (orig 0x23c370, getter)
uint32_t subsdk0_f_23c370(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_23c490  (orig 0x23c490, straight)
void subsdk0_f_23c490(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
    *(uint32_t*)((char*)(a1) + 8) = *(uint32_t*)((char*)(a0) + 8);
    *(uint32_t*)((char*)(a1) + 12) = *(uint32_t*)((char*)(a0) + 12);
}

// sub_23c5c0  (orig 0x23c5c0, ret_only)
void subsdk0_f_23c5c0() {}

// sub_23c5d0  (orig 0x23c5d0, ret_only)
void subsdk0_f_23c5d0() {}

// sub_23c5e0  (orig 0x23c5e0, getter)
uint32_t subsdk0_f_23c5e0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_23cc00  (orig 0x23cc00, straight)
void subsdk0_f_23cc00(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1) + 16) = *(uint64_t*)((char*)(a0) + 16);
    *(uint64_t*)((char*)(a1) + 24) = *(uint64_t*)((char*)(a0) + 24);
    *(uint64_t*)((char*)(a1) + 32) = *(uint64_t*)((char*)(a0) + 32);
    *(uint32_t*)((char*)(a1) + 40) = *(uint32_t*)((char*)(a0) + 40);
    *(uint32_t*)((char*)(a1) + 44) = *(uint32_t*)((char*)(a0) + 44);
}

// sub_23cc40  (orig 0x23cc40, ret_only)
void subsdk0_f_23cc40() {}

// sub_23cc50  (orig 0x23cc50, ret_only)
void subsdk0_f_23cc50() {}

// sub_23cc60  (orig 0x23cc60, getter)
uint64_t subsdk0_f_23cc60(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_23cc70  (orig 0x23cc70, getter)
uint64_t subsdk0_f_23cc70(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_23cc80  (orig 0x23cc80, getter)
uint64_t subsdk0_f_23cc80(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_23cc90  (orig 0x23cc90, getter)
uint64_t subsdk0_f_23cc90(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_23cd80  (orig 0x23cd80, getter)
uint32_t subsdk0_f_23cd80(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_23d040  (orig 0x23d040, setter-chain-zero)
void subsdk0_f_23d040(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
}

// sub_23d2a0  (orig 0x23d2a0, straight)
void subsdk0_f_23d2a0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1) + 16) = *(uint64_t*)((char*)(a0) + 16);
}

// sub_23d2c0  (orig 0x23d2c0, ret_only)
void subsdk0_f_23d2c0() {}

// sub_23d2d0  (orig 0x23d2d0, ret_only)
void subsdk0_f_23d2d0() {}

// sub_23d2e0  (orig 0x23d2e0, getter)
uint64_t subsdk0_f_23d2e0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_23d2f0  (orig 0x23d2f0, getter)
uint64_t subsdk0_f_23d2f0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_23d300  (orig 0x23d300, getter)
uint64_t subsdk0_f_23d300(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_23d650  (orig 0x23d650, getter)
uint32_t subsdk0_f_23d650(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_23d770  (orig 0x23d770, straight)
void subsdk0_f_23d770(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
    *(uint32_t*)((char*)(a1) + 8) = *(uint32_t*)((char*)(a0) + 8);
    *(uint32_t*)((char*)(a1) + 12) = *(uint32_t*)((char*)(a0) + 12);
}

// sub_23d870  (orig 0x23d870, ret_only)
void subsdk0_f_23d870() {}

// sub_23d880  (orig 0x23d880, ret_only)
void subsdk0_f_23d880() {}

// sub_23d890  (orig 0x23d890, getter)
uint32_t subsdk0_f_23d890(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_23dda0  (orig 0x23dda0, straight)
void subsdk0_f_23dda0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
}

// sub_23ddc0  (orig 0x23ddc0, ret_only)
void subsdk0_f_23ddc0() {}

// sub_23ddd0  (orig 0x23ddd0, ret_only)
void subsdk0_f_23ddd0() {}

// sub_23dde0  (orig 0x23dde0, getter)
uint64_t subsdk0_f_23dde0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_23ddf0  (orig 0x23ddf0, getter)
uint64_t subsdk0_f_23ddf0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_23de70  (orig 0x23de70, getter)
uint64_t subsdk0_f_23de70(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_23de80  (orig 0x23de80, getter)
uint64_t subsdk0_f_23de80(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_23de90  (orig 0x23de90, getter)
uint64_t subsdk0_f_23de90(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_23dea0  (orig 0x23dea0, setter-chain-zero)
void subsdk0_f_23dea0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
}

// sub_23ee20  (orig 0x23ee20, ret_only)
void subsdk0_f_23ee20() {}

// sub_23f280  (orig 0x23f280, setter-chain-zero)
void subsdk0_f_23f280(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 96) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 80) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 64) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
}

// sub_23f3e0  (orig 0x23f3e0, ptr_add)
void* subsdk0_f_23f3e0(void* a0) { return (char*)a0 + 152; }

// sub_23f3f0  (orig 0x23f3f0, getter)
uint64_t subsdk0_f_23f3f0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_23f400  (orig 0x23f400, getter)
uint64_t subsdk0_f_23f400(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_23f410  (orig 0x23f410, getter)
uint64_t subsdk0_f_23f410(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_23f420  (orig 0x23f420, getter)
uint64_t subsdk0_f_23f420(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_23f430  (orig 0x23f430, getter)
uint64_t subsdk0_f_23f430(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_23f440  (orig 0x23f440, getter)
uint64_t subsdk0_f_23f440(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_23f450  (orig 0x23f450, straight)
uint64_t subsdk0_f_23f450(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 120);
    return *(uint64_t*)((char*)(a0) + 112);
}

// sub_23f460  (orig 0x23f460, getter)
uint8_t subsdk0_f_23f460(void* a0) { return *(uint8_t*)((char*)(a0) + 128); }

// sub_23f470  (orig 0x23f470, getter)
uint64_t subsdk0_f_23f470(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_23f480  (orig 0x23f480, getter)
uint64_t subsdk0_f_23f480(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_23f490  (orig 0x23f490, getter)
uint64_t subsdk0_f_23f490(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_23f660  (orig 0x23f660, compare)
bool subsdk0_f_23f660(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(0); }

// sub_23f6f0  (orig 0x23f6f0, getter)
uint64_t subsdk0_f_23f6f0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_23f9a0  (orig 0x23f9a0, getter)
uint64_t subsdk0_f_23f9a0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_23fd80  (orig 0x23fd80, getter)
uint64_t subsdk0_f_23fd80(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_2401e0  (orig 0x2401e0, mov_ret)
uint32_t subsdk0_f_2401e0() { return 0; }

// sub_2401f0  (orig 0x2401f0, mov_ret)
uint64_t subsdk0_f_2401f0() { return 0; }

// sub_241b90  (orig 0x241b90, compare)
bool subsdk0_f_241b90(void* a0) { return (int8_t)(*(uint8_t*)((char*)(a0) + 26)) < (int64_t)(0); }

// sub_241dc0  (orig 0x241dc0, getter)
uint64_t subsdk0_f_241dc0(void* a0) { return *(uint64_t*)((char*)(a0) + 248); }

// sub_241dd0  (orig 0x241dd0, getter)
uint64_t subsdk0_f_241dd0(void* a0) { return *(uint64_t*)((char*)(a0) + 256); }

// sub_241de0  (orig 0x241de0, getter)
uint64_t subsdk0_f_241de0(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_241df0  (orig 0x241df0, getter)
uint64_t subsdk0_f_241df0(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_241e40  (orig 0x241e40, getter)
uint64_t subsdk0_f_241e40(void* a0) { return *(uint64_t*)((char*)(a0) + 224); }

// sub_241e50  (orig 0x241e50, getter)
uint64_t subsdk0_f_241e50(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_241e60  (orig 0x241e60, getter)
double subsdk0_f_241e60(void* a0) { return *(double*)((char*)(a0) + 240); }

// sub_242230  (orig 0x242230, getter)
double subsdk0_f_242230(void* a0) { return *(double*)((char*)(a0) + 192); }

// sub_242240  (orig 0x242240, getter)
uint64_t subsdk0_f_242240(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_242250  (orig 0x242250, getter)
uint64_t subsdk0_f_242250(void* a0) { return *(uint64_t*)((char*)(a0) + 208); }

// sub_244740  (orig 0x244740, setter-chain-zero)
void subsdk0_f_244740(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 64) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_2451b0  (orig 0x2451b0, getter)
uint64_t subsdk0_f_2451b0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_2451c0  (orig 0x2451c0, getter)
uint64_t subsdk0_f_2451c0(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_2451d0  (orig 0x2451d0, straight)
void subsdk0_f_2451d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 72));
    *(uint64_t*)((char*)(a0) + 72) = (uint64_t)((char*)(p0) + 1);
}

// sub_2451e0  (orig 0x2451e0, straight)
void subsdk0_f_2451e0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 72));
    *(uint64_t*)((char*)(a0) + 72) = (uint64_t)((char*)(p0) - 1);
}

// sub_245a40  (orig 0x245a40, mov_ret)
uint32_t subsdk0_f_245a40() { return 1; }

// sub_245a50  (orig 0x245a50, ptr_add)
void* subsdk0_f_245a50(void* a0) { return (char*)a0 + 24; }

// sub_245ac0  (orig 0x245ac0, mov_ret)
uint32_t subsdk0_f_245ac0() { return 2; }

// sub_245ad0  (orig 0x245ad0, ptr_add)
void* subsdk0_f_245ad0(void* a0) { return (char*)a0 + 24; }

// sub_245ae0  (orig 0x245ae0, getter)
uint64_t subsdk0_f_245ae0(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_245af0  (orig 0x245af0, getter)
uint64_t subsdk0_f_245af0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_245b00  (orig 0x245b00, getter)
uint64_t subsdk0_f_245b00(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_245b50  (orig 0x245b50, straight)
uint8_t subsdk0_f_245b50(void* a0) { return ((*(uint8_t*)((char*)(a0) + 26)) >> (3)) & (1); }

// sub_245b60  (orig 0x245b60, straight)
uint8_t subsdk0_f_245b60(void* a0) { return ((*(uint8_t*)((char*)(a0) + 26)) >> (1)) & (3); }

// sub_245b70  (orig 0x245b70, getter)
uint32_t subsdk0_f_245b70(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_245b80  (orig 0x245b80, straight)
void* subsdk0_f_245b80(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    return ((char *)(char*)(p0) + (uintptr_t)(((int32_t)a1)) * 16);
}

// sub_245bc0  (orig 0x245bc0, getter)
uint64_t subsdk0_f_245bc0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_245e10  (orig 0x245e10, ret_only)
void subsdk0_f_245e10() {}

// sub_246030  (orig 0x246030, setter-chain-zero)
void subsdk0_f_246030(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 40) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 64) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
}

// sub_2461a0  (orig 0x2461a0, ret_only)
void subsdk0_f_2461a0() {}

// sub_2467d0  (orig 0x2467d0, straight)
void subsdk0_f_2467d0(void* a0) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0)) = (uint64_t)k0;
}

// sub_247ca0  (orig 0x247ca0, setter-chain)
void subsdk0_f_247ca0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_248490  (orig 0x248490, setter-chain-zero)
void subsdk0_f_248490(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
}

// sub_2485d0  (orig 0x2485d0, ret_only)
void subsdk0_f_2485d0() {}

// sub_2485e0  (orig 0x2485e0, ret_only)
void subsdk0_f_2485e0() {}

// sub_248620  (orig 0x248620, straight)
void subsdk0_f_248620(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1) + 16) = *(uint64_t*)((char*)(a0) + 16);
    *(uint64_t*)((char*)(a1) + 24) = *(uint64_t*)((char*)(a0) + 24);
    *(uint64_t*)((char*)(a1) + 32) = *(uint64_t*)((char*)(a0) + 32);
    *(uint32_t*)((char*)(a1) + 40) = *(uint32_t*)((char*)(a0) + 40);
    *(uint32_t*)((char*)(a1) + 44) = *(uint32_t*)((char*)(a0) + 44);
}

// sub_248b10  (orig 0x248b10, getter)
uint32_t subsdk0_f_248b10(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_248ee0  (orig 0x248ee0, ret_only)
void subsdk0_f_248ee0() {}

// sub_249580  (orig 0x249580, straight)
void subsdk0_f_249580(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 8) = (*(uint64_t*)((char*)(a0) + 8)) + (((uint64_t)a1));
}

// sub_2496d0  (orig 0x2496d0, straight)
void subsdk0_f_2496d0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0) + 8) = (*(uint64_t*)((char*)(a0) + 8)) + (((uint64_t)a1));
    *(uint32_t*)((char*)(a0)) = (*(uint32_t*)((char*)(a0))) + (1);
}

// sub_2497f0  (orig 0x2497f0, setter-chain-zero)
void subsdk0_f_2497f0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 16) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
}

// sub_249810  (orig 0x249810, ret_only)
void subsdk0_f_249810() {}

// sub_24c970  (orig 0x24c970, straight)
void subsdk0_f_24c970(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 341) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_24cc20  (orig 0x24cc20, straight)
void subsdk0_f_24cc20(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 272) = (uint8_t)k0;
}

// sub_250c80  (orig 0x250c80, straight)
void subsdk0_f_250c80(void* a0, void* a1, void* a2, void* a3) {
    *(uint32_t*)((char*)(a0)) = 0;
    *(uint32_t*)((char*)(a1)) = 2;
    *(uint32_t*)((char*)(a2)) = 1;
    *(uint32_t*)((char*)(a3)) = 0;
}

// sub_251310  (orig 0x251310, mov_ret)
uint32_t subsdk0_f_251310() { return 1; }

// sub_251320  (orig 0x251320, ret_only)
void subsdk0_f_251320() {}

// sub_253710  (orig 0x253710, setter)
void subsdk0_f_253710(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 64) = a1; }

// sub_253720  (orig 0x253720, getter)
uint32_t subsdk0_f_253720(void* a0) { return *(uint32_t*)((char*)(a0) + 64); }

// sub_2539c0  (orig 0x2539c0, mov_ret)
uint32_t subsdk0_f_2539c0() { return 0; }

// sub_2539d0  (orig 0x2539d0, mov_ret)
uint32_t subsdk0_f_2539d0() { return 0; }

// sub_2539e0  (orig 0x2539e0, mov_ret)
uint32_t subsdk0_f_2539e0() { return 0; }

// sub_253a50  (orig 0x253a50, mov_ret)
uint64_t subsdk0_f_253a50() { return 0; }

// sub_254ab0  (orig 0x254ab0, setter-chain-zero)
void subsdk0_f_254ab0(void* a0) {
    *(uint8_t*)((char*)a0 + 64) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 65) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 66) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 67) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 68) = 0;
}

// sub_2552e0  (orig 0x2552e0, compare)
bool subsdk0_f_2552e0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 64)) == (uint64_t)(0); }

// sub_255410  (orig 0x255410, getter)
uint64_t subsdk0_f_255410(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_257d00  (orig 0x257d00, ret_only)
void subsdk0_f_257d00() {}

// sub_258260  (orig 0x258260, ret_only)
void subsdk0_f_258260() {}

// sub_258270  (orig 0x258270, mov_ret)
uint32_t subsdk0_f_258270() { return 2; }

// sub_258280  (orig 0x258280, mov_ret)
uint32_t subsdk0_f_258280() { return 2; }

// sub_258290  (orig 0x258290, mov_ret)
uint32_t subsdk0_f_258290() { return 2; }

// sub_2582a0  (orig 0x2582a0, mov_ret)
uint32_t subsdk0_f_2582a0() { return 2; }

// sub_2582b0  (orig 0x2582b0, mov_ret)
uint32_t subsdk0_f_2582b0() { return 2; }

// sub_2582c0  (orig 0x2582c0, mov_ret)
uint32_t subsdk0_f_2582c0() { return 2; }

// sub_2582d0  (orig 0x2582d0, mov_ret)
uint32_t subsdk0_f_2582d0() { return 2; }

// sub_2582e0  (orig 0x2582e0, mov_ret)
uint32_t subsdk0_f_2582e0() { return 2; }

// sub_2582f0  (orig 0x2582f0, mov_ret)
uint32_t subsdk0_f_2582f0() { return 2; }

// sub_258300  (orig 0x258300, mov_ret)
uint32_t subsdk0_f_258300() { return 2; }

// sub_258310  (orig 0x258310, mov_ret)
uint32_t subsdk0_f_258310() { return 2; }

// sub_258320  (orig 0x258320, mov_ret)
uint32_t subsdk0_f_258320() { return 2; }

// sub_258330  (orig 0x258330, mov_ret)
uint32_t subsdk0_f_258330() { return 2; }

// sub_258340  (orig 0x258340, mov_ret)
uint32_t subsdk0_f_258340() { return 2; }

// sub_258350  (orig 0x258350, mov_ret)
uint32_t subsdk0_f_258350() { return 2; }

// sub_258360  (orig 0x258360, mov_ret)
uint32_t subsdk0_f_258360() { return 2; }

// sub_258370  (orig 0x258370, mov_ret)
uint32_t subsdk0_f_258370() { return 2; }

// sub_258380  (orig 0x258380, mov_ret)
uint32_t subsdk0_f_258380() { return 2; }

// sub_258d80  (orig 0x258d80, straight)
uint32_t subsdk0_f_258d80(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(p0) + 228);
    return 0;
}

// sub_2594b0  (orig 0x2594b0, strlit-ret)
const char *subsdk0_f_2594b0() { static char g_f_2594b0[1]; __asm__ volatile("" ::: "memory"); return g_f_2594b0; }

// sub_25a350  (orig 0x25a350, mov_ret)
uint32_t subsdk0_f_25a350() { return 0; }

// sub_25a3b0  (orig 0x25a3b0, straight)
uint32_t subsdk0_f_25a3b0(void* a0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 56);
    *(uint64_t*)((char*)(a2)) = *(uint64_t*)((char*)(a0) + 64);
    return 0;
}

// sub_25a500  (orig 0x25a500, mov_ret)
uint32_t subsdk0_f_25a500() { return 0; }

// sub_25a510  (orig 0x25a510, mov_ret)
uint32_t subsdk0_f_25a510() { return 0; }

// sub_25a970  (orig 0x25a970, mov_ret)
uint32_t subsdk0_f_25a970() { return 1; }

// sub_25b4b0  (orig 0x25b4b0, mov_ret)
uint32_t subsdk0_f_25b4b0() { return 1; }

// sub_25b4c0  (orig 0x25b4c0, mov_ret)
uint32_t subsdk0_f_25b4c0() { return 1; }

// sub_25b4d0  (orig 0x25b4d0, mov_ret)
uint32_t subsdk0_f_25b4d0() { return 1; }

// sub_25c3b0  (orig 0x25c3b0, getter)
uint8_t subsdk0_f_25c3b0(void* a0) { return *(uint8_t*)((char*)(a0) + 240); }

// sub_25d520  (orig 0x25d520, straight)
uint32_t subsdk0_f_25d520(void* a0) {
    *(uint32_t*)((char*)(a0)) = 2;
    return 0;
}

// sub_25d750  (orig 0x25d750, mov_ret)
uint32_t subsdk0_f_25d750() { return 0; }

// sub_25d760  (orig 0x25d760, mov_ret)
uint32_t subsdk0_f_25d760() { return 0; }

// sub_25d7d0  (orig 0x25d7d0, mov_ret)
uint32_t subsdk0_f_25d7d0() { return 2; }

// sub_25d7f0  (orig 0x25d7f0, straight)
uint32_t subsdk0_f_25d7f0(void* a0) {
    *(uint32_t*)((char*)(a0)) = 2;
    return 0;
}

// sub_25db10  (orig 0x25db10, straight)
uint32_t subsdk0_f_25db10(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 16);
    return 0;
}

// sub_25df20  (orig 0x25df20, mov_ret)
uint32_t subsdk0_f_25df20() { return 0; }

// sub_25df50  (orig 0x25df50, mov_ret)
uint32_t subsdk0_f_25df50() { return 1; }

// sub_25e250  (orig 0x25e250, mov_ret)
uint32_t subsdk0_f_25e250() { return 2; }

// sub_25e3f0  (orig 0x25e3f0, straight)
uint32_t subsdk0_f_25e3f0(void* a0) {
    *(uint32_t*)((char*)(a0)) = 2;
    return 0;
}

// sub_25f080  (orig 0x25f080, mov_ret)
uint32_t subsdk0_f_25f080() { return 0; }

// sub_25f090  (orig 0x25f090, straight)
uint32_t subsdk0_f_25f090(uint64_t unused0, void* a1) {
    *(uint64_t*)((char*)(a1)) = -1;
    return 0;
}

// sub_25f0a0  (orig 0x25f0a0, mov_ret)
uint32_t subsdk0_f_25f0a0() { return 1; }

// sub_25f0b0  (orig 0x25f0b0, mov_ret)
uint32_t subsdk0_f_25f0b0() { return 13; }

// sub_26d220  (orig 0x26d220, straight)
uint32_t subsdk0_f_26d220(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 664));
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(p0) + 16);
    return 0;
}

// sub_26d2c0  (orig 0x26d2c0, straight-line)
uint32_t subsdk0_f_26d2c0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 664));
    *(uint32_t*)((char*)(p0)) = (uint32_t)(a1);
    return 0;
}

// sub_26d2d0  (orig 0x26d2d0, straight)
uint32_t subsdk0_f_26d2d0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 664));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(p0) + 4);
    return 0;
}

// sub_26d2f0  (orig 0x26d2f0, straight)
uint32_t subsdk0_f_26d2f0(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 664));
    *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(p0) + 32);
    return 0;
}

// sub_26d310  (orig 0x26d310, straight-line)
uint32_t subsdk0_f_26d310(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 664));
    *(uint8_t*)((char*)(p0) + 32) = (uint8_t)(a1);
    return 0;
}

// sub_26d370  (orig 0x26d370, straight)
uint32_t subsdk0_f_26d370(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 664));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(p0) + 168);
    return 0;
}

// sub_26dd70  (orig 0x26dd70, mov_ret)
uint32_t subsdk0_f_26dd70() { return 0; }

// sub_26e030  (orig 0x26e030, mov_ret)
uint32_t subsdk0_f_26e030() { return 4; }

// sub_26e040  (orig 0x26e040, ret_only)
void subsdk0_f_26e040() {}

// sub_26e050  (orig 0x26e050, ret_only)
void subsdk0_f_26e050() {}

// sub_26e060  (orig 0x26e060, mov_ret)
uint32_t subsdk0_f_26e060() { return 4; }

// sub_26e070  (orig 0x26e070, ret_only)
void subsdk0_f_26e070() {}

// sub_26e080  (orig 0x26e080, mov_ret)
uint32_t subsdk0_f_26e080() { return 4; }

// sub_26e090  (orig 0x26e090, ret_only)
void subsdk0_f_26e090() {}

// sub_26e0a0  (orig 0x26e0a0, ret_only)
void subsdk0_f_26e0a0() {}

// sub_26e0b0  (orig 0x26e0b0, mov_ret)
uint32_t subsdk0_f_26e0b0() { return -1; }

// sub_26e0c0  (orig 0x26e0c0, mov_ret)
uint32_t subsdk0_f_26e0c0() { return -1; }

// sub_26e0d0  (orig 0x26e0d0, mov_ret)
uint32_t subsdk0_f_26e0d0() { return 0; }

// sub_26e0e0  (orig 0x26e0e0, mov_ret)
uint32_t subsdk0_f_26e0e0() { return 0; }

// sub_26e0f0  (orig 0x26e0f0, mov_ret)
uint32_t subsdk0_f_26e0f0() { return -1; }

// sub_26e100  (orig 0x26e100, ret_only)
void subsdk0_f_26e100() {}

// sub_26e820  (orig 0x26e820, straight)
uint32_t subsdk0_f_26e820(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(p0) + 12);
    return 0;
}

// sub_26f870  (orig 0x26f870, copy-chain-store)
void subsdk0_f_26f870(void* a0, uint64_t a1, uint64_t a2) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 16);
    *(uint64_t*)((char*)(t0) + 104) = (uint64_t)a2;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)(t0) + 48) = (uint64_t)a1;
}

// sub_26f900  (orig 0x26f900, straight)
uint32_t subsdk0_f_26f900(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(p0) + 12);
    return 0;
}

// sub_270450  (orig 0x270450, mov_ret)
uint64_t subsdk0_f_270450() { return 0; }

// sub_270460  (orig 0x270460, mov_ret)
uint32_t subsdk0_f_270460() { return 0; }

// sub_270470  (orig 0x270470, mov_ret)
uint64_t subsdk0_f_270470() { return 0; }

// sub_273a20  (orig 0x273a20, const-ret)
uint32_t subsdk0_f_273a20() { return 2147487770u; }

// sub_276580  (orig 0x276580, straight)
uint32_t subsdk0_f_276580(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 176) = (uint32_t)(a1);
    *(uint32_t*)((char*)(a0) + 156) = (uint32_t)(a1);
    *(uint32_t*)((char*)(a0) + 32) = (uint32_t)(a1);
    return 0;
}

// sub_27e280  (orig 0x27e280, setter)
void subsdk0_f_27e280(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_27ee90  (orig 0x27ee90, straight)
uint32_t subsdk0_f_27ee90(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0) + 9332L) = *(uint32_t*)((char*)(a1) + 12);
    *(uint32_t*)((char*)(a0) + 9336L) = *(uint32_t*)((char*)(a1) + 272);
    *(uint32_t*)((char*)(a0) + 9340L) = *(uint32_t*)((char*)(a1) + 276);
    *(uint32_t*)((char*)(a0) + 9368L) = *(uint32_t*)((char*)(a1) + 280);
    *(uint32_t*)((char*)(a0) + 9344L) = *(uint32_t*)((char*)(a1) + 284);
    return 0;
}

// sub_27eec0  (orig 0x27eec0, straight)
uint32_t subsdk0_f_27eec0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0) + 9348L) = *(uint32_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 9352L) = *(uint32_t*)((char*)(a1) + 12);
    return 0;
}

// sub_27ef60  (orig 0x27ef60, straight-line)
uint32_t subsdk0_f_27ef60(uint64_t a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(1520))))))));
    return *(uint32_t*)((char*)(p0) + 1156);
}

// sub_28d380  (orig 0x28d380, mov_ret)
uint64_t subsdk0_f_28d380() { return 0; }

// sub_28ff60  (orig 0x28ff60, mov_ret)
uint32_t subsdk0_f_28ff60() { return 0; }

// sub_28ff90  (orig 0x28ff90, const-ret)
uint32_t subsdk0_f_28ff90() { return 2147487750u; }

// sub_293b10  (orig 0x293b10, straight)
uint32_t subsdk0_f_293b10(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 272));
    *(uint32_t*)((char*)(p0) + 4) = 1;
    return 0;
}

// sub_2970d0  (orig 0x2970d0, mov_ret)
uint32_t subsdk0_f_2970d0() { return 0; }

// sub_2970e0  (orig 0x2970e0, mov_ret)
uint32_t subsdk0_f_2970e0() { return 0; }

// sub_2970f0  (orig 0x2970f0, mov_ret)
uint32_t subsdk0_f_2970f0() { return 0; }

// sub_297100  (orig 0x297100, straight-line)
uint32_t subsdk0_f_297100(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 272));
    *(uint32_t*)((char*)(p0) + 8) = 0;
    return 0;
}

// sub_297110  (orig 0x297110, mov_ret)
uint32_t subsdk0_f_297110() { return 0; }

// sub_297120  (orig 0x297120, mov_ret)
uint32_t subsdk0_f_297120() { return 0; }

// sub_2972a0  (orig 0x2972a0, mov_ret)
uint32_t subsdk0_f_2972a0() { return 0; }

// sub_29a150  (orig 0x29a150, mov_ret)
uint32_t subsdk0_f_29a150() { return 0; }

// sub_29ba90  (orig 0x29ba90, straight)
uint32_t subsdk0_f_29ba90(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 272));
    *(uint32_t*)((char*)(p0) + 20) = 0;
    *(uint32_t*)((char*)(p0) + 28) = 0;
    return 0;
}

// sub_29c020  (orig 0x29c020, mov_ret)
uint32_t subsdk0_f_29c020() { return 33; }

// sub_29d8d0  (orig 0x29d8d0, straight)
uint32_t subsdk0_f_29d8d0(uint64_t unused0, uint64_t unused1, void* a2) {
    *(uint32_t*)((char*)(a2)) = 0;
    return 0;
}

// sub_29e6c0  (orig 0x29e6c0, mov_ret)
uint32_t subsdk0_f_29e6c0() { return 0; }

// sub_29e6d0  (orig 0x29e6d0, ret_only)
void subsdk0_f_29e6d0() {}

// sub_2a7060  (orig 0x2a7060, straight)
uint32_t subsdk0_f_2a7060(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0) + 9704L) = *(uint32_t*)((char*)(a1) + 12);
    *(uint32_t*)((char*)(a0) + 9708L) = *(uint32_t*)((char*)(a1) + 272);
    *(uint32_t*)((char*)(a0) + 9712L) = *(uint32_t*)((char*)(a1) + 276);
    *(uint32_t*)((char*)(a0) + 9728L) = *(uint32_t*)((char*)(a1) + 280);
    *(uint32_t*)((char*)(a0) + 9716L) = *(uint32_t*)((char*)(a1) + 284);
    *(uint64_t*)((char*)(a0) + 10960L) = *(uint64_t*)((char*)(a1) + 328);
    *(uint32_t*)((char*)(a0) + 10968L) = *(uint32_t*)((char*)(a1) + 336);
    *(uint32_t*)((char*)(a0) + 10976L) = *(uint32_t*)((char*)(a1) + 340);
    *(uint32_t*)((char*)(a0) + 10972L) = 0;
    return 0;
}

// sub_2a70b0  (orig 0x2a70b0, straight-line)
uint32_t subsdk0_f_2a70b0(uint64_t a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(1584))))))));
    return *(uint32_t*)((char*)(p0) + 1108);
}

// sub_2aa920  (orig 0x2aa920, straight-line)
uint32_t subsdk0_f_2aa920(uint64_t a0, uint32_t a1, uint64_t a2) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(1584))))))));
    *(uint32_t*)((char*)(p0) + 1120) = (uint32_t)(a2);
    return 0;
}

// sub_2ae640  (orig 0x2ae640, mov_ret)
uint32_t subsdk0_f_2ae640() { return 0; }

// sub_2af990  (orig 0x2af990, ret_only)
void subsdk0_f_2af990() {}

// sub_2af9a0  (orig 0x2af9a0, getter-chain)
uint64_t subsdk0_f_2af9a0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 8))) + 4); }

// sub_2b1140  (orig 0x2b1140, getter)
uint32_t subsdk0_f_2b1140(void* a0) { return *(uint32_t*)((char*)(a0) + 132); }

// sub_2b4670  (orig 0x2b4670, getter)
uint32_t subsdk0_f_2b4670(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_2b4e20  (orig 0x2b4e20, setter)
void subsdk0_f_2b4e20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 288) = a1; }

// sub_2b7c80  (orig 0x2b7c80, setter)
void subsdk0_f_2b7c80(void* a0) { *(uint32_t*)((char*)(a0) + 44) = 0; }

// hw_vic  (orig 0x2b7dd0, strlit-ret)
const char *subsdk0_f_2b7dd0() { static char g_f_2b7dd0[1]; __asm__ volatile("" ::: "memory"); return g_f_2b7dd0; }

// VIC_hardware_backend  (orig 0x2b7de0, strlit-ret)
const char *subsdk0_f_2b7de0() { static char g_f_2b7de0[1]; __asm__ volatile("" ::: "memory"); return g_f_2b7de0; }

// sub_2b8390  (orig 0x2b8390, mov_ret)
uint32_t subsdk0_f_2b8390() { return 0; }

// sub_2b83a0  (orig 0x2b83a0, ret_only)
void subsdk0_f_2b83a0() {}

// sub_2b9dc0  (orig 0x2b9dc0, straight-line)
void subsdk0_f_2b9dc0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    *(uint64_t*)((char*)(p0) + 448) = a1;
}

// sub_2ba120  (orig 0x2ba120, copy-chain-store)
void subsdk0_f_2ba120(void* a0, uint64_t a1, uint32_t a2) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 24);
    *(uint64_t*)((char*)(t0) + 56) = (uint64_t)a1;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)(t0) + 64) = (uint32_t)a2;
}

// sub_2ba9d0  (orig 0x2ba9d0, getter-chain)
uint16_t subsdk0_f_2ba9d0(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0) + 24))) + 74); }

// sub_2baa80  (orig 0x2baa80, ret_only)
void subsdk0_f_2baa80() {}

// sub_2bb1e0  (orig 0x2bb1e0, mov_ret)
uint32_t subsdk0_f_2bb1e0() { return 1; }

// sub_2bb1f0  (orig 0x2bb1f0, mov_ret)
uint32_t subsdk0_f_2bb1f0() { return 1; }

// sub_2bb200  (orig 0x2bb200, ret_only)
void subsdk0_f_2bb200() {}

// sub_2bb210  (orig 0x2bb210, mov_ret)
uint32_t subsdk0_f_2bb210() { return 1; }

// sub_2bb220  (orig 0x2bb220, ret_only)
void subsdk0_f_2bb220() {}

// sub_2bb230  (orig 0x2bb230, ret_only)
void subsdk0_f_2bb230() {}

// sub_2bb240  (orig 0x2bb240, mov_ret)
uint32_t subsdk0_f_2bb240() { return 1; }

// sub_2bb250  (orig 0x2bb250, mov_ret)
uint32_t subsdk0_f_2bb250() { return 1; }

// sub_2bb260  (orig 0x2bb260, mov_ret)
uint32_t subsdk0_f_2bb260() { return 1; }

// sub_2cb290  (orig 0x2cb290, ret_only)
void subsdk0_f_2cb290() {}

// sub_2d6260  (orig 0x2d6260, straight-line)
uint8_t subsdk0_f_2d6260(void* a0) { return ((*(uint8_t*)((char*)(a0) + 5656L) == 1) ? 1 : 0); }

// sub_2e9a30  (orig 0x2e9a30, straight)
void subsdk0_f_2e9a30(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 63575L) = (uint8_t)k0;
}

// sub_2e9a40  (orig 0x2e9a40, straight)
void subsdk0_f_2e9a40(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 63575L) = (uint8_t)k0;
}

// sub_2f16e0  (orig 0x2f16e0, mov_ret)
uint32_t subsdk0_f_2f16e0() { return 0; }

// sub_2f1a10  (orig 0x2f1a10, ret_only)
void subsdk0_f_2f1a10() {}

// sub_2f2850  (orig 0x2f2850, straight)
void subsdk0_f_2f2850(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)((((uint32_t)a1)) >> (24));
    *(uint8_t*)((char*)(a0) + 1) = (uint8_t)((((uint32_t)a1)) >> (16));
    *(uint8_t*)((char*)(a0) + 2) = (uint8_t)((((uint32_t)a1)) >> (8));
    *(uint8_t*)((char*)(a0) + 3) = (uint8_t)(a1);
}

// sub_3052f0  (orig 0x3052f0, mov_ret)
uint32_t subsdk0_f_3052f0() { return 0; }

// sub_3053f0  (orig 0x3053f0, straight)
void subsdk0_f_3053f0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 102307L) = (uint8_t)k0;
}

// sub_318fc0  (orig 0x318fc0, mov_ret)
uint32_t subsdk0_f_318fc0() { return 0; }

// sub_337b00  (orig 0x337b00, mov_ret)
uint32_t subsdk0_f_337b00() { return 1; }

// sub_338ce0  (orig 0x338ce0, mov_ret)
uint32_t subsdk0_f_338ce0() { return 0; }

// sub_339850  (orig 0x339850, mov_ret)
uint32_t subsdk0_f_339850() { return 0; }

// sub_33b470  (orig 0x33b470, mov_ret)
uint32_t subsdk0_f_33b470() { return 2; }

// sub_33c7c0  (orig 0x33c7c0, mov_ret)
uint32_t subsdk0_f_33c7c0() { return 1; }

// sub_33df40  (orig 0x33df40, mov_ret)
uint32_t subsdk0_f_33df40() { return 1; }

// sub_3489a0  (orig 0x3489a0, mov_ret)
uint32_t subsdk0_f_3489a0() { return 0; }

// sub_3489b0  (orig 0x3489b0, mov_ret)
uint32_t subsdk0_f_3489b0() { return 0; }

// sub_3489c0  (orig 0x3489c0, ret_only)
void subsdk0_f_3489c0() {}

// sub_348a70  (orig 0x348a70, ret_only)
void subsdk0_f_348a70() {}

// sub_34b0d0  (orig 0x34b0d0, ret_only)
void subsdk0_f_34b0d0() {}

// sub_34b0e0  (orig 0x34b0e0, mov_ret)
uint64_t subsdk0_f_34b0e0() { return 0; }

// sub_34b330  (orig 0x34b330, mov_ret)
uint32_t subsdk0_f_34b330() { return 1; }

// sub_34b360  (orig 0x34b360, mov_ret)
uint32_t subsdk0_f_34b360() { return 1; }

// sub_34b370  (orig 0x34b370, mov_ret)
uint32_t subsdk0_f_34b370() { return 0; }

// sub_34b380  (orig 0x34b380, mov_ret)
uint32_t subsdk0_f_34b380() { return 0; }

// sub_34b390  (orig 0x34b390, mov_ret)
uint32_t subsdk0_f_34b390() { return 0; }

// sub_34b3a0  (orig 0x34b3a0, mov_ret)
uint32_t subsdk0_f_34b3a0() { return 0; }

// sub_34bf60  (orig 0x34bf60, mov_ret)
uint32_t subsdk0_f_34bf60() { return 0; }

// sub_35ba90  (orig 0x35ba90, straight)
uint64_t subsdk0_f_35ba90(void* a0) {
    *(uint32_t*)((char*)(a0)) = 0;
    return 0;
}

// sub_35baa0  (orig 0x35baa0, ret_only)
void subsdk0_f_35baa0() {}

// sub_35bab0  (orig 0x35bab0, mov_ret)
uint64_t subsdk0_f_35bab0() { return 0; }

// sub_35bac0  (orig 0x35bac0, ret_only)
void subsdk0_f_35bac0() {}

// sub_35bad0  (orig 0x35bad0, mov_ret)
uint64_t subsdk0_f_35bad0() { return 0; }

// sub_35bae0  (orig 0x35bae0, ret_only)
void subsdk0_f_35bae0() {}

// sub_35baf0  (orig 0x35baf0, ret_only)
void subsdk0_f_35baf0() {}

// sub_35bb00  (orig 0x35bb00, ret_only)
void subsdk0_f_35bb00() {}

// sub_35bb10  (orig 0x35bb10, mov_ret)
uint64_t subsdk0_f_35bb10() { return 0; }

// sub_35bb20  (orig 0x35bb20, ret_only)
void subsdk0_f_35bb20() {}

// sub_35bb30  (orig 0x35bb30, mov_ret)
uint32_t subsdk0_f_35bb30() { return 0; }

// sub_35bb40  (orig 0x35bb40, mov_ret)
uint32_t subsdk0_f_35bb40() { return 0; }

// sub_35bb50  (orig 0x35bb50, mov_ret)
uint32_t subsdk0_f_35bb50() { return 0; }

// sub_35bb60  (orig 0x35bb60, mov_ret)
uint32_t subsdk0_f_35bb60() { return 0; }

// sub_35bb70  (orig 0x35bb70, mov_ret)
uint32_t subsdk0_f_35bb70() { return 0; }

// sub_35bb80  (orig 0x35bb80, ret_only)
void subsdk0_f_35bb80() {}

// sub_35bb90  (orig 0x35bb90, mov_ret)
uint32_t subsdk0_f_35bb90() { return 0; }

// sub_35bba0  (orig 0x35bba0, mov_ret)
uint32_t subsdk0_f_35bba0() { return 0; }

// sub_35bbb0  (orig 0x35bbb0, mov_ret)
uint32_t subsdk0_f_35bbb0() { return 0; }

// sub_35bc90  (orig 0x35bc90, mov_ret)
uint32_t subsdk0_f_35bc90() { return 1; }

// sub_35df90  (orig 0x35df90, mov_ret)
uint32_t subsdk0_f_35df90() { return 6; }

// sub_35dfa0  (orig 0x35dfa0, ret_only)
void subsdk0_f_35dfa0() {}

