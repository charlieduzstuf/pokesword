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

namespace main { void sub_978cf0(); }
extern uint32_t main_f_c628c0();
namespace main { void sub_c629e0(); }
namespace main { void sub_c62c30(); }
namespace main { void sub_c69450(); }
namespace main { void sub_d03c40(); }
namespace main { void sub_d100d0(); }
namespace main { void sub_d349d0(); }
namespace main { void sub_13ed330(); }
namespace main { void sub_d3bca0(); }
namespace main { void sub_d51de0(); }
namespace main { void sub_c63170(); }
namespace main { void sub_d5f290(); }
namespace main { void sub_c94ae0(); }
namespace main { void sub_ca41c0(); }
namespace main { void sub_ca5e40(); }
namespace main { void Set_State_Off_3(); }
namespace main { void sub_ce0(); }
namespace main { void sub_cacd90(); }
namespace main { void sub_cae900(); }
extern void main_f_5c6850();
namespace main { void sub_caf600(); }
namespace main { void sub_cb56c0(); }
namespace main { void sub_cb6260(); }
namespace main { void sub_cb6a80(); }
namespace main { void sub_cc9550(); }
namespace main { void sub_ce45f0(); }
namespace main { void sub_13cc970(); }
namespace main { void sub_cea130(); }
namespace main { void sub_ce8ca0(); }
namespace main { void sub_cfa3b0(); }
namespace main { void sub_cffc00(); }
extern uint32_t main_f_c8bb90();
extern void main_f_c8bcf0();
extern void main_f_c8bd00();
namespace main { void sub_c8bd10(); }
namespace main { void sub_d00210(); }
namespace main { void sub_c6d5e0(); }
namespace main { void sub_d02730(); }
namespace main { void sub_d040c0(); }
namespace main { void sub_e69490(); }
namespace main { void sub_13f6d80(); }
namespace main { void sub_d05ee0(); }
namespace main { void sub_d086c0(); }
namespace main { void sub_d0c100(); }
namespace main { void sub_d0f0c0(); }
namespace main { void sub_d13470(); }
namespace main { void sub_d137f0(); }
namespace main { void sub_d2df30(); }
namespace main { void sub_d36c70(); }
namespace main { void sub_c642d0(); }
namespace main { void sub_cf2010(); }
namespace main { void sub_d48430(); }
namespace main { void sub_d4fc20(); }
namespace main { void sub_d504a0(); }
namespace main { void sub_d50d90(); }
namespace main { void sub_d514e0(); }
namespace main { void sub_d51aa0(); }
namespace main { void sub_d54e90(); }
namespace main { void sub_cdc0d0(); }
namespace main { void sub_d5c100(); }
namespace main { void sub_c72e70(); }
namespace main { void sub_c73630(); }
namespace main { void sub_c73f50(); }
namespace main { void sub_13f67a0(); }
namespace main { void sub_d616e0(); }
namespace main { void sub_13eb080(); }
namespace main { void sub_e9d210(); }
namespace main { void sub_d64290(); }
namespace main { void sub_d68110(); }
namespace main { void sub_d6a280(); }
namespace main { void sub_d6c120(); }
namespace main { void sub_d6c930(); }
namespace main { void sub_d6e3e0(); }
namespace main { void sub_d6ec10(); }
namespace main { void sub_d6f3d0(); }
namespace main { void sub_d70060(); }
namespace main { void sub_d703b0(); }
namespace main { void sub_d71fb0(); }
namespace main { void sub_d72a00(); }
namespace main { void sub_d73300(); }
namespace main { void sub_d7bbd0(); }
namespace main { void sub_d7e740(); }
namespace main { void sub_d842c0(); }
namespace main { void sub_d84970(); }
namespace main { void sub_d89550(); }
namespace main { void sub_d94ab0(); }
namespace main { void sub_d95190(); }
namespace main { void sub_d963c0(); }
namespace main { void sub_d9b8f0(); }
namespace main { void sub_d9c840(); }
namespace main { void sub_da0210(); }
namespace main { void sub_da1430(); }
namespace main { void sub_da3110(); }
namespace main { void sub_da4e70(); }
namespace main { void sub_da57d0(); }
namespace main { void sub_da6030(); }
namespace main { void sub_da63d0(); }
namespace main { void sub_da6d70(); }
namespace main { void sub_da77d0(); }
namespace main { void sub_da7f10(); }
namespace main { void sub_da87b0(); }
namespace main { void sub_da9070(); }
namespace main { void sub_da9bf0(); }
namespace main { void FE_G_IWA_KORI_HOLE(); }
namespace main { void sub_daedc0(); }
namespace main { void top_k_glove_joint(); }
namespace main { void sub_db3ca0(); }
namespace main { void sub_db5380(); }
namespace main { void sub_dbd810(); }
namespace main { void sub_dc2200(); }
namespace main { void Set_State_t0401_Switch_Yellow_b(); }
namespace main { void sub_dc8b00(); }
namespace main { void kinoko_light(); }
namespace main { void sub_dce9d0(); }
namespace main { void sub_dcf2b0(); }
namespace main { void sub_dcf560(); }
namespace main { void sub_dd2a30(); }
namespace main { void sub_ddd8e0(); }
namespace main { void sub_ddf700(); }
namespace main { void sub_ddf8c0(); }
namespace main { void sub_de0bf0(); }
namespace main { void sub_de4710(); }
namespace main { void sub_de4fd0(); }
namespace main { void sub_de8470(); }
namespace main { void sub_de9b50(); }
namespace main { void sub_deb410(); }
namespace main { void sub_e00be0(); }
namespace main { void sub_e00d90(); }
namespace main { void sub_e01000(); }
namespace main { void sub_e01230(); }
namespace main { void sub_e0b5c0(); }
namespace main { void sub_e0b770(); }
namespace main { void sub_e0b9e0(); }
namespace main { void sub_e0bc10(); }
namespace main { void sub_e10710(); }
namespace main { void sub_e107b0(); }
namespace main { void sub_e109d0(); }
namespace main { void sub_e10a70(); }
namespace main { void sub_e15190(); }
namespace main { void sub_e15340(); }
namespace main { void sub_e155b0(); }
namespace main { void sub_e157e0(); }
namespace main { void sub_e328d0(); }
namespace main { void sub_e32a80(); }
namespace main { void sub_e32cf0(); }
namespace main { void sub_e32f20(); }
namespace main { void sub_d63270(); }
namespace main { void sub_e3a6c0(); }
namespace main { void sub_c7b920(); }
namespace main { void sub_e3d4d0(); }
namespace main { void sub_e3f580(); }
namespace main { void sub_e41a80(); }
namespace main { void sub_e42ab0(); }
namespace main { void sub_e46dd0(); }
namespace main { void sub_e47be0(); }
namespace main { void sub_e4bd00(); }
namespace main { void sub_e4c3c0(); }
namespace main { void sub_c8aa60(); }
namespace main { void sub_e58d20(); }
namespace main { void sub_e5e110(); }
namespace main { void sub_e7c4c0(); }
namespace main { void sub_e60c10(); }
namespace main { void sub_e60fd0(); }
namespace main { void sub_e61170(); }
namespace main { void sub_e7feb0(); }
namespace main { void sub_e667c0(); }
namespace main { void sub_e67540(); }
namespace main { void sub_e68200(); }
namespace main { void sub_e6a0f0(); }
namespace main { void sub_e6b4f0(); }
namespace main { void sub_e6c870(); }
namespace main { void sub_14e0b90(); }
namespace main { void sub_e6e460(); }
namespace main { void sub_e72930(); }
namespace main { void sub_e67330(); }
namespace main { void sub_e734a0(); }
namespace main { void sub_e74200(); }
namespace main { void sub_e748d0(); }
namespace main { void sub_e7c250(); }
namespace main { void sub_e75330(); }
namespace main { void sub_e75d00(); }
namespace main { void sub_e75f40(); }
namespace main { void sub_e7ca50(); }
namespace main { void sub_e7efd0(); }
namespace main { void sub_e81640(); }
namespace main { void sub_e8b4f0(); }
namespace main { void sub_e8cc00(); }
namespace main { void sub_e92dc0(); }
namespace main { void sub_5d1550(); }
namespace main { void sub_e94c10(); }
namespace main { void sub_5d2800(); }
namespace main { void sub_ead240(); }
namespace main { void sub_e9d840(); }
namespace main { void sub_ea2e20(); }
namespace main { void sub_ea3e70(); }
namespace main { void sub_ea41d0(); }
namespace main { void sub_ea4450(); }
namespace main { void sub_eae960(); }
namespace main { void sub_eafb00(); }
namespace main { void sub_eb57c0(); }
namespace main { void sub_eb6100(); }
namespace main { void sub_eb7ce0(); }
namespace main { void sub_eb81a0(); }
namespace main { void sub_eb84a0(); }
namespace main { void sub_ebb330(); }
namespace main { void sub_ebb5f0(); }
namespace main { void sub_ebb700(); }
namespace main { void sub_ec1d70(); }
namespace main { void sub_ec1f10(); }
namespace main { void sub_ec2fc0(); }
namespace main { void sub_ec3210(); }
namespace main { void sub_ec65c0(); }
namespace main { void sub_ec71b0(); }
namespace main { void sub_ec85d0(); }
extern void main_f_5db430();
namespace main { void sub_ed1640(); }
namespace main { void sub_ed7ce0(); }
namespace main { void sub_ed9940(); }
namespace main { void sub_ee2040(); }
namespace main { void sub_ee21f0(); }
namespace main { void sub_ee5690(); }
namespace main { void sub_ee9e90(); }
namespace main { void sub_eed340(); }
namespace main { void sub_eed9c0(); }
namespace main { void sub_eeebe0(); }
namespace main { void sub_eeee20(); }
namespace main { void sub_eee3a0(); }
namespace main { void sub_ef0c60(); }
namespace main { void sub_ef2180(); }
namespace main { void sub_ef2850(); }
namespace main { void sub_ef2c60(); }
namespace main { void sub_ef9a90(); }
namespace main { void sub_efa5f0(); }
namespace main { void sub_efb080(); }
namespace main { void sub_c277c0(); }
namespace main { void sub_efbfb0(); }
namespace main { void sub_efca30(); }
namespace main { void sub_efe300(); }
namespace main { void sub_efdee0(); }
namespace main { void sub_efe900(); }
namespace main { void sub_eff3f0(); }
namespace main { void sub_f01320(); }
namespace main { void sub_f019e0(); }
namespace main { void sub_f04310(); }
namespace main { void sub_f045c0(); }
namespace main { void sub_f048f0(); }
namespace main { void sub_f04f10(); }
namespace main { void sub_f054e0(); }
namespace main { void sub_f06430(); }
namespace main { void sub_f07f40(); }
namespace main { void sub_f08690(); }
namespace main { void sub_f08cc0(); }
namespace main { void sub_f09800(); }
namespace main { void sub_f0a9a0(); }
namespace main { void sub_f04b30(); }
namespace main { void sub_f0b8d0(); }
namespace main { void sub_f09930(); }
namespace main { void sub_f05610(); }
namespace main { void sub_f0ded0(); }
namespace main { void sub_f0e2d0(); }
namespace main { void sub_f0e420(); }
namespace main { void sub_f111d0(); }
namespace main { void sub_f0eeb0(); }
namespace main { void sub_f14070(); }
namespace main { void sub_f16300(); }
namespace main { void sub_14ba4c0(); }
namespace main { void sub_f1ee10(); }
namespace main { void sub_f1f170(); }
namespace main { void sub_f214a0(); }
namespace main { void sub_f21af0(); }
namespace main { void sub_f21c90(); }
namespace main { void sub_f266b0(); }
namespace main { void sub_f26c30(); }
namespace main { void sub_f29f40(); }
namespace main { void sub_f2a590(); }
namespace main { void sub_f2cb20(); }
namespace main { void sub_f353a0(); }
namespace main { void sub_f36e80(); }
namespace main { void sub_f37d80(); }
namespace main { void sub_f38440(); }
namespace main { void sub_f398f0(); }
namespace main { void sub_f3af70(); }
namespace main { void sub_f3b2d0(); }
namespace main { void sub_f3cc70(); }
namespace main { void sub_f3f520(); }
namespace main { void sub_f42da0(); }
namespace main { void sub_f431c0(); }
namespace main { void sub_f43f30(); }
namespace main { void sub_f47fe0(); }
namespace main { void sub_f48700(); }
namespace main { void sub_f49c60(); }
namespace main { void sub_f4a7a0(); }
namespace main { void sub_f4ae60(); }
namespace main { void sub_f4ba90(); }
namespace main { void sub_f4c3d0(); }
namespace main { void sub_f4ce50(); }
namespace main { void sub_f4dd20(); }
namespace main { void sub_f4ed20(); }
namespace main { void sub_f4ef40(); }
namespace main { void sub_f4f8e0(); }
namespace main { void sub_f51570(); }
namespace main { void sub_f52250(); }
namespace main { void sub_f53470(); }
namespace main { void sub_f54630(); }
namespace main { void sub_f54c10(); }
namespace main { void sub_f56e60(); }
namespace main { void sub_f58f10(); }
namespace main { void sub_f5c270(); }
namespace main { void sub_f5f340(); }
namespace main { void sub_f60140(); }
namespace main { void sub_f64ab0(); }
namespace main { void sub_f6aa40(); }
namespace main { void sub_f6d2d0(); }
namespace main { void sub_f6ed70(); }
namespace main { void sub_f71590(); }

// sub_c8b570  (orig 0xc8b570, tailcall)
void main_f_c8b570() { main::sub_978cf0(); }

// sub_c8bb90  (orig 0xc8bb90, tailcall)
uint32_t main_f_c8bb90() { return main_f_c628c0(); }

// sub_c8bcf0  (orig 0xc8bcf0, tailcall)
void main_f_c8bcf0() { main::sub_c629e0(); }

// sub_c8bd00  (orig 0xc8bd00, tailcall)
void main_f_c8bd00() { main::sub_c62c30(); }

// sub_c8be30  (orig 0xc8be30, tailcall)
void main_f_c8be30() { main::sub_978cf0(); }

// sub_c8c590  (orig 0xc8c590, tailcall)
void main_f_c8c590() { main::sub_978cf0(); }

// sub_c8c610  (orig 0xc8c610, mov_ret)
uint32_t main_f_c8c610() { return 0; }

// sub_c8d280  (orig 0xc8d280, tailcall)
void main_f_c8d280() { main::sub_c69450(); }

// sub_c8d290  (orig 0xc8d290, tailcall)
void main_f_c8d290() { main::sub_d03c40(); }

// sub_c8d2c0  (orig 0xc8d2c0, tailcall)
void main_f_c8d2c0() { main::sub_d03c40(); }

// sub_c8d2d0  (orig 0xc8d2d0, tailcall)
void main_f_c8d2d0() { main::sub_d03c40(); }

// sub_c8e920  (orig 0xc8e920, tailcall)
void main_f_c8e920() { main::sub_c69450(); }

// sub_c8e930  (orig 0xc8e930, tailcall)
void main_f_c8e930() { main::sub_d100d0(); }

// sub_c8e960  (orig 0xc8e960, tailcall)
void main_f_c8e960() { main::sub_d100d0(); }

// sub_c8e970  (orig 0xc8e970, tailcall)
void main_f_c8e970() { main::sub_d100d0(); }

// sub_c903a0  (orig 0xc903a0, tailcall)
void main_f_c903a0() { main::sub_c69450(); }

// sub_c903b0  (orig 0xc903b0, tailcall)
void main_f_c903b0() { main::sub_d349d0(); }

// sub_c903e0  (orig 0xc903e0, tailcall)
void main_f_c903e0() { main::sub_d349d0(); }

// sub_c903f0  (orig 0xc903f0, tailcall)
void main_f_c903f0() { main::sub_d349d0(); }

// sub_c90b60  (orig 0xc90b60, tailcall)
void main_f_c90b60() { main::sub_13ed330(); }

// sub_c90c90  (orig 0xc90c90, tailcall)
void main_f_c90c90() { main::sub_13ed330(); }

// sub_c90ca0  (orig 0xc90ca0, tailcall)
void main_f_c90ca0() { main::sub_13ed330(); }

// sub_c91620  (orig 0xc91620, tailcall)
void main_f_c91620() { main::sub_d3bca0(); }

// sub_c916d0  (orig 0xc916d0, tailcall)
void main_f_c916d0() { main::sub_d3bca0(); }

// sub_c916e0  (orig 0xc916e0, tailcall)
void main_f_c916e0() { main::sub_d3bca0(); }

// sub_c92550  (orig 0xc92550, tailcall)
void main_f_c92550() { main::sub_978cf0(); }

// sub_c92860  (orig 0xc92860, tailcall)
void main_f_c92860() { main::sub_c69450(); }

// sub_c92870  (orig 0xc92870, tailcall)
void main_f_c92870() { main::sub_d51de0(); }

// sub_c928a0  (orig 0xc928a0, tailcall)
void main_f_c928a0() { main::sub_d51de0(); }

// sub_c928b0  (orig 0xc928b0, tailcall)
void main_f_c928b0() { main::sub_d51de0(); }

// sub_c93340  (orig 0xc93340, tailcall)
uint32_t main_f_c93340() { return main_f_c628c0(); }

// sub_c93450  (orig 0xc93450, tailcall)
void main_f_c93450() { main::sub_c629e0(); }

// sub_c93460  (orig 0xc93460, tailcall)
void main_f_c93460() { main::sub_c62c30(); }

// sub_c93470  (orig 0xc93470, tailcall)
void main_f_c93470() { main::sub_978cf0(); }

// sub_c942f0  (orig 0xc942f0, tailcall)
void main_f_c942f0() { main::sub_c63170(); }

// sub_c945d0  (orig 0xc945d0, tailcall)
void main_f_c945d0() { main::sub_d5f290(); }

// sub_c946c0  (orig 0xc946c0, tailcall)
void main_f_c946c0() { main::sub_d5f290(); }

// sub_c946d0  (orig 0xc946d0, tailcall)
void main_f_c946d0() { main::sub_d5f290(); }

// sub_c94cf0  (orig 0xc94cf0, tailcall)
void main_f_c94cf0() { main::sub_c94ae0(); }

// sub_c95350  (orig 0xc95350, ret_only)
void main_f_c95350() {}

// sub_c95360  (orig 0xc95360, copy2)
void main_f_c95360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c95370  (orig 0xc95370, copy2)
void main_f_c95370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c95ac0  (orig 0xc95ac0, setter)
void main_f_c95ac0(void* a0) { *(uint8_t*)((char*)(a0) + 132) = 0; }

// sub_c95d60  (orig 0xc95d60, compare)
bool main_f_c95d60(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 96)) == (uint64_t)(2); }

// sub_c99be0  (orig 0xc99be0, getter)
uint8_t main_f_c99be0(void* a0) { return *(uint8_t*)((char*)(a0) + 196); }

// sub_c99c50  (orig 0xc99c50, compare)
bool main_f_c99c50(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 96)) == (uint64_t)(6); }

// sub_c99c60  (orig 0xc99c60, getter)
uint8_t main_f_c99c60(void* a0) { return *(uint8_t*)((char*)(a0) + 464); }

