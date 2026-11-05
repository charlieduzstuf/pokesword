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


namespace main { void sub_fadfe0(); }
namespace main { uint64_t sub_fadda0(uintptr_t); }
namespace main { void sub_fb0c00(); }
namespace main { void sub_fb0e40(); }
namespace main { uint64_t sub_fb0c00(uintptr_t); }
namespace main { void sub_fb2780(); }
namespace main { void sub_fb2960(); }
namespace main { uint64_t sub_fb2780(uintptr_t); }
namespace main { void sub_e7feb0(); }
namespace main { void sub_fa4960(); }
namespace main { uint64_t sub_e7feb0(uintptr_t); }
namespace main { void sub_fb9140(); }
namespace main { uint64_t sub_fb9140(uintptr_t); }
namespace main { uint64_t sub_fb9240(uintptr_t); }
namespace main { void sub_fc0bc0(); }
namespace main { uint64_t sub_fc0bc0(uintptr_t); }
namespace main { uint64_t sub_fc2b30(uintptr_t); }
namespace main { void sub_fc2b30(); }
namespace main { void sub_fc4520(); }
namespace main { void sub_fc5140(); }
namespace main { uint64_t sub_fc5140(uintptr_t); }
namespace main { uint64_t PostEventName(uintptr_t); }
namespace main { void sub_fc76d0(); }
namespace main { uint64_t sub_fc76d0(uintptr_t); }
namespace main { void sub_fcbc00(); }
namespace main { uint64_t sub_fcbc00(uintptr_t); }
namespace main { uint64_t sub_fcc130(uintptr_t); }
namespace main { void sub_fccb00(); }
namespace main { uint64_t sub_fccb00(uintptr_t); }
namespace main { void sub_fcce00(); }
namespace main { uint64_t player_icon_table_2(uintptr_t); }
namespace main { void sub_fcf100(); }
namespace main { uint64_t sub_fcf100(uintptr_t); }
namespace main { uint64_t sub_fcf630(uintptr_t); }
namespace main { void sub_ce0(); }
namespace main { void sub_fcd090(); }
namespace main { uint64_t sub_14e6d50(uintptr_t); }
namespace main { void sub_fd59d0(); }
namespace main { uint64_t sub_fd59d0(uintptr_t); }
namespace main { void sub_fc7b20(); }
namespace main { void sub_fda110(); }
namespace main { void sub_fdc130(); }
namespace main { void sub_fdd670(); }
namespace main { void sub_fddd80(); }
namespace main { uint64_t sub_fddd80(uintptr_t); }
namespace main { void sub_fdde60(); }
namespace main { uint64_t sub_fdde60(uintptr_t); }
namespace main { void sub_fde270(); }
namespace main { void sub_fdec60(); }
namespace main { void sub_fdf2e0(); }
namespace main { void sub_fdfb10(); }
namespace main { void sub_fe0050(); }
namespace main { uint64_t sub_fe0050(uintptr_t); }
namespace main { void sub_fe0bb0(); }
namespace main { void sub_fe1920(); }
namespace main { void sub_fe1cb0(); }
namespace main { uint64_t sub_fe1cb0(uintptr_t); }
namespace main { void sub_fe28c0(); }
namespace main { void sub_fe3190(); }
namespace main { uint64_t sub_fe3540(uintptr_t); }
namespace main { void sub_fe3540(); }
namespace main { uint64_t sub_fe7680(uintptr_t); }
namespace main { uint64_t sub_fe7ab0(uintptr_t); }
namespace main { void sub_fe89f0(); }
namespace main { uint64_t sub_fe89f0(uintptr_t); }
namespace main { uint64_t sub_fe8bf0(uintptr_t); }
namespace main { uint64_t sub_fe8f60(uintptr_t); }
namespace main { uint64_t sub_fe90e0(uintptr_t); }
namespace main { uint64_t sub_fe8df0(uintptr_t); }
namespace main { void network_net_live_async_data_holder_2(); }
namespace main { void network_live_regulation_2(); }
namespace main { void network_net_live_data_holder_2(); }
namespace main { uint64_t sub_fee480(uintptr_t); }
namespace main { void sub_fee480(); }
namespace main { uint64_t sub_feee30(uintptr_t); }
namespace main { uint64_t sub_ff0240(uintptr_t); }
namespace main { void network_poke_select_async_data_holder_2(); }
namespace main { void network_poke_select_command_2(); }
namespace main { void sub_ff5970(); }
namespace main { uint64_t sub_ff5970(uintptr_t); }
namespace main { uint64_t sub_ff5af0(uintptr_t); }
namespace main { uint64_t sub_ff63b0(uintptr_t); }
namespace main { void sub_ff7970(); }
namespace main { uint64_t sub_ff7970(uintptr_t); }
namespace main { uint64_t sub_ff7aa0(uintptr_t); }
namespace main { uint64_t sub_ffae30(uintptr_t); }
namespace main { uint64_t sub_ffb710(uintptr_t); }
namespace main { void sub_ffb710(); }
namespace main { uint64_t sub_ffe520(uintptr_t); }
namespace main { uint64_t sub_fff270(uintptr_t); }
namespace main { uint64_t sub_1002a80(uintptr_t); }
namespace main { uint64_t sub_1002d20(uintptr_t); }
namespace main { uint64_t sub_1002fb0(uintptr_t); }
namespace main { uint64_t sub_10033f0(uintptr_t); }
namespace main { uint64_t sub_1003570(uintptr_t); }
namespace main { uint64_t sub_1003870(uintptr_t); }
namespace main { uint64_t sub_10039f0(uintptr_t); }
namespace main { uint64_t sub_1003bb0(uintptr_t); }
namespace main { uint64_t sub_1003ef0(uintptr_t); }
namespace main { uint64_t sub_1004070(uintptr_t); }
namespace main { uint64_t sub_1004540(uintptr_t); }
namespace main { uint64_t sub_1004670(uintptr_t); }
namespace main { void sub_1004b20(); }
namespace main { uint64_t sub_1004b20(uintptr_t); }
namespace main { uint64_t sub_1004d20(uintptr_t); }
namespace main { uint64_t sub_1005090(uintptr_t); }
namespace main { uint64_t sub_1005210(uintptr_t); }
namespace main { uint64_t sub_1004f20(uintptr_t); }
namespace main { void sub_100c1c0(); }
namespace main { void network_nbr_data_holder_2(); }
namespace main { void network_player_position_2(); }
namespace main { void network_battle_team_2(); }
namespace main { void network_share_regulation_2(); }
namespace main { void network_refusal_for_regulation_2(); }
namespace main { void network_bgm_2(); }
namespace main { void network_nbr_async_data_holder_2(); }
namespace main { uint64_t sub_101aa00(uintptr_t); }
namespace main { void sub_101b130(); }
namespace main { uint64_t sub_101b130(uintptr_t); }
namespace main { void sub_101c660(); }
namespace main { uint64_t sub_101f930(uintptr_t); }
namespace main { uint64_t sub_1021980(uintptr_t); }
namespace main { void sub_1022380(); }
namespace main { void network_nesthole_async_data_holder_2(); }
namespace main { void network_nesthole_command_2(); }
namespace main { uint64_t sub_1029f10(uintptr_t); }
namespace main { uint64_t sub_1028ec0(uintptr_t); }
namespace main { void sub_102b0b0(); }
namespace main { uint64_t sub_1029020(uintptr_t); }
namespace main { void sub_102bda0(); }
namespace main { uint64_t sub_10314c0(uintptr_t); }
namespace main { uint64_t sub_10314a0(uintptr_t); }
namespace main { uint64_t sub_10314b0(uintptr_t); }
namespace main { uint64_t sub_10314d0(uintptr_t); }
namespace main { uint64_t sub_10314e0(uintptr_t); }
namespace main { void sub_102e270(); }
namespace main { uint64_t sub_102e270(uintptr_t); }
namespace main { uint64_t sub_102e6b0(uintptr_t); }
namespace main { uint64_t sub_102cd40(uintptr_t); }
namespace main { void sub_102f5b0(); }
namespace main { void sub_1031d60(); }
namespace main { uint64_t sub_1031d60(uintptr_t); }
namespace main { uint64_t sub_1031f60(uintptr_t); }
namespace main { uint64_t sub_10322d0(uintptr_t); }
namespace main { uint64_t sub_1032450(uintptr_t); }
namespace main { uint64_t sub_1032160(uintptr_t); }
namespace main { uint64_t sub_1030690(uintptr_t); }
namespace main { void sub_1034d10(); }
namespace main { void network_box_send_pokemon_2(); }
namespace main { void network_box_sync_state_data_holder_2(); }
namespace main { uint64_t sub_10381c0(uintptr_t); }
namespace main { uint64_t sub_1039740(uintptr_t); }
namespace main { void sub_103a060(); }
namespace main { uint64_t sub_103a060(uintptr_t); }
namespace main { uint64_t sub_103a260(uintptr_t); }
namespace main { uint64_t sub_103a5d0(uintptr_t); }
namespace main { uint64_t sub_103a750(uintptr_t); }
namespace main { uint64_t sub_103a460(uintptr_t); }
namespace main { void network_pokemon_trade_2(); }
namespace main { void network_pokemon_trade_data_holder_2(); }
namespace main { void sub_103f9c0(); }
namespace main { uint64_t sub_103f9c0(uintptr_t); }
namespace main { uint64_t sub_103fbc0(uintptr_t); }
namespace main { uint64_t sub_103ff30(uintptr_t); }
namespace main { uint64_t sub_10400b0(uintptr_t); }
namespace main { uint64_t sub_103fdc0(uintptr_t); }
namespace main { void network_sync_save_data_holder_2(); }
namespace main { uint64_t sub_1043580(uintptr_t); }
namespace main { uint64_t sub_10438d0(uintptr_t); }
namespace main { void sub_10438d0(); }
namespace main { uint64_t sub_10442d0(uintptr_t); }
namespace main { void sub_10442d0(); }
namespace main { uint64_t sub_1045610(uintptr_t); }
namespace main { void sub_1045610(); }
namespace main { uint64_t sub_1045f90(uintptr_t); }
namespace main { void sub_10466d0(); }
namespace main { uint64_t sub_1047a10(uintptr_t); }
namespace main { uint64_t sub_1047dd0(uintptr_t); }
namespace main { uint64_t sub_10490c0(uintptr_t); }
namespace main { void sub_e9d210(); }
namespace main { void sub_104ca50(); }
namespace main { uint64_t sub_e9d210(uintptr_t); }
namespace main { void sub_104e170(); }
namespace main { uint64_t sub_104ece0(uintptr_t); }
namespace main { void sub_104f2c0(); }
namespace main { uint64_t sub_1077060(uintptr_t); }
namespace main { uint64_t sub_1052f70(uintptr_t); }
namespace main { uint64_t sub_1053a20(uintptr_t); }
namespace main { void sub_1053da0(); }
namespace main { uint64_t sub_1053da0(uintptr_t); }
namespace main { uint64_t sub_6a1ee0(uintptr_t); }
namespace main { void sub_1056500(); }
namespace main { uint64_t sub_1056500(uintptr_t); }
namespace main { void sub_1058780(); }
namespace main { uint64_t sub_1058780(uintptr_t); }
namespace main { void sub_105bff0(); }
namespace main { uint64_t sub_105cb30(uintptr_t); }
namespace main { uint64_t sub_105ce20(uintptr_t); }
namespace main { uint64_t sub_105d350(uintptr_t); }
namespace main { uint64_t sub_105d620(uintptr_t); }
namespace main { uint64_t sub_105d9d0(uintptr_t); }
namespace main { uint64_t sub_105df10(uintptr_t); }
namespace main { void sub_105eed0(); }
namespace main { uint64_t sub_105eed0(uintptr_t); }
namespace main { uint64_t sub_105ede0(uintptr_t); }
namespace main { uint64_t sub_105f180(uintptr_t); }
namespace main { void sub_105f180(); }
namespace main { uint64_t sub_1060020(uintptr_t); }
namespace main { uint64_t sub_10606b0(uintptr_t); }
namespace main { uint64_t sub_10608e0(uintptr_t); }
namespace main { uint64_t sub_1061120(uintptr_t); }
namespace main { void sub_1064ee0(); }
namespace main { void sub_15b6e10(); }
namespace main { uint64_t sub_10841d0(uintptr_t); }
namespace main { uint64_t sub_1084640(uintptr_t); }
namespace main { uint64_t sub_1084af0(uintptr_t); }
namespace main { void sub_1084e70(); }
namespace main { uint64_t sub_1084e70(uintptr_t); }
namespace main { uint64_t sub_1086ee0(uintptr_t); }
namespace main { uint64_t sub_1087390(uintptr_t); }
namespace main { uint64_t sub_1088550(uintptr_t); }
namespace main { uint64_t sub_10889c0(uintptr_t); }
namespace main { void sub_1088e40(); }
namespace main { uint64_t sub_1088e40(uintptr_t); }
namespace main { uint64_t sub_108ace0(uintptr_t); }
namespace main { uint64_t sub_108b270(uintptr_t); }
namespace main { uint64_t sub_108d1b0(uintptr_t); }
namespace main { uint64_t sub_108d880(uintptr_t); }
namespace main { uint64_t sub_108ec40(uintptr_t); }
namespace main { uint64_t sub_108f1b0(uintptr_t); }
namespace main { void sub_108f670(); }
namespace main { uint64_t sub_108f670(uintptr_t); }
namespace main { uint64_t sub_1091680(uintptr_t); }
namespace main { uint64_t sub_1091af0(uintptr_t); }
namespace main { uint64_t sub_1092120(uintptr_t); }
namespace main { void sub_1092560(); }
namespace main { uint64_t sub_1092560(uintptr_t); }
namespace main { uint64_t sub_1094570(uintptr_t); }
namespace main { uint64_t sub_1094b80(uintptr_t); }
namespace main { uint64_t sub_1095d80(uintptr_t); }
namespace main { uint64_t sub_1096470(uintptr_t); }
namespace main { uint64_t sub_10979f0(uintptr_t); }
namespace main { uint64_t sub_1099a00(uintptr_t); }
namespace main { uint64_t sub_1099f20(uintptr_t); }
namespace main { void sub_109a2a0(); }
namespace main { uint64_t sub_109a2a0(uintptr_t); }
namespace main { uint64_t sub_109c2d0(uintptr_t); }
namespace main { uint64_t sub_109c7e0(uintptr_t); }
namespace main { uint64_t sub_109e080(uintptr_t); }
namespace main { uint64_t sub_109f0d0(uintptr_t); }
namespace main { uint64_t sub_10a02f0(uintptr_t); }
namespace main { uint64_t sub_10a1230(uintptr_t); }
namespace main { uint64_t sub_10a2400(uintptr_t); }
namespace main { uint64_t sub_10a36b0(uintptr_t); }
namespace main { uint64_t sub_10a4930(uintptr_t); }
namespace main { uint64_t sub_10a6100(uintptr_t); }
namespace main { uint64_t sub_10a7300(uintptr_t); }
namespace main { uint64_t sub_10a8320(uintptr_t); }
namespace main { uint64_t sub_10a9460(uintptr_t); }
namespace main { uint64_t sub_10a9ee0(uintptr_t); }
namespace main { uint64_t sub_10bcb70(uintptr_t); }
namespace main { uint64_t sub_10bdd90(uintptr_t); }
namespace main { uint64_t sub_10be390(uintptr_t); }
namespace main { uint64_t sub_10bf690(uintptr_t); }
namespace main { uint64_t sub_10bfb90(uintptr_t); }
namespace main { uint64_t sub_10c0e50(uintptr_t); }
namespace main { uint64_t sub_10c2530(uintptr_t); }
namespace main { uint64_t sub_10c3ab0(uintptr_t); }
namespace main { uint64_t sub_10c4f30(uintptr_t); }
namespace main { uint64_t sub_10c6ce0(uintptr_t); }
namespace main { uint64_t sub_10c7150(uintptr_t); }
namespace main { uint64_t sub_10c7610(uintptr_t); }
namespace main { uint64_t sub_10c88e0(uintptr_t); }
namespace main { uint64_t sub_10c8f20(uintptr_t); }
namespace main { uint64_t sub_10cbcd0(uintptr_t); }
namespace main { uint64_t sub_10cc140(uintptr_t); }
namespace main { uint64_t sub_10cc4e0(uintptr_t); }
namespace main { uint64_t sub_10d11a0(uintptr_t); }
namespace main { uint64_t sub_10d51b0(uintptr_t); }
namespace main { uint64_t sub_10d5860(uintptr_t); }
namespace main { uint64_t sub_10d6c20(uintptr_t); }
namespace main { uint64_t sub_10d7090(uintptr_t); }
namespace main { uint64_t sub_10d76b0(uintptr_t); }
namespace main { void sub_10d7b30(); }
namespace main { uint64_t sub_10d7b30(uintptr_t); }
namespace main { uint64_t sub_10d9ad0(uintptr_t); }
namespace main { uint64_t sub_10da2e0(uintptr_t); }
namespace main { uint64_t sub_10dacc0(uintptr_t); }
namespace main { uint64_t sub_10db5d0(uintptr_t); }
namespace main { uint64_t sub_10de6d0(uintptr_t); }
namespace main { uint64_t sub_10dea70(uintptr_t); }
namespace main { uint64_t sub_10dfc90(uintptr_t); }
namespace main { uint64_t sub_10e1b40(uintptr_t); }
namespace main { uint64_t sub_10e2060(uintptr_t); }
namespace main { uint64_t sub_10e6b80(uintptr_t); }
namespace main { uint64_t sub_10e7d60(uintptr_t); }
namespace main { uint64_t sub_10e82e0(uintptr_t); }
namespace main { uint64_t sub_10ed860(uintptr_t); }
namespace main { uint64_t sub_10edcd0(uintptr_t); }
namespace main { uint64_t sub_10ee2f0(uintptr_t); }
namespace main { void sub_10ee770(); }
namespace main { uint64_t sub_10ee770(uintptr_t); }
namespace main { uint64_t sub_10f0700(uintptr_t); }
namespace main { uint64_t sub_10f0e50(uintptr_t); }
namespace main { uint64_t sub_10f1c10(uintptr_t); }
namespace main { uint64_t sub_10f2dd0(uintptr_t); }
namespace main { uint64_t sub_10f3350(uintptr_t); }
namespace main { uint64_t sub_10f4830(uintptr_t); }
namespace main { void sub_10f4830(); }
namespace main { uint64_t sub_10f5450(uintptr_t); }
namespace main { uint64_t sub_10f5e50(uintptr_t); }
namespace main { uint64_t sub_10f95c0(uintptr_t); }
namespace main { void sub_10f7cf0(); }
namespace main { uint64_t sub_10f8f30(uintptr_t); }
namespace main { void sub_10fa0a0(); }
namespace main { uint64_t sub_10fa0a0(uintptr_t); }
namespace main { void sub_10fdaf0(); }
namespace main { uint64_t sub_1100570(uintptr_t); }
namespace main { uint64_t sub_1101f70(uintptr_t); }
namespace main { uint64_t sub_1102480(uintptr_t); }
namespace main { void sub_1104f50(); }
namespace main { uint64_t sub_1104f50(uintptr_t); }
namespace main { uint64_t sub_763030(uintptr_t); }
namespace main { void sub_110ccc0(); }
namespace main { uint64_t sub_110ccc0(uintptr_t); }
namespace main { void sub_1115a30(); }
namespace main { uint64_t sub_1115a30(uintptr_t); }
namespace main { void sub_1117560(); }
namespace main { uint64_t sub_1118a40(uintptr_t); }
namespace main { void sub_1118a40(); }
namespace main { void sub_5d1550(); }
namespace main { uint64_t sub_5d1550(uintptr_t); }
namespace main { uint64_t sub_111b010(uintptr_t); }
namespace main { void sub_111b010(); }
namespace main { void sub_1120d10(); }
namespace main { uint64_t sub_1120d10(uintptr_t); }
namespace main { uint64_t sub_1123630(uintptr_t); }
namespace main { void sub_112d870(); }
namespace main { uint64_t sub_112d870(uintptr_t); }
namespace main { uint64_t Stop_Camp_BallAura_MirrorBall_lp(uintptr_t); }
namespace main { void Stop_Camp_BallAura_MirrorBall_lp(); }
namespace main { void sub_112ee50(); }
namespace main { uint64_t sub_112ee50(uintptr_t); }
namespace main { void sub_1132c40(); }
namespace main { uint64_t sub_1132c40(uintptr_t); }
namespace main { void sub_111b250(); }
namespace main { void sub_111b410(); }
namespace main { uint64_t sub_1172950(uintptr_t); }
namespace main { void sub_113c4c0(); }
namespace main { void sub_113d0f0(); }
namespace main { uint64_t sub_113c4c0(uintptr_t); }
namespace main { void sub_113d1e0(); }
namespace main { uint64_t sub_1142d00(uintptr_t); }
namespace main { void sub_1145080(); }
namespace main { void sub_1146270(); }
namespace main { uint64_t sub_1145080(uintptr_t); }
namespace main { uint64_t sub_1148af0(uintptr_t); }
namespace main { void sub_1148af0(); }
namespace main { uint64_t sub_11497c0(uintptr_t); }
namespace main { void sub_1158d80(); }
namespace main { uint64_t sub_1158d80(uintptr_t); }
namespace main { uint64_t sub_1159010(uintptr_t); }
namespace main { uint64_t sub_115a000(uintptr_t); }
namespace main { void sub_115e730(); }
namespace main { void sub_115e980(); }
namespace main { uint64_t sub_115e730(uintptr_t); }
namespace main { uint64_t sub_115faa0(uintptr_t); }
namespace main { uint64_t sub_113cb80(uintptr_t); }
namespace main { uint64_t sub_11624b0(uintptr_t); }
namespace main { void sub_1168fa0(); }
namespace main { void sub_1168150(); }
namespace main { uint64_t sub_1168150(uintptr_t); }
namespace main { uint64_t sub_11682e0(uintptr_t); }
namespace main { void sub_1173330(); }
namespace main { uint64_t sub_1173330(uintptr_t); }
namespace main { void sub_113d9c0(); }
namespace main { uint64_t sub_1178740(uintptr_t); }
namespace main { uint64_t sub_117c740(uintptr_t); }
namespace main { void sub_e7c4c0(); }
namespace main { void sub_117db70(); }
namespace main { uint64_t sub_e7c4c0(uintptr_t); }
namespace main { void sub_11804d0(); }
namespace main { void sub_117dca0(); }
namespace main { uint64_t sub_11804d0(uintptr_t); }
namespace main { void sub_11811a0(); }
namespace main { uint64_t sub_11811a0(uintptr_t); }
namespace main { uint64_t sub_1182590(uintptr_t); }
namespace main { uint64_t sub_1183160(uintptr_t); }
namespace main { void sub_1183160(); }
namespace main { void sub_118a330(); }
namespace main { uint64_t sub_118a330(uintptr_t); }
namespace main { void sub_11969d0(); }
namespace main { void sub_1197690(); }
namespace main { void sub_1197830(); }
namespace main { uint64_t sub_1197690(uintptr_t); }
namespace main { void sub_1198110(); }
namespace main { void sub_119e200(); }
extern void main_f_1130b50();
namespace main { void sub_11af850(); }
namespace main { uint64_t sub_11af850(uintptr_t); }
namespace main { void sub_11b3130(); }
namespace main { uint64_t sub_11b3130(uintptr_t); }
namespace main { void sub_11b6790(); }
namespace main { uint64_t sub_11b6790(uintptr_t); }
namespace main { void player_2(); }
namespace main { uint64_t unnamed_39(uintptr_t); }
namespace main { uint64_t sub_11bbe00(uintptr_t); }
namespace main { uint64_t sub_11bc7c0(uintptr_t); }
namespace main { void sub_11bc7c0(); }
namespace main { uint64_t sub_11bd4b0(uintptr_t); }
namespace main { void sub_11bd380(); }
namespace main { uint64_t sub_11bd380(uintptr_t); }
namespace main { uint64_t sub_11bd9b0(uintptr_t); }
namespace main { uint64_t sub_11bea00(uintptr_t); }
namespace main { void sub_11bf5a0(); }
namespace main { void sub_11c0350(); }
namespace main { void sub_11c6800(); }
namespace main { void sub_11c6ae0(); }
namespace main { uint64_t sub_11c6800(uintptr_t); }
namespace main { uint64_t Play_Camp_Cooking_TrueLove_hit_finish(uintptr_t); }
namespace main { void sub_11cb880(); }
namespace main { void sub_11cd2f0(); }
namespace main { uint64_t sub_11cd2f0(uintptr_t); }
namespace main { uint64_t Stop_Camp_Cooking_Fire_lp(uintptr_t); }
namespace main { void Stop_Camp_Cooking_Fire_lp(); }
namespace main { void sub_11cdcf0(); }
namespace main { uint64_t sub_11d64c0(uintptr_t); }
namespace main { void sub_11d64c0(); }
namespace main { uint64_t sub_11d7820(uintptr_t); }
namespace main { void sub_11d7820(); }
namespace main { void sub_11d9880(); }
namespace main { uint64_t sub_11d9880(uintptr_t); }
namespace main { uint64_t sub_11dbf40(uintptr_t); }
namespace main { void sub_11dbf40(); }
namespace main { void sub_11deb20(); }
namespace main { uint64_t sub_11e3550(uintptr_t); }
namespace main { uint64_t sub_11e39b0(uintptr_t); }
namespace net { uint64_t nn_ldn_CreateNetwork(uintptr_t); }
namespace main { void sub_11e6110(); }
namespace main { uint64_t Stop_Camp_Cooking_PotBoiling_lp(uintptr_t); }
namespace main { void Stop_Camp_Cooking_PotBoiling_lp(); }
namespace main { uint64_t sub_11e7b10(uintptr_t); }
namespace main { void sub_11e7b10(); }
namespace main { uint64_t sub_11e9050(uintptr_t); }
namespace pokemon { uint64_t pokecamp_kinomi__02d(uintptr_t); }
namespace pokemon { uint64_t pokecamp_food__02d(uintptr_t); }
namespace main { uint64_t sub_11e93d0(uintptr_t); }
namespace main { void sub_11ec880(); }
namespace main { uint64_t sub_11ec880(uintptr_t); }
namespace main { uint64_t sub_11ee760(uintptr_t); }
namespace main { void sub_11ee760(); }
namespace gflib3 { uint64_t nn_ldn_SetStationAcceptPolicy_4(uintptr_t); }
namespace main { uint64_t sub_11f0770(uintptr_t); }
namespace main { uint64_t sub_11f1d00(uintptr_t); }
namespace main { void sub_11f1d00(); }
namespace main { uint64_t sub_11f1fd0(uintptr_t); }
namespace main { uint64_t sub_11f2ac0(uintptr_t); }
namespace main { uint64_t sub_11f2d90(uintptr_t); }
namespace main { uint64_t sub_11f2ec0(uintptr_t); }
namespace main { uint64_t sub_11f2fa0(uintptr_t); }
namespace main { uint64_t sub_11f3e50(uintptr_t); }
namespace main { void sub_11f50c0(); }
namespace main { uint64_t sub_11f50c0(uintptr_t); }
namespace main { uint64_t sub_11f52c0(uintptr_t); }
namespace main { uint64_t sub_11f5630(uintptr_t); }
namespace main { uint64_t sub_11f57b0(uintptr_t); }
namespace main { uint64_t sub_11f54c0(uintptr_t); }
namespace main { void sub_11f79a0(); }
namespace main { void sub_11f8690(); }
namespace main { void sub_11fb0b0(); }
namespace main { void sub_11fd2e0(); }
namespace main { void sub_1200540(); }
namespace main { uint64_t OnLimitTimeChanged(uintptr_t); }
namespace main { uint64_t sub_120a440(uintptr_t); }
namespace main { uint64_t sub_120a7b0(uintptr_t); }
namespace main { uint64_t sub_120ab50(uintptr_t); }
namespace main { void sub_120aeb0(); }
namespace main { void sub_120b5e0(); }
namespace main { uint64_t sub_120aeb0(uintptr_t); }
namespace main { void sub_120b8f0(); }
namespace main { uint64_t sub_120b8f0(uintptr_t); }
namespace main { uint64_t sub_120baf0(uintptr_t); }
namespace main { uint64_t sub_120be60(uintptr_t); }
namespace main { uint64_t sub_120bfe0(uintptr_t); }
namespace main { uint64_t sub_120bcf0(uintptr_t); }
namespace main { uint64_t sub_1207180(uintptr_t); }
namespace main { uint64_t sub_1208920(uintptr_t); }
namespace main { uint64_t sub_1209d00(uintptr_t); }
namespace main { uint64_t sub_1207c80(uintptr_t); }
namespace main { uint64_t sub_120f370(uintptr_t); }
namespace main { uint64_t sub_120f670(uintptr_t); }
namespace main { void sub_120f670(); }
namespace main { uint64_t sub_1210560(uintptr_t); }
namespace main { uint64_t sub_1210cd0(uintptr_t); }
namespace main { uint64_t sub_1210b40(uintptr_t); }
namespace main { uint64_t sub_12154d0(uintptr_t); }
namespace main { uint64_t sub_1215a20(uintptr_t); }
namespace main { uint64_t sub_1215bc0(uintptr_t); }
namespace main { void sub_1217300(); }
namespace main { uint64_t sub_1216f00(uintptr_t); }
namespace main { uint64_t sub_121dd80(uintptr_t); }
namespace main { uint64_t sub_121de70(uintptr_t); }
namespace main { uint64_t sub_121dfc0(uintptr_t); }
namespace main { void sub_121e100(); }
namespace main { void sub_121e460(); }
namespace main { uint64_t sub_121e100(uintptr_t); }
namespace main { uint64_t sub_c1bce0(uintptr_t); }
namespace main { void sub_122a0b0(); }
namespace main { void sub_122a230(); }
namespace main { uint64_t sub_122a0b0(uintptr_t); }
namespace main { void sub_122f450(); }
namespace main { void sub_1231510(); }
namespace main { uint64_t sub_1231510(uintptr_t); }
namespace main { void sub_1234bd0(); }
namespace main { void sub_12163d0(); }
namespace main { void sub_1216430(); }
namespace main { void sub_1244f60(); }
namespace main { void sub_1246b20(); }
namespace main { uint64_t sub_1246b20(uintptr_t); }
namespace main { void sub_1246f40(); }
namespace main { void sub_12470e0(); }
namespace main { uint64_t sub_1246f40(uintptr_t); }
namespace main { uint64_t sub_14b9450(uintptr_t); }
namespace main { uint64_t sub_14b9510(uintptr_t); }
namespace main { uint64_t sub_14b95d0(uintptr_t); }
namespace main { void sub_1249000(); }
namespace main { uint64_t sub_1248cf0(uintptr_t); }
namespace main { void sub_1249960(); }
namespace main { void sub_124a100(); }
namespace main { void sub_124add0(); }
namespace main { void sub_124af10(); }
namespace main { uint64_t sub_124add0(uintptr_t); }
namespace main { void sub_124c3a0(); }
namespace main { void sub_1250d30(); }
namespace main { void sub_1250f00(); }
namespace main { uint64_t sub_1250d30(uintptr_t); }
namespace main { uint64_t sub_124d550(uintptr_t); }
namespace main { uint64_t sub_124e390(uintptr_t); }
namespace main { uint64_t sub_124f5d0(uintptr_t); }
namespace main { uint64_t sub_124ff40(uintptr_t); }
namespace main { uint64_t sub_1250140(uintptr_t); }
namespace main { uint64_t sub_1250ba0(uintptr_t); }
namespace main { void sub_1253eb0(); }
namespace main { void sub_1255270(); }
namespace main { uint64_t sub_1255270(uintptr_t); }
namespace main { void sub_1255960(); }
namespace main { void sub_12585c0(); }
namespace main { uint64_t sub_14ee830(uintptr_t); }
namespace main { uint64_t Play_Camp_Curry_CloseBook(uintptr_t); }
namespace main { void sub_1259a60(); }
namespace main { void sub_125d360(); }
namespace main { uint64_t sub_125d360(uintptr_t); }
namespace main { void sub_125d790(); }
namespace main { void sub_125de00(); }
namespace main { uint64_t sub_125d790(uintptr_t); }
namespace main { void sub_eb81a0(); }
namespace main { uint64_t sub_eb81a0(uintptr_t); }
namespace main { void sub_125db50(); }
namespace main { void sub_1262bc0(); }
namespace main { void sub_1264430(); }
namespace main { void sub_1266490(); }
namespace main { void sub_12666d0(); }
namespace main { void sub_1268040(); }
namespace main { void sub_14ba4c0(); }
namespace main { void sub_126b950(); }
namespace main { void sub_126c7a0(); }
namespace main { uint64_t sub_126b950(uintptr_t); }
namespace main { uint64_t sub_126bfa0(uintptr_t); }
namespace main { void sub_126c9e0(); }
namespace main { void sub_126e670(); }
namespace main { void sub_1271740(); }
namespace main { void sub_1271900(); }
namespace main { uint64_t sub_1271740(uintptr_t); }
namespace main { void sub_1273570(); }
namespace main { void sub_1273700(); }
namespace main { uint64_t sub_1273570(uintptr_t); }
namespace main { void sub_1273cc0(); }
namespace main { void sub_12759f0(); }
namespace main { uint64_t sub_1274ee0(uintptr_t); }
namespace main { uint64_t sub_1275070(uintptr_t); }
namespace main { uint64_t sub_12751b0(uintptr_t); }
namespace main { uint64_t sub_1275340(uintptr_t); }
namespace main { uint64_t sub_12754d0(uintptr_t); }
namespace main { void sub_1276890(); }
namespace main { void sub_1277330(); }
namespace main { void sub_1277ff0(); }
namespace main { uint64_t sub_1277bd0(uintptr_t); }
namespace main { void sub_1278230(); }
namespace main { void sub_127a6e0(); }
namespace main { uint64_t sub_eb7730(uintptr_t); }
namespace main { void sub_127b330(); }
namespace main { void sub_127bf00(); }
namespace main { void sub_127cdd0(); }
namespace main { void sub_127cf20(); }
namespace main { uint64_t sub_127cdd0(uintptr_t); }
namespace main { void sub_127d900(); }
namespace main { uint64_t sub_126b5d0(uintptr_t); }
namespace main { uint64_t sub_126b790(uintptr_t); }
namespace main { void sub_12928c0(); }
namespace main { uint64_t sub_12928c0(uintptr_t); }
namespace main { void sub_126abd0(); }
namespace main { void sub_1295840(); }
namespace main { uint64_t sub_1296a90(uintptr_t); }
namespace main { void sub_1296a90(); }
namespace main { uint64_t sub_1299fa0(uintptr_t); }
namespace main { void sub_1297810(); }
namespace main { void sub_12a0980(); }
namespace main { uint64_t sub_12a0980(uintptr_t); }
namespace main { void sub_12a4420(); }
namespace main { void sub_12a0da0(); }
namespace main { uint64_t sub_12a4420(uintptr_t); }
namespace main { void sub_12a53e0(); }
namespace main { void sub_12a9ed0(); }
namespace main { uint64_t sub_12a9ed0(uintptr_t); }
namespace main { void sub_12a29d0(); }
namespace main { void T_contents_01_01(); }
namespace main { void sub_12b7510(); }
namespace main { uint64_t sub_12b7510(uintptr_t); }
namespace main { uint64_t sub_12b8d50(uintptr_t); }
namespace main { void sub_12b8d50(); }
namespace main { uint64_t sub_14e69a0(uintptr_t); }
namespace main { void sub_12bddf0(); }
namespace main { void sub_12be010(); }
namespace main { uint64_t sub_12bddf0(uintptr_t); }
namespace main { uint64_t sub_1505660(uintptr_t); }
namespace main { void sub_12bee00(); }
namespace main { void sub_12ba950(); }
namespace main { uint64_t sub_12bee00(uintptr_t); }
namespace main { void sub_12c2d30(); }
namespace main { void sub_12c2ef0(); }
namespace main { uint64_t sub_12c2d30(uintptr_t); }
namespace main { void sub_12c6840(); }
namespace main { void sub_12c70f0(); }
namespace main { void sub_12c8fc0(); }
namespace main { uint64_t sub_12c9280(uintptr_t); }
namespace main { void sub_12c9280(); }
namespace main { void sub_12c97c0(); }
namespace main { void sub_12ca440(); }
namespace main { uint64_t sub_12ca8d0(uintptr_t); }
namespace main { void sub_12ca8d0(); }
namespace main { void sub_12d57f0(); }
namespace main { void sub_12d7ea0(); }
namespace main { void sub_12d8010(); }
namespace main { uint64_t sub_12d7ea0(uintptr_t); }
namespace main { void sub_12d8840(); }
namespace main { void sub_12db5e0(); }
namespace main { void sub_12dcca0(); }
namespace main { void sub_12de2a0(); }
namespace main { void sub_12df4a0(); }
namespace main { void sub_12e0670(); }
namespace main { void sub_12e3210(); }
namespace main { void sub_12e45f0(); }
namespace main { void sub_12e4800(); }
namespace main { uint64_t sub_12e45f0(uintptr_t); }
namespace main { void sub_12e8820(); }
namespace main { void sub_12eab20(); }
namespace main { void sub_12eac90(); }
namespace main { uint64_t sub_12eab20(uintptr_t); }
namespace main { void sub_12ebc30(); }
namespace main { void sub_12ec1e0(); }
namespace main { void sub_12ecfd0(); }
namespace main { void sub_12ee870(); }
namespace main { uint64_t sub_15032c0(uintptr_t); }
namespace main { uint64_t sub_1505a30(uintptr_t); }
namespace main { uint64_t sub_1505cf0(uintptr_t); }
namespace main { void sub_12cdff0(); }
namespace main { uint64_t EffCenter01_4(uintptr_t); }
namespace main { void sub_12f4f80(); }
namespace main { uint64_t sub_12f4f80(uintptr_t); }
namespace main { uint64_t sub_12f57c0(uintptr_t); }
namespace main { uint64_t sub_12f7cf0(uintptr_t); }
namespace main { void sub_12f7cf0(); }
namespace main { uint64_t g_effect(uintptr_t); }
namespace main { uint64_t sub_12f9730(uintptr_t); }
namespace main { uint64_t projection_effect_col(uintptr_t); }
namespace main { uint64_t sub_12f95a0(uintptr_t); }
namespace main { void sub_12f8900(); }
namespace main { uint64_t sub_12f8900(uintptr_t); }
namespace main { uint64_t sub_12f8a40(uintptr_t); }
namespace main { void sub_1303d40(); }
namespace main { uint64_t sub_1303d40(uintptr_t); }
namespace main { void sub_e7c250(); }
namespace main { void sub_13041c0(); }
namespace main { uint64_t sub_e7c250(uintptr_t); }
namespace main { void sub_1304ff0(); }
namespace main { void sub_1305570(); }
namespace main { void sub_1305840(); }
namespace main { void sub_1306cf0(); }
namespace main { uint64_t sub_1307bb0(uintptr_t); }
namespace main { void sub_1307bb0(); }
namespace main { uint64_t sub_13083e0(uintptr_t); }
namespace main { uint64_t sub_13089e0(uintptr_t); }
namespace main { void sub_13089e0(); }
namespace main { void sub_67c4e0(); }
namespace main { void sub_130efc0(); }
namespace main { void sub_1310880(); }
namespace main { uint64_t sub_1310880(uintptr_t); }
namespace main { uint64_t sub_13119f0(uintptr_t); }
namespace main { void sub_13119f0(); }
namespace main { void sub_131a850(); }
namespace main { uint64_t sub_131a850(uintptr_t); }
namespace main { void sub_131b690(); }
namespace main { void button_list_item__02d(); }
namespace main { void sub_131f690(); }
namespace main { void sub_1320ae0(); }
namespace main { void sub_1320fd0(); }
namespace main { void sub_1321580(); }
namespace main { void sub_1323280(); }
namespace main { void sub_1323f70(); }
namespace main { void sub_1324b80(); }
namespace main { uint64_t sub_1324ee0(uintptr_t); }
namespace main { void sub_1325d30(); }
namespace main { void sub_13270c0(); }
namespace main { uint64_t sub_13270c0(uintptr_t); }
namespace main { uint64_t sub_1329970(uintptr_t); }
namespace main { void sub_132abe0(); }
namespace main { void sub_132ad80(); }
namespace main { uint64_t sub_132abe0(uintptr_t); }
namespace main { void sub_132ba40(); }
namespace main { uint64_t sub_132be50(uintptr_t); }
namespace main { void sub_1327b20(); }
namespace main { void sub_132e0a0(); }
namespace main { void sub_132e240(); }
namespace main { uint64_t sub_132e0a0(uintptr_t); }
namespace main { void sub_132fda0(); }
namespace main { void sub_132ff60(); }
namespace main { uint64_t sub_132fda0(uintptr_t); }
namespace main { void sub_1331fb0(); }
namespace main { uint64_t sub_1331fb0(uintptr_t); }
namespace main { uint64_t sub_13322f0(uintptr_t); }

