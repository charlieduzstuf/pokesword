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

namespace main { void sub_12a29d0(); }
namespace main { void T_contents_01_01(); }
namespace main { void sub_12b7510(); }
namespace main { void sub_12b8d50(); }
namespace main { void sub_12bddf0(); }
namespace main { void sub_12be010(); }
namespace main { void sub_12bee00(); }
namespace main { void sub_12ba950(); }
namespace main { void sub_12c2d30(); }
namespace main { void sub_12c2ef0(); }
namespace main { void sub_e7c4c0(); }
namespace main { void sub_12c6840(); }
namespace main { void sub_12c70f0(); }
namespace main { void sub_12c8fc0(); }
namespace main { void sub_12c9280(); }
namespace main { void sub_12c97c0(); }
namespace main { void sub_12ca440(); }
namespace main { void sub_12ca8d0(); }
namespace main { void sub_12d57f0(); }
namespace main { void sub_12d7ea0(); }
namespace main { void sub_12d8010(); }
namespace main { void sub_12d8840(); }
namespace main { void sub_12db5e0(); }
namespace main { void sub_12dcca0(); }
namespace main { void sub_12de2a0(); }
namespace main { void sub_12df4a0(); }
namespace main { void sub_12e0670(); }
namespace main { void sub_12e3210(); }
namespace main { void sub_12e45f0(); }
namespace main { void sub_12e4800(); }
namespace main { void sub_12e8820(); }
namespace main { void sub_12eab20(); }
namespace main { void sub_12eac90(); }
namespace main { void sub_12ebc30(); }
namespace main { void sub_12ec1e0(); }
namespace main { void sub_12ecfd0(); }
namespace main { void sub_12ee870(); }
namespace main { void sub_12cdff0(); }
namespace main { void sub_12f4f80(); }
namespace main { void sub_12f7cf0(); }
namespace main { void sub_12f8900(); }
namespace main { void sub_1303d40(); }
namespace main { void sub_e7c250(); }
namespace main { void sub_13041c0(); }
namespace main { void sub_1304ff0(); }
namespace main { void sub_e7feb0(); }
namespace main { void sub_1305570(); }
namespace main { void sub_1305840(); }
namespace main { void sub_1306cf0(); }
namespace main { void sub_1307bb0(); }
namespace main { void sub_13089e0(); }
namespace main { void sub_67c4e0(); }
namespace main { void sub_130efc0(); }
namespace main { void sub_1310880(); }
namespace main { void sub_13119f0(); }
namespace main { void sub_131a850(); }
namespace main { void sub_131b690(); }
namespace main { void button_list_item__02d(); }
namespace main { void sub_131f690(); }
namespace main { void sub_1320ae0(); }
namespace main { void sub_1320fd0(); }
namespace main { void sub_1321580(); }
namespace main { void sub_1323280(); }
namespace main { void sub_1323f70(); }
namespace main { void sub_1324b80(); }
namespace main { void sub_1325d30(); }
namespace main { void sub_13270c0(); }
namespace main { void sub_132abe0(); }
namespace main { void sub_132ad80(); }
namespace main { void sub_132ba40(); }
namespace main { void sub_1327b20(); }
namespace main { void sub_132e0a0(); }
namespace main { void sub_132e240(); }
namespace main { void sub_132fda0(); }
namespace main { void sub_132ff60(); }
namespace main { void sub_1331fb0(); }
namespace main { void sub_1333cb0(); }
namespace main { void sub_1333e80(); }
namespace main { void sub_1337220(); }
namespace main { void sub_13373e0(); }
namespace main { void sub_1339120(); }
namespace main { void sub_1339320(); }
namespace main { void sub_133cb80(); }
namespace main { void sub_133def0(); }
namespace main { void sub_133ecb0(); }
namespace main { void sub_133fe90(); }
namespace main { void sub_1340910(); }
namespace main { void sub_1343f10(); }
namespace main { void sub_133f290(); }
namespace main { void sub_1344400(); }
namespace main { void sub_13447b0(); }
namespace main { void sub_ce0(); }
namespace main { void sub_135c0c0(); }
namespace main { void sub_136d010(); }
namespace main { void sub_136f630(); }
namespace main { void sub_137fc80(); }
namespace main { void sub_1390b90(); }
namespace main { void sub_1376a70(); }
namespace main { void sub_1387740(); }
namespace main { void sub_138cba0(); }
namespace main { void sub_13925f0(); }
namespace main { void sub_1397ae0(); }
namespace main { void sub_1397c60(); }
extern void main_f_136d000();
namespace main { void sub_138dbc0(); }
namespace main { void sub_13a32c0(); }
namespace main { void sub_13a1e10(); }
namespace main { void sub_13a1bc0(); }
namespace main { void sub_d2a440(); }
namespace main { void sub_13a78f0(); }
namespace main { void sub_13a7aa0(); }
namespace main { void sub_13a8520(); }
namespace main { void sub_d25c50(); }
namespace main { void sub_13cc110(); }
namespace main { void LookAtWait_3(); }
namespace main { void LookAtWait_5(); }
namespace main { void sub_13ce680(); }
namespace main { void sub_13ceb20(); }
namespace main { void sub_13cfcd0(); }
namespace main { void sub_13d0c00(); }
namespace main { void sub_13d0d90(); }
namespace main { void sub_13d16f0(); }
namespace main { void sub_13d1880(); }
namespace main { void sub_13d2630(); }
namespace main { void sub_13d3320(); }
namespace main { void sub_13e3130(); }
namespace main { void sub_13e32b0(); }
namespace main { void sub_13e3450(); }
namespace main { void sub_13e6430(); }
namespace main { void sub_13f7910(); }
namespace main { void sub_13fbdc0(); }
namespace main { void sub_13fcd30(); }
namespace main { void sub_13fe530(); }
namespace main { void sub_13ff5d0(); }
namespace main { void sub_1401050(); }
namespace main { void sub_14028b0(); }
namespace main { void sub_1402c20(); }
namespace main { void sub_14058c0(); }
namespace main { void sub_1407030(); }
namespace main { void sub_140c1d0(); }
namespace main { void sub_140ce80(); }
namespace main { void sub_140ea50(); }
namespace main { void sub_140ee50(); }
namespace main { void sub_140f090(); }
namespace main { void sub_1412a50(); }
namespace main { void sub_1413320(); }
namespace main { void sub_14141c0(); }
namespace main { void sub_1414dc0(); }
namespace main { void sub_14158a0(); }
namespace main { void sub_1416a80(); }
namespace main { void sub_1417340(); }
namespace main { void sub_1417f00(); }
namespace main { void sub_1419560(); }
namespace main { void sub_1419ab0(); }
namespace main { void sub_141c270(); }
namespace main { void sub_141e920(); }
namespace main { void sub_141ea90(); }
namespace main { void sub_1420c40(); }
namespace main { void sub_1420e40(); }
namespace main { void sub_1421c60(); }
namespace main { void sub_14221f0(); }
namespace main { void sub_14232c0(); }
namespace main { void sub_1423c50(); }
namespace main { void sub_1425310(); }
namespace main { void sub_1425730(); }
namespace main { void sub_1425a50(); }
namespace main { void sub_14273a0(); }
namespace main { void sub_1427960(); }
namespace main { void sub_1428950(); }
namespace main { void sub_1428d30(); }
namespace main { void sub_14294d0(); }
namespace main { void sub_1429850(); }
namespace main { void sub_1429f10(); }
namespace main { void sub_142a310(); }
namespace main { void sub_142bbb0(); }
namespace main { void sub_142c700(); }
namespace main { void sub_142f550(); }
namespace main { void sub_1433540(); }
namespace main { void sub_14314e0(); }
namespace main { void sub_14302c0(); }
namespace main { void sub_1430b90(); }
namespace main { void sub_1439930(); }
namespace main { void sub_143cee0(); }
namespace main { void sub_143daf0(); }
namespace main { void sub_1439d80(); }
namespace main { void sub_143e7e0(); }
namespace main { void sub_143f560(); }
namespace main { void sub_143fcf0(); }
namespace main { void sub_1440750(); }
namespace main { void sub_1441d30(); }
namespace main { void sub_1443030(); }
namespace main { void sub_1449390(); }
namespace main { void sub_1449740(); }
namespace main { void sub_14ba4c0(); }
namespace main { void sub_144aae0(); }
namespace main { void sub_144be50(); }
namespace main { void sub_144c2d0(); }
namespace main { void sub_144cc50(); }
namespace main { void sub_144d650(); }
namespace main { void sub_144ea60(); }
namespace main { void sub_144f040(); }
namespace main { void sub_144f480(); }
namespace main { void sub_1454900(); }
namespace main { void sub_1456440(); }
namespace main { void sub_1456b90(); }
namespace main { void sub_1458480(); }
namespace main { void sub_145ee10(); }
namespace main { void sub_145ef80(); }
namespace main { void sub_145f440(); }
namespace main { void sub_145f930(); }
namespace main { void sub_145fdd0(); }
namespace main { void sub_1457c40(); }
namespace main { void sub_1460b20(); }
namespace main { void sub_1461290(); }
namespace main { void sub_14669f0(); }
namespace main { void sub_1466d60(); }
namespace main { void sub_1467080(); }
namespace main { void sub_146c7b0(); }
namespace main { void sub_146db90(); }
namespace main { void sub_146e500(); }
namespace main { void sub_146f510(); }
namespace main { void sub_1470910(); }
namespace main { void sub_1471ed0(); }
namespace main { void sub_1472050(); }
namespace main { void sub_1472660(); }
namespace main { void sub_1473130(); }
namespace main { void sub_1473ba0(); }
namespace main { void sub_1474a30(); }
namespace main { void sub_1476890(); }
namespace main { void sub_1476b50(); }
namespace main { void sub_14770e0(); }
namespace main { void sub_14775a0(); }
namespace main { void sub_1477990(); }
namespace main { void sub_1478660(); }

// sub_12ad450  (orig 0x12ad450, ret_only)
void main_f_12ad450() {}

// sub_12ad460  (orig 0x12ad460, copy2)
void main_f_12ad460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad470  (orig 0x12ad470, copy2)
void main_f_12ad470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad490  (orig 0x12ad490, ret_only)
void main_f_12ad490() {}

// sub_12ad4a0  (orig 0x12ad4a0, copy2)
void main_f_12ad4a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad4b0  (orig 0x12ad4b0, copy2)
void main_f_12ad4b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad4d0  (orig 0x12ad4d0, ret_only)
void main_f_12ad4d0() {}

// sub_12ad4e0  (orig 0x12ad4e0, copy2)
void main_f_12ad4e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad4f0  (orig 0x12ad4f0, copy2)
void main_f_12ad4f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad520  (orig 0x12ad520, ret_only)
void main_f_12ad520() {}

// sub_12ad530  (orig 0x12ad530, copy2)
void main_f_12ad530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad540  (orig 0x12ad540, copy2)
void main_f_12ad540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad5a0  (orig 0x12ad5a0, ret_only)
void main_f_12ad5a0() {}

// sub_12ad5b0  (orig 0x12ad5b0, copy2)
void main_f_12ad5b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad5c0  (orig 0x12ad5c0, copy2)
void main_f_12ad5c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad5e0  (orig 0x12ad5e0, ret_only)
void main_f_12ad5e0() {}

// sub_12ad5f0  (orig 0x12ad5f0, copy2)
void main_f_12ad5f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad600  (orig 0x12ad600, copy2)
void main_f_12ad600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad620  (orig 0x12ad620, ret_only)
void main_f_12ad620() {}

// sub_12ad630  (orig 0x12ad630, copy2)
void main_f_12ad630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad640  (orig 0x12ad640, copy2)
void main_f_12ad640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad660  (orig 0x12ad660, ret_only)
void main_f_12ad660() {}

// sub_12ad670  (orig 0x12ad670, copy2)
void main_f_12ad670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad680  (orig 0x12ad680, copy2)
void main_f_12ad680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad810  (orig 0x12ad810, ret_only)
void main_f_12ad810() {}

// sub_12ad820  (orig 0x12ad820, copy2)
void main_f_12ad820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad830  (orig 0x12ad830, copy2)
void main_f_12ad830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad850  (orig 0x12ad850, ret_only)
void main_f_12ad850() {}

// sub_12ad860  (orig 0x12ad860, copy2)
void main_f_12ad860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad870  (orig 0x12ad870, copy2)
void main_f_12ad870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad8f0  (orig 0x12ad8f0, ret_only)
void main_f_12ad8f0() {}

// sub_12ad900  (orig 0x12ad900, copy2)
void main_f_12ad900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad910  (orig 0x12ad910, copy2)
void main_f_12ad910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad9d0  (orig 0x12ad9d0, ret_only)
void main_f_12ad9d0() {}

// sub_12ad9e0  (orig 0x12ad9e0, copy2)
void main_f_12ad9e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ad9f0  (orig 0x12ad9f0, copy2)
void main_f_12ad9f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ada70  (orig 0x12ada70, ret_only)
void main_f_12ada70() {}

// sub_12ada80  (orig 0x12ada80, copy2)
void main_f_12ada80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ada90  (orig 0x12ada90, copy2)
void main_f_12ada90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adab0  (orig 0x12adab0, ret_only)
void main_f_12adab0() {}

// sub_12adac0  (orig 0x12adac0, copy2)
void main_f_12adac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adad0  (orig 0x12adad0, copy2)
void main_f_12adad0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adaf0  (orig 0x12adaf0, ret_only)
void main_f_12adaf0() {}

// sub_12adb00  (orig 0x12adb00, copy2)
void main_f_12adb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adb10  (orig 0x12adb10, copy2)
void main_f_12adb10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adb70  (orig 0x12adb70, ret_only)
void main_f_12adb70() {}

// sub_12adb80  (orig 0x12adb80, copy2)
void main_f_12adb80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12adb90  (orig 0x12adb90, copy2)
void main_f_12adb90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ae310  (orig 0x12ae310, tailcall)
void main_f_12ae310() { main::sub_12a29d0(); }

// sub_12ae320  (orig 0x12ae320, ret_only)
void main_f_12ae320() {}

// sub_12ae330  (orig 0x12ae330, ret_only)
void main_f_12ae330() {}

// sub_12ae440  (orig 0x12ae440, tailcall)
void main_f_12ae440() { main::sub_12a29d0(); }

// sub_12ae450  (orig 0x12ae450, tailcall)
void main_f_12ae450() { main::sub_12a29d0(); }

// sub_12ae560  (orig 0x12ae560, ret_only)
void main_f_12ae560() {}

// sub_12aecf0  (orig 0x12aecf0, ret_only)
void main_f_12aecf0() {}

// sub_12aeee0  (orig 0x12aeee0, straight)
void main_f_12aeee0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 100) = 30;
}

// sub_12b2b60  (orig 0x12b2b60, ret_only)
void main_f_12b2b60() {}

// sub_12b3c00  (orig 0x12b3c00, ret_only)
void main_f_12b3c00() {}

// sub_12b3c10  (orig 0x12b3c10, copy2)
void main_f_12b3c10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3c20  (orig 0x12b3c20, copy2)
void main_f_12b3c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3cc0  (orig 0x12b3cc0, ret_only)
void main_f_12b3cc0() {}

// sub_12b3cd0  (orig 0x12b3cd0, copy2)
void main_f_12b3cd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3ce0  (orig 0x12b3ce0, copy2)
void main_f_12b3ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3d40  (orig 0x12b3d40, ret_only)
void main_f_12b3d40() {}

// sub_12b3d50  (orig 0x12b3d50, copy2)
void main_f_12b3d50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3d60  (orig 0x12b3d60, copy2)
void main_f_12b3d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3dc0  (orig 0x12b3dc0, ret_only)
void main_f_12b3dc0() {}

// sub_12b3dd0  (orig 0x12b3dd0, copy2)
void main_f_12b3dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3de0  (orig 0x12b3de0, copy2)
void main_f_12b3de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b3df0  (orig 0x12b3df0, ret_only)
void main_f_12b3df0() {}

// sub_12b43d0  (orig 0x12b43d0, ret_only)
void main_f_12b43d0() {}

// sub_12b48c0  (orig 0x12b48c0, ret_only)
void main_f_12b48c0() {}

// sub_12b4ab0  (orig 0x12b4ab0, tailcall)
void main_f_12b4ab0() { main::T_contents_01_01(); }

// sub_12b76c0  (orig 0x12b76c0, tailcall)
void main_f_12b76c0() { main::sub_12b7510(); }

// sub_12b7a50  (orig 0x12b7a50, ret_only)
void main_f_12b7a50() {}

// sub_12b7a60  (orig 0x12b7a60, copy2)
void main_f_12b7a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7a70  (orig 0x12b7a70, copy2)
void main_f_12b7a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7a90  (orig 0x12b7a90, ret_only)
void main_f_12b7a90() {}

// sub_12b7aa0  (orig 0x12b7aa0, copy2)
void main_f_12b7aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7ab0  (orig 0x12b7ab0, copy2)
void main_f_12b7ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7ad0  (orig 0x12b7ad0, ret_only)
void main_f_12b7ad0() {}

// sub_12b7ae0  (orig 0x12b7ae0, copy2)
void main_f_12b7ae0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7af0  (orig 0x12b7af0, copy2)
void main_f_12b7af0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7b40  (orig 0x12b7b40, ret_only)
void main_f_12b7b40() {}

// sub_12b7b50  (orig 0x12b7b50, copy2)
void main_f_12b7b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b7b60  (orig 0x12b7b60, copy2)
void main_f_12b7b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12b8fd0  (orig 0x12b8fd0, tailcall)
void main_f_12b8fd0() { main::sub_12b8d50(); }

// sub_12b9fb0  (orig 0x12b9fb0, ret_only)
void main_f_12b9fb0() {}

// sub_12b9fc0  (orig 0x12b9fc0, mov_ret)
uint32_t main_f_12b9fc0() { return 1; }