// sub_c9be60  (orig 0xc9be60, setter)
void main_f_c9be60(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_c9be70  (orig 0xc9be70, straight)
void main_f_c9be70(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_c9ecd0  (orig 0xc9ecd0, straight)
void main_f_c9ecd0(void* a0) {
    *(uint32_t*)((char*)(a0) + 164) = 45;
}

// sub_c9f590  (orig 0xc9f590, ret_only)
void main_f_c9f590() {}

// sub_c9ffd0  (orig 0xc9ffd0, ret_only)
void main_f_c9ffd0() {}

// sub_ca07b0  (orig 0xca07b0, setter)
void main_f_ca07b0(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_ca07c0  (orig 0xca07c0, straight)
void main_f_ca07c0(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_ca2420  (orig 0xca2420, setter)
void main_f_ca2420(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_ca2430  (orig 0xca2430, straight)
void main_f_ca2430(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_ca4350  (orig 0xca4350, tailcall)
void main_f_ca4350() { main::sub_ca41c0(); }

// sub_ca4e20  (orig 0xca4e20, compare)
bool main_f_ca4e20(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 240)) == (uint64_t)(2); }

// sub_ca6010  (orig 0xca6010, tailcall)
void main_f_ca6010() { main::sub_ca5e40(); }

// sub_ca7d40  (orig 0xca7d40, tailcall)
void main_f_ca7d40() { main::Set_State_Off_3(); }

// sub_ca95e0  (orig 0xca95e0, ret_only)
void main_f_ca95e0() {}

// sub_cac9e0  (orig 0xcac9e0, tailcall)
void main_f_cac9e0() { main::sub_ce0(); }

// sub_cacae0  (orig 0xcacae0, tailcall)
void main_f_cacae0() { main::sub_ce0(); }

// sub_cacbe0  (orig 0xcacbe0, tailcall)
void main_f_cacbe0() { main::sub_ce0(); }

// sub_cacf30  (orig 0xcacf30, tailcall)
void main_f_cacf30() { main::sub_cacd90(); }

// sub_caeb60  (orig 0xcaeb60, tailcall)
void main_f_caeb60() { main::sub_cae900(); }

// sub_caf460  (orig 0xcaf460, tailcall)
void main_f_caf460() { main_f_5c6850(); }

// sub_caf7a0  (orig 0xcaf7a0, tailcall)
void main_f_caf7a0() { main::sub_caf600(); }

// sub_cb09f0  (orig 0xcb09f0, ret_only)
void main_f_cb09f0() {}

// sub_cb1070  (orig 0xcb1070, ret_only)
void main_f_cb1070() {}

// sub_cb12b0  (orig 0xcb12b0, ret_only)
void main_f_cb12b0() {}

// sub_cb12c0  (orig 0xcb12c0, copy2)
void main_f_cb12c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cb12d0  (orig 0xcb12d0, copy2)
void main_f_cb12d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cb3460  (orig 0xcb3460, setter-chain)
void main_f_cb3460(void* a0) { *(uint32_t*)((char*)(a0) + 152) = 0; *(uint16_t*)((char*)(a0) + 156) = 0; }

// sub_cb3470  (orig 0xcb3470, straight)
void main_f_cb3470(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0) + 152) = *(uint32_t*)((char*)(a1));
    *(uint16_t*)((char*)(a0) + 156) = *(uint16_t*)((char*)(a2));
}

// sub_cb57a0  (orig 0xcb57a0, tailcall)
void main_f_cb57a0() { main::sub_cb56c0(); }

// sub_cb5bc0  (orig 0xcb5bc0, ret_only)
void main_f_cb5bc0() {}

// sub_cb5bd0  (orig 0xcb5bd0, ret_only)
void main_f_cb5bd0() {}

// sub_cb6400  (orig 0xcb6400, tailcall)
void main_f_cb6400() { main::sub_cb6260(); }

// sub_cb6c40  (orig 0xcb6c40, tailcall)
void main_f_cb6c40() { main::sub_cb6a80(); }

// sub_cb7100  (orig 0xcb7100, tailcall)
void main_f_cb7100() { main_f_5c6850(); }

// sub_cc9800  (orig 0xcc9800, tailcall)
void main_f_cc9800() { main::sub_cc9550(); }

// sub_ccae70  (orig 0xccae70, getter)
uint64_t main_f_ccae70(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_ccaf00  (orig 0xccaf00, getter)
uint64_t main_f_ccaf00(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_ccaf10  (orig 0xccaf10, copy2)
void main_f_ccaf10(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 24) = *(uint64_t*)((char*)(a1)); }

// sub_ccb020  (orig 0xccb020, getter)
uint8_t main_f_ccb020(void* a0) { return *(uint8_t*)((char*)(a0) + 36); }

// sub_ccb040  (orig 0xccb040, getter)
uint8_t main_f_ccb040(void* a0) { return *(uint8_t*)((char*)(a0) + 37); }

// sub_ccb060  (orig 0xccb060, setter)
void main_f_ccb060(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 40) = a1; }

// sub_ccb0b0  (orig 0xccb0b0, setter)
void main_f_ccb0b0(void* a0, float a1) { *(float*)((char*)(a0) + 32) = a1; }

// sub_ccb310  (orig 0xccb310, getter)
uint8_t main_f_ccb310(void* a0) { return *(uint8_t*)((char*)(a0) + 120); }

// sub_ccb3b0  (orig 0xccb3b0, mov_ret)
uint32_t main_f_ccb3b0() { return 0; }

// sub_ccb560  (orig 0xccb560, ret_only)
void main_f_ccb560() {}

// sub_ccb570  (orig 0xccb570, copy2)
void main_f_ccb570(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccb580  (orig 0xccb580, copy2)
void main_f_ccb580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccc260  (orig 0xccc260, mov_ret)
uint32_t main_f_ccc260() { return 0; }

// sub_ccc2d0  (orig 0xccc2d0, ret_only)
void main_f_ccc2d0() {}

// sub_ccc2e0  (orig 0xccc2e0, copy2)
void main_f_ccc2e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccc2f0  (orig 0xccc2f0, copy2)
void main_f_ccc2f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccc980  (orig 0xccc980, mov_ret)
uint32_t main_f_ccc980() { return 0; }

// sub_ccc9f0  (orig 0xccc9f0, ret_only)
void main_f_ccc9f0() {}

// sub_ccca00  (orig 0xccca00, copy2)
void main_f_ccca00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccca10  (orig 0xccca10, copy2)
void main_f_ccca10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccd0a0  (orig 0xccd0a0, mov_ret)
uint32_t main_f_ccd0a0() { return 0; }

// sub_ccd110  (orig 0xccd110, ret_only)
void main_f_ccd110() {}

// sub_ccd120  (orig 0xccd120, copy2)
void main_f_ccd120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccd130  (orig 0xccd130, copy2)
void main_f_ccd130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccda40  (orig 0xccda40, mov_ret)
uint32_t main_f_ccda40() { return 0; }

// sub_ccda80  (orig 0xccda80, mov_ret)
uint32_t main_f_ccda80() { return 1; }

// sub_ccdaa0  (orig 0xccdaa0, ret_only)
void main_f_ccdaa0() {}

// sub_ccdab0  (orig 0xccdab0, copy2)
void main_f_ccdab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccdac0  (orig 0xccdac0, copy2)
void main_f_ccdac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cce150  (orig 0xcce150, mov_ret)
uint32_t main_f_cce150() { return 0; }

// sub_cce190  (orig 0xcce190, mov_ret)
uint32_t main_f_cce190() { return 1; }

// sub_cce1b0  (orig 0xcce1b0, ret_only)
void main_f_cce1b0() {}

// sub_cce1c0  (orig 0xcce1c0, copy2)
void main_f_cce1c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cce1d0  (orig 0xcce1d0, copy2)
void main_f_cce1d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cce860  (orig 0xcce860, mov_ret)
uint32_t main_f_cce860() { return 0; }

// sub_cce8a0  (orig 0xcce8a0, mov_ret)
uint32_t main_f_cce8a0() { return 1; }

// sub_cce8c0  (orig 0xcce8c0, ret_only)
void main_f_cce8c0() {}

// sub_cce8d0  (orig 0xcce8d0, copy2)
void main_f_cce8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cce8e0  (orig 0xcce8e0, copy2)
void main_f_cce8e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccef70  (orig 0xccef70, mov_ret)
uint32_t main_f_ccef70() { return 0; }

// sub_ccefb0  (orig 0xccefb0, mov_ret)
uint32_t main_f_ccefb0() { return 1; }

// sub_ccefd0  (orig 0xccefd0, ret_only)
void main_f_ccefd0() {}

// sub_ccefe0  (orig 0xccefe0, copy2)
void main_f_ccefe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cceff0  (orig 0xcceff0, copy2)
void main_f_cceff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccf630  (orig 0xccf630, ret_only)
void main_f_ccf630() {}

// sub_ccf640  (orig 0xccf640, copy2)
void main_f_ccf640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccf650  (orig 0xccf650, copy2)
void main_f_ccf650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccf820  (orig 0xccf820, mov_ret)
uint32_t main_f_ccf820() { return 0; }

// sub_ccf860  (orig 0xccf860, mov_ret)
uint32_t main_f_ccf860() { return 1; }

// sub_ccf880  (orig 0xccf880, ret_only)
void main_f_ccf880() {}

// sub_ccf890  (orig 0xccf890, copy2)
void main_f_ccf890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccf8a0  (orig 0xccf8a0, copy2)
void main_f_ccf8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccff30  (orig 0xccff30, mov_ret)
uint32_t main_f_ccff30() { return 0; }

// sub_ccff70  (orig 0xccff70, mov_ret)
uint32_t main_f_ccff70() { return 1; }

// sub_ccff90  (orig 0xccff90, ret_only)
void main_f_ccff90() {}

// sub_ccffa0  (orig 0xccffa0, copy2)
void main_f_ccffa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccffb0  (orig 0xccffb0, copy2)
void main_f_ccffb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd0640  (orig 0xcd0640, mov_ret)
uint32_t main_f_cd0640() { return 0; }

// sub_cd0680  (orig 0xcd0680, mov_ret)
uint32_t main_f_cd0680() { return 1; }

// sub_cd06a0  (orig 0xcd06a0, ret_only)
void main_f_cd06a0() {}

// sub_cd06b0  (orig 0xcd06b0, copy2)
void main_f_cd06b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd06c0  (orig 0xcd06c0, copy2)
void main_f_cd06c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd0d50  (orig 0xcd0d50, mov_ret)
uint32_t main_f_cd0d50() { return 0; }

// sub_cd0d90  (orig 0xcd0d90, mov_ret)
uint32_t main_f_cd0d90() { return 1; }

// sub_cd0db0  (orig 0xcd0db0, ret_only)
void main_f_cd0db0() {}

// sub_cd0dc0  (orig 0xcd0dc0, copy2)
void main_f_cd0dc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd0dd0  (orig 0xcd0dd0, copy2)
void main_f_cd0dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd1460  (orig 0xcd1460, mov_ret)
uint32_t main_f_cd1460() { return 0; }

// sub_cd14a0  (orig 0xcd14a0, mov_ret)
uint32_t main_f_cd14a0() { return 1; }

// sub_cd14c0  (orig 0xcd14c0, ret_only)
void main_f_cd14c0() {}

// sub_cd14d0  (orig 0xcd14d0, copy2)
void main_f_cd14d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd14e0  (orig 0xcd14e0, copy2)
void main_f_cd14e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd1b70  (orig 0xcd1b70, mov_ret)
uint32_t main_f_cd1b70() { return 1; }

// sub_cd1be0  (orig 0xcd1be0, ret_only)
void main_f_cd1be0() {}

// sub_cd1bf0  (orig 0xcd1bf0, copy2)
void main_f_cd1bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd1c00  (orig 0xcd1c00, copy2)
void main_f_cd1c00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd2290  (orig 0xcd2290, mov_ret)
uint32_t main_f_cd2290() { return 0; }

// sub_cd22d0  (orig 0xcd22d0, mov_ret)
uint32_t main_f_cd22d0() { return 1; }

// sub_cd22f0  (orig 0xcd22f0, ret_only)
void main_f_cd22f0() {}

// sub_cd2300  (orig 0xcd2300, copy2)
void main_f_cd2300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd2310  (orig 0xcd2310, copy2)
void main_f_cd2310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd29a0  (orig 0xcd29a0, mov_ret)
uint32_t main_f_cd29a0() { return 0; }

// sub_cd29e0  (orig 0xcd29e0, mov_ret)
uint32_t main_f_cd29e0() { return 1; }

// sub_cd2a00  (orig 0xcd2a00, ret_only)
void main_f_cd2a00() {}

// sub_cd2a10  (orig 0xcd2a10, copy2)
void main_f_cd2a10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd2a20  (orig 0xcd2a20, copy2)
void main_f_cd2a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd30b0  (orig 0xcd30b0, mov_ret)
uint32_t main_f_cd30b0() { return 0; }

// sub_cd30f0  (orig 0xcd30f0, mov_ret)
uint32_t main_f_cd30f0() { return 1; }

// sub_cd3110  (orig 0xcd3110, ret_only)
void main_f_cd3110() {}

// sub_cd3120  (orig 0xcd3120, copy2)
void main_f_cd3120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd3130  (orig 0xcd3130, copy2)
void main_f_cd3130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd37c0  (orig 0xcd37c0, mov_ret)
uint32_t main_f_cd37c0() { return 0; }

// sub_cd3800  (orig 0xcd3800, mov_ret)
uint32_t main_f_cd3800() { return 1; }

// sub_cd3820  (orig 0xcd3820, ret_only)
void main_f_cd3820() {}

// sub_cd3830  (orig 0xcd3830, copy2)
void main_f_cd3830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd3840  (orig 0xcd3840, copy2)
void main_f_cd3840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd3ed0  (orig 0xcd3ed0, mov_ret)
uint32_t main_f_cd3ed0() { return 0; }

// sub_cd3f10  (orig 0xcd3f10, mov_ret)
uint32_t main_f_cd3f10() { return 1; }

// sub_cd3f30  (orig 0xcd3f30, ret_only)
void main_f_cd3f30() {}

// sub_cd3f40  (orig 0xcd3f40, copy2)
void main_f_cd3f40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd3f50  (orig 0xcd3f50, copy2)
void main_f_cd3f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd45e0  (orig 0xcd45e0, mov_ret)
uint32_t main_f_cd45e0() { return 0; }

// sub_cd4620  (orig 0xcd4620, mov_ret)
uint32_t main_f_cd4620() { return 1; }

// sub_cd4640  (orig 0xcd4640, ret_only)
void main_f_cd4640() {}

// sub_cd4650  (orig 0xcd4650, copy2)
void main_f_cd4650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd4660  (orig 0xcd4660, copy2)
void main_f_cd4660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd4cf0  (orig 0xcd4cf0, mov_ret)
uint32_t main_f_cd4cf0() { return 0; }

// sub_cd4d30  (orig 0xcd4d30, mov_ret)
uint32_t main_f_cd4d30() { return 1; }

// sub_cd4d50  (orig 0xcd4d50, ret_only)
void main_f_cd4d50() {}

// sub_cd4d60  (orig 0xcd4d60, copy2)
void main_f_cd4d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd4d70  (orig 0xcd4d70, copy2)
void main_f_cd4d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd5400  (orig 0xcd5400, mov_ret)
uint32_t main_f_cd5400() { return 1; }

// sub_cd5470  (orig 0xcd5470, ret_only)
void main_f_cd5470() {}

// sub_cd5480  (orig 0xcd5480, copy2)
void main_f_cd5480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd5490  (orig 0xcd5490, copy2)
void main_f_cd5490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd5b20  (orig 0xcd5b20, mov_ret)
uint32_t main_f_cd5b20() { return 0; }

// sub_cd5b60  (orig 0xcd5b60, mov_ret)
uint32_t main_f_cd5b60() { return 1; }

// sub_cd5b80  (orig 0xcd5b80, ret_only)
void main_f_cd5b80() {}

// sub_cd5b90  (orig 0xcd5b90, copy2)
void main_f_cd5b90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd5ba0  (orig 0xcd5ba0, copy2)
void main_f_cd5ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd6230  (orig 0xcd6230, mov_ret)
uint32_t main_f_cd6230() { return 0; }

// sub_cd6270  (orig 0xcd6270, mov_ret)
uint32_t main_f_cd6270() { return 1; }

// sub_cd6290  (orig 0xcd6290, ret_only)
void main_f_cd6290() {}

// sub_cd62a0  (orig 0xcd62a0, copy2)
void main_f_cd62a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd62b0  (orig 0xcd62b0, copy2)
void main_f_cd62b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd6940  (orig 0xcd6940, mov_ret)
uint32_t main_f_cd6940() { return 0; }

// sub_cd6980  (orig 0xcd6980, mov_ret)
uint32_t main_f_cd6980() { return 1; }

// sub_cd69a0  (orig 0xcd69a0, ret_only)
void main_f_cd69a0() {}

// sub_cd69b0  (orig 0xcd69b0, copy2)
void main_f_cd69b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd69c0  (orig 0xcd69c0, copy2)
void main_f_cd69c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd7050  (orig 0xcd7050, mov_ret)
uint32_t main_f_cd7050() { return 0; }

// sub_cd7090  (orig 0xcd7090, mov_ret)
uint32_t main_f_cd7090() { return 1; }

// sub_cd70b0  (orig 0xcd70b0, ret_only)
void main_f_cd70b0() {}

// sub_cd70c0  (orig 0xcd70c0, copy2)
void main_f_cd70c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd70d0  (orig 0xcd70d0, copy2)
void main_f_cd70d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd7760  (orig 0xcd7760, mov_ret)
uint32_t main_f_cd7760() { return 0; }

// sub_cd77a0  (orig 0xcd77a0, mov_ret)
uint32_t main_f_cd77a0() { return 1; }

// sub_cd77c0  (orig 0xcd77c0, ret_only)
void main_f_cd77c0() {}

// sub_cd77d0  (orig 0xcd77d0, copy2)
void main_f_cd77d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd77e0  (orig 0xcd77e0, copy2)
void main_f_cd77e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd7e70  (orig 0xcd7e70, mov_ret)
uint32_t main_f_cd7e70() { return 0; }

// sub_cd7eb0  (orig 0xcd7eb0, mov_ret)
uint32_t main_f_cd7eb0() { return 1; }

// sub_cd7ed0  (orig 0xcd7ed0, ret_only)
void main_f_cd7ed0() {}

// sub_cd7ee0  (orig 0xcd7ee0, copy2)
void main_f_cd7ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd7ef0  (orig 0xcd7ef0, copy2)
void main_f_cd7ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd8580  (orig 0xcd8580, mov_ret)
uint32_t main_f_cd8580() { return 0; }

// sub_cd85c0  (orig 0xcd85c0, mov_ret)
uint32_t main_f_cd85c0() { return 1; }

// sub_cd85e0  (orig 0xcd85e0, ret_only)
void main_f_cd85e0() {}

// sub_cd85f0  (orig 0xcd85f0, copy2)
void main_f_cd85f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd8600  (orig 0xcd8600, copy2)
void main_f_cd8600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd8c90  (orig 0xcd8c90, mov_ret)
uint32_t main_f_cd8c90() { return 0; }

// sub_cd8cd0  (orig 0xcd8cd0, mov_ret)
uint32_t main_f_cd8cd0() { return 1; }

// sub_cd8cf0  (orig 0xcd8cf0, ret_only)
void main_f_cd8cf0() {}

// sub_cd8d00  (orig 0xcd8d00, copy2)
void main_f_cd8d00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd8d10  (orig 0xcd8d10, copy2)
void main_f_cd8d10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd93a0  (orig 0xcd93a0, mov_ret)
uint32_t main_f_cd93a0() { return 0; }

// sub_cd93e0  (orig 0xcd93e0, mov_ret)
uint32_t main_f_cd93e0() { return 1; }

// sub_cd9400  (orig 0xcd9400, ret_only)
void main_f_cd9400() {}

// sub_cd9410  (orig 0xcd9410, copy2)
void main_f_cd9410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd9420  (orig 0xcd9420, copy2)
void main_f_cd9420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd9ab0  (orig 0xcd9ab0, mov_ret)
uint32_t main_f_cd9ab0() { return 0; }

// sub_cd9af0  (orig 0xcd9af0, mov_ret)
uint32_t main_f_cd9af0() { return 1; }

// sub_cd9b10  (orig 0xcd9b10, ret_only)
void main_f_cd9b10() {}

// sub_cd9b20  (orig 0xcd9b20, copy2)
void main_f_cd9b20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd9b30  (orig 0xcd9b30, copy2)
void main_f_cd9b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cda1c0  (orig 0xcda1c0, mov_ret)
uint32_t main_f_cda1c0() { return 0; }

// sub_cda200  (orig 0xcda200, mov_ret)
uint32_t main_f_cda200() { return 1; }

// sub_cda220  (orig 0xcda220, ret_only)
void main_f_cda220() {}

// sub_cda230  (orig 0xcda230, copy2)
void main_f_cda230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cda240  (orig 0xcda240, copy2)
void main_f_cda240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cda8d0  (orig 0xcda8d0, mov_ret)
uint32_t main_f_cda8d0() { return 1; }

// sub_cda940  (orig 0xcda940, ret_only)
void main_f_cda940() {}

// sub_cda950  (orig 0xcda950, copy2)
void main_f_cda950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cda960  (orig 0xcda960, copy2)
void main_f_cda960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdae90  (orig 0xcdae90, ret_only)
void main_f_cdae90() {}

// sub_cdaea0  (orig 0xcdaea0, ret_only)
void main_f_cdaea0() {}

// sub_cdaeb0  (orig 0xcdaeb0, ret_only)
void main_f_cdaeb0() {}

// sub_cdbd20  (orig 0xcdbd20, ret_only)
void main_f_cdbd20() {}

// sub_cdbd30  (orig 0xcdbd30, copy2)
void main_f_cdbd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdbd40  (orig 0xcdbd40, copy2)
void main_f_cdbd40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdbe70  (orig 0xcdbe70, ret_only)
void main_f_cdbe70() {}

// sub_cdc050  (orig 0xcdc050, ret_only)
void main_f_cdc050() {}

// sub_cdc060  (orig 0xcdc060, copy2)
void main_f_cdc060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdc070  (orig 0xcdc070, copy2)
void main_f_cdc070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdc0a0  (orig 0xcdc0a0, ret_only)
void main_f_cdc0a0() {}

// sub_cdc0b0  (orig 0xcdc0b0, copy2)
void main_f_cdc0b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdc0c0  (orig 0xcdc0c0, copy2)
void main_f_cdc0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdc7a0  (orig 0xcdc7a0, ret_only)
void main_f_cdc7a0() {}

// sub_cdcae0  (orig 0xcdcae0, ret_only)
void main_f_cdcae0() {}

// sub_cdcaf0  (orig 0xcdcaf0, copy2)
void main_f_cdcaf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdcb00  (orig 0xcdcb00, copy2)
void main_f_cdcb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdcda0  (orig 0xcdcda0, ret_only)
void main_f_cdcda0() {}

// sub_cdce60  (orig 0xcdce60, ret_only)
void main_f_cdce60() {}

// sub_cdce70  (orig 0xcdce70, copy2)
void main_f_cdce70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdce80  (orig 0xcdce80, copy2)
void main_f_cdce80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ce00b0  (orig 0xce00b0, ret_only)
void main_f_ce00b0() {}

// sub_ce00c0  (orig 0xce00c0, ret_only)
void main_f_ce00c0() {}

// sub_ce00d0  (orig 0xce00d0, ret_only)
void main_f_ce00d0() {}

// sub_ce02f0  (orig 0xce02f0, strlit-ret)
const char *main_f_ce02f0() { static char g_f_ce02f0[1]; __asm__ volatile("" ::: "memory"); return g_f_ce02f0; }

// sub_ce08f0  (orig 0xce08f0, compare)
bool main_f_ce08f0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 104)) != (uint64_t)(0); }

// sub_ce0de0  (orig 0xce0de0, ret_only)
void main_f_ce0de0() {}

// sub_ce0df0  (orig 0xce0df0, copy2)
void main_f_ce0df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ce0e00  (orig 0xce0e00, copy2)
void main_f_ce0e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ce4870  (orig 0xce4870, tailcall)
void main_f_ce4870() { main::sub_ce45f0(); }

// sub_ce7590  (orig 0xce7590, tailcall)
void main_f_ce7590() { main::sub_978cf0(); }

// sub_ce75a0  (orig 0xce75a0, tailcall)
void main_f_ce75a0() { main::sub_13cc970(); }

// sub_ce75d0  (orig 0xce75d0, tailcall)
void main_f_ce75d0() { main::sub_13cc970(); }

// sub_ce75e0  (orig 0xce75e0, tailcall)
void main_f_ce75e0() { main::sub_13cc970(); }

// sub_ce8800  (orig 0xce8800, ret_only)
void main_f_ce8800() {}

// sub_ce9e70  (orig 0xce9e70, tailcall)
void main_f_ce9e70() { main::sub_cea130(); }

// sub_ce9e80  (orig 0xce9e80, mov_ret)
uint32_t main_f_ce9e80() { return 1; }

// sub_ce9e90  (orig 0xce9e90, tailcall)
void main_f_ce9e90() { main::sub_ce8ca0(); }

// sub_ce9ff0  (orig 0xce9ff0, tailcall)
void main_f_ce9ff0() { main::sub_cea130(); }

// sub_cea000  (orig 0xcea000, tailcall)
void main_f_cea000() { main::sub_cea130(); }

// sub_cea2e0  (orig 0xcea2e0, ret_only)
void main_f_cea2e0() {}

// sub_cea2f0  (orig 0xcea2f0, copy2)
void main_f_cea2f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cea300  (orig 0xcea300, copy2)
void main_f_cea300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cec7e0  (orig 0xcec7e0, ret_only)
void main_f_cec7e0() {}

// sub_cee6c0  (orig 0xcee6c0, ret_only)
void main_f_cee6c0() {}

// sub_cee6d0  (orig 0xcee6d0, copy2)
void main_f_cee6d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cee6e0  (orig 0xcee6e0, copy2)
void main_f_cee6e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cf23d0  (orig 0xcf23d0, ret_only)
void main_f_cf23d0() {}

// sub_cf25b0  (orig 0xcf25b0, mov_ret)
uint32_t main_f_cf25b0() { return 1; }

// sub_cf25c0  (orig 0xcf25c0, getter)
float main_f_cf25c0(void* a0) { return *(float*)((char*)(a0) + 1452); }

// sub_cf25d0  (orig 0xcf25d0, straight)
void main_f_cf25d0(void* a0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a0) + 392) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 1360) = *(uint64_t*)((char*)(a2));
}

// sub_cf41f0  (orig 0xcf41f0, ret_only)
void main_f_cf41f0() {}

// sub_cf43a0  (orig 0xcf43a0, copy2)
void main_f_cf43a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cf43b0  (orig 0xcf43b0, copy2)
void main_f_cf43b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cf43c0  (orig 0xcf43c0, tailcall)
void main_f_cf43c0() { main::sub_ce0(); }

// sub_cf4430  (orig 0xcf4430, ret_only)
void main_f_cf4430() {}

// sub_cf4440  (orig 0xcf4440, tailcall)
void main_f_cf4440() { main::sub_ce0(); }

// sub_cf4520  (orig 0xcf4520, ret_only)
void main_f_cf4520() {}

// sub_cf4f90  (orig 0xcf4f90, ret_only)
void main_f_cf4f90() {}

// sub_cf4fa0  (orig 0xcf4fa0, ret_only)
void main_f_cf4fa0() {}

// sub_cfa360  (orig 0xcfa360, ret_only)
void main_f_cfa360() {}

// sub_cfa4b0  (orig 0xcfa4b0, tailcall)
void main_f_cfa4b0() { main::sub_cfa3b0(); }

// sub_cfa880  (orig 0xcfa880, straight)
void main_f_cfa880(void* a0) {
    *(uint8_t*)((char*)(a0) + 113) = (uint8_t)(1);
}

// sub_cfa890  (orig 0xcfa890, setter)
void main_f_cfa890(void* a0) { *(uint8_t*)((char*)(a0) + 113) = 0; }

// sub_cfb0a0  (orig 0xcfb0a0, straight)
void main_f_cfb0a0(void* a0) {
    *(uint8_t*)((char*)(a0) + 145) = (uint8_t)(1);
}

// sub_cfb0b0  (orig 0xcfb0b0, setter)
void main_f_cfb0b0(void* a0) { *(uint8_t*)((char*)(a0) + 145) = 0; }

// sub_cfb150  (orig 0xcfb150, straight)
void main_f_cfb150(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1));
}

// sub_cfb180  (orig 0xcfb180, setter)
void main_f_cfb180(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 96) = a1; }

// sub_cfb190  (orig 0xcfb190, setter)
void main_f_cfb190(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 100) = a1; }

// sub_cfb1a0  (orig 0xcfb1a0, setter)
void main_f_cfb1a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 104) = a1; }

// sub_cfb1b0  (orig 0xcfb1b0, getter)
uint32_t main_f_cfb1b0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_cfb1c0  (orig 0xcfb1c0, getter)
uint32_t main_f_cfb1c0(void* a0) { return *(uint32_t*)((char*)(a0) + 100); }

// sub_cfb1d0  (orig 0xcfb1d0, getter)
uint32_t main_f_cfb1d0(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_cfb1e0  (orig 0xcfb1e0, straight)
void main_f_cfb1e0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 136) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 128) = *(uint64_t*)((char*)(a1));
}

// sub_cfc230  (orig 0xcfc230, straight)
void main_f_cfc230(void* a0) {
    *(uint8_t*)((char*)(a0) + 129) = (uint8_t)(1);
}

// sub_cfc240  (orig 0xcfc240, setter)
void main_f_cfc240(void* a0) { *(uint8_t*)((char*)(a0) + 129) = 0; }

// sub_cfc550  (orig 0xcfc550, setter)
void main_f_cfc550(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 96) = a1; }

// sub_cfc560  (orig 0xcfc560, getter)
uint32_t main_f_cfc560(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_cfc570  (orig 0xcfc570, straight)
void main_f_cfc570(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1));
}

// sub_cfe180  (orig 0xcfe180, ret_only)
void main_f_cfe180() {}

// sub_cfe590  (orig 0xcfe590, copy2)
void main_f_cfe590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe5a0  (orig 0xcfe5a0, copy2)
void main_f_cfe5a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe5c0  (orig 0xcfe5c0, ret_only)
void main_f_cfe5c0() {}

// sub_cfe760  (orig 0xcfe760, copy2)
void main_f_cfe760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe770  (orig 0xcfe770, copy2)
void main_f_cfe770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe790  (orig 0xcfe790, ret_only)
void main_f_cfe790() {}

// sub_cfe7a0  (orig 0xcfe7a0, copy2)
void main_f_cfe7a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe7b0  (orig 0xcfe7b0, copy2)
void main_f_cfe7b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe7d0  (orig 0xcfe7d0, ret_only)
void main_f_cfe7d0() {}

// sub_cfe7e0  (orig 0xcfe7e0, copy2)
void main_f_cfe7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe7f0  (orig 0xcfe7f0, copy2)
void main_f_cfe7f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe850  (orig 0xcfe850, straight)
void main_f_cfe850(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_cfe860  (orig 0xcfe860, setter)
void main_f_cfe860(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_cfe870  (orig 0xcfe870, ret_only)
void main_f_cfe870() {}

// sub_cff110  (orig 0xcff110, mov_ret)
uint32_t main_f_cff110() { return 1; }

// sub_cffb80  (orig 0xcffb80, tailcall)
void main_f_cffb80() { main::sub_978cf0(); }

// sub_cffb90  (orig 0xcffb90, tailcall)
void main_f_cffb90() { main::sub_cffc00(); }

// sub_cffbc0  (orig 0xcffbc0, tailcall)
void main_f_cffbc0() { main::sub_cffc00(); }

// sub_cffbd0  (orig 0xcffbd0, tailcall)
void main_f_cffbd0() { main::sub_cffc00(); }

// sub_d00050  (orig 0xd00050, tailcall)
uint32_t main_f_d00050() { return main_f_c8bb90(); }

// sub_d00160  (orig 0xd00160, tailcall)
void main_f_d00160() { main_f_c8bcf0(); }

// sub_d00170  (orig 0xd00170, tailcall)
void main_f_d00170() { main_f_c8bd00(); }

// sub_d00180  (orig 0xd00180, tailcall)
void main_f_d00180() { main::sub_c8bd10(); }

// sub_d00190  (orig 0xd00190, tailcall)
void main_f_d00190() { main::sub_978cf0(); }

// sub_d001a0  (orig 0xd001a0, tailcall)
void main_f_d001a0() { main::sub_d00210(); }

// sub_d001d0  (orig 0xd001d0, tailcall)
void main_f_d001d0() { main::sub_d00210(); }

// sub_d001e0  (orig 0xd001e0, tailcall)
void main_f_d001e0() { main::sub_d00210(); }

// sub_d00be0  (orig 0xd00be0, ret_only)
void main_f_d00be0() {}

// sub_d00dd0  (orig 0xd00dd0, copy2)
void main_f_d00dd0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1704) = *(uint32_t*)((char*)(a1)); }

// sub_d00de0  (orig 0xd00de0, straight)
void main_f_d00de0(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0) + 1716) = *(uint32_t*)((char*)(a1));
    *(uint32_t*)((char*)(a0) + 1720) = *(uint32_t*)((char*)(a2));
}

// sub_d01a40  (orig 0xd01a40, tailcall)
void main_f_d01a40() { main::sub_c6d5e0(); }

// sub_d01b50  (orig 0xd01b50, mov_ret)
uint32_t main_f_d01b50() { return 1; }

// sub_d021e0  (orig 0xd021e0, ret_only)
void main_f_d021e0() {}

// sub_d021f0  (orig 0xd021f0, copy2)
void main_f_d021f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d02200  (orig 0xd02200, copy2)
void main_f_d02200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d026b0  (orig 0xd026b0, tailcall)
void main_f_d026b0() { main::sub_978cf0(); }

// sub_d026c0  (orig 0xd026c0, tailcall)
void main_f_d026c0() { main::sub_d02730(); }

// sub_d026f0  (orig 0xd026f0, tailcall)
void main_f_d026f0() { main::sub_d02730(); }

// sub_d02700  (orig 0xd02700, tailcall)
void main_f_d02700() { main::sub_d02730(); }

// sub_d02f30  (orig 0xd02f30, ret_only)
void main_f_d02f30() {}

// sub_d03590  (orig 0xd03590, ret_only)
void main_f_d03590() {}

// sub_d035a0  (orig 0xd035a0, copy2)
void main_f_d035a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d035b0  (orig 0xd035b0, copy2)
void main_f_d035b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d03a30  (orig 0xd03a30, ret_only)
void main_f_d03a30() {}

// sub_d03a40  (orig 0xd03a40, ret_only)
void main_f_d03a40() {}

// sub_d03a50  (orig 0xd03a50, ret_only)
void main_f_d03a50() {}

// sub_d03a60  (orig 0xd03a60, getter)
float main_f_d03a60(void* a0) { return *(float*)((char*)(a0) + 1336); }

// sub_d03aa0  (orig 0xd03aa0, tailcall)
void main_f_d03aa0() { main::sub_c69450(); }

// sub_d03e40  (orig 0xd03e40, ret_only)
void main_f_d03e40() {}

// sub_d03e50  (orig 0xd03e50, copy2)
void main_f_d03e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d03e60  (orig 0xd03e60, copy2)
void main_f_d03e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d03f00  (orig 0xd03f00, tailcall)
uint32_t main_f_d03f00() { return main_f_c8bb90(); }

// sub_d04010  (orig 0xd04010, tailcall)
void main_f_d04010() { main_f_c8bcf0(); }

// sub_d04020  (orig 0xd04020, tailcall)
void main_f_d04020() { main_f_c8bd00(); }

// sub_d04030  (orig 0xd04030, tailcall)
void main_f_d04030() { main::sub_c8bd10(); }

// sub_d04040  (orig 0xd04040, tailcall)
void main_f_d04040() { main::sub_978cf0(); }

// sub_d04050  (orig 0xd04050, tailcall)
void main_f_d04050() { main::sub_d040c0(); }

// sub_d04080  (orig 0xd04080, tailcall)
void main_f_d04080() { main::sub_d040c0(); }

// sub_d04090  (orig 0xd04090, tailcall)
void main_f_d04090() { main::sub_d040c0(); }

// sub_d04f30  (orig 0xd04f30, ret_only)
void main_f_d04f30() {}

// sub_d04f40  (orig 0xd04f40, ret_only)
void main_f_d04f40() {}

// sub_d05380  (orig 0xd05380, tailcall)
void main_f_d05380() { main::sub_e69490(); }

// sub_d054d0  (orig 0xd054d0, tailcall)
void main_f_d054d0() { main::sub_e69490(); }

// sub_d054e0  (orig 0xd054e0, tailcall)
void main_f_d054e0() { main::sub_e69490(); }

// sub_d056c0  (orig 0xd056c0, tailcall)
uint32_t main_f_d056c0() { return main_f_c8bb90(); }

// sub_d057d0  (orig 0xd057d0, tailcall)
void main_f_d057d0() { main_f_c8bcf0(); }

// sub_d057e0  (orig 0xd057e0, tailcall)
void main_f_d057e0() { main_f_c8bd00(); }

// sub_d05cf0  (orig 0xd05cf0, tailcall)
void main_f_d05cf0() { main::sub_978cf0(); }

// sub_d05d00  (orig 0xd05d00, tailcall)
void main_f_d05d00() { main::sub_13f6d80(); }

// sub_d05d30  (orig 0xd05d30, tailcall)
void main_f_d05d30() { main::sub_13f6d80(); }

// sub_d05d40  (orig 0xd05d40, tailcall)
void main_f_d05d40() { main::sub_13f6d80(); }

// sub_d05e60  (orig 0xd05e60, tailcall)
void main_f_d05e60() { main::sub_978cf0(); }

// sub_d05e70  (orig 0xd05e70, tailcall)
void main_f_d05e70() { main::sub_d05ee0(); }

// sub_d05ea0  (orig 0xd05ea0, tailcall)
void main_f_d05ea0() { main::sub_d05ee0(); }

// sub_d05eb0  (orig 0xd05eb0, tailcall)
void main_f_d05eb0() { main::sub_d05ee0(); }

// sub_d08060  (orig 0xd08060, mov_ret)
uint32_t main_f_d08060() { return 1; }

// sub_d08550  (orig 0xd08550, tailcall)
void main_f_d08550() { main::sub_d086c0(); }

// sub_d08600  (orig 0xd08600, tailcall)
void main_f_d08600() { main::sub_d086c0(); }

// sub_d08610  (orig 0xd08610, tailcall)
void main_f_d08610() { main::sub_d086c0(); }

// sub_d0a100  (orig 0xd0a100, getter)
float main_f_d0a100(void* a0) { return *(float*)((char*)(a0) + 1244); }

// sub_d0a110  (orig 0xd0a110, getter)
float main_f_d0a110(void* a0) { return *(float*)((char*)(a0) + 1300); }

// sub_d0b130  (orig 0xd0b130, ret_only)
void main_f_d0b130() {}

// sub_d0c2b0  (orig 0xd0c2b0, tailcall)
void main_f_d0c2b0() { main::sub_d0c100(); }

// sub_d0c3a0  (orig 0xd0c3a0, mov_ret)
uint32_t main_f_d0c3a0() { return 2; }