// sub_fadfa0  (orig 0xfadfa0, tailcall)
void main_f_fadfa0() { main::sub_fadfe0(); }

// sub_fadfb0  (orig 0xfadfb0, tailcall)
void main_f_fadfb0() { main::sub_fadfe0(); }

// sub_fadfc0  (orig 0xfadfc0, tailcall)
uint64_t main_f_fadfc0(void* a0) {
    return main::sub_fadda0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fadfd0  (orig 0xfadfd0, tailcall)
uint64_t main_f_fadfd0(void* a0) {
    return main::sub_fadda0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fb0dc0  (orig 0xfb0dc0, tailcall)
void main_f_fb0dc0() { main::sub_fb0c00(); }

// sub_fb0dd0  (orig 0xfb0dd0, tailcall)
void main_f_fb0dd0() { main::sub_fb0e40(); }

// sub_fb0de0  (orig 0xfb0de0, tailcall)
uint64_t main_f_fb0de0(void* a0) {
    return main::sub_fb0c00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fb0df0  (orig 0xfb0df0, tailcall)
uint64_t main_f_fb0df0(void* a0) {
    return main::sub_fb0c00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fb0e00  (orig 0xfb0e00, tailcall)
void main_f_fb0e00() { main::sub_fb0e40(); }

// sub_fb0e10  (orig 0xfb0e10, tailcall)
void main_f_fb0e10() { main::sub_fb0e40(); }

// sub_fb0e20  (orig 0xfb0e20, tailcall)
uint64_t main_f_fb0e20(void* a0) {
    return main::sub_fb0c00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fb0e30  (orig 0xfb0e30, tailcall)
uint64_t main_f_fb0e30(void* a0) {
    return main::sub_fb0c00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fb28e0  (orig 0xfb28e0, tailcall)
void main_f_fb28e0() { main::sub_fb2780(); }

// sub_fb28f0  (orig 0xfb28f0, tailcall)
void main_f_fb28f0() { main::sub_fb2960(); }

// sub_fb2900  (orig 0xfb2900, tailcall)
uint64_t main_f_fb2900(void* a0) {
    return main::sub_fb2780(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fb2910  (orig 0xfb2910, tailcall)
uint64_t main_f_fb2910(void* a0) {
    return main::sub_fb2780(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fb2920  (orig 0xfb2920, tailcall)
void main_f_fb2920() { main::sub_fb2960(); }

// sub_fb2930  (orig 0xfb2930, tailcall)
void main_f_fb2930() { main::sub_fb2960(); }

// sub_fb2940  (orig 0xfb2940, tailcall)
uint64_t main_f_fb2940(void* a0) {
    return main::sub_fb2780(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fb2950  (orig 0xfb2950, tailcall)
uint64_t main_f_fb2950(void* a0) {
    return main::sub_fb2780(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fb7cf0  (orig 0xfb7cf0, tailcall)
void main_f_fb7cf0() { main::sub_e7feb0(); }

// sub_fb7d00  (orig 0xfb7d00, tailcall)
void main_f_fb7d00() { main::sub_fa4960(); }

// sub_fb7d10  (orig 0xfb7d10, tailcall)
uint64_t main_f_fb7d10(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fb7d20  (orig 0xfb7d20, tailcall)
uint64_t main_f_fb7d20(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fb7d30  (orig 0xfb7d30, tailcall)
void main_f_fb7d30() { main::sub_fa4960(); }

// sub_fb7d40  (orig 0xfb7d40, tailcall)
void main_f_fb7d40() { main::sub_fa4960(); }

// sub_fb7d50  (orig 0xfb7d50, tailcall)
uint64_t main_f_fb7d50(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fb7d60  (orig 0xfb7d60, tailcall)
uint64_t main_f_fb7d60(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fb9230  (orig 0xfb9230, tailcall)
void main_f_fb9230() { main::sub_fb9140(); }

// sub_fb9330  (orig 0xfb9330, tailcall)
uint64_t main_f_fb9330(void* a0) {
    return main::sub_fb9140(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fb9340  (orig 0xfb9340, tailcall)
uint64_t main_f_fb9340(void* a0) {
    return main::sub_fb9140(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fb9350  (orig 0xfb9350, tailcall)
uint64_t main_f_fb9350(void* a0) {
    return main::sub_fb9240(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fb9360  (orig 0xfb9360, tailcall)
uint64_t main_f_fb9360(void* a0) {
    return main::sub_fb9240(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fb9370  (orig 0xfb9370, tailcall)
uint64_t main_f_fb9370(void* a0) {
    return main::sub_fb9140(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fb9380  (orig 0xfb9380, tailcall)
uint64_t main_f_fb9380(void* a0) {
    return main::sub_fb9140(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fc0dd0  (orig 0xfc0dd0, tailcall)
void main_f_fc0dd0() { main::sub_fc0bc0(); }

// sub_fc0e50  (orig 0xfc0e50, tailcall)
uint64_t main_f_fc0e50(void* a0) {
    return main::sub_fc0bc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fc0e60  (orig 0xfc0e60, tailcall)
uint64_t main_f_fc0e60(void* a0) {
    return main::sub_fc0bc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fc0f50  (orig 0xfc0f50, tailcall)
uint64_t main_f_fc0f50(void* a0) {
    return main::sub_fc0bc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fc0f60  (orig 0xfc0f60, tailcall)
uint64_t main_f_fc0f60(void* a0) {
    return main::sub_fc0bc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fc2cb0  (orig 0xfc2cb0, tailcall)
uint64_t main_f_fc2cb0(void* a0) {
    return main::sub_fc2b30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fc2cc0  (orig 0xfc2cc0, tailcall)
uint64_t main_f_fc2cc0(void* a0) {
    return main::sub_fc2b30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fc2cd0  (orig 0xfc2cd0, tailcall)
void main_f_fc2cd0() { main::sub_fc2b30(); }

// sub_fc2ce0  (orig 0xfc2ce0, tailcall)
uint64_t main_f_fc2ce0(void* a0) {
    return main::sub_fc2b30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fc2cf0  (orig 0xfc2cf0, tailcall)
uint64_t main_f_fc2cf0(void* a0) {
    return main::sub_fc2b30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fc44f0  (orig 0xfc44f0, tailcall)
void main_f_fc44f0() { main::sub_fc4520(); }

// sub_fc4500  (orig 0xfc4500, tailcall)
void main_f_fc4500() { main::sub_fc4520(); }

// sub_fc4510  (orig 0xfc4510, tailcall)
void main_f_fc4510() { main::sub_fc4520(); }

// sub_fc5330  (orig 0xfc5330, tailcall)
void main_f_fc5330() { main::sub_fc5140(); }

// sub_fc5340  (orig 0xfc5340, tailcall)
uint64_t main_f_fc5340(void* a0) {
    return main::sub_fc5140(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fc5350  (orig 0xfc5350, tailcall)
uint64_t main_f_fc5350(void* a0) {
    return main::sub_fc5140(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fc6580  (orig 0xfc6580, tailcall)
uint64_t main_f_fc6580(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 1856));
    return main::PostEventName(((uintptr_t)(*(uint64_t*)((char*)(p0) + 1800))));
}

// sub_fc78c0  (orig 0xfc78c0, tailcall)
void main_f_fc78c0() { main::sub_fc76d0(); }

// sub_fc7980  (orig 0xfc7980, tailcall)
uint64_t main_f_fc7980(void* a0) {
    return main::sub_fc76d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fc7990  (orig 0xfc7990, tailcall)
uint64_t main_f_fc7990(void* a0) {
    return main::sub_fc76d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fc7b00  (orig 0xfc7b00, tailcall)
uint64_t main_f_fc7b00(void* a0) {
    return main::sub_fc76d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fc7b10  (orig 0xfc7b10, tailcall)
uint64_t main_f_fc7b10(void* a0) {
    return main::sub_fc76d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fcbfd0  (orig 0xfcbfd0, tailcall)
void main_f_fcbfd0() { main::sub_fcbc00(); }

// sub_fcbfe0  (orig 0xfcbfe0, tailcall)
uint64_t main_f_fcbfe0(void* a0) {
    return main::sub_fcbc00(((uintptr_t)((char*)(a0) - 96)));
}

// sub_fcc220  (orig 0xfcc220, tailcall)
uint64_t main_f_fcc220(void* a0) {
    return main::sub_fcc130(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fcc230  (orig 0xfcc230, tailcall)
uint64_t main_f_fcc230(void* a0) {
    return main::sub_fcc130(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fccc40  (orig 0xfccc40, tailcall)
void main_f_fccc40() { main::sub_fccb00(); }

// sub_fccce0  (orig 0xfccce0, tailcall)
uint64_t main_f_fccce0(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fcccf0  (orig 0xfcccf0, tailcall)
uint64_t main_f_fcccf0(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fccde0  (orig 0xfccde0, tailcall)
uint64_t main_f_fccde0(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fccdf0  (orig 0xfccdf0, tailcall)
uint64_t main_f_fccdf0(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fcd5f0  (orig 0xfcd5f0, tailcall)
void main_f_fcd5f0() { main::sub_fccb00(); }

// sub_fcd600  (orig 0xfcd600, tailcall)
void main_f_fcd600() { main::sub_fcce00(); }

// sub_fcd640  (orig 0xfcd640, tailcall)
uint64_t main_f_fcd640(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fcd650  (orig 0xfcd650, tailcall)
uint64_t main_f_fcd650(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fcd660  (orig 0xfcd660, tailcall)
void main_f_fcd660() { main::sub_fcce00(); }

// sub_fcd670  (orig 0xfcd670, tailcall)
void main_f_fcd670() { main::sub_fcce00(); }

// sub_fcd680  (orig 0xfcd680, tailcall)
uint64_t main_f_fcd680(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fcd690  (orig 0xfcd690, tailcall)
uint64_t main_f_fcd690(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fce9c0  (orig 0xfce9c0, tailcall)
uint64_t main_f_fce9c0(void* a0) {
    return main::player_icon_table_2(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1872))));
}

// sub_fcf1d0  (orig 0xfcf1d0, tailcall)
void main_f_fcf1d0() { main::sub_fcf100(); }

// sub_fcf250  (orig 0xfcf250, tailcall)
uint64_t main_f_fcf250(void* a0) {
    return main::sub_fcf100(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fcf260  (orig 0xfcf260, tailcall)
uint64_t main_f_fcf260(void* a0) {
    return main::sub_fcf100(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fcf350  (orig 0xfcf350, tailcall)
uint64_t main_f_fcf350(void* a0) {
    return main::sub_fcf100(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fcf360  (orig 0xfcf360, tailcall)
uint64_t main_f_fcf360(void* a0) {
    return main::sub_fcf100(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fcf7c0  (orig 0xfcf7c0, tailcall)
uint64_t main_f_fcf7c0(void* a0) {
    return main::sub_fcf630(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fcf7d0  (orig 0xfcf7d0, tailcall)
uint64_t main_f_fcf7d0(void* a0) {
    return main::sub_fcf630(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fcf880  (orig 0xfcf880, tailcall)
void main_f_fcf880() { main::sub_ce0(); }

// sub_fcf900  (orig 0xfcf900, tailcall)
void main_f_fcf900() { main::sub_ce0(); }

// sub_fcf970  (orig 0xfcf970, tailcall)
void main_f_fcf970() { main::sub_ce0(); }

// sub_fcf9f0  (orig 0xfcf9f0, tailcall)
void main_f_fcf9f0() { main::sub_ce0(); }

// sub_fcfa60  (orig 0xfcfa60, tailcall)
void main_f_fcfa60() { main::sub_ce0(); }

// sub_fcfae0  (orig 0xfcfae0, tailcall)
void main_f_fcfae0() { main::sub_ce0(); }

// sub_fcfb50  (orig 0xfcfb50, tailcall)
void main_f_fcfb50() { main::sub_ce0(); }

// sub_fcfbd0  (orig 0xfcfbd0, tailcall)
void main_f_fcfbd0() { main::sub_ce0(); }

// sub_fcfc40  (orig 0xfcfc40, tailcall)
void main_f_fcfc40() { main::sub_ce0(); }

// sub_fcfcc0  (orig 0xfcfcc0, tailcall)
void main_f_fcfcc0() { main::sub_ce0(); }

// sub_fcfd30  (orig 0xfcfd30, tailcall)
void main_f_fcfd30() { main::sub_ce0(); }

// sub_fcfdb0  (orig 0xfcfdb0, tailcall)
void main_f_fcfdb0() { main::sub_ce0(); }

// sub_fd04c0  (orig 0xfd04c0, tailcall)
void main_f_fd04c0() { main::sub_fcd090(); }

// sub_fd0a30  (orig 0xfd0a30, tailcall)
void main_f_fd0a30() { main::sub_fccb00(); }

// sub_fd0ab0  (orig 0xfd0ab0, tailcall)
uint64_t main_f_fd0ab0(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fd0ac0  (orig 0xfd0ac0, tailcall)
uint64_t main_f_fd0ac0(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fd0bb0  (orig 0xfd0bb0, tailcall)
uint64_t main_f_fd0bb0(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fd0bc0  (orig 0xfd0bc0, tailcall)
uint64_t main_f_fd0bc0(void* a0) {
    return main::sub_fccb00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fd2870  (orig 0xfd2870, tailcall)
uint64_t main_f_fd2870(void* a0) {
    return main::sub_14e6d50(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1840))));
}

// sub_fd3750  (orig 0xfd3750, tailcall)
void main_f_fd3750() { main::sub_ce0(); }

// sub_fd37d0  (orig 0xfd37d0, tailcall)
void main_f_fd37d0() { main::sub_ce0(); }

// sub_fd3840  (orig 0xfd3840, tailcall)
void main_f_fd3840() { main::sub_ce0(); }

// sub_fd38c0  (orig 0xfd38c0, tailcall)
void main_f_fd38c0() { main::sub_ce0(); }

// sub_fd3930  (orig 0xfd3930, tailcall)
void main_f_fd3930() { main::sub_ce0(); }

// sub_fd39b0  (orig 0xfd39b0, tailcall)
void main_f_fd39b0() { main::sub_ce0(); }

// sub_fd5e00  (orig 0xfd5e00, tailcall)
void main_f_fd5e00() { main::sub_fd59d0(); }

// sub_fd5ec0  (orig 0xfd5ec0, tailcall)
uint64_t main_f_fd5ec0(void* a0) {
    return main::sub_fd59d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fd5ed0  (orig 0xfd5ed0, tailcall)
uint64_t main_f_fd5ed0(void* a0) {
    return main::sub_fd59d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fd6040  (orig 0xfd6040, tailcall)
uint64_t main_f_fd6040(void* a0) {
    return main::sub_fd59d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fd6050  (orig 0xfd6050, tailcall)
uint64_t main_f_fd6050(void* a0) {
    return main::sub_fd59d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fd63b0  (orig 0xfd63b0, tailcall)
void main_f_fd63b0() { main::sub_ce0(); }

// sub_fd6430  (orig 0xfd6430, tailcall)
void main_f_fd6430() { main::sub_ce0(); }

// sub_fd6480  (orig 0xfd6480, tailcall)
void main_f_fd6480() { main::sub_ce0(); }

// sub_fd6500  (orig 0xfd6500, tailcall)
void main_f_fd6500() { main::sub_ce0(); }

// sub_fd6520  (orig 0xfd6520, tailcall)
void main_f_fd6520() { main::sub_ce0(); }

// sub_fd65a0  (orig 0xfd65a0, tailcall)
void main_f_fd65a0() { main::sub_ce0(); }

// sub_fd65c0  (orig 0xfd65c0, tailcall)
void main_f_fd65c0() { main::sub_ce0(); }

// sub_fd6640  (orig 0xfd6640, tailcall)
void main_f_fd6640() { main::sub_ce0(); }

// sub_fd6660  (orig 0xfd6660, tailcall)
void main_f_fd6660() { main::sub_ce0(); }

// sub_fd66e0  (orig 0xfd66e0, tailcall)
void main_f_fd66e0() { main::sub_ce0(); }

// sub_fd6700  (orig 0xfd6700, tailcall)
void main_f_fd6700() { main::sub_ce0(); }

// sub_fd6780  (orig 0xfd6780, tailcall)
void main_f_fd6780() { main::sub_ce0(); }

// sub_fd67a0  (orig 0xfd67a0, tailcall)
void main_f_fd67a0() { main::sub_ce0(); }

// sub_fd6820  (orig 0xfd6820, tailcall)
void main_f_fd6820() { main::sub_ce0(); }

// sub_fd6840  (orig 0xfd6840, tailcall)
void main_f_fd6840() { main::sub_ce0(); }

// sub_fd68c0  (orig 0xfd68c0, tailcall)
void main_f_fd68c0() { main::sub_ce0(); }

// sub_fd68e0  (orig 0xfd68e0, tailcall)
void main_f_fd68e0() { main::sub_ce0(); }

// sub_fd6960  (orig 0xfd6960, tailcall)
void main_f_fd6960() { main::sub_ce0(); }

// sub_fd6980  (orig 0xfd6980, tailcall)
void main_f_fd6980() { main::sub_ce0(); }

// sub_fd6a00  (orig 0xfd6a00, tailcall)
void main_f_fd6a00() { main::sub_ce0(); }

// sub_fd6a20  (orig 0xfd6a20, tailcall)
void main_f_fd6a20() { main::sub_ce0(); }

// sub_fd6aa0  (orig 0xfd6aa0, tailcall)
void main_f_fd6aa0() { main::sub_ce0(); }

// sub_fd6ac0  (orig 0xfd6ac0, tailcall)
void main_f_fd6ac0() { main::sub_ce0(); }

// sub_fd6b40  (orig 0xfd6b40, tailcall)
void main_f_fd6b40() { main::sub_ce0(); }

// sub_fd6b60  (orig 0xfd6b60, tailcall)
void main_f_fd6b60() { main::sub_ce0(); }

// sub_fd6be0  (orig 0xfd6be0, tailcall)
void main_f_fd6be0() { main::sub_ce0(); }

// sub_fd6c00  (orig 0xfd6c00, tailcall)
void main_f_fd6c00() { main::sub_ce0(); }

// sub_fd6c80  (orig 0xfd6c80, tailcall)
void main_f_fd6c80() { main::sub_ce0(); }

// sub_fd6ca0  (orig 0xfd6ca0, tailcall)
void main_f_fd6ca0() { main::sub_ce0(); }

// sub_fd6d20  (orig 0xfd6d20, tailcall)
void main_f_fd6d20() { main::sub_ce0(); }

// sub_fd6d40  (orig 0xfd6d40, tailcall)
void main_f_fd6d40() { main::sub_ce0(); }

// sub_fd6dc0  (orig 0xfd6dc0, tailcall)
void main_f_fd6dc0() { main::sub_ce0(); }

// sub_fd6de0  (orig 0xfd6de0, tailcall)
void main_f_fd6de0() { main::sub_ce0(); }

// sub_fd6e60  (orig 0xfd6e60, tailcall)
void main_f_fd6e60() { main::sub_ce0(); }

// sub_fd6e80  (orig 0xfd6e80, tailcall)
void main_f_fd6e80() { main::sub_ce0(); }

// sub_fd6f00  (orig 0xfd6f00, tailcall)
void main_f_fd6f00() { main::sub_ce0(); }

// sub_fd6f20  (orig 0xfd6f20, tailcall)
void main_f_fd6f20() { main::sub_ce0(); }

// sub_fd6fa0  (orig 0xfd6fa0, tailcall)
void main_f_fd6fa0() { main::sub_ce0(); }

// sub_fd6fc0  (orig 0xfd6fc0, tailcall)
void main_f_fd6fc0() { main::sub_ce0(); }

// sub_fd7040  (orig 0xfd7040, tailcall)
void main_f_fd7040() { main::sub_ce0(); }

// sub_fd7060  (orig 0xfd7060, tailcall)
void main_f_fd7060() { main::sub_ce0(); }

// sub_fd70e0  (orig 0xfd70e0, tailcall)
void main_f_fd70e0() { main::sub_ce0(); }

// sub_fd7100  (orig 0xfd7100, tailcall)
void main_f_fd7100() { main::sub_ce0(); }

// sub_fd7180  (orig 0xfd7180, tailcall)
void main_f_fd7180() { main::sub_ce0(); }

// sub_fd71a0  (orig 0xfd71a0, tailcall)
void main_f_fd71a0() { main::sub_ce0(); }

// sub_fd7220  (orig 0xfd7220, tailcall)
void main_f_fd7220() { main::sub_ce0(); }

// sub_fd7240  (orig 0xfd7240, tailcall)
void main_f_fd7240() { main::sub_ce0(); }

// sub_fd72c0  (orig 0xfd72c0, tailcall)
void main_f_fd72c0() { main::sub_ce0(); }

// sub_fd72e0  (orig 0xfd72e0, tailcall)
void main_f_fd72e0() { main::sub_ce0(); }

// sub_fd7360  (orig 0xfd7360, tailcall)
void main_f_fd7360() { main::sub_ce0(); }

// sub_fd7380  (orig 0xfd7380, tailcall)
void main_f_fd7380() { main::sub_ce0(); }

// sub_fd7400  (orig 0xfd7400, tailcall)
void main_f_fd7400() { main::sub_ce0(); }

// sub_fd7430  (orig 0xfd7430, tailcall)
void main_f_fd7430() { main::sub_ce0(); }

// sub_fd74b0  (orig 0xfd74b0, tailcall)
void main_f_fd74b0() { main::sub_ce0(); }

// sub_fd74d0  (orig 0xfd74d0, tailcall)
void main_f_fd74d0() { main::sub_ce0(); }

// sub_fd7550  (orig 0xfd7550, tailcall)
void main_f_fd7550() { main::sub_ce0(); }

// sub_fd7570  (orig 0xfd7570, tailcall)
void main_f_fd7570() { main::sub_ce0(); }

// sub_fd75f0  (orig 0xfd75f0, tailcall)
void main_f_fd75f0() { main::sub_ce0(); }

// sub_fd7610  (orig 0xfd7610, tailcall)
void main_f_fd7610() { main::sub_ce0(); }

// sub_fd7690  (orig 0xfd7690, tailcall)
void main_f_fd7690() { main::sub_ce0(); }

// sub_fd76b0  (orig 0xfd76b0, tailcall)
void main_f_fd76b0() { main::sub_ce0(); }

// sub_fd7730  (orig 0xfd7730, tailcall)
void main_f_fd7730() { main::sub_ce0(); }

// sub_fd7750  (orig 0xfd7750, tailcall)
void main_f_fd7750() { main::sub_ce0(); }

// sub_fd77d0  (orig 0xfd77d0, tailcall)
void main_f_fd77d0() { main::sub_ce0(); }

// sub_fd77f0  (orig 0xfd77f0, tailcall)
void main_f_fd77f0() { main::sub_ce0(); }

// sub_fd7870  (orig 0xfd7870, tailcall)
void main_f_fd7870() { main::sub_ce0(); }

// sub_fd7890  (orig 0xfd7890, tailcall)
void main_f_fd7890() { main::sub_ce0(); }

// sub_fd7910  (orig 0xfd7910, tailcall)
void main_f_fd7910() { main::sub_ce0(); }

// sub_fd7930  (orig 0xfd7930, tailcall)
void main_f_fd7930() { main::sub_ce0(); }

// sub_fd79b0  (orig 0xfd79b0, tailcall)
void main_f_fd79b0() { main::sub_ce0(); }

// sub_fd79d0  (orig 0xfd79d0, tailcall)
void main_f_fd79d0() { main::sub_ce0(); }

// sub_fd7a50  (orig 0xfd7a50, tailcall)
void main_f_fd7a50() { main::sub_ce0(); }

// sub_fd7a70  (orig 0xfd7a70, tailcall)
void main_f_fd7a70() { main::sub_ce0(); }

// sub_fd7af0  (orig 0xfd7af0, tailcall)
void main_f_fd7af0() { main::sub_ce0(); }

// sub_fd7b10  (orig 0xfd7b10, tailcall)
void main_f_fd7b10() { main::sub_ce0(); }

// sub_fd7b90  (orig 0xfd7b90, tailcall)
void main_f_fd7b90() { main::sub_ce0(); }

// sub_fd7bb0  (orig 0xfd7bb0, tailcall)
void main_f_fd7bb0() { main::sub_ce0(); }

// sub_fd7c30  (orig 0xfd7c30, tailcall)
void main_f_fd7c30() { main::sub_ce0(); }

// sub_fd7c50  (orig 0xfd7c50, tailcall)
void main_f_fd7c50() { main::sub_ce0(); }

// sub_fd7cd0  (orig 0xfd7cd0, tailcall)
void main_f_fd7cd0() { main::sub_ce0(); }

// sub_fd7cf0  (orig 0xfd7cf0, tailcall)
void main_f_fd7cf0() { main::sub_ce0(); }

// sub_fd7d70  (orig 0xfd7d70, tailcall)
void main_f_fd7d70() { main::sub_ce0(); }

// sub_fd7d90  (orig 0xfd7d90, tailcall)
void main_f_fd7d90() { main::sub_ce0(); }

// sub_fd7e10  (orig 0xfd7e10, tailcall)
void main_f_fd7e10() { main::sub_ce0(); }

// sub_fd8890  (orig 0xfd8890, tailcall)
void main_f_fd8890() { main::sub_fc7b20(); }

// sub_fd8960  (orig 0xfd8960, tailcall)
void main_f_fd8960() { main::sub_fc7b20(); }

// sub_fd8970  (orig 0xfd8970, tailcall)
void main_f_fd8970() { main::sub_fc7b20(); }

// sub_fd9d30  (orig 0xfd9d30, tailcall)
void main_f_fd9d30() { main::sub_fda110(); }

// sub_fd9e20  (orig 0xfd9e20, tailcall)
void main_f_fd9e20() { main::sub_fda110(); }

// sub_fd9e30  (orig 0xfd9e30, tailcall)
void main_f_fd9e30() { main::sub_fda110(); }

// sub_fdbe00  (orig 0xfdbe00, tailcall)
void main_f_fdbe00() { main::sub_fdc130(); }

// sub_fdbf90  (orig 0xfdbf90, tailcall)
void main_f_fdbf90() { main::sub_fdc130(); }

// sub_fdbfa0  (orig 0xfdbfa0, tailcall)
void main_f_fdbfa0() { main::sub_fdc130(); }

// sub_fdd400  (orig 0xfdd400, tailcall)
void main_f_fdd400() { main::sub_fdd670(); }

// sub_fdd530  (orig 0xfdd530, tailcall)
void main_f_fdd530() { main::sub_fdd670(); }

// sub_fdd540  (orig 0xfdd540, tailcall)
void main_f_fdd540() { main::sub_fdd670(); }

// sub_fdde40  (orig 0xfdde40, tailcall)
void main_f_fdde40() { main::sub_fddd80(); }

// sub_fdde50  (orig 0xfdde50, tailcall)
uint64_t main_f_fdde50(void* a0) {
    return main::sub_fddd80(((uintptr_t)((char*)(a0) - 120)));
}

// sub_fddf20  (orig 0xfddf20, tailcall)
void main_f_fddf20() { main::sub_fdde60(); }

// sub_fddf30  (orig 0xfddf30, tailcall)
uint64_t main_f_fddf30(void* a0) {
    return main::sub_fdde60(((uintptr_t)((char*)(a0) - 120)));
}

// sub_fde040  (orig 0xfde040, tailcall)
void main_f_fde040() { main::sub_fde270(); }

// sub_fde150  (orig 0xfde150, tailcall)
void main_f_fde150() { main::sub_fde270(); }

// sub_fde160  (orig 0xfde160, tailcall)
void main_f_fde160() { main::sub_fde270(); }

// sub_fdea70  (orig 0xfdea70, tailcall)
void main_f_fdea70() { main::sub_fdec60(); }

// sub_fdeb60  (orig 0xfdeb60, tailcall)
void main_f_fdeb60() { main::sub_fdec60(); }

// sub_fdeb70  (orig 0xfdeb70, tailcall)
void main_f_fdeb70() { main::sub_fdec60(); }

// sub_fdf0f0  (orig 0xfdf0f0, tailcall)
void main_f_fdf0f0() { main::sub_fdf2e0(); }

// sub_fdf1e0  (orig 0xfdf1e0, tailcall)
void main_f_fdf1e0() { main::sub_fdf2e0(); }

// sub_fdf1f0  (orig 0xfdf1f0, tailcall)
void main_f_fdf1f0() { main::sub_fdf2e0(); }

// sub_fdf920  (orig 0xfdf920, tailcall)
void main_f_fdf920() { main::sub_fdfb10(); }

// sub_fdfa10  (orig 0xfdfa10, tailcall)
void main_f_fdfa10() { main::sub_fdfb10(); }

// sub_fdfa20  (orig 0xfdfa20, tailcall)
void main_f_fdfa20() { main::sub_fdfb10(); }

// sub_fe07f0  (orig 0xfe07f0, tailcall)
void main_f_fe07f0() { main::sub_fe0050(); }

// sub_fe0800  (orig 0xfe0800, tailcall)
uint64_t main_f_fe0800(void* a0) {
    return main::sub_fe0050(((uintptr_t)((char*)(a0) - 120)));
}

// sub_fe0930  (orig 0xfe0930, tailcall)
void main_f_fe0930() { main::sub_fe0bb0(); }

// sub_fe0a60  (orig 0xfe0a60, tailcall)
void main_f_fe0a60() { main::sub_fe0bb0(); }

// sub_fe0a70  (orig 0xfe0a70, tailcall)
void main_f_fe0a70() { main::sub_fe0bb0(); }

// sub_fe1730  (orig 0xfe1730, tailcall)
void main_f_fe1730() { main::sub_fe1920(); }

// sub_fe1820  (orig 0xfe1820, tailcall)
void main_f_fe1820() { main::sub_fe1920(); }

// sub_fe1830  (orig 0xfe1830, tailcall)
void main_f_fe1830() { main::sub_fe1920(); }

// sub_fe2560  (orig 0xfe2560, tailcall)
void main_f_fe2560() { main::sub_fe1cb0(); }

// sub_fe2570  (orig 0xfe2570, tailcall)
uint64_t main_f_fe2570(void* a0) {
    return main::sub_fe1cb0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_fe2680  (orig 0xfe2680, tailcall)
void main_f_fe2680() { main::sub_fe28c0(); }

// sub_fe2790  (orig 0xfe2790, tailcall)
void main_f_fe2790() { main::sub_fe28c0(); }

// sub_fe27a0  (orig 0xfe27a0, tailcall)
void main_f_fe27a0() { main::sub_fe28c0(); }

// sub_fe2f20  (orig 0xfe2f20, tailcall)
void main_f_fe2f20() { main::sub_fe3190(); }

// sub_fe3050  (orig 0xfe3050, tailcall)
void main_f_fe3050() { main::sub_fe3190(); }

// sub_fe3060  (orig 0xfe3060, tailcall)
void main_f_fe3060() { main::sub_fe3190(); }

// sub_fe37b0  (orig 0xfe37b0, tailcall)
uint64_t main_f_fe37b0(void* a0) {
    return main::sub_fe3540(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fe37c0  (orig 0xfe37c0, tailcall)
uint64_t main_f_fe37c0(void* a0) {
    return main::sub_fe3540(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fe37d0  (orig 0xfe37d0, tailcall)
void main_f_fe37d0() { main::sub_fe3540(); }

// sub_fe37e0  (orig 0xfe37e0, tailcall)
uint64_t main_f_fe37e0(void* a0) {
    return main::sub_fe3540(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fe37f0  (orig 0xfe37f0, tailcall)
uint64_t main_f_fe37f0(void* a0) {
    return main::sub_fe3540(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fe7980  (orig 0xfe7980, tailcall)
uint64_t main_f_fe7980(void* a0) {
    return main::sub_fe7680(((uintptr_t)((char*)(a0) - 104)));
}

// sub_fe7ba0  (orig 0xfe7ba0, tailcall)
uint64_t main_f_fe7ba0(void* a0) {
    return main::sub_fe7ab0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fe7bb0  (orig 0xfe7bb0, tailcall)
uint64_t main_f_fe7bb0(void* a0) {
    return main::sub_fe7ab0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fe8be0  (orig 0xfe8be0, tailcall)
void main_f_fe8be0() { main::sub_fe89f0(); }

// sub_fe9360  (orig 0xfe9360, tailcall)
uint64_t main_f_fe9360(void* a0) {
    return main::sub_fe89f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fe9370  (orig 0xfe9370, tailcall)
uint64_t main_f_fe9370(void* a0) {
    return main::sub_fe89f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fe9380  (orig 0xfe9380, tailcall)
uint64_t main_f_fe9380(void* a0) {
    return main::sub_fe8bf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_fe9390  (orig 0xfe9390, tailcall)
uint64_t main_f_fe9390(void* a0) {
    return main::sub_fe8bf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fe93a0  (orig 0xfe93a0, tailcall)
uint64_t main_f_fe93a0(void* a0) {
    return main::sub_fe89f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fe93b0  (orig 0xfe93b0, tailcall)
uint64_t main_f_fe93b0(void* a0) {
    return main::sub_fe89f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fe9560  (orig 0xfe9560, tailcall)
uint64_t main_f_fe9560(void* a0) {
    return main::sub_fe8f60(((uintptr_t)((char*)(a0) - 104)));
}

// sub_fe9570  (orig 0xfe9570, tailcall)
uint64_t main_f_fe9570(void* a0) {
    return main::sub_fe90e0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_fe9580  (orig 0xfe9580, tailcall)
uint64_t main_f_fe9580(void* a0) {
    return main::sub_fe8df0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_febde0  (orig 0xfebde0, tailcall)
void main_f_febde0() { main::network_net_live_async_data_holder_2(); }

// sub_fed390  (orig 0xfed390, tailcall)
void main_f_fed390() { main::network_live_regulation_2(); }

// sub_fee150  (orig 0xfee150, tailcall)
void main_f_fee150() { main::network_net_live_data_holder_2(); }

// sub_fee5a0  (orig 0xfee5a0, tailcall)
uint64_t main_f_fee5a0(void* a0) {
    return main::sub_fee480(((uintptr_t)((char*)(a0) - 8)));
}

// sub_fee5b0  (orig 0xfee5b0, tailcall)
uint64_t main_f_fee5b0(void* a0) {
    return main::sub_fee480(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fee5c0  (orig 0xfee5c0, tailcall)
uint64_t main_f_fee5c0(void* a0) {
    return main::sub_fee480(((uintptr_t)((char*)(a0) - 88)));
}

// sub_fee5d0  (orig 0xfee5d0, tailcall)
void main_f_fee5d0() { main::sub_fee480(); }

// sub_fee5e0  (orig 0xfee5e0, tailcall)
uint64_t main_f_fee5e0(void* a0) {
    return main::sub_fee480(((uintptr_t)((char*)(a0) - 8)));
}

// sub_fee5f0  (orig 0xfee5f0, tailcall)
uint64_t main_f_fee5f0(void* a0) {
    return main::sub_fee480(((uintptr_t)((char*)(a0) - 80)));
}

// sub_fee600  (orig 0xfee600, tailcall)
uint64_t main_f_fee600(void* a0) {
    return main::sub_fee480(((uintptr_t)((char*)(a0) - 88)));
}

// sub_feef20  (orig 0xfeef20, tailcall)
uint64_t main_f_feef20(void* a0) {
    return main::sub_feee30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_feef30  (orig 0xfeef30, tailcall)
uint64_t main_f_feef30(void* a0) {
    return main::sub_feee30(((uintptr_t)((char*)(a0) - 88)));
}

// sub_ff0330  (orig 0xff0330, tailcall)
uint64_t main_f_ff0330(void* a0) {
    return main::sub_ff0240(((uintptr_t)((char*)(a0) - 88)));
}

// sub_ff0340  (orig 0xff0340, tailcall)
uint64_t main_f_ff0340(void* a0) {
    return main::sub_ff0240(((uintptr_t)((char*)(a0) - 96)));
}

// sub_ff1180  (orig 0xff1180, tailcall)
void main_f_ff1180() { main::network_poke_select_async_data_holder_2(); }

// sub_ff22e0  (orig 0xff22e0, tailcall)
void main_f_ff22e0() { main::network_poke_select_command_2(); }

// sub_ff5ae0  (orig 0xff5ae0, tailcall)
void main_f_ff5ae0() { main::sub_ff5970(); }

// sub_ff5be0  (orig 0xff5be0, tailcall)
uint64_t main_f_ff5be0(void* a0) {
    return main::sub_ff5970(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ff5bf0  (orig 0xff5bf0, tailcall)
uint64_t main_f_ff5bf0(void* a0) {
    return main::sub_ff5970(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ff5c00  (orig 0xff5c00, tailcall)
uint64_t main_f_ff5c00(void* a0) {
    return main::sub_ff5af0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ff5c10  (orig 0xff5c10, tailcall)
uint64_t main_f_ff5c10(void* a0) {
    return main::sub_ff5af0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ff5c20  (orig 0xff5c20, tailcall)
uint64_t main_f_ff5c20(void* a0) {
    return main::sub_ff5970(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ff5c30  (orig 0xff5c30, tailcall)
uint64_t main_f_ff5c30(void* a0) {
    return main::sub_ff5970(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ff65c0  (orig 0xff65c0, tailcall)
uint64_t main_f_ff65c0(void* a0) {
    return main::sub_ff63b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ff65d0  (orig 0xff65d0, tailcall)
uint64_t main_f_ff65d0(void* a0) {
    return main::sub_ff63b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ff7a90  (orig 0xff7a90, tailcall)
void main_f_ff7a90() { main::sub_ff7970(); }

// sub_ff7b90  (orig 0xff7b90, tailcall)
uint64_t main_f_ff7b90(void* a0) {
    return main::sub_ff7970(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ff7ba0  (orig 0xff7ba0, tailcall)
uint64_t main_f_ff7ba0(void* a0) {
    return main::sub_ff7970(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ff7bb0  (orig 0xff7bb0, tailcall)
uint64_t main_f_ff7bb0(void* a0) {
    return main::sub_ff7aa0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ff7bc0  (orig 0xff7bc0, tailcall)
uint64_t main_f_ff7bc0(void* a0) {
    return main::sub_ff7aa0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ff7bd0  (orig 0xff7bd0, tailcall)
uint64_t main_f_ff7bd0(void* a0) {
    return main::sub_ff7970(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ff7be0  (orig 0xff7be0, tailcall)
uint64_t main_f_ff7be0(void* a0) {
    return main::sub_ff7970(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ffaf20  (orig 0xffaf20, tailcall)
uint64_t main_f_ffaf20(void* a0) {
    return main::sub_ffae30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ffaf30  (orig 0xffaf30, tailcall)
uint64_t main_f_ffaf30(void* a0) {
    return main::sub_ffae30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ffbb20  (orig 0xffbb20, tailcall)
uint64_t main_f_ffbb20(void* a0) {
    return main::sub_ffb710(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ffbb30  (orig 0xffbb30, tailcall)
uint64_t main_f_ffbb30(void* a0) {
    return main::sub_ffb710(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ffbb40  (orig 0xffbb40, tailcall)
void main_f_ffbb40() { main::sub_ffb710(); }

// sub_ffbb50  (orig 0xffbb50, tailcall)
uint64_t main_f_ffbb50(void* a0) {
    return main::sub_ffb710(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ffbb60  (orig 0xffbb60, tailcall)
uint64_t main_f_ffbb60(void* a0) {
    return main::sub_ffb710(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ffe640  (orig 0xffe640, tailcall)
uint64_t main_f_ffe640(void* a0) {
    return main::sub_ffe520(((uintptr_t)((char*)(a0) + 416)));
}

// sub_fff260  (orig 0xfff260, tailcall)
uint64_t main_f_fff260(void* a0) {
    return main::sub_fff270(((uintptr_t)((char*)(a0) + 416)));
}

// sub_1002d10  (orig 0x1002d10, tailcall)
uint64_t main_f_1002d10(void* a0) {
    return main::sub_1002a80(((uintptr_t)((char*)(a0) - 112)));
}

// sub_1002fa0  (orig 0x1002fa0, tailcall)
uint64_t main_f_1002fa0(void* a0) {
    return main::sub_1002d20(((uintptr_t)((char*)(a0) - 112)));
}

// sub_10033e0  (orig 0x10033e0, tailcall)
uint64_t main_f_10033e0(void* a0) {
    return main::sub_1002fb0(((uintptr_t)((char*)(a0) - 112)));
}

// sub_1003560  (orig 0x1003560, tailcall)
uint64_t main_f_1003560(void* a0) {
    return main::sub_10033f0(((uintptr_t)((char*)(a0) - 112)));
}

// sub_1003860  (orig 0x1003860, tailcall)
uint64_t main_f_1003860(void* a0) {
    return main::sub_1003570(((uintptr_t)((char*)(a0) - 112)));
}

// sub_10039e0  (orig 0x10039e0, tailcall)
uint64_t main_f_10039e0(void* a0) {
    return main::sub_1003870(((uintptr_t)((char*)(a0) - 112)));
}

// sub_1003b60  (orig 0x1003b60, tailcall)
uint64_t main_f_1003b60(void* a0) {
    return main::sub_10039f0(((uintptr_t)((char*)(a0) - 112)));
}

// sub_1003ea0  (orig 0x1003ea0, tailcall)
uint64_t main_f_1003ea0(void* a0) {
    return main::sub_1003bb0(((uintptr_t)((char*)(a0) - 112)));
}

// sub_1004060  (orig 0x1004060, tailcall)
uint64_t main_f_1004060(void* a0) {
    return main::sub_1003ef0(((uintptr_t)((char*)(a0) - 112)));
}

// sub_1004330  (orig 0x1004330, tailcall)
uint64_t main_f_1004330(void* a0) {
    return main::sub_1004070(((uintptr_t)((char*)(a0) - 112)));
}

// sub_10045c0  (orig 0x10045c0, tailcall)
uint64_t main_f_10045c0(void* a0) {
    return main::sub_1004540(((uintptr_t)((char*)(a0) - 104)));
}

// sub_1004760  (orig 0x1004760, tailcall)
uint64_t main_f_1004760(void* a0) {
    return main::sub_1004670(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1004770  (orig 0x1004770, tailcall)
uint64_t main_f_1004770(void* a0) {
    return main::sub_1004670(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1004d10  (orig 0x1004d10, tailcall)
void main_f_1004d10() { main::sub_1004b20(); }

// sub_1005490  (orig 0x1005490, tailcall)
uint64_t main_f_1005490(void* a0) {
    return main::sub_1004b20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10054a0  (orig 0x10054a0, tailcall)
uint64_t main_f_10054a0(void* a0) {
    return main::sub_1004b20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10054b0  (orig 0x10054b0, tailcall)
uint64_t main_f_10054b0(void* a0) {
    return main::sub_1004d20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10054c0  (orig 0x10054c0, tailcall)
uint64_t main_f_10054c0(void* a0) {
    return main::sub_1004d20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10054d0  (orig 0x10054d0, tailcall)
uint64_t main_f_10054d0(void* a0) {
    return main::sub_1004b20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10054e0  (orig 0x10054e0, tailcall)
uint64_t main_f_10054e0(void* a0) {
    return main::sub_1004b20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1005690  (orig 0x1005690, tailcall)
uint64_t main_f_1005690(void* a0) {
    return main::sub_1005090(((uintptr_t)((char*)(a0) - 104)));
}

// sub_10056a0  (orig 0x10056a0, tailcall)
uint64_t main_f_10056a0(void* a0) {
    return main::sub_1005210(((uintptr_t)((char*)(a0) - 104)));
}

// sub_10056b0  (orig 0x10056b0, tailcall)
uint64_t main_f_10056b0(void* a0) {
    return main::sub_1004f20(((uintptr_t)((char*)(a0) - 104)));
}

// sub_100c2b0  (orig 0x100c2b0, tailcall)
void main_f_100c2b0() { main::sub_100c1c0(); }

// sub_100db70  (orig 0x100db70, tailcall)
void main_f_100db70() { main::network_nbr_data_holder_2(); }

// sub_100f5c0  (orig 0x100f5c0, tailcall)
void main_f_100f5c0() { main::network_player_position_2(); }

// sub_1010a70  (orig 0x1010a70, tailcall)
void main_f_1010a70() { main::network_battle_team_2(); }

// sub_1012df0  (orig 0x1012df0, tailcall)
void main_f_1012df0() { main::network_share_regulation_2(); }

// sub_10147f0  (orig 0x10147f0, tailcall)
void main_f_10147f0() { main::network_refusal_for_regulation_2(); }

// sub_1015540  (orig 0x1015540, tailcall)
void main_f_1015540() { main::network_bgm_2(); }

// sub_1018380  (orig 0x1018380, tailcall)
void main_f_1018380() { main::network_nbr_async_data_holder_2(); }

// sub_101aaf0  (orig 0x101aaf0, tailcall)
uint64_t main_f_101aaf0(void* a0) {
    return main::sub_101aa00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_101ab00  (orig 0x101ab00, tailcall)
uint64_t main_f_101ab00(void* a0) {
    return main::sub_101aa00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_101b280  (orig 0x101b280, tailcall)
void main_f_101b280() { main::sub_101b130(); }

// sub_101b290  (orig 0x101b290, tailcall)
uint64_t main_f_101b290(void* a0) {
    return main::sub_101b130(((uintptr_t)((char*)(a0) - 72)));
}

// sub_101b2a0  (orig 0x101b2a0, tailcall)
uint64_t main_f_101b2a0(void* a0) {
    return main::sub_101b130(((uintptr_t)((char*)(a0) - 72)));
}

// sub_101b2b0  (orig 0x101b2b0, tailcall)
uint64_t main_f_101b2b0(void* a0) {
    return main::sub_101b130(((uintptr_t)((char*)(a0) - 80)));
}

// sub_101b2c0  (orig 0x101b2c0, tailcall)
uint64_t main_f_101b2c0(void* a0) {
    return main::sub_101b130(((uintptr_t)((char*)(a0) - 80)));
}

// sub_101c170  (orig 0x101c170, tailcall)
void main_f_101c170() { main::sub_101c660(); }

// sub_101c2a0  (orig 0x101c2a0, tailcall)
void main_f_101c2a0() { main::sub_101c660(); }

// sub_101c2b0  (orig 0x101c2b0, tailcall)
void main_f_101c2b0() { main::sub_101c660(); }

// sub_101fa20  (orig 0x101fa20, tailcall)
uint64_t main_f_101fa20(void* a0) {
    return main::sub_101f930(((uintptr_t)((char*)(a0) - 80)));
}

// sub_101fa30  (orig 0x101fa30, tailcall)
uint64_t main_f_101fa30(void* a0) {
    return main::sub_101f930(((uintptr_t)((char*)(a0) - 88)));
}

// sub_1021a70  (orig 0x1021a70, tailcall)
uint64_t main_f_1021a70(void* a0) {
    return main::sub_1021980(((uintptr_t)((char*)(a0) - 88)));
}

// sub_1021a80  (orig 0x1021a80, tailcall)
uint64_t main_f_1021a80(void* a0) {
    return main::sub_1021980(((uintptr_t)((char*)(a0) - 96)));
}

// sub_1022470  (orig 0x1022470, tailcall)
void main_f_1022470() { main::sub_1022380(); }

// sub_1023420  (orig 0x1023420, tailcall)
void main_f_1023420() { main::network_nesthole_async_data_holder_2(); }

// sub_10283e0  (orig 0x10283e0, tailcall)
void main_f_10283e0() { main::network_nesthole_command_2(); }

// sub_102a0a0  (orig 0x102a0a0, tailcall)
uint64_t main_f_102a0a0(void* a0) {
    return main::sub_1029f10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_102a0b0  (orig 0x102a0b0, tailcall)
uint64_t main_f_102a0b0(void* a0) {
    return main::sub_1029f10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_102ac30  (orig 0x102ac30, tailcall)
uint64_t main_f_102ac30(void* a0) {
    return main::sub_1028ec0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_102b030  (orig 0x102b030, tailcall)
void main_f_102b030() { main::sub_102b0b0(); }

// sub_102b040  (orig 0x102b040, tailcall)
void main_f_102b040() { main::sub_102b0b0(); }

// sub_102b960  (orig 0x102b960, tailcall)
uint64_t main_f_102b960(void* a0) {
    return main::sub_1029020(((uintptr_t)((char*)(a0) - 72)));
}

// sub_102bd20  (orig 0x102bd20, tailcall)
void main_f_102bd20() { main::sub_102bda0(); }

// sub_102bd30  (orig 0x102bd30, tailcall)
void main_f_102bd30() { main::sub_102bda0(); }

// sub_102d9a0  (orig 0x102d9a0, tailcall)
uint64_t main_f_102d9a0(void* a0) {
    return main::sub_10314c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 288))));
}

// sub_102daa0  (orig 0x102daa0, tailcall)
uint64_t main_f_102daa0(void* a0) {
    return main::sub_10314a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 288))));
}

// sub_102dab0  (orig 0x102dab0, tailcall)
uint64_t main_f_102dab0(void* a0) {
    return main::sub_10314b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 288))));
}

// sub_102dac0  (orig 0x102dac0, tailcall)
uint64_t main_f_102dac0(void* a0) {
    return main::sub_10314d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 288))));
}

// sub_102dad0  (orig 0x102dad0, tailcall)
uint64_t main_f_102dad0(void* a0) {
    return main::sub_10314e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 288))));
}

// sub_102e6a0  (orig 0x102e6a0, tailcall)
void main_f_102e6a0() { main::sub_102e270(); }

// sub_102e7a0  (orig 0x102e7a0, tailcall)
uint64_t main_f_102e7a0(void* a0) {
    return main::sub_102e270(((uintptr_t)((char*)(a0) - 72)));
}

// sub_102e7b0  (orig 0x102e7b0, tailcall)
uint64_t main_f_102e7b0(void* a0) {
    return main::sub_102e270(((uintptr_t)((char*)(a0) - 72)));
}

// sub_102e7c0  (orig 0x102e7c0, tailcall)
uint64_t main_f_102e7c0(void* a0) {
    return main::sub_102e6b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_102e7d0  (orig 0x102e7d0, tailcall)
uint64_t main_f_102e7d0(void* a0) {
    return main::sub_102e6b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_102e7e0  (orig 0x102e7e0, tailcall)
uint64_t main_f_102e7e0(void* a0) {
    return main::sub_102e270(((uintptr_t)((char*)(a0) - 80)));
}

// sub_102e7f0  (orig 0x102e7f0, tailcall)
uint64_t main_f_102e7f0(void* a0) {
    return main::sub_102e270(((uintptr_t)((char*)(a0) - 80)));
}

// sub_102f130  (orig 0x102f130, tailcall)
uint64_t main_f_102f130(void* a0) {
    return main::sub_102cd40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_102f530  (orig 0x102f530, tailcall)
void main_f_102f530() { main::sub_102f5b0(); }

// sub_102f540  (orig 0x102f540, tailcall)
void main_f_102f540() { main::sub_102f5b0(); }

// sub_1031f50  (orig 0x1031f50, tailcall)
void main_f_1031f50() { main::sub_1031d60(); }

// sub_10326d0  (orig 0x10326d0, tailcall)
uint64_t main_f_10326d0(void* a0) {
    return main::sub_1031d60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10326e0  (orig 0x10326e0, tailcall)
uint64_t main_f_10326e0(void* a0) {
    return main::sub_1031d60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10326f0  (orig 0x10326f0, tailcall)
uint64_t main_f_10326f0(void* a0) {
    return main::sub_1031f60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1032700  (orig 0x1032700, tailcall)
uint64_t main_f_1032700(void* a0) {
    return main::sub_1031f60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1032710  (orig 0x1032710, tailcall)
uint64_t main_f_1032710(void* a0) {
    return main::sub_1031d60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1032720  (orig 0x1032720, tailcall)
uint64_t main_f_1032720(void* a0) {
    return main::sub_1031d60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10328d0  (orig 0x10328d0, tailcall)
uint64_t main_f_10328d0(void* a0) {
    return main::sub_10322d0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_10328e0  (orig 0x10328e0, tailcall)
uint64_t main_f_10328e0(void* a0) {
    return main::sub_1032450(((uintptr_t)((char*)(a0) - 104)));
}

// sub_10328f0  (orig 0x10328f0, tailcall)
uint64_t main_f_10328f0(void* a0) {
    return main::sub_1032160(((uintptr_t)((char*)(a0) - 104)));
}

// sub_10348c0  (orig 0x10348c0, tailcall)
uint64_t main_f_10348c0(void* a0) {
    return main::sub_1030690(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1034c90  (orig 0x1034c90, tailcall)
void main_f_1034c90() { main::sub_1034d10(); }

// sub_1034ca0  (orig 0x1034ca0, tailcall)
void main_f_1034ca0() { main::sub_1034d10(); }

// sub_10362e0  (orig 0x10362e0, tailcall)
void main_f_10362e0() { main::network_box_send_pokemon_2(); }

// sub_1037c50  (orig 0x1037c50, tailcall)
void main_f_1037c50() { main::network_box_sync_state_data_holder_2(); }

// sub_10382b0  (orig 0x10382b0, tailcall)
uint64_t main_f_10382b0(void* a0) {
    return main::sub_10381c0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_10382c0  (orig 0x10382c0, tailcall)
uint64_t main_f_10382c0(void* a0) {
    return main::sub_10381c0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_1039c00  (orig 0x1039c00, tailcall)
uint64_t main_f_1039c00(void* a0) {
    return main::sub_1039740(((uintptr_t)((char*)(a0) - 8)));
}

// sub_103a250  (orig 0x103a250, tailcall)
void main_f_103a250() { main::sub_103a060(); }

// sub_103a9d0  (orig 0x103a9d0, tailcall)
uint64_t main_f_103a9d0(void* a0) {
    return main::sub_103a060(((uintptr_t)((char*)(a0) - 72)));
}

// sub_103a9e0  (orig 0x103a9e0, tailcall)
uint64_t main_f_103a9e0(void* a0) {
    return main::sub_103a060(((uintptr_t)((char*)(a0) - 72)));
}

// sub_103a9f0  (orig 0x103a9f0, tailcall)
uint64_t main_f_103a9f0(void* a0) {
    return main::sub_103a260(((uintptr_t)((char*)(a0) - 72)));
}

// sub_103aa00  (orig 0x103aa00, tailcall)
uint64_t main_f_103aa00(void* a0) {
    return main::sub_103a260(((uintptr_t)((char*)(a0) - 80)));
}

// sub_103aa10  (orig 0x103aa10, tailcall)
uint64_t main_f_103aa10(void* a0) {
    return main::sub_103a060(((uintptr_t)((char*)(a0) - 80)));
}

// sub_103aa20  (orig 0x103aa20, tailcall)
uint64_t main_f_103aa20(void* a0) {
    return main::sub_103a060(((uintptr_t)((char*)(a0) - 80)));
}

// sub_103abd0  (orig 0x103abd0, tailcall)
uint64_t main_f_103abd0(void* a0) {
    return main::sub_103a5d0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_103abe0  (orig 0x103abe0, tailcall)
uint64_t main_f_103abe0(void* a0) {
    return main::sub_103a750(((uintptr_t)((char*)(a0) - 104)));
}

// sub_103abf0  (orig 0x103abf0, tailcall)
uint64_t main_f_103abf0(void* a0) {
    return main::sub_103a460(((uintptr_t)((char*)(a0) - 104)));
}

// sub_103cf60  (orig 0x103cf60, tailcall)
void main_f_103cf60() { main::network_pokemon_trade_2(); }

// sub_103d9f0  (orig 0x103d9f0, tailcall)
void main_f_103d9f0() { main::network_pokemon_trade_data_holder_2(); }

// sub_103fbb0  (orig 0x103fbb0, tailcall)
void main_f_103fbb0() { main::sub_103f9c0(); }

// sub_1040330  (orig 0x1040330, tailcall)
uint64_t main_f_1040330(void* a0) {
    return main::sub_103f9c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1040340  (orig 0x1040340, tailcall)
uint64_t main_f_1040340(void* a0) {
    return main::sub_103f9c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1040350  (orig 0x1040350, tailcall)
uint64_t main_f_1040350(void* a0) {
    return main::sub_103fbc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1040360  (orig 0x1040360, tailcall)
uint64_t main_f_1040360(void* a0) {
    return main::sub_103fbc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1040370  (orig 0x1040370, tailcall)
uint64_t main_f_1040370(void* a0) {
    return main::sub_103f9c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1040380  (orig 0x1040380, tailcall)
uint64_t main_f_1040380(void* a0) {
    return main::sub_103f9c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1040530  (orig 0x1040530, tailcall)
uint64_t main_f_1040530(void* a0) {
    return main::sub_103ff30(((uintptr_t)((char*)(a0) - 104)));
}

// sub_1040540  (orig 0x1040540, tailcall)
uint64_t main_f_1040540(void* a0) {
    return main::sub_10400b0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_1040550  (orig 0x1040550, tailcall)
uint64_t main_f_1040550(void* a0) {
    return main::sub_103fdc0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_10431e0  (orig 0x10431e0, tailcall)
void main_f_10431e0() { main::network_sync_save_data_holder_2(); }

// sub_1043710  (orig 0x1043710, tailcall)
uint64_t main_f_1043710(void* a0) {
    return main::sub_1043580(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1043720  (orig 0x1043720, tailcall)
uint64_t main_f_1043720(void* a0) {
    return main::sub_1043580(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10439d0  (orig 0x10439d0, tailcall)
uint64_t main_f_10439d0(void* a0) {
    return main::sub_10438d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10439e0  (orig 0x10439e0, tailcall)
uint64_t main_f_10439e0(void* a0) {
    return main::sub_10438d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10439f0  (orig 0x10439f0, tailcall)
void main_f_10439f0() { main::sub_10438d0(); }

// sub_1043a00  (orig 0x1043a00, tailcall)
uint64_t main_f_1043a00(void* a0) {
    return main::sub_10438d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1043a10  (orig 0x1043a10, tailcall)
uint64_t main_f_1043a10(void* a0) {
    return main::sub_10438d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10443d0  (orig 0x10443d0, tailcall)
uint64_t main_f_10443d0(void* a0) {
    return main::sub_10442d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10443e0  (orig 0x10443e0, tailcall)
uint64_t main_f_10443e0(void* a0) {
    return main::sub_10442d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10443f0  (orig 0x10443f0, tailcall)
void main_f_10443f0() { main::sub_10442d0(); }

// sub_1044400  (orig 0x1044400, tailcall)
uint64_t main_f_1044400(void* a0) {
    return main::sub_10442d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1044410  (orig 0x1044410, tailcall)
uint64_t main_f_1044410(void* a0) {
    return main::sub_10442d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1045770  (orig 0x1045770, tailcall)
uint64_t main_f_1045770(void* a0) {
    return main::sub_1045610(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1045780  (orig 0x1045780, tailcall)
uint64_t main_f_1045780(void* a0) {
    return main::sub_1045610(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1045790  (orig 0x1045790, tailcall)
void main_f_1045790() { main::sub_1045610(); }

// sub_10457a0  (orig 0x10457a0, tailcall)
uint64_t main_f_10457a0(void* a0) {
    return main::sub_1045610(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10457b0  (orig 0x10457b0, tailcall)
uint64_t main_f_10457b0(void* a0) {
    return main::sub_1045610(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1046080  (orig 0x1046080, tailcall)
uint64_t main_f_1046080(void* a0) {
    return main::sub_1045f90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1046090  (orig 0x1046090, tailcall)
uint64_t main_f_1046090(void* a0) {
    return main::sub_1045f90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10466c0  (orig 0x10466c0, tailcall)
void main_f_10466c0() { main::sub_10466d0(); }

// sub_1047ce0  (orig 0x1047ce0, tailcall)
uint64_t main_f_1047ce0(void* a0) {
    return main::sub_1047a10(((uintptr_t)((char*)(a0) - 96)));
}

// sub_1047ec0  (orig 0x1047ec0, tailcall)
uint64_t main_f_1047ec0(void* a0) {
    return main::sub_1047dd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1047ed0  (orig 0x1047ed0, tailcall)
uint64_t main_f_1047ed0(void* a0) {
    return main::sub_1047dd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10491b0  (orig 0x10491b0, tailcall)
uint64_t main_f_10491b0(void* a0) {
    return main::sub_10490c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10491c0  (orig 0x10491c0, tailcall)
uint64_t main_f_10491c0(void* a0) {
    return main::sub_10490c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_104c910  (orig 0x104c910, tailcall)
void main_f_104c910() { main::sub_e9d210(); }

// sub_104c920  (orig 0x104c920, tailcall)
void main_f_104c920() { main::sub_104ca50(); }

// sub_104c9f0  (orig 0x104c9f0, tailcall)
uint64_t main_f_104c9f0(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_104ca00  (orig 0x104ca00, tailcall)
uint64_t main_f_104ca00(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_104ca10  (orig 0x104ca10, tailcall)
void main_f_104ca10() { main::sub_104ca50(); }

// sub_104ca20  (orig 0x104ca20, tailcall)
void main_f_104ca20() { main::sub_104ca50(); }

// sub_104ca30  (orig 0x104ca30, tailcall)
uint64_t main_f_104ca30(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_104ca40  (orig 0x104ca40, tailcall)
uint64_t main_f_104ca40(void* a0) {
    return main::sub_e9d210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_104e2a0  (orig 0x104e2a0, tailcall)
void main_f_104e2a0() { main::sub_104e170(); }

// sub_104efb0  (orig 0x104efb0, tailcall)
uint64_t main_f_104efb0(void* a0) {
    return main::sub_104ece0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_104efc0  (orig 0x104efc0, tailcall)
uint64_t main_f_104efc0(void* a0) {
    return main::sub_104ece0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_104f5d0  (orig 0x104f5d0, tailcall)
void main_f_104f5d0() { main::sub_104f2c0(); }

// sub_1052de0  (orig 0x1052de0, tailcall)
uint64_t main_f_1052de0(void* a0) {
    return main::sub_1077060(((uintptr_t)((char*)(a0) + 872)));
}

// sub_10534d0  (orig 0x10534d0, tailcall)
uint64_t main_f_10534d0(void* a0) {
    return main::sub_1052f70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1053bb0  (orig 0x1053bb0, tailcall)
uint64_t main_f_1053bb0(void* a0) {
    return main::sub_1053a20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1053bc0  (orig 0x1053bc0, tailcall)
uint64_t main_f_1053bc0(void* a0) {
    return main::sub_1053a20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1053ea0  (orig 0x1053ea0, tailcall)
void main_f_1053ea0() { main::sub_1053da0(); }

// sub_1054130  (orig 0x1054130, tailcall)
uint64_t main_f_1054130(void* a0) {
    return main::sub_1053da0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1054140  (orig 0x1054140, tailcall)
uint64_t main_f_1054140(void* a0) {
    return main::sub_1053da0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1054230  (orig 0x1054230, tailcall)
uint64_t main_f_1054230(void* a0) {
    return main::sub_1053da0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1054240  (orig 0x1054240, tailcall)
uint64_t main_f_1054240(void* a0) {
    return main::sub_1053da0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1054650  (orig 0x1054650, tailcall)
uint64_t main_f_1054650(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10556b0  (orig 0x10556b0, tailcall)
uint64_t main_f_10556b0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1056600  (orig 0x1056600, tailcall)
void main_f_1056600() { main::sub_1056500(); }

// sub_1056890  (orig 0x1056890, tailcall)
uint64_t main_f_1056890(void* a0) {
    return main::sub_1056500(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10568a0  (orig 0x10568a0, tailcall)
uint64_t main_f_10568a0(void* a0) {
    return main::sub_1056500(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1056990  (orig 0x1056990, tailcall)
uint64_t main_f_1056990(void* a0) {
    return main::sub_1056500(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10569a0  (orig 0x10569a0, tailcall)
uint64_t main_f_10569a0(void* a0) {
    return main::sub_1056500(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1056cc0  (orig 0x1056cc0, tailcall)
uint64_t main_f_1056cc0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10578f0  (orig 0x10578f0, tailcall)
uint64_t main_f_10578f0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1058880  (orig 0x1058880, tailcall)
void main_f_1058880() { main::sub_1058780(); }

// sub_1058b10  (orig 0x1058b10, tailcall)
uint64_t main_f_1058b10(void* a0) {
    return main::sub_1058780(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1058b20  (orig 0x1058b20, tailcall)
uint64_t main_f_1058b20(void* a0) {
    return main::sub_1058780(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1058c10  (orig 0x1058c10, tailcall)
uint64_t main_f_1058c10(void* a0) {
    return main::sub_1058780(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1058c20  (orig 0x1058c20, tailcall)
uint64_t main_f_1058c20(void* a0) {
    return main::sub_1058780(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1058f40  (orig 0x1058f40, tailcall)
uint64_t main_f_1058f40(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1059a60  (orig 0x1059a60, tailcall)
uint64_t main_f_1059a60(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_105a880  (orig 0x105a880, tailcall)
uint64_t main_f_105a880(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_105c2a0  (orig 0x105c2a0, tailcall)
void main_f_105c2a0() { main::sub_105bff0(); }

// sub_105cd30  (orig 0x105cd30, tailcall)
uint64_t main_f_105cd30(void* a0) {
    return main::sub_105cb30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_105cd40  (orig 0x105cd40, tailcall)
uint64_t main_f_105cd40(void* a0) {
    return main::sub_105cb30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_105d0f0  (orig 0x105d0f0, tailcall)
uint64_t main_f_105d0f0(void* a0) {
    return main::sub_105ce20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_105d100  (orig 0x105d100, tailcall)
uint64_t main_f_105d100(void* a0) {
    return main::sub_105ce20(((uintptr_t)((char*)(a0) - 88)));
}

// sub_105d530  (orig 0x105d530, tailcall)
uint64_t main_f_105d530(void* a0) {
    return main::sub_105d350(((uintptr_t)((char*)(a0) - 72)));
}

// sub_105d540  (orig 0x105d540, tailcall)
uint64_t main_f_105d540(void* a0) {
    return main::sub_105d350(((uintptr_t)((char*)(a0) - 80)));
}

// sub_105d8f0  (orig 0x105d8f0, tailcall)
uint64_t main_f_105d8f0(void* a0) {
    return main::sub_105d620(((uintptr_t)((char*)(a0) - 80)));
}

// sub_105d900  (orig 0x105d900, tailcall)
uint64_t main_f_105d900(void* a0) {
    return main::sub_105d620(((uintptr_t)((char*)(a0) - 88)));
}

// sub_105dca0  (orig 0x105dca0, tailcall)
uint64_t main_f_105dca0(void* a0) {
    return main::sub_105d9d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_105dcb0  (orig 0x105dcb0, tailcall)
uint64_t main_f_105dcb0(void* a0) {
    return main::sub_105d9d0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_105e0f0  (orig 0x105e0f0, tailcall)
uint64_t main_f_105e0f0(void* a0) {
    return main::sub_105df10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_105e100  (orig 0x105e100, tailcall)
uint64_t main_f_105e100(void* a0) {
    return main::sub_105df10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_105e290  (orig 0x105e290, tailcall)
void main_f_105e290() { main::sub_ce0(); }

// sub_105f010  (orig 0x105f010, tailcall)
void main_f_105f010() { main::sub_105eed0(); }

// sub_105f020  (orig 0x105f020, tailcall)
uint64_t main_f_105f020(void* a0) {
    return main::sub_105eed0(((uintptr_t)((char*)(a0) - 8)));
}

// sub_105f030  (orig 0x105f030, tailcall)
uint64_t main_f_105f030(void* a0) {
    return main::sub_105eed0(((uintptr_t)((char*)(a0) - 8)));
}

// sub_105f040  (orig 0x105f040, tailcall)
uint64_t main_f_105f040(void* a0) {
    return main::sub_105eed0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_105f050  (orig 0x105f050, tailcall)
uint64_t main_f_105f050(void* a0) {
    return main::sub_105eed0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_105f060  (orig 0x105f060, tailcall)
uint64_t main_f_105f060(void* a0) {
    return main::sub_105ede0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_105f070  (orig 0x105f070, tailcall)
uint64_t main_f_105f070(void* a0) {
    return main::sub_105ede0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_105f080  (orig 0x105f080, tailcall)
uint64_t main_f_105f080(void* a0) {
    return main::sub_105eed0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_105f090  (orig 0x105f090, tailcall)
uint64_t main_f_105f090(void* a0) {
    return main::sub_105eed0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_105f2a0  (orig 0x105f2a0, tailcall)
uint64_t main_f_105f2a0(void* a0) {
    return main::sub_105f180(((uintptr_t)((char*)(a0) - 72)));
}

// sub_105f2b0  (orig 0x105f2b0, tailcall)
uint64_t main_f_105f2b0(void* a0) {
    return main::sub_105f180(((uintptr_t)((char*)(a0) - 80)));
}

// sub_105f2c0  (orig 0x105f2c0, tailcall)
void main_f_105f2c0() { main::sub_105f180(); }

// sub_105f2d0  (orig 0x105f2d0, tailcall)
uint64_t main_f_105f2d0(void* a0) {
    return main::sub_105f180(((uintptr_t)((char*)(a0) - 72)));
}

// sub_105f2e0  (orig 0x105f2e0, tailcall)
uint64_t main_f_105f2e0(void* a0) {
    return main::sub_105f180(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1060480  (orig 0x1060480, tailcall)
uint64_t main_f_1060480(void* a0) {
    return main::sub_1060020(((uintptr_t)((char*)(a0) - 96)));
}

// sub_10607a0  (orig 0x10607a0, tailcall)
uint64_t main_f_10607a0(void* a0) {
    return main::sub_10606b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10607b0  (orig 0x10607b0, tailcall)
uint64_t main_f_10607b0(void* a0) {
    return main::sub_10606b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1060af0  (orig 0x1060af0, tailcall)
uint64_t main_f_1060af0(void* a0) {
    return main::sub_10608e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1060b00  (orig 0x1060b00, tailcall)
uint64_t main_f_1060b00(void* a0) {
    return main::sub_10608e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10612b0  (orig 0x10612b0, tailcall)
uint64_t main_f_10612b0(void* a0) {
    return main::sub_1061120(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10612c0  (orig 0x10612c0, tailcall)
uint64_t main_f_10612c0(void* a0) {
    return main::sub_1061120(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10650f0  (orig 0x10650f0, tailcall)
void main_f_10650f0() { main::sub_1064ee0(); }

// sub_107b430  (orig 0x107b430, tailcall)
void main_f_107b430() { main::sub_15b6e10(); }

// sub_107b440  (orig 0x107b440, tailcall)
void main_f_107b440() { main::sub_15b6e10(); }

// sub_107b450  (orig 0x107b450, tailcall)
void main_f_107b450() { main::sub_15b6e10(); }

// sub_107b460  (orig 0x107b460, tailcall)
void main_f_107b460() { main::sub_15b6e10(); }

// sub_107bbb0  (orig 0x107bbb0, tailcall)
void main_f_107bbb0() { main::sub_15b6e10(); }

// sub_10843e0  (orig 0x10843e0, tailcall)
uint64_t main_f_10843e0(void* a0) {
    return main::sub_10841d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10843f0  (orig 0x10843f0, tailcall)
uint64_t main_f_10843f0(void* a0) {
    return main::sub_10841d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1084850  (orig 0x1084850, tailcall)
uint64_t main_f_1084850(void* a0) {
    return main::sub_1084640(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1084860  (orig 0x1084860, tailcall)
uint64_t main_f_1084860(void* a0) {
    return main::sub_1084640(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1084c80  (orig 0x1084c80, tailcall)
uint64_t main_f_1084c80(void* a0) {
    return main::sub_1084af0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1084c90  (orig 0x1084c90, tailcall)
uint64_t main_f_1084c90(void* a0) {
    return main::sub_1084af0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1084f70  (orig 0x1084f70, tailcall)
void main_f_1084f70() { main::sub_1084e70(); }

// sub_1085200  (orig 0x1085200, tailcall)
uint64_t main_f_1085200(void* a0) {
    return main::sub_1084e70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1085210  (orig 0x1085210, tailcall)
uint64_t main_f_1085210(void* a0) {
    return main::sub_1084e70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1085300  (orig 0x1085300, tailcall)
uint64_t main_f_1085300(void* a0) {
    return main::sub_1084e70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1085310  (orig 0x1085310, tailcall)
uint64_t main_f_1085310(void* a0) {
    return main::sub_1084e70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1085690  (orig 0x1085690, tailcall)
uint64_t main_f_1085690(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1086250  (orig 0x1086250, tailcall)
uint64_t main_f_1086250(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10870f0  (orig 0x10870f0, tailcall)
uint64_t main_f_10870f0(void* a0) {
    return main::sub_1086ee0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1087100  (orig 0x1087100, tailcall)
uint64_t main_f_1087100(void* a0) {
    return main::sub_1086ee0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1087520  (orig 0x1087520, tailcall)
uint64_t main_f_1087520(void* a0) {
    return main::sub_1087390(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1087530  (orig 0x1087530, tailcall)
uint64_t main_f_1087530(void* a0) {
    return main::sub_1087390(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1087950  (orig 0x1087950, tailcall)
uint64_t main_f_1087950(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1088760  (orig 0x1088760, tailcall)
uint64_t main_f_1088760(void* a0) {
    return main::sub_1088550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1088770  (orig 0x1088770, tailcall)
uint64_t main_f_1088770(void* a0) {
    return main::sub_1088550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1088bd0  (orig 0x1088bd0, tailcall)
uint64_t main_f_1088bd0(void* a0) {
    return main::sub_10889c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1088be0  (orig 0x1088be0, tailcall)
uint64_t main_f_1088be0(void* a0) {
    return main::sub_10889c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1088f40  (orig 0x1088f40, tailcall)
void main_f_1088f40() { main::sub_1088e40(); }

// sub_10891d0  (orig 0x10891d0, tailcall)
uint64_t main_f_10891d0(void* a0) {
    return main::sub_1088e40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10891e0  (orig 0x10891e0, tailcall)
uint64_t main_f_10891e0(void* a0) {
    return main::sub_1088e40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10892d0  (orig 0x10892d0, tailcall)
uint64_t main_f_10892d0(void* a0) {
    return main::sub_1088e40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10892e0  (orig 0x10892e0, tailcall)
uint64_t main_f_10892e0(void* a0) {
    return main::sub_1088e40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1089600  (orig 0x1089600, tailcall)
uint64_t main_f_1089600(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_108a110  (orig 0x108a110, tailcall)
uint64_t main_f_108a110(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_108aef0  (orig 0x108aef0, tailcall)
uint64_t main_f_108aef0(void* a0) {
    return main::sub_108ace0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_108af00  (orig 0x108af00, tailcall)
uint64_t main_f_108af00(void* a0) {
    return main::sub_108ace0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_108b4a0  (orig 0x108b4a0, tailcall)
uint64_t main_f_108b4a0(void* a0) {
    return main::sub_108b270(((uintptr_t)((char*)(a0) - 72)));
}

// sub_108b4b0  (orig 0x108b4b0, tailcall)
uint64_t main_f_108b4b0(void* a0) {
    return main::sub_108b270(((uintptr_t)((char*)(a0) - 80)));
}

// sub_108b970  (orig 0x108b970, tailcall)
uint64_t main_f_108b970(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_108c5a0  (orig 0x108c5a0, tailcall)
uint64_t main_f_108c5a0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_108d3c0  (orig 0x108d3c0, tailcall)
uint64_t main_f_108d3c0(void* a0) {
    return main::sub_108d1b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_108d3d0  (orig 0x108d3d0, tailcall)
uint64_t main_f_108d3d0(void* a0) {
    return main::sub_108d1b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_108daf0  (orig 0x108daf0, tailcall)
uint64_t main_f_108daf0(void* a0) {
    return main::sub_108d880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_108db00  (orig 0x108db00, tailcall)
uint64_t main_f_108db00(void* a0) {
    return main::sub_108d880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_108e000  (orig 0x108e000, tailcall)
uint64_t main_f_108e000(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_108ee50  (orig 0x108ee50, tailcall)
uint64_t main_f_108ee50(void* a0) {
    return main::sub_108ec40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_108ee60  (orig 0x108ee60, tailcall)
uint64_t main_f_108ee60(void* a0) {
    return main::sub_108ec40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_108f3e0  (orig 0x108f3e0, tailcall)
uint64_t main_f_108f3e0(void* a0) {
    return main::sub_108f1b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_108f3f0  (orig 0x108f3f0, tailcall)
uint64_t main_f_108f3f0(void* a0) {
    return main::sub_108f1b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_108f770  (orig 0x108f770, tailcall)
void main_f_108f770() { main::sub_108f670(); }

// sub_108fa00  (orig 0x108fa00, tailcall)
uint64_t main_f_108fa00(void* a0) {
    return main::sub_108f670(((uintptr_t)((char*)(a0) - 72)));
}

// sub_108fa10  (orig 0x108fa10, tailcall)
uint64_t main_f_108fa10(void* a0) {
    return main::sub_108f670(((uintptr_t)((char*)(a0) - 72)));
}

// sub_108fb00  (orig 0x108fb00, tailcall)
uint64_t main_f_108fb00(void* a0) {
    return main::sub_108f670(((uintptr_t)((char*)(a0) - 80)));
}

// sub_108fb10  (orig 0x108fb10, tailcall)
uint64_t main_f_108fb10(void* a0) {
    return main::sub_108f670(((uintptr_t)((char*)(a0) - 80)));
}

// sub_108fe90  (orig 0x108fe90, tailcall)
uint64_t main_f_108fe90(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1090a40  (orig 0x1090a40, tailcall)
uint64_t main_f_1090a40(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1091890  (orig 0x1091890, tailcall)
uint64_t main_f_1091890(void* a0) {
    return main::sub_1091680(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10918a0  (orig 0x10918a0, tailcall)
uint64_t main_f_10918a0(void* a0) {
    return main::sub_1091680(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1091d00  (orig 0x1091d00, tailcall)
uint64_t main_f_1091d00(void* a0) {
    return main::sub_1091af0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1091d10  (orig 0x1091d10, tailcall)
uint64_t main_f_1091d10(void* a0) {
    return main::sub_1091af0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1092310  (orig 0x1092310, tailcall)
uint64_t main_f_1092310(void* a0) {
    return main::sub_1092120(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1092320  (orig 0x1092320, tailcall)
uint64_t main_f_1092320(void* a0) {
    return main::sub_1092120(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1092660  (orig 0x1092660, tailcall)
void main_f_1092660() { main::sub_1092560(); }

// sub_10928f0  (orig 0x10928f0, tailcall)
uint64_t main_f_10928f0(void* a0) {
    return main::sub_1092560(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1092900  (orig 0x1092900, tailcall)
uint64_t main_f_1092900(void* a0) {
    return main::sub_1092560(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10929f0  (orig 0x10929f0, tailcall)
uint64_t main_f_10929f0(void* a0) {
    return main::sub_1092560(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1092a00  (orig 0x1092a00, tailcall)
uint64_t main_f_1092a00(void* a0) {
    return main::sub_1092560(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1092d80  (orig 0x1092d80, tailcall)
uint64_t main_f_1092d80(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1093930  (orig 0x1093930, tailcall)
uint64_t main_f_1093930(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1094780  (orig 0x1094780, tailcall)
uint64_t main_f_1094780(void* a0) {
    return main::sub_1094570(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1094790  (orig 0x1094790, tailcall)
uint64_t main_f_1094790(void* a0) {
    return main::sub_1094570(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1094d10  (orig 0x1094d10, tailcall)
uint64_t main_f_1094d10(void* a0) {
    return main::sub_1094b80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1094d20  (orig 0x1094d20, tailcall)
uint64_t main_f_1094d20(void* a0) {
    return main::sub_1094b80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1095140  (orig 0x1095140, tailcall)
uint64_t main_f_1095140(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1095f90  (orig 0x1095f90, tailcall)
uint64_t main_f_1095f90(void* a0) {
    return main::sub_1095d80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1095fa0  (orig 0x1095fa0, tailcall)
uint64_t main_f_1095fa0(void* a0) {
    return main::sub_1095d80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1096760  (orig 0x1096760, tailcall)
uint64_t main_f_1096760(void* a0) {
    return main::sub_1096470(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1096770  (orig 0x1096770, tailcall)
uint64_t main_f_1096770(void* a0) {
    return main::sub_1096470(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1096cf0  (orig 0x1096cf0, tailcall)
uint64_t main_f_1096cf0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1097b80  (orig 0x1097b80, tailcall)
uint64_t main_f_1097b80(void* a0) {
    return main::sub_10979f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1097b90  (orig 0x1097b90, tailcall)
uint64_t main_f_1097b90(void* a0) {
    return main::sub_10979f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1097fb0  (orig 0x1097fb0, tailcall)
uint64_t main_f_1097fb0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1098e10  (orig 0x1098e10, tailcall)
uint64_t main_f_1098e10(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1099c10  (orig 0x1099c10, tailcall)
uint64_t main_f_1099c10(void* a0) {
    return main::sub_1099a00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1099c20  (orig 0x1099c20, tailcall)
uint64_t main_f_1099c20(void* a0) {
    return main::sub_1099a00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_109a0b0  (orig 0x109a0b0, tailcall)
uint64_t main_f_109a0b0(void* a0) {
    return main::sub_1099f20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_109a0c0  (orig 0x109a0c0, tailcall)
uint64_t main_f_109a0c0(void* a0) {
    return main::sub_1099f20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_109a3a0  (orig 0x109a3a0, tailcall)
void main_f_109a3a0() { main::sub_109a2a0(); }

// sub_109a630  (orig 0x109a630, tailcall)
uint64_t main_f_109a630(void* a0) {
    return main::sub_109a2a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_109a640  (orig 0x109a640, tailcall)
uint64_t main_f_109a640(void* a0) {
    return main::sub_109a2a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_109a730  (orig 0x109a730, tailcall)
uint64_t main_f_109a730(void* a0) {
    return main::sub_109a2a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_109a740  (orig 0x109a740, tailcall)
uint64_t main_f_109a740(void* a0) {
    return main::sub_109a2a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_109aac0  (orig 0x109aac0, tailcall)
uint64_t main_f_109aac0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_109b670  (orig 0x109b670, tailcall)
uint64_t main_f_109b670(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_109c4e0  (orig 0x109c4e0, tailcall)
uint64_t main_f_109c4e0(void* a0) {
    return main::sub_109c2d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_109c4f0  (orig 0x109c4f0, tailcall)
uint64_t main_f_109c4f0(void* a0) {
    return main::sub_109c2d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_109c970  (orig 0x109c970, tailcall)
uint64_t main_f_109c970(void* a0) {
    return main::sub_109c7e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_109c980  (orig 0x109c980, tailcall)
uint64_t main_f_109c980(void* a0) {
    return main::sub_109c7e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_109cda0  (orig 0x109cda0, tailcall)
uint64_t main_f_109cda0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_109e290  (orig 0x109e290, tailcall)
uint64_t main_f_109e290(void* a0) {
    return main::sub_109e080(((uintptr_t)((char*)(a0) - 72)));
}

// sub_109e2a0  (orig 0x109e2a0, tailcall)
uint64_t main_f_109e2a0(void* a0) {
    return main::sub_109e080(((uintptr_t)((char*)(a0) - 80)));
}

// sub_109f2e0  (orig 0x109f2e0, tailcall)
uint64_t main_f_109f2e0(void* a0) {
    return main::sub_109f0d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_109f2f0  (orig 0x109f2f0, tailcall)
uint64_t main_f_109f2f0(void* a0) {
    return main::sub_109f0d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_109f5c0  (orig 0x109f5c0, tailcall)
void main_f_109f5c0() { main::sub_15b6e10(); }

// sub_10a0500  (orig 0x10a0500, tailcall)
uint64_t main_f_10a0500(void* a0) {
    return main::sub_10a02f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10a0510  (orig 0x10a0510, tailcall)
uint64_t main_f_10a0510(void* a0) {
    return main::sub_10a02f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10a07e0  (orig 0x10a07e0, tailcall)
void main_f_10a07e0() { main::sub_15b6e10(); }

// sub_10a13c0  (orig 0x10a13c0, tailcall)
uint64_t main_f_10a13c0(void* a0) {
    return main::sub_10a1230(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10a13d0  (orig 0x10a13d0, tailcall)
uint64_t main_f_10a13d0(void* a0) {
    return main::sub_10a1230(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10a2610  (orig 0x10a2610, tailcall)
uint64_t main_f_10a2610(void* a0) {
    return main::sub_10a2400(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10a2620  (orig 0x10a2620, tailcall)
uint64_t main_f_10a2620(void* a0) {
    return main::sub_10a2400(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10a38c0  (orig 0x10a38c0, tailcall)
uint64_t main_f_10a38c0(void* a0) {
    return main::sub_10a36b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10a38d0  (orig 0x10a38d0, tailcall)
uint64_t main_f_10a38d0(void* a0) {
    return main::sub_10a36b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10a4b40  (orig 0x10a4b40, tailcall)
uint64_t main_f_10a4b40(void* a0) {
    return main::sub_10a4930(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10a4b50  (orig 0x10a4b50, tailcall)
uint64_t main_f_10a4b50(void* a0) {
    return main::sub_10a4930(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10a5570  (orig 0x10a5570, tailcall)
void main_f_10a5570() { main::sub_15b6e10(); }

// sub_10a6310  (orig 0x10a6310, tailcall)
uint64_t main_f_10a6310(void* a0) {
    return main::sub_10a6100(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10a6320  (orig 0x10a6320, tailcall)
uint64_t main_f_10a6320(void* a0) {
    return main::sub_10a6100(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10a7510  (orig 0x10a7510, tailcall)
uint64_t main_f_10a7510(void* a0) {
    return main::sub_10a7300(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10a7520  (orig 0x10a7520, tailcall)
uint64_t main_f_10a7520(void* a0) {
    return main::sub_10a7300(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10a8400  (orig 0x10a8400, tailcall)
uint64_t main_f_10a8400(void* a0) {
    return main::sub_10a8320(((uintptr_t)((char*)(a0) - 56)));
}

// sub_10a95f0  (orig 0x10a95f0, tailcall)
uint64_t main_f_10a95f0(void* a0) {
    return main::sub_10a9460(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10a9600  (orig 0x10a9600, tailcall)
uint64_t main_f_10a9600(void* a0) {
    return main::sub_10a9460(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10aa0f0  (orig 0x10aa0f0, tailcall)
uint64_t main_f_10aa0f0(void* a0) {
    return main::sub_10a9ee0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10aa100  (orig 0x10aa100, tailcall)
uint64_t main_f_10aa100(void* a0) {
    return main::sub_10a9ee0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10ae8c0  (orig 0x10ae8c0, tailcall)
uint64_t main_f_10ae8c0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10af3b0  (orig 0x10af3b0, tailcall)
uint64_t main_f_10af3b0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10afea0  (orig 0x10afea0, tailcall)
uint64_t main_f_10afea0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10b0990  (orig 0x10b0990, tailcall)
uint64_t main_f_10b0990(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10b1530  (orig 0x10b1530, tailcall)
uint64_t main_f_10b1530(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10b2020  (orig 0x10b2020, tailcall)
uint64_t main_f_10b2020(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10b2b30  (orig 0x10b2b30, tailcall)
uint64_t main_f_10b2b30(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10b3650  (orig 0x10b3650, tailcall)
uint64_t main_f_10b3650(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10b4160  (orig 0x10b4160, tailcall)
uint64_t main_f_10b4160(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10b4e90  (orig 0x10b4e90, tailcall)
uint64_t main_f_10b4e90(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10b5b10  (orig 0x10b5b10, tailcall)
uint64_t main_f_10b5b10(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10b6600  (orig 0x10b6600, tailcall)
uint64_t main_f_10b6600(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10b70f0  (orig 0x10b70f0, tailcall)
uint64_t main_f_10b70f0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10b7be0  (orig 0x10b7be0, tailcall)
uint64_t main_f_10b7be0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10bcd00  (orig 0x10bcd00, tailcall)
uint64_t main_f_10bcd00(void* a0) {
    return main::sub_10bcb70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10bcd10  (orig 0x10bcd10, tailcall)
uint64_t main_f_10bcd10(void* a0) {
    return main::sub_10bcb70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10bd130  (orig 0x10bd130, tailcall)
uint64_t main_f_10bd130(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10bdfa0  (orig 0x10bdfa0, tailcall)
uint64_t main_f_10bdfa0(void* a0) {
    return main::sub_10bdd90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10bdfb0  (orig 0x10bdfb0, tailcall)
uint64_t main_f_10bdfb0(void* a0) {
    return main::sub_10bdd90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10be5a0  (orig 0x10be5a0, tailcall)
uint64_t main_f_10be5a0(void* a0) {
    return main::sub_10be390(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10be5b0  (orig 0x10be5b0, tailcall)
uint64_t main_f_10be5b0(void* a0) {
    return main::sub_10be390(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10bea50  (orig 0x10bea50, tailcall)
uint64_t main_f_10bea50(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10bf8a0  (orig 0x10bf8a0, tailcall)
uint64_t main_f_10bf8a0(void* a0) {
    return main::sub_10bf690(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10bf8b0  (orig 0x10bf8b0, tailcall)
uint64_t main_f_10bf8b0(void* a0) {
    return main::sub_10bf690(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10bfd20  (orig 0x10bfd20, tailcall)
uint64_t main_f_10bfd20(void* a0) {
    return main::sub_10bfb90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10bfd30  (orig 0x10bfd30, tailcall)
uint64_t main_f_10bfd30(void* a0) {
    return main::sub_10bfb90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10c0150  (orig 0x10c0150, tailcall)
uint64_t main_f_10c0150(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10c0fe0  (orig 0x10c0fe0, tailcall)
uint64_t main_f_10c0fe0(void* a0) {
    return main::sub_10c0e50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10c0ff0  (orig 0x10c0ff0, tailcall)
uint64_t main_f_10c0ff0(void* a0) {
    return main::sub_10c0e50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10c1410  (orig 0x10c1410, tailcall)
uint64_t main_f_10c1410(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10c2740  (orig 0x10c2740, tailcall)
uint64_t main_f_10c2740(void* a0) {
    return main::sub_10c2530(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10c2750  (orig 0x10c2750, tailcall)
uint64_t main_f_10c2750(void* a0) {
    return main::sub_10c2530(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10c3cc0  (orig 0x10c3cc0, tailcall)
uint64_t main_f_10c3cc0(void* a0) {
    return main::sub_10c3ab0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10c3cd0  (orig 0x10c3cd0, tailcall)
uint64_t main_f_10c3cd0(void* a0) {
    return main::sub_10c3ab0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10c5140  (orig 0x10c5140, tailcall)
uint64_t main_f_10c5140(void* a0) {
    return main::sub_10c4f30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10c5150  (orig 0x10c5150, tailcall)
uint64_t main_f_10c5150(void* a0) {
    return main::sub_10c4f30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10c6ef0  (orig 0x10c6ef0, tailcall)
uint64_t main_f_10c6ef0(void* a0) {
    return main::sub_10c6ce0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10c6f00  (orig 0x10c6f00, tailcall)
uint64_t main_f_10c6f00(void* a0) {
    return main::sub_10c6ce0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10c7360  (orig 0x10c7360, tailcall)
uint64_t main_f_10c7360(void* a0) {
    return main::sub_10c7150(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10c7370  (orig 0x10c7370, tailcall)
uint64_t main_f_10c7370(void* a0) {
    return main::sub_10c7150(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10c77a0  (orig 0x10c77a0, tailcall)
uint64_t main_f_10c77a0(void* a0) {
    return main::sub_10c7610(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10c77b0  (orig 0x10c77b0, tailcall)
uint64_t main_f_10c77b0(void* a0) {
    return main::sub_10c7610(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10c7bd0  (orig 0x10c7bd0, tailcall)
uint64_t main_f_10c7bd0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10c8af0  (orig 0x10c8af0, tailcall)
uint64_t main_f_10c8af0(void* a0) {
    return main::sub_10c88e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10c8b00  (orig 0x10c8b00, tailcall)
uint64_t main_f_10c8b00(void* a0) {
    return main::sub_10c88e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10c90f0  (orig 0x10c90f0, tailcall)
uint64_t main_f_10c90f0(void* a0) {
    return main::sub_10c8f20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10c9100  (orig 0x10c9100, tailcall)
uint64_t main_f_10c9100(void* a0) {
    return main::sub_10c8f20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10c96d0  (orig 0x10c96d0, tailcall)
uint64_t main_f_10c96d0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10cbee0  (orig 0x10cbee0, tailcall)
uint64_t main_f_10cbee0(void* a0) {
    return main::sub_10cbcd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10cbef0  (orig 0x10cbef0, tailcall)
uint64_t main_f_10cbef0(void* a0) {
    return main::sub_10cbcd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10cc350  (orig 0x10cc350, tailcall)
uint64_t main_f_10cc350(void* a0) {
    return main::sub_10cc140(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10cc360  (orig 0x10cc360, tailcall)
uint64_t main_f_10cc360(void* a0) {
    return main::sub_10cc140(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10cc670  (orig 0x10cc670, tailcall)
uint64_t main_f_10cc670(void* a0) {
    return main::sub_10cc4e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10cc680  (orig 0x10cc680, tailcall)
uint64_t main_f_10cc680(void* a0) {
    return main::sub_10cc4e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10cf6f0  (orig 0x10cf6f0, tailcall)
uint64_t main_f_10cf6f0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10d0610  (orig 0x10d0610, tailcall)
uint64_t main_f_10d0610(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10d1330  (orig 0x10d1330, tailcall)
uint64_t main_f_10d1330(void* a0) {
    return main::sub_10d11a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10d1340  (orig 0x10d1340, tailcall)
uint64_t main_f_10d1340(void* a0) {
    return main::sub_10d11a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10d16e0  (orig 0x10d16e0, tailcall)
uint64_t main_f_10d16e0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10d2250  (orig 0x10d2250, tailcall)
uint64_t main_f_10d2250(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10d53c0  (orig 0x10d53c0, tailcall)
uint64_t main_f_10d53c0(void* a0) {
    return main::sub_10d51b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10d53d0  (orig 0x10d53d0, tailcall)
uint64_t main_f_10d53d0(void* a0) {
    return main::sub_10d51b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10d5ad0  (orig 0x10d5ad0, tailcall)
uint64_t main_f_10d5ad0(void* a0) {
    return main::sub_10d5860(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10d5ae0  (orig 0x10d5ae0, tailcall)
uint64_t main_f_10d5ae0(void* a0) {
    return main::sub_10d5860(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10d5fe0  (orig 0x10d5fe0, tailcall)
uint64_t main_f_10d5fe0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10d6e30  (orig 0x10d6e30, tailcall)
uint64_t main_f_10d6e30(void* a0) {
    return main::sub_10d6c20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10d6e40  (orig 0x10d6e40, tailcall)
uint64_t main_f_10d6e40(void* a0) {
    return main::sub_10d6c20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10d72a0  (orig 0x10d72a0, tailcall)
uint64_t main_f_10d72a0(void* a0) {
    return main::sub_10d7090(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10d72b0  (orig 0x10d72b0, tailcall)
uint64_t main_f_10d72b0(void* a0) {
    return main::sub_10d7090(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10d78c0  (orig 0x10d78c0, tailcall)
uint64_t main_f_10d78c0(void* a0) {
    return main::sub_10d76b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10d78d0  (orig 0x10d78d0, tailcall)
uint64_t main_f_10d78d0(void* a0) {
    return main::sub_10d76b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10d7c30  (orig 0x10d7c30, tailcall)
void main_f_10d7c30() { main::sub_10d7b30(); }

// sub_10d7ec0  (orig 0x10d7ec0, tailcall)
uint64_t main_f_10d7ec0(void* a0) {
    return main::sub_10d7b30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10d7ed0  (orig 0x10d7ed0, tailcall)
uint64_t main_f_10d7ed0(void* a0) {
    return main::sub_10d7b30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10d7fc0  (orig 0x10d7fc0, tailcall)
uint64_t main_f_10d7fc0(void* a0) {
    return main::sub_10d7b30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10d7fd0  (orig 0x10d7fd0, tailcall)
uint64_t main_f_10d7fd0(void* a0) {
    return main::sub_10d7b30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10d8350  (orig 0x10d8350, tailcall)
uint64_t main_f_10d8350(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10d8f00  (orig 0x10d8f00, tailcall)
uint64_t main_f_10d8f00(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10d9c30  (orig 0x10d9c30, tailcall)
uint64_t main_f_10d9c30(void* a0) {
    return main::sub_10d9ad0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_10da4f0  (orig 0x10da4f0, tailcall)
uint64_t main_f_10da4f0(void* a0) {
    return main::sub_10da2e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10da500  (orig 0x10da500, tailcall)
uint64_t main_f_10da500(void* a0) {
    return main::sub_10da2e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10dadf0  (orig 0x10dadf0, tailcall)
uint64_t main_f_10dadf0(void* a0) {
    return main::sub_10dacc0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_10db7e0  (orig 0x10db7e0, tailcall)
uint64_t main_f_10db7e0(void* a0) {
    return main::sub_10db5d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10db7f0  (orig 0x10db7f0, tailcall)
uint64_t main_f_10db7f0(void* a0) {
    return main::sub_10db5d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10de8e0  (orig 0x10de8e0, tailcall)
uint64_t main_f_10de8e0(void* a0) {
    return main::sub_10de6d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10de8f0  (orig 0x10de8f0, tailcall)
uint64_t main_f_10de8f0(void* a0) {
    return main::sub_10de6d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10dec00  (orig 0x10dec00, tailcall)
uint64_t main_f_10dec00(void* a0) {
    return main::sub_10dea70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10dec10  (orig 0x10dec10, tailcall)
uint64_t main_f_10dec10(void* a0) {
    return main::sub_10dea70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10df030  (orig 0x10df030, tailcall)
uint64_t main_f_10df030(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10dfe20  (orig 0x10dfe20, tailcall)
uint64_t main_f_10dfe20(void* a0) {
    return main::sub_10dfc90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10dfe30  (orig 0x10dfe30, tailcall)
uint64_t main_f_10dfe30(void* a0) {
    return main::sub_10dfc90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10e0250  (orig 0x10e0250, tailcall)
uint64_t main_f_10e0250(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10e1060  (orig 0x10e1060, tailcall)
uint64_t main_f_10e1060(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10e1d50  (orig 0x10e1d50, tailcall)
uint64_t main_f_10e1d50(void* a0) {
    return main::sub_10e1b40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10e1d60  (orig 0x10e1d60, tailcall)
uint64_t main_f_10e1d60(void* a0) {
    return main::sub_10e1b40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10e21f0  (orig 0x10e21f0, tailcall)
uint64_t main_f_10e21f0(void* a0) {
    return main::sub_10e2060(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10e2200  (orig 0x10e2200, tailcall)
uint64_t main_f_10e2200(void* a0) {
    return main::sub_10e2060(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10e2620  (orig 0x10e2620, tailcall)
uint64_t main_f_10e2620(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10e32c0  (orig 0x10e32c0, tailcall)
void main_f_10e32c0() { main::sub_15b6e10(); }

// sub_10e6d10  (orig 0x10e6d10, tailcall)
uint64_t main_f_10e6d10(void* a0) {
    return main::sub_10e6b80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10e6d20  (orig 0x10e6d20, tailcall)
uint64_t main_f_10e6d20(void* a0) {
    return main::sub_10e6b80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10e7140  (orig 0x10e7140, tailcall)
uint64_t main_f_10e7140(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10e7f70  (orig 0x10e7f70, tailcall)
uint64_t main_f_10e7f70(void* a0) {
    return main::sub_10e7d60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10e7f80  (orig 0x10e7f80, tailcall)
uint64_t main_f_10e7f80(void* a0) {
    return main::sub_10e7d60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10e8470  (orig 0x10e8470, tailcall)
uint64_t main_f_10e8470(void* a0) {
    return main::sub_10e82e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10e8480  (orig 0x10e8480, tailcall)
uint64_t main_f_10e8480(void* a0) {
    return main::sub_10e82e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10e88a0  (orig 0x10e88a0, tailcall)
uint64_t main_f_10e88a0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10e96b0  (orig 0x10e96b0, tailcall)
uint64_t main_f_10e96b0(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10ecd20  (orig 0x10ecd20, tailcall)
uint64_t main_f_10ecd20(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10eda70  (orig 0x10eda70, tailcall)
uint64_t main_f_10eda70(void* a0) {
    return main::sub_10ed860(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10eda80  (orig 0x10eda80, tailcall)
uint64_t main_f_10eda80(void* a0) {
    return main::sub_10ed860(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10edee0  (orig 0x10edee0, tailcall)
uint64_t main_f_10edee0(void* a0) {
    return main::sub_10edcd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10edef0  (orig 0x10edef0, tailcall)
uint64_t main_f_10edef0(void* a0) {
    return main::sub_10edcd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10ee500  (orig 0x10ee500, tailcall)
uint64_t main_f_10ee500(void* a0) {
    return main::sub_10ee2f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10ee510  (orig 0x10ee510, tailcall)
uint64_t main_f_10ee510(void* a0) {
    return main::sub_10ee2f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10ee870  (orig 0x10ee870, tailcall)
void main_f_10ee870() { main::sub_10ee770(); }

// sub_10eeb00  (orig 0x10eeb00, tailcall)
uint64_t main_f_10eeb00(void* a0) {
    return main::sub_10ee770(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10eeb10  (orig 0x10eeb10, tailcall)
uint64_t main_f_10eeb10(void* a0) {
    return main::sub_10ee770(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10eec00  (orig 0x10eec00, tailcall)
uint64_t main_f_10eec00(void* a0) {
    return main::sub_10ee770(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10eec10  (orig 0x10eec10, tailcall)
uint64_t main_f_10eec10(void* a0) {
    return main::sub_10ee770(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10eef90  (orig 0x10eef90, tailcall)
uint64_t main_f_10eef90(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10efb40  (orig 0x10efb40, tailcall)
uint64_t main_f_10efb40(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10f0830  (orig 0x10f0830, tailcall)
uint64_t main_f_10f0830(void* a0) {
    return main::sub_10f0700(((uintptr_t)((char*)(a0) - 96)));
}

// sub_10f1060  (orig 0x10f1060, tailcall)
uint64_t main_f_10f1060(void* a0) {
    return main::sub_10f0e50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10f1070  (orig 0x10f1070, tailcall)
uint64_t main_f_10f1070(void* a0) {
    return main::sub_10f0e50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10f1380  (orig 0x10f1380, tailcall)
void main_f_10f1380() { main::sub_15b6e10(); }

// sub_10f1da0  (orig 0x10f1da0, tailcall)
uint64_t main_f_10f1da0(void* a0) {
    return main::sub_10f1c10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10f1db0  (orig 0x10f1db0, tailcall)
uint64_t main_f_10f1db0(void* a0) {
    return main::sub_10f1c10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10f2fe0  (orig 0x10f2fe0, tailcall)
uint64_t main_f_10f2fe0(void* a0) {
    return main::sub_10f2dd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10f2ff0  (orig 0x10f2ff0, tailcall)
uint64_t main_f_10f2ff0(void* a0) {
    return main::sub_10f2dd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10f3560  (orig 0x10f3560, tailcall)
uint64_t main_f_10f3560(void* a0) {
    return main::sub_10f3350(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10f3570  (orig 0x10f3570, tailcall)
uint64_t main_f_10f3570(void* a0) {
    return main::sub_10f3350(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10f3a10  (orig 0x10f3a10, tailcall)
uint64_t main_f_10f3a10(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_10f4940  (orig 0x10f4940, tailcall)
uint64_t main_f_10f4940(void* a0) {
    return main::sub_10f4830(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10f4950  (orig 0x10f4950, tailcall)
uint64_t main_f_10f4950(void* a0) {
    return main::sub_10f4830(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10f4960  (orig 0x10f4960, tailcall)
void main_f_10f4960() { main::sub_10f4830(); }

// sub_10f4970  (orig 0x10f4970, tailcall)
uint64_t main_f_10f4970(void* a0) {
    return main::sub_10f4830(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10f4980  (orig 0x10f4980, tailcall)
uint64_t main_f_10f4980(void* a0) {
    return main::sub_10f4830(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10f5540  (orig 0x10f5540, tailcall)
uint64_t main_f_10f5540(void* a0) {
    return main::sub_10f5450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10f5550  (orig 0x10f5550, tailcall)
uint64_t main_f_10f5550(void* a0) {
    return main::sub_10f5450(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10f6120  (orig 0x10f6120, tailcall)
uint64_t main_f_10f6120(void* a0) {
    return main::sub_10f5e50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10f6130  (orig 0x10f6130, tailcall)
uint64_t main_f_10f6130(void* a0) {
    return main::sub_10f5e50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10f7c30  (orig 0x10f7c30, tailcall)
uint64_t main_f_10f7c30(void* a0) {
    return main::sub_10f95c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 784))));
}

// sub_10f7e50  (orig 0x10f7e50, tailcall)
void main_f_10f7e50() { main::sub_10f7cf0(); }

// sub_10f9140  (orig 0x10f9140, tailcall)
uint64_t main_f_10f9140(void* a0) {
    return main::sub_10f8f30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10f9150  (orig 0x10f9150, tailcall)
uint64_t main_f_10f9150(void* a0) {
    return main::sub_10f8f30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_10f9290  (orig 0x10f9290, tailcall)
void main_f_10f9290() { main::sub_ce0(); }

// sub_10f92b0  (orig 0x10f92b0, tailcall)
void main_f_10f92b0() { main::sub_ce0(); }

// sub_10fa250  (orig 0x10fa250, tailcall)
void main_f_10fa250() { main::sub_10fa0a0(); }

// sub_10fa260  (orig 0x10fa260, tailcall)
uint64_t main_f_10fa260(void* a0) {
    return main::sub_10fa0a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10fa270  (orig 0x10fa270, tailcall)
uint64_t main_f_10fa270(void* a0) {
    return main::sub_10fa0a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_10fdcc0  (orig 0x10fdcc0, tailcall)
void main_f_10fdcc0() { main::sub_10fdaf0(); }

// sub_10fe0d0  (orig 0x10fe0d0, tailcall)
void main_f_10fe0d0() { main::sub_ce0(); }

// sub_10fe0e0  (orig 0x10fe0e0, tailcall)
void main_f_10fe0e0() { main::sub_ce0(); }

// sub_10fe0f0  (orig 0x10fe0f0, tailcall)
void main_f_10fe0f0() { main::sub_15b6e10(); }

// sub_10fe1d0  (orig 0x10fe1d0, tailcall)
void main_f_10fe1d0() { main::sub_15b6e10(); }

// sub_10fe320  (orig 0x10fe320, tailcall)
void main_f_10fe320() { main::sub_15b6e10(); }

// sub_10fe420  (orig 0x10fe420, tailcall)
void main_f_10fe420() { main::sub_15b6e10(); }

// sub_10fe4a0  (orig 0x10fe4a0, tailcall)
void main_f_10fe4a0() { main::sub_15b6e10(); }

// sub_10fe580  (orig 0x10fe580, tailcall)
void main_f_10fe580() { main::sub_15b6e10(); }

// sub_1100700  (orig 0x1100700, tailcall)
uint64_t main_f_1100700(void* a0) {
    return main::sub_1100570(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1100710  (orig 0x1100710, tailcall)
uint64_t main_f_1100710(void* a0) {
    return main::sub_1100570(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1102180  (orig 0x1102180, tailcall)
uint64_t main_f_1102180(void* a0) {
    return main::sub_1101f70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1102190  (orig 0x1102190, tailcall)
uint64_t main_f_1102190(void* a0) {
    return main::sub_1101f70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1102610  (orig 0x1102610, tailcall)
uint64_t main_f_1102610(void* a0) {
    return main::sub_1102480(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1102620  (orig 0x1102620, tailcall)
uint64_t main_f_1102620(void* a0) {
    return main::sub_1102480(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1102a40  (orig 0x1102a40, tailcall)
uint64_t main_f_1102a40(void* a0) {
    return main::sub_6a1ee0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_11050e0  (orig 0x11050e0, tailcall)
void main_f_11050e0() { main::sub_1104f50(); }

// sub_1105110  (orig 0x1105110, tailcall)
uint64_t main_f_1105110(void* a0) {
    return main::sub_1104f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1105120  (orig 0x1105120, tailcall)
uint64_t main_f_1105120(void* a0) {
    return main::sub_1104f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1108a70  (orig 0x1108a70, tailcall)
uint64_t main_f_1108a70(void* a0) {
    return main::sub_763030(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_110ce50  (orig 0x110ce50, tailcall)
void main_f_110ce50() { main::sub_110ccc0(); }

// sub_110ce60  (orig 0x110ce60, tailcall)
uint64_t main_f_110ce60(void* a0) {
    return main::sub_110ccc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_110ce70  (orig 0x110ce70, tailcall)
uint64_t main_f_110ce70(void* a0) {
    return main::sub_110ccc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1115ba0  (orig 0x1115ba0, tailcall)
void main_f_1115ba0() { main::sub_1115a30(); }

// sub_1115c20  (orig 0x1115c20, tailcall)
uint64_t main_f_1115c20(void* a0) {
    return main::sub_1115a30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1115c30  (orig 0x1115c30, tailcall)
uint64_t main_f_1115c30(void* a0) {
    return main::sub_1115a30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1115d20  (orig 0x1115d20, tailcall)
uint64_t main_f_1115d20(void* a0) {
    return main::sub_1115a30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1115d30  (orig 0x1115d30, tailcall)
uint64_t main_f_1115d30(void* a0) {
    return main::sub_1115a30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1116fc0  (orig 0x1116fc0, tailcall)
void main_f_1116fc0() { main::sub_1117560(); }

// sub_1117170  (orig 0x1117170, tailcall)
void main_f_1117170() { main::sub_1117560(); }

// sub_1117180  (orig 0x1117180, tailcall)
void main_f_1117180() { main::sub_1117560(); }

// sub_1118b60  (orig 0x1118b60, tailcall)
uint64_t main_f_1118b60(void* a0) {
    return main::sub_1118a40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1118b70  (orig 0x1118b70, tailcall)
uint64_t main_f_1118b70(void* a0) {
    return main::sub_1118a40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1118b80  (orig 0x1118b80, tailcall)
void main_f_1118b80() { main::sub_1118a40(); }

// sub_1118b90  (orig 0x1118b90, tailcall)
uint64_t main_f_1118b90(void* a0) {
    return main::sub_1118a40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1118ba0  (orig 0x1118ba0, tailcall)
uint64_t main_f_1118ba0(void* a0) {
    return main::sub_1118a40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_111ac10  (orig 0x111ac10, tailcall)
void main_f_111ac10() { main::sub_5d1550(); }

// sub_111ac90  (orig 0x111ac90, tailcall)
uint64_t main_f_111ac90(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_111aca0  (orig 0x111aca0, tailcall)
uint64_t main_f_111aca0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_111ad90  (orig 0x111ad90, tailcall)
uint64_t main_f_111ad90(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_111ada0  (orig 0x111ada0, tailcall)
uint64_t main_f_111ada0(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_111b120  (orig 0x111b120, tailcall)
uint64_t main_f_111b120(void* a0) {
    return main::sub_111b010(((uintptr_t)((char*)(a0) - 72)));
}

// sub_111b130  (orig 0x111b130, tailcall)
uint64_t main_f_111b130(void* a0) {
    return main::sub_111b010(((uintptr_t)((char*)(a0) - 80)));
}

// sub_111b140  (orig 0x111b140, tailcall)
void main_f_111b140() { main::sub_111b010(); }

// sub_111b150  (orig 0x111b150, tailcall)
uint64_t main_f_111b150(void* a0) {
    return main::sub_111b010(((uintptr_t)((char*)(a0) - 72)));
}

// sub_111b160  (orig 0x111b160, tailcall)
uint64_t main_f_111b160(void* a0) {
    return main::sub_111b010(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1120f80  (orig 0x1120f80, tailcall)
void main_f_1120f80() { main::sub_1120d10(); }

// sub_1121000  (orig 0x1121000, tailcall)
uint64_t main_f_1121000(void* a0) {
    return main::sub_1120d10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1121010  (orig 0x1121010, tailcall)
uint64_t main_f_1121010(void* a0) {
    return main::sub_1120d10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1121200  (orig 0x1121200, tailcall)
uint64_t main_f_1121200(void* a0) {
    return main::sub_1120d10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1121210  (orig 0x1121210, tailcall)
uint64_t main_f_1121210(void* a0) {
    return main::sub_1120d10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1123820  (orig 0x1123820, tailcall)
uint64_t main_f_1123820(void* a0) {
    return main::sub_1123630(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1123830  (orig 0x1123830, tailcall)
uint64_t main_f_1123830(void* a0) {
    return main::sub_1123630(((uintptr_t)((char*)(a0) - 80)));
}

// sub_112da70  (orig 0x112da70, tailcall)
void main_f_112da70() { main::sub_112d870(); }

// sub_112db10  (orig 0x112db10, tailcall)
uint64_t main_f_112db10(void* a0) {
    return main::sub_112d870(((uintptr_t)((char*)(a0) - 72)));
}

// sub_112db20  (orig 0x112db20, tailcall)
uint64_t main_f_112db20(void* a0) {
    return main::sub_112d870(((uintptr_t)((char*)(a0) - 72)));
}

// sub_112dc10  (orig 0x112dc10, tailcall)
uint64_t main_f_112dc10(void* a0) {
    return main::sub_112d870(((uintptr_t)((char*)(a0) - 80)));
}

// sub_112dc20  (orig 0x112dc20, tailcall)
uint64_t main_f_112dc20(void* a0) {
    return main::sub_112d870(((uintptr_t)((char*)(a0) - 80)));
}

// sub_112f1f0  (orig 0x112f1f0, tailcall)
uint64_t main_f_112f1f0(void* a0) {
    return main::Stop_Camp_BallAura_MirrorBall_lp(((uintptr_t)((char*)(a0) - 72)));
}

// sub_112f200  (orig 0x112f200, tailcall)
uint64_t main_f_112f200(void* a0) {
    return main::Stop_Camp_BallAura_MirrorBall_lp(((uintptr_t)((char*)(a0) - 80)));
}

// sub_112f210  (orig 0x112f210, tailcall)
void main_f_112f210() { main::Stop_Camp_BallAura_MirrorBall_lp(); }

// sub_112f220  (orig 0x112f220, tailcall)
uint64_t main_f_112f220(void* a0) {
    return main::Stop_Camp_BallAura_MirrorBall_lp(((uintptr_t)((char*)(a0) - 72)));
}

// sub_112f230  (orig 0x112f230, tailcall)
uint64_t main_f_112f230(void* a0) {
    return main::Stop_Camp_BallAura_MirrorBall_lp(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1130490  (orig 0x1130490, tailcall)
void main_f_1130490() { main::sub_112ee50(); }

// sub_1130550  (orig 0x1130550, tailcall)
uint64_t main_f_1130550(void* a0) {
    return main::sub_112ee50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1130560  (orig 0x1130560, tailcall)
uint64_t main_f_1130560(void* a0) {
    return main::sub_112ee50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11306d0  (orig 0x11306d0, tailcall)
uint64_t main_f_11306d0(void* a0) {
    return main::sub_112ee50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11306e0  (orig 0x11306e0, tailcall)
uint64_t main_f_11306e0(void* a0) {
    return main::sub_112ee50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1132e30  (orig 0x1132e30, tailcall)
void main_f_1132e30() { main::sub_1132c40(); }

// sub_1132eb0  (orig 0x1132eb0, tailcall)
uint64_t main_f_1132eb0(void* a0) {
    return main::sub_1132c40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1132ec0  (orig 0x1132ec0, tailcall)
uint64_t main_f_1132ec0(void* a0) {
    return main::sub_1132c40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11330b0  (orig 0x11330b0, tailcall)
uint64_t main_f_11330b0(void* a0) {
    return main::sub_1132c40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11330c0  (orig 0x11330c0, tailcall)
uint64_t main_f_11330c0(void* a0) {
    return main::sub_1132c40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1133c30  (orig 0x1133c30, tailcall)
void main_f_1133c30() { main::sub_111b250(); }

// sub_1133c40  (orig 0x1133c40, tailcall)
void main_f_1133c40() { main::sub_111b410(); }

// sub_113a990  (orig 0x113a990, tailcall)
uint64_t main_f_113a990(void* a0) {
    return main::sub_1172950(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1248))));
}

// sub_113c620  (orig 0x113c620, tailcall)
void main_f_113c620() { main::sub_113c4c0(); }

// sub_113c630  (orig 0x113c630, tailcall)
void main_f_113c630() { main::sub_113d0f0(); }

// sub_113c640  (orig 0x113c640, tailcall)
uint64_t main_f_113c640(void* a0) {
    return main::sub_113c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_113c650  (orig 0x113c650, tailcall)
uint64_t main_f_113c650(void* a0) {
    return main::sub_113c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_113c660  (orig 0x113c660, tailcall)
void main_f_113c660() { main::sub_113d0f0(); }

// sub_113c670  (orig 0x113c670, tailcall)
void main_f_113c670() { main::sub_113d0f0(); }

// sub_113c680  (orig 0x113c680, tailcall)
uint64_t main_f_113c680(void* a0) {
    return main::sub_113c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_113c690  (orig 0x113c690, tailcall)
uint64_t main_f_113c690(void* a0) {
    return main::sub_113c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_113d550  (orig 0x113d550, tailcall)
void main_f_113d550() { main::sub_113d1e0(); }

// sub_113d660  (orig 0x113d660, tailcall)
void main_f_113d660() { main::sub_113d1e0(); }

// sub_113d670  (orig 0x113d670, tailcall)
void main_f_113d670() { main::sub_113d1e0(); }

// sub_1142fc0  (orig 0x1142fc0, tailcall)
uint64_t main_f_1142fc0(void* a0) {
    return main::sub_1142d00(((uintptr_t)((char*)(a0) - 96)));
}

// sub_11452e0  (orig 0x11452e0, tailcall)
void main_f_11452e0() { main::sub_1145080(); }

// sub_11452f0  (orig 0x11452f0, tailcall)
void main_f_11452f0() { main::sub_1146270(); }

// sub_1145300  (orig 0x1145300, tailcall)
uint64_t main_f_1145300(void* a0) {
    return main::sub_1145080(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1145310  (orig 0x1145310, tailcall)
uint64_t main_f_1145310(void* a0) {
    return main::sub_1145080(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1145320  (orig 0x1145320, tailcall)
void main_f_1145320() { main::sub_1146270(); }

// sub_1145330  (orig 0x1145330, tailcall)
void main_f_1145330() { main::sub_1146270(); }

// sub_1145340  (orig 0x1145340, tailcall)
uint64_t main_f_1145340(void* a0) {
    return main::sub_1145080(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1145350  (orig 0x1145350, tailcall)
uint64_t main_f_1145350(void* a0) {
    return main::sub_1145080(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1148bf0  (orig 0x1148bf0, tailcall)
uint64_t main_f_1148bf0(void* a0) {
    return main::sub_1148af0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1148c00  (orig 0x1148c00, tailcall)
uint64_t main_f_1148c00(void* a0) {
    return main::sub_1148af0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1148c10  (orig 0x1148c10, tailcall)
void main_f_1148c10() { main::sub_1148af0(); }

// sub_1148c20  (orig 0x1148c20, tailcall)
uint64_t main_f_1148c20(void* a0) {
    return main::sub_1148af0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1148c30  (orig 0x1148c30, tailcall)
uint64_t main_f_1148c30(void* a0) {
    return main::sub_1148af0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11499d0  (orig 0x11499d0, tailcall)
uint64_t main_f_11499d0(void* a0) {
    return main::sub_11497c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11499e0  (orig 0x11499e0, tailcall)
uint64_t main_f_11499e0(void* a0) {
    return main::sub_11497c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1159000  (orig 0x1159000, tailcall)
void main_f_1159000() { main::sub_1158d80(); }

// sub_1159100  (orig 0x1159100, tailcall)
uint64_t main_f_1159100(void* a0) {
    return main::sub_1158d80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1159110  (orig 0x1159110, tailcall)
uint64_t main_f_1159110(void* a0) {
    return main::sub_1158d80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1159120  (orig 0x1159120, tailcall)
uint64_t main_f_1159120(void* a0) {
    return main::sub_1159010(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1159130  (orig 0x1159130, tailcall)
uint64_t main_f_1159130(void* a0) {
    return main::sub_1159010(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1159140  (orig 0x1159140, tailcall)
uint64_t main_f_1159140(void* a0) {
    return main::sub_1158d80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1159150  (orig 0x1159150, tailcall)
uint64_t main_f_1159150(void* a0) {
    return main::sub_1158d80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1159cc0  (orig 0x1159cc0, tailcall)
void main_f_1159cc0() { main::sub_5d1550(); }

// sub_1159d40  (orig 0x1159d40, tailcall)
uint64_t main_f_1159d40(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1159d50  (orig 0x1159d50, tailcall)
uint64_t main_f_1159d50(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1159e40  (orig 0x1159e40, tailcall)
uint64_t main_f_1159e40(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1159e50  (orig 0x1159e50, tailcall)
uint64_t main_f_1159e50(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_115a190  (orig 0x115a190, tailcall)
uint64_t main_f_115a190(void* a0) {
    return main::sub_115a000(((uintptr_t)((char*)(a0) - 72)));
}

// sub_115a1a0  (orig 0x115a1a0, tailcall)
uint64_t main_f_115a1a0(void* a0) {
    return main::sub_115a000(((uintptr_t)((char*)(a0) - 80)));
}

// sub_115e900  (orig 0x115e900, tailcall)
void main_f_115e900() { main::sub_115e730(); }

// sub_115e910  (orig 0x115e910, tailcall)
void main_f_115e910() { main::sub_115e980(); }

// sub_115e920  (orig 0x115e920, tailcall)
uint64_t main_f_115e920(void* a0) {
    return main::sub_115e730(((uintptr_t)((char*)(a0) - 72)));
}

// sub_115e930  (orig 0x115e930, tailcall)
uint64_t main_f_115e930(void* a0) {
    return main::sub_115e730(((uintptr_t)((char*)(a0) - 72)));
}

// sub_115e940  (orig 0x115e940, tailcall)
void main_f_115e940() { main::sub_115e980(); }

// sub_115e950  (orig 0x115e950, tailcall)
void main_f_115e950() { main::sub_115e980(); }

// sub_115e960  (orig 0x115e960, tailcall)
uint64_t main_f_115e960(void* a0) {
    return main::sub_115e730(((uintptr_t)((char*)(a0) - 80)));
}

// sub_115e970  (orig 0x115e970, tailcall)
uint64_t main_f_115e970(void* a0) {
    return main::sub_115e730(((uintptr_t)((char*)(a0) - 80)));
}

// sub_115fcd0  (orig 0x115fcd0, tailcall)
uint64_t main_f_115fcd0(void* a0) {
    return main::sub_115faa0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_115fce0  (orig 0x115fce0, tailcall)
uint64_t main_f_115fce0(void* a0) {
    return main::sub_115faa0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1161aa0  (orig 0x1161aa0, tailcall)
uint64_t main_f_1161aa0(void* a0) {
    return main::sub_113cb80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1161ba0  (orig 0x1161ba0, tailcall)
uint64_t main_f_1161ba0(void* a0) {
    return main::sub_113cb80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1162790  (orig 0x1162790, tailcall)
uint64_t main_f_1162790(void* a0) {
    return main::sub_11624b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11627a0  (orig 0x11627a0, tailcall)
uint64_t main_f_11627a0(void* a0) {
    return main::sub_11624b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1167e60  (orig 0x1167e60, tailcall)
void main_f_1167e60() { main::sub_1168fa0(); }

// sub_1167fd0  (orig 0x1167fd0, tailcall)
void main_f_1167fd0() { main::sub_1168fa0(); }

// sub_1167fe0  (orig 0x1167fe0, tailcall)
void main_f_1167fe0() { main::sub_1168fa0(); }

// sub_11682d0  (orig 0x11682d0, tailcall)
void main_f_11682d0() { main::sub_1168150(); }

// sub_11683d0  (orig 0x11683d0, tailcall)
uint64_t main_f_11683d0(void* a0) {
    return main::sub_1168150(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11683e0  (orig 0x11683e0, tailcall)
uint64_t main_f_11683e0(void* a0) {
    return main::sub_1168150(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11683f0  (orig 0x11683f0, tailcall)
uint64_t main_f_11683f0(void* a0) {
    return main::sub_11682e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1168400  (orig 0x1168400, tailcall)
uint64_t main_f_1168400(void* a0) {
    return main::sub_11682e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1168410  (orig 0x1168410, tailcall)
uint64_t main_f_1168410(void* a0) {
    return main::sub_1168150(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1168420  (orig 0x1168420, tailcall)
uint64_t main_f_1168420(void* a0) {
    return main::sub_1168150(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1173480  (orig 0x1173480, tailcall)
void main_f_1173480() { main::sub_1173330(); }

// sub_1173500  (orig 0x1173500, tailcall)
uint64_t main_f_1173500(void* a0) {
    return main::sub_1173330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1173510  (orig 0x1173510, tailcall)
uint64_t main_f_1173510(void* a0) {
    return main::sub_1173330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1173600  (orig 0x1173600, tailcall)
uint64_t main_f_1173600(void* a0) {
    return main::sub_1173330(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1173610  (orig 0x1173610, tailcall)
uint64_t main_f_1173610(void* a0) {
    return main::sub_1173330(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11777b0  (orig 0x11777b0, tailcall)
void main_f_11777b0() { main::sub_113d9c0(); }

// sub_11779e0  (orig 0x11779e0, tailcall)
void main_f_11779e0() { main::sub_113d9c0(); }

// sub_11779f0  (orig 0x11779f0, tailcall)
void main_f_11779f0() { main::sub_113d9c0(); }

// sub_1178950  (orig 0x1178950, tailcall)
uint64_t main_f_1178950(void* a0) {
    return main::sub_1178740(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1178960  (orig 0x1178960, tailcall)
uint64_t main_f_1178960(void* a0) {
    return main::sub_1178740(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1179b50  (orig 0x1179b50, tailcall)
void main_f_1179b50() { main::sub_ce0(); }

// sub_1179bd0  (orig 0x1179bd0, tailcall)
void main_f_1179bd0() { main::sub_ce0(); }

// sub_117c9d0  (orig 0x117c9d0, tailcall)
uint64_t main_f_117c9d0(void* a0) {
    return main::sub_117c740(((uintptr_t)((char*)(a0) - 72)));
}

// sub_117c9e0  (orig 0x117c9e0, tailcall)
uint64_t main_f_117c9e0(void* a0) {
    return main::sub_117c740(((uintptr_t)((char*)(a0) - 80)));
}

// sub_117daf0  (orig 0x117daf0, tailcall)
void main_f_117daf0() { main::sub_e7c4c0(); }

// sub_117db00  (orig 0x117db00, tailcall)
void main_f_117db00() { main::sub_117db70(); }

// sub_117db10  (orig 0x117db10, tailcall)
uint64_t main_f_117db10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_117db20  (orig 0x117db20, tailcall)
uint64_t main_f_117db20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_117db30  (orig 0x117db30, tailcall)
void main_f_117db30() { main::sub_117db70(); }

// sub_117db40  (orig 0x117db40, tailcall)
void main_f_117db40() { main::sub_117db70(); }

// sub_117db50  (orig 0x117db50, tailcall)
uint64_t main_f_117db50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_117db60  (orig 0x117db60, tailcall)
uint64_t main_f_117db60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1180860  (orig 0x1180860, tailcall)
void main_f_1180860() { main::sub_11804d0(); }

// sub_1180870  (orig 0x1180870, tailcall)
void main_f_1180870() { main::sub_117dca0(); }

// sub_1180880  (orig 0x1180880, tailcall)
uint64_t main_f_1180880(void* a0) {
    return main::sub_11804d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1180890  (orig 0x1180890, tailcall)
uint64_t main_f_1180890(void* a0) {
    return main::sub_11804d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11808a0  (orig 0x11808a0, tailcall)
void main_f_11808a0() { main::sub_117dca0(); }

// sub_11808b0  (orig 0x11808b0, tailcall)
void main_f_11808b0() { main::sub_117dca0(); }

// sub_11808c0  (orig 0x11808c0, tailcall)
uint64_t main_f_11808c0(void* a0) {
    return main::sub_11804d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11808d0  (orig 0x11808d0, tailcall)
uint64_t main_f_11808d0(void* a0) {
    return main::sub_11804d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1181830  (orig 0x1181830, tailcall)
void main_f_1181830() { main::sub_11811a0(); }

// sub_11818f0  (orig 0x11818f0, tailcall)
uint64_t main_f_11818f0(void* a0) {
    return main::sub_11811a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1181900  (orig 0x1181900, tailcall)
uint64_t main_f_1181900(void* a0) {
    return main::sub_11811a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1181a70  (orig 0x1181a70, tailcall)
uint64_t main_f_1181a70(void* a0) {
    return main::sub_11811a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1181a80  (orig 0x1181a80, tailcall)
uint64_t main_f_1181a80(void* a0) {
    return main::sub_11811a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1182860  (orig 0x1182860, tailcall)
uint64_t main_f_1182860(void* a0) {
    return main::sub_1182590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1182870  (orig 0x1182870, tailcall)
uint64_t main_f_1182870(void* a0) {
    return main::sub_1182590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11834c0  (orig 0x11834c0, tailcall)
uint64_t main_f_11834c0(void* a0) {
    return main::sub_1183160(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11834d0  (orig 0x11834d0, tailcall)
void main_f_11834d0() { main::sub_1183160(); }

// sub_11834e0  (orig 0x11834e0, tailcall)
uint64_t main_f_11834e0(void* a0) {
    return main::sub_1183160(((uintptr_t)((char*)(a0) - 72)));
}

// sub_118a470  (orig 0x118a470, tailcall)
void main_f_118a470() { main::sub_118a330(); }

// sub_118a480  (orig 0x118a480, tailcall)
uint64_t main_f_118a480(void* a0) {
    return main::sub_118a330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_118a490  (orig 0x118a490, tailcall)
uint64_t main_f_118a490(void* a0) {
    return main::sub_118a330(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11969b0  (orig 0x11969b0, tailcall)
void main_f_11969b0() { main::sub_11969d0(); }

// sub_11977b0  (orig 0x11977b0, tailcall)
void main_f_11977b0() { main::sub_1197690(); }

// sub_11977c0  (orig 0x11977c0, tailcall)
void main_f_11977c0() { main::sub_1197830(); }

// sub_11977d0  (orig 0x11977d0, tailcall)
uint64_t main_f_11977d0(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11977e0  (orig 0x11977e0, tailcall)
uint64_t main_f_11977e0(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11977f0  (orig 0x11977f0, tailcall)
void main_f_11977f0() { main::sub_1197830(); }

// sub_1197800  (orig 0x1197800, tailcall)
void main_f_1197800() { main::sub_1197830(); }

// sub_1197810  (orig 0x1197810, tailcall)
uint64_t main_f_1197810(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1197820  (orig 0x1197820, tailcall)
uint64_t main_f_1197820(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1198090  (orig 0x1198090, tailcall)
void main_f_1198090() { main::sub_1197690(); }

// sub_11980a0  (orig 0x11980a0, tailcall)
void main_f_11980a0() { main::sub_1198110(); }

// sub_11980b0  (orig 0x11980b0, tailcall)
uint64_t main_f_11980b0(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11980c0  (orig 0x11980c0, tailcall)
uint64_t main_f_11980c0(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11980d0  (orig 0x11980d0, tailcall)
void main_f_11980d0() { main::sub_1198110(); }

// sub_11980e0  (orig 0x11980e0, tailcall)
void main_f_11980e0() { main::sub_1198110(); }

// sub_11980f0  (orig 0x11980f0, tailcall)
uint64_t main_f_11980f0(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1198100  (orig 0x1198100, tailcall)
uint64_t main_f_1198100(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 80)));
}

// sub_119e050  (orig 0x119e050, tailcall)
void main_f_119e050() { main::sub_119e200(); }

// sub_119e120  (orig 0x119e120, tailcall)
void main_f_119e120() { main::sub_119e200(); }

// sub_119e130  (orig 0x119e130, tailcall)
void main_f_119e130() { main::sub_119e200(); }

// sub_119e5e0  (orig 0x119e5e0, tailcall)
void main_f_119e5e0() { main_f_1130b50(); }

// sub_11afaa0  (orig 0x11afaa0, tailcall)
void main_f_11afaa0() { main::sub_11af850(); }

// sub_11afab0  (orig 0x11afab0, tailcall)
uint64_t main_f_11afab0(void* a0) {
    return main::sub_11af850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11afac0  (orig 0x11afac0, tailcall)
uint64_t main_f_11afac0(void* a0) {
    return main::sub_11af850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11afad0  (orig 0x11afad0, tailcall)
uint64_t main_f_11afad0(void* a0) {
    return main::sub_11af850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11afae0  (orig 0x11afae0, tailcall)
uint64_t main_f_11afae0(void* a0) {
    return main::sub_11af850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11b3370  (orig 0x11b3370, tailcall)
void main_f_11b3370() { main::sub_11b3130(); }

// sub_11b3430  (orig 0x11b3430, tailcall)
uint64_t main_f_11b3430(void* a0) {
    return main::sub_11b3130(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11b3440  (orig 0x11b3440, tailcall)
uint64_t main_f_11b3440(void* a0) {
    return main::sub_11b3130(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11b35b0  (orig 0x11b35b0, tailcall)
uint64_t main_f_11b35b0(void* a0) {
    return main::sub_11b3130(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11b35c0  (orig 0x11b35c0, tailcall)
uint64_t main_f_11b35c0(void* a0) {
    return main::sub_11b3130(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11b5150  (orig 0x11b5150, tailcall)
void main_f_11b5150() { main::sub_ce0(); }

// sub_11b51b0  (orig 0x11b51b0, tailcall)
void main_f_11b51b0() { main::sub_ce0(); }

// sub_11b5230  (orig 0x11b5230, tailcall)
void main_f_11b5230() { main::sub_ce0(); }

// sub_11b52b0  (orig 0x11b52b0, tailcall)
void main_f_11b52b0() { main::sub_ce0(); }

// sub_11b6900  (orig 0x11b6900, tailcall)
void main_f_11b6900() { main::sub_11b6790(); }

// sub_11b6980  (orig 0x11b6980, tailcall)
uint64_t main_f_11b6980(void* a0) {
    return main::sub_11b6790(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11b6990  (orig 0x11b6990, tailcall)
uint64_t main_f_11b6990(void* a0) {
    return main::sub_11b6790(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11b6a80  (orig 0x11b6a80, tailcall)
uint64_t main_f_11b6a80(void* a0) {
    return main::sub_11b6790(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11b6a90  (orig 0x11b6a90, tailcall)
uint64_t main_f_11b6a90(void* a0) {
    return main::sub_11b6790(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11b8a80  (orig 0x11b8a80, tailcall)
void main_f_11b8a80() { main::sub_112ee50(); }

// sub_11b8b00  (orig 0x11b8b00, tailcall)
uint64_t main_f_11b8b00(void* a0) {
    return main::sub_112ee50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11b8b10  (orig 0x11b8b10, tailcall)
uint64_t main_f_11b8b10(void* a0) {
    return main::sub_112ee50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11b8d00  (orig 0x11b8d00, tailcall)
uint64_t main_f_11b8d00(void* a0) {
    return main::sub_112ee50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11b8d10  (orig 0x11b8d10, tailcall)
uint64_t main_f_11b8d10(void* a0) {
    return main::sub_112ee50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11b8d40  (orig 0x11b8d40, tailcall)
void main_f_11b8d40() { main::player_2(); }

// sub_11b8d50  (orig 0x11b8d50, tailcall)
void main_f_11b8d50() { main::sub_1197690(); }

// sub_11b8dd0  (orig 0x11b8dd0, tailcall)
uint64_t main_f_11b8dd0(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11b8de0  (orig 0x11b8de0, tailcall)
uint64_t main_f_11b8de0(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11b8fd0  (orig 0x11b8fd0, tailcall)
uint64_t main_f_11b8fd0(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11b8fe0  (orig 0x11b8fe0, tailcall)
uint64_t main_f_11b8fe0(void* a0) {
    return main::sub_1197690(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11ba640  (orig 0x11ba640, tailcall)
uint64_t main_f_11ba640(void* a0) {
    return main::unnamed_39(((uintptr_t)(*(uint64_t*)((char*)(a0) + 312))));
}

// sub_11ba650  (orig 0x11ba650, tailcall)
uint64_t main_f_11ba650(void* a0) {
    return main::sub_11bbe00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 312))));
}

// sub_11bcb90  (orig 0x11bcb90, tailcall)
uint64_t main_f_11bcb90(void* a0) {
    return main::sub_11bc7c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11bcba0  (orig 0x11bcba0, tailcall)
uint64_t main_f_11bcba0(void* a0) {
    return main::sub_11bc7c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11bcbb0  (orig 0x11bcbb0, tailcall)
uint64_t main_f_11bcbb0(void* a0) {
    return main::sub_11bc7c0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_11bcbc0  (orig 0x11bcbc0, tailcall)
void main_f_11bcbc0() { main::sub_11bc7c0(); }

// sub_11bcbd0  (orig 0x11bcbd0, tailcall)
uint64_t main_f_11bcbd0(void* a0) {
    return main::sub_11bc7c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11bcbe0  (orig 0x11bcbe0, tailcall)
uint64_t main_f_11bcbe0(void* a0) {
    return main::sub_11bc7c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11bcbf0  (orig 0x11bcbf0, tailcall)
uint64_t main_f_11bcbf0(void* a0) {
    return main::sub_11bc7c0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_11bd8c0  (orig 0x11bd8c0, tailcall)
uint64_t main_f_11bd8c0(void* a0) {
    return main::sub_11bd4b0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_11bd8d0  (orig 0x11bd8d0, tailcall)
void main_f_11bd8d0() { main::sub_11bd380(); }

// sub_11bd8e0  (orig 0x11bd8e0, tailcall)
uint64_t main_f_11bd8e0(void* a0) {
    return main::sub_11bd380(((uintptr_t)((char*)(a0) - 96)));
}

// sub_11bdaa0  (orig 0x11bdaa0, tailcall)
uint64_t main_f_11bdaa0(void* a0) {
    return main::sub_11bd9b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11bdab0  (orig 0x11bdab0, tailcall)
uint64_t main_f_11bdab0(void* a0) {
    return main::sub_11bd9b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11beaf0  (orig 0x11beaf0, tailcall)
uint64_t main_f_11beaf0(void* a0) {
    return main::sub_11bea00(((uintptr_t)((char*)(a0) - 88)));
}

// sub_11beb00  (orig 0x11beb00, tailcall)
uint64_t main_f_11beb00(void* a0) {
    return main::sub_11bea00(((uintptr_t)((char*)(a0) - 96)));
}

// sub_11bf520  (orig 0x11bf520, tailcall)
void main_f_11bf520() { main::sub_e7c4c0(); }

// sub_11bf530  (orig 0x11bf530, tailcall)
void main_f_11bf530() { main::sub_11bf5a0(); }

// sub_11bf540  (orig 0x11bf540, tailcall)
uint64_t main_f_11bf540(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11bf550  (orig 0x11bf550, tailcall)
uint64_t main_f_11bf550(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11bf560  (orig 0x11bf560, tailcall)
void main_f_11bf560() { main::sub_11bf5a0(); }

// sub_11bf570  (orig 0x11bf570, tailcall)
void main_f_11bf570() { main::sub_11bf5a0(); }

// sub_11bf580  (orig 0x11bf580, tailcall)
uint64_t main_f_11bf580(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11bf590  (orig 0x11bf590, tailcall)
uint64_t main_f_11bf590(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11c02d0  (orig 0x11c02d0, tailcall)
void main_f_11c02d0() { main::sub_e7c4c0(); }

// sub_11c02e0  (orig 0x11c02e0, tailcall)
void main_f_11c02e0() { main::sub_11c0350(); }

// sub_11c02f0  (orig 0x11c02f0, tailcall)
uint64_t main_f_11c02f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11c0300  (orig 0x11c0300, tailcall)
uint64_t main_f_11c0300(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11c0310  (orig 0x11c0310, tailcall)
void main_f_11c0310() { main::sub_11c0350(); }

// sub_11c0320  (orig 0x11c0320, tailcall)
void main_f_11c0320() { main::sub_11c0350(); }

// sub_11c0330  (orig 0x11c0330, tailcall)
uint64_t main_f_11c0330(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11c0340  (orig 0x11c0340, tailcall)
uint64_t main_f_11c0340(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11c6a60  (orig 0x11c6a60, tailcall)
void main_f_11c6a60() { main::sub_11c6800(); }

// sub_11c6a70  (orig 0x11c6a70, tailcall)
void main_f_11c6a70() { main::sub_11c6ae0(); }

// sub_11c6a80  (orig 0x11c6a80, tailcall)
uint64_t main_f_11c6a80(void* a0) {
    return main::sub_11c6800(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11c6a90  (orig 0x11c6a90, tailcall)
uint64_t main_f_11c6a90(void* a0) {
    return main::sub_11c6800(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11c6aa0  (orig 0x11c6aa0, tailcall)
void main_f_11c6aa0() { main::sub_11c6ae0(); }

// sub_11c6ab0  (orig 0x11c6ab0, tailcall)
void main_f_11c6ab0() { main::sub_11c6ae0(); }

// sub_11c6ac0  (orig 0x11c6ac0, tailcall)
uint64_t main_f_11c6ac0(void* a0) {
    return main::sub_11c6800(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11c6ad0  (orig 0x11c6ad0, tailcall)
uint64_t main_f_11c6ad0(void* a0) {
    return main::sub_11c6800(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11c9b40  (orig 0x11c9b40, tailcall)
uint64_t main_f_11c9b40(void* a0) {
    return main::Play_Camp_Cooking_TrueLove_hit_finish(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_11ca510  (orig 0x11ca510, tailcall)
void main_f_11ca510() { main::sub_ce0(); }

// sub_11ca590  (orig 0x11ca590, tailcall)
void main_f_11ca590() { main::sub_ce0(); }

// sub_11cb870  (orig 0x11cb870, tailcall)
void main_f_11cb870() { main::sub_11cb880(); }

// sub_11cd3f0  (orig 0x11cd3f0, tailcall)
void main_f_11cd3f0() { main::sub_11cd2f0(); }

// sub_11cd470  (orig 0x11cd470, tailcall)
uint64_t main_f_11cd470(void* a0) {
    return main::sub_11cd2f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11cd480  (orig 0x11cd480, tailcall)
uint64_t main_f_11cd480(void* a0) {
    return main::sub_11cd2f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11cd570  (orig 0x11cd570, tailcall)
uint64_t main_f_11cd570(void* a0) {
    return main::sub_11cd2f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11cd580  (orig 0x11cd580, tailcall)
uint64_t main_f_11cd580(void* a0) {
    return main::sub_11cd2f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11cdb80  (orig 0x11cdb80, tailcall)
uint64_t main_f_11cdb80(void* a0) {
    return main::Stop_Camp_Cooking_Fire_lp(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11cdb90  (orig 0x11cdb90, tailcall)
uint64_t main_f_11cdb90(void* a0) {
    return main::Stop_Camp_Cooking_Fire_lp(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11cdba0  (orig 0x11cdba0, tailcall)
void main_f_11cdba0() { main::Stop_Camp_Cooking_Fire_lp(); }

// sub_11cdbb0  (orig 0x11cdbb0, tailcall)
uint64_t main_f_11cdbb0(void* a0) {
    return main::Stop_Camp_Cooking_Fire_lp(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11cdbc0  (orig 0x11cdbc0, tailcall)
uint64_t main_f_11cdbc0(void* a0) {
    return main::Stop_Camp_Cooking_Fire_lp(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11d2ca0  (orig 0x11d2ca0, tailcall)
void main_f_11d2ca0() { main::sub_11cdcf0(); }

// sub_11d66b0  (orig 0x11d66b0, tailcall)
uint64_t main_f_11d66b0(void* a0) {
    return main::sub_11d64c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11d66c0  (orig 0x11d66c0, tailcall)
uint64_t main_f_11d66c0(void* a0) {
    return main::sub_11d64c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11d66d0  (orig 0x11d66d0, tailcall)
void main_f_11d66d0() { main::sub_11d64c0(); }

// sub_11d66e0  (orig 0x11d66e0, tailcall)
uint64_t main_f_11d66e0(void* a0) {
    return main::sub_11d64c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11d66f0  (orig 0x11d66f0, tailcall)
uint64_t main_f_11d66f0(void* a0) {
    return main::sub_11d64c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11d7a40  (orig 0x11d7a40, tailcall)
uint64_t main_f_11d7a40(void* a0) {
    return main::sub_11d7820(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11d7a50  (orig 0x11d7a50, tailcall)
uint64_t main_f_11d7a50(void* a0) {
    return main::sub_11d7820(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11d7a60  (orig 0x11d7a60, tailcall)
void main_f_11d7a60() { main::sub_11d7820(); }

// sub_11d7a70  (orig 0x11d7a70, tailcall)
uint64_t main_f_11d7a70(void* a0) {
    return main::sub_11d7820(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11d7a80  (orig 0x11d7a80, tailcall)
uint64_t main_f_11d7a80(void* a0) {
    return main::sub_11d7820(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11d9980  (orig 0x11d9980, tailcall)
void main_f_11d9980() { main::sub_11d9880(); }

// sub_11d9a40  (orig 0x11d9a40, tailcall)
uint64_t main_f_11d9a40(void* a0) {
    return main::sub_11d9880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11d9a50  (orig 0x11d9a50, tailcall)
uint64_t main_f_11d9a50(void* a0) {
    return main::sub_11d9880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11d9bc0  (orig 0x11d9bc0, tailcall)
uint64_t main_f_11d9bc0(void* a0) {
    return main::sub_11d9880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11d9bd0  (orig 0x11d9bd0, tailcall)
uint64_t main_f_11d9bd0(void* a0) {
    return main::sub_11d9880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11dc360  (orig 0x11dc360, tailcall)
uint64_t main_f_11dc360(void* a0) {
    return main::sub_11dbf40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11dc370  (orig 0x11dc370, tailcall)
uint64_t main_f_11dc370(void* a0) {
    return main::sub_11dbf40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11dc380  (orig 0x11dc380, tailcall)
void main_f_11dc380() { main::sub_11dbf40(); }

// sub_11dc390  (orig 0x11dc390, tailcall)
uint64_t main_f_11dc390(void* a0) {
    return main::sub_11dbf40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11dc3a0  (orig 0x11dc3a0, tailcall)
uint64_t main_f_11dc3a0(void* a0) {
    return main::sub_11dbf40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11deb10  (orig 0x11deb10, tailcall)
void main_f_11deb10() { main::sub_11deb20(); }

// sub_11e3540  (orig 0x11e3540, tailcall)
uint64_t main_f_11e3540(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 828) = (uint8_t)k0;
    return main::sub_11e3550(((uintptr_t)(a0)));
}

// sub_11e3990  (orig 0x11e3990, tailcall)
uint64_t main_f_11e3990(void* a0) {
    *(uint8_t*)((char*)(a0) + 828) = 0;
    return main::sub_11e3550(((uintptr_t)(a0)));
}

// sub_11e45b0  (orig 0x11e45b0, tailcall)
uint64_t main_f_11e45b0(void* a0) {
    return main::sub_11e39b0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_11e5b90  (orig 0x11e5b90, tailcall)
uint64_t main_f_11e5b90(void* a0) {
    return net::nn_ldn_CreateNetwork(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11e5d60  (orig 0x11e5d60, tailcall)
void main_f_11e5d60() { main::sub_11e6110(); }

// sub_11e5f30  (orig 0x11e5f30, tailcall)
void main_f_11e5f30() { main::sub_11e6110(); }

// sub_11e5f40  (orig 0x11e5f40, tailcall)
void main_f_11e5f40() { main::sub_11e6110(); }

// sub_11e6470  (orig 0x11e6470, tailcall)
uint64_t main_f_11e6470(void* a0) {
    return main::Stop_Camp_Cooking_PotBoiling_lp(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11e6480  (orig 0x11e6480, tailcall)
uint64_t main_f_11e6480(void* a0) {
    return main::Stop_Camp_Cooking_PotBoiling_lp(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11e6490  (orig 0x11e6490, tailcall)
void main_f_11e6490() { main::Stop_Camp_Cooking_PotBoiling_lp(); }

// sub_11e64a0  (orig 0x11e64a0, tailcall)
uint64_t main_f_11e64a0(void* a0) {
    return main::Stop_Camp_Cooking_PotBoiling_lp(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11e64b0  (orig 0x11e64b0, tailcall)
uint64_t main_f_11e64b0(void* a0) {
    return main::Stop_Camp_Cooking_PotBoiling_lp(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11e7d60  (orig 0x11e7d60, tailcall)
uint64_t main_f_11e7d60(void* a0) {
    return main::sub_11e7b10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11e7d70  (orig 0x11e7d70, tailcall)
uint64_t main_f_11e7d70(void* a0) {
    return main::sub_11e7b10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11e7d80  (orig 0x11e7d80, tailcall)
void main_f_11e7d80() { main::sub_11e7b10(); }

// sub_11e7d90  (orig 0x11e7d90, tailcall)
uint64_t main_f_11e7d90(void* a0) {
    return main::sub_11e7b10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11e7da0  (orig 0x11e7da0, tailcall)
uint64_t main_f_11e7da0(void* a0) {
    return main::sub_11e7b10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11ea0f0  (orig 0x11ea0f0, tailcall)
uint64_t main_f_11ea0f0(void* a0) {
    return main::sub_11e9050(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_11ea2f0  (orig 0x11ea2f0, tailcall)
uint64_t main_f_11ea2f0(void* a0) {
    return pokemon::pokecamp_kinomi__02d(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_11ea330  (orig 0x11ea330, tailcall)
uint64_t main_f_11ea330(void* a0) {
    return pokemon::pokecamp_food__02d(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_11ea7e0  (orig 0x11ea7e0, tailcall)
uint64_t main_f_11ea7e0(void* a0) {
    return main::sub_11e93d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_11ec9f0  (orig 0x11ec9f0, tailcall)
void main_f_11ec9f0() { main::sub_11ec880(); }

// sub_11ecab0  (orig 0x11ecab0, tailcall)
uint64_t main_f_11ecab0(void* a0) {
    return main::sub_11ec880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11ecac0  (orig 0x11ecac0, tailcall)
uint64_t main_f_11ecac0(void* a0) {
    return main::sub_11ec880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11ecc30  (orig 0x11ecc30, tailcall)
uint64_t main_f_11ecc30(void* a0) {
    return main::sub_11ec880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11ecc40  (orig 0x11ecc40, tailcall)
uint64_t main_f_11ecc40(void* a0) {
    return main::sub_11ec880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11eeba0  (orig 0x11eeba0, tailcall)
uint64_t main_f_11eeba0(void* a0) {
    return main::sub_11ee760(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11eebb0  (orig 0x11eebb0, tailcall)
uint64_t main_f_11eebb0(void* a0) {
    return main::sub_11ee760(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11eebc0  (orig 0x11eebc0, tailcall)
void main_f_11eebc0() { main::sub_11ee760(); }

// sub_11eebd0  (orig 0x11eebd0, tailcall)
uint64_t main_f_11eebd0(void* a0) {
    return main::sub_11ee760(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11eebe0  (orig 0x11eebe0, tailcall)
uint64_t main_f_11eebe0(void* a0) {
    return main::sub_11ee760(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11f1640  (orig 0x11f1640, tailcall)
uint64_t main_f_11f1640(void* a0) {
    return gflib3::nn_ldn_SetStationAcceptPolicy_4(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_11f1900  (orig 0x11f1900, tailcall)
uint64_t main_f_11f1900(void* a0) {
    return gflib3::nn_ldn_SetStationAcceptPolicy_4(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_11f1980  (orig 0x11f1980, tailcall)
uint64_t main_f_11f1980(void* a0) {
    return main::sub_11f0770(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_11f1e60  (orig 0x11f1e60, tailcall)
uint64_t main_f_11f1e60(void* a0) {
    return main::sub_11f1d00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11f1e70  (orig 0x11f1e70, tailcall)
uint64_t main_f_11f1e70(void* a0) {
    return main::sub_11f1d00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11f1e80  (orig 0x11f1e80, tailcall)
uint64_t main_f_11f1e80(void* a0) {
    return main::sub_11f1d00(((uintptr_t)((char*)(a0) - 1440)));
}

// sub_11f1e90  (orig 0x11f1e90, tailcall)
void main_f_11f1e90() { main::sub_11f1d00(); }

// sub_11f1ea0  (orig 0x11f1ea0, tailcall)
uint64_t main_f_11f1ea0(void* a0) {
    return main::sub_11f1d00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11f1eb0  (orig 0x11f1eb0, tailcall)
uint64_t main_f_11f1eb0(void* a0) {
    return main::sub_11f1d00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11f1ec0  (orig 0x11f1ec0, tailcall)
uint64_t main_f_11f1ec0(void* a0) {
    return main::sub_11f1d00(((uintptr_t)((char*)(a0) - 1440)));
}

// sub_11f2800  (orig 0x11f2800, tailcall)
uint64_t main_f_11f2800(void* a0) {
    return main::sub_11f1fd0(((uintptr_t)((char*)(a0) - 1440)));
}

// sub_11f2d80  (orig 0x11f2d80, tailcall)
uint64_t main_f_11f2d80(void* a0) {
    return main::sub_11f2ac0(((uintptr_t)((char*)(a0) - 1448)));
}

// sub_11f2eb0  (orig 0x11f2eb0, tailcall)
uint64_t main_f_11f2eb0(void* a0) {
    return main::sub_11f2d90(((uintptr_t)((char*)(a0) - 1448)));
}

// sub_11f2f90  (orig 0x11f2f90, tailcall)
uint64_t main_f_11f2f90(void* a0) {
    return main::sub_11f2ec0(((uintptr_t)((char*)(a0) - 1448)));
}

// sub_11f31e0  (orig 0x11f31e0, tailcall)
uint64_t main_f_11f31e0(void* a0) {
    return main::sub_11f2fa0(((uintptr_t)((char*)(a0) - 1440)));
}

// sub_11f4540  (orig 0x11f4540, tailcall)
uint64_t main_f_11f4540(void* a0) {
    return main::sub_11f3e50(((uintptr_t)((char*)(a0) - 1504)));
}

// sub_11f52b0  (orig 0x11f52b0, tailcall)
void main_f_11f52b0() { main::sub_11f50c0(); }

// sub_11f5a30  (orig 0x11f5a30, tailcall)
uint64_t main_f_11f5a30(void* a0) {
    return main::sub_11f50c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11f5a40  (orig 0x11f5a40, tailcall)
uint64_t main_f_11f5a40(void* a0) {
    return main::sub_11f50c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11f5a50  (orig 0x11f5a50, tailcall)
uint64_t main_f_11f5a50(void* a0) {
    return main::sub_11f52c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11f5a60  (orig 0x11f5a60, tailcall)
uint64_t main_f_11f5a60(void* a0) {
    return main::sub_11f52c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11f5a70  (orig 0x11f5a70, tailcall)
uint64_t main_f_11f5a70(void* a0) {
    return main::sub_11f50c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11f5a80  (orig 0x11f5a80, tailcall)
uint64_t main_f_11f5a80(void* a0) {
    return main::sub_11f50c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11f5c30  (orig 0x11f5c30, tailcall)
uint64_t main_f_11f5c30(void* a0) {
    return main::sub_11f5630(((uintptr_t)((char*)(a0) - 104)));
}

// sub_11f5c40  (orig 0x11f5c40, tailcall)
uint64_t main_f_11f5c40(void* a0) {
    return main::sub_11f57b0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_11f5c50  (orig 0x11f5c50, tailcall)
uint64_t main_f_11f5c50(void* a0) {
    return main::sub_11f54c0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_11f78e0  (orig 0x11f78e0, tailcall)
void main_f_11f78e0() { main::sub_e7c4c0(); }

// sub_11f78f0  (orig 0x11f78f0, tailcall)
void main_f_11f78f0() { main::sub_11f79a0(); }

// sub_11f7900  (orig 0x11f7900, tailcall)
uint64_t main_f_11f7900(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11f7910  (orig 0x11f7910, tailcall)
uint64_t main_f_11f7910(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11f7920  (orig 0x11f7920, tailcall)
void main_f_11f7920() { main::sub_11f79a0(); }

// sub_11f7930  (orig 0x11f7930, tailcall)
void main_f_11f7930() { main::sub_11f79a0(); }

// sub_11f7940  (orig 0x11f7940, tailcall)
uint64_t main_f_11f7940(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11f7950  (orig 0x11f7950, tailcall)
uint64_t main_f_11f7950(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11f8610  (orig 0x11f8610, tailcall)
void main_f_11f8610() { main::sub_e7c4c0(); }

// sub_11f8620  (orig 0x11f8620, tailcall)
void main_f_11f8620() { main::sub_11f8690(); }

// sub_11f8630  (orig 0x11f8630, tailcall)
uint64_t main_f_11f8630(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11f8640  (orig 0x11f8640, tailcall)
uint64_t main_f_11f8640(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_11f8650  (orig 0x11f8650, tailcall)
void main_f_11f8650() { main::sub_11f8690(); }

// sub_11f8660  (orig 0x11f8660, tailcall)
void main_f_11f8660() { main::sub_11f8690(); }

// sub_11f8670  (orig 0x11f8670, tailcall)
uint64_t main_f_11f8670(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11f8680  (orig 0x11f8680, tailcall)
uint64_t main_f_11f8680(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_11fae40  (orig 0x11fae40, tailcall)
void main_f_11fae40() { main::sub_11fb0b0(); }

// sub_11faf70  (orig 0x11faf70, tailcall)
void main_f_11faf70() { main::sub_11fb0b0(); }

// sub_11faf80  (orig 0x11faf80, tailcall)
void main_f_11faf80() { main::sub_11fb0b0(); }

// sub_11fd070  (orig 0x11fd070, tailcall)
void main_f_11fd070() { main::sub_11fd2e0(); }

// sub_11fd120  (orig 0x11fd120, tailcall)
void main_f_11fd120() { main::sub_11fd2e0(); }

// sub_11fd130  (orig 0x11fd130, tailcall)
void main_f_11fd130() { main::sub_11fd2e0(); }

// sub_12001d0  (orig 0x12001d0, tailcall)
void main_f_12001d0() { main::sub_1200540(); }

// sub_1200380  (orig 0x1200380, tailcall)
void main_f_1200380() { main::sub_1200540(); }

// sub_1200390  (orig 0x1200390, tailcall)
void main_f_1200390() { main::sub_1200540(); }

// sub_1205270  (orig 0x1205270, tailcall)
void main_f_1205270() { main::sub_e7c4c0(); }

// sub_1205280  (orig 0x1205280, tailcall)
uint64_t main_f_1205280(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1205290  (orig 0x1205290, tailcall)
uint64_t main_f_1205290(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12052a0  (orig 0x12052a0, tailcall)
uint64_t main_f_12052a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12052b0  (orig 0x12052b0, tailcall)
uint64_t main_f_12052b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1209400  (orig 0x1209400, tailcall)
uint64_t main_f_1209400(void* a0) {
    return main::OnLimitTimeChanged(((uintptr_t)((char*)(a0) - 120)));
}

// sub_120a7a0  (orig 0x120a7a0, tailcall)
uint64_t main_f_120a7a0(void* a0) {
    return main::sub_120a440(((uintptr_t)((char*)(a0) - 128)));
}

// sub_120aa10  (orig 0x120aa10, tailcall)
uint64_t main_f_120aa10(void* a0) {
    return main::sub_120a7b0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_120ae80  (orig 0x120ae80, tailcall)
uint64_t main_f_120ae80(void* a0) {
    return main::sub_120ab50(((uintptr_t)((char*)(a0) - 184)));
}

// sub_120b0d0  (orig 0x120b0d0, tailcall)
void main_f_120b0d0() { main::sub_120aeb0(); }

// sub_120b0e0  (orig 0x120b0e0, tailcall)
void main_f_120b0e0() { main::sub_120b5e0(); }

// sub_120b100  (orig 0x120b100, tailcall)
uint64_t main_f_120b100(void* a0) {
    return main::sub_120aeb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_120b110  (orig 0x120b110, tailcall)
uint64_t main_f_120b110(void* a0) {
    return main::sub_120aeb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_120b120  (orig 0x120b120, tailcall)
void main_f_120b120() { main::sub_120b5e0(); }

// sub_120b130  (orig 0x120b130, tailcall)
void main_f_120b130() { main::sub_120b5e0(); }

// sub_120b140  (orig 0x120b140, tailcall)
uint64_t main_f_120b140(void* a0) {
    return main::sub_120aeb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_120b150  (orig 0x120b150, tailcall)
uint64_t main_f_120b150(void* a0) {
    return main::sub_120aeb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_120b1c0  (orig 0x120b1c0, tailcall)
uint64_t main_f_120b1c0(void* a0) {
    return main::sub_120aeb0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_120b1d0  (orig 0x120b1d0, tailcall)
uint64_t main_f_120b1d0(void* a0) {
    return main::sub_120aeb0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_120bae0  (orig 0x120bae0, tailcall)
void main_f_120bae0() { main::sub_120b8f0(); }

// sub_120c260  (orig 0x120c260, tailcall)
uint64_t main_f_120c260(void* a0) {
    return main::sub_120b8f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_120c270  (orig 0x120c270, tailcall)
uint64_t main_f_120c270(void* a0) {
    return main::sub_120b8f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_120c280  (orig 0x120c280, tailcall)
uint64_t main_f_120c280(void* a0) {
    return main::sub_120baf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_120c290  (orig 0x120c290, tailcall)
uint64_t main_f_120c290(void* a0) {
    return main::sub_120baf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_120c2a0  (orig 0x120c2a0, tailcall)
uint64_t main_f_120c2a0(void* a0) {
    return main::sub_120b8f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_120c2b0  (orig 0x120c2b0, tailcall)
uint64_t main_f_120c2b0(void* a0) {
    return main::sub_120b8f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_120c460  (orig 0x120c460, tailcall)
uint64_t main_f_120c460(void* a0) {
    return main::sub_120be60(((uintptr_t)((char*)(a0) - 104)));
}

// sub_120c470  (orig 0x120c470, tailcall)
uint64_t main_f_120c470(void* a0) {
    return main::sub_120bfe0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_120c480  (orig 0x120c480, tailcall)
uint64_t main_f_120c480(void* a0) {
    return main::sub_120bcf0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_120ce40  (orig 0x120ce40, tailcall)
uint64_t main_f_120ce40(void* a0) {
    return main::sub_1207180(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_120cf80  (orig 0x120cf80, tailcall)
uint64_t main_f_120cf80(void* a0) {
    return main::sub_1208920(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_120d0b0  (orig 0x120d0b0, tailcall)
uint64_t main_f_120d0b0(void* a0) {
    return main::sub_1209d00(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_120d0f0  (orig 0x120d0f0, tailcall)
uint64_t main_f_120d0f0(void* a0) {
    return main::sub_1207c80(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_120f350  (orig 0x120f350, tailcall)
uint64_t main_f_120f350(void* a0) {
    return main::sub_120f370(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_120f7a0  (orig 0x120f7a0, tailcall)
uint64_t main_f_120f7a0(void* a0) {
    return main::sub_120f670(((uintptr_t)((char*)(a0) - 72)));
}

// sub_120f7b0  (orig 0x120f7b0, tailcall)
uint64_t main_f_120f7b0(void* a0) {
    return main::sub_120f670(((uintptr_t)((char*)(a0) - 80)));
}

// sub_120f7c0  (orig 0x120f7c0, tailcall)
void main_f_120f7c0() { main::sub_120f670(); }

// sub_120f7d0  (orig 0x120f7d0, tailcall)
uint64_t main_f_120f7d0(void* a0) {
    return main::sub_120f670(((uintptr_t)((char*)(a0) - 72)));
}

// sub_120f7e0  (orig 0x120f7e0, tailcall)
uint64_t main_f_120f7e0(void* a0) {
    return main::sub_120f670(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1210b30  (orig 0x1210b30, tailcall)
uint64_t main_f_1210b30(void* a0) {
    return main::sub_1210560(((uintptr_t)((char*)(a0) - 96)));
}

// sub_1210dc0  (orig 0x1210dc0, tailcall)
uint64_t main_f_1210dc0(void* a0) {
    return main::sub_1210cd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1210dd0  (orig 0x1210dd0, tailcall)
uint64_t main_f_1210dd0(void* a0) {
    return main::sub_1210cd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1210f80  (orig 0x1210f80, tailcall)
uint64_t main_f_1210f80(void* a0) {
    return main::sub_1210b40(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_12159d0  (orig 0x12159d0, tailcall)
uint64_t main_f_12159d0(void* a0) {
    return main::sub_12154d0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_1215b70  (orig 0x1215b70, tailcall)
uint64_t main_f_1215b70(void* a0) {
    return main::sub_1215a20(((uintptr_t)((char*)(a0) - 120)));
}

// sub_1215d10  (orig 0x1215d10, tailcall)
uint64_t main_f_1215d10(void* a0) {
    return main::sub_1215bc0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_1216b70  (orig 0x1216b70, tailcall)
void main_f_1216b70() { main::sub_1217300(); }

// sub_1216c80  (orig 0x1216c80, tailcall)
void main_f_1216c80() { main::sub_1217300(); }

// sub_1216c90  (orig 0x1216c90, tailcall)
void main_f_1216c90() { main::sub_1217300(); }

// sub_12171a0  (orig 0x12171a0, tailcall)
uint64_t main_f_12171a0(void* a0) {
    return main::sub_1216f00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12171b0  (orig 0x12171b0, tailcall)
uint64_t main_f_12171b0(void* a0) {
    return main::sub_1216f00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_121de60  (orig 0x121de60, tailcall)
uint64_t main_f_121de60(void* a0) {
    return main::sub_121dd80(((uintptr_t)((char*)(a0) - 120)));
}

// sub_121dfb0  (orig 0x121dfb0, tailcall)
uint64_t main_f_121dfb0(void* a0) {
    return main::sub_121de70(((uintptr_t)((char*)(a0) - 120)));
}

// sub_121e0f0  (orig 0x121e0f0, tailcall)
uint64_t main_f_121e0f0(void* a0) {
    return main::sub_121dfc0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_121e2d0  (orig 0x121e2d0, tailcall)
void main_f_121e2d0() { main::sub_121e100(); }

// sub_121e2e0  (orig 0x121e2e0, tailcall)
void main_f_121e2e0() { main::sub_121e460(); }

// sub_121e2f0  (orig 0x121e2f0, tailcall)
uint64_t main_f_121e2f0(void* a0) {
    return main::sub_121e100(((uintptr_t)((char*)(a0) - 72)));
}

// sub_121e300  (orig 0x121e300, tailcall)
uint64_t main_f_121e300(void* a0) {
    return main::sub_121e100(((uintptr_t)((char*)(a0) - 72)));
}

// sub_121e310  (orig 0x121e310, tailcall)
void main_f_121e310() { main::sub_121e460(); }

// sub_121e320  (orig 0x121e320, tailcall)
void main_f_121e320() { main::sub_121e460(); }

// sub_121e330  (orig 0x121e330, tailcall)
uint64_t main_f_121e330(void* a0) {
    return main::sub_121e100(((uintptr_t)((char*)(a0) - 80)));
}

// sub_121e340  (orig 0x121e340, tailcall)
uint64_t main_f_121e340(void* a0) {
    return main::sub_121e100(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1226580  (orig 0x1226580, tailcall)
uint64_t main_f_1226580(void* a0) {
    return main::sub_c1bce0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1200))));
}

// sub_122a1b0  (orig 0x122a1b0, tailcall)
void main_f_122a1b0() { main::sub_122a0b0(); }

// sub_122a1c0  (orig 0x122a1c0, tailcall)
void main_f_122a1c0() { main::sub_122a230(); }

// sub_122a1d0  (orig 0x122a1d0, tailcall)
uint64_t main_f_122a1d0(void* a0) {
    return main::sub_122a0b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_122a1e0  (orig 0x122a1e0, tailcall)
uint64_t main_f_122a1e0(void* a0) {
    return main::sub_122a0b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_122a1f0  (orig 0x122a1f0, tailcall)
void main_f_122a1f0() { main::sub_122a230(); }

// sub_122a200  (orig 0x122a200, tailcall)
void main_f_122a200() { main::sub_122a230(); }

// sub_122a210  (orig 0x122a210, tailcall)
uint64_t main_f_122a210(void* a0) {
    return main::sub_122a0b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_122a220  (orig 0x122a220, tailcall)
uint64_t main_f_122a220(void* a0) {
    return main::sub_122a0b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_122cb10  (orig 0x122cb10, tailcall)
void main_f_122cb10() { main::sub_ce0(); }

// sub_122cb70  (orig 0x122cb70, tailcall)
void main_f_122cb70() { main::sub_ce0(); }

// sub_122f440  (orig 0x122f440, tailcall)
void main_f_122f440() { main::sub_122f450(); }

// sub_12317a0  (orig 0x12317a0, tailcall)
void main_f_12317a0() { main::sub_1231510(); }

// sub_12317b0  (orig 0x12317b0, tailcall)
uint64_t main_f_12317b0(void* a0) {
    return main::sub_1231510(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12317c0  (orig 0x12317c0, tailcall)
uint64_t main_f_12317c0(void* a0) {
    return main::sub_1231510(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1234b50  (orig 0x1234b50, tailcall)
void main_f_1234b50() { main::sub_e7c4c0(); }

// sub_1234b60  (orig 0x1234b60, tailcall)
void main_f_1234b60() { main::sub_1234bd0(); }

// sub_1234b70  (orig 0x1234b70, tailcall)
uint64_t main_f_1234b70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1234b80  (orig 0x1234b80, tailcall)
uint64_t main_f_1234b80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1234b90  (orig 0x1234b90, tailcall)
void main_f_1234b90() { main::sub_1234bd0(); }

// sub_1234ba0  (orig 0x1234ba0, tailcall)
void main_f_1234ba0() { main::sub_1234bd0(); }

// sub_1234bb0  (orig 0x1234bb0, tailcall)
uint64_t main_f_1234bb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1234bc0  (orig 0x1234bc0, tailcall)
uint64_t main_f_1234bc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1235760  (orig 0x1235760, tailcall)
void main_f_1235760() { main::sub_12163d0(); }

// sub_12375f0  (orig 0x12375f0, tailcall)
void main_f_12375f0() { main::sub_1216430(); }

// sub_1238200  (orig 0x1238200, tailcall)
void main_f_1238200() { main::sub_1216430(); }

// sub_1239ca0  (orig 0x1239ca0, tailcall)
void main_f_1239ca0() { main::sub_12163d0(); }

// sub_123ad90  (orig 0x123ad90, tailcall)
void main_f_123ad90() { main::sub_1216430(); }

// sub_123d730  (orig 0x123d730, tailcall)
void main_f_123d730() { main::sub_1216430(); }

// sub_12415a0  (orig 0x12415a0, tailcall)
void main_f_12415a0() { main::sub_12163d0(); }

// sub_1244db0  (orig 0x1244db0, tailcall)
void main_f_1244db0() { main::sub_1244f60(); }

// sub_1244e80  (orig 0x1244e80, tailcall)
void main_f_1244e80() { main::sub_1244f60(); }

// sub_1244e90  (orig 0x1244e90, tailcall)
void main_f_1244e90() { main::sub_1244f60(); }

// sub_1246ce0  (orig 0x1246ce0, tailcall)
void main_f_1246ce0() { main::sub_1246b20(); }

// sub_1246da0  (orig 0x1246da0, tailcall)
uint64_t main_f_1246da0(void* a0) {
    return main::sub_1246b20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1246db0  (orig 0x1246db0, tailcall)
uint64_t main_f_1246db0(void* a0) {
    return main::sub_1246b20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1246f20  (orig 0x1246f20, tailcall)
uint64_t main_f_1246f20(void* a0) {
    return main::sub_1246b20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1246f30  (orig 0x1246f30, tailcall)
uint64_t main_f_1246f30(void* a0) {
    return main::sub_1246b20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1247060  (orig 0x1247060, tailcall)
void main_f_1247060() { main::sub_1246f40(); }

// sub_1247070  (orig 0x1247070, tailcall)
void main_f_1247070() { main::sub_12470e0(); }

// sub_1247080  (orig 0x1247080, tailcall)
uint64_t main_f_1247080(void* a0) {
    return main::sub_1246f40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1247090  (orig 0x1247090, tailcall)
uint64_t main_f_1247090(void* a0) {
    return main::sub_1246f40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12470a0  (orig 0x12470a0, tailcall)
void main_f_12470a0() { main::sub_12470e0(); }

// sub_12470b0  (orig 0x12470b0, tailcall)
void main_f_12470b0() { main::sub_12470e0(); }

// sub_12470c0  (orig 0x12470c0, tailcall)
uint64_t main_f_12470c0(void* a0) {
    return main::sub_1246f40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12470d0  (orig 0x12470d0, tailcall)
uint64_t main_f_12470d0(void* a0) {
    return main::sub_1246f40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1248230  (orig 0x1248230, tailcall)
uint64_t main_f_1248230(void* a0) {
    return main::sub_14b9450(((uintptr_t)(*(uint64_t*)((char*)(a0) + 160))));
}

// sub_1248250  (orig 0x1248250, tailcall)
uint64_t main_f_1248250(void* a0) {
    return main::sub_14b9510(((uintptr_t)(*(uint64_t*)((char*)(a0) + 160))));
}

// sub_1248260  (orig 0x1248260, tailcall)
uint64_t main_f_1248260(void* a0) {
    return main::sub_14b95d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 160))));
}

// sub_1248e50  (orig 0x1248e50, tailcall)
void main_f_1248e50() { main::sub_1249000(); }

// sub_1248f20  (orig 0x1248f20, tailcall)
void main_f_1248f20() { main::sub_1249000(); }

// sub_1248f30  (orig 0x1248f30, tailcall)
void main_f_1248f30() { main::sub_1249000(); }

// sub_12491a0  (orig 0x12491a0, tailcall)
uint64_t main_f_12491a0(void* a0) {
    return main::sub_1248cf0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_12498e0  (orig 0x12498e0, tailcall)
void main_f_12498e0() { main::sub_e7c4c0(); }

// sub_12498f0  (orig 0x12498f0, tailcall)
void main_f_12498f0() { main::sub_1249960(); }

// sub_1249900  (orig 0x1249900, tailcall)
uint64_t main_f_1249900(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1249910  (orig 0x1249910, tailcall)
uint64_t main_f_1249910(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1249920  (orig 0x1249920, tailcall)
void main_f_1249920() { main::sub_1249960(); }

// sub_1249930  (orig 0x1249930, tailcall)
void main_f_1249930() { main::sub_1249960(); }

// sub_1249940  (orig 0x1249940, tailcall)
uint64_t main_f_1249940(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1249950  (orig 0x1249950, tailcall)
uint64_t main_f_1249950(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1249f90  (orig 0x1249f90, tailcall)
void main_f_1249f90() { main::sub_124a100(); }

// sub_124a040  (orig 0x124a040, tailcall)
void main_f_124a040() { main::sub_124a100(); }

// sub_124a050  (orig 0x124a050, tailcall)
void main_f_124a050() { main::sub_124a100(); }

// sub_124ae90  (orig 0x124ae90, tailcall)
void main_f_124ae90() { main::sub_124add0(); }

// sub_124aea0  (orig 0x124aea0, tailcall)
void main_f_124aea0() { main::sub_124af10(); }

// sub_124aeb0  (orig 0x124aeb0, tailcall)
uint64_t main_f_124aeb0(void* a0) {
    return main::sub_124add0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_124aec0  (orig 0x124aec0, tailcall)
uint64_t main_f_124aec0(void* a0) {
    return main::sub_124add0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_124aed0  (orig 0x124aed0, tailcall)
void main_f_124aed0() { main::sub_124af10(); }

// sub_124aee0  (orig 0x124aee0, tailcall)
void main_f_124aee0() { main::sub_124af10(); }

// sub_124aef0  (orig 0x124aef0, tailcall)
uint64_t main_f_124aef0(void* a0) {
    return main::sub_124add0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_124af00  (orig 0x124af00, tailcall)
uint64_t main_f_124af00(void* a0) {
    return main::sub_124add0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_124c320  (orig 0x124c320, tailcall)
void main_f_124c320() { main::sub_e7c4c0(); }

// sub_124c330  (orig 0x124c330, tailcall)
void main_f_124c330() { main::sub_124c3a0(); }

// sub_124c340  (orig 0x124c340, tailcall)
uint64_t main_f_124c340(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_124c350  (orig 0x124c350, tailcall)
uint64_t main_f_124c350(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_124c360  (orig 0x124c360, tailcall)
void main_f_124c360() { main::sub_124c3a0(); }

// sub_124c370  (orig 0x124c370, tailcall)
void main_f_124c370() { main::sub_124c3a0(); }

// sub_124c380  (orig 0x124c380, tailcall)
uint64_t main_f_124c380(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_124c390  (orig 0x124c390, tailcall)
uint64_t main_f_124c390(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1250e80  (orig 0x1250e80, tailcall)
void main_f_1250e80() { main::sub_1250d30(); }

// sub_1250e90  (orig 0x1250e90, tailcall)
void main_f_1250e90() { main::sub_1250f00(); }

// sub_1250ea0  (orig 0x1250ea0, tailcall)
uint64_t main_f_1250ea0(void* a0) {
    return main::sub_1250d30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1250eb0  (orig 0x1250eb0, tailcall)
uint64_t main_f_1250eb0(void* a0) {
    return main::sub_1250d30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1250ec0  (orig 0x1250ec0, tailcall)
void main_f_1250ec0() { main::sub_1250f00(); }

// sub_1250ed0  (orig 0x1250ed0, tailcall)
void main_f_1250ed0() { main::sub_1250f00(); }

// sub_1250ee0  (orig 0x1250ee0, tailcall)
uint64_t main_f_1250ee0(void* a0) {
    return main::sub_1250d30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1250ef0  (orig 0x1250ef0, tailcall)
uint64_t main_f_1250ef0(void* a0) {
    return main::sub_1250d30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1252ea0  (orig 0x1252ea0, tailcall)
uint64_t main_f_1252ea0(void* a0) {
    return main::sub_124d550(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1253000  (orig 0x1253000, tailcall)
uint64_t main_f_1253000(void* a0) {
    return main::sub_124e390(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1253230  (orig 0x1253230, tailcall)
uint64_t main_f_1253230(void* a0) {
    return main::sub_124f5d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1253270  (orig 0x1253270, tailcall)
uint64_t main_f_1253270(void* a0) {
    return main::sub_124ff40(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_12532b0  (orig 0x12532b0, tailcall)
uint64_t main_f_12532b0(void* a0) {
    return main::sub_1250140(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1253500  (orig 0x1253500, tailcall)
uint64_t main_f_1253500(void* a0) {
    return main::sub_1250ba0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1253560  (orig 0x1253560, tailcall)
uint64_t main_f_1253560(void* a0) {
    return main::sub_1250ba0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1253d00  (orig 0x1253d00, tailcall)
void main_f_1253d00() { main::sub_1253eb0(); }

// sub_1253dd0  (orig 0x1253dd0, tailcall)
void main_f_1253dd0() { main::sub_1253eb0(); }

// sub_1253de0  (orig 0x1253de0, tailcall)
void main_f_1253de0() { main::sub_1253eb0(); }

// sub_1255430  (orig 0x1255430, tailcall)
void main_f_1255430() { main::sub_1255270(); }

// sub_12554f0  (orig 0x12554f0, tailcall)
uint64_t main_f_12554f0(void* a0) {
    return main::sub_1255270(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1255500  (orig 0x1255500, tailcall)
uint64_t main_f_1255500(void* a0) {
    return main::sub_1255270(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1255670  (orig 0x1255670, tailcall)
uint64_t main_f_1255670(void* a0) {
    return main::sub_1255270(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1255680  (orig 0x1255680, tailcall)
uint64_t main_f_1255680(void* a0) {
    return main::sub_1255270(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1255770  (orig 0x1255770, tailcall)
void main_f_1255770() { main::sub_1255960(); }

// sub_1255860  (orig 0x1255860, tailcall)
void main_f_1255860() { main::sub_1255960(); }

// sub_1255870  (orig 0x1255870, tailcall)
void main_f_1255870() { main::sub_1255960(); }

// sub_1258310  (orig 0x1258310, tailcall)
void main_f_1258310() { main::sub_12585c0(); }

// sub_1258460  (orig 0x1258460, tailcall)
void main_f_1258460() { main::sub_12585c0(); }

// sub_1258470  (orig 0x1258470, tailcall)
void main_f_1258470() { main::sub_12585c0(); }

// sub_12588c0  (orig 0x12588c0, tailcall)
uint64_t main_f_12588c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return main::sub_14ee830(((uintptr_t)(*(uint64_t*)((char*)(p0) + 1496))));
}

// sub_12599d0  (orig 0x12599d0, tailcall)
uint64_t main_f_12599d0(void* a0) {
    return main::Play_Camp_Curry_CloseBook(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_12599e0  (orig 0x12599e0, tailcall)
void main_f_12599e0() { main::sub_e7c4c0(); }

// sub_12599f0  (orig 0x12599f0, tailcall)
void main_f_12599f0() { main::sub_1259a60(); }

// sub_1259a00  (orig 0x1259a00, tailcall)
uint64_t main_f_1259a00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1259a10  (orig 0x1259a10, tailcall)
uint64_t main_f_1259a10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1259a20  (orig 0x1259a20, tailcall)
void main_f_1259a20() { main::sub_1259a60(); }

// sub_1259a30  (orig 0x1259a30, tailcall)
void main_f_1259a30() { main::sub_1259a60(); }

// sub_1259a40  (orig 0x1259a40, tailcall)
uint64_t main_f_1259a40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1259a50  (orig 0x1259a50, tailcall)
uint64_t main_f_1259a50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_125d530  (orig 0x125d530, tailcall)
void main_f_125d530() { main::sub_125d360(); }

// sub_125d5f0  (orig 0x125d5f0, tailcall)
uint64_t main_f_125d5f0(void* a0) {
    return main::sub_125d360(((uintptr_t)((char*)(a0) - 72)));
}

// sub_125d600  (orig 0x125d600, tailcall)
uint64_t main_f_125d600(void* a0) {
    return main::sub_125d360(((uintptr_t)((char*)(a0) - 72)));
}

// sub_125d770  (orig 0x125d770, tailcall)
uint64_t main_f_125d770(void* a0) {
    return main::sub_125d360(((uintptr_t)((char*)(a0) - 80)));
}

// sub_125d780  (orig 0x125d780, tailcall)
uint64_t main_f_125d780(void* a0) {
    return main::sub_125d360(((uintptr_t)((char*)(a0) - 80)));
}

// sub_125d870  (orig 0x125d870, tailcall)
void main_f_125d870() { main::sub_125d790(); }

// sub_125d880  (orig 0x125d880, tailcall)
void main_f_125d880() { main::sub_125de00(); }

// sub_125d890  (orig 0x125d890, tailcall)
uint64_t main_f_125d890(void* a0) {
    return main::sub_125d790(((uintptr_t)((char*)(a0) - 72)));
}

// sub_125d8a0  (orig 0x125d8a0, tailcall)
uint64_t main_f_125d8a0(void* a0) {
    return main::sub_125d790(((uintptr_t)((char*)(a0) - 72)));
}

// sub_125d8b0  (orig 0x125d8b0, tailcall)
void main_f_125d8b0() { main::sub_125de00(); }

// sub_125d8c0  (orig 0x125d8c0, tailcall)
void main_f_125d8c0() { main::sub_125de00(); }

// sub_125d8d0  (orig 0x125d8d0, tailcall)
uint64_t main_f_125d8d0(void* a0) {
    return main::sub_125d790(((uintptr_t)((char*)(a0) - 80)));
}

// sub_125d8e0  (orig 0x125d8e0, tailcall)
uint64_t main_f_125d8e0(void* a0) {
    return main::sub_125d790(((uintptr_t)((char*)(a0) - 80)));
}

// sub_125f770  (orig 0x125f770, tailcall)
void main_f_125f770() { main::sub_eb81a0(); }

// sub_125f7f0  (orig 0x125f7f0, tailcall)
uint64_t main_f_125f7f0(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_125f800  (orig 0x125f800, tailcall)
uint64_t main_f_125f800(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_125f8f0  (orig 0x125f8f0, tailcall)
uint64_t main_f_125f8f0(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_125f900  (orig 0x125f900, tailcall)
uint64_t main_f_125f900(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_125fcf0  (orig 0x125fcf0, tailcall)
void main_f_125fcf0() { main::sub_eb81a0(); }

// sub_125fd00  (orig 0x125fd00, tailcall)
void main_f_125fd00() { main::sub_125db50(); }

// sub_125fd10  (orig 0x125fd10, tailcall)
uint64_t main_f_125fd10(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_125fd20  (orig 0x125fd20, tailcall)
uint64_t main_f_125fd20(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_125fd30  (orig 0x125fd30, tailcall)
void main_f_125fd30() { main::sub_125db50(); }

// sub_125fd40  (orig 0x125fd40, tailcall)
void main_f_125fd40() { main::sub_125db50(); }

// sub_125fd50  (orig 0x125fd50, tailcall)
uint64_t main_f_125fd50(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_125fd60  (orig 0x125fd60, tailcall)
uint64_t main_f_125fd60(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1262b40  (orig 0x1262b40, tailcall)
void main_f_1262b40() { main::sub_e7feb0(); }

// sub_1262b50  (orig 0x1262b50, tailcall)
void main_f_1262b50() { main::sub_1262bc0(); }

// sub_1262b60  (orig 0x1262b60, tailcall)
uint64_t main_f_1262b60(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1262b70  (orig 0x1262b70, tailcall)
uint64_t main_f_1262b70(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1262b80  (orig 0x1262b80, tailcall)
void main_f_1262b80() { main::sub_1262bc0(); }

// sub_1262b90  (orig 0x1262b90, tailcall)
void main_f_1262b90() { main::sub_1262bc0(); }

// sub_1262ba0  (orig 0x1262ba0, tailcall)
uint64_t main_f_1262ba0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1262bb0  (orig 0x1262bb0, tailcall)
uint64_t main_f_1262bb0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12643b0  (orig 0x12643b0, tailcall)
void main_f_12643b0() { main::sub_e7c4c0(); }

// sub_12643c0  (orig 0x12643c0, tailcall)
void main_f_12643c0() { main::sub_1264430(); }

// sub_12643d0  (orig 0x12643d0, tailcall)
uint64_t main_f_12643d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12643e0  (orig 0x12643e0, tailcall)
uint64_t main_f_12643e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12643f0  (orig 0x12643f0, tailcall)
void main_f_12643f0() { main::sub_1264430(); }

// sub_1264400  (orig 0x1264400, tailcall)
void main_f_1264400() { main::sub_1264430(); }

// sub_1264410  (orig 0x1264410, tailcall)
uint64_t main_f_1264410(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1264420  (orig 0x1264420, tailcall)
uint64_t main_f_1264420(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1266310  (orig 0x1266310, tailcall)
void main_f_1266310() { main::sub_e7c4c0(); }

// sub_1266320  (orig 0x1266320, tailcall)
void main_f_1266320() { main::sub_1266490(); }

// sub_1266330  (orig 0x1266330, tailcall)
uint64_t main_f_1266330(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1266340  (orig 0x1266340, tailcall)
uint64_t main_f_1266340(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1266350  (orig 0x1266350, tailcall)
void main_f_1266350() { main::sub_1266490(); }

// sub_1266360  (orig 0x1266360, tailcall)
void main_f_1266360() { main::sub_1266490(); }

// sub_1266370  (orig 0x1266370, tailcall)
uint64_t main_f_1266370(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1266380  (orig 0x1266380, tailcall)
uint64_t main_f_1266380(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1266c70  (orig 0x1266c70, tailcall)
void main_f_1266c70() { main::sub_e7feb0(); }

// sub_1266c80  (orig 0x1266c80, tailcall)
void main_f_1266c80() { main::sub_12666d0(); }

// sub_1266c90  (orig 0x1266c90, tailcall)
uint64_t main_f_1266c90(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1266ca0  (orig 0x1266ca0, tailcall)
uint64_t main_f_1266ca0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1266cb0  (orig 0x1266cb0, tailcall)
void main_f_1266cb0() { main::sub_12666d0(); }

// sub_1266cc0  (orig 0x1266cc0, tailcall)
void main_f_1266cc0() { main::sub_12666d0(); }

// sub_1266cd0  (orig 0x1266cd0, tailcall)
uint64_t main_f_1266cd0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1266ce0  (orig 0x1266ce0, tailcall)
uint64_t main_f_1266ce0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1267d90  (orig 0x1267d90, tailcall)
void main_f_1267d90() { main::sub_1268040(); }

// sub_1267ee0  (orig 0x1267ee0, tailcall)
void main_f_1267ee0() { main::sub_1268040(); }

// sub_1267ef0  (orig 0x1267ef0, tailcall)
void main_f_1267ef0() { main::sub_1268040(); }

// sub_12683d0  (orig 0x12683d0, tailcall)
void main_f_12683d0() { main::sub_14ba4c0(); }

// sub_1268710  (orig 0x1268710, tailcall)
void main_f_1268710() { main::sub_14ba4c0(); }

// sub_1268ad0  (orig 0x1268ad0, tailcall)
void main_f_1268ad0() { main::sub_14ba4c0(); }

// sub_1268d60  (orig 0x1268d60, tailcall)
void main_f_1268d60() { main::sub_14ba4c0(); }

// sub_126bc80  (orig 0x126bc80, tailcall)
void main_f_126bc80() { main::sub_126b950(); }

// sub_126bc90  (orig 0x126bc90, tailcall)
void main_f_126bc90() { main::sub_126c7a0(); }

// sub_126bca0  (orig 0x126bca0, tailcall)
uint64_t main_f_126bca0(void* a0) {
    return main::sub_126b950(((uintptr_t)((char*)(a0) - 72)));
}

// sub_126bcb0  (orig 0x126bcb0, tailcall)
uint64_t main_f_126bcb0(void* a0) {
    return main::sub_126b950(((uintptr_t)((char*)(a0) - 72)));
}

// sub_126bcc0  (orig 0x126bcc0, tailcall)
void main_f_126bcc0() { main::sub_126c7a0(); }

// sub_126bcd0  (orig 0x126bcd0, tailcall)
void main_f_126bcd0() { main::sub_126c7a0(); }

// sub_126bce0  (orig 0x126bce0, tailcall)
uint64_t main_f_126bce0(void* a0) {
    return main::sub_126b950(((uintptr_t)((char*)(a0) - 80)));
}

// sub_126bcf0  (orig 0x126bcf0, tailcall)
uint64_t main_f_126bcf0(void* a0) {
    return main::sub_126b950(((uintptr_t)((char*)(a0) - 80)));
}

// sub_126c310  (orig 0x126c310, tailcall)
uint64_t main_f_126c310(void* a0) {
    return main::sub_126bfa0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_126c320  (orig 0x126c320, tailcall)
uint64_t main_f_126c320(void* a0) {
    return main::sub_126bfa0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_126db80  (orig 0x126db80, tailcall)
void main_f_126db80() { main::sub_126c9e0(); }

// sub_126dd50  (orig 0x126dd50, tailcall)
void main_f_126dd50() { main::sub_126c9e0(); }

// sub_126dd60  (orig 0x126dd60, tailcall)
void main_f_126dd60() { main::sub_126c9e0(); }

// sub_126e5f0  (orig 0x126e5f0, tailcall)
void main_f_126e5f0() { main::sub_e7c4c0(); }

// sub_126e600  (orig 0x126e600, tailcall)
void main_f_126e600() { main::sub_126e670(); }

// sub_126e610  (orig 0x126e610, tailcall)
uint64_t main_f_126e610(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_126e620  (orig 0x126e620, tailcall)
uint64_t main_f_126e620(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_126e630  (orig 0x126e630, tailcall)
void main_f_126e630() { main::sub_126e670(); }

// sub_126e640  (orig 0x126e640, tailcall)
void main_f_126e640() { main::sub_126e670(); }

// sub_126e650  (orig 0x126e650, tailcall)
uint64_t main_f_126e650(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_126e660  (orig 0x126e660, tailcall)
uint64_t main_f_126e660(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1271880  (orig 0x1271880, tailcall)
void main_f_1271880() { main::sub_1271740(); }

// sub_1271890  (orig 0x1271890, tailcall)
void main_f_1271890() { main::sub_1271900(); }

// sub_12718a0  (orig 0x12718a0, tailcall)
uint64_t main_f_12718a0(void* a0) {
    return main::sub_1271740(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12718b0  (orig 0x12718b0, tailcall)
uint64_t main_f_12718b0(void* a0) {
    return main::sub_1271740(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12718c0  (orig 0x12718c0, tailcall)
void main_f_12718c0() { main::sub_1271900(); }

// sub_12718d0  (orig 0x12718d0, tailcall)
void main_f_12718d0() { main::sub_1271900(); }

// sub_12718e0  (orig 0x12718e0, tailcall)
uint64_t main_f_12718e0(void* a0) {
    return main::sub_1271740(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12718f0  (orig 0x12718f0, tailcall)
uint64_t main_f_12718f0(void* a0) {
    return main::sub_1271740(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1273680  (orig 0x1273680, tailcall)
void main_f_1273680() { main::sub_1273570(); }

// sub_1273690  (orig 0x1273690, tailcall)
void main_f_1273690() { main::sub_1273700(); }

// sub_12736a0  (orig 0x12736a0, tailcall)
uint64_t main_f_12736a0(void* a0) {
    return main::sub_1273570(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12736b0  (orig 0x12736b0, tailcall)
uint64_t main_f_12736b0(void* a0) {
    return main::sub_1273570(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12736c0  (orig 0x12736c0, tailcall)
void main_f_12736c0() { main::sub_1273700(); }

// sub_12736d0  (orig 0x12736d0, tailcall)
void main_f_12736d0() { main::sub_1273700(); }

// sub_12736e0  (orig 0x12736e0, tailcall)
uint64_t main_f_12736e0(void* a0) {
    return main::sub_1273570(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12736f0  (orig 0x12736f0, tailcall)
uint64_t main_f_12736f0(void* a0) {
    return main::sub_1273570(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1273c40  (orig 0x1273c40, tailcall)
void main_f_1273c40() { main::sub_e7c4c0(); }

// sub_1273c50  (orig 0x1273c50, tailcall)
void main_f_1273c50() { main::sub_1273cc0(); }

// sub_1273c60  (orig 0x1273c60, tailcall)
uint64_t main_f_1273c60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1273c70  (orig 0x1273c70, tailcall)
uint64_t main_f_1273c70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1273c80  (orig 0x1273c80, tailcall)
void main_f_1273c80() { main::sub_1273cc0(); }

// sub_1273c90  (orig 0x1273c90, tailcall)
void main_f_1273c90() { main::sub_1273cc0(); }

// sub_1273ca0  (orig 0x1273ca0, tailcall)
uint64_t main_f_1273ca0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1273cb0  (orig 0x1273cb0, tailcall)
uint64_t main_f_1273cb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1275780  (orig 0x1275780, tailcall)
void main_f_1275780() { main::sub_12759f0(); }

// sub_12758b0  (orig 0x12758b0, tailcall)
void main_f_12758b0() { main::sub_12759f0(); }

// sub_12758c0  (orig 0x12758c0, tailcall)
void main_f_12758c0() { main::sub_12759f0(); }

// sub_1275eb0  (orig 0x1275eb0, tailcall)
uint64_t main_f_1275eb0(void* a0) {
    return main::sub_1274ee0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1275f30  (orig 0x1275f30, tailcall)
uint64_t main_f_1275f30(void* a0) {
    return main::sub_1275070(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1275fb0  (orig 0x1275fb0, tailcall)
uint64_t main_f_1275fb0(void* a0) {
    return main::sub_12751b0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1275ff0  (orig 0x1275ff0, tailcall)
uint64_t main_f_1275ff0(void* a0) {
    return main::sub_1275340(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1276030  (orig 0x1276030, tailcall)
uint64_t main_f_1276030(void* a0) {
    return main::sub_12754d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_12766e0  (orig 0x12766e0, tailcall)
void main_f_12766e0() { main::sub_1276890(); }

// sub_12767b0  (orig 0x12767b0, tailcall)
void main_f_12767b0() { main::sub_1276890(); }

// sub_12767c0  (orig 0x12767c0, tailcall)
void main_f_12767c0() { main::sub_1276890(); }

// sub_1277180  (orig 0x1277180, tailcall)
void main_f_1277180() { main::sub_1277330(); }

// sub_1277250  (orig 0x1277250, tailcall)
void main_f_1277250() { main::sub_1277330(); }

// sub_1277260  (orig 0x1277260, tailcall)
void main_f_1277260() { main::sub_1277330(); }

// sub_1277f70  (orig 0x1277f70, tailcall)
void main_f_1277f70() { main::sub_e7c4c0(); }

// sub_1277f80  (orig 0x1277f80, tailcall)
void main_f_1277f80() { main::sub_1277ff0(); }

// sub_1277f90  (orig 0x1277f90, tailcall)
uint64_t main_f_1277f90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1277fa0  (orig 0x1277fa0, tailcall)
uint64_t main_f_1277fa0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1277fb0  (orig 0x1277fb0, tailcall)
void main_f_1277fb0() { main::sub_1277ff0(); }

// sub_1277fc0  (orig 0x1277fc0, tailcall)
void main_f_1277fc0() { main::sub_1277ff0(); }

// sub_1277fd0  (orig 0x1277fd0, tailcall)
uint64_t main_f_1277fd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1277fe0  (orig 0x1277fe0, tailcall)
uint64_t main_f_1277fe0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1278360  (orig 0x1278360, tailcall)
uint64_t main_f_1278360(void* a0) {
    return main::sub_1277bd0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_12791c0  (orig 0x12791c0, tailcall)
void main_f_12791c0() { main::sub_1278230(); }

// sub_12792d0  (orig 0x12792d0, tailcall)
void main_f_12792d0() { main::sub_1278230(); }

// sub_12792e0  (orig 0x12792e0, tailcall)
void main_f_12792e0() { main::sub_1278230(); }

// sub_127a660  (orig 0x127a660, tailcall)
void main_f_127a660() { main::sub_e7c4c0(); }

// sub_127a670  (orig 0x127a670, tailcall)
void main_f_127a670() { main::sub_127a6e0(); }

// sub_127a680  (orig 0x127a680, tailcall)
uint64_t main_f_127a680(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127a690  (orig 0x127a690, tailcall)
uint64_t main_f_127a690(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127a6a0  (orig 0x127a6a0, tailcall)
void main_f_127a6a0() { main::sub_127a6e0(); }

// sub_127a6b0  (orig 0x127a6b0, tailcall)
void main_f_127a6b0() { main::sub_127a6e0(); }

// sub_127a6c0  (orig 0x127a6c0, tailcall)
uint64_t main_f_127a6c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_127a6d0  (orig 0x127a6d0, tailcall)
uint64_t main_f_127a6d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_127b2a0  (orig 0x127b2a0, tailcall)
uint64_t main_f_127b2a0(void* a0) {
    return main::sub_eb7730(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_127b2b0  (orig 0x127b2b0, tailcall)
void main_f_127b2b0() { main::sub_e7c4c0(); }

// sub_127b2c0  (orig 0x127b2c0, tailcall)
void main_f_127b2c0() { main::sub_127b330(); }

// sub_127b2d0  (orig 0x127b2d0, tailcall)
uint64_t main_f_127b2d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127b2e0  (orig 0x127b2e0, tailcall)
uint64_t main_f_127b2e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127b2f0  (orig 0x127b2f0, tailcall)
void main_f_127b2f0() { main::sub_127b330(); }

// sub_127b300  (orig 0x127b300, tailcall)
void main_f_127b300() { main::sub_127b330(); }

// sub_127b310  (orig 0x127b310, tailcall)
uint64_t main_f_127b310(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_127b320  (orig 0x127b320, tailcall)
uint64_t main_f_127b320(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_127be80  (orig 0x127be80, tailcall)
void main_f_127be80() { main::sub_e7c4c0(); }

// sub_127be90  (orig 0x127be90, tailcall)
void main_f_127be90() { main::sub_127bf00(); }

// sub_127bea0  (orig 0x127bea0, tailcall)
uint64_t main_f_127bea0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127beb0  (orig 0x127beb0, tailcall)
uint64_t main_f_127beb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127bec0  (orig 0x127bec0, tailcall)
void main_f_127bec0() { main::sub_127bf00(); }

// sub_127bed0  (orig 0x127bed0, tailcall)
void main_f_127bed0() { main::sub_127bf00(); }

// sub_127bee0  (orig 0x127bee0, tailcall)
uint64_t main_f_127bee0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_127bef0  (orig 0x127bef0, tailcall)
uint64_t main_f_127bef0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_127cea0  (orig 0x127cea0, tailcall)
void main_f_127cea0() { main::sub_127cdd0(); }

// sub_127ceb0  (orig 0x127ceb0, tailcall)
void main_f_127ceb0() { main::sub_127cf20(); }

// sub_127cec0  (orig 0x127cec0, tailcall)
uint64_t main_f_127cec0(void* a0) {
    return main::sub_127cdd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127ced0  (orig 0x127ced0, tailcall)
uint64_t main_f_127ced0(void* a0) {
    return main::sub_127cdd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127cee0  (orig 0x127cee0, tailcall)
void main_f_127cee0() { main::sub_127cf20(); }

// sub_127cef0  (orig 0x127cef0, tailcall)
void main_f_127cef0() { main::sub_127cf20(); }

// sub_127cf00  (orig 0x127cf00, tailcall)
uint64_t main_f_127cf00(void* a0) {
    return main::sub_127cdd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_127cf10  (orig 0x127cf10, tailcall)
uint64_t main_f_127cf10(void* a0) {
    return main::sub_127cdd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_127d880  (orig 0x127d880, tailcall)
void main_f_127d880() { main::sub_e7c4c0(); }

// sub_127d890  (orig 0x127d890, tailcall)
void main_f_127d890() { main::sub_127d900(); }

// sub_127d8a0  (orig 0x127d8a0, tailcall)
uint64_t main_f_127d8a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127d8b0  (orig 0x127d8b0, tailcall)
uint64_t main_f_127d8b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127d8c0  (orig 0x127d8c0, tailcall)
void main_f_127d8c0() { main::sub_127d900(); }

// sub_127d8d0  (orig 0x127d8d0, tailcall)
void main_f_127d8d0() { main::sub_127d900(); }

// sub_127d8e0  (orig 0x127d8e0, tailcall)
uint64_t main_f_127d8e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_127d8f0  (orig 0x127d8f0, tailcall)
uint64_t main_f_127d8f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_127e040  (orig 0x127e040, tailcall)
void main_f_127e040() { main::sub_126b950(); }

// sub_127e0c0  (orig 0x127e0c0, tailcall)
uint64_t main_f_127e0c0(void* a0) {
    return main::sub_126b950(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127e0d0  (orig 0x127e0d0, tailcall)
uint64_t main_f_127e0d0(void* a0) {
    return main::sub_126b950(((uintptr_t)((char*)(a0) - 72)));
}

// sub_127e1c0  (orig 0x127e1c0, tailcall)
uint64_t main_f_127e1c0(void* a0) {
    return main::sub_126b950(((uintptr_t)((char*)(a0) - 80)));
}

// sub_127e1d0  (orig 0x127e1d0, tailcall)
uint64_t main_f_127e1d0(void* a0) {
    return main::sub_126b950(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1282380  (orig 0x1282380, tailcall)
uint64_t main_f_1282380(void* a0) {
    return main::sub_126b5d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_12823c0  (orig 0x12823c0, tailcall)
uint64_t main_f_12823c0(void* a0) {
    return main::sub_126b790(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1283cf0  (orig 0x1283cf0, tailcall)
uint64_t main_f_1283cf0(void* a0) {
    return main::sub_126b5d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1283d30  (orig 0x1283d30, tailcall)
uint64_t main_f_1283d30(void* a0) {
    return main::sub_126b790(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1284f70  (orig 0x1284f70, tailcall)
uint64_t main_f_1284f70(void* a0) {
    return main::sub_126b5d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1284fb0  (orig 0x1284fb0, tailcall)
uint64_t main_f_1284fb0(void* a0) {
    return main::sub_126b790(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_128a2d0  (orig 0x128a2d0, tailcall)
uint64_t main_f_128a2d0(void* a0) {
    return main::sub_126b5d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_128a310  (orig 0x128a310, tailcall)
uint64_t main_f_128a310(void* a0) {
    return main::sub_126b790(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_128b350  (orig 0x128b350, tailcall)
uint64_t main_f_128b350(void* a0) {
    return main::sub_126b5d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_128b390  (orig 0x128b390, tailcall)
uint64_t main_f_128b390(void* a0) {
    return main::sub_126b790(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1290970  (orig 0x1290970, tailcall)
uint64_t main_f_1290970(void* a0) {
    return main::sub_126b5d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_12909b0  (orig 0x12909b0, tailcall)
uint64_t main_f_12909b0(void* a0) {
    return main::sub_126b790(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1290c40  (orig 0x1290c40, tailcall)
uint64_t main_f_1290c40(void* a0) {
    return main::sub_126b5d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1290c80  (orig 0x1290c80, tailcall)
uint64_t main_f_1290c80(void* a0) {
    return main::sub_126b790(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1291350  (orig 0x1291350, tailcall)
void main_f_1291350() { main::sub_12928c0(); }

// sub_1291a70  (orig 0x1291a70, tailcall)
uint64_t main_f_1291a70(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1291a80  (orig 0x1291a80, tailcall)
uint64_t main_f_1291a80(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1291ad0  (orig 0x1291ad0, tailcall)
uint64_t main_f_1291ad0(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1291ae0  (orig 0x1291ae0, tailcall)
uint64_t main_f_1291ae0(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1291af0  (orig 0x1291af0, tailcall)
void main_f_1291af0() { main::sub_12928c0(); }

// sub_1291c20  (orig 0x1291c20, tailcall)
void main_f_1291c20() { main::sub_126abd0(); }

// sub_1291c30  (orig 0x1291c30, tailcall)
uint64_t main_f_1291c30(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1291c40  (orig 0x1291c40, tailcall)
uint64_t main_f_1291c40(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1291c90  (orig 0x1291c90, tailcall)
uint64_t main_f_1291c90(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1291ca0  (orig 0x1291ca0, tailcall)
uint64_t main_f_1291ca0(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1291f20  (orig 0x1291f20, tailcall)
void main_f_1291f20() { main::sub_12928c0(); }

// sub_1292280  (orig 0x1292280, tailcall)
uint64_t main_f_1292280(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1292290  (orig 0x1292290, tailcall)
uint64_t main_f_1292290(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12922e0  (orig 0x12922e0, tailcall)
uint64_t main_f_12922e0(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12922f0  (orig 0x12922f0, tailcall)
uint64_t main_f_12922f0(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12923c0  (orig 0x12923c0, tailcall)
uint64_t main_f_12923c0(void* a0) {
    return main::sub_126b5d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1292400  (orig 0x1292400, tailcall)
uint64_t main_f_1292400(void* a0) {
    return main::sub_126b790(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1292670  (orig 0x1292670, tailcall)
void main_f_1292670() { main::sub_12928c0(); }

// sub_1292820  (orig 0x1292820, tailcall)
uint64_t main_f_1292820(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1292830  (orig 0x1292830, tailcall)
uint64_t main_f_1292830(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1292880  (orig 0x1292880, tailcall)
uint64_t main_f_1292880(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1292890  (orig 0x1292890, tailcall)
uint64_t main_f_1292890(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1292a40  (orig 0x1292a40, tailcall)
void main_f_1292a40() { main::sub_12928c0(); }

// sub_1292e20  (orig 0x1292e20, tailcall)
uint64_t main_f_1292e20(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1292e30  (orig 0x1292e30, tailcall)
uint64_t main_f_1292e30(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1292e80  (orig 0x1292e80, tailcall)
uint64_t main_f_1292e80(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1292e90  (orig 0x1292e90, tailcall)
uint64_t main_f_1292e90(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12930d0  (orig 0x12930d0, tailcall)
void main_f_12930d0() { main::sub_12928c0(); }

// sub_1293440  (orig 0x1293440, tailcall)
uint64_t main_f_1293440(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1293450  (orig 0x1293450, tailcall)
uint64_t main_f_1293450(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12934a0  (orig 0x12934a0, tailcall)
uint64_t main_f_12934a0(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12934b0  (orig 0x12934b0, tailcall)
uint64_t main_f_12934b0(void* a0) {
    return main::sub_12928c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12957c0  (orig 0x12957c0, tailcall)
void main_f_12957c0() { main::sub_e7c4c0(); }

// sub_12957d0  (orig 0x12957d0, tailcall)
void main_f_12957d0() { main::sub_1295840(); }

// sub_12957e0  (orig 0x12957e0, tailcall)
uint64_t main_f_12957e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12957f0  (orig 0x12957f0, tailcall)
uint64_t main_f_12957f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1295800  (orig 0x1295800, tailcall)
void main_f_1295800() { main::sub_1295840(); }

// sub_1295810  (orig 0x1295810, tailcall)
void main_f_1295810() { main::sub_1295840(); }

// sub_1295820  (orig 0x1295820, tailcall)
uint64_t main_f_1295820(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1295830  (orig 0x1295830, tailcall)
uint64_t main_f_1295830(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1296c30  (orig 0x1296c30, tailcall)
uint64_t main_f_1296c30(void* a0) {
    return main::sub_1296a90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1296c40  (orig 0x1296c40, tailcall)
uint64_t main_f_1296c40(void* a0) {
    return main::sub_1296a90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1296c50  (orig 0x1296c50, tailcall)
void main_f_1296c50() { main::sub_1296a90(); }

// sub_1296c60  (orig 0x1296c60, tailcall)
uint64_t main_f_1296c60(void* a0) {
    return main::sub_1296a90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1296c70  (orig 0x1296c70, tailcall)
uint64_t main_f_1296c70(void* a0) {
    return main::sub_1296a90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1296d40  (orig 0x1296d40, tailcall)
uint64_t main_f_1296d40(void* a0) {
    return main::sub_1299fa0(((uintptr_t)((char*)(a0) + 592)));
}

// sub_12977e0  (orig 0x12977e0, tailcall)
void main_f_12977e0() { main::sub_1297810(); }

// sub_12977f0  (orig 0x12977f0, tailcall)
void main_f_12977f0() { main::sub_1297810(); }

// sub_1297800  (orig 0x1297800, tailcall)
void main_f_1297800() { main::sub_1297810(); }

// sub_12a0b40  (orig 0x12a0b40, tailcall)
void main_f_12a0b40() { main::sub_12a0980(); }

// sub_12a0c00  (orig 0x12a0c00, tailcall)
uint64_t main_f_12a0c00(void* a0) {
    return main::sub_12a0980(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12a0c10  (orig 0x12a0c10, tailcall)
uint64_t main_f_12a0c10(void* a0) {
    return main::sub_12a0980(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12a0d80  (orig 0x12a0d80, tailcall)
uint64_t main_f_12a0d80(void* a0) {
    return main::sub_12a0980(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12a0d90  (orig 0x12a0d90, tailcall)
uint64_t main_f_12a0d90(void* a0) {
    return main::sub_12a0980(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12a4550  (orig 0x12a4550, tailcall)
void main_f_12a4550() { main::sub_12a4420(); }

// sub_12a4560  (orig 0x12a4560, tailcall)
void main_f_12a4560() { main::sub_12a0da0(); }

// sub_12a4570  (orig 0x12a4570, tailcall)
uint64_t main_f_12a4570(void* a0) {
    return main::sub_12a4420(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12a4580  (orig 0x12a4580, tailcall)
uint64_t main_f_12a4580(void* a0) {
    return main::sub_12a4420(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12a4590  (orig 0x12a4590, tailcall)
void main_f_12a4590() { main::sub_12a0da0(); }

// sub_12a45a0  (orig 0x12a45a0, tailcall)
void main_f_12a45a0() { main::sub_12a0da0(); }

// sub_12a45b0  (orig 0x12a45b0, tailcall)
uint64_t main_f_12a45b0(void* a0) {
    return main::sub_12a4420(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12a45c0  (orig 0x12a45c0, tailcall)
uint64_t main_f_12a45c0(void* a0) {
    return main::sub_12a4420(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12a51f0  (orig 0x12a51f0, tailcall)
void main_f_12a51f0() { main::sub_12a53e0(); }

// sub_12a52e0  (orig 0x12a52e0, tailcall)
void main_f_12a52e0() { main::sub_12a53e0(); }

// sub_12a52f0  (orig 0x12a52f0, tailcall)
void main_f_12a52f0() { main::sub_12a53e0(); }

// sub_12aa260  (orig 0x12aa260, tailcall)
void main_f_12aa260() { main::sub_12a9ed0(); }

// sub_12aa2e0  (orig 0x12aa2e0, tailcall)
uint64_t main_f_12aa2e0(void* a0) {
    return main::sub_12a9ed0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12aa2f0  (orig 0x12aa2f0, tailcall)
uint64_t main_f_12aa2f0(void* a0) {
    return main::sub_12a9ed0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12aa3e0  (orig 0x12aa3e0, tailcall)
uint64_t main_f_12aa3e0(void* a0) {
    return main::sub_12a9ed0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12aa3f0  (orig 0x12aa3f0, tailcall)
uint64_t main_f_12aa3f0(void* a0) {
    return main::sub_12a9ed0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12ae310  (orig 0x12ae310, tailcall)
void main_f_12ae310() { main::sub_12a29d0(); }

// sub_12ae440  (orig 0x12ae440, tailcall)
void main_f_12ae440() { main::sub_12a29d0(); }

// sub_12ae450  (orig 0x12ae450, tailcall)
void main_f_12ae450() { main::sub_12a29d0(); }

// sub_12b4ab0  (orig 0x12b4ab0, tailcall)
void main_f_12b4ab0() { main::T_contents_01_01(); }

// sub_12b76c0  (orig 0x12b76c0, tailcall)
void main_f_12b76c0() { main::sub_12b7510(); }

// sub_12b7740  (orig 0x12b7740, tailcall)
uint64_t main_f_12b7740(void* a0) {
    return main::sub_12b7510(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12b7750  (orig 0x12b7750, tailcall)
uint64_t main_f_12b7750(void* a0) {
    return main::sub_12b7510(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12b7840  (orig 0x12b7840, tailcall)
uint64_t main_f_12b7840(void* a0) {
    return main::sub_12b7510(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12b7850  (orig 0x12b7850, tailcall)
uint64_t main_f_12b7850(void* a0) {
    return main::sub_12b7510(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12b8fb0  (orig 0x12b8fb0, tailcall)
uint64_t main_f_12b8fb0(void* a0) {
    return main::sub_12b8d50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12b8fc0  (orig 0x12b8fc0, tailcall)
uint64_t main_f_12b8fc0(void* a0) {
    return main::sub_12b8d50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12b8fd0  (orig 0x12b8fd0, tailcall)
void main_f_12b8fd0() { main::sub_12b8d50(); }

// sub_12b8fe0  (orig 0x12b8fe0, tailcall)
uint64_t main_f_12b8fe0(void* a0) {
    return main::sub_12b8d50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12b8ff0  (orig 0x12b8ff0, tailcall)
uint64_t main_f_12b8ff0(void* a0) {
    return main::sub_12b8d50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12bd7e0  (orig 0x12bd7e0, tailcall)
uint64_t main_f_12bd7e0(void* a0) {
    return main::sub_14e69a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1536))));
}

// sub_12bdf00  (orig 0x12bdf00, tailcall)
void main_f_12bdf00() { main::sub_12bddf0(); }

// sub_12bdf10  (orig 0x12bdf10, tailcall)
void main_f_12bdf10() { main::sub_12be010(); }

// sub_12bdfb0  (orig 0x12bdfb0, tailcall)
uint64_t main_f_12bdfb0(void* a0) {
    return main::sub_12bddf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12bdfc0  (orig 0x12bdfc0, tailcall)
uint64_t main_f_12bdfc0(void* a0) {
    return main::sub_12bddf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12bdfd0  (orig 0x12bdfd0, tailcall)
void main_f_12bdfd0() { main::sub_12be010(); }

// sub_12bdfe0  (orig 0x12bdfe0, tailcall)
void main_f_12bdfe0() { main::sub_12be010(); }

// sub_12bdff0  (orig 0x12bdff0, tailcall)
uint64_t main_f_12bdff0(void* a0) {
    return main::sub_12bddf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12be000  (orig 0x12be000, tailcall)
uint64_t main_f_12be000(void* a0) {
    return main::sub_12bddf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12bedf0  (orig 0x12bedf0, tailcall)
uint64_t main_f_12bedf0(void* a0) {
    return main::sub_1505660(((uintptr_t)(*(uint64_t*)((char*)(a0) + 112))));
}

// sub_12bef20  (orig 0x12bef20, tailcall)
void main_f_12bef20() { main::sub_12bee00(); }

// sub_12bef30  (orig 0x12bef30, tailcall)
void main_f_12bef30() { main::sub_12ba950(); }

// sub_12bef40  (orig 0x12bef40, tailcall)
uint64_t main_f_12bef40(void* a0) {
    return main::sub_12bee00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12bef50  (orig 0x12bef50, tailcall)
uint64_t main_f_12bef50(void* a0) {
    return main::sub_12bee00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12bef60  (orig 0x12bef60, tailcall)
void main_f_12bef60() { main::sub_12ba950(); }

// sub_12bef70  (orig 0x12bef70, tailcall)
void main_f_12bef70() { main::sub_12ba950(); }

// sub_12bef80  (orig 0x12bef80, tailcall)
uint64_t main_f_12bef80(void* a0) {
    return main::sub_12bee00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12bef90  (orig 0x12bef90, tailcall)
uint64_t main_f_12bef90(void* a0) {
    return main::sub_12bee00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12c2e70  (orig 0x12c2e70, tailcall)
void main_f_12c2e70() { main::sub_12c2d30(); }

// sub_12c2e80  (orig 0x12c2e80, tailcall)
void main_f_12c2e80() { main::sub_12c2ef0(); }

// sub_12c2e90  (orig 0x12c2e90, tailcall)
uint64_t main_f_12c2e90(void* a0) {
    return main::sub_12c2d30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12c2ea0  (orig 0x12c2ea0, tailcall)
uint64_t main_f_12c2ea0(void* a0) {
    return main::sub_12c2d30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12c2eb0  (orig 0x12c2eb0, tailcall)
void main_f_12c2eb0() { main::sub_12c2ef0(); }

// sub_12c2ec0  (orig 0x12c2ec0, tailcall)
void main_f_12c2ec0() { main::sub_12c2ef0(); }

// sub_12c2ed0  (orig 0x12c2ed0, tailcall)
uint64_t main_f_12c2ed0(void* a0) {
    return main::sub_12c2d30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12c2ee0  (orig 0x12c2ee0, tailcall)
uint64_t main_f_12c2ee0(void* a0) {
    return main::sub_12c2d30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12c67c0  (orig 0x12c67c0, tailcall)
void main_f_12c67c0() { main::sub_e7c4c0(); }

// sub_12c67d0  (orig 0x12c67d0, tailcall)
void main_f_12c67d0() { main::sub_12c6840(); }

// sub_12c67e0  (orig 0x12c67e0, tailcall)
uint64_t main_f_12c67e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12c67f0  (orig 0x12c67f0, tailcall)
uint64_t main_f_12c67f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12c6800  (orig 0x12c6800, tailcall)
void main_f_12c6800() { main::sub_12c6840(); }

// sub_12c6810  (orig 0x12c6810, tailcall)
void main_f_12c6810() { main::sub_12c6840(); }

// sub_12c6820  (orig 0x12c6820, tailcall)
uint64_t main_f_12c6820(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12c6830  (orig 0x12c6830, tailcall)
uint64_t main_f_12c6830(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12c7070  (orig 0x12c7070, tailcall)
void main_f_12c7070() { main::sub_e7c4c0(); }

// sub_12c7080  (orig 0x12c7080, tailcall)
void main_f_12c7080() { main::sub_12c70f0(); }

// sub_12c7090  (orig 0x12c7090, tailcall)
uint64_t main_f_12c7090(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12c70a0  (orig 0x12c70a0, tailcall)
uint64_t main_f_12c70a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12c70b0  (orig 0x12c70b0, tailcall)
void main_f_12c70b0() { main::sub_12c70f0(); }

// sub_12c70c0  (orig 0x12c70c0, tailcall)
void main_f_12c70c0() { main::sub_12c70f0(); }

// sub_12c70d0  (orig 0x12c70d0, tailcall)
uint64_t main_f_12c70d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12c70e0  (orig 0x12c70e0, tailcall)
uint64_t main_f_12c70e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12c8f40  (orig 0x12c8f40, tailcall)
void main_f_12c8f40() { main::sub_e7c4c0(); }

// sub_12c8f50  (orig 0x12c8f50, tailcall)
void main_f_12c8f50() { main::sub_12c8fc0(); }

// sub_12c8f60  (orig 0x12c8f60, tailcall)
uint64_t main_f_12c8f60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12c8f70  (orig 0x12c8f70, tailcall)
uint64_t main_f_12c8f70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12c8f80  (orig 0x12c8f80, tailcall)
void main_f_12c8f80() { main::sub_12c8fc0(); }

// sub_12c8f90  (orig 0x12c8f90, tailcall)
void main_f_12c8f90() { main::sub_12c8fc0(); }

// sub_12c8fa0  (orig 0x12c8fa0, tailcall)
uint64_t main_f_12c8fa0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12c8fb0  (orig 0x12c8fb0, tailcall)
uint64_t main_f_12c8fb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12c93d0  (orig 0x12c93d0, tailcall)
uint64_t main_f_12c93d0(void* a0) {
    return main::sub_12c9280(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12c93e0  (orig 0x12c93e0, tailcall)
uint64_t main_f_12c93e0(void* a0) {
    return main::sub_12c9280(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12c93f0  (orig 0x12c93f0, tailcall)
void main_f_12c93f0() { main::sub_12c9280(); }

// sub_12c9400  (orig 0x12c9400, tailcall)
uint64_t main_f_12c9400(void* a0) {
    return main::sub_12c9280(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12c9410  (orig 0x12c9410, tailcall)
uint64_t main_f_12c9410(void* a0) {
    return main::sub_12c9280(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12c9790  (orig 0x12c9790, tailcall)
void main_f_12c9790() { main::sub_12c97c0(); }

// sub_12c97a0  (orig 0x12c97a0, tailcall)
void main_f_12c97a0() { main::sub_12c97c0(); }

// sub_12c97b0  (orig 0x12c97b0, tailcall)
void main_f_12c97b0() { main::sub_12c97c0(); }

// sub_12ca410  (orig 0x12ca410, tailcall)
void main_f_12ca410() { main::sub_12ca440(); }

// sub_12ca420  (orig 0x12ca420, tailcall)
void main_f_12ca420() { main::sub_12ca440(); }

// sub_12ca430  (orig 0x12ca430, tailcall)
void main_f_12ca430() { main::sub_12ca440(); }

// sub_12cab70  (orig 0x12cab70, tailcall)
uint64_t main_f_12cab70(void* a0) {
    return main::sub_12ca8d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12cab80  (orig 0x12cab80, tailcall)
uint64_t main_f_12cab80(void* a0) {
    return main::sub_12ca8d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12cab90  (orig 0x12cab90, tailcall)
void main_f_12cab90() { main::sub_12ca8d0(); }

// sub_12caba0  (orig 0x12caba0, tailcall)
uint64_t main_f_12caba0(void* a0) {
    return main::sub_12ca8d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12cabb0  (orig 0x12cabb0, tailcall)
uint64_t main_f_12cabb0(void* a0) {
    return main::sub_12ca8d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12d54c0  (orig 0x12d54c0, tailcall)
void main_f_12d54c0() { main::sub_12d57f0(); }

// sub_12d5650  (orig 0x12d5650, tailcall)
void main_f_12d5650() { main::sub_12d57f0(); }

// sub_12d5660  (orig 0x12d5660, tailcall)
void main_f_12d5660() { main::sub_12d57f0(); }

// sub_12d7f90  (orig 0x12d7f90, tailcall)
void main_f_12d7f90() { main::sub_12d7ea0(); }

// sub_12d7fa0  (orig 0x12d7fa0, tailcall)
void main_f_12d7fa0() { main::sub_12d8010(); }

// sub_12d7fb0  (orig 0x12d7fb0, tailcall)
uint64_t main_f_12d7fb0(void* a0) {
    return main::sub_12d7ea0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12d7fc0  (orig 0x12d7fc0, tailcall)
uint64_t main_f_12d7fc0(void* a0) {
    return main::sub_12d7ea0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12d7fd0  (orig 0x12d7fd0, tailcall)
void main_f_12d7fd0() { main::sub_12d8010(); }

// sub_12d7fe0  (orig 0x12d7fe0, tailcall)
void main_f_12d7fe0() { main::sub_12d8010(); }

// sub_12d7ff0  (orig 0x12d7ff0, tailcall)
uint64_t main_f_12d7ff0(void* a0) {
    return main::sub_12d7ea0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12d8000  (orig 0x12d8000, tailcall)
uint64_t main_f_12d8000(void* a0) {
    return main::sub_12d7ea0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12d87c0  (orig 0x12d87c0, tailcall)
void main_f_12d87c0() { main::sub_e7c4c0(); }

// sub_12d87d0  (orig 0x12d87d0, tailcall)
void main_f_12d87d0() { main::sub_12d8840(); }

// sub_12d87e0  (orig 0x12d87e0, tailcall)
uint64_t main_f_12d87e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12d87f0  (orig 0x12d87f0, tailcall)
uint64_t main_f_12d87f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12d8800  (orig 0x12d8800, tailcall)
void main_f_12d8800() { main::sub_12d8840(); }

// sub_12d8810  (orig 0x12d8810, tailcall)
void main_f_12d8810() { main::sub_12d8840(); }

// sub_12d8820  (orig 0x12d8820, tailcall)
uint64_t main_f_12d8820(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12d8830  (orig 0x12d8830, tailcall)
uint64_t main_f_12d8830(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12db3f0  (orig 0x12db3f0, tailcall)
void main_f_12db3f0() { main::sub_12db5e0(); }

// sub_12db4e0  (orig 0x12db4e0, tailcall)
void main_f_12db4e0() { main::sub_12db5e0(); }

// sub_12db4f0  (orig 0x12db4f0, tailcall)
void main_f_12db4f0() { main::sub_12db5e0(); }

// sub_12dcaf0  (orig 0x12dcaf0, tailcall)
void main_f_12dcaf0() { main::sub_12dcca0(); }

// sub_12dcbc0  (orig 0x12dcbc0, tailcall)
void main_f_12dcbc0() { main::sub_12dcca0(); }

// sub_12dcbd0  (orig 0x12dcbd0, tailcall)
void main_f_12dcbd0() { main::sub_12dcca0(); }

// sub_12de220  (orig 0x12de220, tailcall)
void main_f_12de220() { main::sub_e7c4c0(); }

// sub_12de230  (orig 0x12de230, tailcall)
void main_f_12de230() { main::sub_12de2a0(); }

// sub_12de240  (orig 0x12de240, tailcall)
uint64_t main_f_12de240(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12de250  (orig 0x12de250, tailcall)
uint64_t main_f_12de250(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12de260  (orig 0x12de260, tailcall)
void main_f_12de260() { main::sub_12de2a0(); }

// sub_12de270  (orig 0x12de270, tailcall)
void main_f_12de270() { main::sub_12de2a0(); }

// sub_12de280  (orig 0x12de280, tailcall)
uint64_t main_f_12de280(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12de290  (orig 0x12de290, tailcall)
uint64_t main_f_12de290(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12df420  (orig 0x12df420, tailcall)
void main_f_12df420() { main::sub_e7c4c0(); }

// sub_12df430  (orig 0x12df430, tailcall)
void main_f_12df430() { main::sub_12df4a0(); }

// sub_12df440  (orig 0x12df440, tailcall)
uint64_t main_f_12df440(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12df450  (orig 0x12df450, tailcall)
uint64_t main_f_12df450(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12df460  (orig 0x12df460, tailcall)
void main_f_12df460() { main::sub_12df4a0(); }

// sub_12df470  (orig 0x12df470, tailcall)
void main_f_12df470() { main::sub_12df4a0(); }

// sub_12df480  (orig 0x12df480, tailcall)
uint64_t main_f_12df480(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12df490  (orig 0x12df490, tailcall)
uint64_t main_f_12df490(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12e05f0  (orig 0x12e05f0, tailcall)
void main_f_12e05f0() { main::sub_e7c4c0(); }

// sub_12e0600  (orig 0x12e0600, tailcall)
void main_f_12e0600() { main::sub_12e0670(); }

// sub_12e0610  (orig 0x12e0610, tailcall)
uint64_t main_f_12e0610(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12e0620  (orig 0x12e0620, tailcall)
uint64_t main_f_12e0620(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12e0630  (orig 0x12e0630, tailcall)
void main_f_12e0630() { main::sub_12e0670(); }

// sub_12e0640  (orig 0x12e0640, tailcall)
void main_f_12e0640() { main::sub_12e0670(); }

// sub_12e0650  (orig 0x12e0650, tailcall)
uint64_t main_f_12e0650(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12e0660  (orig 0x12e0660, tailcall)
uint64_t main_f_12e0660(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12e3190  (orig 0x12e3190, tailcall)
void main_f_12e3190() { main::sub_e7c4c0(); }

// sub_12e31a0  (orig 0x12e31a0, tailcall)
void main_f_12e31a0() { main::sub_12e3210(); }

// sub_12e31b0  (orig 0x12e31b0, tailcall)
uint64_t main_f_12e31b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12e31c0  (orig 0x12e31c0, tailcall)
uint64_t main_f_12e31c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12e31d0  (orig 0x12e31d0, tailcall)
void main_f_12e31d0() { main::sub_12e3210(); }

// sub_12e31e0  (orig 0x12e31e0, tailcall)
void main_f_12e31e0() { main::sub_12e3210(); }

// sub_12e31f0  (orig 0x12e31f0, tailcall)
uint64_t main_f_12e31f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12e3200  (orig 0x12e3200, tailcall)
uint64_t main_f_12e3200(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12e4780  (orig 0x12e4780, tailcall)
void main_f_12e4780() { main::sub_12e45f0(); }

// sub_12e4790  (orig 0x12e4790, tailcall)
void main_f_12e4790() { main::sub_12e4800(); }

// sub_12e47a0  (orig 0x12e47a0, tailcall)
uint64_t main_f_12e47a0(void* a0) {
    return main::sub_12e45f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12e47b0  (orig 0x12e47b0, tailcall)
uint64_t main_f_12e47b0(void* a0) {
    return main::sub_12e45f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12e47c0  (orig 0x12e47c0, tailcall)
void main_f_12e47c0() { main::sub_12e4800(); }

// sub_12e47d0  (orig 0x12e47d0, tailcall)
void main_f_12e47d0() { main::sub_12e4800(); }

// sub_12e47e0  (orig 0x12e47e0, tailcall)
uint64_t main_f_12e47e0(void* a0) {
    return main::sub_12e45f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12e47f0  (orig 0x12e47f0, tailcall)
uint64_t main_f_12e47f0(void* a0) {
    return main::sub_12e45f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12e8540  (orig 0x12e8540, tailcall)
void main_f_12e8540() { main::sub_e7c4c0(); }

// sub_12e8550  (orig 0x12e8550, tailcall)
void main_f_12e8550() { main::sub_12e8820(); }

// sub_12e8560  (orig 0x12e8560, tailcall)
uint64_t main_f_12e8560(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12e8570  (orig 0x12e8570, tailcall)
uint64_t main_f_12e8570(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12e8580  (orig 0x12e8580, tailcall)
void main_f_12e8580() { main::sub_12e8820(); }

// sub_12e8590  (orig 0x12e8590, tailcall)
void main_f_12e8590() { main::sub_12e8820(); }

// sub_12e85a0  (orig 0x12e85a0, tailcall)
uint64_t main_f_12e85a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12e85b0  (orig 0x12e85b0, tailcall)
uint64_t main_f_12e85b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12eac10  (orig 0x12eac10, tailcall)
void main_f_12eac10() { main::sub_12eab20(); }

// sub_12eac20  (orig 0x12eac20, tailcall)
void main_f_12eac20() { main::sub_12eac90(); }

// sub_12eac30  (orig 0x12eac30, tailcall)
uint64_t main_f_12eac30(void* a0) {
    return main::sub_12eab20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12eac40  (orig 0x12eac40, tailcall)
uint64_t main_f_12eac40(void* a0) {
    return main::sub_12eab20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12eac50  (orig 0x12eac50, tailcall)
void main_f_12eac50() { main::sub_12eac90(); }

// sub_12eac60  (orig 0x12eac60, tailcall)
void main_f_12eac60() { main::sub_12eac90(); }

// sub_12eac70  (orig 0x12eac70, tailcall)
uint64_t main_f_12eac70(void* a0) {
    return main::sub_12eab20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12eac80  (orig 0x12eac80, tailcall)
uint64_t main_f_12eac80(void* a0) {
    return main::sub_12eab20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12ebbb0  (orig 0x12ebbb0, tailcall)
void main_f_12ebbb0() { main::sub_e7c4c0(); }

// sub_12ebbc0  (orig 0x12ebbc0, tailcall)
void main_f_12ebbc0() { main::sub_12ebc30(); }

// sub_12ebbd0  (orig 0x12ebbd0, tailcall)
uint64_t main_f_12ebbd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12ebbe0  (orig 0x12ebbe0, tailcall)
uint64_t main_f_12ebbe0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12ebbf0  (orig 0x12ebbf0, tailcall)
void main_f_12ebbf0() { main::sub_12ebc30(); }

// sub_12ebc00  (orig 0x12ebc00, tailcall)
void main_f_12ebc00() { main::sub_12ebc30(); }

// sub_12ebc10  (orig 0x12ebc10, tailcall)
uint64_t main_f_12ebc10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12ebc20  (orig 0x12ebc20, tailcall)
uint64_t main_f_12ebc20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12ec160  (orig 0x12ec160, tailcall)
void main_f_12ec160() { main::sub_e7c4c0(); }

// sub_12ec170  (orig 0x12ec170, tailcall)
void main_f_12ec170() { main::sub_12ec1e0(); }

// sub_12ec180  (orig 0x12ec180, tailcall)
uint64_t main_f_12ec180(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12ec190  (orig 0x12ec190, tailcall)
uint64_t main_f_12ec190(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12ec1a0  (orig 0x12ec1a0, tailcall)
void main_f_12ec1a0() { main::sub_12ec1e0(); }

// sub_12ec1b0  (orig 0x12ec1b0, tailcall)
void main_f_12ec1b0() { main::sub_12ec1e0(); }

// sub_12ec1c0  (orig 0x12ec1c0, tailcall)
uint64_t main_f_12ec1c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12ec1d0  (orig 0x12ec1d0, tailcall)
uint64_t main_f_12ec1d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12ecf50  (orig 0x12ecf50, tailcall)
void main_f_12ecf50() { main::sub_e7c4c0(); }

// sub_12ecf60  (orig 0x12ecf60, tailcall)
void main_f_12ecf60() { main::sub_12ecfd0(); }

// sub_12ecf70  (orig 0x12ecf70, tailcall)
uint64_t main_f_12ecf70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12ecf80  (orig 0x12ecf80, tailcall)
uint64_t main_f_12ecf80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12ecf90  (orig 0x12ecf90, tailcall)
void main_f_12ecf90() { main::sub_12ecfd0(); }

// sub_12ecfa0  (orig 0x12ecfa0, tailcall)
void main_f_12ecfa0() { main::sub_12ecfd0(); }

// sub_12ecfb0  (orig 0x12ecfb0, tailcall)
uint64_t main_f_12ecfb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12ecfc0  (orig 0x12ecfc0, tailcall)
uint64_t main_f_12ecfc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12ee600  (orig 0x12ee600, tailcall)
void main_f_12ee600() { main::sub_12ee870(); }

// sub_12ee730  (orig 0x12ee730, tailcall)
void main_f_12ee730() { main::sub_12ee870(); }

// sub_12ee740  (orig 0x12ee740, tailcall)
void main_f_12ee740() { main::sub_12ee870(); }

// sub_12ef5d0  (orig 0x12ef5d0, tailcall)
uint64_t main_f_12ef5d0(void* a0) {
    return main::sub_15032c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 104))));
}

// sub_12ef5e0  (orig 0x12ef5e0, tailcall)
uint64_t main_f_12ef5e0(void* a0) {
    return main::sub_1505a30(((uintptr_t)(*(uint64_t*)((char*)(a0) + 104))));
}

// sub_12ef5f0  (orig 0x12ef5f0, tailcall)
uint64_t main_f_12ef5f0(void* a0) {
    return main::sub_1505cf0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 104))));
}

// sub_12ef770  (orig 0x12ef770, tailcall)
void main_f_12ef770() { main::sub_12cdff0(); }

// sub_12ef780  (orig 0x12ef780, tailcall)
void main_f_12ef780() { main::sub_12cdff0(); }

// sub_12ef790  (orig 0x12ef790, tailcall)
void main_f_12ef790() { main::sub_12cdff0(); }

// sub_12f4870  (orig 0x12f4870, tailcall)
uint64_t main_f_12f4870(void* a0) {
    return main::EffCenter01_4(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12f5260  (orig 0x12f5260, tailcall)
void main_f_12f5260() { main::sub_12f4f80(); }

// sub_12f52e0  (orig 0x12f52e0, tailcall)
uint64_t main_f_12f52e0(void* a0) {
    return main::sub_12f4f80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12f52f0  (orig 0x12f52f0, tailcall)
uint64_t main_f_12f52f0(void* a0) {
    return main::sub_12f4f80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12f53e0  (orig 0x12f53e0, tailcall)
uint64_t main_f_12f53e0(void* a0) {
    return main::sub_12f4f80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12f53f0  (orig 0x12f53f0, tailcall)
uint64_t main_f_12f53f0(void* a0) {
    return main::sub_12f4f80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12f59d0  (orig 0x12f59d0, tailcall)
uint64_t main_f_12f59d0(void* a0) {
    return main::sub_12f57c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12f59e0  (orig 0x12f59e0, tailcall)
uint64_t main_f_12f59e0(void* a0) {
    return main::sub_12f57c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12f8310  (orig 0x12f8310, tailcall)
uint64_t main_f_12f8310(void* a0) {
    return main::sub_12f7cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12f8320  (orig 0x12f8320, tailcall)
void main_f_12f8320() { main::sub_12f7cf0(); }

// sub_12f8330  (orig 0x12f8330, tailcall)
uint64_t main_f_12f8330(void* a0) {
    return main::sub_12f7cf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12f8340  (orig 0x12f8340, tailcall)
uint64_t main_f_12f8340(void* a0) {
    return main::g_effect(((uintptr_t)((char*)(a0) + 672)));
}

// sub_12f8350  (orig 0x12f8350, tailcall)
uint64_t main_f_12f8350(void* a0) {
    return main::sub_12f9730(((uintptr_t)((char*)(a0) + 672)));
}

// sub_12f8360  (orig 0x12f8360, tailcall)
uint64_t main_f_12f8360(void* a0) {
    return main::projection_effect_col(((uintptr_t)((char*)(a0) + 672)));
}

// sub_12f8370  (orig 0x12f8370, tailcall)
uint64_t main_f_12f8370(void* a0) {
    return main::sub_12f95a0(((uintptr_t)((char*)(a0) + 672)));
}

// sub_12f8a30  (orig 0x12f8a30, tailcall)
void main_f_12f8a30() { main::sub_12f8900(); }

// sub_12f8b30  (orig 0x12f8b30, tailcall)
uint64_t main_f_12f8b30(void* a0) {
    return main::sub_12f8900(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12f8b40  (orig 0x12f8b40, tailcall)
uint64_t main_f_12f8b40(void* a0) {
    return main::sub_12f8900(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12f8b50  (orig 0x12f8b50, tailcall)
uint64_t main_f_12f8b50(void* a0) {
    return main::sub_12f8a40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_12f8b60  (orig 0x12f8b60, tailcall)
uint64_t main_f_12f8b60(void* a0) {
    return main::sub_12f8a40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12f8b70  (orig 0x12f8b70, tailcall)
uint64_t main_f_12f8b70(void* a0) {
    return main::sub_12f8900(((uintptr_t)((char*)(a0) - 80)));
}

// sub_12f8b80  (orig 0x12f8b80, tailcall)
uint64_t main_f_12f8b80(void* a0) {
    return main::sub_12f8900(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1303ee0  (orig 0x1303ee0, tailcall)
void main_f_1303ee0() { main::sub_1303d40(); }

// sub_1303fa0  (orig 0x1303fa0, tailcall)
uint64_t main_f_1303fa0(void* a0) {
    return main::sub_1303d40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1303fb0  (orig 0x1303fb0, tailcall)
uint64_t main_f_1303fb0(void* a0) {
    return main::sub_1303d40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1304120  (orig 0x1304120, tailcall)
uint64_t main_f_1304120(void* a0) {
    return main::sub_1303d40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1304130  (orig 0x1304130, tailcall)
uint64_t main_f_1304130(void* a0) {
    return main::sub_1303d40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1304140  (orig 0x1304140, tailcall)
void main_f_1304140() { main::sub_e7c250(); }

// sub_1304150  (orig 0x1304150, tailcall)
void main_f_1304150() { main::sub_13041c0(); }

// sub_1304160  (orig 0x1304160, tailcall)
uint64_t main_f_1304160(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1304170  (orig 0x1304170, tailcall)
uint64_t main_f_1304170(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1304180  (orig 0x1304180, tailcall)
void main_f_1304180() { main::sub_13041c0(); }

// sub_1304190  (orig 0x1304190, tailcall)
void main_f_1304190() { main::sub_13041c0(); }

// sub_13041a0  (orig 0x13041a0, tailcall)
uint64_t main_f_13041a0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13041b0  (orig 0x13041b0, tailcall)
uint64_t main_f_13041b0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1304f70  (orig 0x1304f70, tailcall)
void main_f_1304f70() { main::sub_e7c4c0(); }

// sub_1304f80  (orig 0x1304f80, tailcall)
void main_f_1304f80() { main::sub_1304ff0(); }

// sub_1304f90  (orig 0x1304f90, tailcall)
uint64_t main_f_1304f90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1304fa0  (orig 0x1304fa0, tailcall)
uint64_t main_f_1304fa0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1304fb0  (orig 0x1304fb0, tailcall)
void main_f_1304fb0() { main::sub_1304ff0(); }

// sub_1304fc0  (orig 0x1304fc0, tailcall)
void main_f_1304fc0() { main::sub_1304ff0(); }

// sub_1304fd0  (orig 0x1304fd0, tailcall)
uint64_t main_f_1304fd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1304fe0  (orig 0x1304fe0, tailcall)
uint64_t main_f_1304fe0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13054f0  (orig 0x13054f0, tailcall)
void main_f_13054f0() { main::sub_e7feb0(); }

// sub_1305500  (orig 0x1305500, tailcall)
void main_f_1305500() { main::sub_1305570(); }

// sub_1305510  (orig 0x1305510, tailcall)
uint64_t main_f_1305510(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1305520  (orig 0x1305520, tailcall)
uint64_t main_f_1305520(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1305530  (orig 0x1305530, tailcall)
void main_f_1305530() { main::sub_1305570(); }

// sub_1305540  (orig 0x1305540, tailcall)
void main_f_1305540() { main::sub_1305570(); }

// sub_1305550  (orig 0x1305550, tailcall)
uint64_t main_f_1305550(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1305560  (orig 0x1305560, tailcall)
uint64_t main_f_1305560(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13057c0  (orig 0x13057c0, tailcall)
void main_f_13057c0() { main::sub_e7feb0(); }

// sub_13057d0  (orig 0x13057d0, tailcall)
void main_f_13057d0() { main::sub_1305840(); }

// sub_13057e0  (orig 0x13057e0, tailcall)
uint64_t main_f_13057e0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13057f0  (orig 0x13057f0, tailcall)
uint64_t main_f_13057f0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1305800  (orig 0x1305800, tailcall)
void main_f_1305800() { main::sub_1305840(); }

// sub_1305810  (orig 0x1305810, tailcall)
void main_f_1305810() { main::sub_1305840(); }

// sub_1305820  (orig 0x1305820, tailcall)
uint64_t main_f_1305820(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1305830  (orig 0x1305830, tailcall)
uint64_t main_f_1305830(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1306ce0  (orig 0x1306ce0, tailcall)
void main_f_1306ce0() { main::sub_1306cf0(); }

// sub_1307d80  (orig 0x1307d80, tailcall)
uint64_t main_f_1307d80(void* a0) {
    return main::sub_1307bb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1307d90  (orig 0x1307d90, tailcall)
uint64_t main_f_1307d90(void* a0) {
    return main::sub_1307bb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1307da0  (orig 0x1307da0, tailcall)
void main_f_1307da0() { main::sub_1307bb0(); }

// sub_1307db0  (orig 0x1307db0, tailcall)
uint64_t main_f_1307db0(void* a0) {
    return main::sub_1307bb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1307dc0  (orig 0x1307dc0, tailcall)
uint64_t main_f_1307dc0(void* a0) {
    return main::sub_1307bb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13084d0  (orig 0x13084d0, tailcall)
uint64_t main_f_13084d0(void* a0) {
    return main::sub_13083e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13084e0  (orig 0x13084e0, tailcall)
uint64_t main_f_13084e0(void* a0) {
    return main::sub_13083e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1308b20  (orig 0x1308b20, tailcall)
uint64_t main_f_1308b20(void* a0) {
    return main::sub_13089e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1308b30  (orig 0x1308b30, tailcall)
void main_f_1308b30() { main::sub_13089e0(); }

// sub_1308b40  (orig 0x1308b40, tailcall)
uint64_t main_f_1308b40(void* a0) {
    return main::sub_13089e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_130ac20  (orig 0x130ac20, tailcall)
void main_f_130ac20() { main::sub_67c4e0(); }

// sub_130f620  (orig 0x130f620, tailcall)
void main_f_130f620() { main::sub_130efc0(); }

// sub_13109c0  (orig 0x13109c0, tailcall)
void main_f_13109c0() { main::sub_1310880(); }

// sub_13109d0  (orig 0x13109d0, tailcall)
uint64_t main_f_13109d0(void* a0) {
    return main::sub_1310880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13109e0  (orig 0x13109e0, tailcall)
uint64_t main_f_13109e0(void* a0) {
    return main::sub_1310880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1311c30  (orig 0x1311c30, tailcall)
uint64_t main_f_1311c30(void* a0) {
    return main::sub_13119f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1311c40  (orig 0x1311c40, tailcall)
void main_f_1311c40() { main::sub_13119f0(); }

// sub_1311c50  (orig 0x1311c50, tailcall)
uint64_t main_f_1311c50(void* a0) {
    return main::sub_13119f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_131aa10  (orig 0x131aa10, tailcall)
void main_f_131aa10() { main::sub_131a850(); }

// sub_131aad0  (orig 0x131aad0, tailcall)
uint64_t main_f_131aad0(void* a0) {
    return main::sub_131a850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_131aae0  (orig 0x131aae0, tailcall)
uint64_t main_f_131aae0(void* a0) {
    return main::sub_131a850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_131ac50  (orig 0x131ac50, tailcall)
uint64_t main_f_131ac50(void* a0) {
    return main::sub_131a850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_131ac60  (orig 0x131ac60, tailcall)
uint64_t main_f_131ac60(void* a0) {
    return main::sub_131a850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_131ad50  (orig 0x131ad50, tailcall)
void main_f_131ad50() { main::sub_131b690(); }

// sub_131ae40  (orig 0x131ae40, tailcall)
void main_f_131ae40() { main::sub_131b690(); }

// sub_131ae50  (orig 0x131ae50, tailcall)
void main_f_131ae50() { main::sub_131b690(); }

// sub_131d430  (orig 0x131d430, tailcall)
void main_f_131d430() { main::button_list_item__02d(); }

// sub_131f320  (orig 0x131f320, tailcall)
void main_f_131f320() { main::sub_131f690(); }

// sub_131f4d0  (orig 0x131f4d0, tailcall)
void main_f_131f4d0() { main::sub_131f690(); }

// sub_131f4e0  (orig 0x131f4e0, tailcall)
void main_f_131f4e0() { main::sub_131f690(); }

// sub_1320a60  (orig 0x1320a60, tailcall)
void main_f_1320a60() { main::sub_e7c4c0(); }

// sub_1320a70  (orig 0x1320a70, tailcall)
void main_f_1320a70() { main::sub_1320ae0(); }

// sub_1320a80  (orig 0x1320a80, tailcall)
uint64_t main_f_1320a80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1320a90  (orig 0x1320a90, tailcall)
uint64_t main_f_1320a90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1320aa0  (orig 0x1320aa0, tailcall)
void main_f_1320aa0() { main::sub_1320ae0(); }

// sub_1320ab0  (orig 0x1320ab0, tailcall)
void main_f_1320ab0() { main::sub_1320ae0(); }

// sub_1320ac0  (orig 0x1320ac0, tailcall)
uint64_t main_f_1320ac0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1320ad0  (orig 0x1320ad0, tailcall)
uint64_t main_f_1320ad0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1320f50  (orig 0x1320f50, tailcall)
void main_f_1320f50() { main::sub_e7c4c0(); }

// sub_1320f60  (orig 0x1320f60, tailcall)
void main_f_1320f60() { main::sub_1320fd0(); }

// sub_1320f70  (orig 0x1320f70, tailcall)
uint64_t main_f_1320f70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1320f80  (orig 0x1320f80, tailcall)
uint64_t main_f_1320f80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1320f90  (orig 0x1320f90, tailcall)
void main_f_1320f90() { main::sub_1320fd0(); }

// sub_1320fa0  (orig 0x1320fa0, tailcall)
void main_f_1320fa0() { main::sub_1320fd0(); }

// sub_1320fb0  (orig 0x1320fb0, tailcall)
uint64_t main_f_1320fb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1320fc0  (orig 0x1320fc0, tailcall)
uint64_t main_f_1320fc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1321500  (orig 0x1321500, tailcall)
void main_f_1321500() { main::sub_e7feb0(); }

// sub_1321510  (orig 0x1321510, tailcall)
void main_f_1321510() { main::sub_1321580(); }

// sub_1321520  (orig 0x1321520, tailcall)
uint64_t main_f_1321520(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1321530  (orig 0x1321530, tailcall)
uint64_t main_f_1321530(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1321540  (orig 0x1321540, tailcall)
void main_f_1321540() { main::sub_1321580(); }

// sub_1321550  (orig 0x1321550, tailcall)
void main_f_1321550() { main::sub_1321580(); }

// sub_1321560  (orig 0x1321560, tailcall)
uint64_t main_f_1321560(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1321570  (orig 0x1321570, tailcall)
uint64_t main_f_1321570(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1322e50  (orig 0x1322e50, tailcall)
void main_f_1322e50() { main::sub_1323280(); }

// sub_1323060  (orig 0x1323060, tailcall)
void main_f_1323060() { main::sub_1323280(); }

// sub_1323070  (orig 0x1323070, tailcall)
void main_f_1323070() { main::sub_1323280(); }

// sub_1323ef0  (orig 0x1323ef0, tailcall)
void main_f_1323ef0() { main::sub_e7c4c0(); }

// sub_1323f00  (orig 0x1323f00, tailcall)
void main_f_1323f00() { main::sub_1323f70(); }

// sub_1323f10  (orig 0x1323f10, tailcall)
uint64_t main_f_1323f10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1323f20  (orig 0x1323f20, tailcall)
uint64_t main_f_1323f20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1323f30  (orig 0x1323f30, tailcall)
void main_f_1323f30() { main::sub_1323f70(); }

// sub_1323f40  (orig 0x1323f40, tailcall)
void main_f_1323f40() { main::sub_1323f70(); }

// sub_1323f50  (orig 0x1323f50, tailcall)
uint64_t main_f_1323f50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1323f60  (orig 0x1323f60, tailcall)
uint64_t main_f_1323f60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13249d0  (orig 0x13249d0, tailcall)
void main_f_13249d0() { main::sub_1324b80(); }

// sub_1324aa0  (orig 0x1324aa0, tailcall)
void main_f_1324aa0() { main::sub_1324b80(); }

// sub_1324ab0  (orig 0x1324ab0, tailcall)
void main_f_1324ab0() { main::sub_1324b80(); }

// sub_13250f0  (orig 0x13250f0, tailcall)
uint64_t main_f_13250f0(void* a0) {
    return main::sub_1324ee0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1325100  (orig 0x1325100, tailcall)
uint64_t main_f_1325100(void* a0) {
    return main::sub_1324ee0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1325a80  (orig 0x1325a80, tailcall)
void main_f_1325a80() { main::sub_1325d30(); }

// sub_1325bd0  (orig 0x1325bd0, tailcall)
void main_f_1325bd0() { main::sub_1325d30(); }

// sub_1325be0  (orig 0x1325be0, tailcall)
void main_f_1325be0() { main::sub_1325d30(); }

// sub_13272e0  (orig 0x13272e0, tailcall)
void main_f_13272e0() { main::sub_13270c0(); }

// sub_13273a0  (orig 0x13273a0, tailcall)
uint64_t main_f_13273a0(void* a0) {
    return main::sub_13270c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13273b0  (orig 0x13273b0, tailcall)
uint64_t main_f_13273b0(void* a0) {
    return main::sub_13270c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1327520  (orig 0x1327520, tailcall)
uint64_t main_f_1327520(void* a0) {
    return main::sub_13270c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1327530  (orig 0x1327530, tailcall)
uint64_t main_f_1327530(void* a0) {
    return main::sub_13270c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1329b00  (orig 0x1329b00, tailcall)
uint64_t main_f_1329b00(void* a0) {
    return main::sub_1329970(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1329b10  (orig 0x1329b10, tailcall)
uint64_t main_f_1329b10(void* a0) {
    return main::sub_1329970(((uintptr_t)((char*)(a0) - 80)));
}

// sub_132ad00  (orig 0x132ad00, tailcall)
void main_f_132ad00() { main::sub_132abe0(); }

// sub_132ad10  (orig 0x132ad10, tailcall)
void main_f_132ad10() { main::sub_132ad80(); }

// sub_132ad20  (orig 0x132ad20, tailcall)
uint64_t main_f_132ad20(void* a0) {
    return main::sub_132abe0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_132ad30  (orig 0x132ad30, tailcall)
uint64_t main_f_132ad30(void* a0) {
    return main::sub_132abe0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_132ad40  (orig 0x132ad40, tailcall)
void main_f_132ad40() { main::sub_132ad80(); }

// sub_132ad50  (orig 0x132ad50, tailcall)
void main_f_132ad50() { main::sub_132ad80(); }

// sub_132ad60  (orig 0x132ad60, tailcall)
uint64_t main_f_132ad60(void* a0) {
    return main::sub_132abe0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_132ad70  (orig 0x132ad70, tailcall)
uint64_t main_f_132ad70(void* a0) {
    return main::sub_132abe0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_132b840  (orig 0x132b840, tailcall)
void main_f_132b840() { main::sub_132ba40(); }

// sub_132b910  (orig 0x132b910, tailcall)
void main_f_132b910() { main::sub_132ba40(); }

// sub_132b920  (orig 0x132b920, tailcall)
void main_f_132b920() { main::sub_132ba40(); }

// sub_132c040  (orig 0x132c040, tailcall)
uint64_t main_f_132c040(void* a0) {
    return main::sub_132be50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_132c050  (orig 0x132c050, tailcall)
uint64_t main_f_132c050(void* a0) {
    return main::sub_132be50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_132c510  (orig 0x132c510, tailcall)
void main_f_132c510() { main::sub_1327b20(); }

// sub_132c660  (orig 0x132c660, tailcall)
void main_f_132c660() { main::sub_1327b20(); }

// sub_132c670  (orig 0x132c670, tailcall)
void main_f_132c670() { main::sub_1327b20(); }

// sub_132e1c0  (orig 0x132e1c0, tailcall)
void main_f_132e1c0() { main::sub_132e0a0(); }

// sub_132e1d0  (orig 0x132e1d0, tailcall)
void main_f_132e1d0() { main::sub_132e240(); }

// sub_132e1e0  (orig 0x132e1e0, tailcall)
uint64_t main_f_132e1e0(void* a0) {
    return main::sub_132e0a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_132e1f0  (orig 0x132e1f0, tailcall)
uint64_t main_f_132e1f0(void* a0) {
    return main::sub_132e0a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_132e200  (orig 0x132e200, tailcall)
void main_f_132e200() { main::sub_132e240(); }

// sub_132e210  (orig 0x132e210, tailcall)
void main_f_132e210() { main::sub_132e240(); }

// sub_132e220  (orig 0x132e220, tailcall)
uint64_t main_f_132e220(void* a0) {
    return main::sub_132e0a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_132e230  (orig 0x132e230, tailcall)
uint64_t main_f_132e230(void* a0) {
    return main::sub_132e0a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_132fee0  (orig 0x132fee0, tailcall)
void main_f_132fee0() { main::sub_132fda0(); }

// sub_132fef0  (orig 0x132fef0, tailcall)
void main_f_132fef0() { main::sub_132ff60(); }

// sub_132ff00  (orig 0x132ff00, tailcall)
uint64_t main_f_132ff00(void* a0) {
    return main::sub_132fda0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_132ff10  (orig 0x132ff10, tailcall)
uint64_t main_f_132ff10(void* a0) {
    return main::sub_132fda0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_132ff20  (orig 0x132ff20, tailcall)
void main_f_132ff20() { main::sub_132ff60(); }

// sub_132ff30  (orig 0x132ff30, tailcall)
void main_f_132ff30() { main::sub_132ff60(); }

// sub_132ff40  (orig 0x132ff40, tailcall)
uint64_t main_f_132ff40(void* a0) {
    return main::sub_132fda0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_132ff50  (orig 0x132ff50, tailcall)
uint64_t main_f_132ff50(void* a0) {
    return main::sub_132fda0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13322e0  (orig 0x13322e0, tailcall)
void main_f_13322e0() { main::sub_1331fb0(); }

// sub_13323e0  (orig 0x13323e0, tailcall)
uint64_t main_f_13323e0(void* a0) {
    return main::sub_1331fb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13323f0  (orig 0x13323f0, tailcall)
uint64_t main_f_13323f0(void* a0) {
    return main::sub_1331fb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1332400  (orig 0x1332400, tailcall)
uint64_t main_f_1332400(void* a0) {
    return main::sub_13322f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1332410  (orig 0x1332410, tailcall)
uint64_t main_f_1332410(void* a0) {
    return main::sub_13322f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1332420  (orig 0x1332420, tailcall)
uint64_t main_f_1332420(void* a0) {
    return main::sub_1331fb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1332430  (orig 0x1332430, tailcall)
uint64_t main_f_1332430(void* a0) {
    return main::sub_1331fb0(((uintptr_t)((char*)(a0) - 80)));
}

