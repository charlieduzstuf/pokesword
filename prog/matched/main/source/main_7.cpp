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

namespace main { void sub_1104f50(); }
namespace main { void sub_110ccc0(); }
namespace main { void sub_1115a30(); }
namespace main { void sub_1117560(); }
namespace main { void sub_1118a40(); }
namespace main { void sub_5d1550(); }
namespace main { void sub_111b010(); }
namespace main { void sub_1120d10(); }
namespace main { void sub_112d870(); }
namespace main { void Stop_Camp_BallAura_MirrorBall_lp(); }
namespace main { void sub_112ee50(); }
namespace main { void sub_1132c40(); }
namespace main { void sub_111b250(); }
namespace main { void sub_111b410(); }
namespace main { void sub_113c4c0(); }
namespace main { void sub_113d0f0(); }
namespace main { void sub_113d1e0(); }
namespace main { void sub_1145080(); }
namespace main { void sub_1146270(); }
namespace main { void sub_1148af0(); }
namespace main { void sub_1158d80(); }
namespace main { void sub_115e730(); }
namespace main { void sub_115e980(); }
namespace main { void sub_1168fa0(); }
namespace main { void sub_1168150(); }
namespace main { void sub_1173330(); }
namespace main { void sub_113d9c0(); }
namespace main { void sub_ce0(); }
namespace main { void sub_e7c4c0(); }
namespace main { void sub_117db70(); }
namespace main { void sub_11804d0(); }
namespace main { void sub_117dca0(); }
namespace main { void sub_11811a0(); }
namespace main { void sub_1183160(); }
namespace main { void sub_118a330(); }
namespace main { void sub_11969d0(); }
namespace main { void sub_1197690(); }
namespace main { void sub_1197830(); }
namespace main { void sub_1198110(); }
namespace main { void sub_119e200(); }
extern void main_f_1130b50();
namespace main { void sub_11af850(); }
namespace main { void sub_11b3130(); }
namespace main { void sub_11b6790(); }
namespace main { void player_2(); }
namespace main { void sub_11bc7c0(); }
namespace main { void sub_11bd380(); }
namespace main { void sub_11bf5a0(); }
namespace main { void sub_11c0350(); }
namespace main { void sub_11c6800(); }
namespace main { void sub_11c6ae0(); }
namespace main { void sub_11cb880(); }
namespace main { void sub_11cd2f0(); }
namespace main { void Stop_Camp_Cooking_Fire_lp(); }
namespace main { void sub_11cdcf0(); }
namespace main { void sub_11d64c0(); }
namespace main { void sub_11d7820(); }
namespace main { void sub_11d9880(); }
namespace main { void sub_11dbf40(); }
namespace main { void sub_11deb20(); }
namespace main { void sub_11e6110(); }
namespace main { void Stop_Camp_Cooking_PotBoiling_lp(); }
namespace main { void sub_11e7b10(); }
namespace main { void sub_11ec880(); }
namespace main { void sub_11ee760(); }
namespace main { void sub_11f1d00(); }
namespace main { void sub_11f50c0(); }
namespace main { void sub_11f79a0(); }
namespace main { void sub_11f8690(); }
namespace main { void sub_11fb0b0(); }
namespace main { void sub_11fd2e0(); }
namespace main { void sub_1200540(); }
namespace main { void sub_120aeb0(); }
namespace main { void sub_120b5e0(); }
namespace main { void sub_120b8f0(); }
namespace main { void sub_120f670(); }
namespace main { void sub_1217300(); }
namespace main { void sub_121e100(); }
namespace main { void sub_121e460(); }
namespace main { void sub_122a0b0(); }
namespace main { void sub_122a230(); }
namespace main { void sub_122f450(); }
namespace main { void sub_1231510(); }
namespace main { void sub_1234bd0(); }
namespace main { void sub_12163d0(); }
namespace main { void sub_1216430(); }
namespace main { void sub_1244f60(); }
namespace main { void sub_1246b20(); }
namespace main { void sub_1246f40(); }
namespace main { void sub_12470e0(); }
namespace main { void sub_1249000(); }
namespace main { void sub_1249960(); }
namespace main { void sub_124a100(); }
namespace main { void sub_124add0(); }
namespace main { void sub_124af10(); }
namespace main { void sub_124c3a0(); }
namespace main { void sub_1250d30(); }
namespace main { void sub_1250f00(); }
namespace main { void sub_1253eb0(); }
namespace main { void sub_1255270(); }
namespace main { void sub_1255960(); }
namespace main { void sub_12585c0(); }
namespace main { void sub_1259a60(); }
namespace main { void sub_125d360(); }
namespace main { void sub_125d790(); }
namespace main { void sub_125de00(); }
namespace main { void sub_eb81a0(); }
namespace main { void sub_125db50(); }
namespace main { void sub_e7feb0(); }
namespace main { void sub_1262bc0(); }
namespace main { void sub_1264430(); }
namespace main { void sub_1266490(); }
namespace main { void sub_12666d0(); }
namespace main { void sub_1268040(); }
namespace main { void sub_14ba4c0(); }
namespace main { void sub_126b950(); }
namespace main { void sub_126c7a0(); }
namespace main { void sub_126c9e0(); }
namespace main { void sub_126e670(); }
namespace main { void sub_1271740(); }
namespace main { void sub_1271900(); }
namespace main { void sub_1273570(); }
namespace main { void sub_1273700(); }
namespace main { void sub_1273cc0(); }
namespace main { void sub_12759f0(); }
namespace main { void sub_1276890(); }
namespace main { void sub_1277330(); }
namespace main { void sub_1277ff0(); }
namespace main { void sub_1278230(); }
namespace main { void sub_127a6e0(); }
namespace main { void sub_127b330(); }
namespace main { void sub_127bf00(); }
namespace main { void sub_127cdd0(); }
namespace main { void sub_127cf20(); }
namespace main { void sub_127d900(); }
namespace main { void sub_12928c0(); }
namespace main { void sub_126abd0(); }
namespace main { void sub_1295840(); }
namespace main { void sub_1296a90(); }
namespace main { void sub_1297810(); }
namespace main { void sub_12a0980(); }
namespace main { void sub_12a4420(); }
namespace main { void sub_12a0da0(); }
namespace main { void sub_12a53e0(); }
namespace main { void sub_12a9ed0(); }

// sub_10ff9c0  (orig 0x10ff9c0, ptr_add)
void* main_f_10ff9c0(void* a0) { return (char*)a0 + 24; }

// sub_10ffb10  (orig 0x10ffb10, ptr_add)
void* main_f_10ffb10(void* a0) { return (char*)a0 + 24; }

// sub_10ffcf0  (orig 0x10ffcf0, ptr_add)
void* main_f_10ffcf0(void* a0) { return (char*)a0 + 48; }

// sub_11009c0  (orig 0x11009c0, setter)
void main_f_11009c0(void* a0) { *(uint8_t*)((char*)(a0) + 120) = 0; }

// sub_1101490  (orig 0x1101490, ret_only)
void main_f_1101490() {}

// sub_11014a0  (orig 0x11014a0, copy2)
void main_f_11014a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11014b0  (orig 0x11014b0, copy2)
void main_f_11014b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11039a0  (orig 0x11039a0, getter)
uint32_t main_f_11039a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_11039b0  (orig 0x11039b0, setter)
void main_f_11039b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_11039c0  (orig 0x11039c0, mov_ret)
uint32_t main_f_11039c0() { return 1; }

// sub_1103c30  (orig 0x1103c30, setter)
void main_f_1103c30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1103c40  (orig 0x1103c40, getter)
uint64_t main_f_1103c40(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1103c50  (orig 0x1103c50, getter)
uint8_t main_f_1103c50(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_1103d00  (orig 0x1103d00, ret_only)
void main_f_1103d00() {}

// sub_1103d10  (orig 0x1103d10, ret_only)
void main_f_1103d10() {}

// sub_1103d20  (orig 0x1103d20, ret_only)
void main_f_1103d20() {}

// sub_1104800  (orig 0x1104800, ret_only)
void main_f_1104800() {}

// sub_1104810  (orig 0x1104810, copy2)
void main_f_1104810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1104820  (orig 0x1104820, copy2)
void main_f_1104820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11048b0  (orig 0x11048b0, ret_only)
void main_f_11048b0() {}

// sub_11048c0  (orig 0x11048c0, copy2)
void main_f_11048c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11048d0  (orig 0x11048d0, copy2)
void main_f_11048d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1104c80  (orig 0x1104c80, straight)
void main_f_1104c80(void* a0) {
    *(uint8_t*)((char*)(a0) + 625) = (uint8_t)(1);
}

// sub_1104c90  (orig 0x1104c90, getter)
uint8_t main_f_1104c90(void* a0) { return *(uint8_t*)((char*)(a0) + 625); }

// sub_1104d70  (orig 0x1104d70, setter)
void main_f_1104d70(void* a0) { *(uint8_t*)((char*)(a0) + 625) = 0; }

// autosave_00  (orig 0x1104f30, strlit-ret)
const char *main_f_1104f30() { static const char s[] = "bin/appli/autosave/bin/autosave_00.arc"; __asm__ volatile("" ::: "memory"); return s; }

// autosave_00_2  (orig 0x1104f40, strlit-ret)
const char *main_f_1104f40() { static const char s[] = "autosave_00.bflyt"; __asm__ volatile("" ::: "memory"); return s; }

// sub_11050e0  (orig 0x11050e0, tailcall)
void main_f_11050e0() { main::sub_1104f50(); }

// sub_11050f0  (orig 0x11050f0, mov_ret)
uint32_t main_f_11050f0() { return 3; }

// sub_1105100  (orig 0x1105100, mov_ret)
uint32_t main_f_1105100(uint32_t a0, uint32_t a1) { return a1; }

// sub_1105910  (orig 0x1105910, ret_only)
void main_f_1105910() {}

// sub_1105cf0  (orig 0x1105cf0, ret_only)
void main_f_1105cf0() {}

// sub_1105d70  (orig 0x1105d70, ret_only)
void main_f_1105d70() {}

// sub_1106200  (orig 0x1106200, straight)
void main_f_1106200(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 8);
}

// sub_1108730  (orig 0x1108730, getter)
uint64_t main_f_1108730(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_110ca80  (orig 0x110ca80, getter)
uint32_t main_f_110ca80(void* a0) { return *(uint32_t*)((char*)(a0) + 288); }

// sub_110ca90  (orig 0x110ca90, getter)
uint32_t main_f_110ca90(void* a0) { return *(uint32_t*)((char*)(a0) + 292); }

// sub_110caa0  (orig 0x110caa0, setter-chain)
void main_f_110caa0(void* a0, uint32_t a1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 292) = a1; *(uint32_t*)((char*)(a0) + 288) = a2; }

// sub_110ce50  (orig 0x110ce50, tailcall)
void main_f_110ce50() { main::sub_110ccc0(); }

// sub_110d7c0  (orig 0x110d7c0, ret_only)
void main_f_110d7c0() {}

// sub_110dbc0  (orig 0x110dbc0, copy2)
void main_f_110dbc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110dbd0  (orig 0x110dbd0, copy2)
void main_f_110dbd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110e330  (orig 0x110e330, ret_only)
void main_f_110e330() {}

// sub_110ea90  (orig 0x110ea90, copy2)
void main_f_110ea90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110eaa0  (orig 0x110eaa0, copy2)
void main_f_110eaa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110f200  (orig 0x110f200, ret_only)
void main_f_110f200() {}

// sub_110f490  (orig 0x110f490, copy2)
void main_f_110f490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110f4a0  (orig 0x110f4a0, copy2)
void main_f_110f4a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110fc00  (orig 0x110fc00, ret_only)
void main_f_110fc00() {}

// sub_11101d0  (orig 0x11101d0, copy2)
void main_f_11101d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11101e0  (orig 0x11101e0, copy2)
void main_f_11101e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1110230  (orig 0x1110230, ret_only)
void main_f_1110230() {}

// sub_1110ef0  (orig 0x1110ef0, copy2)
void main_f_1110ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1110f00  (orig 0x1110f00, copy2)
void main_f_1110f00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1110f50  (orig 0x1110f50, ret_only)
void main_f_1110f50() {}

// sub_11114e0  (orig 0x11114e0, copy2)
void main_f_11114e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11114f0  (orig 0x11114f0, copy2)
void main_f_11114f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1111c50  (orig 0x1111c50, ret_only)
void main_f_1111c50() {}

// sub_1111fb0  (orig 0x1111fb0, copy2)
void main_f_1111fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1111fc0  (orig 0x1111fc0, copy2)
void main_f_1111fc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1112720  (orig 0x1112720, ret_only)
void main_f_1112720() {}

// sub_11131a0  (orig 0x11131a0, copy2)
void main_f_11131a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11131b0  (orig 0x11131b0, copy2)
void main_f_11131b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1113910  (orig 0x1113910, ret_only)
void main_f_1113910() {}

// sub_1113c30  (orig 0x1113c30, copy2)
void main_f_1113c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1113c40  (orig 0x1113c40, copy2)
void main_f_1113c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11157b0  (orig 0x11157b0, getter)
uint32_t main_f_11157b0(void* a0) { return *(uint32_t*)((char*)(a0) + 108); }

// sub_1115ba0  (orig 0x1115ba0, tailcall)
void main_f_1115ba0() { main::sub_1115a30(); }

// sub_11169f0  (orig 0x11169f0, ret_only)
void main_f_11169f0() {}

// sub_1116a00  (orig 0x1116a00, ret_only)
void main_f_1116a00() {}

// sub_1116a10  (orig 0x1116a10, ret_only)
void main_f_1116a10() {}

// sub_1116b00  (orig 0x1116b00, ret_only)
void main_f_1116b00() {}

// sub_1116fc0  (orig 0x1116fc0, tailcall)
void main_f_1116fc0() { main::sub_1117560(); }

// sub_1117170  (orig 0x1117170, tailcall)
void main_f_1117170() { main::sub_1117560(); }

// sub_1117180  (orig 0x1117180, tailcall)
void main_f_1117180() { main::sub_1117560(); }

// sub_11186e0  (orig 0x11186e0, ret_only)
void main_f_11186e0() {}

// sub_11186f0  (orig 0x11186f0, copy2)
void main_f_11186f0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_1118700  (orig 0x1118700, copy2)
void main_f_1118700(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_1118b80  (orig 0x1118b80, tailcall)
void main_f_1118b80() { main::sub_1118a40(); }

// sub_111aa90  (orig 0x111aa90, ret_only)
void main_f_111aa90() {}

// sub_111ac10  (orig 0x111ac10, tailcall)
void main_f_111ac10() { main::sub_5d1550(); }

// sub_111b140  (orig 0x111b140, tailcall)
void main_f_111b140() { main::sub_111b010(); }

// sub_111bd90  (orig 0x111bd90, mov_ret)
uint32_t main_f_111bd90() { return 21; }

// sub_1120d00  (orig 0x1120d00, getter)
uint32_t main_f_1120d00(void* a0) { return *(uint32_t*)((char*)(a0) + 2312); }

// sub_1120f80  (orig 0x1120f80, tailcall)
void main_f_1120f80() { main::sub_1120d10(); }

// sub_11214f0  (orig 0x11214f0, getter)
uint64_t main_f_11214f0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1121660  (orig 0x1121660, mov_ret)
uint32_t main_f_1121660() { return 1; }

// sub_1122160  (orig 0x1122160, getter)
uint64_t main_f_1122160(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_11222d0  (orig 0x11222d0, mov_ret)
uint32_t main_f_11222d0() { return 1; }

// sub_1122a10  (orig 0x1122a10, getter)
uint64_t main_f_1122a10(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1122b80  (orig 0x1122b80, mov_ret)
uint32_t main_f_1122b80() { return 1; }

// sub_1122d20  (orig 0x1122d20, ret_only)
void main_f_1122d20() {}

// sub_1122d30  (orig 0x1122d30, mov_ret)
uint32_t main_f_1122d30() { return 1; }

// sub_1122d40  (orig 0x1122d40, ret_only)
void main_f_1122d40() {}

// sub_1122d50  (orig 0x1122d50, ret_only)
void main_f_1122d50() {}

// sub_1122d60  (orig 0x1122d60, ret_only)
void main_f_1122d60() {}

// sub_1122d70  (orig 0x1122d70, mov_ret)
uint32_t main_f_1122d70() { return 1; }

// sub_1122d80  (orig 0x1122d80, ret_only)
void main_f_1122d80() {}

// sub_1123ea0  (orig 0x1123ea0, ret_only)
void main_f_1123ea0() {}

// sub_1124130  (orig 0x1124130, ret_only)
void main_f_1124130() {}

// sub_1124140  (orig 0x1124140, copy2)
void main_f_1124140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124150  (orig 0x1124150, copy2)
void main_f_1124150(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124160  (orig 0x1124160, copy2)
void main_f_1124160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124170  (orig 0x1124170, copy2)
void main_f_1124170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11241e0  (orig 0x11241e0, ret_only)
void main_f_11241e0() {}

// sub_11241f0  (orig 0x11241f0, copy2)
void main_f_11241f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124200  (orig 0x1124200, copy2)
void main_f_1124200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11243c0  (orig 0x11243c0, ret_only)
void main_f_11243c0() {}

// sub_1124670  (orig 0x1124670, ret_only)
void main_f_1124670() {}

// sub_11246a0  (orig 0x11246a0, copy2)
void main_f_11246a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11246b0  (orig 0x11246b0, copy2)
void main_f_11246b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124710  (orig 0x1124710, ret_only)
void main_f_1124710() {}

// sub_1124720  (orig 0x1124720, ret_only)
void main_f_1124720() {}

// sub_1124730  (orig 0x1124730, ret_only)
void main_f_1124730() {}

// sub_11248d0  (orig 0x11248d0, ret_only)
void main_f_11248d0() {}

// sub_1124910  (orig 0x1124910, ret_only)
void main_f_1124910() {}

// sub_1124920  (orig 0x1124920, copy2)
void main_f_1124920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124930  (orig 0x1124930, copy2)
void main_f_1124930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124940  (orig 0x1124940, copy2)
void main_f_1124940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124950  (orig 0x1124950, copy2)
void main_f_1124950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11249a0  (orig 0x11249a0, ret_only)
void main_f_11249a0() {}

// sub_11249b0  (orig 0x11249b0, copy2)
void main_f_11249b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11249c0  (orig 0x11249c0, copy2)
void main_f_11249c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124a40  (orig 0x1124a40, ret_only)
void main_f_1124a40() {}

// sub_1124a50  (orig 0x1124a50, copy2)
void main_f_1124a50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124a60  (orig 0x1124a60, copy2)
void main_f_1124a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124ad0  (orig 0x1124ad0, ret_only)
void main_f_1124ad0() {}

// sub_1124ae0  (orig 0x1124ae0, copy2)
void main_f_1124ae0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124af0  (orig 0x1124af0, copy2)
void main_f_1124af0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124b40  (orig 0x1124b40, ret_only)
void main_f_1124b40() {}

// sub_1124b50  (orig 0x1124b50, copy2)
void main_f_1124b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124b60  (orig 0x1124b60, copy2)
void main_f_1124b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124d00  (orig 0x1124d00, ret_only)
void main_f_1124d00() {}

// sub_1124f90  (orig 0x1124f90, ret_only)
void main_f_1124f90() {}

// sub_1124fa0  (orig 0x1124fa0, copy2)
void main_f_1124fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124fb0  (orig 0x1124fb0, copy2)
void main_f_1124fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124fc0  (orig 0x1124fc0, copy2)
void main_f_1124fc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124fd0  (orig 0x1124fd0, copy2)
void main_f_1124fd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1125020  (orig 0x1125020, ret_only)
void main_f_1125020() {}

// sub_1125030  (orig 0x1125030, copy2)
void main_f_1125030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1125040  (orig 0x1125040, copy2)
void main_f_1125040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11250c0  (orig 0x11250c0, ret_only)
void main_f_11250c0() {}

// sub_11250d0  (orig 0x11250d0, copy2)
void main_f_11250d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11250e0  (orig 0x11250e0, copy2)
void main_f_11250e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11266e0  (orig 0x11266e0, ret_only)
void main_f_11266e0() {}

// sub_11268a0  (orig 0x11268a0, ret_only)
void main_f_11268a0() {}

// sub_11268d0  (orig 0x11268d0, copy2)
void main_f_11268d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11268e0  (orig 0x11268e0, copy2)
void main_f_11268e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1126ab0  (orig 0x1126ab0, ret_only)
void main_f_1126ab0() {}

// sub_1126ac0  (orig 0x1126ac0, copy2)
void main_f_1126ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1126ad0  (orig 0x1126ad0, copy2)
void main_f_1126ad0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1126c80  (orig 0x1126c80, ret_only)
void main_f_1126c80() {}

// sub_1126e70  (orig 0x1126e70, ret_only)
void main_f_1126e70() {}

// sub_1127250  (orig 0x1127250, ret_only)
void main_f_1127250() {}

// sub_11272a0  (orig 0x11272a0, ret_only)
void main_f_11272a0() {}

// sub_11272f0  (orig 0x11272f0, copy2)
void main_f_11272f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1127300  (orig 0x1127300, copy2)
void main_f_1127300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1127330  (orig 0x1127330, ret_only)
void main_f_1127330() {}

// sub_1127340  (orig 0x1127340, ret_only)
void main_f_1127340() {}

// sub_1127350  (orig 0x1127350, ret_only)
void main_f_1127350() {}

// sub_1127880  (orig 0x1127880, ret_only)
void main_f_1127880() {}

// sub_11278c0  (orig 0x11278c0, ret_only)
void main_f_11278c0() {}

// sub_11278d0  (orig 0x11278d0, copy2)
void main_f_11278d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11278e0  (orig 0x11278e0, copy2)
void main_f_11278e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11278f0  (orig 0x11278f0, copy2)
void main_f_11278f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1127900  (orig 0x1127900, copy2)
void main_f_1127900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1127ad0  (orig 0x1127ad0, ret_only)
void main_f_1127ad0() {}

// sub_1127b60  (orig 0x1127b60, ret_only)
void main_f_1127b60() {}

// sub_1127b70  (orig 0x1127b70, copy2)
void main_f_1127b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1127b80  (orig 0x1127b80, copy2)
void main_f_1127b80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_112da70  (orig 0x112da70, tailcall)
void main_f_112da70() { main::sub_112d870(); }

// sub_112daf0  (orig 0x112daf0, ret_only)
void main_f_112daf0() {}

// sub_112db00  (orig 0x112db00, ret_only)
void main_f_112db00() {}

// sub_112e3d0  (orig 0x112e3d0, getter)
uint8_t main_f_112e3d0(void* a0) { return *(uint8_t*)((char*)(a0) + 117); }

// sub_112e560  (orig 0x112e560, ret_only)
void main_f_112e560() {}

// sub_112e570  (orig 0x112e570, ret_only)
void main_f_112e570() {}

// sub_112eaf0  (orig 0x112eaf0, getter)
float main_f_112eaf0(void* a0) { return *(float*)((char*)(a0) + 120); }

// sub_112eb00  (orig 0x112eb00, ret_only)
void main_f_112eb00() {}

// sub_112ee40  (orig 0x112ee40, getter)
uint32_t main_f_112ee40(void* a0) { return *(uint32_t*)((char*)(a0) + 1168); }

// sub_112f210  (orig 0x112f210, tailcall)
void main_f_112f210() { main::Stop_Camp_BallAura_MirrorBall_lp(); }

// sub_112f240  (orig 0x112f240, getter)
float main_f_112f240(void* a0) { return *(float*)((char*)(a0) + 1172); }

// sub_112f410  (orig 0x112f410, getter)
uint64_t main_f_112f410(void* a0) { return *(uint64_t*)((char*)(a0) + 1176); }

// sub_1130330  (orig 0x1130330, mov_ret)
uint32_t main_f_1130330() { return 1; }

// sub_1130370  (orig 0x1130370, getter)
uint64_t main_f_1130370(void* a0) { return *(uint64_t*)((char*)(a0) + 1120); }

// sub_1130380  (orig 0x1130380, getter)
uint64_t main_f_1130380(void* a0) { return *(uint64_t*)((char*)(a0) + 1128); }

// sub_1130490  (orig 0x1130490, tailcall)
void main_f_1130490() { main::sub_112ee50(); }

// sub_11307e0  (orig 0x11307e0, ret_only)
void main_f_11307e0() {}

// sub_11307f0  (orig 0x11307f0, copy2)
void main_f_11307f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1130800  (orig 0x1130800, copy2)
void main_f_1130800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1130830  (orig 0x1130830, ret_only)
void main_f_1130830() {}

// sub_1130840  (orig 0x1130840, copy2)
void main_f_1130840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1130850  (orig 0x1130850, copy2)
void main_f_1130850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1130880  (orig 0x1130880, ret_only)
void main_f_1130880() {}

// sub_1130890  (orig 0x1130890, copy2)
void main_f_1130890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11308a0  (orig 0x11308a0, copy2)
void main_f_11308a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1130b50  (orig 0x1130b50, ret_only)
void main_f_1130b50() {}

// sub_1130c00  (orig 0x1130c00, compare)
bool main_f_1130c00(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 136)) > (uint64_t)(2); }

// sub_1130c10  (orig 0x1130c10, getter)
uint8_t main_f_1130c10(void* a0) { return *(uint8_t*)((char*)(a0) + 152); }

// sub_1130d00  (orig 0x1130d00, ptr_add)
void* main_f_1130d00(void* a0) { return (char*)a0 + 128; }

// sub_1130d10  (orig 0x1130d10, getter)
uint32_t main_f_1130d10(void* a0) { return *(uint32_t*)((char*)(a0) + 136); }

// sub_1131340  (orig 0x1131340, ret_only)
void main_f_1131340() {}

// sub_1131350  (orig 0x1131350, copy2)
void main_f_1131350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1131360  (orig 0x1131360, copy2)
void main_f_1131360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1132e30  (orig 0x1132e30, tailcall)
void main_f_1132e30() { main::sub_1132c40(); }

// sub_1133c00  (orig 0x1133c00, ret_only)
void main_f_1133c00() {}

// sub_1133c30  (orig 0x1133c30, tailcall)
void main_f_1133c30() { main::sub_111b250(); }

// sub_1133c40  (orig 0x1133c40, tailcall)
void main_f_1133c40() { main::sub_111b410(); }

// sub_1134fa0  (orig 0x1134fa0, ptr_add)
void* main_f_1134fa0(void* a0) { return (char*)a0 + 1808; }

// sub_11361a0  (orig 0x11361a0, ptr_add)
void* main_f_11361a0(void* a0) { return (char*)a0 + 880; }

// sub_11364b0  (orig 0x11364b0, getter)
uint64_t main_f_11364b0(void* a0) { return *(uint64_t*)((char*)(a0) + 864); }

// sub_11364c0  (orig 0x11364c0, getter)
uint8_t main_f_11364c0(void* a0) { return *(uint8_t*)((char*)(a0) + 780); }

// sub_11365b0  (orig 0x11365b0, getter)
uint64_t main_f_11365b0(void* a0) { return *(uint64_t*)((char*)(a0) + 2072); }

// sub_11365c0  (orig 0x11365c0, ptr_add)
void* main_f_11365c0(void* a0) { return (char*)a0 + 992; }

// sub_11365d0  (orig 0x11365d0, ptr_add)
void* main_f_11365d0(void* a0) { return (char*)a0 + 1104; }

// sub_1136910  (orig 0x1136910, getter)
uint32_t main_f_1136910(void* a0) { return *(uint32_t*)((char*)(a0) + 872); }

// sub_1136c10  (orig 0x1136c10, getter)
uint64_t main_f_1136c10(void* a0) { return *(uint64_t*)((char*)(a0) + 1248); }

// sub_1136c40  (orig 0x1136c40, getter)
uint64_t main_f_1136c40(void* a0) { return *(uint64_t*)((char*)(a0) + 1256); }

// sub_1139180  (orig 0x1139180, getter)
uint32_t main_f_1139180(void* a0) { return *(uint32_t*)((char*)(a0) + 1280); }

// sub_1139710  (orig 0x1139710, compare)
bool main_f_1139710(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1280)) == (uint64_t)(4); }

// sub_1139e80  (orig 0x1139e80, compare)
bool main_f_1139e80(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1280)) == (uint64_t)(3); }