// sub_12ba570  (orig 0x12ba570, getter)
uint64_t main_f_12ba570(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_12ba700  (orig 0x12ba700, mov_ret)
uint32_t main_f_12ba700() { return 2; }

// sub_12bdf00  (orig 0x12bdf00, tailcall)
void main_f_12bdf00() { main::sub_12bddf0(); }

// sub_12bdf10  (orig 0x12bdf10, tailcall)
void main_f_12bdf10() { main::sub_12be010(); }

// sub_12bdfd0  (orig 0x12bdfd0, tailcall)
void main_f_12bdfd0() { main::sub_12be010(); }

// sub_12bdfe0  (orig 0x12bdfe0, tailcall)
void main_f_12bdfe0() { main::sub_12be010(); }

// sub_12be370  (orig 0x12be370, ret_only)
void main_f_12be370() {}

// sub_12be380  (orig 0x12be380, copy2)
void main_f_12be380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be390  (orig 0x12be390, copy2)
void main_f_12be390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be400  (orig 0x12be400, ret_only)
void main_f_12be400() {}

// sub_12be410  (orig 0x12be410, copy2)
void main_f_12be410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be420  (orig 0x12be420, copy2)
void main_f_12be420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be4a0  (orig 0x12be4a0, ret_only)
void main_f_12be4a0() {}

// sub_12be4b0  (orig 0x12be4b0, copy2)
void main_f_12be4b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be4c0  (orig 0x12be4c0, copy2)
void main_f_12be4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be560  (orig 0x12be560, ret_only)
void main_f_12be560() {}

// sub_12be570  (orig 0x12be570, copy2)
void main_f_12be570(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be580  (orig 0x12be580, copy2)
void main_f_12be580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be780  (orig 0x12be780, ret_only)
void main_f_12be780() {}

// sub_12be790  (orig 0x12be790, copy2)
void main_f_12be790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be7a0  (orig 0x12be7a0, copy2)
void main_f_12be7a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be890  (orig 0x12be890, ret_only)
void main_f_12be890() {}

// sub_12be8a0  (orig 0x12be8a0, copy2)
void main_f_12be8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12be8b0  (orig 0x12be8b0, copy2)
void main_f_12be8b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12bef20  (orig 0x12bef20, tailcall)
void main_f_12bef20() { main::sub_12bee00(); }

// sub_12bef30  (orig 0x12bef30, tailcall)
void main_f_12bef30() { main::sub_12ba950(); }

// sub_12bef60  (orig 0x12bef60, tailcall)
void main_f_12bef60() { main::sub_12ba950(); }

// sub_12bef70  (orig 0x12bef70, tailcall)
void main_f_12bef70() { main::sub_12ba950(); }

// sub_12c2e70  (orig 0x12c2e70, tailcall)
void main_f_12c2e70() { main::sub_12c2d30(); }

// sub_12c2e80  (orig 0x12c2e80, tailcall)
void main_f_12c2e80() { main::sub_12c2ef0(); }

// sub_12c2eb0  (orig 0x12c2eb0, tailcall)
void main_f_12c2eb0() { main::sub_12c2ef0(); }

// sub_12c2ec0  (orig 0x12c2ec0, tailcall)
void main_f_12c2ec0() { main::sub_12c2ef0(); }

// sub_12c3250  (orig 0x12c3250, ret_only)
void main_f_12c3250() {}

// sub_12c3260  (orig 0x12c3260, copy2)
void main_f_12c3260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c3270  (orig 0x12c3270, copy2)
void main_f_12c3270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c32a0  (orig 0x12c32a0, ret_only)
void main_f_12c32a0() {}

// sub_12c32b0  (orig 0x12c32b0, copy2)
void main_f_12c32b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c32c0  (orig 0x12c32c0, copy2)
void main_f_12c32c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c3700  (orig 0x12c3700, ret_only)
void main_f_12c3700() {}

// sub_12c3710  (orig 0x12c3710, copy2)
void main_f_12c3710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c3720  (orig 0x12c3720, copy2)
void main_f_12c3720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c37f0  (orig 0x12c37f0, ret_only)
void main_f_12c37f0() {}

// sub_12c3800  (orig 0x12c3800, copy2)
void main_f_12c3800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c3810  (orig 0x12c3810, copy2)
void main_f_12c3810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c65f0  (orig 0x12c65f0, ret_only)
void main_f_12c65f0() {}

// sub_12c67c0  (orig 0x12c67c0, tailcall)
void main_f_12c67c0() { main::sub_e7c4c0(); }

// sub_12c67d0  (orig 0x12c67d0, tailcall)
void main_f_12c67d0() { main::sub_12c6840(); }

// sub_12c6800  (orig 0x12c6800, tailcall)
void main_f_12c6800() { main::sub_12c6840(); }

// sub_12c6810  (orig 0x12c6810, tailcall)
void main_f_12c6810() { main::sub_12c6840(); }

// sub_12c6a00  (orig 0x12c6a00, ret_only)
void main_f_12c6a00() {}

// sub_12c6a10  (orig 0x12c6a10, copy2)
void main_f_12c6a10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c6a20  (orig 0x12c6a20, copy2)
void main_f_12c6a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c7060  (orig 0x12c7060, ret_only)
void main_f_12c7060() {}

// sub_12c7070  (orig 0x12c7070, tailcall)
void main_f_12c7070() { main::sub_e7c4c0(); }

// sub_12c7080  (orig 0x12c7080, tailcall)
void main_f_12c7080() { main::sub_12c70f0(); }

// sub_12c70b0  (orig 0x12c70b0, tailcall)
void main_f_12c70b0() { main::sub_12c70f0(); }

// sub_12c70c0  (orig 0x12c70c0, tailcall)
void main_f_12c70c0() { main::sub_12c70f0(); }

// sub_12c72b0  (orig 0x12c72b0, ret_only)
void main_f_12c72b0() {}

// sub_12c72c0  (orig 0x12c72c0, copy2)
void main_f_12c72c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c72d0  (orig 0x12c72d0, copy2)
void main_f_12c72d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12c81c0  (orig 0x12c81c0, ret_only)
void main_f_12c81c0() {}

// sub_12c8f40  (orig 0x12c8f40, tailcall)
void main_f_12c8f40() { main::sub_e7c4c0(); }

// sub_12c8f50  (orig 0x12c8f50, tailcall)
void main_f_12c8f50() { main::sub_12c8fc0(); }

// sub_12c8f80  (orig 0x12c8f80, tailcall)
void main_f_12c8f80() { main::sub_12c8fc0(); }

// sub_12c8f90  (orig 0x12c8f90, tailcall)
void main_f_12c8f90() { main::sub_12c8fc0(); }

// sub_12c93f0  (orig 0x12c93f0, tailcall)
void main_f_12c93f0() { main::sub_12c9280(); }

// sub_12c9420  (orig 0x12c9420, mov_ret)
uint32_t main_f_12c9420() { return 1; }

// sub_12c9780  (orig 0x12c9780, ret_only)
void main_f_12c9780() {}

// sub_12c9790  (orig 0x12c9790, tailcall)
void main_f_12c9790() { main::sub_12c97c0(); }

// sub_12c97a0  (orig 0x12c97a0, tailcall)
void main_f_12c97a0() { main::sub_12c97c0(); }

// sub_12c97b0  (orig 0x12c97b0, tailcall)
void main_f_12c97b0() { main::sub_12c97c0(); }

// sub_12ca0e0  (orig 0x12ca0e0, mov_ret)
uint32_t main_f_12ca0e0() { return 1; }

// sub_12ca410  (orig 0x12ca410, tailcall)
void main_f_12ca410() { main::sub_12ca440(); }

// sub_12ca420  (orig 0x12ca420, tailcall)
void main_f_12ca420() { main::sub_12ca440(); }

// sub_12ca430  (orig 0x12ca430, tailcall)
void main_f_12ca430() { main::sub_12ca440(); }

// sub_12cab90  (orig 0x12cab90, tailcall)
void main_f_12cab90() { main::sub_12ca8d0(); }

// sub_12cdc10  (orig 0x12cdc10, getter)
uint64_t main_f_12cdc10(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_12cdda0  (orig 0x12cdda0, mov_ret)
uint32_t main_f_12cdda0() { return 3; }

// sub_12d54c0  (orig 0x12d54c0, tailcall)
void main_f_12d54c0() { main::sub_12d57f0(); }

// sub_12d5650  (orig 0x12d5650, tailcall)
void main_f_12d5650() { main::sub_12d57f0(); }

// sub_12d5660  (orig 0x12d5660, tailcall)
void main_f_12d5660() { main::sub_12d57f0(); }

// sub_12d5980  (orig 0x12d5980, ret_only)
void main_f_12d5980() {}

// sub_12d5990  (orig 0x12d5990, copy2)
void main_f_12d5990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d59a0  (orig 0x12d59a0, copy2)
void main_f_12d59a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5a10  (orig 0x12d5a10, ret_only)
void main_f_12d5a10() {}

// sub_12d5a20  (orig 0x12d5a20, copy2)
void main_f_12d5a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5a30  (orig 0x12d5a30, copy2)
void main_f_12d5a30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5a90  (orig 0x12d5a90, ret_only)
void main_f_12d5a90() {}

// sub_12d5aa0  (orig 0x12d5aa0, copy2)
void main_f_12d5aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5ab0  (orig 0x12d5ab0, copy2)
void main_f_12d5ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5b20  (orig 0x12d5b20, ret_only)
void main_f_12d5b20() {}

// sub_12d5b30  (orig 0x12d5b30, copy2)
void main_f_12d5b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5b40  (orig 0x12d5b40, copy2)
void main_f_12d5b40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5bd0  (orig 0x12d5bd0, ret_only)
void main_f_12d5bd0() {}

// sub_12d5be0  (orig 0x12d5be0, copy2)
void main_f_12d5be0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5bf0  (orig 0x12d5bf0, copy2)
void main_f_12d5bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5c30  (orig 0x12d5c30, ret_only)
void main_f_12d5c30() {}

// sub_12d5c40  (orig 0x12d5c40, copy2)
void main_f_12d5c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5c50  (orig 0x12d5c50, copy2)
void main_f_12d5c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5c80  (orig 0x12d5c80, ret_only)
void main_f_12d5c80() {}

// sub_12d5c90  (orig 0x12d5c90, copy2)
void main_f_12d5c90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d5ca0  (orig 0x12d5ca0, copy2)
void main_f_12d5ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12d6850  (orig 0x12d6850, ret_only)
void main_f_12d6850() {}

// sub_12d7f90  (orig 0x12d7f90, tailcall)
void main_f_12d7f90() { main::sub_12d7ea0(); }

// sub_12d7fa0  (orig 0x12d7fa0, tailcall)
void main_f_12d7fa0() { main::sub_12d8010(); }

// sub_12d7fd0  (orig 0x12d7fd0, tailcall)
void main_f_12d7fd0() { main::sub_12d8010(); }

// sub_12d7fe0  (orig 0x12d7fe0, tailcall)
void main_f_12d7fe0() { main::sub_12d8010(); }

// sub_12d87b0  (orig 0x12d87b0, ret_only)
void main_f_12d87b0() {}

// sub_12d87c0  (orig 0x12d87c0, tailcall)
void main_f_12d87c0() { main::sub_e7c4c0(); }

// sub_12d87d0  (orig 0x12d87d0, tailcall)
void main_f_12d87d0() { main::sub_12d8840(); }

// sub_12d8800  (orig 0x12d8800, tailcall)
void main_f_12d8800() { main::sub_12d8840(); }

// sub_12d8810  (orig 0x12d8810, tailcall)
void main_f_12d8810() { main::sub_12d8840(); }

// sub_12db3f0  (orig 0x12db3f0, tailcall)
void main_f_12db3f0() { main::sub_12db5e0(); }

// sub_12db4e0  (orig 0x12db4e0, tailcall)
void main_f_12db4e0() { main::sub_12db5e0(); }

// sub_12db4f0  (orig 0x12db4f0, tailcall)
void main_f_12db4f0() { main::sub_12db5e0(); }

// sub_12db770  (orig 0x12db770, ret_only)
void main_f_12db770() {}

// sub_12db780  (orig 0x12db780, copy2)
void main_f_12db780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12db790  (orig 0x12db790, copy2)
void main_f_12db790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12db9a0  (orig 0x12db9a0, ret_only)
void main_f_12db9a0() {}

// sub_12db9b0  (orig 0x12db9b0, copy2)
void main_f_12db9b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12db9c0  (orig 0x12db9c0, copy2)
void main_f_12db9c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12dc1f0  (orig 0x12dc1f0, ret_only)
void main_f_12dc1f0() {}

// sub_12dcaf0  (orig 0x12dcaf0, tailcall)
void main_f_12dcaf0() { main::sub_12dcca0(); }

// sub_12dcbc0  (orig 0x12dcbc0, tailcall)
void main_f_12dcbc0() { main::sub_12dcca0(); }

// sub_12dcbd0  (orig 0x12dcbd0, tailcall)
void main_f_12dcbd0() { main::sub_12dcca0(); }

// sub_12dde30  (orig 0x12dde30, ret_only)
void main_f_12dde30() {}

// sub_12de220  (orig 0x12de220, tailcall)
void main_f_12de220() { main::sub_e7c4c0(); }

// sub_12de230  (orig 0x12de230, tailcall)
void main_f_12de230() { main::sub_12de2a0(); }

// sub_12de260  (orig 0x12de260, tailcall)
void main_f_12de260() { main::sub_12de2a0(); }

// sub_12de270  (orig 0x12de270, tailcall)
void main_f_12de270() { main::sub_12de2a0(); }

// sub_12df030  (orig 0x12df030, ret_only)
void main_f_12df030() {}

// sub_12df420  (orig 0x12df420, tailcall)
void main_f_12df420() { main::sub_e7c4c0(); }

// sub_12df430  (orig 0x12df430, tailcall)
void main_f_12df430() { main::sub_12df4a0(); }

// sub_12df460  (orig 0x12df460, tailcall)
void main_f_12df460() { main::sub_12df4a0(); }

// sub_12df470  (orig 0x12df470, tailcall)
void main_f_12df470() { main::sub_12df4a0(); }

// sub_12e01f0  (orig 0x12e01f0, ret_only)
void main_f_12e01f0() {}

// sub_12e05f0  (orig 0x12e05f0, tailcall)
void main_f_12e05f0() { main::sub_e7c4c0(); }

// sub_12e0600  (orig 0x12e0600, tailcall)
void main_f_12e0600() { main::sub_12e0670(); }

// sub_12e0630  (orig 0x12e0630, tailcall)
void main_f_12e0630() { main::sub_12e0670(); }

// sub_12e0640  (orig 0x12e0640, tailcall)
void main_f_12e0640() { main::sub_12e0670(); }

// sub_12e2da0  (orig 0x12e2da0, ret_only)
void main_f_12e2da0() {}

// sub_12e3190  (orig 0x12e3190, tailcall)
void main_f_12e3190() { main::sub_e7c4c0(); }

// sub_12e31a0  (orig 0x12e31a0, tailcall)
void main_f_12e31a0() { main::sub_12e3210(); }

// sub_12e31d0  (orig 0x12e31d0, tailcall)
void main_f_12e31d0() { main::sub_12e3210(); }

// sub_12e31e0  (orig 0x12e31e0, tailcall)
void main_f_12e31e0() { main::sub_12e3210(); }

// sub_12e4400  (orig 0x12e4400, ret_only)
void main_f_12e4400() {}

// sub_12e4780  (orig 0x12e4780, tailcall)
void main_f_12e4780() { main::sub_12e45f0(); }

// sub_12e4790  (orig 0x12e4790, tailcall)
void main_f_12e4790() { main::sub_12e4800(); }

// sub_12e47c0  (orig 0x12e47c0, tailcall)
void main_f_12e47c0() { main::sub_12e4800(); }

// sub_12e47d0  (orig 0x12e47d0, tailcall)
void main_f_12e47d0() { main::sub_12e4800(); }

// sub_12e4950  (orig 0x12e4950, ret_only)
void main_f_12e4950() {}

// sub_12e4960  (orig 0x12e4960, copy2)
void main_f_12e4960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e4970  (orig 0x12e4970, copy2)
void main_f_12e4970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e4a70  (orig 0x12e4a70, ret_only)
void main_f_12e4a70() {}

// sub_12e4a80  (orig 0x12e4a80, copy2)
void main_f_12e4a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e4a90  (orig 0x12e4a90, copy2)
void main_f_12e4a90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e4fa0  (orig 0x12e4fa0, ret_only)
void main_f_12e4fa0() {}

// sub_12e4fb0  (orig 0x12e4fb0, copy2)
void main_f_12e4fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e4fc0  (orig 0x12e4fc0, copy2)
void main_f_12e4fc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e50e0  (orig 0x12e50e0, ret_only)
void main_f_12e50e0() {}

// sub_12e50f0  (orig 0x12e50f0, copy2)
void main_f_12e50f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e5100  (orig 0x12e5100, copy2)
void main_f_12e5100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e5440  (orig 0x12e5440, ret_only)
void main_f_12e5440() {}

// sub_12e5450  (orig 0x12e5450, copy2)
void main_f_12e5450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e5460  (orig 0x12e5460, copy2)
void main_f_12e5460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12e8150  (orig 0x12e8150, ret_only)
void main_f_12e8150() {}

// sub_12e8540  (orig 0x12e8540, tailcall)
void main_f_12e8540() { main::sub_e7c4c0(); }

// sub_12e8550  (orig 0x12e8550, tailcall)
void main_f_12e8550() { main::sub_12e8820(); }

// sub_12e8580  (orig 0x12e8580, tailcall)
void main_f_12e8580() { main::sub_12e8820(); }

// sub_12e8590  (orig 0x12e8590, tailcall)
void main_f_12e8590() { main::sub_12e8820(); }

// sub_12ea640  (orig 0x12ea640, ret_only)
void main_f_12ea640() {}

// sub_12eac10  (orig 0x12eac10, tailcall)
void main_f_12eac10() { main::sub_12eab20(); }

// sub_12eac20  (orig 0x12eac20, tailcall)
void main_f_12eac20() { main::sub_12eac90(); }

// sub_12eac50  (orig 0x12eac50, tailcall)
void main_f_12eac50() { main::sub_12eac90(); }

// sub_12eac60  (orig 0x12eac60, tailcall)
void main_f_12eac60() { main::sub_12eac90(); }

// sub_12eae60  (orig 0x12eae60, ret_only)
void main_f_12eae60() {}

// sub_12eae70  (orig 0x12eae70, copy2)
void main_f_12eae70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eae80  (orig 0x12eae80, copy2)
void main_f_12eae80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eaf60  (orig 0x12eaf60, ret_only)
void main_f_12eaf60() {}

// sub_12eaf70  (orig 0x12eaf70, copy2)
void main_f_12eaf70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eaf80  (orig 0x12eaf80, copy2)
void main_f_12eaf80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eafe0  (orig 0x12eafe0, ret_only)
void main_f_12eafe0() {}

// sub_12eaff0  (orig 0x12eaff0, copy2)
void main_f_12eaff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb000  (orig 0x12eb000, copy2)
void main_f_12eb000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb030  (orig 0x12eb030, ret_only)
void main_f_12eb030() {}

// sub_12eb040  (orig 0x12eb040, copy2)
void main_f_12eb040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb050  (orig 0x12eb050, copy2)
void main_f_12eb050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb090  (orig 0x12eb090, ret_only)
void main_f_12eb090() {}

// sub_12eb0a0  (orig 0x12eb0a0, copy2)
void main_f_12eb0a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb0b0  (orig 0x12eb0b0, copy2)
void main_f_12eb0b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb610  (orig 0x12eb610, ret_only)
void main_f_12eb610() {}

// sub_12eb620  (orig 0x12eb620, copy2)
void main_f_12eb620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb630  (orig 0x12eb630, copy2)
void main_f_12eb630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb650  (orig 0x12eb650, ret_only)
void main_f_12eb650() {}

// sub_12eb660  (orig 0x12eb660, copy2)
void main_f_12eb660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eb670  (orig 0x12eb670, copy2)
void main_f_12eb670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ebb90  (orig 0x12ebb90, mov_ret)
uint32_t main_f_12ebb90() { return 1; }

// sub_12ebba0  (orig 0x12ebba0, ret_only)
void main_f_12ebba0() {}

// sub_12ebbb0  (orig 0x12ebbb0, tailcall)
void main_f_12ebbb0() { main::sub_e7c4c0(); }

// sub_12ebbc0  (orig 0x12ebbc0, tailcall)
void main_f_12ebbc0() { main::sub_12ebc30(); }

// sub_12ebbf0  (orig 0x12ebbf0, tailcall)
void main_f_12ebbf0() { main::sub_12ebc30(); }

// sub_12ebc00  (orig 0x12ebc00, tailcall)
void main_f_12ebc00() { main::sub_12ebc30(); }

// sub_12ec150  (orig 0x12ec150, ret_only)
void main_f_12ec150() {}

// sub_12ec160  (orig 0x12ec160, tailcall)
void main_f_12ec160() { main::sub_e7c4c0(); }

// sub_12ec170  (orig 0x12ec170, tailcall)
void main_f_12ec170() { main::sub_12ec1e0(); }

// sub_12ec1a0  (orig 0x12ec1a0, tailcall)
void main_f_12ec1a0() { main::sub_12ec1e0(); }

// sub_12ec1b0  (orig 0x12ec1b0, tailcall)
void main_f_12ec1b0() { main::sub_12ec1e0(); }

// sub_12eccb0  (orig 0x12eccb0, ret_only)
void main_f_12eccb0() {}

// sub_12ecf50  (orig 0x12ecf50, tailcall)
void main_f_12ecf50() { main::sub_e7c4c0(); }

// sub_12ecf60  (orig 0x12ecf60, tailcall)
void main_f_12ecf60() { main::sub_12ecfd0(); }

// sub_12ecf90  (orig 0x12ecf90, tailcall)
void main_f_12ecf90() { main::sub_12ecfd0(); }

// sub_12ecfa0  (orig 0x12ecfa0, tailcall)
void main_f_12ecfa0() { main::sub_12ecfd0(); }

// sub_12edce0  (orig 0x12edce0, ret_only)
void main_f_12edce0() {}

// sub_12ee600  (orig 0x12ee600, tailcall)
void main_f_12ee600() { main::sub_12ee870(); }

// sub_12ee730  (orig 0x12ee730, tailcall)
void main_f_12ee730() { main::sub_12ee870(); }

// sub_12ee740  (orig 0x12ee740, tailcall)
void main_f_12ee740() { main::sub_12ee870(); }

// sub_12ee9d0  (orig 0x12ee9d0, ret_only)
void main_f_12ee9d0() {}

// sub_12ee9e0  (orig 0x12ee9e0, copy2)
void main_f_12ee9e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ee9f0  (orig 0x12ee9f0, copy2)
void main_f_12ee9f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eeb60  (orig 0x12eeb60, ret_only)
void main_f_12eeb60() {}

// sub_12eebc0  (orig 0x12eebc0, ret_only)
void main_f_12eebc0() {}

// sub_12eebd0  (orig 0x12eebd0, copy2)
void main_f_12eebd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12eebe0  (orig 0x12eebe0, copy2)
void main_f_12eebe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ef770  (orig 0x12ef770, tailcall)
void main_f_12ef770() { main::sub_12cdff0(); }

// sub_12ef780  (orig 0x12ef780, tailcall)
void main_f_12ef780() { main::sub_12cdff0(); }

// sub_12ef790  (orig 0x12ef790, tailcall)
void main_f_12ef790() { main::sub_12cdff0(); }

// sub_12ef820  (orig 0x12ef820, ret_only)
void main_f_12ef820() {}

// sub_12ef830  (orig 0x12ef830, copy2)
void main_f_12ef830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12ef840  (orig 0x12ef840, copy2)
void main_f_12ef840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12f5260  (orig 0x12f5260, tailcall)
void main_f_12f5260() { main::sub_12f4f80(); }

// sub_12f6230  (orig 0x12f6230, ret_only)
void main_f_12f6230() {}

// sub_12f6950  (orig 0x12f6950, copy2)
void main_f_12f6950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12f6960  (orig 0x12f6960, copy2)
void main_f_12f6960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_12f8320  (orig 0x12f8320, tailcall)
void main_f_12f8320() { main::sub_12f7cf0(); }

// sub_12f8a30  (orig 0x12f8a30, tailcall)
void main_f_12f8a30() { main::sub_12f8900(); }

// sub_12f9ec0  (orig 0x12f9ec0, ret_only)
void main_f_12f9ec0() {}

// sub_12fd750  (orig 0x12fd750, ret_only)
void main_f_12fd750() {}

// sub_12fd890  (orig 0x12fd890, ret_only)
void main_f_12fd890() {}

// sub_12fd9f0  (orig 0x12fd9f0, ret_only)
void main_f_12fd9f0() {}

// sub_12fdb50  (orig 0x12fdb50, ret_only)
void main_f_12fdb50() {}

// sub_12fdcb0  (orig 0x12fdcb0, ret_only)
void main_f_12fdcb0() {}

// sub_12ffd80  (orig 0x12ffd80, getter)
uint32_t main_f_12ffd80(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1300ce0  (orig 0x1300ce0, ret_only)
void main_f_1300ce0() {}

// sub_1300cf0  (orig 0x1300cf0, copy2)
void main_f_1300cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1300d00  (orig 0x1300d00, copy2)
void main_f_1300d00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1303c30  (orig 0x1303c30, ret_only)
void main_f_1303c30() {}

// sub_1303c40  (orig 0x1303c40, ret_only)
void main_f_1303c40() {}

// sub_1303d30  (orig 0x1303d30, mov_ret)
uint32_t main_f_1303d30() { return 1; }

// sub_1303ee0  (orig 0x1303ee0, tailcall)
void main_f_1303ee0() { main::sub_1303d40(); }

// sub_1304140  (orig 0x1304140, tailcall)
void main_f_1304140() { main::sub_e7c250(); }

// sub_1304150  (orig 0x1304150, tailcall)
void main_f_1304150() { main::sub_13041c0(); }

// sub_1304180  (orig 0x1304180, tailcall)
void main_f_1304180() { main::sub_13041c0(); }

// sub_1304190  (orig 0x1304190, tailcall)
void main_f_1304190() { main::sub_13041c0(); }

// sub_1304f60  (orig 0x1304f60, ret_only)
void main_f_1304f60() {}

// sub_1304f70  (orig 0x1304f70, tailcall)
void main_f_1304f70() { main::sub_e7c4c0(); }

// sub_1304f80  (orig 0x1304f80, tailcall)
void main_f_1304f80() { main::sub_1304ff0(); }

// sub_1304fb0  (orig 0x1304fb0, tailcall)
void main_f_1304fb0() { main::sub_1304ff0(); }

// sub_1304fc0  (orig 0x1304fc0, tailcall)
void main_f_1304fc0() { main::sub_1304ff0(); }

// sub_13054f0  (orig 0x13054f0, tailcall)
void main_f_13054f0() { main::sub_e7feb0(); }

// sub_1305500  (orig 0x1305500, tailcall)
void main_f_1305500() { main::sub_1305570(); }

// sub_1305530  (orig 0x1305530, tailcall)
void main_f_1305530() { main::sub_1305570(); }

// sub_1305540  (orig 0x1305540, tailcall)
void main_f_1305540() { main::sub_1305570(); }

// sub_13056a0  (orig 0x13056a0, ret_only)
void main_f_13056a0() {}

// sub_13057c0  (orig 0x13057c0, tailcall)
void main_f_13057c0() { main::sub_e7feb0(); }

// sub_13057d0  (orig 0x13057d0, tailcall)
void main_f_13057d0() { main::sub_1305840(); }

// sub_1305800  (orig 0x1305800, tailcall)
void main_f_1305800() { main::sub_1305840(); }

// sub_1305810  (orig 0x1305810, tailcall)
void main_f_1305810() { main::sub_1305840(); }

// sub_1305db0  (orig 0x1305db0, getter)
uint64_t main_f_1305db0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1305df0  (orig 0x1305df0, compare)
bool main_f_1305df0(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(27); }

// sub_1306ce0  (orig 0x1306ce0, tailcall)
void main_f_1306ce0() { main::sub_1306cf0(); }

// sub_13079a0  (orig 0x13079a0, ret_only)
void main_f_13079a0() {}

// sub_1307a20  (orig 0x1307a20, ret_only)
void main_f_1307a20() {}

// sub_1307da0  (orig 0x1307da0, tailcall)
void main_f_1307da0() { main::sub_1307bb0(); }

// sub_1308b30  (orig 0x1308b30, tailcall)
void main_f_1308b30() { main::sub_13089e0(); }

// sub_13091c0  (orig 0x13091c0, setter-chain)
void main_f_13091c0(void* a0) { *(uint64_t*)((char*)(a0) + 48) = 0; *(uint8_t*)((char*)(a0) + 32) = 0; }

// sub_1309a80  (orig 0x1309a80, straight)
void main_f_1309a80(void* a0) {
    *(uint8_t*)((char*)(a0) + 378) = (uint8_t)(1);
}

// sub_1309aa0  (orig 0x1309aa0, setter-chain)
void main_f_1309aa0(void* a0) { *(uint64_t*)((char*)(a0) + 336) = 0; *(uint8_t*)((char*)(a0) + 320) = 0; }

// sub_130abe0  (orig 0x130abe0, ret_only)
void main_f_130abe0() {}

// sub_130ac20  (orig 0x130ac20, tailcall)
void main_f_130ac20() { main::sub_67c4e0(); }

// sub_130ea50  (orig 0x130ea50, straight)
void main_f_130ea50(void* a0) {
    *(uint8_t*)((char*)(a0) + 3104) = (uint8_t)(1);
}

// sub_130f620  (orig 0x130f620, tailcall)
void main_f_130f620() { main::sub_130efc0(); }

// sub_130f630  (orig 0x130f630, ret_only)
void main_f_130f630() {}

// sub_130f6b0  (orig 0x130f6b0, ret_only)
void main_f_130f6b0() {}

// sub_130f730  (orig 0x130f730, mov_ret)
uint32_t main_f_130f730() { return 2; }

// sub_1310140  (orig 0x1310140, ret_only)
void main_f_1310140() {}

// sub_1310150  (orig 0x1310150, ptr_add)
void* main_f_1310150(void* a0) { return (char*)a0 + 96; }

// sub_13109c0  (orig 0x13109c0, tailcall)
void main_f_13109c0() { main::sub_1310880(); }

// sub_1311c40  (orig 0x1311c40, tailcall)
void main_f_1311c40() { main::sub_13119f0(); }

// sub_13193c0  (orig 0x13193c0, getter)
uint64_t main_f_13193c0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_13193d0  (orig 0x13193d0, getter)
uint32_t main_f_13193d0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_13193e0  (orig 0x13193e0, setter)
void main_f_13193e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_131a3d0  (orig 0x131a3d0, ret_only)
void main_f_131a3d0() {}

// sub_131aa10  (orig 0x131aa10, tailcall)
void main_f_131aa10() { main::sub_131a850(); }

// sub_131ad50  (orig 0x131ad50, tailcall)
void main_f_131ad50() { main::sub_131b690(); }

// sub_131ae40  (orig 0x131ae40, tailcall)
void main_f_131ae40() { main::sub_131b690(); }

// sub_131ae50  (orig 0x131ae50, tailcall)
void main_f_131ae50() { main::sub_131b690(); }

// sub_131b190  (orig 0x131b190, getter)
uint64_t main_f_131b190(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_131b300  (orig 0x131b300, mov_ret)
uint32_t main_f_131b300() { return 1; }

// sub_131d2e0  (orig 0x131d2e0, ret_only)
void main_f_131d2e0() {}

// sub_131d430  (orig 0x131d430, tailcall)
void main_f_131d430() { main::button_list_item__02d(); }

// sub_131dbe0  (orig 0x131dbe0, setter)
void main_f_131dbe0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_131dbf0  (orig 0x131dbf0, getter)
uint32_t main_f_131dbf0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_131e5a0  (orig 0x131e5a0, straight)
void main_f_131e5a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 1484) = 2;
}

// sub_131f320  (orig 0x131f320, tailcall)
void main_f_131f320() { main::sub_131f690(); }

// sub_131f4d0  (orig 0x131f4d0, tailcall)
void main_f_131f4d0() { main::sub_131f690(); }

// sub_131f4e0  (orig 0x131f4e0, tailcall)
void main_f_131f4e0() { main::sub_131f690(); }

// sub_131fef0  (orig 0x131fef0, getter)
uint32_t main_f_131fef0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_13205a0  (orig 0x13205a0, ret_only)
void main_f_13205a0() {}

// sub_1320a50  (orig 0x1320a50, ret_only)
void main_f_1320a50() {}

// sub_1320a60  (orig 0x1320a60, tailcall)
void main_f_1320a60() { main::sub_e7c4c0(); }

// sub_1320a70  (orig 0x1320a70, tailcall)
void main_f_1320a70() { main::sub_1320ae0(); }

// sub_1320aa0  (orig 0x1320aa0, tailcall)
void main_f_1320aa0() { main::sub_1320ae0(); }

// sub_1320ab0  (orig 0x1320ab0, tailcall)
void main_f_1320ab0() { main::sub_1320ae0(); }

// sub_1320f40  (orig 0x1320f40, ret_only)
void main_f_1320f40() {}

// sub_1320f50  (orig 0x1320f50, tailcall)
void main_f_1320f50() { main::sub_e7c4c0(); }

// sub_1320f60  (orig 0x1320f60, tailcall)
void main_f_1320f60() { main::sub_1320fd0(); }

// sub_1320f90  (orig 0x1320f90, tailcall)
void main_f_1320f90() { main::sub_1320fd0(); }

// sub_1320fa0  (orig 0x1320fa0, tailcall)
void main_f_1320fa0() { main::sub_1320fd0(); }

// sub_1321210  (orig 0x1321210, ret_only)
void main_f_1321210() {}

// sub_1321220  (orig 0x1321220, ret_only)
void main_f_1321220() {}

// sub_1321230  (orig 0x1321230, mov_ret)
uint32_t main_f_1321230() { return 0; }

// sub_1321500  (orig 0x1321500, tailcall)
void main_f_1321500() { main::sub_e7feb0(); }

// sub_1321510  (orig 0x1321510, tailcall)
void main_f_1321510() { main::sub_1321580(); }

// sub_1321540  (orig 0x1321540, tailcall)
void main_f_1321540() { main::sub_1321580(); }

// sub_1321550  (orig 0x1321550, tailcall)
void main_f_1321550() { main::sub_1321580(); }

// sub_1322a90  (orig 0x1322a90, ret_only)
void main_f_1322a90() {}

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

// sub_1323f30  (orig 0x1323f30, tailcall)
void main_f_1323f30() { main::sub_1323f70(); }

// sub_1323f40  (orig 0x1323f40, tailcall)
void main_f_1323f40() { main::sub_1323f70(); }

// sub_1324900  (orig 0x1324900, ret_only)
void main_f_1324900() {}

// sub_13249d0  (orig 0x13249d0, tailcall)
void main_f_13249d0() { main::sub_1324b80(); }

// sub_1324aa0  (orig 0x1324aa0, tailcall)
void main_f_1324aa0() { main::sub_1324b80(); }

// sub_1324ab0  (orig 0x1324ab0, tailcall)
void main_f_1324ab0() { main::sub_1324b80(); }

// sub_13253c0  (orig 0x13253c0, mov_ret)
uint32_t main_f_13253c0() { return 1; }

// sub_13255a0  (orig 0x13255a0, ret_only)
void main_f_13255a0() {}

// sub_1325a80  (orig 0x1325a80, tailcall)
void main_f_1325a80() { main::sub_1325d30(); }

// sub_1325bd0  (orig 0x1325bd0, tailcall)
void main_f_1325bd0() { main::sub_1325d30(); }

// sub_1325be0  (orig 0x1325be0, tailcall)
void main_f_1325be0() { main::sub_1325d30(); }

// sub_1326c00  (orig 0x1326c00, mov_ret)
uint32_t main_f_1326c00() { return 1; }

// sub_1326d40  (orig 0x1326d40, ret_only)
void main_f_1326d40() {}

// sub_13270b0  (orig 0x13270b0, mov_ret)
uint32_t main_f_13270b0() { return 1; }

// sub_13272e0  (orig 0x13272e0, tailcall)
void main_f_13272e0() { main::sub_13270c0(); }

// sub_1327790  (orig 0x1327790, getter)
uint64_t main_f_1327790(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1327900  (orig 0x1327900, mov_ret)
uint32_t main_f_1327900() { return 1; }

// sub_132aad0  (orig 0x132aad0, ret_only)
void main_f_132aad0() {}

// sub_132ad00  (orig 0x132ad00, tailcall)
void main_f_132ad00() { main::sub_132abe0(); }

// sub_132ad10  (orig 0x132ad10, tailcall)
void main_f_132ad10() { main::sub_132ad80(); }

// sub_132ad40  (orig 0x132ad40, tailcall)
void main_f_132ad40() { main::sub_132ad80(); }

// sub_132ad50  (orig 0x132ad50, tailcall)
void main_f_132ad50() { main::sub_132ad80(); }

// sub_132b690  (orig 0x132b690, mov_ret)
uint32_t main_f_132b690() { return 0; }

// sub_132b840  (orig 0x132b840, tailcall)
void main_f_132b840() { main::sub_132ba40(); }

// sub_132b910  (orig 0x132b910, tailcall)
void main_f_132b910() { main::sub_132ba40(); }

// sub_132b920  (orig 0x132b920, tailcall)
void main_f_132b920() { main::sub_132ba40(); }

// sub_132ba10  (orig 0x132ba10, ret_only)
void main_f_132ba10() {}

// sub_132c510  (orig 0x132c510, tailcall)
void main_f_132c510() { main::sub_1327b20(); }

// sub_132c660  (orig 0x132c660, tailcall)
void main_f_132c660() { main::sub_1327b20(); }

// sub_132c670  (orig 0x132c670, tailcall)
void main_f_132c670() { main::sub_1327b20(); }

// sub_132e090  (orig 0x132e090, ret_only)
void main_f_132e090() {}

// sub_132e1c0  (orig 0x132e1c0, tailcall)
void main_f_132e1c0() { main::sub_132e0a0(); }

// sub_132e1d0  (orig 0x132e1d0, tailcall)
void main_f_132e1d0() { main::sub_132e240(); }

// sub_132e200  (orig 0x132e200, tailcall)
void main_f_132e200() { main::sub_132e240(); }

// sub_132e210  (orig 0x132e210, tailcall)
void main_f_132e210() { main::sub_132e240(); }

// sub_132e5d0  (orig 0x132e5d0, ret_only)
void main_f_132e5d0() {}

// sub_132e5e0  (orig 0x132e5e0, copy2)
void main_f_132e5e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_132e5f0  (orig 0x132e5f0, copy2)
void main_f_132e5f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_132e600  (orig 0x132e600, ret_only)
void main_f_132e600() {}

// sub_132e610  (orig 0x132e610, ret_only)
void main_f_132e610() {}

// sub_132e620  (orig 0x132e620, ret_only)
void main_f_132e620() {}

// sub_132e630  (orig 0x132e630, ret_only)
void main_f_132e630() {}

// sub_132e8c0  (orig 0x132e8c0, ret_only)
void main_f_132e8c0() {}

// sub_132e8d0  (orig 0x132e8d0, copy2)
void main_f_132e8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_132e8e0  (orig 0x132e8e0, copy2)
void main_f_132e8e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_132e8f0  (orig 0x132e8f0, ret_only)
void main_f_132e8f0() {}

// sub_132e900  (orig 0x132e900, ret_only)
void main_f_132e900() {}

// sub_132e910  (orig 0x132e910, ret_only)
void main_f_132e910() {}

// sub_132e920  (orig 0x132e920, ret_only)
void main_f_132e920() {}

// sub_132fd90  (orig 0x132fd90, ret_only)
void main_f_132fd90() {}

// sub_132fee0  (orig 0x132fee0, tailcall)
void main_f_132fee0() { main::sub_132fda0(); }

// sub_132fef0  (orig 0x132fef0, tailcall)
void main_f_132fef0() { main::sub_132ff60(); }

// sub_132ff20  (orig 0x132ff20, tailcall)
void main_f_132ff20() { main::sub_132ff60(); }

// sub_132ff30  (orig 0x132ff30, tailcall)
void main_f_132ff30() { main::sub_132ff60(); }

// sub_1330300  (orig 0x1330300, ret_only)
void main_f_1330300() {}

// sub_1330310  (orig 0x1330310, copy2)
void main_f_1330310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330320  (orig 0x1330320, copy2)
void main_f_1330320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330330  (orig 0x1330330, ret_only)
void main_f_1330330() {}

// sub_1330340  (orig 0x1330340, ret_only)
void main_f_1330340() {}

// sub_1330350  (orig 0x1330350, ret_only)
void main_f_1330350() {}

// sub_1330360  (orig 0x1330360, ret_only)
void main_f_1330360() {}

// sub_13303c0  (orig 0x13303c0, ret_only)
void main_f_13303c0() {}

// sub_13303d0  (orig 0x13303d0, copy2)
void main_f_13303d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13303e0  (orig 0x13303e0, copy2)
void main_f_13303e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13303f0  (orig 0x13303f0, ret_only)
void main_f_13303f0() {}

// sub_1330400  (orig 0x1330400, ret_only)
void main_f_1330400() {}

// sub_1330410  (orig 0x1330410, ret_only)
void main_f_1330410() {}

// sub_1330420  (orig 0x1330420, ret_only)
void main_f_1330420() {}

// sub_1330440  (orig 0x1330440, ret_only)
void main_f_1330440() {}

// sub_1330450  (orig 0x1330450, copy2)
void main_f_1330450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330460  (orig 0x1330460, copy2)
void main_f_1330460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330470  (orig 0x1330470, ret_only)
void main_f_1330470() {}

// sub_1330480  (orig 0x1330480, ret_only)
void main_f_1330480() {}

// sub_1330490  (orig 0x1330490, ret_only)
void main_f_1330490() {}

// sub_13304a0  (orig 0x13304a0, ret_only)
void main_f_13304a0() {}

// sub_1330520  (orig 0x1330520, ret_only)
void main_f_1330520() {}

// sub_1330530  (orig 0x1330530, copy2)
void main_f_1330530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330540  (orig 0x1330540, copy2)
void main_f_1330540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330550  (orig 0x1330550, ret_only)
void main_f_1330550() {}

// sub_1330560  (orig 0x1330560, ret_only)
void main_f_1330560() {}

// sub_1330570  (orig 0x1330570, ret_only)
void main_f_1330570() {}

// sub_1330580  (orig 0x1330580, ret_only)
void main_f_1330580() {}

// sub_1330600  (orig 0x1330600, ret_only)
void main_f_1330600() {}

// sub_1330610  (orig 0x1330610, copy2)
void main_f_1330610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330620  (orig 0x1330620, copy2)
void main_f_1330620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1330630  (orig 0x1330630, ret_only)
void main_f_1330630() {}

// sub_1330640  (orig 0x1330640, ret_only)
void main_f_1330640() {}

// sub_1330650  (orig 0x1330650, ret_only)
void main_f_1330650() {}

// sub_1330660  (orig 0x1330660, ret_only)
void main_f_1330660() {}

// sub_1331d50  (orig 0x1331d50, getter)
uint64_t main_f_1331d50(void* a0) { return *(uint64_t*)((char*)(a0) + 448); }

// sub_1331d60  (orig 0x1331d60, getter)
uint64_t main_f_1331d60(void* a0) { return *(uint64_t*)((char*)(a0) + 480); }

// sub_1331d70  (orig 0x1331d70, getter)
uint64_t main_f_1331d70(void* a0) { return *(uint64_t*)((char*)(a0) + 512); }

// sub_1331eb0  (orig 0x1331eb0, ptr_add)
void* main_f_1331eb0(void* a0) { return (char*)a0 + 608; }

// sub_13322e0  (orig 0x13322e0, tailcall)
void main_f_13322e0() { main::sub_1331fb0(); }

// sub_1333ca0  (orig 0x1333ca0, ret_only)
void main_f_1333ca0() {}

// sub_1333e00  (orig 0x1333e00, tailcall)
void main_f_1333e00() { main::sub_1333cb0(); }

// sub_1333e10  (orig 0x1333e10, tailcall)
void main_f_1333e10() { main::sub_1333e80(); }

// sub_1333e40  (orig 0x1333e40, tailcall)
void main_f_1333e40() { main::sub_1333e80(); }

// sub_1333e50  (orig 0x1333e50, tailcall)
void main_f_1333e50() { main::sub_1333e80(); }

// sub_1334660  (orig 0x1334660, ret_only)
void main_f_1334660() {}

// sub_1334670  (orig 0x1334670, copy2)
void main_f_1334670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1334680  (orig 0x1334680, copy2)
void main_f_1334680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1334690  (orig 0x1334690, ret_only)
void main_f_1334690() {}

// sub_13346a0  (orig 0x13346a0, ret_only)
void main_f_13346a0() {}

// sub_13346b0  (orig 0x13346b0, ret_only)
void main_f_13346b0() {}

// sub_13346c0  (orig 0x13346c0, ret_only)
void main_f_13346c0() {}

// sub_13347c0  (orig 0x13347c0, ret_only)
void main_f_13347c0() {}

// sub_13347d0  (orig 0x13347d0, copy2)
void main_f_13347d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13347e0  (orig 0x13347e0, copy2)
void main_f_13347e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13347f0  (orig 0x13347f0, ret_only)
void main_f_13347f0() {}

// sub_1334800  (orig 0x1334800, ret_only)
void main_f_1334800() {}

// sub_1334810  (orig 0x1334810, ret_only)
void main_f_1334810() {}

// sub_1334820  (orig 0x1334820, ret_only)
void main_f_1334820() {}

// sub_1334880  (orig 0x1334880, ret_only)
void main_f_1334880() {}

// sub_1334890  (orig 0x1334890, copy2)
void main_f_1334890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13348a0  (orig 0x13348a0, copy2)
void main_f_13348a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13348b0  (orig 0x13348b0, ret_only)
void main_f_13348b0() {}

// sub_13348c0  (orig 0x13348c0, ret_only)
void main_f_13348c0() {}

// sub_13348d0  (orig 0x13348d0, ret_only)
void main_f_13348d0() {}

// sub_13348e0  (orig 0x13348e0, ret_only)
void main_f_13348e0() {}

// sub_1334960  (orig 0x1334960, ret_only)
void main_f_1334960() {}

// sub_1334970  (orig 0x1334970, copy2)
void main_f_1334970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1334980  (orig 0x1334980, copy2)
void main_f_1334980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1334990  (orig 0x1334990, ret_only)
void main_f_1334990() {}

// sub_13349a0  (orig 0x13349a0, ret_only)
void main_f_13349a0() {}

// sub_13349b0  (orig 0x13349b0, ret_only)
void main_f_13349b0() {}

// sub_13349c0  (orig 0x13349c0, ret_only)
void main_f_13349c0() {}

// sub_1334a90  (orig 0x1334a90, ret_only)
void main_f_1334a90() {}

// sub_1334ac0  (orig 0x1334ac0, ret_only)
void main_f_1334ac0() {}

// sub_1334ad0  (orig 0x1334ad0, ret_only)
void main_f_1334ad0() {}

// sub_1334ae0  (orig 0x1334ae0, ret_only)
void main_f_1334ae0() {}

// sub_1334af0  (orig 0x1334af0, ret_only)
void main_f_1334af0() {}

// sub_1337210  (orig 0x1337210, ret_only)
void main_f_1337210() {}

// sub_1337360  (orig 0x1337360, tailcall)
void main_f_1337360() { main::sub_1337220(); }

// sub_1337370  (orig 0x1337370, tailcall)
void main_f_1337370() { main::sub_13373e0(); }

// sub_13373a0  (orig 0x13373a0, tailcall)
void main_f_13373a0() { main::sub_13373e0(); }

// sub_13373b0  (orig 0x13373b0, tailcall)
void main_f_13373b0() { main::sub_13373e0(); }

// sub_1337580  (orig 0x1337580, ret_only)
void main_f_1337580() {}

// sub_1337590  (orig 0x1337590, copy2)
void main_f_1337590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13375a0  (orig 0x13375a0, copy2)
void main_f_13375a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13375b0  (orig 0x13375b0, ret_only)
void main_f_13375b0() {}

// sub_13375c0  (orig 0x13375c0, ret_only)
void main_f_13375c0() {}

// sub_13375d0  (orig 0x13375d0, ret_only)
void main_f_13375d0() {}

// sub_13375e0  (orig 0x13375e0, ret_only)
void main_f_13375e0() {}

// sub_13377f0  (orig 0x13377f0, ret_only)
void main_f_13377f0() {}

// sub_1337800  (orig 0x1337800, copy2)
void main_f_1337800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337810  (orig 0x1337810, copy2)
void main_f_1337810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337820  (orig 0x1337820, ret_only)
void main_f_1337820() {}

// sub_1337830  (orig 0x1337830, ret_only)
void main_f_1337830() {}

// sub_1337840  (orig 0x1337840, ret_only)
void main_f_1337840() {}

// sub_1337850  (orig 0x1337850, ret_only)
void main_f_1337850() {}

// sub_1337c30  (orig 0x1337c30, ret_only)
void main_f_1337c30() {}

// sub_1337c40  (orig 0x1337c40, copy2)
void main_f_1337c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337c50  (orig 0x1337c50, copy2)
void main_f_1337c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337c60  (orig 0x1337c60, ret_only)
void main_f_1337c60() {}

// sub_1337c70  (orig 0x1337c70, ret_only)
void main_f_1337c70() {}

// sub_1337c80  (orig 0x1337c80, ret_only)
void main_f_1337c80() {}

// sub_1337c90  (orig 0x1337c90, ret_only)
void main_f_1337c90() {}

// sub_1337d10  (orig 0x1337d10, ret_only)
void main_f_1337d10() {}

// sub_1337d20  (orig 0x1337d20, copy2)
void main_f_1337d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337d30  (orig 0x1337d30, copy2)
void main_f_1337d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337d40  (orig 0x1337d40, ret_only)
void main_f_1337d40() {}

// sub_1337d50  (orig 0x1337d50, ret_only)
void main_f_1337d50() {}

// sub_1337d60  (orig 0x1337d60, ret_only)
void main_f_1337d60() {}

// sub_1337d70  (orig 0x1337d70, ret_only)
void main_f_1337d70() {}

// sub_1337dd0  (orig 0x1337dd0, ret_only)
void main_f_1337dd0() {}

// sub_1337de0  (orig 0x1337de0, copy2)
void main_f_1337de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337df0  (orig 0x1337df0, copy2)
void main_f_1337df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337e00  (orig 0x1337e00, ret_only)
void main_f_1337e00() {}

// sub_1337e10  (orig 0x1337e10, ret_only)
void main_f_1337e10() {}

// sub_1337e20  (orig 0x1337e20, ret_only)
void main_f_1337e20() {}

// sub_1337e30  (orig 0x1337e30, ret_only)
void main_f_1337e30() {}

// sub_1337eb0  (orig 0x1337eb0, ret_only)
void main_f_1337eb0() {}

// sub_1337ec0  (orig 0x1337ec0, copy2)
void main_f_1337ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337ed0  (orig 0x1337ed0, copy2)
void main_f_1337ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337ee0  (orig 0x1337ee0, ret_only)
void main_f_1337ee0() {}

// sub_1337ef0  (orig 0x1337ef0, ret_only)
void main_f_1337ef0() {}

// sub_1337f00  (orig 0x1337f00, ret_only)
void main_f_1337f00() {}

// sub_1337f10  (orig 0x1337f10, ret_only)
void main_f_1337f10() {}

// sub_1337f90  (orig 0x1337f90, ret_only)
void main_f_1337f90() {}

// sub_1337fa0  (orig 0x1337fa0, copy2)
void main_f_1337fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337fb0  (orig 0x1337fb0, copy2)
void main_f_1337fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1337fc0  (orig 0x1337fc0, ret_only)
void main_f_1337fc0() {}

// sub_1337fd0  (orig 0x1337fd0, ret_only)
void main_f_1337fd0() {}

// sub_1337fe0  (orig 0x1337fe0, ret_only)
void main_f_1337fe0() {}

// sub_1337ff0  (orig 0x1337ff0, ret_only)
void main_f_1337ff0() {}

// sub_1338070  (orig 0x1338070, ret_only)
void main_f_1338070() {}

// sub_1338080  (orig 0x1338080, copy2)
void main_f_1338080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1338090  (orig 0x1338090, copy2)
void main_f_1338090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13380a0  (orig 0x13380a0, ret_only)
void main_f_13380a0() {}

// sub_13380b0  (orig 0x13380b0, ret_only)
void main_f_13380b0() {}

// sub_13380c0  (orig 0x13380c0, ret_only)
void main_f_13380c0() {}

// sub_13380d0  (orig 0x13380d0, ret_only)
void main_f_13380d0() {}

// sub_13392a0  (orig 0x13392a0, tailcall)
void main_f_13392a0() { main::sub_1339120(); }

// sub_13392b0  (orig 0x13392b0, tailcall)
void main_f_13392b0() { main::sub_1339320(); }

// sub_13392e0  (orig 0x13392e0, tailcall)
void main_f_13392e0() { main::sub_1339320(); }

// sub_13392f0  (orig 0x13392f0, tailcall)
void main_f_13392f0() { main::sub_1339320(); }

// sub_13394e0  (orig 0x13394e0, ret_only)
void main_f_13394e0() {}

// sub_13394f0  (orig 0x13394f0, copy2)
void main_f_13394f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1339500  (orig 0x1339500, copy2)
void main_f_1339500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1339510  (orig 0x1339510, ret_only)
void main_f_1339510() {}

// sub_1339520  (orig 0x1339520, ret_only)
void main_f_1339520() {}

// sub_1339530  (orig 0x1339530, ret_only)
void main_f_1339530() {}

// sub_1339540  (orig 0x1339540, ret_only)
void main_f_1339540() {}

// sub_1339550  (orig 0x1339550, ret_only)
void main_f_1339550() {}

// sub_1339560  (orig 0x1339560, ret_only)
void main_f_1339560() {}

// sub_1339570  (orig 0x1339570, ret_only)
void main_f_1339570() {}

// sub_1339580  (orig 0x1339580, ret_only)
void main_f_1339580() {}

// sub_1339590  (orig 0x1339590, ret_only)
void main_f_1339590() {}

// sub_13395a0  (orig 0x13395a0, ret_only)
void main_f_13395a0() {}

// sub_13395b0  (orig 0x13395b0, ret_only)
void main_f_13395b0() {}

// sub_13395c0  (orig 0x13395c0, ret_only)
void main_f_13395c0() {}

// sub_1339640  (orig 0x1339640, ret_only)
void main_f_1339640() {}

// sub_1339650  (orig 0x1339650, copy2)
void main_f_1339650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1339660  (orig 0x1339660, copy2)
void main_f_1339660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1339670  (orig 0x1339670, ret_only)
void main_f_1339670() {}

// sub_1339680  (orig 0x1339680, ret_only)
void main_f_1339680() {}

// sub_1339690  (orig 0x1339690, ret_only)
void main_f_1339690() {}

// sub_13396a0  (orig 0x13396a0, ret_only)
void main_f_13396a0() {}

// sub_133c950  (orig 0x133c950, tailcall)
void main_f_133c950() { main::sub_133cb80(); }

// sub_133ca60  (orig 0x133ca60, tailcall)
void main_f_133ca60() { main::sub_133cb80(); }

// sub_133ca70  (orig 0x133ca70, tailcall)
void main_f_133ca70() { main::sub_133cb80(); }

// sub_133d090  (orig 0x133d090, ret_only)
void main_f_133d090() {}

// sub_133d0a0  (orig 0x133d0a0, copy2)
void main_f_133d0a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_133d0b0  (orig 0x133d0b0, copy2)
void main_f_133d0b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_133e0f0  (orig 0x133e0f0, tailcall)
void main_f_133e0f0() { main::sub_133def0(); }

// sub_133e5a0  (orig 0x133e5a0, getter)
uint64_t main_f_133e5a0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_133e710  (orig 0x133e710, mov_ret)
uint32_t main_f_133e710() { return 1; }

// sub_133ec30  (orig 0x133ec30, tailcall)
void main_f_133ec30() { main::sub_e7c250(); }

// sub_133ec40  (orig 0x133ec40, tailcall)
void main_f_133ec40() { main::sub_133ecb0(); }

// sub_133ec70  (orig 0x133ec70, tailcall)
void main_f_133ec70() { main::sub_133ecb0(); }

// sub_133ec80  (orig 0x133ec80, tailcall)
void main_f_133ec80() { main::sub_133ecb0(); }

// sub_133fc10  (orig 0x133fc10, ret_only)
void main_f_133fc10() {}

// sub_133fce0  (orig 0x133fce0, tailcall)
void main_f_133fce0() { main::sub_133fe90(); }

// sub_133fdb0  (orig 0x133fdb0, tailcall)
void main_f_133fdb0() { main::sub_133fe90(); }

// sub_133fdc0  (orig 0x133fdc0, tailcall)
void main_f_133fdc0() { main::sub_133fe90(); }

// sub_1340170  (orig 0x1340170, ret_only)
void main_f_1340170() {}

// sub_1340180  (orig 0x1340180, ret_only)
void main_f_1340180() {}

// sub_1340190  (orig 0x1340190, ret_only)
void main_f_1340190() {}

// sub_1340690  (orig 0x1340690, ret_only)
void main_f_1340690() {}

// sub_1340760  (orig 0x1340760, tailcall)
void main_f_1340760() { main::sub_1340910(); }

// sub_1340830  (orig 0x1340830, tailcall)
void main_f_1340830() { main::sub_1340910(); }

// sub_1340840  (orig 0x1340840, tailcall)
void main_f_1340840() { main::sub_1340910(); }

// sub_13415f0  (orig 0x13415f0, ret_only)
void main_f_13415f0() {}

// sub_1341600  (orig 0x1341600, copy2)
void main_f_1341600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1341610  (orig 0x1341610, copy2)
void main_f_1341610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1341780  (orig 0x1341780, ret_only)
void main_f_1341780() {}

// sub_1341790  (orig 0x1341790, copy2)
void main_f_1341790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13417a0  (orig 0x13417a0, copy2)
void main_f_13417a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1344030  (orig 0x1344030, tailcall)
void main_f_1344030() { main::sub_1343f10(); }

// sub_1344040  (orig 0x1344040, tailcall)
void main_f_1344040() { main::sub_133f290(); }

// sub_1344070  (orig 0x1344070, tailcall)
void main_f_1344070() { main::sub_133f290(); }

// sub_1344080  (orig 0x1344080, tailcall)
void main_f_1344080() { main::sub_133f290(); }

// sub_1344110  (orig 0x1344110, ret_only)
void main_f_1344110() {}

// sub_1344120  (orig 0x1344120, copy2)
void main_f_1344120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1344130  (orig 0x1344130, copy2)
void main_f_1344130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13441a0  (orig 0x13441a0, ret_only)
void main_f_13441a0() {}

// sub_13441b0  (orig 0x13441b0, copy2)
void main_f_13441b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13441c0  (orig 0x13441c0, copy2)
void main_f_13441c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1344510  (orig 0x1344510, tailcall)
void main_f_1344510() { main::sub_1344400(); }

// sub_1344540  (orig 0x1344540, mov_ret)
uint32_t main_f_1344540() { return 1; }

// sub_13445d0  (orig 0x13445d0, ret_only)
void main_f_13445d0() {}

// sub_1344780  (orig 0x1344780, tailcall)
void main_f_1344780() { main::sub_13447b0(); }

// sub_1344790  (orig 0x1344790, tailcall)
void main_f_1344790() { main::sub_13447b0(); }

// sub_13447a0  (orig 0x13447a0, tailcall)
void main_f_13447a0() { main::sub_13447b0(); }

// sub_1345ca0  (orig 0x1345ca0, ptr_add)
void* main_f_1345ca0(void* a0) { return (char*)a0 + 96; }

// sub_1345d00  (orig 0x1345d00, setter)
void main_f_1345d00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 552) = a1; }

// sub_1345d10  (orig 0x1345d10, ptr_add)
void* main_f_1345d10(void* a0) { return (char*)a0 + 560; }

// sub_1346250  (orig 0x1346250, ret_only)
void main_f_1346250() {}

// sub_1346260  (orig 0x1346260, tailcall)
void main_f_1346260() { main::sub_ce0(); }

// sub_1346270  (orig 0x1346270, ptr_add)
void* main_f_1346270(void* a0) { return (char*)a0 + 8; }

// sub_1346280  (orig 0x1346280, ptr_add)
void* main_f_1346280(void* a0) { return (char*)a0 + 8; }

// sub_1346290  (orig 0x1346290, ret_only)
void main_f_1346290() {}

// sub_13462a0  (orig 0x13462a0, tailcall)
void main_f_13462a0() { main::sub_ce0(); }

// sub_13466f0  (orig 0x13466f0, ptr_add)
void* main_f_13466f0(void* a0) { return (char*)a0 + 16; }

// sub_1346700  (orig 0x1346700, ptr_add)
void* main_f_1346700(void* a0) { return (char*)a0 + 16; }

// sub_1346710  (orig 0x1346710, copy2)
void main_f_1346710(void* a0) { *(uint32_t*)((char*)(a0) + 20) = *(uint32_t*)((char*)(a0) + 16); }

// sub_1346720  (orig 0x1346720, getter)
uint32_t main_f_1346720(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1346750  (orig 0x1346750, ret_only)
void main_f_1346750() {}

// sub_1346760  (orig 0x1346760, tailcall)
void main_f_1346760() { main::sub_ce0(); }

// sub_1346800  (orig 0x1346800, getter)
uint64_t main_f_1346800(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1347ab0  (orig 0x1347ab0, ret_only)
void main_f_1347ab0() {}

// sub_1347ac0  (orig 0x1347ac0, tailcall)
void main_f_1347ac0() { main::sub_ce0(); }

// sub_1347ad0  (orig 0x1347ad0, ptr_add)
void* main_f_1347ad0(void* a0) { return (char*)a0 + 8; }

// sub_1347ae0  (orig 0x1347ae0, ptr_add)
void* main_f_1347ae0(void* a0) { return (char*)a0 + 8; }

// sub_1354890  (orig 0x1354890, getter)
uint8_t main_f_1354890(void* a0) { return *(uint8_t*)((char*)(a0) + 1390); }

// sub_13548a0  (orig 0x13548a0, setter)
void main_f_13548a0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 1424) = a1; }

// sub_13548b0  (orig 0x13548b0, getter)
uint16_t main_f_13548b0(void* a0) { return *(uint16_t*)((char*)(a0) + 1424); }

// sub_1357f20  (orig 0x1357f20, getter)
uint32_t main_f_1357f20(void* a0) { return *(uint32_t*)((char*)(a0) + 336); }

// sub_135c240  (orig 0x135c240, tailcall)
void main_f_135c240() { main::sub_135c0c0(); }

// sub_1362000  (orig 0x1362000, setter)
void main_f_1362000(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 168) = a1; }

// sub_1362080  (orig 0x1362080, compare)
bool main_f_1362080(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 184)) != (uint64_t)(0); }