// sub_d0ca80  (orig 0xd0ca80, setter)
void main_f_d0ca80(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d0ca90  (orig 0xd0ca90, straight)
void main_f_d0ca90(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_d0ee50  (orig 0xd0ee50, tailcall)
void main_f_d0ee50() { main::sub_d0f0c0(); }

// sub_d0ef80  (orig 0xd0ef80, tailcall)
void main_f_d0ef80() { main::sub_d0f0c0(); }

// sub_d0ef90  (orig 0xd0ef90, tailcall)
void main_f_d0ef90() { main::sub_d0f0c0(); }

// sub_d0ff20  (orig 0xd0ff20, tailcall)
void main_f_d0ff20() { main::sub_c69450(); }

// sub_d0ffa0  (orig 0xd0ffa0, mov_ret)
uint32_t main_f_d0ffa0() { return 1; }

// sub_d115e0  (orig 0xd115e0, mov_ret)
uint32_t main_f_d115e0() { return 1; }

// sub_d12910  (orig 0xd12910, mov_ret)
uint32_t main_f_d12910() { return 0; }

// sub_d13460  (orig 0xd13460, getter)
uint8_t main_f_d13460(void* a0) { return *(uint8_t*)((char*)(a0) + 2728); }

// sub_d13670  (orig 0xd13670, tailcall)
void main_f_d13670() { main::sub_d13470(); }

// sub_d13680  (orig 0xd13680, tailcall)
void main_f_d13680() { main::sub_d137f0(); }

// sub_d13690  (orig 0xd13690, mov_ret)
uint32_t main_f_d13690() { return 3; }

// sub_d136c0  (orig 0xd136c0, tailcall)
void main_f_d136c0() { main::sub_d137f0(); }

// sub_d136d0  (orig 0xd136d0, tailcall)
void main_f_d136d0() { main::sub_d137f0(); }

// sub_d14e90  (orig 0xd14e90, ret_only)
void main_f_d14e90() {}

// sub_d14ea0  (orig 0xd14ea0, setter)
void main_f_d14ea0(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d14eb0  (orig 0xd14eb0, straight)
void main_f_d14eb0(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_d17e70  (orig 0xd17e70, mov_ret)
uint32_t main_f_d17e70() { return 4; }

// sub_d185f0  (orig 0xd185f0, ret_only)
void main_f_d185f0() {}

// sub_d18600  (orig 0xd18600, copy2)
void main_f_d18600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d18610  (orig 0xd18610, copy2)
void main_f_d18610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d1b6a0  (orig 0xd1b6a0, setter)
void main_f_d1b6a0(void* a0) { *(uint8_t*)((char*)(a0) + 158) = 0; }

// sub_d1d280  (orig 0xd1d280, getter)
uint8_t main_f_d1d280(void* a0) { return *(uint8_t*)((char*)(a0) + 158); }

// sub_d29850  (orig 0xd29850, mov_ret)
uint32_t main_f_d29850() { return 0; }

// sub_d2e090  (orig 0xd2e090, tailcall)
void main_f_d2e090() { main::sub_d2df30(); }

// sub_d2e1c0  (orig 0xd2e1c0, ret_only)
void main_f_d2e1c0() {}

// sub_d337f0  (orig 0xd337f0, setter)
void main_f_d337f0(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d347a0  (orig 0xd347a0, ret_only)
void main_f_d347a0() {}

// sub_d347b0  (orig 0xd347b0, tailcall)
void main_f_d347b0() { main::sub_ce0(); }

// sub_d34830  (orig 0xd34830, tailcall)
void main_f_d34830() { main::sub_c69450(); }

// sub_d369b0  (orig 0xd369b0, getter-chain)
uint8_t main_f_d369b0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 1224))) + 236); }

// sub_d36dd0  (orig 0xd36dd0, tailcall)
void main_f_d36dd0() { main::sub_d36c70(); }

// sub_d36e50  (orig 0xd36e50, mov_ret)
uint32_t main_f_d36e50() { return 1; }

// sub_d38350  (orig 0xd38350, ret_only)
void main_f_d38350() {}

// sub_d38360  (orig 0xd38360, ret_only)
void main_f_d38360() {}

// sub_d398a0  (orig 0xd398a0, ret_only)
void main_f_d398a0() {}

// sub_d398b0  (orig 0xd398b0, ret_only)
void main_f_d398b0() {}

// sub_d398c0  (orig 0xd398c0, ret_only)
void main_f_d398c0() {}

// sub_d398d0  (orig 0xd398d0, ret_only)
void main_f_d398d0() {}

// sub_d39da0  (orig 0xd39da0, mov_ret)
uint32_t main_f_d39da0() { return 0; }

// sub_d3b890  (orig 0xd3b890, ret_only)
void main_f_d3b890() {}

// sub_d3b8a0  (orig 0xd3b8a0, tailcall)
void main_f_d3b8a0() { main::sub_c642d0(); }

// sub_d3b960  (orig 0xd3b960, getter)
float main_f_d3b960(void* a0) { return *(float*)((char*)(a0) + 1312); }

// sub_d42e80  (orig 0xd42e80, tailcall)
void main_f_d42e80() { main::sub_cf2010(); }

// sub_d45b60  (orig 0xd45b60, compare)
bool main_f_d45b60(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 2024)) != (uint64_t)(0); }

// sub_d486c0  (orig 0xd486c0, tailcall)
void main_f_d486c0() { main::sub_d48430(); }

// sub_d48740  (orig 0xd48740, mov_ret)
uint32_t main_f_d48740() { return 16; }

// sub_d496b0  (orig 0xd496b0, ret_only)
void main_f_d496b0() {}

// sub_d49820  (orig 0xd49820, copy2)
void main_f_d49820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49830  (orig 0xd49830, copy2)
void main_f_d49830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d498f0  (orig 0xd498f0, ret_only)
void main_f_d498f0() {}

// sub_d49900  (orig 0xd49900, copy2)
void main_f_d49900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49910  (orig 0xd49910, copy2)
void main_f_d49910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49970  (orig 0xd49970, ret_only)
void main_f_d49970() {}

// sub_d49980  (orig 0xd49980, copy2)
void main_f_d49980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49990  (orig 0xd49990, copy2)
void main_f_d49990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49b80  (orig 0xd49b80, ret_only)
void main_f_d49b80() {}

// sub_d49b90  (orig 0xd49b90, copy2)
void main_f_d49b90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49ba0  (orig 0xd49ba0, copy2)
void main_f_d49ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49d30  (orig 0xd49d30, ret_only)
void main_f_d49d30() {}

// sub_d49e00  (orig 0xd49e00, ret_only)
void main_f_d49e00() {}

// sub_d4a340  (orig 0xd4a340, compare)
bool main_f_d4a340(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 144)) == (uint64_t)(1); }

// sub_d4a350  (orig 0xd4a350, ret_only)
void main_f_d4a350() {}

// sub_d4a360  (orig 0xd4a360, ret_only)
void main_f_d4a360() {}

// sub_d4a370  (orig 0xd4a370, ret_only)
void main_f_d4a370() {}

// sub_d4a870  (orig 0xd4a870, ret_only)
void main_f_d4a870() {}

// sub_d4a880  (orig 0xd4a880, tailcall)
void main_f_d4a880() { main::sub_ce0(); }

// sub_d4a8f0  (orig 0xd4a8f0, ret_only)
void main_f_d4a8f0() {}

// sub_d4a900  (orig 0xd4a900, tailcall)
void main_f_d4a900() { main::sub_ce0(); }

// sub_d4a9b0  (orig 0xd4a9b0, mov_ret)
uint32_t main_f_d4a9b0() { return 1; }

// sub_d4a9c0  (orig 0xd4a9c0, ret_only)
void main_f_d4a9c0() {}

// sub_d4a9d0  (orig 0xd4a9d0, ret_only)
void main_f_d4a9d0() {}

// sub_d4a9e0  (orig 0xd4a9e0, ret_only)
void main_f_d4a9e0() {}

// sub_d4c360  (orig 0xd4c360, setter)
void main_f_d4c360(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d4c370  (orig 0xd4c370, straight)
void main_f_d4c370(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_d4d150  (orig 0xd4d150, setter)
void main_f_d4d150(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d4d160  (orig 0xd4d160, straight)
void main_f_d4d160(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_d4dfe0  (orig 0xd4dfe0, straight)
void main_f_d4dfe0(void* a0) {
    *(uint8_t*)((char*)(a0) + 125) = (uint8_t)(1);
}

// sub_d4fb90  (orig 0xd4fb90, getter)
uint32_t main_f_d4fb90(void* a0) { return *(uint32_t*)((char*)(a0) + 1468); }

// sub_d4fba0  (orig 0xd4fba0, getter)
uint16_t main_f_d4fba0(void* a0) { return *(uint16_t*)((char*)(a0) + 1472); }

// sub_d4fd30  (orig 0xd4fd30, tailcall)
void main_f_d4fd30() { main::sub_d4fc20(); }

// sub_d502e0  (orig 0xd502e0, tailcall)
uint32_t main_f_d502e0() { return main_f_c8bb90(); }

// sub_d503f0  (orig 0xd503f0, tailcall)
void main_f_d503f0() { main_f_c8bcf0(); }

// sub_d50400  (orig 0xd50400, tailcall)
void main_f_d50400() { main_f_c8bd00(); }

// sub_d50410  (orig 0xd50410, tailcall)
void main_f_d50410() { main::sub_c8bd10(); }

// sub_d50420  (orig 0xd50420, tailcall)
void main_f_d50420() { main::sub_978cf0(); }

// sub_d50430  (orig 0xd50430, tailcall)
void main_f_d50430() { main::sub_d504a0(); }

// sub_d50460  (orig 0xd50460, tailcall)
void main_f_d50460() { main::sub_d504a0(); }

// sub_d50470  (orig 0xd50470, tailcall)
void main_f_d50470() { main::sub_d504a0(); }

// sub_d50e90  (orig 0xd50e90, tailcall)
void main_f_d50e90() { main::sub_d50d90(); }

// sub_d51230  (orig 0xd51230, tailcall)
void main_f_d51230() { main::sub_d514e0(); }

// sub_d51380  (orig 0xd51380, tailcall)
void main_f_d51380() { main::sub_d514e0(); }

// sub_d51390  (orig 0xd51390, tailcall)
void main_f_d51390() { main::sub_d514e0(); }

// sub_d51a20  (orig 0xd51a20, tailcall)
void main_f_d51a20() { main::sub_978cf0(); }

// sub_d51a30  (orig 0xd51a30, tailcall)
void main_f_d51a30() { main::sub_d51aa0(); }

// sub_d51a60  (orig 0xd51a60, tailcall)
void main_f_d51a60() { main::sub_d51aa0(); }

// sub_d51a70  (orig 0xd51a70, tailcall)
void main_f_d51a70() { main::sub_d51aa0(); }

// sub_d51c40  (orig 0xd51c40, tailcall)
void main_f_d51c40() { main::sub_c69450(); }

// sub_d538b0  (orig 0xd538b0, ret_only)
void main_f_d538b0() {}

// sub_d54e80  (orig 0xd54e80, tailcall)
void main_f_d54e80() { main::sub_d54e90(); }

// sub_d55ba0  (orig 0xd55ba0, tailcall)
void main_f_d55ba0() { main::sub_cdc0d0(); }

// sub_d55e10  (orig 0xd55e10, tailcall)
void main_f_d55e10() { main::sub_cdc0d0(); }

// sub_d55e20  (orig 0xd55e20, tailcall)
void main_f_d55e20() { main::sub_cdc0d0(); }

// sub_d5c290  (orig 0xd5c290, tailcall)
void main_f_d5c290() { main::sub_d5c100(); }

// sub_d5c350  (orig 0xd5c350, mov_ret)
uint32_t main_f_d5c350() { return 4; }

// sub_d5c760  (orig 0xd5c760, ret_only)
void main_f_d5c760() {}

// sub_d5cb00  (orig 0xd5cb00, ret_only)
void main_f_d5cb00() {}

// sub_d5cb10  (orig 0xd5cb10, copy2)
void main_f_d5cb10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d5cb20  (orig 0xd5cb20, copy2)
void main_f_d5cb20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d5e420  (orig 0xd5e420, getter)
uint32_t main_f_d5e420(void* a0) { return *(uint32_t*)((char*)(a0) + 636); }

// sub_d5f540  (orig 0xd5f540, tailcall)
void main_f_d5f540() { main::sub_c72e70(); }

// sub_d5f830  (orig 0xd5f830, tailcall)
void main_f_d5f830() { main::sub_c73630(); }

// sub_d5fdb0  (orig 0xd5fdb0, tailcall)
void main_f_d5fdb0() { main::sub_c73f50(); }

// sub_d5fdc0  (orig 0xd5fdc0, tailcall)
void main_f_d5fdc0() { main::sub_13f67a0(); }

// sub_d5fdf0  (orig 0xd5fdf0, tailcall)
void main_f_d5fdf0() { main::sub_13f67a0(); }

// sub_d5fe00  (orig 0xd5fe00, tailcall)
void main_f_d5fe00() { main::sub_13f67a0(); }

// sub_d616d0  (orig 0xd616d0, tailcall)
void main_f_d616d0() { main::sub_d616e0(); }

// sub_d61e70  (orig 0xd61e70, compare)
bool main_f_d61e70(void* a0, uint64_t a1) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1216)) == (uint32_t)(a1); }

// sub_d635d0  (orig 0xd635d0, mov_ret)
uint32_t main_f_d635d0() { return 0; }

// sub_d635e0  (orig 0xd635e0, mov_ret)
uint32_t main_f_d635e0() { return 1; }

// sub_d635f0  (orig 0xd635f0, ret_only)
void main_f_d635f0() {}

// sub_d63820  (orig 0xd63820, ret_only)
void main_f_d63820() {}

// sub_d63950  (orig 0xd63950, tailcall)
void main_f_d63950() { main::sub_13eb080(); }

// sub_d63a80  (orig 0xd63a80, tailcall)
void main_f_d63a80() { main::sub_13eb080(); }

// sub_d63a90  (orig 0xd63a90, tailcall)
void main_f_d63a90() { main::sub_13eb080(); }

// sub_d63ce0  (orig 0xd63ce0, mov_ret)
uint32_t main_f_d63ce0() { return 1; }

// sub_d63cf0  (orig 0xd63cf0, straight)
void main_f_d63cf0(void* a0) {
    *(uint32_t*)((char*)(a0) + 148) = 1;
}

// sub_d64200  (orig 0xd64200, ret_only)
void main_f_d64200() {}

// sub_d64210  (orig 0xd64210, tailcall)
void main_f_d64210() { main::sub_e9d210(); }

// sub_d64220  (orig 0xd64220, tailcall)
void main_f_d64220() { main::sub_d64290(); }

// sub_d64250  (orig 0xd64250, tailcall)
void main_f_d64250() { main::sub_d64290(); }

// sub_d64260  (orig 0xd64260, tailcall)
void main_f_d64260() { main::sub_d64290(); }

// sub_d64730  (orig 0xd64730, setter)
void main_f_d64730(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d64740  (orig 0xd64740, straight)
void main_f_d64740(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_d64fc0  (orig 0xd64fc0, mov_ret)
uint32_t main_f_d64fc0() { return 1; }

// sub_d64fd0  (orig 0xd64fd0, ret_only)
void main_f_d64fd0() {}

// sub_d677c0  (orig 0xd677c0, ret_only)
void main_f_d677c0() {}

// sub_d67f60  (orig 0xd67f60, tailcall)
void main_f_d67f60() { main::sub_d68110(); }

// sub_d68030  (orig 0xd68030, tailcall)
void main_f_d68030() { main::sub_d68110(); }

// sub_d68040  (orig 0xd68040, tailcall)
void main_f_d68040() { main::sub_d68110(); }

// sub_d68330  (orig 0xd68330, tailcall)
void main_f_d68330() { main::sub_ce0(); }

// sub_d68380  (orig 0xd68380, ret_only)
void main_f_d68380() {}

// sub_d68390  (orig 0xd68390, tailcall)
void main_f_d68390() { main::sub_ce0(); }

// sub_d685f0  (orig 0xd685f0, tailcall)
void main_f_d685f0() { main::sub_ce0(); }

// sub_d68640  (orig 0xd68640, ret_only)
void main_f_d68640() {}

// sub_d68650  (orig 0xd68650, tailcall)
void main_f_d68650() { main::sub_ce0(); }

// sub_d692d0  (orig 0xd692d0, straight)
void main_f_d692d0(void* a0) {
    *(uint8_t*)((char*)(a0) + 1828) = (uint8_t)(1);
}

// sub_d693a0  (orig 0xd693a0, getter)
uint8_t main_f_d693a0(void* a0) { return *(uint8_t*)((char*)(a0) + 1828); }

// sub_d69a10  (orig 0xd69a10, getter)
uint8_t main_f_d69a10(void* a0) { return *(uint8_t*)((char*)(a0) + 1825); }

// sub_d69dd0  (orig 0xd69dd0, mov_ret)
uint32_t main_f_d69dd0() { return 0; }

// sub_d69de0  (orig 0xd69de0, straight)
void main_f_d69de0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 96) = (uint64_t)((char*)(a0) + 1576);
}

// sub_d69df0  (orig 0xd69df0, straight)
void main_f_d69df0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 88) = 3;
}

// sub_d6a350  (orig 0xd6a350, tailcall)
void main_f_d6a350() { main::sub_d6a280(); }

// sub_d6a3d0  (orig 0xd6a3d0, mov_ret)
uint32_t main_f_d6a3d0() { return 0; }

// sub_d6acd0  (orig 0xd6acd0, setter)
void main_f_d6acd0(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d6ace0  (orig 0xd6ace0, straight)
void main_f_d6ace0(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_d6bbf0  (orig 0xd6bbf0, mov_ret)
uint32_t main_f_d6bbf0() { return 1; }

// sub_d6bc00  (orig 0xd6bc00, ret_only)
void main_f_d6bc00() {}

// sub_d6be40  (orig 0xd6be40, ret_only)
void main_f_d6be40() {}

// sub_d6bf30  (orig 0xd6bf30, tailcall)
void main_f_d6bf30() { main::sub_d6c120(); }

// sub_d6c020  (orig 0xd6c020, tailcall)
void main_f_d6c020() { main::sub_d6c120(); }

// sub_d6c030  (orig 0xd6c030, tailcall)
void main_f_d6c030() { main::sub_d6c120(); }

// sub_d6c7f0  (orig 0xd6c7f0, mov_ret)
uint32_t main_f_d6c7f0() { return 1; }

// sub_d6c8f0  (orig 0xd6c8f0, ret_only)
void main_f_d6c8f0() {}

// sub_d6c900  (orig 0xd6c900, tailcall)
void main_f_d6c900() { main::sub_d6c930(); }

// sub_d6c910  (orig 0xd6c910, tailcall)
void main_f_d6c910() { main::sub_d6c930(); }

// sub_d6c920  (orig 0xd6c920, tailcall)
void main_f_d6c920() { main::sub_d6c930(); }

// sub_d6cd30  (orig 0xd6cd30, mov_ret)
uint32_t main_f_d6cd30() { return 1; }

// sub_d6cd40  (orig 0xd6cd40, ret_only)
void main_f_d6cd40() {}

// sub_d6d0d0  (orig 0xd6d0d0, ret_only)
void main_f_d6d0d0() {}

// sub_d6d0e0  (orig 0xd6d0e0, tailcall)
void main_f_d6d0e0() { main::sub_e9d210(); }

// sub_d6d6c0  (orig 0xd6d6c0, mov_ret)
uint32_t main_f_d6d6c0() { return 1; }

// sub_d6e230  (orig 0xd6e230, tailcall)
void main_f_d6e230() { main::sub_d6e3e0(); }

// sub_d6e300  (orig 0xd6e300, tailcall)
void main_f_d6e300() { main::sub_d6e3e0(); }

// sub_d6e310  (orig 0xd6e310, tailcall)
void main_f_d6e310() { main::sub_d6e3e0(); }

// sub_d6e660  (orig 0xd6e660, mov_ret)
uint32_t main_f_d6e660() { return 1; }

// sub_d6e670  (orig 0xd6e670, ret_only)
void main_f_d6e670() {}

// sub_d6e990  (orig 0xd6e990, ret_only)
void main_f_d6e990() {}

// sub_d6ea60  (orig 0xd6ea60, tailcall)
void main_f_d6ea60() { main::sub_d6ec10(); }

// sub_d6eb30  (orig 0xd6eb30, tailcall)
void main_f_d6eb30() { main::sub_d6ec10(); }

// sub_d6eb40  (orig 0xd6eb40, tailcall)
void main_f_d6eb40() { main::sub_d6ec10(); }

// sub_d6eef0  (orig 0xd6eef0, compare)
bool main_f_d6eef0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) != (uint64_t)(0); }

// sub_d6ef30  (orig 0xd6ef30, compare)
bool main_f_d6ef30(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 96)) == (uint64_t)(0); }

// sub_d6f510  (orig 0xd6f510, tailcall)
void main_f_d6f510() { main::sub_d6f3d0(); }

// sub_d6f540  (orig 0xd6f540, mov_ret)
uint32_t main_f_d6f540() { return 1; }

// sub_d70030  (orig 0xd70030, tailcall)
void main_f_d70030() { main::sub_d70060(); }

// sub_d70040  (orig 0xd70040, tailcall)
void main_f_d70040() { main::sub_d70060(); }

// sub_d70050  (orig 0xd70050, tailcall)
void main_f_d70050() { main::sub_d70060(); }

// sub_d70650  (orig 0xd70650, mov_ret)
uint32_t main_f_d70650() { return 1; }

// sub_d70660  (orig 0xd70660, tailcall)
void main_f_d70660() { main::sub_d703b0(); }

// sub_d716e0  (orig 0xd716e0, mov_ret)
uint32_t main_f_d716e0() { return 1; }

// sub_d71f20  (orig 0xd71f20, ret_only)
void main_f_d71f20() {}

// sub_d71f30  (orig 0xd71f30, tailcall)
void main_f_d71f30() { main::sub_e9d210(); }

// sub_d71f40  (orig 0xd71f40, tailcall)
void main_f_d71f40() { main::sub_d71fb0(); }

// sub_d71f70  (orig 0xd71f70, tailcall)
void main_f_d71f70() { main::sub_d71fb0(); }

// sub_d71f80  (orig 0xd71f80, tailcall)
void main_f_d71f80() { main::sub_d71fb0(); }

// sub_d725e0  (orig 0xd725e0, mov_ret)
uint32_t main_f_d725e0() { return 1; }

// sub_d729d0  (orig 0xd729d0, tailcall)
void main_f_d729d0() { main::sub_d72a00(); }

// sub_d729e0  (orig 0xd729e0, tailcall)
void main_f_d729e0() { main::sub_d72a00(); }

// sub_d729f0  (orig 0xd729f0, tailcall)
void main_f_d729f0() { main::sub_d72a00(); }

// sub_d730a0  (orig 0xd730a0, mov_ret)
uint32_t main_f_d730a0() { return 1; }

// sub_d732d0  (orig 0xd732d0, tailcall)
void main_f_d732d0() { main::sub_d73300(); }

// sub_d732e0  (orig 0xd732e0, tailcall)
void main_f_d732e0() { main::sub_d73300(); }

// sub_d732f0  (orig 0xd732f0, tailcall)
void main_f_d732f0() { main::sub_d73300(); }

// sub_d76000  (orig 0xd76000, mov_ret)
uint32_t main_f_d76000() { return 1; }

// sub_d79900  (orig 0xd79900, ret_only)
void main_f_d79900() {}

// sub_d7b2b0  (orig 0xd7b2b0, mov_ret)
uint32_t main_f_d7b2b0() { return 1; }

// sub_d7b2c0  (orig 0xd7b2c0, ret_only)
void main_f_d7b2c0() {}

// sub_d7b950  (orig 0xd7b950, ret_only)
void main_f_d7b950() {}

// sub_d7ba20  (orig 0xd7ba20, tailcall)
void main_f_d7ba20() { main::sub_d7bbd0(); }

// sub_d7baf0  (orig 0xd7baf0, tailcall)
void main_f_d7baf0() { main::sub_d7bbd0(); }

// sub_d7bb00  (orig 0xd7bb00, tailcall)
void main_f_d7bb00() { main::sub_d7bbd0(); }

// sub_d7cc60  (orig 0xd7cc60, mov_ret)
uint32_t main_f_d7cc60() { return 1; }

// sub_d7e3e0  (orig 0xd7e3e0, tailcall)
void main_f_d7e3e0() { main::sub_e9d210(); }

// sub_d7e410  (orig 0xd7e410, tailcall)
void main_f_d7e410() { main::sub_e9d210(); }

// sub_d7e440  (orig 0xd7e440, mov_ret)
uint32_t main_f_d7e440() { return 1; }

// sub_d7e450  (orig 0xd7e450, ret_only)
void main_f_d7e450() {}

// sub_d7e700  (orig 0xd7e700, ret_only)
void main_f_d7e700() {}

// sub_d7e710  (orig 0xd7e710, tailcall)
void main_f_d7e710() { main::sub_d7e740(); }

// sub_d7e720  (orig 0xd7e720, tailcall)
void main_f_d7e720() { main::sub_d7e740(); }

// sub_d7e730  (orig 0xd7e730, tailcall)
void main_f_d7e730() { main::sub_d7e740(); }

// sub_d7f810  (orig 0xd7f810, mov_ret)
uint32_t main_f_d7f810() { return 1; }

// sub_d81c20  (orig 0xd81c20, ret_only)
void main_f_d81c20() {}

// sub_d82730  (orig 0xd82730, ret_only)
void main_f_d82730() {}

// sub_d82740  (orig 0xd82740, ret_only)
void main_f_d82740() {}

// sub_d82750  (orig 0xd82750, ret_only)
void main_f_d82750() {}

// sub_d83f40  (orig 0xd83f40, mov_ret)
uint32_t main_f_d83f40() { return 1; }

// sub_d84290  (orig 0xd84290, tailcall)
void main_f_d84290() { main::sub_d842c0(); }

// sub_d842a0  (orig 0xd842a0, tailcall)
void main_f_d842a0() { main::sub_d842c0(); }

// sub_d842b0  (orig 0xd842b0, tailcall)
void main_f_d842b0() { main::sub_d842c0(); }

// sub_d84440  (orig 0xd84440, mov_ret)
uint32_t main_f_d84440() { return 1; }

// sub_d84450  (orig 0xd84450, ret_only)
void main_f_d84450() {}

// sub_d848e0  (orig 0xd848e0, ret_only)
void main_f_d848e0() {}

// sub_d848f0  (orig 0xd848f0, tailcall)
void main_f_d848f0() { main::sub_e9d210(); }

// sub_d84900  (orig 0xd84900, tailcall)
void main_f_d84900() { main::sub_d84970(); }

// sub_d84930  (orig 0xd84930, tailcall)
void main_f_d84930() { main::sub_d84970(); }

// sub_d84940  (orig 0xd84940, tailcall)
void main_f_d84940() { main::sub_d84970(); }

// sub_d896e0  (orig 0xd896e0, tailcall)
void main_f_d896e0() { main::sub_d89550(); }

// sub_d89760  (orig 0xd89760, straight)
void main_f_d89760(void* a0) {
    *(uint8_t*)((char*)(a0) + 140) = (uint8_t)(1);
}

// sub_d89ed0  (orig 0xd89ed0, ret_only)
void main_f_d89ed0() {}

// sub_d89ee0  (orig 0xd89ee0, copy2)
void main_f_d89ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d89ef0  (orig 0xd89ef0, copy2)
void main_f_d89ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d89f20  (orig 0xd89f20, ret_only)
void main_f_d89f20() {}

// sub_d89f30  (orig 0xd89f30, copy2)
void main_f_d89f30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d89f40  (orig 0xd89f40, copy2)
void main_f_d89f40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d89f50  (orig 0xd89f50, compare)
bool main_f_d89f50(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 144)) == (uint64_t)(1); }

// sub_d89f60  (orig 0xd89f60, ret_only)
void main_f_d89f60() {}

// sub_d89f70  (orig 0xd89f70, ret_only)
void main_f_d89f70() {}

// sub_d89f80  (orig 0xd89f80, ret_only)
void main_f_d89f80() {}

// sub_d8b430  (orig 0xd8b430, ret_only)
void main_f_d8b430() {}

// sub_d8b440  (orig 0xd8b440, copy2)
void main_f_d8b440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d8b450  (orig 0xd8b450, copy2)
void main_f_d8b450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d8b460  (orig 0xd8b460, ret_only)
void main_f_d8b460() {}

// sub_d8b470  (orig 0xd8b470, ret_only)
void main_f_d8b470() {}

// sub_d8b480  (orig 0xd8b480, ret_only)
void main_f_d8b480() {}

// sub_d8b490  (orig 0xd8b490, ret_only)
void main_f_d8b490() {}

// sub_d93290  (orig 0xd93290, mov_ret)
uint32_t main_f_d93290() { return 1; }

// sub_d932a0  (orig 0xd932a0, ret_only)
void main_f_d932a0() {}

// sub_d943c0  (orig 0xd943c0, mov_ret)
uint32_t main_f_d943c0() { return 1; }

// sub_d943d0  (orig 0xd943d0, ret_only)
void main_f_d943d0() {}

// sub_d94830  (orig 0xd94830, ret_only)
void main_f_d94830() {}

// sub_d94900  (orig 0xd94900, tailcall)
void main_f_d94900() { main::sub_d94ab0(); }

// sub_d949d0  (orig 0xd949d0, tailcall)
void main_f_d949d0() { main::sub_d94ab0(); }

