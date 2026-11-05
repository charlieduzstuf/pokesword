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


namespace main { uint64_t sub_c3fc20(uintptr_t); }
namespace main { void sub_c42080(); }
namespace main { void sub_c41c60(); }
namespace main { uint64_t sub_c41c60(uintptr_t); }
namespace main { void sub_e7c4c0(); }
namespace main { void sub_c42930(); }
namespace main { uint64_t sub_e7c4c0(uintptr_t); }
namespace main { void sub_c43920(); }
namespace main { void sub_c43f40(); }
namespace main { uint64_t sub_c44d90(uintptr_t); }
namespace main { void sub_c44d90(); }
namespace main { uint64_t sub_c47dd0(uintptr_t); }
namespace main { void sub_c47dd0(); }
namespace main { void sub_c48ff0(); }
namespace main { void sub_c49140(); }
namespace main { uint64_t sub_c4aea0(uintptr_t); }
namespace main { void sub_c4aea0(); }
namespace main { uint64_t sub_c4c480(uintptr_t); }
namespace main { void sub_c4c480(); }
namespace main { void sub_c4da30(); }
namespace main { uint64_t sub_c4da30(uintptr_t); }
namespace main { void sub_e7c250(); }
namespace main { void sub_c4deb0(); }
namespace main { uint64_t sub_e7c250(uintptr_t); }
namespace main { void sub_c4ea00(); }
namespace main { void sub_c4ec20(); }
namespace main { void sub_c4f090(); }
namespace main { void sub_c532c0(); }
namespace main { uint64_t sub_c53f50(uintptr_t); }
namespace main { void sub_c53f50(); }
namespace main { uint64_t sub_c5c740(uintptr_t); }
namespace main { void sub_ce0(); }
namespace main { void sub_978cf0(); }
namespace main { uint64_t sub_978cf0(uintptr_t); }
namespace main { void sub_c668b0(); }
namespace main { void sub_c68680(); }
namespace main { uint64_t sub_c69450(uintptr_t); }
namespace main { void sub_c69450(); }
namespace main { void sub_c73f50(); }
namespace main { uint64_t sub_c73f50(uintptr_t); }
namespace main { void sub_c7b920(); }
namespace main { uint64_t sub_c7b920(uintptr_t); }
namespace main { void sub_c80510(); }
namespace main { void sub_13b1c90(); }
namespace main { void sub_96c590(); }
extern uint32_t main_f_c628c0();
namespace main { void sub_c629e0(); }
namespace main { void sub_c62c30(); }
namespace main { void sub_c69e60(); }
namespace main { void sub_c6a2d0(); }
namespace main { void sub_c6a470(); }
namespace main { void sub_cea850(); }
namespace main { void sub_cff640(); }
namespace main { void sub_d03c40(); }
namespace main { void sub_d100d0(); }
namespace main { void sub_d349d0(); }
namespace main { void sub_13ed330(); }
namespace main { void sub_d3bca0(); }
namespace main { void sub_d51de0(); }
namespace main { void sub_c63170(); }
namespace main { void sub_d5f290(); }
namespace main { uint64_t sub_c94ae0(uintptr_t); }
namespace main { void sub_c94ae0(); }
namespace main { uint64_t sub_ca41c0(uintptr_t); }
namespace main { void sub_ca41c0(); }
namespace main { uint64_t sub_785960(uintptr_t); }
namespace main { void sub_ca5e40(); }
namespace main { void Set_State_Off_3(); }
namespace main { uint64_t sub_caefc0(uintptr_t); }
namespace main { uint64_t sub_cacd90(uintptr_t); }
namespace main { void sub_cacd90(); }
namespace main { uint64_t sub_cae900(uintptr_t); }
namespace main { void sub_cae900(); }
extern void main_f_5c6850();
namespace main { uint64_t sub_caf600(uintptr_t); }
namespace main { void sub_caf600(); }
namespace main { uint64_t sub_cb0600(uintptr_t); }
namespace main { void sub_cb56c0(); }
namespace main { uint64_t sub_cb6260(uintptr_t); }
namespace main { void sub_cb6260(); }
namespace main { uint64_t sub_cb6a80(uintptr_t); }
namespace main { void sub_cb6a80(); }
namespace main { void sub_cc9550(); }
namespace main { uint64_t sub_ce11d0(uintptr_t); }
namespace main { uint64_t sub_ce28b0(uintptr_t); }
namespace main { uint64_t sub_ce45f0(uintptr_t); }
namespace main { void sub_ce45f0(); }
namespace main { void sub_13cc970(); }
namespace main { void sub_cea130(); }
namespace main { void sub_ce8ca0(); }
namespace main { uint64_t sub_cec7f0(uintptr_t); }
namespace main { uint64_t sub_cf4fc0(uintptr_t); }
namespace main { uint64_t WaistOffset(uintptr_t); }
namespace main { uint64_t sub_cf5bd0(uintptr_t); }
namespace main { uint64_t sub_cf5ee0(uintptr_t); }
namespace main { uint64_t sub_cf72e0(uintptr_t); }
namespace main { void sub_cfa3b0(); }
namespace main { uint64_t sub_cfa3b0(uintptr_t); }
namespace main { uint64_t sub_cfa4c0(uintptr_t); }
namespace main { uint64_t sub_cfd3d0(uintptr_t); }
namespace main { uint64_t sub_cfdd20(uintptr_t); }
namespace main { uint64_t Target_3(uintptr_t); }
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
namespace main { uint64_t sub_5c89c0(uintptr_t); }
namespace main { void sub_d0c100(); }
namespace main { uint64_t sub_d0c100(uintptr_t); }
namespace main { void sub_d0f0c0(); }
namespace main { uint64_t sub_68d9b0(uintptr_t); }
namespace main { void sub_d13470(); }
namespace main { void sub_d137f0(); }
namespace main { uint64_t sub_d13470(uintptr_t); }
namespace main { void sub_d2df30(); }
namespace main { uint64_t sub_d2df30(uintptr_t); }
namespace main { uint64_t sub_d33e50(uintptr_t); }
namespace main { void sub_d36c70(); }
namespace main { uint64_t sub_d36c70(uintptr_t); }
namespace main { void sub_c642d0(); }
namespace main { uint64_t sub_c8f0b0(uintptr_t); }
namespace main { uint64_t sub_c8f230(uintptr_t); }
namespace main { void sub_cf2010(); }
namespace main { void sub_d48430(); }
namespace main { uint64_t sub_d48430(uintptr_t); }
namespace main { uint64_t sub_116f1d0(uintptr_t); }
namespace main { void sub_d4fc20(); }
namespace main { uint64_t sub_d4fc20(uintptr_t); }
namespace main { void sub_d504a0(); }
namespace main { void sub_d50d90(); }
namespace main { uint64_t sub_d50d90(uintptr_t); }
namespace main { void sub_d514e0(); }
namespace main { void sub_d51aa0(); }
namespace main { void sub_d54e90(); }
namespace main { void sub_cdc0d0(); }
namespace main { void sub_d5c100(); }
namespace main { uint64_t sub_d5c100(uintptr_t); }
namespace main { void sub_c72e70(); }
namespace main { void sub_c73630(); }
namespace main { void sub_13f67a0(); }
namespace main { void sub_d616e0(); }
namespace main { void sub_13eb080(); }
namespace main { void sub_e9d210(); }
namespace main { void sub_d64290(); }
namespace main { uint64_t sub_e9d210(uintptr_t); }
namespace main { void sub_d68110(); }
namespace main { void sub_d6a280(); }
namespace main { uint64_t sub_d6a280(uintptr_t); }
namespace main { void sub_d6c120(); }
namespace main { void sub_d6c930(); }
namespace main { uint64_t sub_d6d5a0(uintptr_t); }
namespace main { void sub_d6e3e0(); }
namespace main { void sub_d6ec10(); }
namespace main { uint64_t sub_d6f3d0(uintptr_t); }
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
namespace main { uint64_t sub_d89550(uintptr_t); }
namespace main { void sub_d94ab0(); }
namespace main { void sub_d95190(); }
namespace main { void sub_d963c0(); }
namespace main { uint64_t sub_d98c60(uintptr_t); }
namespace main { void sub_d9b8f0(); }
namespace main { uint64_t sub_d9b8f0(uintptr_t); }
namespace main { void sub_d9c840(); }
namespace main { void sub_da0210(); }
namespace main { void sub_da1430(); }
namespace main { uint64_t sub_da0210(uintptr_t); }
namespace main { void sub_da3110(); }
namespace main { uint64_t sub_da4e70(uintptr_t); }
namespace main { void sub_da4e70(); }
namespace main { void sub_da57d0(); }
namespace main { void sub_da6030(); }
namespace main { void sub_da63d0(); }
namespace main { void sub_da6d70(); }
namespace main { void sub_da77d0(); }
namespace main { void sub_da7f10(); }
namespace main { void sub_da87b0(); }
namespace main { void sub_da9070(); }
namespace main { uint64_t sub_da9bf0(uintptr_t); }
namespace main { void sub_da9bf0(); }
namespace main { void FE_G_IWA_KORI_HOLE(); }
namespace main { void sub_daedc0(); }
namespace main { void top_k_glove_joint(); }
namespace main { void sub_db3ca0(); }
namespace main { uint64_t sub_db3ca0(uintptr_t); }
namespace main { void sub_db5380(); }
namespace main { void sub_dbd810(); }
namespace main { uint64_t sub_dbd810(uintptr_t); }
namespace main { void sub_dc2200(); }
namespace main { void Set_State_t0401_Switch_Yellow_b(); }
namespace main { void sub_dc8b00(); }
namespace main { void kinoko_light(); }
namespace main { void sub_dce9d0(); }
namespace main { uint64_t sub_c6a470(uintptr_t); }
namespace main { void sub_dcf2b0(); }
namespace main { void sub_dcf560(); }
namespace main { void sub_dd2a30(); }
namespace main { uint64_t sub_dd48f0(uintptr_t); }
namespace main { uint64_t sub_ddd8e0(uintptr_t); }
namespace main { void sub_ddd8e0(); }
namespace main { uint64_t sub_dde470(uintptr_t); }
namespace main { void sub_ddf700(); }
namespace main { void sub_ddf8c0(); }
namespace main { uint64_t sub_ddf700(uintptr_t); }
namespace main { uint64_t sub_de0bf0(uintptr_t); }
namespace main { void sub_de0bf0(); }
namespace main { uint64_t sub_de2070(uintptr_t); }
namespace main { void sub_de4710(); }
namespace main { uint64_t sub_de4710(uintptr_t); }
namespace main { uint64_t sub_de4fd0(uintptr_t); }
namespace main { void sub_de4fd0(); }
namespace main { uint64_t sub_de5aa0(uintptr_t); }
namespace main { void sub_de8470(); }
namespace main { uint64_t sub_de8470(uintptr_t); }
namespace main { void sub_de9b50(); }
namespace main { uint64_t sub_de9b50(uintptr_t); }
namespace main { void sub_deb410(); }
namespace main { uint64_t sub_deb410(uintptr_t); }
namespace main { uint64_t sub_d0b900(uintptr_t); }
namespace main { uint64_t sub_d0b220(uintptr_t); }
namespace main { uint64_t sub_d0b230(uintptr_t); }
namespace main { uint64_t sub_d0a900(uintptr_t); }
namespace main { uint64_t sub_d0b710(uintptr_t); }
namespace main { uint64_t Play_PM_Common_jump_out(uintptr_t); }
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
namespace main { uint64_t sub_e3a000(uintptr_t); }
namespace main { uint64_t sub_e3a130(uintptr_t); }
namespace main { uint64_t sub_e39d70(uintptr_t); }
namespace main { uint64_t sub_e3a2a0(uintptr_t); }
namespace main { uint64_t sub_e3a390(uintptr_t); }
namespace main { uint64_t sub_e3a500(uintptr_t); }
namespace main { uint64_t sub_e3a5f0(uintptr_t); }
namespace main { uint64_t sub_e39710(uintptr_t); }
namespace main { uint64_t sub_e3a6c0(uintptr_t); }
namespace main { void sub_e3a6c0(); }
namespace main { uint64_t sub_101bd40(uintptr_t); }
namespace main { uint64_t sub_e3acf0(uintptr_t); }
namespace main { uint64_t sub_e3d4d0(uintptr_t); }
namespace main { void sub_e3d4d0(); }
namespace main { uint64_t sub_e3efe0(uintptr_t); }
namespace main { uint64_t sub_e3f580(uintptr_t); }
namespace main { void sub_e3f580(); }
namespace main { uint64_t sub_e40360(uintptr_t); }
namespace main { uint64_t sub_e40b10(uintptr_t); }
namespace main { void sub_e41a80(); }
namespace main { uint64_t sub_e420d0(uintptr_t); }
namespace main { void sub_e42ab0(); }
namespace main { void sub_e46dd0(); }
namespace main { uint64_t sub_e46dd0(uintptr_t); }
namespace main { uint64_t sub_e47be0(uintptr_t); }
namespace main { void sub_e47be0(); }
namespace main { void sub_e4bd00(); }
namespace main { void sub_e4c3c0(); }
namespace main { void sub_c8aa60(); }
namespace main { void sub_e58d20(); }
namespace main { uint64_t sub_e58d20(uintptr_t); }
namespace main { uint64_t sub_e5e110(uintptr_t); }
namespace main { void sub_e5e110(); }
namespace main { void sub_e60c10(); }
namespace main { void sub_e60fd0(); }
namespace main { void sub_e61170(); }
namespace main { uint64_t sub_e60fd0(uintptr_t); }
namespace main { void sub_e7feb0(); }
namespace main { void sub_e667c0(); }
namespace main { uint64_t sub_e7feb0(uintptr_t); }
namespace main { void sub_e67540(); }
namespace main { uint64_t sub_e67330(uintptr_t); }
namespace main { uint64_t sub_e67e80(uintptr_t); }
namespace main { void sub_e68200(); }
namespace main { void sub_e6a0f0(); }
namespace main { uint64_t sub_e6b4f0(uintptr_t); }
namespace main { void sub_e6b4f0(); }
namespace main { void sub_e6c870(); }
namespace main { void sub_14e0b90(); }
namespace main { uint64_t sub_e6c870(uintptr_t); }
namespace main { uint64_t anime_out_2(uintptr_t); }
namespace main { void sub_e6e460(); }
namespace main { uint64_t sub_ec6b00(uintptr_t); }
namespace main { uint64_t sub_ec6e20(uintptr_t); }
namespace main { uint64_t sub_e70bf0(uintptr_t); }
namespace main { uint64_t sub_e70c10(uintptr_t); }
namespace main { void sub_e72930(); }
namespace main { void sub_e67330(); }
namespace main { void sub_e734a0(); }
namespace main { void sub_e74200(); }
namespace main { void sub_e748d0(); }
namespace main { uint64_t sub_e748d0(uintptr_t); }
namespace main { void sub_e75330(); }
namespace main { void sub_e75d00(); }
namespace main { void sub_e75f40(); }
namespace main { uint64_t sub_e7c940(uintptr_t); }
namespace main { void sub_e7ca50(); }
namespace main { uint64_t sub_e7ca50(uintptr_t); }
namespace main { uint64_t sub_e7cdb0(uintptr_t); }
namespace main { uint64_t sub_e7efd0(uintptr_t); }
namespace main { void sub_e7efd0(); }
namespace main { uint64_t sub_e83370(uintptr_t); }
namespace main { uint64_t sub_e83390(uintptr_t); }
namespace main { uint64_t sub_e809d0(uintptr_t); }
namespace main { uint64_t sub_e84490(uintptr_t); }
namespace main { void sub_e81640(); }
namespace main { uint64_t sub_14abe00(uintptr_t); }
namespace main { uint64_t sub_e8b4f0(uintptr_t); }
namespace main { void sub_e8b4f0(); }
namespace main { void sub_e8cc00(); }
namespace main { void sub_e92dc0(); }
namespace main { void sub_5d1550(); }
namespace main { void sub_e94c10(); }
namespace main { void sub_5d2800(); }
namespace main { uint64_t sub_5d1550(uintptr_t); }
namespace main { uint64_t sub_e97710(uintptr_t); }
namespace main { void sub_ead240(); }
namespace main { uint64_t sub_ead240(uintptr_t); }
namespace main { uint64_t sub_e9d580(uintptr_t); }
namespace main { void sub_e9d840(); }
namespace main { uint64_t sub_e9e010(uintptr_t); }
namespace main { uint64_t sub_e9dc10(uintptr_t); }
namespace main { void sub_ea2e20(); }
namespace main { void sub_ea3e70(); }
namespace main { void sub_ea41d0(); }
namespace main { void sub_ea4450(); }
namespace main { uint64_t sub_ea9cc0(uintptr_t); }
namespace main { uint64_t sub_eab310(uintptr_t); }
namespace main { uint64_t sub_eab3e0(uintptr_t); }
namespace main { uint64_t sub_eab4c0(uintptr_t); }
namespace main { uint64_t sub_eab610(uintptr_t); }
namespace main { uint64_t sub_eab8c0(uintptr_t); }
namespace main { uint64_t sub_eab960(uintptr_t); }
namespace main { uint64_t sub_eab9f0(uintptr_t); }
namespace main { uint64_t sub_eaba50(uintptr_t); }
namespace main { uint64_t sub_eabaa0(uintptr_t); }
namespace main { uint64_t sub_eabaf0(uintptr_t); }
namespace main { uint64_t sub_eabb60(uintptr_t); }
namespace main { uint64_t sub_eabc50(uintptr_t); }
namespace main { uint64_t sub_eabca0(uintptr_t); }
namespace main { uint64_t sub_eabd00(uintptr_t); }
namespace main { uint64_t sub_eaacb0(uintptr_t); }
namespace main { uint64_t place_name(uintptr_t); }
namespace main { void sub_eae960(); }
namespace main { uint64_t sub_eafb00(uintptr_t); }
namespace main { void sub_eafb00(); }
namespace main { uint64_t sub_eb27d0(uintptr_t); }
namespace main { void sub_eb57c0(); }
namespace main { void sub_eb6100(); }
namespace main { uint64_t sub_14eaa70(uintptr_t); }
namespace main { uint64_t sub_14eaaf0(uintptr_t); }
namespace main { void sub_eb7ce0(); }
namespace main { void sub_eb81a0(); }
namespace main { uint64_t sub_eb81a0(uintptr_t); }
namespace main { void sub_eb84a0(); }
namespace main { void sub_ebb330(); }
namespace main { uint64_t sub_ebb330(uintptr_t); }
namespace main { void sub_ebb5f0(); }
namespace main { void sub_ebb700(); }
namespace main { uint64_t sub_ebb5f0(uintptr_t); }
namespace main { void sub_ec1d70(); }
namespace main { void sub_ec1f10(); }
namespace main { uint64_t sub_ec1d70(uintptr_t); }
namespace main { void sub_ec2fc0(); }
namespace main { void sub_ec3210(); }
namespace main { uint64_t sub_ec2fc0(uintptr_t); }
namespace main { void sub_ec65c0(); }
namespace main { void sub_ec71b0(); }
namespace main { uint64_t sub_ec85d0(uintptr_t); }
namespace main { void sub_ec85d0(); }
namespace main { uint64_t sub_ec9460(uintptr_t); }
extern void main_f_5db430();
namespace main { void sub_ed1640(); }
namespace main { uint64_t sub_ed1640(uintptr_t); }
namespace main { uint64_t sub_5e1110(uintptr_t); }
namespace main { uint64_t sub_ed33e0(uintptr_t); }
namespace main { uint64_t sub_ed3660(uintptr_t); }
namespace main { uint64_t sub_ed3840(uintptr_t); }
namespace main { uint64_t sub_68c490(uintptr_t); }
namespace main { uint64_t sub_68c510(uintptr_t); }
namespace main { uint64_t sub_ed3af0(uintptr_t); }
namespace main { uint64_t sub_ed3f30(uintptr_t); }
namespace main { void sub_ed7ce0(); }
namespace main { uint64_t sub_ed7ce0(uintptr_t); }
namespace main { uint64_t sub_ed8190(uintptr_t); }
namespace main { void sub_ed9940(); }
namespace main { uint64_t sub_ed9940(uintptr_t); }
namespace main { uint64_t sub_edb910(uintptr_t); }
namespace main { uint64_t sub_edb9f0(uintptr_t); }
namespace main { uint64_t sub_edbad0(uintptr_t); }
namespace main { uint64_t sub_edbbb0(uintptr_t); }
namespace main { uint64_t sub_edbcc0(uintptr_t); }
namespace main { uint64_t sub_edbdd0(uintptr_t); }
namespace main { uint64_t sub_edc3d0(uintptr_t); }
namespace main { uint64_t sub_edc9b0(uintptr_t); }
namespace main { uint64_t sub_edcfb0(uintptr_t); }
namespace main { uint64_t sub_edd150(uintptr_t); }
namespace main { uint64_t sub_edd2d0(uintptr_t); }
namespace main { void sub_ee2040(); }
namespace main { void sub_ee21f0(); }
namespace main { uint64_t sub_ee2040(uintptr_t); }
namespace main { uint64_t sub_ee5690(uintptr_t); }
namespace main { void sub_ee5690(); }
namespace main { uint64_t sub_ee9e90(uintptr_t); }
namespace main { void sub_ee9e90(); }
namespace main { void sub_eed340(); }
namespace main { void sub_eed9c0(); }
namespace main { uint64_t sub_eed9c0(uintptr_t); }
namespace main { void sub_eeebe0(); }
namespace main { void sub_eeee20(); }
namespace main { void sub_eee3a0(); }
namespace main { void sub_ef0c60(); }
namespace main { void sub_ef2180(); }
namespace main { uint64_t sub_ef2180(uintptr_t); }
namespace main { void sub_ef2850(); }
namespace main { void sub_ef2c60(); }
namespace main { uint64_t sub_ef2850(uintptr_t); }
namespace main { uint64_t sub_eb75e0(uintptr_t); }
namespace main { void sub_ef9a90(); }
namespace main { void sub_efa5f0(); }
namespace main { void sub_efb080(); }
namespace main { void sub_c277c0(); }
namespace main { uint64_t sub_c277c0(uintptr_t); }
namespace main { void sub_efbfb0(); }
namespace main { uint64_t sub_efca30(uintptr_t); }
namespace main { void sub_efca30(); }
namespace main { void sub_efe300(); }
namespace main { void sub_efdee0(); }
namespace main { uint64_t sub_efdee0(uintptr_t); }
namespace main { void sub_efe900(); }
namespace main { void sub_eff3f0(); }
namespace main { void sub_f01320(); }
namespace main { uint64_t sub_f01320(uintptr_t); }
namespace main { void sub_f019e0(); }
namespace main { void sub_f04310(); }
namespace main { void sub_f045c0(); }
namespace main { void sub_f048f0(); }
namespace main { void sub_f04f10(); }
namespace main { void sub_f054e0(); }
namespace main { void sub_f06430(); }
namespace main { void sub_f07f40(); }
namespace main { uint64_t sub_f07f40(uintptr_t); }
namespace main { uint64_t sub_eb6530(uintptr_t); }
namespace main { void sub_f08690(); }
namespace main { void sub_f08cc0(); }
namespace main { void sub_f09800(); }
namespace main { void sub_f0a9a0(); }
namespace main { void sub_f04b30(); }
namespace main { void sub_f0b8d0(); }
namespace main { void sub_f09930(); }
namespace main { void sub_f05610(); }
namespace main { void sub_f0ded0(); }
namespace main { uint64_t sub_f0ded0(uintptr_t); }
namespace main { void sub_f0e2d0(); }
namespace main { void sub_f0e420(); }
namespace main { uint64_t sub_f0e2d0(uintptr_t); }
namespace main { void sub_f111d0(); }
namespace main { void sub_f0eeb0(); }
namespace main { uint64_t sub_f111d0(uintptr_t); }
namespace main { uint64_t sub_f135f0(uintptr_t); }
namespace main { uint64_t sub_f105b0(uintptr_t); }
namespace main { void sub_f14070(); }
namespace main { void sub_f16300(); }
namespace main { void sub_14ba4c0(); }
namespace main { void sub_f1ee10(); }
namespace main { void sub_f1f170(); }
namespace main { uint64_t sub_f1ee10(uintptr_t); }
namespace main { void sub_f214a0(); }
namespace main { uint64_t sub_f214a0(uintptr_t); }
namespace main { void sub_f21af0(); }
namespace main { void sub_f21c90(); }
namespace main { uint64_t sub_f21af0(uintptr_t); }
namespace main { void sub_f266b0(); }
namespace main { void sub_f26c30(); }
namespace main { uint64_t sub_14e1b40(uintptr_t); }
namespace main { void sub_f29f40(); }
namespace main { void sub_f2a590(); }
namespace main { uint64_t sub_f29f40(uintptr_t); }
namespace main { void sub_f2cb20(); }
namespace main { void sub_f353a0(); }
namespace main { void sub_f36e80(); }
namespace main { void sub_f37d80(); }
namespace main { void sub_f38440(); }
namespace main { void sub_f398f0(); }
namespace main { void sub_f3af70(); }
namespace main { uint64_t sub_f3b2d0(uintptr_t); }
namespace main { void sub_f3b2d0(); }
namespace main { void sub_f3cc70(); }
namespace main { uint64_t sub_eb7790(uintptr_t); }
namespace main { uint64_t sub_eb7830(uintptr_t); }
namespace main { void sub_f3f520(); }
namespace main { uint64_t sub_f43570(uintptr_t); }
namespace main { void sub_f42da0(); }
namespace main { void sub_f431c0(); }
namespace main { void sub_f43f30(); }
namespace main { uint64_t sub_f47b30(uintptr_t); }
namespace main { void sub_f47fe0(); }
namespace main { void sub_f48700(); }
namespace main { uint64_t sub_f47fe0(uintptr_t); }
namespace main { uint64_t sub_f482f0(uintptr_t); }
namespace main { void sub_f49c60(); }
namespace main { void sub_f4a7a0(); }
namespace main { void sub_f4ae60(); }
namespace main { void sub_f4ba90(); }
namespace main { void sub_f4c3d0(); }
namespace main { void sub_f4ce50(); }
namespace main { uint64_t sub_f497b0(uintptr_t); }
namespace main { void sub_f4dd20(); }
namespace main { void sub_f4ed20(); }
namespace main { void sub_f4ef40(); }
namespace main { uint64_t sub_f4ed20(uintptr_t); }
namespace main { void sub_f4f8e0(); }
namespace main { uint64_t sub_f4ea10(uintptr_t); }
namespace main { void sub_f51570(); }
namespace main { void sub_f52250(); }
namespace main { void sub_f53470(); }
namespace main { void sub_f54630(); }
namespace main { void sub_f54c10(); }
namespace main { void sub_f56e60(); }
namespace main { void sub_f58f10(); }
namespace main { void sub_f5c270(); }
namespace main { uint64_t sub_f5c270(uintptr_t); }
namespace main { uint64_t sub_67bfa0(uintptr_t); }
namespace main { uint64_t sub_f5d200(uintptr_t); }
namespace main { uint64_t sub_f5ebc0(uintptr_t); }
namespace main { void sub_f5f340(); }
namespace main { uint64_t sub_f5f340(uintptr_t); }
namespace main { void sub_f60140(); }
namespace main { void sub_f64ab0(); }
namespace main { uint64_t sub_f66670(uintptr_t); }
namespace main { uint64_t sub_f68f00(uintptr_t); }
namespace main { uint64_t sub_f68e00(uintptr_t); }
namespace main { uint64_t sub_f67f10(uintptr_t); }
namespace main { uint64_t sub_f6a730(uintptr_t); }
namespace main { void sub_f6aa40(); }
namespace main { uint64_t sub_f6aa40(uintptr_t); }
namespace main { uint64_t sub_f6acb0(uintptr_t); }
namespace main { void sub_f6d2d0(); }
namespace main { uint64_t sub_f6d2d0(uintptr_t); }
namespace main { uint64_t sub_f6e090(uintptr_t); }
namespace main { void sub_f6ed70(); }
namespace main { void sub_f71590(); }
namespace main { uint64_t sub_f71590(uintptr_t); }
namespace main { void sub_f73ae0(); }
namespace main { void sub_f75ac0(); }
namespace main { uint64_t sub_f6cd80(uintptr_t); }
namespace main { uint64_t sub_f76b50(uintptr_t); }
namespace main { void sub_f7ac20(); }
namespace main { void sub_f7bcb0(); }
namespace main { uint64_t sub_f7c8d0(uintptr_t); }
namespace main { void sub_f7bba0(); }
namespace main { uint64_t sub_f7bba0(uintptr_t); }
namespace main { void sub_f677f0(); }
namespace main { uint64_t sub_f818c0(uintptr_t); }
namespace main { void sub_f82850(); }
namespace main { void sub_f893e0(); }
namespace main { uint64_t sub_f89f60(uintptr_t); }
namespace main { uint64_t sub_f8a050(uintptr_t); }
namespace main { void sub_f8d820(); }
namespace main { uint64_t sub_f8d820(uintptr_t); }
namespace main { uint64_t sub_f8f820(uintptr_t); }
namespace main { void sub_f95d30(); }
namespace main { void sub_f96030(); }
namespace main { uint64_t sub_f95d30(uintptr_t); }
namespace main { void sub_f9c550(); }
namespace main { void sub_f9c980(); }
namespace main { uint64_t sub_f9c550(uintptr_t); }
namespace main { uint64_t sub_f9d4e0(uintptr_t); }
namespace main { uint64_t sub_f9e040(uintptr_t); }
namespace main { void sub_f9e4e0(); }
namespace main { uint64_t sub_f9e4e0(uintptr_t); }
namespace main { uint64_t sub_f9e5e0(uintptr_t); }
namespace main { void sub_f9f300(); }
namespace main { uint64_t sub_f9f300(uintptr_t); }
namespace main { uint64_t sub_f9f450(uintptr_t); }
namespace main { uint64_t sub_f9f800(uintptr_t); }
namespace main { void sub_fa07a0(); }
namespace main { uint64_t sub_fa07a0(uintptr_t); }
namespace main { uint64_t sub_fa21f0(uintptr_t); }
namespace main { void sub_fa2400(); }
namespace main { void sub_fa1210(); }
namespace main { uint64_t sub_fa2400(uintptr_t); }
namespace main { uint64_t sub_fa2940(uintptr_t); }
namespace main { void sub_fa3a90(); }
namespace main { uint64_t sub_fa3a90(uintptr_t); }
namespace main { void sub_fa55b0(); }
namespace main { void sub_fa7890(); }
namespace main { void sub_fa7a80(); }
namespace main { uint64_t sub_fa7890(uintptr_t); }
namespace main { uint64_t sub_fa7ec0(uintptr_t); }
namespace main { void sub_faa8a0(); }
namespace main { void sub_faaba0(); }
namespace main { uint64_t sub_faa8a0(uintptr_t); }
namespace main { void sub_fadda0(); }
namespace main { void sub_fadfe0(); }
namespace main { uint64_t sub_fadda0(uintptr_t); }