// sub_1365920  (orig 0x1365920, setter)
void main_f_1365920(void* a0) { *(uint64_t*)((char*)(a0) + 96) = 0; }

// sub_1368ec0  (orig 0x1368ec0, ptr_add)
void* main_f_1368ec0(void* a0) { return (char*)a0 + 96; }

// sub_1368ed0  (orig 0x1368ed0, mov_ret)
uint32_t main_f_1368ed0() { return 4856; }

// sub_136b4e0  (orig 0x136b4e0, ret_only)
void main_f_136b4e0() {}

// sub_136b550  (orig 0x136b550, getter)
uint8_t main_f_136b550(void* a0) { return *(uint8_t*)((char*)(a0) + 260); }

// sub_136b580  (orig 0x136b580, getter)
uint8_t main_f_136b580(void* a0) { return *(uint8_t*)((char*)(a0) + 261); }

// sub_136b590  (orig 0x136b590, getter)
uint8_t main_f_136b590(void* a0) { return *(uint8_t*)((char*)(a0) + 263); }

// sub_136b5a0  (orig 0x136b5a0, setter)
void main_f_136b5a0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 263) = a1; }

// sub_136b680  (orig 0x136b680, setter)
void main_f_136b680(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 256) = a1; }

// sub_136b690  (orig 0x136b690, getter)
uint32_t main_f_136b690(void* a0) { return *(uint32_t*)((char*)(a0) + 256); }