// sub_d949e0  (orig 0xd949e0, tailcall)
void main_f_d949e0() { main::sub_d94ab0(); }

// sub_d94e50  (orig 0xd94e50, mov_ret)
uint32_t main_f_d94e50() { return 1; }

// sub_d94e60  (orig 0xd94e60, ret_only)
void main_f_d94e60() {}

// sub_d95100  (orig 0xd95100, ret_only)
void main_f_d95100() {}

// sub_d95110  (orig 0xd95110, tailcall)
void main_f_d95110() { main::sub_e9d210(); }

// sub_d95120  (orig 0xd95120, tailcall)
void main_f_d95120() { main::sub_d95190(); }

// sub_d95150  (orig 0xd95150, tailcall)
void main_f_d95150() { main::sub_d95190(); }

// sub_d95160  (orig 0xd95160, tailcall)
void main_f_d95160() { main::sub_d95190(); }

// sub_d95470  (orig 0xd95470, mov_ret)
uint32_t main_f_d95470() { return 1; }

// sub_d95480  (orig 0xd95480, ret_only)
void main_f_d95480() {}

// sub_d96140  (orig 0xd96140, ret_only)
void main_f_d96140() {}

// sub_d96210  (orig 0xd96210, tailcall)
void main_f_d96210() { main::sub_d963c0(); }

// sub_d962e0  (orig 0xd962e0, tailcall)
void main_f_d962e0() { main::sub_d963c0(); }

// sub_d962f0  (orig 0xd962f0, tailcall)
void main_f_d962f0() { main::sub_d963c0(); }

// sub_d97a70  (orig 0xd97a70, setter)
void main_f_d97a70(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d97a80  (orig 0xd97a80, straight)
void main_f_d97a80(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_d982f0  (orig 0xd982f0, ret_only)
void main_f_d982f0() {}

// sub_d98300  (orig 0xd98300, ret_only)
void main_f_d98300() {}

// sub_d98310  (orig 0xd98310, ret_only)
void main_f_d98310() {}

// sub_d98320  (orig 0xd98320, ret_only)
void main_f_d98320() {}

// sub_d98950  (orig 0xd98950, ret_only)
void main_f_d98950() {}

// sub_d991b0  (orig 0xd991b0, mov_ret)
uint32_t main_f_d991b0() { return 1; }

// sub_d991c0  (orig 0xd991c0, ret_only)
void main_f_d991c0() {}

// sub_d998b0  (orig 0xd998b0, ret_only)
void main_f_d998b0() {}

// sub_d9a400  (orig 0xd9a400, mov_ret)
uint32_t main_f_d9a400() { return 1; }

// sub_d9a410  (orig 0xd9a410, ret_only)
void main_f_d9a410() {}

// sub_d9a490  (orig 0xd9a490, ret_only)
void main_f_d9a490() {}

// sub_d9ad70  (orig 0xd9ad70, mov_ret)
uint32_t main_f_d9ad70() { return 1; }

// sub_d9b8e0  (orig 0xd9b8e0, ret_only)
void main_f_d9b8e0() {}

// sub_d9b9c0  (orig 0xd9b9c0, tailcall)
void main_f_d9b9c0() { main::sub_d9b8f0(); }

// sub_d9be30  (orig 0xd9be30, mov_ret)
uint32_t main_f_d9be30() { return 1; }

// sub_d9c590  (orig 0xd9c590, tailcall)
void main_f_d9c590() { main::sub_d9c840(); }

// sub_d9c6e0  (orig 0xd9c6e0, tailcall)
void main_f_d9c6e0() { main::sub_d9c840(); }

// sub_d9c6f0  (orig 0xd9c6f0, tailcall)
void main_f_d9c6f0() { main::sub_d9c840(); }

// sub_d9d560  (orig 0xd9d560, mov_ret)
uint32_t main_f_d9d560() { return 1; }

// sub_d9d570  (orig 0xd9d570, ret_only)
void main_f_d9d570() {}

// sub_d9fc10  (orig 0xd9fc10, ret_only)
void main_f_d9fc10() {}

// sub_da0310  (orig 0xda0310, tailcall)
void main_f_da0310() { main::sub_da0210(); }

// sub_da0320  (orig 0xda0320, tailcall)
void main_f_da0320() { main::sub_da1430(); }

// sub_da0350  (orig 0xda0350, tailcall)
void main_f_da0350() { main::sub_da1430(); }

// sub_da0360  (orig 0xda0360, tailcall)
void main_f_da0360() { main::sub_da1430(); }

// sub_da2870  (orig 0xda2870, ret_only)
void main_f_da2870() {}

// sub_da2880  (orig 0xda2880, ret_only)
void main_f_da2880() {}

// sub_da2890  (orig 0xda2890, ret_only)
void main_f_da2890() {}

// sub_da2e20  (orig 0xda2e20, tailcall)
void main_f_da2e20() { main::sub_e9d210(); }

// sub_da2e50  (orig 0xda2e50, tailcall)
void main_f_da2e50() { main::sub_e9d210(); }

// sub_da2e80  (orig 0xda2e80, mov_ret)
uint32_t main_f_da2e80() { return 1; }

// sub_da2e90  (orig 0xda2e90, ret_only)
void main_f_da2e90() {}

// sub_da30d0  (orig 0xda30d0, ret_only)
void main_f_da30d0() {}

// sub_da30e0  (orig 0xda30e0, tailcall)
void main_f_da30e0() { main::sub_da3110(); }

// sub_da30f0  (orig 0xda30f0, tailcall)
void main_f_da30f0() { main::sub_da3110(); }

// sub_da3100  (orig 0xda3100, tailcall)
void main_f_da3100() { main::sub_da3110(); }

// sub_da3240  (orig 0xda3240, mov_ret)
uint32_t main_f_da3240() { return 1; }

// sub_da3250  (orig 0xda3250, setter)
void main_f_da3250(void* a0) { *(uint32_t*)((char*)(a0) + 104) = 0; }

// sub_da34a0  (orig 0xda34a0, ret_only)
void main_f_da34a0() {}

// sub_da34b0  (orig 0xda34b0, tailcall)
void main_f_da34b0() { main::sub_e9d210(); }

// sub_da3b90  (orig 0xda3b90, mov_ret)
uint32_t main_f_da3b90() { return 1; }

// sub_da4fd0  (orig 0xda4fd0, tailcall)
void main_f_da4fd0() { main::sub_da4e70(); }

// sub_da5000  (orig 0xda5000, mov_ret)
uint32_t main_f_da5000() { return 1; }

// sub_da57a0  (orig 0xda57a0, tailcall)
void main_f_da57a0() { main::sub_da57d0(); }

// sub_da57b0  (orig 0xda57b0, tailcall)
void main_f_da57b0() { main::sub_da57d0(); }

// sub_da57c0  (orig 0xda57c0, tailcall)
void main_f_da57c0() { main::sub_da57d0(); }

// sub_da5f70  (orig 0xda5f70, mov_ret)
uint32_t main_f_da5f70() { return 1; }

// sub_da5f80  (orig 0xda5f80, straight)
void main_f_da5f80(void* a0) {
    *(uint32_t*)((char*)(a0) + 144) = 10;
}

// sub_da5ff0  (orig 0xda5ff0, ret_only)
void main_f_da5ff0() {}

// sub_da6000  (orig 0xda6000, tailcall)
void main_f_da6000() { main::sub_da6030(); }

// sub_da6010  (orig 0xda6010, tailcall)
void main_f_da6010() { main::sub_da6030(); }

// sub_da6020  (orig 0xda6020, tailcall)
void main_f_da6020() { main::sub_da6030(); }

// sub_da6320  (orig 0xda6320, tailcall)
void main_f_da6320() { main::sub_e9d210(); }

// sub_da6330  (orig 0xda6330, tailcall)
void main_f_da6330() { main::sub_da63d0(); }

// sub_da6340  (orig 0xda6340, mov_ret)
uint32_t main_f_da6340() { return 1; }

// sub_da6350  (orig 0xda6350, ret_only)
void main_f_da6350() {}

// sub_da6360  (orig 0xda6360, ret_only)
void main_f_da6360() {}

// sub_da6390  (orig 0xda6390, tailcall)
void main_f_da6390() { main::sub_da63d0(); }

// sub_da63a0  (orig 0xda63a0, tailcall)
void main_f_da63a0() { main::sub_da63d0(); }

// sub_da6580  (orig 0xda6580, mov_ret)
uint32_t main_f_da6580() { return 1; }

// sub_da6590  (orig 0xda6590, ret_only)
void main_f_da6590() {}

// sub_da6af0  (orig 0xda6af0, ret_only)
void main_f_da6af0() {}

// sub_da6bc0  (orig 0xda6bc0, tailcall)
void main_f_da6bc0() { main::sub_da6d70(); }

// sub_da6c90  (orig 0xda6c90, tailcall)
void main_f_da6c90() { main::sub_da6d70(); }

// sub_da6ca0  (orig 0xda6ca0, tailcall)
void main_f_da6ca0() { main::sub_da6d70(); }

// sub_da70c0  (orig 0xda70c0, mov_ret)
uint32_t main_f_da70c0() { return 1; }

// sub_da70d0  (orig 0xda70d0, ret_only)
void main_f_da70d0() {}

// sub_da7740  (orig 0xda7740, ret_only)
void main_f_da7740() {}

// sub_da7750  (orig 0xda7750, tailcall)
void main_f_da7750() { main::sub_e9d210(); }

// sub_da7760  (orig 0xda7760, tailcall)
void main_f_da7760() { main::sub_da77d0(); }

// sub_da7790  (orig 0xda7790, tailcall)
void main_f_da7790() { main::sub_da77d0(); }

// sub_da77a0  (orig 0xda77a0, tailcall)
void main_f_da77a0() { main::sub_da77d0(); }

// sub_da7cb0  (orig 0xda7cb0, tailcall)
void main_f_da7cb0() { main::sub_e9d210(); }

// sub_da7ce0  (orig 0xda7ce0, tailcall)
void main_f_da7ce0() { main::sub_e9d210(); }

// sub_da7d10  (orig 0xda7d10, mov_ret)
uint32_t main_f_da7d10() { return 1; }

// sub_da7ee0  (orig 0xda7ee0, tailcall)
void main_f_da7ee0() { main::sub_da7f10(); }

// sub_da7ef0  (orig 0xda7ef0, tailcall)
void main_f_da7ef0() { main::sub_da7f10(); }

// sub_da7f00  (orig 0xda7f00, tailcall)
void main_f_da7f00() { main::sub_da7f10(); }

// sub_da8580  (orig 0xda8580, mov_ret)
uint32_t main_f_da8580() { return 1; }

// sub_da8590  (orig 0xda8590, ret_only)
void main_f_da8590() {}

// sub_da8720  (orig 0xda8720, ret_only)
void main_f_da8720() {}

// sub_da8730  (orig 0xda8730, tailcall)
void main_f_da8730() { main::sub_e9d210(); }

// sub_da8740  (orig 0xda8740, tailcall)
void main_f_da8740() { main::sub_da87b0(); }

// sub_da8770  (orig 0xda8770, tailcall)
void main_f_da8770() { main::sub_da87b0(); }

// sub_da8780  (orig 0xda8780, tailcall)
void main_f_da8780() { main::sub_da87b0(); }

// sub_da8b40  (orig 0xda8b40, mov_ret)
uint32_t main_f_da8b40() { return 1; }

// sub_da8b50  (orig 0xda8b50, ret_only)
void main_f_da8b50() {}

// sub_da8df0  (orig 0xda8df0, ret_only)
void main_f_da8df0() {}

// sub_da8ec0  (orig 0xda8ec0, tailcall)
void main_f_da8ec0() { main::sub_da9070(); }

// sub_da8f90  (orig 0xda8f90, tailcall)
void main_f_da8f90() { main::sub_da9070(); }

// sub_da8fa0  (orig 0xda8fa0, tailcall)
void main_f_da8fa0() { main::sub_da9070(); }

// sub_da9f60  (orig 0xda9f60, tailcall)
void main_f_da9f60() { main::sub_da9bf0(); }

// sub_dac4d0  (orig 0xdac4d0, tailcall)
void main_f_dac4d0() { main::FE_G_IWA_KORI_HOLE(); }

// sub_dae6f0  (orig 0xdae6f0, mov_ret)
uint32_t main_f_dae6f0() { return 1; }

// sub_dae700  (orig 0xdae700, ret_only)
void main_f_dae700() {}

// sub_daed30  (orig 0xdaed30, ret_only)
void main_f_daed30() {}

// sub_daed40  (orig 0xdaed40, tailcall)
void main_f_daed40() { main::sub_e9d210(); }

// sub_daed50  (orig 0xdaed50, tailcall)
void main_f_daed50() { main::sub_daedc0(); }

// sub_daed80  (orig 0xdaed80, tailcall)
void main_f_daed80() { main::sub_daedc0(); }

// sub_daed90  (orig 0xdaed90, tailcall)
void main_f_daed90() { main::sub_daedc0(); }

// sub_daf090  (orig 0xdaf090, setter-chain)
void main_f_daf090(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; *(uint32_t*)((char*)(a0) + 96) = 0; *(uint8_t*)((char*)(a0) + 106) = 0; }

// sub_db0f80  (orig 0xdb0f80, ret_only)
void main_f_db0f80() {}

// sub_db30d0  (orig 0xdb30d0, tailcall)
void main_f_db30d0() { main::top_k_glove_joint(); }

// sub_db3e40  (orig 0xdb3e40, tailcall)
void main_f_db3e40() { main::sub_db3ca0(); }

// sub_db4360  (orig 0xdb4360, mov_ret)
uint32_t main_f_db4360() { return 1; }

// sub_db4370  (orig 0xdb4370, ret_only)
void main_f_db4370() {}

// sub_db5080  (orig 0xdb5080, ret_only)
void main_f_db5080() {}

// sub_db5170  (orig 0xdb5170, tailcall)
void main_f_db5170() { main::sub_db5380(); }

// sub_db5280  (orig 0xdb5280, tailcall)
void main_f_db5280() { main::sub_db5380(); }

// sub_db5290  (orig 0xdb5290, tailcall)
void main_f_db5290() { main::sub_db5380(); }

// sub_db6030  (orig 0xdb6030, ret_only)
void main_f_db6030() {}

// sub_db7e10  (orig 0xdb7e10, ret_only)
void main_f_db7e10() {}

// sub_dbdc40  (orig 0xdbdc40, tailcall)
void main_f_dbdc40() { main::sub_dbd810(); }

// sub_dbfa10  (orig 0xdbfa10, mov_ret)
uint32_t main_f_dbfa10() { return 1; }

// sub_dc1f10  (orig 0xdc1f10, tailcall)
void main_f_dc1f10() { main::sub_dc2200(); }

// sub_dc2000  (orig 0xdc2000, tailcall)
void main_f_dc2000() { main::sub_dc2200(); }

// sub_dc2010  (orig 0xdc2010, tailcall)
void main_f_dc2010() { main::sub_dc2200(); }

// sub_dc5900  (orig 0xdc5900, mov_ret)
uint32_t main_f_dc5900() { return 1; }

// sub_dc5910  (orig 0xdc5910, mov_ret)
uint32_t main_f_dc5910() { return 1; }

// sub_dc5920  (orig 0xdc5920, ret_only)
void main_f_dc5920() {}

// sub_dc5930  (orig 0xdc5930, ret_only)
void main_f_dc5930() {}

// sub_dc7690  (orig 0xdc7690, tailcall)
void main_f_dc7690() { main::Set_State_t0401_Switch_Yellow_b(); }

// sub_dc76a0  (orig 0xdc76a0, ret_only)
void main_f_dc76a0() {}

// sub_dc76b0  (orig 0xdc76b0, mov_ret)
uint32_t main_f_dc76b0() { return 0; }

// sub_dc7ff0  (orig 0xdc7ff0, mov_ret)
uint32_t main_f_dc7ff0() { return 1; }

// sub_dc8000  (orig 0xdc8000, ret_only)
void main_f_dc8000() {}

// sub_dc8a70  (orig 0xdc8a70, ret_only)
void main_f_dc8a70() {}

// sub_dc8a80  (orig 0xdc8a80, tailcall)
void main_f_dc8a80() { main::sub_e9d210(); }

// sub_dc8a90  (orig 0xdc8a90, tailcall)
void main_f_dc8a90() { main::sub_dc8b00(); }

// sub_dc8ac0  (orig 0xdc8ac0, tailcall)
void main_f_dc8ac0() { main::sub_dc8b00(); }

// sub_dc8ad0  (orig 0xdc8ad0, tailcall)
void main_f_dc8ad0() { main::sub_dc8b00(); }

// sub_dc8d50  (orig 0xdc8d50, mov_ret)
uint32_t main_f_dc8d50() { return 1; }

// sub_dc8d60  (orig 0xdc8d60, mov_ret)
uint32_t main_f_dc8d60() { return 1; }

// sub_dc8d70  (orig 0xdc8d70, ret_only)
void main_f_dc8d70() {}

// sub_dc8d80  (orig 0xdc8d80, ret_only)
void main_f_dc8d80() {}

// sub_dca3b0  (orig 0xdca3b0, tailcall)
void main_f_dca3b0() { main::kinoko_light(); }

// sub_dca3c0  (orig 0xdca3c0, ret_only)
void main_f_dca3c0() {}

// sub_dca3d0  (orig 0xdca3d0, mov_ret)
uint32_t main_f_dca3d0() { return 0; }

// sub_dca3e0  (orig 0xdca3e0, ret_only)
void main_f_dca3e0() {}

// sub_dcbe70  (orig 0xdcbe70, ret_only)
void main_f_dcbe70() {}

// sub_dcd830  (orig 0xdcd830, mov_ret)
uint32_t main_f_dcd830() { return 0; }

// sub_dcd840  (orig 0xdcd840, ret_only)
void main_f_dcd840() {}

// sub_dce280  (orig 0xdce280, tailcall)
void main_f_dce280() { main::sub_c69450(); }

// sub_dce290  (orig 0xdce290, tailcall)
void main_f_dce290() { main::sub_dce9d0(); }

// sub_dce6d0  (orig 0xdce6d0, ret_only)
void main_f_dce6d0() {}

// sub_dce710  (orig 0xdce710, tailcall)
void main_f_dce710() { main::sub_dce9d0(); }

// sub_dce720  (orig 0xdce720, tailcall)
void main_f_dce720() { main::sub_dce9d0(); }

// sub_dcec50  (orig 0xdcec50, ret_only)
void main_f_dcec50() {}

// sub_dcec60  (orig 0xdcec60, copy2)
void main_f_dcec60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dcec70  (orig 0xdcec70, copy2)
void main_f_dcec70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dcefe0  (orig 0xdcefe0, tailcall)
void main_f_dcefe0() { main::sub_c69450(); }

// sub_dceff0  (orig 0xdceff0, tailcall)
void main_f_dceff0() { main::sub_dcf2b0(); }

// sub_dcf240  (orig 0xdcf240, ret_only)
void main_f_dcf240() {}

// sub_dcf270  (orig 0xdcf270, tailcall)
void main_f_dcf270() { main::sub_dcf2b0(); }

// sub_dcf280  (orig 0xdcf280, tailcall)
void main_f_dcf280() { main::sub_dcf2b0(); }

// sub_dcf530  (orig 0xdcf530, ret_only)
void main_f_dcf530() {}

// sub_dcf540  (orig 0xdcf540, copy2)
void main_f_dcf540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dcf550  (orig 0xdcf550, copy2)
void main_f_dcf550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dd7460  (orig 0xdd7460, setter)
void main_f_dd7460(void* a0) { *(uint32_t*)((char*)(a0) + 544) = 0; }

// sub_dd7470  (orig 0xdd7470, tailcall)
void main_f_dd7470() { main::sub_dcf560(); }

// sub_dd7480  (orig 0xdd7480, setter)
void main_f_dd7480(void* a0) { *(uint32_t*)((char*)(a0) + 548) = 0; }

// sub_dd7490  (orig 0xdd7490, tailcall)
void main_f_dd7490() { main::sub_dd2a30(); }

// sub_dd8090  (orig 0xdd8090, tailcall)
void main_f_dd8090() { main::sub_e9d210(); }

// sub_dd8110  (orig 0xdd8110, mov_ret)
uint32_t main_f_dd8110() { return 1; }

// sub_dd8780  (orig 0xdd8780, ret_only)
void main_f_dd8780() {}

// sub_ddb0b0  (orig 0xddb0b0, mov_ret)
uint32_t main_f_ddb0b0() { return 1; }

// sub_dddaa0  (orig 0xdddaa0, tailcall)
void main_f_dddaa0() { main::sub_ddd8e0(); }

// sub_dddad0  (orig 0xdddad0, ret_only)
void main_f_dddad0() {}

// sub_ddf840  (orig 0xddf840, tailcall)
void main_f_ddf840() { main::sub_ddf700(); }

// sub_ddf850  (orig 0xddf850, tailcall)
void main_f_ddf850() { main::sub_ddf8c0(); }

// sub_ddf880  (orig 0xddf880, tailcall)
void main_f_ddf880() { main::sub_ddf8c0(); }

// sub_ddf890  (orig 0xddf890, tailcall)
void main_f_ddf890() { main::sub_ddf8c0(); }

// sub_de0ec0  (orig 0xde0ec0, tailcall)
void main_f_de0ec0() { main::sub_de0bf0(); }

// sub_de4880  (orig 0xde4880, tailcall)
void main_f_de4880() { main::sub_de4710(); }

// sub_de4d60  (orig 0xde4d60, strlit-ret)
const char *main_f_de4d60() { static char g_f_de4d60[1]; __asm__ volatile("" ::: "memory"); return g_f_de4d60; }

// sub_de5150  (orig 0xde5150, tailcall)
void main_f_de5150() { main::sub_de4fd0(); }

// sub_de5e50  (orig 0xde5e50, strlit-ret)
const char *main_f_de5e50() { static char g_f_de5e50[1]; __asm__ volatile("" ::: "memory"); return g_f_de5e50; }

// sub_de6a20  (orig 0xde6a20, strlit-ret)
const char *main_f_de6a20() { static char g_f_de6a20[1]; __asm__ volatile("" ::: "memory"); return g_f_de6a20; }

// sub_de6fc0  (orig 0xde6fc0, strlit-ret)
const char *main_f_de6fc0() { static char g_f_de6fc0[1]; __asm__ volatile("" ::: "memory"); return g_f_de6fc0; }

// sub_de85d0  (orig 0xde85d0, tailcall)
void main_f_de85d0() { main::sub_de8470(); }

// sub_de9c90  (orig 0xde9c90, tailcall)
void main_f_de9c90() { main::sub_de9b50(); }

// sub_deb570  (orig 0xdeb570, tailcall)
void main_f_deb570() { main::sub_deb410(); }

// sub_debc70  (orig 0xdebc70, getter-chain)
uint8_t main_f_debc70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 568); }

// sub_debc80  (orig 0xdebc80, ptr_add)
void* main_f_debc80(void* a0) { return (char*)a0 + 8; }

// sub_debc90  (orig 0xdebc90, getter-chain)
uint8_t main_f_debc90(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2849); }

// sub_debce0  (orig 0xdebce0, ptr_add)
void* main_f_debce0(void* a0) { return (char*)a0 + 73; }

// sub_debcf0  (orig 0xdebcf0, getter-chain)
uint32_t main_f_debcf0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2352); }

// sub_debda0  (orig 0xdebda0, getter-chain)
uint32_t main_f_debda0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2400); }

// sub_debdb0  (orig 0xdebdb0, getter-chain)
uint32_t main_f_debdb0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2404); }

// sub_debe80  (orig 0xdebe80, ptr_add)
void* main_f_debe80(void* a0) { return (char*)a0 + 138; }

// sub_debe90  (orig 0xdebe90, ptr_add)
void* main_f_debe90(void* a0) { return (char*)a0 + 203; }

// sub_dec5c0  (orig 0xdec5c0, getter-chain)
uint32_t main_f_dec5c0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2688); }

// sub_ded6a0  (orig 0xded6a0, getter-chain)
uint8_t main_f_ded6a0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 3001); }

// sub_ded7a0  (orig 0xded7a0, getter-chain)
uint32_t main_f_ded7a0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2844); }

// sub_ded7b0  (orig 0xded7b0, getter-chain)
uint32_t main_f_ded7b0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2840); }

// sub_ded8a0  (orig 0xded8a0, getter-chain)
uint32_t main_f_ded8a0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2852); }

// sub_ded9f0  (orig 0xded9f0, ret_only)
void main_f_ded9f0() {}

// sub_dee840  (orig 0xdee840, ret_only)
void main_f_dee840() {}

// sub_dee850  (orig 0xdee850, copy2)
void main_f_dee850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dee860  (orig 0xdee860, copy2)
void main_f_dee860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dee920  (orig 0xdee920, ret_only)
void main_f_dee920() {}

// sub_def9e0  (orig 0xdef9e0, mov_ret)
uint32_t main_f_def9e0() { return 0; }

// sub_df20e0  (orig 0xdf20e0, copy2)
void main_f_df20e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df20f0  (orig 0xdf20f0, copy2)
void main_f_df20f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df21b0  (orig 0xdf21b0, ret_only)
void main_f_df21b0() {}

// sub_df21c0  (orig 0xdf21c0, copy2)
void main_f_df21c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df21d0  (orig 0xdf21d0, copy2)
void main_f_df21d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df2290  (orig 0xdf2290, ret_only)
void main_f_df2290() {}

// sub_df22a0  (orig 0xdf22a0, copy2)
void main_f_df22a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df22b0  (orig 0xdf22b0, copy2)
void main_f_df22b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df22c0  (orig 0xdf22c0, ret_only)
void main_f_df22c0() {}

// sub_df22d0  (orig 0xdf22d0, ret_only)
void main_f_df22d0() {}

// sub_df22e0  (orig 0xdf22e0, ret_only)
void main_f_df22e0() {}

// sub_df7610  (orig 0xdf7610, ret_only)
void main_f_df7610() {}

// sub_df7620  (orig 0xdf7620, ret_only)
void main_f_df7620() {}

// sub_dffcc0  (orig 0xdffcc0, tailcall)
void main_f_dffcc0() { main::sub_e00be0(); }

// sub_dffcd0  (orig 0xdffcd0, tailcall)
void main_f_dffcd0() { main::sub_e00d90(); }

// sub_dffce0  (orig 0xdffce0, tailcall)
void main_f_dffce0() { main::sub_e01000(); }

// sub_dffcf0  (orig 0xdffcf0, tailcall)
void main_f_dffcf0() { main::sub_e01230(); }

// sub_e0a750  (orig 0xe0a750, tailcall)
void main_f_e0a750() { main::sub_e0b5c0(); }

// sub_e0a760  (orig 0xe0a760, tailcall)
void main_f_e0a760() { main::sub_e0b770(); }

// sub_e0a770  (orig 0xe0a770, tailcall)
void main_f_e0a770() { main::sub_e0b9e0(); }

// sub_e0a780  (orig 0xe0a780, tailcall)
void main_f_e0a780() { main::sub_e0bc10(); }

// sub_e10700  (orig 0xe10700, tailcall)
void main_f_e10700() { main::sub_e10710(); }

// sub_e107a0  (orig 0xe107a0, tailcall)
void main_f_e107a0() { main::sub_e107b0(); }

// sub_e109c0  (orig 0xe109c0, tailcall)
void main_f_e109c0() { main::sub_e109d0(); }

// sub_e10a60  (orig 0xe10a60, tailcall)
void main_f_e10a60() { main::sub_e10a70(); }

// sub_e14320  (orig 0xe14320, tailcall)
void main_f_e14320() { main::sub_e15190(); }

// sub_e14330  (orig 0xe14330, tailcall)
void main_f_e14330() { main::sub_e15340(); }

// sub_e14340  (orig 0xe14340, tailcall)
void main_f_e14340() { main::sub_e155b0(); }

// sub_e14350  (orig 0xe14350, tailcall)
void main_f_e14350() { main::sub_e157e0(); }

// sub_e31a60  (orig 0xe31a60, tailcall)
void main_f_e31a60() { main::sub_e328d0(); }

// sub_e31a70  (orig 0xe31a70, tailcall)
void main_f_e31a70() { main::sub_e32a80(); }

// sub_e31a80  (orig 0xe31a80, tailcall)
void main_f_e31a80() { main::sub_e32cf0(); }

// sub_e31a90  (orig 0xe31a90, tailcall)
void main_f_e31a90() { main::sub_e32f20(); }

// sub_e366b0  (orig 0xe366b0, ret_only)
void main_f_e366b0() {}

// sub_e36c00  (orig 0xe36c00, tailcall)
void main_f_e36c00() { main::sub_d63270(); }

// sub_e36fa0  (orig 0xe36fa0, strlit-ret)
const char *main_f_e36fa0() { static char g_f_e36fa0[1]; __asm__ volatile("" ::: "memory"); return g_f_e36fa0; }

// sub_e39d60  (orig 0xe39d60, strlit-ret)
const char *main_f_e39d60() { static char g_f_e39d60[1]; __asm__ volatile("" ::: "memory"); return g_f_e39d60; }

// sub_e39ff0  (orig 0xe39ff0, strlit-ret)
const char *main_f_e39ff0() { static char g_f_e39ff0[1]; __asm__ volatile("" ::: "memory"); return g_f_e39ff0; }