// sub_113a1a0  (orig 0x113a1a0, getter)
uint32_t main_f_113a1a0(void* a0) { return *(uint32_t*)((char*)(a0) + 1288); }

// sub_113a1b0  (orig 0x113a1b0, setter)
void main_f_113a1b0(void* a0) { *(uint32_t*)((char*)(a0) + 1288) = 0; }

// sub_113a540  (orig 0x113a540, getter)
uint8_t main_f_113a540(void* a0) { return *(uint8_t*)((char*)(a0) + 2112); }

// sub_113a570  (orig 0x113a570, setter)
void main_f_113a570(void* a0) { *(uint32_t*)((char*)(a0) + 2116) = 0; }

// sub_113a5d0  (orig 0x113a5d0, straight)
void main_f_113a5d0(void* a0) {
    *(uint8_t*)((char*)(a0) + 2113) = (uint8_t)(1);
}

// sub_113a8b0  (orig 0x113a8b0, getter)
uint32_t main_f_113a8b0(void* a0) { return *(uint32_t*)((char*)(a0) + 2120); }

// sub_113a8c0  (orig 0x113a8c0, compare)
bool main_f_113a8c0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 2120)) != (uint64_t)(0); }

// sub_113a8d0  (orig 0x113a8d0, setter)
void main_f_113a8d0(void* a0) { *(uint32_t*)((char*)(a0) + 2124) = 0; }

// sub_113a930  (orig 0x113a930, setter)
void main_f_113a930(void* a0) { *(uint32_t*)((char*)(a0) + 2120) = 0; }

// sub_113ae90  (orig 0x113ae90, compare)
bool main_f_113ae90(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1280)) == (uint64_t)(6); }

// sub_113aea0  (orig 0x113aea0, getter)
uint8_t main_f_113aea0(void* a0) { return *(uint8_t*)((char*)(a0) + 2128); }

// sub_113af70  (orig 0x113af70, straight)
void main_f_113af70(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 2152) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 2144) = *(uint64_t*)((char*)(a1));
}

// sub_113b040  (orig 0x113b040, getter)
uint32_t main_f_113b040(void* a0) { return *(uint32_t*)((char*)(a0) + 1284); }

// sub_113b050  (orig 0x113b050, setter)
void main_f_113b050(void* a0) { *(uint32_t*)((char*)(a0) + 1284) = 0; }

// sub_113c3d0  (orig 0x113c3d0, getter)
uint32_t main_f_113c3d0(void* a0) { return *(uint32_t*)((char*)(a0) + 2200); }

// sub_113c3e0  (orig 0x113c3e0, getter)
uint8_t main_f_113c3e0(void* a0) { return *(uint8_t*)((char*)(a0) + 2196); }

// sub_113c420  (orig 0x113c420, getter)
uint8_t main_f_113c420(void* a0) { return *(uint8_t*)((char*)(a0) + 2197); }

// sub_113c430  (orig 0x113c430, getter)
uint8_t main_f_113c430(void* a0) { return *(uint8_t*)((char*)(a0) + 2204); }

// sub_113c620  (orig 0x113c620, tailcall)
void main_f_113c620() { main::sub_113c4c0(); }

// sub_113c630  (orig 0x113c630, tailcall)
void main_f_113c630() { main::sub_113d0f0(); }

// sub_113c660  (orig 0x113c660, tailcall)
void main_f_113c660() { main::sub_113d0f0(); }

// sub_113c670  (orig 0x113c670, tailcall)
void main_f_113c670() { main::sub_113d0f0(); }

// sub_113d550  (orig 0x113d550, tailcall)
void main_f_113d550() { main::sub_113d1e0(); }

// sub_113d660  (orig 0x113d660, tailcall)
void main_f_113d660() { main::sub_113d1e0(); }

// sub_113d670  (orig 0x113d670, tailcall)
void main_f_113d670() { main::sub_113d1e0(); }

// sub_113dd40  (orig 0x113dd40, ret_only)
void main_f_113dd40() {}

// sub_113dd50  (orig 0x113dd50, copy2)
void main_f_113dd50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113dd60  (orig 0x113dd60, copy2)
void main_f_113dd60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113ddc0  (orig 0x113ddc0, ret_only)
void main_f_113ddc0() {}

// sub_113ddd0  (orig 0x113ddd0, copy2)
void main_f_113ddd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113dde0  (orig 0x113dde0, copy2)
void main_f_113dde0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113e3e0  (orig 0x113e3e0, ret_only)
void main_f_113e3e0() {}

// sub_113e3f0  (orig 0x113e3f0, copy2)
void main_f_113e3f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113e400  (orig 0x113e400, copy2)
void main_f_113e400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_113e520  (orig 0x113e520, ret_only)
void main_f_113e520() {}

// sub_113e9c0  (orig 0x113e9c0, compare)
bool main_f_113e9c0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_113e9e0  (orig 0x113e9e0, compare)
bool main_f_113e9e0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_113f1b0  (orig 0x113f1b0, getter)
uint8_t main_f_113f1b0(void* a0) { return *(uint8_t*)((char*)(a0) + 144); }

// sub_1142ce0  (orig 0x1142ce0, ret_only)
void main_f_1142ce0() {}

// sub_1142cf0  (orig 0x1142cf0, ret_only)
void main_f_1142cf0() {}

// sub_11452e0  (orig 0x11452e0, tailcall)
void main_f_11452e0() { main::sub_1145080(); }

// sub_11452f0  (orig 0x11452f0, tailcall)
void main_f_11452f0() { main::sub_1146270(); }

// sub_1145320  (orig 0x1145320, tailcall)
void main_f_1145320() { main::sub_1146270(); }

// sub_1145330  (orig 0x1145330, tailcall)
void main_f_1145330() { main::sub_1146270(); }

// sub_11467f0  (orig 0x11467f0, ret_only)
void main_f_11467f0() {}

// sub_1146860  (orig 0x1146860, ret_only)
void main_f_1146860() {}

// sub_1146890  (orig 0x1146890, copy2)
void main_f_1146890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11468a0  (orig 0x11468a0, copy2)
void main_f_11468a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1146950  (orig 0x1146950, ret_only)
void main_f_1146950() {}

// sub_11470c0  (orig 0x11470c0, ret_only)
void main_f_11470c0() {}