// sub_136b6d0  (orig 0x136b6d0, setter)
void main_f_136b6d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 264) = a1; }

// sub_136b6e0  (orig 0x136b6e0, getter)
uint64_t main_f_136b6e0(void* a0) { return *(uint64_t*)((char*)(a0) + 264); }

// sub_136b6f0  (orig 0x136b6f0, compare)
bool main_f_136b6f0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 264)) != (uint64_t)(0); }

// sub_136b700  (orig 0x136b700, compare)
bool main_f_136b700(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 312)) != (uint64_t)(0); }

// sub_136b710  (orig 0x136b710, getter)
uint64_t main_f_136b710(void* a0) { return *(uint64_t*)((char*)(a0) + 312); }

// sub_136b720  (orig 0x136b720, setter)
void main_f_136b720(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 312) = a1; }

// sub_136b760  (orig 0x136b760, setter)
void main_f_136b760(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 300) = a1; }

// sub_136b770  (orig 0x136b770, getter)
uint32_t main_f_136b770(void* a0) { return *(uint32_t*)((char*)(a0) + 300); }

// sub_136b780  (orig 0x136b780, ptr_add)
void* main_f_136b780(void* a0) { return (char*)a0 + 96; }

// sub_136b790  (orig 0x136b790, getter)
uint32_t main_f_136b790(void* a0) { return *(uint32_t*)((char*)(a0) + 304); }