// sub_e3a290  (orig 0xe3a290, strlit-ret)
const char *main_f_e3a290() { static char g_f_e3a290[1]; __asm__ volatile("" ::: "memory"); return g_f_e3a290; }

// sub_e3a4f0  (orig 0xe3a4f0, strlit-ret)
const char *main_f_e3a4f0() { static char g_f_e3a4f0[1]; __asm__ volatile("" ::: "memory"); return g_f_e3a4f0; }

// sub_e3a810  (orig 0xe3a810, tailcall)
void main_f_e3a810() { main::sub_e3a6c0(); }

// sub_e3aca0  (orig 0xe3aca0, ptr_add)
void* main_f_e3aca0(void* a0) { return (char*)a0 + 128; }

// sub_e3b260  (orig 0xe3b260, strlit-ret)
const char *main_f_e3b260() { static char g_f_e3b260[1]; __asm__ volatile("" ::: "memory"); return g_f_e3b260; }

// sub_e3b510  (orig 0xe3b510, strlit-ret)
const char *main_f_e3b510() { static char g_f_e3b510[1]; __asm__ volatile("" ::: "memory"); return g_f_e3b510; }

// sub_e3b7b0  (orig 0xe3b7b0, strlit-ret)
const char *main_f_e3b7b0() { static char g_f_e3b7b0[1]; __asm__ volatile("" ::: "memory"); return g_f_e3b7b0; }

// sub_e3ba50  (orig 0xe3ba50, strlit-ret)
const char *main_f_e3ba50() { static char g_f_e3ba50[1]; __asm__ volatile("" ::: "memory"); return g_f_e3ba50; }

// sub_e3c920  (orig 0xe3c920, tailcall)
void main_f_e3c920() { main::sub_c7b920(); }

// sub_e3cdc0  (orig 0xe3cdc0, setter)
void main_f_e3cdc0(void* a0) { *(uint64_t*)((char*)(a0) + 96) = 0; }

// sub_e3d5f0  (orig 0xe3d5f0, tailcall)
void main_f_e3d5f0() { main::sub_e3d4d0(); }

// sub_e3dfe0  (orig 0xe3dfe0, straight)
void main_f_e3dfe0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0) + 144) = 2;
    *(uint64_t*)((char*)(a0) + 152) = *(uint64_t*)((char*)(a1));
}

// sub_e3f1e0  (orig 0xe3f1e0, ret_only)
void main_f_e3f1e0() {}

// sub_e3f1f0  (orig 0xe3f1f0, copy2)
void main_f_e3f1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e3f200  (orig 0xe3f200, copy2)
void main_f_e3f200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e3f420  (orig 0xe3f420, ret_only)
void main_f_e3f420() {}

// sub_e3f430  (orig 0xe3f430, copy2)
void main_f_e3f430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e3f440  (orig 0xe3f440, copy2)
void main_f_e3f440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e3f720  (orig 0xe3f720, tailcall)
void main_f_e3f720() { main::sub_e3f580(); }

// sub_e41310  (orig 0xe41310, setter)
void main_f_e41310(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_e413e0  (orig 0xe413e0, ret_only)
void main_f_e413e0() {}

// sub_e413f0  (orig 0xe413f0, mov_ret)
uint32_t main_f_e413f0() { return 1; }

// sub_e417e0  (orig 0xe417e0, tailcall)
void main_f_e417e0() { main::sub_e41a80(); }

// sub_e418b0  (orig 0xe418b0, tailcall)
void main_f_e418b0() { main::sub_e41a80(); }

// sub_e418c0  (orig 0xe418c0, tailcall)
void main_f_e418c0() { main::sub_e41a80(); }

// sub_e420a0  (orig 0xe420a0, ret_only)
void main_f_e420a0() {}

// sub_e420b0  (orig 0xe420b0, straight)
void main_f_e420b0(void* a0) {
    *(uint32_t*)((char*)(a0) + 120) = 1;
}

// sub_e420c0  (orig 0xe420c0, ret_only)
void main_f_e420c0() {}

// sub_e42280  (orig 0xe42280, compare)
bool main_f_e42280(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 128)) == (uint64_t)(0); }

// sub_e42d20  (orig 0xe42d20, tailcall)
void main_f_e42d20() { main::sub_e42ab0(); }

// sub_e43c20  (orig 0xe43c20, ret_only)
void main_f_e43c20() {}

// sub_e44e00  (orig 0xe44e00, compare)
bool main_f_e44e00(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 144)) != (uint64_t)(0); }

// sub_e470e0  (orig 0xe470e0, tailcall)
void main_f_e470e0() { main::sub_e46dd0(); }

// sub_e47110  (orig 0xe47110, mov_ret)
uint32_t main_f_e47110() { return 1; }

// sub_e47360  (orig 0xe47360, ret_only)
void main_f_e47360() {}

// sub_e47370  (orig 0xe47370, ret_only)
void main_f_e47370() {}

// sub_e47380  (orig 0xe47380, mov_ret)
uint32_t main_f_e47380() { return 1; }

// sub_e47390  (orig 0xe47390, ret_only)
void main_f_e47390() {}

// sub_e473a0  (orig 0xe473a0, ret_only)
void main_f_e473a0() {}

// sub_e473b0  (orig 0xe473b0, ret_only)
void main_f_e473b0() {}

// sub_e473c0  (orig 0xe473c0, mov_ret)
uint32_t main_f_e473c0() { return 1; }

// sub_e473d0  (orig 0xe473d0, ret_only)
void main_f_e473d0() {}

// sub_e473e0  (orig 0xe473e0, ret_only)
void main_f_e473e0() {}

// sub_e473f0  (orig 0xe473f0, ret_only)
void main_f_e473f0() {}

// sub_e484f0  (orig 0xe484f0, tailcall)
void main_f_e484f0() { main::sub_e47be0(); }

// sub_e4a640  (orig 0xe4a640, setter)
void main_f_e4a640(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 648) = a1; }

// sub_e4c110  (orig 0xe4c110, tailcall)
void main_f_e4c110() { main::sub_e4bd00(); }

// sub_e4c3b0  (orig 0xe4c3b0, tailcall)
void main_f_e4c3b0() { main::sub_e4c3c0(); }

// sub_e4cc50  (orig 0xe4cc50, ret_only)
void main_f_e4cc50() {}

// sub_e51bf0  (orig 0xe51bf0, setter)
void main_f_e51bf0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 456) = a1; }

// sub_e51c00  (orig 0xe51c00, setter)
void main_f_e51c00(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 457) = a1; }

// sub_e56b70  (orig 0xe56b70, tailcall)
void main_f_e56b70() { main::sub_c8aa60(); }

// sub_e58e70  (orig 0xe58e70, tailcall)
void main_f_e58e70() { main::sub_e58d20(); }

// sub_e5e460  (orig 0xe5e460, tailcall)
void main_f_e5e460() { main::sub_e5e110(); }

// sub_e5f920  (orig 0xe5f920, ret_only)
void main_f_e5f920() {}

// sub_e60600  (orig 0xe60600, ret_only)
void main_f_e60600() {}

// sub_e60820  (orig 0xe60820, tailcall)
void main_f_e60820() { main::sub_e7c4c0(); }

// sub_e60830  (orig 0xe60830, tailcall)
void main_f_e60830() { main::sub_e60c10(); }

// sub_e60860  (orig 0xe60860, tailcall)
void main_f_e60860() { main::sub_e60c10(); }

// sub_e60870  (orig 0xe60870, tailcall)
void main_f_e60870() { main::sub_e60c10(); }

// sub_e60930  (orig 0xe60930, getter)
uint64_t main_f_e60930(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_e60ac0  (orig 0xe60ac0, mov_ret)
uint32_t main_f_e60ac0() { return 3; }

// sub_e610f0  (orig 0xe610f0, tailcall)
void main_f_e610f0() { main::sub_e60fd0(); }

// sub_e61100  (orig 0xe61100, tailcall)
void main_f_e61100() { main::sub_e61170(); }

// sub_e61130  (orig 0xe61130, tailcall)
void main_f_e61130() { main::sub_e61170(); }

// sub_e61140  (orig 0xe61140, tailcall)
void main_f_e61140() { main::sub_e61170(); }

// sub_e65c40  (orig 0xe65c40, ret_only)
void main_f_e65c40() {}

// sub_e65c50  (orig 0xe65c50, copy2)
void main_f_e65c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65c60  (orig 0xe65c60, copy2)
void main_f_e65c60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65d50  (orig 0xe65d50, ret_only)
void main_f_e65d50() {}

// sub_e65d60  (orig 0xe65d60, copy2)
void main_f_e65d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65d70  (orig 0xe65d70, copy2)
void main_f_e65d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65e00  (orig 0xe65e00, ret_only)
void main_f_e65e00() {}

// sub_e65e10  (orig 0xe65e10, copy2)
void main_f_e65e10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65e20  (orig 0xe65e20, copy2)
void main_f_e65e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65f40  (orig 0xe65f40, ret_only)
void main_f_e65f40() {}

// sub_e65f50  (orig 0xe65f50, copy2)
void main_f_e65f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65f60  (orig 0xe65f60, copy2)
void main_f_e65f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66200  (orig 0xe66200, ret_only)
void main_f_e66200() {}

// sub_e66210  (orig 0xe66210, copy2)
void main_f_e66210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66220  (orig 0xe66220, copy2)
void main_f_e66220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e662f0  (orig 0xe662f0, ret_only)
void main_f_e662f0() {}

// sub_e66300  (orig 0xe66300, copy2)
void main_f_e66300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66310  (orig 0xe66310, copy2)
void main_f_e66310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66340  (orig 0xe66340, ret_only)
void main_f_e66340() {}

// sub_e66350  (orig 0xe66350, copy2)
void main_f_e66350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66360  (orig 0xe66360, copy2)
void main_f_e66360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66740  (orig 0xe66740, tailcall)
void main_f_e66740() { main::sub_e7feb0(); }

// sub_e66750  (orig 0xe66750, tailcall)
void main_f_e66750() { main::sub_e667c0(); }

// sub_e66780  (orig 0xe66780, tailcall)
void main_f_e66780() { main::sub_e667c0(); }

// sub_e66790  (orig 0xe66790, tailcall)
void main_f_e66790() { main::sub_e667c0(); }

// sub_e66dd0  (orig 0xe66dd0, getter)
uint8_t main_f_e66dd0(void* a0) { return *(uint8_t*)((char*)(a0) + 133); }

// sub_e67320  (orig 0xe67320, mov_ret)
uint32_t main_f_e67320() { return 1; }

// sub_e67490  (orig 0xe67490, tailcall)
void main_f_e67490() { main::sub_e67540(); }

// sub_e674a0  (orig 0xe674a0, ret_only)
void main_f_e674a0() {}

// sub_e674b0  (orig 0xe674b0, ret_only)
void main_f_e674b0() {}

// sub_e674c0  (orig 0xe674c0, ret_only)
void main_f_e674c0() {}

// sub_e674d0  (orig 0xe674d0, ret_only)
void main_f_e674d0() {}

// sub_e67500  (orig 0xe67500, tailcall)
void main_f_e67500() { main::sub_e67540(); }

// sub_e67510  (orig 0xe67510, tailcall)
void main_f_e67510() { main::sub_e67540(); }

// sub_e67870  (orig 0xe67870, ret_only)
void main_f_e67870() {}

// sub_e67880  (orig 0xe67880, mov_ret)
uint32_t main_f_e67880() { return 1; }

// sub_e67ff0  (orig 0xe67ff0, mov_ret)
uint32_t main_f_e67ff0() { return 0; }

// sub_e68180  (orig 0xe68180, tailcall)
void main_f_e68180() { main::sub_e7feb0(); }

// sub_e68190  (orig 0xe68190, tailcall)
void main_f_e68190() { main::sub_e68200(); }

// sub_e681c0  (orig 0xe681c0, tailcall)
void main_f_e681c0() { main::sub_e68200(); }

// sub_e681d0  (orig 0xe681d0, tailcall)
void main_f_e681d0() { main::sub_e68200(); }

// sub_e68360  (orig 0xe68360, ret_only)
void main_f_e68360() {}

// sub_e68370  (orig 0xe68370, copy2)
void main_f_e68370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e68380  (orig 0xe68380, copy2)
void main_f_e68380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e69f40  (orig 0xe69f40, tailcall)
void main_f_e69f40() { main::sub_e6a0f0(); }

// sub_e6a010  (orig 0xe6a010, tailcall)
void main_f_e6a010() { main::sub_e6a0f0(); }

// sub_e6a020  (orig 0xe6a020, tailcall)
void main_f_e6a020() { main::sub_e6a0f0(); }

// sub_e6b0c0  (orig 0xe6b0c0, ret_only)
void main_f_e6b0c0() {}

// sub_e6b4e0  (orig 0xe6b4e0, ret_only)
void main_f_e6b4e0() {}

// sub_e6b6b0  (orig 0xe6b6b0, tailcall)
void main_f_e6b6b0() { main::sub_e6b4f0(); }

// sub_e6bc10  (orig 0xe6bc10, ret_only)
void main_f_e6bc10() {}

// sub_e6c320  (orig 0xe6c320, tailcall)
void main_f_e6c320() { main::sub_e7c4c0(); }

// sub_e6c4c0  (orig 0xe6c4c0, tailcall)
void main_f_e6c4c0() { main::sub_e7c4c0(); }

// sub_e6caf0  (orig 0xe6caf0, tailcall)
void main_f_e6caf0() { main::sub_e6c870(); }

// sub_e6cb00  (orig 0xe6cb00, tailcall)
void main_f_e6cb00() { main::sub_14e0b90(); }

// sub_e6cb30  (orig 0xe6cb30, tailcall)
void main_f_e6cb30() { main::sub_14e0b90(); }

// sub_e6cb40  (orig 0xe6cb40, tailcall)
void main_f_e6cb40() { main::sub_14e0b90(); }

// sub_e6cb70  (orig 0xe6cb70, ret_only)
void main_f_e6cb70() {}

// sub_e6cb80  (orig 0xe6cb80, tailcall)
void main_f_e6cb80() { main::sub_ce0(); }

// sub_e6d3d0  (orig 0xe6d3d0, ret_only)
void main_f_e6d3d0() {}

// sub_e6da10  (orig 0xe6da10, mov_ret)
uint32_t main_f_e6da10() { return 1; }

// sub_e6e3d0  (orig 0xe6e3d0, compare)
bool main_f_e6e3d0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1484)) == (uint64_t)(0); }

// sub_e6e3e0  (orig 0xe6e3e0, tailcall)
void main_f_e6e3e0() { main::sub_e7feb0(); }

// sub_e6e3f0  (orig 0xe6e3f0, tailcall)
void main_f_e6e3f0() { main::sub_e6e460(); }

// sub_e6e420  (orig 0xe6e420, tailcall)
void main_f_e6e420() { main::sub_e6e460(); }

// sub_e6e430  (orig 0xe6e430, tailcall)
void main_f_e6e430() { main::sub_e6e460(); }

// sub_e6e660  (orig 0xe6e660, ret_only)
void main_f_e6e660() {}

// sub_e6e670  (orig 0xe6e670, copy2)
void main_f_e6e670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e6e680  (orig 0xe6e680, copy2)
void main_f_e6e680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e6e820  (orig 0xe6e820, ret_only)
void main_f_e6e820() {}

// sub_e6f180  (orig 0xe6f180, mov_ret)
uint32_t main_f_e6f180() { return 1; }

// sub_e6f320  (orig 0xe6f320, ret_only)
void main_f_e6f320() {}

// sub_e6f330  (orig 0xe6f330, tailcall)
void main_f_e6f330() { main::sub_ce0(); }

// sub_e6f400  (orig 0xe6f400, ret_only)
void main_f_e6f400() {}

// sub_e6f410  (orig 0xe6f410, ret_only)
void main_f_e6f410() {}

// sub_e6f420  (orig 0xe6f420, ret_only)
void main_f_e6f420() {}

// sub_e6f5e0  (orig 0xe6f5e0, ret_only)
void main_f_e6f5e0() {}

// sub_e6f5f0  (orig 0xe6f5f0, ret_only)
void main_f_e6f5f0() {}

// sub_e6f600  (orig 0xe6f600, ret_only)
void main_f_e6f600() {}

// sub_e6f7c0  (orig 0xe6f7c0, ret_only)
void main_f_e6f7c0() {}

// sub_e6f7d0  (orig 0xe6f7d0, ret_only)
void main_f_e6f7d0() {}

// sub_e6f7e0  (orig 0xe6f7e0, ret_only)
void main_f_e6f7e0() {}

// sub_e71990  (orig 0xe71990, mov_ret)
uint32_t main_f_e71990() { return 1; }

// sub_e72700  (orig 0xe72700, tailcall)
void main_f_e72700() { main::sub_e72930(); }

// sub_e72810  (orig 0xe72810, tailcall)
void main_f_e72810() { main::sub_e72930(); }

// sub_e72820  (orig 0xe72820, tailcall)
void main_f_e72820() { main::sub_e72930(); }

// sub_e72a90  (orig 0xe72a90, ret_only)
void main_f_e72a90() {}

// sub_e72aa0  (orig 0xe72aa0, copy2)
void main_f_e72aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e72ab0  (orig 0xe72ab0, copy2)
void main_f_e72ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e72f90  (orig 0xe72f90, tailcall)
void main_f_e72f90() { main::sub_e67330(); }

// sub_e73010  (orig 0xe73010, mov_ret)
uint32_t main_f_e73010() { return 1; }

// sub_e73140  (orig 0xe73140, tailcall)
void main_f_e73140() { main::sub_e67330(); }

// sub_e731c0  (orig 0xe731c0, mov_ret)
uint32_t main_f_e731c0() { return 2; }

// sub_e732f0  (orig 0xe732f0, tailcall)
void main_f_e732f0() { main::sub_e67330(); }

// sub_e73370  (orig 0xe73370, mov_ret)
uint32_t main_f_e73370() { return 3; }

// sub_e73870  (orig 0xe73870, tailcall)
void main_f_e73870() { main::sub_e734a0(); }

// sub_e73dc0  (orig 0xe73dc0, mov_ret)
uint32_t main_f_e73dc0() { return 1; }

// sub_e73dd0  (orig 0xe73dd0, ret_only)
void main_f_e73dd0() {}

// sub_e73de0  (orig 0xe73de0, ret_only)
void main_f_e73de0() {}

// sub_e741d0  (orig 0xe741d0, tailcall)
void main_f_e741d0() { main::sub_e74200(); }

// sub_e741e0  (orig 0xe741e0, tailcall)
void main_f_e741e0() { main::sub_e74200(); }

// sub_e741f0  (orig 0xe741f0, tailcall)
void main_f_e741f0() { main::sub_e74200(); }

// sub_e747a0  (orig 0xe747a0, mov_ret)
uint32_t main_f_e747a0() { return 1; }

// sub_e747b0  (orig 0xe747b0, ret_only)
void main_f_e747b0() {}

// sub_e747c0  (orig 0xe747c0, ret_only)
void main_f_e747c0() {}

// sub_e747d0  (orig 0xe747d0, mov_ret)
uint32_t main_f_e747d0() { return 1; }

// sub_e748c0  (orig 0xe748c0, setter)
void main_f_e748c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1792) = a1; }

// sub_e74a70  (orig 0xe74a70, tailcall)
void main_f_e74a70() { main::sub_e748d0(); }

// sub_e74cd0  (orig 0xe74cd0, tailcall)
void main_f_e74cd0() { main::sub_e7c250(); }

// sub_e74ce0  (orig 0xe74ce0, tailcall)
void main_f_e74ce0() { main::sub_e75330(); }

// sub_e74d10  (orig 0xe74d10, tailcall)
void main_f_e74d10() { main::sub_e75330(); }

// sub_e74d20  (orig 0xe74d20, tailcall)
void main_f_e74d20() { main::sub_e75330(); }

// sub_e74fa0  (orig 0xe74fa0, getter)
uint64_t main_f_e74fa0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_e75110  (orig 0xe75110, mov_ret)
uint32_t main_f_e75110() { return 1; }

// sub_e75c70  (orig 0xe75c70, ret_only)
void main_f_e75c70() {}

// sub_e75c80  (orig 0xe75c80, tailcall)
void main_f_e75c80() { main::sub_e7c4c0(); }

// sub_e75c90  (orig 0xe75c90, tailcall)
void main_f_e75c90() { main::sub_e75d00(); }

// sub_e75cc0  (orig 0xe75cc0, tailcall)
void main_f_e75cc0() { main::sub_e75d00(); }

// sub_e75cd0  (orig 0xe75cd0, tailcall)
void main_f_e75cd0() { main::sub_e75d00(); }

// sub_e76460  (orig 0xe76460, copy2)
void main_f_e76460(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 1488) = *(uint64_t*)((char*)(a1)); }

// sub_e76470  (orig 0xe76470, tailcall)
void main_f_e76470() { main::sub_e7feb0(); }

// sub_e76480  (orig 0xe76480, tailcall)
void main_f_e76480() { main::sub_e75f40(); }

// sub_e764b0  (orig 0xe764b0, tailcall)
void main_f_e764b0() { main::sub_e75f40(); }

// sub_e764c0  (orig 0xe764c0, tailcall)
void main_f_e764c0() { main::sub_e75f40(); }

// sub_e76a20  (orig 0xe76a20, mov_ret)
uint64_t main_f_e76a20() { return 0; }

// sub_e7c1c0  (orig 0xe7c1c0, compare)
bool main_f_e7c1c0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1344)) == (uint64_t)(0); }

// sub_e7cb40  (orig 0xe7cb40, tailcall)
void main_f_e7cb40() { main::sub_e7ca50(); }

// sub_e7cbc0  (orig 0xe7cbc0, ret_only)
void main_f_e7cbc0() {}

// sub_e7cbd0  (orig 0xe7cbd0, ret_only)
void main_f_e7cbd0() {}

// sub_e7cbe0  (orig 0xe7cbe0, ret_only)
void main_f_e7cbe0() {}

// sub_e7cbf0  (orig 0xe7cbf0, ret_only)
void main_f_e7cbf0() {}

// sub_e7cc00  (orig 0xe7cc00, ret_only)
void main_f_e7cc00() {}

// sub_e7cc10  (orig 0xe7cc10, mov_ret)
uint32_t main_f_e7cc10() { return 1; }

// sub_e7cc20  (orig 0xe7cc20, ret_only)
void main_f_e7cc20() {}

// sub_e7cc30  (orig 0xe7cc30, mov_ret)
uint32_t main_f_e7cc30() { return 1; }

// sub_e7cc40  (orig 0xe7cc40, ret_only)
void main_f_e7cc40() {}

// sub_e7cc50  (orig 0xe7cc50, ret_only)
void main_f_e7cc50() {}

// sub_e7cc60  (orig 0xe7cc60, ret_only)
void main_f_e7cc60() {}

// sub_e7cc80  (orig 0xe7cc80, mov_ret)
uint32_t main_f_e7cc80() { return 1; }

// sub_e7cea0  (orig 0xe7cea0, ret_only)
void main_f_e7cea0() {}

// sub_e7ceb0  (orig 0xe7ceb0, mov_ret)
uint32_t main_f_e7ceb0() { return 1; }

// sub_e7cec0  (orig 0xe7cec0, ret_only)
void main_f_e7cec0() {}

// sub_e7ced0  (orig 0xe7ced0, mov_ret)
uint32_t main_f_e7ced0() { return -1; }

// sub_e7f100  (orig 0xe7f100, tailcall)
void main_f_e7f100() { main::sub_e7efd0(); }

// sub_e7f490  (orig 0xe7f490, tailcall)
void main_f_e7f490() { main::sub_e7feb0(); }

// sub_e7f510  (orig 0xe7f510, mov_ret)
uint32_t main_f_e7f510() { return 1; }

// sub_e7f520  (orig 0xe7f520, ret_only)
void main_f_e7f520() {}

// sub_e7f530  (orig 0xe7f530, mov_ret)
uint32_t main_f_e7f530() { return 1; }

// sub_e7f540  (orig 0xe7f540, ret_only)
void main_f_e7f540() {}

// sub_e7f550  (orig 0xe7f550, ret_only)
void main_f_e7f550() {}

// sub_e7f560  (orig 0xe7f560, ret_only)
void main_f_e7f560() {}

// sub_e7f570  (orig 0xe7f570, ret_only)
void main_f_e7f570() {}

// sub_e7f580  (orig 0xe7f580, ret_only)
void main_f_e7f580() {}

// sub_e7f590  (orig 0xe7f590, mov_ret)
uint32_t main_f_e7f590() { return 1; }

// sub_e7f7c0  (orig 0xe7f7c0, getter-chain)
uint64_t main_f_e7f7c0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 96))) + 176); }

// sub_e7f7e0  (orig 0xe7f7e0, getter-chain)
uint64_t main_f_e7f7e0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 96))) + 176); }

// sub_e80550  (orig 0xe80550, tailcall)
void main_f_e80550() { main::sub_e7feb0(); }

// sub_e806a0  (orig 0xe806a0, getter)
uint64_t main_f_e806a0(void* a0) { return *(uint64_t*)((char*)(a0) + 1440); }

// sub_e81220  (orig 0xe81220, ret_only)
void main_f_e81220() {}

// sub_e81230  (orig 0xe81230, strlit-ret)
const char *main_f_e81230() { static char g_f_e81230[1]; __asm__ volatile("" ::: "memory"); return g_f_e81230; }

// sub_e81240  (orig 0xe81240, tailcall)
void main_f_e81240() { main::sub_e81640(); }

// sub_e81250  (orig 0xe81250, ret_only)
void main_f_e81250() {}

// sub_e81260  (orig 0xe81260, tailcall)
void main_f_e81260() { main::sub_e81640(); }

// sub_e81270  (orig 0xe81270, tailcall)
void main_f_e81270() { main::sub_e81640(); }

// sub_e81400  (orig 0xe81400, ptr_add)
void* main_f_e81400(void* a0) { return (char*)a0 + 24; }

// sub_e81820  (orig 0xe81820, ptr_add)
void* main_f_e81820(void* a0) { return (char*)a0 + 24; }

// sub_e857b0  (orig 0xe857b0, ret_only)
void main_f_e857b0() {}

// sub_e857c0  (orig 0xe857c0, copy2)
void main_f_e857c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e857d0  (orig 0xe857d0, copy2)
void main_f_e857d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e86680  (orig 0xe86680, ret_only)
void main_f_e86680() {}

// sub_e866c0  (orig 0xe866c0, ret_only)
void main_f_e866c0() {}

// sub_e86750  (orig 0xe86750, ret_only)
void main_f_e86750() {}

// sub_e87c40  (orig 0xe87c40, ret_only)
void main_f_e87c40() {}

// sub_e88350  (orig 0xe88350, ret_only)
void main_f_e88350() {}

// sub_e88fe0  (orig 0xe88fe0, compare)
bool main_f_e88fe0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 3376)) != (uint64_t)(0); }

// sub_e88ff0  (orig 0xe88ff0, compare)
bool main_f_e88ff0(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 3420)) > (int64_t)(0); }

// sub_e892e0  (orig 0xe892e0, ret_only)
void main_f_e892e0() {}

// sub_e89360  (orig 0xe89360, ret_only)
void main_f_e89360() {}

// sub_e89540  (orig 0xe89540, ret_only)
void main_f_e89540() {}

// sub_e89870  (orig 0xe89870, ret_only)
void main_f_e89870() {}

// sub_e8cbd0  (orig 0xe8cbd0, tailcall)
void main_f_e8cbd0() { main::sub_e8b4f0(); }

// sub_e8cbf0  (orig 0xe8cbf0, tailcall)
void main_f_e8cbf0() { main::sub_e8cc00(); }

// sub_e92910  (orig 0xe92910, ret_only)
void main_f_e92910() {}

// sub_e92920  (orig 0xe92920, copy2)
void main_f_e92920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e92930  (orig 0xe92930, copy2)
void main_f_e92930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e92a00  (orig 0xe92a00, ret_only)
void main_f_e92a00() {}

// sub_e92a10  (orig 0xe92a10, copy2)
void main_f_e92a10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e92a20  (orig 0xe92a20, copy2)
void main_f_e92a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e92a30  (orig 0xe92a30, mov_ret)
uint32_t main_f_e92a30() { return 2; }

// sub_e92fa0  (orig 0xe92fa0, tailcall)
void main_f_e92fa0() { main::sub_e92dc0(); }

// sub_e92fb0  (orig 0xe92fb0, ret_only)
void main_f_e92fb0() {}

// sub_e93030  (orig 0xe93030, ret_only)
void main_f_e93030() {}

// sub_e93580  (orig 0xe93580, ret_only)
void main_f_e93580() {}

// sub_e93600  (orig 0xe93600, ret_only)
void main_f_e93600() {}

// sub_e93bc0  (orig 0xe93bc0, mov_ret)
uint32_t main_f_e93bc0() { return 7; }

// sub_e94930  (orig 0xe94930, mov_ret)
uint32_t main_f_e94930() { return 6; }

// sub_e94b80  (orig 0xe94b80, tailcall)
void main_f_e94b80() { main::sub_5d1550(); }

// sub_e94b90  (orig 0xe94b90, tailcall)
void main_f_e94b90() { main::sub_e94c10(); }

// sub_e94ba0  (orig 0xe94ba0, tailcall)
void main_f_e94ba0() { main::sub_5d2800(); }

// sub_e94bd0  (orig 0xe94bd0, tailcall)
void main_f_e94bd0() { main::sub_e94c10(); }