// sub_c3fd80  (orig 0xc3fd80, tailcall)
uint64_t main_f_c3fd80(void* a0) {
    return main::sub_c3fc20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c41c30  (orig 0xc41c30, tailcall)
void main_f_c41c30() { main::sub_c42080(); }

// sub_c41c40  (orig 0xc41c40, tailcall)
void main_f_c41c40() { main::sub_c42080(); }

// sub_c41c50  (orig 0xc41c50, tailcall)
void main_f_c41c50() { main::sub_c42080(); }

// sub_c41e20  (orig 0xc41e20, tailcall)
void main_f_c41e20() { main::sub_c41c60(); }

// sub_c41ee0  (orig 0xc41ee0, tailcall)
uint64_t main_f_c41ee0(void* a0) {
    return main::sub_c41c60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c41ef0  (orig 0xc41ef0, tailcall)
uint64_t main_f_c41ef0(void* a0) {
    return main::sub_c41c60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c42060  (orig 0xc42060, tailcall)
uint64_t main_f_c42060(void* a0) {
    return main::sub_c41c60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c42070  (orig 0xc42070, tailcall)
uint64_t main_f_c42070(void* a0) {
    return main::sub_c41c60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c428b0  (orig 0xc428b0, tailcall)
void main_f_c428b0() { main::sub_e7c4c0(); }

// sub_c428c0  (orig 0xc428c0, tailcall)
void main_f_c428c0() { main::sub_c42930(); }

// sub_c428d0  (orig 0xc428d0, tailcall)
uint64_t main_f_c428d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c428e0  (orig 0xc428e0, tailcall)
uint64_t main_f_c428e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c428f0  (orig 0xc428f0, tailcall)
void main_f_c428f0() { main::sub_c42930(); }

// sub_c42900  (orig 0xc42900, tailcall)
void main_f_c42900() { main::sub_c42930(); }

// sub_c42910  (orig 0xc42910, tailcall)
uint64_t main_f_c42910(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c42920  (orig 0xc42920, tailcall)
uint64_t main_f_c42920(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c438a0  (orig 0xc438a0, tailcall)
void main_f_c438a0() { main::sub_e7c4c0(); }

// sub_c438b0  (orig 0xc438b0, tailcall)
void main_f_c438b0() { main::sub_c43920(); }

// sub_c438c0  (orig 0xc438c0, tailcall)
uint64_t main_f_c438c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c438d0  (orig 0xc438d0, tailcall)
uint64_t main_f_c438d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c438e0  (orig 0xc438e0, tailcall)
void main_f_c438e0() { main::sub_c43920(); }

// sub_c438f0  (orig 0xc438f0, tailcall)
void main_f_c438f0() { main::sub_c43920(); }

// sub_c43900  (orig 0xc43900, tailcall)
uint64_t main_f_c43900(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c43910  (orig 0xc43910, tailcall)
uint64_t main_f_c43910(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c44050  (orig 0xc44050, tailcall)
void main_f_c44050() { main::sub_c43f40(); }

// sub_c44ef0  (orig 0xc44ef0, tailcall)
uint64_t main_f_c44ef0(void* a0) {
    return main::sub_c44d90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c44f00  (orig 0xc44f00, tailcall)
uint64_t main_f_c44f00(void* a0) {
    return main::sub_c44d90(((uintptr_t)((char*)(a0) - 88)));
}

// sub_c44f10  (orig 0xc44f10, tailcall)
void main_f_c44f10() { main::sub_c44d90(); }

// sub_c44f20  (orig 0xc44f20, tailcall)
uint64_t main_f_c44f20(void* a0) {
    return main::sub_c44d90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c44f30  (orig 0xc44f30, tailcall)
uint64_t main_f_c44f30(void* a0) {
    return main::sub_c44d90(((uintptr_t)((char*)(a0) - 88)));
}

// sub_c480f0  (orig 0xc480f0, tailcall)
uint64_t main_f_c480f0(void* a0) {
    return main::sub_c47dd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c48100  (orig 0xc48100, tailcall)
uint64_t main_f_c48100(void* a0) {
    return main::sub_c47dd0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_c48110  (orig 0xc48110, tailcall)
void main_f_c48110() { main::sub_c47dd0(); }

// sub_c48120  (orig 0xc48120, tailcall)
uint64_t main_f_c48120(void* a0) {
    return main::sub_c47dd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c48130  (orig 0xc48130, tailcall)
uint64_t main_f_c48130(void* a0) {
    return main::sub_c47dd0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_c48fe0  (orig 0xc48fe0, tailcall)
void main_f_c48fe0() { main::sub_c48ff0(); }

// sub_c49130  (orig 0xc49130, tailcall)
void main_f_c49130() { main::sub_c49140(); }

// sub_c49200  (orig 0xc49200, tailcall)
void main_f_c49200() { main::sub_c49140(); }

// sub_c49210  (orig 0xc49210, tailcall)
void main_f_c49210() { main::sub_c48ff0(); }

// sub_c4afd0  (orig 0xc4afd0, tailcall)
uint64_t main_f_c4afd0(void* a0) {
    return main::sub_c4aea0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4afe0  (orig 0xc4afe0, tailcall)
uint64_t main_f_c4afe0(void* a0) {
    return main::sub_c4aea0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_c4aff0  (orig 0xc4aff0, tailcall)
void main_f_c4aff0() { main::sub_c4aea0(); }

// sub_c4b000  (orig 0xc4b000, tailcall)
uint64_t main_f_c4b000(void* a0) {
    return main::sub_c4aea0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4b010  (orig 0xc4b010, tailcall)
uint64_t main_f_c4b010(void* a0) {
    return main::sub_c4aea0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_c4c5a0  (orig 0xc4c5a0, tailcall)
uint64_t main_f_c4c5a0(void* a0) {
    return main::sub_c4c480(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4c5b0  (orig 0xc4c5b0, tailcall)
uint64_t main_f_c4c5b0(void* a0) {
    return main::sub_c4c480(((uintptr_t)((char*)(a0) - 88)));
}

// sub_c4c5c0  (orig 0xc4c5c0, tailcall)
void main_f_c4c5c0() { main::sub_c4c480(); }

// sub_c4c5d0  (orig 0xc4c5d0, tailcall)
uint64_t main_f_c4c5d0(void* a0) {
    return main::sub_c4c480(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4c5e0  (orig 0xc4c5e0, tailcall)
uint64_t main_f_c4c5e0(void* a0) {
    return main::sub_c4c480(((uintptr_t)((char*)(a0) - 88)));
}

// sub_c4dbd0  (orig 0xc4dbd0, tailcall)
void main_f_c4dbd0() { main::sub_c4da30(); }

// sub_c4dc90  (orig 0xc4dc90, tailcall)
uint64_t main_f_c4dc90(void* a0) {
    return main::sub_c4da30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4dca0  (orig 0xc4dca0, tailcall)
uint64_t main_f_c4dca0(void* a0) {
    return main::sub_c4da30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4de10  (orig 0xc4de10, tailcall)
uint64_t main_f_c4de10(void* a0) {
    return main::sub_c4da30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c4de20  (orig 0xc4de20, tailcall)
uint64_t main_f_c4de20(void* a0) {
    return main::sub_c4da30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c4de30  (orig 0xc4de30, tailcall)
void main_f_c4de30() { main::sub_e7c250(); }

// sub_c4de40  (orig 0xc4de40, tailcall)
void main_f_c4de40() { main::sub_c4deb0(); }

// sub_c4de50  (orig 0xc4de50, tailcall)
uint64_t main_f_c4de50(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4de60  (orig 0xc4de60, tailcall)
uint64_t main_f_c4de60(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4de70  (orig 0xc4de70, tailcall)
void main_f_c4de70() { main::sub_c4deb0(); }

// sub_c4de80  (orig 0xc4de80, tailcall)
void main_f_c4de80() { main::sub_c4deb0(); }

// sub_c4de90  (orig 0xc4de90, tailcall)
uint64_t main_f_c4de90(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c4dea0  (orig 0xc4dea0, tailcall)
uint64_t main_f_c4dea0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c4e810  (orig 0xc4e810, tailcall)
void main_f_c4e810() { main::sub_c4ea00(); }

// sub_c4e900  (orig 0xc4e900, tailcall)
void main_f_c4e900() { main::sub_c4ea00(); }

// sub_c4e910  (orig 0xc4e910, tailcall)
void main_f_c4e910() { main::sub_c4ea00(); }

// sub_c4eba0  (orig 0xc4eba0, tailcall)
void main_f_c4eba0() { main::sub_e7c4c0(); }

// sub_c4ebb0  (orig 0xc4ebb0, tailcall)
void main_f_c4ebb0() { main::sub_c4ec20(); }

// sub_c4ebc0  (orig 0xc4ebc0, tailcall)
uint64_t main_f_c4ebc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4ebd0  (orig 0xc4ebd0, tailcall)
uint64_t main_f_c4ebd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4ebe0  (orig 0xc4ebe0, tailcall)
void main_f_c4ebe0() { main::sub_c4ec20(); }

// sub_c4ebf0  (orig 0xc4ebf0, tailcall)
void main_f_c4ebf0() { main::sub_c4ec20(); }

// sub_c4ec00  (orig 0xc4ec00, tailcall)
uint64_t main_f_c4ec00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c4ec10  (orig 0xc4ec10, tailcall)
uint64_t main_f_c4ec10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c4f010  (orig 0xc4f010, tailcall)
void main_f_c4f010() { main::sub_e7c4c0(); }

// sub_c4f020  (orig 0xc4f020, tailcall)
void main_f_c4f020() { main::sub_c4f090(); }

// sub_c4f030  (orig 0xc4f030, tailcall)
uint64_t main_f_c4f030(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4f040  (orig 0xc4f040, tailcall)
uint64_t main_f_c4f040(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c4f050  (orig 0xc4f050, tailcall)
void main_f_c4f050() { main::sub_c4f090(); }

// sub_c4f060  (orig 0xc4f060, tailcall)
void main_f_c4f060() { main::sub_c4f090(); }

// sub_c4f070  (orig 0xc4f070, tailcall)
uint64_t main_f_c4f070(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c4f080  (orig 0xc4f080, tailcall)
uint64_t main_f_c4f080(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c53050  (orig 0xc53050, tailcall)
void main_f_c53050() { main::sub_c532c0(); }

// sub_c53180  (orig 0xc53180, tailcall)
void main_f_c53180() { main::sub_c532c0(); }

// sub_c53190  (orig 0xc53190, tailcall)
void main_f_c53190() { main::sub_c532c0(); }

// sub_c54b40  (orig 0xc54b40, tailcall)
uint64_t main_f_c54b40(void* a0) {
    return main::sub_c53f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c54b50  (orig 0xc54b50, tailcall)
uint64_t main_f_c54b50(void* a0) {
    return main::sub_c53f50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c54b60  (orig 0xc54b60, tailcall)
void main_f_c54b60() { main::sub_c53f50(); }

// sub_c54b70  (orig 0xc54b70, tailcall)
uint64_t main_f_c54b70(void* a0) {
    return main::sub_c53f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c54b80  (orig 0xc54b80, tailcall)
uint64_t main_f_c54b80(void* a0) {
    return main::sub_c53f50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c5c830  (orig 0xc5c830, tailcall)
uint64_t main_f_c5c830(void* a0) {
    return main::sub_c5c740(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c5c840  (orig 0xc5c840, tailcall)
uint64_t main_f_c5c840(void* a0) {
    return main::sub_c5c740(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c60270  (orig 0xc60270, tailcall)
void main_f_c60270() { main::sub_ce0(); }

// sub_c602d0  (orig 0xc602d0, tailcall)
void main_f_c602d0() { main::sub_ce0(); }

// sub_c60800  (orig 0xc60800, tailcall)
void main_f_c60800() { main::sub_ce0(); }

// sub_c60860  (orig 0xc60860, tailcall)
void main_f_c60860() { main::sub_ce0(); }

// sub_c60a00  (orig 0xc60a00, tailcall)
void main_f_c60a00() { main::sub_ce0(); }

// sub_c60a60  (orig 0xc60a60, tailcall)
void main_f_c60a60() { main::sub_ce0(); }

// sub_c64ca0  (orig 0xc64ca0, tailcall)
void main_f_c64ca0() { main::sub_978cf0(); }

// sub_c64d70  (orig 0xc64d70, tailcall)
uint64_t main_f_c64d70(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c64d80  (orig 0xc64d80, tailcall)
uint64_t main_f_c64d80(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c64ef0  (orig 0xc64ef0, tailcall)
uint64_t main_f_c64ef0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c64f00  (orig 0xc64f00, tailcall)
uint64_t main_f_c64f00(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c66560  (orig 0xc66560, tailcall)
void main_f_c66560() { main::sub_c668b0(); }

// sub_c666f0  (orig 0xc666f0, tailcall)
void main_f_c666f0() { main::sub_c668b0(); }

// sub_c66700  (orig 0xc66700, tailcall)
void main_f_c66700() { main::sub_c668b0(); }

// sub_c687a0  (orig 0xc687a0, tailcall)
void main_f_c687a0() { main::sub_c68680(); }

// sub_c69770  (orig 0xc69770, tailcall)
uint64_t main_f_c69770(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c69780  (orig 0xc69780, tailcall)
uint64_t main_f_c69780(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c69790  (orig 0xc69790, tailcall)
void main_f_c69790() { main::sub_c69450(); }

// sub_c697a0  (orig 0xc697a0, tailcall)
uint64_t main_f_c697a0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c697b0  (orig 0xc697b0, tailcall)
uint64_t main_f_c697b0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c6f080  (orig 0xc6f080, tailcall)
void main_f_c6f080() { main::sub_ce0(); }

// sub_c6f100  (orig 0xc6f100, tailcall)
void main_f_c6f100() { main::sub_ce0(); }

// sub_c74080  (orig 0xc74080, tailcall)
void main_f_c74080() { main::sub_c73f50(); }

// sub_c74110  (orig 0xc74110, tailcall)
uint64_t main_f_c74110(void* a0) {
    return main::sub_c73f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c74120  (orig 0xc74120, tailcall)
uint64_t main_f_c74120(void* a0) {
    return main::sub_c73f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c74310  (orig 0xc74310, tailcall)
uint64_t main_f_c74310(void* a0) {
    return main::sub_c73f50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c74320  (orig 0xc74320, tailcall)
uint64_t main_f_c74320(void* a0) {
    return main::sub_c73f50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c75b50  (orig 0xc75b50, tailcall)
void main_f_c75b50() { main::sub_ce0(); }

// sub_c7be00  (orig 0xc7be00, tailcall)
void main_f_c7be00() { main::sub_c7b920(); }

// sub_c7bed0  (orig 0xc7bed0, tailcall)
uint64_t main_f_c7bed0(void* a0) {
    return main::sub_c7b920(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c7bee0  (orig 0xc7bee0, tailcall)
uint64_t main_f_c7bee0(void* a0) {
    return main::sub_c7b920(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c7c050  (orig 0xc7c050, tailcall)
uint64_t main_f_c7c050(void* a0) {
    return main::sub_c7b920(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c7c060  (orig 0xc7c060, tailcall)
uint64_t main_f_c7c060(void* a0) {
    return main::sub_c7b920(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c80750  (orig 0xc80750, tailcall)
void main_f_c80750() { main::sub_c80510(); }

// sub_c836c0  (orig 0xc836c0, tailcall)
void main_f_c836c0() { main::sub_c69450(); }

// sub_c836d0  (orig 0xc836d0, tailcall)
void main_f_c836d0() { main::sub_13b1c90(); }

// sub_c83730  (orig 0xc83730, tailcall)
uint64_t main_f_c83730(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c83740  (orig 0xc83740, tailcall)
uint64_t main_f_c83740(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c83750  (orig 0xc83750, tailcall)
void main_f_c83750() { main::sub_13b1c90(); }

// sub_c83760  (orig 0xc83760, tailcall)
void main_f_c83760() { main::sub_13b1c90(); }

// sub_c83770  (orig 0xc83770, tailcall)
uint64_t main_f_c83770(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c83780  (orig 0xc83780, tailcall)
uint64_t main_f_c83780(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c83960  (orig 0xc83960, tailcall)
void main_f_c83960() { main::sub_ce0(); }

// sub_c839c0  (orig 0xc839c0, tailcall)
void main_f_c839c0() { main::sub_ce0(); }

// sub_c83d80  (orig 0xc83d80, tailcall)
void main_f_c83d80() { main::sub_ce0(); }

// sub_c83e00  (orig 0xc83e00, tailcall)
void main_f_c83e00() { main::sub_ce0(); }

// sub_c84990  (orig 0xc84990, tailcall)
void main_f_c84990() { main::sub_978cf0(); }

// sub_c84a10  (orig 0xc84a10, tailcall)
uint64_t main_f_c84a10(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c84a20  (orig 0xc84a20, tailcall)
uint64_t main_f_c84a20(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c84c10  (orig 0xc84c10, tailcall)
uint64_t main_f_c84c10(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c84c20  (orig 0xc84c20, tailcall)
uint64_t main_f_c84c20(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c85b50  (orig 0xc85b50, tailcall)
void main_f_c85b50() { main::sub_96c590(); }

// sub_c85c00  (orig 0xc85c00, tailcall)
void main_f_c85c00() { main::sub_96c590(); }

// sub_c85c10  (orig 0xc85c10, tailcall)
void main_f_c85c10() { main::sub_96c590(); }

// sub_c88db0  (orig 0xc88db0, tailcall)
uint32_t main_f_c88db0() { return main_f_c628c0(); }

// sub_c88ef0  (orig 0xc88ef0, tailcall)
void main_f_c88ef0() { main::sub_c629e0(); }

// sub_c88f00  (orig 0xc88f00, tailcall)
void main_f_c88f00() { main::sub_c62c30(); }

// sub_c89ef0  (orig 0xc89ef0, tailcall)
void main_f_c89ef0() { main::sub_c69e60(); }

// sub_c8a050  (orig 0xc8a050, tailcall)
void main_f_c8a050() { main::sub_c6a2d0(); }

// sub_c8a060  (orig 0xc8a060, tailcall)
void main_f_c8a060() { main::sub_c6a470(); }

// sub_c8a1e0  (orig 0xc8a1e0, tailcall)
void main_f_c8a1e0() { main::sub_cea850(); }

// sub_c8a290  (orig 0xc8a290, tailcall)
void main_f_c8a290() { main::sub_cea850(); }

// sub_c8a2a0  (orig 0xc8a2a0, tailcall)
void main_f_c8a2a0() { main::sub_cea850(); }

// sub_c8ac90  (orig 0xc8ac90, tailcall)
void main_f_c8ac90() { main::sub_cff640(); }

// sub_c8ae60  (orig 0xc8ae60, tailcall)
void main_f_c8ae60() { main::sub_cff640(); }

// sub_c8ae70  (orig 0xc8ae70, tailcall)
void main_f_c8ae70() { main::sub_cff640(); }

// sub_c8b570  (orig 0xc8b570, tailcall)
void main_f_c8b570() { main::sub_978cf0(); }

// sub_c8b5f0  (orig 0xc8b5f0, tailcall)
uint64_t main_f_c8b5f0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c8b600  (orig 0xc8b600, tailcall)
uint64_t main_f_c8b600(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c8b7f0  (orig 0xc8b7f0, tailcall)
uint64_t main_f_c8b7f0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c8b800  (orig 0xc8b800, tailcall)
uint64_t main_f_c8b800(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c8bb90  (orig 0xc8bb90, tailcall)
uint32_t main_f_c8bb90() { return main_f_c628c0(); }

// sub_c8bcf0  (orig 0xc8bcf0, tailcall)
void main_f_c8bcf0() { main::sub_c629e0(); }

// sub_c8bd00  (orig 0xc8bd00, tailcall)
void main_f_c8bd00() { main::sub_c62c30(); }

// sub_c8be30  (orig 0xc8be30, tailcall)
void main_f_c8be30() { main::sub_978cf0(); }

// sub_c8beb0  (orig 0xc8beb0, tailcall)
uint64_t main_f_c8beb0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c8bec0  (orig 0xc8bec0, tailcall)
uint64_t main_f_c8bec0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c8c0b0  (orig 0xc8c0b0, tailcall)
uint64_t main_f_c8c0b0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c8c0c0  (orig 0xc8c0c0, tailcall)
uint64_t main_f_c8c0c0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c8c590  (orig 0xc8c590, tailcall)
void main_f_c8c590() { main::sub_978cf0(); }

// sub_c8c620  (orig 0xc8c620, tailcall)
uint64_t main_f_c8c620(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c8c630  (orig 0xc8c630, tailcall)
uint64_t main_f_c8c630(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c8c820  (orig 0xc8c820, tailcall)
uint64_t main_f_c8c820(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c8c830  (orig 0xc8c830, tailcall)
uint64_t main_f_c8c830(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c8d280  (orig 0xc8d280, tailcall)
void main_f_c8d280() { main::sub_c69450(); }

// sub_c8d290  (orig 0xc8d290, tailcall)
void main_f_c8d290() { main::sub_d03c40(); }

// sub_c8d2a0  (orig 0xc8d2a0, tailcall)
uint64_t main_f_c8d2a0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c8d2b0  (orig 0xc8d2b0, tailcall)
uint64_t main_f_c8d2b0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c8d2c0  (orig 0xc8d2c0, tailcall)
void main_f_c8d2c0() { main::sub_d03c40(); }

// sub_c8d2d0  (orig 0xc8d2d0, tailcall)
void main_f_c8d2d0() { main::sub_d03c40(); }

// sub_c8d2e0  (orig 0xc8d2e0, tailcall)
uint64_t main_f_c8d2e0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c8d2f0  (orig 0xc8d2f0, tailcall)
uint64_t main_f_c8d2f0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c8e920  (orig 0xc8e920, tailcall)
void main_f_c8e920() { main::sub_c69450(); }

// sub_c8e930  (orig 0xc8e930, tailcall)
void main_f_c8e930() { main::sub_d100d0(); }

// sub_c8e940  (orig 0xc8e940, tailcall)
uint64_t main_f_c8e940(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c8e950  (orig 0xc8e950, tailcall)
uint64_t main_f_c8e950(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c8e960  (orig 0xc8e960, tailcall)
void main_f_c8e960() { main::sub_d100d0(); }

// sub_c8e970  (orig 0xc8e970, tailcall)
void main_f_c8e970() { main::sub_d100d0(); }

// sub_c8e980  (orig 0xc8e980, tailcall)
uint64_t main_f_c8e980(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c8e990  (orig 0xc8e990, tailcall)
uint64_t main_f_c8e990(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c903a0  (orig 0xc903a0, tailcall)
void main_f_c903a0() { main::sub_c69450(); }

// sub_c903b0  (orig 0xc903b0, tailcall)
void main_f_c903b0() { main::sub_d349d0(); }

// sub_c903c0  (orig 0xc903c0, tailcall)
uint64_t main_f_c903c0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c903d0  (orig 0xc903d0, tailcall)
uint64_t main_f_c903d0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c903e0  (orig 0xc903e0, tailcall)
void main_f_c903e0() { main::sub_d349d0(); }

// sub_c903f0  (orig 0xc903f0, tailcall)
void main_f_c903f0() { main::sub_d349d0(); }

// sub_c90400  (orig 0xc90400, tailcall)
uint64_t main_f_c90400(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c90410  (orig 0xc90410, tailcall)
uint64_t main_f_c90410(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

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

// sub_c925d0  (orig 0xc925d0, tailcall)
uint64_t main_f_c925d0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c925e0  (orig 0xc925e0, tailcall)
uint64_t main_f_c925e0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c927d0  (orig 0xc927d0, tailcall)
uint64_t main_f_c927d0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c927e0  (orig 0xc927e0, tailcall)
uint64_t main_f_c927e0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c92860  (orig 0xc92860, tailcall)
void main_f_c92860() { main::sub_c69450(); }

// sub_c92870  (orig 0xc92870, tailcall)
void main_f_c92870() { main::sub_d51de0(); }

// sub_c92880  (orig 0xc92880, tailcall)
uint64_t main_f_c92880(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c92890  (orig 0xc92890, tailcall)
uint64_t main_f_c92890(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c928a0  (orig 0xc928a0, tailcall)
void main_f_c928a0() { main::sub_d51de0(); }

// sub_c928b0  (orig 0xc928b0, tailcall)
void main_f_c928b0() { main::sub_d51de0(); }

// sub_c928c0  (orig 0xc928c0, tailcall)
uint64_t main_f_c928c0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c928d0  (orig 0xc928d0, tailcall)
uint64_t main_f_c928d0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c93340  (orig 0xc93340, tailcall)
uint32_t main_f_c93340() { return main_f_c628c0(); }

// sub_c93450  (orig 0xc93450, tailcall)
void main_f_c93450() { main::sub_c629e0(); }

// sub_c93460  (orig 0xc93460, tailcall)
void main_f_c93460() { main::sub_c62c30(); }

// sub_c93470  (orig 0xc93470, tailcall)
void main_f_c93470() { main::sub_978cf0(); }

// sub_c934f0  (orig 0xc934f0, tailcall)
uint64_t main_f_c934f0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c93500  (orig 0xc93500, tailcall)
uint64_t main_f_c93500(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c936f0  (orig 0xc936f0, tailcall)
uint64_t main_f_c936f0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c93700  (orig 0xc93700, tailcall)
uint64_t main_f_c93700(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c942f0  (orig 0xc942f0, tailcall)
void main_f_c942f0() { main::sub_c63170(); }

// sub_c945d0  (orig 0xc945d0, tailcall)
void main_f_c945d0() { main::sub_d5f290(); }

// sub_c946c0  (orig 0xc946c0, tailcall)
void main_f_c946c0() { main::sub_d5f290(); }

// sub_c946d0  (orig 0xc946d0, tailcall)
void main_f_c946d0() { main::sub_d5f290(); }

// sub_c94ce0  (orig 0xc94ce0, tailcall)
uint64_t main_f_c94ce0(void* a0) {
    return main::sub_c94ae0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c94cf0  (orig 0xc94cf0, tailcall)
void main_f_c94cf0() { main::sub_c94ae0(); }

// sub_c94d00  (orig 0xc94d00, tailcall)
uint64_t main_f_c94d00(void* a0) {
    return main::sub_c94ae0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ca4340  (orig 0xca4340, tailcall)
uint64_t main_f_ca4340(void* a0) {
    return main::sub_ca41c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ca4350  (orig 0xca4350, tailcall)
void main_f_ca4350() { main::sub_ca41c0(); }

// sub_ca4360  (orig 0xca4360, tailcall)
uint64_t main_f_ca4360(void* a0) {
    return main::sub_ca41c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ca4e10  (orig 0xca4e10, tailcall)
uint64_t main_f_ca4e10(void* a0) {
    return main::sub_785960(((uintptr_t)(*(uint64_t*)((char*)(a0) + 96))));
}

// sub_ca6010  (orig 0xca6010, tailcall)
void main_f_ca6010() { main::sub_ca5e40(); }

// sub_ca7d40  (orig 0xca7d40, tailcall)
void main_f_ca7d40() { main::Set_State_Off_3(); }

// sub_ca92b0  (orig 0xca92b0, tailcall)
uint64_t main_f_ca92b0(void* a0) {
    return main::sub_caefc0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 160))));
}

// sub_cac9e0  (orig 0xcac9e0, tailcall)
void main_f_cac9e0() { main::sub_ce0(); }

// sub_cacae0  (orig 0xcacae0, tailcall)
void main_f_cacae0() { main::sub_ce0(); }

// sub_cacbe0  (orig 0xcacbe0, tailcall)
void main_f_cacbe0() { main::sub_ce0(); }

// sub_cacf20  (orig 0xcacf20, tailcall)
uint64_t main_f_cacf20(void* a0) {
    return main::sub_cacd90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cacf30  (orig 0xcacf30, tailcall)
void main_f_cacf30() { main::sub_cacd90(); }

// sub_cacf40  (orig 0xcacf40, tailcall)
uint64_t main_f_cacf40(void* a0) {
    return main::sub_cacd90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_caeb50  (orig 0xcaeb50, tailcall)
uint64_t main_f_caeb50(void* a0) {
    return main::sub_cae900(((uintptr_t)((char*)(a0) - 72)));
}

// sub_caeb60  (orig 0xcaeb60, tailcall)
void main_f_caeb60() { main::sub_cae900(); }

// sub_caeb70  (orig 0xcaeb70, tailcall)
uint64_t main_f_caeb70(void* a0) {
    return main::sub_cae900(((uintptr_t)((char*)(a0) - 72)));
}

// sub_caf460  (orig 0xcaf460, tailcall)
void main_f_caf460() { main_f_5c6850(); }

// sub_caf790  (orig 0xcaf790, tailcall)
uint64_t main_f_caf790(void* a0) {
    return main::sub_caf600(((uintptr_t)((char*)(a0) - 72)));
}

// sub_caf7a0  (orig 0xcaf7a0, tailcall)
void main_f_caf7a0() { main::sub_caf600(); }

// sub_caf7b0  (orig 0xcaf7b0, tailcall)
uint64_t main_f_caf7b0(void* a0) {
    return main::sub_caf600(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cb0a00  (orig 0xcb0a00, tailcall)
uint64_t main_f_cb0a00(void* a0) {
    return main::sub_cb0600(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cb57a0  (orig 0xcb57a0, tailcall)
void main_f_cb57a0() { main::sub_cb56c0(); }

// sub_cb63f0  (orig 0xcb63f0, tailcall)
uint64_t main_f_cb63f0(void* a0) {
    return main::sub_cb6260(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cb6400  (orig 0xcb6400, tailcall)
void main_f_cb6400() { main::sub_cb6260(); }

// sub_cb6410  (orig 0xcb6410, tailcall)
uint64_t main_f_cb6410(void* a0) {
    return main::sub_cb6260(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cb6c30  (orig 0xcb6c30, tailcall)
uint64_t main_f_cb6c30(void* a0) {
    return main::sub_cb6a80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cb6c40  (orig 0xcb6c40, tailcall)
void main_f_cb6c40() { main::sub_cb6a80(); }

// sub_cb6c50  (orig 0xcb6c50, tailcall)
uint64_t main_f_cb6c50(void* a0) {
    return main::sub_cb6a80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cb7100  (orig 0xcb7100, tailcall)
void main_f_cb7100() { main_f_5c6850(); }

// sub_cc9800  (orig 0xcc9800, tailcall)
void main_f_cc9800() { main::sub_cc9550(); }

// sub_ce1480  (orig 0xce1480, tailcall)
uint64_t main_f_ce1480(void* a0) {
    return main::sub_ce11d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ce1490  (orig 0xce1490, tailcall)
uint64_t main_f_ce1490(void* a0) {
    return main::sub_ce11d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ce2ae0  (orig 0xce2ae0, tailcall)
uint64_t main_f_ce2ae0(void* a0) {
    return main::sub_ce28b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ce2af0  (orig 0xce2af0, tailcall)
uint64_t main_f_ce2af0(void* a0) {
    return main::sub_ce28b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ce4850  (orig 0xce4850, tailcall)
uint64_t main_f_ce4850(void* a0) {
    return main::sub_ce45f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ce4860  (orig 0xce4860, tailcall)
uint64_t main_f_ce4860(void* a0) {
    return main::sub_ce45f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ce4870  (orig 0xce4870, tailcall)
void main_f_ce4870() { main::sub_ce45f0(); }

// sub_ce4880  (orig 0xce4880, tailcall)
uint64_t main_f_ce4880(void* a0) {
    return main::sub_ce45f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ce4890  (orig 0xce4890, tailcall)
uint64_t main_f_ce4890(void* a0) {
    return main::sub_ce45f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ce7590  (orig 0xce7590, tailcall)
void main_f_ce7590() { main::sub_978cf0(); }

// sub_ce75a0  (orig 0xce75a0, tailcall)
void main_f_ce75a0() { main::sub_13cc970(); }

// sub_ce75b0  (orig 0xce75b0, tailcall)
uint64_t main_f_ce75b0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ce75c0  (orig 0xce75c0, tailcall)
uint64_t main_f_ce75c0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ce75d0  (orig 0xce75d0, tailcall)
void main_f_ce75d0() { main::sub_13cc970(); }

// sub_ce75e0  (orig 0xce75e0, tailcall)
void main_f_ce75e0() { main::sub_13cc970(); }

// sub_ce75f0  (orig 0xce75f0, tailcall)
uint64_t main_f_ce75f0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ce7600  (orig 0xce7600, tailcall)
uint64_t main_f_ce7600(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ce9e70  (orig 0xce9e70, tailcall)
void main_f_ce9e70() { main::sub_cea130(); }

// sub_ce9e90  (orig 0xce9e90, tailcall)
void main_f_ce9e90() { main::sub_ce8ca0(); }

// sub_ce9ff0  (orig 0xce9ff0, tailcall)
void main_f_ce9ff0() { main::sub_cea130(); }

// sub_cea000  (orig 0xcea000, tailcall)
void main_f_cea000() { main::sub_cea130(); }

// sub_cee6b0  (orig 0xcee6b0, tailcall)
uint64_t main_f_cee6b0(void* a0) {
    return main::sub_cec7f0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_cf43c0  (orig 0xcf43c0, tailcall)
void main_f_cf43c0() { main::sub_ce0(); }

// sub_cf4440  (orig 0xcf4440, tailcall)
void main_f_cf4440() { main::sub_ce0(); }

// sub_cf4fb0  (orig 0xcf4fb0, tailcall)
uint64_t main_f_cf4fb0(void* a0) {
    return main::sub_cf4fc0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_cf5110  (orig 0xcf5110, tailcall)
uint64_t main_f_cf5110(void* a0) {
    return main::sub_cf4fc0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))));
}

// sub_cf5730  (orig 0xcf5730, tailcall)
uint64_t main_f_cf5730(void* a0) {
    return main::WaistOffset(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_cf5bc0  (orig 0xcf5bc0, tailcall)
uint64_t main_f_cf5bc0(void* a0) {
    return main::sub_cf5bd0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_cf5ec0  (orig 0xcf5ec0, tailcall)
uint64_t main_f_cf5ec0(void* a0) {
    return main::sub_cf5bd0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))));
}

// sub_cf5ed0  (orig 0xcf5ed0, tailcall)
uint64_t main_f_cf5ed0(void* a0) {
    return main::sub_cf5ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_cf6c70  (orig 0xcf6c70, tailcall)
uint64_t main_f_cf6c70(void* a0) {
    return main::sub_cf5ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))));
}

// sub_cf72d0  (orig 0xcf72d0, tailcall)
uint64_t main_f_cf72d0(void* a0) {
    return main::sub_cf72e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_cf78d0  (orig 0xcf78d0, tailcall)
uint64_t main_f_cf78d0(void* a0) {
    return main::sub_cf72e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))));
}

// sub_cfa4b0  (orig 0xcfa4b0, tailcall)
void main_f_cfa4b0() { main::sub_cfa3b0(); }

// sub_cfa5b0  (orig 0xcfa5b0, tailcall)
uint64_t main_f_cfa5b0(void* a0) {
    return main::sub_cfa3b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cfa5c0  (orig 0xcfa5c0, tailcall)
uint64_t main_f_cfa5c0(void* a0) {
    return main::sub_cfa3b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cfa5d0  (orig 0xcfa5d0, tailcall)
uint64_t main_f_cfa5d0(void* a0) {
    return main::sub_cfa4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cfa5e0  (orig 0xcfa5e0, tailcall)
uint64_t main_f_cfa5e0(void* a0) {
    return main::sub_cfa4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_cfa5f0  (orig 0xcfa5f0, tailcall)
uint64_t main_f_cfa5f0(void* a0) {
    return main::sub_cfa3b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_cfa600  (orig 0xcfa600, tailcall)
uint64_t main_f_cfa600(void* a0) {
    return main::sub_cfa3b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_cfd600  (orig 0xcfd600, tailcall)
uint64_t main_f_cfd600(void* a0) {
    return main::sub_cfd3d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cfd610  (orig 0xcfd610, tailcall)
uint64_t main_f_cfd610(void* a0) {
    return main::sub_cfd3d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_cfdfb0  (orig 0xcfdfb0, tailcall)
uint64_t main_f_cfdfb0(void* a0) {
    return main::sub_cfdd20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cfdfc0  (orig 0xcfdfc0, tailcall)
uint64_t main_f_cfdfc0(void* a0) {
    return main::sub_cfdd20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_cfe5b0  (orig 0xcfe5b0, tailcall)
uint64_t main_f_cfe5b0(void* a0) {
    return main::Target_3(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_cfe7c0  (orig 0xcfe7c0, tailcall)
uint64_t main_f_cfe7c0(void* a0) {
    return main::Target_3(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_cffb80  (orig 0xcffb80, tailcall)
void main_f_cffb80() { main::sub_978cf0(); }

// sub_cffb90  (orig 0xcffb90, tailcall)
void main_f_cffb90() { main::sub_cffc00(); }

// sub_cffba0  (orig 0xcffba0, tailcall)
uint64_t main_f_cffba0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cffbb0  (orig 0xcffbb0, tailcall)
uint64_t main_f_cffbb0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_cffbc0  (orig 0xcffbc0, tailcall)
void main_f_cffbc0() { main::sub_cffc00(); }

// sub_cffbd0  (orig 0xcffbd0, tailcall)
void main_f_cffbd0() { main::sub_cffc00(); }

// sub_cffbe0  (orig 0xcffbe0, tailcall)
uint64_t main_f_cffbe0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_cffbf0  (orig 0xcffbf0, tailcall)
uint64_t main_f_cffbf0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

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

// sub_d001b0  (orig 0xd001b0, tailcall)
uint64_t main_f_d001b0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d001c0  (orig 0xd001c0, tailcall)
uint64_t main_f_d001c0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d001d0  (orig 0xd001d0, tailcall)
void main_f_d001d0() { main::sub_d00210(); }

// sub_d001e0  (orig 0xd001e0, tailcall)
void main_f_d001e0() { main::sub_d00210(); }

// sub_d001f0  (orig 0xd001f0, tailcall)
uint64_t main_f_d001f0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d00200  (orig 0xd00200, tailcall)
uint64_t main_f_d00200(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d01a40  (orig 0xd01a40, tailcall)
void main_f_d01a40() { main::sub_c6d5e0(); }

// sub_d026b0  (orig 0xd026b0, tailcall)
void main_f_d026b0() { main::sub_978cf0(); }

// sub_d026c0  (orig 0xd026c0, tailcall)
void main_f_d026c0() { main::sub_d02730(); }

// sub_d026d0  (orig 0xd026d0, tailcall)
uint64_t main_f_d026d0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d026e0  (orig 0xd026e0, tailcall)
uint64_t main_f_d026e0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d026f0  (orig 0xd026f0, tailcall)
void main_f_d026f0() { main::sub_d02730(); }

// sub_d02700  (orig 0xd02700, tailcall)
void main_f_d02700() { main::sub_d02730(); }

// sub_d02710  (orig 0xd02710, tailcall)
uint64_t main_f_d02710(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d02720  (orig 0xd02720, tailcall)
uint64_t main_f_d02720(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d03aa0  (orig 0xd03aa0, tailcall)
void main_f_d03aa0() { main::sub_c69450(); }

// sub_d03b20  (orig 0xd03b20, tailcall)
uint64_t main_f_d03b20(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d03b30  (orig 0xd03b30, tailcall)
uint64_t main_f_d03b30(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d03c20  (orig 0xd03c20, tailcall)
uint64_t main_f_d03c20(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d03c30  (orig 0xd03c30, tailcall)
uint64_t main_f_d03c30(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

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

// sub_d04060  (orig 0xd04060, tailcall)
uint64_t main_f_d04060(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d04070  (orig 0xd04070, tailcall)
uint64_t main_f_d04070(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d04080  (orig 0xd04080, tailcall)
void main_f_d04080() { main::sub_d040c0(); }

// sub_d04090  (orig 0xd04090, tailcall)
void main_f_d04090() { main::sub_d040c0(); }

// sub_d040a0  (orig 0xd040a0, tailcall)
uint64_t main_f_d040a0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d040b0  (orig 0xd040b0, tailcall)
uint64_t main_f_d040b0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

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

// sub_d05d10  (orig 0xd05d10, tailcall)
uint64_t main_f_d05d10(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d05d20  (orig 0xd05d20, tailcall)
uint64_t main_f_d05d20(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d05d30  (orig 0xd05d30, tailcall)
void main_f_d05d30() { main::sub_13f6d80(); }

// sub_d05d40  (orig 0xd05d40, tailcall)
void main_f_d05d40() { main::sub_13f6d80(); }

// sub_d05d50  (orig 0xd05d50, tailcall)
uint64_t main_f_d05d50(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d05d60  (orig 0xd05d60, tailcall)
uint64_t main_f_d05d60(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d05e60  (orig 0xd05e60, tailcall)
void main_f_d05e60() { main::sub_978cf0(); }

// sub_d05e70  (orig 0xd05e70, tailcall)
void main_f_d05e70() { main::sub_d05ee0(); }

// sub_d05e80  (orig 0xd05e80, tailcall)
uint64_t main_f_d05e80(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d05e90  (orig 0xd05e90, tailcall)
uint64_t main_f_d05e90(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d05ea0  (orig 0xd05ea0, tailcall)
void main_f_d05ea0() { main::sub_d05ee0(); }

// sub_d05eb0  (orig 0xd05eb0, tailcall)
void main_f_d05eb0() { main::sub_d05ee0(); }

// sub_d05ec0  (orig 0xd05ec0, tailcall)
uint64_t main_f_d05ec0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d05ed0  (orig 0xd05ed0, tailcall)
uint64_t main_f_d05ed0(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d08550  (orig 0xd08550, tailcall)
void main_f_d08550() { main::sub_d086c0(); }

// sub_d08600  (orig 0xd08600, tailcall)
void main_f_d08600() { main::sub_d086c0(); }

// sub_d08610  (orig 0xd08610, tailcall)
void main_f_d08610() { main::sub_d086c0(); }

// sub_d0b570  (orig 0xd0b570, tailcall)
uint64_t main_f_d0b570(void* a0) {
    return main::sub_5c89c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 680))));
}

// sub_d0c2b0  (orig 0xd0c2b0, tailcall)
void main_f_d0c2b0() { main::sub_d0c100(); }

// sub_d0c3b0  (orig 0xd0c3b0, tailcall)
uint64_t main_f_d0c3b0(void* a0) {
    return main::sub_d0c100(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d0c3c0  (orig 0xd0c3c0, tailcall)
uint64_t main_f_d0c3c0(void* a0) {
    return main::sub_d0c100(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d0c5b0  (orig 0xd0c5b0, tailcall)
uint64_t main_f_d0c5b0(void* a0) {
    return main::sub_d0c100(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d0c5c0  (orig 0xd0c5c0, tailcall)
uint64_t main_f_d0c5c0(void* a0) {
    return main::sub_d0c100(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d0ee50  (orig 0xd0ee50, tailcall)
void main_f_d0ee50() { main::sub_d0f0c0(); }

// sub_d0ef80  (orig 0xd0ef80, tailcall)
void main_f_d0ef80() { main::sub_d0f0c0(); }

// sub_d0ef90  (orig 0xd0ef90, tailcall)
void main_f_d0ef90() { main::sub_d0f0c0(); }

// sub_d0ff20  (orig 0xd0ff20, tailcall)
void main_f_d0ff20() { main::sub_c69450(); }

// sub_d0ffb0  (orig 0xd0ffb0, tailcall)
uint64_t main_f_d0ffb0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d0ffc0  (orig 0xd0ffc0, tailcall)
uint64_t main_f_d0ffc0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d100b0  (orig 0xd100b0, tailcall)
uint64_t main_f_d100b0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d100c0  (orig 0xd100c0, tailcall)
uint64_t main_f_d100c0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d13290  (orig 0xd13290, tailcall)
uint64_t main_f_d13290(void* a0) {
    return main::sub_68d9b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 2720))));
}

// sub_d13670  (orig 0xd13670, tailcall)
void main_f_d13670() { main::sub_d13470(); }

// sub_d13680  (orig 0xd13680, tailcall)
void main_f_d13680() { main::sub_d137f0(); }

// sub_d136a0  (orig 0xd136a0, tailcall)
uint64_t main_f_d136a0(void* a0) {
    return main::sub_d13470(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d136b0  (orig 0xd136b0, tailcall)
uint64_t main_f_d136b0(void* a0) {
    return main::sub_d13470(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d136c0  (orig 0xd136c0, tailcall)
void main_f_d136c0() { main::sub_d137f0(); }

// sub_d136d0  (orig 0xd136d0, tailcall)
void main_f_d136d0() { main::sub_d137f0(); }

// sub_d136e0  (orig 0xd136e0, tailcall)
uint64_t main_f_d136e0(void* a0) {
    return main::sub_d13470(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d136f0  (orig 0xd136f0, tailcall)
uint64_t main_f_d136f0(void* a0) {
    return main::sub_d13470(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d2e090  (orig 0xd2e090, tailcall)
void main_f_d2e090() { main::sub_d2df30(); }

// sub_d2e0a0  (orig 0xd2e0a0, tailcall)
uint64_t main_f_d2e0a0(void* a0) {
    return main::sub_d2df30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d2e0b0  (orig 0xd2e0b0, tailcall)
uint64_t main_f_d2e0b0(void* a0) {
    return main::sub_d2df30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d33e40  (orig 0xd33e40, tailcall)
uint64_t main_f_d33e40(void* a0) {
    return main::sub_d33e50(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_d347b0  (orig 0xd347b0, tailcall)
void main_f_d347b0() { main::sub_ce0(); }

// sub_d34830  (orig 0xd34830, tailcall)
void main_f_d34830() { main::sub_c69450(); }

// sub_d348b0  (orig 0xd348b0, tailcall)
uint64_t main_f_d348b0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d348c0  (orig 0xd348c0, tailcall)
uint64_t main_f_d348c0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d349b0  (orig 0xd349b0, tailcall)
uint64_t main_f_d349b0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d349c0  (orig 0xd349c0, tailcall)
uint64_t main_f_d349c0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d36dd0  (orig 0xd36dd0, tailcall)
void main_f_d36dd0() { main::sub_d36c70(); }

// sub_d36e60  (orig 0xd36e60, tailcall)
uint64_t main_f_d36e60(void* a0) {
    return main::sub_d36c70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d36e70  (orig 0xd36e70, tailcall)
uint64_t main_f_d36e70(void* a0) {
    return main::sub_d36c70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d36f60  (orig 0xd36f60, tailcall)
uint64_t main_f_d36f60(void* a0) {
    return main::sub_d36c70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d36f70  (orig 0xd36f70, tailcall)
uint64_t main_f_d36f70(void* a0) {
    return main::sub_d36c70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d3b8a0  (orig 0xd3b8a0, tailcall)
void main_f_d3b8a0() { main::sub_c642d0(); }

// sub_d3c360  (orig 0xd3c360, tailcall)
uint64_t main_f_d3c360(void* a0) {
    return main::sub_c8f0b0(((uintptr_t)((char*)(a0) + 928)));
}

// sub_d3c370  (orig 0xd3c370, tailcall)
uint64_t main_f_d3c370(void* a0) {
    return main::sub_c8f230(((uintptr_t)((char*)(a0) + 928)));
}

// sub_d42e80  (orig 0xd42e80, tailcall)
void main_f_d42e80() { main::sub_cf2010(); }

// sub_d486c0  (orig 0xd486c0, tailcall)
void main_f_d486c0() { main::sub_d48430(); }

// sub_d48750  (orig 0xd48750, tailcall)
uint64_t main_f_d48750(void* a0) {
    return main::sub_d48430(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d48760  (orig 0xd48760, tailcall)
uint64_t main_f_d48760(void* a0) {
    return main::sub_d48430(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d48950  (orig 0xd48950, tailcall)
uint64_t main_f_d48950(void* a0) {
    return main::sub_d48430(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d48960  (orig 0xd48960, tailcall)
uint64_t main_f_d48960(void* a0) {
    return main::sub_d48430(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d4a880  (orig 0xd4a880, tailcall)
void main_f_d4a880() { main::sub_ce0(); }

// sub_d4a900  (orig 0xd4a900, tailcall)
void main_f_d4a900() { main::sub_ce0(); }

// sub_d4fbb0  (orig 0xd4fbb0, tailcall)
uint64_t main_f_d4fbb0(void* a0) {
    return main::sub_116f1d0(((uintptr_t)((char*)(a0) + 2048)));
}

// sub_d4fd30  (orig 0xd4fd30, tailcall)
void main_f_d4fd30() { main::sub_d4fc20(); }

// sub_d4fdf0  (orig 0xd4fdf0, tailcall)
uint64_t main_f_d4fdf0(void* a0) {
    return main::sub_d4fc20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d4fe00  (orig 0xd4fe00, tailcall)
uint64_t main_f_d4fe00(void* a0) {
    return main::sub_d4fc20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d4ff70  (orig 0xd4ff70, tailcall)
uint64_t main_f_d4ff70(void* a0) {
    return main::sub_d4fc20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d4ff80  (orig 0xd4ff80, tailcall)
uint64_t main_f_d4ff80(void* a0) {
    return main::sub_d4fc20(((uintptr_t)((char*)(a0) - 80)));
}

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

// sub_d50440  (orig 0xd50440, tailcall)
uint64_t main_f_d50440(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d50450  (orig 0xd50450, tailcall)
uint64_t main_f_d50450(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d50460  (orig 0xd50460, tailcall)
void main_f_d50460() { main::sub_d504a0(); }

// sub_d50470  (orig 0xd50470, tailcall)
void main_f_d50470() { main::sub_d504a0(); }

// sub_d50480  (orig 0xd50480, tailcall)
uint64_t main_f_d50480(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d50490  (orig 0xd50490, tailcall)
uint64_t main_f_d50490(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d50e90  (orig 0xd50e90, tailcall)
void main_f_d50e90() { main::sub_d50d90(); }

// sub_d50fd0  (orig 0xd50fd0, tailcall)
uint64_t main_f_d50fd0(void* a0) {
    return main::sub_d50d90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d50fe0  (orig 0xd50fe0, tailcall)
uint64_t main_f_d50fe0(void* a0) {
    return main::sub_d50d90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d510d0  (orig 0xd510d0, tailcall)
uint64_t main_f_d510d0(void* a0) {
    return main::sub_d50d90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d510e0  (orig 0xd510e0, tailcall)
uint64_t main_f_d510e0(void* a0) {
    return main::sub_d50d90(((uintptr_t)((char*)(a0) - 80)));
}

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

// sub_d51a40  (orig 0xd51a40, tailcall)
uint64_t main_f_d51a40(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d51a50  (orig 0xd51a50, tailcall)
uint64_t main_f_d51a50(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d51a60  (orig 0xd51a60, tailcall)
void main_f_d51a60() { main::sub_d51aa0(); }

// sub_d51a70  (orig 0xd51a70, tailcall)
void main_f_d51a70() { main::sub_d51aa0(); }

// sub_d51a80  (orig 0xd51a80, tailcall)
uint64_t main_f_d51a80(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d51a90  (orig 0xd51a90, tailcall)
uint64_t main_f_d51a90(void* a0) {
    return main::sub_978cf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d51c40  (orig 0xd51c40, tailcall)
void main_f_d51c40() { main::sub_c69450(); }

// sub_d51cc0  (orig 0xd51cc0, tailcall)
uint64_t main_f_d51cc0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d51cd0  (orig 0xd51cd0, tailcall)
uint64_t main_f_d51cd0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d51dc0  (orig 0xd51dc0, tailcall)
uint64_t main_f_d51dc0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d51dd0  (orig 0xd51dd0, tailcall)
uint64_t main_f_d51dd0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

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

// sub_d5c360  (orig 0xd5c360, tailcall)
uint64_t main_f_d5c360(void* a0) {
    return main::sub_d5c100(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d5c370  (orig 0xd5c370, tailcall)
uint64_t main_f_d5c370(void* a0) {
    return main::sub_d5c100(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d5c4e0  (orig 0xd5c4e0, tailcall)
uint64_t main_f_d5c4e0(void* a0) {
    return main::sub_d5c100(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d5c4f0  (orig 0xd5c4f0, tailcall)
uint64_t main_f_d5c4f0(void* a0) {
    return main::sub_d5c100(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d5f540  (orig 0xd5f540, tailcall)
void main_f_d5f540() { main::sub_c72e70(); }

// sub_d5f830  (orig 0xd5f830, tailcall)
void main_f_d5f830() { main::sub_c73630(); }

// sub_d5fdb0  (orig 0xd5fdb0, tailcall)
void main_f_d5fdb0() { main::sub_c73f50(); }

// sub_d5fdc0  (orig 0xd5fdc0, tailcall)
void main_f_d5fdc0() { main::sub_13f67a0(); }

// sub_d5fdd0  (orig 0xd5fdd0, tailcall)
uint64_t main_f_d5fdd0(void* a0) {
    return main::sub_c73f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d5fde0  (orig 0xd5fde0, tailcall)
uint64_t main_f_d5fde0(void* a0) {
    return main::sub_c73f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d5fdf0  (orig 0xd5fdf0, tailcall)
void main_f_d5fdf0() { main::sub_13f67a0(); }

// sub_d5fe00  (orig 0xd5fe00, tailcall)
void main_f_d5fe00() { main::sub_13f67a0(); }

// sub_d5fe10  (orig 0xd5fe10, tailcall)
uint64_t main_f_d5fe10(void* a0) {
    return main::sub_c73f50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d5fe20  (orig 0xd5fe20, tailcall)
uint64_t main_f_d5fe20(void* a0) {
    return main::sub_c73f50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d616d0  (orig 0xd616d0, tailcall)
void main_f_d616d0() { main::sub_d616e0(); }

// sub_d63950  (orig 0xd63950, tailcall)
void main_f_d63950() { main::sub_13eb080(); }

// sub_d63a80  (orig 0xd63a80, tailcall)
void main_f_d63a80() { main::sub_13eb080(); }

// sub_d63a90  (orig 0xd63a90, tailcall)
void main_f_d63a90() { main::sub_13eb080(); }

// sub_d64210  (orig 0xd64210, tailcall)
void main_f_d64210() { main::sub_e9d210(); }

// sub_d64220  (orig 0xd64220, tailcall)
void main_f_d64220() { main::sub_d64290(); }

// sub_d64230  (orig 0xd64230, tailcall)
uint64_t main_f_d64230(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d64240  (orig 0xd64240, tailcall)
uint64_t main_f_d64240(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d64250  (orig 0xd64250, tailcall)
void main_f_d64250() { main::sub_d64290(); }

// sub_d64260  (orig 0xd64260, tailcall)
void main_f_d64260() { main::sub_d64290(); }

// sub_d64270  (orig 0xd64270, tailcall)
uint64_t main_f_d64270(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d64280  (orig 0xd64280, tailcall)
uint64_t main_f_d64280(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d67f60  (orig 0xd67f60, tailcall)
void main_f_d67f60() { main::sub_d68110(); }

// sub_d68030  (orig 0xd68030, tailcall)
void main_f_d68030() { main::sub_d68110(); }

// sub_d68040  (orig 0xd68040, tailcall)
void main_f_d68040() { main::sub_d68110(); }

// sub_d68330  (orig 0xd68330, tailcall)
void main_f_d68330() { main::sub_ce0(); }

// sub_d68390  (orig 0xd68390, tailcall)
void main_f_d68390() { main::sub_ce0(); }

// sub_d685f0  (orig 0xd685f0, tailcall)
void main_f_d685f0() { main::sub_ce0(); }

// sub_d68650  (orig 0xd68650, tailcall)
void main_f_d68650() { main::sub_ce0(); }

// sub_d6a350  (orig 0xd6a350, tailcall)
void main_f_d6a350() { main::sub_d6a280(); }

// sub_d6a3e0  (orig 0xd6a3e0, tailcall)
uint64_t main_f_d6a3e0(void* a0) {
    return main::sub_d6a280(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d6a3f0  (orig 0xd6a3f0, tailcall)
uint64_t main_f_d6a3f0(void* a0) {
    return main::sub_d6a280(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d6a5e0  (orig 0xd6a5e0, tailcall)
uint64_t main_f_d6a5e0(void* a0) {
    return main::sub_d6a280(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d6a5f0  (orig 0xd6a5f0, tailcall)
uint64_t main_f_d6a5f0(void* a0) {
    return main::sub_d6a280(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d6bf30  (orig 0xd6bf30, tailcall)
void main_f_d6bf30() { main::sub_d6c120(); }

// sub_d6c020  (orig 0xd6c020, tailcall)
void main_f_d6c020() { main::sub_d6c120(); }

// sub_d6c030  (orig 0xd6c030, tailcall)
void main_f_d6c030() { main::sub_d6c120(); }

// sub_d6c900  (orig 0xd6c900, tailcall)
void main_f_d6c900() { main::sub_d6c930(); }

// sub_d6c910  (orig 0xd6c910, tailcall)
void main_f_d6c910() { main::sub_d6c930(); }

// sub_d6c920  (orig 0xd6c920, tailcall)
void main_f_d6c920() { main::sub_d6c930(); }

// sub_d6d0e0  (orig 0xd6d0e0, tailcall)
void main_f_d6d0e0() { main::sub_e9d210(); }

// sub_d6d160  (orig 0xd6d160, tailcall)
uint64_t main_f_d6d160(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d6d170  (orig 0xd6d170, tailcall)
uint64_t main_f_d6d170(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d6d260  (orig 0xd6d260, tailcall)
uint64_t main_f_d6d260(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d6d270  (orig 0xd6d270, tailcall)
uint64_t main_f_d6d270(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d6d590  (orig 0xd6d590, tailcall)
uint64_t main_f_d6d590(void* a0) {
    return main::sub_d6d5a0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_d6e230  (orig 0xd6e230, tailcall)
void main_f_d6e230() { main::sub_d6e3e0(); }

// sub_d6e300  (orig 0xd6e300, tailcall)
void main_f_d6e300() { main::sub_d6e3e0(); }

// sub_d6e310  (orig 0xd6e310, tailcall)
void main_f_d6e310() { main::sub_d6e3e0(); }

// sub_d6ea60  (orig 0xd6ea60, tailcall)
void main_f_d6ea60() { main::sub_d6ec10(); }

// sub_d6eb30  (orig 0xd6eb30, tailcall)
void main_f_d6eb30() { main::sub_d6ec10(); }

// sub_d6eb40  (orig 0xd6eb40, tailcall)
void main_f_d6eb40() { main::sub_d6ec10(); }

// sub_d6f4f0  (orig 0xd6f4f0, tailcall)
uint64_t main_f_d6f4f0(void* a0) {
    return main::sub_d6f3d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d6f500  (orig 0xd6f500, tailcall)
uint64_t main_f_d6f500(void* a0) {
    return main::sub_d6f3d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d6f510  (orig 0xd6f510, tailcall)
void main_f_d6f510() { main::sub_d6f3d0(); }

// sub_d6f520  (orig 0xd6f520, tailcall)
uint64_t main_f_d6f520(void* a0) {
    return main::sub_d6f3d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d6f530  (orig 0xd6f530, tailcall)
uint64_t main_f_d6f530(void* a0) {
    return main::sub_d6f3d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d70030  (orig 0xd70030, tailcall)
void main_f_d70030() { main::sub_d70060(); }

// sub_d70040  (orig 0xd70040, tailcall)
void main_f_d70040() { main::sub_d70060(); }

// sub_d70050  (orig 0xd70050, tailcall)
void main_f_d70050() { main::sub_d70060(); }

// sub_d70660  (orig 0xd70660, tailcall)
void main_f_d70660() { main::sub_d703b0(); }

// sub_d71f30  (orig 0xd71f30, tailcall)
void main_f_d71f30() { main::sub_e9d210(); }

// sub_d71f40  (orig 0xd71f40, tailcall)
void main_f_d71f40() { main::sub_d71fb0(); }

// sub_d71f50  (orig 0xd71f50, tailcall)
uint64_t main_f_d71f50(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d71f60  (orig 0xd71f60, tailcall)
uint64_t main_f_d71f60(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d71f70  (orig 0xd71f70, tailcall)
void main_f_d71f70() { main::sub_d71fb0(); }

// sub_d71f80  (orig 0xd71f80, tailcall)
void main_f_d71f80() { main::sub_d71fb0(); }

// sub_d71f90  (orig 0xd71f90, tailcall)
uint64_t main_f_d71f90(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d71fa0  (orig 0xd71fa0, tailcall)
uint64_t main_f_d71fa0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d729d0  (orig 0xd729d0, tailcall)
void main_f_d729d0() { main::sub_d72a00(); }

// sub_d729e0  (orig 0xd729e0, tailcall)
void main_f_d729e0() { main::sub_d72a00(); }

// sub_d729f0  (orig 0xd729f0, tailcall)
void main_f_d729f0() { main::sub_d72a00(); }

// sub_d732d0  (orig 0xd732d0, tailcall)
void main_f_d732d0() { main::sub_d73300(); }

// sub_d732e0  (orig 0xd732e0, tailcall)
void main_f_d732e0() { main::sub_d73300(); }

// sub_d732f0  (orig 0xd732f0, tailcall)
void main_f_d732f0() { main::sub_d73300(); }

// sub_d7ba20  (orig 0xd7ba20, tailcall)
void main_f_d7ba20() { main::sub_d7bbd0(); }

// sub_d7baf0  (orig 0xd7baf0, tailcall)
void main_f_d7baf0() { main::sub_d7bbd0(); }

// sub_d7bb00  (orig 0xd7bb00, tailcall)
void main_f_d7bb00() { main::sub_d7bbd0(); }

// sub_d7e3e0  (orig 0xd7e3e0, tailcall)
void main_f_d7e3e0() { main::sub_e9d210(); }

// sub_d7e3f0  (orig 0xd7e3f0, tailcall)
uint64_t main_f_d7e3f0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d7e400  (orig 0xd7e400, tailcall)
uint64_t main_f_d7e400(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d7e410  (orig 0xd7e410, tailcall)
void main_f_d7e410() { main::sub_e9d210(); }

// sub_d7e420  (orig 0xd7e420, tailcall)
uint64_t main_f_d7e420(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d7e430  (orig 0xd7e430, tailcall)
uint64_t main_f_d7e430(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d7e710  (orig 0xd7e710, tailcall)
void main_f_d7e710() { main::sub_d7e740(); }

// sub_d7e720  (orig 0xd7e720, tailcall)
void main_f_d7e720() { main::sub_d7e740(); }

// sub_d7e730  (orig 0xd7e730, tailcall)
void main_f_d7e730() { main::sub_d7e740(); }

// sub_d84290  (orig 0xd84290, tailcall)
void main_f_d84290() { main::sub_d842c0(); }

// sub_d842a0  (orig 0xd842a0, tailcall)
void main_f_d842a0() { main::sub_d842c0(); }

// sub_d842b0  (orig 0xd842b0, tailcall)
void main_f_d842b0() { main::sub_d842c0(); }

// sub_d848f0  (orig 0xd848f0, tailcall)
void main_f_d848f0() { main::sub_e9d210(); }

// sub_d84900  (orig 0xd84900, tailcall)
void main_f_d84900() { main::sub_d84970(); }

// sub_d84910  (orig 0xd84910, tailcall)
uint64_t main_f_d84910(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d84920  (orig 0xd84920, tailcall)
uint64_t main_f_d84920(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d84930  (orig 0xd84930, tailcall)
void main_f_d84930() { main::sub_d84970(); }

// sub_d84940  (orig 0xd84940, tailcall)
void main_f_d84940() { main::sub_d84970(); }

// sub_d84950  (orig 0xd84950, tailcall)
uint64_t main_f_d84950(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d84960  (orig 0xd84960, tailcall)
uint64_t main_f_d84960(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d896e0  (orig 0xd896e0, tailcall)
void main_f_d896e0() { main::sub_d89550(); }

// sub_d89770  (orig 0xd89770, tailcall)
uint64_t main_f_d89770(void* a0) {
    return main::sub_d89550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d89780  (orig 0xd89780, tailcall)
uint64_t main_f_d89780(void* a0) {
    return main::sub_d89550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d89870  (orig 0xd89870, tailcall)
uint64_t main_f_d89870(void* a0) {
    return main::sub_d89550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d89880  (orig 0xd89880, tailcall)
uint64_t main_f_d89880(void* a0) {
    return main::sub_d89550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d94900  (orig 0xd94900, tailcall)
void main_f_d94900() { main::sub_d94ab0(); }

// sub_d949d0  (orig 0xd949d0, tailcall)
void main_f_d949d0() { main::sub_d94ab0(); }

// sub_d949e0  (orig 0xd949e0, tailcall)
void main_f_d949e0() { main::sub_d94ab0(); }

// sub_d95110  (orig 0xd95110, tailcall)
void main_f_d95110() { main::sub_e9d210(); }

// sub_d95120  (orig 0xd95120, tailcall)
void main_f_d95120() { main::sub_d95190(); }

// sub_d95130  (orig 0xd95130, tailcall)
uint64_t main_f_d95130(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d95140  (orig 0xd95140, tailcall)
uint64_t main_f_d95140(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d95150  (orig 0xd95150, tailcall)
void main_f_d95150() { main::sub_d95190(); }

// sub_d95160  (orig 0xd95160, tailcall)
void main_f_d95160() { main::sub_d95190(); }

// sub_d95170  (orig 0xd95170, tailcall)
uint64_t main_f_d95170(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d95180  (orig 0xd95180, tailcall)
uint64_t main_f_d95180(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d96210  (orig 0xd96210, tailcall)
void main_f_d96210() { main::sub_d963c0(); }

// sub_d962e0  (orig 0xd962e0, tailcall)
void main_f_d962e0() { main::sub_d963c0(); }

// sub_d962f0  (orig 0xd962f0, tailcall)
void main_f_d962f0() { main::sub_d963c0(); }

// sub_d98d50  (orig 0xd98d50, tailcall)
uint64_t main_f_d98d50(void* a0) {
    return main::sub_d98c60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d98d60  (orig 0xd98d60, tailcall)
uint64_t main_f_d98d60(void* a0) {
    return main::sub_d98c60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d9b9c0  (orig 0xd9b9c0, tailcall)
void main_f_d9b9c0() { main::sub_d9b8f0(); }

// sub_d9ba40  (orig 0xd9ba40, tailcall)
uint64_t main_f_d9ba40(void* a0) {
    return main::sub_d9b8f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d9ba50  (orig 0xd9ba50, tailcall)
uint64_t main_f_d9ba50(void* a0) {
    return main::sub_d9b8f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_d9bb40  (orig 0xd9bb40, tailcall)
uint64_t main_f_d9bb40(void* a0) {
    return main::sub_d9b8f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d9bb50  (orig 0xd9bb50, tailcall)
uint64_t main_f_d9bb50(void* a0) {
    return main::sub_d9b8f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_d9c590  (orig 0xd9c590, tailcall)
void main_f_d9c590() { main::sub_d9c840(); }

// sub_d9c6e0  (orig 0xd9c6e0, tailcall)
void main_f_d9c6e0() { main::sub_d9c840(); }

// sub_d9c6f0  (orig 0xd9c6f0, tailcall)
void main_f_d9c6f0() { main::sub_d9c840(); }

// sub_da0310  (orig 0xda0310, tailcall)
void main_f_da0310() { main::sub_da0210(); }

// sub_da0320  (orig 0xda0320, tailcall)
void main_f_da0320() { main::sub_da1430(); }

// sub_da0330  (orig 0xda0330, tailcall)
uint64_t main_f_da0330(void* a0) {
    return main::sub_da0210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da0340  (orig 0xda0340, tailcall)
uint64_t main_f_da0340(void* a0) {
    return main::sub_da0210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da0350  (orig 0xda0350, tailcall)
void main_f_da0350() { main::sub_da1430(); }

// sub_da0360  (orig 0xda0360, tailcall)
void main_f_da0360() { main::sub_da1430(); }

// sub_da0370  (orig 0xda0370, tailcall)
uint64_t main_f_da0370(void* a0) {
    return main::sub_da0210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da0380  (orig 0xda0380, tailcall)
uint64_t main_f_da0380(void* a0) {
    return main::sub_da0210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da2e20  (orig 0xda2e20, tailcall)
void main_f_da2e20() { main::sub_e9d210(); }

// sub_da2e30  (orig 0xda2e30, tailcall)
uint64_t main_f_da2e30(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da2e40  (orig 0xda2e40, tailcall)
uint64_t main_f_da2e40(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da2e50  (orig 0xda2e50, tailcall)
void main_f_da2e50() { main::sub_e9d210(); }

// sub_da2e60  (orig 0xda2e60, tailcall)
uint64_t main_f_da2e60(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da2e70  (orig 0xda2e70, tailcall)
uint64_t main_f_da2e70(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da30e0  (orig 0xda30e0, tailcall)
void main_f_da30e0() { main::sub_da3110(); }

// sub_da30f0  (orig 0xda30f0, tailcall)
void main_f_da30f0() { main::sub_da3110(); }

// sub_da3100  (orig 0xda3100, tailcall)
void main_f_da3100() { main::sub_da3110(); }

// sub_da34b0  (orig 0xda34b0, tailcall)
void main_f_da34b0() { main::sub_e9d210(); }

// sub_da3530  (orig 0xda3530, tailcall)
uint64_t main_f_da3530(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da3540  (orig 0xda3540, tailcall)
uint64_t main_f_da3540(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da3630  (orig 0xda3630, tailcall)
uint64_t main_f_da3630(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da3640  (orig 0xda3640, tailcall)
uint64_t main_f_da3640(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da4fb0  (orig 0xda4fb0, tailcall)
uint64_t main_f_da4fb0(void* a0) {
    return main::sub_da4e70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da4fc0  (orig 0xda4fc0, tailcall)
uint64_t main_f_da4fc0(void* a0) {
    return main::sub_da4e70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da4fd0  (orig 0xda4fd0, tailcall)
void main_f_da4fd0() { main::sub_da4e70(); }

// sub_da4fe0  (orig 0xda4fe0, tailcall)
uint64_t main_f_da4fe0(void* a0) {
    return main::sub_da4e70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da4ff0  (orig 0xda4ff0, tailcall)
uint64_t main_f_da4ff0(void* a0) {
    return main::sub_da4e70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da57a0  (orig 0xda57a0, tailcall)
void main_f_da57a0() { main::sub_da57d0(); }

// sub_da57b0  (orig 0xda57b0, tailcall)
void main_f_da57b0() { main::sub_da57d0(); }

// sub_da57c0  (orig 0xda57c0, tailcall)
void main_f_da57c0() { main::sub_da57d0(); }

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

// sub_da6370  (orig 0xda6370, tailcall)
uint64_t main_f_da6370(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da6380  (orig 0xda6380, tailcall)
uint64_t main_f_da6380(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da6390  (orig 0xda6390, tailcall)
void main_f_da6390() { main::sub_da63d0(); }

// sub_da63a0  (orig 0xda63a0, tailcall)
void main_f_da63a0() { main::sub_da63d0(); }

// sub_da63b0  (orig 0xda63b0, tailcall)
uint64_t main_f_da63b0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da63c0  (orig 0xda63c0, tailcall)
uint64_t main_f_da63c0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da6bc0  (orig 0xda6bc0, tailcall)
void main_f_da6bc0() { main::sub_da6d70(); }

// sub_da6c90  (orig 0xda6c90, tailcall)
void main_f_da6c90() { main::sub_da6d70(); }

// sub_da6ca0  (orig 0xda6ca0, tailcall)
void main_f_da6ca0() { main::sub_da6d70(); }

// sub_da7750  (orig 0xda7750, tailcall)
void main_f_da7750() { main::sub_e9d210(); }

// sub_da7760  (orig 0xda7760, tailcall)
void main_f_da7760() { main::sub_da77d0(); }

// sub_da7770  (orig 0xda7770, tailcall)
uint64_t main_f_da7770(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da7780  (orig 0xda7780, tailcall)
uint64_t main_f_da7780(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da7790  (orig 0xda7790, tailcall)
void main_f_da7790() { main::sub_da77d0(); }

// sub_da77a0  (orig 0xda77a0, tailcall)
void main_f_da77a0() { main::sub_da77d0(); }

// sub_da77b0  (orig 0xda77b0, tailcall)
uint64_t main_f_da77b0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da77c0  (orig 0xda77c0, tailcall)
uint64_t main_f_da77c0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da7cb0  (orig 0xda7cb0, tailcall)
void main_f_da7cb0() { main::sub_e9d210(); }

// sub_da7cc0  (orig 0xda7cc0, tailcall)
uint64_t main_f_da7cc0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da7cd0  (orig 0xda7cd0, tailcall)
uint64_t main_f_da7cd0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da7ce0  (orig 0xda7ce0, tailcall)
void main_f_da7ce0() { main::sub_e9d210(); }

// sub_da7cf0  (orig 0xda7cf0, tailcall)
uint64_t main_f_da7cf0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da7d00  (orig 0xda7d00, tailcall)
uint64_t main_f_da7d00(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da7ee0  (orig 0xda7ee0, tailcall)
void main_f_da7ee0() { main::sub_da7f10(); }

// sub_da7ef0  (orig 0xda7ef0, tailcall)
void main_f_da7ef0() { main::sub_da7f10(); }

// sub_da7f00  (orig 0xda7f00, tailcall)
void main_f_da7f00() { main::sub_da7f10(); }

// sub_da8730  (orig 0xda8730, tailcall)
void main_f_da8730() { main::sub_e9d210(); }

// sub_da8740  (orig 0xda8740, tailcall)
void main_f_da8740() { main::sub_da87b0(); }

// sub_da8750  (orig 0xda8750, tailcall)
uint64_t main_f_da8750(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da8760  (orig 0xda8760, tailcall)
uint64_t main_f_da8760(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da8770  (orig 0xda8770, tailcall)
void main_f_da8770() { main::sub_da87b0(); }

// sub_da8780  (orig 0xda8780, tailcall)
void main_f_da8780() { main::sub_da87b0(); }

// sub_da8790  (orig 0xda8790, tailcall)
uint64_t main_f_da8790(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da87a0  (orig 0xda87a0, tailcall)
uint64_t main_f_da87a0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da8ec0  (orig 0xda8ec0, tailcall)
void main_f_da8ec0() { main::sub_da9070(); }

// sub_da8f90  (orig 0xda8f90, tailcall)
void main_f_da8f90() { main::sub_da9070(); }

// sub_da8fa0  (orig 0xda8fa0, tailcall)
void main_f_da8fa0() { main::sub_da9070(); }

// sub_da9f40  (orig 0xda9f40, tailcall)
uint64_t main_f_da9f40(void* a0) {
    return main::sub_da9bf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da9f50  (orig 0xda9f50, tailcall)
uint64_t main_f_da9f50(void* a0) {
    return main::sub_da9bf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_da9f60  (orig 0xda9f60, tailcall)
void main_f_da9f60() { main::sub_da9bf0(); }

// sub_da9f70  (orig 0xda9f70, tailcall)
uint64_t main_f_da9f70(void* a0) {
    return main::sub_da9bf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_da9f80  (orig 0xda9f80, tailcall)
uint64_t main_f_da9f80(void* a0) {
    return main::sub_da9bf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dac4d0  (orig 0xdac4d0, tailcall)
void main_f_dac4d0() { main::FE_G_IWA_KORI_HOLE(); }

// sub_daed40  (orig 0xdaed40, tailcall)
void main_f_daed40() { main::sub_e9d210(); }

// sub_daed50  (orig 0xdaed50, tailcall)
void main_f_daed50() { main::sub_daedc0(); }

// sub_daed60  (orig 0xdaed60, tailcall)
uint64_t main_f_daed60(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_daed70  (orig 0xdaed70, tailcall)
uint64_t main_f_daed70(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_daed80  (orig 0xdaed80, tailcall)
void main_f_daed80() { main::sub_daedc0(); }

// sub_daed90  (orig 0xdaed90, tailcall)
void main_f_daed90() { main::sub_daedc0(); }

// sub_daeda0  (orig 0xdaeda0, tailcall)
uint64_t main_f_daeda0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_daedb0  (orig 0xdaedb0, tailcall)
uint64_t main_f_daedb0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_db30d0  (orig 0xdb30d0, tailcall)
void main_f_db30d0() { main::top_k_glove_joint(); }

// sub_db3e40  (orig 0xdb3e40, tailcall)
void main_f_db3e40() { main::sub_db3ca0(); }

// sub_db3ec0  (orig 0xdb3ec0, tailcall)
uint64_t main_f_db3ec0(void* a0) {
    return main::sub_db3ca0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_db3ed0  (orig 0xdb3ed0, tailcall)
uint64_t main_f_db3ed0(void* a0) {
    return main::sub_db3ca0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_db3fc0  (orig 0xdb3fc0, tailcall)
uint64_t main_f_db3fc0(void* a0) {
    return main::sub_db3ca0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_db3fd0  (orig 0xdb3fd0, tailcall)
uint64_t main_f_db3fd0(void* a0) {
    return main::sub_db3ca0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_db5170  (orig 0xdb5170, tailcall)
void main_f_db5170() { main::sub_db5380(); }

// sub_db5280  (orig 0xdb5280, tailcall)
void main_f_db5280() { main::sub_db5380(); }

// sub_db5290  (orig 0xdb5290, tailcall)
void main_f_db5290() { main::sub_db5380(); }

// sub_dbdc40  (orig 0xdbdc40, tailcall)
void main_f_dbdc40() { main::sub_dbd810(); }

// sub_dbdcc0  (orig 0xdbdcc0, tailcall)
uint64_t main_f_dbdcc0(void* a0) {
    return main::sub_dbd810(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dbdcd0  (orig 0xdbdcd0, tailcall)
uint64_t main_f_dbdcd0(void* a0) {
    return main::sub_dbd810(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dbddc0  (orig 0xdbddc0, tailcall)
uint64_t main_f_dbddc0(void* a0) {
    return main::sub_dbd810(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dbddd0  (orig 0xdbddd0, tailcall)
uint64_t main_f_dbddd0(void* a0) {
    return main::sub_dbd810(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dc1f10  (orig 0xdc1f10, tailcall)
void main_f_dc1f10() { main::sub_dc2200(); }

// sub_dc2000  (orig 0xdc2000, tailcall)
void main_f_dc2000() { main::sub_dc2200(); }

// sub_dc2010  (orig 0xdc2010, tailcall)
void main_f_dc2010() { main::sub_dc2200(); }

// sub_dc7690  (orig 0xdc7690, tailcall)
void main_f_dc7690() { main::Set_State_t0401_Switch_Yellow_b(); }

// sub_dc8a80  (orig 0xdc8a80, tailcall)
void main_f_dc8a80() { main::sub_e9d210(); }

// sub_dc8a90  (orig 0xdc8a90, tailcall)
void main_f_dc8a90() { main::sub_dc8b00(); }

// sub_dc8aa0  (orig 0xdc8aa0, tailcall)
uint64_t main_f_dc8aa0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dc8ab0  (orig 0xdc8ab0, tailcall)
uint64_t main_f_dc8ab0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dc8ac0  (orig 0xdc8ac0, tailcall)
void main_f_dc8ac0() { main::sub_dc8b00(); }

// sub_dc8ad0  (orig 0xdc8ad0, tailcall)
void main_f_dc8ad0() { main::sub_dc8b00(); }

// sub_dc8ae0  (orig 0xdc8ae0, tailcall)
uint64_t main_f_dc8ae0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dc8af0  (orig 0xdc8af0, tailcall)
uint64_t main_f_dc8af0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dca3b0  (orig 0xdca3b0, tailcall)
void main_f_dca3b0() { main::kinoko_light(); }

// sub_dce280  (orig 0xdce280, tailcall)
void main_f_dce280() { main::sub_c69450(); }

// sub_dce290  (orig 0xdce290, tailcall)
void main_f_dce290() { main::sub_dce9d0(); }

// sub_dce6f0  (orig 0xdce6f0, tailcall)
uint64_t main_f_dce6f0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dce700  (orig 0xdce700, tailcall)
uint64_t main_f_dce700(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dce710  (orig 0xdce710, tailcall)
void main_f_dce710() { main::sub_dce9d0(); }

// sub_dce720  (orig 0xdce720, tailcall)
void main_f_dce720() { main::sub_dce9d0(); }

// sub_dce730  (orig 0xdce730, tailcall)
uint64_t main_f_dce730(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dce740  (orig 0xdce740, tailcall)
uint64_t main_f_dce740(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dcec40  (orig 0xdcec40, tailcall)
uint64_t main_f_dcec40(void* a0) {
    return main::sub_c6a470(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_dcefe0  (orig 0xdcefe0, tailcall)
void main_f_dcefe0() { main::sub_c69450(); }

// sub_dceff0  (orig 0xdceff0, tailcall)
void main_f_dceff0() { main::sub_dcf2b0(); }

// sub_dcf250  (orig 0xdcf250, tailcall)
uint64_t main_f_dcf250(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dcf260  (orig 0xdcf260, tailcall)
uint64_t main_f_dcf260(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dcf270  (orig 0xdcf270, tailcall)
void main_f_dcf270() { main::sub_dcf2b0(); }

// sub_dcf280  (orig 0xdcf280, tailcall)
void main_f_dcf280() { main::sub_dcf2b0(); }

// sub_dcf290  (orig 0xdcf290, tailcall)
uint64_t main_f_dcf290(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dcf2a0  (orig 0xdcf2a0, tailcall)
uint64_t main_f_dcf2a0(void* a0) {
    return main::sub_c69450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dcf520  (orig 0xdcf520, tailcall)
uint64_t main_f_dcf520(void* a0) {
    return main::sub_c6a470(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_dd7470  (orig 0xdd7470, tailcall)
void main_f_dd7470() { main::sub_dcf560(); }

// sub_dd7490  (orig 0xdd7490, tailcall)
void main_f_dd7490() { main::sub_dd2a30(); }

// sub_dd74a0  (orig 0xdd74a0, tailcall)
uint64_t main_f_dd74a0(void* a0) {
    return main::sub_dd48f0(((uintptr_t)((char*)(a0) + 552)));
}

// sub_dd8090  (orig 0xdd8090, tailcall)
void main_f_dd8090() { main::sub_e9d210(); }

// sub_dd8790  (orig 0xdd8790, tailcall)
uint64_t main_f_dd8790(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dd87a0  (orig 0xdd87a0, tailcall)
uint64_t main_f_dd87a0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dd8890  (orig 0xdd8890, tailcall)
uint64_t main_f_dd8890(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dd88a0  (orig 0xdd88a0, tailcall)
uint64_t main_f_dd88a0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ddda80  (orig 0xddda80, tailcall)
uint64_t main_f_ddda80(void* a0) {
    return main::sub_ddd8e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ddda90  (orig 0xddda90, tailcall)
uint64_t main_f_ddda90(void* a0) {
    return main::sub_ddd8e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dddaa0  (orig 0xdddaa0, tailcall)
void main_f_dddaa0() { main::sub_ddd8e0(); }

// sub_dddab0  (orig 0xdddab0, tailcall)
uint64_t main_f_dddab0(void* a0) {
    return main::sub_ddd8e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dddac0  (orig 0xdddac0, tailcall)
uint64_t main_f_dddac0(void* a0) {
    return main::sub_ddd8e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_dde560  (orig 0xdde560, tailcall)
uint64_t main_f_dde560(void* a0) {
    return main::sub_dde470(((uintptr_t)((char*)(a0) - 72)));
}

// sub_dde570  (orig 0xdde570, tailcall)
uint64_t main_f_dde570(void* a0) {
    return main::sub_dde470(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ddf840  (orig 0xddf840, tailcall)
void main_f_ddf840() { main::sub_ddf700(); }

// sub_ddf850  (orig 0xddf850, tailcall)
void main_f_ddf850() { main::sub_ddf8c0(); }

// sub_ddf860  (orig 0xddf860, tailcall)
uint64_t main_f_ddf860(void* a0) {
    return main::sub_ddf700(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ddf870  (orig 0xddf870, tailcall)
uint64_t main_f_ddf870(void* a0) {
    return main::sub_ddf700(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ddf880  (orig 0xddf880, tailcall)
void main_f_ddf880() { main::sub_ddf8c0(); }

// sub_ddf890  (orig 0xddf890, tailcall)
void main_f_ddf890() { main::sub_ddf8c0(); }

// sub_ddf8a0  (orig 0xddf8a0, tailcall)
uint64_t main_f_ddf8a0(void* a0) {
    return main::sub_ddf700(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ddf8b0  (orig 0xddf8b0, tailcall)
uint64_t main_f_ddf8b0(void* a0) {
    return main::sub_ddf700(((uintptr_t)((char*)(a0) - 80)));
}

// sub_de0ea0  (orig 0xde0ea0, tailcall)
uint64_t main_f_de0ea0(void* a0) {
    return main::sub_de0bf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_de0eb0  (orig 0xde0eb0, tailcall)
uint64_t main_f_de0eb0(void* a0) {
    return main::sub_de0bf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_de0ec0  (orig 0xde0ec0, tailcall)
void main_f_de0ec0() { main::sub_de0bf0(); }

// sub_de0ed0  (orig 0xde0ed0, tailcall)
uint64_t main_f_de0ed0(void* a0) {
    return main::sub_de0bf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_de0ee0  (orig 0xde0ee0, tailcall)
uint64_t main_f_de0ee0(void* a0) {
    return main::sub_de0bf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_de2160  (orig 0xde2160, tailcall)
uint64_t main_f_de2160(void* a0) {
    return main::sub_de2070(((uintptr_t)((char*)(a0) - 72)));
}

// sub_de2170  (orig 0xde2170, tailcall)
uint64_t main_f_de2170(void* a0) {
    return main::sub_de2070(((uintptr_t)((char*)(a0) - 80)));
}

// sub_de4880  (orig 0xde4880, tailcall)
void main_f_de4880() { main::sub_de4710(); }

// sub_de4890  (orig 0xde4890, tailcall)
uint64_t main_f_de4890(void* a0) {
    return main::sub_de4710(((uintptr_t)((char*)(a0) - 72)));
}

// sub_de48a0  (orig 0xde48a0, tailcall)
uint64_t main_f_de48a0(void* a0) {
    return main::sub_de4710(((uintptr_t)((char*)(a0) - 72)));
}

// sub_de5130  (orig 0xde5130, tailcall)
uint64_t main_f_de5130(void* a0) {
    return main::sub_de4fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_de5140  (orig 0xde5140, tailcall)
uint64_t main_f_de5140(void* a0) {
    return main::sub_de4fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_de5150  (orig 0xde5150, tailcall)
void main_f_de5150() { main::sub_de4fd0(); }

// sub_de5160  (orig 0xde5160, tailcall)
uint64_t main_f_de5160(void* a0) {
    return main::sub_de4fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_de5170  (orig 0xde5170, tailcall)
uint64_t main_f_de5170(void* a0) {
    return main::sub_de4fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_de5b90  (orig 0xde5b90, tailcall)
uint64_t main_f_de5b90(void* a0) {
    return main::sub_de5aa0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_de5ba0  (orig 0xde5ba0, tailcall)
uint64_t main_f_de5ba0(void* a0) {
    return main::sub_de5aa0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_de85d0  (orig 0xde85d0, tailcall)
void main_f_de85d0() { main::sub_de8470(); }

// sub_de85e0  (orig 0xde85e0, tailcall)
uint64_t main_f_de85e0(void* a0) {
    return main::sub_de8470(((uintptr_t)((char*)(a0) - 72)));
}

// sub_de85f0  (orig 0xde85f0, tailcall)
uint64_t main_f_de85f0(void* a0) {
    return main::sub_de8470(((uintptr_t)((char*)(a0) - 72)));
}

// sub_de9c90  (orig 0xde9c90, tailcall)
void main_f_de9c90() { main::sub_de9b50(); }

// sub_de9ca0  (orig 0xde9ca0, tailcall)
uint64_t main_f_de9ca0(void* a0) {
    return main::sub_de9b50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_de9cb0  (orig 0xde9cb0, tailcall)
uint64_t main_f_de9cb0(void* a0) {
    return main::sub_de9b50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_deb570  (orig 0xdeb570, tailcall)
void main_f_deb570() { main::sub_deb410(); }

// sub_deb580  (orig 0xdeb580, tailcall)
uint64_t main_f_deb580(void* a0) {
    return main::sub_deb410(((uintptr_t)((char*)(a0) - 72)));
}

// sub_deb590  (orig 0xdeb590, tailcall)
uint64_t main_f_deb590(void* a0) {
    return main::sub_deb410(((uintptr_t)((char*)(a0) - 72)));
}

// sub_debf40  (orig 0xdebf40, tailcall)
uint64_t main_f_debf40(void* a0) {
    return main::sub_d0b900(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_ded560  (orig 0xded560, tailcall)
uint64_t main_f_ded560(void* a0) {
    return main::sub_d0b220(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_ded580  (orig 0xded580, tailcall)
uint64_t main_f_ded580(void* a0) {
    return main::sub_d0b230(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_ded5a0  (orig 0xded5a0, tailcall)
uint64_t main_f_ded5a0(void* a0) {
    return main::sub_d0a900(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_ded7c0  (orig 0xded7c0, tailcall)
uint64_t main_f_ded7c0(void* a0) {
    return main::sub_d0b710(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_ded830  (orig 0xded830, tailcall)
uint64_t main_f_ded830(void* a0) {
    return main::Play_PM_Common_jump_out(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

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

// sub_e36c00  (orig 0xe36c00, tailcall)
void main_f_e36c00() { main::sub_d63270(); }

// sub_e39660  (orig 0xe39660, tailcall)
uint64_t main_f_e39660(void* a0) {
    return main::sub_e3a000(((uintptr_t)(*(uint64_t*)((char*)(a0) + 96))));
}

// sub_e39670  (orig 0xe39670, tailcall)
uint64_t main_f_e39670(void* a0) {
    return main::sub_e3a130(((uintptr_t)(*(uint64_t*)((char*)(a0) + 96))));
}

// sub_e39680  (orig 0xe39680, tailcall)
uint64_t main_f_e39680(void* a0) {
    return main::sub_e39d70(((uintptr_t)(*(uint64_t*)((char*)(a0) + 104))));
}

// sub_e396d0  (orig 0xe396d0, tailcall)
uint64_t main_f_e396d0(void* a0) {
    return main::sub_e3a2a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 112))));
}

// sub_e396e0  (orig 0xe396e0, tailcall)
uint64_t main_f_e396e0(void* a0) {
    return main::sub_e3a390(((uintptr_t)(*(uint64_t*)((char*)(a0) + 112))));
}

// sub_e396f0  (orig 0xe396f0, tailcall)
uint64_t main_f_e396f0(void* a0) {
    return main::sub_e3a500(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_e39700  (orig 0xe39700, tailcall)
uint64_t main_f_e39700(void* a0) {
    return main::sub_e3a5f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_e39800  (orig 0xe39800, tailcall)
uint64_t main_f_e39800(void* a0) {
    return main::sub_e39710(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e39810  (orig 0xe39810, tailcall)
uint64_t main_f_e39810(void* a0) {
    return main::sub_e39710(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e3a7f0  (orig 0xe3a7f0, tailcall)
uint64_t main_f_e3a7f0(void* a0) {
    return main::sub_e3a6c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e3a800  (orig 0xe3a800, tailcall)
uint64_t main_f_e3a800(void* a0) {
    return main::sub_e3a6c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e3a810  (orig 0xe3a810, tailcall)
void main_f_e3a810() { main::sub_e3a6c0(); }

// sub_e3a820  (orig 0xe3a820, tailcall)
uint64_t main_f_e3a820(void* a0) {
    return main::sub_e3a6c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e3a830  (orig 0xe3a830, tailcall)
uint64_t main_f_e3a830(void* a0) {
    return main::sub_e3a6c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e3ac90  (orig 0xe3ac90, tailcall)
uint64_t main_f_e3ac90(void* a0) {
    return main::sub_101bd40(((uintptr_t)((char*)(a0) + 128)));
}

// sub_e3ade0  (orig 0xe3ade0, tailcall)
uint64_t main_f_e3ade0(void* a0) {
    return main::sub_e3acf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e3adf0  (orig 0xe3adf0, tailcall)
uint64_t main_f_e3adf0(void* a0) {
    return main::sub_e3acf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e3c920  (orig 0xe3c920, tailcall)
void main_f_e3c920() { main::sub_c7b920(); }

// sub_e3c9a0  (orig 0xe3c9a0, tailcall)
uint64_t main_f_e3c9a0(void* a0) {
    return main::sub_c7b920(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e3c9b0  (orig 0xe3c9b0, tailcall)
uint64_t main_f_e3c9b0(void* a0) {
    return main::sub_c7b920(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e3cba0  (orig 0xe3cba0, tailcall)
uint64_t main_f_e3cba0(void* a0) {
    return main::sub_c7b920(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e3cbb0  (orig 0xe3cbb0, tailcall)
uint64_t main_f_e3cbb0(void* a0) {
    return main::sub_c7b920(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e3d5d0  (orig 0xe3d5d0, tailcall)
uint64_t main_f_e3d5d0(void* a0) {
    return main::sub_e3d4d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e3d5e0  (orig 0xe3d5e0, tailcall)
uint64_t main_f_e3d5e0(void* a0) {
    return main::sub_e3d4d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e3d5f0  (orig 0xe3d5f0, tailcall)
void main_f_e3d5f0() { main::sub_e3d4d0(); }

// sub_e3d600  (orig 0xe3d600, tailcall)
uint64_t main_f_e3d600(void* a0) {
    return main::sub_e3d4d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e3d610  (orig 0xe3d610, tailcall)
uint64_t main_f_e3d610(void* a0) {
    return main::sub_e3d4d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e3f0d0  (orig 0xe3f0d0, tailcall)
uint64_t main_f_e3f0d0(void* a0) {
    return main::sub_e3efe0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e3f0e0  (orig 0xe3f0e0, tailcall)
uint64_t main_f_e3f0e0(void* a0) {
    return main::sub_e3efe0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e3f700  (orig 0xe3f700, tailcall)
uint64_t main_f_e3f700(void* a0) {
    return main::sub_e3f580(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e3f710  (orig 0xe3f710, tailcall)
uint64_t main_f_e3f710(void* a0) {
    return main::sub_e3f580(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e3f720  (orig 0xe3f720, tailcall)
void main_f_e3f720() { main::sub_e3f580(); }

// sub_e3f730  (orig 0xe3f730, tailcall)
uint64_t main_f_e3f730(void* a0) {
    return main::sub_e3f580(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e3f740  (orig 0xe3f740, tailcall)
uint64_t main_f_e3f740(void* a0) {
    return main::sub_e3f580(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e40450  (orig 0xe40450, tailcall)
uint64_t main_f_e40450(void* a0) {
    return main::sub_e40360(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e40460  (orig 0xe40460, tailcall)
uint64_t main_f_e40460(void* a0) {
    return main::sub_e40360(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e40d40  (orig 0xe40d40, tailcall)
uint64_t main_f_e40d40(void* a0) {
    return main::sub_e40b10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e40d50  (orig 0xe40d50, tailcall)
uint64_t main_f_e40d50(void* a0) {
    return main::sub_e40b10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e417e0  (orig 0xe417e0, tailcall)
void main_f_e417e0() { main::sub_e41a80(); }

// sub_e418b0  (orig 0xe418b0, tailcall)
void main_f_e418b0() { main::sub_e41a80(); }

// sub_e418c0  (orig 0xe418c0, tailcall)
void main_f_e418c0() { main::sub_e41a80(); }

// sub_e421c0  (orig 0xe421c0, tailcall)
uint64_t main_f_e421c0(void* a0) {
    return main::sub_e420d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e421d0  (orig 0xe421d0, tailcall)
uint64_t main_f_e421d0(void* a0) {
    return main::sub_e420d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e42d20  (orig 0xe42d20, tailcall)
void main_f_e42d20() { main::sub_e42ab0(); }

// sub_e470e0  (orig 0xe470e0, tailcall)
void main_f_e470e0() { main::sub_e46dd0(); }

// sub_e470f0  (orig 0xe470f0, tailcall)
uint64_t main_f_e470f0(void* a0) {
    return main::sub_e46dd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e47100  (orig 0xe47100, tailcall)
uint64_t main_f_e47100(void* a0) {
    return main::sub_e46dd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e484e0  (orig 0xe484e0, tailcall)
uint64_t main_f_e484e0(void* a0) {
    return main::sub_e47be0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e484f0  (orig 0xe484f0, tailcall)
void main_f_e484f0() { main::sub_e47be0(); }

// sub_e48500  (orig 0xe48500, tailcall)
uint64_t main_f_e48500(void* a0) {
    return main::sub_e47be0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e4c110  (orig 0xe4c110, tailcall)
void main_f_e4c110() { main::sub_e4bd00(); }

// sub_e4c3b0  (orig 0xe4c3b0, tailcall)
void main_f_e4c3b0() { main::sub_e4c3c0(); }

// sub_e56b70  (orig 0xe56b70, tailcall)
void main_f_e56b70() { main::sub_c8aa60(); }

// sub_e58e70  (orig 0xe58e70, tailcall)
void main_f_e58e70() { main::sub_e58d20(); }

// sub_e58ef0  (orig 0xe58ef0, tailcall)
uint64_t main_f_e58ef0(void* a0) {
    return main::sub_e58d20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e58f00  (orig 0xe58f00, tailcall)
uint64_t main_f_e58f00(void* a0) {
    return main::sub_e58d20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e58ff0  (orig 0xe58ff0, tailcall)
uint64_t main_f_e58ff0(void* a0) {
    return main::sub_e58d20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e59000  (orig 0xe59000, tailcall)
uint64_t main_f_e59000(void* a0) {
    return main::sub_e58d20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e5e440  (orig 0xe5e440, tailcall)
uint64_t main_f_e5e440(void* a0) {
    return main::sub_e5e110(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e5e450  (orig 0xe5e450, tailcall)
uint64_t main_f_e5e450(void* a0) {
    return main::sub_e5e110(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e5e460  (orig 0xe5e460, tailcall)
void main_f_e5e460() { main::sub_e5e110(); }

// sub_e5e470  (orig 0xe5e470, tailcall)
uint64_t main_f_e5e470(void* a0) {
    return main::sub_e5e110(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e5e480  (orig 0xe5e480, tailcall)
uint64_t main_f_e5e480(void* a0) {
    return main::sub_e5e110(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e60820  (orig 0xe60820, tailcall)
void main_f_e60820() { main::sub_e7c4c0(); }

// sub_e60830  (orig 0xe60830, tailcall)
void main_f_e60830() { main::sub_e60c10(); }

// sub_e60840  (orig 0xe60840, tailcall)
uint64_t main_f_e60840(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e60850  (orig 0xe60850, tailcall)
uint64_t main_f_e60850(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e60860  (orig 0xe60860, tailcall)
void main_f_e60860() { main::sub_e60c10(); }

// sub_e60870  (orig 0xe60870, tailcall)
void main_f_e60870() { main::sub_e60c10(); }

// sub_e60880  (orig 0xe60880, tailcall)
uint64_t main_f_e60880(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e60890  (orig 0xe60890, tailcall)
uint64_t main_f_e60890(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e610f0  (orig 0xe610f0, tailcall)
void main_f_e610f0() { main::sub_e60fd0(); }

// sub_e61100  (orig 0xe61100, tailcall)
void main_f_e61100() { main::sub_e61170(); }

// sub_e61110  (orig 0xe61110, tailcall)
uint64_t main_f_e61110(void* a0) {
    return main::sub_e60fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e61120  (orig 0xe61120, tailcall)
uint64_t main_f_e61120(void* a0) {
    return main::sub_e60fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e61130  (orig 0xe61130, tailcall)
void main_f_e61130() { main::sub_e61170(); }

// sub_e61140  (orig 0xe61140, tailcall)
void main_f_e61140() { main::sub_e61170(); }

// sub_e61150  (orig 0xe61150, tailcall)
uint64_t main_f_e61150(void* a0) {
    return main::sub_e60fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e61160  (orig 0xe61160, tailcall)
uint64_t main_f_e61160(void* a0) {
    return main::sub_e60fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e66740  (orig 0xe66740, tailcall)
void main_f_e66740() { main::sub_e7feb0(); }

// sub_e66750  (orig 0xe66750, tailcall)
void main_f_e66750() { main::sub_e667c0(); }

// sub_e66760  (orig 0xe66760, tailcall)
uint64_t main_f_e66760(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e66770  (orig 0xe66770, tailcall)
uint64_t main_f_e66770(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e66780  (orig 0xe66780, tailcall)
void main_f_e66780() { main::sub_e667c0(); }

// sub_e66790  (orig 0xe66790, tailcall)
void main_f_e66790() { main::sub_e667c0(); }

// sub_e667a0  (orig 0xe667a0, tailcall)
uint64_t main_f_e667a0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e667b0  (orig 0xe667b0, tailcall)
uint64_t main_f_e667b0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e67490  (orig 0xe67490, tailcall)
void main_f_e67490() { main::sub_e67540(); }

// sub_e674e0  (orig 0xe674e0, tailcall)
uint64_t main_f_e674e0(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e67500  (orig 0xe67500, tailcall)
void main_f_e67500() { main::sub_e67540(); }

// sub_e67510  (orig 0xe67510, tailcall)
void main_f_e67510() { main::sub_e67540(); }

// sub_e67520  (orig 0xe67520, tailcall)
uint64_t main_f_e67520(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e67a00  (orig 0xe67a00, tailcall)
uint64_t main_f_e67a00(void* a0) {
    return main::sub_e67e80(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_e68180  (orig 0xe68180, tailcall)
void main_f_e68180() { main::sub_e7feb0(); }

// sub_e68190  (orig 0xe68190, tailcall)
void main_f_e68190() { main::sub_e68200(); }

// sub_e681a0  (orig 0xe681a0, tailcall)
uint64_t main_f_e681a0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e681b0  (orig 0xe681b0, tailcall)
uint64_t main_f_e681b0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e681c0  (orig 0xe681c0, tailcall)
void main_f_e681c0() { main::sub_e68200(); }

// sub_e681d0  (orig 0xe681d0, tailcall)
void main_f_e681d0() { main::sub_e68200(); }

// sub_e681e0  (orig 0xe681e0, tailcall)
uint64_t main_f_e681e0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e681f0  (orig 0xe681f0, tailcall)
uint64_t main_f_e681f0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e69f40  (orig 0xe69f40, tailcall)
void main_f_e69f40() { main::sub_e6a0f0(); }

// sub_e6a010  (orig 0xe6a010, tailcall)
void main_f_e6a010() { main::sub_e6a0f0(); }

// sub_e6a020  (orig 0xe6a020, tailcall)
void main_f_e6a020() { main::sub_e6a0f0(); }

// sub_e6b690  (orig 0xe6b690, tailcall)
uint64_t main_f_e6b690(void* a0) {
    return main::sub_e6b4f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e6b6a0  (orig 0xe6b6a0, tailcall)
uint64_t main_f_e6b6a0(void* a0) {
    return main::sub_e6b4f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e6b6b0  (orig 0xe6b6b0, tailcall)
void main_f_e6b6b0() { main::sub_e6b4f0(); }

// sub_e6b6c0  (orig 0xe6b6c0, tailcall)
uint64_t main_f_e6b6c0(void* a0) {
    return main::sub_e6b4f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e6b6d0  (orig 0xe6b6d0, tailcall)
uint64_t main_f_e6b6d0(void* a0) {
    return main::sub_e6b4f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e6c320  (orig 0xe6c320, tailcall)
void main_f_e6c320() { main::sub_e7c4c0(); }

// sub_e6c3a0  (orig 0xe6c3a0, tailcall)
uint64_t main_f_e6c3a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e6c3b0  (orig 0xe6c3b0, tailcall)
uint64_t main_f_e6c3b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e6c4a0  (orig 0xe6c4a0, tailcall)
uint64_t main_f_e6c4a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e6c4b0  (orig 0xe6c4b0, tailcall)
uint64_t main_f_e6c4b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e6c4c0  (orig 0xe6c4c0, tailcall)
void main_f_e6c4c0() { main::sub_e7c4c0(); }

// sub_e6c540  (orig 0xe6c540, tailcall)
uint64_t main_f_e6c540(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e6c550  (orig 0xe6c550, tailcall)
uint64_t main_f_e6c550(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e6c640  (orig 0xe6c640, tailcall)
uint64_t main_f_e6c640(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e6c650  (orig 0xe6c650, tailcall)
uint64_t main_f_e6c650(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e6caf0  (orig 0xe6caf0, tailcall)
void main_f_e6caf0() { main::sub_e6c870(); }

// sub_e6cb00  (orig 0xe6cb00, tailcall)
void main_f_e6cb00() { main::sub_14e0b90(); }

// sub_e6cb10  (orig 0xe6cb10, tailcall)
uint64_t main_f_e6cb10(void* a0) {
    return main::sub_e6c870(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e6cb20  (orig 0xe6cb20, tailcall)
uint64_t main_f_e6cb20(void* a0) {
    return main::sub_e6c870(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e6cb30  (orig 0xe6cb30, tailcall)
void main_f_e6cb30() { main::sub_14e0b90(); }

// sub_e6cb40  (orig 0xe6cb40, tailcall)
void main_f_e6cb40() { main::sub_14e0b90(); }

// sub_e6cb50  (orig 0xe6cb50, tailcall)
uint64_t main_f_e6cb50(void* a0) {
    return main::sub_e6c870(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e6cb60  (orig 0xe6cb60, tailcall)
uint64_t main_f_e6cb60(void* a0) {
    return main::sub_e6c870(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e6cb80  (orig 0xe6cb80, tailcall)
void main_f_e6cb80() { main::sub_ce0(); }

// sub_e6d490  (orig 0xe6d490, tailcall)
uint64_t main_f_e6d490(void* a0) {
    return main::anime_out_2(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_e6e3e0  (orig 0xe6e3e0, tailcall)
void main_f_e6e3e0() { main::sub_e7feb0(); }

// sub_e6e3f0  (orig 0xe6e3f0, tailcall)
void main_f_e6e3f0() { main::sub_e6e460(); }

// sub_e6e400  (orig 0xe6e400, tailcall)
uint64_t main_f_e6e400(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e6e410  (orig 0xe6e410, tailcall)
uint64_t main_f_e6e410(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e6e420  (orig 0xe6e420, tailcall)
void main_f_e6e420() { main::sub_e6e460(); }

// sub_e6e430  (orig 0xe6e430, tailcall)
void main_f_e6e430() { main::sub_e6e460(); }

// sub_e6e440  (orig 0xe6e440, tailcall)
uint64_t main_f_e6e440(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e6e450  (orig 0xe6e450, tailcall)
uint64_t main_f_e6e450(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e6e8b0  (orig 0xe6e8b0, tailcall)
uint64_t main_f_e6e8b0(void* a0) {
    return main::sub_ec6b00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 16))));
}

// sub_e6e8c0  (orig 0xe6e8c0, tailcall)
uint64_t main_f_e6e8c0(void* a0) {
    return main::sub_ec6e20(((uintptr_t)(*(uint64_t*)((char*)(a0) + 16))));
}

// sub_e6f330  (orig 0xe6f330, tailcall)
void main_f_e6f330() { main::sub_ce0(); }

// sub_e6fe80  (orig 0xe6fe80, tailcall)
uint64_t main_f_e6fe80(void* a0) {
    return main::sub_e70bf0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_e6fe90  (orig 0xe6fe90, tailcall)
uint64_t main_f_e6fe90(void* a0) {
    return main::sub_e70c10(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_e72700  (orig 0xe72700, tailcall)
void main_f_e72700() { main::sub_e72930(); }

// sub_e72810  (orig 0xe72810, tailcall)
void main_f_e72810() { main::sub_e72930(); }

// sub_e72820  (orig 0xe72820, tailcall)
void main_f_e72820() { main::sub_e72930(); }

// sub_e72f90  (orig 0xe72f90, tailcall)
void main_f_e72f90() { main::sub_e67330(); }

// sub_e73020  (orig 0xe73020, tailcall)
uint64_t main_f_e73020(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e73030  (orig 0xe73030, tailcall)
uint64_t main_f_e73030(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e73120  (orig 0xe73120, tailcall)
uint64_t main_f_e73120(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e73130  (orig 0xe73130, tailcall)
uint64_t main_f_e73130(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e73140  (orig 0xe73140, tailcall)
void main_f_e73140() { main::sub_e67330(); }

// sub_e731d0  (orig 0xe731d0, tailcall)
uint64_t main_f_e731d0(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e731e0  (orig 0xe731e0, tailcall)
uint64_t main_f_e731e0(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e732d0  (orig 0xe732d0, tailcall)
uint64_t main_f_e732d0(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e732e0  (orig 0xe732e0, tailcall)
uint64_t main_f_e732e0(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e732f0  (orig 0xe732f0, tailcall)
void main_f_e732f0() { main::sub_e67330(); }

// sub_e73380  (orig 0xe73380, tailcall)
uint64_t main_f_e73380(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e73390  (orig 0xe73390, tailcall)
uint64_t main_f_e73390(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e73480  (orig 0xe73480, tailcall)
uint64_t main_f_e73480(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e73490  (orig 0xe73490, tailcall)
uint64_t main_f_e73490(void* a0) {
    return main::sub_e67330(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e73870  (orig 0xe73870, tailcall)
void main_f_e73870() { main::sub_e734a0(); }

// sub_e741d0  (orig 0xe741d0, tailcall)
void main_f_e741d0() { main::sub_e74200(); }

// sub_e741e0  (orig 0xe741e0, tailcall)
void main_f_e741e0() { main::sub_e74200(); }

// sub_e741f0  (orig 0xe741f0, tailcall)
void main_f_e741f0() { main::sub_e74200(); }

// sub_e74a70  (orig 0xe74a70, tailcall)
void main_f_e74a70() { main::sub_e748d0(); }

// sub_e74b30  (orig 0xe74b30, tailcall)
uint64_t main_f_e74b30(void* a0) {
    return main::sub_e748d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e74b40  (orig 0xe74b40, tailcall)
uint64_t main_f_e74b40(void* a0) {
    return main::sub_e748d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e74cb0  (orig 0xe74cb0, tailcall)
uint64_t main_f_e74cb0(void* a0) {
    return main::sub_e748d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e74cc0  (orig 0xe74cc0, tailcall)
uint64_t main_f_e74cc0(void* a0) {
    return main::sub_e748d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e74cd0  (orig 0xe74cd0, tailcall)
void main_f_e74cd0() { main::sub_e7c250(); }

// sub_e74ce0  (orig 0xe74ce0, tailcall)
void main_f_e74ce0() { main::sub_e75330(); }

// sub_e74cf0  (orig 0xe74cf0, tailcall)
uint64_t main_f_e74cf0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e74d00  (orig 0xe74d00, tailcall)
uint64_t main_f_e74d00(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e74d10  (orig 0xe74d10, tailcall)
void main_f_e74d10() { main::sub_e75330(); }

// sub_e74d20  (orig 0xe74d20, tailcall)
void main_f_e74d20() { main::sub_e75330(); }

// sub_e74d30  (orig 0xe74d30, tailcall)
uint64_t main_f_e74d30(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e74d40  (orig 0xe74d40, tailcall)
uint64_t main_f_e74d40(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e75c80  (orig 0xe75c80, tailcall)
void main_f_e75c80() { main::sub_e7c4c0(); }

// sub_e75c90  (orig 0xe75c90, tailcall)
void main_f_e75c90() { main::sub_e75d00(); }

// sub_e75ca0  (orig 0xe75ca0, tailcall)
uint64_t main_f_e75ca0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e75cb0  (orig 0xe75cb0, tailcall)
uint64_t main_f_e75cb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e75cc0  (orig 0xe75cc0, tailcall)
void main_f_e75cc0() { main::sub_e75d00(); }

// sub_e75cd0  (orig 0xe75cd0, tailcall)
void main_f_e75cd0() { main::sub_e75d00(); }

// sub_e75ce0  (orig 0xe75ce0, tailcall)
uint64_t main_f_e75ce0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e75cf0  (orig 0xe75cf0, tailcall)
uint64_t main_f_e75cf0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e76470  (orig 0xe76470, tailcall)
void main_f_e76470() { main::sub_e7feb0(); }

// sub_e76480  (orig 0xe76480, tailcall)
void main_f_e76480() { main::sub_e75f40(); }

// sub_e76490  (orig 0xe76490, tailcall)
uint64_t main_f_e76490(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e764a0  (orig 0xe764a0, tailcall)
uint64_t main_f_e764a0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e764b0  (orig 0xe764b0, tailcall)
void main_f_e764b0() { main::sub_e75f40(); }

// sub_e764c0  (orig 0xe764c0, tailcall)
void main_f_e764c0() { main::sub_e75f40(); }

// sub_e764d0  (orig 0xe764d0, tailcall)
uint64_t main_f_e764d0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e764e0  (orig 0xe764e0, tailcall)
uint64_t main_f_e764e0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e7ca30  (orig 0xe7ca30, tailcall)
uint64_t main_f_e7ca30(void* a0) {
    return main::sub_e7c940(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e7ca40  (orig 0xe7ca40, tailcall)
uint64_t main_f_e7ca40(void* a0) {
    return main::sub_e7c940(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e7cb40  (orig 0xe7cb40, tailcall)
void main_f_e7cb40() { main::sub_e7ca50(); }

// sub_e7cc90  (orig 0xe7cc90, tailcall)
uint64_t main_f_e7cc90(void* a0) {
    return main::sub_e7ca50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e7cca0  (orig 0xe7cca0, tailcall)
uint64_t main_f_e7cca0(void* a0) {
    return main::sub_e7ca50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e7cd90  (orig 0xe7cd90, tailcall)
uint64_t main_f_e7cd90(void* a0) {
    return main::sub_e7ca50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e7cda0  (orig 0xe7cda0, tailcall)
uint64_t main_f_e7cda0(void* a0) {
    return main::sub_e7ca50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e7cee0  (orig 0xe7cee0, tailcall)
uint64_t main_f_e7cee0(void* a0) {
    return main::sub_e7cdb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e7cef0  (orig 0xe7cef0, tailcall)
uint64_t main_f_e7cef0(void* a0) {
    return main::sub_e7cdb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e7f0f0  (orig 0xe7f0f0, tailcall)
uint64_t main_f_e7f0f0(void* a0) {
    return main::sub_e7efd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e7f100  (orig 0xe7f100, tailcall)
void main_f_e7f100() { main::sub_e7efd0(); }

// sub_e7f110  (orig 0xe7f110, tailcall)
uint64_t main_f_e7f110(void* a0) {
    return main::sub_e7efd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e7f490  (orig 0xe7f490, tailcall)
void main_f_e7f490() { main::sub_e7feb0(); }

// sub_e7f5a0  (orig 0xe7f5a0, tailcall)
uint64_t main_f_e7f5a0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e7f5b0  (orig 0xe7f5b0, tailcall)
uint64_t main_f_e7f5b0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e7f6a0  (orig 0xe7f6a0, tailcall)
uint64_t main_f_e7f6a0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e7f6b0  (orig 0xe7f6b0, tailcall)
uint64_t main_f_e7f6b0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e80530  (orig 0xe80530, tailcall)
uint64_t main_f_e80530(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e80540  (orig 0xe80540, tailcall)
uint64_t main_f_e80540(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e80550  (orig 0xe80550, tailcall)
void main_f_e80550() { main::sub_e7feb0(); }

// sub_e80560  (orig 0xe80560, tailcall)
uint64_t main_f_e80560(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e80570  (orig 0xe80570, tailcall)
uint64_t main_f_e80570(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e807d0  (orig 0xe807d0, tailcall)
uint64_t main_f_e807d0(void* a0) {
    return main::sub_e83370(((uintptr_t)((char*)(a0) + 256)));
}

// sub_e807e0  (orig 0xe807e0, tailcall)
uint64_t main_f_e807e0(void* a0) {
    return main::sub_e83390(((uintptr_t)((char*)(a0) + 256)));
}

// sub_e809c0  (orig 0xe809c0, tailcall)
uint64_t main_f_e809c0(void* a0) {
    return main::sub_e809d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1440))));
}

// sub_e81210  (orig 0xe81210, tailcall)
uint64_t main_f_e81210(void* a0) {
    return main::sub_e84490(((uintptr_t)((char*)(a0) + 256)));
}

// sub_e81240  (orig 0xe81240, tailcall)
void main_f_e81240() { main::sub_e81640(); }

// sub_e81260  (orig 0xe81260, tailcall)
void main_f_e81260() { main::sub_e81640(); }

// sub_e81270  (orig 0xe81270, tailcall)
void main_f_e81270() { main::sub_e81640(); }

// sub_e83b20  (orig 0xe83b20, tailcall)
uint64_t main_f_e83b20(void* a0) {
    return main::sub_14abe00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 432))));
}

// sub_e8cbc0  (orig 0xe8cbc0, tailcall)
uint64_t main_f_e8cbc0(void* a0) {
    return main::sub_e8b4f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e8cbd0  (orig 0xe8cbd0, tailcall)
void main_f_e8cbd0() { main::sub_e8b4f0(); }

// sub_e8cbe0  (orig 0xe8cbe0, tailcall)
uint64_t main_f_e8cbe0(void* a0) {
    return main::sub_e8b4f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e8cbf0  (orig 0xe8cbf0, tailcall)
void main_f_e8cbf0() { main::sub_e8cc00(); }

// sub_e92fa0  (orig 0xe92fa0, tailcall)
void main_f_e92fa0() { main::sub_e92dc0(); }

// sub_e94b80  (orig 0xe94b80, tailcall)
void main_f_e94b80() { main::sub_5d1550(); }

// sub_e94b90  (orig 0xe94b90, tailcall)
void main_f_e94b90() { main::sub_e94c10(); }

// sub_e94ba0  (orig 0xe94ba0, tailcall)
void main_f_e94ba0() { main::sub_5d2800(); }

// sub_e94bb0  (orig 0xe94bb0, tailcall)
uint64_t main_f_e94bb0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e94bc0  (orig 0xe94bc0, tailcall)
uint64_t main_f_e94bc0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e94bd0  (orig 0xe94bd0, tailcall)
void main_f_e94bd0() { main::sub_e94c10(); }

// sub_e94be0  (orig 0xe94be0, tailcall)
void main_f_e94be0() { main::sub_e94c10(); }

// sub_e94bf0  (orig 0xe94bf0, tailcall)
uint64_t main_f_e94bf0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e94c00  (orig 0xe94c00, tailcall)
uint64_t main_f_e94c00(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e97940  (orig 0xe97940, tailcall)
uint64_t main_f_e97940(void* a0) {
    return main::sub_e97710(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e97950  (orig 0xe97950, tailcall)
uint64_t main_f_e97950(void* a0) {
    return main::sub_e97710(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e9cc60  (orig 0xe9cc60, tailcall)
void main_f_e9cc60() { main::sub_ead240(); }

// sub_e9cc70  (orig 0xe9cc70, tailcall)
uint64_t main_f_e9cc70(void* a0) {
    return main::sub_ead240(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e9cc80  (orig 0xe9cc80, tailcall)
void main_f_e9cc80() { main::sub_ead240(); }

// sub_e9cc90  (orig 0xe9cc90, tailcall)
uint64_t main_f_e9cc90(void* a0) {
    return main::sub_ead240(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e9d670  (orig 0xe9d670, tailcall)
uint64_t main_f_e9d670(void* a0) {
    return main::sub_e9d580(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e9d680  (orig 0xe9d680, tailcall)
uint64_t main_f_e9d680(void* a0) {
    return main::sub_e9d580(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e9d7c0  (orig 0xe9d7c0, tailcall)
void main_f_e9d7c0() { main::sub_5d1550(); }

// sub_e9d7d0  (orig 0xe9d7d0, tailcall)
void main_f_e9d7d0() { main::sub_e9d840(); }

// sub_e9d7e0  (orig 0xe9d7e0, tailcall)
uint64_t main_f_e9d7e0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e9d7f0  (orig 0xe9d7f0, tailcall)
uint64_t main_f_e9d7f0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e9d800  (orig 0xe9d800, tailcall)
void main_f_e9d800() { main::sub_e9d840(); }

// sub_e9d810  (orig 0xe9d810, tailcall)
void main_f_e9d810() { main::sub_e9d840(); }

// sub_e9d820  (orig 0xe9d820, tailcall)
uint64_t main_f_e9d820(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e9d830  (orig 0xe9d830, tailcall)
uint64_t main_f_e9d830(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e9e2a0  (orig 0xe9e2a0, tailcall)
uint64_t main_f_e9e2a0(void* a0) {
    return main::sub_e9e010(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e9e2b0  (orig 0xe9e2b0, tailcall)
uint64_t main_f_e9e2b0(void* a0) {
    return main::sub_e9e010(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e9e6b0  (orig 0xe9e6b0, tailcall)
uint64_t main_f_e9e6b0(void* a0) {
    return main::sub_e9dc10(((uintptr_t)(*(uint64_t*)((char*)(a0) + 672))));
}

// sub_e9ebc0  (orig 0xe9ebc0, tailcall)
void main_f_e9ebc0() { main::sub_5d1550(); }

// sub_e9ec40  (orig 0xe9ec40, tailcall)
void main_f_e9ec40() { main::sub_5d2800(); }

// sub_e9ec50  (orig 0xe9ec50, tailcall)
uint64_t main_f_e9ec50(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e9ec60  (orig 0xe9ec60, tailcall)
uint64_t main_f_e9ec60(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_e9ed50  (orig 0xe9ed50, tailcall)
uint64_t main_f_e9ed50(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_e9ed60  (orig 0xe9ed60, tailcall)
uint64_t main_f_e9ed60(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ea1f60  (orig 0xea1f60, tailcall)
void main_f_ea1f60() { main::sub_5d1550(); }

// sub_ea1fe0  (orig 0xea1fe0, tailcall)
uint64_t main_f_ea1fe0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ea1ff0  (orig 0xea1ff0, tailcall)
uint64_t main_f_ea1ff0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ea20e0  (orig 0xea20e0, tailcall)
uint64_t main_f_ea20e0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ea20f0  (orig 0xea20f0, tailcall)
uint64_t main_f_ea20f0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ea2230  (orig 0xea2230, tailcall)
void main_f_ea2230() { main::sub_5d1550(); }

// sub_ea22b0  (orig 0xea22b0, tailcall)
uint64_t main_f_ea22b0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ea22c0  (orig 0xea22c0, tailcall)
uint64_t main_f_ea22c0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ea23b0  (orig 0xea23b0, tailcall)
uint64_t main_f_ea23b0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ea23c0  (orig 0xea23c0, tailcall)
uint64_t main_f_ea23c0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ea37a0  (orig 0xea37a0, tailcall)
void main_f_ea37a0() { main::sub_ea2e20(); }

// sub_ea3d30  (orig 0xea3d30, tailcall)
void main_f_ea3d30() { main::sub_ce0(); }

// sub_ea3e60  (orig 0xea3e60, tailcall)
void main_f_ea3e60() { main::sub_ea3e70(); }

// sub_ea3f70  (orig 0xea3f70, tailcall)
void main_f_ea3f70() { main::sub_ce0(); }

// sub_ea41c0  (orig 0xea41c0, tailcall)
void main_f_ea41c0() { main::sub_ea41d0(); }

// sub_ea42d0  (orig 0xea42d0, tailcall)
void main_f_ea42d0() { main::sub_ce0(); }

// sub_ea4400  (orig 0xea4400, tailcall)
void main_f_ea4400() { main::sub_ce0(); }

// sub_ea4440  (orig 0xea4440, tailcall)
void main_f_ea4440() { main::sub_ea4450(); }

// sub_ea4550  (orig 0xea4550, tailcall)
void main_f_ea4550() { main::sub_ce0(); }

// sub_ea4680  (orig 0xea4680, tailcall)
void main_f_ea4680() { main::sub_ce0(); }

// sub_ea5dc0  (orig 0xea5dc0, tailcall)
void main_f_ea5dc0() { main::sub_ce0(); }

// sub_ea6a50  (orig 0xea6a50, tailcall)
void main_f_ea6a50() { main::sub_ce0(); }

// sub_ea99a0  (orig 0xea99a0, tailcall)
void main_f_ea99a0() { main::sub_ce0(); }

// sub_ea9cb0  (orig 0xea9cb0, tailcall)
void main_f_ea9cb0() { main::sub_ce0(); }

// sub_ea9e40  (orig 0xea9e40, tailcall)
uint64_t main_f_ea9e40(void* a0) {
    return main::sub_ea9cc0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_eaa530  (orig 0xeaa530, tailcall)
uint64_t main_f_eaa530(void* a0) {
    return main::sub_eab310(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa540  (orig 0xeaa540, tailcall)
uint64_t main_f_eaa540(void* a0) {
    return main::sub_eab3e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa560  (orig 0xeaa560, tailcall)
uint64_t main_f_eaa560(void* a0) {
    return main::sub_eab4c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa620  (orig 0xeaa620, tailcall)
uint64_t main_f_eaa620(void* a0) {
    return main::sub_eab610(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa630  (orig 0xeaa630, tailcall)
uint64_t main_f_eaa630(void* a0) {
    return main::sub_eab8c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa640  (orig 0xeaa640, tailcall)
uint64_t main_f_eaa640(void* a0) {
    return main::sub_eab960(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa650  (orig 0xeaa650, tailcall)
uint64_t main_f_eaa650(void* a0) {
    return main::sub_eab9f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa660  (orig 0xeaa660, tailcall)
uint64_t main_f_eaa660(void* a0) {
    return main::sub_eaba50(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa670  (orig 0xeaa670, tailcall)
uint64_t main_f_eaa670(void* a0) {
    return main::sub_eabaa0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa680  (orig 0xeaa680, tailcall)
uint64_t main_f_eaa680(void* a0) {
    return main::sub_eabaf0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa690  (orig 0xeaa690, tailcall)
uint64_t main_f_eaa690(void* a0) {
    return main::sub_eabb60(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa6b0  (orig 0xeaa6b0, tailcall)
uint64_t main_f_eaa6b0(void* a0) {
    return main::sub_eabc50(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa6c0  (orig 0xeaa6c0, tailcall)
uint64_t main_f_eaa6c0(void* a0) {
    return main::sub_eabca0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eaa6d0  (orig 0xeaa6d0, tailcall)
uint64_t main_f_eaa6d0(void* a0) {
    return main::sub_eabd00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_eab4e0  (orig 0xeab4e0, tailcall)
uint64_t main_f_eab4e0(void* a0) {
    return main::sub_eaacb0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_eac210  (orig 0xeac210, tailcall)
uint64_t main_f_eac210(void* a0) {
    return main::place_name(((uintptr_t)((char*)(a0) + 16)));
}

// sub_ead360  (orig 0xead360, tailcall)
uint64_t main_f_ead360(void* a0) {
    return main::sub_ead240(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ead370  (orig 0xead370, tailcall)
void main_f_ead370() { main::sub_ead240(); }

// sub_ead380  (orig 0xead380, tailcall)
uint64_t main_f_ead380(void* a0) {
    return main::sub_ead240(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eae950  (orig 0xeae950, tailcall)
void main_f_eae950() { main::sub_eae960(); }

// sub_eafd10  (orig 0xeafd10, tailcall)
uint64_t main_f_eafd10(void* a0) {
    return main::sub_eafb00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eafd20  (orig 0xeafd20, tailcall)
uint64_t main_f_eafd20(void* a0) {
    return main::sub_eafb00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eafd30  (orig 0xeafd30, tailcall)
void main_f_eafd30() { main::sub_eafb00(); }

// sub_eafd40  (orig 0xeafd40, tailcall)
uint64_t main_f_eafd40(void* a0) {
    return main::sub_eafb00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eafd50  (orig 0xeafd50, tailcall)
uint64_t main_f_eafd50(void* a0) {
    return main::sub_eafb00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eb28c0  (orig 0xeb28c0, tailcall)
uint64_t main_f_eb28c0(void* a0) {
    return main::sub_eb27d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eb28d0  (orig 0xeb28d0, tailcall)
uint64_t main_f_eb28d0(void* a0) {
    return main::sub_eb27d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eb5790  (orig 0xeb5790, tailcall)
void main_f_eb5790() { main::sub_eb57c0(); }

// sub_eb57a0  (orig 0xeb57a0, tailcall)
void main_f_eb57a0() { main::sub_eb57c0(); }

// sub_eb57b0  (orig 0xeb57b0, tailcall)
void main_f_eb57b0() { main::sub_eb57c0(); }

// sub_eb6080  (orig 0xeb6080, tailcall)
void main_f_eb6080() { main::sub_e7feb0(); }

// sub_eb6090  (orig 0xeb6090, tailcall)
void main_f_eb6090() { main::sub_eb6100(); }

// sub_eb60a0  (orig 0xeb60a0, tailcall)
uint64_t main_f_eb60a0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eb60b0  (orig 0xeb60b0, tailcall)
uint64_t main_f_eb60b0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eb60c0  (orig 0xeb60c0, tailcall)
void main_f_eb60c0() { main::sub_eb6100(); }

// sub_eb60d0  (orig 0xeb60d0, tailcall)
void main_f_eb60d0() { main::sub_eb6100(); }

// sub_eb60e0  (orig 0xeb60e0, tailcall)
uint64_t main_f_eb60e0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eb60f0  (orig 0xeb60f0, tailcall)
uint64_t main_f_eb60f0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eb76a0  (orig 0xeb76a0, tailcall)
uint64_t main_f_eb76a0(void* a0) {
    return main::sub_14eaa70(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1488))));
}

// sub_eb7720  (orig 0xeb7720, tailcall)
uint64_t main_f_eb7720(void* a0) {
    return main::sub_14eaaf0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1488))));
}

// sub_eb7950  (orig 0xeb7950, tailcall)
void main_f_eb7950() { main::sub_eb7ce0(); }

// sub_eb7a20  (orig 0xeb7a20, tailcall)
void main_f_eb7a20() { main::sub_eb7ce0(); }

// sub_eb7a30  (orig 0xeb7a30, tailcall)
void main_f_eb7a30() { main::sub_eb7ce0(); }

// sub_eb8300  (orig 0xeb8300, tailcall)
void main_f_eb8300() { main::sub_eb81a0(); }

// sub_eb8380  (orig 0xeb8380, tailcall)
uint64_t main_f_eb8380(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eb8390  (orig 0xeb8390, tailcall)
uint64_t main_f_eb8390(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eb8480  (orig 0xeb8480, tailcall)
uint64_t main_f_eb8480(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eb8490  (orig 0xeb8490, tailcall)
uint64_t main_f_eb8490(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eb8f50  (orig 0xeb8f50, tailcall)
void main_f_eb8f50() { main::sub_eb84a0(); }

// sub_eb8f60  (orig 0xeb8f60, tailcall)
uint64_t main_f_eb8f60(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eb8f80  (orig 0xeb8f80, tailcall)
void main_f_eb8f80() { main::sub_eb84a0(); }

// sub_eb8f90  (orig 0xeb8f90, tailcall)
void main_f_eb8f90() { main::sub_eb84a0(); }

// sub_eb8fa0  (orig 0xeb8fa0, tailcall)
uint64_t main_f_eb8fa0(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ebb450  (orig 0xebb450, tailcall)
void main_f_ebb450() { main::sub_ebb330(); }

// sub_ebb4d0  (orig 0xebb4d0, tailcall)
uint64_t main_f_ebb4d0(void* a0) {
    return main::sub_ebb330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ebb4e0  (orig 0xebb4e0, tailcall)
uint64_t main_f_ebb4e0(void* a0) {
    return main::sub_ebb330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ebb5d0  (orig 0xebb5d0, tailcall)
uint64_t main_f_ebb5d0(void* a0) {
    return main::sub_ebb330(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ebb5e0  (orig 0xebb5e0, tailcall)
uint64_t main_f_ebb5e0(void* a0) {
    return main::sub_ebb330(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ebca50  (orig 0xebca50, tailcall)
void main_f_ebca50() { main::sub_ebb5f0(); }

// sub_ebca60  (orig 0xebca60, tailcall)
void main_f_ebca60() { main::sub_ebb700(); }

// sub_ebca70  (orig 0xebca70, tailcall)
uint64_t main_f_ebca70(void* a0) {
    return main::sub_ebb5f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ebca80  (orig 0xebca80, tailcall)
uint64_t main_f_ebca80(void* a0) {
    return main::sub_ebb5f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ebca90  (orig 0xebca90, tailcall)
void main_f_ebca90() { main::sub_ebb700(); }

// sub_ebcaa0  (orig 0xebcaa0, tailcall)
void main_f_ebcaa0() { main::sub_ebb700(); }

// sub_ebcab0  (orig 0xebcab0, tailcall)
uint64_t main_f_ebcab0(void* a0) {
    return main::sub_ebb5f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ebcac0  (orig 0xebcac0, tailcall)
uint64_t main_f_ebcac0(void* a0) {
    return main::sub_ebb5f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ebff50  (orig 0xebff50, tailcall)
void main_f_ebff50() { main::sub_eb81a0(); }

// sub_ebffd0  (orig 0xebffd0, tailcall)
uint64_t main_f_ebffd0(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ebffe0  (orig 0xebffe0, tailcall)
uint64_t main_f_ebffe0(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ec00d0  (orig 0xec00d0, tailcall)
uint64_t main_f_ec00d0(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ec00e0  (orig 0xec00e0, tailcall)
uint64_t main_f_ec00e0(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ec06d0  (orig 0xec06d0, tailcall)
void main_f_ec06d0() { main::sub_eb81a0(); }

// sub_ec0750  (orig 0xec0750, tailcall)
uint64_t main_f_ec0750(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ec0760  (orig 0xec0760, tailcall)
uint64_t main_f_ec0760(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ec0850  (orig 0xec0850, tailcall)
uint64_t main_f_ec0850(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ec0860  (orig 0xec0860, tailcall)
uint64_t main_f_ec0860(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ec1e90  (orig 0xec1e90, tailcall)
void main_f_ec1e90() { main::sub_ec1d70(); }

// sub_ec1ea0  (orig 0xec1ea0, tailcall)
void main_f_ec1ea0() { main::sub_ec1f10(); }

// sub_ec1eb0  (orig 0xec1eb0, tailcall)
uint64_t main_f_ec1eb0(void* a0) {
    return main::sub_ec1d70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ec1ec0  (orig 0xec1ec0, tailcall)
uint64_t main_f_ec1ec0(void* a0) {
    return main::sub_ec1d70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ec1ed0  (orig 0xec1ed0, tailcall)
void main_f_ec1ed0() { main::sub_ec1f10(); }

// sub_ec1ee0  (orig 0xec1ee0, tailcall)
void main_f_ec1ee0() { main::sub_ec1f10(); }

// sub_ec1ef0  (orig 0xec1ef0, tailcall)
uint64_t main_f_ec1ef0(void* a0) {
    return main::sub_ec1d70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ec1f00  (orig 0xec1f00, tailcall)
uint64_t main_f_ec1f00(void* a0) {
    return main::sub_ec1d70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ec3190  (orig 0xec3190, tailcall)
void main_f_ec3190() { main::sub_ec2fc0(); }

// sub_ec31a0  (orig 0xec31a0, tailcall)
void main_f_ec31a0() { main::sub_ec3210(); }

// sub_ec31b0  (orig 0xec31b0, tailcall)
uint64_t main_f_ec31b0(void* a0) {
    return main::sub_ec2fc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ec31c0  (orig 0xec31c0, tailcall)
uint64_t main_f_ec31c0(void* a0) {
    return main::sub_ec2fc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ec31d0  (orig 0xec31d0, tailcall)
void main_f_ec31d0() { main::sub_ec3210(); }

// sub_ec31e0  (orig 0xec31e0, tailcall)
void main_f_ec31e0() { main::sub_ec3210(); }

// sub_ec31f0  (orig 0xec31f0, tailcall)
uint64_t main_f_ec31f0(void* a0) {
    return main::sub_ec2fc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ec3200  (orig 0xec3200, tailcall)
uint64_t main_f_ec3200(void* a0) {
    return main::sub_ec2fc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ec6410  (orig 0xec6410, tailcall)
void main_f_ec6410() { main::sub_ec65c0(); }

// sub_ec64e0  (orig 0xec64e0, tailcall)
void main_f_ec64e0() { main::sub_ec65c0(); }

// sub_ec64f0  (orig 0xec64f0, tailcall)
void main_f_ec64f0() { main::sub_ec65c0(); }

// sub_ec6f80  (orig 0xec6f80, tailcall)
void main_f_ec6f80() { main::sub_ec71b0(); }

// sub_ec7090  (orig 0xec7090, tailcall)
void main_f_ec7090() { main::sub_ec71b0(); }

// sub_ec70a0  (orig 0xec70a0, tailcall)
void main_f_ec70a0() { main::sub_ec71b0(); }

// sub_ec8870  (orig 0xec8870, tailcall)
uint64_t main_f_ec8870(void* a0) {
    return main::sub_ec85d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ec8880  (orig 0xec8880, tailcall)
uint64_t main_f_ec8880(void* a0) {
    return main::sub_ec85d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ec8890  (orig 0xec8890, tailcall)
void main_f_ec8890() { main::sub_ec85d0(); }

// sub_ec88a0  (orig 0xec88a0, tailcall)
uint64_t main_f_ec88a0(void* a0) {
    return main::sub_ec85d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ec88b0  (orig 0xec88b0, tailcall)
uint64_t main_f_ec88b0(void* a0) {
    return main::sub_ec85d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ec9550  (orig 0xec9550, tailcall)
uint64_t main_f_ec9550(void* a0) {
    return main::sub_ec9460(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ec9560  (orig 0xec9560, tailcall)
uint64_t main_f_ec9560(void* a0) {
    return main::sub_ec9460(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ed0bd0  (orig 0xed0bd0, tailcall)
void main_f_ed0bd0() { main_f_5db430(); }

// sub_ed1750  (orig 0xed1750, tailcall)
void main_f_ed1750() { main::sub_ed1640(); }

// sub_ed17d0  (orig 0xed17d0, tailcall)
uint64_t main_f_ed17d0(void* a0) {
    return main::sub_ed1640(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ed17e0  (orig 0xed17e0, tailcall)
uint64_t main_f_ed17e0(void* a0) {
    return main::sub_ed1640(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ed18d0  (orig 0xed18d0, tailcall)
uint64_t main_f_ed18d0(void* a0) {
    return main::sub_ed1640(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ed18e0  (orig 0xed18e0, tailcall)
uint64_t main_f_ed18e0(void* a0) {
    return main::sub_ed1640(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ed30f0  (orig 0xed30f0, tailcall)
uint64_t main_f_ed30f0(void* a0) {
    return main::sub_5e1110(((uintptr_t)(*(uint64_t*)((char*)(a0) + 336))));
}

// sub_ed33d0  (orig 0xed33d0, tailcall)
uint64_t main_f_ed33d0(void* a0) {
    return main::sub_ed33e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 328))));
}

// sub_ed3650  (orig 0xed3650, tailcall)
uint64_t main_f_ed3650(void* a0) {
    return main::sub_ed3660(((uintptr_t)(*(uint64_t*)((char*)(a0) + 328))));
}

// sub_ed3830  (orig 0xed3830, tailcall)
uint64_t main_f_ed3830(void* a0) {
    return main::sub_ed3840(((uintptr_t)(*(uint64_t*)((char*)(a0) + 328))));
}

// sub_ed3920  (orig 0xed3920, tailcall)
uint64_t main_f_ed3920(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 328));
    return main::sub_68c490(((uintptr_t)(*(uint64_t*)((char*)(p0) + 264))));
}

// sub_ed3930  (orig 0xed3930, tailcall)
uint64_t main_f_ed3930(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 328));
    return main::sub_68c510(((uintptr_t)(*(uint64_t*)((char*)(p0) + 264))));
}

// sub_ed3ae0  (orig 0xed3ae0, tailcall)
uint64_t main_f_ed3ae0(void* a0) {
    return main::sub_ed3af0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 328))));
}

// sub_ed3f20  (orig 0xed3f20, tailcall)
uint64_t main_f_ed3f20(void* a0) {
    return main::sub_ed3f30(((uintptr_t)(*(uint64_t*)((char*)(a0) + 328))));
}

// sub_ed8180  (orig 0xed8180, tailcall)
void main_f_ed8180() { main::sub_ed7ce0(); }

// sub_ed8280  (orig 0xed8280, tailcall)
uint64_t main_f_ed8280(void* a0) {
    return main::sub_ed7ce0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ed8290  (orig 0xed8290, tailcall)
uint64_t main_f_ed8290(void* a0) {
    return main::sub_ed7ce0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ed82a0  (orig 0xed82a0, tailcall)
uint64_t main_f_ed82a0(void* a0) {
    return main::sub_ed8190(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ed82b0  (orig 0xed82b0, tailcall)
uint64_t main_f_ed82b0(void* a0) {
    return main::sub_ed8190(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ed82c0  (orig 0xed82c0, tailcall)
uint64_t main_f_ed82c0(void* a0) {
    return main::sub_ed7ce0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ed82d0  (orig 0xed82d0, tailcall)
uint64_t main_f_ed82d0(void* a0) {
    return main::sub_ed7ce0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ed9a80  (orig 0xed9a80, tailcall)
void main_f_ed9a80() { main::sub_ed9940(); }

// sub_ed9b00  (orig 0xed9b00, tailcall)
uint64_t main_f_ed9b00(void* a0) {
    return main::sub_ed9940(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ed9b10  (orig 0xed9b10, tailcall)
uint64_t main_f_ed9b10(void* a0) {
    return main::sub_ed9940(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ed9d00  (orig 0xed9d00, tailcall)
uint64_t main_f_ed9d00(void* a0) {
    return main::sub_ed9940(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ed9d10  (orig 0xed9d10, tailcall)
uint64_t main_f_ed9d10(void* a0) {
    return main::sub_ed9940(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ede1a0  (orig 0xede1a0, tailcall)
uint64_t main_f_ede1a0(void* a0) {
    return main::sub_edb910(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_ede1b0  (orig 0xede1b0, tailcall)
uint64_t main_f_ede1b0(void* a0) {
    return main::sub_edb9f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_ede1c0  (orig 0xede1c0, tailcall)
uint64_t main_f_ede1c0(void* a0) {
    return main::sub_edbad0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_ede1d0  (orig 0xede1d0, tailcall)
uint64_t main_f_ede1d0(void* a0) {
    return main::sub_edbbb0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_ede1e0  (orig 0xede1e0, tailcall)
uint64_t main_f_ede1e0(void* a0) {
    return main::sub_edbcc0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_ede1f0  (orig 0xede1f0, tailcall)
uint64_t main_f_ede1f0(void* a0) {
    return main::sub_edbdd0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_ede200  (orig 0xede200, tailcall)
uint64_t main_f_ede200(void* a0) {
    return main::sub_edc3d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_ede210  (orig 0xede210, tailcall)
uint64_t main_f_ede210(void* a0) {
    return main::sub_edc9b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_ede220  (orig 0xede220, tailcall)
uint64_t main_f_ede220(void* a0) {
    return main::sub_edcfb0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_ede230  (orig 0xede230, tailcall)
uint64_t main_f_ede230(void* a0) {
    return main::sub_edd150(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_ede240  (orig 0xede240, tailcall)
uint64_t main_f_ede240(void* a0) {
    return main::sub_edd2d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_ee2170  (orig 0xee2170, tailcall)
void main_f_ee2170() { main::sub_ee2040(); }

// sub_ee2180  (orig 0xee2180, tailcall)
void main_f_ee2180() { main::sub_ee21f0(); }

// sub_ee2190  (orig 0xee2190, tailcall)
uint64_t main_f_ee2190(void* a0) {
    return main::sub_ee2040(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ee21a0  (orig 0xee21a0, tailcall)
uint64_t main_f_ee21a0(void* a0) {
    return main::sub_ee2040(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ee21b0  (orig 0xee21b0, tailcall)
void main_f_ee21b0() { main::sub_ee21f0(); }

// sub_ee21c0  (orig 0xee21c0, tailcall)
void main_f_ee21c0() { main::sub_ee21f0(); }

// sub_ee21d0  (orig 0xee21d0, tailcall)
uint64_t main_f_ee21d0(void* a0) {
    return main::sub_ee2040(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ee21e0  (orig 0xee21e0, tailcall)
uint64_t main_f_ee21e0(void* a0) {
    return main::sub_ee2040(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ee3430  (orig 0xee3430, tailcall)
void main_f_ee3430() { main::sub_ce0(); }

// sub_ee40b0  (orig 0xee40b0, tailcall)
void main_f_ee40b0() { main_f_5db430(); }

// sub_ee57a0  (orig 0xee57a0, tailcall)
uint64_t main_f_ee57a0(void* a0) {
    return main::sub_ee5690(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ee57b0  (orig 0xee57b0, tailcall)
uint64_t main_f_ee57b0(void* a0) {
    return main::sub_ee5690(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ee57c0  (orig 0xee57c0, tailcall)
void main_f_ee57c0() { main::sub_ee5690(); }

// sub_ee57d0  (orig 0xee57d0, tailcall)
uint64_t main_f_ee57d0(void* a0) {
    return main::sub_ee5690(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ee57e0  (orig 0xee57e0, tailcall)
uint64_t main_f_ee57e0(void* a0) {
    return main::sub_ee5690(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ee9f90  (orig 0xee9f90, tailcall)
uint64_t main_f_ee9f90(void* a0) {
    return main::sub_ee9e90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ee9fa0  (orig 0xee9fa0, tailcall)
uint64_t main_f_ee9fa0(void* a0) {
    return main::sub_ee9e90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ee9fb0  (orig 0xee9fb0, tailcall)
void main_f_ee9fb0() { main::sub_ee9e90(); }

// sub_ee9fc0  (orig 0xee9fc0, tailcall)
uint64_t main_f_ee9fc0(void* a0) {
    return main::sub_ee9e90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ee9fd0  (orig 0xee9fd0, tailcall)
uint64_t main_f_ee9fd0(void* a0) {
    return main::sub_ee9e90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eec450  (orig 0xeec450, tailcall)
void main_f_eec450() { main::sub_ce0(); }

// sub_eed310  (orig 0xeed310, tailcall)
void main_f_eed310() { main::sub_eed340(); }

// sub_eed320  (orig 0xeed320, tailcall)
void main_f_eed320() { main::sub_eed340(); }

// sub_eed330  (orig 0xeed330, tailcall)
void main_f_eed330() { main::sub_eed340(); }

// sub_eedb60  (orig 0xeedb60, tailcall)
void main_f_eedb60() { main::sub_eed9c0(); }

// sub_eedc20  (orig 0xeedc20, tailcall)
uint64_t main_f_eedc20(void* a0) {
    return main::sub_eed9c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eedc30  (orig 0xeedc30, tailcall)
uint64_t main_f_eedc30(void* a0) {
    return main::sub_eed9c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eedda0  (orig 0xeedda0, tailcall)
uint64_t main_f_eedda0(void* a0) {
    return main::sub_eed9c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eeddb0  (orig 0xeeddb0, tailcall)
uint64_t main_f_eeddb0(void* a0) {
    return main::sub_eed9c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eeeb60  (orig 0xeeeb60, tailcall)
void main_f_eeeb60() { main::sub_e7c4c0(); }

// sub_eeeb70  (orig 0xeeeb70, tailcall)
void main_f_eeeb70() { main::sub_eeebe0(); }

// sub_eeeb80  (orig 0xeeeb80, tailcall)
uint64_t main_f_eeeb80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eeeb90  (orig 0xeeeb90, tailcall)
uint64_t main_f_eeeb90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eeeba0  (orig 0xeeeba0, tailcall)
void main_f_eeeba0() { main::sub_eeebe0(); }

// sub_eeebb0  (orig 0xeeebb0, tailcall)
void main_f_eeebb0() { main::sub_eeebe0(); }

// sub_eeebc0  (orig 0xeeebc0, tailcall)
uint64_t main_f_eeebc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eeebd0  (orig 0xeeebd0, tailcall)
uint64_t main_f_eeebd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eef780  (orig 0xeef780, tailcall)
void main_f_eef780() { main::sub_e7feb0(); }

// sub_eef790  (orig 0xeef790, tailcall)
void main_f_eef790() { main::sub_eeee20(); }

// sub_eef7a0  (orig 0xeef7a0, tailcall)
uint64_t main_f_eef7a0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eef7b0  (orig 0xeef7b0, tailcall)
uint64_t main_f_eef7b0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eef7c0  (orig 0xeef7c0, tailcall)
void main_f_eef7c0() { main::sub_eeee20(); }

// sub_eef7d0  (orig 0xeef7d0, tailcall)
void main_f_eef7d0() { main::sub_eeee20(); }

// sub_eef7e0  (orig 0xeef7e0, tailcall)
uint64_t main_f_eef7e0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eef7f0  (orig 0xeef7f0, tailcall)
uint64_t main_f_eef7f0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eef880  (orig 0xeef880, tailcall)
void main_f_eef880() { main::sub_e7c250(); }

// sub_eef890  (orig 0xeef890, tailcall)
void main_f_eef890() { main::sub_eee3a0(); }

// sub_eef8a0  (orig 0xeef8a0, tailcall)
uint64_t main_f_eef8a0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eef8b0  (orig 0xeef8b0, tailcall)
uint64_t main_f_eef8b0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_eef8c0  (orig 0xeef8c0, tailcall)
void main_f_eef8c0() { main::sub_eee3a0(); }

// sub_eef8d0  (orig 0xeef8d0, tailcall)
void main_f_eef8d0() { main::sub_eee3a0(); }

// sub_eef8e0  (orig 0xeef8e0, tailcall)
uint64_t main_f_eef8e0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eef8f0  (orig 0xeef8f0, tailcall)
uint64_t main_f_eef8f0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ef0ab0  (orig 0xef0ab0, tailcall)
void main_f_ef0ab0() { main::sub_ef0c60(); }

// sub_ef0b80  (orig 0xef0b80, tailcall)
void main_f_ef0b80() { main::sub_ef0c60(); }

// sub_ef0b90  (orig 0xef0b90, tailcall)
void main_f_ef0b90() { main::sub_ef0c60(); }

// sub_ef2320  (orig 0xef2320, tailcall)
void main_f_ef2320() { main::sub_ef2180(); }

// sub_ef23e0  (orig 0xef23e0, tailcall)
uint64_t main_f_ef23e0(void* a0) {
    return main::sub_ef2180(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ef23f0  (orig 0xef23f0, tailcall)
uint64_t main_f_ef23f0(void* a0) {
    return main::sub_ef2180(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ef2560  (orig 0xef2560, tailcall)
uint64_t main_f_ef2560(void* a0) {
    return main::sub_ef2180(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ef2570  (orig 0xef2570, tailcall)
uint64_t main_f_ef2570(void* a0) {
    return main::sub_ef2180(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ef2910  (orig 0xef2910, tailcall)
void main_f_ef2910() { main::sub_ef2850(); }

// sub_ef2920  (orig 0xef2920, tailcall)
void main_f_ef2920() { main::sub_ef2c60(); }

// sub_ef2930  (orig 0xef2930, tailcall)
uint64_t main_f_ef2930(void* a0) {
    return main::sub_ef2850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ef2940  (orig 0xef2940, tailcall)
uint64_t main_f_ef2940(void* a0) {
    return main::sub_ef2850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ef2950  (orig 0xef2950, tailcall)
void main_f_ef2950() { main::sub_ef2c60(); }

// sub_ef2960  (orig 0xef2960, tailcall)
void main_f_ef2960() { main::sub_ef2c60(); }

// sub_ef2970  (orig 0xef2970, tailcall)
uint64_t main_f_ef2970(void* a0) {
    return main::sub_ef2850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ef2980  (orig 0xef2980, tailcall)
uint64_t main_f_ef2980(void* a0) {
    return main::sub_ef2850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ef4580  (orig 0xef4580, tailcall)
uint64_t main_f_ef4580(void* a0) {
    return main::sub_eb75e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1672))));
}

// sub_ef9a10  (orig 0xef9a10, tailcall)
void main_f_ef9a10() { main::sub_e7c4c0(); }

// sub_ef9a20  (orig 0xef9a20, tailcall)
void main_f_ef9a20() { main::sub_ef9a90(); }

// sub_ef9a30  (orig 0xef9a30, tailcall)
uint64_t main_f_ef9a30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ef9a40  (orig 0xef9a40, tailcall)
uint64_t main_f_ef9a40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ef9a50  (orig 0xef9a50, tailcall)
void main_f_ef9a50() { main::sub_ef9a90(); }

// sub_ef9a60  (orig 0xef9a60, tailcall)
void main_f_ef9a60() { main::sub_ef9a90(); }

// sub_ef9a70  (orig 0xef9a70, tailcall)
uint64_t main_f_ef9a70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ef9a80  (orig 0xef9a80, tailcall)
uint64_t main_f_ef9a80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_efa570  (orig 0xefa570, tailcall)
void main_f_efa570() { main::sub_e7c4c0(); }

// sub_efa580  (orig 0xefa580, tailcall)
void main_f_efa580() { main::sub_efa5f0(); }

// sub_efa590  (orig 0xefa590, tailcall)
uint64_t main_f_efa590(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efa5a0  (orig 0xefa5a0, tailcall)
uint64_t main_f_efa5a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efa5b0  (orig 0xefa5b0, tailcall)
void main_f_efa5b0() { main::sub_efa5f0(); }

// sub_efa5c0  (orig 0xefa5c0, tailcall)
void main_f_efa5c0() { main::sub_efa5f0(); }

// sub_efa5d0  (orig 0xefa5d0, tailcall)
uint64_t main_f_efa5d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_efa5e0  (orig 0xefa5e0, tailcall)
uint64_t main_f_efa5e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_efb000  (orig 0xefb000, tailcall)
void main_f_efb000() { main::sub_e7c4c0(); }

// sub_efb010  (orig 0xefb010, tailcall)
void main_f_efb010() { main::sub_efb080(); }

// sub_efb020  (orig 0xefb020, tailcall)
uint64_t main_f_efb020(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efb030  (orig 0xefb030, tailcall)
uint64_t main_f_efb030(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efb040  (orig 0xefb040, tailcall)
void main_f_efb040() { main::sub_efb080(); }

// sub_efb050  (orig 0xefb050, tailcall)
void main_f_efb050() { main::sub_efb080(); }

// sub_efb060  (orig 0xefb060, tailcall)
uint64_t main_f_efb060(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_efb070  (orig 0xefb070, tailcall)
uint64_t main_f_efb070(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_efb4e0  (orig 0xefb4e0, tailcall)
void main_f_efb4e0() { main::sub_c277c0(); }

// sub_efb4f0  (orig 0xefb4f0, tailcall)
uint64_t main_f_efb4f0(void* a0) {
    return main::sub_c277c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efb500  (orig 0xefb500, tailcall)
uint64_t main_f_efb500(void* a0) {
    return main::sub_c277c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efbf80  (orig 0xefbf80, tailcall)
void main_f_efbf80() { main::sub_efbfb0(); }

// sub_efbf90  (orig 0xefbf90, tailcall)
void main_f_efbf90() { main::sub_efbfb0(); }

// sub_efbfa0  (orig 0xefbfa0, tailcall)
void main_f_efbfa0() { main::sub_efbfb0(); }

// sub_efcb30  (orig 0xefcb30, tailcall)
uint64_t main_f_efcb30(void* a0) {
    return main::sub_efca30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efcb40  (orig 0xefcb40, tailcall)
uint64_t main_f_efcb40(void* a0) {
    return main::sub_efca30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_efcb50  (orig 0xefcb50, tailcall)
void main_f_efcb50() { main::sub_efca30(); }

// sub_efcb60  (orig 0xefcb60, tailcall)
uint64_t main_f_efcb60(void* a0) {
    return main::sub_efca30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efcb70  (orig 0xefcb70, tailcall)
uint64_t main_f_efcb70(void* a0) {
    return main::sub_efca30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_efdeb0  (orig 0xefdeb0, tailcall)
void main_f_efdeb0() { main::sub_efe300(); }

// sub_efdec0  (orig 0xefdec0, tailcall)
void main_f_efdec0() { main::sub_efe300(); }

// sub_efded0  (orig 0xefded0, tailcall)
void main_f_efded0() { main::sub_efe300(); }

// sub_efe0a0  (orig 0xefe0a0, tailcall)
void main_f_efe0a0() { main::sub_efdee0(); }

// sub_efe160  (orig 0xefe160, tailcall)
uint64_t main_f_efe160(void* a0) {
    return main::sub_efdee0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efe170  (orig 0xefe170, tailcall)
uint64_t main_f_efe170(void* a0) {
    return main::sub_efdee0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efe2e0  (orig 0xefe2e0, tailcall)
uint64_t main_f_efe2e0(void* a0) {
    return main::sub_efdee0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_efe2f0  (orig 0xefe2f0, tailcall)
uint64_t main_f_efe2f0(void* a0) {
    return main::sub_efdee0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_efe880  (orig 0xefe880, tailcall)
void main_f_efe880() { main::sub_e7c4c0(); }

// sub_efe890  (orig 0xefe890, tailcall)
void main_f_efe890() { main::sub_efe900(); }

// sub_efe8a0  (orig 0xefe8a0, tailcall)
uint64_t main_f_efe8a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efe8b0  (orig 0xefe8b0, tailcall)
uint64_t main_f_efe8b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_efe8c0  (orig 0xefe8c0, tailcall)
void main_f_efe8c0() { main::sub_efe900(); }

// sub_efe8d0  (orig 0xefe8d0, tailcall)
void main_f_efe8d0() { main::sub_efe900(); }

// sub_efe8e0  (orig 0xefe8e0, tailcall)
uint64_t main_f_efe8e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_efe8f0  (orig 0xefe8f0, tailcall)
uint64_t main_f_efe8f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_eff3c0  (orig 0xeff3c0, tailcall)
void main_f_eff3c0() { main::sub_eff3f0(); }

// sub_eff3d0  (orig 0xeff3d0, tailcall)
void main_f_eff3d0() { main::sub_eff3f0(); }

// sub_eff3e0  (orig 0xeff3e0, tailcall)
void main_f_eff3e0() { main::sub_eff3f0(); }

// sub_f015f0  (orig 0xf015f0, tailcall)
void main_f_f015f0() { main::sub_f01320(); }

// sub_f016b0  (orig 0xf016b0, tailcall)
uint64_t main_f_f016b0(void* a0) {
    return main::sub_f01320(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f016c0  (orig 0xf016c0, tailcall)
uint64_t main_f_f016c0(void* a0) {
    return main::sub_f01320(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f01830  (orig 0xf01830, tailcall)
uint64_t main_f_f01830(void* a0) {
    return main::sub_f01320(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f01840  (orig 0xf01840, tailcall)
uint64_t main_f_f01840(void* a0) {
    return main::sub_f01320(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f01850  (orig 0xf01850, tailcall)
void main_f_f01850() { main::sub_e7c250(); }

// sub_f01860  (orig 0xf01860, tailcall)
void main_f_f01860() { main::sub_f019e0(); }

// sub_f01870  (orig 0xf01870, tailcall)
uint64_t main_f_f01870(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f01880  (orig 0xf01880, tailcall)
uint64_t main_f_f01880(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f01890  (orig 0xf01890, tailcall)
void main_f_f01890() { main::sub_f019e0(); }

// sub_f018a0  (orig 0xf018a0, tailcall)
void main_f_f018a0() { main::sub_f019e0(); }

// sub_f018b0  (orig 0xf018b0, tailcall)
uint64_t main_f_f018b0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f018c0  (orig 0xf018c0, tailcall)
uint64_t main_f_f018c0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f04290  (orig 0xf04290, tailcall)
void main_f_f04290() { main::sub_e7c4c0(); }

// sub_f042a0  (orig 0xf042a0, tailcall)
void main_f_f042a0() { main::sub_f04310(); }

// sub_f042b0  (orig 0xf042b0, tailcall)
uint64_t main_f_f042b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f042c0  (orig 0xf042c0, tailcall)
uint64_t main_f_f042c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f042d0  (orig 0xf042d0, tailcall)
void main_f_f042d0() { main::sub_f04310(); }

// sub_f042e0  (orig 0xf042e0, tailcall)
void main_f_f042e0() { main::sub_f04310(); }

// sub_f042f0  (orig 0xf042f0, tailcall)
uint64_t main_f_f042f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f04300  (orig 0xf04300, tailcall)
uint64_t main_f_f04300(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f04540  (orig 0xf04540, tailcall)
void main_f_f04540() { main::sub_e7c4c0(); }

// sub_f04550  (orig 0xf04550, tailcall)
void main_f_f04550() { main::sub_f045c0(); }

// sub_f04560  (orig 0xf04560, tailcall)
uint64_t main_f_f04560(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f04570  (orig 0xf04570, tailcall)
uint64_t main_f_f04570(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f04580  (orig 0xf04580, tailcall)
void main_f_f04580() { main::sub_f045c0(); }

// sub_f04590  (orig 0xf04590, tailcall)
void main_f_f04590() { main::sub_f045c0(); }

// sub_f045a0  (orig 0xf045a0, tailcall)
uint64_t main_f_f045a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f045b0  (orig 0xf045b0, tailcall)
uint64_t main_f_f045b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f04870  (orig 0xf04870, tailcall)
void main_f_f04870() { main::sub_e7c4c0(); }

// sub_f04880  (orig 0xf04880, tailcall)
void main_f_f04880() { main::sub_f048f0(); }

// sub_f04890  (orig 0xf04890, tailcall)
uint64_t main_f_f04890(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f048a0  (orig 0xf048a0, tailcall)
uint64_t main_f_f048a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f048b0  (orig 0xf048b0, tailcall)
void main_f_f048b0() { main::sub_f048f0(); }

// sub_f048c0  (orig 0xf048c0, tailcall)
void main_f_f048c0() { main::sub_f048f0(); }

// sub_f048d0  (orig 0xf048d0, tailcall)
uint64_t main_f_f048d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f048e0  (orig 0xf048e0, tailcall)
uint64_t main_f_f048e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f04e90  (orig 0xf04e90, tailcall)
void main_f_f04e90() { main::sub_e7c4c0(); }

// sub_f04ea0  (orig 0xf04ea0, tailcall)
void main_f_f04ea0() { main::sub_f04f10(); }

// sub_f04eb0  (orig 0xf04eb0, tailcall)
uint64_t main_f_f04eb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f04ec0  (orig 0xf04ec0, tailcall)
uint64_t main_f_f04ec0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f04ed0  (orig 0xf04ed0, tailcall)
void main_f_f04ed0() { main::sub_f04f10(); }

// sub_f04ee0  (orig 0xf04ee0, tailcall)
void main_f_f04ee0() { main::sub_f04f10(); }

// sub_f04ef0  (orig 0xf04ef0, tailcall)
uint64_t main_f_f04ef0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f04f00  (orig 0xf04f00, tailcall)
uint64_t main_f_f04f00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f05460  (orig 0xf05460, tailcall)
void main_f_f05460() { main::sub_e7c4c0(); }

// sub_f05470  (orig 0xf05470, tailcall)
void main_f_f05470() { main::sub_f054e0(); }

// sub_f05480  (orig 0xf05480, tailcall)
uint64_t main_f_f05480(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f05490  (orig 0xf05490, tailcall)
uint64_t main_f_f05490(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f054a0  (orig 0xf054a0, tailcall)
void main_f_f054a0() { main::sub_f054e0(); }

// sub_f054b0  (orig 0xf054b0, tailcall)
void main_f_f054b0() { main::sub_f054e0(); }

// sub_f054c0  (orig 0xf054c0, tailcall)
uint64_t main_f_f054c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f054d0  (orig 0xf054d0, tailcall)
uint64_t main_f_f054d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f05920  (orig 0xf05920, tailcall)
void main_f_f05920() { main::sub_e7c4c0(); }

// sub_f05930  (orig 0xf05930, tailcall)
uint64_t main_f_f05930(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f05940  (orig 0xf05940, tailcall)
uint64_t main_f_f05940(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f05950  (orig 0xf05950, tailcall)
uint64_t main_f_f05950(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f05960  (orig 0xf05960, tailcall)
uint64_t main_f_f05960(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f05af0  (orig 0xf05af0, tailcall)
void main_f_f05af0() { main::sub_e7c4c0(); }

// sub_f05b00  (orig 0xf05b00, tailcall)
uint64_t main_f_f05b00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f05b10  (orig 0xf05b10, tailcall)
uint64_t main_f_f05b10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f05b20  (orig 0xf05b20, tailcall)
uint64_t main_f_f05b20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f05b30  (orig 0xf05b30, tailcall)
uint64_t main_f_f05b30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f06240  (orig 0xf06240, tailcall)
void main_f_f06240() { main::sub_f06430(); }

// sub_f06330  (orig 0xf06330, tailcall)
void main_f_f06330() { main::sub_f06430(); }

// sub_f06340  (orig 0xf06340, tailcall)
void main_f_f06340() { main::sub_f06430(); }

// sub_f08040  (orig 0xf08040, tailcall)
void main_f_f08040() { main::sub_f07f40(); }

// sub_f08050  (orig 0xf08050, tailcall)
uint64_t main_f_f08050(void* a0) {
    return main::sub_f07f40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f08060  (orig 0xf08060, tailcall)
uint64_t main_f_f08060(void* a0) {
    return main::sub_f07f40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f08070  (orig 0xf08070, tailcall)
void main_f_f08070() { main::sub_ce0(); }

// sub_f080f0  (orig 0xf080f0, tailcall)
void main_f_f080f0() { main::sub_ce0(); }

// sub_f081c0  (orig 0xf081c0, tailcall)
void main_f_f081c0() { main::sub_ce0(); }

// sub_f08220  (orig 0xf08220, tailcall)
void main_f_f08220() { main::sub_ce0(); }

// sub_f08390  (orig 0xf08390, tailcall)
uint64_t main_f_f08390(void* a0) {
    return main::sub_eb6530(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_f083b0  (orig 0xf083b0, tailcall)
void main_f_f083b0() { main::sub_e7c4c0(); }

// sub_f083c0  (orig 0xf083c0, tailcall)
uint64_t main_f_f083c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f083d0  (orig 0xf083d0, tailcall)
uint64_t main_f_f083d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f083e0  (orig 0xf083e0, tailcall)
uint64_t main_f_f083e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f083f0  (orig 0xf083f0, tailcall)
uint64_t main_f_f083f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f08610  (orig 0xf08610, tailcall)
void main_f_f08610() { main::sub_e7c4c0(); }

// sub_f08620  (orig 0xf08620, tailcall)
void main_f_f08620() { main::sub_f08690(); }

// sub_f08630  (orig 0xf08630, tailcall)
uint64_t main_f_f08630(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f08640  (orig 0xf08640, tailcall)
uint64_t main_f_f08640(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f08650  (orig 0xf08650, tailcall)
void main_f_f08650() { main::sub_f08690(); }

// sub_f08660  (orig 0xf08660, tailcall)
void main_f_f08660() { main::sub_f08690(); }

// sub_f08670  (orig 0xf08670, tailcall)
uint64_t main_f_f08670(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f08680  (orig 0xf08680, tailcall)
uint64_t main_f_f08680(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f08b10  (orig 0xf08b10, tailcall)
void main_f_f08b10() { main::sub_f08cc0(); }

// sub_f08be0  (orig 0xf08be0, tailcall)
void main_f_f08be0() { main::sub_f08cc0(); }

// sub_f08bf0  (orig 0xf08bf0, tailcall)
void main_f_f08bf0() { main::sub_f08cc0(); }

// sub_f09050  (orig 0xf09050, tailcall)
void main_f_f09050() { main::sub_e7c4c0(); }

// sub_f09060  (orig 0xf09060, tailcall)
uint64_t main_f_f09060(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f09070  (orig 0xf09070, tailcall)
uint64_t main_f_f09070(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f09080  (orig 0xf09080, tailcall)
uint64_t main_f_f09080(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f09090  (orig 0xf09090, tailcall)
uint64_t main_f_f09090(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f092b0  (orig 0xf092b0, tailcall)
void main_f_f092b0() { main::sub_e7c4c0(); }

// sub_f092c0  (orig 0xf092c0, tailcall)
uint64_t main_f_f092c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f092d0  (orig 0xf092d0, tailcall)
uint64_t main_f_f092d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f092e0  (orig 0xf092e0, tailcall)
uint64_t main_f_f092e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f092f0  (orig 0xf092f0, tailcall)
uint64_t main_f_f092f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f09780  (orig 0xf09780, tailcall)
void main_f_f09780() { main::sub_e7c4c0(); }

// sub_f09790  (orig 0xf09790, tailcall)
void main_f_f09790() { main::sub_f09800(); }

// sub_f097a0  (orig 0xf097a0, tailcall)
uint64_t main_f_f097a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f097b0  (orig 0xf097b0, tailcall)
uint64_t main_f_f097b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f097c0  (orig 0xf097c0, tailcall)
void main_f_f097c0() { main::sub_f09800(); }

// sub_f097d0  (orig 0xf097d0, tailcall)
void main_f_f097d0() { main::sub_f09800(); }

// sub_f097e0  (orig 0xf097e0, tailcall)
uint64_t main_f_f097e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f097f0  (orig 0xf097f0, tailcall)
uint64_t main_f_f097f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0a500  (orig 0xf0a500, tailcall)
void main_f_f0a500() { main::sub_e7c4c0(); }

// sub_f0a510  (orig 0xf0a510, tailcall)
uint64_t main_f_f0a510(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0a520  (orig 0xf0a520, tailcall)
uint64_t main_f_f0a520(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0a530  (orig 0xf0a530, tailcall)
uint64_t main_f_f0a530(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0a540  (orig 0xf0a540, tailcall)
uint64_t main_f_f0a540(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0a7a0  (orig 0xf0a7a0, tailcall)
void main_f_f0a7a0() { main::sub_e7c4c0(); }

// sub_f0a7b0  (orig 0xf0a7b0, tailcall)
uint64_t main_f_f0a7b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0a7c0  (orig 0xf0a7c0, tailcall)
uint64_t main_f_f0a7c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0a7d0  (orig 0xf0a7d0, tailcall)
uint64_t main_f_f0a7d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0a7e0  (orig 0xf0a7e0, tailcall)
uint64_t main_f_f0a7e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0a920  (orig 0xf0a920, tailcall)
void main_f_f0a920() { main::sub_e7feb0(); }

// sub_f0a930  (orig 0xf0a930, tailcall)
void main_f_f0a930() { main::sub_f0a9a0(); }

// sub_f0a940  (orig 0xf0a940, tailcall)
uint64_t main_f_f0a940(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0a950  (orig 0xf0a950, tailcall)
uint64_t main_f_f0a950(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0a960  (orig 0xf0a960, tailcall)
void main_f_f0a960() { main::sub_f0a9a0(); }

// sub_f0a970  (orig 0xf0a970, tailcall)
void main_f_f0a970() { main::sub_f0a9a0(); }

// sub_f0a980  (orig 0xf0a980, tailcall)
uint64_t main_f_f0a980(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0a990  (orig 0xf0a990, tailcall)
uint64_t main_f_f0a990(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0b450  (orig 0xf0b450, tailcall)
void main_f_f0b450() { main::sub_e7feb0(); }

// sub_f0b460  (orig 0xf0b460, tailcall)
void main_f_f0b460() { main::sub_f04b30(); }

// sub_f0b470  (orig 0xf0b470, tailcall)
uint64_t main_f_f0b470(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0b480  (orig 0xf0b480, tailcall)
uint64_t main_f_f0b480(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0b490  (orig 0xf0b490, tailcall)
void main_f_f0b490() { main::sub_f04b30(); }

// sub_f0b4a0  (orig 0xf0b4a0, tailcall)
void main_f_f0b4a0() { main::sub_f04b30(); }

// sub_f0b4b0  (orig 0xf0b4b0, tailcall)
uint64_t main_f_f0b4b0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0b4c0  (orig 0xf0b4c0, tailcall)
uint64_t main_f_f0b4c0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0b850  (orig 0xf0b850, tailcall)
void main_f_f0b850() { main::sub_e7feb0(); }

// sub_f0b860  (orig 0xf0b860, tailcall)
void main_f_f0b860() { main::sub_f0b8d0(); }

// sub_f0b870  (orig 0xf0b870, tailcall)
uint64_t main_f_f0b870(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0b880  (orig 0xf0b880, tailcall)
uint64_t main_f_f0b880(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0b890  (orig 0xf0b890, tailcall)
void main_f_f0b890() { main::sub_f0b8d0(); }

// sub_f0b8a0  (orig 0xf0b8a0, tailcall)
void main_f_f0b8a0() { main::sub_f0b8d0(); }

// sub_f0b8b0  (orig 0xf0b8b0, tailcall)
uint64_t main_f_f0b8b0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0b8c0  (orig 0xf0b8c0, tailcall)
uint64_t main_f_f0b8c0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0c4d0  (orig 0xf0c4d0, tailcall)
void main_f_f0c4d0() { main::sub_e7feb0(); }

// sub_f0c4e0  (orig 0xf0c4e0, tailcall)
void main_f_f0c4e0() { main::sub_f09930(); }

// sub_f0c4f0  (orig 0xf0c4f0, tailcall)
uint64_t main_f_f0c4f0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0c500  (orig 0xf0c500, tailcall)
uint64_t main_f_f0c500(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0c510  (orig 0xf0c510, tailcall)
void main_f_f0c510() { main::sub_f09930(); }

// sub_f0c520  (orig 0xf0c520, tailcall)
void main_f_f0c520() { main::sub_f09930(); }

// sub_f0c530  (orig 0xf0c530, tailcall)
uint64_t main_f_f0c530(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0c540  (orig 0xf0c540, tailcall)
uint64_t main_f_f0c540(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0cba0  (orig 0xf0cba0, tailcall)
void main_f_f0cba0() { main::sub_e7feb0(); }

// sub_f0cbb0  (orig 0xf0cbb0, tailcall)
void main_f_f0cbb0() { main::sub_f05610(); }

// sub_f0cbc0  (orig 0xf0cbc0, tailcall)
uint64_t main_f_f0cbc0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0cbd0  (orig 0xf0cbd0, tailcall)
uint64_t main_f_f0cbd0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0cbe0  (orig 0xf0cbe0, tailcall)
void main_f_f0cbe0() { main::sub_f05610(); }

// sub_f0cbf0  (orig 0xf0cbf0, tailcall)
void main_f_f0cbf0() { main::sub_f05610(); }

// sub_f0cc00  (orig 0xf0cc00, tailcall)
uint64_t main_f_f0cc00(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0cc10  (orig 0xf0cc10, tailcall)
uint64_t main_f_f0cc10(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0e070  (orig 0xf0e070, tailcall)
void main_f_f0e070() { main::sub_f0ded0(); }

// sub_f0e130  (orig 0xf0e130, tailcall)
uint64_t main_f_f0e130(void* a0) {
    return main::sub_f0ded0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0e140  (orig 0xf0e140, tailcall)
uint64_t main_f_f0e140(void* a0) {
    return main::sub_f0ded0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0e2b0  (orig 0xf0e2b0, tailcall)
uint64_t main_f_f0e2b0(void* a0) {
    return main::sub_f0ded0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0e2c0  (orig 0xf0e2c0, tailcall)
uint64_t main_f_f0e2c0(void* a0) {
    return main::sub_f0ded0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0e3a0  (orig 0xf0e3a0, tailcall)
void main_f_f0e3a0() { main::sub_f0e2d0(); }

// sub_f0e3b0  (orig 0xf0e3b0, tailcall)
void main_f_f0e3b0() { main::sub_f0e420(); }

// sub_f0e3c0  (orig 0xf0e3c0, tailcall)
uint64_t main_f_f0e3c0(void* a0) {
    return main::sub_f0e2d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0e3d0  (orig 0xf0e3d0, tailcall)
uint64_t main_f_f0e3d0(void* a0) {
    return main::sub_f0e2d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f0e3e0  (orig 0xf0e3e0, tailcall)
void main_f_f0e3e0() { main::sub_f0e420(); }

// sub_f0e3f0  (orig 0xf0e3f0, tailcall)
void main_f_f0e3f0() { main::sub_f0e420(); }

// sub_f0e400  (orig 0xf0e400, tailcall)
uint64_t main_f_f0e400(void* a0) {
    return main::sub_f0e2d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f0e410  (orig 0xf0e410, tailcall)
uint64_t main_f_f0e410(void* a0) {
    return main::sub_f0e2d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f11310  (orig 0xf11310, tailcall)
void main_f_f11310() { main::sub_f111d0(); }

// sub_f11320  (orig 0xf11320, tailcall)
void main_f_f11320() { main::sub_f0eeb0(); }

// sub_f11330  (orig 0xf11330, tailcall)
uint64_t main_f_f11330(void* a0) {
    return main::sub_f111d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f11340  (orig 0xf11340, tailcall)
uint64_t main_f_f11340(void* a0) {
    return main::sub_f111d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f11350  (orig 0xf11350, tailcall)
void main_f_f11350() { main::sub_f0eeb0(); }

// sub_f11360  (orig 0xf11360, tailcall)
void main_f_f11360() { main::sub_f0eeb0(); }

// sub_f11370  (orig 0xf11370, tailcall)
uint64_t main_f_f11370(void* a0) {
    return main::sub_f111d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f11380  (orig 0xf11380, tailcall)
uint64_t main_f_f11380(void* a0) {
    return main::sub_f111d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f13780  (orig 0xf13780, tailcall)
uint64_t main_f_f13780(void* a0) {
    return main::sub_f135f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f13790  (orig 0xf13790, tailcall)
uint64_t main_f_f13790(void* a0) {
    return main::sub_f135f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f139b0  (orig 0xf139b0, tailcall)
uint64_t main_f_f139b0(void* a0) {
    return main::sub_f105b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_f13b00  (orig 0xf13b00, tailcall)
void main_f_f13b00() { main::sub_e7c4c0(); }

// sub_f13b10  (orig 0xf13b10, tailcall)
uint64_t main_f_f13b10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f13b20  (orig 0xf13b20, tailcall)
uint64_t main_f_f13b20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f13b30  (orig 0xf13b30, tailcall)
uint64_t main_f_f13b30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f13b40  (orig 0xf13b40, tailcall)
uint64_t main_f_f13b40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f13fd0  (orig 0xf13fd0, tailcall)
uint64_t main_f_f13fd0(void* a0) {
    return main::sub_f105b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_f13ff0  (orig 0xf13ff0, tailcall)
void main_f_f13ff0() { main::sub_e7c4c0(); }

// sub_f14000  (orig 0xf14000, tailcall)
void main_f_f14000() { main::sub_f14070(); }

// sub_f14010  (orig 0xf14010, tailcall)
uint64_t main_f_f14010(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f14020  (orig 0xf14020, tailcall)
uint64_t main_f_f14020(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f14030  (orig 0xf14030, tailcall)
void main_f_f14030() { main::sub_f14070(); }

// sub_f14040  (orig 0xf14040, tailcall)
void main_f_f14040() { main::sub_f14070(); }

// sub_f14050  (orig 0xf14050, tailcall)
uint64_t main_f_f14050(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f14060  (orig 0xf14060, tailcall)
uint64_t main_f_f14060(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f160d0  (orig 0xf160d0, tailcall)
void main_f_f160d0() { main::sub_f16300(); }

// sub_f161e0  (orig 0xf161e0, tailcall)
void main_f_f161e0() { main::sub_f16300(); }

// sub_f161f0  (orig 0xf161f0, tailcall)
void main_f_f161f0() { main::sub_f16300(); }

// sub_f1d800  (orig 0xf1d800, tailcall)
void main_f_f1d800() { main::sub_14ba4c0(); }

// sub_f1efb0  (orig 0xf1efb0, tailcall)
void main_f_f1efb0() { main::sub_f1ee10(); }

// sub_f1efc0  (orig 0xf1efc0, tailcall)
void main_f_f1efc0() { main::sub_f1f170(); }

// sub_f1efd0  (orig 0xf1efd0, tailcall)
uint64_t main_f_f1efd0(void* a0) {
    return main::sub_f1ee10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f1efe0  (orig 0xf1efe0, tailcall)
uint64_t main_f_f1efe0(void* a0) {
    return main::sub_f1ee10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f1eff0  (orig 0xf1eff0, tailcall)
void main_f_f1eff0() { main::sub_f1f170(); }

// sub_f1f000  (orig 0xf1f000, tailcall)
void main_f_f1f000() { main::sub_f1f170(); }

// sub_f1f010  (orig 0xf1f010, tailcall)
uint64_t main_f_f1f010(void* a0) {
    return main::sub_f1ee10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f1f020  (orig 0xf1f020, tailcall)
uint64_t main_f_f1f020(void* a0) {
    return main::sub_f1ee10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f21700  (orig 0xf21700, tailcall)
void main_f_f21700() { main::sub_f214a0(); }

// sub_f217c0  (orig 0xf217c0, tailcall)
uint64_t main_f_f217c0(void* a0) {
    return main::sub_f214a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f217d0  (orig 0xf217d0, tailcall)
uint64_t main_f_f217d0(void* a0) {
    return main::sub_f214a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f21940  (orig 0xf21940, tailcall)
uint64_t main_f_f21940(void* a0) {
    return main::sub_f214a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f21950  (orig 0xf21950, tailcall)
uint64_t main_f_f21950(void* a0) {
    return main::sub_f214a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f21c10  (orig 0xf21c10, tailcall)
void main_f_f21c10() { main::sub_f21af0(); }

// sub_f21c20  (orig 0xf21c20, tailcall)
void main_f_f21c20() { main::sub_f21c90(); }

// sub_f21c30  (orig 0xf21c30, tailcall)
uint64_t main_f_f21c30(void* a0) {
    return main::sub_f21af0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f21c40  (orig 0xf21c40, tailcall)
uint64_t main_f_f21c40(void* a0) {
    return main::sub_f21af0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f21c50  (orig 0xf21c50, tailcall)
void main_f_f21c50() { main::sub_f21c90(); }

// sub_f21c60  (orig 0xf21c60, tailcall)
void main_f_f21c60() { main::sub_f21c90(); }

// sub_f21c70  (orig 0xf21c70, tailcall)
uint64_t main_f_f21c70(void* a0) {
    return main::sub_f21af0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f21c80  (orig 0xf21c80, tailcall)
uint64_t main_f_f21c80(void* a0) {
    return main::sub_f21af0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f26620  (orig 0xf26620, tailcall)
uint64_t main_f_f26620(void* a0) {
    return main::sub_14eaa70(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1488))));
}

// sub_f26630  (orig 0xf26630, tailcall)
void main_f_f26630() { main::sub_e7feb0(); }

// sub_f26640  (orig 0xf26640, tailcall)
void main_f_f26640() { main::sub_f266b0(); }

// sub_f26650  (orig 0xf26650, tailcall)
uint64_t main_f_f26650(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f26660  (orig 0xf26660, tailcall)
uint64_t main_f_f26660(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f26670  (orig 0xf26670, tailcall)
void main_f_f26670() { main::sub_f266b0(); }

// sub_f26680  (orig 0xf26680, tailcall)
void main_f_f26680() { main::sub_f266b0(); }

// sub_f26690  (orig 0xf26690, tailcall)
uint64_t main_f_f26690(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f266a0  (orig 0xf266a0, tailcall)
uint64_t main_f_f266a0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f26bb0  (orig 0xf26bb0, tailcall)
void main_f_f26bb0() { main::sub_e7feb0(); }

// sub_f26bc0  (orig 0xf26bc0, tailcall)
void main_f_f26bc0() { main::sub_f26c30(); }

// sub_f26bd0  (orig 0xf26bd0, tailcall)
uint64_t main_f_f26bd0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f26be0  (orig 0xf26be0, tailcall)
uint64_t main_f_f26be0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f26bf0  (orig 0xf26bf0, tailcall)
void main_f_f26bf0() { main::sub_f26c30(); }

// sub_f26c00  (orig 0xf26c00, tailcall)
void main_f_f26c00() { main::sub_f26c30(); }

// sub_f26c10  (orig 0xf26c10, tailcall)
uint64_t main_f_f26c10(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f26c20  (orig 0xf26c20, tailcall)
uint64_t main_f_f26c20(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f28570  (orig 0xf28570, tailcall)
uint64_t main_f_f28570(void* a0) {
    return main::sub_14e1b40(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1520))));
}

// sub_f2a050  (orig 0xf2a050, tailcall)
void main_f_f2a050() { main::sub_f29f40(); }

// sub_f2a060  (orig 0xf2a060, tailcall)
void main_f_f2a060() { main::sub_f2a590(); }

// sub_f2a070  (orig 0xf2a070, tailcall)
uint64_t main_f_f2a070(void* a0) {
    return main::sub_f29f40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f2a080  (orig 0xf2a080, tailcall)
uint64_t main_f_f2a080(void* a0) {
    return main::sub_f29f40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f2a090  (orig 0xf2a090, tailcall)
void main_f_f2a090() { main::sub_f2a590(); }

// sub_f2a0a0  (orig 0xf2a0a0, tailcall)
void main_f_f2a0a0() { main::sub_f2a590(); }

// sub_f2a0b0  (orig 0xf2a0b0, tailcall)
uint64_t main_f_f2a0b0(void* a0) {
    return main::sub_f29f40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f2a0c0  (orig 0xf2a0c0, tailcall)
uint64_t main_f_f2a0c0(void* a0) {
    return main::sub_f29f40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f2caa0  (orig 0xf2caa0, tailcall)
void main_f_f2caa0() { main::sub_e7c4c0(); }

// sub_f2cab0  (orig 0xf2cab0, tailcall)
void main_f_f2cab0() { main::sub_f2cb20(); }

// sub_f2cac0  (orig 0xf2cac0, tailcall)
uint64_t main_f_f2cac0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f2cad0  (orig 0xf2cad0, tailcall)
uint64_t main_f_f2cad0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f2cae0  (orig 0xf2cae0, tailcall)
void main_f_f2cae0() { main::sub_f2cb20(); }

// sub_f2caf0  (orig 0xf2caf0, tailcall)
void main_f_f2caf0() { main::sub_f2cb20(); }

// sub_f2cb00  (orig 0xf2cb00, tailcall)
uint64_t main_f_f2cb00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f2cb10  (orig 0xf2cb10, tailcall)
uint64_t main_f_f2cb10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f34e80  (orig 0xf34e80, tailcall)
void main_f_f34e80() { main::sub_f353a0(); }

// sub_f34ff0  (orig 0xf34ff0, tailcall)
void main_f_f34ff0() { main::sub_f353a0(); }

// sub_f35000  (orig 0xf35000, tailcall)
void main_f_f35000() { main::sub_f353a0(); }

// sub_f36c90  (orig 0xf36c90, tailcall)
void main_f_f36c90() { main::sub_f36e80(); }

// sub_f36d80  (orig 0xf36d80, tailcall)
void main_f_f36d80() { main::sub_f36e80(); }

// sub_f36d90  (orig 0xf36d90, tailcall)
void main_f_f36d90() { main::sub_f36e80(); }

// sub_f37d00  (orig 0xf37d00, tailcall)
void main_f_f37d00() { main::sub_e7c4c0(); }

// sub_f37d10  (orig 0xf37d10, tailcall)
void main_f_f37d10() { main::sub_f37d80(); }

// sub_f37d20  (orig 0xf37d20, tailcall)
uint64_t main_f_f37d20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f37d30  (orig 0xf37d30, tailcall)
uint64_t main_f_f37d30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f37d40  (orig 0xf37d40, tailcall)
void main_f_f37d40() { main::sub_f37d80(); }

// sub_f37d50  (orig 0xf37d50, tailcall)
void main_f_f37d50() { main::sub_f37d80(); }

// sub_f37d60  (orig 0xf37d60, tailcall)
uint64_t main_f_f37d60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f37d70  (orig 0xf37d70, tailcall)
uint64_t main_f_f37d70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f383c0  (orig 0xf383c0, tailcall)
void main_f_f383c0() { main::sub_e7c4c0(); }

// sub_f383d0  (orig 0xf383d0, tailcall)
void main_f_f383d0() { main::sub_f38440(); }

// sub_f383e0  (orig 0xf383e0, tailcall)
uint64_t main_f_f383e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f383f0  (orig 0xf383f0, tailcall)
uint64_t main_f_f383f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f38400  (orig 0xf38400, tailcall)
void main_f_f38400() { main::sub_f38440(); }

// sub_f38410  (orig 0xf38410, tailcall)
void main_f_f38410() { main::sub_f38440(); }

// sub_f38420  (orig 0xf38420, tailcall)
uint64_t main_f_f38420(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f38430  (orig 0xf38430, tailcall)
uint64_t main_f_f38430(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f39740  (orig 0xf39740, tailcall)
void main_f_f39740() { main::sub_f398f0(); }

// sub_f39810  (orig 0xf39810, tailcall)
void main_f_f39810() { main::sub_f398f0(); }

// sub_f39820  (orig 0xf39820, tailcall)
void main_f_f39820() { main::sub_f398f0(); }

// sub_f3aef0  (orig 0xf3aef0, tailcall)
void main_f_f3aef0() { main::sub_e7c4c0(); }

// sub_f3af00  (orig 0xf3af00, tailcall)
void main_f_f3af00() { main::sub_f3af70(); }

// sub_f3af10  (orig 0xf3af10, tailcall)
uint64_t main_f_f3af10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f3af20  (orig 0xf3af20, tailcall)
uint64_t main_f_f3af20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f3af30  (orig 0xf3af30, tailcall)
void main_f_f3af30() { main::sub_f3af70(); }

// sub_f3af40  (orig 0xf3af40, tailcall)
void main_f_f3af40() { main::sub_f3af70(); }

// sub_f3af50  (orig 0xf3af50, tailcall)
uint64_t main_f_f3af50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f3af60  (orig 0xf3af60, tailcall)
uint64_t main_f_f3af60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f3b530  (orig 0xf3b530, tailcall)
uint64_t main_f_f3b530(void* a0) {
    return main::sub_f3b2d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f3b540  (orig 0xf3b540, tailcall)
uint64_t main_f_f3b540(void* a0) {
    return main::sub_f3b2d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f3b550  (orig 0xf3b550, tailcall)
void main_f_f3b550() { main::sub_f3b2d0(); }

// sub_f3b560  (orig 0xf3b560, tailcall)
uint64_t main_f_f3b560(void* a0) {
    return main::sub_f3b2d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f3b570  (orig 0xf3b570, tailcall)
uint64_t main_f_f3b570(void* a0) {
    return main::sub_f3b2d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f3c710  (orig 0xf3c710, tailcall)
void main_f_f3c710() { main::sub_f3cc70(); }

// sub_f3c720  (orig 0xf3c720, tailcall)
void main_f_f3c720() { main::sub_f3cc70(); }

// sub_f3c730  (orig 0xf3c730, tailcall)
void main_f_f3c730() { main::sub_f3cc70(); }

// sub_f3dab0  (orig 0xf3dab0, tailcall)
uint64_t main_f_f3dab0(void* a0) {
    return main::sub_eb7790(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_f3daf0  (orig 0xf3daf0, tailcall)
uint64_t main_f_f3daf0(void* a0) {
    return main::sub_eb7830(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_f3f270  (orig 0xf3f270, tailcall)
void main_f_f3f270() { main::sub_f3f520(); }

// sub_f3f3c0  (orig 0xf3f3c0, tailcall)
void main_f_f3f3c0() { main::sub_f3f520(); }

// sub_f3f3d0  (orig 0xf3f3d0, tailcall)
void main_f_f3f3d0() { main::sub_f3f520(); }

// sub_f42910  (orig 0xf42910, tailcall)
uint64_t main_f_f42910(void* a0) {
    return main::sub_f43570(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_f429e0  (orig 0xf429e0, tailcall)
void main_f_f429e0() { main::sub_f42da0(); }

// sub_f42ab0  (orig 0xf42ab0, tailcall)
void main_f_f42ab0() { main::sub_f42da0(); }

// sub_f42ac0  (orig 0xf42ac0, tailcall)
void main_f_f42ac0() { main::sub_f42da0(); }

// sub_f431b0  (orig 0xf431b0, tailcall)
void main_f_f431b0() { main::sub_f431c0(); }

// sub_f43cc0  (orig 0xf43cc0, tailcall)
void main_f_f43cc0() { main::sub_f43f30(); }

// sub_f43df0  (orig 0xf43df0, tailcall)
void main_f_f43df0() { main::sub_f43f30(); }

// sub_f43e00  (orig 0xf43e00, tailcall)
void main_f_f43e00() { main::sub_f43f30(); }

// sub_f47cf0  (orig 0xf47cf0, tailcall)
uint64_t main_f_f47cf0(void* a0) {
    return main::sub_f47b30(((uintptr_t)((char*)(a0) - 136)));
}

// sub_f480d0  (orig 0xf480d0, tailcall)
void main_f_f480d0() { main::sub_f47fe0(); }

// sub_f480e0  (orig 0xf480e0, tailcall)
void main_f_f480e0() { main::sub_f48700(); }

// sub_f480f0  (orig 0xf480f0, tailcall)
uint64_t main_f_f480f0(void* a0) {
    return main::sub_f47fe0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f48100  (orig 0xf48100, tailcall)
uint64_t main_f_f48100(void* a0) {
    return main::sub_f47fe0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f48110  (orig 0xf48110, tailcall)
void main_f_f48110() { main::sub_f48700(); }

// sub_f48120  (orig 0xf48120, tailcall)
void main_f_f48120() { main::sub_f48700(); }

// sub_f48130  (orig 0xf48130, tailcall)
uint64_t main_f_f48130(void* a0) {
    return main::sub_f47fe0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f48140  (orig 0xf48140, tailcall)
uint64_t main_f_f48140(void* a0) {
    return main::sub_f47fe0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f48150  (orig 0xf48150, tailcall)
uint64_t main_f_f48150(void* a0) {
    return main::sub_f47fe0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_f48160  (orig 0xf48160, tailcall)
uint64_t main_f_f48160(void* a0) {
    return main::sub_f47fe0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_f48560  (orig 0xf48560, tailcall)
uint64_t main_f_f48560(void* a0) {
    return main::sub_f482f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f48570  (orig 0xf48570, tailcall)
uint64_t main_f_f48570(void* a0) {
    return main::sub_f482f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f49be0  (orig 0xf49be0, tailcall)
void main_f_f49be0() { main::sub_e7feb0(); }

// sub_f49bf0  (orig 0xf49bf0, tailcall)
void main_f_f49bf0() { main::sub_f49c60(); }

// sub_f49c00  (orig 0xf49c00, tailcall)
uint64_t main_f_f49c00(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f49c10  (orig 0xf49c10, tailcall)
uint64_t main_f_f49c10(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f49c20  (orig 0xf49c20, tailcall)
void main_f_f49c20() { main::sub_f49c60(); }

// sub_f49c30  (orig 0xf49c30, tailcall)
void main_f_f49c30() { main::sub_f49c60(); }

// sub_f49c40  (orig 0xf49c40, tailcall)
uint64_t main_f_f49c40(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f49c50  (orig 0xf49c50, tailcall)
uint64_t main_f_f49c50(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4a720  (orig 0xf4a720, tailcall)
void main_f_f4a720() { main::sub_e7feb0(); }

// sub_f4a730  (orig 0xf4a730, tailcall)
void main_f_f4a730() { main::sub_f4a7a0(); }

// sub_f4a740  (orig 0xf4a740, tailcall)
uint64_t main_f_f4a740(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4a750  (orig 0xf4a750, tailcall)
uint64_t main_f_f4a750(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4a760  (orig 0xf4a760, tailcall)
void main_f_f4a760() { main::sub_f4a7a0(); }

// sub_f4a770  (orig 0xf4a770, tailcall)
void main_f_f4a770() { main::sub_f4a7a0(); }

// sub_f4a780  (orig 0xf4a780, tailcall)
uint64_t main_f_f4a780(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4a790  (orig 0xf4a790, tailcall)
uint64_t main_f_f4a790(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4b450  (orig 0xf4b450, tailcall)
void main_f_f4b450() { main::sub_f4ae60(); }

// sub_f4ba10  (orig 0xf4ba10, tailcall)
void main_f_f4ba10() { main::sub_e7feb0(); }

// sub_f4ba20  (orig 0xf4ba20, tailcall)
void main_f_f4ba20() { main::sub_f4ba90(); }

// sub_f4ba30  (orig 0xf4ba30, tailcall)
uint64_t main_f_f4ba30(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4ba40  (orig 0xf4ba40, tailcall)
uint64_t main_f_f4ba40(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4ba50  (orig 0xf4ba50, tailcall)
void main_f_f4ba50() { main::sub_f4ba90(); }

// sub_f4ba60  (orig 0xf4ba60, tailcall)
void main_f_f4ba60() { main::sub_f4ba90(); }

// sub_f4ba70  (orig 0xf4ba70, tailcall)
uint64_t main_f_f4ba70(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4ba80  (orig 0xf4ba80, tailcall)
uint64_t main_f_f4ba80(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4c810  (orig 0xf4c810, tailcall)
void main_f_f4c810() { main::sub_f4c3d0(); }

// sub_f4cdd0  (orig 0xf4cdd0, tailcall)
void main_f_f4cdd0() { main::sub_e7feb0(); }

// sub_f4cde0  (orig 0xf4cde0, tailcall)
void main_f_f4cde0() { main::sub_f4ce50(); }

// sub_f4cdf0  (orig 0xf4cdf0, tailcall)
uint64_t main_f_f4cdf0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4ce00  (orig 0xf4ce00, tailcall)
uint64_t main_f_f4ce00(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4ce10  (orig 0xf4ce10, tailcall)
void main_f_f4ce10() { main::sub_f4ce50(); }

// sub_f4ce20  (orig 0xf4ce20, tailcall)
void main_f_f4ce20() { main::sub_f4ce50(); }

// sub_f4ce30  (orig 0xf4ce30, tailcall)
uint64_t main_f_f4ce30(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4ce40  (orig 0xf4ce40, tailcall)
uint64_t main_f_f4ce40(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4dc90  (orig 0xf4dc90, tailcall)
uint64_t main_f_f4dc90(void* a0) {
    return main::sub_f497b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 136))));
}

// sub_f4dca0  (orig 0xf4dca0, tailcall)
void main_f_f4dca0() { main::sub_e7c4c0(); }

// sub_f4dcb0  (orig 0xf4dcb0, tailcall)
void main_f_f4dcb0() { main::sub_f4dd20(); }

// sub_f4dcc0  (orig 0xf4dcc0, tailcall)
uint64_t main_f_f4dcc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4dcd0  (orig 0xf4dcd0, tailcall)
uint64_t main_f_f4dcd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4dce0  (orig 0xf4dce0, tailcall)
void main_f_f4dce0() { main::sub_f4dd20(); }

// sub_f4dcf0  (orig 0xf4dcf0, tailcall)
void main_f_f4dcf0() { main::sub_f4dd20(); }

// sub_f4dd00  (orig 0xf4dd00, tailcall)
uint64_t main_f_f4dd00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4dd10  (orig 0xf4dd10, tailcall)
uint64_t main_f_f4dd10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4eec0  (orig 0xf4eec0, tailcall)
void main_f_f4eec0() { main::sub_f4ed20(); }

// sub_f4eed0  (orig 0xf4eed0, tailcall)
void main_f_f4eed0() { main::sub_f4ef40(); }

// sub_f4eee0  (orig 0xf4eee0, tailcall)
uint64_t main_f_f4eee0(void* a0) {
    return main::sub_f4ed20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4eef0  (orig 0xf4eef0, tailcall)
uint64_t main_f_f4eef0(void* a0) {
    return main::sub_f4ed20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4ef00  (orig 0xf4ef00, tailcall)
void main_f_f4ef00() { main::sub_f4ef40(); }

// sub_f4ef10  (orig 0xf4ef10, tailcall)
void main_f_f4ef10() { main::sub_f4ef40(); }

// sub_f4ef20  (orig 0xf4ef20, tailcall)
uint64_t main_f_f4ef20(void* a0) {
    return main::sub_f4ed20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4ef30  (orig 0xf4ef30, tailcall)
uint64_t main_f_f4ef30(void* a0) {
    return main::sub_f4ed20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4f860  (orig 0xf4f860, tailcall)
void main_f_f4f860() { main::sub_e7c4c0(); }

// sub_f4f870  (orig 0xf4f870, tailcall)
void main_f_f4f870() { main::sub_f4f8e0(); }

// sub_f4f880  (orig 0xf4f880, tailcall)
uint64_t main_f_f4f880(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4f890  (orig 0xf4f890, tailcall)
uint64_t main_f_f4f890(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f4f8a0  (orig 0xf4f8a0, tailcall)
void main_f_f4f8a0() { main::sub_f4f8e0(); }

// sub_f4f8b0  (orig 0xf4f8b0, tailcall)
void main_f_f4f8b0() { main::sub_f4f8e0(); }

// sub_f4f8c0  (orig 0xf4f8c0, tailcall)
uint64_t main_f_f4f8c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f4f8d0  (orig 0xf4f8d0, tailcall)
uint64_t main_f_f4f8d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f511b0  (orig 0xf511b0, tailcall)
uint64_t main_f_f511b0(void* a0) {
    return main::sub_f4ea10(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

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

// sub_f521f0  (orig 0xf521f0, tailcall)
uint64_t main_f_f521f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f52200  (orig 0xf52200, tailcall)
uint64_t main_f_f52200(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f52210  (orig 0xf52210, tailcall)
void main_f_f52210() { main::sub_f52250(); }

// sub_f52220  (orig 0xf52220, tailcall)
void main_f_f52220() { main::sub_f52250(); }

// sub_f52230  (orig 0xf52230, tailcall)
uint64_t main_f_f52230(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f52240  (orig 0xf52240, tailcall)
uint64_t main_f_f52240(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f533f0  (orig 0xf533f0, tailcall)
void main_f_f533f0() { main::sub_e7feb0(); }

// sub_f53400  (orig 0xf53400, tailcall)
void main_f_f53400() { main::sub_f53470(); }

// sub_f53410  (orig 0xf53410, tailcall)
uint64_t main_f_f53410(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f53420  (orig 0xf53420, tailcall)
uint64_t main_f_f53420(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f53430  (orig 0xf53430, tailcall)
void main_f_f53430() { main::sub_f53470(); }

// sub_f53440  (orig 0xf53440, tailcall)
void main_f_f53440() { main::sub_f53470(); }

// sub_f53450  (orig 0xf53450, tailcall)
uint64_t main_f_f53450(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f53460  (orig 0xf53460, tailcall)
uint64_t main_f_f53460(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f545b0  (orig 0xf545b0, tailcall)
void main_f_f545b0() { main::sub_e7c4c0(); }

// sub_f545c0  (orig 0xf545c0, tailcall)
void main_f_f545c0() { main::sub_f54630(); }

// sub_f545d0  (orig 0xf545d0, tailcall)
uint64_t main_f_f545d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f545e0  (orig 0xf545e0, tailcall)
uint64_t main_f_f545e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f545f0  (orig 0xf545f0, tailcall)
void main_f_f545f0() { main::sub_f54630(); }

// sub_f54600  (orig 0xf54600, tailcall)
void main_f_f54600() { main::sub_f54630(); }

// sub_f54610  (orig 0xf54610, tailcall)
uint64_t main_f_f54610(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f54620  (orig 0xf54620, tailcall)
uint64_t main_f_f54620(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f54b90  (orig 0xf54b90, tailcall)
void main_f_f54b90() { main::sub_e7c4c0(); }

// sub_f54ba0  (orig 0xf54ba0, tailcall)
void main_f_f54ba0() { main::sub_f54c10(); }

// sub_f54bb0  (orig 0xf54bb0, tailcall)
uint64_t main_f_f54bb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f54bc0  (orig 0xf54bc0, tailcall)
uint64_t main_f_f54bc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f54bd0  (orig 0xf54bd0, tailcall)
void main_f_f54bd0() { main::sub_f54c10(); }

// sub_f54be0  (orig 0xf54be0, tailcall)
void main_f_f54be0() { main::sub_f54c10(); }

// sub_f54bf0  (orig 0xf54bf0, tailcall)
uint64_t main_f_f54bf0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f54c00  (orig 0xf54c00, tailcall)
uint64_t main_f_f54c00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

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

// sub_f5c3f0  (orig 0xf5c3f0, tailcall)
void main_f_f5c3f0() { main::sub_f5c270(); }

// sub_f5c470  (orig 0xf5c470, tailcall)
uint64_t main_f_f5c470(void* a0) {
    return main::sub_f5c270(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f5c480  (orig 0xf5c480, tailcall)
uint64_t main_f_f5c480(void* a0) {
    return main::sub_f5c270(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f5c570  (orig 0xf5c570, tailcall)
uint64_t main_f_f5c570(void* a0) {
    return main::sub_f5c270(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f5c580  (orig 0xf5c580, tailcall)
uint64_t main_f_f5c580(void* a0) {
    return main::sub_f5c270(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f5cd10  (orig 0xf5cd10, tailcall)
uint64_t main_f_f5cd10(void* a0) {
    return main::sub_67bfa0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 144))));
}

// sub_f5d430  (orig 0xf5d430, tailcall)
uint64_t main_f_f5d430(void* a0) {
    return main::sub_f5d200(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f5d440  (orig 0xf5d440, tailcall)
uint64_t main_f_f5d440(void* a0) {
    return main::sub_f5d200(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f5eef0  (orig 0xf5eef0, tailcall)
uint64_t main_f_f5eef0(void* a0) {
    return main::sub_f5ebc0(((uintptr_t)((char*)(a0) - 1360)));
}

// sub_f5f550  (orig 0xf5f550, tailcall)
void main_f_f5f550() { main::sub_f5f340(); }

// sub_f5f610  (orig 0xf5f610, tailcall)
uint64_t main_f_f5f610(void* a0) {
    return main::sub_f5f340(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f5f620  (orig 0xf5f620, tailcall)
uint64_t main_f_f5f620(void* a0) {
    return main::sub_f5f340(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f5f790  (orig 0xf5f790, tailcall)
uint64_t main_f_f5f790(void* a0) {
    return main::sub_f5f340(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f5f7a0  (orig 0xf5f7a0, tailcall)
uint64_t main_f_f5f7a0(void* a0) {
    return main::sub_f5f340(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f5f7b0  (orig 0xf5f7b0, tailcall)
uint64_t main_f_f5f7b0(void* a0) {
    return main::sub_f5f340(((uintptr_t)((char*)(a0) - 1360)));
}

// sub_f5f7c0  (orig 0xf5f7c0, tailcall)
uint64_t main_f_f5f7c0(void* a0) {
    return main::sub_f5f340(((uintptr_t)((char*)(a0) - 1360)));
}

// sub_f5fed0  (orig 0xf5fed0, tailcall)
void main_f_f5fed0() { main::sub_f60140(); }

// sub_f60000  (orig 0xf60000, tailcall)
void main_f_f60000() { main::sub_f60140(); }

// sub_f60010  (orig 0xf60010, tailcall)
void main_f_f60010() { main::sub_f60140(); }

// sub_f648c0  (orig 0xf648c0, tailcall)
void main_f_f648c0() { main::sub_f64ab0(); }

// sub_f649b0  (orig 0xf649b0, tailcall)
void main_f_f649b0() { main::sub_f64ab0(); }

// sub_f649c0  (orig 0xf649c0, tailcall)
void main_f_f649c0() { main::sub_f64ab0(); }

// sub_f66800  (orig 0xf66800, tailcall)
uint64_t main_f_f66800(void* a0) {
    return main::sub_f66670(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f66810  (orig 0xf66810, tailcall)
uint64_t main_f_f66810(void* a0) {
    return main::sub_f66670(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f673c0  (orig 0xf673c0, tailcall)
void main_f_f673c0() { main::sub_e7feb0(); }

// sub_f673d0  (orig 0xf673d0, tailcall)
void main_f_f673d0() { main::sub_e7feb0(); }

// sub_f674d0  (orig 0xf674d0, tailcall)
uint64_t main_f_f674d0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f674e0  (orig 0xf674e0, tailcall)
uint64_t main_f_f674e0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f675d0  (orig 0xf675d0, tailcall)
uint64_t main_f_f675d0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f675e0  (orig 0xf675e0, tailcall)
uint64_t main_f_f675e0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f67670  (orig 0xf67670, tailcall)
uint64_t main_f_f67670(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f67680  (orig 0xf67680, tailcall)
uint64_t main_f_f67680(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f67aa0  (orig 0xf67aa0, tailcall)
void main_f_f67aa0() { main::sub_e7feb0(); }

// sub_f67b20  (orig 0xf67b20, tailcall)
uint64_t main_f_f67b20(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f67b30  (orig 0xf67b30, tailcall)
uint64_t main_f_f67b30(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f67c20  (orig 0xf67c20, tailcall)
uint64_t main_f_f67c20(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f67c30  (orig 0xf67c30, tailcall)
uint64_t main_f_f67c30(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f67c40  (orig 0xf67c40, tailcall)
uint64_t main_f_f67c40(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f67c50  (orig 0xf67c50, tailcall)
uint64_t main_f_f67c50(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f67dd0  (orig 0xf67dd0, tailcall)
uint64_t main_f_f67dd0(void* a0) {
    return main::sub_f68f00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_f67de0  (orig 0xf67de0, tailcall)
uint64_t main_f_f67de0(void* a0) {
    return main::sub_f68e00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_f68120  (orig 0xf68120, tailcall)
uint64_t main_f_f68120(void* a0) {
    return main::sub_f67f10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f68130  (orig 0xf68130, tailcall)
uint64_t main_f_f68130(void* a0) {
    return main::sub_f67f10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f6a920  (orig 0xf6a920, tailcall)
uint64_t main_f_f6a920(void* a0) {
    return main::sub_f6a730(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f6a930  (orig 0xf6a930, tailcall)
uint64_t main_f_f6a930(void* a0) {
    return main::sub_f6a730(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f6aca0  (orig 0xf6aca0, tailcall)
void main_f_f6aca0() { main::sub_f6aa40(); }

// sub_f6ada0  (orig 0xf6ada0, tailcall)
uint64_t main_f_f6ada0(void* a0) {
    return main::sub_f6aa40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f6adb0  (orig 0xf6adb0, tailcall)
uint64_t main_f_f6adb0(void* a0) {
    return main::sub_f6aa40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f6adc0  (orig 0xf6adc0, tailcall)
uint64_t main_f_f6adc0(void* a0) {
    return main::sub_f6acb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f6add0  (orig 0xf6add0, tailcall)
uint64_t main_f_f6add0(void* a0) {
    return main::sub_f6acb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f6ade0  (orig 0xf6ade0, tailcall)
uint64_t main_f_f6ade0(void* a0) {
    return main::sub_f6aa40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f6adf0  (orig 0xf6adf0, tailcall)
uint64_t main_f_f6adf0(void* a0) {
    return main::sub_f6aa40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f6d510  (orig 0xf6d510, tailcall)
void main_f_f6d510() { main::sub_f6d2d0(); }

// sub_f6d5d0  (orig 0xf6d5d0, tailcall)
uint64_t main_f_f6d5d0(void* a0) {
    return main::sub_f6d2d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f6d5e0  (orig 0xf6d5e0, tailcall)
uint64_t main_f_f6d5e0(void* a0) {
    return main::sub_f6d2d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f6d750  (orig 0xf6d750, tailcall)
uint64_t main_f_f6d750(void* a0) {
    return main::sub_f6d2d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f6d760  (orig 0xf6d760, tailcall)
uint64_t main_f_f6d760(void* a0) {
    return main::sub_f6d2d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f6e730  (orig 0xf6e730, tailcall)
uint64_t main_f_f6e730(void* a0) {
    return main::sub_f6e090(((uintptr_t)((char*)(a0) - 120)));
}

// sub_f6e8c0  (orig 0xf6e8c0, tailcall)
void main_f_f6e8c0() { main::sub_f6ed70(); }

// sub_f6ea50  (orig 0xf6ea50, tailcall)
void main_f_f6ea50() { main::sub_f6ed70(); }

// sub_f6ea60  (orig 0xf6ea60, tailcall)
void main_f_f6ea60() { main::sub_f6ed70(); }

// sub_f716d0  (orig 0xf716d0, tailcall)
void main_f_f716d0() { main::sub_f71590(); }

// sub_f71750  (orig 0xf71750, tailcall)
uint64_t main_f_f71750(void* a0) {
    return main::sub_f71590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f71760  (orig 0xf71760, tailcall)
uint64_t main_f_f71760(void* a0) {
    return main::sub_f71590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f71850  (orig 0xf71850, tailcall)
uint64_t main_f_f71850(void* a0) {
    return main::sub_f71590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f71860  (orig 0xf71860, tailcall)
uint64_t main_f_f71860(void* a0) {
    return main::sub_f71590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f71870  (orig 0xf71870, tailcall)
uint64_t main_f_f71870(void* a0) {
    return main::sub_f71590(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f71880  (orig 0xf71880, tailcall)
uint64_t main_f_f71880(void* a0) {
    return main::sub_f71590(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f71890  (orig 0xf71890, tailcall)
void main_f_f71890() { main::sub_ce0(); }

// sub_f738f0  (orig 0xf738f0, tailcall)
void main_f_f738f0() { main::sub_f73ae0(); }

// sub_f739e0  (orig 0xf739e0, tailcall)
void main_f_f739e0() { main::sub_f73ae0(); }

// sub_f739f0  (orig 0xf739f0, tailcall)
void main_f_f739f0() { main::sub_f73ae0(); }

// sub_f75770  (orig 0xf75770, tailcall)
void main_f_f75770() { main::sub_f75ac0(); }

// sub_f75900  (orig 0xf75900, tailcall)
void main_f_f75900() { main::sub_f75ac0(); }

// sub_f75910  (orig 0xf75910, tailcall)
void main_f_f75910() { main::sub_f75ac0(); }

// sub_f76660  (orig 0xf76660, tailcall)
uint64_t main_f_f76660(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return main::sub_f6cd80(((uintptr_t)((char*)(p0) + 160)));
}

// sub_f76da0  (orig 0xf76da0, tailcall)
uint64_t main_f_f76da0(void* a0) {
    return main::sub_f76b50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f76db0  (orig 0xf76db0, tailcall)
uint64_t main_f_f76db0(void* a0) {
    return main::sub_f76b50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f7aa30  (orig 0xf7aa30, tailcall)
void main_f_f7aa30() { main::sub_f7ac20(); }

// sub_f7ab20  (orig 0xf7ab20, tailcall)
void main_f_f7ab20() { main::sub_f7ac20(); }

// sub_f7ab30  (orig 0xf7ab30, tailcall)
void main_f_f7ab30() { main::sub_f7ac20(); }

// sub_f7b0d0  (orig 0xf7b0d0, tailcall)
uint64_t main_f_f7b0d0(void* a0) {
    return main::sub_eb75e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 656))));
}

// sub_f7b920  (orig 0xf7b920, tailcall)
void main_f_f7b920() { main::sub_f7bcb0(); }

// sub_f7ba60  (orig 0xf7ba60, tailcall)
void main_f_f7ba60() { main::sub_f7bcb0(); }

// sub_f7ba70  (orig 0xf7ba70, tailcall)
void main_f_f7ba70() { main::sub_f7bcb0(); }

// sub_f7ca60  (orig 0xf7ca60, tailcall)
uint64_t main_f_f7ca60(void* a0) {
    return main::sub_f7c8d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f7ca70  (orig 0xf7ca70, tailcall)
uint64_t main_f_f7ca70(void* a0) {
    return main::sub_f7c8d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f7ce10  (orig 0xf7ce10, tailcall)
void main_f_f7ce10() { main::sub_e7feb0(); }

// sub_f7ce90  (orig 0xf7ce90, tailcall)
uint64_t main_f_f7ce90(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f7cea0  (orig 0xf7cea0, tailcall)
uint64_t main_f_f7cea0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f7cf90  (orig 0xf7cf90, tailcall)
uint64_t main_f_f7cf90(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f7cfa0  (orig 0xf7cfa0, tailcall)
uint64_t main_f_f7cfa0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f7cfb0  (orig 0xf7cfb0, tailcall)
uint64_t main_f_f7cfb0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f7cfc0  (orig 0xf7cfc0, tailcall)
uint64_t main_f_f7cfc0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f7def0  (orig 0xf7def0, tailcall)
void main_f_f7def0() { main::sub_f7bba0(); }

// sub_f7df00  (orig 0xf7df00, tailcall)
uint64_t main_f_f7df00(void* a0) {
    return main::sub_f7bba0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f7df10  (orig 0xf7df10, tailcall)
uint64_t main_f_f7df10(void* a0) {
    return main::sub_f7bba0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f7df20  (orig 0xf7df20, tailcall)
uint64_t main_f_f7df20(void* a0) {
    return main::sub_f7bba0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f7df30  (orig 0xf7df30, tailcall)
uint64_t main_f_f7df30(void* a0) {
    return main::sub_f7bba0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f80cb0  (orig 0xf80cb0, tailcall)
void main_f_f80cb0() { main::sub_f677f0(); }

// sub_f81170  (orig 0xf81170, tailcall)
void main_f_f81170() { main::sub_e7feb0(); }

// sub_f811f0  (orig 0xf811f0, tailcall)
uint64_t main_f_f811f0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f81200  (orig 0xf81200, tailcall)
uint64_t main_f_f81200(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f812f0  (orig 0xf812f0, tailcall)
uint64_t main_f_f812f0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f81300  (orig 0xf81300, tailcall)
uint64_t main_f_f81300(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f81310  (orig 0xf81310, tailcall)
uint64_t main_f_f81310(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f81320  (orig 0xf81320, tailcall)
uint64_t main_f_f81320(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f81f60  (orig 0xf81f60, tailcall)
uint64_t main_f_f81f60(void* a0) {
    return main::sub_f818c0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_f824a0  (orig 0xf824a0, tailcall)
void main_f_f824a0() { main::sub_f82850(); }

// sub_f825d0  (orig 0xf825d0, tailcall)
void main_f_f825d0() { main::sub_f82850(); }

// sub_f825e0  (orig 0xf825e0, tailcall)
void main_f_f825e0() { main::sub_f82850(); }

// sub_f86bb0  (orig 0xf86bb0, tailcall)
uint64_t main_f_f86bb0(void* a0) {
    return main::sub_eb75e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 656))));
}

// sub_f87a80  (orig 0xf87a80, tailcall)
uint64_t main_f_f87a80(void* a0) {
    return main::sub_eb75e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 656))));
}

// sub_f88e60  (orig 0xf88e60, tailcall)
void main_f_f88e60() { main::sub_f893e0(); }

// sub_f89040  (orig 0xf89040, tailcall)
void main_f_f89040() { main::sub_f893e0(); }

// sub_f89050  (orig 0xf89050, tailcall)
void main_f_f89050() { main::sub_f893e0(); }

// sub_f8a040  (orig 0xf8a040, tailcall)
uint64_t main_f_f8a040(void* a0) {
    return main::sub_f89f60(((uintptr_t)((char*)(a0) - 120)));
}

// sub_f8a580  (orig 0xf8a580, tailcall)
uint64_t main_f_f8a580(void* a0) {
    return main::sub_f8a050(((uintptr_t)((char*)(a0) - 120)));
}

// sub_f8d940  (orig 0xf8d940, tailcall)
void main_f_f8d940() { main::sub_f8d820(); }

// sub_f8d9c0  (orig 0xf8d9c0, tailcall)
uint64_t main_f_f8d9c0(void* a0) {
    return main::sub_f8d820(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f8d9d0  (orig 0xf8d9d0, tailcall)
uint64_t main_f_f8d9d0(void* a0) {
    return main::sub_f8d820(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f8dac0  (orig 0xf8dac0, tailcall)
uint64_t main_f_f8dac0(void* a0) {
    return main::sub_f8d820(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f8dad0  (orig 0xf8dad0, tailcall)
uint64_t main_f_f8dad0(void* a0) {
    return main::sub_f8d820(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f8dae0  (orig 0xf8dae0, tailcall)
uint64_t main_f_f8dae0(void* a0) {
    return main::sub_f8d820(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f8daf0  (orig 0xf8daf0, tailcall)
uint64_t main_f_f8daf0(void* a0) {
    return main::sub_f8d820(((uintptr_t)((char*)(a0) - 1488)));
}

// sub_f8db00  (orig 0xf8db00, tailcall)
void main_f_f8db00() { main::sub_ce0(); }

// sub_f8fa70  (orig 0xf8fa70, tailcall)
uint64_t main_f_f8fa70(void* a0) {
    return main::sub_f8f820(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f8fba0  (orig 0xf8fba0, tailcall)
uint64_t main_f_f8fba0(void* a0) {
    return main::sub_f8f820(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f8fcd0  (orig 0xf8fcd0, tailcall)
uint64_t main_f_f8fcd0(void* a0) {
    return main::sub_f8f820(((uintptr_t)((char*)(a0) - 120)));
}

// sub_f95fb0  (orig 0xf95fb0, tailcall)
void main_f_f95fb0() { main::sub_f95d30(); }

// sub_f95fc0  (orig 0xf95fc0, tailcall)
void main_f_f95fc0() { main::sub_f96030(); }

// sub_f95fd0  (orig 0xf95fd0, tailcall)
uint64_t main_f_f95fd0(void* a0) {
    return main::sub_f95d30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f95fe0  (orig 0xf95fe0, tailcall)
uint64_t main_f_f95fe0(void* a0) {
    return main::sub_f95d30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f95ff0  (orig 0xf95ff0, tailcall)
void main_f_f95ff0() { main::sub_f96030(); }

// sub_f96000  (orig 0xf96000, tailcall)
void main_f_f96000() { main::sub_f96030(); }

// sub_f96010  (orig 0xf96010, tailcall)
uint64_t main_f_f96010(void* a0) {
    return main::sub_f95d30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f96020  (orig 0xf96020, tailcall)
uint64_t main_f_f96020(void* a0) {
    return main::sub_f95d30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f9c730  (orig 0xf9c730, tailcall)
void main_f_f9c730() { main::sub_f9c550(); }

// sub_f9c740  (orig 0xf9c740, tailcall)
void main_f_f9c740() { main::sub_f9c980(); }

// sub_f9c750  (orig 0xf9c750, tailcall)
uint64_t main_f_f9c750(void* a0) {
    return main::sub_f9c550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f9c760  (orig 0xf9c760, tailcall)
uint64_t main_f_f9c760(void* a0) {
    return main::sub_f9c550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f9c770  (orig 0xf9c770, tailcall)
void main_f_f9c770() { main::sub_f9c980(); }

// sub_f9c780  (orig 0xf9c780, tailcall)
void main_f_f9c780() { main::sub_f9c980(); }

// sub_f9c790  (orig 0xf9c790, tailcall)
uint64_t main_f_f9c790(void* a0) {
    return main::sub_f9c550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f9c7a0  (orig 0xf9c7a0, tailcall)
uint64_t main_f_f9c7a0(void* a0) {
    return main::sub_f9c550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f9d6f0  (orig 0xf9d6f0, tailcall)
uint64_t main_f_f9d6f0(void* a0) {
    return main::sub_f9d4e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f9d700  (orig 0xf9d700, tailcall)
uint64_t main_f_f9d700(void* a0) {
    return main::sub_f9d4e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f9e030  (orig 0xf9e030, tailcall)
uint64_t main_f_f9e030(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 148) = (uint8_t)k0;
    return main::sub_f9e040(((uintptr_t)(a0)));
}

// sub_f9e5d0  (orig 0xf9e5d0, tailcall)
void main_f_f9e5d0() { main::sub_f9e4e0(); }

// sub_f9e6d0  (orig 0xf9e6d0, tailcall)
uint64_t main_f_f9e6d0(void* a0) {
    return main::sub_f9e4e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f9e6e0  (orig 0xf9e6e0, tailcall)
uint64_t main_f_f9e6e0(void* a0) {
    return main::sub_f9e4e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f9e6f0  (orig 0xf9e6f0, tailcall)
uint64_t main_f_f9e6f0(void* a0) {
    return main::sub_f9e5e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f9e700  (orig 0xf9e700, tailcall)
uint64_t main_f_f9e700(void* a0) {
    return main::sub_f9e5e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f9e710  (orig 0xf9e710, tailcall)
uint64_t main_f_f9e710(void* a0) {
    return main::sub_f9e4e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f9e720  (orig 0xf9e720, tailcall)
uint64_t main_f_f9e720(void* a0) {
    return main::sub_f9e4e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f9e730  (orig 0xf9e730, tailcall)
uint64_t main_f_f9e730(void* a0) {
    return main::sub_f9e4e0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_f9e740  (orig 0xf9e740, tailcall)
uint64_t main_f_f9e740(void* a0) {
    return main::sub_f9e4e0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_f9f440  (orig 0xf9f440, tailcall)
void main_f_f9f440() { main::sub_f9f300(); }

// sub_f9f540  (orig 0xf9f540, tailcall)
uint64_t main_f_f9f540(void* a0) {
    return main::sub_f9f300(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f9f550  (orig 0xf9f550, tailcall)
uint64_t main_f_f9f550(void* a0) {
    return main::sub_f9f300(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f9f560  (orig 0xf9f560, tailcall)
uint64_t main_f_f9f560(void* a0) {
    return main::sub_f9f450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f9f570  (orig 0xf9f570, tailcall)
uint64_t main_f_f9f570(void* a0) {
    return main::sub_f9f450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f9f580  (orig 0xf9f580, tailcall)
uint64_t main_f_f9f580(void* a0) {
    return main::sub_f9f300(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f9f590  (orig 0xf9f590, tailcall)
uint64_t main_f_f9f590(void* a0) {
    return main::sub_f9f300(((uintptr_t)((char*)(a0) - 80)));
}

// sub_f9f990  (orig 0xf9f990, tailcall)
uint64_t main_f_f9f990(void* a0) {
    return main::sub_f9f800(((uintptr_t)((char*)(a0) - 72)));
}

// sub_f9f9a0  (orig 0xf9f9a0, tailcall)
uint64_t main_f_f9f9a0(void* a0) {
    return main::sub_f9f800(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fa09d0  (orig 0xfa09d0, tailcall)
void main_f_fa09d0() { main::sub_fa07a0(); }

// sub_fa0a90  (orig 0xfa0a90, tailcall)
uint64_t main_f_fa0a90(void* a0) {
    return main::sub_fa07a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fa0aa0  (orig 0xfa0aa0, tailcall)
uint64_t main_f_fa0aa0(void* a0) {
    return main::sub_fa07a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fa0c10  (orig 0xfa0c10, tailcall)
uint64_t main_f_fa0c10(void* a0) {
    return main::sub_fa07a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fa0c20  (orig 0xfa0c20, tailcall)
uint64_t main_f_fa0c20(void* a0) {
    return main::sub_fa07a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fa21e0  (orig 0xfa21e0, tailcall)
uint64_t main_f_fa21e0(void* a0) {
    return main::sub_fa21f0(((uintptr_t)((char*)(a0) + 96)));
}

// sub_fa24d0  (orig 0xfa24d0, tailcall)
void main_f_fa24d0() { main::sub_fa2400(); }

// sub_fa24e0  (orig 0xfa24e0, tailcall)
void main_f_fa24e0() { main::sub_fa1210(); }

// sub_fa24f0  (orig 0xfa24f0, tailcall)
uint64_t main_f_fa24f0(void* a0) {
    return main::sub_fa2400(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fa2500  (orig 0xfa2500, tailcall)
uint64_t main_f_fa2500(void* a0) {
    return main::sub_fa2400(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fa2510  (orig 0xfa2510, tailcall)
void main_f_fa2510() { main::sub_fa1210(); }

// sub_fa2520  (orig 0xfa2520, tailcall)
void main_f_fa2520() { main::sub_fa1210(); }

// sub_fa2530  (orig 0xfa2530, tailcall)
uint64_t main_f_fa2530(void* a0) {
    return main::sub_fa2400(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fa2540  (orig 0xfa2540, tailcall)
uint64_t main_f_fa2540(void* a0) {
    return main::sub_fa2400(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fa2b70  (orig 0xfa2b70, tailcall)
uint64_t main_f_fa2b70(void* a0) {
    return main::sub_fa2940(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fa2b80  (orig 0xfa2b80, tailcall)
uint64_t main_f_fa2b80(void* a0) {
    return main::sub_fa2940(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fa3cc0  (orig 0xfa3cc0, tailcall)
void main_f_fa3cc0() { main::sub_fa3a90(); }

// sub_fa3d80  (orig 0xfa3d80, tailcall)
uint64_t main_f_fa3d80(void* a0) {
    return main::sub_fa3a90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fa3d90  (orig 0xfa3d90, tailcall)
uint64_t main_f_fa3d90(void* a0) {
    return main::sub_fa3a90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fa3f00  (orig 0xfa3f00, tailcall)
uint64_t main_f_fa3f00(void* a0) {
    return main::sub_fa3a90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fa3f10  (orig 0xfa3f10, tailcall)
uint64_t main_f_fa3f10(void* a0) {
    return main::sub_fa3a90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fa53c0  (orig 0xfa53c0, tailcall)
void main_f_fa53c0() { main::sub_fa55b0(); }

// sub_fa54b0  (orig 0xfa54b0, tailcall)
void main_f_fa54b0() { main::sub_fa55b0(); }

// sub_fa54c0  (orig 0xfa54c0, tailcall)
void main_f_fa54c0() { main::sub_fa55b0(); }

// sub_fa7a00  (orig 0xfa7a00, tailcall)
void main_f_fa7a00() { main::sub_fa7890(); }

// sub_fa7a10  (orig 0xfa7a10, tailcall)
void main_f_fa7a10() { main::sub_fa7a80(); }

// sub_fa7a20  (orig 0xfa7a20, tailcall)
uint64_t main_f_fa7a20(void* a0) {
    return main::sub_fa7890(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fa7a30  (orig 0xfa7a30, tailcall)
uint64_t main_f_fa7a30(void* a0) {
    return main::sub_fa7890(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fa7a40  (orig 0xfa7a40, tailcall)
void main_f_fa7a40() { main::sub_fa7a80(); }

// sub_fa7a50  (orig 0xfa7a50, tailcall)
void main_f_fa7a50() { main::sub_fa7a80(); }

// sub_fa7a60  (orig 0xfa7a60, tailcall)
uint64_t main_f_fa7a60(void* a0) {
    return main::sub_fa7890(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fa7a70  (orig 0xfa7a70, tailcall)
uint64_t main_f_fa7a70(void* a0) {
    return main::sub_fa7890(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fa80d0  (orig 0xfa80d0, tailcall)
uint64_t main_f_fa80d0(void* a0) {
    return main::sub_fa7ec0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fa80e0  (orig 0xfa80e0, tailcall)
uint64_t main_f_fa80e0(void* a0) {
    return main::sub_fa7ec0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_faaa00  (orig 0xfaaa00, tailcall)
void main_f_faaa00() { main::sub_faa8a0(); }

// sub_faaa10  (orig 0xfaaa10, tailcall)
void main_f_faaa10() { main::sub_faaba0(); }

// sub_faaa20  (orig 0xfaaa20, tailcall)
uint64_t main_f_faaa20(void* a0) {
    return main::sub_faa8a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_faaa30  (orig 0xfaaa30, tailcall)
uint64_t main_f_faaa30(void* a0) {
    return main::sub_faa8a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_faaa40  (orig 0xfaaa40, tailcall)
void main_f_faaa40() { main::sub_faaba0(); }

// sub_faaa50  (orig 0xfaaa50, tailcall)
void main_f_faaa50() { main::sub_faaba0(); }

// sub_faaa60  (orig 0xfaaa60, tailcall)
uint64_t main_f_faaa60(void* a0) {
    return main::sub_faa8a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_faaa70  (orig 0xfaaa70, tailcall)
uint64_t main_f_faaa70(void* a0) {
    return main::sub_faa8a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fadf60  (orig 0xfadf60, tailcall)
void main_f_fadf60() { main::sub_fadda0(); }

// sub_fadf70  (orig 0xfadf70, tailcall)
void main_f_fadf70() { main::sub_fadfe0(); }

// sub_fadf80  (orig 0xfadf80, tailcall)
uint64_t main_f_fadf80(void* a0) {
    return main::sub_fadda0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fadf90  (orig 0xfadf90, tailcall)
uint64_t main_f_fadf90(void* a0) {
    return main::sub_fadda0(((uintptr_t)((char*)(a0) - 72)));
}