// sub_136b840  (orig 0x136b840, getter)
uint8_t main_f_136b840(void* a0) { return *(uint8_t*)((char*)(a0) + 310); }

// sub_136b850  (orig 0x136b850, setter)
void main_f_136b850(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 310) = a1; }

// sub_136b860  (orig 0x136b860, mov_ret)
uint32_t main_f_136b860() { return 272; }

// sub_136bf90  (orig 0x136bf90, setter-chain)
void main_f_136bf90(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 72) = 0; *(uint64_t*)((char*)(a0) + 96) = 0; *(uint64_t*)((char*)(a0) + 120) = 0; *(uint64_t*)((char*)(a0) + 144) = 0; *(uint64_t*)((char*)(a0) + 168) = 0; *(uint64_t*)((char*)(a0) + 192) = 0; *(uint64_t*)((char*)(a0) + 216) = 0; *(uint64_t*)((char*)(a0) + 240) = 0; *(uint64_t*)((char*)(a0) + 264) = 0; *(uint64_t*)((char*)(a0) + 288) = 0; *(uint64_t*)((char*)(a0) + 312) = 0; *(uint64_t*)((char*)(a0) + 336) = 0; *(uint64_t*)((char*)(a0) + 360) = 0; *(uint64_t*)((char*)(a0) + 384) = 0; *(uint64_t*)((char*)(a0) + 408) = 0; *(uint64_t*)((char*)(a0) + 432) = 0; *(uint64_t*)((char*)(a0) + 456) = 0; *(uint64_t*)((char*)(a0) + 480) = 0; *(uint64_t*)((char*)(a0) + 504) = 0; *(uint64_t*)((char*)(a0) + 528) = 0; *(uint64_t*)((char*)(a0) + 552) = 0; *(uint64_t*)((char*)(a0) + 576) = 0; *(uint64_t*)((char*)(a0) + 600) = 0; *(uint64_t*)((char*)(a0) + 624) = 0; *(uint64_t*)((char*)(a0) + 648) = 0; *(uint64_t*)((char*)(a0) + 672) = 0; *(uint64_t*)((char*)(a0) + 696) = 0; *(uint64_t*)((char*)(a0) + 720) = 0; *(uint64_t*)((char*)(a0) + 744) = 0; *(uint64_t*)((char*)(a0) + 768) = 0; *(uint64_t*)((char*)(a0) + 792) = 0; *(uint64_t*)((char*)(a0) + 816) = 0; *(uint64_t*)((char*)(a0) + 840) = 0; *(uint64_t*)((char*)(a0) + 864) = 0; *(uint64_t*)((char*)(a0) + 888) = 0; *(uint64_t*)((char*)(a0) + 912) = 0; *(uint64_t*)((char*)(a0) + 936) = 0; *(uint64_t*)((char*)(a0) + 960) = 0; *(uint64_t*)((char*)(a0) + 984) = 0; *(uint64_t*)((char*)(a0) + 1008) = 0; *(uint64_t*)((char*)(a0) + 1032) = 0; *(uint64_t*)((char*)(a0) + 1056) = 0; *(uint64_t*)((char*)(a0) + 1080) = 0; *(uint64_t*)((char*)(a0) + 1104) = 0; *(uint64_t*)((char*)(a0) + 1128) = 0; *(uint64_t*)((char*)(a0) + 1152) = 0; *(uint64_t*)((char*)(a0) + 1176) = 0; *(uint64_t*)((char*)(a0) + 1200) = 0; *(uint64_t*)((char*)(a0) + 1224) = 0; *(uint64_t*)((char*)(a0) + 1248) = 0; *(uint64_t*)((char*)(a0) + 1272) = 0; *(uint64_t*)((char*)(a0) + 1296) = 0; *(uint64_t*)((char*)(a0) + 1320) = 0; *(uint64_t*)((char*)(a0) + 1344) = 0; *(uint64_t*)((char*)(a0) + 1368) = 0; *(uint64_t*)((char*)(a0) + 1392) = 0; *(uint64_t*)((char*)(a0) + 1416) = 0; *(uint64_t*)((char*)(a0) + 1440) = 0; *(uint64_t*)((char*)(a0) + 1464) = 0; *(uint64_t*)((char*)(a0) + 1488) = 0; *(uint64_t*)((char*)(a0) + 1512) = 0; *(uint64_t*)((char*)(a0) + 1536) = 0; *(uint64_t*)((char*)(a0) + 1560) = 0; *(uint64_t*)((char*)(a0) + 1584) = 0; *(uint64_t*)((char*)(a0) + 1608) = 0; *(uint64_t*)((char*)(a0) + 1632) = 0; *(uint64_t*)((char*)(a0) + 1656) = 0; *(uint64_t*)((char*)(a0) + 1680) = 0; *(uint64_t*)((char*)(a0) + 1704) = 0; *(uint64_t*)((char*)(a0) + 1728) = 0; *(uint64_t*)((char*)(a0) + 1752) = 0; *(uint64_t*)((char*)(a0) + 1776) = 0; *(uint64_t*)((char*)(a0) + 1800) = 0; *(uint64_t*)((char*)(a0) + 1824) = 0; *(uint64_t*)((char*)(a0) + 1848) = 0; *(uint64_t*)((char*)(a0) + 1872) = 0; *(uint64_t*)((char*)(a0) + 1896) = 0; *(uint64_t*)((char*)(a0) + 1920) = 0; *(uint64_t*)((char*)(a0) + 1944) = 0; *(uint64_t*)((char*)(a0) + 1968) = 0; *(uint64_t*)((char*)(a0) + 1992) = 0; *(uint64_t*)((char*)(a0) + 2016) = 0; *(uint64_t*)((char*)(a0) + 2040) = 0; *(uint64_t*)((char*)(a0) + 2064) = 0; *(uint64_t*)((char*)(a0) + 2088) = 0; *(uint64_t*)((char*)(a0) + 2112) = 0; *(uint64_t*)((char*)(a0) + 2136) = 0; *(uint64_t*)((char*)(a0) + 2160) = 0; *(uint64_t*)((char*)(a0) + 2184) = 0; *(uint64_t*)((char*)(a0) + 2208) = 0; *(uint64_t*)((char*)(a0) + 2232) = 0; *(uint64_t*)((char*)(a0) + 2256) = 0; *(uint64_t*)((char*)(a0) + 2280) = 0; *(uint64_t*)((char*)(a0) + 2304) = 0; *(uint64_t*)((char*)(a0) + 2328) = 0; *(uint64_t*)((char*)(a0) + 2352) = 0; *(uint64_t*)((char*)(a0) + 2376) = 0; *(uint64_t*)((char*)(a0) + 2400) = 0; *(uint64_t*)((char*)(a0) + 2424) = 0; *(uint64_t*)((char*)(a0) + 2448) = 0; *(uint64_t*)((char*)(a0) + 2472) = 0; *(uint64_t*)((char*)(a0) + 2496) = 0; *(uint64_t*)((char*)(a0) + 2520) = 0; *(uint64_t*)((char*)(a0) + 2544) = 0; *(uint64_t*)((char*)(a0) + 2568) = 0; *(uint64_t*)((char*)(a0) + 2592) = 0; *(uint64_t*)((char*)(a0) + 2616) = 0; }

// sub_136d000  (orig 0x136d000, tailcall)
void main_f_136d000() { main::sub_136d010(); }

// sub_136f5a0  (orig 0x136f5a0, getter)
uint16_t main_f_136f5a0(void* a0) { return *(uint16_t*)((char*)(a0) + 96); }

// sub_136f5b0  (orig 0x136f5b0, getter)
uint8_t main_f_136f5b0(void* a0) { return *(uint8_t*)((char*)(a0) + 98); }

// sub_136f5c0  (orig 0x136f5c0, copy2)
void main_f_136f5c0(void* a0) { *(uint32_t*)((char*)(a0) + 104) = *(uint32_t*)((char*)(a0) + 100); }

// sub_136f5d0  (orig 0x136f5d0, copy2)
void main_f_136f5d0(void* a0) { *(uint32_t*)((char*)(a0) + 100) = *(uint32_t*)((char*)(a0) + 104); }

// sub_136f740  (orig 0x136f740, tailcall)
void main_f_136f740() { main::sub_136f630(); }

// sub_136f7c0  (orig 0x136f7c0, ret_only)
void main_f_136f7c0() {}

// sub_136f7d0  (orig 0x136f7d0, copy2)
void main_f_136f7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_136f7e0  (orig 0x136f7e0, copy2)
void main_f_136f7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1377d30  (orig 0x1377d30, straight)
void main_f_1377d30(void* a0) {
    *(uint8_t*)((char*)(a0) + 799) = (uint8_t)(1);
}

// sub_1377d40  (orig 0x1377d40, straight)
void main_f_1377d40(void* a0) {
    *(uint8_t*)((char*)(a0) + 799) = (uint8_t)(2);
}

// sub_1377d50  (orig 0x1377d50, compare)
bool main_f_1377d50(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 799)) == (uint64_t)(1); }

// sub_1377d60  (orig 0x1377d60, compare)
bool main_f_1377d60(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 799)) == (uint64_t)(2); }

// sub_1378bd0  (orig 0x1378bd0, setter)
void main_f_1378bd0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 19448L) = a1; }

// sub_137a160  (orig 0x137a160, getter)
uint64_t main_f_137a160(void* a0) { return *(uint64_t*)((char*)(a0) + 19432L); }

// sub_137a280  (orig 0x137a280, getter)
uint64_t main_f_137a280(void* a0) { return *(uint64_t*)((char*)(a0) + 19448L); }

// sub_137b8b0  (orig 0x137b8b0, getter)
uint32_t main_f_137b8b0(void* a0) { return *(uint32_t*)((char*)(a0) + 100); }

// sub_137baa0  (orig 0x137baa0, getter)
uint32_t main_f_137baa0(void* a0) { return *(uint32_t*)((char*)(a0) + 380); }

// sub_137baf0  (orig 0x137baf0, getter)
uint32_t main_f_137baf0(void* a0) { return *(uint32_t*)((char*)(a0) + 400); }

// sub_137bba0  (orig 0x137bba0, getter)
uint16_t main_f_137bba0(void* a0) { return *(uint16_t*)((char*)(a0) + 636); }

// sub_137bbb0  (orig 0x137bbb0, getter)
uint16_t main_f_137bbb0(void* a0) { return *(uint16_t*)((char*)(a0) + 638); }

// sub_137bbe0  (orig 0x137bbe0, setter)
void main_f_137bbe0(void* a0) { *(uint32_t*)((char*)(a0) + 636) = 0; }

// sub_137bc10  (orig 0x137bc10, setter)
void main_f_137bc10(void* a0) { *(uint8_t*)((char*)(a0) + 640) = 0; }

// sub_137bc20  (orig 0x137bc20, getter)
uint16_t main_f_137bc20(void* a0) { return *(uint16_t*)((char*)(a0) + 642); }

// sub_137bc30  (orig 0x137bc30, setter)
void main_f_137bc30(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 642) = a1; }

// sub_137bc40  (orig 0x137bc40, getter)
uint32_t main_f_137bc40(void* a0) { return *(uint32_t*)((char*)(a0) + 644); }

// sub_137bc50  (orig 0x137bc50, setter)
void main_f_137bc50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 644) = a1; }

// sub_1380220  (orig 0x1380220, tailcall)
void main_f_1380220() { main::sub_137fc80(); }

// sub_1380310  (orig 0x1380310, mov_ret)
uint32_t main_f_1380310() { return 2; }

// sub_13825d0  (orig 0x13825d0, tailcall)
void main_f_13825d0() { main::sub_1390b90(); }

// sub_13825e0  (orig 0x13825e0, ret_only)
void main_f_13825e0() {}

// sub_13825f0  (orig 0x13825f0, ret_only)
void main_f_13825f0() {}

// sub_1382600  (orig 0x1382600, ret_only)
void main_f_1382600() {}

// sub_13828a0  (orig 0x13828a0, ret_only)
void main_f_13828a0() {}

// sub_13828b0  (orig 0x13828b0, ret_only)
void main_f_13828b0() {}

// sub_13828c0  (orig 0x13828c0, ret_only)
void main_f_13828c0() {}

// sub_13828d0  (orig 0x13828d0, ret_only)
void main_f_13828d0() {}

// sub_1382b70  (orig 0x1382b70, ret_only)
void main_f_1382b70() {}

// sub_1382b80  (orig 0x1382b80, ret_only)
void main_f_1382b80() {}

// sub_1382b90  (orig 0x1382b90, ret_only)
void main_f_1382b90() {}

// sub_1382ba0  (orig 0x1382ba0, ret_only)
void main_f_1382ba0() {}

// sub_1382e40  (orig 0x1382e40, tailcall)
void main_f_1382e40() { main::sub_1376a70(); }

// sub_1382e50  (orig 0x1382e50, ret_only)
void main_f_1382e50() {}

// sub_1382e60  (orig 0x1382e60, ret_only)
void main_f_1382e60() {}

// sub_1382e70  (orig 0x1382e70, ret_only)
void main_f_1382e70() {}

// sub_1383110  (orig 0x1383110, ret_only)
void main_f_1383110() {}

// sub_1383120  (orig 0x1383120, ret_only)
void main_f_1383120() {}

// sub_1383130  (orig 0x1383130, ret_only)
void main_f_1383130() {}

// sub_1383140  (orig 0x1383140, ret_only)
void main_f_1383140() {}

// sub_13833e0  (orig 0x13833e0, ret_only)
void main_f_13833e0() {}

// sub_13833f0  (orig 0x13833f0, ret_only)
void main_f_13833f0() {}

// sub_1383400  (orig 0x1383400, ret_only)
void main_f_1383400() {}

// sub_1383410  (orig 0x1383410, ret_only)
void main_f_1383410() {}

// sub_13836b0  (orig 0x13836b0, tailcall)
void main_f_13836b0() { main::sub_1387740(); }

// sub_13836c0  (orig 0x13836c0, ret_only)
void main_f_13836c0() {}

// sub_13836d0  (orig 0x13836d0, ret_only)
void main_f_13836d0() {}

// sub_13836e0  (orig 0x13836e0, ret_only)
void main_f_13836e0() {}

// sub_1383980  (orig 0x1383980, ret_only)
void main_f_1383980() {}

// sub_1383990  (orig 0x1383990, ret_only)
void main_f_1383990() {}

// sub_13839a0  (orig 0x13839a0, ret_only)
void main_f_13839a0() {}

// sub_13839b0  (orig 0x13839b0, ret_only)
void main_f_13839b0() {}

// sub_1383c50  (orig 0x1383c50, ret_only)
void main_f_1383c50() {}

// sub_1383c60  (orig 0x1383c60, ret_only)
void main_f_1383c60() {}

// sub_1383c70  (orig 0x1383c70, ret_only)
void main_f_1383c70() {}

// sub_1383c80  (orig 0x1383c80, ret_only)
void main_f_1383c80() {}

// sub_1383f20  (orig 0x1383f20, tailcall)
void main_f_1383f20() { main::sub_138cba0(); }

// sub_1383f30  (orig 0x1383f30, ret_only)
void main_f_1383f30() {}

// sub_1383f40  (orig 0x1383f40, ret_only)
void main_f_1383f40() {}

// sub_1383f50  (orig 0x1383f50, ret_only)
void main_f_1383f50() {}

// sub_13841f0  (orig 0x13841f0, ret_only)
void main_f_13841f0() {}

// sub_1384200  (orig 0x1384200, ret_only)
void main_f_1384200() {}

// sub_1384210  (orig 0x1384210, ret_only)
void main_f_1384210() {}

// sub_1384220  (orig 0x1384220, ret_only)
void main_f_1384220() {}

// sub_13844c0  (orig 0x13844c0, ret_only)
void main_f_13844c0() {}

// sub_13844d0  (orig 0x13844d0, ret_only)
void main_f_13844d0() {}

// sub_13844e0  (orig 0x13844e0, ret_only)
void main_f_13844e0() {}

// sub_13844f0  (orig 0x13844f0, ret_only)
void main_f_13844f0() {}

// sub_1384790  (orig 0x1384790, tailcall)
void main_f_1384790() { main::sub_13925f0(); }

// sub_13847a0  (orig 0x13847a0, ret_only)
void main_f_13847a0() {}

// sub_13847b0  (orig 0x13847b0, ret_only)
void main_f_13847b0() {}

// sub_13847c0  (orig 0x13847c0, ret_only)
void main_f_13847c0() {}

// sub_1384a60  (orig 0x1384a60, ret_only)
void main_f_1384a60() {}

// sub_1384a70  (orig 0x1384a70, ret_only)
void main_f_1384a70() {}

// sub_1384a80  (orig 0x1384a80, ret_only)
void main_f_1384a80() {}

// sub_1384a90  (orig 0x1384a90, ret_only)
void main_f_1384a90() {}

// sub_1384d30  (orig 0x1384d30, ret_only)
void main_f_1384d30() {}

// sub_1384d40  (orig 0x1384d40, ret_only)
void main_f_1384d40() {}

// sub_1384d50  (orig 0x1384d50, ret_only)
void main_f_1384d50() {}

// sub_1384d60  (orig 0x1384d60, ret_only)
void main_f_1384d60() {}

// sub_1385000  (orig 0x1385000, tailcall)
void main_f_1385000() { main::sub_1397ae0(); }

// sub_1385010  (orig 0x1385010, ret_only)
void main_f_1385010() {}

// sub_1385020  (orig 0x1385020, ret_only)
void main_f_1385020() {}

// sub_1385030  (orig 0x1385030, ret_only)
void main_f_1385030() {}

// sub_13852d0  (orig 0x13852d0, ret_only)
void main_f_13852d0() {}

// sub_13852e0  (orig 0x13852e0, ret_only)
void main_f_13852e0() {}

// sub_13852f0  (orig 0x13852f0, ret_only)
void main_f_13852f0() {}

// sub_1385300  (orig 0x1385300, ret_only)
void main_f_1385300() {}

// sub_13855a0  (orig 0x13855a0, tailcall)
void main_f_13855a0() { main::sub_1397c60(); }

// sub_13855b0  (orig 0x13855b0, ret_only)
void main_f_13855b0() {}

// sub_13855c0  (orig 0x13855c0, ret_only)
void main_f_13855c0() {}

// sub_13855d0  (orig 0x13855d0, ret_only)
void main_f_13855d0() {}

// sub_1385870  (orig 0x1385870, tailcall)
void main_f_1385870() { main_f_136d000(); }

// sub_1385880  (orig 0x1385880, ret_only)
void main_f_1385880() {}

// sub_1385890  (orig 0x1385890, ret_only)
void main_f_1385890() {}