// sub_1148770  (orig 0x1148770, setter)
void main_f_1148770(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_1148780  (orig 0x1148780, setter)
void main_f_1148780(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_1148790  (orig 0x1148790, setter)
void main_f_1148790(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1148c10  (orig 0x1148c10, tailcall)
void main_f_1148c10() { main::sub_1148af0(); }

// sub_1148c40  (orig 0x1148c40, getter)
uint32_t main_f_1148c40(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_1148fe0  (orig 0x1148fe0, ret_only)
void main_f_1148fe0() {}

// sub_1148ff0  (orig 0x1148ff0, copy2)
void main_f_1148ff0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_1149000  (orig 0x1149000, copy2)
void main_f_1149000(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_11492a0  (orig 0x11492a0, setter)
void main_f_11492a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 112) = a1; }

// sub_1149b10  (orig 0x1149b10, ret_only)
void main_f_1149b10() {}

// sub_1149b20  (orig 0x1149b20, ret_only)
void main_f_1149b20() {}

// sub_1149b30  (orig 0x1149b30, ret_only)
void main_f_1149b30() {}

// sub_1149b40  (orig 0x1149b40, ret_only)
void main_f_1149b40() {}

// sub_114b030  (orig 0x114b030, setter)
void main_f_114b030(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_114b0c0  (orig 0x114b0c0, setter)
void main_f_114b0c0(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_114b5c0  (orig 0x114b5c0, mov_ret)
uint32_t main_f_114b5c0() { return 1; }

// sub_114b720  (orig 0x114b720, setter)
void main_f_114b720(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_114b7b0  (orig 0x114b7b0, setter)
void main_f_114b7b0(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_114bc70  (orig 0x114bc70, mov_ret)
uint32_t main_f_114bc70() { return 1; }

// sub_114bde0  (orig 0x114bde0, setter)
void main_f_114bde0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_114c820  (orig 0x114c820, mov_ret)
uint32_t main_f_114c820() { return 1; }

// sub_114c980  (orig 0x114c980, setter)
void main_f_114c980(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_114d100  (orig 0x114d100, mov_ret)
uint32_t main_f_114d100() { return 1; }

// sub_114d2c0  (orig 0x114d2c0, setter)
void main_f_114d2c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_114d350  (orig 0x114d350, setter)
void main_f_114d350(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_114d860  (orig 0x114d860, mov_ret)
uint32_t main_f_114d860() { return 1; }

// sub_114d9d0  (orig 0x114d9d0, setter)
void main_f_114d9d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 48) = a1; }

// sub_114e3f0  (orig 0x114e3f0, mov_ret)
uint32_t main_f_114e3f0() { return 1; }

// sub_114e550  (orig 0x114e550, setter)
void main_f_114e550(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_114ed10  (orig 0x114ed10, mov_ret)
uint32_t main_f_114ed10() { return 1; }

// sub_114f150  (orig 0x114f150, setter)
void main_f_114f150(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 196) = a1; }

// sub_1151060  (orig 0x1151060, mov_ret)
uint32_t main_f_1151060() { return 1; }

// sub_1151110  (orig 0x1151110, getter)
uint32_t main_f_1151110(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_1151120  (orig 0x1151120, mov_ret)
uint32_t main_f_1151120() { return 1; }

// sub_1151160  (orig 0x1151160, getter)
uint32_t main_f_1151160(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_1151170  (orig 0x1151170, mov_ret)
uint32_t main_f_1151170() { return 1; }

// sub_11511b0  (orig 0x11511b0, getter)
uint32_t main_f_11511b0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_11511c0  (orig 0x11511c0, mov_ret)
uint32_t main_f_11511c0() { return 1; }

// sub_1151200  (orig 0x1151200, getter)
uint32_t main_f_1151200(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_1151210  (orig 0x1151210, mov_ret)
uint32_t main_f_1151210() { return 1; }

// sub_1151250  (orig 0x1151250, getter)
uint32_t main_f_1151250(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_1151260  (orig 0x1151260, mov_ret)
uint32_t main_f_1151260() { return 1; }

// sub_11512a0  (orig 0x11512a0, getter)
uint32_t main_f_11512a0(void* a0) { return *(uint32_t*)((char*)(a0) + 48); }

// sub_11512b0  (orig 0x11512b0, mov_ret)
uint32_t main_f_11512b0() { return 1; }

// sub_11512f0  (orig 0x11512f0, getter)
uint32_t main_f_11512f0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_1151300  (orig 0x1151300, mov_ret)
uint32_t main_f_1151300() { return 1; }

// sub_1151340  (orig 0x1151340, getter)
uint32_t main_f_1151340(void* a0) { return *(uint32_t*)((char*)(a0) + 196); }

// sub_1151350  (orig 0x1151350, mov_ret)
uint32_t main_f_1151350() { return 1; }

// sub_1151b00  (orig 0x1151b00, setter)
void main_f_1151b00(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 60) = a1; }

// sub_1152830  (orig 0x1152830, mov_ret)
uint32_t main_f_1152830() { return 1; }

// sub_11528e0  (orig 0x11528e0, getter)
uint32_t main_f_11528e0(void* a0) { return *(uint32_t*)((char*)(a0) + 60); }

// sub_11528f0  (orig 0x11528f0, mov_ret)
uint32_t main_f_11528f0() { return 1; }

// sub_11531c0  (orig 0x11531c0, setter)
void main_f_11531c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1153e00  (orig 0x1153e00, mov_ret)
uint32_t main_f_1153e00() { return 1; }

// sub_1153eb0  (orig 0x1153eb0, getter)
uint32_t main_f_1153eb0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1153ec0  (orig 0x1153ec0, mov_ret)
uint32_t main_f_1153ec0() { return 1; }

// sub_1154460  (orig 0x1154460, setter)
void main_f_1154460(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_1155050  (orig 0x1155050, mov_ret)
uint32_t main_f_1155050() { return 1; }

// sub_1155100  (orig 0x1155100, getter)
uint32_t main_f_1155100(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_1155110  (orig 0x1155110, mov_ret)
uint32_t main_f_1155110() { return 1; }

// sub_11556e0  (orig 0x11556e0, setter)
void main_f_11556e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_1155840  (orig 0x1155840, setter)
void main_f_1155840(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_1155df0  (orig 0x1155df0, mov_ret)
uint32_t main_f_1155df0() { return 1; }

// sub_1155ea0  (orig 0x1155ea0, getter)
uint32_t main_f_1155ea0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_1155eb0  (orig 0x1155eb0, mov_ret)
uint32_t main_f_1155eb0() { return 1; }

// sub_11564c0  (orig 0x11564c0, setter)
void main_f_11564c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_1156d70  (orig 0x1156d70, mov_ret)
uint32_t main_f_1156d70() { return 1; }

// sub_1156e20  (orig 0x1156e20, getter)
uint32_t main_f_1156e20(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_1156e30  (orig 0x1156e30, mov_ret)
uint32_t main_f_1156e30() { return 1; }

// sub_11575f0  (orig 0x11575f0, ret_only)
void main_f_11575f0() {}

// sub_1157600  (orig 0x1157600, getter)
uint64_t main_f_1157600(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_1157610  (orig 0x1157610, getter)
uint64_t main_f_1157610(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_1159000  (orig 0x1159000, tailcall)
void main_f_1159000() { main::sub_1158d80(); }

// sub_1159cc0  (orig 0x1159cc0, tailcall)
void main_f_1159cc0() { main::sub_5d1550(); }

// sub_115a6d0  (orig 0x115a6d0, ret_only)
void main_f_115a6d0() {}

// sub_115a6e0  (orig 0x115a6e0, getter)
uint64_t main_f_115a6e0(void* a0) { return *(uint64_t*)((char*)(a0) + 776); }

// sub_115a710  (orig 0x115a710, getter)
uint8_t main_f_115a710(void* a0) { return *(uint8_t*)((char*)(a0) + 784); }

// sub_115a720  (orig 0x115a720, setter-chain)
void main_f_115a720(void* a0, uint8_t a1) { *(uint64_t*)((char*)(a0) + 776) = 0; *(uint8_t*)((char*)(a0) + 784) = a1; }

// sub_115b9d0  (orig 0x115b9d0, getter)
uint64_t main_f_115b9d0(void* a0) { return *(uint64_t*)((char*)(a0) + 928); }

// sub_115b9e0  (orig 0x115b9e0, getter)
uint64_t main_f_115b9e0(void* a0) { return *(uint64_t*)((char*)(a0) + 936); }

// sub_115b9f0  (orig 0x115b9f0, ptr_add)
void* main_f_115b9f0(void* a0) { return (char*)a0 + 808; }

// sub_115ba00  (orig 0x115ba00, ptr_add)
void* main_f_115ba00(void* a0) { return (char*)a0 + 816; }

// sub_115ba10  (orig 0x115ba10, ptr_add)
void* main_f_115ba10(void* a0) { return (char*)a0 + 824; }

// sub_115ba20  (orig 0x115ba20, getter)
uint8_t main_f_115ba20(void* a0) { return *(uint8_t*)((char*)(a0) + 944); }

// sub_115bb40  (orig 0x115bb40, getter)
uint8_t main_f_115bb40(void* a0) { return *(uint8_t*)((char*)(a0) + 945); }

// sub_115bbb0  (orig 0x115bbb0, compare)
bool main_f_115bbb0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 948)) != (uint64_t)(0); }

// sub_115bbc0  (orig 0x115bbc0, getter)
uint32_t main_f_115bbc0(void* a0) { return *(uint32_t*)((char*)(a0) + 948); }

// sub_115bbd0  (orig 0x115bbd0, setter)
void main_f_115bbd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 948) = a1; }

// sub_115bbe0  (orig 0x115bbe0, getter)
uint32_t main_f_115bbe0(void* a0) { return *(uint32_t*)((char*)(a0) + 952); }

// sub_115bbf0  (orig 0x115bbf0, setter)
void main_f_115bbf0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 952) = a1; }

// sub_115bc00  (orig 0x115bc00, getter)
uint32_t main_f_115bc00(void* a0) { return *(uint32_t*)((char*)(a0) + 956); }

// sub_115e900  (orig 0x115e900, tailcall)
void main_f_115e900() { main::sub_115e730(); }

// sub_115e910  (orig 0x115e910, tailcall)
void main_f_115e910() { main::sub_115e980(); }

// sub_115e940  (orig 0x115e940, tailcall)
void main_f_115e940() { main::sub_115e980(); }

// sub_115e950  (orig 0x115e950, tailcall)
void main_f_115e950() { main::sub_115e980(); }

// sub_115eff0  (orig 0x115eff0, ret_only)
void main_f_115eff0() {}

// sub_115f000  (orig 0x115f000, copy2)
void main_f_115f000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_115f010  (orig 0x115f010, copy2)
void main_f_115f010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_115f340  (orig 0x115f340, mov_ret)
uint32_t main_f_115f340() { return 0; }

// sub_115f350  (orig 0x115f350, ret_only)
void main_f_115f350() {}

// sub_115f360  (orig 0x115f360, copy2)
void main_f_115f360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_115f370  (orig 0x115f370, copy2)
void main_f_115f370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_115f590  (orig 0x115f590, getter)
float main_f_115f590(void* a0) { return *(float*)((char*)(a0) + 24); }

// sub_1160cd0  (orig 0x1160cd0, ret_only)
void main_f_1160cd0() {}

// sub_1160ce0  (orig 0x1160ce0, ptr_add)
void* main_f_1160ce0(void* a0) { return (char*)a0 + 128; }

// sub_1160d50  (orig 0x1160d50, pair-ret)
struct pair16_f_1160d50_ { uint64_t f[2]; }; pair16_f_1160d50_ main_f_1160d50(void* a0) { return *(struct pair16_f_1160d50_ *)((char*)(a0) + 384); }

// sub_1161e90  (orig 0x1161e90, ret_only)
void main_f_1161e90() {}

// sub_1161ef0  (orig 0x1161ef0, ret_only)
void main_f_1161ef0() {}

// sub_11625a0  (orig 0x11625a0, mov_ret)
uint32_t main_f_11625a0() { return 1; }

// sub_11629a0  (orig 0x11629a0, ret_only)
void main_f_11629a0() {}

// sub_11629b0  (orig 0x11629b0, ret_only)
void main_f_11629b0() {}

// sub_1162be0  (orig 0x1162be0, ret_only)
void main_f_1162be0() {}

// sub_1162c90  (orig 0x1162c90, getter)
uint8_t main_f_1162c90(void* a0) { return *(uint8_t*)((char*)(a0) + 144); }

// sub_1163130  (orig 0x1163130, getter)
uint8_t main_f_1163130(void* a0) { return *(uint8_t*)((char*)(a0) + 160); }

// sub_1164120  (orig 0x1164120, setter)
void main_f_1164120(void* a0, float a1) { *(float*)((char*)(a0) + 184) = a1; }

// sub_1164130  (orig 0x1164130, getter)
uint64_t main_f_1164130(void* a0) { return *(uint64_t*)((char*)(a0) + 320); }

// sub_1164140  (orig 0x1164140, copy2)
void main_f_1164140(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 320) = *(uint64_t*)((char*)(a1)); }

// sub_1164150  (orig 0x1164150, getter)
uint64_t main_f_1164150(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_1165010  (orig 0x1165010, getter)
uint8_t main_f_1165010(void* a0) { return *(uint8_t*)((char*)(a0) + 104); }

// sub_1167c40  (orig 0x1167c40, getter)
uint64_t main_f_1167c40(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_1167e60  (orig 0x1167e60, tailcall)
void main_f_1167e60() { main::sub_1168fa0(); }

// sub_1167fd0  (orig 0x1167fd0, tailcall)
void main_f_1167fd0() { main::sub_1168fa0(); }

// sub_1167fe0  (orig 0x1167fe0, tailcall)
void main_f_1167fe0() { main::sub_1168fa0(); }

// sub_11682d0  (orig 0x11682d0, tailcall)
void main_f_11682d0() { main::sub_1168150(); }

// sub_1168bd0  (orig 0x1168bd0, ret_only)
void main_f_1168bd0() {}

// sub_1168d60  (orig 0x1168d60, ret_only)
void main_f_1168d60() {}

// sub_1168db0  (orig 0x1168db0, ret_only)
void main_f_1168db0() {}

// sub_1168e00  (orig 0x1168e00, copy2)
void main_f_1168e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1168e10  (orig 0x1168e10, copy2)
void main_f_1168e10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1168e30  (orig 0x1168e30, ret_only)
void main_f_1168e30() {}

// sub_1168e40  (orig 0x1168e40, copy2)
void main_f_1168e40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1168e50  (orig 0x1168e50, copy2)
void main_f_1168e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1169720  (orig 0x1169720, ptr_add)
void* main_f_1169720(void* a0) { return (char*)a0 + 96; }

// sub_1169730  (orig 0x1169730, ptr_add)
void* main_f_1169730(void* a0) { return (char*)a0 + 144; }

// sub_1169fe0  (orig 0x1169fe0, ret_only)
void main_f_1169fe0() {}

// sub_116a210  (orig 0x116a210, copy2)
void main_f_116a210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116a220  (orig 0x116a220, copy2)
void main_f_116a220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116a380  (orig 0x116a380, ret_only)
void main_f_116a380() {}

// sub_116a620  (orig 0x116a620, copy2)
void main_f_116a620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116a630  (orig 0x116a630, copy2)
void main_f_116a630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116bb80  (orig 0x116bb80, compare)
bool main_f_116bb80(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 24)) == (uint64_t)(0); }

// sub_116ccd0  (orig 0x116ccd0, getter)
uint8_t main_f_116ccd0(void* a0) { return *(uint8_t*)((char*)(a0) + 14); }

// sub_116e7b0  (orig 0x116e7b0, ret_only)
void main_f_116e7b0() {}

// sub_116e7c0  (orig 0x116e7c0, copy2)
void main_f_116e7c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e7d0  (orig 0x116e7d0, copy2)
void main_f_116e7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e830  (orig 0x116e830, ret_only)
void main_f_116e830() {}

// sub_116e840  (orig 0x116e840, copy2)
void main_f_116e840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e850  (orig 0x116e850, copy2)
void main_f_116e850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e8f0  (orig 0x116e8f0, ret_only)
void main_f_116e8f0() {}

// sub_116e900  (orig 0x116e900, copy2)
void main_f_116e900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e910  (orig 0x116e910, copy2)
void main_f_116e910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e9b0  (orig 0x116e9b0, ret_only)
void main_f_116e9b0() {}

// sub_116e9c0  (orig 0x116e9c0, copy2)
void main_f_116e9c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116e9d0  (orig 0x116e9d0, copy2)
void main_f_116e9d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116eae0  (orig 0x116eae0, ret_only)
void main_f_116eae0() {}

// sub_116eaf0  (orig 0x116eaf0, copy2)
void main_f_116eaf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116eb00  (orig 0x116eb00, copy2)
void main_f_116eb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116ebc0  (orig 0x116ebc0, ret_only)
void main_f_116ebc0() {}

// sub_116ebd0  (orig 0x116ebd0, copy2)
void main_f_116ebd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_116ebe0  (orig 0x116ebe0, copy2)
void main_f_116ebe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1171010  (orig 0x1171010, getter)
uint32_t main_f_1171010(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1173310  (orig 0x1173310, straight)
void main_f_1173310(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 232) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 224) = *(uint64_t*)((char*)(a1));
}

// sub_1173480  (orig 0x1173480, tailcall)
void main_f_1173480() { main::sub_1173330(); }

// sub_1174460  (orig 0x1174460, straight)
void main_f_1174460(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 872) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 864) = *(uint64_t*)((char*)(a1));
}

// sub_1174480  (orig 0x1174480, straight)
void main_f_1174480(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 888) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 880) = *(uint64_t*)((char*)(a1));
}

// sub_1174b20  (orig 0x1174b20, ptr_add)
void* main_f_1174b20(void* a0) { return (char*)a0 + 784; }

// sub_1174cb0  (orig 0x1174cb0, getter)
uint32_t main_f_1174cb0(void* a0) { return *(uint32_t*)((char*)(a0) + 848); }

// sub_1176260  (orig 0x1176260, ptr_add)
void* main_f_1176260(void* a0) { return (char*)a0 + 864; }

// sub_1176270  (orig 0x1176270, ptr_add)
void* main_f_1176270(void* a0) { return (char*)a0 + 880; }

// sub_1176c50  (orig 0x1176c50, ret_only)
void main_f_1176c50() {}

// sub_1176c60  (orig 0x1176c60, copy2)
void main_f_1176c60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1176c70  (orig 0x1176c70, copy2)
void main_f_1176c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1176df0  (orig 0x1176df0, ptr_add)
void* main_f_1176df0(void* a0) { return (char*)a0 + 184; }

// sub_11777b0  (orig 0x11777b0, tailcall)
void main_f_11777b0() { main::sub_113d9c0(); }

// sub_11779e0  (orig 0x11779e0, tailcall)
void main_f_11779e0() { main::sub_113d9c0(); }

// sub_11779f0  (orig 0x11779f0, tailcall)
void main_f_11779f0() { main::sub_113d9c0(); }

// sub_1178b00  (orig 0x1178b00, getter)
uint64_t main_f_1178b00(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_1178b10  (orig 0x1178b10, getter)
uint64_t main_f_1178b10(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_1178b20  (orig 0x1178b20, getter)
uint64_t main_f_1178b20(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_1179b50  (orig 0x1179b50, tailcall)
void main_f_1179b50() { main::sub_ce0(); }

// sub_1179bc0  (orig 0x1179bc0, ret_only)
void main_f_1179bc0() {}

// sub_1179bd0  (orig 0x1179bd0, tailcall)
void main_f_1179bd0() { main::sub_ce0(); }

// sub_1179ec0  (orig 0x1179ec0, getter)
uint8_t main_f_1179ec0(void* a0) { return *(uint8_t*)((char*)(a0) + 88); }

// sub_1179ed0  (orig 0x1179ed0, getter)
uint8_t main_f_1179ed0(void* a0) { return *(uint8_t*)((char*)(a0) + 89); }

// sub_1179ee0  (orig 0x1179ee0, getter)
uint8_t main_f_1179ee0(void* a0) { return *(uint8_t*)((char*)(a0) + 90); }

// sub_1179ef0  (orig 0x1179ef0, getter)
uint64_t main_f_1179ef0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_1179f00  (orig 0x1179f00, getter)
uint32_t main_f_1179f00(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_1179f30  (orig 0x1179f30, straight)
void main_f_1179f30(void* a0) {
    *(uint8_t*)((char*)(a0) + 200) = (uint8_t)(1);
}

// sub_1179f40  (orig 0x1179f40, getter)
uint8_t main_f_1179f40(void* a0) { return *(uint8_t*)((char*)(a0) + 200); }

// sub_1179f50  (orig 0x1179f50, ptr_add)
void* main_f_1179f50(void* a0) { return (char*)a0 + 208; }

// sub_1179f60  (orig 0x1179f60, getter)
uint8_t main_f_1179f60(void* a0) { return *(uint8_t*)((char*)(a0) + 91); }

// sub_1179fc0  (orig 0x1179fc0, ptr_add)
void* main_f_1179fc0(void* a0) { return (char*)a0 + 120; }

// sub_117b380  (orig 0x117b380, setter)
void main_f_117b380(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 340) = a1; }

// sub_117b850  (orig 0x117b850, ret_only)
void main_f_117b850() {}

// sub_117b910  (orig 0x117b910, ret_only)
void main_f_117b910() {}

// sub_117b920  (orig 0x117b920, copy2)
void main_f_117b920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_117b930  (orig 0x117b930, copy2)
void main_f_117b930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_117bf10  (orig 0x117bf10, getter)
uint64_t main_f_117bf10(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_117dae0  (orig 0x117dae0, ret_only)
void main_f_117dae0() {}

// sub_117daf0  (orig 0x117daf0, tailcall)
void main_f_117daf0() { main::sub_e7c4c0(); }

// sub_117db00  (orig 0x117db00, tailcall)
void main_f_117db00() { main::sub_117db70(); }

// sub_117db30  (orig 0x117db30, tailcall)
void main_f_117db30() { main::sub_117db70(); }

// sub_117db40  (orig 0x117db40, tailcall)
void main_f_117db40() { main::sub_117db70(); }

// sub_117de60  (orig 0x117de60, ret_only)
void main_f_117de60() {}

// sub_117dec0  (orig 0x117dec0, ret_only)
void main_f_117dec0() {}

// sub_117ded0  (orig 0x117ded0, copy2)
void main_f_117ded0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_117dee0  (orig 0x117dee0, copy2)
void main_f_117dee0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_117df00  (orig 0x117df00, ret_only)
void main_f_117df00() {}

// sub_117df10  (orig 0x117df10, copy2)
void main_f_117df10(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_117df20  (orig 0x117df20, copy2)
void main_f_117df20(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_117dfa0  (orig 0x117dfa0, ret_only)
void main_f_117dfa0() {}

// sub_117dfb0  (orig 0x117dfb0, ret_only)
void main_f_117dfb0() {}

// sub_117dfc0  (orig 0x117dfc0, ret_only)
void main_f_117dfc0() {}

// sub_11802d0  (orig 0x11802d0, getter)
uint8_t main_f_11802d0(void* a0) { return *(uint8_t*)((char*)(a0) + 1040); }

// sub_1180860  (orig 0x1180860, tailcall)
void main_f_1180860() { main::sub_11804d0(); }

// sub_1180870  (orig 0x1180870, tailcall)
void main_f_1180870() { main::sub_117dca0(); }

// sub_11808a0  (orig 0x11808a0, tailcall)
void main_f_11808a0() { main::sub_117dca0(); }

// sub_11808b0  (orig 0x11808b0, tailcall)
void main_f_11808b0() { main::sub_117dca0(); }

// sub_1181830  (orig 0x1181830, tailcall)
void main_f_1181830() { main::sub_11811a0(); }

// sub_11834d0  (orig 0x11834d0, tailcall)
void main_f_11834d0() { main::sub_1183160(); }

// sub_1183860  (orig 0x1183860, compare)
bool main_f_1183860(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) != (uint64_t)(0); }

// sub_1186150  (orig 0x1186150, copy2)
void main_f_1186150(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 96) = *(uint64_t*)((char*)(a1)); }

// sub_118a470  (orig 0x118a470, tailcall)
void main_f_118a470() { main::sub_118a330(); }

// sub_118aed0  (orig 0x118aed0, ret_only)
void main_f_118aed0() {}

// sub_118aee0  (orig 0x118aee0, copy2)
void main_f_118aee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_118aef0  (orig 0x118aef0, copy2)
void main_f_118aef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_118af10  (orig 0x118af10, ret_only)
void main_f_118af10() {}

// sub_118f1b0  (orig 0x118f1b0, ret_only)
void main_f_118f1b0() {}

// sub_118f1c0  (orig 0x118f1c0, ret_only)
void main_f_118f1c0() {}

// sub_118f1d0  (orig 0x118f1d0, ret_only)
void main_f_118f1d0() {}

// sub_118f260  (orig 0x118f260, ret_only)
void main_f_118f260() {}

// sub_118f270  (orig 0x118f270, ret_only)
void main_f_118f270() {}

// sub_118f280  (orig 0x118f280, ret_only)
void main_f_118f280() {}

// sub_118f310  (orig 0x118f310, ret_only)
void main_f_118f310() {}

// sub_118f320  (orig 0x118f320, ret_only)
void main_f_118f320() {}

// sub_118f330  (orig 0x118f330, ret_only)
void main_f_118f330() {}

// sub_118f3c0  (orig 0x118f3c0, ret_only)
void main_f_118f3c0() {}

// sub_118f3d0  (orig 0x118f3d0, ret_only)
void main_f_118f3d0() {}

// sub_118f3e0  (orig 0x118f3e0, ret_only)
void main_f_118f3e0() {}

// sub_118f470  (orig 0x118f470, ret_only)
void main_f_118f470() {}

// sub_118f480  (orig 0x118f480, ret_only)
void main_f_118f480() {}

// sub_118f490  (orig 0x118f490, ret_only)
void main_f_118f490() {}

// sub_1190ad0  (orig 0x1190ad0, ret_only)
void main_f_1190ad0() {}

// sub_1190ae0  (orig 0x1190ae0, ret_only)
void main_f_1190ae0() {}

// sub_1190af0  (orig 0x1190af0, ret_only)
void main_f_1190af0() {}

// sub_1190b70  (orig 0x1190b70, ret_only)
void main_f_1190b70() {}

// sub_1190b80  (orig 0x1190b80, ret_only)
void main_f_1190b80() {}

// sub_1190b90  (orig 0x1190b90, ret_only)
void main_f_1190b90() {}

// sub_1191100  (orig 0x1191100, ret_only)
void main_f_1191100() {}

// sub_1191110  (orig 0x1191110, ret_only)
void main_f_1191110() {}

// sub_1191120  (orig 0x1191120, ret_only)
void main_f_1191120() {}

// sub_11911a0  (orig 0x11911a0, ret_only)
void main_f_11911a0() {}

// sub_11911b0  (orig 0x11911b0, ret_only)
void main_f_11911b0() {}

// sub_11911c0  (orig 0x11911c0, ret_only)
void main_f_11911c0() {}

// sub_1191360  (orig 0x1191360, ret_only)
void main_f_1191360() {}

// sub_1191370  (orig 0x1191370, ret_only)
void main_f_1191370() {}

// sub_1191380  (orig 0x1191380, ret_only)
void main_f_1191380() {}

// sub_1191490  (orig 0x1191490, ret_only)
void main_f_1191490() {}

// sub_11914a0  (orig 0x11914a0, ret_only)
void main_f_11914a0() {}

// sub_11914b0  (orig 0x11914b0, ret_only)
void main_f_11914b0() {}

// sub_1191d00  (orig 0x1191d00, ret_only)
void main_f_1191d00() {}

// sub_1191d10  (orig 0x1191d10, ret_only)
void main_f_1191d10() {}

// sub_1191d20  (orig 0x1191d20, ret_only)
void main_f_1191d20() {}

// sub_1192e30  (orig 0x1192e30, ret_only)
void main_f_1192e30() {}

// sub_1192e40  (orig 0x1192e40, ret_only)
void main_f_1192e40() {}

// sub_1192e50  (orig 0x1192e50, ret_only)
void main_f_1192e50() {}

// sub_1192e70  (orig 0x1192e70, ret_only)
void main_f_1192e70() {}

// sub_1192e80  (orig 0x1192e80, ret_only)
void main_f_1192e80() {}

// sub_1192e90  (orig 0x1192e90, ret_only)
void main_f_1192e90() {}

// sub_11961c0  (orig 0x11961c0, ret_only)
void main_f_11961c0() {}

// sub_11967f0  (orig 0x11967f0, ret_only)
void main_f_11967f0() {}

// sub_1196980  (orig 0x1196980, ret_only)
void main_f_1196980() {}

// sub_11969b0  (orig 0x11969b0, tailcall)
void main_f_11969b0() { main::sub_11969d0(); }

// sub_11969c0  (orig 0x11969c0, ret_only)
void main_f_11969c0() {}

// sub_11970a0  (orig 0x11970a0, mov_ret)
uint32_t main_f_11970a0() { return 1; }

// sub_11970b0  (orig 0x11970b0, mov_ret)
uint32_t main_f_11970b0() { return 1; }

// sub_11970c0  (orig 0x11970c0, ret_only)
void main_f_11970c0() {}

// sub_11977b0  (orig 0x11977b0, tailcall)
void main_f_11977b0() { main::sub_1197690(); }

// sub_11977c0  (orig 0x11977c0, tailcall)
void main_f_11977c0() { main::sub_1197830(); }

// sub_11977f0  (orig 0x11977f0, tailcall)
void main_f_11977f0() { main::sub_1197830(); }

// sub_1197800  (orig 0x1197800, tailcall)
void main_f_1197800() { main::sub_1197830(); }

// sub_1198090  (orig 0x1198090, tailcall)
void main_f_1198090() { main::sub_1197690(); }

// sub_11980a0  (orig 0x11980a0, tailcall)
void main_f_11980a0() { main::sub_1198110(); }

// sub_11980d0  (orig 0x11980d0, tailcall)
void main_f_11980d0() { main::sub_1198110(); }

// sub_11980e0  (orig 0x11980e0, tailcall)
void main_f_11980e0() { main::sub_1198110(); }

// sub_1198450  (orig 0x1198450, ret_only)
void main_f_1198450() {}

// sub_1198930  (orig 0x1198930, ret_only)
void main_f_1198930() {}

// sub_1199b40  (orig 0x1199b40, ret_only)
void main_f_1199b40() {}

// sub_119b9a0  (orig 0x119b9a0, ret_only)
void main_f_119b9a0() {}

// sub_119ba00  (orig 0x119ba00, ret_only)
void main_f_119ba00() {}

// sub_119ba10  (orig 0x119ba10, copy2)
void main_f_119ba10(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_119ba20  (orig 0x119ba20, copy2)
void main_f_119ba20(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_119c5e0  (orig 0x119c5e0, ret_only)
void main_f_119c5e0() {}

// sub_119d900  (orig 0x119d900, ret_only)
void main_f_119d900() {}

// sub_119d950  (orig 0x119d950, ret_only)
void main_f_119d950() {}

// sub_119d960  (orig 0x119d960, ret_only)
void main_f_119d960() {}

// sub_119d970  (orig 0x119d970, ret_only)
void main_f_119d970() {}

// sub_119d980  (orig 0x119d980, ret_only)
void main_f_119d980() {}

// sub_119e050  (orig 0x119e050, tailcall)
void main_f_119e050() { main::sub_119e200(); }

// sub_119e120  (orig 0x119e120, tailcall)
void main_f_119e120() { main::sub_119e200(); }

// sub_119e130  (orig 0x119e130, tailcall)
void main_f_119e130() { main::sub_119e200(); }

// sub_119e410  (orig 0x119e410, ret_only)
void main_f_119e410() {}

// sub_119e420  (orig 0x119e420, ret_only)
void main_f_119e420() {}

// sub_119e430  (orig 0x119e430, ret_only)
void main_f_119e430() {}

// sub_119e5e0  (orig 0x119e5e0, tailcall)
void main_f_119e5e0() { main_f_1130b50(); }

// sub_119f140  (orig 0x119f140, ret_only)
void main_f_119f140() {}

// sub_119fda0  (orig 0x119fda0, ret_only)
void main_f_119fda0() {}

// sub_11a0df0  (orig 0x11a0df0, ret_only)
void main_f_11a0df0() {}

// sub_11a1bf0  (orig 0x11a1bf0, ret_only)
void main_f_11a1bf0() {}

// sub_11a2c80  (orig 0x11a2c80, ret_only)
void main_f_11a2c80() {}

// sub_11a2d00  (orig 0x11a2d00, ret_only)
void main_f_11a2d00() {}

// sub_11a2d10  (orig 0x11a2d10, copy2)
void main_f_11a2d10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a2d20  (orig 0x11a2d20, copy2)
void main_f_11a2d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a3c00  (orig 0x11a3c00, setter)
void main_f_11a3c00(void* a0) { *(uint32_t*)((char*)(a0) + 168) = 0; }

// sub_11a4310  (orig 0x11a4310, ret_only)
void main_f_11a4310() {}

// sub_11a49a0  (orig 0x11a49a0, ret_only)
void main_f_11a49a0() {}

// sub_11a50c0  (orig 0x11a50c0, ret_only)
void main_f_11a50c0() {}

// sub_11a5180  (orig 0x11a5180, ret_only)
void main_f_11a5180() {}

// sub_11a5190  (orig 0x11a5190, copy2)
void main_f_11a5190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a51a0  (orig 0x11a51a0, copy2)
void main_f_11a51a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a5b60  (orig 0x11a5b60, ret_only)
void main_f_11a5b60() {}

// sub_11a63e0  (orig 0x11a63e0, ret_only)
void main_f_11a63e0() {}

// sub_11a6490  (orig 0x11a6490, ret_only)
void main_f_11a6490() {}

// sub_11a8ca0  (orig 0x11a8ca0, ret_only)
void main_f_11a8ca0() {}

// sub_11a8d50  (orig 0x11a8d50, ret_only)
void main_f_11a8d50() {}

// sub_11a8d60  (orig 0x11a8d60, copy2)
void main_f_11a8d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a8d70  (orig 0x11a8d70, copy2)
void main_f_11a8d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11a9820  (orig 0x11a9820, ret_only)
void main_f_11a9820() {}

// sub_11ab570  (orig 0x11ab570, ret_only)
void main_f_11ab570() {}

// sub_11ab7d0  (orig 0x11ab7d0, ret_only)
void main_f_11ab7d0() {}

// sub_11ab7e0  (orig 0x11ab7e0, copy2)
void main_f_11ab7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ab7f0  (orig 0x11ab7f0, copy2)
void main_f_11ab7f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ab850  (orig 0x11ab850, ret_only)
void main_f_11ab850() {}

// sub_11ab910  (orig 0x11ab910, ret_only)
void main_f_11ab910() {}

// sub_11afaa0  (orig 0x11afaa0, tailcall)
void main_f_11afaa0() { main::sub_11af850(); }

// sub_11b0cd0  (orig 0x11b0cd0, ret_only)
void main_f_11b0cd0() {}

// sub_11b14d0  (orig 0x11b14d0, ret_only)
void main_f_11b14d0() {}

// sub_11b1730  (orig 0x11b1730, copy2)
void main_f_11b1730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11b1740  (orig 0x11b1740, copy2)
void main_f_11b1740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11b17c0  (orig 0x11b17c0, ret_only)
void main_f_11b17c0() {}

// sub_11b17d0  (orig 0x11b17d0, copy2)
void main_f_11b17d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11b17e0  (orig 0x11b17e0, copy2)
void main_f_11b17e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11b3370  (orig 0x11b3370, tailcall)
void main_f_11b3370() { main::sub_11b3130(); }

// sub_11b3bb0  (orig 0x11b3bb0, ret_only)
void main_f_11b3bb0() {}

// sub_11b4f00  (orig 0x11b4f00, ret_only)
void main_f_11b4f00() {}

// sub_11b5150  (orig 0x11b5150, tailcall)
void main_f_11b5150() { main::sub_ce0(); }

// sub_11b51a0  (orig 0x11b51a0, ret_only)
void main_f_11b51a0() {}

// sub_11b51b0  (orig 0x11b51b0, tailcall)
void main_f_11b51b0() { main::sub_ce0(); }

// sub_11b5230  (orig 0x11b5230, tailcall)
void main_f_11b5230() { main::sub_ce0(); }

// sub_11b52a0  (orig 0x11b52a0, ret_only)
void main_f_11b52a0() {}

// sub_11b52b0  (orig 0x11b52b0, tailcall)
void main_f_11b52b0() { main::sub_ce0(); }

// sub_11b58a0  (orig 0x11b58a0, ret_only)
void main_f_11b58a0() {}

// sub_11b6900  (orig 0x11b6900, tailcall)
void main_f_11b6900() { main::sub_11b6790(); }

// sub_11b7a80  (orig 0x11b7a80, mov_ret)
uint32_t main_f_11b7a80() { return 0; }

// sub_11b7a90  (orig 0x11b7a90, mov_ret)
uint32_t main_f_11b7a90() { return 0; }

// sub_11b7f70  (orig 0x11b7f70, ret_only)
void main_f_11b7f70() {}

// sub_11b86c0  (orig 0x11b86c0, ret_only)
void main_f_11b86c0() {}

// sub_11b8a80  (orig 0x11b8a80, tailcall)
void main_f_11b8a80() { main::sub_112ee50(); }

// sub_11b8d20  (orig 0x11b8d20, ret_only)
void main_f_11b8d20() {}

// sub_11b8d30  (orig 0x11b8d30, mov_ret)
uint32_t main_f_11b8d30() { return 1; }

// sub_11b8d40  (orig 0x11b8d40, tailcall)
void main_f_11b8d40() { main::player_2(); }

// sub_11b8d50  (orig 0x11b8d50, tailcall)
void main_f_11b8d50() { main::sub_1197690(); }

// sub_11b9f00  (orig 0x11b9f00, setter-chain)
void main_f_11b9f00(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 96) = a1; *(uint32_t*)((char*)(a0) + 104) = a2; }

// sub_11ba0a0  (orig 0x11ba0a0, setter)
void main_f_11ba0a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_11ba0b0  (orig 0x11ba0b0, ret_only)
void main_f_11ba0b0() {}

// sub_11ba0c0  (orig 0x11ba0c0, ret_only)
void main_f_11ba0c0() {}

// sub_11ba0d0  (orig 0x11ba0d0, ret_only)
void main_f_11ba0d0() {}

// sub_11ba150  (orig 0x11ba150, ret_only)
void main_f_11ba150() {}

// sub_11ba160  (orig 0x11ba160, copy2)
void main_f_11ba160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ba170  (orig 0x11ba170, copy2)
void main_f_11ba170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11bb2e0  (orig 0x11bb2e0, ret_only)
void main_f_11bb2e0() {}

// sub_11bcbc0  (orig 0x11bcbc0, tailcall)
void main_f_11bcbc0() { main::sub_11bc7c0(); }

// sub_11bd1b0  (orig 0x11bd1b0, getter)
uint32_t main_f_11bd1b0(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_11bd1c0  (orig 0x11bd1c0, setter)
void main_f_11bd1c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 120) = a1; }

// sub_11bd8d0  (orig 0x11bd8d0, tailcall)
void main_f_11bd8d0() { main::sub_11bd380(); }

// sub_11bdac0  (orig 0x11bdac0, ret_only)
void main_f_11bdac0() {}

// sub_11bdad0  (orig 0x11bdad0, ret_only)
void main_f_11bdad0() {}

// sub_11bdae0  (orig 0x11bdae0, ret_only)
void main_f_11bdae0() {}

// sub_11bdaf0  (orig 0x11bdaf0, ret_only)
void main_f_11bdaf0() {}

// sub_11bdb00  (orig 0x11bdb00, ret_only)
void main_f_11bdb00() {}

// sub_11be780  (orig 0x11be780, ret_only)
void main_f_11be780() {}

// sub_11be9d0  (orig 0x11be9d0, ret_only)
void main_f_11be9d0() {}

// sub_11be9e0  (orig 0x11be9e0, ret_only)
void main_f_11be9e0() {}

// sub_11be9f0  (orig 0x11be9f0, ret_only)
void main_f_11be9f0() {}

// sub_11bf520  (orig 0x11bf520, tailcall)
void main_f_11bf520() { main::sub_e7c4c0(); }

// sub_11bf530  (orig 0x11bf530, tailcall)
void main_f_11bf530() { main::sub_11bf5a0(); }

// sub_11bf560  (orig 0x11bf560, tailcall)
void main_f_11bf560() { main::sub_11bf5a0(); }

// sub_11bf570  (orig 0x11bf570, tailcall)
void main_f_11bf570() { main::sub_11bf5a0(); }

// sub_11c02d0  (orig 0x11c02d0, tailcall)
void main_f_11c02d0() { main::sub_e7c4c0(); }

// sub_11c02e0  (orig 0x11c02e0, tailcall)
void main_f_11c02e0() { main::sub_11c0350(); }

// sub_11c0310  (orig 0x11c0310, tailcall)
void main_f_11c0310() { main::sub_11c0350(); }

// sub_11c0320  (orig 0x11c0320, tailcall)
void main_f_11c0320() { main::sub_11c0350(); }

// sub_11c6a60  (orig 0x11c6a60, tailcall)
void main_f_11c6a60() { main::sub_11c6800(); }

// sub_11c6a70  (orig 0x11c6a70, tailcall)
void main_f_11c6a70() { main::sub_11c6ae0(); }

// sub_11c6aa0  (orig 0x11c6aa0, tailcall)
void main_f_11c6aa0() { main::sub_11c6ae0(); }

// sub_11c6ab0  (orig 0x11c6ab0, tailcall)
void main_f_11c6ab0() { main::sub_11c6ae0(); }

// sub_11c7370  (orig 0x11c7370, ret_only)
void main_f_11c7370() {}

// sub_11c7380  (orig 0x11c7380, ret_only)
void main_f_11c7380() {}

// sub_11c7390  (orig 0x11c7390, ret_only)
void main_f_11c7390() {}

// sub_11c73a0  (orig 0x11c73a0, ret_only)
void main_f_11c73a0() {}

// sub_11c73b0  (orig 0x11c73b0, ret_only)
void main_f_11c73b0() {}

// sub_11c73c0  (orig 0x11c73c0, ret_only)
void main_f_11c73c0() {}

// sub_11c73d0  (orig 0x11c73d0, ret_only)
void main_f_11c73d0() {}

// sub_11c73e0  (orig 0x11c73e0, ret_only)
void main_f_11c73e0() {}

// sub_11c7e50  (orig 0x11c7e50, ret_only)
void main_f_11c7e50() {}

// sub_11c7e60  (orig 0x11c7e60, copy2)
void main_f_11c7e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c7e70  (orig 0x11c7e70, copy2)
void main_f_11c7e70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c8490  (orig 0x11c8490, ret_only)
void main_f_11c8490() {}

// sub_11c84a0  (orig 0x11c84a0, copy2)
void main_f_11c84a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c84b0  (orig 0x11c84b0, copy2)
void main_f_11c84b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9100  (orig 0x11c9100, ret_only)
void main_f_11c9100() {}

// sub_11c98a0  (orig 0x11c98a0, ret_only)
void main_f_11c98a0() {}

// sub_11c98b0  (orig 0x11c98b0, ret_only)
void main_f_11c98b0() {}

// sub_11c98c0  (orig 0x11c98c0, ret_only)
void main_f_11c98c0() {}

// sub_11c9a00  (orig 0x11c9a00, ret_only)
void main_f_11c9a00() {}

// sub_11c9a10  (orig 0x11c9a10, copy2)
void main_f_11c9a10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9a20  (orig 0x11c9a20, copy2)
void main_f_11c9a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9b50  (orig 0x11c9b50, ret_only)
void main_f_11c9b50() {}

// sub_11c9b60  (orig 0x11c9b60, copy2)
void main_f_11c9b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9b70  (orig 0x11c9b70, copy2)
void main_f_11c9b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9c60  (orig 0x11c9c60, ret_only)
void main_f_11c9c60() {}

// sub_11c9c70  (orig 0x11c9c70, copy2)
void main_f_11c9c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9c80  (orig 0x11c9c80, copy2)
void main_f_11c9c80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9f40  (orig 0x11c9f40, ret_only)
void main_f_11c9f40() {}

// sub_11c9f60  (orig 0x11c9f60, ret_only)
void main_f_11c9f60() {}

// sub_11c9f70  (orig 0x11c9f70, copy2)
void main_f_11c9f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9f80  (orig 0x11c9f80, copy2)
void main_f_11c9f80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9f90  (orig 0x11c9f90, copy2)
void main_f_11c9f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9fa0  (orig 0x11c9fa0, copy2)
void main_f_11c9fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11c9fc0  (orig 0x11c9fc0, ret_only)
void main_f_11c9fc0() {}

// sub_11c9fd0  (orig 0x11c9fd0, ret_only)
void main_f_11c9fd0() {}

// sub_11c9fe0  (orig 0x11c9fe0, ret_only)
void main_f_11c9fe0() {}

// sub_11ca180  (orig 0x11ca180, ret_only)
void main_f_11ca180() {}

// sub_11ca370  (orig 0x11ca370, ret_only)
void main_f_11ca370() {}

// sub_11ca380  (orig 0x11ca380, copy2)
void main_f_11ca380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ca390  (orig 0x11ca390, copy2)
void main_f_11ca390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ca3a0  (orig 0x11ca3a0, copy2)
void main_f_11ca3a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ca3b0  (orig 0x11ca3b0, copy2)
void main_f_11ca3b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ca500  (orig 0x11ca500, ret_only)
void main_f_11ca500() {}

// sub_11ca510  (orig 0x11ca510, tailcall)
void main_f_11ca510() { main::sub_ce0(); }

// sub_11ca580  (orig 0x11ca580, ret_only)
void main_f_11ca580() {}

// sub_11ca590  (orig 0x11ca590, tailcall)
void main_f_11ca590() { main::sub_ce0(); }

// sub_11ca5e0  (orig 0x11ca5e0, copy2)
void main_f_11ca5e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ca5f0  (orig 0x11ca5f0, copy2)
void main_f_11ca5f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11cb870  (orig 0x11cb870, tailcall)
void main_f_11cb870() { main::sub_11cb880(); }

// sub_11cc3a0  (orig 0x11cc3a0, setter)
void main_f_11cc3a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 700) = a1; }

// sub_11cd2e0  (orig 0x11cd2e0, setter)
void main_f_11cd2e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 184) = a1; }

// sub_11cd3f0  (orig 0x11cd3f0, tailcall)
void main_f_11cd3f0() { main::sub_11cd2f0(); }

// sub_11cdba0  (orig 0x11cdba0, tailcall)
void main_f_11cdba0() { main::Stop_Camp_Cooking_Fire_lp(); }

// sub_11d18f0  (orig 0x11d18f0, getter)
float main_f_11d18f0(void* a0) { return *(float*)((char*)(a0) + 176); }

// sub_11d1900  (orig 0x11d1900, ret_only)
void main_f_11d1900() {}

// sub_11d1a90  (orig 0x11d1a90, ret_only)
void main_f_11d1a90() {}

// sub_11d1aa0  (orig 0x11d1aa0, ret_only)
void main_f_11d1aa0() {}

// sub_11d1ab0  (orig 0x11d1ab0, ret_only)
void main_f_11d1ab0() {}

// sub_11d2670  (orig 0x11d2670, getter)
uint8_t main_f_11d2670(void* a0) { return *(uint8_t*)((char*)(a0) + 129); }

// sub_11d2680  (orig 0x11d2680, getter)
uint8_t main_f_11d2680(void* a0) { return *(uint8_t*)((char*)(a0) + 130); }

// sub_11d2690  (orig 0x11d2690, getter)
uint32_t main_f_11d2690(void* a0) { return *(uint32_t*)((char*)(a0) + 124); }

// sub_11d26a0  (orig 0x11d26a0, getter)
uint8_t main_f_11d26a0(void* a0) { return *(uint8_t*)((char*)(a0) + 128); }

// sub_11d2840  (orig 0x11d2840, ret_only)
void main_f_11d2840() {}

// sub_11d2850  (orig 0x11d2850, ret_only)
void main_f_11d2850() {}

// sub_11d2860  (orig 0x11d2860, ret_only)
void main_f_11d2860() {}

// sub_11d2ca0  (orig 0x11d2ca0, tailcall)
void main_f_11d2ca0() { main::sub_11cdcf0(); }

// sub_11d5d10  (orig 0x11d5d10, ret_only)
void main_f_11d5d10() {}

// sub_11d66d0  (orig 0x11d66d0, tailcall)
void main_f_11d66d0() { main::sub_11d64c0(); }

// sub_11d7390  (orig 0x11d7390, getter)
float main_f_11d7390(void* a0) { return *(float*)((char*)(a0) + 336); }

// sub_11d73a0  (orig 0x11d73a0, getter)
uint8_t main_f_11d73a0(void* a0) { return *(uint8_t*)((char*)(a0) + 548); }

// sub_11d7630  (orig 0x11d7630, ret_only)
void main_f_11d7630() {}

// sub_11d7750  (orig 0x11d7750, ret_only)
void main_f_11d7750() {}

// sub_11d7760  (orig 0x11d7760, copy2)
void main_f_11d7760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11d7770  (orig 0x11d7770, copy2)
void main_f_11d7770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11d7a60  (orig 0x11d7a60, tailcall)
void main_f_11d7a60() { main::sub_11d7820(); }

// sub_11d7e40  (orig 0x11d7e40, ret_only)
void main_f_11d7e40() {}

// sub_11d9980  (orig 0x11d9980, tailcall)
void main_f_11d9980() { main::sub_11d9880(); }

// sub_11db8d0  (orig 0x11db8d0, ret_only)
void main_f_11db8d0() {}

// sub_11dc380  (orig 0x11dc380, tailcall)
void main_f_11dc380() { main::sub_11dbf40(); }

// sub_11deb10  (orig 0x11deb10, tailcall)
void main_f_11deb10() { main::sub_11deb20(); }

// sub_11e1220  (orig 0x11e1220, ret_only)
void main_f_11e1220() {}

// sub_11e1ea0  (orig 0x11e1ea0, ret_only)
void main_f_11e1ea0() {}

// sub_11e1eb0  (orig 0x11e1eb0, copy2)
void main_f_11e1eb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e1ec0  (orig 0x11e1ec0, copy2)
void main_f_11e1ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e1f30  (orig 0x11e1f30, ret_only)
void main_f_11e1f30() {}

// sub_11e1f40  (orig 0x11e1f40, copy2)
void main_f_11e1f40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e1f50  (orig 0x11e1f50, copy2)
void main_f_11e1f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e2510  (orig 0x11e2510, ret_only)
void main_f_11e2510() {}

// sub_11e2570  (orig 0x11e2570, ret_only)
void main_f_11e2570() {}

// sub_11e2580  (orig 0x11e2580, copy2)
void main_f_11e2580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e2590  (orig 0x11e2590, copy2)
void main_f_11e2590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e2670  (orig 0x11e2670, ret_only)
void main_f_11e2670() {}

// sub_11e26c0  (orig 0x11e26c0, copy2)
void main_f_11e26c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e26d0  (orig 0x11e26d0, copy2)
void main_f_11e26d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e43e0  (orig 0x11e43e0, ret_only)
void main_f_11e43e0() {}

// sub_11e43f0  (orig 0x11e43f0, ret_only)
void main_f_11e43f0() {}

// sub_11e4400  (orig 0x11e4400, ret_only)
void main_f_11e4400() {}

// sub_11e4410  (orig 0x11e4410, ret_only)
void main_f_11e4410() {}

// sub_11e44f0  (orig 0x11e44f0, ret_only)
void main_f_11e44f0() {}

// sub_11e4580  (orig 0x11e4580, ret_only)
void main_f_11e4580() {}

// sub_11e45c0  (orig 0x11e45c0, ret_only)
void main_f_11e45c0() {}

// sub_11e45d0  (orig 0x11e45d0, copy2)
void main_f_11e45d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e45e0  (orig 0x11e45e0, copy2)
void main_f_11e45e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e45f0  (orig 0x11e45f0, ret_only)
void main_f_11e45f0() {}

// sub_11e4600  (orig 0x11e4600, ret_only)
void main_f_11e4600() {}

// sub_11e4610  (orig 0x11e4610, ret_only)
void main_f_11e4610() {}

// sub_11e4620  (orig 0x11e4620, ret_only)
void main_f_11e4620() {}

// sub_11e46d0  (orig 0x11e46d0, ret_only)
void main_f_11e46d0() {}

// sub_11e46e0  (orig 0x11e46e0, copy2)
void main_f_11e46e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e46f0  (orig 0x11e46f0, copy2)
void main_f_11e46f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11e4c40  (orig 0x11e4c40, setter)
void main_f_11e4c40(void* a0, float a1) { *(float*)((char*)(a0) + 276) = a1; }

// sub_11e5d60  (orig 0x11e5d60, tailcall)
void main_f_11e5d60() { main::sub_11e6110(); }

// sub_11e5f30  (orig 0x11e5f30, tailcall)
void main_f_11e5f30() { main::sub_11e6110(); }

// sub_11e5f40  (orig 0x11e5f40, tailcall)
void main_f_11e5f40() { main::sub_11e6110(); }

// sub_11e6490  (orig 0x11e6490, tailcall)
void main_f_11e6490() { main::Stop_Camp_Cooking_PotBoiling_lp(); }

// sub_11e64c0  (orig 0x11e64c0, ret_only)
void main_f_11e64c0() {}

// sub_11e7d80  (orig 0x11e7d80, tailcall)
void main_f_11e7d80() { main::sub_11e7b10(); }

// sub_11e7db0  (orig 0x11e7db0, ret_only)
void main_f_11e7db0() {}

// sub_11ea0e0  (orig 0x11ea0e0, ret_only)
void main_f_11ea0e0() {}

// sub_11ea100  (orig 0x11ea100, ret_only)
void main_f_11ea100() {}

// sub_11ea110  (orig 0x11ea110, copy2)
void main_f_11ea110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea120  (orig 0x11ea120, copy2)
void main_f_11ea120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea130  (orig 0x11ea130, copy2)
void main_f_11ea130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea140  (orig 0x11ea140, copy2)
void main_f_11ea140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea190  (orig 0x11ea190, ret_only)
void main_f_11ea190() {}

// sub_11ea1a0  (orig 0x11ea1a0, copy2)
void main_f_11ea1a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea1b0  (orig 0x11ea1b0, copy2)
void main_f_11ea1b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea2e0  (orig 0x11ea2e0, ret_only)
void main_f_11ea2e0() {}

// sub_11ea300  (orig 0x11ea300, ret_only)
void main_f_11ea300() {}

// sub_11ea310  (orig 0x11ea310, copy2)
void main_f_11ea310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea320  (orig 0x11ea320, copy2)
void main_f_11ea320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea340  (orig 0x11ea340, ret_only)
void main_f_11ea340() {}

// sub_11ea350  (orig 0x11ea350, copy2)
void main_f_11ea350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea360  (orig 0x11ea360, copy2)
void main_f_11ea360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea370  (orig 0x11ea370, copy2)
void main_f_11ea370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea380  (orig 0x11ea380, copy2)
void main_f_11ea380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea650  (orig 0x11ea650, ret_only)
void main_f_11ea650() {}

// sub_11ea700  (orig 0x11ea700, ret_only)
void main_f_11ea700() {}

// sub_11ea710  (orig 0x11ea710, copy2)
void main_f_11ea710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea720  (orig 0x11ea720, copy2)
void main_f_11ea720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea730  (orig 0x11ea730, copy2)
void main_f_11ea730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea740  (orig 0x11ea740, copy2)
void main_f_11ea740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea7d0  (orig 0x11ea7d0, ret_only)
void main_f_11ea7d0() {}

// sub_11ea7f0  (orig 0x11ea7f0, ret_only)
void main_f_11ea7f0() {}

// sub_11ea800  (orig 0x11ea800, copy2)
void main_f_11ea800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea810  (orig 0x11ea810, copy2)
void main_f_11ea810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea820  (orig 0x11ea820, copy2)
void main_f_11ea820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea830  (orig 0x11ea830, copy2)
void main_f_11ea830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea880  (orig 0x11ea880, ret_only)
void main_f_11ea880() {}

// sub_11ea890  (orig 0x11ea890, copy2)
void main_f_11ea890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea8a0  (orig 0x11ea8a0, copy2)
void main_f_11ea8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea8c0  (orig 0x11ea8c0, ret_only)
void main_f_11ea8c0() {}

// sub_11ea8d0  (orig 0x11ea8d0, copy2)
void main_f_11ea8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ea8e0  (orig 0x11ea8e0, copy2)
void main_f_11ea8e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebbe0  (orig 0x11ebbe0, ret_only)
void main_f_11ebbe0() {}

// sub_11ebbf0  (orig 0x11ebbf0, copy2)
void main_f_11ebbf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebc00  (orig 0x11ebc00, copy2)
void main_f_11ebc00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebc20  (orig 0x11ebc20, ret_only)
void main_f_11ebc20() {}

// sub_11ebc30  (orig 0x11ebc30, copy2)
void main_f_11ebc30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebc40  (orig 0x11ebc40, copy2)
void main_f_11ebc40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebd20  (orig 0x11ebd20, ret_only)
void main_f_11ebd20() {}

// sub_11ebd30  (orig 0x11ebd30, copy2)
void main_f_11ebd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebd40  (orig 0x11ebd40, copy2)
void main_f_11ebd40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebd90  (orig 0x11ebd90, ret_only)
void main_f_11ebd90() {}

// sub_11ebda0  (orig 0x11ebda0, copy2)
void main_f_11ebda0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebdb0  (orig 0x11ebdb0, copy2)
void main_f_11ebdb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebeb0  (orig 0x11ebeb0, ret_only)
void main_f_11ebeb0() {}

// sub_11ebec0  (orig 0x11ebec0, copy2)
void main_f_11ebec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebed0  (orig 0x11ebed0, copy2)
void main_f_11ebed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ebee0  (orig 0x11ebee0, ret_only)
void main_f_11ebee0() {}

// sub_11ebef0  (orig 0x11ebef0, ret_only)
void main_f_11ebef0() {}

// sub_11ebf00  (orig 0x11ebf00, ret_only)
void main_f_11ebf00() {}

// sub_11ebf10  (orig 0x11ebf10, ret_only)
void main_f_11ebf10() {}

// sub_11ec9f0  (orig 0x11ec9f0, tailcall)
void main_f_11ec9f0() { main::sub_11ec880(); }

// sub_11ee270  (orig 0x11ee270, ret_only)
void main_f_11ee270() {}

// sub_11ee280  (orig 0x11ee280, copy2)
void main_f_11ee280(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee290  (orig 0x11ee290, copy2)
void main_f_11ee290(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee2b0  (orig 0x11ee2b0, ret_only)
void main_f_11ee2b0() {}

// sub_11ee2c0  (orig 0x11ee2c0, copy2)
void main_f_11ee2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee2d0  (orig 0x11ee2d0, copy2)
void main_f_11ee2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee2f0  (orig 0x11ee2f0, ret_only)
void main_f_11ee2f0() {}

// sub_11ee300  (orig 0x11ee300, copy2)
void main_f_11ee300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee310  (orig 0x11ee310, copy2)
void main_f_11ee310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee360  (orig 0x11ee360, ret_only)
void main_f_11ee360() {}

// sub_11ee370  (orig 0x11ee370, copy2)
void main_f_11ee370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee380  (orig 0x11ee380, copy2)
void main_f_11ee380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee4b0  (orig 0x11ee4b0, ret_only)
void main_f_11ee4b0() {}

// sub_11ee4c0  (orig 0x11ee4c0, copy2)
void main_f_11ee4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee4d0  (orig 0x11ee4d0, copy2)
void main_f_11ee4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11ee4e0  (orig 0x11ee4e0, ret_only)
void main_f_11ee4e0() {}

// sub_11ee4f0  (orig 0x11ee4f0, ret_only)
void main_f_11ee4f0() {}

// sub_11ee500  (orig 0x11ee500, ret_only)
void main_f_11ee500() {}

// sub_11ee510  (orig 0x11ee510, ret_only)
void main_f_11ee510() {}

// sub_11eebc0  (orig 0x11eebc0, tailcall)
void main_f_11eebc0() { main::sub_11ee760(); }

// sub_11eebf0  (orig 0x11eebf0, ret_only)
void main_f_11eebf0() {}

// sub_11f1630  (orig 0x11f1630, ret_only)
void main_f_11f1630() {}

// sub_11f1650  (orig 0x11f1650, ret_only)
void main_f_11f1650() {}

// sub_11f1660  (orig 0x11f1660, copy2)
void main_f_11f1660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1670  (orig 0x11f1670, copy2)
void main_f_11f1670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1680  (orig 0x11f1680, copy2)
void main_f_11f1680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1690  (orig 0x11f1690, copy2)
void main_f_11f1690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f16e0  (orig 0x11f16e0, ret_only)
void main_f_11f16e0() {}

// sub_11f16f0  (orig 0x11f16f0, copy2)
void main_f_11f16f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1700  (orig 0x11f1700, copy2)
void main_f_11f1700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1840  (orig 0x11f1840, ret_only)
void main_f_11f1840() {}

// sub_11f18f0  (orig 0x11f18f0, ret_only)
void main_f_11f18f0() {}

// sub_11f1910  (orig 0x11f1910, ret_only)
void main_f_11f1910() {}

// sub_11f1920  (orig 0x11f1920, copy2)
void main_f_11f1920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1930  (orig 0x11f1930, copy2)
void main_f_11f1930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1940  (orig 0x11f1940, copy2)
void main_f_11f1940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1950  (orig 0x11f1950, copy2)
void main_f_11f1950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1960  (orig 0x11f1960, copy2)
void main_f_11f1960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1970  (orig 0x11f1970, copy2)
void main_f_11f1970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1990  (orig 0x11f1990, ret_only)
void main_f_11f1990() {}

// sub_11f19a0  (orig 0x11f19a0, copy2)
void main_f_11f19a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f19b0  (orig 0x11f19b0, copy2)
void main_f_11f19b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1a40  (orig 0x11f1a40, ret_only)
void main_f_11f1a40() {}

// sub_11f1a50  (orig 0x11f1a50, copy2)
void main_f_11f1a50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1a60  (orig 0x11f1a60, copy2)
void main_f_11f1a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1b20  (orig 0x11f1b20, ret_only)
void main_f_11f1b20() {}

// sub_11f1b30  (orig 0x11f1b30, copy2)
void main_f_11f1b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1b40  (orig 0x11f1b40, copy2)
void main_f_11f1b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1b90  (orig 0x11f1b90, ret_only)
void main_f_11f1b90() {}

// sub_11f1ba0  (orig 0x11f1ba0, copy2)
void main_f_11f1ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1bb0  (orig 0x11f1bb0, copy2)
void main_f_11f1bb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f1e90  (orig 0x11f1e90, tailcall)
void main_f_11f1e90() { main::sub_11f1d00(); }

// sub_11f4670  (orig 0x11f4670, ret_only)
void main_f_11f4670() {}

// sub_11f4680  (orig 0x11f4680, ret_only)
void main_f_11f4680() {}

// sub_11f4900  (orig 0x11f4900, mov_ret)
uint32_t main_f_11f4900() { return 80; }

// sub_11f4a70  (orig 0x11f4a70, ret_only)
void main_f_11f4a70() {}

// sub_11f4a80  (orig 0x11f4a80, ret_only)
void main_f_11f4a80() {}

// sub_11f4a90  (orig 0x11f4a90, ret_only)
void main_f_11f4a90() {}

// sub_11f4aa0  (orig 0x11f4aa0, ret_only)
void main_f_11f4aa0() {}

// sub_11f4ab0  (orig 0x11f4ab0, ret_only)
void main_f_11f4ab0() {}

// sub_11f4ac0  (orig 0x11f4ac0, ret_only)
void main_f_11f4ac0() {}

// sub_11f4e30  (orig 0x11f4e30, mov_ret)
uint32_t main_f_11f4e30() { return 80; }

// sub_11f4e40  (orig 0x11f4e40, ret_only)
void main_f_11f4e40() {}

// sub_11f4e50  (orig 0x11f4e50, ret_only)
void main_f_11f4e50() {}

// sub_11f4e60  (orig 0x11f4e60, ret_only)
void main_f_11f4e60() {}

// sub_11f52b0  (orig 0x11f52b0, tailcall)
void main_f_11f52b0() { main::sub_11f50c0(); }

// sub_11f5da0  (orig 0x11f5da0, ret_only)
void main_f_11f5da0() {}

// sub_11f5e50  (orig 0x11f5e50, ret_only)
void main_f_11f5e50() {}

// sub_11f5f80  (orig 0x11f5f80, ret_only)
void main_f_11f5f80() {}

// sub_11f6320  (orig 0x11f6320, getter)
uint64_t main_f_11f6320(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_11f65d0  (orig 0x11f65d0, ret_only)
void main_f_11f65d0() {}

// sub_11f6e50  (orig 0x11f6e50, ret_only)
void main_f_11f6e50() {}

// sub_11f6e60  (orig 0x11f6e60, copy2)
void main_f_11f6e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f6e70  (orig 0x11f6e70, copy2)
void main_f_11f6e70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f78d0  (orig 0x11f78d0, ret_only)
void main_f_11f78d0() {}

// sub_11f78e0  (orig 0x11f78e0, tailcall)
void main_f_11f78e0() { main::sub_e7c4c0(); }

// sub_11f78f0  (orig 0x11f78f0, tailcall)
void main_f_11f78f0() { main::sub_11f79a0(); }

// sub_11f7920  (orig 0x11f7920, tailcall)
void main_f_11f7920() { main::sub_11f79a0(); }

// sub_11f7930  (orig 0x11f7930, tailcall)
void main_f_11f7930() { main::sub_11f79a0(); }

// sub_11f7970  (orig 0x11f7970, ret_only)
void main_f_11f7970() {}

// sub_11f7980  (orig 0x11f7980, copy2)
void main_f_11f7980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f7990  (orig 0x11f7990, copy2)
void main_f_11f7990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11f8600  (orig 0x11f8600, ret_only)
void main_f_11f8600() {}

// sub_11f8610  (orig 0x11f8610, tailcall)
void main_f_11f8610() { main::sub_e7c4c0(); }

// sub_11f8620  (orig 0x11f8620, tailcall)
void main_f_11f8620() { main::sub_11f8690(); }

// sub_11f8650  (orig 0x11f8650, tailcall)
void main_f_11f8650() { main::sub_11f8690(); }

// sub_11f8660  (orig 0x11f8660, tailcall)
void main_f_11f8660() { main::sub_11f8690(); }

// sub_11fae40  (orig 0x11fae40, tailcall)
void main_f_11fae40() { main::sub_11fb0b0(); }

// sub_11faf70  (orig 0x11faf70, tailcall)
void main_f_11faf70() { main::sub_11fb0b0(); }

// sub_11faf80  (orig 0x11faf80, tailcall)
void main_f_11faf80() { main::sub_11fb0b0(); }

// sub_11fb1f0  (orig 0x11fb1f0, ret_only)
void main_f_11fb1f0() {}

// sub_11fb200  (orig 0x11fb200, copy2)
void main_f_11fb200(void* a0, void* a1) { *(uint16_t*)((char*)(a1)) = *(uint16_t*)((char*)(a0)); }

// sub_11fb210  (orig 0x11fb210, copy2)
void main_f_11fb210(void* a0, void* a1) { *(uint16_t*)((char*)(a1)) = *(uint16_t*)((char*)(a0)); }

// sub_11fb310  (orig 0x11fb310, ret_only)
void main_f_11fb310() {}

// sub_11fb320  (orig 0x11fb320, copy2)
void main_f_11fb320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fb330  (orig 0x11fb330, copy2)
void main_f_11fb330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fb4d0  (orig 0x11fb4d0, ret_only)
void main_f_11fb4d0() {}

// sub_11fcfc0  (orig 0x11fcfc0, ret_only)
void main_f_11fcfc0() {}

// sub_11fd070  (orig 0x11fd070, tailcall)
void main_f_11fd070() { main::sub_11fd2e0(); }

// sub_11fd120  (orig 0x11fd120, tailcall)
void main_f_11fd120() { main::sub_11fd2e0(); }

// sub_11fd130  (orig 0x11fd130, tailcall)
void main_f_11fd130() { main::sub_11fd2e0(); }

// sub_11fd460  (orig 0x11fd460, ret_only)
void main_f_11fd460() {}

// sub_11fd470  (orig 0x11fd470, copy2)
void main_f_11fd470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fd480  (orig 0x11fd480, copy2)
void main_f_11fd480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fd780  (orig 0x11fd780, ret_only)
void main_f_11fd780() {}

// sub_11fd790  (orig 0x11fd790, ret_only)
void main_f_11fd790() {}

// sub_11fd7a0  (orig 0x11fd7a0, ret_only)
void main_f_11fd7a0() {}

// sub_11fd7c0  (orig 0x11fd7c0, ret_only)
void main_f_11fd7c0() {}

// sub_11fd7d0  (orig 0x11fd7d0, copy2)
void main_f_11fd7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fd7e0  (orig 0x11fd7e0, copy2)
void main_f_11fd7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11fd980  (orig 0x11fd980, ret_only)
void main_f_11fd980() {}

// sub_11fd990  (orig 0x11fd990, ret_only)
void main_f_11fd990() {}

// sub_11fd9a0  (orig 0x11fd9a0, ret_only)
void main_f_11fd9a0() {}

// sub_11fdaa0  (orig 0x11fdaa0, ret_only)
void main_f_11fdaa0() {}

// sub_11fefe0  (orig 0x11fefe0, ret_only)
void main_f_11fefe0() {}

// sub_12001d0  (orig 0x12001d0, tailcall)
void main_f_12001d0() { main::sub_1200540(); }

// sub_1200380  (orig 0x1200380, tailcall)
void main_f_1200380() { main::sub_1200540(); }

// sub_1200390  (orig 0x1200390, tailcall)
void main_f_1200390() { main::sub_1200540(); }

// sub_1200970  (orig 0x1200970, ret_only)
void main_f_1200970() {}

// sub_1200980  (orig 0x1200980, copy2)
void main_f_1200980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1200990  (orig 0x1200990, copy2)
void main_f_1200990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1200c70  (orig 0x1200c70, ret_only)
void main_f_1200c70() {}

// sub_1201360  (orig 0x1201360, ret_only)
void main_f_1201360() {}

// sub_12013f0  (orig 0x12013f0, ret_only)
void main_f_12013f0() {}

// sub_1201500  (orig 0x1201500, ret_only)
void main_f_1201500() {}

// sub_1201b00  (orig 0x1201b00, ret_only)
void main_f_1201b00() {}

// sub_1201dd0  (orig 0x1201dd0, ret_only)
void main_f_1201dd0() {}

// sub_1205270  (orig 0x1205270, tailcall)
void main_f_1205270() { main::sub_e7c4c0(); }

// sub_1205500  (orig 0x1205500, ret_only)
void main_f_1205500() {}

// sub_1205510  (orig 0x1205510, copy2)
void main_f_1205510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1205520  (orig 0x1205520, copy2)
void main_f_1205520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120ae90  (orig 0x120ae90, ret_only)
void main_f_120ae90() {}

// sub_120aea0  (orig 0x120aea0, ret_only)
void main_f_120aea0() {}

// sub_120b0d0  (orig 0x120b0d0, tailcall)
void main_f_120b0d0() { main::sub_120aeb0(); }

// sub_120b0e0  (orig 0x120b0e0, tailcall)
void main_f_120b0e0() { main::sub_120b5e0(); }

// sub_120b0f0  (orig 0x120b0f0, mov_ret)
uint32_t main_f_120b0f0() { return 70; }

// sub_120b120  (orig 0x120b120, tailcall)
void main_f_120b120() { main::sub_120b5e0(); }

// sub_120b130  (orig 0x120b130, tailcall)
void main_f_120b130() { main::sub_120b5e0(); }

// sub_120b160  (orig 0x120b160, ret_only)
void main_f_120b160() {}

// sub_120b170  (orig 0x120b170, ret_only)
void main_f_120b170() {}

// sub_120b180  (orig 0x120b180, ret_only)
void main_f_120b180() {}

// sub_120b190  (orig 0x120b190, ret_only)
void main_f_120b190() {}

// sub_120b1a0  (orig 0x120b1a0, ret_only)
void main_f_120b1a0() {}

// sub_120b1b0  (orig 0x120b1b0, ret_only)
void main_f_120b1b0() {}

// sub_120b540  (orig 0x120b540, mov_ret)
uint32_t main_f_120b540() { return 70; }

// sub_120b550  (orig 0x120b550, ret_only)
void main_f_120b550() {}

// sub_120b560  (orig 0x120b560, ret_only)
void main_f_120b560() {}

// sub_120bae0  (orig 0x120bae0, tailcall)
void main_f_120bae0() { main::sub_120b8f0(); }

// sub_120c500  (orig 0x120c500, ret_only)
void main_f_120c500() {}

// sub_120c5b0  (orig 0x120c5b0, ret_only)
void main_f_120c5b0() {}

// sub_120c6e0  (orig 0x120c6e0, ret_only)
void main_f_120c6e0() {}

// sub_120cba0  (orig 0x120cba0, getter)
uint64_t main_f_120cba0(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_120ce50  (orig 0x120ce50, ret_only)
void main_f_120ce50() {}

// sub_120ce60  (orig 0x120ce60, copy2)
void main_f_120ce60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120ce70  (orig 0x120ce70, copy2)
void main_f_120ce70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120ce80  (orig 0x120ce80, mov_ret)
uint32_t main_f_120ce80() { return 0; }

// sub_120ce90  (orig 0x120ce90, ret_only)
void main_f_120ce90() {}

// sub_120cea0  (orig 0x120cea0, ret_only)
void main_f_120cea0() {}

// sub_120ceb0  (orig 0x120ceb0, ret_only)
void main_f_120ceb0() {}

// sub_120cf50  (orig 0x120cf50, ret_only)
void main_f_120cf50() {}

// sub_120cf60  (orig 0x120cf60, copy2)
void main_f_120cf60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120cf70  (orig 0x120cf70, copy2)
void main_f_120cf70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120cf90  (orig 0x120cf90, ret_only)
void main_f_120cf90() {}

// sub_120cfa0  (orig 0x120cfa0, copy2)
void main_f_120cfa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120cfb0  (orig 0x120cfb0, copy2)
void main_f_120cfb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d080  (orig 0x120d080, ret_only)
void main_f_120d080() {}

// sub_120d090  (orig 0x120d090, copy2)
void main_f_120d090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d0a0  (orig 0x120d0a0, copy2)
void main_f_120d0a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d0c0  (orig 0x120d0c0, ret_only)
void main_f_120d0c0() {}

// sub_120d0d0  (orig 0x120d0d0, copy2)
void main_f_120d0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d0e0  (orig 0x120d0e0, copy2)
void main_f_120d0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d100  (orig 0x120d100, ret_only)
void main_f_120d100() {}

// sub_120d110  (orig 0x120d110, copy2)
void main_f_120d110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d120  (orig 0x120d120, copy2)
void main_f_120d120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d1f0  (orig 0x120d1f0, ret_only)
void main_f_120d1f0() {}

// sub_120d200  (orig 0x120d200, copy2)
void main_f_120d200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d210  (orig 0x120d210, copy2)
void main_f_120d210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d8c0  (orig 0x120d8c0, ret_only)
void main_f_120d8c0() {}

// sub_120d8d0  (orig 0x120d8d0, copy2)
void main_f_120d8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d8e0  (orig 0x120d8e0, copy2)
void main_f_120d8e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d910  (orig 0x120d910, ret_only)
void main_f_120d910() {}

// sub_120d920  (orig 0x120d920, copy2)
void main_f_120d920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d930  (orig 0x120d930, copy2)
void main_f_120d930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120d940  (orig 0x120d940, mov_ret)
uint32_t main_f_120d940() { return 0; }

// sub_120d950  (orig 0x120d950, ret_only)
void main_f_120d950() {}

// sub_120d960  (orig 0x120d960, ret_only)
void main_f_120d960() {}

// sub_120d970  (orig 0x120d970, ret_only)
void main_f_120d970() {}

// sub_120dad0  (orig 0x120dad0, ret_only)
void main_f_120dad0() {}

// sub_120dbf0  (orig 0x120dbf0, ret_only)
void main_f_120dbf0() {}

// sub_120dc00  (orig 0x120dc00, copy2)
void main_f_120dc00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120dc10  (orig 0x120dc10, copy2)
void main_f_120dc10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120dce0  (orig 0x120dce0, ret_only)
void main_f_120dce0() {}

// sub_120dcf0  (orig 0x120dcf0, copy2)
void main_f_120dcf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120dd00  (orig 0x120dd00, copy2)
void main_f_120dd00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120dd50  (orig 0x120dd50, ret_only)
void main_f_120dd50() {}

// sub_120dd60  (orig 0x120dd60, ret_only)
void main_f_120dd60() {}

// sub_120dd70  (orig 0x120dd70, ret_only)
void main_f_120dd70() {}

// sub_120de30  (orig 0x120de30, ret_only)
void main_f_120de30() {}

// sub_120de40  (orig 0x120de40, copy2)
void main_f_120de40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120de50  (orig 0x120de50, copy2)
void main_f_120de50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120f360  (orig 0x120f360, ret_only)
void main_f_120f360() {}

// sub_120f4d0  (orig 0x120f4d0, copy2)
void main_f_120f4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120f4e0  (orig 0x120f4e0, copy2)
void main_f_120f4e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_120f7c0  (orig 0x120f7c0, tailcall)
void main_f_120f7c0() { main::sub_120f670(); }

// sub_120f9e0  (orig 0x120f9e0, setter)
void main_f_120f9e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 112) = a1; }

// sub_1210230  (orig 0x1210230, getter)
uint32_t main_f_1210230(void* a0) { return *(uint32_t*)((char*)(a0) + 320); }

// sub_1210240  (orig 0x1210240, ptr_add)
void* main_f_1210240(void* a0) { return (char*)a0 + 328; }

// sub_1210f50  (orig 0x1210f50, ret_only)
void main_f_1210f50() {}

// sub_1210f60  (orig 0x1210f60, copy2)
void main_f_1210f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1210f70  (orig 0x1210f70, copy2)
void main_f_1210f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1210f90  (orig 0x1210f90, ret_only)
void main_f_1210f90() {}

// sub_1210fa0  (orig 0x1210fa0, copy2)
void main_f_1210fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1210fb0  (orig 0x1210fb0, copy2)
void main_f_1210fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12121f0  (orig 0x12121f0, ret_only)
void main_f_12121f0() {}

// sub_1213ce0  (orig 0x1213ce0, ret_only)
void main_f_1213ce0() {}

// sub_1215350  (orig 0x1215350, getter)
uint32_t main_f_1215350(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_1215d60  (orig 0x1215d60, getter)
uint8_t main_f_1215d60(void* a0) { return *(uint8_t*)((char*)(a0) + 160); }

// sub_1216490  (orig 0x1216490, getter)
uint64_t main_f_1216490(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_1216540  (orig 0x1216540, ret_only)
void main_f_1216540() {}

// sub_12165b0  (orig 0x12165b0, getter-chain)
uint64_t main_f_12165b0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 104))) + 152); }

// sub_1216a50  (orig 0x1216a50, ret_only)
void main_f_1216a50() {}

// sub_1216a60  (orig 0x1216a60, ret_only)
void main_f_1216a60() {}

// sub_1216b70  (orig 0x1216b70, tailcall)
void main_f_1216b70() { main::sub_1217300(); }

// sub_1216c80  (orig 0x1216c80, tailcall)
void main_f_1216c80() { main::sub_1217300(); }

// sub_1216c90  (orig 0x1216c90, tailcall)
void main_f_1216c90() { main::sub_1217300(); }

// sub_1216ff0  (orig 0x1216ff0, ret_only)
void main_f_1216ff0() {}

// sub_1217000  (orig 0x1217000, ret_only)
void main_f_1217000() {}

// sub_1217010  (orig 0x1217010, ret_only)
void main_f_1217010() {}

// sub_1217020  (orig 0x1217020, ret_only)
void main_f_1217020() {}

// sub_1217030  (orig 0x1217030, ret_only)
void main_f_1217030() {}

// sub_1217040  (orig 0x1217040, ret_only)
void main_f_1217040() {}

// sub_1217050  (orig 0x1217050, ret_only)
void main_f_1217050() {}

// sub_1217440  (orig 0x1217440, ret_only)
void main_f_1217440() {}

// sub_1217450  (orig 0x1217450, copy2)
void main_f_1217450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1217460  (orig 0x1217460, copy2)
void main_f_1217460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1217480  (orig 0x1217480, ret_only)
void main_f_1217480() {}

// sub_1217490  (orig 0x1217490, ret_only)
void main_f_1217490() {}

// sub_12174a0  (orig 0x12174a0, ret_only)
void main_f_12174a0() {}

// sub_1217500  (orig 0x1217500, ret_only)
void main_f_1217500() {}

// sub_1217510  (orig 0x1217510, copy2)
void main_f_1217510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1217520  (orig 0x1217520, copy2)
void main_f_1217520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_121e2d0  (orig 0x121e2d0, tailcall)
void main_f_121e2d0() { main::sub_121e100(); }

// sub_121e2e0  (orig 0x121e2e0, tailcall)
void main_f_121e2e0() { main::sub_121e460(); }

// sub_121e310  (orig 0x121e310, tailcall)
void main_f_121e310() { main::sub_121e460(); }

// sub_121e320  (orig 0x121e320, tailcall)
void main_f_121e320() { main::sub_121e460(); }

// sub_121e350  (orig 0x121e350, ret_only)
void main_f_121e350() {}

// sub_121e360  (orig 0x121e360, ret_only)
void main_f_121e360() {}

// sub_121e370  (orig 0x121e370, ret_only)
void main_f_121e370() {}

// sub_121e380  (orig 0x121e380, ret_only)
void main_f_121e380() {}

// sub_121e430  (orig 0x121e430, ret_only)
void main_f_121e430() {}

// sub_121f8c0  (orig 0x121f8c0, ret_only)
void main_f_121f8c0() {}

// sub_121fe80  (orig 0x121fe80, ret_only)
void main_f_121fe80() {}

// sub_121fec0  (orig 0x121fec0, ret_only)
void main_f_121fec0() {}

// sub_121fed0  (orig 0x121fed0, copy2)
void main_f_121fed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_121fee0  (orig 0x121fee0, copy2)
void main_f_121fee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_121ff00  (orig 0x121ff00, ret_only)
void main_f_121ff00() {}

// sub_121ff10  (orig 0x121ff10, copy2)
void main_f_121ff10(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_121ff20  (orig 0x121ff20, copy2)
void main_f_121ff20(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_121ff40  (orig 0x121ff40, ret_only)
void main_f_121ff40() {}

// sub_121ff50  (orig 0x121ff50, copy2)
void main_f_121ff50(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_121ff60  (orig 0x121ff60, copy2)
void main_f_121ff60(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_12201f0  (orig 0x12201f0, ret_only)
void main_f_12201f0() {}

// sub_1220200  (orig 0x1220200, copy2)
void main_f_1220200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1220210  (orig 0x1220210, copy2)
void main_f_1220210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12202c0  (orig 0x12202c0, ret_only)
void main_f_12202c0() {}

// sub_12202d0  (orig 0x12202d0, copy2)
void main_f_12202d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12202e0  (orig 0x12202e0, copy2)
void main_f_12202e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1220b30  (orig 0x1220b30, ret_only)
void main_f_1220b30() {}

// sub_1220b40  (orig 0x1220b40, ret_only)
void main_f_1220b40() {}

// sub_1220b50  (orig 0x1220b50, ret_only)
void main_f_1220b50() {}

// sub_1220bf0  (orig 0x1220bf0, ret_only)
void main_f_1220bf0() {}

// sub_1220e40  (orig 0x1220e40, ret_only)
void main_f_1220e40() {}

// sub_1220ee0  (orig 0x1220ee0, ret_only)
void main_f_1220ee0() {}

// sub_1220ef0  (orig 0x1220ef0, copy2)
void main_f_1220ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1220f00  (orig 0x1220f00, copy2)
void main_f_1220f00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1220f20  (orig 0x1220f20, ret_only)
void main_f_1220f20() {}

// sub_1220f30  (orig 0x1220f30, ret_only)
void main_f_1220f30() {}

// sub_1220f40  (orig 0x1220f40, ret_only)
void main_f_1220f40() {}

// sub_1222660  (orig 0x1222660, ret_only)
void main_f_1222660() {}

// sub_1222670  (orig 0x1222670, copy2)
void main_f_1222670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222680  (orig 0x1222680, copy2)
void main_f_1222680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222820  (orig 0x1222820, ret_only)
void main_f_1222820() {}

// sub_1222a10  (orig 0x1222a10, ret_only)
void main_f_1222a10() {}

// sub_1222a20  (orig 0x1222a20, copy2)
void main_f_1222a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222a30  (orig 0x1222a30, copy2)
void main_f_1222a30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222a40  (orig 0x1222a40, copy2)
void main_f_1222a40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222a50  (orig 0x1222a50, copy2)
void main_f_1222a50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222ab0  (orig 0x1222ab0, ret_only)
void main_f_1222ab0() {}

// sub_1222ac0  (orig 0x1222ac0, copy2)
void main_f_1222ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1222ad0  (orig 0x1222ad0, copy2)
void main_f_1222ad0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1226590  (orig 0x1226590, ret_only)
void main_f_1226590() {}

// sub_122a1b0  (orig 0x122a1b0, tailcall)
void main_f_122a1b0() { main::sub_122a0b0(); }

// sub_122a1c0  (orig 0x122a1c0, tailcall)
void main_f_122a1c0() { main::sub_122a230(); }

// sub_122a1f0  (orig 0x122a1f0, tailcall)
void main_f_122a1f0() { main::sub_122a230(); }

// sub_122a200  (orig 0x122a200, tailcall)
void main_f_122a200() { main::sub_122a230(); }

// sub_122a380  (orig 0x122a380, ret_only)
void main_f_122a380() {}

// sub_122a3e0  (orig 0x122a3e0, ret_only)
void main_f_122a3e0() {}

// sub_122a3f0  (orig 0x122a3f0, ret_only)
void main_f_122a3f0() {}

// sub_122a400  (orig 0x122a400, ret_only)
void main_f_122a400() {}

// sub_122a420  (orig 0x122a420, ret_only)
void main_f_122a420() {}

// sub_122a430  (orig 0x122a430, ret_only)
void main_f_122a430() {}

// sub_122a440  (orig 0x122a440, ret_only)
void main_f_122a440() {}

// sub_122a5e0  (orig 0x122a5e0, ret_only)
void main_f_122a5e0() {}

// sub_122a870  (orig 0x122a870, ret_only)
void main_f_122a870() {}

// sub_122a880  (orig 0x122a880, copy2)
void main_f_122a880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122a890  (orig 0x122a890, copy2)
void main_f_122a890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122a8a0  (orig 0x122a8a0, copy2)
void main_f_122a8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122a8b0  (orig 0x122a8b0, copy2)
void main_f_122a8b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122a8d0  (orig 0x122a8d0, ret_only)
void main_f_122a8d0() {}

// sub_122a8e0  (orig 0x122a8e0, ret_only)
void main_f_122a8e0() {}

// sub_122a8f0  (orig 0x122a8f0, ret_only)
void main_f_122a8f0() {}

// sub_122a940  (orig 0x122a940, ret_only)
void main_f_122a940() {}

// sub_122a950  (orig 0x122a950, ret_only)
void main_f_122a950() {}

// sub_122a960  (orig 0x122a960, ret_only)
void main_f_122a960() {}

// sub_122a9c0  (orig 0x122a9c0, ret_only)
void main_f_122a9c0() {}

// sub_122a9d0  (orig 0x122a9d0, copy2)
void main_f_122a9d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122a9e0  (orig 0x122a9e0, copy2)
void main_f_122a9e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122aa10  (orig 0x122aa10, ret_only)
void main_f_122aa10() {}

// sub_122aa20  (orig 0x122aa20, copy2)
void main_f_122aa20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122aa30  (orig 0x122aa30, copy2)
void main_f_122aa30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122ac10  (orig 0x122ac10, ret_only)
void main_f_122ac10() {}

// sub_122ae30  (orig 0x122ae30, copy2)
void main_f_122ae30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122ae40  (orig 0x122ae40, copy2)
void main_f_122ae40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b090  (orig 0x122b090, ret_only)
void main_f_122b090() {}

// sub_122b1e0  (orig 0x122b1e0, ret_only)
void main_f_122b1e0() {}

// sub_122b1f0  (orig 0x122b1f0, copy2)
void main_f_122b1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b200  (orig 0x122b200, copy2)
void main_f_122b200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b4f0  (orig 0x122b4f0, ret_only)
void main_f_122b4f0() {}

// sub_122b530  (orig 0x122b530, ret_only)
void main_f_122b530() {}

// sub_122b540  (orig 0x122b540, ret_only)
void main_f_122b540() {}

// sub_122b550  (orig 0x122b550, ret_only)
void main_f_122b550() {}

// sub_122b570  (orig 0x122b570, ret_only)
void main_f_122b570() {}

// sub_122b580  (orig 0x122b580, ret_only)
void main_f_122b580() {}

// sub_122b590  (orig 0x122b590, ret_only)
void main_f_122b590() {}

// sub_122b5b0  (orig 0x122b5b0, ret_only)
void main_f_122b5b0() {}

// sub_122b5c0  (orig 0x122b5c0, ret_only)
void main_f_122b5c0() {}

// sub_122b5d0  (orig 0x122b5d0, ret_only)
void main_f_122b5d0() {}

// sub_122b5f0  (orig 0x122b5f0, ret_only)
void main_f_122b5f0() {}

// sub_122b600  (orig 0x122b600, ret_only)
void main_f_122b600() {}

// sub_122b610  (orig 0x122b610, ret_only)
void main_f_122b610() {}

// sub_122b640  (orig 0x122b640, ret_only)
void main_f_122b640() {}

// sub_122b650  (orig 0x122b650, ret_only)
void main_f_122b650() {}

// sub_122b660  (orig 0x122b660, ret_only)
void main_f_122b660() {}

// sub_122b6b0  (orig 0x122b6b0, ret_only)
void main_f_122b6b0() {}

// sub_122b6c0  (orig 0x122b6c0, copy2)
void main_f_122b6c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b6d0  (orig 0x122b6d0, copy2)
void main_f_122b6d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b790  (orig 0x122b790, ret_only)
void main_f_122b790() {}

// sub_122b7a0  (orig 0x122b7a0, copy2)
void main_f_122b7a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b7b0  (orig 0x122b7b0, copy2)
void main_f_122b7b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b870  (orig 0x122b870, ret_only)
void main_f_122b870() {}

// sub_122b880  (orig 0x122b880, copy2)
void main_f_122b880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b890  (orig 0x122b890, copy2)
void main_f_122b890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122b9e0  (orig 0x122b9e0, ret_only)
void main_f_122b9e0() {}

// sub_122b9f0  (orig 0x122b9f0, ret_only)
void main_f_122b9f0() {}

// sub_122ba00  (orig 0x122ba00, ret_only)
void main_f_122ba00() {}

// sub_122ba50  (orig 0x122ba50, ret_only)
void main_f_122ba50() {}

// sub_122ba60  (orig 0x122ba60, ret_only)
void main_f_122ba60() {}

// sub_122ba70  (orig 0x122ba70, ret_only)
void main_f_122ba70() {}

// sub_122bab0  (orig 0x122bab0, ret_only)
void main_f_122bab0() {}

// sub_122bac0  (orig 0x122bac0, ret_only)
void main_f_122bac0() {}

// sub_122bad0  (orig 0x122bad0, ret_only)
void main_f_122bad0() {}

// sub_122baf0  (orig 0x122baf0, ret_only)
void main_f_122baf0() {}

// sub_122bb00  (orig 0x122bb00, ret_only)
void main_f_122bb00() {}

// sub_122bb10  (orig 0x122bb10, ret_only)
void main_f_122bb10() {}

// sub_122bc80  (orig 0x122bc80, ret_only)
void main_f_122bc80() {}

// sub_122be40  (orig 0x122be40, ret_only)
void main_f_122be40() {}

// sub_122bf20  (orig 0x122bf20, ret_only)
void main_f_122bf20() {}

// sub_122bf30  (orig 0x122bf30, copy2)
void main_f_122bf30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122bf40  (orig 0x122bf40, copy2)
void main_f_122bf40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122cb10  (orig 0x122cb10, tailcall)
void main_f_122cb10() { main::sub_ce0(); }

// sub_122cb60  (orig 0x122cb60, ret_only)
void main_f_122cb60() {}

// sub_122cb70  (orig 0x122cb70, tailcall)
void main_f_122cb70() { main::sub_ce0(); }

// sub_122cbe0  (orig 0x122cbe0, ret_only)
void main_f_122cbe0() {}

// sub_122cc70  (orig 0x122cc70, ret_only)
void main_f_122cc70() {}

// sub_122cc80  (orig 0x122cc80, copy2)
void main_f_122cc80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122cc90  (orig 0x122cc90, copy2)
void main_f_122cc90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122cd10  (orig 0x122cd10, ret_only)
void main_f_122cd10() {}

// sub_122cd20  (orig 0x122cd20, copy2)
void main_f_122cd20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122cd30  (orig 0x122cd30, copy2)
void main_f_122cd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_122d9b0  (orig 0x122d9b0, ret_only)
void main_f_122d9b0() {}

// sub_122d9c0  (orig 0x122d9c0, ret_only)
void main_f_122d9c0() {}

// sub_122d9d0  (orig 0x122d9d0, ret_only)
void main_f_122d9d0() {}

// sub_122d9f0  (orig 0x122d9f0, ret_only)
void main_f_122d9f0() {}

// sub_122da00  (orig 0x122da00, ret_only)
void main_f_122da00() {}

// sub_122da10  (orig 0x122da10, ret_only)
void main_f_122da10() {}

// sub_122e320  (orig 0x122e320, ret_only)
void main_f_122e320() {}

// sub_122e330  (orig 0x122e330, ret_only)
void main_f_122e330() {}

// sub_122e340  (orig 0x122e340, ret_only)
void main_f_122e340() {}

// sub_122e560  (orig 0x122e560, ret_only)
void main_f_122e560() {}

// sub_122f440  (orig 0x122f440, tailcall)
void main_f_122f440() { main::sub_122f450(); }

// sub_122f600  (orig 0x122f600, ret_only)
void main_f_122f600() {}

// sub_12317a0  (orig 0x12317a0, tailcall)
void main_f_12317a0() { main::sub_1231510(); }

// sub_1231910  (orig 0x1231910, ret_only)
void main_f_1231910() {}

// sub_1231990  (orig 0x1231990, ret_only)
void main_f_1231990() {}

// sub_12319a0  (orig 0x12319a0, copy2)
void main_f_12319a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12319b0  (orig 0x12319b0, copy2)
void main_f_12319b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231b20  (orig 0x1231b20, ret_only)
void main_f_1231b20() {}

// sub_1231b30  (orig 0x1231b30, copy2)
void main_f_1231b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231b40  (orig 0x1231b40, copy2)
void main_f_1231b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231d40  (orig 0x1231d40, ret_only)
void main_f_1231d40() {}

// sub_1231d50  (orig 0x1231d50, copy2)
void main_f_1231d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231d60  (orig 0x1231d60, copy2)
void main_f_1231d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231f20  (orig 0x1231f20, ret_only)
void main_f_1231f20() {}

// sub_1231f90  (orig 0x1231f90, ret_only)
void main_f_1231f90() {}

// sub_1231fc0  (orig 0x1231fc0, copy2)
void main_f_1231fc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1231fd0  (orig 0x1231fd0, copy2)
void main_f_1231fd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232190  (orig 0x1232190, ret_only)
void main_f_1232190() {}

// sub_1232200  (orig 0x1232200, ret_only)
void main_f_1232200() {}

// sub_1232230  (orig 0x1232230, copy2)
void main_f_1232230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232240  (orig 0x1232240, copy2)
void main_f_1232240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232370  (orig 0x1232370, ret_only)
void main_f_1232370() {}

// sub_1232810  (orig 0x1232810, ret_only)
void main_f_1232810() {}

// sub_1232820  (orig 0x1232820, copy2)
void main_f_1232820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232830  (orig 0x1232830, copy2)
void main_f_1232830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232940  (orig 0x1232940, ret_only)
void main_f_1232940() {}

// sub_1232950  (orig 0x1232950, copy2)
void main_f_1232950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232960  (orig 0x1232960, copy2)
void main_f_1232960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232a40  (orig 0x1232a40, ret_only)
void main_f_1232a40() {}

// sub_1232ab0  (orig 0x1232ab0, ret_only)
void main_f_1232ab0() {}

// sub_1232ac0  (orig 0x1232ac0, copy2)
void main_f_1232ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232ad0  (orig 0x1232ad0, copy2)
void main_f_1232ad0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1232f30  (orig 0x1232f30, ret_only)
void main_f_1232f30() {}

// sub_1233150  (orig 0x1233150, ret_only)
void main_f_1233150() {}

// sub_1233160  (orig 0x1233160, copy2)
void main_f_1233160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1233170  (orig 0x1233170, copy2)
void main_f_1233170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1234490  (orig 0x1234490, ret_only)
void main_f_1234490() {}

// sub_12344f0  (orig 0x12344f0, ret_only)
void main_f_12344f0() {}

// sub_1234520  (orig 0x1234520, copy2)
void main_f_1234520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1234530  (orig 0x1234530, copy2)
void main_f_1234530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1234650  (orig 0x1234650, ret_only)
void main_f_1234650() {}

// sub_12346f0  (orig 0x12346f0, ret_only)
void main_f_12346f0() {}

// sub_1234700  (orig 0x1234700, copy2)
void main_f_1234700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1234710  (orig 0x1234710, copy2)
void main_f_1234710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1234b40  (orig 0x1234b40, ret_only)
void main_f_1234b40() {}

// sub_1234b50  (orig 0x1234b50, tailcall)
void main_f_1234b50() { main::sub_e7c4c0(); }

// sub_1234b60  (orig 0x1234b60, tailcall)
void main_f_1234b60() { main::sub_1234bd0(); }

// sub_1234b90  (orig 0x1234b90, tailcall)
void main_f_1234b90() { main::sub_1234bd0(); }

// sub_1234ba0  (orig 0x1234ba0, tailcall)
void main_f_1234ba0() { main::sub_1234bd0(); }

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

// sub_123b490  (orig 0x123b490, ret_only)
void main_f_123b490() {}

// sub_123d730  (orig 0x123d730, tailcall)
void main_f_123d730() { main::sub_1216430(); }

// sub_123dac0  (orig 0x123dac0, ret_only)
void main_f_123dac0() {}

// sub_123dd20  (orig 0x123dd20, copy2)
void main_f_123dd20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_123dd30  (orig 0x123dd30, copy2)
void main_f_123dd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12415a0  (orig 0x12415a0, tailcall)
void main_f_12415a0() { main::sub_12163d0(); }

// sub_1241f30  (orig 0x1241f30, ret_only)
void main_f_1241f30() {}

// sub_1242df0  (orig 0x1242df0, copy2)
void main_f_1242df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1242e00  (orig 0x1242e00, copy2)
void main_f_1242e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1243370  (orig 0x1243370, ret_only)
void main_f_1243370() {}

// sub_12448d0  (orig 0x12448d0, mov_ret)
uint32_t main_f_12448d0() { return 1; }

// sub_1244db0  (orig 0x1244db0, tailcall)
void main_f_1244db0() { main::sub_1244f60(); }

// sub_1244e80  (orig 0x1244e80, tailcall)
void main_f_1244e80() { main::sub_1244f60(); }

// sub_1244e90  (orig 0x1244e90, tailcall)
void main_f_1244e90() { main::sub_1244f60(); }

// sub_1245680  (orig 0x1245680, getter)
uint64_t main_f_1245680(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_12457f0  (orig 0x12457f0, mov_ret)
uint32_t main_f_12457f0() { return 1; }

// sub_1246860  (orig 0x1246860, ret_only)
void main_f_1246860() {}

// sub_1246b10  (orig 0x1246b10, mov_ret)
uint32_t main_f_1246b10() { return 1; }

// sub_1246ce0  (orig 0x1246ce0, tailcall)
void main_f_1246ce0() { main::sub_1246b20(); }

// sub_1247060  (orig 0x1247060, tailcall)
void main_f_1247060() { main::sub_1246f40(); }

// sub_1247070  (orig 0x1247070, tailcall)
void main_f_1247070() { main::sub_12470e0(); }

// sub_12470a0  (orig 0x12470a0, tailcall)
void main_f_12470a0() { main::sub_12470e0(); }

// sub_12470b0  (orig 0x12470b0, tailcall)
void main_f_12470b0() { main::sub_12470e0(); }

// sub_1248240  (orig 0x1248240, ret_only)
void main_f_1248240() {}

// sub_12485f0  (orig 0x12485f0, ret_only)
void main_f_12485f0() {}

// sub_1248e50  (orig 0x1248e50, tailcall)
void main_f_1248e50() { main::sub_1249000(); }

// sub_1248f20  (orig 0x1248f20, tailcall)
void main_f_1248f20() { main::sub_1249000(); }

// sub_1248f30  (orig 0x1248f30, tailcall)
void main_f_1248f30() { main::sub_1249000(); }

// sub_1249170  (orig 0x1249170, ret_only)
void main_f_1249170() {}

// sub_1249180  (orig 0x1249180, copy2)
void main_f_1249180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1249190  (orig 0x1249190, copy2)
void main_f_1249190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12491b0  (orig 0x12491b0, ret_only)
void main_f_12491b0() {}

// sub_12491c0  (orig 0x12491c0, copy2)
void main_f_12491c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12491d0  (orig 0x12491d0, copy2)
void main_f_12491d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12498e0  (orig 0x12498e0, tailcall)
void main_f_12498e0() { main::sub_e7c4c0(); }

// sub_12498f0  (orig 0x12498f0, tailcall)
void main_f_12498f0() { main::sub_1249960(); }

// sub_1249920  (orig 0x1249920, tailcall)
void main_f_1249920() { main::sub_1249960(); }

// sub_1249930  (orig 0x1249930, tailcall)
void main_f_1249930() { main::sub_1249960(); }

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

// sub_124aed0  (orig 0x124aed0, tailcall)
void main_f_124aed0() { main::sub_124af10(); }

// sub_124aee0  (orig 0x124aee0, tailcall)
void main_f_124aee0() { main::sub_124af10(); }

// sub_124b0e0  (orig 0x124b0e0, ret_only)
void main_f_124b0e0() {}

// sub_124b210  (orig 0x124b210, ret_only)
void main_f_124b210() {}

// sub_124b730  (orig 0x124b730, straight)
void main_f_124b730(void* a0) {
    *(uint32_t*)((char*)(a0) + 120) = 5;
}

// sub_124c0f0  (orig 0x124c0f0, ret_only)
void main_f_124c0f0() {}

// sub_124c320  (orig 0x124c320, tailcall)
void main_f_124c320() { main::sub_e7c4c0(); }

// sub_124c330  (orig 0x124c330, tailcall)
void main_f_124c330() { main::sub_124c3a0(); }

// sub_124c360  (orig 0x124c360, tailcall)
void main_f_124c360() { main::sub_124c3a0(); }

// sub_124c370  (orig 0x124c370, tailcall)
void main_f_124c370() { main::sub_124c3a0(); }

// sub_124c4f0  (orig 0x124c4f0, ret_only)
void main_f_124c4f0() {}

// sub_124d540  (orig 0x124d540, ret_only)
void main_f_124d540() {}

// sub_1250e80  (orig 0x1250e80, tailcall)
void main_f_1250e80() { main::sub_1250d30(); }

// sub_1250e90  (orig 0x1250e90, tailcall)
void main_f_1250e90() { main::sub_1250f00(); }

// sub_1250ec0  (orig 0x1250ec0, tailcall)
void main_f_1250ec0() { main::sub_1250f00(); }

// sub_1250ed0  (orig 0x1250ed0, tailcall)
void main_f_1250ed0() { main::sub_1250f00(); }

// sub_1251220  (orig 0x1251220, ret_only)
void main_f_1251220() {}

// sub_1251230  (orig 0x1251230, copy2)
void main_f_1251230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251240  (orig 0x1251240, copy2)
void main_f_1251240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12512f0  (orig 0x12512f0, ret_only)
void main_f_12512f0() {}

// sub_1251300  (orig 0x1251300, copy2)
void main_f_1251300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251310  (orig 0x1251310, copy2)
void main_f_1251310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251440  (orig 0x1251440, ret_only)
void main_f_1251440() {}

// sub_1251450  (orig 0x1251450, copy2)
void main_f_1251450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251460  (orig 0x1251460, copy2)
void main_f_1251460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12515a0  (orig 0x12515a0, ret_only)
void main_f_12515a0() {}

// sub_12515b0  (orig 0x12515b0, copy2)
void main_f_12515b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12515c0  (orig 0x12515c0, copy2)
void main_f_12515c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12515f0  (orig 0x12515f0, ret_only)
void main_f_12515f0() {}

// sub_1251720  (orig 0x1251720, ret_only)
void main_f_1251720() {}

// sub_1251730  (orig 0x1251730, copy2)
void main_f_1251730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251740  (orig 0x1251740, copy2)
void main_f_1251740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251850  (orig 0x1251850, ret_only)
void main_f_1251850() {}

// sub_1251860  (orig 0x1251860, copy2)
void main_f_1251860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251870  (orig 0x1251870, copy2)
void main_f_1251870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251980  (orig 0x1251980, ret_only)
void main_f_1251980() {}

// sub_1251990  (orig 0x1251990, copy2)
void main_f_1251990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12519a0  (orig 0x12519a0, copy2)
void main_f_12519a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12519b0  (orig 0x12519b0, mov_ret)
uint32_t main_f_12519b0() { return 1; }

// sub_12519c0  (orig 0x12519c0, ret_only)
void main_f_12519c0() {}

// sub_12519d0  (orig 0x12519d0, ret_only)
void main_f_12519d0() {}

// sub_12519e0  (orig 0x12519e0, ret_only)
void main_f_12519e0() {}

// sub_1251a90  (orig 0x1251a90, ret_only)
void main_f_1251a90() {}

// sub_1251aa0  (orig 0x1251aa0, copy2)
void main_f_1251aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251ab0  (orig 0x1251ab0, copy2)
void main_f_1251ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251c80  (orig 0x1251c80, ret_only)
void main_f_1251c80() {}

// sub_1251c90  (orig 0x1251c90, copy2)
void main_f_1251c90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251ca0  (orig 0x1251ca0, copy2)
void main_f_1251ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251d40  (orig 0x1251d40, ret_only)
void main_f_1251d40() {}

// sub_1251d50  (orig 0x1251d50, copy2)
void main_f_1251d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251d60  (orig 0x1251d60, copy2)
void main_f_1251d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1251f20  (orig 0x1251f20, ret_only)
void main_f_1251f20() {}

// sub_1252020  (orig 0x1252020, ret_only)
void main_f_1252020() {}

// sub_1252030  (orig 0x1252030, copy2)
void main_f_1252030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252040  (orig 0x1252040, copy2)
void main_f_1252040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252080  (orig 0x1252080, ret_only)
void main_f_1252080() {}

// sub_1252090  (orig 0x1252090, copy2)
void main_f_1252090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12520a0  (orig 0x12520a0, copy2)
void main_f_12520a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12520b0  (orig 0x12520b0, copy2)
void main_f_12520b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12520c0  (orig 0x12520c0, copy2)
void main_f_12520c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252290  (orig 0x1252290, ret_only)
void main_f_1252290() {}

// sub_12522d0  (orig 0x12522d0, ret_only)
void main_f_12522d0() {}

// sub_12522e0  (orig 0x12522e0, copy2)
void main_f_12522e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12522f0  (orig 0x12522f0, copy2)
void main_f_12522f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252300  (orig 0x1252300, copy2)
void main_f_1252300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252310  (orig 0x1252310, copy2)
void main_f_1252310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12524e0  (orig 0x12524e0, ret_only)
void main_f_12524e0() {}

// sub_12526c0  (orig 0x12526c0, ret_only)
void main_f_12526c0() {}

// sub_12526d0  (orig 0x12526d0, copy2)
void main_f_12526d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12526e0  (orig 0x12526e0, copy2)
void main_f_12526e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12526f0  (orig 0x12526f0, copy2)
void main_f_12526f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252700  (orig 0x1252700, copy2)
void main_f_1252700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12528d0  (orig 0x12528d0, ret_only)
void main_f_12528d0() {}

// sub_1252910  (orig 0x1252910, ret_only)
void main_f_1252910() {}

// sub_1252920  (orig 0x1252920, copy2)
void main_f_1252920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252930  (orig 0x1252930, copy2)
void main_f_1252930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252940  (orig 0x1252940, copy2)
void main_f_1252940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252950  (orig 0x1252950, copy2)
void main_f_1252950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252960  (orig 0x1252960, ret_only)
void main_f_1252960() {}

// sub_1252970  (orig 0x1252970, ret_only)
void main_f_1252970() {}

// sub_1252980  (orig 0x1252980, ret_only)
void main_f_1252980() {}

// sub_1252990  (orig 0x1252990, ret_only)
void main_f_1252990() {}

// sub_12529a0  (orig 0x12529a0, ret_only)
void main_f_12529a0() {}

// sub_12529b0  (orig 0x12529b0, ret_only)
void main_f_12529b0() {}

// sub_12529c0  (orig 0x12529c0, ret_only)
void main_f_12529c0() {}

// sub_12529d0  (orig 0x12529d0, ret_only)
void main_f_12529d0() {}

// sub_1252c80  (orig 0x1252c80, ret_only)
void main_f_1252c80() {}

// sub_1252df0  (orig 0x1252df0, ret_only)
void main_f_1252df0() {}

// sub_1252e00  (orig 0x1252e00, copy2)
void main_f_1252e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252e10  (orig 0x1252e10, copy2)
void main_f_1252e10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252e20  (orig 0x1252e20, copy2)
void main_f_1252e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252e30  (orig 0x1252e30, copy2)
void main_f_1252e30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252e70  (orig 0x1252e70, ret_only)
void main_f_1252e70() {}

// sub_1252e80  (orig 0x1252e80, copy2)
void main_f_1252e80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252e90  (orig 0x1252e90, copy2)
void main_f_1252e90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252eb0  (orig 0x1252eb0, ret_only)
void main_f_1252eb0() {}

// sub_1252ec0  (orig 0x1252ec0, copy2)
void main_f_1252ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252ed0  (orig 0x1252ed0, copy2)
void main_f_1252ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252f40  (orig 0x1252f40, ret_only)
void main_f_1252f40() {}

// sub_1252f50  (orig 0x1252f50, copy2)
void main_f_1252f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252f60  (orig 0x1252f60, copy2)
void main_f_1252f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252fd0  (orig 0x1252fd0, ret_only)
void main_f_1252fd0() {}

// sub_1252fe0  (orig 0x1252fe0, copy2)
void main_f_1252fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1252ff0  (orig 0x1252ff0, copy2)
void main_f_1252ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253010  (orig 0x1253010, ret_only)
void main_f_1253010() {}

// sub_1253020  (orig 0x1253020, copy2)
void main_f_1253020(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253030  (orig 0x1253030, copy2)
void main_f_1253030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12530b0  (orig 0x12530b0, ret_only)
void main_f_12530b0() {}

// sub_12530c0  (orig 0x12530c0, copy2)
void main_f_12530c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12530d0  (orig 0x12530d0, copy2)
void main_f_12530d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253160  (orig 0x1253160, ret_only)
void main_f_1253160() {}

// sub_1253170  (orig 0x1253170, copy2)
void main_f_1253170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253180  (orig 0x1253180, copy2)
void main_f_1253180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253200  (orig 0x1253200, ret_only)
void main_f_1253200() {}

// sub_1253210  (orig 0x1253210, copy2)
void main_f_1253210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253220  (orig 0x1253220, copy2)
void main_f_1253220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253240  (orig 0x1253240, ret_only)
void main_f_1253240() {}

// sub_1253250  (orig 0x1253250, copy2)
void main_f_1253250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253260  (orig 0x1253260, copy2)
void main_f_1253260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253280  (orig 0x1253280, ret_only)
void main_f_1253280() {}

// sub_1253290  (orig 0x1253290, copy2)
void main_f_1253290(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12532a0  (orig 0x12532a0, copy2)
void main_f_12532a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12532c0  (orig 0x12532c0, ret_only)
void main_f_12532c0() {}

// sub_12532d0  (orig 0x12532d0, copy2)
void main_f_12532d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12532e0  (orig 0x12532e0, copy2)
void main_f_12532e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253370  (orig 0x1253370, ret_only)
void main_f_1253370() {}

// sub_12533b0  (orig 0x12533b0, ret_only)
void main_f_12533b0() {}

// sub_12533c0  (orig 0x12533c0, copy2)
void main_f_12533c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12533d0  (orig 0x12533d0, copy2)
void main_f_12533d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12533e0  (orig 0x12533e0, copy2)
void main_f_12533e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12533f0  (orig 0x12533f0, copy2)
void main_f_12533f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253430  (orig 0x1253430, ret_only)
void main_f_1253430() {}

// sub_1253440  (orig 0x1253440, copy2)
void main_f_1253440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253450  (orig 0x1253450, copy2)
void main_f_1253450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12534f0  (orig 0x12534f0, ret_only)
void main_f_12534f0() {}

// sub_1253510  (orig 0x1253510, ret_only)
void main_f_1253510() {}

// sub_1253520  (orig 0x1253520, copy2)
void main_f_1253520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253530  (orig 0x1253530, copy2)
void main_f_1253530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253570  (orig 0x1253570, ret_only)
void main_f_1253570() {}

// sub_1253580  (orig 0x1253580, copy2)
void main_f_1253580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1253590  (orig 0x1253590, copy2)
void main_f_1253590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12535a0  (orig 0x12535a0, ret_only)
void main_f_12535a0() {}

// sub_12535b0  (orig 0x12535b0, ret_only)
void main_f_12535b0() {}

// sub_12535c0  (orig 0x12535c0, ret_only)
void main_f_12535c0() {}

// sub_12535d0  (orig 0x12535d0, ret_only)
void main_f_12535d0() {}

// sub_12538b0  (orig 0x12538b0, mov_ret)
uint32_t main_f_12538b0() { return 1; }

// sub_12538c0  (orig 0x12538c0, setter)
void main_f_12538c0(void* a0) { *(uint32_t*)((char*)(a0) + 104) = 0; }

// sub_1253d00  (orig 0x1253d00, tailcall)
void main_f_1253d00() { main::sub_1253eb0(); }

// sub_1253dd0  (orig 0x1253dd0, tailcall)
void main_f_1253dd0() { main::sub_1253eb0(); }

// sub_1253de0  (orig 0x1253de0, tailcall)
void main_f_1253de0() { main::sub_1253eb0(); }

// sub_12545d0  (orig 0x12545d0, getter)
uint64_t main_f_12545d0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1254740  (orig 0x1254740, mov_ret)
uint32_t main_f_1254740() { return 1; }

// sub_12550d0  (orig 0x12550d0, ret_only)
void main_f_12550d0() {}

// sub_1255260  (orig 0x1255260, mov_ret)
uint32_t main_f_1255260() { return 1; }

// sub_1255430  (orig 0x1255430, tailcall)
void main_f_1255430() { main::sub_1255270(); }

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

// sub_12588d0  (orig 0x12588d0, ret_only)
void main_f_12588d0() {}

// sub_12588e0  (orig 0x12588e0, copy2)
void main_f_12588e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12588f0  (orig 0x12588f0, copy2)
void main_f_12588f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258ba0  (orig 0x1258ba0, ret_only)
void main_f_1258ba0() {}

// sub_1258bb0  (orig 0x1258bb0, copy2)
void main_f_1258bb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258bc0  (orig 0x1258bc0, copy2)
void main_f_1258bc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258d50  (orig 0x1258d50, ret_only)
void main_f_1258d50() {}

// sub_1258d60  (orig 0x1258d60, copy2)
void main_f_1258d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258d70  (orig 0x1258d70, copy2)
void main_f_1258d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258f50  (orig 0x1258f50, ret_only)
void main_f_1258f50() {}

// sub_1258f60  (orig 0x1258f60, copy2)
void main_f_1258f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258f70  (orig 0x1258f70, copy2)
void main_f_1258f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1258ff0  (orig 0x1258ff0, ret_only)
void main_f_1258ff0() {}

// sub_1259000  (orig 0x1259000, copy2)
void main_f_1259000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1259010  (orig 0x1259010, copy2)
void main_f_1259010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1259240  (orig 0x1259240, getter)
uint8_t main_f_1259240(void* a0) { return *(uint8_t*)((char*)(a0) + 2944); }

// sub_1259810  (orig 0x1259810, straight)
void main_f_1259810(void* a0) {
    *(uint8_t*)((char*)(a0) + 137) = (uint8_t)(1);
}

// sub_12599e0  (orig 0x12599e0, tailcall)
void main_f_12599e0() { main::sub_e7c4c0(); }

// sub_12599f0  (orig 0x12599f0, tailcall)
void main_f_12599f0() { main::sub_1259a60(); }

// sub_1259a20  (orig 0x1259a20, tailcall)
void main_f_1259a20() { main::sub_1259a60(); }

// sub_1259a30  (orig 0x1259a30, tailcall)
void main_f_1259a30() { main::sub_1259a60(); }

// sub_1259bb0  (orig 0x1259bb0, ret_only)
void main_f_1259bb0() {}

// sub_125a0f0  (orig 0x125a0f0, getter)
uint64_t main_f_125a0f0(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_125b9f0  (orig 0x125b9f0, getter)
uint64_t main_f_125b9f0(void* a0) { return *(uint64_t*)((char*)(a0) + 1552); }

// sub_125d290  (orig 0x125d290, mov_ret)
uint32_t main_f_125d290() { return 1; }

// sub_125d530  (orig 0x125d530, tailcall)
void main_f_125d530() { main::sub_125d360(); }

// sub_125d870  (orig 0x125d870, tailcall)
void main_f_125d870() { main::sub_125d790(); }

// sub_125d880  (orig 0x125d880, tailcall)
void main_f_125d880() { main::sub_125de00(); }

// sub_125d8b0  (orig 0x125d8b0, tailcall)
void main_f_125d8b0() { main::sub_125de00(); }

// sub_125d8c0  (orig 0x125d8c0, tailcall)
void main_f_125d8c0() { main::sub_125de00(); }

// sub_125f770  (orig 0x125f770, tailcall)
void main_f_125f770() { main::sub_eb81a0(); }

// sub_125fcf0  (orig 0x125fcf0, tailcall)
void main_f_125fcf0() { main::sub_eb81a0(); }

// sub_125fd00  (orig 0x125fd00, tailcall)
void main_f_125fd00() { main::sub_125db50(); }

// sub_125fd30  (orig 0x125fd30, tailcall)
void main_f_125fd30() { main::sub_125db50(); }

// sub_125fd40  (orig 0x125fd40, tailcall)
void main_f_125fd40() { main::sub_125db50(); }

// sub_1260810  (orig 0x1260810, ret_only)
void main_f_1260810() {}

// sub_1260820  (orig 0x1260820, ret_only)
void main_f_1260820() {}

// sub_1260830  (orig 0x1260830, ret_only)
void main_f_1260830() {}

// sub_1260840  (orig 0x1260840, ret_only)
void main_f_1260840() {}

// sub_1262a60  (orig 0x1262a60, straight)
void main_f_1262a60(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 104) = 8;
}

// sub_1262b40  (orig 0x1262b40, tailcall)
void main_f_1262b40() { main::sub_e7feb0(); }

// sub_1262b50  (orig 0x1262b50, tailcall)
void main_f_1262b50() { main::sub_1262bc0(); }

// sub_1262b80  (orig 0x1262b80, tailcall)
void main_f_1262b80() { main::sub_1262bc0(); }

// sub_1262b90  (orig 0x1262b90, tailcall)
void main_f_1262b90() { main::sub_1262bc0(); }

// sub_1262fa0  (orig 0x1262fa0, getter)
uint32_t main_f_1262fa0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1263050  (orig 0x1263050, setter)
void main_f_1263050(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 24) = a1; }

// sub_1263060  (orig 0x1263060, setter)
void main_f_1263060(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 32) = a1; }

// sub_12635f0  (orig 0x12635f0, getter)
uint32_t main_f_12635f0(void* a0) { return *(uint32_t*)((char*)(a0) + 136); }

// sub_12637d0  (orig 0x12637d0, getter)
uint8_t main_f_12637d0(void* a0) { return *(uint8_t*)((char*)(a0) + 140); }

// sub_1263990  (orig 0x1263990, setter)
void main_f_1263990(void* a0, float a1) { *(float*)((char*)(a0) + 400) = a1; }

// sub_12643b0  (orig 0x12643b0, tailcall)
void main_f_12643b0() { main::sub_e7c4c0(); }

// sub_12643c0  (orig 0x12643c0, tailcall)
void main_f_12643c0() { main::sub_1264430(); }

// sub_12643f0  (orig 0x12643f0, tailcall)
void main_f_12643f0() { main::sub_1264430(); }

// sub_1264400  (orig 0x1264400, tailcall)
void main_f_1264400() { main::sub_1264430(); }

// sub_1264840  (orig 0x1264840, ret_only)
void main_f_1264840() {}

// sub_1264850  (orig 0x1264850, copy2)
void main_f_1264850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1264860  (orig 0x1264860, copy2)
void main_f_1264860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1266310  (orig 0x1266310, tailcall)
void main_f_1266310() { main::sub_e7c4c0(); }

// sub_1266320  (orig 0x1266320, tailcall)
void main_f_1266320() { main::sub_1266490(); }

// sub_1266350  (orig 0x1266350, tailcall)
void main_f_1266350() { main::sub_1266490(); }

// sub_1266360  (orig 0x1266360, tailcall)
void main_f_1266360() { main::sub_1266490(); }

// sub_1266440  (orig 0x1266440, ret_only)
void main_f_1266440() {}

// sub_1266c70  (orig 0x1266c70, tailcall)
void main_f_1266c70() { main::sub_e7feb0(); }

// sub_1266c80  (orig 0x1266c80, tailcall)
void main_f_1266c80() { main::sub_12666d0(); }

// sub_1266cb0  (orig 0x1266cb0, tailcall)
void main_f_1266cb0() { main::sub_12666d0(); }

// sub_1266cc0  (orig 0x1266cc0, tailcall)
void main_f_1266cc0() { main::sub_12666d0(); }

// sub_1266d60  (orig 0x1266d60, ret_only)
void main_f_1266d60() {}

// sub_1266d70  (orig 0x1266d70, copy2)
void main_f_1266d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1266d80  (orig 0x1266d80, copy2)
void main_f_1266d80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1267d90  (orig 0x1267d90, tailcall)
void main_f_1267d90() { main::sub_1268040(); }

// sub_1267ee0  (orig 0x1267ee0, tailcall)
void main_f_1267ee0() { main::sub_1268040(); }

// sub_1267ef0  (orig 0x1267ef0, tailcall)
void main_f_1267ef0() { main::sub_1268040(); }

// sub_1268210  (orig 0x1268210, ret_only)
void main_f_1268210() {}

// sub_1268220  (orig 0x1268220, copy2)
void main_f_1268220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1268230  (orig 0x1268230, copy2)
void main_f_1268230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12682d0  (orig 0x12682d0, ret_only)
void main_f_12682d0() {}

// sub_12683d0  (orig 0x12683d0, tailcall)
void main_f_12683d0() { main::sub_14ba4c0(); }

// sub_1268700  (orig 0x1268700, straight)
void main_f_1268700(void* a0) {
    *(uint8_t*)((char*)(a0) + 962) = (uint8_t)(1);
}

// sub_1268710  (orig 0x1268710, tailcall)
void main_f_1268710() { main::sub_14ba4c0(); }

// sub_1268ad0  (orig 0x1268ad0, tailcall)
void main_f_1268ad0() { main::sub_14ba4c0(); }

// sub_1268d60  (orig 0x1268d60, tailcall)
void main_f_1268d60() { main::sub_14ba4c0(); }

// sub_1269800  (orig 0x1269800, ret_only)
void main_f_1269800() {}

// sub_126a9b0  (orig 0x126a9b0, getter)
uint8_t main_f_126a9b0(void* a0) { return *(uint8_t*)((char*)(a0) + 2720); }

// sub_126ac90  (orig 0x126ac90, getter)
uint64_t main_f_126ac90(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_126ad40  (orig 0x126ad40, ret_only)
void main_f_126ad40() {}

// sub_126bc80  (orig 0x126bc80, tailcall)
void main_f_126bc80() { main::sub_126b950(); }

// sub_126bc90  (orig 0x126bc90, tailcall)
void main_f_126bc90() { main::sub_126c7a0(); }

// sub_126bcc0  (orig 0x126bcc0, tailcall)
void main_f_126bcc0() { main::sub_126c7a0(); }

// sub_126bcd0  (orig 0x126bcd0, tailcall)
void main_f_126bcd0() { main::sub_126c7a0(); }

// sub_126c5b0  (orig 0x126c5b0, ret_only)
void main_f_126c5b0() {}

// sub_126c5c0  (orig 0x126c5c0, ret_only)
void main_f_126c5c0() {}

// sub_126c5d0  (orig 0x126c5d0, ret_only)
void main_f_126c5d0() {}

// sub_126c5e0  (orig 0x126c5e0, ret_only)
void main_f_126c5e0() {}

// sub_126cb20  (orig 0x126cb20, ret_only)
void main_f_126cb20() {}

// sub_126cb30  (orig 0x126cb30, copy2)
void main_f_126cb30(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_126cb40  (orig 0x126cb40, copy2)
void main_f_126cb40(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_126cb70  (orig 0x126cb70, ret_only)
void main_f_126cb70() {}

// sub_126cc60  (orig 0x126cc60, ret_only)
void main_f_126cc60() {}

// sub_126cc70  (orig 0x126cc70, copy2)
void main_f_126cc70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126cc80  (orig 0x126cc80, copy2)
void main_f_126cc80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126cd20  (orig 0x126cd20, ret_only)
void main_f_126cd20() {}

// sub_126cd30  (orig 0x126cd30, copy2)
void main_f_126cd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126cd40  (orig 0x126cd40, copy2)
void main_f_126cd40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126cd80  (orig 0x126cd80, ret_only)
void main_f_126cd80() {}

// sub_126cd90  (orig 0x126cd90, copy2)
void main_f_126cd90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126cda0  (orig 0x126cda0, copy2)
void main_f_126cda0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126d9b0  (orig 0x126d9b0, straight)
void main_f_126d9b0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 104) = 4;
}

// sub_126db80  (orig 0x126db80, tailcall)
void main_f_126db80() { main::sub_126c9e0(); }

// sub_126dd50  (orig 0x126dd50, tailcall)
void main_f_126dd50() { main::sub_126c9e0(); }

// sub_126dd60  (orig 0x126dd60, tailcall)
void main_f_126dd60() { main::sub_126c9e0(); }

// sub_126dfa0  (orig 0x126dfa0, ret_only)
void main_f_126dfa0() {}

// sub_126dfb0  (orig 0x126dfb0, copy2)
void main_f_126dfb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126dfc0  (orig 0x126dfc0, copy2)
void main_f_126dfc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126e070  (orig 0x126e070, ret_only)
void main_f_126e070() {}

// sub_126e5e0  (orig 0x126e5e0, ret_only)
void main_f_126e5e0() {}

// sub_126e5f0  (orig 0x126e5f0, tailcall)
void main_f_126e5f0() { main::sub_e7c4c0(); }

// sub_126e600  (orig 0x126e600, tailcall)
void main_f_126e600() { main::sub_126e670(); }

// sub_126e630  (orig 0x126e630, tailcall)
void main_f_126e630() { main::sub_126e670(); }

// sub_126e640  (orig 0x126e640, tailcall)
void main_f_126e640() { main::sub_126e670(); }

// sub_126ec40  (orig 0x126ec40, ret_only)
void main_f_126ec40() {}

// sub_126ec50  (orig 0x126ec50, copy2)
void main_f_126ec50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126ec60  (orig 0x126ec60, copy2)
void main_f_126ec60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126fae0  (orig 0x126fae0, ret_only)
void main_f_126fae0() {}

// sub_126faf0  (orig 0x126faf0, copy2)
void main_f_126faf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126fb00  (orig 0x126fb00, copy2)
void main_f_126fb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126fb90  (orig 0x126fb90, ret_only)
void main_f_126fb90() {}

// sub_126fba0  (orig 0x126fba0, copy2)
void main_f_126fba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_126fbb0  (orig 0x126fbb0, copy2)
void main_f_126fbb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1271880  (orig 0x1271880, tailcall)
void main_f_1271880() { main::sub_1271740(); }

// sub_1271890  (orig 0x1271890, tailcall)
void main_f_1271890() { main::sub_1271900(); }

// sub_12718c0  (orig 0x12718c0, tailcall)
void main_f_12718c0() { main::sub_1271900(); }

// sub_12718d0  (orig 0x12718d0, tailcall)
void main_f_12718d0() { main::sub_1271900(); }

// sub_1271e50  (orig 0x1271e50, ret_only)
void main_f_1271e50() {}

// sub_1271eb0  (orig 0x1271eb0, ret_only)
void main_f_1271eb0() {}

// sub_1271ec0  (orig 0x1271ec0, copy2)
void main_f_1271ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1271ed0  (orig 0x1271ed0, copy2)
void main_f_1271ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1273680  (orig 0x1273680, tailcall)
void main_f_1273680() { main::sub_1273570(); }

// sub_1273690  (orig 0x1273690, tailcall)
void main_f_1273690() { main::sub_1273700(); }

// sub_12736c0  (orig 0x12736c0, tailcall)
void main_f_12736c0() { main::sub_1273700(); }

// sub_12736d0  (orig 0x12736d0, tailcall)
void main_f_12736d0() { main::sub_1273700(); }

// sub_1273940  (orig 0x1273940, ret_only)
void main_f_1273940() {}

// sub_1273950  (orig 0x1273950, copy2)
void main_f_1273950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1273960  (orig 0x1273960, copy2)
void main_f_1273960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1273a90  (orig 0x1273a90, ret_only)
void main_f_1273a90() {}

// sub_1273aa0  (orig 0x1273aa0, copy2)
void main_f_1273aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1273ab0  (orig 0x1273ab0, copy2)
void main_f_1273ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1273c30  (orig 0x1273c30, ret_only)
void main_f_1273c30() {}

// sub_1273c40  (orig 0x1273c40, tailcall)
void main_f_1273c40() { main::sub_e7c4c0(); }

// sub_1273c50  (orig 0x1273c50, tailcall)
void main_f_1273c50() { main::sub_1273cc0(); }

// sub_1273c80  (orig 0x1273c80, tailcall)
void main_f_1273c80() { main::sub_1273cc0(); }

// sub_1273c90  (orig 0x1273c90, tailcall)
void main_f_1273c90() { main::sub_1273cc0(); }

// sub_1274d30  (orig 0x1274d30, ret_only)
void main_f_1274d30() {}

// sub_1274ec0  (orig 0x1274ec0, ret_only)
void main_f_1274ec0() {}

// sub_1274ed0  (orig 0x1274ed0, ret_only)
void main_f_1274ed0() {}

// sub_1275780  (orig 0x1275780, tailcall)
void main_f_1275780() { main::sub_12759f0(); }

// sub_12758b0  (orig 0x12758b0, tailcall)
void main_f_12758b0() { main::sub_12759f0(); }

// sub_12758c0  (orig 0x12758c0, tailcall)
void main_f_12758c0() { main::sub_12759f0(); }

// sub_1275de0  (orig 0x1275de0, ret_only)
void main_f_1275de0() {}

// sub_1275e30  (orig 0x1275e30, ret_only)
void main_f_1275e30() {}

// sub_1275e40  (orig 0x1275e40, ret_only)
void main_f_1275e40() {}

// sub_1275e50  (orig 0x1275e50, ret_only)
void main_f_1275e50() {}

// sub_1275e60  (orig 0x1275e60, ret_only)
void main_f_1275e60() {}

// sub_1275e70  (orig 0x1275e70, ret_only)
void main_f_1275e70() {}

// sub_1275e80  (orig 0x1275e80, ret_only)
void main_f_1275e80() {}

// sub_1275e90  (orig 0x1275e90, ret_only)
void main_f_1275e90() {}

// sub_1275ea0  (orig 0x1275ea0, ret_only)
void main_f_1275ea0() {}

// sub_1275ec0  (orig 0x1275ec0, ret_only)
void main_f_1275ec0() {}

// sub_1275ed0  (orig 0x1275ed0, copy2)
void main_f_1275ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1275ee0  (orig 0x1275ee0, copy2)
void main_f_1275ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1275ef0  (orig 0x1275ef0, ret_only)
void main_f_1275ef0() {}

// sub_1275f00  (orig 0x1275f00, ret_only)
void main_f_1275f00() {}

// sub_1275f10  (orig 0x1275f10, ret_only)
void main_f_1275f10() {}

// sub_1275f20  (orig 0x1275f20, ret_only)
void main_f_1275f20() {}

// sub_1275f40  (orig 0x1275f40, ret_only)
void main_f_1275f40() {}

// sub_1275f50  (orig 0x1275f50, copy2)
void main_f_1275f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1275f60  (orig 0x1275f60, copy2)
void main_f_1275f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1275f70  (orig 0x1275f70, ret_only)
void main_f_1275f70() {}

// sub_1275f80  (orig 0x1275f80, ret_only)
void main_f_1275f80() {}

// sub_1275f90  (orig 0x1275f90, ret_only)
void main_f_1275f90() {}

// sub_1275fa0  (orig 0x1275fa0, ret_only)
void main_f_1275fa0() {}

// sub_1275fc0  (orig 0x1275fc0, ret_only)
void main_f_1275fc0() {}

// sub_1275fd0  (orig 0x1275fd0, copy2)
void main_f_1275fd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1275fe0  (orig 0x1275fe0, copy2)
void main_f_1275fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1276000  (orig 0x1276000, ret_only)
void main_f_1276000() {}

// sub_1276010  (orig 0x1276010, copy2)
void main_f_1276010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1276020  (orig 0x1276020, copy2)
void main_f_1276020(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1276040  (orig 0x1276040, ret_only)
void main_f_1276040() {}

// sub_1276050  (orig 0x1276050, copy2)
void main_f_1276050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1276060  (orig 0x1276060, copy2)
void main_f_1276060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1276070  (orig 0x1276070, ret_only)
void main_f_1276070() {}

// sub_1276080  (orig 0x1276080, ret_only)
void main_f_1276080() {}

// sub_1276090  (orig 0x1276090, ret_only)
void main_f_1276090() {}

// sub_12760a0  (orig 0x12760a0, ret_only)
void main_f_12760a0() {}

// sub_12766e0  (orig 0x12766e0, tailcall)
void main_f_12766e0() { main::sub_1276890(); }

// sub_12767b0  (orig 0x12767b0, tailcall)
void main_f_12767b0() { main::sub_1276890(); }

// sub_12767c0  (orig 0x12767c0, tailcall)
void main_f_12767c0() { main::sub_1276890(); }

// sub_12769c0  (orig 0x12769c0, ret_only)
void main_f_12769c0() {}

// sub_12769d0  (orig 0x12769d0, ret_only)
void main_f_12769d0() {}

// sub_12769e0  (orig 0x12769e0, ret_only)
void main_f_12769e0() {}

// sub_12769f0  (orig 0x12769f0, ret_only)
void main_f_12769f0() {}

// sub_1276a90  (orig 0x1276a90, ret_only)
void main_f_1276a90() {}

// sub_1277180  (orig 0x1277180, tailcall)
void main_f_1277180() { main::sub_1277330(); }

// sub_1277250  (orig 0x1277250, tailcall)
void main_f_1277250() { main::sub_1277330(); }

// sub_1277260  (orig 0x1277260, tailcall)
void main_f_1277260() { main::sub_1277330(); }

// sub_1277460  (orig 0x1277460, ret_only)
void main_f_1277460() {}

// sub_1277470  (orig 0x1277470, ret_only)
void main_f_1277470() {}

// sub_1277480  (orig 0x1277480, ret_only)
void main_f_1277480() {}

// sub_1277490  (orig 0x1277490, ret_only)
void main_f_1277490() {}

// sub_1277f70  (orig 0x1277f70, tailcall)
void main_f_1277f70() { main::sub_e7c4c0(); }

// sub_1277f80  (orig 0x1277f80, tailcall)
void main_f_1277f80() { main::sub_1277ff0(); }

// sub_1277fb0  (orig 0x1277fb0, tailcall)
void main_f_1277fb0() { main::sub_1277ff0(); }

// sub_1277fc0  (orig 0x1277fc0, tailcall)
void main_f_1277fc0() { main::sub_1277ff0(); }

// sub_1278370  (orig 0x1278370, ret_only)
void main_f_1278370() {}

// sub_1278380  (orig 0x1278380, copy2)
void main_f_1278380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1278390  (orig 0x1278390, copy2)
void main_f_1278390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1278670  (orig 0x1278670, ret_only)
void main_f_1278670() {}

// sub_1278680  (orig 0x1278680, copy2)
void main_f_1278680(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_1278690  (orig 0x1278690, copy2)
void main_f_1278690(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_12786b0  (orig 0x12786b0, ret_only)
void main_f_12786b0() {}

// sub_12786c0  (orig 0x12786c0, copy2)
void main_f_12786c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12786d0  (orig 0x12786d0, copy2)
void main_f_12786d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1278cd0  (orig 0x1278cd0, getter)
uint32_t main_f_1278cd0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_12791c0  (orig 0x12791c0, tailcall)
void main_f_12791c0() { main::sub_1278230(); }

// sub_12792d0  (orig 0x12792d0, tailcall)
void main_f_12792d0() { main::sub_1278230(); }

// sub_12792e0  (orig 0x12792e0, tailcall)
void main_f_12792e0() { main::sub_1278230(); }

// sub_12795c0  (orig 0x12795c0, ret_only)
void main_f_12795c0() {}

// sub_12795d0  (orig 0x12795d0, copy2)
void main_f_12795d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12795e0  (orig 0x12795e0, copy2)
void main_f_12795e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1279630  (orig 0x1279630, ret_only)
void main_f_1279630() {}

// sub_1279640  (orig 0x1279640, copy2)
void main_f_1279640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1279650  (orig 0x1279650, copy2)
void main_f_1279650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127a2a0  (orig 0x127a2a0, ret_only)
void main_f_127a2a0() {}

// sub_127a2b0  (orig 0x127a2b0, copy2)
void main_f_127a2b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127a2c0  (orig 0x127a2c0, copy2)
void main_f_127a2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127a650  (orig 0x127a650, ret_only)
void main_f_127a650() {}

// sub_127a660  (orig 0x127a660, tailcall)
void main_f_127a660() { main::sub_e7c4c0(); }

// sub_127a670  (orig 0x127a670, tailcall)
void main_f_127a670() { main::sub_127a6e0(); }

// sub_127a6a0  (orig 0x127a6a0, tailcall)
void main_f_127a6a0() { main::sub_127a6e0(); }

// sub_127a6b0  (orig 0x127a6b0, tailcall)
void main_f_127a6b0() { main::sub_127a6e0(); }

// sub_127aa70  (orig 0x127aa70, ret_only)
void main_f_127aa70() {}

// sub_127aa80  (orig 0x127aa80, copy2)
void main_f_127aa80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127aa90  (orig 0x127aa90, copy2)
void main_f_127aa90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b2b0  (orig 0x127b2b0, tailcall)
void main_f_127b2b0() { main::sub_e7c4c0(); }

// sub_127b2c0  (orig 0x127b2c0, tailcall)
void main_f_127b2c0() { main::sub_127b330(); }

// sub_127b2f0  (orig 0x127b2f0, tailcall)
void main_f_127b2f0() { main::sub_127b330(); }

// sub_127b300  (orig 0x127b300, tailcall)
void main_f_127b300() { main::sub_127b330(); }

// sub_127b5e0  (orig 0x127b5e0, ret_only)
void main_f_127b5e0() {}

// sub_127b5f0  (orig 0x127b5f0, copy2)
void main_f_127b5f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b600  (orig 0x127b600, copy2)
void main_f_127b600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b650  (orig 0x127b650, ret_only)
void main_f_127b650() {}

// sub_127b6a0  (orig 0x127b6a0, ret_only)
void main_f_127b6a0() {}

// sub_127b6b0  (orig 0x127b6b0, copy2)
void main_f_127b6b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b6c0  (orig 0x127b6c0, copy2)
void main_f_127b6c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b7d0  (orig 0x127b7d0, ret_only)
void main_f_127b7d0() {}

// sub_127b7e0  (orig 0x127b7e0, copy2)
void main_f_127b7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b7f0  (orig 0x127b7f0, copy2)
void main_f_127b7f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b900  (orig 0x127b900, ret_only)
void main_f_127b900() {}

// sub_127b910  (orig 0x127b910, copy2)
void main_f_127b910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127b920  (orig 0x127b920, copy2)
void main_f_127b920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127be70  (orig 0x127be70, ret_only)
void main_f_127be70() {}

// sub_127be80  (orig 0x127be80, tailcall)
void main_f_127be80() { main::sub_e7c4c0(); }

// sub_127be90  (orig 0x127be90, tailcall)
void main_f_127be90() { main::sub_127bf00(); }

// sub_127bec0  (orig 0x127bec0, tailcall)
void main_f_127bec0() { main::sub_127bf00(); }

// sub_127bed0  (orig 0x127bed0, tailcall)
void main_f_127bed0() { main::sub_127bf00(); }

// sub_127c160  (orig 0x127c160, ret_only)
void main_f_127c160() {}

// sub_127cdc0  (orig 0x127cdc0, ret_only)
void main_f_127cdc0() {}

// sub_127cea0  (orig 0x127cea0, tailcall)
void main_f_127cea0() { main::sub_127cdd0(); }

// sub_127ceb0  (orig 0x127ceb0, tailcall)
void main_f_127ceb0() { main::sub_127cf20(); }

// sub_127cee0  (orig 0x127cee0, tailcall)
void main_f_127cee0() { main::sub_127cf20(); }

// sub_127cef0  (orig 0x127cef0, tailcall)
void main_f_127cef0() { main::sub_127cf20(); }

// sub_127d460  (orig 0x127d460, ret_only)
void main_f_127d460() {}

// sub_127d480  (orig 0x127d480, ret_only)
void main_f_127d480() {}

// sub_127d490  (orig 0x127d490, copy2)
void main_f_127d490(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_127d4a0  (orig 0x127d4a0, copy2)
void main_f_127d4a0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_127d510  (orig 0x127d510, ret_only)
void main_f_127d510() {}

// sub_127d520  (orig 0x127d520, copy2)
void main_f_127d520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127d530  (orig 0x127d530, copy2)
void main_f_127d530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127d610  (orig 0x127d610, ret_only)
void main_f_127d610() {}

// sub_127d870  (orig 0x127d870, ret_only)
void main_f_127d870() {}

// sub_127d880  (orig 0x127d880, tailcall)
void main_f_127d880() { main::sub_e7c4c0(); }

// sub_127d890  (orig 0x127d890, tailcall)
void main_f_127d890() { main::sub_127d900(); }

// sub_127d8c0  (orig 0x127d8c0, tailcall)
void main_f_127d8c0() { main::sub_127d900(); }

// sub_127d8d0  (orig 0x127d8d0, tailcall)
void main_f_127d8d0() { main::sub_127d900(); }

// sub_127e040  (orig 0x127e040, tailcall)
void main_f_127e040() { main::sub_126b950(); }

// sub_127ef50  (orig 0x127ef50, ret_only)
void main_f_127ef50() {}

// sub_127fbc0  (orig 0x127fbc0, ret_only)
void main_f_127fbc0() {}

// sub_127fbd0  (orig 0x127fbd0, copy2)
void main_f_127fbd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_127fbe0  (orig 0x127fbe0, copy2)
void main_f_127fbe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12809a0  (orig 0x12809a0, ret_only)
void main_f_12809a0() {}

// sub_1281510  (orig 0x1281510, ret_only)
void main_f_1281510() {}

// sub_12821b0  (orig 0x12821b0, ret_only)
void main_f_12821b0() {}

// sub_12821c0  (orig 0x12821c0, copy2)
void main_f_12821c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12821d0  (orig 0x12821d0, copy2)
void main_f_12821d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12821e0  (orig 0x12821e0, copy2)
void main_f_12821e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12821f0  (orig 0x12821f0, copy2)
void main_f_12821f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282330  (orig 0x1282330, ret_only)
void main_f_1282330() {}

// sub_1282340  (orig 0x1282340, copy2)
void main_f_1282340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282350  (orig 0x1282350, copy2)
void main_f_1282350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282360  (orig 0x1282360, copy2)
void main_f_1282360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282370  (orig 0x1282370, copy2)
void main_f_1282370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282390  (orig 0x1282390, ret_only)
void main_f_1282390() {}

// sub_12823a0  (orig 0x12823a0, copy2)
void main_f_12823a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12823b0  (orig 0x12823b0, copy2)
void main_f_12823b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12823d0  (orig 0x12823d0, ret_only)
void main_f_12823d0() {}

// sub_12823e0  (orig 0x12823e0, copy2)
void main_f_12823e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12823f0  (orig 0x12823f0, copy2)
void main_f_12823f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1282610  (orig 0x1282610, ret_only)
void main_f_1282610() {}

// sub_1283180  (orig 0x1283180, ret_only)
void main_f_1283180() {}

// sub_1283b30  (orig 0x1283b30, copy2)
void main_f_1283b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283b40  (orig 0x1283b40, copy2)
void main_f_1283b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283c80  (orig 0x1283c80, ret_only)
void main_f_1283c80() {}

// sub_1283c90  (orig 0x1283c90, copy2)
void main_f_1283c90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283ca0  (orig 0x1283ca0, copy2)
void main_f_1283ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283cb0  (orig 0x1283cb0, copy2)
void main_f_1283cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283cc0  (orig 0x1283cc0, copy2)
void main_f_1283cc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283cd0  (orig 0x1283cd0, copy2)
void main_f_1283cd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283ce0  (orig 0x1283ce0, copy2)
void main_f_1283ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283d00  (orig 0x1283d00, ret_only)
void main_f_1283d00() {}

// sub_1283d10  (orig 0x1283d10, copy2)
void main_f_1283d10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283d20  (orig 0x1283d20, copy2)
void main_f_1283d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283d40  (orig 0x1283d40, ret_only)
void main_f_1283d40() {}

// sub_1283d50  (orig 0x1283d50, copy2)
void main_f_1283d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283d60  (orig 0x1283d60, copy2)
void main_f_1283d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283ea0  (orig 0x1283ea0, ret_only)
void main_f_1283ea0() {}

// sub_1283eb0  (orig 0x1283eb0, copy2)
void main_f_1283eb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1283ec0  (orig 0x1283ec0, copy2)
void main_f_1283ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284f40  (orig 0x1284f40, ret_only)
void main_f_1284f40() {}

// sub_1284f50  (orig 0x1284f50, copy2)
void main_f_1284f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284f60  (orig 0x1284f60, copy2)
void main_f_1284f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284f80  (orig 0x1284f80, ret_only)
void main_f_1284f80() {}

// sub_1284f90  (orig 0x1284f90, copy2)
void main_f_1284f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284fa0  (orig 0x1284fa0, copy2)
void main_f_1284fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284fc0  (orig 0x1284fc0, ret_only)
void main_f_1284fc0() {}

// sub_1284fd0  (orig 0x1284fd0, copy2)
void main_f_1284fd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1284fe0  (orig 0x1284fe0, copy2)
void main_f_1284fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1285120  (orig 0x1285120, ret_only)
void main_f_1285120() {}

// sub_1285130  (orig 0x1285130, copy2)
void main_f_1285130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1285140  (orig 0x1285140, copy2)
void main_f_1285140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1286cf0  (orig 0x1286cf0, ret_only)
void main_f_1286cf0() {}

// sub_1286d00  (orig 0x1286d00, ret_only)
void main_f_1286d00() {}

// sub_1286d10  (orig 0x1286d10, ret_only)
void main_f_1286d10() {}

// sub_1286ec0  (orig 0x1286ec0, ret_only)
void main_f_1286ec0() {}

// sub_1287c70  (orig 0x1287c70, ret_only)
void main_f_1287c70() {}

// sub_1288750  (orig 0x1288750, copy2)
void main_f_1288750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1288760  (orig 0x1288760, copy2)
void main_f_1288760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1289720  (orig 0x1289720, ret_only)
void main_f_1289720() {}

// sub_1289730  (orig 0x1289730, copy2)
void main_f_1289730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1289740  (orig 0x1289740, copy2)
void main_f_1289740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a280  (orig 0x128a280, ret_only)
void main_f_128a280() {}

// sub_128a290  (orig 0x128a290, copy2)
void main_f_128a290(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a2a0  (orig 0x128a2a0, copy2)
void main_f_128a2a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a2b0  (orig 0x128a2b0, copy2)
void main_f_128a2b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a2c0  (orig 0x128a2c0, copy2)
void main_f_128a2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a2e0  (orig 0x128a2e0, ret_only)
void main_f_128a2e0() {}

// sub_128a2f0  (orig 0x128a2f0, copy2)
void main_f_128a2f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a300  (orig 0x128a300, copy2)
void main_f_128a300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a320  (orig 0x128a320, ret_only)
void main_f_128a320() {}

// sub_128a330  (orig 0x128a330, copy2)
void main_f_128a330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a340  (orig 0x128a340, copy2)
void main_f_128a340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a3b0  (orig 0x128a3b0, ret_only)
void main_f_128a3b0() {}

// sub_128a3c0  (orig 0x128a3c0, copy2)
void main_f_128a3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a3d0  (orig 0x128a3d0, copy2)
void main_f_128a3d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a510  (orig 0x128a510, ret_only)
void main_f_128a510() {}

// sub_128a520  (orig 0x128a520, copy2)
void main_f_128a520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128a530  (orig 0x128a530, copy2)
void main_f_128a530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b360  (orig 0x128b360, ret_only)
void main_f_128b360() {}

// sub_128b370  (orig 0x128b370, copy2)
void main_f_128b370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b380  (orig 0x128b380, copy2)
void main_f_128b380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b3a0  (orig 0x128b3a0, ret_only)
void main_f_128b3a0() {}

// sub_128b3b0  (orig 0x128b3b0, copy2)
void main_f_128b3b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b3c0  (orig 0x128b3c0, copy2)
void main_f_128b3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b410  (orig 0x128b410, ret_only)
void main_f_128b410() {}

// sub_128b420  (orig 0x128b420, copy2)
void main_f_128b420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128b430  (orig 0x128b430, copy2)
void main_f_128b430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128c0b0  (orig 0x128c0b0, ret_only)
void main_f_128c0b0() {}

// sub_128c0c0  (orig 0x128c0c0, copy2)
void main_f_128c0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128c0d0  (orig 0x128c0d0, copy2)
void main_f_128c0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128cf70  (orig 0x128cf70, ret_only)
void main_f_128cf70() {}

// sub_128cf80  (orig 0x128cf80, copy2)
void main_f_128cf80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128cf90  (orig 0x128cf90, copy2)
void main_f_128cf90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128cff0  (orig 0x128cff0, ret_only)
void main_f_128cff0() {}

// sub_128d000  (orig 0x128d000, copy2)
void main_f_128d000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128d010  (orig 0x128d010, copy2)
void main_f_128d010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128d150  (orig 0x128d150, ret_only)
void main_f_128d150() {}

// sub_128d160  (orig 0x128d160, copy2)
void main_f_128d160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128d170  (orig 0x128d170, copy2)
void main_f_128d170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_128e240  (orig 0x128e240, ret_only)
void main_f_128e240() {}

// sub_128ef60  (orig 0x128ef60, ret_only)
void main_f_128ef60() {}

// sub_128fb60  (orig 0x128fb60, ret_only)
void main_f_128fb60() {}

// sub_1290980  (orig 0x1290980, ret_only)
void main_f_1290980() {}

// sub_1290990  (orig 0x1290990, copy2)
void main_f_1290990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12909a0  (orig 0x12909a0, copy2)
void main_f_12909a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12909c0  (orig 0x12909c0, ret_only)
void main_f_12909c0() {}

// sub_12909d0  (orig 0x12909d0, copy2)
void main_f_12909d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12909e0  (orig 0x12909e0, copy2)
void main_f_12909e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290a50  (orig 0x1290a50, ret_only)
void main_f_1290a50() {}

// sub_1290a60  (orig 0x1290a60, copy2)
void main_f_1290a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290a70  (orig 0x1290a70, copy2)
void main_f_1290a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290a80  (orig 0x1290a80, copy2)
void main_f_1290a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290a90  (orig 0x1290a90, copy2)
void main_f_1290a90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290aa0  (orig 0x1290aa0, copy2)
void main_f_1290aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290ab0  (orig 0x1290ab0, copy2)
void main_f_1290ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290bf0  (orig 0x1290bf0, ret_only)
void main_f_1290bf0() {}

// sub_1290c00  (orig 0x1290c00, copy2)
void main_f_1290c00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c10  (orig 0x1290c10, copy2)
void main_f_1290c10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c20  (orig 0x1290c20, copy2)
void main_f_1290c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c30  (orig 0x1290c30, copy2)
void main_f_1290c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c50  (orig 0x1290c50, ret_only)
void main_f_1290c50() {}

// sub_1290c60  (orig 0x1290c60, copy2)
void main_f_1290c60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c70  (orig 0x1290c70, copy2)
void main_f_1290c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290c90  (orig 0x1290c90, ret_only)
void main_f_1290c90() {}

// sub_1290ca0  (orig 0x1290ca0, copy2)
void main_f_1290ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290cb0  (orig 0x1290cb0, copy2)
void main_f_1290cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290d20  (orig 0x1290d20, ret_only)
void main_f_1290d20() {}

// sub_1290d30  (orig 0x1290d30, copy2)
void main_f_1290d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1290d40  (orig 0x1290d40, copy2)
void main_f_1290d40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1291350  (orig 0x1291350, tailcall)
void main_f_1291350() { main::sub_12928c0(); }

// sub_1291af0  (orig 0x1291af0, tailcall)
void main_f_1291af0() { main::sub_12928c0(); }

// sub_1291c20  (orig 0x1291c20, tailcall)
void main_f_1291c20() { main::sub_126abd0(); }

// sub_1291f10  (orig 0x1291f10, ret_only)
void main_f_1291f10() {}

// sub_1291f20  (orig 0x1291f20, tailcall)
void main_f_1291f20() { main::sub_12928c0(); }

// sub_1292370  (orig 0x1292370, ret_only)
void main_f_1292370() {}

// sub_1292380  (orig 0x1292380, copy2)
void main_f_1292380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1292390  (orig 0x1292390, copy2)
void main_f_1292390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12923a0  (orig 0x12923a0, copy2)
void main_f_12923a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12923b0  (orig 0x12923b0, copy2)
void main_f_12923b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12923d0  (orig 0x12923d0, ret_only)
void main_f_12923d0() {}

// sub_12923e0  (orig 0x12923e0, copy2)
void main_f_12923e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12923f0  (orig 0x12923f0, copy2)
void main_f_12923f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1292410  (orig 0x1292410, ret_only)
void main_f_1292410() {}

// sub_1292420  (orig 0x1292420, copy2)
void main_f_1292420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1292430  (orig 0x1292430, copy2)
void main_f_1292430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1292660  (orig 0x1292660, ret_only)
void main_f_1292660() {}

// sub_1292670  (orig 0x1292670, tailcall)
void main_f_1292670() { main::sub_12928c0(); }

// sub_12928a0  (orig 0x12928a0, copy2)
void main_f_12928a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12928b0  (orig 0x12928b0, copy2)
void main_f_12928b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1292a40  (orig 0x1292a40, tailcall)
void main_f_1292a40() { main::sub_12928c0(); }

// sub_12930c0  (orig 0x12930c0, ret_only)
void main_f_12930c0() {}

// sub_12930d0  (orig 0x12930d0, tailcall)
void main_f_12930d0() { main::sub_12928c0(); }

// sub_12935c0  (orig 0x12935c0, ret_only)
void main_f_12935c0() {}

// sub_12935d0  (orig 0x12935d0, copy2)
void main_f_12935d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12935e0  (orig 0x12935e0, copy2)
void main_f_12935e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12935f0  (orig 0x12935f0, copy2)
void main_f_12935f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1293600  (orig 0x1293600, copy2)
void main_f_1293600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1293750  (orig 0x1293750, ret_only)
void main_f_1293750() {}

// sub_1293760  (orig 0x1293760, copy2)
void main_f_1293760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1293770  (orig 0x1293770, copy2)
void main_f_1293770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12937b0  (orig 0x12937b0, ret_only)
void main_f_12937b0() {}

// sub_12937c0  (orig 0x12937c0, copy2)
void main_f_12937c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12937d0  (orig 0x12937d0, copy2)
void main_f_12937d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12957c0  (orig 0x12957c0, tailcall)
void main_f_12957c0() { main::sub_e7c4c0(); }

// sub_12957d0  (orig 0x12957d0, tailcall)
void main_f_12957d0() { main::sub_1295840(); }

// sub_1295800  (orig 0x1295800, tailcall)
void main_f_1295800() { main::sub_1295840(); }

// sub_1295810  (orig 0x1295810, tailcall)
void main_f_1295810() { main::sub_1295840(); }

// sub_1295980  (orig 0x1295980, ret_only)
void main_f_1295980() {}

// sub_1295990  (orig 0x1295990, copy2)
void main_f_1295990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12959a0  (orig 0x12959a0, copy2)
void main_f_12959a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12960d0  (orig 0x12960d0, ret_only)
void main_f_12960d0() {}

// sub_12960e0  (orig 0x12960e0, copy2)
void main_f_12960e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12960f0  (orig 0x12960f0, copy2)
void main_f_12960f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1296c50  (orig 0x1296c50, tailcall)
void main_f_1296c50() { main::sub_1296a90(); }

// sub_1296c80  (orig 0x1296c80, mov_ret)
uint32_t main_f_1296c80() { return 1; }

// sub_12977e0  (orig 0x12977e0, tailcall)
void main_f_12977e0() { main::sub_1297810(); }

// sub_12977f0  (orig 0x12977f0, tailcall)
void main_f_12977f0() { main::sub_1297810(); }

// sub_1297800  (orig 0x1297800, tailcall)
void main_f_1297800() { main::sub_1297810(); }

// sub_1297e50  (orig 0x1297e50, getter)
uint64_t main_f_1297e50(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1297fc0  (orig 0x1297fc0, mov_ret)
uint32_t main_f_1297fc0() { return 1; }

// sub_12a0660  (orig 0x12a0660, ret_only)
void main_f_12a0660() {}

// sub_12a0b40  (orig 0x12a0b40, tailcall)
void main_f_12a0b40() { main::sub_12a0980(); }

// sub_12a2850  (orig 0x12a2850, ret_only)
void main_f_12a2850() {}

// sub_12a2860  (orig 0x12a2860, ret_only)
void main_f_12a2860() {}

// sub_12a2870  (orig 0x12a2870, ret_only)
void main_f_12a2870() {}

// sub_12a4550  (orig 0x12a4550, tailcall)
void main_f_12a4550() { main::sub_12a4420(); }

// sub_12a4560  (orig 0x12a4560, tailcall)
void main_f_12a4560() { main::sub_12a0da0(); }

// sub_12a4590  (orig 0x12a4590, tailcall)
void main_f_12a4590() { main::sub_12a0da0(); }

// sub_12a45a0  (orig 0x12a45a0, tailcall)
void main_f_12a45a0() { main::sub_12a0da0(); }

// sub_12a51f0  (orig 0x12a51f0, tailcall)
void main_f_12a51f0() { main::sub_12a53e0(); }

// sub_12a52e0  (orig 0x12a52e0, tailcall)
void main_f_12a52e0() { main::sub_12a53e0(); }

// sub_12a52f0  (orig 0x12a52f0, tailcall)
void main_f_12a52f0() { main::sub_12a53e0(); }

// sub_12a61d0  (orig 0x12a61d0, ret_only)
void main_f_12a61d0() {}

// sub_12a61e0  (orig 0x12a61e0, copy2)
void main_f_12a61e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12a61f0  (orig 0x12a61f0, copy2)
void main_f_12a61f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12a6300  (orig 0x12a6300, ret_only)
void main_f_12a6300() {}

// sub_12a69d0  (orig 0x12a69d0, ret_only)
void main_f_12a69d0() {}

// sub_12a78c0  (orig 0x12a78c0, ret_only)
void main_f_12a78c0() {}

// sub_12aa260  (orig 0x12aa260, tailcall)
void main_f_12aa260() { main::sub_12a9ed0(); }

// sub_12aa430  (orig 0x12aa430, ret_only)
void main_f_12aa430() {}

// sub_12aa440  (orig 0x12aa440, copy2)
void main_f_12aa440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa450  (orig 0x12aa450, copy2)
void main_f_12aa450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa470  (orig 0x12aa470, ret_only)
void main_f_12aa470() {}

// sub_12aa480  (orig 0x12aa480, copy2)
void main_f_12aa480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa490  (orig 0x12aa490, copy2)
void main_f_12aa490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa4b0  (orig 0x12aa4b0, ret_only)
void main_f_12aa4b0() {}

// sub_12aa4c0  (orig 0x12aa4c0, copy2)
void main_f_12aa4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa4d0  (orig 0x12aa4d0, copy2)
void main_f_12aa4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa4f0  (orig 0x12aa4f0, ret_only)
void main_f_12aa4f0() {}

// sub_12aa500  (orig 0x12aa500, copy2)
void main_f_12aa500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa510  (orig 0x12aa510, copy2)
void main_f_12aa510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa530  (orig 0x12aa530, ret_only)
void main_f_12aa530() {}

// sub_12aa540  (orig 0x12aa540, copy2)
void main_f_12aa540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa550  (orig 0x12aa550, copy2)
void main_f_12aa550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa570  (orig 0x12aa570, ret_only)
void main_f_12aa570() {}

// sub_12aa580  (orig 0x12aa580, copy2)
void main_f_12aa580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12aa590  (orig 0x12aa590, copy2)
void main_f_12aa590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad2c0  (orig 0x12ad2c0, ret_only)
void main_f_12ad2c0() {}

// sub_12ad2d0  (orig 0x12ad2d0, copy2)
void main_f_12ad2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad2e0  (orig 0x12ad2e0, copy2)
void main_f_12ad2e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad350  (orig 0x12ad350, ret_only)
void main_f_12ad350() {}

// sub_12ad360  (orig 0x12ad360, copy2)
void main_f_12ad360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad370  (orig 0x12ad370, copy2)
void main_f_12ad370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad3a0  (orig 0x12ad3a0, ret_only)
void main_f_12ad3a0() {}

// sub_12ad3b0  (orig 0x12ad3b0, copy2)
void main_f_12ad3b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad3c0  (orig 0x12ad3c0, copy2)
void main_f_12ad3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

