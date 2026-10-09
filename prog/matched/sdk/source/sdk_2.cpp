/* sdk -- 2000 functions verified to match the original.
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
uint32_t sdk_f_1b0() { return 0; }

// sub_1c0  (orig 0x1c0, mov_ret)
uint32_t sdk_f_1c0() { return 0; }

// sub_1d0  (orig 0x1d0, mov_ret)
uint32_t sdk_f_1d0() { return 0; }

// sub_230  (orig 0x230, ret_only)
void sdk_f_230() {}

// sub_280  (orig 0x280, straight-line)
typedef struct { unsigned char b[24]; } __S_f_280;
__S_f_280 sdk_f_280() {
    __S_f_280 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_290  (orig 0x290, mov_ret)
uint64_t sdk_f_290() { return 0; }

// sub_2a0  (orig 0x2a0, mov_ret)
uint64_t sdk_f_2a0() { return 0; }

// sub_2b0  (orig 0x2b0, mov_ret)
uint32_t sdk_f_2b0() { return 0; }

// sub_330  (orig 0x330, mov_ret)
uint32_t sdk_f_330() { return 1; }

// sub_340  (orig 0x340, mov_ret)
uint32_t sdk_f_340() { return 0; }

// sub_4a0  (orig 0x4a0, mov_ret)
uint32_t sdk_f_4a0() { return -38; }

// sub_4b0  (orig 0x4b0, mov_ret)
uint32_t sdk_f_4b0() { return -38; }

// sub_4c0  (orig 0x4c0, mov_ret)
uint32_t sdk_f_4c0() { return 0; }

// sub_680  (orig 0x680, ret_only)
void sdk_f_680() {}

// sub_a40  (orig 0xa40, straight)
uint32_t sdk_f_a40(uint64_t unused0, uint64_t unused1, void* a2, void* a3) {
    uint32_t k0 = 0;
    *(uint32_t*)((char*)(a2)) = 0;
    *(uint8_t*)((char*)(a3)) = (uint8_t)k0;
    return -38;
}

// sub_1470  (orig 0x1470, compare)
bool sdk_f_1470(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 48)) != (uint64_t)(0); }

// sub_16e0  (orig 0x16e0, mov_ret)
uint32_t sdk_f_16e0() { return -38; }

// sub_18a0  (orig 0x18a0, ret_only)
void sdk_f_18a0() {}

// sub_1c30  (orig 0x1c30, ptr_add)
void* sdk_f_1c30(void* a0) { return (char*)a0 + 136; }

// sub_1c40  (orig 0x1c40, ptr_add)
void* sdk_f_1c40(void* a0) { return (char*)a0 + 128; }

// sub_1cd0  (orig 0x1cd0, ret_only)
void sdk_f_1cd0() {}

// sub_1ce0  (orig 0x1ce0, ret_only)
void sdk_f_1ce0() {}

// sub_1f80  (orig 0x1f80, ret_only)
void sdk_f_1f80() {}

// sub_4240  (orig 0x4240, getter)
uint64_t sdk_f_4240(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_42b0  (orig 0x42b0, ptr_add)
void* sdk_f_42b0(void* a0) { return (char*)a0 + 8; }

// sub_4480  (orig 0x4480, getter)
uint64_t sdk_f_4480(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_44f0  (orig 0x44f0, ptr_add)
void* sdk_f_44f0(void* a0) { return (char*)a0 + 8; }

// sub_5190  (orig 0x5190, getter)
uint64_t sdk_f_5190(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_55c0  (orig 0x55c0, mov_ret)
uint32_t sdk_f_55c0() { return -38; }

// sub_55d0  (orig 0x55d0, mov_ret)
uint32_t sdk_f_55d0() { return -38; }

// sub_55e0  (orig 0x55e0, mov_ret)
uint32_t sdk_f_55e0() { return -38; }

// sub_5ee0  (orig 0x5ee0, getter)
uint64_t sdk_f_5ee0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_5ef0  (orig 0x5ef0, ptr_add)
void* sdk_f_5ef0(void* a0) { return (char*)a0 + 16; }

// sub_6da0  (orig 0x6da0, getter)
uint32_t sdk_f_6da0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_6dd0  (orig 0x6dd0, getter)
uint64_t sdk_f_6dd0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_6e00  (orig 0x6e00, getter)
uint64_t sdk_f_6e00(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_6e30  (orig 0x6e30, getter)
uint32_t sdk_f_6e30(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_6e60  (orig 0x6e60, getter)
uint32_t sdk_f_6e60(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_7970  (orig 0x7970, getter)
uint64_t sdk_f_7970(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_79c0  (orig 0x79c0, getter)
uint64_t sdk_f_79c0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_79d0  (orig 0x79d0, getter)
uint64_t sdk_f_79d0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_7d40  (orig 0x7d40, setter-chain)
void sdk_f_7d40(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 32) = a1; *(uint64_t*)((char*)(a0) + 64) = 0; }

// sub_8260  (orig 0x8260, straight)
void sdk_f_8260(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 74) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_8700  (orig 0x8700, getter)
uint64_t sdk_f_8700(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_8770  (orig 0x8770, getter)
uint64_t sdk_f_8770(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_8780  (orig 0x8780, getter)
uint32_t sdk_f_8780(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_8790  (orig 0x8790, setter)
void sdk_f_8790(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0)) = a1; }

// sub_b210  (orig 0xb210, getter)
uint64_t sdk_f_b210(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_b240  (orig 0xb240, getter)
uint64_t sdk_f_b240(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_b250  (orig 0xb250, getter)
uint64_t sdk_f_b250(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_b570  (orig 0xb570, setter-chain)
void sdk_f_b570(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_b600  (orig 0xb600, setter-chain)
void sdk_f_b600(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_bb90  (orig 0xbb90, ret_only)
void sdk_f_bb90() {}

// sub_c900  (orig 0xc900, ret_only)
void sdk_f_c900() {}

// sub_c910  (orig 0xc910, ret_only)
void sdk_f_c910() {}

// sub_cb30  (orig 0xcb30, mov_ret)
uint32_t sdk_f_cb30() { return -1; }

// sub_cb40  (orig 0xcb40, mov_ret)
uint64_t sdk_f_cb40() { return -1; }

// sub_cb50  (orig 0xcb50, mov_ret)
uint32_t sdk_f_cb50() { return -1; }

// sub_cb60  (orig 0xcb60, mov_ret)
uint32_t sdk_f_cb60() { return -1; }

// sub_cb70  (orig 0xcb70, mov_ret)
uint32_t sdk_f_cb70() { return 4096; }

// sub_d440  (orig 0xd440, mov_ret)
uint32_t sdk_f_d440() { return -38; }

// sub_d450  (orig 0xd450, mov_ret)
uint32_t sdk_f_d450() { return -38; }

// sub_d460  (orig 0xd460, mov_ret)
uint32_t sdk_f_d460() { return -38; }

// sub_d470  (orig 0xd470, mov_ret)
uint32_t sdk_f_d470() { return -38; }

// sub_d4c0  (orig 0xd4c0, mov_ret)
uint64_t sdk_f_d4c0() { return 0; }

// sub_dd10  (orig 0xdd10, ret_only)
void sdk_f_dd10() {}

// sub_e540  (orig 0xe540, mov_ret)
uint32_t sdk_f_e540() { return -38; }

// sub_e780  (orig 0xe780, ptr_add)
void* sdk_f_e780(void* a0) { return (char*)a0 + 16; }

// sub_e790  (orig 0xe790, mov_ret)
uint64_t sdk_f_e790() { return 0; }

// sub_ea20  (orig 0xea20, ptr_add)
void* sdk_f_ea20(void* a0) { return (char*)a0 + 8; }

// sub_ea30  (orig 0xea30, straight)
void* sdk_f_ea30(void* a0) { return (char*)(a0) - 8; }

// sub_fe00  (orig 0xfe00, mov_ret)
uint32_t sdk_f_fe00() { return -1; }

// sub_fe10  (orig 0xfe10, mov_ret)
uint32_t sdk_f_fe10() { return -1; }

// sub_ffe0  (orig 0xffe0, straight-line)
uint32_t sdk_f_ffe0(void* a0) { return (((*(uint32_t*)((char*)(a0)) == 12)) ? (0) : (-22)); }

// sub_10000  (orig 0x10000, mov_ret)
uint32_t sdk_f_10000() { return -1; }

// sub_10090  (orig 0x10090, mov_ret)
uint32_t sdk_f_10090() { return 0; }

// sub_101a0  (orig 0x101a0, mov_ret)
uint32_t sdk_f_101a0() { return 64; }

// sub_10fc0  (orig 0x10fc0, ptr_add)
void* sdk_f_10fc0(void* a0) { return (char*)a0 + 8; }

// sub_111f0  (orig 0x111f0, getter)
uint64_t sdk_f_111f0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_12ab0  (orig 0x12ab0, ret_only)
void sdk_f_12ab0() {}

// sub_12bc0  (orig 0x12bc0, ptr_add)
void* sdk_f_12bc0(void* a0) { return (char*)a0 + 16; }

// sub_12bf0  (orig 0x12bf0, ptr_add)
void* sdk_f_12bf0(void* a0) { return (char*)a0 + 8; }

// sub_12d90  (orig 0x12d90, getter)
uint64_t sdk_f_12d90(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_12dc0  (orig 0x12dc0, getter)
uint64_t sdk_f_12dc0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_13450  (orig 0x13450, mov_ret)
uint32_t sdk_f_13450() { return 52; }

// sub_1ab70  (orig 0x1ab70, ptr_add)
void* sdk_f_1ab70(void* a0) { return (char*)a0 + 8; }

// sub_1ae00  (orig 0x1ae00, ret_only)
void sdk_f_1ae00() {}

// sub_1ae10  (orig 0x1ae10, ret_only)
void sdk_f_1ae10() {}

// sub_1beb0  (orig 0x1beb0, ret_only)
void sdk_f_1beb0() {}

// sub_1cae0  (orig 0x1cae0, ptr_add)
void* sdk_f_1cae0(void* a0) { return (char*)a0 + 8; }

// sub_1d100  (orig 0x1d100, getter)
uint64_t sdk_f_1d100(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1e520  (orig 0x1e520, getter)
uint64_t sdk_f_1e520(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1fc10  (orig 0x1fc10, getter)
uint64_t sdk_f_1fc10(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_1fc40  (orig 0x1fc40, getter)
uint64_t sdk_f_1fc40(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_210d0  (orig 0x210d0, ptr_add)
void* sdk_f_210d0(void* a0) { return (char*)a0 + 8; }

// sub_21300  (orig 0x21300, getter)
uint64_t sdk_f_21300(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_21540  (orig 0x21540, straight-line)
typedef struct { unsigned char b[24]; } __S_f_21540;
__S_f_21540 sdk_f_21540() {
    __S_f_21540 r;
    *(uint64_t *)((char *)&r + 0) = 0;
    return r;
}

// sub_22ca0  (orig 0x22ca0, ret_only)
void sdk_f_22ca0() {}

// sub_22cb0  (orig 0x22cb0, ret_only)
void sdk_f_22cb0() {}

// sub_23700  (orig 0x23700, ret_only)
void sdk_f_23700() {}

// sub_23710  (orig 0x23710, ret_only)
void sdk_f_23710() {}

// sub_24540  (orig 0x24540, ptr_add)
void* sdk_f_24540(void* a0) { return (char*)a0 + 8; }

// sub_24770  (orig 0x24770, getter)
uint64_t sdk_f_24770(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_26da0  (orig 0x26da0, straight)
uint32_t sdk_f_26da0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 3888);
    return 0;
}

// sub_2a750  (orig 0x2a750, getter)
uint32_t sdk_f_2a750(void* a0) { return *(uint32_t*)((char*)(a0) + 48); }

// sub_2d7e0  (orig 0x2d7e0, mov_ret)
uint64_t sdk_f_2d7e0() { return 0; }

// sub_2d7f0  (orig 0x2d7f0, ret_only)
void sdk_f_2d7f0() {}

// sub_2d800  (orig 0x2d800, mov_ret)
uint64_t sdk_f_2d800() { return 0; }

// sub_2ddb0  (orig 0x2ddb0, getter)
uint64_t sdk_f_2ddb0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_2ddc0  (orig 0x2ddc0, getter)
uint64_t sdk_f_2ddc0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_2e070  (orig 0x2e070, mov_ret)
uint32_t sdk_f_2e070() { return 36; }

// sub_2e080  (orig 0x2e080, mov_ret)
uint64_t sdk_f_2e080() { return 0; }

// sub_2e3b0  (orig 0x2e3b0, mov_ret)
uint32_t sdk_f_2e3b0() { return 0; }

// sub_2e3c0  (orig 0x2e3c0, straight-line)
uint64_t sdk_f_2e3c0(void* a0) { return (8) + ((*(uint64_t*)((char*)(a0) + 24)) * (24)); }

// sub_2ec90  (orig 0x2ec90, getter)
uint32_t sdk_f_2ec90(void* a0) { return *(uint32_t*)((char*)(a0) + 200); }

// sub_2fa60  (orig 0x2fa60, ret_only)
void sdk_f_2fa60() {}

// sub_2fa70  (orig 0x2fa70, ret_only)
void sdk_f_2fa70() {}

// sub_30160  (orig 0x30160, getter-chain)
uint16_t sdk_f_30160(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 4); }

// sub_309e0  (orig 0x309e0, getter)
uint64_t sdk_f_309e0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_30c40  (orig 0x30c40, compare)
bool sdk_f_30c40(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) == (uint64_t)(*(uint64_t*)((char*)(a1) + 8)); }

// sub_32390  (orig 0x32390, ret_only)
void sdk_f_32390() {}

// sub_32b00  (orig 0x32b00, straight)
uint64_t sdk_f_32b00(void* a0) { return (*(uint64_t*)((char*)(a0) + 16)) << (4); }

// sub_33050  (orig 0x33050, ret_only)
void sdk_f_33050() {}

// sub_33060  (orig 0x33060, ret_only)
void sdk_f_33060() {}

// sub_33150  (orig 0x33150, ret_only)
void sdk_f_33150() {}

// sub_334f0  (orig 0x334f0, getter-chain)
uint32_t sdk_f_334f0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 8)))); }

// sub_33500  (orig 0x33500, getter)
uint64_t sdk_f_33500(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_33700  (orig 0x33700, getter)
uint32_t sdk_f_33700(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_33710  (orig 0x33710, ret_only)
void sdk_f_33710() {}

// sub_33720  (orig 0x33720, ret_only)
void sdk_f_33720() {}

// sub_33760  (orig 0x33760, getter)
uint64_t sdk_f_33760(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_338d0  (orig 0x338d0, ret_only)
void sdk_f_338d0() {}

// sub_338e0  (orig 0x338e0, ret_only)
void sdk_f_338e0() {}

// sub_338f0  (orig 0x338f0, straight)
uint32_t sdk_f_338f0(uint64_t unused0, uint32_t a1) { return (((uint32_t)a1)) & (1); }

// sub_33900  (orig 0x33900, ret_only)
void sdk_f_33900() {}

// sub_33910  (orig 0x33910, ret_only)
void sdk_f_33910() {}

// sub_33920  (orig 0x33920, ret_only)
void sdk_f_33920() {}

// sub_33930  (orig 0x33930, ret_only)
void sdk_f_33930() {}

// sub_36f70  (orig 0x36f70, ret_only)
void sdk_f_36f70() {}

// sub_36fc0  (orig 0x36fc0, mov_ret)
uint32_t sdk_f_36fc0() { return -1; }

// sub_36fd0  (orig 0x36fd0, mov_ret)
uint64_t sdk_f_36fd0() { return -1; }

// sub_36fe0  (orig 0x36fe0, ret_only)
void sdk_f_36fe0() {}

// sub_37530  (orig 0x37530, mov_ret)
uint32_t sdk_f_37530() { return 0; }

// sub_39640  (orig 0x39640, getter)
uint64_t sdk_f_39640(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_3a960  (orig 0x3a960, getter)
uint64_t sdk_f_3a960(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_3e0e0  (orig 0x3e0e0, ptr_add)
void* sdk_f_3e0e0(void* a0) { return (char*)a0 + 32; }

// sub_3e770  (orig 0x3e770, ptr_add)
void* sdk_f_3e770(void* a0) { return (char*)a0 + 8; }

// sub_3e780  (orig 0x3e780, straight)
void* sdk_f_3e780(void* a0) { return (char*)(a0) - 24; }

// sub_3ef40  (orig 0x3ef40, ptr_add)
void* sdk_f_3ef40(void* a0) { return (char*)a0 + 32; }

// sub_3eff0  (orig 0x3eff0, ptr_add)
void* sdk_f_3eff0(void* a0) { return (char*)a0 + 8; }

// sub_3f000  (orig 0x3f000, straight)
void* sdk_f_3f000(void* a0) { return (char*)(a0) - 24; }

// sub_3fb20  (orig 0x3fb20, ptr_add)
void* sdk_f_3fb20(void* a0) { return (char*)a0 + 32; }

// sub_3fb50  (orig 0x3fb50, ptr_add)
void* sdk_f_3fb50(void* a0) { return (char*)a0 + 8; }

// sub_3fb60  (orig 0x3fb60, straight)
void* sdk_f_3fb60(void* a0) { return (char*)(a0) - 24; }

// sub_3fcb0  (orig 0x3fcb0, ptr_add)
void* sdk_f_3fcb0(void* a0) { return (char*)a0 + 32; }

// sub_3ff60  (orig 0x3ff60, ptr_add)
void* sdk_f_3ff60(void* a0) { return (char*)a0 + 8; }

// sub_3ff70  (orig 0x3ff70, straight)
void* sdk_f_3ff70(void* a0) { return (char*)(a0) - 24; }

// sub_400c0  (orig 0x400c0, ptr_add)
void* sdk_f_400c0(void* a0) { return (char*)a0 + 32; }

// sub_40150  (orig 0x40150, ptr_add)
void* sdk_f_40150(void* a0) { return (char*)a0 + 8; }

// sub_40160  (orig 0x40160, straight)
void* sdk_f_40160(void* a0) { return (char*)(a0) - 24; }

// sub_40780  (orig 0x40780, ptr_add)
void* sdk_f_40780(void* a0) { return (char*)a0 + 32; }

// sub_408f0  (orig 0x408f0, ptr_add)
void* sdk_f_408f0(void* a0) { return (char*)a0 + 8; }

// sub_40900  (orig 0x40900, straight)
void* sdk_f_40900(void* a0) { return (char*)(a0) - 24; }

// sub_40d90  (orig 0x40d90, ptr_add)
void* sdk_f_40d90(void* a0) { return (char*)a0 + 32; }

// sub_40e40  (orig 0x40e40, ptr_add)
void* sdk_f_40e40(void* a0) { return (char*)a0 + 8; }

// sub_40e50  (orig 0x40e50, straight)
void* sdk_f_40e50(void* a0) { return (char*)(a0) - 24; }

// sub_413d0  (orig 0x413d0, ptr_add)
void* sdk_f_413d0(void* a0) { return (char*)a0 + 32; }

// sub_414d0  (orig 0x414d0, ptr_add)
void* sdk_f_414d0(void* a0) { return (char*)a0 + 8; }

// sub_414e0  (orig 0x414e0, straight)
void* sdk_f_414e0(void* a0) { return (char*)(a0) - 24; }

// sub_41790  (orig 0x41790, ptr_add)
void* sdk_f_41790(void* a0) { return (char*)a0 + 32; }

// sub_41fa0  (orig 0x41fa0, ptr_add)
void* sdk_f_41fa0(void* a0) { return (char*)a0 + 8; }

// sub_41fb0  (orig 0x41fb0, straight)
void* sdk_f_41fb0(void* a0) { return (char*)(a0) - 24; }

// sub_42100  (orig 0x42100, ptr_add)
void* sdk_f_42100(void* a0) { return (char*)a0 + 32; }

// sub_42130  (orig 0x42130, ptr_add)
void* sdk_f_42130(void* a0) { return (char*)a0 + 8; }

// sub_42140  (orig 0x42140, straight)
void* sdk_f_42140(void* a0) { return (char*)(a0) - 24; }

// sub_42290  (orig 0x42290, ptr_add)
void* sdk_f_42290(void* a0) { return (char*)a0 + 32; }

// sub_42880  (orig 0x42880, ptr_add)
void* sdk_f_42880(void* a0) { return (char*)a0 + 8; }

// sub_42890  (orig 0x42890, straight)
void* sdk_f_42890(void* a0) { return (char*)(a0) - 24; }

// sub_443c0  (orig 0x443c0, ptr_add)
void* sdk_f_443c0(void* a0) { return (char*)a0 + 32; }

// sub_450f0  (orig 0x450f0, ptr_add)
void* sdk_f_450f0(void* a0) { return (char*)a0 + 8; }

// sub_45100  (orig 0x45100, straight)
void* sdk_f_45100(void* a0) { return (char*)(a0) - 24; }

// sub_453b0  (orig 0x453b0, ptr_add)
void* sdk_f_453b0(void* a0) { return (char*)a0 + 32; }

// sub_454c0  (orig 0x454c0, ptr_add)
void* sdk_f_454c0(void* a0) { return (char*)a0 + 8; }

// sub_454d0  (orig 0x454d0, straight)
void* sdk_f_454d0(void* a0) { return (char*)(a0) - 24; }

// sub_45a80  (orig 0x45a80, ptr_add)
void* sdk_f_45a80(void* a0) { return (char*)a0 + 32; }

// sub_45db0  (orig 0x45db0, ptr_add)
void* sdk_f_45db0(void* a0) { return (char*)a0 + 8; }

// sub_45dc0  (orig 0x45dc0, straight)
void* sdk_f_45dc0(void* a0) { return (char*)(a0) - 24; }

// sub_45f10  (orig 0x45f10, ptr_add)
void* sdk_f_45f10(void* a0) { return (char*)a0 + 32; }

// sub_46e90  (orig 0x46e90, ptr_add)
void* sdk_f_46e90(void* a0) { return (char*)a0 + 8; }

// sub_46ea0  (orig 0x46ea0, straight)
void* sdk_f_46ea0(void* a0) { return (char*)(a0) - 24; }

// sub_46ff0  (orig 0x46ff0, ptr_add)
void* sdk_f_46ff0(void* a0) { return (char*)a0 + 32; }

// sub_47210  (orig 0x47210, ptr_add)
void* sdk_f_47210(void* a0) { return (char*)a0 + 8; }

// sub_47220  (orig 0x47220, straight)
void* sdk_f_47220(void* a0) { return (char*)(a0) - 24; }

// sub_47df0  (orig 0x47df0, ptr_add)
void* sdk_f_47df0(void* a0) { return (char*)a0 + 32; }

// sub_47fb0  (orig 0x47fb0, ptr_add)
void* sdk_f_47fb0(void* a0) { return (char*)a0 + 8; }

// sub_47fc0  (orig 0x47fc0, straight)
void* sdk_f_47fc0(void* a0) { return (char*)(a0) - 24; }

// sub_48110  (orig 0x48110, ptr_add)
void* sdk_f_48110(void* a0) { return (char*)a0 + 32; }

// sub_48370  (orig 0x48370, ptr_add)
void* sdk_f_48370(void* a0) { return (char*)a0 + 8; }

// sub_48380  (orig 0x48380, straight)
void* sdk_f_48380(void* a0) { return (char*)(a0) - 24; }

// sub_485b0  (orig 0x485b0, getter)
uint64_t sdk_f_485b0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_487c0  (orig 0x487c0, compare)
bool sdk_f_487c0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 24)) != (uint64_t)(0); }

// sub_492c0  (orig 0x492c0, ptr_add)
void* sdk_f_492c0(void* a0) { return (char*)a0 + 32; }

// sub_493d0  (orig 0x493d0, ptr_add)
void* sdk_f_493d0(void* a0) { return (char*)a0 + 8; }

// sub_493e0  (orig 0x493e0, straight)
void* sdk_f_493e0(void* a0) { return (char*)(a0) - 24; }

// sub_49510  (orig 0x49510, ptr_add)
void* sdk_f_49510(void* a0) { return (char*)a0 + 32; }

// sub_495a0  (orig 0x495a0, ptr_add)
void* sdk_f_495a0(void* a0) { return (char*)a0 + 8; }

// sub_495b0  (orig 0x495b0, straight)
void* sdk_f_495b0(void* a0) { return (char*)(a0) - 24; }

// sub_499f0  (orig 0x499f0, ret_only)
void sdk_f_499f0() {}

// sub_49ac0  (orig 0x49ac0, setter)
void sdk_f_49ac0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_49ad0  (orig 0x49ad0, ret_only)
void sdk_f_49ad0() {}

// sub_49ae0  (orig 0x49ae0, getter)
uint8_t sdk_f_49ae0(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_49cf0  (orig 0x49cf0, getter)
uint8_t sdk_f_49cf0(void* a0) { return *(uint8_t*)((char*)(a0) + 513); }

// sub_49d00  (orig 0x49d00, getter)
uint8_t sdk_f_49d00(void* a0) { return *(uint8_t*)((char*)(a0) + 596); }

// sub_49d80  (orig 0x49d80, setter)
void sdk_f_49d80(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_49d90  (orig 0x49d90, setter)
void sdk_f_49d90(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_49da0  (orig 0x49da0, copy-chain)
void sdk_f_49da0(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); *(uint64_t*)((char*)(a1)) = 0; }

// sub_49f80  (orig 0x49f80, setter)
void sdk_f_49f80(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_49f90  (orig 0x49f90, setter)
void sdk_f_49f90(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_49fa0  (orig 0x49fa0, copy-chain)
void sdk_f_49fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); *(uint64_t*)((char*)(a1)) = 0; }

// sub_4aac0  (orig 0x4aac0, getter)
uint64_t sdk_f_4aac0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_4dd80  (orig 0x4dd80, getter)
uint64_t sdk_f_4dd80(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_4f010  (orig 0x4f010, ret_only)
void sdk_f_4f010() {}

// sub_4f180  (orig 0x4f180, setter-chain)
void sdk_f_4f180(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint16_t*)((char*)(a0) + 4) = 0; }

// sub_4f190  (orig 0x4f190, compare)
bool sdk_f_4f190(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0))) > (int64_t)(0); }

// sub_4f1a0  (orig 0x4f1a0, getter)
uint8_t sdk_f_4f1a0(void* a0) { return *(uint8_t*)((char*)(a0) + 4); }

// sub_4f1b0  (orig 0x4f1b0, getter)
uint8_t sdk_f_4f1b0(void* a0) { return *(uint8_t*)((char*)(a0) + 5); }

// sub_4f260  (orig 0x4f260, ptr_add)
void* sdk_f_4f260(void* a0) { return (char*)a0 + 8; }

// sub_4f320  (orig 0x4f320, mov_ret)
uint32_t sdk_f_4f320() { return 100663296; }

// sub_4f330  (orig 0x4f330, mov_ret)
uint32_t sdk_f_4f330() { return 4096; }

// sub_502d0  (orig 0x502d0, getter)
uint32_t sdk_f_502d0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_502e0  (orig 0x502e0, setter)
void sdk_f_502e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_502f0  (orig 0x502f0, getter)
uint32_t sdk_f_502f0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_50300  (orig 0x50300, setter)
void sdk_f_50300(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_50310  (orig 0x50310, getter)
uint32_t sdk_f_50310(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_50320  (orig 0x50320, setter)
void sdk_f_50320(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_50330  (orig 0x50330, getter)
uint32_t sdk_f_50330(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_50340  (orig 0x50340, setter)
void sdk_f_50340(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_50350  (orig 0x50350, getter)
uint32_t sdk_f_50350(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_50360  (orig 0x50360, setter)
void sdk_f_50360(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_50370  (orig 0x50370, setter)
void sdk_f_50370(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 56) = a1; }

// sub_50380  (orig 0x50380, getter)
uint32_t sdk_f_50380(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_50390  (orig 0x50390, setter)
void sdk_f_50390(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_503a0  (orig 0x503a0, getter)
uint32_t sdk_f_503a0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_503b0  (orig 0x503b0, setter)
void sdk_f_503b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_503c0  (orig 0x503c0, getter)
uint32_t sdk_f_503c0(void* a0) { return *(uint32_t*)((char*)(a0) + 48); }

// sub_503d0  (orig 0x503d0, setter)
void sdk_f_503d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 48) = a1; }

// sub_503e0  (orig 0x503e0, getter)
uint32_t sdk_f_503e0(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_503f0  (orig 0x503f0, setter)
void sdk_f_503f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_55ea0  (orig 0x55ea0, ptr_add)
void* sdk_f_55ea0(void* a0) { return (char*)a0 + 32; }

// sub_56420  (orig 0x56420, ptr_add)
void* sdk_f_56420(void* a0) { return (char*)a0 + 8; }

// sub_56430  (orig 0x56430, straight)
void* sdk_f_56430(void* a0) { return (char*)(a0) - 24; }

// sub_56770  (orig 0x56770, ptr_add)
void* sdk_f_56770(void* a0) { return (char*)a0 + 32; }

// sub_56f00  (orig 0x56f00, ptr_add)
void* sdk_f_56f00(void* a0) { return (char*)a0 + 8; }

// sub_56f10  (orig 0x56f10, straight)
void* sdk_f_56f10(void* a0) { return (char*)(a0) - 24; }

// sub_57040  (orig 0x57040, ptr_add)
void* sdk_f_57040(void* a0) { return (char*)a0 + 32; }

// sub_57710  (orig 0x57710, ptr_add)
void* sdk_f_57710(void* a0) { return (char*)a0 + 8; }

// sub_57720  (orig 0x57720, straight)
void* sdk_f_57720(void* a0) { return (char*)(a0) - 24; }

// sub_579a0  (orig 0x579a0, ptr_add)
void* sdk_f_579a0(void* a0) { return (char*)a0 + 32; }

// sub_57a20  (orig 0x57a20, ptr_add)
void* sdk_f_57a20(void* a0) { return (char*)a0 + 8; }

// sub_57a30  (orig 0x57a30, straight)
void* sdk_f_57a30(void* a0) { return (char*)(a0) - 24; }

// sub_58080  (orig 0x58080, ptr_add)
void* sdk_f_58080(void* a0) { return (char*)a0 + 32; }

// sub_58740  (orig 0x58740, ptr_add)
void* sdk_f_58740(void* a0) { return (char*)a0 + 8; }

// sub_58750  (orig 0x58750, straight)
void* sdk_f_58750(void* a0) { return (char*)(a0) - 24; }

// sub_59010  (orig 0x59010, ptr_add)
void* sdk_f_59010(void* a0) { return (char*)a0 + 32; }

// sub_591a0  (orig 0x591a0, ptr_add)
void* sdk_f_591a0(void* a0) { return (char*)a0 + 8; }

// sub_591b0  (orig 0x591b0, straight)
void* sdk_f_591b0(void* a0) { return (char*)(a0) - 24; }

// sub_592e0  (orig 0x592e0, ptr_add)
void* sdk_f_592e0(void* a0) { return (char*)a0 + 32; }

// sub_59450  (orig 0x59450, ptr_add)
void* sdk_f_59450(void* a0) { return (char*)a0 + 8; }

// sub_59460  (orig 0x59460, straight)
void* sdk_f_59460(void* a0) { return (char*)(a0) - 24; }

// sub_59590  (orig 0x59590, ptr_add)
void* sdk_f_59590(void* a0) { return (char*)a0 + 32; }

// sub_59620  (orig 0x59620, ptr_add)
void* sdk_f_59620(void* a0) { return (char*)a0 + 8; }

// sub_59630  (orig 0x59630, straight)
void* sdk_f_59630(void* a0) { return (char*)(a0) - 24; }

// sub_59b40  (orig 0x59b40, ptr_add)
void* sdk_f_59b40(void* a0) { return (char*)a0 + 32; }

// sub_59b90  (orig 0x59b90, ptr_add)
void* sdk_f_59b90(void* a0) { return (char*)a0 + 8; }

// sub_59ba0  (orig 0x59ba0, straight)
void* sdk_f_59ba0(void* a0) { return (char*)(a0) - 24; }

// sub_59e50  (orig 0x59e50, ptr_add)
void* sdk_f_59e50(void* a0) { return (char*)a0 + 32; }

// sub_5a000  (orig 0x5a000, ptr_add)
void* sdk_f_5a000(void* a0) { return (char*)a0 + 8; }

// sub_5a010  (orig 0x5a010, straight)
void* sdk_f_5a010(void* a0) { return (char*)(a0) - 24; }

// sub_5a140  (orig 0x5a140, ptr_add)
void* sdk_f_5a140(void* a0) { return (char*)a0 + 32; }

// sub_5a150  (orig 0x5a150, ptr_add)
void* sdk_f_5a150(void* a0) { return (char*)a0 + 8; }

// sub_5a160  (orig 0x5a160, straight)
void* sdk_f_5a160(void* a0) { return (char*)(a0) - 24; }

// sub_5a290  (orig 0x5a290, ptr_add)
void* sdk_f_5a290(void* a0) { return (char*)a0 + 32; }

// sub_5a370  (orig 0x5a370, ptr_add)
void* sdk_f_5a370(void* a0) { return (char*)a0 + 8; }

// sub_5a380  (orig 0x5a380, straight)
void* sdk_f_5a380(void* a0) { return (char*)(a0) - 24; }

// sub_5a600  (orig 0x5a600, ptr_add)
void* sdk_f_5a600(void* a0) { return (char*)a0 + 32; }

// sub_5aa40  (orig 0x5aa40, ptr_add)
void* sdk_f_5aa40(void* a0) { return (char*)a0 + 8; }

// sub_5aa50  (orig 0x5aa50, straight)
void* sdk_f_5aa50(void* a0) { return (char*)(a0) - 24; }

// sub_5b490  (orig 0x5b490, ptr_add)
void* sdk_f_5b490(void* a0) { return (char*)a0 + 32; }

// sub_5b650  (orig 0x5b650, ptr_add)
void* sdk_f_5b650(void* a0) { return (char*)a0 + 8; }

// sub_5b660  (orig 0x5b660, straight)
void* sdk_f_5b660(void* a0) { return (char*)(a0) - 24; }

// sub_5b790  (orig 0x5b790, ptr_add)
void* sdk_f_5b790(void* a0) { return (char*)a0 + 32; }

// sub_5bb30  (orig 0x5bb30, ptr_add)
void* sdk_f_5bb30(void* a0) { return (char*)a0 + 8; }

// sub_5bb40  (orig 0x5bb40, straight)
void* sdk_f_5bb40(void* a0) { return (char*)(a0) - 24; }

// sub_5bc70  (orig 0x5bc70, ptr_add)
void* sdk_f_5bc70(void* a0) { return (char*)a0 + 32; }

// sub_5bd60  (orig 0x5bd60, ptr_add)
void* sdk_f_5bd60(void* a0) { return (char*)a0 + 8; }

// sub_5bd70  (orig 0x5bd70, straight)
void* sdk_f_5bd70(void* a0) { return (char*)(a0) - 24; }

// sub_5c5b0  (orig 0x5c5b0, ptr_add)
void* sdk_f_5c5b0(void* a0) { return (char*)a0 + 32; }

// sub_5c850  (orig 0x5c850, ptr_add)
void* sdk_f_5c850(void* a0) { return (char*)a0 + 8; }

// sub_5c860  (orig 0x5c860, straight)
void* sdk_f_5c860(void* a0) { return (char*)(a0) - 24; }

// sub_5cae0  (orig 0x5cae0, ptr_add)
void* sdk_f_5cae0(void* a0) { return (char*)a0 + 32; }

// sub_5cef0  (orig 0x5cef0, ptr_add)
void* sdk_f_5cef0(void* a0) { return (char*)a0 + 8; }

// sub_5cf00  (orig 0x5cf00, straight)
void* sdk_f_5cf00(void* a0) { return (char*)(a0) - 24; }

// sub_5d190  (orig 0x5d190, ptr_add)
void* sdk_f_5d190(void* a0) { return (char*)a0 + 32; }

// sub_5d4b0  (orig 0x5d4b0, ptr_add)
void* sdk_f_5d4b0(void* a0) { return (char*)a0 + 8; }

// sub_5d4c0  (orig 0x5d4c0, straight)
void* sdk_f_5d4c0(void* a0) { return (char*)(a0) - 24; }

// sub_5da20  (orig 0x5da20, ptr_add)
void* sdk_f_5da20(void* a0) { return (char*)a0 + 32; }

// sub_5dcd0  (orig 0x5dcd0, ptr_add)
void* sdk_f_5dcd0(void* a0) { return (char*)a0 + 8; }

// sub_5dce0  (orig 0x5dce0, straight)
void* sdk_f_5dce0(void* a0) { return (char*)(a0) - 24; }

// sub_5e030  (orig 0x5e030, ptr_add)
void* sdk_f_5e030(void* a0) { return (char*)a0 + 32; }

// sub_5e1d0  (orig 0x5e1d0, ptr_add)
void* sdk_f_5e1d0(void* a0) { return (char*)a0 + 8; }

// sub_5e1e0  (orig 0x5e1e0, straight)
void* sdk_f_5e1e0(void* a0) { return (char*)(a0) - 24; }

// sub_5e310  (orig 0x5e310, ptr_add)
void* sdk_f_5e310(void* a0) { return (char*)a0 + 32; }

// sub_5e5c0  (orig 0x5e5c0, ptr_add)
void* sdk_f_5e5c0(void* a0) { return (char*)a0 + 8; }

// sub_5e5d0  (orig 0x5e5d0, straight)
void* sdk_f_5e5d0(void* a0) { return (char*)(a0) - 24; }

// sub_5e700  (orig 0x5e700, ptr_add)
void* sdk_f_5e700(void* a0) { return (char*)a0 + 32; }

// sub_5e770  (orig 0x5e770, ptr_add)
void* sdk_f_5e770(void* a0) { return (char*)a0 + 8; }

// sub_5e780  (orig 0x5e780, straight)
void* sdk_f_5e780(void* a0) { return (char*)(a0) - 24; }

// sub_5eab0  (orig 0x5eab0, ptr_add)
void* sdk_f_5eab0(void* a0) { return (char*)a0 + 32; }

// sub_5f100  (orig 0x5f100, ptr_add)
void* sdk_f_5f100(void* a0) { return (char*)a0 + 8; }

// sub_5f110  (orig 0x5f110, straight)
void* sdk_f_5f110(void* a0) { return (char*)(a0) - 24; }

// sub_5f240  (orig 0x5f240, ptr_add)
void* sdk_f_5f240(void* a0) { return (char*)a0 + 32; }

// sub_5f950  (orig 0x5f950, ptr_add)
void* sdk_f_5f950(void* a0) { return (char*)a0 + 8; }

// sub_5f960  (orig 0x5f960, straight)
void* sdk_f_5f960(void* a0) { return (char*)(a0) - 24; }

// sub_602a0  (orig 0x602a0, ptr_add)
void* sdk_f_602a0(void* a0) { return (char*)a0 + 32; }

// sub_60360  (orig 0x60360, ptr_add)
void* sdk_f_60360(void* a0) { return (char*)a0 + 8; }

// sub_60370  (orig 0x60370, straight)
void* sdk_f_60370(void* a0) { return (char*)(a0) - 24; }

// sub_60e90  (orig 0x60e90, ptr_add)
void* sdk_f_60e90(void* a0) { return (char*)a0 + 32; }

// sub_614e0  (orig 0x614e0, ptr_add)
void* sdk_f_614e0(void* a0) { return (char*)a0 + 8; }

// sub_614f0  (orig 0x614f0, straight)
void* sdk_f_614f0(void* a0) { return (char*)(a0) - 24; }

// sub_61620  (orig 0x61620, ptr_add)
void* sdk_f_61620(void* a0) { return (char*)a0 + 32; }

// sub_617d0  (orig 0x617d0, ptr_add)
void* sdk_f_617d0(void* a0) { return (char*)a0 + 8; }

// sub_617e0  (orig 0x617e0, straight)
void* sdk_f_617e0(void* a0) { return (char*)(a0) - 24; }

// sub_61910  (orig 0x61910, ptr_add)
void* sdk_f_61910(void* a0) { return (char*)a0 + 32; }

// sub_61ec0  (orig 0x61ec0, ptr_add)
void* sdk_f_61ec0(void* a0) { return (char*)a0 + 8; }

// sub_61ed0  (orig 0x61ed0, straight)
void* sdk_f_61ed0(void* a0) { return (char*)(a0) - 24; }

// sub_62000  (orig 0x62000, ptr_add)
void* sdk_f_62000(void* a0) { return (char*)a0 + 32; }

// sub_628b0  (orig 0x628b0, ptr_add)
void* sdk_f_628b0(void* a0) { return (char*)a0 + 8; }

// sub_628c0  (orig 0x628c0, straight)
void* sdk_f_628c0(void* a0) { return (char*)(a0) - 24; }

// sub_641e0  (orig 0x641e0, ptr_add)
void* sdk_f_641e0(void* a0) { return (char*)a0 + 32; }

// sub_642b0  (orig 0x642b0, ptr_add)
void* sdk_f_642b0(void* a0) { return (char*)a0 + 8; }

// sub_642c0  (orig 0x642c0, straight)
void* sdk_f_642c0(void* a0) { return (char*)(a0) - 24; }

// sub_643f0  (orig 0x643f0, ptr_add)
void* sdk_f_643f0(void* a0) { return (char*)a0 + 32; }

// sub_646e0  (orig 0x646e0, ptr_add)
void* sdk_f_646e0(void* a0) { return (char*)a0 + 8; }

// sub_646f0  (orig 0x646f0, straight)
void* sdk_f_646f0(void* a0) { return (char*)(a0) - 24; }

// sub_64820  (orig 0x64820, ptr_add)
void* sdk_f_64820(void* a0) { return (char*)a0 + 32; }

// sub_64930  (orig 0x64930, ptr_add)
void* sdk_f_64930(void* a0) { return (char*)a0 + 8; }

// sub_64940  (orig 0x64940, straight)
void* sdk_f_64940(void* a0) { return (char*)(a0) - 24; }

// sub_65bd0  (orig 0x65bd0, ptr_add)
void* sdk_f_65bd0(void* a0) { return (char*)a0 + 32; }

// sub_65d60  (orig 0x65d60, ptr_add)
void* sdk_f_65d60(void* a0) { return (char*)a0 + 8; }

// sub_65d70  (orig 0x65d70, straight)
void* sdk_f_65d70(void* a0) { return (char*)(a0) - 24; }

// sub_65eb0  (orig 0x65eb0, ptr_add)
void* sdk_f_65eb0(void* a0) { return (char*)a0 + 32; }

// sub_66050  (orig 0x66050, ptr_add)
void* sdk_f_66050(void* a0) { return (char*)a0 + 8; }

// sub_66060  (orig 0x66060, straight)
void* sdk_f_66060(void* a0) { return (char*)(a0) - 24; }

// sub_66230  (orig 0x66230, ptr_add)
void* sdk_f_66230(void* a0) { return (char*)a0 + 32; }

// sub_66460  (orig 0x66460, ptr_add)
void* sdk_f_66460(void* a0) { return (char*)a0 + 8; }

// sub_66470  (orig 0x66470, straight)
void* sdk_f_66470(void* a0) { return (char*)(a0) - 24; }

// sub_666e0  (orig 0x666e0, ptr_add)
void* sdk_f_666e0(void* a0) { return (char*)a0 + 32; }

// sub_66880  (orig 0x66880, ptr_add)
void* sdk_f_66880(void* a0) { return (char*)a0 + 8; }

// sub_66890  (orig 0x66890, straight)
void* sdk_f_66890(void* a0) { return (char*)(a0) - 24; }

// sub_66ec0  (orig 0x66ec0, ptr_add)
void* sdk_f_66ec0(void* a0) { return (char*)a0 + 32; }

// sub_66f80  (orig 0x66f80, ptr_add)
void* sdk_f_66f80(void* a0) { return (char*)a0 + 8; }

// sub_66f90  (orig 0x66f90, straight)
void* sdk_f_66f90(void* a0) { return (char*)(a0) - 24; }

// sub_670d0  (orig 0x670d0, ptr_add)
void* sdk_f_670d0(void* a0) { return (char*)a0 + 32; }

// sub_67270  (orig 0x67270, ptr_add)
void* sdk_f_67270(void* a0) { return (char*)a0 + 8; }

// sub_67280  (orig 0x67280, straight)
void* sdk_f_67280(void* a0) { return (char*)(a0) - 24; }

// sub_674a0  (orig 0x674a0, ptr_add)
void* sdk_f_674a0(void* a0) { return (char*)a0 + 16; }

// sub_67a20  (orig 0x67a20, ptr_add)
void* sdk_f_67a20(void* a0) { return (char*)a0 + 8; }

// sub_67a30  (orig 0x67a30, straight)
void* sdk_f_67a30(void* a0) { return (char*)(a0) - 8; }

// sub_67d90  (orig 0x67d90, ptr_add)
void* sdk_f_67d90(void* a0) { return (char*)a0 + 16; }

// sub_68520  (orig 0x68520, ptr_add)
void* sdk_f_68520(void* a0) { return (char*)a0 + 8; }

// sub_68530  (orig 0x68530, straight)
void* sdk_f_68530(void* a0) { return (char*)(a0) - 8; }

// sub_68840  (orig 0x68840, ptr_add)
void* sdk_f_68840(void* a0) { return (char*)a0 + 16; }

// sub_68f10  (orig 0x68f10, ptr_add)
void* sdk_f_68f10(void* a0) { return (char*)a0 + 8; }

// sub_68f20  (orig 0x68f20, straight)
void* sdk_f_68f20(void* a0) { return (char*)(a0) - 8; }

// sub_694a0  (orig 0x694a0, ptr_add)
void* sdk_f_694a0(void* a0) { return (char*)a0 + 16; }

// sub_69520  (orig 0x69520, ptr_add)
void* sdk_f_69520(void* a0) { return (char*)a0 + 8; }

// sub_69530  (orig 0x69530, straight)
void* sdk_f_69530(void* a0) { return (char*)(a0) - 8; }

// sub_69e90  (orig 0x69e90, ptr_add)
void* sdk_f_69e90(void* a0) { return (char*)a0 + 16; }

// sub_6a550  (orig 0x6a550, ptr_add)
void* sdk_f_6a550(void* a0) { return (char*)a0 + 8; }

// sub_6a560  (orig 0x6a560, straight)
void* sdk_f_6a560(void* a0) { return (char*)(a0) - 8; }

// sub_6aef0  (orig 0x6aef0, ptr_add)
void* sdk_f_6aef0(void* a0) { return (char*)a0 + 16; }

// sub_6b080  (orig 0x6b080, ptr_add)
void* sdk_f_6b080(void* a0) { return (char*)a0 + 8; }

// sub_6b090  (orig 0x6b090, straight)
void* sdk_f_6b090(void* a0) { return (char*)(a0) - 8; }

// sub_6b210  (orig 0x6b210, ptr_add)
void* sdk_f_6b210(void* a0) { return (char*)a0 + 16; }

// sub_6b380  (orig 0x6b380, ptr_add)
void* sdk_f_6b380(void* a0) { return (char*)a0 + 8; }

// sub_6b390  (orig 0x6b390, straight)
void* sdk_f_6b390(void* a0) { return (char*)(a0) - 8; }

// sub_6b510  (orig 0x6b510, ptr_add)
void* sdk_f_6b510(void* a0) { return (char*)a0 + 16; }

// sub_6b5a0  (orig 0x6b5a0, ptr_add)
void* sdk_f_6b5a0(void* a0) { return (char*)a0 + 8; }

// sub_6b5b0  (orig 0x6b5b0, straight)
void* sdk_f_6b5b0(void* a0) { return (char*)(a0) - 8; }

// sub_6bb50  (orig 0x6bb50, ptr_add)
void* sdk_f_6bb50(void* a0) { return (char*)a0 + 16; }

// sub_6bba0  (orig 0x6bba0, ptr_add)
void* sdk_f_6bba0(void* a0) { return (char*)a0 + 8; }

// sub_6bbb0  (orig 0x6bbb0, straight)
void* sdk_f_6bbb0(void* a0) { return (char*)(a0) - 8; }

// sub_6be70  (orig 0x6be70, ptr_add)
void* sdk_f_6be70(void* a0) { return (char*)a0 + 16; }

// sub_6c020  (orig 0x6c020, ptr_add)
void* sdk_f_6c020(void* a0) { return (char*)a0 + 8; }

// sub_6c030  (orig 0x6c030, straight)
void* sdk_f_6c030(void* a0) { return (char*)(a0) - 8; }

// sub_6c1b0  (orig 0x6c1b0, ptr_add)
void* sdk_f_6c1b0(void* a0) { return (char*)a0 + 16; }

// sub_6c1c0  (orig 0x6c1c0, ptr_add)
void* sdk_f_6c1c0(void* a0) { return (char*)a0 + 8; }

// sub_6c1d0  (orig 0x6c1d0, straight)
void* sdk_f_6c1d0(void* a0) { return (char*)(a0) - 8; }

// sub_6c350  (orig 0x6c350, ptr_add)
void* sdk_f_6c350(void* a0) { return (char*)a0 + 16; }

// sub_6c430  (orig 0x6c430, ptr_add)
void* sdk_f_6c430(void* a0) { return (char*)a0 + 8; }

// sub_6c440  (orig 0x6c440, straight)
void* sdk_f_6c440(void* a0) { return (char*)(a0) - 8; }

// sub_6c7d0  (orig 0x6c7d0, ptr_add)
void* sdk_f_6c7d0(void* a0) { return (char*)a0 + 16; }

// sub_6cc10  (orig 0x6cc10, ptr_add)
void* sdk_f_6cc10(void* a0) { return (char*)a0 + 8; }

// sub_6cc20  (orig 0x6cc20, straight)
void* sdk_f_6cc20(void* a0) { return (char*)(a0) - 8; }

// sub_6d4d0  (orig 0x6d4d0, ptr_add)
void* sdk_f_6d4d0(void* a0) { return (char*)a0 + 16; }

// sub_6d690  (orig 0x6d690, ptr_add)
void* sdk_f_6d690(void* a0) { return (char*)a0 + 8; }

// sub_6d6a0  (orig 0x6d6a0, straight)
void* sdk_f_6d6a0(void* a0) { return (char*)(a0) - 8; }

// sub_6d820  (orig 0x6d820, ptr_add)
void* sdk_f_6d820(void* a0) { return (char*)a0 + 16; }

// sub_6dbc0  (orig 0x6dbc0, ptr_add)
void* sdk_f_6dbc0(void* a0) { return (char*)a0 + 8; }

// sub_6dbd0  (orig 0x6dbd0, straight)
void* sdk_f_6dbd0(void* a0) { return (char*)(a0) - 8; }

// sub_6dd50  (orig 0x6dd50, ptr_add)
void* sdk_f_6dd50(void* a0) { return (char*)a0 + 16; }

// sub_6de40  (orig 0x6de40, ptr_add)
void* sdk_f_6de40(void* a0) { return (char*)a0 + 8; }

// sub_6de50  (orig 0x6de50, straight)
void* sdk_f_6de50(void* a0) { return (char*)(a0) - 8; }

// sub_6e820  (orig 0x6e820, ptr_add)
void* sdk_f_6e820(void* a0) { return (char*)a0 + 16; }

// sub_6eac0  (orig 0x6eac0, ptr_add)
void* sdk_f_6eac0(void* a0) { return (char*)a0 + 8; }

// sub_6ead0  (orig 0x6ead0, straight)
void* sdk_f_6ead0(void* a0) { return (char*)(a0) - 8; }

// sub_6ed60  (orig 0x6ed60, ptr_add)
void* sdk_f_6ed60(void* a0) { return (char*)a0 + 16; }

// sub_6f170  (orig 0x6f170, ptr_add)
void* sdk_f_6f170(void* a0) { return (char*)a0 + 8; }

// sub_6f180  (orig 0x6f180, straight)
void* sdk_f_6f180(void* a0) { return (char*)(a0) - 8; }

// sub_6f420  (orig 0x6f420, ptr_add)
void* sdk_f_6f420(void* a0) { return (char*)a0 + 16; }

// sub_6f740  (orig 0x6f740, ptr_add)
void* sdk_f_6f740(void* a0) { return (char*)a0 + 8; }

// sub_6f750  (orig 0x6f750, straight)
void* sdk_f_6f750(void* a0) { return (char*)(a0) - 8; }

// sub_6ffe0  (orig 0x6ffe0, ptr_add)
void* sdk_f_6ffe0(void* a0) { return (char*)a0 + 16; }

// sub_70290  (orig 0x70290, ptr_add)
void* sdk_f_70290(void* a0) { return (char*)a0 + 8; }

// sub_702a0  (orig 0x702a0, straight)
void* sdk_f_702a0(void* a0) { return (char*)(a0) - 8; }

// sub_705f0  (orig 0x705f0, ptr_add)
void* sdk_f_705f0(void* a0) { return (char*)a0 + 16; }

// sub_70790  (orig 0x70790, ptr_add)
void* sdk_f_70790(void* a0) { return (char*)a0 + 8; }

// sub_707a0  (orig 0x707a0, straight)
void* sdk_f_707a0(void* a0) { return (char*)(a0) - 8; }

// sub_70920  (orig 0x70920, ptr_add)
void* sdk_f_70920(void* a0) { return (char*)a0 + 16; }

// sub_70bd0  (orig 0x70bd0, ptr_add)
void* sdk_f_70bd0(void* a0) { return (char*)a0 + 8; }

// sub_70be0  (orig 0x70be0, straight)
void* sdk_f_70be0(void* a0) { return (char*)(a0) - 8; }

// sub_70d60  (orig 0x70d60, ptr_add)
void* sdk_f_70d60(void* a0) { return (char*)a0 + 16; }

// sub_70dd0  (orig 0x70dd0, ptr_add)
void* sdk_f_70dd0(void* a0) { return (char*)a0 + 8; }

// sub_70de0  (orig 0x70de0, straight)
void* sdk_f_70de0(void* a0) { return (char*)(a0) - 8; }

// sub_71180  (orig 0x71180, ptr_add)
void* sdk_f_71180(void* a0) { return (char*)a0 + 16; }

// sub_717d0  (orig 0x717d0, ptr_add)
void* sdk_f_717d0(void* a0) { return (char*)a0 + 8; }

// sub_717e0  (orig 0x717e0, straight)
void* sdk_f_717e0(void* a0) { return (char*)(a0) - 8; }

// sub_71960  (orig 0x71960, ptr_add)
void* sdk_f_71960(void* a0) { return (char*)a0 + 16; }

// sub_72070  (orig 0x72070, ptr_add)
void* sdk_f_72070(void* a0) { return (char*)a0 + 8; }

// sub_72080  (orig 0x72080, straight)
void* sdk_f_72080(void* a0) { return (char*)(a0) - 8; }

// sub_72860  (orig 0x72860, ptr_add)
void* sdk_f_72860(void* a0) { return (char*)a0 + 16; }

// sub_72920  (orig 0x72920, ptr_add)
void* sdk_f_72920(void* a0) { return (char*)a0 + 8; }

// sub_72930  (orig 0x72930, straight)
void* sdk_f_72930(void* a0) { return (char*)(a0) - 8; }

// sub_73320  (orig 0x73320, ptr_add)
void* sdk_f_73320(void* a0) { return (char*)a0 + 16; }

// sub_73970  (orig 0x73970, ptr_add)
void* sdk_f_73970(void* a0) { return (char*)a0 + 8; }

// sub_73980  (orig 0x73980, straight)
void* sdk_f_73980(void* a0) { return (char*)(a0) - 8; }

// sub_73b00  (orig 0x73b00, ptr_add)
void* sdk_f_73b00(void* a0) { return (char*)a0 + 16; }

// sub_73cb0  (orig 0x73cb0, ptr_add)
void* sdk_f_73cb0(void* a0) { return (char*)a0 + 8; }

// sub_73cc0  (orig 0x73cc0, straight)
void* sdk_f_73cc0(void* a0) { return (char*)(a0) - 8; }

// sub_73e40  (orig 0x73e40, ptr_add)
void* sdk_f_73e40(void* a0) { return (char*)a0 + 16; }

// sub_743f0  (orig 0x743f0, ptr_add)
void* sdk_f_743f0(void* a0) { return (char*)a0 + 8; }

// sub_74400  (orig 0x74400, straight)
void* sdk_f_74400(void* a0) { return (char*)(a0) - 8; }

// sub_74580  (orig 0x74580, ptr_add)
void* sdk_f_74580(void* a0) { return (char*)a0 + 16; }

// sub_74e30  (orig 0x74e30, ptr_add)
void* sdk_f_74e30(void* a0) { return (char*)a0 + 8; }

// sub_74e40  (orig 0x74e40, straight)
void* sdk_f_74e40(void* a0) { return (char*)(a0) - 8; }

// sub_76380  (orig 0x76380, ptr_add)
void* sdk_f_76380(void* a0) { return (char*)a0 + 16; }

// sub_76450  (orig 0x76450, ptr_add)
void* sdk_f_76450(void* a0) { return (char*)a0 + 8; }

// sub_76460  (orig 0x76460, straight)
void* sdk_f_76460(void* a0) { return (char*)(a0) - 8; }

// sub_765e0  (orig 0x765e0, ptr_add)
void* sdk_f_765e0(void* a0) { return (char*)a0 + 16; }

// sub_768d0  (orig 0x768d0, ptr_add)
void* sdk_f_768d0(void* a0) { return (char*)a0 + 8; }

// sub_768e0  (orig 0x768e0, straight)
void* sdk_f_768e0(void* a0) { return (char*)(a0) - 8; }

// sub_76a60  (orig 0x76a60, ptr_add)
void* sdk_f_76a60(void* a0) { return (char*)a0 + 16; }

// sub_76b70  (orig 0x76b70, ptr_add)
void* sdk_f_76b70(void* a0) { return (char*)a0 + 8; }

// sub_76b80  (orig 0x76b80, straight)
void* sdk_f_76b80(void* a0) { return (char*)(a0) - 8; }

// sub_77ea0  (orig 0x77ea0, ptr_add)
void* sdk_f_77ea0(void* a0) { return (char*)a0 + 16; }

// sub_78030  (orig 0x78030, ptr_add)
void* sdk_f_78030(void* a0) { return (char*)a0 + 8; }

// sub_78040  (orig 0x78040, straight)
void* sdk_f_78040(void* a0) { return (char*)(a0) - 8; }

// sub_78440  (orig 0x78440, strlit-ret)
const char *sdk_f_78440() { static char g_f_78440[1]; __asm__ volatile("" ::: "memory"); return g_f_78440; }

// sub_786b0  (orig 0x786b0, ptr_add)
void* sdk_f_786b0(void* a0) { return (char*)a0 + 16; }

// sub_78830  (orig 0x78830, ptr_add)
void* sdk_f_78830(void* a0) { return (char*)a0 + 8; }

// sub_78840  (orig 0x78840, straight)
void* sdk_f_78840(void* a0) { return (char*)(a0) - 8; }

// sub_78db0  (orig 0x78db0, ptr_add)
void* sdk_f_78db0(void* a0) { return (char*)a0 + 16; }

// sub_78e60  (orig 0x78e60, ptr_add)
void* sdk_f_78e60(void* a0) { return (char*)a0 + 8; }

// sub_78e70  (orig 0x78e70, straight)
void* sdk_f_78e70(void* a0) { return (char*)(a0) - 8; }

// sub_79e20  (orig 0x79e20, ptr_add)
void* sdk_f_79e20(void* a0) { return (char*)a0 + 16; }

// sub_79f10  (orig 0x79f10, ptr_add)
void* sdk_f_79f10(void* a0) { return (char*)a0 + 8; }

// sub_79f20  (orig 0x79f20, straight)
void* sdk_f_79f20(void* a0) { return (char*)(a0) - 8; }

// sub_7a0a0  (orig 0x7a0a0, ptr_add)
void* sdk_f_7a0a0(void* a0) { return (char*)a0 + 16; }

// sub_7a110  (orig 0x7a110, ptr_add)
void* sdk_f_7a110(void* a0) { return (char*)a0 + 8; }

// sub_7a120  (orig 0x7a120, straight)
void* sdk_f_7a120(void* a0) { return (char*)(a0) - 8; }

// sub_7a190  (orig 0x7a190, ret_only)
void sdk_f_7a190() {}

// sub_7a400  (orig 0x7a400, ptr_add)
void* sdk_f_7a400(void* a0) { return (char*)a0 + 16; }

// sub_7a4b0  (orig 0x7a4b0, ptr_add)
void* sdk_f_7a4b0(void* a0) { return (char*)a0 + 8; }

// sub_7a4c0  (orig 0x7a4c0, straight)
void* sdk_f_7a4c0(void* a0) { return (char*)(a0) - 8; }

// sub_7af20  (orig 0x7af20, ptr_add)
void* sdk_f_7af20(void* a0) { return (char*)a0 + 16; }

// sub_7b060  (orig 0x7b060, ptr_add)
void* sdk_f_7b060(void* a0) { return (char*)a0 + 8; }

// sub_7b070  (orig 0x7b070, straight)
void* sdk_f_7b070(void* a0) { return (char*)(a0) - 8; }

// sub_7bad0  (orig 0x7bad0, getter)
uint32_t sdk_f_7bad0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_7bae0  (orig 0x7bae0, getter)
uint32_t sdk_f_7bae0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_7bf30  (orig 0x7bf30, ptr_add)
void* sdk_f_7bf30(void* a0) { return (char*)a0 + 32; }

// sub_7c170  (orig 0x7c170, getter)
uint32_t sdk_f_7c170(void* a0) { return *(uint32_t*)((char*)(a0) + 140); }

// sub_7c8b0  (orig 0x7c8b0, getter)
uint64_t sdk_f_7c8b0(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_7e9e0  (orig 0x7e9e0, getter)
uint64_t sdk_f_7e9e0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_7e9f0  (orig 0x7e9f0, getter)
uint64_t sdk_f_7e9f0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_7ea00  (orig 0x7ea00, straight)
void sdk_f_7ea00(void* a0) {
    *(uint64_t*)((char*)(a0)) = -4990551337079930880;
}

// sub_7ea70  (orig 0x7ea70, getter)
uint64_t sdk_f_7ea70(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_7ea80  (orig 0x7ea80, getter)
uint64_t sdk_f_7ea80(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_7ea90  (orig 0x7ea90, straight)
void sdk_f_7ea90(void* a0) {
    *(uint64_t*)((char*)(a0)) = -3819615433963601920;
}

// sub_7eaa0  (orig 0x7eaa0, setter-chain)
void sdk_f_7eaa0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 8) = a1; *(uint64_t*)((char*)(a0) + 24) = a2; }

// sub_7eab0  (orig 0x7eab0, setter-chain)
void sdk_f_7eab0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) { *(uint64_t*)((char*)(a0) + 8) = a1; *(uint64_t*)((char*)(a0) + 16) = a2; *(uint64_t*)((char*)(a0) + 24) = a3; }

// sub_7eac0  (orig 0x7eac0, getter)
uint64_t sdk_f_7eac0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_7ead0  (orig 0x7ead0, getter)
uint64_t sdk_f_7ead0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_7eae0  (orig 0x7eae0, getter)
uint64_t sdk_f_7eae0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_7f4f0  (orig 0x7f4f0, getter-chain)
uint64_t sdk_f_7f4f0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 64)))); }

// sub_7f900  (orig 0x7f900, setter)
void sdk_f_7f900(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_7f910  (orig 0x7f910, setter-chain)
void sdk_f_7f910(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 72) = 0; }

// sub_7f9c0  (orig 0x7f9c0, getter-chain)
uint16_t sdk_f_7f9c0(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 12); }

// sub_7fd00  (orig 0x7fd00, copy2)
void sdk_f_7fd00(void* a0) { (*(uint8_t *)((char *)(*(void **)((char*)(a0))) + 72)) = 0; }

// sub_7fde0  (orig 0x7fde0, getter-chain)
uint16_t sdk_f_7fde0(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 12); }

// sub_80100  (orig 0x80100, copy2)
void sdk_f_80100(void* a0) { (*(uint8_t *)((char *)(*(void **)((char*)(a0))) + 64)) = 0; }

// sub_80680  (orig 0x80680, straight-line)
uint64_t sdk_f_80680(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return (*(int32_t*)((char*)(p0) + 16)) * (1000000);
}

// sub_806a0  (orig 0x806a0, copy2)
void sdk_f_806a0(void* a0) { (*(uint8_t *)((char *)(*(void **)((char*)(a0))) + 52)) = 0; }

// sub_80c80  (orig 0x80c80, getter-chain)
uint64_t sdk_f_80c80(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 32); }

// sub_80c90  (orig 0x80c90, getter-chain)
uint64_t sdk_f_80c90(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 24); }

// sub_80ca0  (orig 0x80ca0, getter-chain)
uint16_t sdk_f_80ca0(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 80); }

// sub_80cb0  (orig 0x80cb0, copy2)
void sdk_f_80cb0(void* a0) { (*(uint8_t *)((char *)(*(void **)((char*)(a0))) + 84)) = 0; }

// sub_80fa0  (orig 0x80fa0, straight)
uint32_t sdk_f_80fa0(void* a0) { return (*(uint32_t*)((char*)(a0) + 40)) & (1); }

// sub_812f0  (orig 0x812f0, getter)
uint32_t sdk_f_812f0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_81300  (orig 0x81300, const-ret)
uint32_t sdk_f_81300() { return 262809u; }

// sub_81310  (orig 0x81310, const-ret)
uint32_t sdk_f_81310() { return 262809u; }

// sub_81320  (orig 0x81320, straight)
uint64_t sdk_f_81320(void* a0) {
    *(uint64_t*)((char*)(a0)) = 0;
    return 0;
}

// sub_81710  (orig 0x81710, getter-chain)
uint32_t sdk_f_81710(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 92); }

// sub_81a20  (orig 0x81a20, getter-chain)
uint32_t sdk_f_81a20(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 84); }

// sub_81a30  (orig 0x81a30, getter-chain)
uint32_t sdk_f_81a30(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 132); }

// sub_81e20  (orig 0x81e20, getter-chain)
uint8_t sdk_f_81e20(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2); }

// sub_82340  (orig 0x82340, getter-chain)
uint8_t sdk_f_82340(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2); }

// sub_82910  (orig 0x82910, getter-chain)
uint8_t sdk_f_82910(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2); }

// sub_82b10  (orig 0x82b10, straight-line)
uint64_t sdk_f_82b10(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return (*(int32_t*)((char*)(p0) + 48)) * (1000000);
}

// sub_82b30  (orig 0x82b30, getter-chain)
uint16_t sdk_f_82b30(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 44); }

// sub_82b40  (orig 0x82b40, straight-line)
uint64_t sdk_f_82b40(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return (*(int32_t*)((char*)(p0) + 52)) * (1000000);
}

// sub_834f0  (orig 0x834f0, getter-chain)
uint16_t sdk_f_834f0(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 44); }

// sub_83550  (orig 0x83550, getter-chain)
uint8_t sdk_f_83550(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2); }

// sub_83760  (orig 0x83760, getter-chain)
float sdk_f_83760(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 80);
}

// sub_837d0  (orig 0x837d0, getter-chain)
float sdk_f_837d0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 76);
}

// sub_83840  (orig 0x83840, getter-chain)
float sdk_f_83840(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 72);
}

// sub_83a70  (orig 0x83a70, getter-chain)
float sdk_f_83a70(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 56);
}

// sub_83ae0  (orig 0x83ae0, getter-chain)
float sdk_f_83ae0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 60);
}

// sub_83c30  (orig 0x83c30, getter-chain)
float sdk_f_83c30(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 68);
}

// sub_83ca0  (orig 0x83ca0, getter-chain)
float sdk_f_83ca0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 84);
}

// sub_83d10  (orig 0x83d10, getter-chain)
float sdk_f_83d10(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 96);
}

// sub_83d80  (orig 0x83d80, getter-chain)
float sdk_f_83d80(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 100);
}

// sub_840d0  (orig 0x840d0, setter-chain-zero)
void sdk_f_840d0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 192) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 128) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 112) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
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
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_848e0  (orig 0x848e0, getter-chain)
uint16_t sdk_f_848e0(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 44); }

// sub_84940  (orig 0x84940, getter-chain)
uint8_t sdk_f_84940(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2); }

// sub_854c0  (orig 0x854c0, getter-chain)
uint32_t sdk_f_854c0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 8); }

// sub_854d0  (orig 0x854d0, getter-chain)
float sdk_f_854d0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)(char*)(t0);
}

// sub_85540  (orig 0x85540, getter-chain)
uint32_t sdk_f_85540(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 24); }

// sub_85550  (orig 0x85550, getter-chain)
uint32_t sdk_f_85550(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 4); }

// sub_855d0  (orig 0x855d0, getter)
uint64_t sdk_f_855d0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_855e0  (orig 0x855e0, getter)
uint64_t sdk_f_855e0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_858c0  (orig 0x858c0, getter)
uint8_t sdk_f_858c0(void* a0) { return *(uint8_t*)((char*)(a0) + 20); }

// sub_85ad0  (orig 0x85ad0, straight)
uint32_t sdk_f_85ad0(void* a0) { return (((*(uint32_t*)((char*)(a0) + 16) == 4) ? 1 : 0)) | (((*(uint32_t*)((char*)(a0) + 16) == 2) ? 1 : 0)); }

// sub_85af0  (orig 0x85af0, getter)
uint64_t sdk_f_85af0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_85b00  (orig 0x85b00, getter)
uint64_t sdk_f_85b00(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_85b10  (orig 0x85b10, getter)
uint32_t sdk_f_85b10(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_85b20  (orig 0x85b20, straight)
uint32_t sdk_f_85b20(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint32_t*)((char*)(a1) + 16) = *(uint32_t*)((char*)(a0) + 16);
    return 32;
}

// sub_85db0  (orig 0x85db0, getter)
uint32_t sdk_f_85db0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_862d0  (orig 0x862d0, getter-chain)
uint32_t sdk_f_862d0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 4); }

// sub_862e0  (orig 0x862e0, getter)
uint32_t sdk_f_862e0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_864f0  (orig 0x864f0, compare)
bool sdk_f_864f0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_86b60  (orig 0x86b60, setter-chain-zero)
void sdk_f_86b60(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_86b70  (orig 0x86b70, setter-chain-zero)
void sdk_f_86b70(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_86c00  (orig 0x86c00, getter-chain)
uint32_t sdk_f_86c00(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 16); }

// sub_86c10  (orig 0x86c10, getter-chain)
uint8_t sdk_f_86c10(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 36); }

// sub_86c20  (orig 0x86c20, getter-chain)
uint32_t sdk_f_86c20(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 20); }

// sub_86c30  (orig 0x86c30, getter-chain)
uint64_t sdk_f_86c30(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 24); }

// sub_86c40  (orig 0x86c40, getter-chain)
uint32_t sdk_f_86c40(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 32); }

// sub_86c50  (orig 0x86c50, straight)
uint64_t sdk_f_86c50(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(p0) + 4);
    return *(uint64_t*)((char*)(a0) + 24);
}

// sub_86c70  (orig 0x86c70, straight)
uint64_t sdk_f_86c70(void* a0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(p0) + 8);
    return *(uint64_t*)((char*)(a0) + 32);
}

// sub_86d50  (orig 0x86d50, getter)
uint64_t sdk_f_86d50(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_87640  (orig 0x87640, getter-chain)
uint8_t sdk_f_87640(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 283); }

// sub_878b0  (orig 0x878b0, getter-chain)
uint32_t sdk_f_878b0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 4); }

// sub_878c0  (orig 0x878c0, getter-chain)
uint32_t sdk_f_878c0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 4); }

// sub_878d0  (orig 0x878d0, setter)
void sdk_f_878d0(void* a0) { *(uint16_t*)((char*)(a0)) = 0; }

// sub_878e0  (orig 0x878e0, setter)
void sdk_f_878e0(void* a0) { *(uint16_t*)((char*)(a0)) = 0; }

// sub_878f0  (orig 0x878f0, getter)
uint8_t sdk_f_878f0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_879a0  (orig 0x879a0, getter)
uint8_t sdk_f_879a0(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_87aa0  (orig 0x87aa0, getter)
uint32_t sdk_f_87aa0(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_87ab0  (orig 0x87ab0, getter)
uint32_t sdk_f_87ab0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_88380  (orig 0x88380, straight-line)
int64_t sdk_f_88380(uint32_t a0) { return (((int64_t)(((int32_t)(((uint32_t)a0)))))) * (((int64_t)(((int32_t)(48))))); }

// sub_887b0  (orig 0x887b0, straight)
void sdk_f_887b0(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 17) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 24) = (uint32_t)(a1);
}

// sub_887c0  (orig 0x887c0, straight)
void sdk_f_887c0(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 17) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 28) = (uint32_t)(a1);
}

// sub_88c90  (orig 0x88c90, getter)
uint32_t sdk_f_88c90(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_88ca0  (orig 0x88ca0, getter)
uint32_t sdk_f_88ca0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_88cb0  (orig 0x88cb0, getter)
uint8_t sdk_f_88cb0(void* a0) { return *(uint8_t*)((char*)(a0) + 17); }

// sub_88cc0  (orig 0x88cc0, getter)
uint8_t sdk_f_88cc0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_88cd0  (orig 0x88cd0, getter)
uint32_t sdk_f_88cd0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_88d90  (orig 0x88d90, straight)
void sdk_f_88d90(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 17) = (uint8_t)k0;
}

// sub_88da0  (orig 0x88da0, getter)
uint32_t sdk_f_88da0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_88de0  (orig 0x88de0, straight)
void sdk_f_88de0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 120) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_88df0  (orig 0x88df0, straight)
void sdk_f_88df0(void* a0, uint32_t a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 120) = (uint8_t)(((((uint32_t)a1) != 2147483647) ? 1 : 0));
    *(uint8_t*)((char*)(a0) + 121) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 20) = (uint32_t)(a1);
}

// sub_88e10  (orig 0x88e10, setter-chain-zero)
void sdk_f_88e10(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 104) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 88) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 72) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
}

// sub_88e30  (orig 0x88e30, straight-line)
int64_t sdk_f_88e30(uint32_t a0) { return (((int64_t)(((int32_t)(((uint32_t)a0)))))) * (((int64_t)(((int32_t)(112))))); }

// sub_88e40  (orig 0x88e40, getter)
uint8_t sdk_f_88e40(void* a0) { return *(uint8_t*)((char*)(a0) + 120); }

// sub_88e50  (orig 0x88e50, getter)
uint32_t sdk_f_88e50(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_88e90  (orig 0x88e90, getter)
uint8_t sdk_f_88e90(void* a0) { return *(uint8_t*)((char*)(a0) + 121); }

// sub_890a0  (orig 0x890a0, getter-chain)
uint32_t sdk_f_890a0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 4); }

// sub_890b0  (orig 0x890b0, getter-chain)
uint32_t sdk_f_890b0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 8); }

// sub_890c0  (orig 0x890c0, getter-chain)
float sdk_f_890c0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)(char*)(t0);
}

// sub_89250  (orig 0x89250, getter-chain)
uint32_t sdk_f_89250(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 24); }

// sub_896d0  (orig 0x896d0, compare)
bool sdk_f_896d0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_89930  (orig 0x89930, getter-chain)
uint32_t sdk_f_89930(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 76); }

// sub_89940  (orig 0x89940, getter-chain)
uint32_t sdk_f_89940(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 88); }

// sub_89950  (orig 0x89950, getter-chain)
uint8_t sdk_f_89950(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 75); }

// sub_899a0  (orig 0x899a0, getter-chain)
uint32_t sdk_f_899a0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 80); }

// sub_899f0  (orig 0x899f0, getter-chain)
uint8_t sdk_f_899f0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 74); }

// sub_89a50  (orig 0x89a50, getter-chain)
float sdk_f_89a50(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 92);
}

// sub_89ab0  (orig 0x89ab0, getter-chain)
float sdk_f_89ab0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 96);
}

// sub_89ca0  (orig 0x89ca0, straight)
void* sdk_f_89ca0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return (char*)(p0) + 100;
}

// sub_89fa0  (orig 0x89fa0, const-field-set-store)
void sdk_f_89fa0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a1;
    uint64_t t1 = -2147483649;
    *(uint64_t*)((char*)(t0) + 152) = (uint64_t)(t1);
}

// sub_89fe0  (orig 0x89fe0, straight-line)
int64_t sdk_f_89fe0(uint32_t a0) { return (((int64_t)(((int32_t)(((uint32_t)a0)))))) * (((int64_t)(((int32_t)(648))))); }

// sub_8ad70  (orig 0x8ad70, straight)
uint32_t sdk_f_8ad70(uint32_t a0) { return (((uint32_t)a0)) >> (28); }

// sub_8ad80  (orig 0x8ad80, straight)
uint32_t sdk_f_8ad80(uint32_t a0) { return ((((uint32_t)a0)) >> (16)) & (4095); }

// sub_8ad90  (orig 0x8ad90, straight)
uint32_t sdk_f_8ad90(uint32_t a0) { return (((uint32_t)a0)) & (65535); }

// sub_8ada0  (orig 0x8ada0, mov_ret)
uint32_t sdk_f_8ada0() { return -268435456; }

// sub_8aef0  (orig 0x8aef0, getter)
uint32_t sdk_f_8aef0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_8af10  (orig 0x8af10, setter-chain-zero)
void sdk_f_8af10(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 16) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_8af30  (orig 0x8af30, getter)
uint32_t sdk_f_8af30(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_8afd0  (orig 0x8afd0, setter-chain-zero)
void sdk_f_8afd0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint64_t*)((char*)a0 + 24) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 32) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 40) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 48) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 72) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 16) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_8b510  (orig 0x8b510, getter)
uint32_t sdk_f_8b510(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_8b520  (orig 0x8b520, const-ret)
uint32_t sdk_f_8b520() { return 1212436051u; }

// sub_8b530  (orig 0x8b530, const-ret)
uint32_t sdk_f_8b530() { return 1229213267u; }

// sub_8b540  (orig 0x8b540, const-ret)
uint32_t sdk_f_8b540() { return 1145327187u; }

// sub_8b5c0  (orig 0x8b5c0, const-ret)
uint32_t sdk_f_8b5c0() { return 928400722u; }

// sub_8b5d0  (orig 0x8b5d0, const-ret)
uint32_t sdk_f_8b5d0() { return 928400722u; }

// sub_8b5e0  (orig 0x8b5e0, const-ret)
uint32_t sdk_f_8b5e0() { return 911623506u; }

// sub_8b5f0  (orig 0x8b5f0, const-ret)
uint32_t sdk_f_8b5f0() { return 894846290u; }

// sub_8b600  (orig 0x8b600, const-ret)
uint32_t sdk_f_8b600() { return 878069074u; }

// sub_8b610  (orig 0x8b610, const-ret)
uint32_t sdk_f_8b610() { return 827737426u; }

// sub_8b620  (orig 0x8b620, const-ret)
uint32_t sdk_f_8b620() { return 844514642u; }

// sub_8b630  (orig 0x8b630, const-ret)
uint32_t sdk_f_8b630() { return 861291858u; }

// sub_8b640  (orig 0x8b640, const-ret)
uint32_t sdk_f_8b640() { return 827737426u; }

// sub_8b6d0  (orig 0x8b6d0, straight)
void sdk_f_8b6d0(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(a1);
    *(uint64_t*)((char*)(a0) + 52) = 0;
    *(uint64_t*)((char*)(a0) + 44) = 0;
    *(uint64_t*)((char*)(a0) + 36) = 0;
    *(uint64_t*)((char*)(a0) + 28) = 0;
    *(uint64_t*)((char*)(a0) + 20) = 0;
    *(uint64_t*)((char*)(a0) + 12) = 0;
    *(uint64_t*)((char*)(a0) + 4) = 0;
    *(uint32_t*)((char*)(a0) + 60) = 64;
}

// sub_8b700  (orig 0x8b700, getter)
uint32_t sdk_f_8b700(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_8b710  (orig 0x8b710, getter)
uint32_t sdk_f_8b710(void* a0) { return *(uint32_t*)((char*)(a0) + 60); }

// sub_8b730  (orig 0x8b730, setter-chain)
void sdk_f_8b730(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_8d450  (orig 0x8d450, mov_ret)
uint32_t sdk_f_8d450() { return 0; }

// sub_8e450  (orig 0x8e450, straight-line)
int64_t sdk_f_8e450(uint32_t a0) { return (((int64_t)(((int32_t)(((uint32_t)a0)))))) * (((int64_t)(((int32_t)(608))))); }

// sub_90140  (orig 0x90140, ptr_add)
void* sdk_f_90140(void* a0) { return (char*)a0 + 16; }

// sub_901e0  (orig 0x901e0, ptr_add)
void* sdk_f_901e0(void* a0) { return (char*)a0 + 8; }

// sub_901f0  (orig 0x901f0, straight)
void* sdk_f_901f0(void* a0) { return (char*)(a0) - 8; }

// sub_90710  (orig 0x90710, ptr_add)
void* sdk_f_90710(void* a0) { return (char*)a0 + 16; }

// sub_90a60  (orig 0x90a60, ptr_add)
void* sdk_f_90a60(void* a0) { return (char*)a0 + 8; }

// sub_90a70  (orig 0x90a70, straight)
void* sdk_f_90a70(void* a0) { return (char*)(a0) - 8; }

// sub_91040  (orig 0x91040, ptr_add)
void* sdk_f_91040(void* a0) { return (char*)a0 + 16; }

// sub_912a0  (orig 0x912a0, ptr_add)
void* sdk_f_912a0(void* a0) { return (char*)a0 + 8; }

// sub_912b0  (orig 0x912b0, straight)
void* sdk_f_912b0(void* a0) { return (char*)(a0) - 8; }

// sub_92460  (orig 0x92460, ptr_add)
void* sdk_f_92460(void* a0) { return (char*)a0 + 16; }

// sub_92500  (orig 0x92500, ptr_add)
void* sdk_f_92500(void* a0) { return (char*)a0 + 8; }

// sub_92510  (orig 0x92510, straight)
void* sdk_f_92510(void* a0) { return (char*)(a0) - 8; }

// sub_92800  (orig 0x92800, ptr_add)
void* sdk_f_92800(void* a0) { return (char*)a0 + 16; }

// sub_92850  (orig 0x92850, ptr_add)
void* sdk_f_92850(void* a0) { return (char*)a0 + 8; }

// sub_92860  (orig 0x92860, straight)
void* sdk_f_92860(void* a0) { return (char*)(a0) - 8; }

// sub_92c00  (orig 0x92c00, ptr_add)
void* sdk_f_92c00(void* a0) { return (char*)a0 + 16; }

// sub_92e30  (orig 0x92e30, ptr_add)
void* sdk_f_92e30(void* a0) { return (char*)a0 + 8; }

// sub_92e40  (orig 0x92e40, straight)
void* sdk_f_92e40(void* a0) { return (char*)(a0) - 8; }

// sub_92fd0  (orig 0x92fd0, ptr_add)
void* sdk_f_92fd0(void* a0) { return (char*)a0 + 16; }

// sub_931f0  (orig 0x931f0, ptr_add)
void* sdk_f_931f0(void* a0) { return (char*)a0 + 8; }

// sub_93200  (orig 0x93200, straight)
void* sdk_f_93200(void* a0) { return (char*)(a0) - 8; }

// sub_932e0  (orig 0x932e0, ptr_add)
void* sdk_f_932e0(void* a0) { return (char*)a0 + 16; }

// sub_933d0  (orig 0x933d0, ptr_add)
void* sdk_f_933d0(void* a0) { return (char*)a0 + 8; }

// sub_933e0  (orig 0x933e0, straight)
void* sdk_f_933e0(void* a0) { return (char*)(a0) - 8; }

// sub_934c0  (orig 0x934c0, ptr_add)
void* sdk_f_934c0(void* a0) { return (char*)a0 + 16; }

// sub_93510  (orig 0x93510, ptr_add)
void* sdk_f_93510(void* a0) { return (char*)a0 + 8; }

// sub_93520  (orig 0x93520, straight)
void* sdk_f_93520(void* a0) { return (char*)(a0) - 8; }

// sub_938f0  (orig 0x938f0, ptr_add)
void* sdk_f_938f0(void* a0) { return (char*)a0 + 16; }

// sub_93c10  (orig 0x93c10, ptr_add)
void* sdk_f_93c10(void* a0) { return (char*)a0 + 8; }

// sub_93c20  (orig 0x93c20, straight)
void* sdk_f_93c20(void* a0) { return (char*)(a0) - 8; }

// sub_94000  (orig 0x94000, ptr_add)
void* sdk_f_94000(void* a0) { return (char*)a0 + 16; }

// sub_941e0  (orig 0x941e0, ptr_add)
void* sdk_f_941e0(void* a0) { return (char*)a0 + 8; }

// sub_941f0  (orig 0x941f0, straight)
void* sdk_f_941f0(void* a0) { return (char*)(a0) - 8; }

// sub_948a0  (orig 0x948a0, ptr_add)
void* sdk_f_948a0(void* a0) { return (char*)a0 + 16; }

// sub_94ae0  (orig 0x94ae0, ptr_add)
void* sdk_f_94ae0(void* a0) { return (char*)a0 + 8; }

// sub_94af0  (orig 0x94af0, straight)
void* sdk_f_94af0(void* a0) { return (char*)(a0) - 8; }

// sub_95790  (orig 0x95790, ptr_add)
void* sdk_f_95790(void* a0) { return (char*)a0 + 16; }

// sub_958c0  (orig 0x958c0, ptr_add)
void* sdk_f_958c0(void* a0) { return (char*)a0 + 8; }

// sub_958d0  (orig 0x958d0, straight)
void* sdk_f_958d0(void* a0) { return (char*)(a0) - 8; }

// sub_959b0  (orig 0x959b0, ptr_add)
void* sdk_f_959b0(void* a0) { return (char*)a0 + 16; }

// sub_95a00  (orig 0x95a00, ptr_add)
void* sdk_f_95a00(void* a0) { return (char*)a0 + 8; }

// sub_95a10  (orig 0x95a10, straight)
void* sdk_f_95a10(void* a0) { return (char*)(a0) - 8; }

// sub_95c20  (orig 0x95c20, ptr_add)
void* sdk_f_95c20(void* a0) { return (char*)a0 + 16; }

// sub_95cf0  (orig 0x95cf0, ptr_add)
void* sdk_f_95cf0(void* a0) { return (char*)a0 + 8; }

// sub_95d00  (orig 0x95d00, straight)
void* sdk_f_95d00(void* a0) { return (char*)(a0) - 8; }

// sub_96080  (orig 0x96080, ptr_add)
void* sdk_f_96080(void* a0) { return (char*)a0 + 16; }

// sub_96230  (orig 0x96230, ptr_add)
void* sdk_f_96230(void* a0) { return (char*)a0 + 8; }

// sub_96240  (orig 0x96240, straight)
void* sdk_f_96240(void* a0) { return (char*)(a0) - 8; }

// sub_96950  (orig 0x96950, ptr_add)
void* sdk_f_96950(void* a0) { return (char*)a0 + 16; }

// sub_969c0  (orig 0x969c0, ptr_add)
void* sdk_f_969c0(void* a0) { return (char*)a0 + 8; }

// sub_969d0  (orig 0x969d0, straight)
void* sdk_f_969d0(void* a0) { return (char*)(a0) - 8; }

// sub_97160  (orig 0x97160, ret_only)
void sdk_f_97160() {}

// sub_97170  (orig 0x97170, ret_only)
void sdk_f_97170() {}

// sub_97180  (orig 0x97180, straight-line)
uint32_t sdk_f_97180(void* a0) { return (16) + ((*(uint32_t*)((char*)(a0) + 16)) * (12)); }

// sub_971a0  (orig 0x971a0, ret_only)
void sdk_f_971a0() {}

// sub_971b0  (orig 0x971b0, ret_only)
void sdk_f_971b0() {}

// sub_97bb0  (orig 0x97bb0, ptr_add)
void* sdk_f_97bb0(void* a0) { return (char*)a0 + 16; }

// sub_97bc0  (orig 0x97bc0, getter)
uint32_t sdk_f_97bc0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_97bd0  (orig 0x97bd0, getter)
uint32_t sdk_f_97bd0(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_97be0  (orig 0x97be0, getter)
uint32_t sdk_f_97be0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_98e90  (orig 0x98e90, ptr_add)
void* sdk_f_98e90(void* a0) { return (char*)a0 + 16; }

// sub_98ea0  (orig 0x98ea0, getter)
uint32_t sdk_f_98ea0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_98eb0  (orig 0x98eb0, getter)
uint32_t sdk_f_98eb0(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_98ec0  (orig 0x98ec0, getter)
uint32_t sdk_f_98ec0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_98ed0  (orig 0x98ed0, setter-chain)
void sdk_f_98ed0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 8) = a1; *(uint64_t*)((char*)(a0) + 24) = a2; }

// sub_98ee0  (orig 0x98ee0, setter-chain)
void sdk_f_98ee0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) { *(uint64_t*)((char*)(a0) + 8) = a1; *(uint64_t*)((char*)(a0) + 16) = a2; *(uint64_t*)((char*)(a0) + 24) = a3; }

// sub_98ef0  (orig 0x98ef0, getter)
uint64_t sdk_f_98ef0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_98f00  (orig 0x98f00, getter)
uint64_t sdk_f_98f00(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_98f10  (orig 0x98f10, getter)
uint64_t sdk_f_98f10(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_99e60  (orig 0x99e60, getter)
uint32_t sdk_f_99e60(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_99e70  (orig 0x99e70, getter)
uint32_t sdk_f_99e70(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_99e80  (orig 0x99e80, getter)
uint32_t sdk_f_99e80(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_99e90  (orig 0x99e90, setter-chain)
void sdk_f_99e90(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint64_t*)((char*)(a0) + 32) = a2; }

// sub_99ea0  (orig 0x99ea0, setter-chain)
void sdk_f_99ea0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint64_t*)((char*)(a0) + 24) = a2; *(uint64_t*)((char*)(a0) + 32) = a3; }

// sub_99eb0  (orig 0x99eb0, getter)
uint64_t sdk_f_99eb0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_99ec0  (orig 0x99ec0, getter)
uint64_t sdk_f_99ec0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_9a270  (orig 0x9a270, setter)
void sdk_f_9a270(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_9a280  (orig 0x9a280, getter)
uint64_t sdk_f_9a280(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_9c310  (orig 0x9c310, getter)
uint32_t sdk_f_9c310(void* a0) { return *(uint32_t*)((char*)(a0) + 720); }

// sub_9c320  (orig 0x9c320, setter)
void sdk_f_9c320(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 720) = a1; }

// sub_9cbf0  (orig 0x9cbf0, getter)
uint32_t sdk_f_9cbf0(void* a0) { return *(uint32_t*)((char*)(a0) + 416); }

// sub_9cc10  (orig 0x9cc10, getter)
uint64_t sdk_f_9cc10(void* a0) { return *(uint64_t*)((char*)(a0) + 112); }

// sub_9cc20  (orig 0x9cc20, getter)
uint64_t sdk_f_9cc20(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_9cc30  (orig 0x9cc30, getter)
uint32_t sdk_f_9cc30(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_9cc40  (orig 0x9cc40, getter)
uint32_t sdk_f_9cc40(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_9cc50  (orig 0x9cc50, getter)
uint32_t sdk_f_9cc50(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_9cc70  (orig 0x9cc70, getter)
uint32_t sdk_f_9cc70(void* a0) { return *(uint32_t*)((char*)(a0) + 728); }

// sub_9cc80  (orig 0x9cc80, getter)
uint32_t sdk_f_9cc80(void* a0) { return *(uint32_t*)((char*)(a0) + 732); }

// sub_9cce0  (orig 0x9cce0, ret_only)
void sdk_f_9cce0() {}

// sub_9d7c0  (orig 0x9d7c0, ret_only)
void sdk_f_9d7c0() {}

// sub_9d7d0  (orig 0x9d7d0, ret_only)
void sdk_f_9d7d0() {}

// sub_9e560  (orig 0x9e560, getter)
uint64_t sdk_f_9e560(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_9e570  (orig 0x9e570, getter)
uint64_t sdk_f_9e570(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_9e580  (orig 0x9e580, getter)
uint32_t sdk_f_9e580(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_9e590  (orig 0x9e590, getter)
uint32_t sdk_f_9e590(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_9e5b0  (orig 0x9e5b0, pair-ret)
struct pair16_f_9e5b0_ { uint64_t f[2]; }; pair16_f_9e5b0_ sdk_f_9e5b0(void* a0) { return *(struct pair16_f_9e5b0_ *)((char*)(a0) + 24); }

// sub_9e5c0  (orig 0x9e5c0, straight)
void sdk_f_9e5c0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 24) = *(uint64_t*)((char*)(a1));
    *(uint32_t*)((char*)(a0) + 32) = *(uint32_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 36) = *(uint32_t*)((char*)(a1) + 12);
}

// sub_a2180  (orig 0xa2180, ret_only)
void sdk_f_a2180() {}

// sub_a4aa0  (orig 0xa4aa0, mov_ret)
uint32_t sdk_f_a4aa0() { return 0; }

// sub_a4c10  (orig 0xa4c10, mov_ret)
uint32_t sdk_f_a4c10() { return 1080; }

// sub_a4c80  (orig 0xa4c80, const-ret)
uint32_t sdk_f_a4c80() { return 357915u; }

// sub_a4c90  (orig 0xa4c90, straight)
uint32_t sdk_f_a4c90(uint64_t unused0, void* a1) { return (((*(uint8_t*)((char*)(a1) + 84) == 0)) ? (3765) : (15956)); }

// sub_a4cb0  (orig 0xa4cb0, mov_ret)
uint32_t sdk_f_a4cb0() { return 10042; }

// sub_a4cc0  (orig 0xa4cc0, mov_ret)
uint32_t sdk_f_a4cc0() { return 55; }

// sub_a4d50  (orig 0xa4d50, mov_ret)
uint32_t sdk_f_a4d50() { return 1454; }

// sub_a4d90  (orig 0xa4d90, mov_ret)
uint32_t sdk_f_a4d90() { return 16108; }

// sub_a4da0  (orig 0xa4da0, mov_ret)
uint32_t sdk_f_a4da0() { return 0; }

// sub_a4ee0  (orig 0xa4ee0, mov_ret)
uint32_t sdk_f_a4ee0() { return 0; }

// sub_a6fc0  (orig 0xa6fc0, mov_ret)
uint32_t sdk_f_a6fc0() { return 0; }

// sub_a7080  (orig 0xa7080, ret_only)
void sdk_f_a7080() {}

// sub_a7190  (orig 0xa7190, getter)
uint8_t sdk_f_a7190(void* a0) { return *(uint8_t*)((char*)(a0) + 128); }

// sub_a7480  (orig 0xa7480, setter)
void sdk_f_a7480(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 132) = a1; }

// sub_a7490  (orig 0xa7490, compare)
bool sdk_f_a7490(void* a0, uint64_t a1) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 132)) == (uint32_t)(a1); }

// sub_a7640  (orig 0xa7640, getter)
uint8_t sdk_f_a7640(void* a0) { return *(uint8_t*)((char*)(a0) + 128); }

// sub_a7970  (orig 0xa7970, setter)
void sdk_f_a7970(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 132) = a1; }

// sub_a7980  (orig 0xa7980, compare)
bool sdk_f_a7980(void* a0, uint64_t a1) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 132)) == (uint32_t)(a1); }

// sub_a7ac0  (orig 0xa7ac0, getter)
uint32_t sdk_f_a7ac0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_a7ad0  (orig 0xa7ad0, getter)
uint32_t sdk_f_a7ad0(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_a7ae0  (orig 0xa7ae0, setter)
void sdk_f_a7ae0(void* a0) { *(uint32_t*)((char*)(a0) + 176) = 0; }

// sub_a7b20  (orig 0xa7b20, setter)
void sdk_f_a7b20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 4) = a1; }

// sub_a7b30  (orig 0xa7b30, straight)
uint32_t sdk_f_a7b30(void* a0) { return (*(uint32_t*)((char*)(a0) + 8)) & (1); }

// sub_a7b40  (orig 0xa7b40, copy2)
void sdk_f_a7b40(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1)); }

// sub_a7df0  (orig 0xa7df0, mov_ret)
uint32_t sdk_f_a7df0() { return 0; }

// sub_a8040  (orig 0xa8040, getter)
uint8_t sdk_f_a8040(void* a0) { return *(uint8_t*)((char*)(a0) + 9); }

// sub_a8050  (orig 0xa8050, getter)
uint8_t sdk_f_a8050(void* a0) { return *(uint8_t*)((char*)(a0) + 10); }

// sub_a8060  (orig 0xa8060, getter)
uint8_t sdk_f_a8060(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_a8070  (orig 0xa8070, getter)
uint32_t sdk_f_a8070(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_a8080  (orig 0xa8080, getter)
uint32_t sdk_f_a8080(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_a8090  (orig 0xa8090, ptr_add)
void* sdk_f_a8090(void* a0) { return (char*)a0 + 128; }

// sub_a80a0  (orig 0xa80a0, ptr_add)
void* sdk_f_a80a0(void* a0) { return (char*)a0 + 320; }

// sub_a80b0  (orig 0xa80b0, setter)
void sdk_f_a80b0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 11) = a1; }

// sub_a80d0  (orig 0xa80d0, getter)
uint8_t sdk_f_a80d0(void* a0) { return *(uint8_t*)((char*)(a0) + 11); }

// sub_a8120  (orig 0xa8120, setter-chain)
void sdk_f_a8120(uint64_t unused0, void* a1) { *(uint32_t*)((char*)(a1)) = 0; *(uint64_t*)((char*)(a1) + 8) = 0; }

// sub_a8130  (orig 0xa8130, ret_only)
void sdk_f_a8130() {}

// sub_a8140  (orig 0xa8140, mov_ret)
uint64_t sdk_f_a8140() { return 0; }

// sub_a8230  (orig 0xa8230, straight-line)
void sdk_f_a8230(void* a0) {
    *(uint8_t*)((char*)(a0) + 11) = (uint8_t)((((*(uint8_t*)((char*)(a0) + 9) == 0)) ? ((2) + (1)) : (2)));
}

// sub_a8370  (orig 0xa8370, straight-line)
void sdk_f_a8370(void* a0) {
    uint32_t k0 = 2;
    *(uint8_t*)((char*)(a0) + 11) = (uint8_t)((((*(uint8_t*)((char*)(a0) + 9) == 0)) ? ((2) + (1)) : (2)));
    *(uint8_t*)((char*)(a0) + 180) = (uint8_t)k0;
}

// sub_a8530  (orig 0xa8530, straight-line)
void sdk_f_a8530(void* a0) {
    uint32_t k0 = 2;
    *(uint8_t*)((char*)(a0) + 11) = (uint8_t)((((*(uint8_t*)((char*)(a0) + 9) == 0)) ? ((2) + (1)) : (2)));
    *(uint8_t*)((char*)(a0) + 192) = (uint8_t)k0;
}

// sub_a86f0  (orig 0xa86f0, straight-line)
void sdk_f_a86f0(void* a0) {
    uint32_t k0 = 2;
    *(uint8_t*)((char*)(a0) + 11) = (uint8_t)((((*(uint8_t*)((char*)(a0) + 9) == 0)) ? ((2) + (1)) : (2)));
    *(uint8_t*)((char*)(a0) + 200) = (uint8_t)k0;
}

// sub_a88c0  (orig 0xa88c0, straight-line)
void sdk_f_a88c0(void* a0) {
    *(uint8_t*)((char*)(a0) + 11) = (uint8_t)((((*(uint8_t*)((char*)(a0) + 9) == 0)) ? ((2) + (1)) : (2)));
}

// sub_a8940  (orig 0xa8940, straight-line)
void sdk_f_a8940(void* a0) {
    uint32_t k0 = 2;
    *(uint8_t*)((char*)(a0) + 11) = (uint8_t)((((*(uint8_t*)((char*)(a0) + 9) == 0)) ? ((2) + (1)) : (2)));
    *(uint8_t*)((char*)(a0) + 151) = (uint8_t)k0;
}

// sub_a8960  (orig 0xa8960, setter-chain)
void sdk_f_a8960(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_a8970  (orig 0xa8970, setter-chain)
void sdk_f_a8970(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint32_t*)((char*)(a0) + 8) = a2; }

// sub_a8980  (orig 0xa8980, straight-line)
uint64_t sdk_f_a8980(void* a0, uint32_t a1) { return (*(uint64_t*)((char*)(a0))) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(1216)))))); }

// sub_a8990  (orig 0xa8990, getter)
uint32_t sdk_f_a8990(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_a89a0  (orig 0xa89a0, setter-chain)
void sdk_f_a89a0(void* a0, uint32_t a1) { *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_a89b0  (orig 0xa89b0, getter)
uint64_t sdk_f_a89b0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_a89c0  (orig 0xa89c0, getter)
uint64_t sdk_f_a89c0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_a89d0  (orig 0xa89d0, getter)
uint64_t sdk_f_a89d0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_a89e0  (orig 0xa89e0, getter)
uint32_t sdk_f_a89e0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_a89f0  (orig 0xa89f0, setter-chain)
void sdk_f_a89f0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 24) = a2; }

// sub_a8a00  (orig 0xa8a00, setter)
void sdk_f_a8a00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_a8a40  (orig 0xa8a40, compare)
bool sdk_f_a8a40(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) != (uint64_t)(0); }

// sub_a8aa0  (orig 0xa8aa0, straight)
void sdk_f_a8aa0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 36) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_a8ab0  (orig 0xa8ab0, getter)
uint8_t sdk_f_a8ab0(void* a0) { return *(uint8_t*)((char*)(a0) + 36); }

// sub_a8ca0  (orig 0xa8ca0, getter)
uint64_t sdk_f_a8ca0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_a8cb0  (orig 0xa8cb0, setter)
void sdk_f_a8cb0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_a8cc0  (orig 0xa8cc0, getter)
uint64_t sdk_f_a8cc0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_a8cd0  (orig 0xa8cd0, setter)
void sdk_f_a8cd0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 24) = a1; }

// sub_a8ea0  (orig 0xa8ea0, setter-chain)
void sdk_f_a8ea0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; }

// sub_a8eb0  (orig 0xa8eb0, getter)
uint8_t sdk_f_a8eb0(void* a0) { return *(uint8_t*)((char*)(a0) + 20); }

// sub_a8f30  (orig 0xa8f30, straight)
void sdk_f_a8f30(void* a0, uint64_t a1, uint32_t a2) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(a1);
    *(uint64_t*)((char*)(a0) + 8) = 0;
    *(uint32_t*)((char*)(a0) + 16) = 0;
    *(uint8_t*)((char*)(a0) + 20) = (uint8_t)((((uint32_t)a2)) & (1));
}

// sub_a8f50  (orig 0xa8f50, straight)
void sdk_f_a8f50(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint32_t a4) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(a1);
    *(uint64_t*)((char*)(a0) + 8) = a2;
    *(uint32_t*)((char*)(a0) + 16) = (uint32_t)(a3);
    *(uint8_t*)((char*)(a0) + 20) = (uint8_t)((((uint32_t)a4)) & (1));
}

// sub_a92f0  (orig 0xa92f0, setter-chain)
void sdk_f_a92f0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; }

// sub_a9300  (orig 0xa9300, setter-chain-zero)
void sdk_f_a9300(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_a93e0  (orig 0xa93e0, getter)
uint64_t sdk_f_a93e0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_a9940  (orig 0xa9940, getter-chain)
uint64_t sdk_f_a9940(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(uint64_t*)((char*)(t0) + (uintptr_t)(a1) * 8);
}

// sub_a9950  (orig 0xa9950, straight-line)
void sdk_f_a9950(void* a0, int32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint64_t*)(((char*)(p0) + (uintptr_t)a1 * 8)) = a2;
}

// sub_a9960  (orig 0xa9960, straight-line)
uint64_t sdk_f_a9960(void* a0, uint32_t a1) { return (*(uint64_t*)((char*)(a0) + 8)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(2368)))))); }

// sub_a9970  (orig 0xa9970, getter)
uint64_t sdk_f_a9970(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_a9980  (orig 0xa9980, getter)
uint32_t sdk_f_a9980(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_aa9e0  (orig 0xaa9e0, setter-chain-zero)
void sdk_f_aa9e0(uint64_t unused0, void* a1, void* a2) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a2 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a2 = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)(char*)a1 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a1 + 8) = 0;
}

// sub_aaa00  (orig 0xaaa00, ret_only)
void sdk_f_aaa00() {}

// sub_aaa10  (orig 0xaaa10, ptr_add)
void* sdk_f_aaa10(void* a0) { return (char*)a0 + 32; }

// sub_aaa20  (orig 0xaaa20, getter)
uint8_t sdk_f_aaa20(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_aaa30  (orig 0xaaa30, getter)
uint8_t sdk_f_aaa30(void* a0) { return *(uint8_t*)((char*)(a0) + 9); }

// sub_aaa40  (orig 0xaaa40, getter)
uint8_t sdk_f_aaa40(void* a0) { return *(uint8_t*)((char*)(a0) + 10); }

// sub_aaa50  (orig 0xaaa50, getter)
uint32_t sdk_f_aaa50(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_aaa60  (orig 0xaaa60, setter)
void sdk_f_aaa60(void* a0) { *(uint16_t*)((char*)(a0) + 8) = 0; }

// sub_aaa70  (orig 0xaaa70, ptr_add)
void* sdk_f_aaa70(void* a0) { return (char*)a0 + 32; }

// sub_aaa80  (orig 0xaaa80, ptr_add)
void* sdk_f_aaa80(void* a0) { return (char*)a0 + 80; }

// sub_aabf0  (orig 0xaabf0, ret_only)
void sdk_f_aabf0() {}

// sub_aac90  (orig 0xaac90, straight)
uint8_t sdk_f_aac90(void* a0, void* a1) { return (((*(uint8_t*)((char*)(a0) + 9) != *(uint8_t*)((char*)(a1) + 1)) ? 1 : 0)) | (((*(uint8_t*)((char*)(a0) + 10) != 0) ? 1 : 0)); }

// sub_aad70  (orig 0xaad70, setter-chain-zero)
void sdk_f_aad70(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 64) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint16_t*)((char*)a0 + 8) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
}

// sub_aadd0  (orig 0xaadd0, setter-chain)
void sdk_f_aadd0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_aade0  (orig 0xaade0, setter-chain)
void sdk_f_aade0(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint32_t*)((char*)(a0) + 8) = a2; }

// sub_aadf0  (orig 0xaadf0, straight-line)
uint64_t sdk_f_aadf0(void* a0, uint32_t a1) { return (*(uint64_t*)((char*)(a0))) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(368)))))); }

// sub_aae00  (orig 0xaae00, getter)
uint32_t sdk_f_aae00(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_aae60  (orig 0xaae60, setter-chain-zero)
void sdk_f_aae60(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 184) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 168) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 152) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 136) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 120) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 104) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 88) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 72) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_aaea0  (orig 0xaaea0, getter)
uint32_t sdk_f_aaea0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_aaee0  (orig 0xaaee0, getter)
uint32_t sdk_f_aaee0(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_aaf10  (orig 0xaaf10, ptr_add)
void* sdk_f_aaf10(void* a0) { return (char*)a0 + 8; }

// sub_aaf40  (orig 0xaaf40, ptr_add)
void* sdk_f_aaf40(void* a0) { return (char*)a0 + 104; }

// sub_ab0c0  (orig 0xab0c0, straight)
void sdk_f_ab0c0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 209) = (uint8_t)k0;
}

// sub_ab120  (orig 0xab120, straight-line)
void sdk_f_ab120(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(a1);
    *(uint32_t*)((char*)(a0) + 28) = 0;
    *(uint64_t*)((char*)(a0) + 20) = 0;
    *(uint64_t*)((char*)(a0) + 12) = 0;
    *(uint64_t*)((char*)(a0) + 4) = 0;
}

// sub_ab230  (orig 0xab230, getter)
uint32_t sdk_f_ab230(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_ab240  (orig 0xab240, getter)
uint8_t sdk_f_ab240(void* a0) { return *(uint8_t*)((char*)(a0) + 12); }

// sub_ab250  (orig 0xab250, setter)
void sdk_f_ab250(void* a0) { *(uint8_t*)((char*)(a0) + 12) = 0; }

// sub_ab310  (orig 0xab310, getter)
uint32_t sdk_f_ab310(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_ab320  (orig 0xab320, getter)
uint32_t sdk_f_ab320(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_ab330  (orig 0xab330, straight-line)
uint64_t sdk_f_ab330(void* a0, uint32_t a1) { return (*(uint64_t*)((char*)(a0) + 16)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(224)))))); }

// sub_ab340  (orig 0xab340, straight)
void sdk_f_ab340(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint32_t a5) {
    *(uint64_t*)((char*)(a0)) = a1;
    *(uint32_t*)((char*)(a0) + 8) = (uint32_t)(a2);
    *(uint64_t*)((char*)(a0) + 16) = a3;
    *(uint32_t*)((char*)(a0) + 24) = (uint32_t)(a4);
    *(uint8_t*)((char*)(a0) + 28) = (uint8_t)((((uint32_t)a5)) & (1));
}

// sub_ac850  (orig 0xac850, straight)
uint8_t sdk_f_ac850(void* a0, void* a1) { return (((*(uint8_t*)((char*)(a1) + 26) == 0) ? 1 : 0)) | (((*(uint8_t*)((char*)(a0) + 538) != 0) ? 1 : 0)); }

// sub_ad520  (orig 0xad520, straight-line)
uint64_t sdk_f_ad520(void* a0, uint32_t a1) { return (*(uint64_t*)((char*)(a0) + 16)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(208)))))); }

// sub_ad550  (orig 0xad550, setter-chain-zero)
void sdk_f_ad550(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_ad560  (orig 0xad560, getter-chain)
uint64_t sdk_f_ad560(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(uint64_t*)((char*)(t0) + (uintptr_t)(a1) * 8);
}

// sub_ad570  (orig 0xad570, straight-line)
uint64_t sdk_f_ad570(void* a0, uint32_t a1) { return (*(uint64_t*)((char*)(a0) + 8)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(544)))))); }

// sub_ad580  (orig 0xad580, getter)
uint32_t sdk_f_ad580(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_ad590  (orig 0xad590, getter)
uint32_t sdk_f_ad590(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_ad5a0  (orig 0xad5a0, setter)
void sdk_f_ad5a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_aeae0  (orig 0xaeae0, ret_only)
void sdk_f_aeae0() {}

// sub_aeaf0  (orig 0xaeaf0, ret_only)
void sdk_f_aeaf0() {}

// sub_aeb00  (orig 0xaeb00, mov_ret)
uint32_t sdk_f_aeb00() { return 0; }

// sub_aeb10  (orig 0xaeb10, ret_only)
void sdk_f_aeb10() {}

// sub_aeb20  (orig 0xaeb20, float_const)
float sdk_f_aeb20() { return 1.00000000f; }

// sub_aeb30  (orig 0xaeb30, ret_only)
void sdk_f_aeb30() {}

// sub_aeb40  (orig 0xaeb40, const-ret)
uint32_t sdk_f_aeb40() { return 263321u; }

// sub_aeb50  (orig 0xaeb50, const-ret)
uint32_t sdk_f_aeb50() { return 263321u; }

// sub_aeb60  (orig 0xaeb60, const-ret)
uint32_t sdk_f_aeb60() { return 263321u; }

// sub_aeb70  (orig 0xaeb70, mov_ret)
uint32_t sdk_f_aeb70() { return 0; }

// sub_aeb90  (orig 0xaeb90, ret_only)
void sdk_f_aeb90() {}

// sub_aeba0  (orig 0xaeba0, ret_only)
void sdk_f_aeba0() {}

// sub_aebb0  (orig 0xaebb0, ret_only)
void sdk_f_aebb0() {}

// sub_aebc0  (orig 0xaebc0, ret_only)
void sdk_f_aebc0() {}

// sub_aebd0  (orig 0xaebd0, ret_only)
void sdk_f_aebd0() {}

// sub_aebe0  (orig 0xaebe0, ret_only)
void sdk_f_aebe0() {}

// sub_aebf0  (orig 0xaebf0, ret_only)
void sdk_f_aebf0() {}

// sub_aec00  (orig 0xaec00, ret_only)
void sdk_f_aec00() {}

// sub_aec10  (orig 0xaec10, ret_only)
void sdk_f_aec10() {}

// sub_aec20  (orig 0xaec20, ret_only)
void sdk_f_aec20() {}

// sub_aec30  (orig 0xaec30, ret_only)
void sdk_f_aec30() {}

// sub_aec40  (orig 0xaec40, ret_only)
void sdk_f_aec40() {}

// sub_aec50  (orig 0xaec50, ret_only)
void sdk_f_aec50() {}

// sub_aec60  (orig 0xaec60, ret_only)
void sdk_f_aec60() {}

// sub_aec70  (orig 0xaec70, ret_only)
void sdk_f_aec70() {}

// sub_aec80  (orig 0xaec80, ret_only)
void sdk_f_aec80() {}

// sub_aec90  (orig 0xaec90, ret_only)
void sdk_f_aec90() {}

// sub_aeca0  (orig 0xaeca0, ret_only)
void sdk_f_aeca0() {}

// sub_aecb0  (orig 0xaecb0, ret_only)
void sdk_f_aecb0() {}

// sub_aecc0  (orig 0xaecc0, ret_only)
void sdk_f_aecc0() {}

// sub_aecd0  (orig 0xaecd0, ret_only)
void sdk_f_aecd0() {}

// sub_aece0  (orig 0xaece0, ret_only)
void sdk_f_aece0() {}

// sub_aecf0  (orig 0xaecf0, ret_only)
void sdk_f_aecf0() {}

// sub_aed00  (orig 0xaed00, ret_only)
void sdk_f_aed00() {}

// sub_aed20  (orig 0xaed20, ret_only)
void sdk_f_aed20() {}

// sub_aed30  (orig 0xaed30, ret_only)
void sdk_f_aed30() {}

// sub_aeee0  (orig 0xaeee0, ret_only)
void sdk_f_aeee0() {}

// sub_aeef0  (orig 0xaeef0, ret_only)
void sdk_f_aeef0() {}

// sub_af340  (orig 0xaf340, setter-chain)
void sdk_f_af340(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_af770  (orig 0xaf770, ret_only)
void sdk_f_af770() {}

// sub_af780  (orig 0xaf780, ret_only)
void sdk_f_af780() {}

// sub_af7d0  (orig 0xaf7d0, setter)
void sdk_f_af7d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_b05d0  (orig 0xb05d0, getter)
uint32_t sdk_f_b05d0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_b05e0  (orig 0xb05e0, getter)
uint32_t sdk_f_b05e0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_b05f0  (orig 0xb05f0, getter)
uint32_t sdk_f_b05f0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_b0600  (orig 0xb0600, getter)
uint64_t sdk_f_b0600(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_b0610  (orig 0xb0610, getter)
uint32_t sdk_f_b0610(void* a0) { return *(uint32_t*)((char*)(a0) + 48); }

// sub_b0620  (orig 0xb0620, getter)
uint32_t sdk_f_b0620(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_b0630  (orig 0xb0630, straight)
uint32_t sdk_f_b0630(void* a0) { return (*(uint32_t*)((char*)(a0) + 28)) - (*(uint32_t*)((char*)(a0) + 52)); }

// sub_b26f0  (orig 0xb26f0, mov_ret)
uint64_t sdk_f_b26f0() { return 0; }

// sub_b2700  (orig 0xb2700, ret_only)
void sdk_f_b2700() {}

// sub_b2710  (orig 0xb2710, ret_only)
void sdk_f_b2710() {}

// sub_b2720  (orig 0xb2720, ret_only)
void sdk_f_b2720() {}

// sub_b2730  (orig 0xb2730, ret_only)
void sdk_f_b2730() {}

// sub_b2740  (orig 0xb2740, ret_only)
void sdk_f_b2740() {}

// sub_b2750  (orig 0xb2750, mov_ret)
uint64_t sdk_f_b2750(uint64_t a0, uint64_t a1) { return a1; }

// sub_b2760  (orig 0xb2760, ret_only)
void sdk_f_b2760() {}

// sub_b2770  (orig 0xb2770, ret_only)
void sdk_f_b2770() {}

// sub_b2780  (orig 0xb2780, ret_only)
void sdk_f_b2780() {}

// sub_b2790  (orig 0xb2790, ret_only)
void sdk_f_b2790() {}

// sub_b27a0  (orig 0xb27a0, mov_ret)
uint32_t sdk_f_b27a0() { return 0; }

// sub_b27b0  (orig 0xb27b0, ret_only)
void sdk_f_b27b0() {}

// sub_b27d0  (orig 0xb27d0, ret_only)
void sdk_f_b27d0() {}

// sub_b27e0  (orig 0xb27e0, ret_only)
void sdk_f_b27e0() {}

// sub_b27f0  (orig 0xb27f0, ret_only)
void sdk_f_b27f0() {}

// sub_b2800  (orig 0xb2800, ret_only)
void sdk_f_b2800() {}

// sub_befb0  (orig 0xbefb0, straight)
void sdk_f_befb0(void* a0) {
    *(uint32_t*)((char*)(a0)) = 2;
}

// sub_befc0  (orig 0xbefc0, straight)
void sdk_f_befc0(void* a0) {
    *(uint32_t*)((char*)(a0)) = 3;
}

// sub_befd0  (orig 0xbefd0, setter)
void sdk_f_befd0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_c08b0  (orig 0xc08b0, setter)
void sdk_f_c08b0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_c1140  (orig 0xc1140, setter)
void sdk_f_c1140(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_c31e0  (orig 0xc31e0, ptr_add)
void* sdk_f_c31e0(void* a0) { return (char*)a0 + 32; }

// sub_c3400  (orig 0xc3400, ptr_add)
void* sdk_f_c3400(void* a0) { return (char*)a0 + 8; }

// sub_c3410  (orig 0xc3410, straight)
void* sdk_f_c3410(void* a0) { return (char*)(a0) - 24; }

// sub_c3540  (orig 0xc3540, ptr_add)
void* sdk_f_c3540(void* a0) { return (char*)a0 + 32; }

// sub_c39b0  (orig 0xc39b0, ptr_add)
void* sdk_f_c39b0(void* a0) { return (char*)a0 + 8; }

// sub_c39c0  (orig 0xc39c0, straight)
void* sdk_f_c39c0(void* a0) { return (char*)(a0) - 24; }

// sub_c3af0  (orig 0xc3af0, ptr_add)
void* sdk_f_c3af0(void* a0) { return (char*)a0 + 32; }

// sub_c3b50  (orig 0xc3b50, ptr_add)
void* sdk_f_c3b50(void* a0) { return (char*)a0 + 8; }

// sub_c3b60  (orig 0xc3b60, straight)
void* sdk_f_c3b60(void* a0) { return (char*)(a0) - 24; }

// sub_c4470  (orig 0xc4470, ptr_add)
void* sdk_f_c4470(void* a0) { return (char*)a0 + 32; }

// sub_c45f0  (orig 0xc45f0, ptr_add)
void* sdk_f_c45f0(void* a0) { return (char*)a0 + 8; }

// sub_c4600  (orig 0xc4600, straight)
void* sdk_f_c4600(void* a0) { return (char*)(a0) - 24; }

// sub_c4730  (orig 0xc4730, ptr_add)
void* sdk_f_c4730(void* a0) { return (char*)a0 + 32; }

// sub_c47d0  (orig 0xc47d0, ptr_add)
void* sdk_f_c47d0(void* a0) { return (char*)a0 + 8; }

// sub_c47e0  (orig 0xc47e0, straight)
void* sdk_f_c47e0(void* a0) { return (char*)(a0) - 24; }

// sub_c4ca0  (orig 0xc4ca0, ptr_add)
void* sdk_f_c4ca0(void* a0) { return (char*)a0 + 32; }

// sub_c4d20  (orig 0xc4d20, ptr_add)
void* sdk_f_c4d20(void* a0) { return (char*)a0 + 8; }

// sub_c4d30  (orig 0xc4d30, straight)
void* sdk_f_c4d30(void* a0) { return (char*)(a0) - 24; }

// sub_c4f90  (orig 0xc4f90, ptr_add)
void* sdk_f_c4f90(void* a0) { return (char*)a0 + 16; }

// sub_c60d0  (orig 0xc60d0, ptr_add)
void* sdk_f_c60d0(void* a0) { return (char*)a0 + 8; }

// sub_c60e0  (orig 0xc60e0, straight)
void* sdk_f_c60e0(void* a0) { return (char*)(a0) - 8; }

// sub_ca580  (orig 0xca580, ret_only)
void sdk_f_ca580() {}

// sub_cc8f0  (orig 0xcc8f0, ptr_add)
void* sdk_f_cc8f0(void* a0) { return (char*)a0 + 16; }

// sub_ccb30  (orig 0xccb30, ptr_add)
void* sdk_f_ccb30(void* a0) { return (char*)a0 + 8; }

// sub_ccb40  (orig 0xccb40, straight)
void* sdk_f_ccb40(void* a0) { return (char*)(a0) - 8; }

// sub_cdef0  (orig 0xcdef0, straight)
uint8_t sdk_f_cdef0(void* a0) { return *(uint8_t*)((char*)(a0) + 10049L); }

// sub_d0110  (orig 0xd0110, ret_only)
void sdk_f_d0110() {}

// sub_d0130  (orig 0xd0130, getter)
uint8_t sdk_f_d0130(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_d0160  (orig 0xd0160, getter)
uint16_t sdk_f_d0160(void* a0) { return *(uint16_t*)((char*)(a0) + 32); }

// sub_d0170  (orig 0xd0170, getter)
uint32_t sdk_f_d0170(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_d0270  (orig 0xd0270, getter)
uint16_t sdk_f_d0270(void* a0) { return *(uint16_t*)((char*)(a0) + 40); }

// sub_d0280  (orig 0xd0280, getter)
uint16_t sdk_f_d0280(void* a0) { return *(uint16_t*)((char*)(a0) + 42); }

// sub_d0290  (orig 0xd0290, getter)
uint8_t sdk_f_d0290(void* a0) { return *(uint8_t*)((char*)(a0) + 44); }

// sub_d0850  (orig 0xd0850, getter)
uint16_t sdk_f_d0850(void* a0) { return *(uint16_t*)((char*)(a0) + 40); }

// sub_d0860  (orig 0xd0860, getter)
uint8_t sdk_f_d0860(void* a0) { return *(uint8_t*)((char*)(a0) + 42); }

// sub_d2620  (orig 0xd2620, ptr_add)
void* sdk_f_d2620(void* a0) { return (char*)a0 + 16; }

// sub_d26c0  (orig 0xd26c0, ptr_add)
void* sdk_f_d26c0(void* a0) { return (char*)a0 + 8; }

// sub_d26d0  (orig 0xd26d0, straight)
void* sdk_f_d26d0(void* a0) { return (char*)(a0) - 8; }

// sub_d2860  (orig 0xd2860, ptr_add)
void* sdk_f_d2860(void* a0) { return (char*)a0 + 16; }

// sub_d2e70  (orig 0xd2e70, ptr_add)
void* sdk_f_d2e70(void* a0) { return (char*)a0 + 8; }

// sub_d2e80  (orig 0xd2e80, straight)
void* sdk_f_d2e80(void* a0) { return (char*)(a0) - 8; }

// sub_d47b0  (orig 0xd47b0, ret_only)
void sdk_f_d47b0() {}

// sub_d47c0  (orig 0xd47c0, ret_only)
void sdk_f_d47c0() {}

// sub_d5060  (orig 0xd5060, ptr_add)
void* sdk_f_d5060(void* a0) { return (char*)a0 + 16; }

// sub_d5160  (orig 0xd5160, ptr_add)
void* sdk_f_d5160(void* a0) { return (char*)a0 + 8; }

// sub_d5170  (orig 0xd5170, straight)
void* sdk_f_d5170(void* a0) { return (char*)(a0) - 8; }

// sub_d6b60  (orig 0xd6b60, ret_only)
void sdk_f_d6b60() {}

// sub_d6dd0  (orig 0xd6dd0, ptr_add)
void* sdk_f_d6dd0(void* a0) { return (char*)a0 + 16; }

// sub_d71a0  (orig 0xd71a0, ptr_add)
void* sdk_f_d71a0(void* a0) { return (char*)a0 + 8; }

// sub_d71b0  (orig 0xd71b0, straight)
void* sdk_f_d71b0(void* a0) { return (char*)(a0) - 8; }

// sub_d8160  (orig 0xd8160, ptr_add)
void* sdk_f_d8160(void* a0) { return (char*)a0 + 16; }

// sub_d8220  (orig 0xd8220, ptr_add)
void* sdk_f_d8220(void* a0) { return (char*)a0 + 8; }

// sub_d8230  (orig 0xd8230, straight)
void* sdk_f_d8230(void* a0) { return (char*)(a0) - 8; }

// sub_d8410  (orig 0xd8410, straight-line)
uint64_t sdk_f_d8410(uint32_t a0) { return (1013904223) + ((((uint32_t)a0)) * (1664525)); }

// libopus_unknown_fixed  (orig 0xdc4a0, strlit-ret)
const char *sdk_f_dc4a0() { static char g_f_dc4a0[1]; __asm__ volatile("" ::: "memory"); return g_f_dc4a0; }

// sub_e8ce0  (orig 0xe8ce0, straight)
void sdk_f_e8ce0(void* a0, uint64_t a1, uint64_t a2) {
    uint32_t k0 = -1;
    *(uint64_t*)((char*)(a0) + 20) = 141733920768;
    *(uint64_t*)((char*)(a0) + 28) = -9223372036854775808;
    *(uint64_t*)((char*)(a0)) = (uint64_t)(a1);
    *(uint64_t*)((char*)(a0) + 12) = 0;
    *(uint64_t*)((char*)(a0) + 36) = 0;
    *(uint32_t*)((char*)(a0) + 8) = (uint32_t)(a2);
    *(uint64_t*)((char*)(a0) + 44) = (uint64_t)k0;
}

// sub_fa070  (orig 0xfa070, straight)
uint32_t sdk_f_fa070(void* a0) {
    *(uint32_t*)((char*)(a0)) = 8600;
    return 0;
}

// sub_fc840  (orig 0xfc840, straight)
uint32_t sdk_f_fc840(void* a0) {
    *(uint32_t*)((char*)(a0)) = 19688;
    return 0;
}

// sub_10fae0  (orig 0x10fae0, straight-line)
uint32_t sdk_f_10fae0(uint32_t a0) { return ((22535) + ((((uint32_t)a0)) * (10240))) & (4294965248); }

// sub_115980  (orig 0x115980, mov_ret)
uint32_t sdk_f_115980() { return 496; }

// sub_115990  (orig 0x115990, setter)
void sdk_f_115990(void* a0) { *(uint32_t*)((char*)(a0) + 4) = 0; }

// sub_115ac0  (orig 0x115ac0, getter)
uint32_t sdk_f_115ac0(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_118a40  (orig 0x118a40, mov_ret)
uint32_t sdk_f_118a40() { return 47104; }

// sub_11ac50  (orig 0x11ac50, straight-line)
uint32_t sdk_f_11ac50(uint32_t a0) { return (59392) + ((((uint32_t)a0)) * (40)); }

// sub_11d490  (orig 0x11d490, ret_only)
void sdk_f_11d490() {}

// sub_11d8f0  (orig 0x11d8f0, getter)
uint32_t sdk_f_11d8f0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_11d900  (orig 0x11d900, getter)
uint32_t sdk_f_11d900(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_11da50  (orig 0x11da50, straight-line)
uint64_t sdk_f_11da50(void* a0) { return (*(uint64_t*)((char*)(a0) + 32)) * (1000); }

// sub_11da60  (orig 0x11da60, straight)
void sdk_f_11da60(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 40) = (uint8_t)k0;
}

// sub_11da80  (orig 0x11da80, compare)
bool sdk_f_11da80(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) != (uint64_t)(0); }

// sub_11da90  (orig 0x11da90, getter)
uint32_t sdk_f_11da90(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_11daa0  (orig 0x11daa0, getter)
uint32_t sdk_f_11daa0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_11dab0  (orig 0x11dab0, straight)
void sdk_f_11dab0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 48) = (uint8_t)k0;
}

// sub_11db00  (orig 0x11db00, ret_only)
void sdk_f_11db00() {}

// sub_11de60  (orig 0x11de60, getter)
uint32_t sdk_f_11de60(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_11de70  (orig 0x11de70, getter)
uint32_t sdk_f_11de70(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_11de80  (orig 0x11de80, getter)
uint32_t sdk_f_11de80(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_11de90  (orig 0x11de90, getter)
uint32_t sdk_f_11de90(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_11dfe0  (orig 0x11dfe0, straight-line)
uint64_t sdk_f_11dfe0(void* a0) { return (*(uint64_t*)((char*)(a0) + 40)) * (1000); }

// sub_11dff0  (orig 0x11dff0, straight)
void sdk_f_11dff0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 48) = (uint8_t)k0;
}

// sub_11e0d0  (orig 0x11e0d0, compare)
bool sdk_f_11e0d0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) != (uint64_t)(0); }

// sub_11e0e0  (orig 0x11e0e0, getter)
uint32_t sdk_f_11e0e0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_11e0f0  (orig 0x11e0f0, getter)
uint32_t sdk_f_11e0f0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_11e100  (orig 0x11e100, getter)
uint32_t sdk_f_11e100(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_11e110  (orig 0x11e110, getter)
uint32_t sdk_f_11e110(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_11e120  (orig 0x11e120, straight)
void sdk_f_11e120(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 56) = (uint8_t)k0;
}

// sub_11e140  (orig 0x11e140, mov_ret)
uint32_t sdk_f_11e140() { return 6000; }

// sub_11e170  (orig 0x11e170, strlit-ret)
const char *sdk_f_11e170() { static char g_f_11e170[1]; __asm__ volatile("" ::: "memory"); return g_f_11e170; }

// sub_11e1f0  (orig 0x11e1f0, ret_only)
void sdk_f_11e1f0() {}

// sub_11e240  (orig 0x11e240, compare)
bool sdk_f_11e240(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) != (uint64_t)(0); }

// sub_11e310  (orig 0x11e310, setter-chain-zero)
void sdk_f_11e310(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_11e320  (orig 0x11e320, getter)
uint32_t sdk_f_11e320(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_11e330  (orig 0x11e330, getter)
uint32_t sdk_f_11e330(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_11e4a0  (orig 0x11e4a0, straight)
void sdk_f_11e4a0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 32) = (uint8_t)k0;
}

// sub_11e4e0  (orig 0x11e4e0, ret_only)
void sdk_f_11e4e0() {}

// sub_11e530  (orig 0x11e530, compare)
bool sdk_f_11e530(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) != (uint64_t)(0); }

// sub_11e820  (orig 0x11e820, getter)
uint32_t sdk_f_11e820(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_11e830  (orig 0x11e830, getter)
uint32_t sdk_f_11e830(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_11e960  (orig 0x11e960, getter)
uint32_t sdk_f_11e960(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_11e9d0  (orig 0x11e9d0, getter)
uint32_t sdk_f_11e9d0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_11ea40  (orig 0x11ea40, getter)
uint32_t sdk_f_11ea40(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_11eac0  (orig 0x11eac0, getter)
uint32_t sdk_f_11eac0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_11eba0  (orig 0x11eba0, ret_only)
void sdk_f_11eba0() {}

// sub_11ec00  (orig 0x11ec00, compare)
bool sdk_f_11ec00(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) != (uint64_t)(0); }

// sub_11ed50  (orig 0x11ed50, setter-chain-zero)
void sdk_f_11ed50(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_11ed60  (orig 0x11ed60, getter)
uint32_t sdk_f_11ed60(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_11ed70  (orig 0x11ed70, getter)
uint32_t sdk_f_11ed70(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_11ed80  (orig 0x11ed80, getter)
uint32_t sdk_f_11ed80(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_11ed90  (orig 0x11ed90, getter)
uint32_t sdk_f_11ed90(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_11ef00  (orig 0x11ef00, straight)
void sdk_f_11ef00(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 40) = (uint8_t)k0;
}

// sub_11f440  (orig 0x11f440, ret_only)
void sdk_f_11f440() {}

// sub_11f850  (orig 0x11f850, ptr_add)
void* sdk_f_11f850(void* a0) { return (char*)a0 + 16; }

// sub_11fa20  (orig 0x11fa20, ptr_add)
void* sdk_f_11fa20(void* a0) { return (char*)a0 + 8; }

// sub_11fa30  (orig 0x11fa30, straight)
void* sdk_f_11fa30(void* a0) { return (char*)(a0) - 8; }

// sub_11fdb0  (orig 0x11fdb0, ptr_add)
void* sdk_f_11fdb0(void* a0) { return (char*)a0 + 16; }

// sub_120040  (orig 0x120040, ptr_add)
void* sdk_f_120040(void* a0) { return (char*)a0 + 8; }

// sub_120050  (orig 0x120050, straight)
void* sdk_f_120050(void* a0) { return (char*)(a0) - 8; }

// sub_121020  (orig 0x121020, mov_ret)
uint32_t sdk_f_121020() { return 48960; }

// sub_121070  (orig 0x121070, mov_ret)
uint32_t sdk_f_121070() { return 37184; }

// sub_1210c0  (orig 0x1210c0, mov_ret)
uint32_t sdk_f_1210c0() { return 1984; }

// sub_121110  (orig 0x121110, mov_ret)
uint32_t sdk_f_121110() { return 65536; }

// sub_121160  (orig 0x121160, mov_ret)
uint32_t sdk_f_121160() { return 56; }

// sub_1211b0  (orig 0x1211b0, mov_ret)
uint32_t sdk_f_1211b0() { return 32784; }

// sub_121200  (orig 0x121200, mov_ret)
uint32_t sdk_f_121200() { return 8208; }

// sub_1251e0  (orig 0x1251e0, getter)
uint32_t sdk_f_1251e0(void* a0) { return *(uint32_t*)((char*)(a0) + 13456L); }

// sub_128880  (orig 0x128880, setter-chain)
void sdk_f_128880(void* a0, uint64_t a1, uint64_t a2, uint64_t a3) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 144) = a2; *(uint64_t*)((char*)(a0) + 152) = a3; }

// sub_12a8a0  (orig 0x12a8a0, ret_only)
void sdk_f_12a8a0() {}

// sub_138170  (orig 0x138170, ret_only)
void sdk_f_138170() {}

// sub_138180  (orig 0x138180, setter-chain-zero)
void sdk_f_138180(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 16) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_138790  (orig 0x138790, getter)
uint32_t sdk_f_138790(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_1387a0  (orig 0x1387a0, straight)
uint32_t sdk_f_1387a0(void* a0) { return (*(uint32_t*)((char*)(a0) + 36)) - (*(uint32_t*)((char*)(a0))); }

// sub_1387b0  (orig 0x1387b0, setter)
void sdk_f_1387b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; }

// sub_1387c0  (orig 0x1387c0, getter)
uint32_t sdk_f_1387c0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_1392f0  (orig 0x1392f0, copy-chain)
void sdk_f_1392f0(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint8_t*)((char*)(a0) + 16) = 0; *(uint8_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 64) = 0; *(uint16_t*)((char*)(a0) + 72) = *(uint16_t*)((char*)(a0) + 60); }

// sub_13ff40  (orig 0x13ff40, ret_only)
void sdk_f_13ff40() {}

// sub_140f30  (orig 0x140f30, ret_only)
void sdk_f_140f30() {}

// sub_140f70  (orig 0x140f70, ret_only)
void sdk_f_140f70() {}

// sub_141e90  (orig 0x141e90, setter-chain)
void sdk_f_141e90(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint32_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint32_t*)((char*)(a0) + 32) = a2; }

// sub_1441d0  (orig 0x1441d0, setter)
void sdk_f_1441d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 64) = a1; }

// sub_145bc0  (orig 0x145bc0, setter)
void sdk_f_145bc0(void* a0) { *(uint8_t*)((char*)(a0) + 464) = 0; }

// sub_145c00  (orig 0x145c00, compare)
bool sdk_f_145c00(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 461)) != (uint64_t)(0); }

// sub_14c440  (orig 0x14c440, getter)
uint32_t sdk_f_14c440(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_14c450  (orig 0x14c450, compare)
bool sdk_f_14c450(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 52)) != (uint64_t)(0); }

// sub_14c460  (orig 0x14c460, getter)
uint32_t sdk_f_14c460(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_14c470  (orig 0x14c470, getter)
uint8_t sdk_f_14c470(void* a0) { return *(uint8_t*)((char*)(a0) + 48); }

// sub_14c4c0  (orig 0x14c4c0, mov_ret)
uint32_t sdk_f_14c4c0() { return 1424; }

// sub_14c510  (orig 0x14c510, mov_ret)
uint32_t sdk_f_14c510() { return 8192; }

// sub_14c9e0  (orig 0x14c9e0, straight-line)
uint64_t sdk_f_14c9e0(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((uint64_t)(((uint32_t)(((uint32_t)a1)))))) * (((uint64_t)(((uint32_t)(56))))))) + (56); }

// sub_14c9f0  (orig 0x14c9f0, getter)
uint32_t sdk_f_14c9f0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_14d650  (orig 0x14d650, straight-line)
uint32_t sdk_f_14d650(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((uint32_t)a1)) * 4)));
    return *(uint32_t*)((char*)(p0) + 1380);
}

// sub_14d660  (orig 0x14d660, straight)
uint32_t sdk_f_14d660(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1) + 1404);
    return 0;
}

// sub_14f0d0  (orig 0x14f0d0, getter)
uint32_t sdk_f_14f0d0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_15a670  (orig 0x15a670, mov_ret)
uint32_t sdk_f_15a670() { return 0; }

// sub_16b950  (orig 0x16b950, mov_ret)
uint32_t sdk_f_16b950() { return 3448; }

// sub_16b9a0  (orig 0x16b9a0, mov_ret)
uint32_t sdk_f_16b9a0() { return 960; }

// sub_16b9f0  (orig 0x16b9f0, mov_ret)
uint32_t sdk_f_16b9f0() { return 40536; }

// sub_16ba40  (orig 0x16ba40, mov_ret)
uint32_t sdk_f_16ba40() { return 20880; }

// sub_16ba90  (orig 0x16ba90, mov_ret)
uint32_t sdk_f_16ba90() { return 27792; }

// sub_16bae0  (orig 0x16bae0, mov_ret)
uint32_t sdk_f_16bae0() { return 8584; }

// sub_16bb30  (orig 0x16bb30, mov_ret)
uint32_t sdk_f_16bb30() { return 8208; }

// sub_16bb80  (orig 0x16bb80, mov_ret)
uint32_t sdk_f_16bb80() { return 8208; }

// sub_171620  (orig 0x171620, ret_only)
void sdk_f_171620() {}

// sub_171a00  (orig 0x171a00, getter)
uint32_t sdk_f_171a00(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_171a10  (orig 0x171a10, getter)
uint32_t sdk_f_171a10(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_171a20  (orig 0x171a20, getter)
uint32_t sdk_f_171a20(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_171b50  (orig 0x171b50, compare)
bool sdk_f_171b50(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 16)) != (uint64_t)(0); }

// sub_171ba0  (orig 0x171ba0, getter)
uint32_t sdk_f_171ba0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_171bb0  (orig 0x171bb0, getter)
uint32_t sdk_f_171bb0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_171bc0  (orig 0x171bc0, getter)
uint32_t sdk_f_171bc0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_171dc0  (orig 0x171dc0, ret_only)
void sdk_f_171dc0() {}

// sub_171e40  (orig 0x171e40, ret_only)
void sdk_f_171e40() {}

// sub_171f10  (orig 0x171f10, ret_only)
void sdk_f_171f10() {}

// sub_171fc0  (orig 0x171fc0, ret_only)
void sdk_f_171fc0() {}

// sub_173960  (orig 0x173960, setter-chain-zero)
void sdk_f_173960(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_173970  (orig 0x173970, ret_only)
void sdk_f_173970() {}

// sub_179b50  (orig 0x179b50, ret_only)
void sdk_f_179b50() {}

// sub_179ea0  (orig 0x179ea0, ret_only)
void sdk_f_179ea0() {}

// sub_17a220  (orig 0x17a220, ret_only)
void sdk_f_17a220() {}

// sub_17df70  (orig 0x17df70, ptr_add)
void* sdk_f_17df70(void* a0) { return (char*)a0 + 16; }

// sub_17df80  (orig 0x17df80, mov_ret)
uint64_t sdk_f_17df80() { return 0; }

// sub_17dfc0  (orig 0x17dfc0, ptr_add)
void* sdk_f_17dfc0(void* a0) { return (char*)a0 + 8; }

// sub_17dfd0  (orig 0x17dfd0, straight)
void* sdk_f_17dfd0(void* a0) { return (char*)(a0) - 8; }

// sub_17f0f0  (orig 0x17f0f0, straight)
uint32_t sdk_f_17f0f0(uint32_t a0) { return (((((uint32_t)a0) < 3)) ? (((uint32_t)a0)) : (3)); }

// sub_17f100  (orig 0x17f100, mov_ret)
uint32_t sdk_f_17f100() { return 0; }

// sub_17f7d0  (orig 0x17f7d0, setter-chain)
void sdk_f_17f7d0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint8_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = a2; }

// sub_17fb80  (orig 0x17fb80, ret_only)
void sdk_f_17fb80() {}

// sub_17fb90  (orig 0x17fb90, ret_only)
void sdk_f_17fb90() {}

// sub_17fba0  (orig 0x17fba0, ret_only)
void sdk_f_17fba0() {}

// sub_17fbb0  (orig 0x17fbb0, ret_only)
void sdk_f_17fbb0() {}

// sub_17fbc0  (orig 0x17fbc0, ret_only)
void sdk_f_17fbc0() {}

// sub_17fd30  (orig 0x17fd30, compare)
bool sdk_f_17fd30(uint64_t a0) { return (uint64_t)(a0) != (uint64_t)(0); }

// sub_17fd70  (orig 0x17fd70, ret_only)
void sdk_f_17fd70() {}

// sub_17fe60  (orig 0x17fe60, setter-chain)
void sdk_f_17fe60(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint8_t*)((char*)(a0) + 16) = 0; }

// sub_17ff90  (orig 0x17ff90, setter-chain)
void sdk_f_17ff90(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint8_t*)((char*)(a0) + 16) = 0; }

// sub_180980  (orig 0x180980, setter-chain)
void sdk_f_180980(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint8_t*)((char*)(a0) + 8) = 0; *(uint8_t*)((char*)(a0) + 24) = 0; }

// sub_180a60  (orig 0x180a60, ptr_add)
void* sdk_f_180a60(void* a0) { return (char*)a0 + 32; }

// sub_180f10  (orig 0x180f10, ptr_add)
void* sdk_f_180f10(void* a0) { return (char*)a0 + 72; }

// sub_1813b0  (orig 0x1813b0, setter)
void sdk_f_1813b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_1813c0  (orig 0x1813c0, getter)
uint32_t sdk_f_1813c0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_1813d0  (orig 0x1813d0, getter)
uint32_t sdk_f_1813d0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_181400  (orig 0x181400, straight-line)
uint64_t sdk_f_181400(void* a0) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0))) + ((*(int32_t*)((char*)(a0) + 28)) * (24))));
    return *(uint64_t*)((char*)(p0) + 16);
}

// sub_181440  (orig 0x181440, straight-line)
uint8_t sdk_f_181440(void* a0) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0))) + ((*(int32_t*)((char*)(a0) + 28)) * (24))));
    return (*(uint8_t*)((char*)(p0) + 4)) & (15);
}

// sub_181460  (orig 0x181460, ret_only)
void sdk_f_181460() {}

// sub_181470  (orig 0x181470, ret_only)
void sdk_f_181470() {}

// sub_181480  (orig 0x181480, ret_only)
void sdk_f_181480() {}

// sub_181490  (orig 0x181490, ret_only)
void sdk_f_181490() {}

// sub_1814a0  (orig 0x1814a0, ret_only)
void sdk_f_1814a0() {}

// sub_1814b0  (orig 0x1814b0, ret_only)
void sdk_f_1814b0() {}

// sub_181920  (orig 0x181920, getter)
uint8_t sdk_f_181920(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_181960  (orig 0x181960, compare)
bool sdk_f_181960(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 120)) == (uint64_t)(1); }

// sub_181970  (orig 0x181970, compare)
bool sdk_f_181970(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 120)) == (uint64_t)(2); }

// sub_181ac0  (orig 0x181ac0, straight)
void sdk_f_181ac0(void* a0) {
    *(uint32_t*)((char*)(a0) + 120) = 1;
}

// sub_181ad0  (orig 0x181ad0, straight-line)
uint64_t sdk_f_181ad0(void* a0) { return (8) + ((*(int32_t*)((char*)(a0) + 16)) * (104)); }

// sub_181af0  (orig 0x181af0, straight-line)
int64_t sdk_f_181af0(uint64_t unused0, uint32_t a1) { return ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(104)))))) + (8); }

// sub_182260  (orig 0x182260, getter)
uint32_t sdk_f_182260(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_182270  (orig 0x182270, getter)
uint64_t sdk_f_182270(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1822c0  (orig 0x1822c0, mov_ret)
uint32_t sdk_f_1822c0() { return 100; }

// sub_1822d0  (orig 0x1822d0, ptr_add)
void* sdk_f_1822d0(void* a0) { return (char*)a0 + 24; }

// sub_182920  (orig 0x182920, straight)
void sdk_f_182920(void* a0) {
    *(uint32_t*)((char*)(a0) + 120) = 2;
}

// sub_182930  (orig 0x182930, setter)
void sdk_f_182930(void* a0) { *(uint32_t*)((char*)(a0) + 120) = 0; }

// sub_182940  (orig 0x182940, setter)
void sdk_f_182940(void* a0) { *(uint32_t*)((char*)(a0) + 120) = 0; }

// sub_182a40  (orig 0x182a40, getter)
uint64_t sdk_f_182a40(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_182a50  (orig 0x182a50, getter)
uint64_t sdk_f_182a50(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_182a60  (orig 0x182a60, pair-ret)
struct pair16_f_182a60_ { uint64_t f[2]; }; pair16_f_182a60_ sdk_f_182a60(void* a0) { return *(struct pair16_f_182a60_ *)((char*)(a0) + 16); }

// sub_182a70  (orig 0x182a70, ptr_add)
void* sdk_f_182a70(void* a0) { return (char*)a0 + 32; }

// sub_182a80  (orig 0x182a80, getter)
uint8_t sdk_f_182a80(void* a0) { return *(uint8_t*)((char*)(a0) + 112); }

// sub_185470  (orig 0x185470, ret_only)
void sdk_f_185470() {}

// sub_188450  (orig 0x188450, compare)
bool sdk_f_188450(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_1888e0  (orig 0x1888e0, getter)
uint8_t sdk_f_1888e0(void* a0) { return *(uint8_t*)((char*)(a0) + 55); }

// sub_188db0  (orig 0x188db0, strlit-ret)
const char *sdk_f_188db0() { static char g_f_188db0[1]; __asm__ volatile("" ::: "memory"); return g_f_188db0; }

// sub_188fa0  (orig 0x188fa0, ret_only)
void sdk_f_188fa0() {}

// sub_18a410  (orig 0x18a410, setter-chain)
void sdk_f_18a410(void* a0) { *(void**)((char*)(a0)) = a0; *(void**)((char*)(a0) + 8) = a0; *(uint8_t*)((char*)(a0) + 72) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; }

// sub_18a9e0  (orig 0x18a9e0, ptr_add)
void* sdk_f_18a9e0(void* a0) { return (char*)a0 + 32; }

// sub_18ac90  (orig 0x18ac90, straight)
void* sdk_f_18ac90(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 144));
    return (char*)(p0) + 144;
}

// sub_18af90  (orig 0x18af90, straight)
void* sdk_f_18af90(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 144));
    return (char*)(p0) + 144;
}

// sub_18afa0  (orig 0x18afa0, ret_only)
void sdk_f_18afa0() {}

// sub_18b5c0  (orig 0x18b5c0, ptr_add)
void* sdk_f_18b5c0(void* a0) { return (char*)a0 + 16; }

// sub_18b720  (orig 0x18b720, ptr_add)
void* sdk_f_18b720(void* a0) { return (char*)a0 + 8; }

// sub_18b730  (orig 0x18b730, straight)
void* sdk_f_18b730(void* a0) { return (char*)(a0) - 8; }

// sub_18ba90  (orig 0x18ba90, ptr_add)
void* sdk_f_18ba90(void* a0) { return (char*)a0 + 16; }

// sub_18bb50  (orig 0x18bb50, ptr_add)
void* sdk_f_18bb50(void* a0) { return (char*)a0 + 8; }

// sub_18bb60  (orig 0x18bb60, straight)
void* sdk_f_18bb60(void* a0) { return (char*)(a0) - 8; }

// sub_18be80  (orig 0x18be80, ptr_add)
void* sdk_f_18be80(void* a0) { return (char*)a0 + 16; }

// sub_18bf40  (orig 0x18bf40, ptr_add)
void* sdk_f_18bf40(void* a0) { return (char*)a0 + 8; }

// sub_18bf50  (orig 0x18bf50, straight)
void* sdk_f_18bf50(void* a0) { return (char*)(a0) - 8; }

// sub_18c2a0  (orig 0x18c2a0, ptr_add)
void* sdk_f_18c2a0(void* a0) { return (char*)a0 + 16; }

// sub_18c390  (orig 0x18c390, ptr_add)
void* sdk_f_18c390(void* a0) { return (char*)a0 + 8; }

// sub_18c3a0  (orig 0x18c3a0, straight)
void* sdk_f_18c3a0(void* a0) { return (char*)(a0) - 8; }

// sub_18c9b0  (orig 0x18c9b0, strlit-ret)
const char *sdk_f_18c9b0() { static char g_f_18c9b0[1]; __asm__ volatile("" ::: "memory"); return g_f_18c9b0; }

// sub_18f560  (orig 0x18f560, getter)
uint64_t sdk_f_18f560(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_18f970  (orig 0x18f970, setter)
void sdk_f_18f970(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_18fbb0  (orig 0x18fbb0, ret_only)
void sdk_f_18fbb0() {}

// sub_18fc80  (orig 0x18fc80, ptr_add)
void* sdk_f_18fc80(void* a0) { return (char*)a0 + 16; }

// sub_18fce0  (orig 0x18fce0, ptr_add)
void* sdk_f_18fce0(void* a0) { return (char*)a0 + 8; }

// sub_18fcf0  (orig 0x18fcf0, straight)
void* sdk_f_18fcf0(void* a0) { return (char*)(a0) - 8; }

// sub_190810  (orig 0x190810, getter)
uint32_t sdk_f_190810(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_190820  (orig 0x190820, ptr_add)
void* sdk_f_190820(void* a0) { return (char*)a0 + 8; }

// sub_190830  (orig 0x190830, getter)
uint64_t sdk_f_190830(void* a0) { return *(uint64_t*)((char*)(a0) + 4104L); }

// sub_192610  (orig 0x192610, mov_ret)
uint64_t sdk_f_192610() { return 0; }

// sub_192620  (orig 0x192620, mov_ret)
uint64_t sdk_f_192620() { return 0; }

// sub_192630  (orig 0x192630, mov_ret)
uint64_t sdk_f_192630() { return 0; }

// sub_192640  (orig 0x192640, mov_ret)
uint64_t sdk_f_192640() { return 0; }

// sub_192840  (orig 0x192840, mov_ret)
uint32_t sdk_f_192840() { return 0; }

// sub_192850  (orig 0x192850, mov_ret)
uint32_t sdk_f_192850() { return 0; }

// sub_192860  (orig 0x192860, mov_ret)
uint64_t sdk_f_192860() { return 0; }

// sub_192870  (orig 0x192870, mov_ret)
uint32_t sdk_f_192870() { return 0; }

// sub_192de0  (orig 0x192de0, ret_only)
void sdk_f_192de0() {}

// sub_192fb0  (orig 0x192fb0, ret_only)
void sdk_f_192fb0() {}

// sub_193290  (orig 0x193290, straight)
uint32_t sdk_f_193290(uint32_t a0) { return ((((uint32_t)a0)) >> (6)) & (1); }

// sub_1932a0  (orig 0x1932a0, straight)
uint32_t sdk_f_1932a0(uint32_t a0) { return ((((uint32_t)a0)) >> (5)) & (1); }

// sub_1932b0  (orig 0x1932b0, straight)
uint32_t sdk_f_1932b0(uint32_t a0) { return ((((uint32_t)a0)) >> (2)) & (1); }

// sub_1932c0  (orig 0x1932c0, straight)
uint32_t sdk_f_1932c0(uint32_t a0) { return (((uint32_t)a0)) & (1); }

// sub_193f50  (orig 0x193f50, getter)
uint16_t sdk_f_193f50(void* a0) { return *(uint16_t*)((char*)(a0)); }

// sub_193f60  (orig 0x193f60, getter)
uint32_t sdk_f_193f60(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_194e00  (orig 0x194e00, compare)
bool sdk_f_194e00(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_194e10  (orig 0x194e10, mov_ret)
uint64_t sdk_f_194e10() { return 0; }

// sub_194e20  (orig 0x194e20, copy-chain-store)
void sdk_f_194e20(void* a0, void* a1) {
    uint32_t t0 = *(uint32_t*)(char*)a1;
    *(uint32_t*)((char*)a0 + 16) = (uint32_t)(t0);
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 6) = 0;
}

// sub_194e30  (orig 0x194e30, straight)
void sdk_f_194e30(void* a0, void* a1) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1));
    *(uint8_t*)((char*)(a0) + 6) = (uint8_t)k0;
}

// sub_195860  (orig 0x195860, ret_only)
void sdk_f_195860() {}

// sub_195f20  (orig 0x195f20, straight)
void sdk_f_195f20(void* a0) {
    uint32_t k0 = 258;
    uint32_t k1 = 0;
    uint32_t k2 = 0;
    *(uint16_t*)((char*)(a0)) = (uint16_t)k0;
    *(uint32_t*)((char*)(a0) + 8) = 0;
    *(uint8_t*)((char*)(a0) + 20) = (uint8_t)k1;
    *(uint8_t*)((char*)(a0) + 2068) = (uint8_t)k2;
}

// sub_196170  (orig 0x196170, setter)
void sdk_f_196170(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_1963c0  (orig 0x1963c0, getter)
uint32_t sdk_f_1963c0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1963d0  (orig 0x1963d0, ptr_add)
void* sdk_f_1963d0(void* a0) { return (char*)a0 + 20; }

// sub_1963e0  (orig 0x1963e0, ptr_add)
void* sdk_f_1963e0(void* a0) { return (char*)a0 + 2068; }

// sub_1963f0  (orig 0x1963f0, getter)
uint64_t sdk_f_1963f0(void* a0) { return *(uint64_t*)((char*)(a0) + 12); }

// sub_196400  (orig 0x196400, setter)
void sdk_f_196400(void* a0) { *(uint32_t*)((char*)(a0)) = 0; }

// sub_196410  (orig 0x196410, straight)
void sdk_f_196410(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = 1;
    *(uint32_t*)((char*)(a0) + 4) = *(uint32_t*)((char*)(a1));
}

// sub_196430  (orig 0x196430, straight)
void sdk_f_196430(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = 2;
    *(uint64_t*)((char*)(a0) + 4) = *(uint64_t*)((char*)(a1));
}

// sub_196450  (orig 0x196450, straight)
void sdk_f_196450(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = 1;
    *(uint32_t*)((char*)(a0) + 4) = *(uint32_t*)((char*)(a1));
}

// sub_196470  (orig 0x196470, straight)
void sdk_f_196470(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = 2;
    *(uint64_t*)((char*)(a0) + 4) = *(uint64_t*)((char*)(a1));
}

// sub_196490  (orig 0x196490, getter)
uint32_t sdk_f_196490(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_1964a0  (orig 0x1964a0, getter)
uint64_t sdk_f_1964a0(void* a0) { return *(uint64_t*)((char*)(a0) + 4); }

// sub_1964b0  (orig 0x1964b0, getter)
uint32_t sdk_f_1964b0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_196530  (orig 0x196530, straight)
void sdk_f_196530(void* a0) {
    uint16_t k0 = 0;
    uint32_t k1 = 1;
    uint16_t k2 = 0;
    uint16_t k3 = 0;
    uint16_t k4 = 0;
    *(uint16_t*)((char*)(a0) + 6) = 0;
    *(uint32_t*)((char*)(a0) + 2) = (uint32_t)k0;
    *(uint64_t*)((char*)(a0) + 4120L) = 0;
    *(uint16_t*)((char*)(a0)) = (uint16_t)k1;
    *(uint64_t*)((char*)(a0) + 8) = 0;
    *(uint8_t*)((char*)(a0) + 24) = (uint8_t)k2;
    *(uint8_t*)((char*)(a0) + 2072) = (uint8_t)k3;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k4;
}

// sub_1967a0  (orig 0x1967a0, setter)
void sdk_f_1967a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1969f0  (orig 0x1969f0, getter)
uint64_t sdk_f_1969f0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_196a00  (orig 0x196a00, ptr_add)
void* sdk_f_196a00(void* a0) { return (char*)a0 + 24; }

// sub_196a10  (orig 0x196a10, ptr_add)
void* sdk_f_196a10(void* a0) { return (char*)a0 + 2072; }

// sub_196a20  (orig 0x196a20, getter)
uint64_t sdk_f_196a20(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_196a30  (orig 0x196a30, ret_only)
void sdk_f_196a30() {}

// sub_196a40  (orig 0x196a40, straight)
void sdk_f_196a40(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0) + 4120L) = (uint64_t)(a1);
    *(uint8_t*)((char*)(a0) + 5) = (uint8_t)k0;
}

// sub_196a50  (orig 0x196a50, setter-chain)
void sdk_f_196a50(void* a0) { *(uint64_t*)((char*)(a0) + 4120L) = 0; *(uint8_t*)((char*)(a0) + 5) = 0; }

// sub_196a60  (orig 0x196a60, getter)
uint64_t sdk_f_196a60(void* a0) { return *(uint64_t*)((char*)(a0) + 4120L); }

// sub_199c60  (orig 0x199c60, setter-chain-zero)
void sdk_f_199c60(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 168) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 152) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 136) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 120) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 104) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 88) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 72) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_199ca0  (orig 0x199ca0, ret_only)
void sdk_f_199ca0() {}

// sub_199d20  (orig 0x199d20, mov_ret)
uint64_t sdk_f_199d20() { return 0; }

// sub_199d30  (orig 0x199d30, mov_ret)
uint32_t sdk_f_199d30() { return 0; }

// sub_199d40  (orig 0x199d40, mov_ret)
uint64_t sdk_f_199d40() { return 0; }

// sub_199d50  (orig 0x199d50, mov_ret)
uint32_t sdk_f_199d50() { return 0; }

// sub_199d60  (orig 0x199d60, mov_ret)
uint32_t sdk_f_199d60() { return 0; }

// sub_199d70  (orig 0x199d70, mov_ret)
uint32_t sdk_f_199d70() { return 0; }

// sub_199d90  (orig 0x199d90, getter)
uint64_t sdk_f_199d90(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_19ded0  (orig 0x19ded0, getter)
uint32_t sdk_f_19ded0(void* a0) { return *(uint32_t*)((char*)(a0) + 72); }

// sub_19e520  (orig 0x19e520, straight)
uint32_t sdk_f_19e520(void* a0, void* a1, void* a2) {
    *(uint16_t*)((char*)(a1)) = *(uint16_t*)((char*)(a0) + 64);
    *(uint16_t*)((char*)(a2)) = *(uint16_t*)((char*)(a0) + 66);
    *(uint32_t*)((char*)(a0) + 72) = 0;
    return 0;
}

// sub_19e540  (orig 0x19e540, straight)
uint32_t sdk_f_19e540(void* a0, uint64_t a1, uint64_t a2) {
    *(uint16_t*)((char*)(a0) + 68) = (uint16_t)(a1);
    *(uint16_t*)((char*)(a0) + 70) = (uint16_t)(a2);
    *(uint32_t*)((char*)(a0) + 72) = 0;
    return 0;
}

// sub_19e560  (orig 0x19e560, straight)
uint32_t sdk_f_19e560(void* a0, void* a1, void* a2) {
    *(uint16_t*)((char*)(a1)) = *(uint16_t*)((char*)(a0) + 68);
    *(uint16_t*)((char*)(a2)) = *(uint16_t*)((char*)(a0) + 70);
    *(uint32_t*)((char*)(a0) + 72) = 0;
    return 0;
}

// sub_19e580  (orig 0x19e580, getter)
uint32_t sdk_f_19e580(void* a0) { return *(uint32_t*)((char*)(a0) + 76); }

// sub_19e5c0  (orig 0x19e5c0, straight)
uint32_t sdk_f_19e5c0(void* a0) {
    *(uint32_t*)((char*)(a0) + 72) = 432;
    return 432;
}

// sub_19e930  (orig 0x19e930, straight)
uint64_t sdk_f_19e930(void* a0) {
    *(uint32_t*)((char*)(a0) + 72) = 435;
    return 0;
}

// sub_19f1b0  (orig 0x19f1b0, straight)
uint32_t sdk_f_19f1b0(void* a0) {
    *(uint32_t*)((char*)(a0) + 72) = 0;
    return 0;
}

// sub_1a35f0  (orig 0x1a35f0, straight)
uint32_t sdk_f_1a35f0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 128));
    return *(uint32_t*)((char*)(p0) + 16832L);
}

// sub_1a3d70  (orig 0x1a3d70, straight)
uint32_t sdk_f_1a3d70(void* a0) {
    *(uint32_t*)((char*)(a0) + 72) = 0;
    return 0;
}

// sub_1b20f0  (orig 0x1b20f0, copy-chain-store)
void sdk_f_1b20f0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 64);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 8);
    *(uint64_t*)((char*)a0 + 40) = (uint64_t)(t1);
}

// sub_1b3ad0  (orig 0x1b3ad0, const-field-set-store)
void sdk_f_1b3ad0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 64);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 162) = (uint8_t)(t1);
}

// sub_1b3ae0  (orig 0x1b3ae0, copy2)
void sdk_f_1b3ae0(void* a0) { (*(uint8_t *)((char *)(*(void **)((char*)(a0) + 64)) + 162)) = 0; }

// sub_1b3af0  (orig 0x1b3af0, straight)
void sdk_f_1b3af0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 40));
    *(uint64_t*)((char*)(a0) + 40) = (uint64_t)((char*)(p0) - 4);
}

// sub_1b3dd0  (orig 0x1b3dd0, ret_only)
void sdk_f_1b3dd0() {}

// sub_1b54a0  (orig 0x1b54a0, straight)
void sdk_f_1b54a0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 40));
    *(uint64_t*)((char*)(a0) + 40) = (uint64_t)((char*)(p0) - 12);
}

// sub_1b54b0  (orig 0x1b54b0, straight)
void sdk_f_1b54b0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 40));
    *(uint64_t*)((char*)(a0) + 40) = (uint64_t)((char*)(p0) - 12);
}

// sub_1b6140  (orig 0x1b6140, mov_ret)
uint32_t sdk_f_1b6140(uint32_t a0, uint32_t a1) { return a1; }

// sub_1b6150  (orig 0x1b6150, getter-chain)
uint32_t sdk_f_1b6150(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 64);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 24);
    return *(uint32_t*)((char*)(t1) + (uintptr_t)(a1) * 4);
}

// sub_1b6160  (orig 0x1b6160, getter-chain)
uint32_t sdk_f_1b6160(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 64))) + 120); }

// sub_1b6850  (orig 0x1b6850, mov_ret)
uint32_t sdk_f_1b6850(uint32_t a0, uint32_t a1, uint32_t a2) { return a2; }

// sub_1c3e50  (orig 0x1c3e50, straight)
uint8_t sdk_f_1c3e50(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 72);
    return *(uint8_t*)((char*)(a0) + 68);
}

// sub_1c3e60  (orig 0x1c3e60, straight)
uint8_t sdk_f_1c3e60(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 80);
    return *(uint8_t*)((char*)(a0) + 76);
}

// sub_1c3e70  (orig 0x1c3e70, getter)
uint16_t sdk_f_1c3e70(void* a0) { return *(uint16_t*)((char*)(a0) + 112); }

// sub_1c4130  (orig 0x1c4130, getter)
uint64_t sdk_f_1c4130(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1c4160  (orig 0x1c4160, getter)
uint64_t sdk_f_1c4160(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_1c4170  (orig 0x1c4170, getter)
uint16_t sdk_f_1c4170(void* a0) { return *(uint16_t*)((char*)(a0) + 40); }

// sub_1c41b0  (orig 0x1c41b0, getter)
uint16_t sdk_f_1c41b0(void* a0) { return *(uint16_t*)((char*)(a0) + 42); }

// sub_1d1950  (orig 0x1d1950, straight)
uint32_t sdk_f_1d1950(uint64_t unused0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a2)) = 0;
    *(uint32_t*)((char*)(a1) + 72) = 0;
    return 0;
}

// sub_1d2400  (orig 0x1d2400, ret_only)
void sdk_f_1d2400() {}

// sub_1d6050  (orig 0x1d6050, mov_ret)
uint32_t sdk_f_1d6050() { return 0; }

// sub_1db0f0  (orig 0x1db0f0, getter)
uint64_t sdk_f_1db0f0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1db100  (orig 0x1db100, ptr_add)
void* sdk_f_1db100(void* a0) { return (char*)a0 + 24; }

// sub_1db1b0  (orig 0x1db1b0, getter)
uint32_t sdk_f_1db1b0(void* a0) { return *(uint32_t*)((char*)(a0) + 224); }

// sub_1db1c0  (orig 0x1db1c0, ptr_add)
void* sdk_f_1db1c0(void* a0) { return (char*)a0 + 232; }

// sub_1db1d0  (orig 0x1db1d0, getter)
uint8_t sdk_f_1db1d0(void* a0) { return *(uint8_t*)((char*)(a0) + 328); }

// sub_1db1e0  (orig 0x1db1e0, setter)
void sdk_f_1db1e0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_1db250  (orig 0x1db250, getter)
uint64_t sdk_f_1db250(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1db260  (orig 0x1db260, ptr_add)
void* sdk_f_1db260(void* a0) { return (char*)a0 + 24; }

// sub_1db350  (orig 0x1db350, ptr_add)
void* sdk_f_1db350(void* a0) { return (char*)a0 + 64; }

// sub_1db360  (orig 0x1db360, getter)
uint8_t sdk_f_1db360(void* a0) { return *(uint8_t*)((char*)(a0) + 288); }

// sub_1db370  (orig 0x1db370, getter)
uint8_t sdk_f_1db370(void* a0) { return *(uint8_t*)((char*)(a0) + 289); }

// sub_1db3b0  (orig 0x1db3b0, getter)
uint8_t sdk_f_1db3b0(void* a0) { return *(uint8_t*)((char*)(a0) + 296); }

// sub_1db3c0  (orig 0x1db3c0, setter-chain-zero)
void sdk_f_1db3c0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 240) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 224) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 208) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 192) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 128) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 112) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
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
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1db410  (orig 0x1db410, getter)
uint64_t sdk_f_1db410(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_1db420  (orig 0x1db420, getter)
uint32_t sdk_f_1db420(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1db430  (orig 0x1db430, ptr_add)
void* sdk_f_1db430(void* a0) { return (char*)a0 + 16; }

// sub_1db440  (orig 0x1db440, ptr_add)
void* sdk_f_1db440(void* a0) { return (char*)a0 + 32; }

// sub_1db450  (orig 0x1db450, getter)
uint8_t sdk_f_1db450(void* a0) { return *(uint8_t*)((char*)(a0) + 200); }

// sub_1db470  (orig 0x1db470, getter)
uint64_t sdk_f_1db470(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1db480  (orig 0x1db480, ptr_add)
void* sdk_f_1db480(void* a0) { return (char*)a0 + 1040; }

// sub_1db490  (orig 0x1db490, getter)
uint32_t sdk_f_1db490(void* a0) { return *(uint32_t*)((char*)(a0) + 1208); }

// sub_1db4a0  (orig 0x1db4a0, ptr_add)
void* sdk_f_1db4a0(void* a0) { return (char*)a0 + 1216; }

// sub_1db4b0  (orig 0x1db4b0, ptr_add)
void* sdk_f_1db4b0(void* a0) { return (char*)a0 + 1320; }

// sub_1db4c0  (orig 0x1db4c0, ptr_add)
void* sdk_f_1db4c0(void* a0) { return (char*)a0 + 1320; }

// sub_1db4d0  (orig 0x1db4d0, ptr_add)
void* sdk_f_1db4d0(void* a0) { return (char*)a0 + 1352; }

// sub_1db530  (orig 0x1db530, ptr_add)
void* sdk_f_1db530(void* a0) { return (char*)a0 + 16; }

// sub_1db540  (orig 0x1db540, getter)
uint8_t sdk_f_1db540(void* a0) { return *(uint8_t*)((char*)(a0) + 1312); }

// sub_1db560  (orig 0x1db560, getter)
uint64_t sdk_f_1db560(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1db570  (orig 0x1db570, getter)
uint64_t sdk_f_1db570(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_1db580  (orig 0x1db580, ptr_add)
void* sdk_f_1db580(void* a0) { return (char*)a0 + 32; }

// sub_1db660  (orig 0x1db660, getter)
uint32_t sdk_f_1db660(void* a0) { return *(uint32_t*)((char*)(a0) + 236); }

// sub_1db670  (orig 0x1db670, getter)
uint32_t sdk_f_1db670(void* a0) { return *(uint32_t*)((char*)(a0) + 240); }

// sub_1db680  (orig 0x1db680, ptr_add)
void* sdk_f_1db680(void* a0) { return (char*)a0 + 248; }

// sub_1db690  (orig 0x1db690, ptr_add)
void* sdk_f_1db690(void* a0) { return (char*)a0 + 352; }

// sub_1db6a0  (orig 0x1db6a0, ptr_add)
void* sdk_f_1db6a0(void* a0) { return (char*)a0 + 352; }

// sub_1db6b0  (orig 0x1db6b0, ptr_add)
void* sdk_f_1db6b0(void* a0) { return (char*)a0 + 384; }

// sub_1db740  (orig 0x1db740, getter)
uint8_t sdk_f_1db740(void* a0) { return *(uint8_t*)((char*)(a0) + 345); }

// sub_1db750  (orig 0x1db750, setter-chain-zero)
void sdk_f_1db750(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 240) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 224) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 208) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 192) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 128) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 112) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
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
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1db7a0  (orig 0x1db7a0, getter)
uint64_t sdk_f_1db7a0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_1db7b0  (orig 0x1db7b0, ptr_add)
void* sdk_f_1db7b0(void* a0) { return (char*)a0 + 8; }

// sub_1db7c0  (orig 0x1db7c0, ptr_add)
void* sdk_f_1db7c0(void* a0) { return (char*)a0 + 40; }

// sub_1db800  (orig 0x1db800, getter)
uint8_t sdk_f_1db800(void* a0) { return *(uint8_t*)((char*)(a0) + 56); }

// sub_1dbbd0  (orig 0x1dbbd0, setter-chain-zero)
void sdk_f_1dbbd0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 240) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 224) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 208) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 192) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 128) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 112) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
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
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1dbc20  (orig 0x1dbc20, getter)
uint64_t sdk_f_1dbc20(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_1dbc30  (orig 0x1dbc30, ptr_add)
void* sdk_f_1dbc30(void* a0) { return (char*)a0 + 8; }

// sub_1dbc40  (orig 0x1dbc40, getter)
uint8_t sdk_f_1dbc40(void* a0) { return *(uint8_t*)((char*)(a0) + 176); }

// sub_1dbc50  (orig 0x1dbc50, getter)
uint8_t sdk_f_1dbc50(void* a0) { return *(uint8_t*)((char*)(a0) + 177); }

// sub_1dbc60  (orig 0x1dbc60, getter)
uint8_t sdk_f_1dbc60(void* a0) { return *(uint8_t*)((char*)(a0) + 184); }

// sub_1dbc70  (orig 0x1dbc70, setter-chain-zero)
void sdk_f_1dbc70(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 208) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 192) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 128) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 112) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
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
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1dbd30  (orig 0x1dbd30, setter-chain-zero)
void sdk_f_1dbd30(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 208) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 24) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 192) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 128) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 112) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 80) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 64) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
}

// sub_1dbea0  (orig 0x1dbea0, straight)
void sdk_f_1dbea0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 24) = (uint8_t)k0;
}

// sub_1dbeb0  (orig 0x1dbeb0, straight)
void sdk_f_1dbeb0(void* a0) {
    uint32_t k0 = 2;
    *(uint8_t*)((char*)(a0) + 24) = (uint8_t)k0;
}

// sub_1dbf70  (orig 0x1dbf70, setter-chain-zero)
void sdk_f_1dbf70(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 208) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 192) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 128) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 112) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
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
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1dbfb0  (orig 0x1dbfb0, getter)
uint32_t sdk_f_1dbfb0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_1dbfc0  (orig 0x1dbfc0, ret_only)
void sdk_f_1dbfc0() {}

// sub_1dbfd0  (orig 0x1dbfd0, ptr_add)
void* sdk_f_1dbfd0(void* a0) { return (char*)a0 + 16; }

// sub_1dbfe0  (orig 0x1dbfe0, ptr_add)
void* sdk_f_1dbfe0(void* a0) { return (char*)a0 + 16; }

// sub_1dc070  (orig 0x1dc070, getter)
uint8_t sdk_f_1dc070(void* a0) { return *(uint8_t*)((char*)(a0) + 28); }

// sub_1dc080  (orig 0x1dc080, setter-chain-zero)
void sdk_f_1dc080(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 208) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 192) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 128) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 112) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
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
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1dc0c0  (orig 0x1dc0c0, getter)
uint32_t sdk_f_1dc0c0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_1dc0d0  (orig 0x1dc0d0, ret_only)
void sdk_f_1dc0d0() {}

// sub_1dc0e0  (orig 0x1dc0e0, ptr_add)
void* sdk_f_1dc0e0(void* a0) { return (char*)a0 + 16; }

// sub_1dc0f0  (orig 0x1dc0f0, ptr_add)
void* sdk_f_1dc0f0(void* a0) { return (char*)a0 + 16; }

// sub_1dc140  (orig 0x1dc140, setter-chain-zero)
void sdk_f_1dc140(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 240) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 224) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 208) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 192) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 128) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 112) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
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
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1dc190  (orig 0x1dc190, getter)
uint64_t sdk_f_1dc190(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_1dc1a0  (orig 0x1dc1a0, ptr_add)
void* sdk_f_1dc1a0(void* a0) { return (char*)a0 + 8; }

// sub_1dc250  (orig 0x1dc250, getter)
uint8_t sdk_f_1dc250(void* a0) { return *(uint8_t*)((char*)(a0) + 208); }

// sub_1dc270  (orig 0x1dc270, getter)
uint64_t sdk_f_1dc270(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_1dc280  (orig 0x1dc280, ptr_add)
void* sdk_f_1dc280(void* a0) { return (char*)a0 + 8; }

// sub_1dc330  (orig 0x1dc330, straight-line)
uint64_t sdk_f_1dc330(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(40))))))) + (208); }

// sub_1dc340  (orig 0x1dc340, getter)
uint8_t sdk_f_1dc340(void* a0) { return *(uint8_t*)((char*)(a0) + 1008); }

// sub_1dc410  (orig 0x1dc410, getter)
uint32_t sdk_f_1dc410(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1dc4f0  (orig 0x1dc4f0, getter)
uint8_t sdk_f_1dc4f0(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_1dc5d0  (orig 0x1dc5d0, ptr_add)
void* sdk_f_1dc5d0(void* a0) { return (char*)a0 + 32; }

// sub_1dc5e0  (orig 0x1dc5e0, ptr_add)
void* sdk_f_1dc5e0(void* a0) { return (char*)a0 + 64; }

// sub_1dc6b0  (orig 0x1dc6b0, ptr_add)
void* sdk_f_1dc6b0(void* a0) { return (char*)a0 + 72; }

// sub_1dc6c0  (orig 0x1dc6c0, getter)
uint32_t sdk_f_1dc6c0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1dc860  (orig 0x1dc860, setter-chain-zero)
void sdk_f_1dc860(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1dc930  (orig 0x1dc930, getter)
uint8_t sdk_f_1dc930(void* a0) { return *(uint8_t*)((char*)(a0) + 25); }

// sub_1dca20  (orig 0x1dca20, getter)
uint8_t sdk_f_1dca20(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_1dcb00  (orig 0x1dcb00, getter)
uint8_t sdk_f_1dcb00(void* a0) { return *(uint8_t*)((char*)(a0) + 26); }

// sub_1dcf90  (orig 0x1dcf90, getter)
uint64_t sdk_f_1dcf90(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_1dcfa0  (orig 0x1dcfa0, getter)
uint32_t sdk_f_1dcfa0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1dcfb0  (orig 0x1dcfb0, ptr_add)
void* sdk_f_1dcfb0(void* a0) { return (char*)a0 + 16; }

// sub_1dcfc0  (orig 0x1dcfc0, getter)
uint8_t sdk_f_1dcfc0(void* a0) { return *(uint8_t*)((char*)(a0) + 912); }

// sub_1debb0  (orig 0x1debb0, ptr_add)
void* sdk_f_1debb0(void* a0) { return (char*)a0 + 32; }

// sub_1dedb0  (orig 0x1dedb0, ptr_add)
void* sdk_f_1dedb0(void* a0) { return (char*)a0 + 8; }

// sub_1dedc0  (orig 0x1dedc0, straight)
void* sdk_f_1dedc0(void* a0) { return (char*)(a0) - 24; }

// sub_1deef0  (orig 0x1deef0, ptr_add)
void* sdk_f_1deef0(void* a0) { return (char*)a0 + 32; }

// sub_1dfc40  (orig 0x1dfc40, ptr_add)
void* sdk_f_1dfc40(void* a0) { return (char*)a0 + 8; }

// sub_1dfc50  (orig 0x1dfc50, straight)
void* sdk_f_1dfc50(void* a0) { return (char*)(a0) - 24; }

// sub_1e49b0  (orig 0x1e49b0, ptr_add)
void* sdk_f_1e49b0(void* a0) { return (char*)a0 + 32; }

// sub_1e4a20  (orig 0x1e4a20, ptr_add)
void* sdk_f_1e4a20(void* a0) { return (char*)a0 + 8; }

// sub_1e4a30  (orig 0x1e4a30, straight)
void* sdk_f_1e4a30(void* a0) { return (char*)(a0) - 24; }

// sub_1e4b60  (orig 0x1e4b60, ptr_add)
void* sdk_f_1e4b60(void* a0) { return (char*)a0 + 32; }

// sub_1e4b70  (orig 0x1e4b70, ptr_add)
void* sdk_f_1e4b70(void* a0) { return (char*)a0 + 8; }

// sub_1e4b80  (orig 0x1e4b80, straight)
void* sdk_f_1e4b80(void* a0) { return (char*)(a0) - 24; }

// sub_1e6670  (orig 0x1e6670, mov_ret)
uint32_t sdk_f_1e6670() { return 1; }

// sub_1e6680  (orig 0x1e6680, compare)
bool sdk_f_1e6680(uint64_t a0) { return (uint64_t)(a0) == (uint64_t)(0); }

// sub_1e6890  (orig 0x1e6890, mov_ret)
uint32_t sdk_f_1e6890() { return 2; }

// sub_1e6a90  (orig 0x1e6a90, straight)
uint64_t sdk_f_1e6a90(uint64_t a0) { return (((uint64_t)a0)) << (2); }

// sub_1e6aa0  (orig 0x1e6aa0, straight)
uint64_t sdk_f_1e6aa0(uint64_t a0) { return (((uint64_t)a0)) << (2); }

// sub_1e6d80  (orig 0x1e6d80, setter-chain-zero)
void sdk_f_1e6d80(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 40) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 16) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 96) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 72) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 176) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 152) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 136) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a0 + 232) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 208) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 80) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 216) = (struct u64x2){ 0, 0 };
}

// sub_1e8540  (orig 0x1e8540, straight)
uint64_t sdk_f_1e8540(void* a0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 120);
    *(uint64_t*)((char*)(a2)) = *(uint64_t*)((char*)(a0) + 256);
    return 0;
}

// sub_1e9d10  (orig 0x1e9d10, setter-chain-zero)
void sdk_f_1e9d10(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 24) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
}

// sub_1e9d70  (orig 0x1e9d70, setter-chain-zero)
void sdk_f_1e9d70(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 24) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
}

// sub_1e9d80  (orig 0x1e9d80, getter)
uint8_t sdk_f_1e9d80(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_1ec370  (orig 0x1ec370, ret_only)
void sdk_f_1ec370() {}

// sub_1ec6c0  (orig 0x1ec6c0, getter)
uint64_t sdk_f_1ec6c0(void* a0) { return *(uint64_t*)((char*)(a0) + 280); }

// sub_1ec6d0  (orig 0x1ec6d0, ptr_add)
void* sdk_f_1ec6d0(void* a0) { return (char*)a0 + 8; }

// sub_1ed0b0  (orig 0x1ed0b0, const-ret)
uint32_t sdk_f_1ed0b0() { return 3258370u; }

// sub_1ed0c0  (orig 0x1ed0c0, const-ret)
uint32_t sdk_f_1ed0c0() { return 3258370u; }

// sub_1ed0d0  (orig 0x1ed0d0, const-ret)
uint32_t sdk_f_1ed0d0() { return 3258370u; }

// sub_1ed0e0  (orig 0x1ed0e0, const-ret)
uint32_t sdk_f_1ed0e0() { return 3258370u; }

// sub_1ed0f0  (orig 0x1ed0f0, const-ret)
uint32_t sdk_f_1ed0f0() { return 3258370u; }

// sub_1ed100  (orig 0x1ed100, const-ret)
uint32_t sdk_f_1ed100() { return 3258370u; }

// sub_1ed110  (orig 0x1ed110, const-ret)
uint32_t sdk_f_1ed110() { return 3258370u; }

// sub_1ed120  (orig 0x1ed120, const-ret)
uint32_t sdk_f_1ed120() { return 3258370u; }

// sub_1ed130  (orig 0x1ed130, mov_ret)
uint64_t sdk_f_1ed130() { return 0; }

// sub_1ed140  (orig 0x1ed140, const-ret)
uint32_t sdk_f_1ed140() { return 3258882u; }

// sub_1ed150  (orig 0x1ed150, mov_ret)
uint64_t sdk_f_1ed150() { return 0; }

// sub_1ed160  (orig 0x1ed160, const-ret)
uint32_t sdk_f_1ed160() { return 3259394u; }

// sub_1ed170  (orig 0x1ed170, const-ret)
uint32_t sdk_f_1ed170() { return 3259394u; }

// sub_1ed4a0  (orig 0x1ed4a0, const-ret)
uint32_t sdk_f_1ed4a0() { return 1536514u; }

// sub_1ed4b0  (orig 0x1ed4b0, const-ret)
uint32_t sdk_f_1ed4b0() { return 1536514u; }

// sub_1ed4c0  (orig 0x1ed4c0, const-ret)
uint32_t sdk_f_1ed4c0() { return 1536514u; }

// sub_1ed7f0  (orig 0x1ed7f0, mov_ret)
uint64_t sdk_f_1ed7f0() { return 0; }

// sub_1ed800  (orig 0x1ed800, const-ret)
uint32_t sdk_f_1ed800() { return 3227650u; }

// sub_1ed810  (orig 0x1ed810, straight)
uint64_t sdk_f_1ed810(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0) + 16);
    return 0;
}

// sub_1ed880  (orig 0x1ed880, ret_only)
void sdk_f_1ed880() {}

// sub_1ed960  (orig 0x1ed960, const-ret)
uint32_t sdk_f_1ed960() { return 3175938u; }

// sub_1ed970  (orig 0x1ed970, mov_ret)
uint64_t sdk_f_1ed970() { return 0; }

// sub_1ed980  (orig 0x1ed980, const-ret)
uint32_t sdk_f_1ed980() { return 3175938u; }

// sub_1eda30  (orig 0x1eda30, ret_only)
void sdk_f_1eda30() {}

// sub_1edac0  (orig 0x1edac0, ret_only)
void sdk_f_1edac0() {}

// sub_1ee5c0  (orig 0x1ee5c0, getter)
uint32_t sdk_f_1ee5c0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_1eeb90  (orig 0x1eeb90, getter)
uint32_t sdk_f_1eeb90(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1f0270  (orig 0x1f0270, compare)
bool sdk_f_1f0270(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) == (uint64_t)(64); }

// sub_1f4310  (orig 0x1f4310, ret_only)
void sdk_f_1f4310() {}

// sub_1f5ae0  (orig 0x1f5ae0, ret_only)
void sdk_f_1f5ae0() {}

// sub_1f7b20  (orig 0x1f7b20, setter)
void sdk_f_1f7b20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_1f7bb0  (orig 0x1f7bb0, ret_only)
void sdk_f_1f7bb0() {}

// sub_1f8ec0  (orig 0x1f8ec0, ret_only)
void sdk_f_1f8ec0() {}

// sub_1f8f60  (orig 0x1f8f60, ptr_add)
void* sdk_f_1f8f60(void* a0) { return (char*)a0 + 32; }

// sub_1fb1e0  (orig 0x1fb1e0, ptr_add)
void* sdk_f_1fb1e0(void* a0) { return (char*)a0 + 8; }

// sub_1fb1f0  (orig 0x1fb1f0, straight)
void* sdk_f_1fb1f0(void* a0) { return (char*)(a0) - 24; }

// sub_1fc120  (orig 0x1fc120, ptr_add)
void* sdk_f_1fc120(void* a0) { return (char*)a0 + 32; }

// sub_1fc560  (orig 0x1fc560, ptr_add)
void* sdk_f_1fc560(void* a0) { return (char*)a0 + 8; }

// sub_1fc570  (orig 0x1fc570, straight)
void* sdk_f_1fc570(void* a0) { return (char*)(a0) - 24; }

// sub_1fd1c0  (orig 0x1fd1c0, ptr_add)
void* sdk_f_1fd1c0(void* a0) { return (char*)a0 + 32; }

// sub_1fd2e0  (orig 0x1fd2e0, ptr_add)
void* sdk_f_1fd2e0(void* a0) { return (char*)a0 + 8; }

// sub_1fd2f0  (orig 0x1fd2f0, straight)
void* sdk_f_1fd2f0(void* a0) { return (char*)(a0) - 24; }

// sub_1fde10  (orig 0x1fde10, ptr_add)
void* sdk_f_1fde10(void* a0) { return (char*)a0 + 32; }

// sub_1fde70  (orig 0x1fde70, ptr_add)
void* sdk_f_1fde70(void* a0) { return (char*)a0 + 8; }

// sub_1fde80  (orig 0x1fde80, straight)
void* sdk_f_1fde80(void* a0) { return (char*)(a0) - 24; }

// sub_1ff0c0  (orig 0x1ff0c0, ptr_add)
void* sdk_f_1ff0c0(void* a0) { return (char*)a0 + 32; }

// sub_1ff1c0  (orig 0x1ff1c0, ptr_add)
void* sdk_f_1ff1c0(void* a0) { return (char*)a0 + 8; }

// sub_1ff1d0  (orig 0x1ff1d0, straight)
void* sdk_f_1ff1d0(void* a0) { return (char*)(a0) - 24; }

// sub_201370  (orig 0x201370, ptr_add)
void* sdk_f_201370(void* a0) { return (char*)a0 + 32; }

// sub_2013b0  (orig 0x2013b0, ptr_add)
void* sdk_f_2013b0(void* a0) { return (char*)a0 + 8; }

// sub_2013c0  (orig 0x2013c0, straight)
void* sdk_f_2013c0(void* a0) { return (char*)(a0) - 24; }

// sub_2021d0  (orig 0x2021d0, ptr_add)
void* sdk_f_2021d0(void* a0) { return (char*)a0 + 32; }

// sub_2023b0  (orig 0x2023b0, ptr_add)
void* sdk_f_2023b0(void* a0) { return (char*)a0 + 8; }

// sub_2023c0  (orig 0x2023c0, straight)
void* sdk_f_2023c0(void* a0) { return (char*)(a0) - 24; }

// sub_202730  (orig 0x202730, ptr_add)
void* sdk_f_202730(void* a0) { return (char*)a0 + 32; }

// sub_2027f0  (orig 0x2027f0, ptr_add)
void* sdk_f_2027f0(void* a0) { return (char*)a0 + 8; }

// sub_202800  (orig 0x202800, straight)
void* sdk_f_202800(void* a0) { return (char*)(a0) - 24; }

// sub_202e20  (orig 0x202e20, ptr_add)
void* sdk_f_202e20(void* a0) { return (char*)a0 + 32; }

// sub_202ed0  (orig 0x202ed0, ptr_add)
void* sdk_f_202ed0(void* a0) { return (char*)a0 + 8; }

// sub_202ee0  (orig 0x202ee0, straight)
void* sdk_f_202ee0(void* a0) { return (char*)(a0) - 24; }

// sub_203050  (orig 0x203050, ptr_add)
void* sdk_f_203050(void* a0) { return (char*)a0 + 32; }

// sub_203650  (orig 0x203650, ptr_add)
void* sdk_f_203650(void* a0) { return (char*)a0 + 8; }

// sub_203660  (orig 0x203660, straight)
void* sdk_f_203660(void* a0) { return (char*)(a0) - 24; }

// sub_2037d0  (orig 0x2037d0, ptr_add)
void* sdk_f_2037d0(void* a0) { return (char*)a0 + 32; }

// sub_203ac0  (orig 0x203ac0, ptr_add)
void* sdk_f_203ac0(void* a0) { return (char*)a0 + 8; }

// sub_203ad0  (orig 0x203ad0, straight)
void* sdk_f_203ad0(void* a0) { return (char*)(a0) - 24; }

// sub_203d90  (orig 0x203d90, ptr_add)
void* sdk_f_203d90(void* a0) { return (char*)a0 + 32; }

// sub_203e00  (orig 0x203e00, ptr_add)
void* sdk_f_203e00(void* a0) { return (char*)a0 + 8; }

// sub_203e10  (orig 0x203e10, straight)
void* sdk_f_203e10(void* a0) { return (char*)(a0) - 24; }

// sub_2040d0  (orig 0x2040d0, ptr_add)
void* sdk_f_2040d0(void* a0) { return (char*)a0 + 32; }

// sub_204130  (orig 0x204130, ptr_add)
void* sdk_f_204130(void* a0) { return (char*)a0 + 8; }

// sub_204140  (orig 0x204140, straight)
void* sdk_f_204140(void* a0) { return (char*)(a0) - 24; }

// sub_205210  (orig 0x205210, ptr_add)
void* sdk_f_205210(void* a0) { return (char*)a0 + 32; }

// sub_205470  (orig 0x205470, ptr_add)
void* sdk_f_205470(void* a0) { return (char*)a0 + 8; }

// sub_205480  (orig 0x205480, straight)
void* sdk_f_205480(void* a0) { return (char*)(a0) - 24; }

// sub_205750  (orig 0x205750, ptr_add)
void* sdk_f_205750(void* a0) { return (char*)a0 + 32; }

// sub_205790  (orig 0x205790, ptr_add)
void* sdk_f_205790(void* a0) { return (char*)a0 + 8; }

// sub_2057a0  (orig 0x2057a0, straight)
void* sdk_f_2057a0(void* a0) { return (char*)(a0) - 24; }

// sub_205f20  (orig 0x205f20, ptr_add)
void* sdk_f_205f20(void* a0) { return (char*)a0 + 32; }

// sub_205f30  (orig 0x205f30, ptr_add)
void* sdk_f_205f30(void* a0) { return (char*)a0 + 8; }

// sub_205f40  (orig 0x205f40, straight)
void* sdk_f_205f40(void* a0) { return (char*)(a0) - 24; }

// sub_2064c0  (orig 0x2064c0, ptr_add)
void* sdk_f_2064c0(void* a0) { return (char*)a0 + 32; }

// sub_206bc0  (orig 0x206bc0, ptr_add)
void* sdk_f_206bc0(void* a0) { return (char*)a0 + 8; }

// sub_206bd0  (orig 0x206bd0, straight)
void* sdk_f_206bd0(void* a0) { return (char*)(a0) - 24; }

// sub_208210  (orig 0x208210, ptr_add)
void* sdk_f_208210(void* a0) { return (char*)a0 + 32; }

// sub_208240  (orig 0x208240, ptr_add)
void* sdk_f_208240(void* a0) { return (char*)a0 + 8; }

// sub_208250  (orig 0x208250, straight)
void* sdk_f_208250(void* a0) { return (char*)(a0) - 24; }

// sub_20a680  (orig 0x20a680, ptr_add)
void* sdk_f_20a680(void* a0) { return (char*)a0 + 32; }

// sub_20a700  (orig 0x20a700, ptr_add)
void* sdk_f_20a700(void* a0) { return (char*)a0 + 8; }

// sub_20a710  (orig 0x20a710, straight)
void* sdk_f_20a710(void* a0) { return (char*)(a0) - 24; }

// sub_20afa0  (orig 0x20afa0, ptr_add)
void* sdk_f_20afa0(void* a0) { return (char*)a0 + 32; }

// sub_20b0a0  (orig 0x20b0a0, ptr_add)
void* sdk_f_20b0a0(void* a0) { return (char*)a0 + 8; }

// sub_20b0b0  (orig 0x20b0b0, straight)
void* sdk_f_20b0b0(void* a0) { return (char*)(a0) - 24; }

// sub_20b3f0  (orig 0x20b3f0, ptr_add)
void* sdk_f_20b3f0(void* a0) { return (char*)a0 + 32; }

// sub_20b4c0  (orig 0x20b4c0, ptr_add)
void* sdk_f_20b4c0(void* a0) { return (char*)a0 + 8; }

// sub_20b4d0  (orig 0x20b4d0, straight)
void* sdk_f_20b4d0(void* a0) { return (char*)(a0) - 24; }

// sub_20cba0  (orig 0x20cba0, const-ret)
uint32_t sdk_f_20cba0() { return 1536514u; }

// sub_20cbb0  (orig 0x20cbb0, const-ret)
uint32_t sdk_f_20cbb0() { return 1536514u; }

// sub_20fea0  (orig 0x20fea0, ret_only)
void sdk_f_20fea0() {}

// sub_210120  (orig 0x210120, strlit-ret)
const char *sdk_f_210120() { static char g_f_210120[1]; __asm__ volatile("" ::: "memory"); return g_f_210120; }

// sub_210230  (orig 0x210230, compare)
bool sdk_f_210230(uint64_t a0, uint64_t a1) { return (uint64_t)(a0) == (uint64_t)(a1); }

// sub_21d580  (orig 0x21d580, ptr_add)
void* sdk_f_21d580(void* a0) { return (char*)a0 + 8; }

// sub_21d890  (orig 0x21d890, ptr_add)
void* sdk_f_21d890(void* a0) { return (char*)a0 + 8; }

// sub_2236d0  (orig 0x2236d0, straight)
void* sdk_f_2236d0(void* a0, int32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 8));
    return ((char *)(char*)(p0) + (uintptr_t)(((int32_t)a1)) * 16);
}

// sub_2236e0  (orig 0x2236e0, straight)
uint64_t sdk_f_2236e0(void* a0, uint64_t a1) { return ((((uint64_t)a1)) - (*(uint64_t*)((char*)(a0)))) >> (14); }

// sub_223e70  (orig 0x223e70, straight)
uint64_t sdk_f_223e70(void* a0, uint64_t a1) { return ((((uint64_t)a1)) - (*(uint64_t*)((char*)(a0) + 8))) >> (4); }

// sub_224d70  (orig 0x224d70, setter)
void sdk_f_224d70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 64) = a1; }

// sub_229700  (orig 0x229700, pair-ret)
struct pair16_f_229700_ { uint64_t f[2]; }; pair16_f_229700_ sdk_f_229700(void* a0) { return *(struct pair16_f_229700_ *)((char*)(a0)); }

// sub_22a710  (orig 0x22a710, ret_only)
void sdk_f_22a710() {}

// sub_22c4c0  (orig 0x22c4c0, const-ret)
uint32_t sdk_f_22c4c0() { return 545482u; }

// sub_22c4d0  (orig 0x22c4d0, const-ret)
uint32_t sdk_f_22c4d0() { return 545482u; }

// sub_22d2a0  (orig 0x22d2a0, getter)
uint32_t sdk_f_22d2a0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_230f80  (orig 0x230f80, const-ret)
uint32_t sdk_f_230f80() { return 139466u; }

// sub_230f90  (orig 0x230f90, const-ret)
uint32_t sdk_f_230f90() { return 139978u; }

// sub_230fa0  (orig 0x230fa0, const-ret)
uint32_t sdk_f_230fa0() { return 142026u; }

// sub_2310d0  (orig 0x2310d0, compare)
bool sdk_f_2310d0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 136)) != (uint64_t)(0); }

// sub_2317b0  (orig 0x2317b0, compare)
bool sdk_f_2317b0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 136)) != (uint64_t)(0); }

// sub_231850  (orig 0x231850, mov_ret)
uint32_t sdk_f_231850() { return 52426; }

// sub_231860  (orig 0x231860, const-ret)
uint32_t sdk_f_231860() { return 139978u; }

// sub_231870  (orig 0x231870, const-ret)
uint32_t sdk_f_231870() { return 142026u; }

// sub_239fb0  (orig 0x239fb0, setter)
void sdk_f_239fb0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 48) = a1; }

// sub_239fc0  (orig 0x239fc0, setter)
void sdk_f_239fc0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_23a7c0  (orig 0x23a7c0, getter)
uint8_t sdk_f_23a7c0(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_23a8f0  (orig 0x23a8f0, getter)
uint64_t sdk_f_23a8f0(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_23a910  (orig 0x23a910, getter)
uint32_t sdk_f_23a910(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_23a930  (orig 0x23a930, getter)
uint8_t sdk_f_23a930(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_23a940  (orig 0x23a940, getter)
uint8_t sdk_f_23a940(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_23a950  (orig 0x23a950, getter)
uint8_t sdk_f_23a950(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_23b1c0  (orig 0x23b1c0, compare)
bool sdk_f_23b1c0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 136)) != (uint64_t)(0); }

// sub_23b260  (orig 0x23b260, mov_ret)
uint32_t sdk_f_23b260() { return 52426; }

// sub_23b270  (orig 0x23b270, mov_ret)
uint32_t sdk_f_23b270() { return 52938; }

// sub_23b280  (orig 0x23b280, mov_ret)
uint32_t sdk_f_23b280() { return 54474; }

// sub_242870  (orig 0x242870, getter)
uint32_t sdk_f_242870(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_242880  (orig 0x242880, getter)
uint8_t sdk_f_242880(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_242890  (orig 0x242890, getter)
uint8_t sdk_f_242890(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_245900  (orig 0x245900, setter-chain-zero)
void sdk_f_245900(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_245940  (orig 0x245940, straight)
uint32_t sdk_f_245940(void* a0) { return (*(uint32_t*)((char*)(a0) + 12)) & (1); }

// sub_2459a0  (orig 0x2459a0, straight)
uint8_t sdk_f_2459a0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 12)) >> (1)) & (1); }

// sub_2459e0  (orig 0x2459e0, straight)
uint8_t sdk_f_2459e0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 12)) >> (2)) & (1); }

// sub_245a60  (orig 0x245a60, getter)
uint32_t sdk_f_245a60(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_246c20  (orig 0x246c20, mov_ret)
uint32_t sdk_f_246c20() { return 0; }

// sub_2473f0  (orig 0x2473f0, mov_ret)
uint32_t sdk_f_2473f0() { return 0; }

// sub_247400  (orig 0x247400, mov_ret)
uint32_t sdk_f_247400() { return 4; }

// sub_247410  (orig 0x247410, ret_only)
void sdk_f_247410() {}

// sub_247420  (orig 0x247420, ret_only)
void sdk_f_247420() {}

// sub_24c270  (orig 0x24c270, ret_only)
void sdk_f_24c270() {}

// sub_24ca50  (orig 0x24ca50, getter)
uint32_t sdk_f_24ca50(void* a0) { return *(uint32_t*)((char*)(a0) + 60); }

// sub_24d100  (orig 0x24d100, getter)
uint64_t sdk_f_24d100(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_24d760  (orig 0x24d760, getter)
uint64_t sdk_f_24d760(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_24d8b0  (orig 0x24d8b0, setter)
void sdk_f_24d8b0(void* a0) { *(uint8_t*)((char*)(a0) + 57) = 0; }

// sub_24d8c0  (orig 0x24d8c0, getter)
uint8_t sdk_f_24d8c0(void* a0) { return *(uint8_t*)((char*)(a0) + 57); }

// sub_24d9d0  (orig 0x24d9d0, getter)
uint8_t sdk_f_24d9d0(void* a0) { return *(uint8_t*)((char*)(a0) + 58); }

// sub_24da50  (orig 0x24da50, getter)
uint32_t sdk_f_24da50(void* a0) { return *(uint32_t*)((char*)(a0) + 60); }

// sub_24dab0  (orig 0x24dab0, getter)
uint8_t sdk_f_24dab0(void* a0) { return *(uint8_t*)((char*)(a0) + 59); }

// sub_24db50  (orig 0x24db50, getter)
uint32_t sdk_f_24db50(void* a0) { return *(uint32_t*)((char*)(a0) + 68); }

// sub_24dba0  (orig 0x24dba0, getter)
uint32_t sdk_f_24dba0(void* a0) { return *(uint32_t*)((char*)(a0) + 72); }

// sub_24dbf0  (orig 0x24dbf0, getter)
uint32_t sdk_f_24dbf0(void* a0) { return *(uint32_t*)((char*)(a0) + 76); }

// sub_24e150  (orig 0x24e150, ret_only)
void sdk_f_24e150() {}

// sub_251890  (orig 0x251890, ptr_add)
void* sdk_f_251890(void* a0) { return (char*)a0 + 16; }

// sub_252490  (orig 0x252490, ptr_add)
void* sdk_f_252490(void* a0) { return (char*)a0 + 8; }

// sub_2524a0  (orig 0x2524a0, straight)
void* sdk_f_2524a0(void* a0) { return (char*)(a0) - 8; }

// sub_2546b0  (orig 0x2546b0, ptr_add)
void* sdk_f_2546b0(void* a0) { return (char*)a0 + 16; }

// sub_255b90  (orig 0x255b90, ptr_add)
void* sdk_f_255b90(void* a0) { return (char*)a0 + 8; }

// sub_255ba0  (orig 0x255ba0, straight)
void* sdk_f_255ba0(void* a0) { return (char*)(a0) - 8; }

// sub_255d60  (orig 0x255d60, ptr_add)
void* sdk_f_255d60(void* a0) { return (char*)a0 + 16; }

// sub_255d90  (orig 0x255d90, ptr_add)
void* sdk_f_255d90(void* a0) { return (char*)a0 + 8; }

// sub_255da0  (orig 0x255da0, straight)
void* sdk_f_255da0(void* a0) { return (char*)(a0) - 8; }

// sub_2572b0  (orig 0x2572b0, ptr_add)
void* sdk_f_2572b0(void* a0) { return (char*)a0 + 16; }

// sub_2572f0  (orig 0x2572f0, ptr_add)
void* sdk_f_2572f0(void* a0) { return (char*)a0 + 8; }

// sub_257300  (orig 0x257300, straight)
void* sdk_f_257300(void* a0) { return (char*)(a0) - 8; }

// sub_258600  (orig 0x258600, ptr_add)
void* sdk_f_258600(void* a0) { return (char*)a0 + 16; }

// sub_259670  (orig 0x259670, ptr_add)
void* sdk_f_259670(void* a0) { return (char*)a0 + 8; }

// sub_259680  (orig 0x259680, straight)
void* sdk_f_259680(void* a0) { return (char*)(a0) - 8; }

// sub_25a8f0  (orig 0x25a8f0, ptr_add)
void* sdk_f_25a8f0(void* a0) { return (char*)a0 + 16; }

// sub_25a970  (orig 0x25a970, ptr_add)
void* sdk_f_25a970(void* a0) { return (char*)a0 + 8; }

// sub_25a980  (orig 0x25a980, straight)
void* sdk_f_25a980(void* a0) { return (char*)(a0) - 8; }

// sub_25af50  (orig 0x25af50, ptr_add)
void* sdk_f_25af50(void* a0) { return (char*)a0 + 16; }

// sub_25af90  (orig 0x25af90, ptr_add)
void* sdk_f_25af90(void* a0) { return (char*)a0 + 8; }

// sub_25afa0  (orig 0x25afa0, straight)
void* sdk_f_25afa0(void* a0) { return (char*)(a0) - 8; }

// sub_25d090  (orig 0x25d090, ret_only)
void sdk_f_25d090() {}

// sub_25d250  (orig 0x25d250, straight)
void sdk_f_25d250(void* a0, uint64_t a1, int32_t a2) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a2)) * 8)));
    *(uint64_t*)((char*)(p0) + 72) = (uint64_t)(a1);
}

// sub_25d640  (orig 0x25d640, ptr_add)
void* sdk_f_25d640(void* a0) { return (char*)a0 + 16; }

// sub_25d860  (orig 0x25d860, ptr_add)
void* sdk_f_25d860(void* a0) { return (char*)a0 + 8; }

// sub_25d870  (orig 0x25d870, straight)
void* sdk_f_25d870(void* a0) { return (char*)(a0) - 8; }

// sub_25e330  (orig 0x25e330, ptr_add)
void* sdk_f_25e330(void* a0) { return (char*)a0 + 16; }

// sub_25f3b0  (orig 0x25f3b0, ptr_add)
void* sdk_f_25f3b0(void* a0) { return (char*)a0 + 8; }

// sub_25f3c0  (orig 0x25f3c0, straight)
void* sdk_f_25f3c0(void* a0) { return (char*)(a0) - 8; }

// sub_25f540  (orig 0x25f540, ptr_add)
void* sdk_f_25f540(void* a0) { return (char*)a0 + 16; }

// sub_25f5c0  (orig 0x25f5c0, ptr_add)
void* sdk_f_25f5c0(void* a0) { return (char*)a0 + 8; }

// sub_25f5d0  (orig 0x25f5d0, straight)
void* sdk_f_25f5d0(void* a0) { return (char*)(a0) - 8; }

// sub_2601d0  (orig 0x2601d0, ptr_add)
void* sdk_f_2601d0(void* a0) { return (char*)a0 + 16; }

// sub_260460  (orig 0x260460, ptr_add)
void* sdk_f_260460(void* a0) { return (char*)a0 + 8; }

// sub_260470  (orig 0x260470, straight)
void* sdk_f_260470(void* a0) { return (char*)(a0) - 8; }

// sub_261890  (orig 0x261890, ptr_add)
void* sdk_f_261890(void* a0) { return (char*)a0 + 32; }

// sub_261940  (orig 0x261940, ptr_add)
void* sdk_f_261940(void* a0) { return (char*)a0 + 8; }

// sub_261950  (orig 0x261950, straight)
void* sdk_f_261950(void* a0) { return (char*)(a0) - 24; }

// sub_261c70  (orig 0x261c70, ptr_add)
void* sdk_f_261c70(void* a0) { return (char*)a0 + 32; }

// sub_261cf0  (orig 0x261cf0, ptr_add)
void* sdk_f_261cf0(void* a0) { return (char*)a0 + 8; }

// sub_261d00  (orig 0x261d00, straight)
void* sdk_f_261d00(void* a0) { return (char*)(a0) - 24; }

// sub_262440  (orig 0x262440, ptr_add)
void* sdk_f_262440(void* a0) { return (char*)a0 + 16; }

// sub_262810  (orig 0x262810, ptr_add)
void* sdk_f_262810(void* a0) { return (char*)a0 + 8; }

// sub_262820  (orig 0x262820, straight)
void* sdk_f_262820(void* a0) { return (char*)(a0) - 8; }

// sub_2632f0  (orig 0x2632f0, ptr_add)
void* sdk_f_2632f0(void* a0) { return (char*)a0 + 16; }

// sub_263810  (orig 0x263810, ptr_add)
void* sdk_f_263810(void* a0) { return (char*)a0 + 8; }

// sub_263820  (orig 0x263820, straight)
void* sdk_f_263820(void* a0) { return (char*)(a0) - 8; }

// sub_265320  (orig 0x265320, ptr_add)
void* sdk_f_265320(void* a0) { return (char*)a0 + 32; }

// sub_2656f0  (orig 0x2656f0, ptr_add)
void* sdk_f_2656f0(void* a0) { return (char*)a0 + 8; }

// sub_265700  (orig 0x265700, straight)
void* sdk_f_265700(void* a0) { return (char*)(a0) - 24; }

// sub_2661e0  (orig 0x2661e0, ptr_add)
void* sdk_f_2661e0(void* a0) { return (char*)a0 + 32; }

// sub_266700  (orig 0x266700, ptr_add)
void* sdk_f_266700(void* a0) { return (char*)a0 + 8; }

// sub_266710  (orig 0x266710, straight)
void* sdk_f_266710(void* a0) { return (char*)(a0) - 24; }

// sub_26a550  (orig 0x26a550, straight-line)
int64_t sdk_f_26a550(uint32_t a0) { return (((int64_t)(((int32_t)(((uint32_t)a0)))))) * (((int64_t)(((int32_t)(104))))); }

// sub_26aac0  (orig 0x26aac0, ret_only)
void sdk_f_26aac0() {}

// sub_26c480  (orig 0x26c480, ret_only)
void sdk_f_26c480() {}

// sub_26f730  (orig 0x26f730, ret_only)
void sdk_f_26f730() {}

// sub_279b10  (orig 0x279b10, ret_only)
void sdk_f_279b10() {}

// sub_27cd30  (orig 0x27cd30, ret_only)
void sdk_f_27cd30() {}

// sub_27ce10  (orig 0x27ce10, ret_only)
void sdk_f_27ce10() {}

// sub_27cff0  (orig 0x27cff0, setter)
void sdk_f_27cff0(void* a0) { *(uint32_t*)((char*)(a0) + 176) = 0; }

// sub_27d3f0  (orig 0x27d3f0, mov_ret)
uint32_t sdk_f_27d3f0() { return 0; }

// sub_27dc50  (orig 0x27dc50, ret_only)
void sdk_f_27dc50() {}

// sub_284980  (orig 0x284980, copy-chain-store)
void sdk_f_284980(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 584);
    *(uint64_t*)((char*)a0 + 296) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 164) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 540) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint16_t*)((char*)(t0) + 24) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)(t0) + 32) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)(t0) + 248) = 0;
}

// sub_287c60  (orig 0x287c60, straight)
void sdk_f_287c60(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 608));
    *(uint8_t*)((char*)(p0) + 72) = 0;
    *(uint32_t*)((char*)(p0) + 80) = *(uint32_t*)((char*)(a0) + 128);
}

// sub_288510  (orig 0x288510, straight)
void sdk_f_288510(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 608));
    *(uint32_t*)((char*)(p0) + 104) = *(uint32_t*)((char*)(a0) + 388);
    *(uint32_t*)((char*)(p0) + 108) = *(uint32_t*)((char*)(a0) + 128);
}

// sub_288680  (orig 0x288680, setter)
void sdk_f_288680(uint64_t unused0, uint64_t unused1, uint64_t unused2, void* a3) { *(uint64_t*)((char*)(a3)) = 0; }

// sub_288690  (orig 0x288690, setter)
void sdk_f_288690(uint64_t unused0, uint64_t unused1, uint64_t a2, void* a3) { *(uint64_t*)((char*)(a3)) = a2; }

// sub_288b80  (orig 0x288b80, ret_only)
void sdk_f_288b80() {}

// sub_288b90  (orig 0x288b90, ret_only)
void sdk_f_288b90() {}

// sub_290570  (orig 0x290570, ret_only)
void sdk_f_290570() {}

// sub_2905b0  (orig 0x2905b0, ret_only)
void sdk_f_2905b0() {}

// sub_2905c0  (orig 0x2905c0, mov_ret)
uint64_t sdk_f_2905c0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_2905f0  (orig 0x2905f0, straight-line)
uint64_t sdk_f_2905f0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 40));
    *(uint64_t*)((char*)(p0) + 16) = 0;
    return 0;
}

// sub_290600  (orig 0x290600, straight-line)
void sdk_f_290600(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 40));
    *(uint64_t*)((char*)(p0) + 16) = 0;
}

// sub_2907d0  (orig 0x2907d0, ret_only)
void sdk_f_2907d0() {}

// sub_292980  (orig 0x292980, getter)
uint16_t sdk_f_292980(void* a0) { return *(uint16_t*)((char*)(a0)); }

// sub_292990  (orig 0x292990, getter)
uint32_t sdk_f_292990(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_2929a0  (orig 0x2929a0, straight)
void sdk_f_2929a0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(a1);
    *(uint8_t*)((char*)(a0) + 1) = (uint8_t)((((uint32_t)a1)) >> (8));
}

// sub_2929b0  (orig 0x2929b0, straight)
void sdk_f_2929b0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1) = (uint8_t)((((uint32_t)a1)) >> (8));
    *(uint8_t*)((char*)(a0)) = (uint8_t)(a1);
    *(uint8_t*)((char*)(a0) + 2) = (uint8_t)((((uint32_t)a1)) >> (16));
    *(uint8_t*)((char*)(a0) + 3) = (uint8_t)((((uint32_t)a1)) >> (24));
}

// sub_2929d0  (orig 0x2929d0, straight-line)
uint32_t sdk_f_2929d0(void* a0) { return __builtin_bswap32(*(uint32_t*)((char*)(a0))); }

// sub_2929e0  (orig 0x2929e0, straight)
void sdk_f_2929e0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)((((uint32_t)a1)) >> (8));
    *(uint8_t*)((char*)(a0) + 1) = (uint8_t)(a1);
}

// sub_2929f0  (orig 0x2929f0, straight)
void sdk_f_2929f0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)((((uint32_t)a1)) >> (24));
    *(uint8_t*)((char*)(a0) + 1) = (uint8_t)((((uint32_t)a1)) >> (16));
    *(uint8_t*)((char*)(a0) + 2) = (uint8_t)((((uint32_t)a1)) >> (8));
    *(uint8_t*)((char*)(a0) + 3) = (uint8_t)(a1);
}

// sub_294900  (orig 0x294900, ret_only)
void sdk_f_294900() {}

// sub_294930  (orig 0x294930, straight)
void sdk_f_294930(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 32) = (uint32_t)(a1);
    *(uint32_t*)((char*)(a0) + 8) = (uint32_t)(((*(uint64_t*)((char*)(a0) + 16) != 0) ? 1 : 0));
}

// sub_294a70  (orig 0x294a70, getter)
uint64_t sdk_f_294a70(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_294a80  (orig 0x294a80, getter)
uint64_t sdk_f_294a80(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_295020  (orig 0x295020, ret_only)
void sdk_f_295020() {}

// sub_295090  (orig 0x295090, straight)
void sdk_f_295090(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 40) = (uint32_t)(a1);
    *(uint32_t*)((char*)(a0) + 8) = (uint32_t)(((*(uint64_t*)((char*)(a0) + 16) != 0) ? 1 : 0));
}

// sub_2950b0  (orig 0x2950b0, straight)
void sdk_f_2950b0(void* a0, uint64_t a1) {
    *(uint32_t*)((char*)(a0) + 44) = (uint32_t)(a1);
    *(uint32_t*)((char*)(a0) + 8) = (uint32_t)(((*(uint64_t*)((char*)(a0) + 16) != 0) ? 1 : 0));
}

// sub_2951a0  (orig 0x2951a0, getter)
uint64_t sdk_f_2951a0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_295a00  (orig 0x295a00, mov_ret)
uint32_t sdk_f_295a00() { return 744; }

// sub_295a60  (orig 0x295a60, ret_only)
void sdk_f_295a60() {}

// sub_295a80  (orig 0x295a80, straight)
void sdk_f_295a80(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint16_t*)((char*)(p0) + 682) = (uint16_t)(a1);
    *(uint32_t*)((char*)(a0) + 8) = 1;
}

// sub_295aa0  (orig 0x295aa0, straight-line)
void sdk_f_295aa0(void* a0, uint64_t a1, uint32_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint64_t*)((char*)(p0) + 672) = a1;
    *(uint16_t*)((char*)(p0) + 680) = (uint16_t)((((((uint64_t)a1) == 0)) ? (0) : (((uint32_t)a2))));
    *(uint32_t*)((char*)(a0) + 8) = 1;
}

// sub_295ac0  (orig 0x295ac0, straight)
void sdk_f_295ac0(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint64_t*)((char*)(p0) + 688) = (uint64_t)(a1);
    *(uint32_t*)((char*)(a0) + 8) = 1;
}

// sub_295ae0  (orig 0x295ae0, straight-line)
void sdk_f_295ae0(void* a0, uint64_t a1, uint32_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint64_t*)((char*)(p0) + 704) = a1;
    *(uint16_t*)((char*)(p0) + 712) = (uint16_t)((((((uint64_t)a1) == 0)) ? (0) : (((uint32_t)a2))));
    *(uint32_t*)((char*)(a0) + 8) = 1;
}

// sub_295b00  (orig 0x295b00, straight)
void sdk_f_295b00(void* a0, uint64_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint64_t*)((char*)(p0) + 720) = (uint64_t)(a1);
    *(uint32_t*)((char*)(a0) + 8) = 1;
}

// sub_295b20  (orig 0x295b20, straight-line)
void sdk_f_295b20(void* a0, uint64_t a1, uint32_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    *(uint64_t*)((char*)(p0) + 728) = a1;
    *(uint32_t*)((char*)(p0) + 740) = (uint32_t)((((((uint64_t)a1) == 0)) ? (0) : (((uint32_t)a2))));
    *(uint32_t*)((char*)(a0) + 8) = 1;
}

// sub_295fd0  (orig 0x295fd0, getter)
uint16_t sdk_f_295fd0(void* a0) { return *(uint16_t*)((char*)(a0) + 24); }

// sub_2960d0  (orig 0x2960d0, mov_ret)
uint32_t sdk_f_2960d0() { return 240; }

// sub_296100  (orig 0x296100, ret_only)
void sdk_f_296100() {}

// sub_296120  (orig 0x296120, straight)
void sdk_f_296120(void* a0, uint64_t a1, uint64_t a2) {
    *(uint64_t*)((char*)(a0) + 24) = (uint64_t)(a1);
    *(uint16_t*)((char*)(a0) + 32) = (uint16_t)(a2);
    *(uint32_t*)((char*)(a0) + 8) = 1;
}

// sub_296ce0  (orig 0x296ce0, straight)
uint32_t sdk_f_296ce0(void* a0) { return (*(uint32_t*)((char*)(a0))) >> (8); }

// sub_296d00  (orig 0x296d00, ret_only)
void sdk_f_296d00() {}

// sub_2990b0  (orig 0x2990b0, ret_only)
void sdk_f_2990b0() {}

// sub_2991d0  (orig 0x2991d0, strlit-ret)
const char *sdk_f_2991d0() { static char g_f_2991d0[1]; __asm__ volatile("" ::: "memory"); return g_f_2991d0; }

// sub_2991e0  (orig 0x2991e0, ret_only)
void sdk_f_2991e0() {}

// sub_299680  (orig 0x299680, ret_only)
void sdk_f_299680() {}

// sub_299e70  (orig 0x299e70, setter)
void sdk_f_299e70(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_299e80  (orig 0x299e80, ret_only)
void sdk_f_299e80() {}

// sub_29a8c0  (orig 0x29a8c0, copy2)
void sdk_f_29a8c0(void* a0, uint64_t unused1, void* a2) { *(uint32_t*)((char*)(a0) + 376) = *(uint32_t*)((char*)(a2)); }

// sub_29a8d0  (orig 0x29a8d0, copy2)
void sdk_f_29a8d0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 376); }

// sub_29ca40  (orig 0x29ca40, setter-chain-zero)
void sdk_f_29ca40(uint64_t unused0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a1 + 48) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a1 + 80) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint8_t*)((char*)a1 + 16) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a1 = (struct u64x2){ 0, 0 };
}

// sub_29ca70  (orig 0x29ca70, const-ret)
uint32_t sdk_f_29ca70() { return 103117u; }

// sub_29ca80  (orig 0x29ca80, const-ret)
uint32_t sdk_f_29ca80() { return 103629u; }

// sub_29ca90  (orig 0x29ca90, const-ret)
uint32_t sdk_f_29ca90() { return 104141u; }

// sub_29cbe0  (orig 0x29cbe0, ret_only)
void sdk_f_29cbe0() {}

// sub_29da10  (orig 0x29da10, setter)
void sdk_f_29da10(void* a0) { *(uint32_t*)((char*)(a0)) = 0; }

// sub_29ec00  (orig 0x29ec00, ptr_add)
void* sdk_f_29ec00(void* a0) { return (char*)a0 + 16; }

// sub_29ef40  (orig 0x29ef40, ptr_add)
void* sdk_f_29ef40(void* a0) { return (char*)a0 + 8; }

// sub_29ef50  (orig 0x29ef50, straight)
void* sdk_f_29ef50(void* a0) { return (char*)(a0) - 8; }

// sub_29ff60  (orig 0x29ff60, ptr_add)
void* sdk_f_29ff60(void* a0) { return (char*)a0 + 16; }

// sub_2a0010  (orig 0x2a0010, ptr_add)
void* sdk_f_2a0010(void* a0) { return (char*)a0 + 8; }

// sub_2a0020  (orig 0x2a0020, straight)
void* sdk_f_2a0020(void* a0) { return (char*)(a0) - 8; }

// sub_2a00e0  (orig 0x2a00e0, straight)
void sdk_f_2a00e0(void* a0, void* a1) {
    uint64_t k0 = 1068149419;
    *(uint32_t*)((char*)(a0)) = (uint32_t)k0;
    *(uint32_t*)((char*)(a1)) = 1065353216;
}

// sub_2a2660  (orig 0x2a2660, straight)
void sdk_f_2a2660(void* a0, void* a1) {
    uint64_t k0 = 1068149419;
    *(uint32_t*)((char*)(a0)) = (uint32_t)k0;
    *(uint32_t*)((char*)(a1)) = 1065353216;
}

// sub_2a7f40  (orig 0x2a7f40, straight)
uint32_t sdk_f_2a7f40(void* a0, uint64_t a1) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(a1);
    return 0;
}

// sub_2b25a0  (orig 0x2b25a0, ret_only)
void sdk_f_2b25a0() {}

// sub_2b2810  (orig 0x2b2810, ptr_add)
void* sdk_f_2b2810(void* a0) { return (char*)a0 + 16; }

// sub_2b28f0  (orig 0x2b28f0, ptr_add)
void* sdk_f_2b28f0(void* a0) { return (char*)a0 + 8; }

// sub_2b2900  (orig 0x2b2900, straight)
void* sdk_f_2b2900(void* a0) { return (char*)(a0) - 8; }

// sub_2b2cc0  (orig 0x2b2cc0, ptr_add)
void* sdk_f_2b2cc0(void* a0) { return (char*)a0 + 16; }

// sub_2b2dc0  (orig 0x2b2dc0, ptr_add)
void* sdk_f_2b2dc0(void* a0) { return (char*)a0 + 8; }

// sub_2b2dd0  (orig 0x2b2dd0, straight)
void* sdk_f_2b2dd0(void* a0) { return (char*)(a0) - 8; }

// sub_2b3dc0  (orig 0x2b3dc0, setter-chain-zero)
void sdk_f_2b3dc0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_2b3dd0  (orig 0x2b3dd0, getter)
uint32_t sdk_f_2b3dd0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_2b4580  (orig 0x2b4580, getter)
uint32_t sdk_f_2b4580(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_2b4fb0  (orig 0x2b4fb0, setter-chain)
void sdk_f_2b4fb0(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 4) = 0; }

// sub_2b4fc0  (orig 0x2b4fc0, ret_only)
void sdk_f_2b4fc0() {}

// sub_2b4fd0  (orig 0x2b4fd0, getter)
uint32_t sdk_f_2b4fd0(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_2b5460  (orig 0x2b5460, ret_only)
void sdk_f_2b5460() {}

// sub_2b5480  (orig 0x2b5480, setter)
void sdk_f_2b5480(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0)) = a1; }

// sub_2b5490  (orig 0x2b5490, straight)
void sdk_f_2b5490(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_2b55c0  (orig 0x2b55c0, mov_ret)
uint32_t sdk_f_2b55c0() { return 32; }

// sub_2b5640  (orig 0x2b5640, ret_only)
void sdk_f_2b5640() {}

// sub_2b5700  (orig 0x2b5700, mov_ret)
uint32_t sdk_f_2b5700() { return 28; }

// sub_2b5860  (orig 0x2b5860, ret_only)
void sdk_f_2b5860() {}

// sub_2b5920  (orig 0x2b5920, mov_ret)
uint32_t sdk_f_2b5920() { return 1304; }

// sub_2b6ba0  (orig 0x2b6ba0, ret_only)
void sdk_f_2b6ba0() {}

// sub_2b6cf0  (orig 0x2b6cf0, compare)
bool sdk_f_2b6cf0(uint64_t a0, uint64_t a1) { return (uint32_t)(a0) == (uint32_t)(a1); }

// sub_2b6dc0  (orig 0x2b6dc0, straight-line)
uint32_t sdk_f_2b6dc0(uint32_t a0) { return __builtin_bswap32(((uint32_t)a0)); }

// sub_2b7270  (orig 0x2b7270, ptr_add)
void* sdk_f_2b7270(void* a0) { return (char*)a0 + 16; }

// sub_2b7310  (orig 0x2b7310, ptr_add)
void* sdk_f_2b7310(void* a0) { return (char*)a0 + 8; }

// sub_2b7320  (orig 0x2b7320, straight)
void* sdk_f_2b7320(void* a0) { return (char*)(a0) - 8; }

// sub_2b74b0  (orig 0x2b74b0, ptr_add)
void* sdk_f_2b74b0(void* a0) { return (char*)a0 + 16; }

// sub_2b7960  (orig 0x2b7960, ptr_add)
void* sdk_f_2b7960(void* a0) { return (char*)a0 + 8; }

// sub_2b7970  (orig 0x2b7970, straight)
void* sdk_f_2b7970(void* a0) { return (char*)(a0) - 8; }

// sub_2b8b00  (orig 0x2b8b00, ptr_add)
void* sdk_f_2b8b00(void* a0) { return (char*)a0 + 16; }

// sub_2b8ba0  (orig 0x2b8ba0, ptr_add)
void* sdk_f_2b8ba0(void* a0) { return (char*)a0 + 8; }

// sub_2b8bb0  (orig 0x2b8bb0, straight)
void* sdk_f_2b8bb0(void* a0) { return (char*)(a0) - 8; }

// sub_2b8d40  (orig 0x2b8d40, ptr_add)
void* sdk_f_2b8d40(void* a0) { return (char*)a0 + 16; }

// sub_2b8e60  (orig 0x2b8e60, ptr_add)
void* sdk_f_2b8e60(void* a0) { return (char*)a0 + 8; }

// sub_2b8e70  (orig 0x2b8e70, straight)
void* sdk_f_2b8e70(void* a0) { return (char*)(a0) - 8; }

// sub_2b8f50  (orig 0x2b8f50, ptr_add)
void* sdk_f_2b8f50(void* a0) { return (char*)a0 + 16; }

// sub_2b8ff0  (orig 0x2b8ff0, ptr_add)
void* sdk_f_2b8ff0(void* a0) { return (char*)a0 + 8; }

// sub_2b9000  (orig 0x2b9000, straight)
void* sdk_f_2b9000(void* a0) { return (char*)(a0) - 8; }

// sub_2b9190  (orig 0x2b9190, ptr_add)
void* sdk_f_2b9190(void* a0) { return (char*)a0 + 16; }

// sub_2b9670  (orig 0x2b9670, ptr_add)
void* sdk_f_2b9670(void* a0) { return (char*)a0 + 8; }

// sub_2b9680  (orig 0x2b9680, straight)
void* sdk_f_2b9680(void* a0) { return (char*)(a0) - 8; }

// sub_2b9740  (orig 0x2b9740, getter)
uint64_t sdk_f_2b9740(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_2b9750  (orig 0x2b9750, setter)
void sdk_f_2b9750(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_2b9760  (orig 0x2b9760, getter)
uint64_t sdk_f_2b9760(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_2b9770  (orig 0x2b9770, setter)
void sdk_f_2b9770(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_2b9780  (orig 0x2b9780, straight)
uint8_t sdk_f_2b9780(void* a0) { return (*(uint8_t*)((char*)(a0) + 16)) & (1); }

// sub_2b97a0  (orig 0x2b97a0, straight)
uint8_t sdk_f_2b97a0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 16)) >> (1)) & (1); }

// sub_2b97d0  (orig 0x2b97d0, straight)
uint8_t sdk_f_2b97d0(void* a0) { return ((*(uint8_t*)((char*)(a0) + 16)) >> (2)) & (1); }

// sub_2b9800  (orig 0x2b9800, getter)
uint8_t sdk_f_2b9800(void* a0) { return *(uint8_t*)((char*)(a0) + 18); }

// sub_2b9810  (orig 0x2b9810, setter)
void sdk_f_2b9810(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 18) = a1; }

// sub_2b9820  (orig 0x2b9820, getter)
uint8_t sdk_f_2b9820(void* a0) { return *(uint8_t*)((char*)(a0) + 19); }

// sub_2b9830  (orig 0x2b9830, setter)
void sdk_f_2b9830(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 19) = a1; }

// sub_2b9840  (orig 0x2b9840, getter)
uint32_t sdk_f_2b9840(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_2b9850  (orig 0x2b9850, setter)
void sdk_f_2b9850(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_2b9ea0  (orig 0x2b9ea0, straight)
uint64_t sdk_f_2b9ea0(void* a0) { return (*(uint64_t*)((char*)(a0) + 16)) - (*(uint64_t*)((char*)(a0) + 32)); }

// sub_2ba6a0  (orig 0x2ba6a0, ptr_add)
void* sdk_f_2ba6a0(void* a0) { return (char*)a0 + 16; }

// sub_2ba720  (orig 0x2ba720, ptr_add)
void* sdk_f_2ba720(void* a0) { return (char*)a0 + 8; }

// sub_2ba730  (orig 0x2ba730, straight)
void* sdk_f_2ba730(void* a0) { return (char*)(a0) - 8; }

// sub_2bab70  (orig 0x2bab70, ptr_add)
void* sdk_f_2bab70(void* a0) { return (char*)a0 + 16; }

// sub_2bac30  (orig 0x2bac30, ptr_add)
void* sdk_f_2bac30(void* a0) { return (char*)a0 + 8; }

// sub_2bac40  (orig 0x2bac40, straight)
void* sdk_f_2bac40(void* a0) { return (char*)(a0) - 8; }

// sub_2badc0  (orig 0x2badc0, ptr_add)
void* sdk_f_2badc0(void* a0) { return (char*)a0 + 16; }

// sub_2bae30  (orig 0x2bae30, ptr_add)
void* sdk_f_2bae30(void* a0) { return (char*)a0 + 8; }

// sub_2bae40  (orig 0x2bae40, straight)
void* sdk_f_2bae40(void* a0) { return (char*)(a0) - 8; }

// sub_2bc050  (orig 0x2bc050, setter-chain)
void sdk_f_2bc050(void* a0, uint32_t a1, uint64_t a2, uint64_t a3, uint8_t a4) { *(uint32_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 48) = a2; *(uint64_t*)((char*)(a0) + 56) = a3; *(uint8_t*)((char*)(a0) + 96) = a4; }

// sub_2bc060  (orig 0x2bc060, ret_only)
void sdk_f_2bc060() {}

// sub_2bc070  (orig 0x2bc070, ret_only)
void sdk_f_2bc070() {}

// sub_2bc7d0  (orig 0x2bc7d0, straight)
uint16_t sdk_f_2bc7d0(void* a0) { return (*(uint16_t*)((char*)(a0) + 138)) & (1); }

// sub_2bc800  (orig 0x2bc800, getter)
uint8_t sdk_f_2bc800(void* a0) { return *(uint8_t*)((char*)(a0) + 140); }

// sub_2bc820  (orig 0x2bc820, getter)
uint16_t sdk_f_2bc820(void* a0) { return *(uint16_t*)((char*)(a0) + 136); }

// sub_2bc830  (orig 0x2bc830, getter)
uint64_t sdk_f_2bc830(void* a0) { return *(uint64_t*)((char*)(a0) - 24); }

// sub_2bc840  (orig 0x2bc840, getter)
uint8_t sdk_f_2bc840(void* a0) { return *(uint8_t*)((char*)(a0) - 28); }

// sub_2bc850  (orig 0x2bc850, straight)
uint32_t sdk_f_2bc850(void* a0) { return ((*(uint32_t*)((char*)(a0) - 28)) >> (15)) & (1); }

// sub_2bcea0  (orig 0x2bcea0, getter)
uint64_t sdk_f_2bcea0(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_2bceb0  (orig 0x2bceb0, getter)
uint64_t sdk_f_2bceb0(void* a0) { return *(uint64_t*)((char*)(a0) + 112); }

// sub_2bd0b0  (orig 0x2bd0b0, pair-ret)
struct pair16_f_2bd0b0_ { uint64_t f[2]; }; pair16_f_2bd0b0_ sdk_f_2bd0b0(void* a0) { return *(struct pair16_f_2bd0b0_ *)((char*)(a0) + 104); }

// sub_2bd0c0  (orig 0x2bd0c0, straight)
void sdk_f_2bd0c0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 104) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1) + 8);
}

// sub_2bd390  (orig 0x2bd390, setter)
void sdk_f_2bd390(void* a0) { *(uint64_t*)((char*)(a0) + 104) = 0; }

// sub_2bd4b0  (orig 0x2bd4b0, getter)
uint64_t sdk_f_2bd4b0(void* a0) { return *(uint64_t*)((char*)(a0) + 112); }

// sub_2bd4f0  (orig 0x2bd4f0, getter)
uint32_t sdk_f_2bd4f0(void* a0) { return *(uint32_t*)((char*)(a0) + 124); }

// sub_2bd500  (orig 0x2bd500, getter)
uint32_t sdk_f_2bd500(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_2bdbf0  (orig 0x2bdbf0, getter)
uint32_t sdk_f_2bdbf0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_2bdc00  (orig 0x2bdc00, ptr_add)
void* sdk_f_2bdc00(void* a0) { return (char*)a0 + 8; }

// sub_2bdc10  (orig 0x2bdc10, getter)
uint64_t sdk_f_2bdc10(void* a0) { return *(uint64_t*)((char*)(a0) + 4104L); }

// sub_2bdee0  (orig 0x2bdee0, const-ret)
uint32_t sdk_f_2bdee0() { return 20181106u; }

// sub_2bdef0  (orig 0x2bdef0, const-ret)
uint32_t sdk_f_2bdef0() { return 70001u; }

// sub_2bdf50  (orig 0x2bdf50, mov_ret)
uint32_t sdk_f_2bdf50() { return 0; }

// sub_2be1a0  (orig 0x2be1a0, mov_ret)
uint32_t sdk_f_2be1a0() { return 22; }

// sub_2be1b0  (orig 0x2be1b0, mov_ret)
uint32_t sdk_f_2be1b0() { return 22; }

// sub_2d0dc0  (orig 0x2d0dc0, mov_ret)
uint32_t sdk_f_2d0dc0() { return 22; }

// sub_2d0dd0  (orig 0x2d0dd0, mov_ret)
uint32_t sdk_f_2d0dd0() { return 22; }

// sub_2d0de0  (orig 0x2d0de0, mov_ret)
uint32_t sdk_f_2d0de0() { return 22; }

// sub_2d2070  (orig 0x2d2070, ret_only)
void sdk_f_2d2070() {}

// sub_2d22b0  (orig 0x2d22b0, straight)
uint32_t sdk_f_2d22b0(void* a0) {
    uint32_t k0 = 2097152;
    *(uint64_t*)((char*)(a0)) = (uint64_t)k0;
    return 0;
}

// sub_2d2b60  (orig 0x2d2b60, mov_ret)
uint32_t sdk_f_2d2b60() { return 0; }

// sub_2d2b70  (orig 0x2d2b70, mov_ret)
uint32_t sdk_f_2d2b70() { return 0; }

// sub_2d3070  (orig 0x2d3070, mov_ret)
uint32_t sdk_f_2d3070() { return 38; }

// sub_2d3360  (orig 0x2d3360, straight)
uint32_t sdk_f_2d3360(void* a0) {
    *(uint32_t*)((char*)(a0)) = -16;
    return 0;
}

// sub_2d3370  (orig 0x2d3370, straight)
uint32_t sdk_f_2d3370(void* a0) {
    *(uint32_t*)((char*)(a0)) = 15;
    return 0;
}

// sub_2d3380  (orig 0x2d3380, straight)
uint32_t sdk_f_2d3380(void* a0) {
    *(uint32_t*)((char*)(a0)) = 0;
    return 0;
}

// sub_2d33a0  (orig 0x2d33a0, ret_only)
void sdk_f_2d33a0() {}

// sub_2d33b0  (orig 0x2d33b0, straight)
uint32_t sdk_f_2d33b0(void* a0, uint64_t unused1, uint64_t a2) {
    *(uint64_t*)((char*)(a0)) = (((((uint64_t)a2) < 1024)) ? (((uint64_t)a2)) : (1024));
    return 0;
}

// sub_2d33d0  (orig 0x2d33d0, straight)
uint32_t sdk_f_2d33d0(void* a0, uint64_t unused1, uint64_t a2) {
    *(uint64_t*)((char*)(a0)) = (((((uint64_t)a2) < 1024)) ? (((uint64_t)a2)) : (1024));
    return 0;
}

// sub_2d37b0  (orig 0x2d37b0, mov_ret)
uint32_t sdk_f_2d37b0() { return 0; }

// sub_2d37c0  (orig 0x2d37c0, mov_ret)
uint32_t sdk_f_2d37c0() { return 0; }

// sub_2d3b10  (orig 0x2d3b10, straight)
uint32_t sdk_f_2d3b10(uint64_t a0) { return (((((uint64_t)a0) == 0)) ? (22) : (95)); }

// sub_2d3b30  (orig 0x2d3b30, mov_ret)
uint32_t sdk_f_2d3b30() { return 95; }

// sub_2d3b40  (orig 0x2d3b40, mov_ret)
uint32_t sdk_f_2d3b40() { return 95; }

// sub_2d3cd0  (orig 0x2d3cd0, mov_ret)
uint64_t sdk_f_2d3cd0() { return 0; }

// sub_2d3ce0  (orig 0x2d3ce0, ret_only)
void sdk_f_2d3ce0() {}

// sub_2d3cf0  (orig 0x2d3cf0, mov_ret)
uint64_t sdk_f_2d3cf0() { return 0; }

// sub_2d3d00  (orig 0x2d3d00, mov_ret)
uint64_t sdk_f_2d3d00() { return 0; }

// sub_2d3d10  (orig 0x2d3d10, mov_ret)
uint64_t sdk_f_2d3d10() { return 0; }

// sub_2d3d20  (orig 0x2d3d20, ret_only)
void sdk_f_2d3d20() {}

// sub_2d3d30  (orig 0x2d3d30, mov_ret)
uint64_t sdk_f_2d3d30() { return 0; }

// sub_2d5c20  (orig 0x2d5c20, mov_ret)
uint32_t sdk_f_2d5c20() { return 1; }

// sub_2d7800  (orig 0x2d7800, setter)
void sdk_f_2d7800(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_2de140  (orig 0x2de140, straight-line)
void sdk_f_2de140(void* a0) {
    uint16_t k0 = 0;
    uint16_t k1 = 0;
    *(uint16_t*)((char*)(a0)) = 0;
    *(uint64_t*)((char*)(a0) + 8) = 0;
    *(uint64_t*)((char*)(a0) + 24) = 0;
    *(uint8_t*)((char*)(a0) + 32) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 52) = (uint32_t)k1;
    *(uint64_t*)((char*)(a0) + 44) = 0;
    *(uint64_t*)((char*)(a0) + 36) = 0;
}

// sub_2e1640  (orig 0x2e1640, getter)
uint8_t sdk_f_2e1640(void* a0) { return *(uint8_t*)((char*)(a0) + 38); }

// sub_2e1650  (orig 0x2e1650, getter)
uint8_t sdk_f_2e1650(void* a0) { return *(uint8_t*)((char*)(a0) + 39); }

// sub_2e1660  (orig 0x2e1660, getter)
uint8_t sdk_f_2e1660(void* a0) { return *(uint8_t*)((char*)(a0) + 40); }

// sub_2e1670  (orig 0x2e1670, getter)
uint8_t sdk_f_2e1670(void* a0) { return *(uint8_t*)((char*)(a0) + 41); }

// sub_2e1680  (orig 0x2e1680, getter)
uint8_t sdk_f_2e1680(void* a0) { return *(uint8_t*)((char*)(a0) + 42); }

// sub_2e1690  (orig 0x2e1690, compare)
bool sdk_f_2e1690(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 51)) == (uint64_t)(1); }

// sub_2e16a0  (orig 0x2e16a0, getter)
uint8_t sdk_f_2e16a0(void* a0) { return *(uint8_t*)((char*)(a0) + 49); }

// sub_2e16b0  (orig 0x2e16b0, getter)
uint8_t sdk_f_2e16b0(void* a0) { return *(uint8_t*)((char*)(a0) + 45); }

// sub_2e16c0  (orig 0x2e16c0, getter)
uint8_t sdk_f_2e16c0(void* a0) { return *(uint8_t*)((char*)(a0) + 46); }

// sub_2e1cb0  (orig 0x2e1cb0, getter)
uint8_t sdk_f_2e1cb0(void* a0) { return *(uint8_t*)((char*)(a0) + 38); }

// sub_2e1cc0  (orig 0x2e1cc0, getter)
uint8_t sdk_f_2e1cc0(void* a0) { return *(uint8_t*)((char*)(a0) + 39); }

// sub_2e1cd0  (orig 0x2e1cd0, getter)
uint8_t sdk_f_2e1cd0(void* a0) { return *(uint8_t*)((char*)(a0) + 40); }

// sub_2e1ce0  (orig 0x2e1ce0, getter)
uint8_t sdk_f_2e1ce0(void* a0) { return *(uint8_t*)((char*)(a0) + 41); }

// sub_2e1cf0  (orig 0x2e1cf0, getter)
uint8_t sdk_f_2e1cf0(void* a0) { return *(uint8_t*)((char*)(a0) + 42); }

// sub_2e1d00  (orig 0x2e1d00, pair-ret)
struct pair16_f_2e1d00_ { uint64_t f[2]; }; pair16_f_2e1d00_ sdk_f_2e1d00(void* a0) { return *(struct pair16_f_2e1d00_ *)((char*)(a0)); }

// sub_2e1d10  (orig 0x2e1d10, compare)
bool sdk_f_2e1d10(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 43)) == (uint64_t)(1); }

// sub_2e1d20  (orig 0x2e1d20, getter)
uint8_t sdk_f_2e1d20(void* a0) { return *(uint8_t*)((char*)(a0) + 44); }

// sub_2e1d30  (orig 0x2e1d30, getter)
uint8_t sdk_f_2e1d30(void* a0) { return *(uint8_t*)((char*)(a0) + 45); }

// sub_2e1d40  (orig 0x2e1d40, getter)
uint8_t sdk_f_2e1d40(void* a0) { return *(uint8_t*)((char*)(a0) + 46); }

// sub_2e1d50  (orig 0x2e1d50, getter)
uint8_t sdk_f_2e1d50(void* a0) { return *(uint8_t*)((char*)(a0) + 47); }

// sub_2e1d60  (orig 0x2e1d60, getter)
uint8_t sdk_f_2e1d60(void* a0) { return *(uint8_t*)((char*)(a0) + 48); }

// sub_2e1d70  (orig 0x2e1d70, getter)
uint8_t sdk_f_2e1d70(void* a0) { return *(uint8_t*)((char*)(a0) + 49); }

// sub_2e1d80  (orig 0x2e1d80, getter)
uint8_t sdk_f_2e1d80(void* a0) { return *(uint8_t*)((char*)(a0) + 50); }

// sub_2e1d90  (orig 0x2e1d90, getter)
uint8_t sdk_f_2e1d90(void* a0) { return *(uint8_t*)((char*)(a0) + 51); }

// sub_2e1da0  (orig 0x2e1da0, getter)
uint8_t sdk_f_2e1da0(void* a0) { return *(uint8_t*)((char*)(a0) + 52); }

// sub_2e1db0  (orig 0x2e1db0, getter)
uint8_t sdk_f_2e1db0(void* a0) { return *(uint8_t*)((char*)(a0) + 53); }

// sub_2e1dc0  (orig 0x2e1dc0, getter)
uint8_t sdk_f_2e1dc0(void* a0) { return *(uint8_t*)((char*)(a0) + 54); }

// sub_2e1dd0  (orig 0x2e1dd0, getter)
uint8_t sdk_f_2e1dd0(void* a0) { return *(uint8_t*)((char*)(a0) + 55); }

// sub_2e1de0  (orig 0x2e1de0, getter)
uint8_t sdk_f_2e1de0(void* a0) { return *(uint8_t*)((char*)(a0) + 56); }

// sub_2e1df0  (orig 0x2e1df0, getter)
uint8_t sdk_f_2e1df0(void* a0) { return *(uint8_t*)((char*)(a0) + 57); }

// sub_2e1e00  (orig 0x2e1e00, getter)
uint8_t sdk_f_2e1e00(void* a0) { return *(uint8_t*)((char*)(a0) + 58); }

// sub_2e1e10  (orig 0x2e1e10, getter)
uint8_t sdk_f_2e1e10(void* a0) { return *(uint8_t*)((char*)(a0) + 59); }

// sub_2e1e20  (orig 0x2e1e20, getter)
uint8_t sdk_f_2e1e20(void* a0) { return *(uint8_t*)((char*)(a0) + 60); }

// sub_2e1e30  (orig 0x2e1e30, getter)
uint8_t sdk_f_2e1e30(void* a0) { return *(uint8_t*)((char*)(a0) + 61); }

// sub_2e1e40  (orig 0x2e1e40, getter)
uint8_t sdk_f_2e1e40(void* a0) { return *(uint8_t*)((char*)(a0) + 62); }

// sub_2e1e50  (orig 0x2e1e50, getter)
uint8_t sdk_f_2e1e50(void* a0) { return *(uint8_t*)((char*)(a0) + 63); }

// sub_2e1e60  (orig 0x2e1e60, getter)
uint8_t sdk_f_2e1e60(void* a0) { return *(uint8_t*)((char*)(a0) + 64); }

// sub_2e1e70  (orig 0x2e1e70, getter)
uint8_t sdk_f_2e1e70(void* a0) { return *(uint8_t*)((char*)(a0) + 65); }

// sub_2e1e80  (orig 0x2e1e80, getter)
uint8_t sdk_f_2e1e80(void* a0) { return *(uint8_t*)((char*)(a0) + 66); }

// sub_2e1e90  (orig 0x2e1e90, getter)
uint8_t sdk_f_2e1e90(void* a0) { return *(uint8_t*)((char*)(a0) + 67); }

// sub_2e1ea0  (orig 0x2e1ea0, getter)
uint8_t sdk_f_2e1ea0(void* a0) { return *(uint8_t*)((char*)(a0) + 68); }

// sub_2e1eb0  (orig 0x2e1eb0, getter)
uint8_t sdk_f_2e1eb0(void* a0) { return *(uint8_t*)((char*)(a0) + 69); }

// sub_2e1ec0  (orig 0x2e1ec0, getter)
uint8_t sdk_f_2e1ec0(void* a0) { return *(uint8_t*)((char*)(a0) + 70); }

// sub_2e1ed0  (orig 0x2e1ed0, getter)
uint8_t sdk_f_2e1ed0(void* a0) { return *(uint8_t*)((char*)(a0) + 71); }

// sub_2e1ee0  (orig 0x2e1ee0, getter)
uint8_t sdk_f_2e1ee0(void* a0) { return *(uint8_t*)((char*)(a0) + 72); }

// sub_2e1ef0  (orig 0x2e1ef0, getter)
uint8_t sdk_f_2e1ef0(void* a0) { return *(uint8_t*)((char*)(a0) + 73); }

// sub_2e1f00  (orig 0x2e1f00, getter)
uint8_t sdk_f_2e1f00(void* a0) { return *(uint8_t*)((char*)(a0) + 74); }

// sub_2e1f10  (orig 0x2e1f10, getter)
uint8_t sdk_f_2e1f10(void* a0) { return *(uint8_t*)((char*)(a0) + 75); }

// sub_2e1f20  (orig 0x2e1f20, getter)
uint8_t sdk_f_2e1f20(void* a0) { return *(uint8_t*)((char*)(a0) + 76); }

// sub_2e1f30  (orig 0x2e1f30, getter)
uint8_t sdk_f_2e1f30(void* a0) { return *(uint8_t*)((char*)(a0) + 77); }

// sub_2e1f40  (orig 0x2e1f40, getter)
uint8_t sdk_f_2e1f40(void* a0) { return *(uint8_t*)((char*)(a0) + 78); }

// sub_2e1f50  (orig 0x2e1f50, getter)
uint8_t sdk_f_2e1f50(void* a0) { return *(uint8_t*)((char*)(a0) + 79); }

// sub_2e1f60  (orig 0x2e1f60, getter)
uint8_t sdk_f_2e1f60(void* a0) { return *(uint8_t*)((char*)(a0) + 80); }

// sub_2e1f70  (orig 0x2e1f70, getter)
uint8_t sdk_f_2e1f70(void* a0) { return *(uint8_t*)((char*)(a0) + 81); }

// sub_2e1f80  (orig 0x2e1f80, getter)
uint8_t sdk_f_2e1f80(void* a0) { return *(uint8_t*)((char*)(a0) + 82); }

// sub_2e1f90  (orig 0x2e1f90, getter)
uint8_t sdk_f_2e1f90(void* a0) { return *(uint8_t*)((char*)(a0) + 83); }

// sub_2e1fa0  (orig 0x2e1fa0, getter)
uint8_t sdk_f_2e1fa0(void* a0) { return *(uint8_t*)((char*)(a0) + 84); }

// sub_2e1fb0  (orig 0x2e1fb0, getter)
uint8_t sdk_f_2e1fb0(void* a0) { return *(uint8_t*)((char*)(a0) + 85); }

// sub_2e1fc0  (orig 0x2e1fc0, getter)
uint8_t sdk_f_2e1fc0(void* a0) { return *(uint8_t*)((char*)(a0) + 86); }

// sub_2e23e0  (orig 0x2e23e0, ret_only)
void sdk_f_2e23e0() {}

// sub_2e2470  (orig 0x2e2470, ret_only)
void sdk_f_2e2470() {}

// sub_2e25a0  (orig 0x2e25a0, setter-chain)
void sdk_f_2e25a0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a1; *(uint64_t*)((char*)(a0) + 16) = a2; }

// sub_2e25b0  (orig 0x2e25b0, ret_only)
void sdk_f_2e25b0() {}

// sub_2e25c0  (orig 0x2e25c0, straight)
void sdk_f_2e25c0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0)) = (*(uint64_t*)((char*)(a0))) + (((uint64_t)a1));
}

// sub_2e25e0  (orig 0x2e25e0, straight)
void sdk_f_2e25e0(void* a0, uint64_t a1) {
    *(uint64_t*)((char*)(a0)) = (((((uint64_t)a1)) + (*(uint64_t*)((char*)(a0)))) - (1)) & ((0 - ((uint64_t)((uint64_t)a1))));
}

// sub_2e2600  (orig 0x2e2600, getter)
uint64_t sdk_f_2e2600(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_2e2610  (orig 0x2e2610, getter)
uint64_t sdk_f_2e2610(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_2e2640  (orig 0x2e2640, setter)
void sdk_f_2e2640(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_2e2650  (orig 0x2e2650, ret_only)
void sdk_f_2e2650() {}

// sub_2e26c0  (orig 0x2e26c0, getter)
uint64_t sdk_f_2e26c0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_2e26d0  (orig 0x2e26d0, mov_ret)
uint32_t sdk_f_2e26d0() { return 1; }

// sub_2e3af0  (orig 0x2e3af0, ret_only)
void sdk_f_2e3af0() {}

// sub_2e7f30  (orig 0x2e7f30, straight)
void sdk_f_2e7f30(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0)) = *(uint16_t*)((char*)(a1));
    *(uint16_t*)((char*)(a0) + 2) = *(uint16_t*)((char*)(a1) + 2);
    *(uint16_t*)((char*)(a0) + 4) = *(uint16_t*)((char*)(a1) + 4);
    *(uint16_t*)((char*)(a0) + 6) = *(uint16_t*)((char*)(a1) + 6);
    *(uint16_t*)((char*)(a0) + 8) = *(uint16_t*)((char*)(a1) + 8);
    *(uint16_t*)((char*)(a0) + 10) = *(uint16_t*)((char*)(a1) + 10);
    *(uint16_t*)((char*)(a0) + 12) = *(uint16_t*)((char*)(a1) + 12);
    *(uint16_t*)((char*)(a0) + 14) = *(uint16_t*)((char*)(a1) + 14);
    *(uint16_t*)((char*)(a0) + 16) = *(uint16_t*)((char*)(a1) + 16);
    *(uint16_t*)((char*)(a0) + 18) = *(uint16_t*)((char*)(a1) + 18);
    *(uint16_t*)((char*)(a0) + 20) = *(uint16_t*)((char*)(a1) + 20);
}

// sub_2e8030  (orig 0x2e8030, straight)
void sdk_f_2e8030(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0)) = *(uint16_t*)((char*)(a1));
    *(uint16_t*)((char*)(a0) + 2) = *(uint16_t*)((char*)(a1) + 2);
    *(uint16_t*)((char*)(a0) + 4) = *(uint16_t*)((char*)(a1) + 4);
    *(uint16_t*)((char*)(a0) + 6) = *(uint16_t*)((char*)(a1) + 6);
    *(uint16_t*)((char*)(a0) + 8) = *(uint16_t*)((char*)(a1) + 8);
    *(uint16_t*)((char*)(a0) + 10) = *(uint16_t*)((char*)(a1) + 10);
    *(uint16_t*)((char*)(a0) + 12) = *(uint16_t*)((char*)(a1) + 12);
    *(uint16_t*)((char*)(a0) + 14) = *(uint16_t*)((char*)(a1) + 14);
    *(uint16_t*)((char*)(a0) + 16) = *(uint16_t*)((char*)(a1) + 16);
    *(uint16_t*)((char*)(a0) + 18) = *(uint16_t*)((char*)(a1) + 18);
    *(uint16_t*)((char*)(a0) + 20) = *(uint16_t*)((char*)(a1) + 20);
}

// sub_2e8130  (orig 0x2e8130, getter)
uint8_t sdk_f_2e8130(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_2e8140  (orig 0x2e8140, getter)
uint8_t sdk_f_2e8140(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_2e8150  (orig 0x2e8150, getter)
uint8_t sdk_f_2e8150(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_2e8160  (orig 0x2e8160, getter)
uint8_t sdk_f_2e8160(void* a0) { return *(uint8_t*)((char*)(a0) + 3); }

// sub_2e8170  (orig 0x2e8170, getter)
uint8_t sdk_f_2e8170(void* a0) { return *(uint8_t*)((char*)(a0) + 4); }

// sub_2e8180  (orig 0x2e8180, getter)
uint8_t sdk_f_2e8180(void* a0) { return *(uint8_t*)((char*)(a0) + 5); }

// sub_2e8190  (orig 0x2e8190, getter)
uint8_t sdk_f_2e8190(void* a0) { return *(uint8_t*)((char*)(a0) + 6); }

// sub_2e81a0  (orig 0x2e81a0, getter)
uint8_t sdk_f_2e81a0(void* a0) { return *(uint8_t*)((char*)(a0) + 7); }

// sub_2e81b0  (orig 0x2e81b0, setter)
void sdk_f_2e81b0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_2e81c0  (orig 0x2e81c0, setter)
void sdk_f_2e81c0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0)) = a1; }

// sub_2e81d0  (orig 0x2e81d0, setter)
void sdk_f_2e81d0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 1) = a1; }

// sub_2e81e0  (orig 0x2e81e0, setter)
void sdk_f_2e81e0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 2) = a1; }

// sub_2e81f0  (orig 0x2e81f0, setter)
void sdk_f_2e81f0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 3) = a1; }

// sub_2e8200  (orig 0x2e8200, setter)
void sdk_f_2e8200(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 4) = a1; }

// sub_2e8210  (orig 0x2e8210, setter)
void sdk_f_2e8210(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 5) = a1; }

// sub_2e8220  (orig 0x2e8220, setter)
void sdk_f_2e8220(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 6) = a1; }

// sub_2e8230  (orig 0x2e8230, setter)
void sdk_f_2e8230(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 7) = a1; }

// sub_2e9d50  (orig 0x2e9d50, pair-ret)
struct pair16_f_2e9d50_ { uint64_t f[2]; }; pair16_f_2e9d50_ sdk_f_2e9d50(void* a0) { return *(struct pair16_f_2e9d50_ *)((char*)(a0) + 48); }

// sub_2ea080  (orig 0x2ea080, ret_only)
void sdk_f_2ea080() {}

// sub_2ea930  (orig 0x2ea930, ret_only)
void sdk_f_2ea930() {}

// sub_2eabd0  (orig 0x2eabd0, mov_ret)
uint32_t sdk_f_2eabd0() { return 1; }

// sub_2ead00  (orig 0x2ead00, ret_only)
void sdk_f_2ead00() {}

// sub_2f2e00  (orig 0x2f2e00, setter)
void sdk_f_2f2e00(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_2f3300  (orig 0x2f3300, ret_only)
void sdk_f_2f3300() {}

// sub_2f3310  (orig 0x2f3310, setter)
void sdk_f_2f3310(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_2f38e0  (orig 0x2f38e0, setter)
void sdk_f_2f38e0(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_2f38f0  (orig 0x2f38f0, ret_only)
void sdk_f_2f38f0() {}

// sub_2f3af0  (orig 0x2f3af0, getter)
uint8_t sdk_f_2f3af0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_2f4280  (orig 0x2f4280, ret_only)
void sdk_f_2f4280() {}

// sub_2f4ca0  (orig 0x2f4ca0, ptr_add)
void* sdk_f_2f4ca0(void* a0) { return (char*)a0 + 32; }

// sub_2f4d60  (orig 0x2f4d60, ptr_add)
void* sdk_f_2f4d60(void* a0) { return (char*)a0 + 8; }

// sub_2f4d70  (orig 0x2f4d70, straight)
void* sdk_f_2f4d70(void* a0) { return (char*)(a0) - 24; }

// sub_2f4ea0  (orig 0x2f4ea0, ptr_add)
void* sdk_f_2f4ea0(void* a0) { return (char*)a0 + 32; }

// sub_2f5320  (orig 0x2f5320, ptr_add)
void* sdk_f_2f5320(void* a0) { return (char*)a0 + 8; }

// sub_2f5330  (orig 0x2f5330, straight)
void* sdk_f_2f5330(void* a0) { return (char*)(a0) - 24; }

// sub_2f6c90  (orig 0x2f6c90, ptr_add)
void* sdk_f_2f6c90(void* a0) { return (char*)a0 + 16; }

// sub_2f6f00  (orig 0x2f6f00, ptr_add)
void* sdk_f_2f6f00(void* a0) { return (char*)a0 + 8; }

// sub_2f6f10  (orig 0x2f6f10, straight)
void* sdk_f_2f6f10(void* a0) { return (char*)(a0) - 8; }

// sub_2f7a80  (orig 0x2f7a80, getter)
uint32_t sdk_f_2f7a80(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_2f7a90  (orig 0x2f7a90, ptr_add)
void* sdk_f_2f7a90(void* a0) { return (char*)a0 + 140; }

// sub_2f7bf0  (orig 0x2f7bf0, ptr_add)
void* sdk_f_2f7bf0(void* a0) { return (char*)a0 + 12; }

// sub_2f7c40  (orig 0x2f7c40, getter)
uint32_t sdk_f_2f7c40(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_2f7c50  (orig 0x2f7c50, getter)
uint32_t sdk_f_2f7c50(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_2f7c60  (orig 0x2f7c60, getter)
uint32_t sdk_f_2f7c60(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_2f7c70  (orig 0x2f7c70, getter)
uint32_t sdk_f_2f7c70(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_2f7c80  (orig 0x2f7c80, setter)
void sdk_f_2f7c80(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_2f7c90  (orig 0x2f7c90, ret_only)
void sdk_f_2f7c90() {}

// sub_2f7da0  (orig 0x2f7da0, getter)
uint8_t sdk_f_2f7da0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_2f7db0  (orig 0x2f7db0, getter)
uint32_t sdk_f_2f7db0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_2f7dc0  (orig 0x2f7dc0, straight-line)
uint32_t sdk_f_2f7dc0(void* a0) { return ((*(uint32_t*)((char*)(a0) + 12) == 2770581391) ? 1 : 0); }

// sub_2f7de0  (orig 0x2f7de0, ptr_add)
void* sdk_f_2f7de0(void* a0) { return (char*)a0 + 144; }

// sub_2f7e00  (orig 0x2f7e00, ptr_add)
void* sdk_f_2f7e00(void* a0) { return (char*)a0 + 16; }

// sub_2f7e10  (orig 0x2f7e10, straight)
void sdk_f_2f7e10(void* a0) {
    *(uint32_t*)((char*)(a0) + 260) = 1;
}

// sub_2f7e20  (orig 0x2f7e20, setter)
void sdk_f_2f7e20(void* a0) { *(uint32_t*)((char*)(a0) + 260) = 0; }

// sub_2f7e30  (orig 0x2f7e30, setter-chain)
void sdk_f_2f7e30(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 260) = 0; *(uint32_t*)((char*)(a0) + 264) = a1; }

// sub_2f7e40  (orig 0x2f7e40, setter-chain)
void sdk_f_2f7e40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 260) = 0; *(uint32_t*)((char*)(a0) + 264) = a1; }

// sub_2f7e50  (orig 0x2f7e50, setter-chain)
void sdk_f_2f7e50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 260) = 0; *(uint32_t*)((char*)(a0) + 264) = a1; }

// sub_2f8630  (orig 0x2f8630, ptr_add)
void* sdk_f_2f8630(void* a0) { return (char*)a0 + 32; }

// sub_2f86d0  (orig 0x2f86d0, ptr_add)
void* sdk_f_2f86d0(void* a0) { return (char*)a0 + 8; }

// sub_2f86e0  (orig 0x2f86e0, straight)
void* sdk_f_2f86e0(void* a0) { return (char*)(a0) - 24; }

// sub_2f8820  (orig 0x2f8820, ptr_add)
void* sdk_f_2f8820(void* a0) { return (char*)a0 + 32; }

// sub_2f8c40  (orig 0x2f8c40, ptr_add)
void* sdk_f_2f8c40(void* a0) { return (char*)a0 + 8; }

// sub_2f8c50  (orig 0x2f8c50, straight)
void* sdk_f_2f8c50(void* a0) { return (char*)(a0) - 24; }

// sub_2f9e10  (orig 0x2f9e10, ret_only)
void sdk_f_2f9e10() {}

// sub_2fa320  (orig 0x2fa320, ptr_add)
void* sdk_f_2fa320(void* a0) { return (char*)a0 + 32; }

// sub_2fa3c0  (orig 0x2fa3c0, ptr_add)
void* sdk_f_2fa3c0(void* a0) { return (char*)a0 + 8; }

// sub_2fa3d0  (orig 0x2fa3d0, straight)
void* sdk_f_2fa3d0(void* a0) { return (char*)(a0) - 24; }

// sub_2fa510  (orig 0x2fa510, ptr_add)
void* sdk_f_2fa510(void* a0) { return (char*)a0 + 32; }

// sub_2fa8a0  (orig 0x2fa8a0, ptr_add)
void* sdk_f_2fa8a0(void* a0) { return (char*)a0 + 8; }

// sub_2fa8b0  (orig 0x2fa8b0, straight)
void* sdk_f_2fa8b0(void* a0) { return (char*)(a0) - 24; }

// sub_2fa8c0  (orig 0x2fa8c0, ret_only)
void sdk_f_2fa8c0() {}

// sub_2fbe50  (orig 0x2fbe50, ptr_add)
void* sdk_f_2fbe50(void* a0) { return (char*)a0 + 32; }

// sub_2fbef0  (orig 0x2fbef0, ptr_add)
void* sdk_f_2fbef0(void* a0) { return (char*)a0 + 8; }

// sub_2fbf00  (orig 0x2fbf00, straight)
void* sdk_f_2fbf00(void* a0) { return (char*)(a0) - 24; }

// sub_2fc040  (orig 0x2fc040, ptr_add)
void* sdk_f_2fc040(void* a0) { return (char*)a0 + 32; }

// sub_2fc680  (orig 0x2fc680, ptr_add)
void* sdk_f_2fc680(void* a0) { return (char*)a0 + 8; }

// sub_2fc690  (orig 0x2fc690, straight)
void* sdk_f_2fc690(void* a0) { return (char*)(a0) - 24; }

// sub_2fdbe0  (orig 0x2fdbe0, ret_only)
void sdk_f_2fdbe0() {}

// sub_2fe0d0  (orig 0x2fe0d0, ptr_add)
void* sdk_f_2fe0d0(void* a0) { return (char*)a0 + 32; }

// sub_2fe170  (orig 0x2fe170, ptr_add)
void* sdk_f_2fe170(void* a0) { return (char*)a0 + 8; }

// sub_2fe180  (orig 0x2fe180, straight)
void* sdk_f_2fe180(void* a0) { return (char*)(a0) - 24; }

// sub_2fe2c0  (orig 0x2fe2c0, ptr_add)
void* sdk_f_2fe2c0(void* a0) { return (char*)a0 + 32; }

// sub_2fe6b0  (orig 0x2fe6b0, ptr_add)
void* sdk_f_2fe6b0(void* a0) { return (char*)a0 + 8; }

// sub_2fe6c0  (orig 0x2fe6c0, straight)
void* sdk_f_2fe6c0(void* a0) { return (char*)(a0) - 24; }

// sub_2fe6d0  (orig 0x2fe6d0, ret_only)
void sdk_f_2fe6d0() {}

// sub_2febe0  (orig 0x2febe0, ptr_add)
void* sdk_f_2febe0(void* a0) { return (char*)a0 + 32; }

// sub_2fec80  (orig 0x2fec80, ptr_add)
void* sdk_f_2fec80(void* a0) { return (char*)a0 + 8; }

// sub_2fec90  (orig 0x2fec90, straight)
void* sdk_f_2fec90(void* a0) { return (char*)(a0) - 24; }

// sub_2fedd0  (orig 0x2fedd0, ptr_add)
void* sdk_f_2fedd0(void* a0) { return (char*)a0 + 32; }

// sub_2ff1c0  (orig 0x2ff1c0, ptr_add)
void* sdk_f_2ff1c0(void* a0) { return (char*)a0 + 8; }

// sub_2ff1d0  (orig 0x2ff1d0, straight)
void* sdk_f_2ff1d0(void* a0) { return (char*)(a0) - 24; }

// sub_2ff1e0  (orig 0x2ff1e0, ret_only)
void sdk_f_2ff1e0() {}

// sub_2ff390  (orig 0x2ff390, strlit-ret)
const char *sdk_f_2ff390() { static char g_f_2ff390[1]; __asm__ volatile("" ::: "memory"); return g_f_2ff390; }

// sub_3022a0  (orig 0x3022a0, setter-chain)
void sdk_f_3022a0(void* a0) { *(uint32_t*)((char*)(a0) + 12) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint32_t*)((char*)(a0) + 40) = 0; }

// sub_3025a0  (orig 0x3025a0, setter)
void sdk_f_3025a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; }

// sub_3025b0  (orig 0x3025b0, setter)
void sdk_f_3025b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_305730  (orig 0x305730, straight)
uint32_t sdk_f_305730(uint64_t unused0, uint64_t unused1, uint64_t unused2, void* a3) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a3)) = (uint8_t)k0;
    return 0;
}

// sub_306980  (orig 0x306980, setter-chain)
void sdk_f_306980(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 4) = 0; }

// sub_306990  (orig 0x306990, ret_only)
void sdk_f_306990() {}

// sub_30a080  (orig 0x30a080, compare)
bool sdk_f_30a080(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) < (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_30a0a0  (orig 0x30a0a0, compare)
bool sdk_f_30a0a0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) < (uint64_t)(*(uint64_t*)((char*)(a1) + 8)); }

// sub_30cce0  (orig 0x30cce0, straight)
uint64_t sdk_f_30cce0(uint64_t unused0, void* a1) {
    *(uint64_t*)((char*)(a1)) = -1;
    return 0;
}

// sub_30cef0  (orig 0x30cef0, mov_ret)
uint64_t sdk_f_30cef0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_30cf00  (orig 0x30cf00, mov_ret)
uint64_t sdk_f_30cf00(uint64_t a0, uint64_t a1) { return a1; }

// sub_30d350  (orig 0x30d350, straight)
uint64_t sdk_f_30d350(uint64_t unused0, void* a1) {
    *(uint64_t*)((char*)(a1)) = -1;
    return 0;
}

// sub_30d510  (orig 0x30d510, mov_ret)
uint32_t sdk_f_30d510() { return 1; }

// sub_30d530  (orig 0x30d530, ret_only)
void sdk_f_30d530() {}

// sub_30d550  (orig 0x30d550, mov_ret)
uint32_t sdk_f_30d550() { return 1; }

// sub_30d570  (orig 0x30d570, ret_only)
void sdk_f_30d570() {}

// sub_30d590  (orig 0x30d590, mov_ret)
uint32_t sdk_f_30d590() { return 1; }

// sub_30d8f0  (orig 0x30d8f0, straight)
uint32_t sdk_f_30d8f0(void* a0) { return ((((*(uint32_t*)((char*)(a0))) + (31)) >> (3)) & (536870908)) + (28); }

// sub_312d00  (orig 0x312d00, ptr_add)
void* sdk_f_312d00(void* a0) { return (char*)a0 + 8; }

// sub_3133d0  (orig 0x3133d0, ptr_add)
void* sdk_f_3133d0(void* a0) { return (char*)a0 + 56; }

// sub_313990  (orig 0x313990, ret_only)
void sdk_f_313990() {}

// sub_313c30  (orig 0x313c30, ptr_add)
void* sdk_f_313c30(void* a0) { return (char*)a0 + 8; }

// sub_313cb0  (orig 0x313cb0, ret_only)
void sdk_f_313cb0() {}

// sub_313cc0  (orig 0x313cc0, ret_only)
void sdk_f_313cc0() {}

// sub_313cd0  (orig 0x313cd0, ret_only)
void sdk_f_313cd0() {}

// sub_314660  (orig 0x314660, ptr_add)
void* sdk_f_314660(void* a0) { return (char*)a0 + 32; }

// sub_3147c0  (orig 0x3147c0, ptr_add)
void* sdk_f_3147c0(void* a0) { return (char*)a0 + 8; }

// sub_3147d0  (orig 0x3147d0, straight)
void* sdk_f_3147d0(void* a0) { return (char*)(a0) - 24; }

// sub_314900  (orig 0x314900, ptr_add)
void* sdk_f_314900(void* a0) { return (char*)a0 + 32; }

// sub_315100  (orig 0x315100, ptr_add)
void* sdk_f_315100(void* a0) { return (char*)a0 + 8; }

// sub_315110  (orig 0x315110, straight)
void* sdk_f_315110(void* a0) { return (char*)(a0) - 24; }

// sub_315430  (orig 0x315430, ptr_add)
void* sdk_f_315430(void* a0) { return (char*)a0 + 32; }

// sub_3154f0  (orig 0x3154f0, ptr_add)
void* sdk_f_3154f0(void* a0) { return (char*)a0 + 8; }

// sub_315500  (orig 0x315500, straight)
void* sdk_f_315500(void* a0) { return (char*)(a0) - 24; }

// sub_315630  (orig 0x315630, ptr_add)
void* sdk_f_315630(void* a0) { return (char*)a0 + 32; }

// sub_315a60  (orig 0x315a60, ptr_add)
void* sdk_f_315a60(void* a0) { return (char*)a0 + 8; }

// sub_315a70  (orig 0x315a70, straight)
void* sdk_f_315a70(void* a0) { return (char*)(a0) - 24; }

// sub_317480  (orig 0x317480, ptr_add)
void* sdk_f_317480(void* a0) { return (char*)a0 + 32; }

// sub_317500  (orig 0x317500, ptr_add)
void* sdk_f_317500(void* a0) { return (char*)a0 + 8; }

// sub_317510  (orig 0x317510, straight)
void* sdk_f_317510(void* a0) { return (char*)(a0) - 24; }

// sub_3188d0  (orig 0x3188d0, ret_only)
void sdk_f_3188d0() {}

// sub_31a1c0  (orig 0x31a1c0, ret_only)
void sdk_f_31a1c0() {}

// sub_31a8f0  (orig 0x31a8f0, ret_only)
void sdk_f_31a8f0() {}

// sub_31abb0  (orig 0x31abb0, ret_only)
void sdk_f_31abb0() {}

// sub_31b170  (orig 0x31b170, straight)
void sdk_f_31b170(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(*(uint32_t*)((char*)(a1)));
    *(uint8_t*)((char*)(a0) + 1) = (uint8_t)(*(uint32_t*)((char*)(a1) + 4));
    *(uint8_t*)((char*)(a0) + 2) = (uint8_t)(*(uint32_t*)((char*)(a1) + 8));
}

// sub_31b190  (orig 0x31b190, straight)
void sdk_f_31b190(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint8_t*)((char*)(a1)));
    *(uint32_t*)((char*)(a0) + 4) = (uint32_t)(*(uint8_t*)((char*)(a1) + 1));
    *(uint32_t*)((char*)(a0) + 8) = (uint32_t)(*(uint8_t*)((char*)(a1) + 2));
}

// sub_31b9a0  (orig 0x31b9a0, const-ret)
uint32_t sdk_f_31b9a0() { return 3595418u; }

// sub_31c5c0  (orig 0x31c5c0, ptr_add)
void* sdk_f_31c5c0(void* a0) { return (char*)a0 + 16; }

// sub_31c890  (orig 0x31c890, ptr_add)
void* sdk_f_31c890(void* a0) { return (char*)a0 + 8; }

// sub_31c8a0  (orig 0x31c8a0, straight)
void* sdk_f_31c8a0(void* a0) { return (char*)(a0) - 8; }

// sub_31d160  (orig 0x31d160, ptr_add)
void* sdk_f_31d160(void* a0) { return (char*)a0 + 16; }

// sub_31d200  (orig 0x31d200, ptr_add)
void* sdk_f_31d200(void* a0) { return (char*)a0 + 8; }

// sub_31d210  (orig 0x31d210, straight)
void* sdk_f_31d210(void* a0) { return (char*)(a0) - 8; }

// sub_31d500  (orig 0x31d500, ptr_add)
void* sdk_f_31d500(void* a0) { return (char*)a0 + 16; }

// sub_31da70  (orig 0x31da70, ptr_add)
void* sdk_f_31da70(void* a0) { return (char*)a0 + 8; }

// sub_31da80  (orig 0x31da80, straight)
void* sdk_f_31da80(void* a0) { return (char*)(a0) - 8; }