// sub_13858a0  (orig 0x13858a0, ret_only)
void main_f_13858a0() {}

// sub_1385b40  (orig 0x1385b40, ret_only)
void main_f_1385b40() {}

// sub_1385b50  (orig 0x1385b50, ret_only)
void main_f_1385b50() {}

// sub_1385b60  (orig 0x1385b60, ret_only)
void main_f_1385b60() {}

// sub_1385b70  (orig 0x1385b70, ret_only)
void main_f_1385b70() {}

// sub_1385e10  (orig 0x1385e10, ret_only)
void main_f_1385e10() {}

// sub_1385e20  (orig 0x1385e20, ret_only)
void main_f_1385e20() {}

// sub_1385e30  (orig 0x1385e30, ret_only)
void main_f_1385e30() {}

// sub_1385e40  (orig 0x1385e40, ret_only)
void main_f_1385e40() {}

// sub_13860e0  (orig 0x13860e0, tailcall)
void main_f_13860e0() { main::sub_138dbc0(); }

// sub_13860f0  (orig 0x13860f0, ret_only)
void main_f_13860f0() {}

// sub_1386100  (orig 0x1386100, ret_only)
void main_f_1386100() {}

// sub_1386110  (orig 0x1386110, ret_only)
void main_f_1386110() {}

// sub_13863b0  (orig 0x13863b0, ret_only)
void main_f_13863b0() {}

// sub_13863c0  (orig 0x13863c0, ret_only)
void main_f_13863c0() {}

// sub_13863d0  (orig 0x13863d0, ret_only)
void main_f_13863d0() {}

// sub_13863e0  (orig 0x13863e0, ret_only)
void main_f_13863e0() {}

// sub_1386680  (orig 0x1386680, ret_only)
void main_f_1386680() {}

// sub_1386690  (orig 0x1386690, ret_only)
void main_f_1386690() {}

// sub_13866a0  (orig 0x13866a0, ret_only)
void main_f_13866a0() {}

// sub_13866b0  (orig 0x13866b0, ret_only)
void main_f_13866b0() {}

// sub_1389e90  (orig 0x1389e90, compare)
bool main_f_1389e90(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 12)) == (uint64_t)(1); }

// sub_1389ea0  (orig 0x1389ea0, compare)
bool main_f_1389ea0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 12)) == (uint64_t)(2); }

// sub_1389eb0  (orig 0x1389eb0, compare)
bool main_f_1389eb0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 12)) == (uint64_t)(3); }

// sub_1389ec0  (orig 0x1389ec0, compare)
bool main_f_1389ec0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 12)) == (uint64_t)(4); }

// sub_1389ed0  (orig 0x1389ed0, compare)
bool main_f_1389ed0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 12)) == (uint64_t)(5); }

// sub_138a340  (orig 0x138a340, ptr_add)
void* main_f_138a340(void* a0) { return (char*)a0 + 96; }

// sub_138be50  (orig 0x138be50, setter-chain)
void main_f_138be50(void* a0) { *(uint64_t*)((char*)(a0) + 5552L) = 0; *(uint16_t*)((char*)(a0) + 5560L) = 0; }

// sub_1397a50  (orig 0x1397a50, mov_ret)
uint32_t main_f_1397a50() { return 0; }

// sub_1399690  (orig 0x1399690, ret_only)
void main_f_1399690() {}

// sub_1399d20  (orig 0x1399d20, ret_only)
void main_f_1399d20() {}

// sub_139a8f0  (orig 0x139a8f0, tailcall)
void main_f_139a8f0() { main::sub_ce0(); }

// sub_139a900  (orig 0x139a900, ptr_add)
void* main_f_139a900(void* a0) { return (char*)a0 + 8; }

// sub_139a910  (orig 0x139a910, ptr_add)
void* main_f_139a910(void* a0) { return (char*)a0 + 8; }

// sub_139a920  (orig 0x139a920, tailcall)
void main_f_139a920() { main::sub_ce0(); }

// sub_139ad30  (orig 0x139ad30, ret_only)
void main_f_139ad30() {}

// sub_139c7f0  (orig 0x139c7f0, tailcall)
void main_f_139c7f0() { main::sub_ce0(); }

// sub_139c800  (orig 0x139c800, ptr_add)
void* main_f_139c800(void* a0) { return (char*)a0 + 8; }

// sub_139c810  (orig 0x139c810, ptr_add)
void* main_f_139c810(void* a0) { return (char*)a0 + 8; }

// sub_139c820  (orig 0x139c820, tailcall)
void main_f_139c820() { main::sub_ce0(); }

// sub_139cf50  (orig 0x139cf50, tailcall)
void main_f_139cf50() { main::sub_ce0(); }

// sub_139cf60  (orig 0x139cf60, ptr_add)
void* main_f_139cf60(void* a0) { return (char*)a0 + 8; }

// sub_139cf70  (orig 0x139cf70, ptr_add)
void* main_f_139cf70(void* a0) { return (char*)a0 + 8; }

// sub_139ea50  (orig 0x139ea50, getter)
uint32_t main_f_139ea50(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_139ff40  (orig 0x139ff40, tailcall)
void main_f_139ff40() { main::sub_ce0(); }

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

// sub_13a17f0  (orig 0x13a17f0, tailcall)
void main_f_13a17f0() { main::sub_13a32c0(); }

// sub_13a2030  (orig 0x13a2030, tailcall)
void main_f_13a2030() { main::sub_13a1e10(); }

// sub_13a3480  (orig 0x13a3480, tailcall)
void main_f_13a3480() { main::sub_13a1bc0(); }

// sub_13a3490  (orig 0x13a3490, tailcall)
void main_f_13a3490() { main::sub_13a1bc0(); }

// sub_13a34a0  (orig 0x13a34a0, tailcall)
void main_f_13a34a0() { main::sub_13a1bc0(); }

// sub_13a5870  (orig 0x13a5870, mov_ret)
uint32_t main_f_13a5870() { return 1; }

// sub_13a5880  (orig 0x13a5880, tailcall)
void main_f_13a5880() { main::sub_d2a440(); }

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

// sub_13a7a20  (orig 0x13a7a20, tailcall)
void main_f_13a7a20() { main::sub_13a78f0(); }

// sub_13a7a30  (orig 0x13a7a30, tailcall)
void main_f_13a7a30() { main::sub_13a7aa0(); }

// sub_13a7a60  (orig 0x13a7a60, tailcall)
void main_f_13a7a60() { main::sub_13a7aa0(); }

// sub_13a7a70  (orig 0x13a7a70, tailcall)
void main_f_13a7a70() { main::sub_13a7aa0(); }

// sub_13a7fd0  (orig 0x13a7fd0, ptr_add)
void* main_f_13a7fd0(void* a0) { return (char*)a0 + 96; }

// sub_13a8700  (orig 0x13a8700, tailcall)
void main_f_13a8700() { main::sub_13a8520(); }

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

// sub_13ac760  (orig 0x13ac760, getter-chain)
uint64_t main_f_13ac760(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 132))) + 832); }

// sub_13aca70  (orig 0x13aca70, mov_ret)
uint32_t main_f_13aca70() { return 1; }

// sub_13ad180  (orig 0x13ad180, tailcall)
void main_f_13ad180() { main::sub_d25c50(); }

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

// sub_13b1fe0  (orig 0x13b1fe0, tailcall)
void main_f_13b1fe0() { main::sub_ce0(); }

// sub_13b2050  (orig 0x13b2050, ret_only)
void main_f_13b2050() {}

// sub_13b2060  (orig 0x13b2060, tailcall)
void main_f_13b2060() { main::sub_ce0(); }

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

// sub_13bf710  (orig 0x13bf710, mov_ret)
uint32_t main_f_13bf710() { return 1; }

// sub_13ca5b0  (orig 0x13ca5b0, tailcall)
void main_f_13ca5b0() { main::sub_ce0(); }

// sub_13ca620  (orig 0x13ca620, ret_only)
void main_f_13ca620() {}

// sub_13ca630  (orig 0x13ca630, tailcall)
void main_f_13ca630() { main::sub_ce0(); }

// sub_13ca6d0  (orig 0x13ca6d0, ret_only)
void main_f_13ca6d0() {}

// sub_13cc290  (orig 0x13cc290, tailcall)
void main_f_13cc290() { main::sub_13cc110(); }

// sub_13cd020  (orig 0x13cd020, tailcall)
void main_f_13cd020() { main::sub_ce0(); }

// sub_13cd090  (orig 0x13cd090, ret_only)
void main_f_13cd090() {}

// sub_13cd0a0  (orig 0x13cd0a0, tailcall)
void main_f_13cd0a0() { main::sub_ce0(); }

// sub_13ce3d0  (orig 0x13ce3d0, tailcall)
void main_f_13ce3d0() { main::LookAtWait_3(); }

// sub_13ce3e0  (orig 0x13ce3e0, tailcall)
void main_f_13ce3e0() { main::LookAtWait_5(); }

// sub_13ce8c0  (orig 0x13ce8c0, tailcall)
void main_f_13ce8c0() { main::sub_13ce680(); }

// sub_13ceaf0  (orig 0x13ceaf0, tailcall)
void main_f_13ceaf0() { main::sub_13ceb20(); }

// sub_13ceb00  (orig 0x13ceb00, tailcall)
void main_f_13ceb00() { main::sub_13ceb20(); }

// sub_13ceb10  (orig 0x13ceb10, tailcall)
void main_f_13ceb10() { main::sub_13ceb20(); }

// sub_13cee80  (orig 0x13cee80, ret_only)
void main_f_13cee80() {}

// sub_13cee90  (orig 0x13cee90, copy2)
void main_f_13cee90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13ceea0  (orig 0x13ceea0, copy2)
void main_f_13ceea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_13cfe40  (orig 0x13cfe40, tailcall)
void main_f_13cfe40() { main::sub_13cfcd0(); }

// sub_13d0d10  (orig 0x13d0d10, tailcall)
void main_f_13d0d10() { main::sub_13d0c00(); }

// sub_13d0d20  (orig 0x13d0d20, tailcall)
void main_f_13d0d20() { main::sub_13d0d90(); }

// sub_13d0d50  (orig 0x13d0d50, tailcall)
void main_f_13d0d50() { main::sub_13d0d90(); }

// sub_13d0d60  (orig 0x13d0d60, tailcall)
void main_f_13d0d60() { main::sub_13d0d90(); }

// sub_13d1800  (orig 0x13d1800, tailcall)
void main_f_13d1800() { main::sub_13d16f0(); }

// sub_13d1810  (orig 0x13d1810, tailcall)
void main_f_13d1810() { main::sub_13d1880(); }

// sub_13d1840  (orig 0x13d1840, tailcall)
void main_f_13d1840() { main::sub_13d1880(); }

// sub_13d1850  (orig 0x13d1850, tailcall)
void main_f_13d1850() { main::sub_13d1880(); }

// sub_13d2740  (orig 0x13d2740, tailcall)
void main_f_13d2740() { main::sub_13d2630(); }

// sub_13d3430  (orig 0x13d3430, tailcall)
void main_f_13d3430() { main::sub_13d3320(); }

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

// sub_13e3280  (orig 0x13e3280, tailcall)
void main_f_13e3280() { main::sub_13e3130(); }

// sub_13e35c0  (orig 0x13e35c0, tailcall)
void main_f_13e35c0() { main::sub_13e32b0(); }

// sub_13e35d0  (orig 0x13e35d0, tailcall)
void main_f_13e35d0() { main::sub_13e3450(); }

// sub_13e41e0  (orig 0x13e41e0, ret_only)
void main_f_13e41e0() {}

// sub_13e4a30  (orig 0x13e4a30, getter)
uint32_t main_f_13e4a30(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_13e6080  (orig 0x13e6080, tailcall)
void main_f_13e6080() { main::sub_13e6430(); }

// sub_13e6090  (orig 0x13e6090, getter-chain)
uint64_t main_f_13e6090(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 400); }

// sub_13e60a0  (orig 0x13e60a0, getter-chain)
uint64_t main_f_13e60a0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 384); }

// sub_13e6250  (orig 0x13e6250, tailcall)
void main_f_13e6250() { main::sub_13e6430(); }

// sub_13e6260  (orig 0x13e6260, tailcall)
void main_f_13e6260() { main::sub_13e6430(); }

// sub_13ef5a0  (orig 0x13ef5a0, ret_only)
void main_f_13ef5a0() {}

// sub_13ef5b0  (orig 0x13ef5b0, tailcall)
void main_f_13ef5b0() { main::sub_ce0(); }

// sub_13ef600  (orig 0x13ef600, ret_only)
void main_f_13ef600() {}

// sub_13ef610  (orig 0x13ef610, tailcall)
void main_f_13ef610() { main::sub_ce0(); }

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

// sub_13f7d50  (orig 0x13f7d50, tailcall)
void main_f_13f7d50() { main::sub_13f7910(); }

// sub_13f7d80  (orig 0x13f7d80, tailcall)
void main_f_13f7d80() { main::sub_13a32c0(); }

// sub_13f9140  (orig 0x13f9140, compare)
bool main_f_13f9140(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 896)) == (uint64_t)(0); }

// sub_13fb830  (orig 0x13fb830, copy2)
void main_f_13fb830(void* a0) { *(uint64_t*)((char*)(a0) + 104) = *(uint64_t*)((char*)(a0) + 96); }

// sub_13fbf60  (orig 0x13fbf60, tailcall)
void main_f_13fbf60() { main::sub_13fbdc0(); }

// sub_13fcf40  (orig 0x13fcf40, tailcall)
void main_f_13fcf40() { main::sub_13fcd30(); }

// sub_13fe6f0  (orig 0x13fe6f0, tailcall)
void main_f_13fe6f0() { main::sub_13fe530(); }

// sub_13ff270  (orig 0x13ff270, tailcall)
void main_f_13ff270() { main::sub_13a32c0(); }

// sub_13ff900  (orig 0x13ff900, tailcall)
void main_f_13ff900() { main::sub_13ff5d0(); }

// sub_1400490  (orig 0x1400490, setter-chain)
void main_f_1400490(void* a0, uint64_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) { *(uint64_t*)((char*)(a0) + 504) = a1; *(uint32_t*)((char*)(a0) + 520) = a2; *(uint32_t*)((char*)(a0) + 524) = a3; *(uint32_t*)((char*)(a0) + 528) = a4; *(uint32_t*)((char*)(a0) + 532) = a5; }

// sub_1400540  (orig 0x1400540, setter-chain)
void main_f_1400540(void* a0, uint64_t a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5) { *(uint64_t*)((char*)(a0) + 512) = a1; *(uint32_t*)((char*)(a0) + 536) = a2; *(uint32_t*)((char*)(a0) + 540) = a3; *(uint32_t*)((char*)(a0) + 544) = a4; *(uint32_t*)((char*)(a0) + 548) = a5; }

// sub_1400700  (orig 0x1400700, mov_ret)
uint32_t main_f_1400700() { return 10; }

// sub_1401170  (orig 0x1401170, tailcall)
void main_f_1401170() { main::sub_1401050(); }

// sub_1401dc0  (orig 0x1401dc0, mov_ret)
uint32_t main_f_1401dc0() { return 1; }

// sub_1402700  (orig 0x1402700, tailcall)
void main_f_1402700() { main::sub_14028b0(); }

// sub_14027d0  (orig 0x14027d0, tailcall)
void main_f_14027d0() { main::sub_14028b0(); }

// sub_14027e0  (orig 0x14027e0, tailcall)
void main_f_14027e0() { main::sub_14028b0(); }

// sub_1402dd0  (orig 0x1402dd0, tailcall)
void main_f_1402dd0() { main::sub_1402c20(); }

// sub_1405250  (orig 0x1405250, tailcall)
void main_f_1405250() { main::sub_14058c0(); }

// sub_14056f0  (orig 0x14056f0, tailcall)
void main_f_14056f0() { main::sub_14058c0(); }

// sub_1405710  (orig 0x1405710, tailcall)
void main_f_1405710() { main::sub_14058c0(); }

// sub_1407130  (orig 0x1407130, tailcall)
void main_f_1407130() { main::sub_1407030(); }

// sub_140c390  (orig 0x140c390, tailcall)
void main_f_140c390() { main::sub_140c1d0(); }

// sub_140cc20  (orig 0x140cc20, mov_ret)
uint32_t main_f_140cc20() { return 1; }

// sub_140cc30  (orig 0x140cc30, ret_only)
void main_f_140cc30() {}

// sub_140cc40  (orig 0x140cc40, ret_only)
void main_f_140cc40() {}

// sub_140ce50  (orig 0x140ce50, tailcall)
void main_f_140ce50() { main::sub_140ce80(); }

// sub_140ce60  (orig 0x140ce60, tailcall)
void main_f_140ce60() { main::sub_140ce80(); }

// sub_140ce70  (orig 0x140ce70, tailcall)
void main_f_140ce70() { main::sub_140ce80(); }

// sub_140d4b0  (orig 0x140d4b0, getter)
uint64_t main_f_140d4b0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_140d620  (orig 0x140d620, mov_ret)
uint32_t main_f_140d620() { return 1; }

// sub_140e480  (orig 0x140e480, ret_only)
void main_f_140e480() {}

// sub_140e490  (orig 0x140e490, ret_only)
void main_f_140e490() {}

// sub_140ea40  (orig 0x140ea40, mov_ret)
uint32_t main_f_140ea40() { return 1; }

// sub_140ebf0  (orig 0x140ebf0, tailcall)
void main_f_140ebf0() { main::sub_140ea50(); }

// sub_140ef20  (orig 0x140ef20, tailcall)
void main_f_140ef20() { main::sub_140ee50(); }

// sub_140ef30  (orig 0x140ef30, tailcall)
void main_f_140ef30() { main::sub_140f090(); }

// sub_140ef60  (orig 0x140ef60, tailcall)
void main_f_140ef60() { main::sub_140f090(); }

// sub_140ef70  (orig 0x140ef70, tailcall)
void main_f_140ef70() { main::sub_140f090(); }

// sub_1411e90  (orig 0x1411e90, ret_only)
void main_f_1411e90() {}

// sub_14125e0  (orig 0x14125e0, tailcall)
void main_f_14125e0() { main::sub_1412a50(); }

// sub_1412810  (orig 0x1412810, tailcall)
void main_f_1412810() { main::sub_1412a50(); }

// sub_1412820  (orig 0x1412820, tailcall)
void main_f_1412820() { main::sub_1412a50(); }

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

// sub_14132a0  (orig 0x14132a0, tailcall)
void main_f_14132a0() { main::sub_e7c4c0(); }

// sub_14132b0  (orig 0x14132b0, tailcall)
void main_f_14132b0() { main::sub_1413320(); }

// sub_14132e0  (orig 0x14132e0, tailcall)
void main_f_14132e0() { main::sub_1413320(); }

// sub_14132f0  (orig 0x14132f0, tailcall)
void main_f_14132f0() { main::sub_1413320(); }

// sub_1414140  (orig 0x1414140, tailcall)
void main_f_1414140() { main::sub_e7c4c0(); }

// sub_1414150  (orig 0x1414150, tailcall)
void main_f_1414150() { main::sub_14141c0(); }

// sub_1414180  (orig 0x1414180, tailcall)
void main_f_1414180() { main::sub_14141c0(); }

// sub_1414190  (orig 0x1414190, tailcall)
void main_f_1414190() { main::sub_14141c0(); }

// sub_1414d40  (orig 0x1414d40, tailcall)
void main_f_1414d40() { main::sub_e7c4c0(); }

// sub_1414d50  (orig 0x1414d50, tailcall)
void main_f_1414d50() { main::sub_1414dc0(); }

// sub_1414d80  (orig 0x1414d80, tailcall)
void main_f_1414d80() { main::sub_1414dc0(); }

// sub_1414d90  (orig 0x1414d90, tailcall)
void main_f_1414d90() { main::sub_1414dc0(); }

// sub_1415820  (orig 0x1415820, tailcall)
void main_f_1415820() { main::sub_e7c4c0(); }

// sub_1415830  (orig 0x1415830, tailcall)
void main_f_1415830() { main::sub_14158a0(); }

// sub_1415860  (orig 0x1415860, tailcall)
void main_f_1415860() { main::sub_14158a0(); }

// sub_1415870  (orig 0x1415870, tailcall)
void main_f_1415870() { main::sub_14158a0(); }

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

// sub_1416a00  (orig 0x1416a00, tailcall)
void main_f_1416a00() { main::sub_e7c4c0(); }

// sub_1416a10  (orig 0x1416a10, tailcall)
void main_f_1416a10() { main::sub_1416a80(); }