// sub_e94be0  (orig 0xe94be0, tailcall)
void main_f_e94be0() { main::sub_e94c10(); }

// sub_e97cd0  (orig 0xe97cd0, ret_only)
void main_f_e97cd0() {}

// sub_e98ca0  (orig 0xe98ca0, ret_only)
void main_f_e98ca0() {}

// sub_e99740  (orig 0xe99740, ret_only)
void main_f_e99740() {}

// sub_e9cc60  (orig 0xe9cc60, tailcall)
void main_f_e9cc60() { main::sub_ead240(); }

// sub_e9cc80  (orig 0xe9cc80, tailcall)
void main_f_e9cc80() { main::sub_ead240(); }

// sub_e9cca0  (orig 0xe9cca0, strlit-ret)
const char *main_f_e9cca0() { static char g_f_e9cca0[1]; __asm__ volatile("" ::: "memory"); return g_f_e9cca0; }

// sub_e9d7c0  (orig 0xe9d7c0, tailcall)
void main_f_e9d7c0() { main::sub_5d1550(); }

// sub_e9d7d0  (orig 0xe9d7d0, tailcall)
void main_f_e9d7d0() { main::sub_e9d840(); }

// sub_e9d800  (orig 0xe9d800, tailcall)
void main_f_e9d800() { main::sub_e9d840(); }

// sub_e9d810  (orig 0xe9d810, tailcall)
void main_f_e9d810() { main::sub_e9d840(); }

// sub_e9ddb0  (orig 0xe9ddb0, compare)
bool main_f_e9ddb0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 120)) != (uint64_t)(0); }

// sub_e9ddc0  (orig 0xe9ddc0, getter)
uint8_t main_f_e9ddc0(void* a0) { return *(uint8_t*)((char*)(a0) + 137); }

// sub_e9ebc0  (orig 0xe9ebc0, tailcall)
void main_f_e9ebc0() { main::sub_5d1550(); }

// sub_e9ec40  (orig 0xe9ec40, tailcall)
void main_f_e9ec40() { main::sub_5d2800(); }

// sub_e9fd70  (orig 0xe9fd70, ret_only)
void main_f_e9fd70() {}

// sub_e9fd80  (orig 0xe9fd80, ret_only)
void main_f_e9fd80() {}

// sub_e9fd90  (orig 0xe9fd90, ret_only)
void main_f_e9fd90() {}

// sub_ea0970  (orig 0xea0970, mov_ret)
uint32_t main_f_ea0970() { return 1; }

// sub_ea0980  (orig 0xea0980, mov_ret)
uint32_t main_f_ea0980() { return 0; }

// sub_ea0990  (orig 0xea0990, ret_only)
void main_f_ea0990() {}

// sub_ea09a0  (orig 0xea09a0, mov_ret)
uint32_t main_f_ea09a0() { return 1; }

// sub_ea09b0  (orig 0xea09b0, ret_only)
void main_f_ea09b0() {}

// sub_ea09c0  (orig 0xea09c0, ret_only)
void main_f_ea09c0() {}

// sub_ea1f60  (orig 0xea1f60, tailcall)
void main_f_ea1f60() { main::sub_5d1550(); }

// sub_ea2230  (orig 0xea2230, tailcall)
void main_f_ea2230() { main::sub_5d1550(); }

// sub_ea2450  (orig 0xea2450, ret_only)
void main_f_ea2450() {}

// sub_ea2460  (orig 0xea2460, copy2)
void main_f_ea2460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ea2470  (orig 0xea2470, copy2)
void main_f_ea2470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ea24f0  (orig 0xea24f0, ret_only)
void main_f_ea24f0() {}

// sub_ea2500  (orig 0xea2500, copy2)
void main_f_ea2500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ea2510  (orig 0xea2510, copy2)
void main_f_ea2510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ea2950  (orig 0xea2950, ret_only)
void main_f_ea2950() {}

// sub_ea2960  (orig 0xea2960, ret_only)
void main_f_ea2960() {}

// sub_ea2970  (orig 0xea2970, ret_only)
void main_f_ea2970() {}

// sub_ea2fe0  (orig 0xea2fe0, ret_only)
void main_f_ea2fe0() {}

// sub_ea37a0  (orig 0xea37a0, tailcall)
void main_f_ea37a0() { main::sub_ea2e20(); }

// sub_ea3d10  (orig 0xea3d10, ptr_add)
void* main_f_ea3d10(void* a0) { return (char*)a0 + 112; }

// sub_ea3d20  (orig 0xea3d20, ptr_add)
void* main_f_ea3d20(void* a0) { return (char*)a0 + 352; }

// sub_ea3d30  (orig 0xea3d30, tailcall)
void main_f_ea3d30() { main::sub_ce0(); }

// sub_ea3d40  (orig 0xea3d40, ret_only)
void main_f_ea3d40() {}

// sub_ea3d50  (orig 0xea3d50, mov_ret)
uint64_t main_f_ea3d50() { return 0; }

// sub_ea3da0  (orig 0xea3da0, mov_ret)
uint32_t main_f_ea3da0() { return 0; }

// sub_ea3db0  (orig 0xea3db0, ret_only)
void main_f_ea3db0() {}

// sub_ea3dc0  (orig 0xea3dc0, ret_only)
void main_f_ea3dc0() {}

// sub_ea3dd0  (orig 0xea3dd0, mov_ret)
uint32_t main_f_ea3dd0() { return 0; }

// sub_ea3de0  (orig 0xea3de0, ret_only)
void main_f_ea3de0() {}

// sub_ea3e10  (orig 0xea3e10, ret_only)
void main_f_ea3e10() {}

// sub_ea3e60  (orig 0xea3e60, tailcall)
void main_f_ea3e60() { main::sub_ea3e70(); }

// sub_ea3f20  (orig 0xea3f20, getter)
uint64_t main_f_ea3f20(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_ea3f30  (orig 0xea3f30, ptr_add)
void* main_f_ea3f30(void* a0) { return (char*)a0 + 32; }

// sub_ea3f40  (orig 0xea3f40, ptr_add)
void* main_f_ea3f40(void* a0) { return (char*)a0 + 24; }

// sub_ea3f50  (orig 0xea3f50, ptr_add)
void* main_f_ea3f50(void* a0) { return (char*)a0 + 24; }

// sub_ea3f60  (orig 0xea3f60, ptr_add)
void* main_f_ea3f60(void* a0) { return (char*)a0 + 32; }

// sub_ea3f70  (orig 0xea3f70, tailcall)
void main_f_ea3f70() { main::sub_ce0(); }

// sub_ea3f80  (orig 0xea3f80, mov_ret)
uint32_t main_f_ea3f80() { return 1; }

// sub_ea3f90  (orig 0xea3f90, ret_only)
void main_f_ea3f90() {}

// sub_ea3fa0  (orig 0xea3fa0, copy2)
void main_f_ea3fa0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 40) = *(uint32_t*)((char*)(a1)); }

// sub_ea3fb0  (orig 0xea3fb0, mov_ret)
uint32_t main_f_ea3fb0() { return 1; }

// sub_ea41c0  (orig 0xea41c0, tailcall)
void main_f_ea41c0() { main::sub_ea41d0(); }

// sub_ea4280  (orig 0xea4280, getter)
uint64_t main_f_ea4280(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_ea4290  (orig 0xea4290, ptr_add)
void* main_f_ea4290(void* a0) { return (char*)a0 + 32; }

// sub_ea42a0  (orig 0xea42a0, ptr_add)
void* main_f_ea42a0(void* a0) { return (char*)a0 + 24; }

// sub_ea42b0  (orig 0xea42b0, ptr_add)
void* main_f_ea42b0(void* a0) { return (char*)a0 + 24; }

// sub_ea42c0  (orig 0xea42c0, ptr_add)
void* main_f_ea42c0(void* a0) { return (char*)a0 + 32; }

// sub_ea42d0  (orig 0xea42d0, tailcall)
void main_f_ea42d0() { main::sub_ce0(); }

// sub_ea42e0  (orig 0xea42e0, mov_ret)
uint32_t main_f_ea42e0() { return 3; }

// sub_ea42f0  (orig 0xea42f0, ret_only)
void main_f_ea42f0() {}

// sub_ea4300  (orig 0xea4300, copy2)
void main_f_ea4300(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 40) = *(uint32_t*)((char*)(a1)); }

// sub_ea43b0  (orig 0xea43b0, getter)
uint64_t main_f_ea43b0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_ea43c0  (orig 0xea43c0, ptr_add)
void* main_f_ea43c0(void* a0) { return (char*)a0 + 32; }

// sub_ea43d0  (orig 0xea43d0, ptr_add)
void* main_f_ea43d0(void* a0) { return (char*)a0 + 24; }

// sub_ea43e0  (orig 0xea43e0, ptr_add)
void* main_f_ea43e0(void* a0) { return (char*)a0 + 24; }

// sub_ea43f0  (orig 0xea43f0, ptr_add)
void* main_f_ea43f0(void* a0) { return (char*)a0 + 32; }

// sub_ea4400  (orig 0xea4400, tailcall)
void main_f_ea4400() { main::sub_ce0(); }

// sub_ea4410  (orig 0xea4410, mov_ret)
uint32_t main_f_ea4410() { return 4; }

// sub_ea4420  (orig 0xea4420, ret_only)
void main_f_ea4420() {}

// sub_ea4430  (orig 0xea4430, copy2)
void main_f_ea4430(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 40) = *(uint32_t*)((char*)(a1)); }

// sub_ea4440  (orig 0xea4440, tailcall)
void main_f_ea4440() { main::sub_ea4450(); }

// sub_ea4500  (orig 0xea4500, getter)
uint64_t main_f_ea4500(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_ea4510  (orig 0xea4510, ptr_add)
void* main_f_ea4510(void* a0) { return (char*)a0 + 32; }

// sub_ea4520  (orig 0xea4520, ptr_add)
void* main_f_ea4520(void* a0) { return (char*)a0 + 24; }

// sub_ea4530  (orig 0xea4530, ptr_add)
void* main_f_ea4530(void* a0) { return (char*)a0 + 24; }

// sub_ea4540  (orig 0xea4540, ptr_add)
void* main_f_ea4540(void* a0) { return (char*)a0 + 32; }

// sub_ea4550  (orig 0xea4550, tailcall)
void main_f_ea4550() { main::sub_ce0(); }

// sub_ea4560  (orig 0xea4560, mov_ret)
uint32_t main_f_ea4560() { return 2; }

// sub_ea4570  (orig 0xea4570, ret_only)
void main_f_ea4570() {}

// sub_ea4580  (orig 0xea4580, ret_only)
void main_f_ea4580() {}

// sub_ea4630  (orig 0xea4630, getter)
uint64_t main_f_ea4630(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_ea4640  (orig 0xea4640, ptr_add)
void* main_f_ea4640(void* a0) { return (char*)a0 + 24; }

// sub_ea4650  (orig 0xea4650, ptr_add)
void* main_f_ea4650(void* a0) { return (char*)a0 + 32; }

// sub_ea4660  (orig 0xea4660, ptr_add)
void* main_f_ea4660(void* a0) { return (char*)a0 + 24; }

// sub_ea4670  (orig 0xea4670, ptr_add)
void* main_f_ea4670(void* a0) { return (char*)a0 + 32; }

// sub_ea4680  (orig 0xea4680, tailcall)
void main_f_ea4680() { main::sub_ce0(); }

// sub_ea4690  (orig 0xea4690, mov_ret)
uint32_t main_f_ea4690() { return 5; }

// sub_ea46a0  (orig 0xea46a0, ret_only)
void main_f_ea46a0() {}

// sub_ea46b0  (orig 0xea46b0, copy2)
void main_f_ea46b0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 40) = *(uint32_t*)((char*)(a1)); }

// sub_ea4750  (orig 0xea4750, getter)
uint64_t main_f_ea4750(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_ea4770  (orig 0xea4770, getter)
uint64_t main_f_ea4770(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_ea4790  (orig 0xea4790, getter)
uint64_t main_f_ea4790(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_ea47d0  (orig 0xea47d0, ptr_add)
void* main_f_ea47d0(void* a0) { return (char*)a0 + 192; }

// sub_ea47e0  (orig 0xea47e0, ptr_add)
void* main_f_ea47e0(void* a0) { return (char*)a0 + 208; }

// sub_ea47f0  (orig 0xea47f0, ptr_add)
void* main_f_ea47f0(void* a0) { return (char*)a0 + 200; }

// sub_ea4800  (orig 0xea4800, ptr_add)
void* main_f_ea4800(void* a0) { return (char*)a0 + 184; }

// sub_ea4810  (orig 0xea4810, ptr_add)
void* main_f_ea4810(void* a0) { return (char*)a0 + 176; }

// sub_ea5d60  (orig 0xea5d60, copy2)
void main_f_ea5d60(void* a0) { *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a0) + 8); }

// sub_ea5d70  (orig 0xea5d70, compare)
bool main_f_ea5d70(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 16)) == (uint64_t)(0); }

// sub_ea5db0  (orig 0xea5db0, ret_only)
void main_f_ea5db0() {}

// sub_ea5dc0  (orig 0xea5dc0, tailcall)
void main_f_ea5dc0() { main::sub_ce0(); }

// sub_ea6a30  (orig 0xea6a30, copy2)
void main_f_ea6a30(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1)); }

// sub_ea6a40  (orig 0xea6a40, ret_only)
void main_f_ea6a40() {}

// sub_ea6a50  (orig 0xea6a50, tailcall)
void main_f_ea6a50() { main::sub_ce0(); }

// sub_ea9990  (orig 0xea9990, ret_only)
void main_f_ea9990() {}

// sub_ea99a0  (orig 0xea99a0, tailcall)
void main_f_ea99a0() { main::sub_ce0(); }

// sub_ea99b0  (orig 0xea99b0, mov_ret)
uint64_t main_f_ea99b0(uint64_t a0, uint64_t a1) { return a1; }

// sub_ea9a30  (orig 0xea9a30, ret_only)
void main_f_ea9a30() {}

// sub_ea9cb0  (orig 0xea9cb0, tailcall)
void main_f_ea9cb0() { main::sub_ce0(); }

// sub_eaa030  (orig 0xeaa030, ptr_add)
void* main_f_eaa030(void* a0) { return (char*)a0 + 80; }

// sub_eaa090  (orig 0xeaa090, getter)
uint64_t main_f_eaa090(void* a0) { return *(uint64_t*)((char*)(a0) + 116); }

// sub_eaa6e0  (orig 0xeaa6e0, ret_only)
void main_f_eaa6e0() {}

// sub_eaa760  (orig 0xeaa760, ret_only)
void main_f_eaa760() {}

// sub_eab4b0  (orig 0xeab4b0, getter-chain)
uint32_t main_f_eab4b0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 360); }

// sub_eacd80  (orig 0xeacd80, ret_only)
void main_f_eacd80() {}

// sub_eace00  (orig 0xeace00, ret_only)
void main_f_eace00() {}

// sub_eacf00  (orig 0xeacf00, ret_only)
void main_f_eacf00() {}

// sub_eacf10  (orig 0xeacf10, ret_only)
void main_f_eacf10() {}

// sub_eacf20  (orig 0xeacf20, ret_only)
void main_f_eacf20() {}

// sub_eacfc0  (orig 0xeacfc0, ret_only)
void main_f_eacfc0() {}

// sub_eacfd0  (orig 0xeacfd0, ret_only)
void main_f_eacfd0() {}

// sub_eacfe0  (orig 0xeacfe0, ret_only)
void main_f_eacfe0() {}

// sub_ead020  (orig 0xead020, ret_only)
void main_f_ead020() {}

// sub_ead030  (orig 0xead030, copy2)
void main_f_ead030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ead040  (orig 0xead040, copy2)
void main_f_ead040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ead060  (orig 0xead060, ret_only)
void main_f_ead060() {}

// sub_ead080  (orig 0xead080, copy2)
void main_f_ead080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ead090  (orig 0xead090, copy2)
void main_f_ead090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ead140  (orig 0xead140, getter)
uint64_t main_f_ead140(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_ead370  (orig 0xead370, tailcall)
void main_f_ead370() { main::sub_ead240(); }

// sub_ead390  (orig 0xead390, strlit-ret)
const char *main_f_ead390() { static char g_f_ead390[1]; __asm__ volatile("" ::: "memory"); return g_f_ead390; }

// sub_eadbd0  (orig 0xeadbd0, straight)
void main_f_eadbd0(void* a0) {
    *(uint32_t*)((char*)(a0) + 100) = 1;
}

// sub_eadbf0  (orig 0xeadbf0, setter)
void main_f_eadbf0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 104) = a1; }

// sub_eadc00  (orig 0xeadc00, setter)
void main_f_eadc00(void* a0) { *(uint32_t*)((char*)(a0) + 100) = 0; }

// sub_eadcf0  (orig 0xeadcf0, getter)
uint64_t main_f_eadcf0(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_eadd00  (orig 0xeadd00, ret_only)
void main_f_eadd00() {}

// sub_eadd10  (orig 0xeadd10, ret_only)
void main_f_eadd10() {}

// sub_eadd90  (orig 0xeadd90, ret_only)
void main_f_eadd90() {}

// sub_eae950  (orig 0xeae950, tailcall)
void main_f_eae950() { main::sub_eae960(); }

// sub_eaf260  (orig 0xeaf260, ret_only)
void main_f_eaf260() {}

// sub_eaf2e0  (orig 0xeaf2e0, ret_only)
void main_f_eaf2e0() {}

// sub_eaf460  (orig 0xeaf460, ret_only)
void main_f_eaf460() {}

// sub_eaf470  (orig 0xeaf470, copy2)
void main_f_eaf470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eaf480  (orig 0xeaf480, copy2)
void main_f_eaf480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eafd30  (orig 0xeafd30, tailcall)
void main_f_eafd30() { main::sub_eafb00(); }

// sub_eb1810  (orig 0xeb1810, compare)
bool main_f_eb1810(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 328)) != (uint64_t)(0); }

// sub_eb5790  (orig 0xeb5790, tailcall)
void main_f_eb5790() { main::sub_eb57c0(); }

// sub_eb57a0  (orig 0xeb57a0, tailcall)
void main_f_eb57a0() { main::sub_eb57c0(); }

// sub_eb57b0  (orig 0xeb57b0, tailcall)
void main_f_eb57b0() { main::sub_eb57c0(); }

// sub_eb5c60  (orig 0xeb5c60, compare)
bool main_f_eb5c60(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 64)) > (int64_t)(1); }

// sub_eb5f60  (orig 0xeb5f60, straight)
void main_f_eb5f60(void* a0) {
    *(uint8_t*)((char*)(a0) + 1504) = (uint8_t)(1);
}

// sub_eb6080  (orig 0xeb6080, tailcall)
void main_f_eb6080() { main::sub_e7feb0(); }

// sub_eb6090  (orig 0xeb6090, tailcall)
void main_f_eb6090() { main::sub_eb6100(); }

// sub_eb60c0  (orig 0xeb60c0, tailcall)
void main_f_eb60c0() { main::sub_eb6100(); }

// sub_eb60d0  (orig 0xeb60d0, tailcall)
void main_f_eb60d0() { main::sub_eb6100(); }

// sub_eb66e0  (orig 0xeb66e0, ret_only)
void main_f_eb66e0() {}

// sub_eb6740  (orig 0xeb6740, ret_only)
void main_f_eb6740() {}

// sub_eb67a0  (orig 0xeb67a0, ret_only)
void main_f_eb67a0() {}

// sub_eb6800  (orig 0xeb6800, ret_only)
void main_f_eb6800() {}

// sub_eb7250  (orig 0xeb7250, ret_only)
void main_f_eb7250() {}

// sub_eb7260  (orig 0xeb7260, copy2)
void main_f_eb7260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eb7270  (orig 0xeb7270, copy2)
void main_f_eb7270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eb7950  (orig 0xeb7950, tailcall)
void main_f_eb7950() { main::sub_eb7ce0(); }

// sub_eb7a20  (orig 0xeb7a20, tailcall)
void main_f_eb7a20() { main::sub_eb7ce0(); }

// sub_eb7a30  (orig 0xeb7a30, tailcall)
void main_f_eb7a30() { main::sub_eb7ce0(); }

// sub_eb8190  (orig 0xeb8190, mov_ret)
uint32_t main_f_eb8190() { return 43; }

// sub_eb8300  (orig 0xeb8300, tailcall)
void main_f_eb8300() { main::sub_eb81a0(); }

// sub_eb8f50  (orig 0xeb8f50, tailcall)
void main_f_eb8f50() { main::sub_eb84a0(); }

// sub_eb8f80  (orig 0xeb8f80, tailcall)
void main_f_eb8f80() { main::sub_eb84a0(); }

// sub_eb8f90  (orig 0xeb8f90, tailcall)
void main_f_eb8f90() { main::sub_eb84a0(); }

// sub_eb8fc0  (orig 0xeb8fc0, ret_only)
void main_f_eb8fc0() {}

// sub_eb8fd0  (orig 0xeb8fd0, ret_only)
void main_f_eb8fd0() {}

// sub_eb8fe0  (orig 0xeb8fe0, copy2)
void main_f_eb8fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eb8ff0  (orig 0xeb8ff0, copy2)
void main_f_eb8ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebb450  (orig 0xebb450, tailcall)
void main_f_ebb450() { main::sub_ebb330(); }

// sub_ebb860  (orig 0xebb860, ret_only)
void main_f_ebb860() {}

// sub_ebca50  (orig 0xebca50, tailcall)
void main_f_ebca50() { main::sub_ebb5f0(); }

// sub_ebca60  (orig 0xebca60, tailcall)
void main_f_ebca60() { main::sub_ebb700(); }

// sub_ebca90  (orig 0xebca90, tailcall)
void main_f_ebca90() { main::sub_ebb700(); }

// sub_ebcaa0  (orig 0xebcaa0, tailcall)
void main_f_ebcaa0() { main::sub_ebb700(); }

// sub_ebcb20  (orig 0xebcb20, ret_only)
void main_f_ebcb20() {}

// sub_ebcb30  (orig 0xebcb30, copy2)
void main_f_ebcb30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcb40  (orig 0xebcb40, copy2)
void main_f_ebcb40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcba0  (orig 0xebcba0, ret_only)
void main_f_ebcba0() {}

// sub_ebcbb0  (orig 0xebcbb0, copy2)
void main_f_ebcbb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcbc0  (orig 0xebcbc0, copy2)
void main_f_ebcbc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcbe0  (orig 0xebcbe0, ret_only)
void main_f_ebcbe0() {}

// sub_ebcbf0  (orig 0xebcbf0, copy2)
void main_f_ebcbf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcc00  (orig 0xebcc00, copy2)
void main_f_ebcc00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcc60  (orig 0xebcc60, ret_only)
void main_f_ebcc60() {}

// sub_ebcc70  (orig 0xebcc70, copy2)
void main_f_ebcc70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcc80  (orig 0xebcc80, copy2)
void main_f_ebcc80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcca0  (orig 0xebcca0, ret_only)
void main_f_ebcca0() {}

// sub_ebccb0  (orig 0xebccb0, copy2)
void main_f_ebccb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebccc0  (orig 0xebccc0, copy2)
void main_f_ebccc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebff40  (orig 0xebff40, mov_ret)
uint32_t main_f_ebff40() { return 55; }

// sub_ebff50  (orig 0xebff50, tailcall)
void main_f_ebff50() { main::sub_eb81a0(); }

// sub_ec06c0  (orig 0xec06c0, mov_ret)
uint32_t main_f_ec06c0() { return 35; }

// sub_ec06d0  (orig 0xec06d0, tailcall)
void main_f_ec06d0() { main::sub_eb81a0(); }

// sub_ec1c30  (orig 0xec1c30, ret_only)
void main_f_ec1c30() {}

// sub_ec1e90  (orig 0xec1e90, tailcall)
void main_f_ec1e90() { main::sub_ec1d70(); }

// sub_ec1ea0  (orig 0xec1ea0, tailcall)
void main_f_ec1ea0() { main::sub_ec1f10(); }

// sub_ec1ed0  (orig 0xec1ed0, tailcall)
void main_f_ec1ed0() { main::sub_ec1f10(); }

// sub_ec1ee0  (orig 0xec1ee0, tailcall)
void main_f_ec1ee0() { main::sub_ec1f10(); }

// sub_ec3190  (orig 0xec3190, tailcall)
void main_f_ec3190() { main::sub_ec2fc0(); }

// sub_ec31a0  (orig 0xec31a0, tailcall)
void main_f_ec31a0() { main::sub_ec3210(); }

// sub_ec31d0  (orig 0xec31d0, tailcall)
void main_f_ec31d0() { main::sub_ec3210(); }

// sub_ec31e0  (orig 0xec31e0, tailcall)
void main_f_ec31e0() { main::sub_ec3210(); }

// sub_ec6340  (orig 0xec6340, ret_only)
void main_f_ec6340() {}

// sub_ec6410  (orig 0xec6410, tailcall)
void main_f_ec6410() { main::sub_ec65c0(); }

// sub_ec64e0  (orig 0xec64e0, tailcall)
void main_f_ec64e0() { main::sub_ec65c0(); }

// sub_ec64f0  (orig 0xec64f0, tailcall)
void main_f_ec64f0() { main::sub_ec65c0(); }

// sub_ec69c0  (orig 0xec69c0, ret_only)
void main_f_ec69c0() {}

// sub_ec6f80  (orig 0xec6f80, tailcall)
void main_f_ec6f80() { main::sub_ec71b0(); }

// sub_ec7090  (orig 0xec7090, tailcall)
void main_f_ec7090() { main::sub_ec71b0(); }

// sub_ec70a0  (orig 0xec70a0, tailcall)
void main_f_ec70a0() { main::sub_ec71b0(); }

// sub_ec8890  (orig 0xec8890, tailcall)
void main_f_ec8890() { main::sub_ec85d0(); }

// sub_ece040  (orig 0xece040, strlit-ret)
const char *main_f_ece040() { static const char s[] = "rank"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ece080  (orig 0xece080, strlit-ret)
const char *main_f_ece080() { static const char s[] = "rank"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecf360  (orig 0xecf360, mov_ret)
uint64_t main_f_ecf360() { return 0; }

// my_name  (orig 0xecf3a0, strlit-ret)
const char *main_f_ecf3a0() { static const char s[] = "my_name"; __asm__ volatile("" ::: "memory"); return s; }

// owner_name  (orig 0xecfdd0, strlit-ret)
const char *main_f_ecfdd0() { static const char s[] = "owner_name"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecfe10  (orig 0xecfe10, strlit-ret)
const char *main_f_ecfe10() { static const char s[] = "place"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecfe50  (orig 0xecfe50, mov_ret)
uint64_t main_f_ecfe50() { return 0; }

// sub_ecfe90  (orig 0xecfe90, mov_ret)
uint64_t main_f_ecfe90() { return 0; }

// sub_ecfec0  (orig 0xecfec0, strlit-ret)
const char *main_f_ecfec0() { static const char s[] = "rank"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecfef0  (orig 0xecfef0, strlit-ret)
const char *main_f_ecfef0() { static const char s[] = "rank"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecff30  (orig 0xecff30, strlit-ret)
const char *main_f_ecff30() { static const char s[] = "place"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecff70  (orig 0xecff70, strlit-ret)
const char *main_f_ecff70() { static const char s[] = "place"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecffb0  (orig 0xecffb0, strlit-ret)
const char *main_f_ecffb0() { static const char s[] = "place"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ed0890  (orig 0xed0890, mov_ret)
uint64_t main_f_ed0890() { return 0; }

// sub_ed08d0  (orig 0xed08d0, mov_ret)
uint64_t main_f_ed08d0() { return 0; }

// sub_ed0910  (orig 0xed0910, mov_ret)
uint64_t main_f_ed0910() { return 0; }

// sub_ed0950  (orig 0xed0950, mov_ret)
uint64_t main_f_ed0950() { return 0; }

// sub_ed0bd0  (orig 0xed0bd0, tailcall)
void main_f_ed0bd0() { main_f_5db430(); }

// sub_ed1750  (orig 0xed1750, tailcall)
void main_f_ed1750() { main::sub_ed1640(); }

// sub_ed29e0  (orig 0xed29e0, getter-chain)
uint64_t main_f_ed29e0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 328))) + 328); }

// sub_ed2f20  (orig 0xed2f20, getter-chain)
uint32_t main_f_ed2f20(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 328))) + 224); }

// sub_ed2f30  (orig 0xed2f30, getter-chain)
uint8_t main_f_ed2f30(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 328))) + 236); }

// sub_ed30c0  (orig 0xed30c0, getter-chain)
uint8_t main_f_ed30c0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 328))) + 384); }

// sub_ed3e50  (orig 0xed3e50, getter-chain)
uint8_t main_f_ed3e50(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 328))) + 660); }

// sub_ed8180  (orig 0xed8180, tailcall)
void main_f_ed8180() { main::sub_ed7ce0(); }

// sub_ed9430  (orig 0xed9430, ret_only)
void main_f_ed9430() {}

// sub_ed9a80  (orig 0xed9a80, tailcall)
void main_f_ed9a80() { main::sub_ed9940(); }

// sub_eda7c0  (orig 0xeda7c0, ret_only)
void main_f_eda7c0() {}

// sub_eda7d0  (orig 0xeda7d0, copy2)
void main_f_eda7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eda7e0  (orig 0xeda7e0, copy2)
void main_f_eda7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eda7f0  (orig 0xeda7f0, ret_only)
void main_f_eda7f0() {}