// sub_1416a40  (orig 0x1416a40, tailcall)
void main_f_1416a40() { main::sub_1416a80(); }

// sub_1416a50  (orig 0x1416a50, tailcall)
void main_f_1416a50() { main::sub_1416a80(); }

// sub_14172b0  (orig 0x14172b0, ret_only)
void main_f_14172b0() {}

// sub_14172c0  (orig 0x14172c0, tailcall)
void main_f_14172c0() { main::sub_e7c4c0(); }

// sub_14172d0  (orig 0x14172d0, tailcall)
void main_f_14172d0() { main::sub_1417340(); }

// sub_1417300  (orig 0x1417300, tailcall)
void main_f_1417300() { main::sub_1417340(); }

// sub_1417310  (orig 0x1417310, tailcall)
void main_f_1417310() { main::sub_1417340(); }

// sub_1417c20  (orig 0x1417c20, mov_ret)
uint32_t main_f_1417c20() { return 1; }

// sub_1417c30  (orig 0x1417c30, ret_only)
void main_f_1417c30() {}

// sub_1417c40  (orig 0x1417c40, ret_only)
void main_f_1417c40() {}

// sub_1417ed0  (orig 0x1417ed0, tailcall)
void main_f_1417ed0() { main::sub_1417f00(); }

// sub_1417ee0  (orig 0x1417ee0, tailcall)
void main_f_1417ee0() { main::sub_1417f00(); }

// sub_1417ef0  (orig 0x1417ef0, tailcall)
void main_f_1417ef0() { main::sub_1417f00(); }