// sub_eda800  (orig 0xeda800, ret_only)
void main_f_eda800() {}

// sub_eda810  (orig 0xeda810, ret_only)
void main_f_eda810() {}

// sub_eda820  (orig 0xeda820, ret_only)
void main_f_eda820() {}

// sub_ee14a0  (orig 0xee14a0, ret_only)
void main_f_ee14a0() {}

// sub_ee14b0  (orig 0xee14b0, ret_only)
void main_f_ee14b0() {}

// sub_ee14c0  (orig 0xee14c0, ret_only)
void main_f_ee14c0() {}

// sub_ee14d0  (orig 0xee14d0, ret_only)
void main_f_ee14d0() {}

// sub_ee2170  (orig 0xee2170, tailcall)
void main_f_ee2170() { main::sub_ee2040(); }

// sub_ee2180  (orig 0xee2180, tailcall)
void main_f_ee2180() { main::sub_ee21f0(); }

// sub_ee21b0  (orig 0xee21b0, tailcall)
void main_f_ee21b0() { main::sub_ee21f0(); }

// sub_ee21c0  (orig 0xee21c0, tailcall)
void main_f_ee21c0() { main::sub_ee21f0(); }

// sub_ee3430  (orig 0xee3430, tailcall)
void main_f_ee3430() { main::sub_ce0(); }

// sub_ee3d80  (orig 0xee3d80, ret_only)
void main_f_ee3d80() {}

// sub_ee3f60  (orig 0xee3f60, ret_only)
void main_f_ee3f60() {}

// sub_ee3f70  (orig 0xee3f70, ret_only)
void main_f_ee3f70() {}

// sub_ee40b0  (orig 0xee40b0, tailcall)
void main_f_ee40b0() { main_f_5db430(); }

// sub_ee57c0  (orig 0xee57c0, tailcall)
void main_f_ee57c0() { main::sub_ee5690(); }

// sub_ee79d0  (orig 0xee79d0, ret_only)
void main_f_ee79d0() {}

// sub_ee9ba0  (orig 0xee9ba0, ret_only)
void main_f_ee9ba0() {}

// sub_ee9fb0  (orig 0xee9fb0, tailcall)
void main_f_ee9fb0() { main::sub_ee9e90(); }

// sub_eeb410  (orig 0xeeb410, getter)
uint32_t main_f_eeb410(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_eec450  (orig 0xeec450, tailcall)
void main_f_eec450() { main::sub_ce0(); }

// sub_eed050  (orig 0xeed050, mov_ret)
uint32_t main_f_eed050() { return 1; }

// sub_eed060  (orig 0xeed060, ret_only)
void main_f_eed060() {}

// sub_eed070  (orig 0xeed070, ret_only)
void main_f_eed070() {}

// sub_eed310  (orig 0xeed310, tailcall)
void main_f_eed310() { main::sub_eed340(); }

// sub_eed320  (orig 0xeed320, tailcall)
void main_f_eed320() { main::sub_eed340(); }

// sub_eed330  (orig 0xeed330, tailcall)
void main_f_eed330() { main::sub_eed340(); }

// sub_eed8a0  (orig 0xeed8a0, mov_ret)
uint32_t main_f_eed8a0() { return 1; }

// sub_eed8b0  (orig 0xeed8b0, ret_only)
void main_f_eed8b0() {}

// sub_eed8c0  (orig 0xeed8c0, ret_only)
void main_f_eed8c0() {}

// sub_eed9b0  (orig 0xeed9b0, mov_ret)
uint32_t main_f_eed9b0() { return 1; }

// sub_eedb60  (orig 0xeedb60, tailcall)
void main_f_eedb60() { main::sub_eed9c0(); }

// sub_eee010  (orig 0xeee010, getter)
uint64_t main_f_eee010(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_eee180  (orig 0xeee180, mov_ret)
uint32_t main_f_eee180() { return 1; }

// sub_eeeb50  (orig 0xeeeb50, ret_only)
void main_f_eeeb50() {}

// sub_eeeb60  (orig 0xeeeb60, tailcall)
void main_f_eeeb60() { main::sub_e7c4c0(); }

// sub_eeeb70  (orig 0xeeeb70, tailcall)
void main_f_eeeb70() { main::sub_eeebe0(); }

// sub_eeeba0  (orig 0xeeeba0, tailcall)
void main_f_eeeba0() { main::sub_eeebe0(); }

// sub_eeebb0  (orig 0xeeebb0, tailcall)
void main_f_eeebb0() { main::sub_eeebe0(); }

// sub_eef380  (orig 0xeef380, mov_ret)
uint32_t main_f_eef380() { return 0; }

// sub_eef780  (orig 0xeef780, tailcall)
void main_f_eef780() { main::sub_e7feb0(); }

// sub_eef790  (orig 0xeef790, tailcall)
void main_f_eef790() { main::sub_eeee20(); }

// sub_eef7c0  (orig 0xeef7c0, tailcall)
void main_f_eef7c0() { main::sub_eeee20(); }

// sub_eef7d0  (orig 0xeef7d0, tailcall)
void main_f_eef7d0() { main::sub_eeee20(); }

// sub_eef810  (orig 0xeef810, ret_only)
void main_f_eef810() {}

// sub_eef820  (orig 0xeef820, copy2)
void main_f_eef820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eef830  (orig 0xeef830, copy2)
void main_f_eef830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eef880  (orig 0xeef880, tailcall)
void main_f_eef880() { main::sub_e7c250(); }

// sub_eef890  (orig 0xeef890, tailcall)
void main_f_eef890() { main::sub_eee3a0(); }

// sub_eef8c0  (orig 0xeef8c0, tailcall)
void main_f_eef8c0() { main::sub_eee3a0(); }

// sub_eef8d0  (orig 0xeef8d0, tailcall)
void main_f_eef8d0() { main::sub_eee3a0(); }

// sub_ef07a0  (orig 0xef07a0, mov_ret)
uint32_t main_f_ef07a0() { return 1; }

// sub_ef07b0  (orig 0xef07b0, ret_only)
void main_f_ef07b0() {}

// sub_ef07c0  (orig 0xef07c0, ret_only)
void main_f_ef07c0() {}

// sub_ef0ab0  (orig 0xef0ab0, tailcall)
void main_f_ef0ab0() { main::sub_ef0c60(); }

// sub_ef0b80  (orig 0xef0b80, tailcall)
void main_f_ef0b80() { main::sub_ef0c60(); }

// sub_ef0b90  (orig 0xef0b90, tailcall)
void main_f_ef0b90() { main::sub_ef0c60(); }

// sub_ef12a0  (orig 0xef12a0, getter)
uint64_t main_f_ef12a0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_ef1410  (orig 0xef1410, mov_ret)
uint32_t main_f_ef1410() { return 1; }

// sub_ef2320  (orig 0xef2320, tailcall)
void main_f_ef2320() { main::sub_ef2180(); }

// sub_ef2910  (orig 0xef2910, tailcall)
void main_f_ef2910() { main::sub_ef2850(); }

// sub_ef2920  (orig 0xef2920, tailcall)
void main_f_ef2920() { main::sub_ef2c60(); }

// sub_ef2950  (orig 0xef2950, tailcall)
void main_f_ef2950() { main::sub_ef2c60(); }

// sub_ef2960  (orig 0xef2960, tailcall)
void main_f_ef2960() { main::sub_ef2c60(); }

// sub_ef4130  (orig 0xef4130, getter)
uint32_t main_f_ef4130(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_ef77a0  (orig 0xef77a0, ret_only)
void main_f_ef77a0() {}

// sub_ef7850  (orig 0xef7850, ret_only)
void main_f_ef7850() {}

// sub_ef7860  (orig 0xef7860, copy2)
void main_f_ef7860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7870  (orig 0xef7870, copy2)
void main_f_ef7870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef78e0  (orig 0xef78e0, ret_only)
void main_f_ef78e0() {}

// sub_ef78f0  (orig 0xef78f0, copy2)
void main_f_ef78f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7900  (orig 0xef7900, copy2)
void main_f_ef7900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef79a0  (orig 0xef79a0, ret_only)
void main_f_ef79a0() {}

// sub_ef79b0  (orig 0xef79b0, copy2)
void main_f_ef79b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef79c0  (orig 0xef79c0, copy2)
void main_f_ef79c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7a60  (orig 0xef7a60, ret_only)
void main_f_ef7a60() {}

// sub_ef7a70  (orig 0xef7a70, copy2)
void main_f_ef7a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7a80  (orig 0xef7a80, copy2)
void main_f_ef7a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7aa0  (orig 0xef7aa0, ret_only)
void main_f_ef7aa0() {}

// sub_ef7ab0  (orig 0xef7ab0, copy2)
void main_f_ef7ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7ac0  (orig 0xef7ac0, copy2)
void main_f_ef7ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7b90  (orig 0xef7b90, ret_only)
void main_f_ef7b90() {}

// sub_ef7ba0  (orig 0xef7ba0, copy2)
void main_f_ef7ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7bb0  (orig 0xef7bb0, copy2)
void main_f_ef7bb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7d00  (orig 0xef7d00, ret_only)
void main_f_ef7d00() {}

// sub_ef7e00  (orig 0xef7e00, ret_only)
void main_f_ef7e00() {}

// sub_ef7ec0  (orig 0xef7ec0, ret_only)
void main_f_ef7ec0() {}

// sub_ef9520  (orig 0xef9520, ret_only)
void main_f_ef9520() {}

// sub_ef9a10  (orig 0xef9a10, tailcall)
void main_f_ef9a10() { main::sub_e7c4c0(); }

// sub_ef9a20  (orig 0xef9a20, tailcall)
void main_f_ef9a20() { main::sub_ef9a90(); }

// sub_ef9a50  (orig 0xef9a50, tailcall)
void main_f_ef9a50() { main::sub_ef9a90(); }

// sub_ef9a60  (orig 0xef9a60, tailcall)
void main_f_ef9a60() { main::sub_ef9a90(); }

// sub_efa570  (orig 0xefa570, tailcall)
void main_f_efa570() { main::sub_e7c4c0(); }

// sub_efa580  (orig 0xefa580, tailcall)
void main_f_efa580() { main::sub_efa5f0(); }

// sub_efa5b0  (orig 0xefa5b0, tailcall)
void main_f_efa5b0() { main::sub_efa5f0(); }

// sub_efa5c0  (orig 0xefa5c0, tailcall)
void main_f_efa5c0() { main::sub_efa5f0(); }

// sub_efb000  (orig 0xefb000, tailcall)
void main_f_efb000() { main::sub_e7c4c0(); }

// sub_efb010  (orig 0xefb010, tailcall)
void main_f_efb010() { main::sub_efb080(); }

// sub_efb040  (orig 0xefb040, tailcall)
void main_f_efb040() { main::sub_efb080(); }

// sub_efb050  (orig 0xefb050, tailcall)
void main_f_efb050() { main::sub_efb080(); }

// sub_efb4e0  (orig 0xefb4e0, tailcall)
void main_f_efb4e0() { main::sub_c277c0(); }

// sub_efba60  (orig 0xefba60, mov_ret)
uint32_t main_f_efba60() { return 1; }

// sub_efba70  (orig 0xefba70, ret_only)
void main_f_efba70() {}

// sub_efba80  (orig 0xefba80, ret_only)
void main_f_efba80() {}

// sub_efbf80  (orig 0xefbf80, tailcall)
void main_f_efbf80() { main::sub_efbfb0(); }

// sub_efbf90  (orig 0xefbf90, tailcall)
void main_f_efbf90() { main::sub_efbfb0(); }

// sub_efbfa0  (orig 0xefbfa0, tailcall)
void main_f_efbfa0() { main::sub_efbfb0(); }

// sub_efc640  (orig 0xefc640, getter)
uint64_t main_f_efc640(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_efc7d0  (orig 0xefc7d0, mov_ret)
uint32_t main_f_efc7d0() { return 2; }

// sub_efca00  (orig 0xefca00, ret_only)
void main_f_efca00() {}

// sub_efca10  (orig 0xefca10, copy2)
void main_f_efca10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_efca20  (orig 0xefca20, copy2)
void main_f_efca20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_efcb50  (orig 0xefcb50, tailcall)
void main_f_efcb50() { main::sub_efca30(); }

// sub_efcb80  (orig 0xefcb80, setter)
void main_f_efcb80(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_efd570  (orig 0xefd570, setter)
void main_f_efd570(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1824) = a1; }

// sub_efdbf0  (orig 0xefdbf0, ret_only)
void main_f_efdbf0() {}

// sub_efdeb0  (orig 0xefdeb0, tailcall)
void main_f_efdeb0() { main::sub_efe300(); }

// sub_efdec0  (orig 0xefdec0, tailcall)
void main_f_efdec0() { main::sub_efe300(); }

// sub_efded0  (orig 0xefded0, tailcall)
void main_f_efded0() { main::sub_efe300(); }

// sub_efe0a0  (orig 0xefe0a0, tailcall)
void main_f_efe0a0() { main::sub_efdee0(); }

// sub_efe870  (orig 0xefe870, ret_only)
void main_f_efe870() {}

// sub_efe880  (orig 0xefe880, tailcall)
void main_f_efe880() { main::sub_e7c4c0(); }

// sub_efe890  (orig 0xefe890, tailcall)
void main_f_efe890() { main::sub_efe900(); }

// sub_efe8c0  (orig 0xefe8c0, tailcall)
void main_f_efe8c0() { main::sub_efe900(); }

// sub_efe8d0  (orig 0xefe8d0, tailcall)
void main_f_efe8d0() { main::sub_efe900(); }

// sub_efeff0  (orig 0xefeff0, mov_ret)
uint32_t main_f_efeff0() { return 1; }

// sub_eff0e0  (orig 0xeff0e0, ret_only)
void main_f_eff0e0() {}

// sub_eff3c0  (orig 0xeff3c0, tailcall)
void main_f_eff3c0() { main::sub_eff3f0(); }

// sub_eff3d0  (orig 0xeff3d0, tailcall)
void main_f_eff3d0() { main::sub_eff3f0(); }

// sub_eff3e0  (orig 0xeff3e0, tailcall)
void main_f_eff3e0() { main::sub_eff3f0(); }

// sub_f00600  (orig 0xf00600, mov_ret)
uint32_t main_f_f00600() { return 1; }

// sub_f00610  (orig 0xf00610, ret_only)
void main_f_f00610() {}

// sub_f00620  (orig 0xf00620, ret_only)
void main_f_f00620() {}

// sub_f015f0  (orig 0xf015f0, tailcall)
void main_f_f015f0() { main::sub_f01320(); }

// sub_f01850  (orig 0xf01850, tailcall)
void main_f_f01850() { main::sub_e7c250(); }

// sub_f01860  (orig 0xf01860, tailcall)
void main_f_f01860() { main::sub_f019e0(); }

// sub_f01890  (orig 0xf01890, tailcall)
void main_f_f01890() { main::sub_f019e0(); }

// sub_f018a0  (orig 0xf018a0, tailcall)
void main_f_f018a0() { main::sub_f019e0(); }

// sub_f04270  (orig 0xf04270, mov_ret)
uint32_t main_f_f04270() { return 1; }

// sub_f04280  (orig 0xf04280, ret_only)
void main_f_f04280() {}

// sub_f04290  (orig 0xf04290, tailcall)
void main_f_f04290() { main::sub_e7c4c0(); }

// sub_f042a0  (orig 0xf042a0, tailcall)
void main_f_f042a0() { main::sub_f04310(); }

// sub_f042d0  (orig 0xf042d0, tailcall)
void main_f_f042d0() { main::sub_f04310(); }

// sub_f042e0  (orig 0xf042e0, tailcall)
void main_f_f042e0() { main::sub_f04310(); }

// sub_f04530  (orig 0xf04530, ret_only)
void main_f_f04530() {}

// sub_f04540  (orig 0xf04540, tailcall)
void main_f_f04540() { main::sub_e7c4c0(); }

// sub_f04550  (orig 0xf04550, tailcall)
void main_f_f04550() { main::sub_f045c0(); }

// sub_f04580  (orig 0xf04580, tailcall)
void main_f_f04580() { main::sub_f045c0(); }

// sub_f04590  (orig 0xf04590, tailcall)
void main_f_f04590() { main::sub_f045c0(); }

// sub_f04860  (orig 0xf04860, ret_only)
void main_f_f04860() {}

// sub_f04870  (orig 0xf04870, tailcall)
void main_f_f04870() { main::sub_e7c4c0(); }

// sub_f04880  (orig 0xf04880, tailcall)
void main_f_f04880() { main::sub_f048f0(); }

// sub_f048b0  (orig 0xf048b0, tailcall)
void main_f_f048b0() { main::sub_f048f0(); }

// sub_f048c0  (orig 0xf048c0, tailcall)
void main_f_f048c0() { main::sub_f048f0(); }

// sub_f04e80  (orig 0xf04e80, ret_only)
void main_f_f04e80() {}

// sub_f04e90  (orig 0xf04e90, tailcall)
void main_f_f04e90() { main::sub_e7c4c0(); }

// sub_f04ea0  (orig 0xf04ea0, tailcall)
void main_f_f04ea0() { main::sub_f04f10(); }

// sub_f04ed0  (orig 0xf04ed0, tailcall)
void main_f_f04ed0() { main::sub_f04f10(); }

// sub_f04ee0  (orig 0xf04ee0, tailcall)
void main_f_f04ee0() { main::sub_f04f10(); }

// sub_f05450  (orig 0xf05450, ret_only)
void main_f_f05450() {}

// sub_f05460  (orig 0xf05460, tailcall)
void main_f_f05460() { main::sub_e7c4c0(); }

// sub_f05470  (orig 0xf05470, tailcall)
void main_f_f05470() { main::sub_f054e0(); }

// sub_f054a0  (orig 0xf054a0, tailcall)
void main_f_f054a0() { main::sub_f054e0(); }

// sub_f054b0  (orig 0xf054b0, tailcall)
void main_f_f054b0() { main::sub_f054e0(); }

// sub_f05910  (orig 0xf05910, ret_only)
void main_f_f05910() {}

// sub_f05920  (orig 0xf05920, tailcall)
void main_f_f05920() { main::sub_e7c4c0(); }

// sub_f05ae0  (orig 0xf05ae0, ret_only)
void main_f_f05ae0() {}

// sub_f05af0  (orig 0xf05af0, tailcall)
void main_f_f05af0() { main::sub_e7c4c0(); }

// sub_f05f60  (orig 0xf05f60, ret_only)
void main_f_f05f60() {}

// sub_f06240  (orig 0xf06240, tailcall)
void main_f_f06240() { main::sub_f06430(); }

// sub_f06330  (orig 0xf06330, tailcall)
void main_f_f06330() { main::sub_f06430(); }

// sub_f06340  (orig 0xf06340, tailcall)
void main_f_f06340() { main::sub_f06430(); }

// sub_f08040  (orig 0xf08040, tailcall)
void main_f_f08040() { main::sub_f07f40(); }

// sub_f08070  (orig 0xf08070, tailcall)
void main_f_f08070() { main::sub_ce0(); }

// sub_f080e0  (orig 0xf080e0, ret_only)
void main_f_f080e0() {}

// sub_f080f0  (orig 0xf080f0, tailcall)
void main_f_f080f0() { main::sub_ce0(); }

// sub_f081c0  (orig 0xf081c0, tailcall)
void main_f_f081c0() { main::sub_ce0(); }

// sub_f08210  (orig 0xf08210, ret_only)
void main_f_f08210() {}

// sub_f08220  (orig 0xf08220, tailcall)
void main_f_f08220() { main::sub_ce0(); }

// sub_f083a0  (orig 0xf083a0, ret_only)
void main_f_f083a0() {}

// sub_f083b0  (orig 0xf083b0, tailcall)
void main_f_f083b0() { main::sub_e7c4c0(); }

// sub_f08600  (orig 0xf08600, ret_only)
void main_f_f08600() {}

// sub_f08610  (orig 0xf08610, tailcall)
void main_f_f08610() { main::sub_e7c4c0(); }

// sub_f08620  (orig 0xf08620, tailcall)
void main_f_f08620() { main::sub_f08690(); }

// sub_f08650  (orig 0xf08650, tailcall)
void main_f_f08650() { main::sub_f08690(); }

// sub_f08660  (orig 0xf08660, tailcall)
void main_f_f08660() { main::sub_f08690(); }

// sub_f08b10  (orig 0xf08b10, tailcall)
void main_f_f08b10() { main::sub_f08cc0(); }

// sub_f08be0  (orig 0xf08be0, tailcall)
void main_f_f08be0() { main::sub_f08cc0(); }

// sub_f08bf0  (orig 0xf08bf0, tailcall)
void main_f_f08bf0() { main::sub_f08cc0(); }

// sub_f09040  (orig 0xf09040, ret_only)
void main_f_f09040() {}

// sub_f09050  (orig 0xf09050, tailcall)
void main_f_f09050() { main::sub_e7c4c0(); }

// sub_f092a0  (orig 0xf092a0, ret_only)
void main_f_f092a0() {}

// sub_f092b0  (orig 0xf092b0, tailcall)
void main_f_f092b0() { main::sub_e7c4c0(); }

// sub_f09770  (orig 0xf09770, ret_only)
void main_f_f09770() {}

// sub_f09780  (orig 0xf09780, tailcall)
void main_f_f09780() { main::sub_e7c4c0(); }

// sub_f09790  (orig 0xf09790, tailcall)
void main_f_f09790() { main::sub_f09800(); }

// sub_f097c0  (orig 0xf097c0, tailcall)
void main_f_f097c0() { main::sub_f09800(); }

// sub_f097d0  (orig 0xf097d0, tailcall)
void main_f_f097d0() { main::sub_f09800(); }

// sub_f09ef0  (orig 0xf09ef0, ret_only)
void main_f_f09ef0() {}

// sub_f0a4e0  (orig 0xf0a4e0, mov_ret)
uint32_t main_f_f0a4e0() { return 1; }

// sub_f0a4f0  (orig 0xf0a4f0, ret_only)
void main_f_f0a4f0() {}

// sub_f0a500  (orig 0xf0a500, tailcall)
void main_f_f0a500() { main::sub_e7c4c0(); }

// sub_f0a790  (orig 0xf0a790, ret_only)
void main_f_f0a790() {}

// sub_f0a7a0  (orig 0xf0a7a0, tailcall)
void main_f_f0a7a0() { main::sub_e7c4c0(); }

// sub_f0a7f0  (orig 0xf0a7f0, mov_ret)
uint32_t main_f_f0a7f0() { return 1; }

// sub_f0a920  (orig 0xf0a920, tailcall)
void main_f_f0a920() { main::sub_e7feb0(); }

// sub_f0a930  (orig 0xf0a930, tailcall)
void main_f_f0a930() { main::sub_f0a9a0(); }

// sub_f0a960  (orig 0xf0a960, tailcall)
void main_f_f0a960() { main::sub_f0a9a0(); }

// sub_f0a970  (orig 0xf0a970, tailcall)
void main_f_f0a970() { main::sub_f0a9a0(); }

// sub_f0b450  (orig 0xf0b450, tailcall)
void main_f_f0b450() { main::sub_e7feb0(); }

// sub_f0b460  (orig 0xf0b460, tailcall)
void main_f_f0b460() { main::sub_f04b30(); }

// sub_f0b490  (orig 0xf0b490, tailcall)
void main_f_f0b490() { main::sub_f04b30(); }

// sub_f0b4a0  (orig 0xf0b4a0, tailcall)
void main_f_f0b4a0() { main::sub_f04b30(); }

// sub_f0b4d0  (orig 0xf0b4d0, mov_ret)
uint32_t main_f_f0b4d0() { return 1; }

// sub_f0b850  (orig 0xf0b850, tailcall)
void main_f_f0b850() { main::sub_e7feb0(); }

// sub_f0b860  (orig 0xf0b860, tailcall)
void main_f_f0b860() { main::sub_f0b8d0(); }

// sub_f0b890  (orig 0xf0b890, tailcall)
void main_f_f0b890() { main::sub_f0b8d0(); }

// sub_f0b8a0  (orig 0xf0b8a0, tailcall)
void main_f_f0b8a0() { main::sub_f0b8d0(); }

// sub_f0ba00  (orig 0xf0ba00, mov_ret)
uint32_t main_f_f0ba00() { return 1; }

// sub_f0c4d0  (orig 0xf0c4d0, tailcall)
void main_f_f0c4d0() { main::sub_e7feb0(); }

// sub_f0c4e0  (orig 0xf0c4e0, tailcall)
void main_f_f0c4e0() { main::sub_f09930(); }

// sub_f0c510  (orig 0xf0c510, tailcall)
void main_f_f0c510() { main::sub_f09930(); }

// sub_f0c520  (orig 0xf0c520, tailcall)
void main_f_f0c520() { main::sub_f09930(); }

// sub_f0c810  (orig 0xf0c810, straight)
void main_f_f0c810(void* a0) {
    *(uint32_t*)((char*)(a0) + 1484) = 1;
}

// sub_f0cba0  (orig 0xf0cba0, tailcall)
void main_f_f0cba0() { main::sub_e7feb0(); }

// sub_f0cbb0  (orig 0xf0cbb0, tailcall)
void main_f_f0cbb0() { main::sub_f05610(); }

// sub_f0cbe0  (orig 0xf0cbe0, tailcall)
void main_f_f0cbe0() { main::sub_f05610(); }

// sub_f0cbf0  (orig 0xf0cbf0, tailcall)
void main_f_f0cbf0() { main::sub_f05610(); }

// sub_f0cc30  (orig 0xf0cc30, ret_only)
void main_f_f0cc30() {}

// sub_f0cc40  (orig 0xf0cc40, copy2)
void main_f_f0cc40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f0cc50  (orig 0xf0cc50, copy2)
void main_f_f0cc50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f0cf80  (orig 0xf0cf80, ret_only)
void main_f_f0cf80() {}

// sub_f0cf90  (orig 0xf0cf90, copy2)
void main_f_f0cf90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f0cfa0  (orig 0xf0cfa0, copy2)
void main_f_f0cfa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f0e070  (orig 0xf0e070, tailcall)
void main_f_f0e070() { main::sub_f0ded0(); }

// sub_f0e3a0  (orig 0xf0e3a0, tailcall)
void main_f_f0e3a0() { main::sub_f0e2d0(); }

// sub_f0e3b0  (orig 0xf0e3b0, tailcall)
void main_f_f0e3b0() { main::sub_f0e420(); }

// sub_f0e3e0  (orig 0xf0e3e0, tailcall)
void main_f_f0e3e0() { main::sub_f0e420(); }

// sub_f0e3f0  (orig 0xf0e3f0, tailcall)
void main_f_f0e3f0() { main::sub_f0e420(); }

// sub_f0ed70  (orig 0xf0ed70, ret_only)
void main_f_f0ed70() {}

// sub_f0ed80  (orig 0xf0ed80, copy2)
void main_f_f0ed80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f0ed90  (orig 0xf0ed90, copy2)
void main_f_f0ed90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f101e0  (orig 0xf101e0, straight)
void main_f_f101e0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 100) = 6;
}

// sub_f11310  (orig 0xf11310, tailcall)
void main_f_f11310() { main::sub_f111d0(); }

// sub_f11320  (orig 0xf11320, tailcall)
void main_f_f11320() { main::sub_f0eeb0(); }

// sub_f11350  (orig 0xf11350, tailcall)
void main_f_f11350() { main::sub_f0eeb0(); }

// sub_f11360  (orig 0xf11360, tailcall)
void main_f_f11360() { main::sub_f0eeb0(); }

// sub_f113c0  (orig 0xf113c0, ret_only)
void main_f_f113c0() {}

// sub_f113d0  (orig 0xf113d0, copy2)
void main_f_f113d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f113e0  (orig 0xf113e0, copy2)
void main_f_f113e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f13b00  (orig 0xf13b00, tailcall)
void main_f_f13b00() { main::sub_e7c4c0(); }

// sub_f13fe0  (orig 0xf13fe0, ret_only)
void main_f_f13fe0() {}

// sub_f13ff0  (orig 0xf13ff0, tailcall)
void main_f_f13ff0() { main::sub_e7c4c0(); }

// sub_f14000  (orig 0xf14000, tailcall)
void main_f_f14000() { main::sub_f14070(); }

// sub_f14030  (orig 0xf14030, tailcall)
void main_f_f14030() { main::sub_f14070(); }

// sub_f14040  (orig 0xf14040, tailcall)
void main_f_f14040() { main::sub_f14070(); }

// sub_f160d0  (orig 0xf160d0, tailcall)
void main_f_f160d0() { main::sub_f16300(); }

// sub_f161e0  (orig 0xf161e0, tailcall)
void main_f_f161e0() { main::sub_f16300(); }

// sub_f161f0  (orig 0xf161f0, tailcall)
void main_f_f161f0() { main::sub_f16300(); }

// sub_f165d0  (orig 0xf165d0, ret_only)
void main_f_f165d0() {}

// sub_f16640  (orig 0xf16640, ret_only)
void main_f_f16640() {}

// sub_f166b0  (orig 0xf166b0, ret_only)
void main_f_f166b0() {}

// sub_f16720  (orig 0xf16720, ret_only)
void main_f_f16720() {}

// sub_f16820  (orig 0xf16820, ret_only)
void main_f_f16820() {}

// sub_f16960  (orig 0xf16960, ret_only)
void main_f_f16960() {}

// sub_f16a90  (orig 0xf16a90, ret_only)
void main_f_f16a90() {}

// sub_f16aa0  (orig 0xf16aa0, copy2)
void main_f_f16aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f16ab0  (orig 0xf16ab0, copy2)
void main_f_f16ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f16ad0  (orig 0xf16ad0, ret_only)
void main_f_f16ad0() {}

// sub_f16ae0  (orig 0xf16ae0, copy2)
void main_f_f16ae0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f16af0  (orig 0xf16af0, copy2)
void main_f_f16af0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f16b10  (orig 0xf16b10, ret_only)
void main_f_f16b10() {}

// sub_f16b20  (orig 0xf16b20, copy2)
void main_f_f16b20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f16b30  (orig 0xf16b30, copy2)
void main_f_f16b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f16c10  (orig 0xf16c10, ret_only)
void main_f_f16c10() {}

// sub_f16c50  (orig 0xf16c50, ret_only)
void main_f_f16c50() {}

// sub_f16c60  (orig 0xf16c60, copy2)
void main_f_f16c60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f16c70  (orig 0xf16c70, copy2)
void main_f_f16c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f16d60  (orig 0xf16d60, ret_only)
void main_f_f16d60() {}

// sub_f16da0  (orig 0xf16da0, ret_only)
void main_f_f16da0() {}

// sub_f16db0  (orig 0xf16db0, copy2)
void main_f_f16db0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f16dc0  (orig 0xf16dc0, copy2)
void main_f_f16dc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f16ea0  (orig 0xf16ea0, ret_only)
void main_f_f16ea0() {}

// sub_f16ee0  (orig 0xf16ee0, ret_only)
void main_f_f16ee0() {}

// sub_f16ef0  (orig 0xf16ef0, copy2)
void main_f_f16ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f16f00  (orig 0xf16f00, copy2)
void main_f_f16f00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f1a850  (orig 0xf1a850, ret_only)
void main_f_f1a850() {}

// sub_f1a8d0  (orig 0xf1a8d0, ret_only)
void main_f_f1a8d0() {}

// sub_f1d800  (orig 0xf1d800, tailcall)
void main_f_f1d800() { main::sub_14ba4c0(); }

// sub_f1dc60  (orig 0xf1dc60, ret_only)
void main_f_f1dc60() {}

// sub_f1dc70  (orig 0xf1dc70, ret_only)
void main_f_f1dc70() {}

// sub_f1deb0  (orig 0xf1deb0, mov_ret)
uint32_t main_f_f1deb0() { return 1; }

// sub_f1efb0  (orig 0xf1efb0, tailcall)
void main_f_f1efb0() { main::sub_f1ee10(); }

// sub_f1efc0  (orig 0xf1efc0, tailcall)
void main_f_f1efc0() { main::sub_f1f170(); }

// sub_f1eff0  (orig 0xf1eff0, tailcall)
void main_f_f1eff0() { main::sub_f1f170(); }

// sub_f1f000  (orig 0xf1f000, tailcall)
void main_f_f1f000() { main::sub_f1f170(); }

// sub_f1f930  (orig 0xf1f930, getter)
uint64_t main_f_f1f930(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_f1faa0  (orig 0xf1faa0, mov_ret)
uint32_t main_f_f1faa0() { return 1; }

// sub_f20ac0  (orig 0xf20ac0, ret_only)
void main_f_f20ac0() {}

// sub_f21700  (orig 0xf21700, tailcall)
void main_f_f21700() { main::sub_f214a0(); }

// sub_f21c10  (orig 0xf21c10, tailcall)
void main_f_f21c10() { main::sub_f21af0(); }

// sub_f21c20  (orig 0xf21c20, tailcall)
void main_f_f21c20() { main::sub_f21c90(); }

// sub_f21c50  (orig 0xf21c50, tailcall)
void main_f_f21c50() { main::sub_f21c90(); }

// sub_f21c60  (orig 0xf21c60, tailcall)
void main_f_f21c60() { main::sub_f21c90(); }

// sub_f26630  (orig 0xf26630, tailcall)
void main_f_f26630() { main::sub_e7feb0(); }

// sub_f26640  (orig 0xf26640, tailcall)
void main_f_f26640() { main::sub_f266b0(); }

// sub_f26670  (orig 0xf26670, tailcall)
void main_f_f26670() { main::sub_f266b0(); }

// sub_f26680  (orig 0xf26680, tailcall)
void main_f_f26680() { main::sub_f266b0(); }

// sub_f26800  (orig 0xf26800, ret_only)
void main_f_f26800() {}

// sub_f26810  (orig 0xf26810, copy2)
void main_f_f26810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f26820  (orig 0xf26820, copy2)
void main_f_f26820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f26850  (orig 0xf26850, ret_only)
void main_f_f26850() {}

// sub_f26860  (orig 0xf26860, copy2)
void main_f_f26860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f26870  (orig 0xf26870, copy2)
void main_f_f26870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f26890  (orig 0xf26890, ret_only)
void main_f_f26890() {}

// sub_f268a0  (orig 0xf268a0, copy2)
void main_f_f268a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f268b0  (orig 0xf268b0, copy2)
void main_f_f268b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f26ba0  (orig 0xf26ba0, ret_only)
void main_f_f26ba0() {}

// sub_f26bb0  (orig 0xf26bb0, tailcall)
void main_f_f26bb0() { main::sub_e7feb0(); }

// sub_f26bc0  (orig 0xf26bc0, tailcall)
void main_f_f26bc0() { main::sub_f26c30(); }

// sub_f26bf0  (orig 0xf26bf0, tailcall)
void main_f_f26bf0() { main::sub_f26c30(); }

// sub_f26c00  (orig 0xf26c00, tailcall)
void main_f_f26c00() { main::sub_f26c30(); }

// sub_f2a050  (orig 0xf2a050, tailcall)
void main_f_f2a050() { main::sub_f29f40(); }

// sub_f2a060  (orig 0xf2a060, tailcall)
void main_f_f2a060() { main::sub_f2a590(); }

// sub_f2a090  (orig 0xf2a090, tailcall)
void main_f_f2a090() { main::sub_f2a590(); }

// sub_f2a0a0  (orig 0xf2a0a0, tailcall)
void main_f_f2a0a0() { main::sub_f2a590(); }

// sub_f2a6e0  (orig 0xf2a6e0, ret_only)
void main_f_f2a6e0() {}

// sub_f2a6f0  (orig 0xf2a6f0, copy2)
void main_f_f2a6f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2a700  (orig 0xf2a700, copy2)
void main_f_f2a700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2a730  (orig 0xf2a730, ret_only)
void main_f_f2a730() {}

// sub_f2a740  (orig 0xf2a740, copy2)
void main_f_f2a740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2a750  (orig 0xf2a750, copy2)
void main_f_f2a750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2ad40  (orig 0xf2ad40, ret_only)
void main_f_f2ad40() {}

// sub_f2ad50  (orig 0xf2ad50, copy2)
void main_f_f2ad50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2ad60  (orig 0xf2ad60, copy2)
void main_f_f2ad60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2b110  (orig 0xf2b110, ret_only)
void main_f_f2b110() {}

// sub_f2b120  (orig 0xf2b120, copy2)
void main_f_f2b120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2b130  (orig 0xf2b130, copy2)
void main_f_f2b130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2c220  (orig 0xf2c220, ret_only)
void main_f_f2c220() {}

// sub_f2c230  (orig 0xf2c230, copy2)
void main_f_f2c230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2c240  (orig 0xf2c240, copy2)
void main_f_f2c240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2c460  (orig 0xf2c460, ret_only)
void main_f_f2c460() {}

// sub_f2c470  (orig 0xf2c470, copy2)
void main_f_f2c470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2c480  (orig 0xf2c480, copy2)
void main_f_f2c480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2c4b0  (orig 0xf2c4b0, ret_only)
void main_f_f2c4b0() {}

// sub_f2c4c0  (orig 0xf2c4c0, copy2)
void main_f_f2c4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2c4d0  (orig 0xf2c4d0, copy2)
void main_f_f2c4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f2ca90  (orig 0xf2ca90, ret_only)
void main_f_f2ca90() {}

// sub_f2caa0  (orig 0xf2caa0, tailcall)
void main_f_f2caa0() { main::sub_e7c4c0(); }

// sub_f2cab0  (orig 0xf2cab0, tailcall)
void main_f_f2cab0() { main::sub_f2cb20(); }

// sub_f2cae0  (orig 0xf2cae0, tailcall)
void main_f_f2cae0() { main::sub_f2cb20(); }

// sub_f2caf0  (orig 0xf2caf0, tailcall)
void main_f_f2caf0() { main::sub_f2cb20(); }

// sub_f32cd0  (orig 0xf32cd0, ret_only)
void main_f_f32cd0() {}

// sub_f34e80  (orig 0xf34e80, tailcall)
void main_f_f34e80() { main::sub_f353a0(); }

// sub_f34ff0  (orig 0xf34ff0, tailcall)
void main_f_f34ff0() { main::sub_f353a0(); }

// sub_f35000  (orig 0xf35000, tailcall)
void main_f_f35000() { main::sub_f353a0(); }

// sub_f35500  (orig 0xf35500, ret_only)
void main_f_f35500() {}

// sub_f35510  (orig 0xf35510, copy2)
void main_f_f35510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f35520  (orig 0xf35520, copy2)
void main_f_f35520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f35800  (orig 0xf35800, ret_only)
void main_f_f35800() {}

// sub_f35a70  (orig 0xf35a70, copy2)
void main_f_f35a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f35a80  (orig 0xf35a80, copy2)
void main_f_f35a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f35b30  (orig 0xf35b30, ret_only)
void main_f_f35b30() {}

// sub_f35b40  (orig 0xf35b40, copy2)
void main_f_f35b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f35b50  (orig 0xf35b50, copy2)
void main_f_f35b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f36c90  (orig 0xf36c90, tailcall)
void main_f_f36c90() { main::sub_f36e80(); }

// sub_f36d80  (orig 0xf36d80, tailcall)
void main_f_f36d80() { main::sub_f36e80(); }

// sub_f36d90  (orig 0xf36d90, tailcall)
void main_f_f36d90() { main::sub_f36e80(); }

// sub_f37150  (orig 0xf37150, ret_only)
void main_f_f37150() {}

// sub_f37160  (orig 0xf37160, copy2)
void main_f_f37160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f37170  (orig 0xf37170, copy2)
void main_f_f37170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f372d0  (orig 0xf372d0, ret_only)
void main_f_f372d0() {}

// sub_f372e0  (orig 0xf372e0, copy2)
void main_f_f372e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f372f0  (orig 0xf372f0, copy2)
void main_f_f372f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f37460  (orig 0xf37460, ret_only)
void main_f_f37460() {}

// sub_f37470  (orig 0xf37470, copy2)
void main_f_f37470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f37480  (orig 0xf37480, copy2)
void main_f_f37480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f37cf0  (orig 0xf37cf0, ret_only)
void main_f_f37cf0() {}

// sub_f37d00  (orig 0xf37d00, tailcall)
void main_f_f37d00() { main::sub_e7c4c0(); }

// sub_f37d10  (orig 0xf37d10, tailcall)
void main_f_f37d10() { main::sub_f37d80(); }

// sub_f37d40  (orig 0xf37d40, tailcall)
void main_f_f37d40() { main::sub_f37d80(); }

// sub_f37d50  (orig 0xf37d50, tailcall)
void main_f_f37d50() { main::sub_f37d80(); }

// sub_f383a0  (orig 0xf383a0, mov_ret)
uint32_t main_f_f383a0() { return 1; }

// sub_f383b0  (orig 0xf383b0, ret_only)
void main_f_f383b0() {}

// sub_f383c0  (orig 0xf383c0, tailcall)
void main_f_f383c0() { main::sub_e7c4c0(); }

// sub_f383d0  (orig 0xf383d0, tailcall)
void main_f_f383d0() { main::sub_f38440(); }

// sub_f38400  (orig 0xf38400, tailcall)
void main_f_f38400() { main::sub_f38440(); }

// sub_f38410  (orig 0xf38410, tailcall)
void main_f_f38410() { main::sub_f38440(); }

// sub_f39740  (orig 0xf39740, tailcall)
void main_f_f39740() { main::sub_f398f0(); }

// sub_f39810  (orig 0xf39810, tailcall)
void main_f_f39810() { main::sub_f398f0(); }

// sub_f39820  (orig 0xf39820, tailcall)
void main_f_f39820() { main::sub_f398f0(); }

// sub_f39b60  (orig 0xf39b60, ret_only)
void main_f_f39b60() {}

// sub_f39b70  (orig 0xf39b70, copy2)
void main_f_f39b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f39b80  (orig 0xf39b80, copy2)
void main_f_f39b80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f3abd0  (orig 0xf3abd0, ret_only)
void main_f_f3abd0() {}

// sub_f3aef0  (orig 0xf3aef0, tailcall)
void main_f_f3aef0() { main::sub_e7c4c0(); }

// sub_f3af00  (orig 0xf3af00, tailcall)
void main_f_f3af00() { main::sub_f3af70(); }

// sub_f3af30  (orig 0xf3af30, tailcall)
void main_f_f3af30() { main::sub_f3af70(); }

// sub_f3af40  (orig 0xf3af40, tailcall)
void main_f_f3af40() { main::sub_f3af70(); }

// sub_f3b550  (orig 0xf3b550, tailcall)
void main_f_f3b550() { main::sub_f3b2d0(); }

// sub_f3b580  (orig 0xf3b580, mov_ret)
uint32_t main_f_f3b580() { return 1; }

// sub_f3c710  (orig 0xf3c710, tailcall)
void main_f_f3c710() { main::sub_f3cc70(); }

// sub_f3c720  (orig 0xf3c720, tailcall)
void main_f_f3c720() { main::sub_f3cc70(); }

// sub_f3c730  (orig 0xf3c730, tailcall)
void main_f_f3c730() { main::sub_f3cc70(); }

// sub_f3d480  (orig 0xf3d480, getter)
uint64_t main_f_f3d480(void* a0) { return *(uint64_t*)((char*)(a0) + 184); }

// sub_f3d610  (orig 0xf3d610, mov_ret)
uint32_t main_f_f3d610() { return 4; }

// sub_f3d7e0  (orig 0xf3d7e0, getter)
uint64_t main_f_f3d7e0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_f3d7f0  (orig 0xf3d7f0, getter)
uint32_t main_f_f3d7f0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_f3d800  (orig 0xf3d800, setter)
void main_f_f3d800(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_f3d810  (orig 0xf3d810, compare)
bool main_f_f3d810(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 112)) == (uint64_t)(0); }

// sub_f3db40  (orig 0xf3db40, setter)
void main_f_f3db40(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1888) = a1; }

// sub_f3e670  (orig 0xf3e670, ret_only)
void main_f_f3e670() {}

// sub_f3e680  (orig 0xf3e680, ret_only)
void main_f_f3e680() {}

// sub_f3f270  (orig 0xf3f270, tailcall)
void main_f_f3f270() { main::sub_f3f520(); }

// sub_f3f3c0  (orig 0xf3f3c0, tailcall)
void main_f_f3f3c0() { main::sub_f3f520(); }

// sub_f3f3d0  (orig 0xf3f3d0, tailcall)
void main_f_f3f3d0() { main::sub_f3f520(); }

// sub_f429e0  (orig 0xf429e0, tailcall)
void main_f_f429e0() { main::sub_f42da0(); }

// sub_f42ab0  (orig 0xf42ab0, tailcall)
void main_f_f42ab0() { main::sub_f42da0(); }

// sub_f42ac0  (orig 0xf42ac0, tailcall)
void main_f_f42ac0() { main::sub_f42da0(); }

// sub_f431b0  (orig 0xf431b0, tailcall)
void main_f_f431b0() { main::sub_f431c0(); }

// sub_f43410  (orig 0xf43410, ret_only)
void main_f_f43410() {}

// sub_f43630  (orig 0xf43630, getter)
uint32_t main_f_f43630(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_f43cc0  (orig 0xf43cc0, tailcall)
void main_f_f43cc0() { main::sub_f43f30(); }

// sub_f43df0  (orig 0xf43df0, tailcall)
void main_f_f43df0() { main::sub_f43f30(); }

// sub_f43e00  (orig 0xf43e00, tailcall)
void main_f_f43e00() { main::sub_f43f30(); }

// sub_f47ab0  (orig 0xf47ab0, ret_only)
void main_f_f47ab0() {}

// sub_f47ac0  (orig 0xf47ac0, ret_only)
void main_f_f47ac0() {}

// sub_f47ad0  (orig 0xf47ad0, straight)
void main_f_f47ad0(void* a0) {
    *(uint8_t*)((char*)(a0) + 248) = (uint8_t)(1);
}

// sub_f47ae0  (orig 0xf47ae0, straight)
void main_f_f47ae0(void* a0) {
    *(uint8_t*)((char*)(a0) + 120) = (uint8_t)(1);
}

// sub_f480d0  (orig 0xf480d0, tailcall)
void main_f_f480d0() { main::sub_f47fe0(); }

// sub_f480e0  (orig 0xf480e0, tailcall)
void main_f_f480e0() { main::sub_f48700(); }

// sub_f48110  (orig 0xf48110, tailcall)
void main_f_f48110() { main::sub_f48700(); }

// sub_f48120  (orig 0xf48120, tailcall)
void main_f_f48120() { main::sub_f48700(); }

// sub_f497a0  (orig 0xf497a0, setter)
void main_f_f497a0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_f498c0  (orig 0xf498c0, getter)
uint32_t main_f_f498c0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_f49be0  (orig 0xf49be0, tailcall)
void main_f_f49be0() { main::sub_e7feb0(); }

// sub_f49bf0  (orig 0xf49bf0, tailcall)
void main_f_f49bf0() { main::sub_f49c60(); }

// sub_f49c20  (orig 0xf49c20, tailcall)
void main_f_f49c20() { main::sub_f49c60(); }

// sub_f49c30  (orig 0xf49c30, tailcall)
void main_f_f49c30() { main::sub_f49c60(); }

// sub_f4a270  (orig 0xf4a270, ret_only)
void main_f_f4a270() {}

// sub_f4a280  (orig 0xf4a280, mov_ret)
uint32_t main_f_f4a280() { return 0; }

// sub_f4a720  (orig 0xf4a720, tailcall)
void main_f_f4a720() { main::sub_e7feb0(); }

// sub_f4a730  (orig 0xf4a730, tailcall)
void main_f_f4a730() { main::sub_f4a7a0(); }

// sub_f4a760  (orig 0xf4a760, tailcall)
void main_f_f4a760() { main::sub_f4a7a0(); }

// sub_f4a770  (orig 0xf4a770, tailcall)
void main_f_f4a770() { main::sub_f4a7a0(); }

// sub_f4b290  (orig 0xf4b290, ret_only)
void main_f_f4b290() {}

// sub_f4b450  (orig 0xf4b450, tailcall)
void main_f_f4b450() { main::sub_f4ae60(); }

// sub_f4b560  (orig 0xf4b560, getter)
uint32_t main_f_f4b560(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_f4b570  (orig 0xf4b570, setter)
void main_f_f4b570(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_f4ba10  (orig 0xf4ba10, tailcall)
void main_f_f4ba10() { main::sub_e7feb0(); }

// sub_f4ba20  (orig 0xf4ba20, tailcall)
void main_f_f4ba20() { main::sub_f4ba90(); }

// sub_f4ba50  (orig 0xf4ba50, tailcall)
void main_f_f4ba50() { main::sub_f4ba90(); }

// sub_f4ba60  (orig 0xf4ba60, tailcall)
void main_f_f4ba60() { main::sub_f4ba90(); }

// sub_f4bbe0  (orig 0xf4bbe0, ret_only)
void main_f_f4bbe0() {}

// sub_f4c650  (orig 0xf4c650, ret_only)
void main_f_f4c650() {}

// sub_f4c810  (orig 0xf4c810, tailcall)
void main_f_f4c810() { main::sub_f4c3d0(); }

// sub_f4c920  (orig 0xf4c920, getter)
uint32_t main_f_f4c920(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_f4c930  (orig 0xf4c930, setter)
void main_f_f4c930(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_f4cdd0  (orig 0xf4cdd0, tailcall)
void main_f_f4cdd0() { main::sub_e7feb0(); }

// sub_f4cde0  (orig 0xf4cde0, tailcall)
void main_f_f4cde0() { main::sub_f4ce50(); }

// sub_f4ce10  (orig 0xf4ce10, tailcall)
void main_f_f4ce10() { main::sub_f4ce50(); }

// sub_f4ce20  (orig 0xf4ce20, tailcall)
void main_f_f4ce20() { main::sub_f4ce50(); }

// sub_f4cfa0  (orig 0xf4cfa0, ret_only)
void main_f_f4cfa0() {}

// sub_f4dca0  (orig 0xf4dca0, tailcall)
void main_f_f4dca0() { main::sub_e7c4c0(); }

// sub_f4dcb0  (orig 0xf4dcb0, tailcall)
void main_f_f4dcb0() { main::sub_f4dd20(); }

// sub_f4dce0  (orig 0xf4dce0, tailcall)
void main_f_f4dce0() { main::sub_f4dd20(); }

// sub_f4dcf0  (orig 0xf4dcf0, tailcall)
void main_f_f4dcf0() { main::sub_f4dd20(); }

// sub_f4e8d0  (orig 0xf4e8d0, ret_only)
void main_f_f4e8d0() {}

// sub_f4eb00  (orig 0xf4eb00, setter)
void main_f_f4eb00(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_f4eb10  (orig 0xf4eb10, getter)
uint32_t main_f_f4eb10(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_f4eec0  (orig 0xf4eec0, tailcall)
void main_f_f4eec0() { main::sub_f4ed20(); }

// sub_f4eed0  (orig 0xf4eed0, tailcall)
void main_f_f4eed0() { main::sub_f4ef40(); }

// sub_f4ef00  (orig 0xf4ef00, tailcall)
void main_f_f4ef00() { main::sub_f4ef40(); }

// sub_f4ef10  (orig 0xf4ef10, tailcall)
void main_f_f4ef10() { main::sub_f4ef40(); }

// sub_f4f850  (orig 0xf4f850, ret_only)
void main_f_f4f850() {}

// sub_f4f860  (orig 0xf4f860, tailcall)
void main_f_f4f860() { main::sub_e7c4c0(); }

// sub_f4f870  (orig 0xf4f870, tailcall)
void main_f_f4f870() { main::sub_f4f8e0(); }

// sub_f4f8a0  (orig 0xf4f8a0, tailcall)
void main_f_f4f8a0() { main::sub_f4f8e0(); }

// sub_f4f8b0  (orig 0xf4f8b0, tailcall)
void main_f_f4f8b0() { main::sub_f4f8e0(); }

// sub_f513c0  (orig 0xf513c0, tailcall)
void main_f_f513c0() { main::sub_f51570(); }

// sub_f51490  (orig 0xf51490, tailcall)
void main_f_f51490() { main::sub_f51570(); }

// sub_f514a0  (orig 0xf514a0, tailcall)
void main_f_f514a0() { main::sub_f51570(); }

// sub_f521d0  (orig 0xf521d0, tailcall)
void main_f_f521d0() { main::sub_e7c4c0(); }

// sub_f521e0  (orig 0xf521e0, tailcall)
void main_f_f521e0() { main::sub_f52250(); }

// sub_f52210  (orig 0xf52210, tailcall)
void main_f_f52210() { main::sub_f52250(); }

// sub_f52220  (orig 0xf52220, tailcall)
void main_f_f52220() { main::sub_f52250(); }

// sub_f52f50  (orig 0xf52f50, setter)
void main_f_f52f50(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_f531c0  (orig 0xf531c0, getter)
uint32_t main_f_f531c0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_f533f0  (orig 0xf533f0, tailcall)
void main_f_f533f0() { main::sub_e7feb0(); }

// sub_f53400  (orig 0xf53400, tailcall)
void main_f_f53400() { main::sub_f53470(); }

// sub_f53430  (orig 0xf53430, tailcall)
void main_f_f53430() { main::sub_f53470(); }

// sub_f53440  (orig 0xf53440, tailcall)
void main_f_f53440() { main::sub_f53470(); }

// sub_f54460  (orig 0xf54460, ret_only)
void main_f_f54460() {}

// sub_f545b0  (orig 0xf545b0, tailcall)
void main_f_f545b0() { main::sub_e7c4c0(); }

// sub_f545c0  (orig 0xf545c0, tailcall)
void main_f_f545c0() { main::sub_f54630(); }

// sub_f545f0  (orig 0xf545f0, tailcall)
void main_f_f545f0() { main::sub_f54630(); }

// sub_f54600  (orig 0xf54600, tailcall)
void main_f_f54600() { main::sub_f54630(); }

// sub_f54b80  (orig 0xf54b80, ret_only)
void main_f_f54b80() {}

// sub_f54b90  (orig 0xf54b90, tailcall)
void main_f_f54b90() { main::sub_e7c4c0(); }

// sub_f54ba0  (orig 0xf54ba0, tailcall)
void main_f_f54ba0() { main::sub_f54c10(); }

// sub_f54bd0  (orig 0xf54bd0, tailcall)
void main_f_f54bd0() { main::sub_f54c10(); }

// sub_f54be0  (orig 0xf54be0, tailcall)
void main_f_f54be0() { main::sub_f54c10(); }

// sub_f56730  (orig 0xf56730, ret_only)
void main_f_f56730() {}

// sub_f56cb0  (orig 0xf56cb0, tailcall)
void main_f_f56cb0() { main::sub_f56e60(); }

// sub_f56d80  (orig 0xf56d80, tailcall)
void main_f_f56d80() { main::sub_f56e60(); }

// sub_f56d90  (orig 0xf56d90, tailcall)
void main_f_f56d90() { main::sub_f56e60(); }

// sub_f58d60  (orig 0xf58d60, tailcall)
void main_f_f58d60() { main::sub_f58f10(); }

// sub_f58e30  (orig 0xf58e30, tailcall)
void main_f_f58e30() { main::sub_f58f10(); }

// sub_f58e40  (orig 0xf58e40, tailcall)
void main_f_f58e40() { main::sub_f58f10(); }

// sub_f59bd0  (orig 0xf59bd0, mov_ret)
uint32_t main_f_f59bd0() { return 1; }

// sub_f5a9f0  (orig 0xf5a9f0, mov_ret)
uint32_t main_f_f5a9f0() { return 1; }

// sub_f5c3f0  (orig 0xf5c3f0, tailcall)
void main_f_f5c3f0() { main::sub_f5c270(); }

// sub_f5e390  (orig 0xf5e390, ret_only)
void main_f_f5e390() {}

// sub_f5f550  (orig 0xf5f550, tailcall)
void main_f_f5f550() { main::sub_f5f340(); }

// sub_f5fa20  (orig 0xf5fa20, getter)
uint64_t main_f_f5fa20(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_f5fb90  (orig 0xf5fb90, mov_ret)
uint32_t main_f_f5fb90() { return 1; }

// sub_f5fed0  (orig 0xf5fed0, tailcall)
void main_f_f5fed0() { main::sub_f60140(); }

// sub_f60000  (orig 0xf60000, tailcall)
void main_f_f60000() { main::sub_f60140(); }

// sub_f60010  (orig 0xf60010, tailcall)
void main_f_f60010() { main::sub_f60140(); }

// sub_f64700  (orig 0xf64700, ret_only)
void main_f_f64700() {}

// sub_f648c0  (orig 0xf648c0, tailcall)
void main_f_f648c0() { main::sub_f64ab0(); }

// sub_f649b0  (orig 0xf649b0, tailcall)
void main_f_f649b0() { main::sub_f64ab0(); }

// sub_f649c0  (orig 0xf649c0, tailcall)
void main_f_f649c0() { main::sub_f64ab0(); }

// sub_f673c0  (orig 0xf673c0, tailcall)
void main_f_f673c0() { main::sub_e7feb0(); }

// sub_f673d0  (orig 0xf673d0, tailcall)
void main_f_f673d0() { main::sub_e7feb0(); }

// sub_f67830  (orig 0xf67830, mov_ret)
uint32_t main_f_f67830() { return 1; }

// sub_f67aa0  (orig 0xf67aa0, tailcall)
void main_f_f67aa0() { main::sub_e7feb0(); }

// sub_f6aca0  (orig 0xf6aca0, tailcall)
void main_f_f6aca0() { main::sub_f6aa40(); }

// sub_f6c990  (orig 0xf6c990, ret_only)
void main_f_f6c990() {}

// sub_f6c9a0  (orig 0xf6c9a0, copy2)
void main_f_f6c9a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f6c9b0  (orig 0xf6c9b0, copy2)
void main_f_f6c9b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f6d510  (orig 0xf6d510, tailcall)
void main_f_f6d510() { main::sub_f6d2d0(); }

// sub_f6e8c0  (orig 0xf6e8c0, tailcall)
void main_f_f6e8c0() { main::sub_f6ed70(); }

// sub_f6ea50  (orig 0xf6ea50, tailcall)
void main_f_f6ea50() { main::sub_f6ed70(); }

// sub_f6ea60  (orig 0xf6ea60, tailcall)
void main_f_f6ea60() { main::sub_f6ed70(); }

// sub_f716d0  (orig 0xf716d0, tailcall)
void main_f_f716d0() { main::sub_f71590(); }

// sub_f71890  (orig 0xf71890, tailcall)
void main_f_f71890() { main::sub_ce0(); }