// sub_1418580  (orig 0x1418580, getter)
uint64_t main_f_1418580(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14186f0  (orig 0x14186f0, mov_ret)
uint32_t main_f_14186f0() { return 1; }

// sub_1419450  (orig 0x1419450, ret_only)
void main_f_1419450() {}

// sub_14197d0  (orig 0x14197d0, tailcall)
void main_f_14197d0() { main::sub_1419560(); }

// sub_1419a30  (orig 0x1419a30, tailcall)
void main_f_1419a30() { main::sub_e7c250(); }

// sub_1419a40  (orig 0x1419a40, tailcall)
void main_f_1419a40() { main::sub_1419ab0(); }

// sub_1419a70  (orig 0x1419a70, tailcall)
void main_f_1419a70() { main::sub_1419ab0(); }

// sub_1419a80  (orig 0x1419a80, tailcall)
void main_f_1419a80() { main::sub_1419ab0(); }

// sub_141a460  (orig 0x141a460, ret_only)
void main_f_141a460() {}

// sub_141a470  (orig 0x141a470, ret_only)
void main_f_141a470() {}

// sub_141a480  (orig 0x141a480, ret_only)
void main_f_141a480() {}

// sub_141bfc0  (orig 0x141bfc0, tailcall)
void main_f_141bfc0() { main::sub_141c270(); }

// sub_141c110  (orig 0x141c110, tailcall)
void main_f_141c110() { main::sub_141c270(); }

// sub_141c120  (orig 0x141c120, tailcall)
void main_f_141c120() { main::sub_141c270(); }

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

// sub_141ea10  (orig 0x141ea10, tailcall)
void main_f_141ea10() { main::sub_141e920(); }

// sub_141ea20  (orig 0x141ea20, tailcall)
void main_f_141ea20() { main::sub_141ea90(); }

// sub_141ea50  (orig 0x141ea50, tailcall)
void main_f_141ea50() { main::sub_141ea90(); }

// sub_141ea60  (orig 0x141ea60, tailcall)
void main_f_141ea60() { main::sub_141ea90(); }

// sub_141ebf0  (orig 0x141ebf0, ret_only)
void main_f_141ebf0() {}

// sub_141ec00  (orig 0x141ec00, copy2)
void main_f_141ec00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141ec10  (orig 0x141ec10, copy2)
void main_f_141ec10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_141ee20  (orig 0x141ee20, ret_only)
void main_f_141ee20() {}

// sub_1420c30  (orig 0x1420c30, ret_only)
void main_f_1420c30() {}

// sub_1420dc0  (orig 0x1420dc0, tailcall)
void main_f_1420dc0() { main::sub_1420c40(); }

// sub_1420dd0  (orig 0x1420dd0, tailcall)
void main_f_1420dd0() { main::sub_1420e40(); }

// sub_1420e00  (orig 0x1420e00, tailcall)
void main_f_1420e00() { main::sub_1420e40(); }

// sub_1420e10  (orig 0x1420e10, tailcall)
void main_f_1420e10() { main::sub_1420e40(); }

// sub_1421970  (orig 0x1421970, mov_ret)
uint32_t main_f_1421970() { return 1; }

// sub_1421980  (orig 0x1421980, ret_only)
void main_f_1421980() {}

// sub_1421990  (orig 0x1421990, ret_only)
void main_f_1421990() {}

// sub_1421c30  (orig 0x1421c30, tailcall)
void main_f_1421c30() { main::sub_1421c60(); }

// sub_1421c40  (orig 0x1421c40, tailcall)
void main_f_1421c40() { main::sub_1421c60(); }

// sub_1421c50  (orig 0x1421c50, tailcall)
void main_f_1421c50() { main::sub_1421c60(); }

// sub_14220d0  (orig 0x14220d0, mov_ret)
uint32_t main_f_14220d0() { return 1; }

// sub_14220e0  (orig 0x14220e0, ret_only)
void main_f_14220e0() {}

// sub_14220f0  (orig 0x14220f0, ret_only)
void main_f_14220f0() {}

// sub_14221e0  (orig 0x14221e0, mov_ret)
uint32_t main_f_14221e0() { return 1; }

// sub_1422390  (orig 0x1422390, tailcall)
void main_f_1422390() { main::sub_14221f0(); }

// sub_1422840  (orig 0x1422840, getter)
uint64_t main_f_1422840(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14229b0  (orig 0x14229b0, mov_ret)
uint32_t main_f_14229b0() { return 1; }

// sub_1423040  (orig 0x1423040, ret_only)
void main_f_1423040() {}

// sub_1423110  (orig 0x1423110, tailcall)
void main_f_1423110() { main::sub_14232c0(); }

// sub_14231e0  (orig 0x14231e0, tailcall)
void main_f_14231e0() { main::sub_14232c0(); }

// sub_14231f0  (orig 0x14231f0, tailcall)
void main_f_14231f0() { main::sub_14232c0(); }

// sub_14239f0  (orig 0x14239f0, mov_ret)
uint32_t main_f_14239f0() { return 1; }

// sub_1423c20  (orig 0x1423c20, tailcall)
void main_f_1423c20() { main::sub_1423c50(); }

// sub_1423c30  (orig 0x1423c30, tailcall)
void main_f_1423c30() { main::sub_1423c50(); }

// sub_1423c40  (orig 0x1423c40, tailcall)
void main_f_1423c40() { main::sub_1423c50(); }

// sub_14242a0  (orig 0x14242a0, getter)
uint64_t main_f_14242a0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1424410  (orig 0x1424410, mov_ret)
uint32_t main_f_1424410() { return 1; }

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

// sub_14254d0  (orig 0x14254d0, tailcall)
void main_f_14254d0() { main::sub_1425310(); }

// sub_1425980  (orig 0x1425980, tailcall)
void main_f_1425980() { main::sub_1425730(); }

// sub_1425990  (orig 0x1425990, tailcall)
void main_f_1425990() { main::sub_1425a50(); }

// sub_14259c0  (orig 0x14259c0, tailcall)
void main_f_14259c0() { main::sub_1425a50(); }

// sub_14259d0  (orig 0x14259d0, tailcall)
void main_f_14259d0() { main::sub_1425a50(); }

// sub_1425a00  (orig 0x1425a00, mov_ret)
uint32_t main_f_1425a00() { return 1; }

// sub_1427320  (orig 0x1427320, tailcall)
void main_f_1427320() { main::sub_e7feb0(); }

// sub_1427330  (orig 0x1427330, tailcall)
void main_f_1427330() { main::sub_14273a0(); }

// sub_1427360  (orig 0x1427360, tailcall)
void main_f_1427360() { main::sub_14273a0(); }

// sub_1427370  (orig 0x1427370, tailcall)
void main_f_1427370() { main::sub_14273a0(); }

// sub_14278e0  (orig 0x14278e0, tailcall)
void main_f_14278e0() { main::sub_e7feb0(); }

// sub_14278f0  (orig 0x14278f0, tailcall)
void main_f_14278f0() { main::sub_1427960(); }

// sub_1427920  (orig 0x1427920, tailcall)
void main_f_1427920() { main::sub_1427960(); }

// sub_1427930  (orig 0x1427930, tailcall)
void main_f_1427930() { main::sub_1427960(); }

// sub_1428760  (orig 0x1428760, tailcall)
void main_f_1428760() { main::sub_1428950(); }

// sub_1428850  (orig 0x1428850, tailcall)
void main_f_1428850() { main::sub_1428950(); }

// sub_1428860  (orig 0x1428860, tailcall)
void main_f_1428860() { main::sub_1428950(); }

// sub_1428ca0  (orig 0x1428ca0, ret_only)
void main_f_1428ca0() {}

// sub_1428cb0  (orig 0x1428cb0, tailcall)
void main_f_1428cb0() { main::sub_e7c4c0(); }

// sub_1428cc0  (orig 0x1428cc0, tailcall)
void main_f_1428cc0() { main::sub_1428d30(); }

// sub_1428cf0  (orig 0x1428cf0, tailcall)
void main_f_1428cf0() { main::sub_1428d30(); }

// sub_1428d00  (orig 0x1428d00, tailcall)
void main_f_1428d00() { main::sub_1428d30(); }

// sub_1429450  (orig 0x1429450, tailcall)
void main_f_1429450() { main::sub_e7c4c0(); }

// sub_1429460  (orig 0x1429460, tailcall)
void main_f_1429460() { main::sub_14294d0(); }

// sub_1429490  (orig 0x1429490, tailcall)
void main_f_1429490() { main::sub_14294d0(); }

// sub_14294a0  (orig 0x14294a0, tailcall)
void main_f_14294a0() { main::sub_14294d0(); }

// sub_14297c0  (orig 0x14297c0, ret_only)
void main_f_14297c0() {}

// sub_14297d0  (orig 0x14297d0, tailcall)
void main_f_14297d0() { main::sub_e7c4c0(); }

// sub_14297e0  (orig 0x14297e0, tailcall)
void main_f_14297e0() { main::sub_1429850(); }

// sub_1429810  (orig 0x1429810, tailcall)
void main_f_1429810() { main::sub_1429850(); }

// sub_1429820  (orig 0x1429820, tailcall)
void main_f_1429820() { main::sub_1429850(); }

// sub_1429c90  (orig 0x1429c90, ret_only)
void main_f_1429c90() {}

// sub_1429d60  (orig 0x1429d60, tailcall)
void main_f_1429d60() { main::sub_1429f10(); }

// sub_1429e30  (orig 0x1429e30, tailcall)
void main_f_1429e30() { main::sub_1429f10(); }

// sub_1429e40  (orig 0x1429e40, tailcall)
void main_f_1429e40() { main::sub_1429f10(); }

// sub_142a1b0  (orig 0x142a1b0, straight)
void main_f_142a1b0(void* a0) {
    *(uint8_t*)((char*)(a0) + 116) = (uint8_t)(1);
}

// sub_142a450  (orig 0x142a450, tailcall)
void main_f_142a450() { main::sub_142a310(); }

// sub_142bcd0  (orig 0x142bcd0, tailcall)
void main_f_142bcd0() { main::sub_142bbb0(); }

// sub_142bd00  (orig 0x142bd00, mov_ret)
uint32_t main_f_142bd00() { return 1; }

// sub_142bd10  (orig 0x142bd10, ret_only)
void main_f_142bd10() {}

// sub_142bd20  (orig 0x142bd20, ret_only)
void main_f_142bd20() {}

// sub_142c6d0  (orig 0x142c6d0, tailcall)
void main_f_142c6d0() { main::sub_142c700(); }

// sub_142c6e0  (orig 0x142c6e0, tailcall)
void main_f_142c6e0() { main::sub_142c700(); }

// sub_142c6f0  (orig 0x142c6f0, tailcall)
void main_f_142c6f0() { main::sub_142c700(); }

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

// sub_142f2f0  (orig 0x142f2f0, tailcall)
void main_f_142f2f0() { main::sub_142f550(); }

// sub_142f6f0  (orig 0x142f6f0, tailcall)
void main_f_142f6f0() { main::sub_142f550(); }

// sub_142f990  (orig 0x142f990, tailcall)
void main_f_142f990() { main::sub_142f550(); }

// sub_142fe80  (orig 0x142fe80, getter)
uint64_t main_f_142fe80(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_142fff0  (orig 0x142fff0, mov_ret)
uint32_t main_f_142fff0() { return 1; }

// sub_1433680  (orig 0x1433680, tailcall)
void main_f_1433680() { main::sub_1433540(); }

// sub_1433690  (orig 0x1433690, tailcall)
void main_f_1433690() { main::sub_14314e0(); }

// sub_14336c0  (orig 0x14336c0, tailcall)
void main_f_14336c0() { main::sub_14314e0(); }

// sub_14336d0  (orig 0x14336d0, tailcall)
void main_f_14336d0() { main::sub_14314e0(); }

// sub_1433730  (orig 0x1433730, ret_only)
void main_f_1433730() {}

// sub_1433790  (orig 0x1433790, ret_only)
void main_f_1433790() {}

// sub_1433830  (orig 0x1433830, ret_only)
void main_f_1433830() {}

// sub_14338a0  (orig 0x14338a0, ret_only)
void main_f_14338a0() {}

// sub_1434750  (orig 0x1434750, setter-chain)
void main_f_1434750(void* a0) { *(uint16_t*)((char*)(a0) + 84) = 0; *(uint32_t*)((char*)(a0) + 80) = 0; }

// sub_1434b30  (orig 0x1434b30, tailcall)
void main_f_1434b30() { main::sub_14302c0(); }

// sub_1434ce0  (orig 0x1434ce0, tailcall)
void main_f_1434ce0() { main::sub_14302c0(); }

// sub_1434cf0  (orig 0x1434cf0, tailcall)
void main_f_1434cf0() { main::sub_14302c0(); }

// sub_14357b0  (orig 0x14357b0, ret_only)
void main_f_14357b0() {}

// sub_1435830  (orig 0x1435830, tailcall)
void main_f_1435830() { main::sub_e7c4c0(); }

// sub_1435ed0  (orig 0x1435ed0, tailcall)
void main_f_1435ed0() { main::sub_e7c4c0(); }

// sub_1435ee0  (orig 0x1435ee0, tailcall)
void main_f_1435ee0() { main::sub_1430b90(); }

// sub_1435f10  (orig 0x1435f10, tailcall)
void main_f_1435f10() { main::sub_1430b90(); }

// sub_1435f20  (orig 0x1435f20, tailcall)
void main_f_1435f20() { main::sub_1430b90(); }

// sub_14363b0  (orig 0x14363b0, ret_only)
void main_f_14363b0() {}

// sub_1436dc0  (orig 0x1436dc0, tailcall)
void main_f_1436dc0() { main::sub_e7c4c0(); }

// sub_1437ad0  (orig 0x1437ad0, ret_only)
void main_f_1437ad0() {}

// sub_14382f0  (orig 0x14382f0, ret_only)
void main_f_14382f0() {}

// sub_14387f0  (orig 0x14387f0, ret_only)
void main_f_14387f0() {}

// sub_1438800  (orig 0x1438800, tailcall)
void main_f_1438800() { main::sub_e7c4c0(); }

// sub_1438a50  (orig 0x1438a50, ret_only)
void main_f_1438a50() {}

// sub_1438a60  (orig 0x1438a60, tailcall)
void main_f_1438a60() { main::sub_e7c4c0(); }

// sub_1439330  (orig 0x1439330, ret_only)
void main_f_1439330() {}

// sub_1439b20  (orig 0x1439b20, tailcall)
void main_f_1439b20() { main::sub_1439930(); }

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

// sub_143b570  (orig 0x143b570, tailcall)
void main_f_143b570() { main::sub_e7c4c0(); }

// sub_143b840  (orig 0x143b840, mov_ret)
uint32_t main_f_143b840() { return 1; }

// sub_143b850  (orig 0x143b850, ret_only)
void main_f_143b850() {}

// sub_143b860  (orig 0x143b860, tailcall)
void main_f_143b860() { main::sub_e7c4c0(); }

// sub_143bb80  (orig 0x143bb80, tailcall)
void main_f_143bb80() { main::sub_e7c4c0(); }

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

// sub_143cbb0  (orig 0x143cbb0, tailcall)
void main_f_143cbb0() { main::sub_143cee0(); }

// sub_143cd40  (orig 0x143cd40, tailcall)
void main_f_143cd40() { main::sub_143cee0(); }

// sub_143cd50  (orig 0x143cd50, tailcall)
void main_f_143cd50() { main::sub_143cee0(); }

// sub_143d040  (orig 0x143d040, ret_only)
void main_f_143d040() {}

// sub_143d4a0  (orig 0x143d4a0, ret_only)
void main_f_143d4a0() {}

// sub_143d4b0  (orig 0x143d4b0, copy2)
void main_f_143d4b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143d4c0  (orig 0x143d4c0, copy2)
void main_f_143d4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_143dc10  (orig 0x143dc10, tailcall)
void main_f_143dc10() { main::sub_143daf0(); }

// sub_143dc20  (orig 0x143dc20, tailcall)
void main_f_143dc20() { main::sub_1439d80(); }

// sub_143dc50  (orig 0x143dc50, tailcall)
void main_f_143dc50() { main::sub_1439d80(); }

// sub_143dc60  (orig 0x143dc60, tailcall)
void main_f_143dc60() { main::sub_1439d80(); }

// sub_143e500  (orig 0x143e500, mov_ret)
uint32_t main_f_143e500() { return 1; }

// sub_143e980  (orig 0x143e980, tailcall)
void main_f_143e980() { main::sub_143e7e0(); }

// sub_143eb20  (orig 0x143eb20, mov_ret)
uint32_t main_f_143eb20() { return 1; }

// sub_143f120  (orig 0x143f120, mov_ret)
uint32_t main_f_143f120() { return 1; }

// sub_143f130  (orig 0x143f130, ret_only)
void main_f_143f130() {}

// sub_143f140  (orig 0x143f140, ret_only)
void main_f_143f140() {}

// sub_143f530  (orig 0x143f530, tailcall)
void main_f_143f530() { main::sub_143f560(); }

// sub_143f540  (orig 0x143f540, tailcall)
void main_f_143f540() { main::sub_143f560(); }

// sub_143f550  (orig 0x143f550, tailcall)
void main_f_143f550() { main::sub_143f560(); }

// sub_143fbd0  (orig 0x143fbd0, ret_only)
void main_f_143fbd0() {}

// sub_143fbe0  (orig 0x143fbe0, ret_only)
void main_f_143fbe0() {}

// sub_143fbf0  (orig 0x143fbf0, mov_ret)
uint32_t main_f_143fbf0() { return 1; }

// sub_143fce0  (orig 0x143fce0, setter)
void main_f_143fce0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1792) = a1; }

// sub_143fe90  (orig 0x143fe90, tailcall)
void main_f_143fe90() { main::sub_143fcf0(); }

// sub_14400f0  (orig 0x14400f0, tailcall)
void main_f_14400f0() { main::sub_e7c250(); }

// sub_1440100  (orig 0x1440100, tailcall)
void main_f_1440100() { main::sub_1440750(); }

// sub_1440130  (orig 0x1440130, tailcall)
void main_f_1440130() { main::sub_1440750(); }

// sub_1440140  (orig 0x1440140, tailcall)
void main_f_1440140() { main::sub_1440750(); }

// sub_14403c0  (orig 0x14403c0, getter)
uint64_t main_f_14403c0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1440530  (orig 0x1440530, mov_ret)
uint32_t main_f_1440530() { return 1; }

// sub_1441ca0  (orig 0x1441ca0, ret_only)
void main_f_1441ca0() {}

// sub_1441cb0  (orig 0x1441cb0, tailcall)
void main_f_1441cb0() { main::sub_e7c4c0(); }

// sub_1441cc0  (orig 0x1441cc0, tailcall)
void main_f_1441cc0() { main::sub_1441d30(); }

// sub_1441cf0  (orig 0x1441cf0, tailcall)
void main_f_1441cf0() { main::sub_1441d30(); }

// sub_1441d00  (orig 0x1441d00, tailcall)
void main_f_1441d00() { main::sub_1441d30(); }

// sub_14420a0  (orig 0x14420a0, mov_ret)
uint32_t main_f_14420a0() { return 1; }

// sub_1442e80  (orig 0x1442e80, tailcall)
void main_f_1442e80() { main::sub_1443030(); }

// sub_1442f50  (orig 0x1442f50, tailcall)
void main_f_1442f50() { main::sub_1443030(); }

// sub_1442f60  (orig 0x1442f60, tailcall)
void main_f_1442f60() { main::sub_1443030(); }

// sub_14496c0  (orig 0x14496c0, tailcall)
void main_f_14496c0() { main::sub_1449390(); }

// sub_14496d0  (orig 0x14496d0, tailcall)
void main_f_14496d0() { main::sub_1449740(); }

// sub_1449700  (orig 0x1449700, tailcall)
void main_f_1449700() { main::sub_1449740(); }

// sub_1449710  (orig 0x1449710, tailcall)
void main_f_1449710() { main::sub_1449740(); }

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

// sub_1449ef0  (orig 0x1449ef0, tailcall)
void main_f_1449ef0() { main::sub_14ba4c0(); }

// sub_144a570  (orig 0x144a570, mov_ret)
uint32_t main_f_144a570() { return 1; }

// sub_144a580  (orig 0x144a580, ret_only)
void main_f_144a580() {}

// sub_144a590  (orig 0x144a590, ret_only)
void main_f_144a590() {}

// sub_144aab0  (orig 0x144aab0, tailcall)
void main_f_144aab0() { main::sub_144aae0(); }

// sub_144aac0  (orig 0x144aac0, tailcall)
void main_f_144aac0() { main::sub_144aae0(); }

// sub_144aad0  (orig 0x144aad0, tailcall)
void main_f_144aad0() { main::sub_144aae0(); }

// sub_144b120  (orig 0x144b120, getter)
uint64_t main_f_144b120(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_144b290  (orig 0x144b290, mov_ret)
uint32_t main_f_144b290() { return 1; }

// sub_144b960  (orig 0x144b960, mov_ret)
uint32_t main_f_144b960() { return 1; }

// sub_144be40  (orig 0x144be40, mov_ret)
uint32_t main_f_144be40() { return 1; }

// sub_144bff0  (orig 0x144bff0, tailcall)
void main_f_144bff0() { main::sub_144be50(); }

// sub_144c250  (orig 0x144c250, tailcall)
void main_f_144c250() { main::sub_e7c250(); }

// sub_144c260  (orig 0x144c260, tailcall)
void main_f_144c260() { main::sub_144c2d0(); }

// sub_144c290  (orig 0x144c290, tailcall)
void main_f_144c290() { main::sub_144c2d0(); }

// sub_144c2a0  (orig 0x144c2a0, tailcall)
void main_f_144c2a0() { main::sub_144c2d0(); }

// sub_144cbc0  (orig 0x144cbc0, ret_only)
void main_f_144cbc0() {}

// sub_144cbd0  (orig 0x144cbd0, tailcall)
void main_f_144cbd0() { main::sub_e7c4c0(); }

// sub_144cbe0  (orig 0x144cbe0, tailcall)
void main_f_144cbe0() { main::sub_144cc50(); }

// sub_144cc10  (orig 0x144cc10, tailcall)
void main_f_144cc10() { main::sub_144cc50(); }

// sub_144cc20  (orig 0x144cc20, tailcall)
void main_f_144cc20() { main::sub_144cc50(); }

// sub_144d5c0  (orig 0x144d5c0, ret_only)
void main_f_144d5c0() {}

// sub_144d5d0  (orig 0x144d5d0, tailcall)
void main_f_144d5d0() { main::sub_e7c4c0(); }

// sub_144d5e0  (orig 0x144d5e0, tailcall)
void main_f_144d5e0() { main::sub_144d650(); }

// sub_144d610  (orig 0x144d610, tailcall)
void main_f_144d610() { main::sub_144d650(); }

// sub_144d620  (orig 0x144d620, tailcall)
void main_f_144d620() { main::sub_144d650(); }

// sub_144dec0  (orig 0x144dec0, ret_only)
void main_f_144dec0() {}

// sub_144e9e0  (orig 0x144e9e0, tailcall)
void main_f_144e9e0() { main::sub_e7c4c0(); }

// sub_144e9f0  (orig 0x144e9f0, tailcall)
void main_f_144e9f0() { main::sub_144ea60(); }

// sub_144ea20  (orig 0x144ea20, tailcall)
void main_f_144ea20() { main::sub_144ea60(); }

// sub_144ea30  (orig 0x144ea30, tailcall)
void main_f_144ea30() { main::sub_144ea60(); }

// sub_144ebb0  (orig 0x144ebb0, ret_only)
void main_f_144ebb0() {}

// sub_144ec20  (orig 0x144ec20, ret_only)
void main_f_144ec20() {}

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

// sub_144efc0  (orig 0x144efc0, tailcall)
void main_f_144efc0() { main::sub_e7c4c0(); }

// sub_144efd0  (orig 0x144efd0, tailcall)
void main_f_144efd0() { main::sub_144f040(); }

// sub_144f000  (orig 0x144f000, tailcall)
void main_f_144f000() { main::sub_144f040(); }

// sub_144f010  (orig 0x144f010, tailcall)
void main_f_144f010() { main::sub_144f040(); }

// sub_144f620  (orig 0x144f620, tailcall)
void main_f_144f620() { main::sub_144f480(); }

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

// sub_1454690  (orig 0x1454690, tailcall)
void main_f_1454690() { main::sub_1454900(); }

// sub_14547c0  (orig 0x14547c0, tailcall)
void main_f_14547c0() { main::sub_1454900(); }

// sub_14547d0  (orig 0x14547d0, tailcall)
void main_f_14547d0() { main::sub_1454900(); }

// sub_1455110  (orig 0x1455110, getter)
uint64_t main_f_1455110(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1455280  (orig 0x1455280, mov_ret)
uint32_t main_f_1455280() { return 1; }

// sub_1456660  (orig 0x1456660, tailcall)
void main_f_1456660() { main::sub_1456440(); }

// sub_14569a0  (orig 0x14569a0, tailcall)
void main_f_14569a0() { main::sub_1456b90(); }

// sub_1456a90  (orig 0x1456a90, tailcall)
void main_f_1456a90() { main::sub_1456b90(); }

// sub_1456aa0  (orig 0x1456aa0, tailcall)
void main_f_1456aa0() { main::sub_1456b90(); }

// sub_1456cd0  (orig 0x1456cd0, ret_only)
void main_f_1456cd0() {}

// sub_1456ce0  (orig 0x1456ce0, copy2)
void main_f_1456ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1456cf0  (orig 0x1456cf0, copy2)
void main_f_1456cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1458570  (orig 0x1458570, tailcall)
void main_f_1458570() { main::sub_1458480(); }

// sub_145b610  (orig 0x145b610, getter)
uint32_t main_f_145b610(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_145b760  (orig 0x145b760, ret_only)
void main_f_145b760() {}

// sub_145ef00  (orig 0x145ef00, tailcall)
void main_f_145ef00() { main::sub_145ee10(); }

// sub_145ef10  (orig 0x145ef10, tailcall)
void main_f_145ef10() { main::sub_145ef80(); }

// sub_145ef40  (orig 0x145ef40, tailcall)
void main_f_145ef40() { main::sub_145ef80(); }

// sub_145ef50  (orig 0x145ef50, tailcall)
void main_f_145ef50() { main::sub_145ef80(); }

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

// sub_145f1d0  (orig 0x145f1d0, ret_only)
void main_f_145f1d0() {}

// sub_145f1e0  (orig 0x145f1e0, copy2)
void main_f_145f1e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f1f0  (orig 0x145f1f0, copy2)
void main_f_145f1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_145f3c0  (orig 0x145f3c0, tailcall)
void main_f_145f3c0() { main::sub_e7feb0(); }

// sub_145f3d0  (orig 0x145f3d0, tailcall)
void main_f_145f3d0() { main::sub_145f440(); }

// sub_145f400  (orig 0x145f400, tailcall)
void main_f_145f400() { main::sub_145f440(); }

// sub_145f410  (orig 0x145f410, tailcall)
void main_f_145f410() { main::sub_145f440(); }

// sub_145f8b0  (orig 0x145f8b0, tailcall)
void main_f_145f8b0() { main::sub_e7c4c0(); }

// sub_145f8c0  (orig 0x145f8c0, tailcall)
void main_f_145f8c0() { main::sub_145f930(); }

// sub_145f8f0  (orig 0x145f8f0, tailcall)
void main_f_145f8f0() { main::sub_145f930(); }

// sub_145f900  (orig 0x145f900, tailcall)
void main_f_145f900() { main::sub_145f930(); }

// sub_145fd50  (orig 0x145fd50, tailcall)
void main_f_145fd50() { main::sub_e7feb0(); }

// sub_145fd60  (orig 0x145fd60, tailcall)
void main_f_145fd60() { main::sub_145fdd0(); }

// sub_145fd90  (orig 0x145fd90, tailcall)
void main_f_145fd90() { main::sub_145fdd0(); }

// sub_145fda0  (orig 0x145fda0, tailcall)
void main_f_145fda0() { main::sub_145fdd0(); }

// sub_1460600  (orig 0x1460600, tailcall)
void main_f_1460600() { main::sub_e7c4c0(); }

// sub_1460610  (orig 0x1460610, tailcall)
void main_f_1460610() { main::sub_1457c40(); }

// sub_1460640  (orig 0x1460640, tailcall)
void main_f_1460640() { main::sub_1457c40(); }

// sub_1460650  (orig 0x1460650, tailcall)
void main_f_1460650() { main::sub_1457c40(); }

// sub_1460a90  (orig 0x1460a90, ret_only)
void main_f_1460a90() {}

// sub_1460aa0  (orig 0x1460aa0, tailcall)
void main_f_1460aa0() { main::sub_e7c4c0(); }

// sub_1460ab0  (orig 0x1460ab0, tailcall)
void main_f_1460ab0() { main::sub_1460b20(); }

// sub_1460ae0  (orig 0x1460ae0, tailcall)
void main_f_1460ae0() { main::sub_1460b20(); }

// sub_1460af0  (orig 0x1460af0, tailcall)
void main_f_1460af0() { main::sub_1460b20(); }

// sub_1460e00  (orig 0x1460e00, mov_ret)
uint32_t main_f_1460e00() { return 1; }

// sub_1460e10  (orig 0x1460e10, ret_only)
void main_f_1460e10() {}

// sub_1460f00  (orig 0x1460f00, ret_only)
void main_f_1460f00() {}

// sub_14610e0  (orig 0x14610e0, tailcall)
void main_f_14610e0() { main::sub_1461290(); }

// sub_14611b0  (orig 0x14611b0, tailcall)
void main_f_14611b0() { main::sub_1461290(); }

// sub_14611c0  (orig 0x14611c0, tailcall)
void main_f_14611c0() { main::sub_1461290(); }

// sub_1461b40  (orig 0x1461b40, getter)
uint64_t main_f_1461b40(void* a0) { return *(uint64_t*)((char*)(a0) + 184); }

// sub_1461cd0  (orig 0x1461cd0, mov_ret)
uint32_t main_f_1461cd0() { return 4; }

// sub_1466b00  (orig 0x1466b00, tailcall)
void main_f_1466b00() { main::sub_14669f0(); }

// sub_1466e50  (orig 0x1466e50, tailcall)
void main_f_1466e50() { main::sub_1466d60(); }

// sub_1466e60  (orig 0x1466e60, tailcall)
void main_f_1466e60() { main::sub_1467080(); }

// sub_1466e90  (orig 0x1466e90, tailcall)
void main_f_1466e90() { main::sub_1467080(); }

// sub_1466ea0  (orig 0x1466ea0, tailcall)
void main_f_1466ea0() { main::sub_1467080(); }

// sub_146c480  (orig 0x146c480, tailcall)
void main_f_146c480() { main::sub_146c7b0(); }

// sub_146c610  (orig 0x146c610, tailcall)
void main_f_146c610() { main::sub_146c7b0(); }

// sub_146c620  (orig 0x146c620, tailcall)
void main_f_146c620() { main::sub_146c7b0(); }

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

// sub_146cf90  (orig 0x146cf90, tailcall)
void main_f_146cf90() { main::sub_ce0(); }

// sub_146db10  (orig 0x146db10, tailcall)
void main_f_146db10() { main::sub_e7feb0(); }

// sub_146db20  (orig 0x146db20, tailcall)
void main_f_146db20() { main::sub_146db90(); }

// sub_146db50  (orig 0x146db50, tailcall)
void main_f_146db50() { main::sub_146db90(); }

// sub_146db60  (orig 0x146db60, tailcall)
void main_f_146db60() { main::sub_146db90(); }

// sub_146e280  (orig 0x146e280, ret_only)
void main_f_146e280() {}

// sub_146e350  (orig 0x146e350, tailcall)
void main_f_146e350() { main::sub_146e500(); }

// sub_146e420  (orig 0x146e420, tailcall)
void main_f_146e420() { main::sub_146e500(); }

// sub_146e430  (orig 0x146e430, tailcall)
void main_f_146e430() { main::sub_146e500(); }

// sub_146f290  (orig 0x146f290, ret_only)
void main_f_146f290() {}

// sub_146f360  (orig 0x146f360, tailcall)
void main_f_146f360() { main::sub_146f510(); }

// sub_146f430  (orig 0x146f430, tailcall)
void main_f_146f430() { main::sub_146f510(); }

// sub_146f440  (orig 0x146f440, tailcall)
void main_f_146f440() { main::sub_146f510(); }

// sub_1470720  (orig 0x1470720, tailcall)
void main_f_1470720() { main::sub_1470910(); }

// sub_1470810  (orig 0x1470810, tailcall)
void main_f_1470810() { main::sub_1470910(); }

// sub_1470820  (orig 0x1470820, tailcall)
void main_f_1470820() { main::sub_1470910(); }

// sub_1470a50  (orig 0x1470a50, ret_only)
void main_f_1470a50() {}

// sub_1470a60  (orig 0x1470a60, copy2)
void main_f_1470a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470a70  (orig 0x1470a70, copy2)
void main_f_1470a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470a90  (orig 0x1470a90, ret_only)
void main_f_1470a90() {}

// sub_1470aa0  (orig 0x1470aa0, copy2)
void main_f_1470aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1470ab0  (orig 0x1470ab0, copy2)
void main_f_1470ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_1471fd0  (orig 0x1471fd0, tailcall)
void main_f_1471fd0() { main::sub_1471ed0(); }

// sub_1471fe0  (orig 0x1471fe0, tailcall)
void main_f_1471fe0() { main::sub_1472050(); }

// sub_1472010  (orig 0x1472010, tailcall)
void main_f_1472010() { main::sub_1472050(); }

// sub_1472020  (orig 0x1472020, tailcall)
void main_f_1472020() { main::sub_1472050(); }

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

// sub_14725e0  (orig 0x14725e0, tailcall)
void main_f_14725e0() { main::sub_e7c4c0(); }

// sub_14725f0  (orig 0x14725f0, tailcall)
void main_f_14725f0() { main::sub_1472660(); }

// sub_1472620  (orig 0x1472620, tailcall)
void main_f_1472620() { main::sub_1472660(); }

// sub_1472630  (orig 0x1472630, tailcall)
void main_f_1472630() { main::sub_1472660(); }

// sub_14730b0  (orig 0x14730b0, tailcall)
void main_f_14730b0() { main::sub_e7c4c0(); }

// sub_14730c0  (orig 0x14730c0, tailcall)
void main_f_14730c0() { main::sub_1473130(); }

// sub_14730f0  (orig 0x14730f0, tailcall)
void main_f_14730f0() { main::sub_1473130(); }

// sub_1473100  (orig 0x1473100, tailcall)
void main_f_1473100() { main::sub_1473130(); }

// sub_1473920  (orig 0x1473920, ret_only)
void main_f_1473920() {}

// sub_14739f0  (orig 0x14739f0, tailcall)
void main_f_14739f0() { main::sub_1473ba0(); }

// sub_1473ac0  (orig 0x1473ac0, tailcall)
void main_f_1473ac0() { main::sub_1473ba0(); }

// sub_1473ad0  (orig 0x1473ad0, tailcall)
void main_f_1473ad0() { main::sub_1473ba0(); }

// sub_1474870  (orig 0x1474870, ret_only)
void main_f_1474870() {}

// sub_14749b0  (orig 0x14749b0, tailcall)
void main_f_14749b0() { main::sub_e7c4c0(); }

// sub_14749c0  (orig 0x14749c0, tailcall)
void main_f_14749c0() { main::sub_1474a30(); }

// sub_14749f0  (orig 0x14749f0, tailcall)
void main_f_14749f0() { main::sub_1474a30(); }

// sub_1474a00  (orig 0x1474a00, tailcall)
void main_f_1474a00() { main::sub_1474a30(); }

// sub_1476870  (orig 0x1476870, setter)
void main_f_1476870(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1668) = a1; }

// sub_1476ad0  (orig 0x1476ad0, tailcall)
void main_f_1476ad0() { main::sub_1476890(); }

// sub_1476ae0  (orig 0x1476ae0, tailcall)
void main_f_1476ae0() { main::sub_1476b50(); }

// sub_1476b10  (orig 0x1476b10, tailcall)
void main_f_1476b10() { main::sub_1476b50(); }

// sub_1476b20  (orig 0x1476b20, tailcall)
void main_f_1476b20() { main::sub_1476b50(); }

// sub_1476c90  (orig 0x1476c90, ret_only)
void main_f_1476c90() {}

// sub_1476ca0  (orig 0x1476ca0, copy2)
void main_f_1476ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cb0  (orig 0x1476cb0, copy2)
void main_f_1476cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cd0  (orig 0x1476cd0, ret_only)
void main_f_1476cd0() {}

// sub_1476ce0  (orig 0x1476ce0, copy2)
void main_f_1476ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476cf0  (orig 0x1476cf0, copy2)
void main_f_1476cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d10  (orig 0x1476d10, ret_only)
void main_f_1476d10() {}

// sub_1476d20  (orig 0x1476d20, copy2)
void main_f_1476d20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d30  (orig 0x1476d30, copy2)
void main_f_1476d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1476d70  (orig 0x1476d70, ret_only)
void main_f_1476d70() {}

// sub_1477050  (orig 0x1477050, ret_only)
void main_f_1477050() {}

// sub_1477060  (orig 0x1477060, tailcall)
void main_f_1477060() { main::sub_e7c4c0(); }

// sub_1477070  (orig 0x1477070, tailcall)
void main_f_1477070() { main::sub_14770e0(); }

// sub_14770a0  (orig 0x14770a0, tailcall)
void main_f_14770a0() { main::sub_14770e0(); }

// sub_14770b0  (orig 0x14770b0, tailcall)
void main_f_14770b0() { main::sub_14770e0(); }

// sub_1477510  (orig 0x1477510, ret_only)
void main_f_1477510() {}

// sub_1477520  (orig 0x1477520, tailcall)
void main_f_1477520() { main::sub_e7c4c0(); }

// sub_1477530  (orig 0x1477530, tailcall)
void main_f_1477530() { main::sub_14775a0(); }

// sub_1477560  (orig 0x1477560, tailcall)
void main_f_1477560() { main::sub_14775a0(); }

// sub_1477570  (orig 0x1477570, tailcall)
void main_f_1477570() { main::sub_14775a0(); }

// sub_1477900  (orig 0x1477900, ret_only)
void main_f_1477900() {}

// sub_1477910  (orig 0x1477910, tailcall)
void main_f_1477910() { main::sub_e7c4c0(); }

// sub_1477920  (orig 0x1477920, tailcall)
void main_f_1477920() { main::sub_1477990(); }

// sub_1477950  (orig 0x1477950, tailcall)
void main_f_1477950() { main::sub_1477990(); }

// sub_1477960  (orig 0x1477960, tailcall)
void main_f_1477960() { main::sub_1477990(); }

// sub_14783f0  (orig 0x14783f0, tailcall)
void main_f_14783f0() { main::sub_1478660(); }

// sub_1478520  (orig 0x1478520, tailcall)
void main_f_1478520() { main::sub_1478660(); }

// sub_1478530  (orig 0x1478530, tailcall)
void main_f_1478530() { main::sub_1478660(); }

// sub_14787b0  (orig 0x14787b0, ret_only)
void main_f_14787b0() {}

// sub_14787c0  (orig 0x14787c0, copy2)
void main_f_14787c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14787d0  (orig 0x14787d0, copy2)
void main_f_14787d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

