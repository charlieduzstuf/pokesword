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


namespace main { void sub_1333cb0(); }
namespace main { void sub_1333e80(); }
namespace main { uint64_t sub_1333cb0(uintptr_t); }
namespace main { uint64_t sub_1334f80(uintptr_t); }
namespace main { void sub_1337220(); }
namespace main { void sub_13373e0(); }
namespace main { uint64_t sub_1337220(uintptr_t); }
namespace main { void sub_1339120(); }
namespace main { void sub_1339320(); }
namespace main { uint64_t sub_1339120(uintptr_t); }
namespace main { void sub_133cb80(); }
namespace main { void sub_133def0(); }
namespace main { uint64_t sub_133def0(uintptr_t); }
namespace main { void sub_e7c250(); }
namespace main { void sub_133ecb0(); }
namespace main { uint64_t sub_e7c250(uintptr_t); }
namespace main { void sub_133fe90(); }
namespace main { void sub_1340910(); }
namespace main { void sub_1343f10(); }
namespace main { void sub_133f290(); }
namespace main { uint64_t sub_1343f10(uintptr_t); }
namespace main { uint64_t sub_1344400(uintptr_t); }
namespace main { void sub_1344400(); }
namespace main { void sub_13447b0(); }
namespace main { uint64_t sub_1345f20(uintptr_t); }
namespace main { void sub_ce0(); }
namespace main { uint64_t sub_134bb50(uintptr_t); }
namespace main { void sub_135c0c0(); }
namespace main { uint64_t sub_135c0c0(uintptr_t); }
namespace main { void sub_136d010(); }
namespace main { void sub_136f630(); }
namespace main { uint64_t sub_136f630(uintptr_t); }
namespace main { uint64_t sub_eaed70(uintptr_t); }
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
namespace main { uint64_t sub_139de00(uintptr_t); }
namespace main { void sub_13a32c0(); }
namespace main { uint64_t sub_13a1e10(uintptr_t); }
namespace main { void sub_13a1e10(); }
namespace main { uint64_t sub_13a2990(uintptr_t); }
namespace main { void sub_13a1bc0(); }
namespace main { void sub_d2a440(); }
namespace main { void sub_13a78f0(); }
namespace main { void sub_13a7aa0(); }
namespace main { uint64_t sub_13a78f0(uintptr_t); }
namespace main { void sub_13a8520(); }
namespace main { uint64_t sub_13a8520(uintptr_t); }
namespace main { void sub_d25c50(); }
namespace main { uint64_t sub_13b24e0(uintptr_t); }
namespace main { void sub_13cc110(); }
namespace main { uint64_t sub_13cc110(uintptr_t); }
namespace main { void LookAtWait_3(); }
namespace main { void LookAtWait_5(); }
namespace main { uint64_t sub_13ce680(uintptr_t); }
namespace main { void sub_13ce680(); }
namespace main { void sub_13ceb20(); }
namespace main { void sub_13cfcd0(); }
namespace main { uint64_t sub_13cfcd0(uintptr_t); }
namespace main { void sub_13d0c00(); }
namespace main { void sub_13d0d90(); }
namespace main { uint64_t sub_13d0c00(uintptr_t); }
namespace main { void sub_13d16f0(); }
namespace main { void sub_13d1880(); }
namespace main { uint64_t sub_13d16f0(uintptr_t); }
namespace main { void sub_13d2630(); }
namespace main { uint64_t sub_13d2630(uintptr_t); }
namespace main { void sub_13d3320(); }
namespace main { uint64_t sub_13d3320(uintptr_t); }
namespace main { uint64_t sub_13d3b80(uintptr_t); }
namespace main { uint64_t sub_13e3130(uintptr_t); }
namespace main { void sub_13e3130(); }
namespace main { void sub_13e32b0(); }
namespace main { void sub_13e3450(); }
namespace main { uint64_t sub_13e3ed0(uintptr_t); }
namespace main { uint64_t sub_13e4580(uintptr_t); }
namespace main { uint64_t sub_13e4940(uintptr_t); }
namespace main { void sub_13e6430(); }
namespace main { uint64_t sub_13f7910(uintptr_t); }
namespace main { void sub_13f7910(); }
namespace main { uint64_t sub_13fa750(uintptr_t); }
namespace main { uint64_t sub_13fbdc0(uintptr_t); }
namespace main { void sub_13fbdc0(); }
namespace main { uint64_t sub_13fc440(uintptr_t); }
namespace main { uint64_t sub_13fcd30(uintptr_t); }
namespace main { void sub_13fcd30(); }
namespace main { uint64_t sub_13fdc00(uintptr_t); }
namespace main { uint64_t sub_13fe530(uintptr_t); }
namespace main { void sub_13fe530(); }
namespace main { uint64_t sub_13fec60(uintptr_t); }
namespace main { uint64_t sub_13ff5d0(uintptr_t); }
namespace main { void sub_13ff5d0(); }
namespace main { uint64_t sub_14005f0(uintptr_t); }
namespace main { uint64_t sub_1400a60(uintptr_t); }
namespace main { void sub_1401050(); }
namespace main { uint64_t sub_1401050(uintptr_t); }
namespace main { uint64_t sub_1401180(uintptr_t); }
namespace main { void sub_14028b0(); }
namespace main { uint64_t sub_1402c20(uintptr_t); }
namespace main { void sub_1402c20(); }
namespace main { uint64_t sub_1402ff0(uintptr_t); }
namespace main { uint64_t sub_1404020(uintptr_t); }
namespace main { void sub_14058c0(); }
namespace main { uint64_t sub_1405260(uintptr_t); }
namespace main { void sub_1407030(); }
namespace main { uint64_t sub_1407030(uintptr_t); }
namespace main { void sub_140c1d0(); }
namespace main { uint64_t sub_140c1d0(uintptr_t); }
namespace main { void sub_140ce80(); }
namespace main { void sub_140ea50(); }
namespace main { uint64_t sub_140ea50(uintptr_t); }
namespace main { void sub_140ee50(); }
namespace main { void sub_140f090(); }
namespace main { uint64_t sub_140ee50(uintptr_t); }
namespace main { void sub_1412a50(); }
namespace main { uint64_t sub_1412300(uintptr_t); }
namespace main { void sub_e7c4c0(); }
namespace main { void sub_1413320(); }
namespace main { uint64_t sub_e7c4c0(uintptr_t); }
namespace main { void sub_14141c0(); }
namespace main { void sub_1414dc0(); }
namespace main { void sub_14158a0(); }
namespace main { void sub_1416a80(); }
namespace main { void sub_1417340(); }
namespace main { void sub_1417f00(); }
namespace main { void sub_1419560(); }
namespace main { uint64_t sub_1419560(uintptr_t); }
namespace main { void sub_1419ab0(); }
namespace main { void sub_141c270(); }
namespace main { void sub_141e920(); }
namespace main { void sub_141ea90(); }
namespace main { uint64_t sub_141e920(uintptr_t); }
namespace main { void sub_1420c40(); }
namespace main { void sub_1420e40(); }
namespace main { uint64_t sub_1420c40(uintptr_t); }
namespace main { void sub_1421c60(); }
namespace main { void sub_14221f0(); }
namespace main { uint64_t sub_14221f0(uintptr_t); }
namespace main { void sub_14232c0(); }
namespace main { void sub_1423c50(); }
namespace main { void sub_1425310(); }
namespace main { uint64_t sub_1425310(uintptr_t); }
namespace main { void sub_1425730(); }
namespace main { void sub_1425a50(); }
namespace main { uint64_t sub_1425730(uintptr_t); }
namespace main { void sub_e7feb0(); }
namespace main { void sub_14273a0(); }
namespace main { uint64_t sub_e7feb0(uintptr_t); }
namespace main { void sub_1427960(); }
namespace main { void sub_1428950(); }
namespace main { void sub_1428d30(); }
namespace main { void sub_14294d0(); }
namespace main { void sub_1429850(); }
namespace main { void sub_1429f10(); }
namespace main { uint64_t sub_142a310(uintptr_t); }
namespace main { void sub_142a310(); }
namespace main { uint64_t sub_142ab70(uintptr_t); }
namespace main { uint64_t sub_142bbb0(uintptr_t); }
namespace main { void sub_142bbb0(); }
namespace main { void sub_142c700(); }
namespace main { uint64_t sub_142d1d0(uintptr_t); }
namespace main { void sub_142f550(); }
namespace main { uint64_t sub_142f550(uintptr_t); }
namespace main { void sub_1433540(); }
namespace main { void sub_14314e0(); }
namespace main { uint64_t sub_1433540(uintptr_t); }
namespace main { void sub_14302c0(); }
namespace main { uint64_t sub_eb8c60(uintptr_t); }
namespace main { void sub_1430b90(); }
namespace main { void sub_1439930(); }
namespace main { uint64_t sub_1439930(uintptr_t); }
namespace main { void sub_143cee0(); }
namespace main { void sub_143daf0(); }
namespace main { void sub_1439d80(); }
namespace main { uint64_t sub_143daf0(uintptr_t); }
namespace main { void sub_143e7e0(); }
namespace main { uint64_t sub_143e7e0(uintptr_t); }
namespace main { void sub_143f560(); }
namespace main { void sub_143fcf0(); }
namespace main { uint64_t sub_143fcf0(uintptr_t); }
namespace main { void sub_1440750(); }
namespace main { void sub_1441d30(); }
namespace main { void sub_1443030(); }
namespace main { uint64_t sub_14bacd0(uintptr_t); }
namespace main { void sub_1449390(); }
namespace main { void sub_1449740(); }
namespace main { uint64_t sub_1449390(uintptr_t); }
namespace main { void sub_14ba4c0(); }
namespace main { void sub_144aae0(); }
namespace main { void sub_144be50(); }
namespace main { uint64_t sub_144be50(uintptr_t); }
namespace main { void sub_144c2d0(); }
namespace main { void sub_144cc50(); }
namespace main { void sub_144d650(); }
namespace main { uint64_t pane__s_7(uintptr_t); }
namespace main { void sub_144ea60(); }
namespace main { void sub_144f040(); }
namespace main { uint64_t sub_144f480(uintptr_t); }
namespace main { void sub_144f480(); }
namespace main { void sub_1454900(); }
namespace main { void sub_1456440(); }
namespace main { uint64_t sub_1456440(uintptr_t); }
namespace main { void sub_1456b90(); }
namespace main { uint64_t sub_1458130(uintptr_t); }
namespace main { void sub_1458480(); }
namespace main { uint64_t sub_1458480(uintptr_t); }
namespace main { uint64_t sub_1459ad0(uintptr_t); }
namespace main { uint64_t sub_1459f60(uintptr_t); }
namespace main { void sub_145ee10(); }
namespace main { void sub_145ef80(); }
namespace main { uint64_t sub_145ee10(uintptr_t); }
namespace main { void sub_145f440(); }
namespace main { void sub_145f930(); }
namespace main { void sub_145fdd0(); }
namespace main { uint64_t sub_145ec30(uintptr_t); }
namespace main { void sub_1457c40(); }
namespace main { void sub_1460b20(); }
namespace main { void sub_1461290(); }
namespace main { void sub_14669f0(); }
namespace main { uint64_t sub_14669f0(uintptr_t); }
namespace main { void sub_1466d60(); }
namespace main { void sub_1467080(); }
namespace main { uint64_t sub_1466d60(uintptr_t); }
namespace main { void sub_146c7b0(); }
namespace main { void sub_146db90(); }
namespace main { void sub_146e500(); }
namespace main { void sub_146f510(); }
namespace main { void sub_1470910(); }
namespace main { void sub_1471ed0(); }
namespace main { void sub_1472050(); }
namespace main { uint64_t sub_1471ed0(uintptr_t); }
namespace main { void sub_1472660(); }
namespace main { void sub_1473130(); }
namespace main { void sub_1473ba0(); }
namespace main { void sub_1474a30(); }
namespace main { uint64_t sub_1459dd0(uintptr_t); }
namespace main { void sub_1476890(); }
namespace main { void sub_1476b50(); }
namespace main { uint64_t sub_1476890(uintptr_t); }
namespace main { void sub_14770e0(); }
namespace main { void sub_14775a0(); }
namespace main { void sub_1477990(); }
namespace main { void sub_1478660(); }
namespace main { void sub_1478b40(); }
namespace main { void sub_1479510(); }
namespace main { void sub_1479c40(); }
namespace main { void sub_147a3c0(); }
namespace main { void sub_147a970(); }
namespace main { void sub_147b180(); }
namespace main { void sub_147b920(); }
namespace main { void sub_147ba90(); }
namespace main { uint64_t sub_147b920(uintptr_t); }
namespace main { void sub_147c110(); }
namespace main { void sub_147cc80(); }
namespace main { void sub_147d0c0(); }
namespace main { void sub_147d510(); }
namespace main { void sub_147dc40(); }
namespace main { void sub_147ddb0(); }
namespace main { uint64_t sub_147dc40(uintptr_t); }
namespace main { void sub_147e1e0(); }
namespace main { void sub_147e760(); }
namespace main { void sub_147f3b0(); }
namespace main { void sub_147ffc0(); }
namespace main { void sub_14804d0(); }
namespace main { void sub_14808a0(); }
namespace main { void sub_1480d40(); }
namespace main { void sub_1481120(); }
namespace main { void sub_1481500(); }
namespace main { void sub_14818e0(); }
namespace main { void sub_1482030(); }
namespace main { void sub_1483a40(); }
namespace main { uint64_t sub_1483a40(uintptr_t); }
namespace main { void sub_1484170(); }
namespace main { void sub_1484ad0(); }
namespace main { void sub_1485050(); }
namespace main { void sub_1485590(); }
namespace main { void sub_1485d90(); }
namespace main { void sub_1488f50(); }
namespace main { uint64_t sub_1488f50(uintptr_t); }
namespace main { void sub_1489610(); }
namespace main { void sub_148ded0(); }
namespace main { void sub_148e870(); }
namespace main { void sub_148f0c0(); }
namespace main { void sub_148f750(); }
namespace main { void sub_148fdb0(); }
namespace main { void sub_14908a0(); }
namespace main { uint64_t sub_136e8b0(uintptr_t); }
namespace main { void sub_1490d90(); }
namespace main { void sub_1491200(); }
namespace main { void sub_1491620(); }
namespace main { void sub_1491a70(); }
namespace main { uint64_t sub_14a45f0(uintptr_t); }
namespace main { void sub_1492150(); }
namespace main { void sub_1492840(); }
namespace main { void sub_1493090(); }
namespace main { void sub_14939e0(); }
namespace main { void sub_1494330(); }
namespace main { void sub_1494ae0(); }
namespace main { uint64_t sub_14a46c0(uintptr_t); }
namespace main { void sub_1494ed0(); }
namespace main { void sub_14956b0(); }
namespace main { void sub_1495d60(); }
namespace main { void sub_1496410(); }
namespace main { void sub_1496ac0(); }
namespace main { void sub_14974f0(); }
namespace main { void sub_1497ce0(); }
namespace main { void sub_1498a90(); }
namespace main { uint64_t sub_1498d90(uintptr_t); }
namespace main { void sub_149ad00(); }
namespace main { void sub_149b080(); }
namespace main { void sub_149e8a0(); }
namespace main { void sub_149edc0(); }
namespace main { uint64_t sub_149e8a0(uintptr_t); }
namespace main { void sub_149fe90(); }
namespace main { void sub_14a1b90(); }
namespace main { void sub_148fee0(); }
namespace main { uint64_t sub_14a1b90(uintptr_t); }
namespace main { void sub_14a53b0(); }
namespace main { void sub_1495000(); }
namespace main { uint64_t sub_14a53b0(uintptr_t); }
namespace main { void sub_14a6450(); }
namespace main { void sub_14a7d00(); }
namespace main { uint64_t sub_14a7fd0(uintptr_t); }
namespace main { uint64_t sub_6859b0(uintptr_t); }
namespace main { uint64_t sub_14aa880(uintptr_t); }
namespace main { void sub_14aa880(); }
namespace main { void sub_14b1d50(); }
namespace main { uint64_t sub_14b1d50(uintptr_t); }
namespace main { uint64_t sub_14ab080(uintptr_t); }
namespace main { uint64_t sub_14ab0c0(uintptr_t); }
namespace main { uint64_t sub_14ab200(uintptr_t); }
namespace main { uint64_t sub_14ab2b0(uintptr_t); }
namespace main { uint64_t sub_14ab380(uintptr_t); }
namespace main { uint64_t sub_14ab440(uintptr_t); }
namespace main { uint64_t sub_14ab9a0(uintptr_t); }
namespace main { void sub_14a7fd0(); }
namespace main { void sub_14b70f0(); }
namespace main { void sub_14b8030(); }
namespace main { void sub_14b8960(); }
namespace main { uint64_t sub_14b8960(uintptr_t); }
namespace main { void sub_14bdb50(); }
namespace main { uint64_t sub_14bdb50(uintptr_t); }
namespace main { uint64_t sub_14bf050(uintptr_t); }
namespace main { uint64_t sub_14bf300(uintptr_t); }
namespace main { uint64_t sub_14bf4a0(uintptr_t); }
namespace main { uint64_t sub_14bf760(uintptr_t); }
namespace main { uint64_t sub_14c51c0(uintptr_t); }
namespace main { uint64_t sub_14c5800(uintptr_t); }
namespace main { uint64_t sub_14c5a00(uintptr_t); }
namespace main { uint64_t sub_14c5c00(uintptr_t); }
namespace main { uint64_t sub_14c93f0(uintptr_t); }
namespace main { uint64_t sub_14c9750(uintptr_t); }
namespace main { uint64_t sub_14ccbd0(uintptr_t); }
namespace main { uint64_t sub_14cae70(uintptr_t); }
namespace main { uint64_t sub_14cc360(uintptr_t); }
namespace main { uint64_t sub_14cc4a0(uintptr_t); }
namespace main { uint64_t anime__s_7(uintptr_t); }
namespace main { uint64_t anime__s_11(uintptr_t); }
namespace main { uint64_t anime__s_8(uintptr_t); }
namespace main { void sub_14d39f0(); }
namespace main { void sub_14d4880(); }
namespace main { uint64_t sub_14d4fd0(uintptr_t); }
namespace main { void sub_14d4fd0(); }
namespace main { uint64_t sub_68f670(uintptr_t); }
namespace main { void sub_14d5290(); }
namespace main { uint64_t sub_142aa00(uintptr_t); }
namespace main { uint64_t sub_14da520(uintptr_t); }
namespace main { void sub_14da520(); }
namespace main { void sub_14dbb70(); }
namespace main { uint64_t sub_14dbb70(uintptr_t); }
namespace main { void sub_6726c0(); }
namespace main { uint64_t sub_6726c0(uintptr_t); }
namespace main { uint64_t sub_14dc330(uintptr_t); }
namespace main { uint64_t sub_14dd440(uintptr_t); }
namespace main { void sub_14e1f30(); }
namespace main { void sub_14e2aa0(); }
namespace main { uint64_t sub_14e2aa0(uintptr_t); }
namespace main { void sub_14e5370(); }
namespace main { uint64_t sub_14e5370(uintptr_t); }
namespace main { void sub_f0ce40(); }
namespace main { uint64_t sub_14e8030(uintptr_t); }
namespace main { void sub_14e8460(); }
namespace main { uint64_t sub_14e8460(uintptr_t); }
namespace main { void sub_14ec950(); }
namespace main { uint64_t sub_14ec950(uintptr_t); }
namespace main { uint64_t sub_14ed590(uintptr_t); }
namespace main { void sub_14ed590(); }
namespace main { uint64_t sub_14f7870(uintptr_t); }
namespace main { uint64_t sub_14f5920(uintptr_t); }
namespace main { uint64_t sub_14ef9c0(uintptr_t); }
namespace main { uint64_t sub_14efaf0(uintptr_t); }
namespace main { void sub_14f5220(); }
namespace main { void sub_14f90c0(); }
extern void main_f_14e6e00();
namespace main { void sub_14e6e10(); }
namespace main { void sub_1500210(); }
namespace main { uint64_t sub_1502be0(uintptr_t); }
namespace main { void sub_1502be0(); }
namespace main { void sub_1507000(); }
namespace main { void sub_1507db0(); }
namespace main { uint64_t sub_1507db0(uintptr_t); }
namespace main { void sub_1508360(); }
namespace main { void sub_1508500(); }
namespace main { uint64_t sub_1508360(uintptr_t); }
namespace main { void sub_150c500(); }
namespace main { void sub_150cd80(); }
namespace main { void sub_150d990(); }
namespace main { void sub_150e690(); }
namespace main { void sub_150f330(); }
namespace main { void sub_150fd80(); }
namespace main { void sub_1511810(); }
namespace main { uint64_t sub_1511810(uintptr_t); }
namespace main { void sub_1513650(); }
namespace main { void sub_15146d0(); }
namespace main { void sub_1516200(); }
namespace main { void sub_1516c70(); }
namespace main { void sub_1517590(); }
namespace main { void sub_1517e60(); }
namespace main { void sub_15185f0(); }
namespace main { void sub_151b530(); }
namespace main { uint64_t sub_1503210(uintptr_t); }
namespace main { uint64_t sub_151a410(uintptr_t); }
namespace main { void sub_15209c0(); }
namespace main { void sub_1520be0(); }
namespace main { uint64_t sub_15209c0(uintptr_t); }
namespace main { void sub_1527c70(); }
namespace main { void sub_1529770(); }
namespace main { void sub_152a320(); }
namespace main { void sub_152a880(); }
namespace main { void sub_152b010(); }
namespace main { void sub_152b540(); }
namespace main { void sub_152ee70(); }
namespace main { void sub_1530300(); }
namespace main { void sub_1530c30(); }
namespace main { void sub_1532a80(); }
namespace main { void sub_1532f90(); }
namespace main { void sub_1533550(); }
namespace main { void sub_1533b10(); }
namespace main { void sub_1533fc0(); }
namespace main { void sub_15346c0(); }
namespace main { void sub_1534be0(); }
namespace main { void sub_15354a0(); }
namespace main { void sub_15359a0(); }
namespace main { void sub_1536960(); }
namespace main { void sub_1537350(); }
namespace main { void sub_15378a0(); }
namespace main { void sub_1538420(); }
namespace main { void sub_15392f0(); }
namespace main { void sub_15399e0(); }
namespace main { uint64_t sub_1539d10(uintptr_t); }
namespace main { void sub_1539d10(); }
namespace main { void sub_153ad80(); }
namespace main { uint64_t sub_153bc90(uintptr_t); }
namespace main { void sub_153bc90(); }
namespace main { void sub_153dd60(); }
namespace main { void sub_153f430(); }
namespace main { void sub_15425a0(); }
namespace main { void sub_1542c50(); }
namespace main { void sub_1544450(); }
namespace main { void sub_1545350(); }
namespace main { void sub_1545da0(); }
namespace main { void sub_1546e70(); }
namespace main { void sub_15472f0(); }
namespace main { void sub_15476c0(); }
namespace main { void sub_1547cd0(); }
namespace main { void sub_15482e0(); }
namespace main { uint64_t sub_1552790(uintptr_t); }
namespace main { uint64_t InstanceTable_25(uintptr_t); }
namespace main { void InstanceTable_11(); }
namespace main { uint64_t sub_15734a0(uintptr_t); }
namespace main { uint64_t sub_1573aa0(uintptr_t); }
namespace main { void InstanceTable_14(); }
namespace main { uint64_t InstanceTable_14(uintptr_t); }
namespace main { void InstanceTable_15(); }
namespace main { uint64_t InstanceTable_15(uintptr_t); }
namespace main { uint64_t sub_162f760(uintptr_t); }
namespace main { uint64_t InstanceTable_18(uintptr_t); }
namespace main { uint64_t InstanceTable_21(uintptr_t); }
namespace main { uint64_t InstanceTable_22(uintptr_t); }
namespace main { uint64_t InstanceTable_23(uintptr_t); }
namespace main { uint64_t InstanceTable_24(uintptr_t); }
namespace main { uint64_t InstanceTable_29(uintptr_t); }
namespace main { uint64_t InstanceTable_30(uintptr_t); }
namespace main { uint64_t InstanceTable_32(uintptr_t); }
namespace main { uint64_t InstanceTable_33(uintptr_t); }
namespace main { uint64_t InstanceTable_36(uintptr_t); }
namespace main { uint64_t InstanceTable_37(uintptr_t); }
namespace main { uint64_t InstanceTable_38(uintptr_t); }
namespace main { uint64_t InstanceTable_39(uintptr_t); }
namespace main { uint64_t InstanceTable_40(uintptr_t); }
namespace main { uint64_t InstanceTable_41(uintptr_t); }
namespace main { uint64_t InstanceTable_42(uintptr_t); }
namespace main { uint64_t InstanceTable_43(uintptr_t); }
namespace main { uint64_t InstanceTable_52(uintptr_t); }
namespace main { uint64_t InstanceTable_53(uintptr_t); }
namespace main { uint64_t InstanceTable_54(uintptr_t); }
namespace main { uint64_t InstanceTable_61(uintptr_t); }
namespace main { uint64_t InstanceTable_62(uintptr_t); }
namespace main { uint64_t InstanceTable_63(uintptr_t); }
namespace main { uint64_t InstanceTable_64(uintptr_t); }
namespace main { uint64_t InstanceTable_66(uintptr_t); }
namespace main { uint64_t InstanceTable_67(uintptr_t); }
namespace main { uint64_t InstanceTable_68(uintptr_t); }
namespace main { uint64_t sub_157dd90(uintptr_t); }
namespace main { uint64_t InstanceTable_74(uintptr_t); }
namespace main { uint64_t InstanceTable_75(uintptr_t); }
namespace main { uint64_t sub_157f210(uintptr_t); }
namespace main { uint64_t InstanceTable_82(uintptr_t); }
namespace main { uint64_t InstanceTable_83(uintptr_t); }
namespace main { uint64_t InstanceTable_84(uintptr_t); }
namespace main { uint64_t sub_1580820(uintptr_t); }
namespace main { uint64_t InstanceTable_91(uintptr_t); }
namespace main { uint64_t InstanceTable_92(uintptr_t); }
namespace main { uint64_t InstanceTable_93(uintptr_t); }
namespace main { void sub_15b6e10(); }
namespace main { uint64_t sub_163ece0(uintptr_t); }
namespace main { uint64_t sub_163ecf0(uintptr_t); }
namespace main { uint64_t InstanceTable_386(uintptr_t); }
namespace main { uint64_t InstanceTable_149(uintptr_t); }
namespace main { uint64_t InstanceTable_150(uintptr_t); }
namespace main { uint64_t InstanceTable_151(uintptr_t); }
namespace main { uint64_t InstanceTable_157(uintptr_t); }
namespace main { uint64_t InstanceTable_160(uintptr_t); }
namespace main { uint64_t InstanceTable_163(uintptr_t); }
namespace main { uint64_t InstanceTable_164(uintptr_t); }
namespace main { uint64_t InstanceTable_165(uintptr_t); }
namespace main { uint64_t InstanceTable_167(uintptr_t); }
namespace main { uint64_t InstanceTable_171(uintptr_t); }
namespace main { uint64_t InstanceTable_174(uintptr_t); }
namespace main { uint64_t InstanceTable_176(uintptr_t); }
namespace main { uint64_t InstanceTable_178(uintptr_t); }
namespace main { uint64_t InstanceTable_180(uintptr_t); }
namespace main { uint64_t InstanceTable_182(uintptr_t); }
namespace main { uint64_t InstanceTable_183(uintptr_t); }
namespace main { uint64_t InstanceTable_184(uintptr_t); }
namespace main { uint64_t InstanceTable_185(uintptr_t); }
namespace main { uint64_t InstanceTable_186(uintptr_t); }
namespace main { uint64_t sub_15bab00(uintptr_t); }
namespace main { uint64_t InstanceTable_195(uintptr_t); }
namespace main { uint64_t InstanceTable_196(uintptr_t); }
namespace main { uint64_t InstanceTable_197(uintptr_t); }
namespace main { uint64_t InstanceTable_198(uintptr_t); }
namespace main { void sub_15c0b80(); }
namespace main { void sub_15c0c80(); }
namespace main { uint64_t sub_15becc0(uintptr_t); }
namespace main { void CallContext_2(); }
namespace main { void InstanceTable_214(); }
namespace main { void unnamed_69(); }
namespace main { uint64_t sub_15ccdf0(uintptr_t); }
namespace main { uint64_t sub_15e74b0(uintptr_t); }
namespace main { void InstanceTable_239(); }
namespace main { uint64_t sub_15d6e10(uintptr_t); }
namespace main { void sub_161e5f0(); }
namespace main { uint64_t sub_162a440(uintptr_t); }
namespace main { uint64_t sub_162a240(uintptr_t); }
namespace main { uint64_t Client_call_close(uintptr_t); }
namespace main { uint64_t sub_162a5a0(uintptr_t); }
namespace main { uint64_t sub_162a4f0(uintptr_t); }
namespace main { void sub_162cae0(); }
namespace main { void sub_15cac40(); }
extern void main_f_15bb240();

// sub_1333e00  (orig 0x1333e00, tailcall)
void main_f_1333e00() { main::sub_1333cb0(); }

// sub_1333e10  (orig 0x1333e10, tailcall)
void main_f_1333e10() { main::sub_1333e80(); }

// sub_1333e20  (orig 0x1333e20, tailcall)
uint64_t main_f_1333e20(void* a0) {
    return main::sub_1333cb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1333e30  (orig 0x1333e30, tailcall)
uint64_t main_f_1333e30(void* a0) {
    return main::sub_1333cb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1333e40  (orig 0x1333e40, tailcall)
void main_f_1333e40() { main::sub_1333e80(); }

// sub_1333e50  (orig 0x1333e50, tailcall)
void main_f_1333e50() { main::sub_1333e80(); }

// sub_1333e60  (orig 0x1333e60, tailcall)
uint64_t main_f_1333e60(void* a0) {
    return main::sub_1333cb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1333e70  (orig 0x1333e70, tailcall)
uint64_t main_f_1333e70(void* a0) {
    return main::sub_1333cb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1335190  (orig 0x1335190, tailcall)
uint64_t main_f_1335190(void* a0) {
    return main::sub_1334f80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13351a0  (orig 0x13351a0, tailcall)
uint64_t main_f_13351a0(void* a0) {
    return main::sub_1334f80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1337360  (orig 0x1337360, tailcall)
void main_f_1337360() { main::sub_1337220(); }

// sub_1337370  (orig 0x1337370, tailcall)
void main_f_1337370() { main::sub_13373e0(); }

// sub_1337380  (orig 0x1337380, tailcall)
uint64_t main_f_1337380(void* a0) {
    return main::sub_1337220(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1337390  (orig 0x1337390, tailcall)
uint64_t main_f_1337390(void* a0) {
    return main::sub_1337220(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13373a0  (orig 0x13373a0, tailcall)
void main_f_13373a0() { main::sub_13373e0(); }

// sub_13373b0  (orig 0x13373b0, tailcall)
void main_f_13373b0() { main::sub_13373e0(); }

// sub_13373c0  (orig 0x13373c0, tailcall)
uint64_t main_f_13373c0(void* a0) {
    return main::sub_1337220(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13373d0  (orig 0x13373d0, tailcall)
uint64_t main_f_13373d0(void* a0) {
    return main::sub_1337220(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13392a0  (orig 0x13392a0, tailcall)
void main_f_13392a0() { main::sub_1339120(); }

// sub_13392b0  (orig 0x13392b0, tailcall)
void main_f_13392b0() { main::sub_1339320(); }

// sub_13392c0  (orig 0x13392c0, tailcall)
uint64_t main_f_13392c0(void* a0) {
    return main::sub_1339120(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13392d0  (orig 0x13392d0, tailcall)
uint64_t main_f_13392d0(void* a0) {
    return main::sub_1339120(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13392e0  (orig 0x13392e0, tailcall)
void main_f_13392e0() { main::sub_1339320(); }

// sub_13392f0  (orig 0x13392f0, tailcall)
void main_f_13392f0() { main::sub_1339320(); }

// sub_1339300  (orig 0x1339300, tailcall)
uint64_t main_f_1339300(void* a0) {
    return main::sub_1339120(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1339310  (orig 0x1339310, tailcall)
uint64_t main_f_1339310(void* a0) {
    return main::sub_1339120(((uintptr_t)((char*)(a0) - 80)));
}

// sub_133c950  (orig 0x133c950, tailcall)
void main_f_133c950() { main::sub_133cb80(); }

// sub_133ca60  (orig 0x133ca60, tailcall)
void main_f_133ca60() { main::sub_133cb80(); }

// sub_133ca70  (orig 0x133ca70, tailcall)
void main_f_133ca70() { main::sub_133cb80(); }

// sub_133e0f0  (orig 0x133e0f0, tailcall)
void main_f_133e0f0() { main::sub_133def0(); }

// sub_133e1b0  (orig 0x133e1b0, tailcall)
uint64_t main_f_133e1b0(void* a0) {
    return main::sub_133def0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_133e1c0  (orig 0x133e1c0, tailcall)
uint64_t main_f_133e1c0(void* a0) {
    return main::sub_133def0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_133e330  (orig 0x133e330, tailcall)
uint64_t main_f_133e330(void* a0) {
    return main::sub_133def0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_133e340  (orig 0x133e340, tailcall)
uint64_t main_f_133e340(void* a0) {
    return main::sub_133def0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_133ec30  (orig 0x133ec30, tailcall)
void main_f_133ec30() { main::sub_e7c250(); }

// sub_133ec40  (orig 0x133ec40, tailcall)
void main_f_133ec40() { main::sub_133ecb0(); }

// sub_133ec50  (orig 0x133ec50, tailcall)
uint64_t main_f_133ec50(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_133ec60  (orig 0x133ec60, tailcall)
uint64_t main_f_133ec60(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_133ec70  (orig 0x133ec70, tailcall)
void main_f_133ec70() { main::sub_133ecb0(); }

// sub_133ec80  (orig 0x133ec80, tailcall)
void main_f_133ec80() { main::sub_133ecb0(); }

// sub_133ec90  (orig 0x133ec90, tailcall)
uint64_t main_f_133ec90(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_133eca0  (orig 0x133eca0, tailcall)
uint64_t main_f_133eca0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_133fce0  (orig 0x133fce0, tailcall)
void main_f_133fce0() { main::sub_133fe90(); }

// sub_133fdb0  (orig 0x133fdb0, tailcall)
void main_f_133fdb0() { main::sub_133fe90(); }

// sub_133fdc0  (orig 0x133fdc0, tailcall)
void main_f_133fdc0() { main::sub_133fe90(); }

// sub_1340760  (orig 0x1340760, tailcall)
void main_f_1340760() { main::sub_1340910(); }

// sub_1340830  (orig 0x1340830, tailcall)
void main_f_1340830() { main::sub_1340910(); }

// sub_1340840  (orig 0x1340840, tailcall)
void main_f_1340840() { main::sub_1340910(); }

// sub_1344030  (orig 0x1344030, tailcall)
void main_f_1344030() { main::sub_1343f10(); }

// sub_1344040  (orig 0x1344040, tailcall)
void main_f_1344040() { main::sub_133f290(); }

// sub_1344050  (orig 0x1344050, tailcall)
uint64_t main_f_1344050(void* a0) {
    return main::sub_1343f10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1344060  (orig 0x1344060, tailcall)
uint64_t main_f_1344060(void* a0) {
    return main::sub_1343f10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1344070  (orig 0x1344070, tailcall)
void main_f_1344070() { main::sub_133f290(); }

// sub_1344080  (orig 0x1344080, tailcall)
void main_f_1344080() { main::sub_133f290(); }

// sub_1344090  (orig 0x1344090, tailcall)
uint64_t main_f_1344090(void* a0) {
    return main::sub_1343f10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13440a0  (orig 0x13440a0, tailcall)
uint64_t main_f_13440a0(void* a0) {
    return main::sub_1343f10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13444f0  (orig 0x13444f0, tailcall)
uint64_t main_f_13444f0(void* a0) {
    return main::sub_1344400(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1344500  (orig 0x1344500, tailcall)
uint64_t main_f_1344500(void* a0) {
    return main::sub_1344400(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1344510  (orig 0x1344510, tailcall)
void main_f_1344510() { main::sub_1344400(); }

// sub_1344520  (orig 0x1344520, tailcall)
uint64_t main_f_1344520(void* a0) {
    return main::sub_1344400(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1344530  (orig 0x1344530, tailcall)
uint64_t main_f_1344530(void* a0) {
    return main::sub_1344400(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1344780  (orig 0x1344780, tailcall)
void main_f_1344780() { main::sub_13447b0(); }

// sub_1344790  (orig 0x1344790, tailcall)
void main_f_1344790() { main::sub_13447b0(); }

// sub_13447a0  (orig 0x13447a0, tailcall)
void main_f_13447a0() { main::sub_13447b0(); }

// sub_1346010  (orig 0x1346010, tailcall)
uint64_t main_f_1346010(void* a0) {
    return main::sub_1345f20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1346020  (orig 0x1346020, tailcall)
uint64_t main_f_1346020(void* a0) {
    return main::sub_1345f20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1346260  (orig 0x1346260, tailcall)
void main_f_1346260() { main::sub_ce0(); }

// sub_13462a0  (orig 0x13462a0, tailcall)
void main_f_13462a0() { main::sub_ce0(); }

// sub_1346760  (orig 0x1346760, tailcall)
void main_f_1346760() { main::sub_ce0(); }

// sub_1347ac0  (orig 0x1347ac0, tailcall)
void main_f_1347ac0() { main::sub_ce0(); }

// sub_134bb30  (orig 0x134bb30, tailcall)
uint64_t main_f_134bb30(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint32_t*)((char*)(a0) + 96) = -1;
    *(uint16_t*)((char*)(p0) + 116) = 0;
    *(uint64_t*)((char*)(p0) + 108) = 0;
    *(uint64_t*)((char*)(p0) + 100) = 0;
    return main::sub_134bb50(((uintptr_t)(a0)));
}

// sub_135c240  (orig 0x135c240, tailcall)
void main_f_135c240() { main::sub_135c0c0(); }

// sub_135c250  (orig 0x135c250, tailcall)
uint64_t main_f_135c250(void* a0) {
    return main::sub_135c0c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_135c260  (orig 0x135c260, tailcall)
uint64_t main_f_135c260(void* a0) {
    return main::sub_135c0c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_135c270  (orig 0x135c270, tailcall)
uint64_t main_f_135c270(void* a0) {
    return main::sub_135c0c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_135c280  (orig 0x135c280, tailcall)
uint64_t main_f_135c280(void* a0) {
    return main::sub_135c0c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_136d000  (orig 0x136d000, tailcall)
void main_f_136d000() { main::sub_136d010(); }

// sub_136f740  (orig 0x136f740, tailcall)
void main_f_136f740() { main::sub_136f630(); }

// sub_136f750  (orig 0x136f750, tailcall)
uint64_t main_f_136f750(void* a0) {
    return main::sub_136f630(((uintptr_t)((char*)(a0) - 72)));
}

// sub_136f760  (orig 0x136f760, tailcall)
uint64_t main_f_136f760(void* a0) {
    return main::sub_136f630(((uintptr_t)((char*)(a0) - 72)));
}

// sub_136f770  (orig 0x136f770, tailcall)
uint64_t main_f_136f770(void* a0) {
    return main::sub_136f630(((uintptr_t)((char*)(a0) - 80)));
}

// sub_136f780  (orig 0x136f780, tailcall)
uint64_t main_f_136f780(void* a0) {
    return main::sub_136f630(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1370970  (orig 0x1370970, tailcall)
uint64_t main_f_1370970(uint64_t a0) {
    return main::sub_eaed70(((uintptr_t)((((uint64_t)a0)) + (26672))));
}

// sub_1380220  (orig 0x1380220, tailcall)
void main_f_1380220() { main::sub_137fc80(); }

// sub_13825d0  (orig 0x13825d0, tailcall)
void main_f_13825d0() { main::sub_1390b90(); }

// sub_1382e40  (orig 0x1382e40, tailcall)
void main_f_1382e40() { main::sub_1376a70(); }

// sub_13836b0  (orig 0x13836b0, tailcall)
void main_f_13836b0() { main::sub_1387740(); }

// sub_1383f20  (orig 0x1383f20, tailcall)
void main_f_1383f20() { main::sub_138cba0(); }

// sub_1384790  (orig 0x1384790, tailcall)
void main_f_1384790() { main::sub_13925f0(); }

// sub_1385000  (orig 0x1385000, tailcall)
void main_f_1385000() { main::sub_1397ae0(); }

// sub_13855a0  (orig 0x13855a0, tailcall)
void main_f_13855a0() { main::sub_1397c60(); }

// sub_1385870  (orig 0x1385870, tailcall)
void main_f_1385870() { main_f_136d000(); }

// sub_13860e0  (orig 0x13860e0, tailcall)
void main_f_13860e0() { main::sub_138dbc0(); }

// sub_139a8f0  (orig 0x139a8f0, tailcall)
void main_f_139a8f0() { main::sub_ce0(); }

// sub_139a920  (orig 0x139a920, tailcall)
void main_f_139a920() { main::sub_ce0(); }

// sub_139c7f0  (orig 0x139c7f0, tailcall)
void main_f_139c7f0() { main::sub_ce0(); }

// sub_139c820  (orig 0x139c820, tailcall)
void main_f_139c820() { main::sub_ce0(); }

// sub_139cf50  (orig 0x139cf50, tailcall)
void main_f_139cf50() { main::sub_ce0(); }

// sub_139df90  (orig 0x139df90, tailcall)
uint64_t main_f_139df90(void* a0) {
    return main::sub_139de00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_139dfa0  (orig 0x139dfa0, tailcall)
uint64_t main_f_139dfa0(void* a0) {
    return main::sub_139de00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_139ff40  (orig 0x139ff40, tailcall)
void main_f_139ff40() { main::sub_ce0(); }

// sub_13a17f0  (orig 0x13a17f0, tailcall)
void main_f_13a17f0() { main::sub_13a32c0(); }

// sub_13a2010  (orig 0x13a2010, tailcall)
uint64_t main_f_13a2010(void* a0) {
    return main::sub_13a1e10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13a2020  (orig 0x13a2020, tailcall)
uint64_t main_f_13a2020(void* a0) {
    return main::sub_13a1e10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13a2030  (orig 0x13a2030, tailcall)
void main_f_13a2030() { main::sub_13a1e10(); }

// sub_13a2040  (orig 0x13a2040, tailcall)
uint64_t main_f_13a2040(void* a0) {
    return main::sub_13a1e10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13a2050  (orig 0x13a2050, tailcall)
uint64_t main_f_13a2050(void* a0) {
    return main::sub_13a1e10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13a2a80  (orig 0x13a2a80, tailcall)
uint64_t main_f_13a2a80(void* a0) {
    return main::sub_13a2990(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13a2a90  (orig 0x13a2a90, tailcall)
uint64_t main_f_13a2a90(void* a0) {
    return main::sub_13a2990(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13a3480  (orig 0x13a3480, tailcall)
void main_f_13a3480() { main::sub_13a1bc0(); }

// sub_13a3490  (orig 0x13a3490, tailcall)
void main_f_13a3490() { main::sub_13a1bc0(); }

// sub_13a34a0  (orig 0x13a34a0, tailcall)
void main_f_13a34a0() { main::sub_13a1bc0(); }

// sub_13a5880  (orig 0x13a5880, tailcall)
void main_f_13a5880() { main::sub_d2a440(); }

// sub_13a7a20  (orig 0x13a7a20, tailcall)
void main_f_13a7a20() { main::sub_13a78f0(); }

// sub_13a7a30  (orig 0x13a7a30, tailcall)
void main_f_13a7a30() { main::sub_13a7aa0(); }

// sub_13a7a40  (orig 0x13a7a40, tailcall)
uint64_t main_f_13a7a40(void* a0) {
    return main::sub_13a78f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13a7a50  (orig 0x13a7a50, tailcall)
uint64_t main_f_13a7a50(void* a0) {
    return main::sub_13a78f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13a7a60  (orig 0x13a7a60, tailcall)
void main_f_13a7a60() { main::sub_13a7aa0(); }

// sub_13a7a70  (orig 0x13a7a70, tailcall)
void main_f_13a7a70() { main::sub_13a7aa0(); }

// sub_13a7a80  (orig 0x13a7a80, tailcall)
uint64_t main_f_13a7a80(void* a0) {
    return main::sub_13a78f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13a7a90  (orig 0x13a7a90, tailcall)
uint64_t main_f_13a7a90(void* a0) {
    return main::sub_13a78f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13a8700  (orig 0x13a8700, tailcall)
void main_f_13a8700() { main::sub_13a8520(); }

// sub_13a8710  (orig 0x13a8710, tailcall)
uint64_t main_f_13a8710(void* a0) {
    return main::sub_13a8520(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13a8720  (orig 0x13a8720, tailcall)
uint64_t main_f_13a8720(void* a0) {
    return main::sub_13a8520(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13ad180  (orig 0x13ad180, tailcall)
void main_f_13ad180() { main::sub_d25c50(); }

// sub_13b1fe0  (orig 0x13b1fe0, tailcall)
void main_f_13b1fe0() { main::sub_ce0(); }

// sub_13b2060  (orig 0x13b2060, tailcall)
void main_f_13b2060() { main::sub_ce0(); }

// sub_13b2770  (orig 0x13b2770, tailcall)
uint64_t main_f_13b2770(void* a0) {
    return main::sub_13b24e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13b2780  (orig 0x13b2780, tailcall)
uint64_t main_f_13b2780(void* a0) {
    return main::sub_13b24e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13ca5b0  (orig 0x13ca5b0, tailcall)
void main_f_13ca5b0() { main::sub_ce0(); }

// sub_13ca630  (orig 0x13ca630, tailcall)
void main_f_13ca630() { main::sub_ce0(); }

// sub_13cc290  (orig 0x13cc290, tailcall)
void main_f_13cc290() { main::sub_13cc110(); }

// sub_13cc2a0  (orig 0x13cc2a0, tailcall)
uint64_t main_f_13cc2a0(void* a0) {
    return main::sub_13cc110(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13cc2b0  (orig 0x13cc2b0, tailcall)
uint64_t main_f_13cc2b0(void* a0) {
    return main::sub_13cc110(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13cd020  (orig 0x13cd020, tailcall)
void main_f_13cd020() { main::sub_ce0(); }

// sub_13cd0a0  (orig 0x13cd0a0, tailcall)
void main_f_13cd0a0() { main::sub_ce0(); }

// sub_13ce3d0  (orig 0x13ce3d0, tailcall)
void main_f_13ce3d0() { main::LookAtWait_3(); }

// sub_13ce3e0  (orig 0x13ce3e0, tailcall)
void main_f_13ce3e0() { main::LookAtWait_5(); }

// sub_13ce8a0  (orig 0x13ce8a0, tailcall)
uint64_t main_f_13ce8a0(void* a0) {
    return main::sub_13ce680(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13ce8b0  (orig 0x13ce8b0, tailcall)
uint64_t main_f_13ce8b0(void* a0) {
    return main::sub_13ce680(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13ce8c0  (orig 0x13ce8c0, tailcall)
void main_f_13ce8c0() { main::sub_13ce680(); }

// sub_13ce8d0  (orig 0x13ce8d0, tailcall)
uint64_t main_f_13ce8d0(void* a0) {
    return main::sub_13ce680(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13ce8e0  (orig 0x13ce8e0, tailcall)
uint64_t main_f_13ce8e0(void* a0) {
    return main::sub_13ce680(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13ceaf0  (orig 0x13ceaf0, tailcall)
void main_f_13ceaf0() { main::sub_13ceb20(); }

// sub_13ceb00  (orig 0x13ceb00, tailcall)
void main_f_13ceb00() { main::sub_13ceb20(); }

// sub_13ceb10  (orig 0x13ceb10, tailcall)
void main_f_13ceb10() { main::sub_13ceb20(); }

// sub_13cfe40  (orig 0x13cfe40, tailcall)
void main_f_13cfe40() { main::sub_13cfcd0(); }

// sub_13cfec0  (orig 0x13cfec0, tailcall)
uint64_t main_f_13cfec0(void* a0) {
    return main::sub_13cfcd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13cfed0  (orig 0x13cfed0, tailcall)
uint64_t main_f_13cfed0(void* a0) {
    return main::sub_13cfcd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13cffc0  (orig 0x13cffc0, tailcall)
uint64_t main_f_13cffc0(void* a0) {
    return main::sub_13cfcd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13cffd0  (orig 0x13cffd0, tailcall)
uint64_t main_f_13cffd0(void* a0) {
    return main::sub_13cfcd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13d0d10  (orig 0x13d0d10, tailcall)
void main_f_13d0d10() { main::sub_13d0c00(); }

// sub_13d0d20  (orig 0x13d0d20, tailcall)
void main_f_13d0d20() { main::sub_13d0d90(); }

// sub_13d0d30  (orig 0x13d0d30, tailcall)
uint64_t main_f_13d0d30(void* a0) {
    return main::sub_13d0c00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13d0d40  (orig 0x13d0d40, tailcall)
uint64_t main_f_13d0d40(void* a0) {
    return main::sub_13d0c00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13d0d50  (orig 0x13d0d50, tailcall)
void main_f_13d0d50() { main::sub_13d0d90(); }

// sub_13d0d60  (orig 0x13d0d60, tailcall)
void main_f_13d0d60() { main::sub_13d0d90(); }

// sub_13d0d70  (orig 0x13d0d70, tailcall)
uint64_t main_f_13d0d70(void* a0) {
    return main::sub_13d0c00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13d0d80  (orig 0x13d0d80, tailcall)
uint64_t main_f_13d0d80(void* a0) {
    return main::sub_13d0c00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13d1800  (orig 0x13d1800, tailcall)
void main_f_13d1800() { main::sub_13d16f0(); }

// sub_13d1810  (orig 0x13d1810, tailcall)
void main_f_13d1810() { main::sub_13d1880(); }

// sub_13d1820  (orig 0x13d1820, tailcall)
uint64_t main_f_13d1820(void* a0) {
    return main::sub_13d16f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13d1830  (orig 0x13d1830, tailcall)
uint64_t main_f_13d1830(void* a0) {
    return main::sub_13d16f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13d1840  (orig 0x13d1840, tailcall)
void main_f_13d1840() { main::sub_13d1880(); }

// sub_13d1850  (orig 0x13d1850, tailcall)
void main_f_13d1850() { main::sub_13d1880(); }

// sub_13d1860  (orig 0x13d1860, tailcall)
uint64_t main_f_13d1860(void* a0) {
    return main::sub_13d16f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13d1870  (orig 0x13d1870, tailcall)
uint64_t main_f_13d1870(void* a0) {
    return main::sub_13d16f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13d2740  (orig 0x13d2740, tailcall)
void main_f_13d2740() { main::sub_13d2630(); }

// sub_13d27c0  (orig 0x13d27c0, tailcall)
uint64_t main_f_13d27c0(void* a0) {
    return main::sub_13d2630(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13d27d0  (orig 0x13d27d0, tailcall)
uint64_t main_f_13d27d0(void* a0) {
    return main::sub_13d2630(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13d28c0  (orig 0x13d28c0, tailcall)
uint64_t main_f_13d28c0(void* a0) {
    return main::sub_13d2630(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13d28d0  (orig 0x13d28d0, tailcall)
uint64_t main_f_13d28d0(void* a0) {
    return main::sub_13d2630(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13d3430  (orig 0x13d3430, tailcall)
void main_f_13d3430() { main::sub_13d3320(); }

// sub_13d34b0  (orig 0x13d34b0, tailcall)
uint64_t main_f_13d34b0(void* a0) {
    return main::sub_13d3320(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13d34c0  (orig 0x13d34c0, tailcall)
uint64_t main_f_13d34c0(void* a0) {
    return main::sub_13d3320(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13d35b0  (orig 0x13d35b0, tailcall)
uint64_t main_f_13d35b0(void* a0) {
    return main::sub_13d3320(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13d35c0  (orig 0x13d35c0, tailcall)
uint64_t main_f_13d35c0(void* a0) {
    return main::sub_13d3320(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13d3e30  (orig 0x13d3e30, tailcall)
uint64_t main_f_13d3e30(void* a0) {
    return main::sub_13d3b80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13d3e40  (orig 0x13d3e40, tailcall)
uint64_t main_f_13d3e40(void* a0) {
    return main::sub_13d3b80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13e3260  (orig 0x13e3260, tailcall)
uint64_t main_f_13e3260(void* a0) {
    return main::sub_13e3130(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13e3270  (orig 0x13e3270, tailcall)
uint64_t main_f_13e3270(void* a0) {
    return main::sub_13e3130(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13e3280  (orig 0x13e3280, tailcall)
void main_f_13e3280() { main::sub_13e3130(); }

// sub_13e3290  (orig 0x13e3290, tailcall)
uint64_t main_f_13e3290(void* a0) {
    return main::sub_13e3130(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13e32a0  (orig 0x13e32a0, tailcall)
uint64_t main_f_13e32a0(void* a0) {
    return main::sub_13e3130(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13e35c0  (orig 0x13e35c0, tailcall)
void main_f_13e35c0() { main::sub_13e32b0(); }

// sub_13e35d0  (orig 0x13e35d0, tailcall)
void main_f_13e35d0() { main::sub_13e3450(); }

// sub_13e3fc0  (orig 0x13e3fc0, tailcall)
uint64_t main_f_13e3fc0(void* a0) {
    return main::sub_13e3ed0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13e3fd0  (orig 0x13e3fd0, tailcall)
uint64_t main_f_13e3fd0(void* a0) {
    return main::sub_13e3ed0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13e47b0  (orig 0x13e47b0, tailcall)
uint64_t main_f_13e47b0(void* a0) {
    return main::sub_13e4580(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13e47c0  (orig 0x13e47c0, tailcall)
uint64_t main_f_13e47c0(void* a0) {
    return main::sub_13e4580(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13e4a40  (orig 0x13e4a40, tailcall)
uint64_t main_f_13e4a40(void* a0) {
    return main::sub_13e4940(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13e4a50  (orig 0x13e4a50, tailcall)
uint64_t main_f_13e4a50(void* a0) {
    return main::sub_13e4940(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13e6080  (orig 0x13e6080, tailcall)
void main_f_13e6080() { main::sub_13e6430(); }

// sub_13e6250  (orig 0x13e6250, tailcall)
void main_f_13e6250() { main::sub_13e6430(); }

// sub_13e6260  (orig 0x13e6260, tailcall)
void main_f_13e6260() { main::sub_13e6430(); }

// sub_13ef5b0  (orig 0x13ef5b0, tailcall)
void main_f_13ef5b0() { main::sub_ce0(); }

// sub_13ef610  (orig 0x13ef610, tailcall)
void main_f_13ef610() { main::sub_ce0(); }

// sub_13f7d30  (orig 0x13f7d30, tailcall)
uint64_t main_f_13f7d30(void* a0) {
    return main::sub_13f7910(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13f7d40  (orig 0x13f7d40, tailcall)
uint64_t main_f_13f7d40(void* a0) {
    return main::sub_13f7910(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13f7d50  (orig 0x13f7d50, tailcall)
void main_f_13f7d50() { main::sub_13f7910(); }

// sub_13f7d60  (orig 0x13f7d60, tailcall)
uint64_t main_f_13f7d60(void* a0) {
    return main::sub_13f7910(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13f7d70  (orig 0x13f7d70, tailcall)
uint64_t main_f_13f7d70(void* a0) {
    return main::sub_13f7910(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13f7d80  (orig 0x13f7d80, tailcall)
void main_f_13f7d80() { main::sub_13a32c0(); }

// sub_13fa740  (orig 0x13fa740, tailcall)
uint64_t main_f_13fa740(void* a0) {
    return main::sub_13fa750(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1120))));
}

// sub_13fbf40  (orig 0x13fbf40, tailcall)
uint64_t main_f_13fbf40(void* a0) {
    return main::sub_13fbdc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13fbf50  (orig 0x13fbf50, tailcall)
uint64_t main_f_13fbf50(void* a0) {
    return main::sub_13fbdc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13fbf60  (orig 0x13fbf60, tailcall)
void main_f_13fbf60() { main::sub_13fbdc0(); }

// sub_13fbf70  (orig 0x13fbf70, tailcall)
uint64_t main_f_13fbf70(void* a0) {
    return main::sub_13fbdc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13fbf80  (orig 0x13fbf80, tailcall)
uint64_t main_f_13fbf80(void* a0) {
    return main::sub_13fbdc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13fc530  (orig 0x13fc530, tailcall)
uint64_t main_f_13fc530(void* a0) {
    return main::sub_13fc440(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13fc540  (orig 0x13fc540, tailcall)
uint64_t main_f_13fc540(void* a0) {
    return main::sub_13fc440(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13fcf20  (orig 0x13fcf20, tailcall)
uint64_t main_f_13fcf20(void* a0) {
    return main::sub_13fcd30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13fcf30  (orig 0x13fcf30, tailcall)
uint64_t main_f_13fcf30(void* a0) {
    return main::sub_13fcd30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13fcf40  (orig 0x13fcf40, tailcall)
void main_f_13fcf40() { main::sub_13fcd30(); }

// sub_13fcf50  (orig 0x13fcf50, tailcall)
uint64_t main_f_13fcf50(void* a0) {
    return main::sub_13fcd30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13fcf60  (orig 0x13fcf60, tailcall)
uint64_t main_f_13fcf60(void* a0) {
    return main::sub_13fcd30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13fdcf0  (orig 0x13fdcf0, tailcall)
uint64_t main_f_13fdcf0(void* a0) {
    return main::sub_13fdc00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13fdd00  (orig 0x13fdd00, tailcall)
uint64_t main_f_13fdd00(void* a0) {
    return main::sub_13fdc00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13fe6d0  (orig 0x13fe6d0, tailcall)
uint64_t main_f_13fe6d0(void* a0) {
    return main::sub_13fe530(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13fe6e0  (orig 0x13fe6e0, tailcall)
uint64_t main_f_13fe6e0(void* a0) {
    return main::sub_13fe530(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13fe6f0  (orig 0x13fe6f0, tailcall)
void main_f_13fe6f0() { main::sub_13fe530(); }

// sub_13fe700  (orig 0x13fe700, tailcall)
uint64_t main_f_13fe700(void* a0) {
    return main::sub_13fe530(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13fe710  (orig 0x13fe710, tailcall)
uint64_t main_f_13fe710(void* a0) {
    return main::sub_13fe530(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13fed50  (orig 0x13fed50, tailcall)
uint64_t main_f_13fed50(void* a0) {
    return main::sub_13fec60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13fed60  (orig 0x13fed60, tailcall)
uint64_t main_f_13fed60(void* a0) {
    return main::sub_13fec60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13ff270  (orig 0x13ff270, tailcall)
void main_f_13ff270() { main::sub_13a32c0(); }

// sub_13ff8e0  (orig 0x13ff8e0, tailcall)
uint64_t main_f_13ff8e0(void* a0) {
    return main::sub_13ff5d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13ff8f0  (orig 0x13ff8f0, tailcall)
uint64_t main_f_13ff8f0(void* a0) {
    return main::sub_13ff5d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_13ff900  (orig 0x13ff900, tailcall)
void main_f_13ff900() { main::sub_13ff5d0(); }

// sub_13ff910  (orig 0x13ff910, tailcall)
uint64_t main_f_13ff910(void* a0) {
    return main::sub_13ff5d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_13ff920  (orig 0x13ff920, tailcall)
uint64_t main_f_13ff920(void* a0) {
    return main::sub_13ff5d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14006e0  (orig 0x14006e0, tailcall)
uint64_t main_f_14006e0(void* a0) {
    return main::sub_14005f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14006f0  (orig 0x14006f0, tailcall)
uint64_t main_f_14006f0(void* a0) {
    return main::sub_14005f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1400c70  (orig 0x1400c70, tailcall)
uint64_t main_f_1400c70(void* a0) {
    return main::sub_1400a60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1400c80  (orig 0x1400c80, tailcall)
uint64_t main_f_1400c80(void* a0) {
    return main::sub_1400a60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1401170  (orig 0x1401170, tailcall)
void main_f_1401170() { main::sub_1401050(); }

// sub_1401270  (orig 0x1401270, tailcall)
uint64_t main_f_1401270(void* a0) {
    return main::sub_1401050(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1401280  (orig 0x1401280, tailcall)
uint64_t main_f_1401280(void* a0) {
    return main::sub_1401050(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1401290  (orig 0x1401290, tailcall)
uint64_t main_f_1401290(void* a0) {
    return main::sub_1401180(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14012a0  (orig 0x14012a0, tailcall)
uint64_t main_f_14012a0(void* a0) {
    return main::sub_1401180(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14012b0  (orig 0x14012b0, tailcall)
uint64_t main_f_14012b0(void* a0) {
    return main::sub_1401050(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14012c0  (orig 0x14012c0, tailcall)
uint64_t main_f_14012c0(void* a0) {
    return main::sub_1401050(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1402700  (orig 0x1402700, tailcall)
void main_f_1402700() { main::sub_14028b0(); }

// sub_14027d0  (orig 0x14027d0, tailcall)
void main_f_14027d0() { main::sub_14028b0(); }

// sub_14027e0  (orig 0x14027e0, tailcall)
void main_f_14027e0() { main::sub_14028b0(); }

// sub_1402db0  (orig 0x1402db0, tailcall)
uint64_t main_f_1402db0(void* a0) {
    return main::sub_1402c20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1402dc0  (orig 0x1402dc0, tailcall)
uint64_t main_f_1402dc0(void* a0) {
    return main::sub_1402c20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1402dd0  (orig 0x1402dd0, tailcall)
void main_f_1402dd0() { main::sub_1402c20(); }

// sub_1402de0  (orig 0x1402de0, tailcall)
uint64_t main_f_1402de0(void* a0) {
    return main::sub_1402c20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1402df0  (orig 0x1402df0, tailcall)
uint64_t main_f_1402df0(void* a0) {
    return main::sub_1402c20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14030e0  (orig 0x14030e0, tailcall)
uint64_t main_f_14030e0(void* a0) {
    return main::sub_1402ff0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14030f0  (orig 0x14030f0, tailcall)
uint64_t main_f_14030f0(void* a0) {
    return main::sub_1402ff0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1404290  (orig 0x1404290, tailcall)
uint64_t main_f_1404290(void* a0) {
    return main::sub_1404020(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14042a0  (orig 0x14042a0, tailcall)
uint64_t main_f_14042a0(void* a0) {
    return main::sub_1404020(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1405250  (orig 0x1405250, tailcall)
void main_f_1405250() { main::sub_14058c0(); }

// sub_14056f0  (orig 0x14056f0, tailcall)
void main_f_14056f0() { main::sub_14058c0(); }

// sub_1405700  (orig 0x1405700, tailcall)
uint64_t main_f_1405700(void* a0) {
    return main::sub_1405260(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1405710  (orig 0x1405710, tailcall)
void main_f_1405710() { main::sub_14058c0(); }

// sub_1407130  (orig 0x1407130, tailcall)
void main_f_1407130() { main::sub_1407030(); }

// sub_14071b0  (orig 0x14071b0, tailcall)
uint64_t main_f_14071b0(void* a0) {
    return main::sub_1407030(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14071c0  (orig 0x14071c0, tailcall)
uint64_t main_f_14071c0(void* a0) {
    return main::sub_1407030(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14072b0  (orig 0x14072b0, tailcall)
uint64_t main_f_14072b0(void* a0) {
    return main::sub_1407030(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14072c0  (orig 0x14072c0, tailcall)
uint64_t main_f_14072c0(void* a0) {
    return main::sub_1407030(((uintptr_t)((char*)(a0) - 80)));
}

// sub_140c390  (orig 0x140c390, tailcall)
void main_f_140c390() { main::sub_140c1d0(); }

// sub_140c3a0  (orig 0x140c3a0, tailcall)
uint64_t main_f_140c3a0(void* a0) {
    return main::sub_140c1d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_140c3b0  (orig 0x140c3b0, tailcall)
uint64_t main_f_140c3b0(void* a0) {
    return main::sub_140c1d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_140ce50  (orig 0x140ce50, tailcall)
void main_f_140ce50() { main::sub_140ce80(); }

// sub_140ce60  (orig 0x140ce60, tailcall)
void main_f_140ce60() { main::sub_140ce80(); }

// sub_140ce70  (orig 0x140ce70, tailcall)
void main_f_140ce70() { main::sub_140ce80(); }

// sub_140ebf0  (orig 0x140ebf0, tailcall)
void main_f_140ebf0() { main::sub_140ea50(); }

// sub_140ecb0  (orig 0x140ecb0, tailcall)
uint64_t main_f_140ecb0(void* a0) {
    return main::sub_140ea50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_140ecc0  (orig 0x140ecc0, tailcall)
uint64_t main_f_140ecc0(void* a0) {
    return main::sub_140ea50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_140ee30  (orig 0x140ee30, tailcall)
uint64_t main_f_140ee30(void* a0) {
    return main::sub_140ea50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_140ee40  (orig 0x140ee40, tailcall)
uint64_t main_f_140ee40(void* a0) {
    return main::sub_140ea50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_140ef20  (orig 0x140ef20, tailcall)
void main_f_140ef20() { main::sub_140ee50(); }

// sub_140ef30  (orig 0x140ef30, tailcall)
void main_f_140ef30() { main::sub_140f090(); }

// sub_140ef40  (orig 0x140ef40, tailcall)
uint64_t main_f_140ef40(void* a0) {
    return main::sub_140ee50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_140ef50  (orig 0x140ef50, tailcall)
uint64_t main_f_140ef50(void* a0) {
    return main::sub_140ee50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_140ef60  (orig 0x140ef60, tailcall)
void main_f_140ef60() { main::sub_140f090(); }

// sub_140ef70  (orig 0x140ef70, tailcall)
void main_f_140ef70() { main::sub_140f090(); }

// sub_140ef80  (orig 0x140ef80, tailcall)
uint64_t main_f_140ef80(void* a0) {
    return main::sub_140ee50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_140ef90  (orig 0x140ef90, tailcall)
uint64_t main_f_140ef90(void* a0) {
    return main::sub_140ee50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14125e0  (orig 0x14125e0, tailcall)
void main_f_14125e0() { main::sub_1412a50(); }

// sub_1412810  (orig 0x1412810, tailcall)
void main_f_1412810() { main::sub_1412a50(); }

// sub_1412820  (orig 0x1412820, tailcall)
void main_f_1412820() { main::sub_1412a50(); }

// sub_1413280  (orig 0x1413280, tailcall)
uint64_t main_f_1413280(void* a0) {
    return main::sub_1412300(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_14132a0  (orig 0x14132a0, tailcall)
void main_f_14132a0() { main::sub_e7c4c0(); }

// sub_14132b0  (orig 0x14132b0, tailcall)
void main_f_14132b0() { main::sub_1413320(); }

// sub_14132c0  (orig 0x14132c0, tailcall)
uint64_t main_f_14132c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14132d0  (orig 0x14132d0, tailcall)
uint64_t main_f_14132d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14132e0  (orig 0x14132e0, tailcall)
void main_f_14132e0() { main::sub_1413320(); }

// sub_14132f0  (orig 0x14132f0, tailcall)
void main_f_14132f0() { main::sub_1413320(); }

// sub_1413300  (orig 0x1413300, tailcall)
uint64_t main_f_1413300(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1413310  (orig 0x1413310, tailcall)
uint64_t main_f_1413310(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1414140  (orig 0x1414140, tailcall)
void main_f_1414140() { main::sub_e7c4c0(); }

// sub_1414150  (orig 0x1414150, tailcall)
void main_f_1414150() { main::sub_14141c0(); }

// sub_1414160  (orig 0x1414160, tailcall)
uint64_t main_f_1414160(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1414170  (orig 0x1414170, tailcall)
uint64_t main_f_1414170(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1414180  (orig 0x1414180, tailcall)
void main_f_1414180() { main::sub_14141c0(); }

// sub_1414190  (orig 0x1414190, tailcall)
void main_f_1414190() { main::sub_14141c0(); }

// sub_14141a0  (orig 0x14141a0, tailcall)
uint64_t main_f_14141a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14141b0  (orig 0x14141b0, tailcall)
uint64_t main_f_14141b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1414d40  (orig 0x1414d40, tailcall)
void main_f_1414d40() { main::sub_e7c4c0(); }

// sub_1414d50  (orig 0x1414d50, tailcall)
void main_f_1414d50() { main::sub_1414dc0(); }

// sub_1414d60  (orig 0x1414d60, tailcall)
uint64_t main_f_1414d60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1414d70  (orig 0x1414d70, tailcall)
uint64_t main_f_1414d70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1414d80  (orig 0x1414d80, tailcall)
void main_f_1414d80() { main::sub_1414dc0(); }

// sub_1414d90  (orig 0x1414d90, tailcall)
void main_f_1414d90() { main::sub_1414dc0(); }

// sub_1414da0  (orig 0x1414da0, tailcall)
uint64_t main_f_1414da0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1414db0  (orig 0x1414db0, tailcall)
uint64_t main_f_1414db0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1415820  (orig 0x1415820, tailcall)
void main_f_1415820() { main::sub_e7c4c0(); }

// sub_1415830  (orig 0x1415830, tailcall)
void main_f_1415830() { main::sub_14158a0(); }

// sub_1415840  (orig 0x1415840, tailcall)
uint64_t main_f_1415840(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1415850  (orig 0x1415850, tailcall)
uint64_t main_f_1415850(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1415860  (orig 0x1415860, tailcall)
void main_f_1415860() { main::sub_14158a0(); }

// sub_1415870  (orig 0x1415870, tailcall)
void main_f_1415870() { main::sub_14158a0(); }

// sub_1415880  (orig 0x1415880, tailcall)
uint64_t main_f_1415880(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1415890  (orig 0x1415890, tailcall)
uint64_t main_f_1415890(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14168b0  (orig 0x14168b0, tailcall)
uint64_t main_f_14168b0(void* a0) {
    return main::sub_1412300(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1416a00  (orig 0x1416a00, tailcall)
void main_f_1416a00() { main::sub_e7c4c0(); }

// sub_1416a10  (orig 0x1416a10, tailcall)
void main_f_1416a10() { main::sub_1416a80(); }

// sub_1416a20  (orig 0x1416a20, tailcall)
uint64_t main_f_1416a20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1416a30  (orig 0x1416a30, tailcall)
uint64_t main_f_1416a30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1416a40  (orig 0x1416a40, tailcall)
void main_f_1416a40() { main::sub_1416a80(); }

// sub_1416a50  (orig 0x1416a50, tailcall)
void main_f_1416a50() { main::sub_1416a80(); }

// sub_1416a60  (orig 0x1416a60, tailcall)
uint64_t main_f_1416a60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1416a70  (orig 0x1416a70, tailcall)
uint64_t main_f_1416a70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14172c0  (orig 0x14172c0, tailcall)
void main_f_14172c0() { main::sub_e7c4c0(); }

// sub_14172d0  (orig 0x14172d0, tailcall)
void main_f_14172d0() { main::sub_1417340(); }

// sub_14172e0  (orig 0x14172e0, tailcall)
uint64_t main_f_14172e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14172f0  (orig 0x14172f0, tailcall)
uint64_t main_f_14172f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1417300  (orig 0x1417300, tailcall)
void main_f_1417300() { main::sub_1417340(); }

// sub_1417310  (orig 0x1417310, tailcall)
void main_f_1417310() { main::sub_1417340(); }

// sub_1417320  (orig 0x1417320, tailcall)
uint64_t main_f_1417320(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1417330  (orig 0x1417330, tailcall)
uint64_t main_f_1417330(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1417ed0  (orig 0x1417ed0, tailcall)
void main_f_1417ed0() { main::sub_1417f00(); }

// sub_1417ee0  (orig 0x1417ee0, tailcall)
void main_f_1417ee0() { main::sub_1417f00(); }

// sub_1417ef0  (orig 0x1417ef0, tailcall)
void main_f_1417ef0() { main::sub_1417f00(); }

// sub_14197d0  (orig 0x14197d0, tailcall)
void main_f_14197d0() { main::sub_1419560(); }

// sub_1419890  (orig 0x1419890, tailcall)
uint64_t main_f_1419890(void* a0) {
    return main::sub_1419560(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14198a0  (orig 0x14198a0, tailcall)
uint64_t main_f_14198a0(void* a0) {
    return main::sub_1419560(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1419a10  (orig 0x1419a10, tailcall)
uint64_t main_f_1419a10(void* a0) {
    return main::sub_1419560(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1419a20  (orig 0x1419a20, tailcall)
uint64_t main_f_1419a20(void* a0) {
    return main::sub_1419560(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1419a30  (orig 0x1419a30, tailcall)
void main_f_1419a30() { main::sub_e7c250(); }

// sub_1419a40  (orig 0x1419a40, tailcall)
void main_f_1419a40() { main::sub_1419ab0(); }

// sub_1419a50  (orig 0x1419a50, tailcall)
uint64_t main_f_1419a50(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1419a60  (orig 0x1419a60, tailcall)
uint64_t main_f_1419a60(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1419a70  (orig 0x1419a70, tailcall)
void main_f_1419a70() { main::sub_1419ab0(); }

// sub_1419a80  (orig 0x1419a80, tailcall)
void main_f_1419a80() { main::sub_1419ab0(); }

// sub_1419a90  (orig 0x1419a90, tailcall)
uint64_t main_f_1419a90(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1419aa0  (orig 0x1419aa0, tailcall)
uint64_t main_f_1419aa0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_141bfc0  (orig 0x141bfc0, tailcall)
void main_f_141bfc0() { main::sub_141c270(); }

// sub_141c110  (orig 0x141c110, tailcall)
void main_f_141c110() { main::sub_141c270(); }

// sub_141c120  (orig 0x141c120, tailcall)
void main_f_141c120() { main::sub_141c270(); }

// sub_141ea10  (orig 0x141ea10, tailcall)
void main_f_141ea10() { main::sub_141e920(); }

// sub_141ea20  (orig 0x141ea20, tailcall)
void main_f_141ea20() { main::sub_141ea90(); }

// sub_141ea30  (orig 0x141ea30, tailcall)
uint64_t main_f_141ea30(void* a0) {
    return main::sub_141e920(((uintptr_t)((char*)(a0) - 72)));
}

// sub_141ea40  (orig 0x141ea40, tailcall)
uint64_t main_f_141ea40(void* a0) {
    return main::sub_141e920(((uintptr_t)((char*)(a0) - 72)));
}

// sub_141ea50  (orig 0x141ea50, tailcall)
void main_f_141ea50() { main::sub_141ea90(); }

// sub_141ea60  (orig 0x141ea60, tailcall)
void main_f_141ea60() { main::sub_141ea90(); }

// sub_141ea70  (orig 0x141ea70, tailcall)
uint64_t main_f_141ea70(void* a0) {
    return main::sub_141e920(((uintptr_t)((char*)(a0) - 80)));
}

// sub_141ea80  (orig 0x141ea80, tailcall)
uint64_t main_f_141ea80(void* a0) {
    return main::sub_141e920(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1420dc0  (orig 0x1420dc0, tailcall)
void main_f_1420dc0() { main::sub_1420c40(); }

// sub_1420dd0  (orig 0x1420dd0, tailcall)
void main_f_1420dd0() { main::sub_1420e40(); }

// sub_1420de0  (orig 0x1420de0, tailcall)
uint64_t main_f_1420de0(void* a0) {
    return main::sub_1420c40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1420df0  (orig 0x1420df0, tailcall)
uint64_t main_f_1420df0(void* a0) {
    return main::sub_1420c40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1420e00  (orig 0x1420e00, tailcall)
void main_f_1420e00() { main::sub_1420e40(); }

// sub_1420e10  (orig 0x1420e10, tailcall)
void main_f_1420e10() { main::sub_1420e40(); }

// sub_1420e20  (orig 0x1420e20, tailcall)
uint64_t main_f_1420e20(void* a0) {
    return main::sub_1420c40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1420e30  (orig 0x1420e30, tailcall)
uint64_t main_f_1420e30(void* a0) {
    return main::sub_1420c40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1421c30  (orig 0x1421c30, tailcall)
void main_f_1421c30() { main::sub_1421c60(); }

// sub_1421c40  (orig 0x1421c40, tailcall)
void main_f_1421c40() { main::sub_1421c60(); }

// sub_1421c50  (orig 0x1421c50, tailcall)
void main_f_1421c50() { main::sub_1421c60(); }

// sub_1422390  (orig 0x1422390, tailcall)
void main_f_1422390() { main::sub_14221f0(); }

// sub_1422450  (orig 0x1422450, tailcall)
uint64_t main_f_1422450(void* a0) {
    return main::sub_14221f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1422460  (orig 0x1422460, tailcall)
uint64_t main_f_1422460(void* a0) {
    return main::sub_14221f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14225d0  (orig 0x14225d0, tailcall)
uint64_t main_f_14225d0(void* a0) {
    return main::sub_14221f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14225e0  (orig 0x14225e0, tailcall)
uint64_t main_f_14225e0(void* a0) {
    return main::sub_14221f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1423110  (orig 0x1423110, tailcall)
void main_f_1423110() { main::sub_14232c0(); }

// sub_14231e0  (orig 0x14231e0, tailcall)
void main_f_14231e0() { main::sub_14232c0(); }

// sub_14231f0  (orig 0x14231f0, tailcall)
void main_f_14231f0() { main::sub_14232c0(); }

// sub_1423c20  (orig 0x1423c20, tailcall)
void main_f_1423c20() { main::sub_1423c50(); }

// sub_1423c30  (orig 0x1423c30, tailcall)
void main_f_1423c30() { main::sub_1423c50(); }

// sub_1423c40  (orig 0x1423c40, tailcall)
void main_f_1423c40() { main::sub_1423c50(); }

// sub_14254d0  (orig 0x14254d0, tailcall)
void main_f_14254d0() { main::sub_1425310(); }

// sub_1425590  (orig 0x1425590, tailcall)
uint64_t main_f_1425590(void* a0) {
    return main::sub_1425310(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14255a0  (orig 0x14255a0, tailcall)
uint64_t main_f_14255a0(void* a0) {
    return main::sub_1425310(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1425710  (orig 0x1425710, tailcall)
uint64_t main_f_1425710(void* a0) {
    return main::sub_1425310(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1425720  (orig 0x1425720, tailcall)
uint64_t main_f_1425720(void* a0) {
    return main::sub_1425310(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1425980  (orig 0x1425980, tailcall)
void main_f_1425980() { main::sub_1425730(); }

// sub_1425990  (orig 0x1425990, tailcall)
void main_f_1425990() { main::sub_1425a50(); }

// sub_14259a0  (orig 0x14259a0, tailcall)
uint64_t main_f_14259a0(void* a0) {
    return main::sub_1425730(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14259b0  (orig 0x14259b0, tailcall)
uint64_t main_f_14259b0(void* a0) {
    return main::sub_1425730(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14259c0  (orig 0x14259c0, tailcall)
void main_f_14259c0() { main::sub_1425a50(); }

// sub_14259d0  (orig 0x14259d0, tailcall)
void main_f_14259d0() { main::sub_1425a50(); }

// sub_14259e0  (orig 0x14259e0, tailcall)
uint64_t main_f_14259e0(void* a0) {
    return main::sub_1425730(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14259f0  (orig 0x14259f0, tailcall)
uint64_t main_f_14259f0(void* a0) {
    return main::sub_1425730(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1427320  (orig 0x1427320, tailcall)
void main_f_1427320() { main::sub_e7feb0(); }

// sub_1427330  (orig 0x1427330, tailcall)
void main_f_1427330() { main::sub_14273a0(); }

// sub_1427340  (orig 0x1427340, tailcall)
uint64_t main_f_1427340(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1427350  (orig 0x1427350, tailcall)
uint64_t main_f_1427350(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1427360  (orig 0x1427360, tailcall)
void main_f_1427360() { main::sub_14273a0(); }

// sub_1427370  (orig 0x1427370, tailcall)
void main_f_1427370() { main::sub_14273a0(); }

// sub_1427380  (orig 0x1427380, tailcall)
uint64_t main_f_1427380(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1427390  (orig 0x1427390, tailcall)
uint64_t main_f_1427390(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14278e0  (orig 0x14278e0, tailcall)
void main_f_14278e0() { main::sub_e7feb0(); }

// sub_14278f0  (orig 0x14278f0, tailcall)
void main_f_14278f0() { main::sub_1427960(); }

// sub_1427900  (orig 0x1427900, tailcall)
uint64_t main_f_1427900(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1427910  (orig 0x1427910, tailcall)
uint64_t main_f_1427910(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1427920  (orig 0x1427920, tailcall)
void main_f_1427920() { main::sub_1427960(); }

// sub_1427930  (orig 0x1427930, tailcall)
void main_f_1427930() { main::sub_1427960(); }

// sub_1427940  (orig 0x1427940, tailcall)
uint64_t main_f_1427940(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1427950  (orig 0x1427950, tailcall)
uint64_t main_f_1427950(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1428760  (orig 0x1428760, tailcall)
void main_f_1428760() { main::sub_1428950(); }

// sub_1428850  (orig 0x1428850, tailcall)
void main_f_1428850() { main::sub_1428950(); }

// sub_1428860  (orig 0x1428860, tailcall)
void main_f_1428860() { main::sub_1428950(); }

// sub_1428cb0  (orig 0x1428cb0, tailcall)
void main_f_1428cb0() { main::sub_e7c4c0(); }

// sub_1428cc0  (orig 0x1428cc0, tailcall)
void main_f_1428cc0() { main::sub_1428d30(); }

// sub_1428cd0  (orig 0x1428cd0, tailcall)
uint64_t main_f_1428cd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1428ce0  (orig 0x1428ce0, tailcall)
uint64_t main_f_1428ce0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1428cf0  (orig 0x1428cf0, tailcall)
void main_f_1428cf0() { main::sub_1428d30(); }

// sub_1428d00  (orig 0x1428d00, tailcall)
void main_f_1428d00() { main::sub_1428d30(); }

// sub_1428d10  (orig 0x1428d10, tailcall)
uint64_t main_f_1428d10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1428d20  (orig 0x1428d20, tailcall)
uint64_t main_f_1428d20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1429450  (orig 0x1429450, tailcall)
void main_f_1429450() { main::sub_e7c4c0(); }

// sub_1429460  (orig 0x1429460, tailcall)
void main_f_1429460() { main::sub_14294d0(); }

// sub_1429470  (orig 0x1429470, tailcall)
uint64_t main_f_1429470(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1429480  (orig 0x1429480, tailcall)
uint64_t main_f_1429480(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1429490  (orig 0x1429490, tailcall)
void main_f_1429490() { main::sub_14294d0(); }

// sub_14294a0  (orig 0x14294a0, tailcall)
void main_f_14294a0() { main::sub_14294d0(); }

// sub_14294b0  (orig 0x14294b0, tailcall)
uint64_t main_f_14294b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14294c0  (orig 0x14294c0, tailcall)
uint64_t main_f_14294c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14297d0  (orig 0x14297d0, tailcall)
void main_f_14297d0() { main::sub_e7c4c0(); }

// sub_14297e0  (orig 0x14297e0, tailcall)
void main_f_14297e0() { main::sub_1429850(); }

// sub_14297f0  (orig 0x14297f0, tailcall)
uint64_t main_f_14297f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1429800  (orig 0x1429800, tailcall)
uint64_t main_f_1429800(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1429810  (orig 0x1429810, tailcall)
void main_f_1429810() { main::sub_1429850(); }

// sub_1429820  (orig 0x1429820, tailcall)
void main_f_1429820() { main::sub_1429850(); }

// sub_1429830  (orig 0x1429830, tailcall)
uint64_t main_f_1429830(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1429840  (orig 0x1429840, tailcall)
uint64_t main_f_1429840(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1429d60  (orig 0x1429d60, tailcall)
void main_f_1429d60() { main::sub_1429f10(); }

// sub_1429e30  (orig 0x1429e30, tailcall)
void main_f_1429e30() { main::sub_1429f10(); }

// sub_1429e40  (orig 0x1429e40, tailcall)
void main_f_1429e40() { main::sub_1429f10(); }

// sub_142a430  (orig 0x142a430, tailcall)
uint64_t main_f_142a430(void* a0) {
    return main::sub_142a310(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142a440  (orig 0x142a440, tailcall)
uint64_t main_f_142a440(void* a0) {
    return main::sub_142a310(((uintptr_t)((char*)(a0) - 80)));
}

// sub_142a450  (orig 0x142a450, tailcall)
void main_f_142a450() { main::sub_142a310(); }

// sub_142a460  (orig 0x142a460, tailcall)
uint64_t main_f_142a460(void* a0) {
    return main::sub_142a310(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142a470  (orig 0x142a470, tailcall)
uint64_t main_f_142a470(void* a0) {
    return main::sub_142a310(((uintptr_t)((char*)(a0) - 80)));
}

// sub_142ac60  (orig 0x142ac60, tailcall)
uint64_t main_f_142ac60(void* a0) {
    return main::sub_142ab70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142ac70  (orig 0x142ac70, tailcall)
uint64_t main_f_142ac70(void* a0) {
    return main::sub_142ab70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_142bcb0  (orig 0x142bcb0, tailcall)
uint64_t main_f_142bcb0(void* a0) {
    return main::sub_142bbb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142bcc0  (orig 0x142bcc0, tailcall)
uint64_t main_f_142bcc0(void* a0) {
    return main::sub_142bbb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_142bcd0  (orig 0x142bcd0, tailcall)
void main_f_142bcd0() { main::sub_142bbb0(); }

// sub_142bce0  (orig 0x142bce0, tailcall)
uint64_t main_f_142bce0(void* a0) {
    return main::sub_142bbb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142bcf0  (orig 0x142bcf0, tailcall)
uint64_t main_f_142bcf0(void* a0) {
    return main::sub_142bbb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_142c6d0  (orig 0x142c6d0, tailcall)
void main_f_142c6d0() { main::sub_142c700(); }

// sub_142c6e0  (orig 0x142c6e0, tailcall)
void main_f_142c6e0() { main::sub_142c700(); }

// sub_142c6f0  (orig 0x142c6f0, tailcall)
void main_f_142c6f0() { main::sub_142c700(); }

// sub_142d360  (orig 0x142d360, tailcall)
uint64_t main_f_142d360(void* a0) {
    return main::sub_142d1d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142d370  (orig 0x142d370, tailcall)
uint64_t main_f_142d370(void* a0) {
    return main::sub_142d1d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_142f2f0  (orig 0x142f2f0, tailcall)
void main_f_142f2f0() { main::sub_142f550(); }

// sub_142f3b0  (orig 0x142f3b0, tailcall)
uint64_t main_f_142f3b0(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142f3c0  (orig 0x142f3c0, tailcall)
uint64_t main_f_142f3c0(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142f530  (orig 0x142f530, tailcall)
uint64_t main_f_142f530(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_142f540  (orig 0x142f540, tailcall)
uint64_t main_f_142f540(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_142f6f0  (orig 0x142f6f0, tailcall)
void main_f_142f6f0() { main::sub_142f550(); }

// sub_142f770  (orig 0x142f770, tailcall)
uint64_t main_f_142f770(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142f780  (orig 0x142f780, tailcall)
uint64_t main_f_142f780(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142f970  (orig 0x142f970, tailcall)
uint64_t main_f_142f970(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_142f980  (orig 0x142f980, tailcall)
uint64_t main_f_142f980(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_142f990  (orig 0x142f990, tailcall)
void main_f_142f990() { main::sub_142f550(); }

// sub_142fa10  (orig 0x142fa10, tailcall)
uint64_t main_f_142fa10(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142fa20  (orig 0x142fa20, tailcall)
uint64_t main_f_142fa20(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_142fc10  (orig 0x142fc10, tailcall)
uint64_t main_f_142fc10(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_142fc20  (orig 0x142fc20, tailcall)
uint64_t main_f_142fc20(void* a0) {
    return main::sub_142f550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1433680  (orig 0x1433680, tailcall)
void main_f_1433680() { main::sub_1433540(); }

// sub_1433690  (orig 0x1433690, tailcall)
void main_f_1433690() { main::sub_14314e0(); }

// sub_14336a0  (orig 0x14336a0, tailcall)
uint64_t main_f_14336a0(void* a0) {
    return main::sub_1433540(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14336b0  (orig 0x14336b0, tailcall)
uint64_t main_f_14336b0(void* a0) {
    return main::sub_1433540(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14336c0  (orig 0x14336c0, tailcall)
void main_f_14336c0() { main::sub_14314e0(); }

// sub_14336d0  (orig 0x14336d0, tailcall)
void main_f_14336d0() { main::sub_14314e0(); }

// sub_14336e0  (orig 0x14336e0, tailcall)
uint64_t main_f_14336e0(void* a0) {
    return main::sub_1433540(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14336f0  (orig 0x14336f0, tailcall)
uint64_t main_f_14336f0(void* a0) {
    return main::sub_1433540(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1434b30  (orig 0x1434b30, tailcall)
void main_f_1434b30() { main::sub_14302c0(); }

// sub_1434ce0  (orig 0x1434ce0, tailcall)
void main_f_1434ce0() { main::sub_14302c0(); }

// sub_1434cf0  (orig 0x1434cf0, tailcall)
void main_f_1434cf0() { main::sub_14302c0(); }

// sub_14357a0  (orig 0x14357a0, tailcall)
uint64_t main_f_14357a0(void* a0) {
    return main::sub_eb8c60(((uintptr_t)(*(uint64_t*)((char*)(a0) + 136))));
}

// sub_1435830  (orig 0x1435830, tailcall)
void main_f_1435830() { main::sub_e7c4c0(); }

// sub_14358b0  (orig 0x14358b0, tailcall)
uint64_t main_f_14358b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14358c0  (orig 0x14358c0, tailcall)
uint64_t main_f_14358c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14359b0  (orig 0x14359b0, tailcall)
uint64_t main_f_14359b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14359c0  (orig 0x14359c0, tailcall)
uint64_t main_f_14359c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1435ed0  (orig 0x1435ed0, tailcall)
void main_f_1435ed0() { main::sub_e7c4c0(); }

// sub_1435ee0  (orig 0x1435ee0, tailcall)
void main_f_1435ee0() { main::sub_1430b90(); }

// sub_1435ef0  (orig 0x1435ef0, tailcall)
uint64_t main_f_1435ef0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1435f00  (orig 0x1435f00, tailcall)
uint64_t main_f_1435f00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1435f10  (orig 0x1435f10, tailcall)
void main_f_1435f10() { main::sub_1430b90(); }

// sub_1435f20  (orig 0x1435f20, tailcall)
void main_f_1435f20() { main::sub_1430b90(); }

// sub_1435f30  (orig 0x1435f30, tailcall)
uint64_t main_f_1435f30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1435f40  (orig 0x1435f40, tailcall)
uint64_t main_f_1435f40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1436dc0  (orig 0x1436dc0, tailcall)
void main_f_1436dc0() { main::sub_e7c4c0(); }

// sub_1436e40  (orig 0x1436e40, tailcall)
uint64_t main_f_1436e40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1436e50  (orig 0x1436e50, tailcall)
uint64_t main_f_1436e50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1436f40  (orig 0x1436f40, tailcall)
uint64_t main_f_1436f40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1436f50  (orig 0x1436f50, tailcall)
uint64_t main_f_1436f50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14382e0  (orig 0x14382e0, tailcall)
uint64_t main_f_14382e0(void* a0) {
    return main::sub_eb8c60(((uintptr_t)(*(uint64_t*)((char*)(a0) + 136))));
}

// sub_1438800  (orig 0x1438800, tailcall)
void main_f_1438800() { main::sub_e7c4c0(); }

// sub_1438880  (orig 0x1438880, tailcall)
uint64_t main_f_1438880(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1438890  (orig 0x1438890, tailcall)
uint64_t main_f_1438890(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1438980  (orig 0x1438980, tailcall)
uint64_t main_f_1438980(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1438990  (orig 0x1438990, tailcall)
uint64_t main_f_1438990(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1438a60  (orig 0x1438a60, tailcall)
void main_f_1438a60() { main::sub_e7c4c0(); }

// sub_1438ae0  (orig 0x1438ae0, tailcall)
uint64_t main_f_1438ae0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1438af0  (orig 0x1438af0, tailcall)
uint64_t main_f_1438af0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1438be0  (orig 0x1438be0, tailcall)
uint64_t main_f_1438be0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1438bf0  (orig 0x1438bf0, tailcall)
uint64_t main_f_1438bf0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1439b20  (orig 0x1439b20, tailcall)
void main_f_1439b20() { main::sub_1439930(); }

// sub_1439be0  (orig 0x1439be0, tailcall)
uint64_t main_f_1439be0(void* a0) {
    return main::sub_1439930(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1439bf0  (orig 0x1439bf0, tailcall)
uint64_t main_f_1439bf0(void* a0) {
    return main::sub_1439930(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1439d60  (orig 0x1439d60, tailcall)
uint64_t main_f_1439d60(void* a0) {
    return main::sub_1439930(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1439d70  (orig 0x1439d70, tailcall)
uint64_t main_f_1439d70(void* a0) {
    return main::sub_1439930(((uintptr_t)((char*)(a0) - 80)));
}

// sub_143b570  (orig 0x143b570, tailcall)
void main_f_143b570() { main::sub_e7c4c0(); }

// sub_143b5f0  (orig 0x143b5f0, tailcall)
uint64_t main_f_143b5f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_143b600  (orig 0x143b600, tailcall)
uint64_t main_f_143b600(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_143b6f0  (orig 0x143b6f0, tailcall)
uint64_t main_f_143b6f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_143b700  (orig 0x143b700, tailcall)
uint64_t main_f_143b700(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_143b860  (orig 0x143b860, tailcall)
void main_f_143b860() { main::sub_e7c4c0(); }

// sub_143b8e0  (orig 0x143b8e0, tailcall)
uint64_t main_f_143b8e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_143b8f0  (orig 0x143b8f0, tailcall)
uint64_t main_f_143b8f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_143b9e0  (orig 0x143b9e0, tailcall)
uint64_t main_f_143b9e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_143b9f0  (orig 0x143b9f0, tailcall)
uint64_t main_f_143b9f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_143bb80  (orig 0x143bb80, tailcall)
void main_f_143bb80() { main::sub_e7c4c0(); }

// sub_143bc00  (orig 0x143bc00, tailcall)
uint64_t main_f_143bc00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_143bc10  (orig 0x143bc10, tailcall)
uint64_t main_f_143bc10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_143bd00  (orig 0x143bd00, tailcall)
uint64_t main_f_143bd00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_143bd10  (orig 0x143bd10, tailcall)
uint64_t main_f_143bd10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_143cbb0  (orig 0x143cbb0, tailcall)
void main_f_143cbb0() { main::sub_143cee0(); }

// sub_143cd40  (orig 0x143cd40, tailcall)
void main_f_143cd40() { main::sub_143cee0(); }

// sub_143cd50  (orig 0x143cd50, tailcall)
void main_f_143cd50() { main::sub_143cee0(); }

// sub_143dc10  (orig 0x143dc10, tailcall)
void main_f_143dc10() { main::sub_143daf0(); }

// sub_143dc20  (orig 0x143dc20, tailcall)
void main_f_143dc20() { main::sub_1439d80(); }

// sub_143dc30  (orig 0x143dc30, tailcall)
uint64_t main_f_143dc30(void* a0) {
    return main::sub_143daf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_143dc40  (orig 0x143dc40, tailcall)
uint64_t main_f_143dc40(void* a0) {
    return main::sub_143daf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_143dc50  (orig 0x143dc50, tailcall)
void main_f_143dc50() { main::sub_1439d80(); }

// sub_143dc60  (orig 0x143dc60, tailcall)
void main_f_143dc60() { main::sub_1439d80(); }

// sub_143dc70  (orig 0x143dc70, tailcall)
uint64_t main_f_143dc70(void* a0) {
    return main::sub_143daf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_143dc80  (orig 0x143dc80, tailcall)
uint64_t main_f_143dc80(void* a0) {
    return main::sub_143daf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_143e980  (orig 0x143e980, tailcall)
void main_f_143e980() { main::sub_143e7e0(); }

// sub_143ea00  (orig 0x143ea00, tailcall)
uint64_t main_f_143ea00(void* a0) {
    return main::sub_143e7e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_143ea10  (orig 0x143ea10, tailcall)
uint64_t main_f_143ea10(void* a0) {
    return main::sub_143e7e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_143eb00  (orig 0x143eb00, tailcall)
uint64_t main_f_143eb00(void* a0) {
    return main::sub_143e7e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_143eb10  (orig 0x143eb10, tailcall)
uint64_t main_f_143eb10(void* a0) {
    return main::sub_143e7e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_143f530  (orig 0x143f530, tailcall)
void main_f_143f530() { main::sub_143f560(); }

// sub_143f540  (orig 0x143f540, tailcall)
void main_f_143f540() { main::sub_143f560(); }

// sub_143f550  (orig 0x143f550, tailcall)
void main_f_143f550() { main::sub_143f560(); }

// sub_143fe90  (orig 0x143fe90, tailcall)
void main_f_143fe90() { main::sub_143fcf0(); }

// sub_143ff50  (orig 0x143ff50, tailcall)
uint64_t main_f_143ff50(void* a0) {
    return main::sub_143fcf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_143ff60  (orig 0x143ff60, tailcall)
uint64_t main_f_143ff60(void* a0) {
    return main::sub_143fcf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14400d0  (orig 0x14400d0, tailcall)
uint64_t main_f_14400d0(void* a0) {
    return main::sub_143fcf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14400e0  (orig 0x14400e0, tailcall)
uint64_t main_f_14400e0(void* a0) {
    return main::sub_143fcf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14400f0  (orig 0x14400f0, tailcall)
void main_f_14400f0() { main::sub_e7c250(); }

// sub_1440100  (orig 0x1440100, tailcall)
void main_f_1440100() { main::sub_1440750(); }

// sub_1440110  (orig 0x1440110, tailcall)
uint64_t main_f_1440110(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1440120  (orig 0x1440120, tailcall)
uint64_t main_f_1440120(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1440130  (orig 0x1440130, tailcall)
void main_f_1440130() { main::sub_1440750(); }

// sub_1440140  (orig 0x1440140, tailcall)
void main_f_1440140() { main::sub_1440750(); }

// sub_1440150  (orig 0x1440150, tailcall)
uint64_t main_f_1440150(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1440160  (orig 0x1440160, tailcall)
uint64_t main_f_1440160(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1441cb0  (orig 0x1441cb0, tailcall)
void main_f_1441cb0() { main::sub_e7c4c0(); }

// sub_1441cc0  (orig 0x1441cc0, tailcall)
void main_f_1441cc0() { main::sub_1441d30(); }

// sub_1441cd0  (orig 0x1441cd0, tailcall)
uint64_t main_f_1441cd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1441ce0  (orig 0x1441ce0, tailcall)
uint64_t main_f_1441ce0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1441cf0  (orig 0x1441cf0, tailcall)
void main_f_1441cf0() { main::sub_1441d30(); }

// sub_1441d00  (orig 0x1441d00, tailcall)
void main_f_1441d00() { main::sub_1441d30(); }

// sub_1441d10  (orig 0x1441d10, tailcall)
uint64_t main_f_1441d10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1441d20  (orig 0x1441d20, tailcall)
uint64_t main_f_1441d20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1442e80  (orig 0x1442e80, tailcall)
void main_f_1442e80() { main::sub_1443030(); }

// sub_1442f50  (orig 0x1442f50, tailcall)
void main_f_1442f50() { main::sub_1443030(); }

// sub_1442f60  (orig 0x1442f60, tailcall)
void main_f_1442f60() { main::sub_1443030(); }

// sub_1448b60  (orig 0x1448b60, tailcall)
uint64_t main_f_1448b60(void* a0) {
    return main::sub_14bacd0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 12696L))));
}

// sub_14496c0  (orig 0x14496c0, tailcall)
void main_f_14496c0() { main::sub_1449390(); }

// sub_14496d0  (orig 0x14496d0, tailcall)
void main_f_14496d0() { main::sub_1449740(); }

// sub_14496e0  (orig 0x14496e0, tailcall)
uint64_t main_f_14496e0(void* a0) {
    return main::sub_1449390(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14496f0  (orig 0x14496f0, tailcall)
uint64_t main_f_14496f0(void* a0) {
    return main::sub_1449390(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1449700  (orig 0x1449700, tailcall)
void main_f_1449700() { main::sub_1449740(); }

// sub_1449710  (orig 0x1449710, tailcall)
void main_f_1449710() { main::sub_1449740(); }

// sub_1449720  (orig 0x1449720, tailcall)
uint64_t main_f_1449720(void* a0) {
    return main::sub_1449390(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1449730  (orig 0x1449730, tailcall)
uint64_t main_f_1449730(void* a0) {
    return main::sub_1449390(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1449ef0  (orig 0x1449ef0, tailcall)
void main_f_1449ef0() { main::sub_14ba4c0(); }

// sub_144aab0  (orig 0x144aab0, tailcall)
void main_f_144aab0() { main::sub_144aae0(); }

// sub_144aac0  (orig 0x144aac0, tailcall)
void main_f_144aac0() { main::sub_144aae0(); }

// sub_144aad0  (orig 0x144aad0, tailcall)
void main_f_144aad0() { main::sub_144aae0(); }

// sub_144bff0  (orig 0x144bff0, tailcall)
void main_f_144bff0() { main::sub_144be50(); }

// sub_144c0b0  (orig 0x144c0b0, tailcall)
uint64_t main_f_144c0b0(void* a0) {
    return main::sub_144be50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144c0c0  (orig 0x144c0c0, tailcall)
uint64_t main_f_144c0c0(void* a0) {
    return main::sub_144be50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144c230  (orig 0x144c230, tailcall)
uint64_t main_f_144c230(void* a0) {
    return main::sub_144be50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144c240  (orig 0x144c240, tailcall)
uint64_t main_f_144c240(void* a0) {
    return main::sub_144be50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144c250  (orig 0x144c250, tailcall)
void main_f_144c250() { main::sub_e7c250(); }

// sub_144c260  (orig 0x144c260, tailcall)
void main_f_144c260() { main::sub_144c2d0(); }

// sub_144c270  (orig 0x144c270, tailcall)
uint64_t main_f_144c270(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144c280  (orig 0x144c280, tailcall)
uint64_t main_f_144c280(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144c290  (orig 0x144c290, tailcall)
void main_f_144c290() { main::sub_144c2d0(); }

// sub_144c2a0  (orig 0x144c2a0, tailcall)
void main_f_144c2a0() { main::sub_144c2d0(); }

// sub_144c2b0  (orig 0x144c2b0, tailcall)
uint64_t main_f_144c2b0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144c2c0  (orig 0x144c2c0, tailcall)
uint64_t main_f_144c2c0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144cbd0  (orig 0x144cbd0, tailcall)
void main_f_144cbd0() { main::sub_e7c4c0(); }

// sub_144cbe0  (orig 0x144cbe0, tailcall)
void main_f_144cbe0() { main::sub_144cc50(); }

// sub_144cbf0  (orig 0x144cbf0, tailcall)
uint64_t main_f_144cbf0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144cc00  (orig 0x144cc00, tailcall)
uint64_t main_f_144cc00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144cc10  (orig 0x144cc10, tailcall)
void main_f_144cc10() { main::sub_144cc50(); }

// sub_144cc20  (orig 0x144cc20, tailcall)
void main_f_144cc20() { main::sub_144cc50(); }

// sub_144cc30  (orig 0x144cc30, tailcall)
uint64_t main_f_144cc30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144cc40  (orig 0x144cc40, tailcall)
uint64_t main_f_144cc40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144d5d0  (orig 0x144d5d0, tailcall)
void main_f_144d5d0() { main::sub_e7c4c0(); }

// sub_144d5e0  (orig 0x144d5e0, tailcall)
void main_f_144d5e0() { main::sub_144d650(); }

// sub_144d5f0  (orig 0x144d5f0, tailcall)
uint64_t main_f_144d5f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144d600  (orig 0x144d600, tailcall)
uint64_t main_f_144d600(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144d610  (orig 0x144d610, tailcall)
void main_f_144d610() { main::sub_144d650(); }

// sub_144d620  (orig 0x144d620, tailcall)
void main_f_144d620() { main::sub_144d650(); }

// sub_144d630  (orig 0x144d630, tailcall)
uint64_t main_f_144d630(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144d640  (orig 0x144d640, tailcall)
uint64_t main_f_144d640(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144dd60  (orig 0x144dd60, tailcall)
uint64_t main_f_144dd60(void* a0) {
    return main::pane__s_7(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_144e9e0  (orig 0x144e9e0, tailcall)
void main_f_144e9e0() { main::sub_e7c4c0(); }

// sub_144e9f0  (orig 0x144e9f0, tailcall)
void main_f_144e9f0() { main::sub_144ea60(); }

// sub_144ea00  (orig 0x144ea00, tailcall)
uint64_t main_f_144ea00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144ea10  (orig 0x144ea10, tailcall)
uint64_t main_f_144ea10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144ea20  (orig 0x144ea20, tailcall)
void main_f_144ea20() { main::sub_144ea60(); }

// sub_144ea30  (orig 0x144ea30, tailcall)
void main_f_144ea30() { main::sub_144ea60(); }

// sub_144ea40  (orig 0x144ea40, tailcall)
uint64_t main_f_144ea40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144ea50  (orig 0x144ea50, tailcall)
uint64_t main_f_144ea50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144efc0  (orig 0x144efc0, tailcall)
void main_f_144efc0() { main::sub_e7c4c0(); }

// sub_144efd0  (orig 0x144efd0, tailcall)
void main_f_144efd0() { main::sub_144f040(); }

// sub_144efe0  (orig 0x144efe0, tailcall)
uint64_t main_f_144efe0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144eff0  (orig 0x144eff0, tailcall)
uint64_t main_f_144eff0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144f000  (orig 0x144f000, tailcall)
void main_f_144f000() { main::sub_144f040(); }

// sub_144f010  (orig 0x144f010, tailcall)
void main_f_144f010() { main::sub_144f040(); }

// sub_144f020  (orig 0x144f020, tailcall)
uint64_t main_f_144f020(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144f030  (orig 0x144f030, tailcall)
uint64_t main_f_144f030(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144f600  (orig 0x144f600, tailcall)
uint64_t main_f_144f600(void* a0) {
    return main::sub_144f480(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144f610  (orig 0x144f610, tailcall)
uint64_t main_f_144f610(void* a0) {
    return main::sub_144f480(((uintptr_t)((char*)(a0) - 80)));
}

// sub_144f620  (orig 0x144f620, tailcall)
void main_f_144f620() { main::sub_144f480(); }

// sub_144f630  (orig 0x144f630, tailcall)
uint64_t main_f_144f630(void* a0) {
    return main::sub_144f480(((uintptr_t)((char*)(a0) - 72)));
}

// sub_144f640  (orig 0x144f640, tailcall)
uint64_t main_f_144f640(void* a0) {
    return main::sub_144f480(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1454690  (orig 0x1454690, tailcall)
void main_f_1454690() { main::sub_1454900(); }

// sub_14547c0  (orig 0x14547c0, tailcall)
void main_f_14547c0() { main::sub_1454900(); }

// sub_14547d0  (orig 0x14547d0, tailcall)
void main_f_14547d0() { main::sub_1454900(); }

// sub_1456660  (orig 0x1456660, tailcall)
void main_f_1456660() { main::sub_1456440(); }

// sub_1456720  (orig 0x1456720, tailcall)
uint64_t main_f_1456720(void* a0) {
    return main::sub_1456440(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1456730  (orig 0x1456730, tailcall)
uint64_t main_f_1456730(void* a0) {
    return main::sub_1456440(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14568a0  (orig 0x14568a0, tailcall)
uint64_t main_f_14568a0(void* a0) {
    return main::sub_1456440(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14568b0  (orig 0x14568b0, tailcall)
uint64_t main_f_14568b0(void* a0) {
    return main::sub_1456440(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14569a0  (orig 0x14569a0, tailcall)
void main_f_14569a0() { main::sub_1456b90(); }

// sub_1456a90  (orig 0x1456a90, tailcall)
void main_f_1456a90() { main::sub_1456b90(); }

// sub_1456aa0  (orig 0x1456aa0, tailcall)
void main_f_1456aa0() { main::sub_1456b90(); }

// sub_1458120  (orig 0x1458120, tailcall)
uint64_t main_f_1458120(void* a0) {
    return main::sub_1458130(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_1458570  (orig 0x1458570, tailcall)
void main_f_1458570() { main::sub_1458480(); }

// sub_1458580  (orig 0x1458580, tailcall)
uint64_t main_f_1458580(void* a0) {
    return main::sub_1458480(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1458590  (orig 0x1458590, tailcall)
uint64_t main_f_1458590(void* a0) {
    return main::sub_1458480(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1459ac0  (orig 0x1459ac0, tailcall)
uint64_t main_f_1459ac0(void* a0) {
    return main::sub_1459ad0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_1459f50  (orig 0x1459f50, tailcall)
uint64_t main_f_1459f50(void* a0) {
    return main::sub_1459f60(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_145ef00  (orig 0x145ef00, tailcall)
void main_f_145ef00() { main::sub_145ee10(); }

// sub_145ef10  (orig 0x145ef10, tailcall)
void main_f_145ef10() { main::sub_145ef80(); }

// sub_145ef20  (orig 0x145ef20, tailcall)
uint64_t main_f_145ef20(void* a0) {
    return main::sub_145ee10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_145ef30  (orig 0x145ef30, tailcall)
uint64_t main_f_145ef30(void* a0) {
    return main::sub_145ee10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_145ef40  (orig 0x145ef40, tailcall)
void main_f_145ef40() { main::sub_145ef80(); }

// sub_145ef50  (orig 0x145ef50, tailcall)
void main_f_145ef50() { main::sub_145ef80(); }

// sub_145ef60  (orig 0x145ef60, tailcall)
uint64_t main_f_145ef60(void* a0) {
    return main::sub_145ee10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_145ef70  (orig 0x145ef70, tailcall)
uint64_t main_f_145ef70(void* a0) {
    return main::sub_145ee10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_145f3c0  (orig 0x145f3c0, tailcall)
void main_f_145f3c0() { main::sub_e7feb0(); }

// sub_145f3d0  (orig 0x145f3d0, tailcall)
void main_f_145f3d0() { main::sub_145f440(); }

// sub_145f3e0  (orig 0x145f3e0, tailcall)
uint64_t main_f_145f3e0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_145f3f0  (orig 0x145f3f0, tailcall)
uint64_t main_f_145f3f0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_145f400  (orig 0x145f400, tailcall)
void main_f_145f400() { main::sub_145f440(); }

// sub_145f410  (orig 0x145f410, tailcall)
void main_f_145f410() { main::sub_145f440(); }

// sub_145f420  (orig 0x145f420, tailcall)
uint64_t main_f_145f420(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_145f430  (orig 0x145f430, tailcall)
uint64_t main_f_145f430(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_145f8b0  (orig 0x145f8b0, tailcall)
void main_f_145f8b0() { main::sub_e7c4c0(); }

// sub_145f8c0  (orig 0x145f8c0, tailcall)
void main_f_145f8c0() { main::sub_145f930(); }

// sub_145f8d0  (orig 0x145f8d0, tailcall)
uint64_t main_f_145f8d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_145f8e0  (orig 0x145f8e0, tailcall)
uint64_t main_f_145f8e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_145f8f0  (orig 0x145f8f0, tailcall)
void main_f_145f8f0() { main::sub_145f930(); }

// sub_145f900  (orig 0x145f900, tailcall)
void main_f_145f900() { main::sub_145f930(); }

// sub_145f910  (orig 0x145f910, tailcall)
uint64_t main_f_145f910(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_145f920  (orig 0x145f920, tailcall)
uint64_t main_f_145f920(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_145fd50  (orig 0x145fd50, tailcall)
void main_f_145fd50() { main::sub_e7feb0(); }

// sub_145fd60  (orig 0x145fd60, tailcall)
void main_f_145fd60() { main::sub_145fdd0(); }

// sub_145fd70  (orig 0x145fd70, tailcall)
uint64_t main_f_145fd70(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_145fd80  (orig 0x145fd80, tailcall)
uint64_t main_f_145fd80(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_145fd90  (orig 0x145fd90, tailcall)
void main_f_145fd90() { main::sub_145fdd0(); }

// sub_145fda0  (orig 0x145fda0, tailcall)
void main_f_145fda0() { main::sub_145fdd0(); }

// sub_145fdb0  (orig 0x145fdb0, tailcall)
uint64_t main_f_145fdb0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_145fdc0  (orig 0x145fdc0, tailcall)
uint64_t main_f_145fdc0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14605f0  (orig 0x14605f0, tailcall)
uint64_t main_f_14605f0(void* a0) {
    return main::sub_145ec30(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1460600  (orig 0x1460600, tailcall)
void main_f_1460600() { main::sub_e7c4c0(); }

// sub_1460610  (orig 0x1460610, tailcall)
void main_f_1460610() { main::sub_1457c40(); }

// sub_1460620  (orig 0x1460620, tailcall)
uint64_t main_f_1460620(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1460630  (orig 0x1460630, tailcall)
uint64_t main_f_1460630(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1460640  (orig 0x1460640, tailcall)
void main_f_1460640() { main::sub_1457c40(); }

// sub_1460650  (orig 0x1460650, tailcall)
void main_f_1460650() { main::sub_1457c40(); }

// sub_1460660  (orig 0x1460660, tailcall)
uint64_t main_f_1460660(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1460670  (orig 0x1460670, tailcall)
uint64_t main_f_1460670(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1460aa0  (orig 0x1460aa0, tailcall)
void main_f_1460aa0() { main::sub_e7c4c0(); }

// sub_1460ab0  (orig 0x1460ab0, tailcall)
void main_f_1460ab0() { main::sub_1460b20(); }

// sub_1460ac0  (orig 0x1460ac0, tailcall)
uint64_t main_f_1460ac0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1460ad0  (orig 0x1460ad0, tailcall)
uint64_t main_f_1460ad0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1460ae0  (orig 0x1460ae0, tailcall)
void main_f_1460ae0() { main::sub_1460b20(); }

// sub_1460af0  (orig 0x1460af0, tailcall)
void main_f_1460af0() { main::sub_1460b20(); }

// sub_1460b00  (orig 0x1460b00, tailcall)
uint64_t main_f_1460b00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1460b10  (orig 0x1460b10, tailcall)
uint64_t main_f_1460b10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14610e0  (orig 0x14610e0, tailcall)
void main_f_14610e0() { main::sub_1461290(); }

// sub_14611b0  (orig 0x14611b0, tailcall)
void main_f_14611b0() { main::sub_1461290(); }

// sub_14611c0  (orig 0x14611c0, tailcall)
void main_f_14611c0() { main::sub_1461290(); }

// sub_1466b00  (orig 0x1466b00, tailcall)
void main_f_1466b00() { main::sub_14669f0(); }

// sub_1466bc0  (orig 0x1466bc0, tailcall)
uint64_t main_f_1466bc0(void* a0) {
    return main::sub_14669f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1466bd0  (orig 0x1466bd0, tailcall)
uint64_t main_f_1466bd0(void* a0) {
    return main::sub_14669f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1466d40  (orig 0x1466d40, tailcall)
uint64_t main_f_1466d40(void* a0) {
    return main::sub_14669f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1466d50  (orig 0x1466d50, tailcall)
uint64_t main_f_1466d50(void* a0) {
    return main::sub_14669f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1466e50  (orig 0x1466e50, tailcall)
void main_f_1466e50() { main::sub_1466d60(); }

// sub_1466e60  (orig 0x1466e60, tailcall)
void main_f_1466e60() { main::sub_1467080(); }

// sub_1466e70  (orig 0x1466e70, tailcall)
uint64_t main_f_1466e70(void* a0) {
    return main::sub_1466d60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1466e80  (orig 0x1466e80, tailcall)
uint64_t main_f_1466e80(void* a0) {
    return main::sub_1466d60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1466e90  (orig 0x1466e90, tailcall)
void main_f_1466e90() { main::sub_1467080(); }

// sub_1466ea0  (orig 0x1466ea0, tailcall)
void main_f_1466ea0() { main::sub_1467080(); }

// sub_1466eb0  (orig 0x1466eb0, tailcall)
uint64_t main_f_1466eb0(void* a0) {
    return main::sub_1466d60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1466ec0  (orig 0x1466ec0, tailcall)
uint64_t main_f_1466ec0(void* a0) {
    return main::sub_1466d60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_146c480  (orig 0x146c480, tailcall)
void main_f_146c480() { main::sub_146c7b0(); }

// sub_146c610  (orig 0x146c610, tailcall)
void main_f_146c610() { main::sub_146c7b0(); }

// sub_146c620  (orig 0x146c620, tailcall)
void main_f_146c620() { main::sub_146c7b0(); }

// sub_146cf90  (orig 0x146cf90, tailcall)
void main_f_146cf90() { main::sub_ce0(); }

// sub_146db10  (orig 0x146db10, tailcall)
void main_f_146db10() { main::sub_e7feb0(); }

// sub_146db20  (orig 0x146db20, tailcall)
void main_f_146db20() { main::sub_146db90(); }

// sub_146db30  (orig 0x146db30, tailcall)
uint64_t main_f_146db30(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_146db40  (orig 0x146db40, tailcall)
uint64_t main_f_146db40(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_146db50  (orig 0x146db50, tailcall)
void main_f_146db50() { main::sub_146db90(); }

// sub_146db60  (orig 0x146db60, tailcall)
void main_f_146db60() { main::sub_146db90(); }

// sub_146db70  (orig 0x146db70, tailcall)
uint64_t main_f_146db70(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_146db80  (orig 0x146db80, tailcall)
uint64_t main_f_146db80(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_146e350  (orig 0x146e350, tailcall)
void main_f_146e350() { main::sub_146e500(); }

// sub_146e420  (orig 0x146e420, tailcall)
void main_f_146e420() { main::sub_146e500(); }

// sub_146e430  (orig 0x146e430, tailcall)
void main_f_146e430() { main::sub_146e500(); }

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

// sub_1471fd0  (orig 0x1471fd0, tailcall)
void main_f_1471fd0() { main::sub_1471ed0(); }

// sub_1471fe0  (orig 0x1471fe0, tailcall)
void main_f_1471fe0() { main::sub_1472050(); }

// sub_1471ff0  (orig 0x1471ff0, tailcall)
uint64_t main_f_1471ff0(void* a0) {
    return main::sub_1471ed0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1472000  (orig 0x1472000, tailcall)
uint64_t main_f_1472000(void* a0) {
    return main::sub_1471ed0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1472010  (orig 0x1472010, tailcall)
void main_f_1472010() { main::sub_1472050(); }

// sub_1472020  (orig 0x1472020, tailcall)
void main_f_1472020() { main::sub_1472050(); }

// sub_1472030  (orig 0x1472030, tailcall)
uint64_t main_f_1472030(void* a0) {
    return main::sub_1471ed0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1472040  (orig 0x1472040, tailcall)
uint64_t main_f_1472040(void* a0) {
    return main::sub_1471ed0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14725e0  (orig 0x14725e0, tailcall)
void main_f_14725e0() { main::sub_e7c4c0(); }

// sub_14725f0  (orig 0x14725f0, tailcall)
void main_f_14725f0() { main::sub_1472660(); }

// sub_1472600  (orig 0x1472600, tailcall)
uint64_t main_f_1472600(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1472610  (orig 0x1472610, tailcall)
uint64_t main_f_1472610(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1472620  (orig 0x1472620, tailcall)
void main_f_1472620() { main::sub_1472660(); }

// sub_1472630  (orig 0x1472630, tailcall)
void main_f_1472630() { main::sub_1472660(); }

// sub_1472640  (orig 0x1472640, tailcall)
uint64_t main_f_1472640(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1472650  (orig 0x1472650, tailcall)
uint64_t main_f_1472650(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14730b0  (orig 0x14730b0, tailcall)
void main_f_14730b0() { main::sub_e7c4c0(); }

// sub_14730c0  (orig 0x14730c0, tailcall)
void main_f_14730c0() { main::sub_1473130(); }

// sub_14730d0  (orig 0x14730d0, tailcall)
uint64_t main_f_14730d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14730e0  (orig 0x14730e0, tailcall)
uint64_t main_f_14730e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14730f0  (orig 0x14730f0, tailcall)
void main_f_14730f0() { main::sub_1473130(); }

// sub_1473100  (orig 0x1473100, tailcall)
void main_f_1473100() { main::sub_1473130(); }

// sub_1473110  (orig 0x1473110, tailcall)
uint64_t main_f_1473110(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1473120  (orig 0x1473120, tailcall)
uint64_t main_f_1473120(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14739f0  (orig 0x14739f0, tailcall)
void main_f_14739f0() { main::sub_1473ba0(); }

// sub_1473ac0  (orig 0x1473ac0, tailcall)
void main_f_1473ac0() { main::sub_1473ba0(); }

// sub_1473ad0  (orig 0x1473ad0, tailcall)
void main_f_1473ad0() { main::sub_1473ba0(); }

// sub_14749b0  (orig 0x14749b0, tailcall)
void main_f_14749b0() { main::sub_e7c4c0(); }

// sub_14749c0  (orig 0x14749c0, tailcall)
void main_f_14749c0() { main::sub_1474a30(); }

// sub_14749d0  (orig 0x14749d0, tailcall)
uint64_t main_f_14749d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14749e0  (orig 0x14749e0, tailcall)
uint64_t main_f_14749e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14749f0  (orig 0x14749f0, tailcall)
void main_f_14749f0() { main::sub_1474a30(); }

// sub_1474a00  (orig 0x1474a00, tailcall)
void main_f_1474a00() { main::sub_1474a30(); }

// sub_1474a10  (orig 0x1474a10, tailcall)
uint64_t main_f_1474a10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1474a20  (orig 0x1474a20, tailcall)
uint64_t main_f_1474a20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1476880  (orig 0x1476880, tailcall)
uint64_t main_f_1476880(void* a0) {
    return main::sub_1459dd0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1488))));
}

// sub_1476ad0  (orig 0x1476ad0, tailcall)
void main_f_1476ad0() { main::sub_1476890(); }

// sub_1476ae0  (orig 0x1476ae0, tailcall)
void main_f_1476ae0() { main::sub_1476b50(); }

// sub_1476af0  (orig 0x1476af0, tailcall)
uint64_t main_f_1476af0(void* a0) {
    return main::sub_1476890(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1476b00  (orig 0x1476b00, tailcall)
uint64_t main_f_1476b00(void* a0) {
    return main::sub_1476890(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1476b10  (orig 0x1476b10, tailcall)
void main_f_1476b10() { main::sub_1476b50(); }

// sub_1476b20  (orig 0x1476b20, tailcall)
void main_f_1476b20() { main::sub_1476b50(); }

// sub_1476b30  (orig 0x1476b30, tailcall)
uint64_t main_f_1476b30(void* a0) {
    return main::sub_1476890(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1476b40  (orig 0x1476b40, tailcall)
uint64_t main_f_1476b40(void* a0) {
    return main::sub_1476890(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1477060  (orig 0x1477060, tailcall)
void main_f_1477060() { main::sub_e7c4c0(); }

// sub_1477070  (orig 0x1477070, tailcall)
void main_f_1477070() { main::sub_14770e0(); }

// sub_1477080  (orig 0x1477080, tailcall)
uint64_t main_f_1477080(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1477090  (orig 0x1477090, tailcall)
uint64_t main_f_1477090(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14770a0  (orig 0x14770a0, tailcall)
void main_f_14770a0() { main::sub_14770e0(); }

// sub_14770b0  (orig 0x14770b0, tailcall)
void main_f_14770b0() { main::sub_14770e0(); }

// sub_14770c0  (orig 0x14770c0, tailcall)
uint64_t main_f_14770c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14770d0  (orig 0x14770d0, tailcall)
uint64_t main_f_14770d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1477520  (orig 0x1477520, tailcall)
void main_f_1477520() { main::sub_e7c4c0(); }

// sub_1477530  (orig 0x1477530, tailcall)
void main_f_1477530() { main::sub_14775a0(); }

// sub_1477540  (orig 0x1477540, tailcall)
uint64_t main_f_1477540(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1477550  (orig 0x1477550, tailcall)
uint64_t main_f_1477550(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1477560  (orig 0x1477560, tailcall)
void main_f_1477560() { main::sub_14775a0(); }

// sub_1477570  (orig 0x1477570, tailcall)
void main_f_1477570() { main::sub_14775a0(); }

// sub_1477580  (orig 0x1477580, tailcall)
uint64_t main_f_1477580(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1477590  (orig 0x1477590, tailcall)
uint64_t main_f_1477590(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1477910  (orig 0x1477910, tailcall)
void main_f_1477910() { main::sub_e7c4c0(); }

// sub_1477920  (orig 0x1477920, tailcall)
void main_f_1477920() { main::sub_1477990(); }

// sub_1477930  (orig 0x1477930, tailcall)
uint64_t main_f_1477930(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1477940  (orig 0x1477940, tailcall)
uint64_t main_f_1477940(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1477950  (orig 0x1477950, tailcall)
void main_f_1477950() { main::sub_1477990(); }

// sub_1477960  (orig 0x1477960, tailcall)
void main_f_1477960() { main::sub_1477990(); }

// sub_1477970  (orig 0x1477970, tailcall)
uint64_t main_f_1477970(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1477980  (orig 0x1477980, tailcall)
uint64_t main_f_1477980(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14783f0  (orig 0x14783f0, tailcall)
void main_f_14783f0() { main::sub_1478660(); }

// sub_1478520  (orig 0x1478520, tailcall)
void main_f_1478520() { main::sub_1478660(); }

// sub_1478530  (orig 0x1478530, tailcall)
void main_f_1478530() { main::sub_1478660(); }

// sub_1478ac0  (orig 0x1478ac0, tailcall)
void main_f_1478ac0() { main::sub_e7c4c0(); }

// sub_1478ad0  (orig 0x1478ad0, tailcall)
void main_f_1478ad0() { main::sub_1478b40(); }

// sub_1478ae0  (orig 0x1478ae0, tailcall)
uint64_t main_f_1478ae0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1478af0  (orig 0x1478af0, tailcall)
uint64_t main_f_1478af0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1478b00  (orig 0x1478b00, tailcall)
void main_f_1478b00() { main::sub_1478b40(); }

// sub_1478b10  (orig 0x1478b10, tailcall)
void main_f_1478b10() { main::sub_1478b40(); }

// sub_1478b20  (orig 0x1478b20, tailcall)
uint64_t main_f_1478b20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1478b30  (orig 0x1478b30, tailcall)
uint64_t main_f_1478b30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1479490  (orig 0x1479490, tailcall)
void main_f_1479490() { main::sub_e7c4c0(); }

// sub_14794a0  (orig 0x14794a0, tailcall)
void main_f_14794a0() { main::sub_1479510(); }

// sub_14794b0  (orig 0x14794b0, tailcall)
uint64_t main_f_14794b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14794c0  (orig 0x14794c0, tailcall)
uint64_t main_f_14794c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14794d0  (orig 0x14794d0, tailcall)
void main_f_14794d0() { main::sub_1479510(); }

// sub_14794e0  (orig 0x14794e0, tailcall)
void main_f_14794e0() { main::sub_1479510(); }

// sub_14794f0  (orig 0x14794f0, tailcall)
uint64_t main_f_14794f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1479500  (orig 0x1479500, tailcall)
uint64_t main_f_1479500(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1479a90  (orig 0x1479a90, tailcall)
void main_f_1479a90() { main::sub_1479c40(); }

// sub_1479b60  (orig 0x1479b60, tailcall)
void main_f_1479b60() { main::sub_1479c40(); }

// sub_1479b70  (orig 0x1479b70, tailcall)
void main_f_1479b70() { main::sub_1479c40(); }

// sub_147a340  (orig 0x147a340, tailcall)
void main_f_147a340() { main::sub_e7c4c0(); }

// sub_147a350  (orig 0x147a350, tailcall)
void main_f_147a350() { main::sub_147a3c0(); }

// sub_147a360  (orig 0x147a360, tailcall)
uint64_t main_f_147a360(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147a370  (orig 0x147a370, tailcall)
uint64_t main_f_147a370(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147a380  (orig 0x147a380, tailcall)
void main_f_147a380() { main::sub_147a3c0(); }

// sub_147a390  (orig 0x147a390, tailcall)
void main_f_147a390() { main::sub_147a3c0(); }

// sub_147a3a0  (orig 0x147a3a0, tailcall)
uint64_t main_f_147a3a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147a3b0  (orig 0x147a3b0, tailcall)
uint64_t main_f_147a3b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147a8f0  (orig 0x147a8f0, tailcall)
void main_f_147a8f0() { main::sub_e7c4c0(); }

// sub_147a900  (orig 0x147a900, tailcall)
void main_f_147a900() { main::sub_147a970(); }

// sub_147a910  (orig 0x147a910, tailcall)
uint64_t main_f_147a910(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147a920  (orig 0x147a920, tailcall)
uint64_t main_f_147a920(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147a930  (orig 0x147a930, tailcall)
void main_f_147a930() { main::sub_147a970(); }

// sub_147a940  (orig 0x147a940, tailcall)
void main_f_147a940() { main::sub_147a970(); }

// sub_147a950  (orig 0x147a950, tailcall)
uint64_t main_f_147a950(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147a960  (orig 0x147a960, tailcall)
uint64_t main_f_147a960(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147b100  (orig 0x147b100, tailcall)
void main_f_147b100() { main::sub_e7c4c0(); }

// sub_147b110  (orig 0x147b110, tailcall)
void main_f_147b110() { main::sub_147b180(); }

// sub_147b120  (orig 0x147b120, tailcall)
uint64_t main_f_147b120(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147b130  (orig 0x147b130, tailcall)
uint64_t main_f_147b130(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147b140  (orig 0x147b140, tailcall)
void main_f_147b140() { main::sub_147b180(); }

// sub_147b150  (orig 0x147b150, tailcall)
void main_f_147b150() { main::sub_147b180(); }

// sub_147b160  (orig 0x147b160, tailcall)
uint64_t main_f_147b160(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147b170  (orig 0x147b170, tailcall)
uint64_t main_f_147b170(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147ba10  (orig 0x147ba10, tailcall)
void main_f_147ba10() { main::sub_147b920(); }

// sub_147ba20  (orig 0x147ba20, tailcall)
void main_f_147ba20() { main::sub_147ba90(); }

// sub_147ba30  (orig 0x147ba30, tailcall)
uint64_t main_f_147ba30(void* a0) {
    return main::sub_147b920(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147ba40  (orig 0x147ba40, tailcall)
uint64_t main_f_147ba40(void* a0) {
    return main::sub_147b920(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147ba50  (orig 0x147ba50, tailcall)
void main_f_147ba50() { main::sub_147ba90(); }

// sub_147ba60  (orig 0x147ba60, tailcall)
void main_f_147ba60() { main::sub_147ba90(); }

// sub_147ba70  (orig 0x147ba70, tailcall)
uint64_t main_f_147ba70(void* a0) {
    return main::sub_147b920(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147ba80  (orig 0x147ba80, tailcall)
uint64_t main_f_147ba80(void* a0) {
    return main::sub_147b920(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147c090  (orig 0x147c090, tailcall)
void main_f_147c090() { main::sub_e7c4c0(); }

// sub_147c0a0  (orig 0x147c0a0, tailcall)
void main_f_147c0a0() { main::sub_147c110(); }

// sub_147c0b0  (orig 0x147c0b0, tailcall)
uint64_t main_f_147c0b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147c0c0  (orig 0x147c0c0, tailcall)
uint64_t main_f_147c0c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147c0d0  (orig 0x147c0d0, tailcall)
void main_f_147c0d0() { main::sub_147c110(); }

// sub_147c0e0  (orig 0x147c0e0, tailcall)
void main_f_147c0e0() { main::sub_147c110(); }

// sub_147c0f0  (orig 0x147c0f0, tailcall)
uint64_t main_f_147c0f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147c100  (orig 0x147c100, tailcall)
uint64_t main_f_147c100(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147cc00  (orig 0x147cc00, tailcall)
void main_f_147cc00() { main::sub_e7c4c0(); }

// sub_147cc10  (orig 0x147cc10, tailcall)
void main_f_147cc10() { main::sub_147cc80(); }

// sub_147cc20  (orig 0x147cc20, tailcall)
uint64_t main_f_147cc20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147cc30  (orig 0x147cc30, tailcall)
uint64_t main_f_147cc30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147cc40  (orig 0x147cc40, tailcall)
void main_f_147cc40() { main::sub_147cc80(); }

// sub_147cc50  (orig 0x147cc50, tailcall)
void main_f_147cc50() { main::sub_147cc80(); }

// sub_147cc60  (orig 0x147cc60, tailcall)
uint64_t main_f_147cc60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147cc70  (orig 0x147cc70, tailcall)
uint64_t main_f_147cc70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147d040  (orig 0x147d040, tailcall)
void main_f_147d040() { main::sub_e7c4c0(); }

// sub_147d050  (orig 0x147d050, tailcall)
void main_f_147d050() { main::sub_147d0c0(); }

// sub_147d060  (orig 0x147d060, tailcall)
uint64_t main_f_147d060(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147d070  (orig 0x147d070, tailcall)
uint64_t main_f_147d070(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147d080  (orig 0x147d080, tailcall)
void main_f_147d080() { main::sub_147d0c0(); }

// sub_147d090  (orig 0x147d090, tailcall)
void main_f_147d090() { main::sub_147d0c0(); }

// sub_147d0a0  (orig 0x147d0a0, tailcall)
uint64_t main_f_147d0a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147d0b0  (orig 0x147d0b0, tailcall)
uint64_t main_f_147d0b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147d490  (orig 0x147d490, tailcall)
void main_f_147d490() { main::sub_e7c4c0(); }

// sub_147d4a0  (orig 0x147d4a0, tailcall)
void main_f_147d4a0() { main::sub_147d510(); }

// sub_147d4b0  (orig 0x147d4b0, tailcall)
uint64_t main_f_147d4b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147d4c0  (orig 0x147d4c0, tailcall)
uint64_t main_f_147d4c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147d4d0  (orig 0x147d4d0, tailcall)
void main_f_147d4d0() { main::sub_147d510(); }

// sub_147d4e0  (orig 0x147d4e0, tailcall)
void main_f_147d4e0() { main::sub_147d510(); }

// sub_147d4f0  (orig 0x147d4f0, tailcall)
uint64_t main_f_147d4f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147d500  (orig 0x147d500, tailcall)
uint64_t main_f_147d500(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147dd30  (orig 0x147dd30, tailcall)
void main_f_147dd30() { main::sub_147dc40(); }

// sub_147dd40  (orig 0x147dd40, tailcall)
void main_f_147dd40() { main::sub_147ddb0(); }

// sub_147dd50  (orig 0x147dd50, tailcall)
uint64_t main_f_147dd50(void* a0) {
    return main::sub_147dc40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147dd60  (orig 0x147dd60, tailcall)
uint64_t main_f_147dd60(void* a0) {
    return main::sub_147dc40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147dd70  (orig 0x147dd70, tailcall)
void main_f_147dd70() { main::sub_147ddb0(); }

// sub_147dd80  (orig 0x147dd80, tailcall)
void main_f_147dd80() { main::sub_147ddb0(); }

// sub_147dd90  (orig 0x147dd90, tailcall)
uint64_t main_f_147dd90(void* a0) {
    return main::sub_147dc40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147dda0  (orig 0x147dda0, tailcall)
uint64_t main_f_147dda0(void* a0) {
    return main::sub_147dc40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147e160  (orig 0x147e160, tailcall)
void main_f_147e160() { main::sub_e7c4c0(); }

// sub_147e170  (orig 0x147e170, tailcall)
void main_f_147e170() { main::sub_147e1e0(); }

// sub_147e180  (orig 0x147e180, tailcall)
uint64_t main_f_147e180(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147e190  (orig 0x147e190, tailcall)
uint64_t main_f_147e190(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147e1a0  (orig 0x147e1a0, tailcall)
void main_f_147e1a0() { main::sub_147e1e0(); }

// sub_147e1b0  (orig 0x147e1b0, tailcall)
void main_f_147e1b0() { main::sub_147e1e0(); }

// sub_147e1c0  (orig 0x147e1c0, tailcall)
uint64_t main_f_147e1c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147e1d0  (orig 0x147e1d0, tailcall)
uint64_t main_f_147e1d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147e6e0  (orig 0x147e6e0, tailcall)
void main_f_147e6e0() { main::sub_e7c4c0(); }

// sub_147e6f0  (orig 0x147e6f0, tailcall)
void main_f_147e6f0() { main::sub_147e760(); }

// sub_147e700  (orig 0x147e700, tailcall)
uint64_t main_f_147e700(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147e710  (orig 0x147e710, tailcall)
uint64_t main_f_147e710(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_147e720  (orig 0x147e720, tailcall)
void main_f_147e720() { main::sub_147e760(); }

// sub_147e730  (orig 0x147e730, tailcall)
void main_f_147e730() { main::sub_147e760(); }

// sub_147e740  (orig 0x147e740, tailcall)
uint64_t main_f_147e740(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147e750  (orig 0x147e750, tailcall)
uint64_t main_f_147e750(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_147f140  (orig 0x147f140, tailcall)
void main_f_147f140() { main::sub_147f3b0(); }

// sub_147f270  (orig 0x147f270, tailcall)
void main_f_147f270() { main::sub_147f3b0(); }

// sub_147f280  (orig 0x147f280, tailcall)
void main_f_147f280() { main::sub_147f3b0(); }

// sub_147fd50  (orig 0x147fd50, tailcall)
void main_f_147fd50() { main::sub_147ffc0(); }

// sub_147fe80  (orig 0x147fe80, tailcall)
void main_f_147fe80() { main::sub_147ffc0(); }

// sub_147fe90  (orig 0x147fe90, tailcall)
void main_f_147fe90() { main::sub_147ffc0(); }

// sub_1480450  (orig 0x1480450, tailcall)
void main_f_1480450() { main::sub_e7c4c0(); }

// sub_1480460  (orig 0x1480460, tailcall)
void main_f_1480460() { main::sub_14804d0(); }

// sub_1480470  (orig 0x1480470, tailcall)
uint64_t main_f_1480470(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1480480  (orig 0x1480480, tailcall)
uint64_t main_f_1480480(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1480490  (orig 0x1480490, tailcall)
void main_f_1480490() { main::sub_14804d0(); }

// sub_14804a0  (orig 0x14804a0, tailcall)
void main_f_14804a0() { main::sub_14804d0(); }

// sub_14804b0  (orig 0x14804b0, tailcall)
uint64_t main_f_14804b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14804c0  (orig 0x14804c0, tailcall)
uint64_t main_f_14804c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1480820  (orig 0x1480820, tailcall)
void main_f_1480820() { main::sub_e7c4c0(); }

// sub_1480830  (orig 0x1480830, tailcall)
void main_f_1480830() { main::sub_14808a0(); }

// sub_1480840  (orig 0x1480840, tailcall)
uint64_t main_f_1480840(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1480850  (orig 0x1480850, tailcall)
uint64_t main_f_1480850(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1480860  (orig 0x1480860, tailcall)
void main_f_1480860() { main::sub_14808a0(); }

// sub_1480870  (orig 0x1480870, tailcall)
void main_f_1480870() { main::sub_14808a0(); }

// sub_1480880  (orig 0x1480880, tailcall)
uint64_t main_f_1480880(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1480890  (orig 0x1480890, tailcall)
uint64_t main_f_1480890(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1480cc0  (orig 0x1480cc0, tailcall)
void main_f_1480cc0() { main::sub_e7c4c0(); }

// sub_1480cd0  (orig 0x1480cd0, tailcall)
void main_f_1480cd0() { main::sub_1480d40(); }

// sub_1480ce0  (orig 0x1480ce0, tailcall)
uint64_t main_f_1480ce0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1480cf0  (orig 0x1480cf0, tailcall)
uint64_t main_f_1480cf0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1480d00  (orig 0x1480d00, tailcall)
void main_f_1480d00() { main::sub_1480d40(); }

// sub_1480d10  (orig 0x1480d10, tailcall)
void main_f_1480d10() { main::sub_1480d40(); }

// sub_1480d20  (orig 0x1480d20, tailcall)
uint64_t main_f_1480d20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1480d30  (orig 0x1480d30, tailcall)
uint64_t main_f_1480d30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14810a0  (orig 0x14810a0, tailcall)
void main_f_14810a0() { main::sub_e7c4c0(); }

// sub_14810b0  (orig 0x14810b0, tailcall)
void main_f_14810b0() { main::sub_1481120(); }

// sub_14810c0  (orig 0x14810c0, tailcall)
uint64_t main_f_14810c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14810d0  (orig 0x14810d0, tailcall)
uint64_t main_f_14810d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14810e0  (orig 0x14810e0, tailcall)
void main_f_14810e0() { main::sub_1481120(); }

// sub_14810f0  (orig 0x14810f0, tailcall)
void main_f_14810f0() { main::sub_1481120(); }

// sub_1481100  (orig 0x1481100, tailcall)
uint64_t main_f_1481100(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1481110  (orig 0x1481110, tailcall)
uint64_t main_f_1481110(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1481480  (orig 0x1481480, tailcall)
void main_f_1481480() { main::sub_e7c4c0(); }

// sub_1481490  (orig 0x1481490, tailcall)
void main_f_1481490() { main::sub_1481500(); }

// sub_14814a0  (orig 0x14814a0, tailcall)
uint64_t main_f_14814a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14814b0  (orig 0x14814b0, tailcall)
uint64_t main_f_14814b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14814c0  (orig 0x14814c0, tailcall)
void main_f_14814c0() { main::sub_1481500(); }

// sub_14814d0  (orig 0x14814d0, tailcall)
void main_f_14814d0() { main::sub_1481500(); }

// sub_14814e0  (orig 0x14814e0, tailcall)
uint64_t main_f_14814e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14814f0  (orig 0x14814f0, tailcall)
uint64_t main_f_14814f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1481860  (orig 0x1481860, tailcall)
void main_f_1481860() { main::sub_e7c4c0(); }

// sub_1481870  (orig 0x1481870, tailcall)
void main_f_1481870() { main::sub_14818e0(); }

// sub_1481880  (orig 0x1481880, tailcall)
uint64_t main_f_1481880(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1481890  (orig 0x1481890, tailcall)
uint64_t main_f_1481890(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14818a0  (orig 0x14818a0, tailcall)
void main_f_14818a0() { main::sub_14818e0(); }

// sub_14818b0  (orig 0x14818b0, tailcall)
void main_f_14818b0() { main::sub_14818e0(); }

// sub_14818c0  (orig 0x14818c0, tailcall)
uint64_t main_f_14818c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14818d0  (orig 0x14818d0, tailcall)
uint64_t main_f_14818d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1481e80  (orig 0x1481e80, tailcall)
void main_f_1481e80() { main::sub_1482030(); }

// sub_1481f50  (orig 0x1481f50, tailcall)
void main_f_1481f50() { main::sub_1482030(); }

// sub_1481f60  (orig 0x1481f60, tailcall)
void main_f_1481f60() { main::sub_1482030(); }

// sub_1483c40  (orig 0x1483c40, tailcall)
void main_f_1483c40() { main::sub_1483a40(); }

// sub_1483d00  (orig 0x1483d00, tailcall)
uint64_t main_f_1483d00(void* a0) {
    return main::sub_1483a40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1483d10  (orig 0x1483d10, tailcall)
uint64_t main_f_1483d10(void* a0) {
    return main::sub_1483a40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1483e80  (orig 0x1483e80, tailcall)
uint64_t main_f_1483e80(void* a0) {
    return main::sub_1483a40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1483e90  (orig 0x1483e90, tailcall)
uint64_t main_f_1483e90(void* a0) {
    return main::sub_1483a40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1483f80  (orig 0x1483f80, tailcall)
void main_f_1483f80() { main::sub_1484170(); }

// sub_1484070  (orig 0x1484070, tailcall)
void main_f_1484070() { main::sub_1484170(); }

// sub_1484080  (orig 0x1484080, tailcall)
void main_f_1484080() { main::sub_1484170(); }

// sub_1484a50  (orig 0x1484a50, tailcall)
void main_f_1484a50() { main::sub_e7c4c0(); }

// sub_1484a60  (orig 0x1484a60, tailcall)
void main_f_1484a60() { main::sub_1484ad0(); }

// sub_1484a70  (orig 0x1484a70, tailcall)
uint64_t main_f_1484a70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1484a80  (orig 0x1484a80, tailcall)
uint64_t main_f_1484a80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1484a90  (orig 0x1484a90, tailcall)
void main_f_1484a90() { main::sub_1484ad0(); }

// sub_1484aa0  (orig 0x1484aa0, tailcall)
void main_f_1484aa0() { main::sub_1484ad0(); }

// sub_1484ab0  (orig 0x1484ab0, tailcall)
uint64_t main_f_1484ab0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1484ac0  (orig 0x1484ac0, tailcall)
uint64_t main_f_1484ac0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1484fd0  (orig 0x1484fd0, tailcall)
void main_f_1484fd0() { main::sub_e7c4c0(); }

// sub_1484fe0  (orig 0x1484fe0, tailcall)
void main_f_1484fe0() { main::sub_1485050(); }

// sub_1484ff0  (orig 0x1484ff0, tailcall)
uint64_t main_f_1484ff0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1485000  (orig 0x1485000, tailcall)
uint64_t main_f_1485000(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1485010  (orig 0x1485010, tailcall)
void main_f_1485010() { main::sub_1485050(); }

// sub_1485020  (orig 0x1485020, tailcall)
void main_f_1485020() { main::sub_1485050(); }

// sub_1485030  (orig 0x1485030, tailcall)
uint64_t main_f_1485030(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1485040  (orig 0x1485040, tailcall)
uint64_t main_f_1485040(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1485510  (orig 0x1485510, tailcall)
void main_f_1485510() { main::sub_e7c4c0(); }

// sub_1485520  (orig 0x1485520, tailcall)
void main_f_1485520() { main::sub_1485590(); }

// sub_1485530  (orig 0x1485530, tailcall)
uint64_t main_f_1485530(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1485540  (orig 0x1485540, tailcall)
uint64_t main_f_1485540(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1485550  (orig 0x1485550, tailcall)
void main_f_1485550() { main::sub_1485590(); }

// sub_1485560  (orig 0x1485560, tailcall)
void main_f_1485560() { main::sub_1485590(); }

// sub_1485570  (orig 0x1485570, tailcall)
uint64_t main_f_1485570(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1485580  (orig 0x1485580, tailcall)
uint64_t main_f_1485580(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1485d60  (orig 0x1485d60, tailcall)
void main_f_1485d60() { main::sub_1485d90(); }

// sub_1485d70  (orig 0x1485d70, tailcall)
void main_f_1485d70() { main::sub_1485d90(); }

// sub_1485d80  (orig 0x1485d80, tailcall)
void main_f_1485d80() { main::sub_1485d90(); }

// sub_1489140  (orig 0x1489140, tailcall)
void main_f_1489140() { main::sub_1488f50(); }

// sub_1489200  (orig 0x1489200, tailcall)
uint64_t main_f_1489200(void* a0) {
    return main::sub_1488f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1489210  (orig 0x1489210, tailcall)
uint64_t main_f_1489210(void* a0) {
    return main::sub_1488f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1489380  (orig 0x1489380, tailcall)
uint64_t main_f_1489380(void* a0) {
    return main::sub_1488f50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1489390  (orig 0x1489390, tailcall)
uint64_t main_f_1489390(void* a0) {
    return main::sub_1488f50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1489460  (orig 0x1489460, tailcall)
void main_f_1489460() { main::sub_1489610(); }

// sub_1489530  (orig 0x1489530, tailcall)
void main_f_1489530() { main::sub_1489610(); }

// sub_1489540  (orig 0x1489540, tailcall)
void main_f_1489540() { main::sub_1489610(); }

// sub_148de50  (orig 0x148de50, tailcall)
void main_f_148de50() { main::sub_e7c4c0(); }

// sub_148de60  (orig 0x148de60, tailcall)
void main_f_148de60() { main::sub_148ded0(); }

// sub_148de70  (orig 0x148de70, tailcall)
uint64_t main_f_148de70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_148de80  (orig 0x148de80, tailcall)
uint64_t main_f_148de80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_148de90  (orig 0x148de90, tailcall)
void main_f_148de90() { main::sub_148ded0(); }

// sub_148dea0  (orig 0x148dea0, tailcall)
void main_f_148dea0() { main::sub_148ded0(); }

// sub_148deb0  (orig 0x148deb0, tailcall)
uint64_t main_f_148deb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_148dec0  (orig 0x148dec0, tailcall)
uint64_t main_f_148dec0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_148e7f0  (orig 0x148e7f0, tailcall)
void main_f_148e7f0() { main::sub_e7c4c0(); }

// sub_148e800  (orig 0x148e800, tailcall)
void main_f_148e800() { main::sub_148e870(); }

// sub_148e810  (orig 0x148e810, tailcall)
uint64_t main_f_148e810(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_148e820  (orig 0x148e820, tailcall)
uint64_t main_f_148e820(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_148e830  (orig 0x148e830, tailcall)
void main_f_148e830() { main::sub_148e870(); }

// sub_148e840  (orig 0x148e840, tailcall)
void main_f_148e840() { main::sub_148e870(); }

// sub_148e850  (orig 0x148e850, tailcall)
uint64_t main_f_148e850(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_148e860  (orig 0x148e860, tailcall)
uint64_t main_f_148e860(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_148f040  (orig 0x148f040, tailcall)
void main_f_148f040() { main::sub_e7c4c0(); }

// sub_148f050  (orig 0x148f050, tailcall)
void main_f_148f050() { main::sub_148f0c0(); }

// sub_148f060  (orig 0x148f060, tailcall)
uint64_t main_f_148f060(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_148f070  (orig 0x148f070, tailcall)
uint64_t main_f_148f070(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_148f080  (orig 0x148f080, tailcall)
void main_f_148f080() { main::sub_148f0c0(); }

// sub_148f090  (orig 0x148f090, tailcall)
void main_f_148f090() { main::sub_148f0c0(); }

// sub_148f0a0  (orig 0x148f0a0, tailcall)
uint64_t main_f_148f0a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_148f0b0  (orig 0x148f0b0, tailcall)
uint64_t main_f_148f0b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_148f6d0  (orig 0x148f6d0, tailcall)
void main_f_148f6d0() { main::sub_e7c4c0(); }

// sub_148f6e0  (orig 0x148f6e0, tailcall)
void main_f_148f6e0() { main::sub_148f750(); }

// sub_148f6f0  (orig 0x148f6f0, tailcall)
uint64_t main_f_148f6f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_148f700  (orig 0x148f700, tailcall)
uint64_t main_f_148f700(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_148f710  (orig 0x148f710, tailcall)
void main_f_148f710() { main::sub_148f750(); }

// sub_148f720  (orig 0x148f720, tailcall)
void main_f_148f720() { main::sub_148f750(); }

// sub_148f730  (orig 0x148f730, tailcall)
uint64_t main_f_148f730(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_148f740  (orig 0x148f740, tailcall)
uint64_t main_f_148f740(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_148fc00  (orig 0x148fc00, tailcall)
void main_f_148fc00() { main::sub_148fdb0(); }

// sub_148fcd0  (orig 0x148fcd0, tailcall)
void main_f_148fcd0() { main::sub_148fdb0(); }

// sub_148fce0  (orig 0x148fce0, tailcall)
void main_f_148fce0() { main::sub_148fdb0(); }

// sub_14906f0  (orig 0x14906f0, tailcall)
void main_f_14906f0() { main::sub_14908a0(); }

// sub_14907c0  (orig 0x14907c0, tailcall)
void main_f_14907c0() { main::sub_14908a0(); }

// sub_14907d0  (orig 0x14907d0, tailcall)
void main_f_14907d0() { main::sub_14908a0(); }

// sub_1490d00  (orig 0x1490d00, tailcall)
uint64_t main_f_1490d00(uint64_t a0) {
    return main::sub_136e8b0(((uintptr_t)(45)));
}

// sub_1490d10  (orig 0x1490d10, tailcall)
void main_f_1490d10() { main::sub_e7c4c0(); }

// sub_1490d20  (orig 0x1490d20, tailcall)
void main_f_1490d20() { main::sub_1490d90(); }

// sub_1490d30  (orig 0x1490d30, tailcall)
uint64_t main_f_1490d30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1490d40  (orig 0x1490d40, tailcall)
uint64_t main_f_1490d40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1490d50  (orig 0x1490d50, tailcall)
void main_f_1490d50() { main::sub_1490d90(); }

// sub_1490d60  (orig 0x1490d60, tailcall)
void main_f_1490d60() { main::sub_1490d90(); }

// sub_1490d70  (orig 0x1490d70, tailcall)
uint64_t main_f_1490d70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1490d80  (orig 0x1490d80, tailcall)
uint64_t main_f_1490d80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1491180  (orig 0x1491180, tailcall)
void main_f_1491180() { main::sub_e7c4c0(); }

// sub_1491190  (orig 0x1491190, tailcall)
void main_f_1491190() { main::sub_1491200(); }

// sub_14911a0  (orig 0x14911a0, tailcall)
uint64_t main_f_14911a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14911b0  (orig 0x14911b0, tailcall)
uint64_t main_f_14911b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14911c0  (orig 0x14911c0, tailcall)
void main_f_14911c0() { main::sub_1491200(); }

// sub_14911d0  (orig 0x14911d0, tailcall)
void main_f_14911d0() { main::sub_1491200(); }

// sub_14911e0  (orig 0x14911e0, tailcall)
uint64_t main_f_14911e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14911f0  (orig 0x14911f0, tailcall)
uint64_t main_f_14911f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14915a0  (orig 0x14915a0, tailcall)
void main_f_14915a0() { main::sub_e7c4c0(); }

// sub_14915b0  (orig 0x14915b0, tailcall)
void main_f_14915b0() { main::sub_1491620(); }

// sub_14915c0  (orig 0x14915c0, tailcall)
uint64_t main_f_14915c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14915d0  (orig 0x14915d0, tailcall)
uint64_t main_f_14915d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14915e0  (orig 0x14915e0, tailcall)
void main_f_14915e0() { main::sub_1491620(); }

// sub_14915f0  (orig 0x14915f0, tailcall)
void main_f_14915f0() { main::sub_1491620(); }

// sub_1491600  (orig 0x1491600, tailcall)
uint64_t main_f_1491600(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1491610  (orig 0x1491610, tailcall)
uint64_t main_f_1491610(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14919f0  (orig 0x14919f0, tailcall)
void main_f_14919f0() { main::sub_e7c4c0(); }

// sub_1491a00  (orig 0x1491a00, tailcall)
void main_f_1491a00() { main::sub_1491a70(); }

// sub_1491a10  (orig 0x1491a10, tailcall)
uint64_t main_f_1491a10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1491a20  (orig 0x1491a20, tailcall)
uint64_t main_f_1491a20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1491a30  (orig 0x1491a30, tailcall)
void main_f_1491a30() { main::sub_1491a70(); }

// sub_1491a40  (orig 0x1491a40, tailcall)
void main_f_1491a40() { main::sub_1491a70(); }

// sub_1491a50  (orig 0x1491a50, tailcall)
uint64_t main_f_1491a50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1491a60  (orig 0x1491a60, tailcall)
uint64_t main_f_1491a60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14920c0  (orig 0x14920c0, tailcall)
uint64_t main_f_14920c0(void* a0) {
    return main::sub_14a45f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_14920d0  (orig 0x14920d0, tailcall)
void main_f_14920d0() { main::sub_e7c4c0(); }

// sub_14920e0  (orig 0x14920e0, tailcall)
void main_f_14920e0() { main::sub_1492150(); }

// sub_14920f0  (orig 0x14920f0, tailcall)
uint64_t main_f_14920f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1492100  (orig 0x1492100, tailcall)
uint64_t main_f_1492100(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1492110  (orig 0x1492110, tailcall)
void main_f_1492110() { main::sub_1492150(); }

// sub_1492120  (orig 0x1492120, tailcall)
void main_f_1492120() { main::sub_1492150(); }

// sub_1492130  (orig 0x1492130, tailcall)
uint64_t main_f_1492130(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1492140  (orig 0x1492140, tailcall)
uint64_t main_f_1492140(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14927c0  (orig 0x14927c0, tailcall)
void main_f_14927c0() { main::sub_e7c4c0(); }

// sub_14927d0  (orig 0x14927d0, tailcall)
void main_f_14927d0() { main::sub_1492840(); }

// sub_14927e0  (orig 0x14927e0, tailcall)
uint64_t main_f_14927e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14927f0  (orig 0x14927f0, tailcall)
uint64_t main_f_14927f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1492800  (orig 0x1492800, tailcall)
void main_f_1492800() { main::sub_1492840(); }

// sub_1492810  (orig 0x1492810, tailcall)
void main_f_1492810() { main::sub_1492840(); }

// sub_1492820  (orig 0x1492820, tailcall)
uint64_t main_f_1492820(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1492830  (orig 0x1492830, tailcall)
uint64_t main_f_1492830(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1493010  (orig 0x1493010, tailcall)
void main_f_1493010() { main::sub_e7c4c0(); }

// sub_1493020  (orig 0x1493020, tailcall)
void main_f_1493020() { main::sub_1493090(); }

// sub_1493030  (orig 0x1493030, tailcall)
uint64_t main_f_1493030(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1493040  (orig 0x1493040, tailcall)
uint64_t main_f_1493040(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1493050  (orig 0x1493050, tailcall)
void main_f_1493050() { main::sub_1493090(); }

// sub_1493060  (orig 0x1493060, tailcall)
void main_f_1493060() { main::sub_1493090(); }

// sub_1493070  (orig 0x1493070, tailcall)
uint64_t main_f_1493070(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1493080  (orig 0x1493080, tailcall)
uint64_t main_f_1493080(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1493830  (orig 0x1493830, tailcall)
void main_f_1493830() { main::sub_14939e0(); }

// sub_1493900  (orig 0x1493900, tailcall)
void main_f_1493900() { main::sub_14939e0(); }

// sub_1493910  (orig 0x1493910, tailcall)
void main_f_1493910() { main::sub_14939e0(); }

// sub_1494180  (orig 0x1494180, tailcall)
void main_f_1494180() { main::sub_1494330(); }

// sub_1494250  (orig 0x1494250, tailcall)
void main_f_1494250() { main::sub_1494330(); }

// sub_1494260  (orig 0x1494260, tailcall)
void main_f_1494260() { main::sub_1494330(); }

// sub_1494a60  (orig 0x1494a60, tailcall)
void main_f_1494a60() { main::sub_e7c4c0(); }

// sub_1494a70  (orig 0x1494a70, tailcall)
void main_f_1494a70() { main::sub_1494ae0(); }

// sub_1494a80  (orig 0x1494a80, tailcall)
uint64_t main_f_1494a80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1494a90  (orig 0x1494a90, tailcall)
uint64_t main_f_1494a90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1494aa0  (orig 0x1494aa0, tailcall)
void main_f_1494aa0() { main::sub_1494ae0(); }

// sub_1494ab0  (orig 0x1494ab0, tailcall)
void main_f_1494ab0() { main::sub_1494ae0(); }

// sub_1494ac0  (orig 0x1494ac0, tailcall)
uint64_t main_f_1494ac0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1494ad0  (orig 0x1494ad0, tailcall)
uint64_t main_f_1494ad0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1494e40  (orig 0x1494e40, tailcall)
uint64_t main_f_1494e40(void* a0) {
    return main::sub_14a46c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_1494e50  (orig 0x1494e50, tailcall)
void main_f_1494e50() { main::sub_e7c4c0(); }

// sub_1494e60  (orig 0x1494e60, tailcall)
void main_f_1494e60() { main::sub_1494ed0(); }

// sub_1494e70  (orig 0x1494e70, tailcall)
uint64_t main_f_1494e70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1494e80  (orig 0x1494e80, tailcall)
uint64_t main_f_1494e80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1494e90  (orig 0x1494e90, tailcall)
void main_f_1494e90() { main::sub_1494ed0(); }

// sub_1494ea0  (orig 0x1494ea0, tailcall)
void main_f_1494ea0() { main::sub_1494ed0(); }

// sub_1494eb0  (orig 0x1494eb0, tailcall)
uint64_t main_f_1494eb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1494ec0  (orig 0x1494ec0, tailcall)
uint64_t main_f_1494ec0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1495500  (orig 0x1495500, tailcall)
void main_f_1495500() { main::sub_14956b0(); }

// sub_14955d0  (orig 0x14955d0, tailcall)
void main_f_14955d0() { main::sub_14956b0(); }

// sub_14955e0  (orig 0x14955e0, tailcall)
void main_f_14955e0() { main::sub_14956b0(); }

// sub_1495bb0  (orig 0x1495bb0, tailcall)
void main_f_1495bb0() { main::sub_1495d60(); }

// sub_1495c80  (orig 0x1495c80, tailcall)
void main_f_1495c80() { main::sub_1495d60(); }

// sub_1495c90  (orig 0x1495c90, tailcall)
void main_f_1495c90() { main::sub_1495d60(); }

// sub_1496260  (orig 0x1496260, tailcall)
void main_f_1496260() { main::sub_1496410(); }

// sub_1496330  (orig 0x1496330, tailcall)
void main_f_1496330() { main::sub_1496410(); }

// sub_1496340  (orig 0x1496340, tailcall)
void main_f_1496340() { main::sub_1496410(); }

// sub_1496910  (orig 0x1496910, tailcall)
void main_f_1496910() { main::sub_1496ac0(); }

// sub_14969e0  (orig 0x14969e0, tailcall)
void main_f_14969e0() { main::sub_1496ac0(); }

// sub_14969f0  (orig 0x14969f0, tailcall)
void main_f_14969f0() { main::sub_1496ac0(); }

// sub_1497470  (orig 0x1497470, tailcall)
void main_f_1497470() { main::sub_e7c4c0(); }

// sub_1497480  (orig 0x1497480, tailcall)
void main_f_1497480() { main::sub_14974f0(); }

// sub_1497490  (orig 0x1497490, tailcall)
uint64_t main_f_1497490(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14974a0  (orig 0x14974a0, tailcall)
uint64_t main_f_14974a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14974b0  (orig 0x14974b0, tailcall)
void main_f_14974b0() { main::sub_14974f0(); }

// sub_14974c0  (orig 0x14974c0, tailcall)
void main_f_14974c0() { main::sub_14974f0(); }

// sub_14974d0  (orig 0x14974d0, tailcall)
uint64_t main_f_14974d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14974e0  (orig 0x14974e0, tailcall)
uint64_t main_f_14974e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1497c60  (orig 0x1497c60, tailcall)
void main_f_1497c60() { main::sub_e7c4c0(); }

// sub_1497c70  (orig 0x1497c70, tailcall)
void main_f_1497c70() { main::sub_1497ce0(); }

// sub_1497c80  (orig 0x1497c80, tailcall)
uint64_t main_f_1497c80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1497c90  (orig 0x1497c90, tailcall)
uint64_t main_f_1497c90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1497ca0  (orig 0x1497ca0, tailcall)
void main_f_1497ca0() { main::sub_1497ce0(); }

// sub_1497cb0  (orig 0x1497cb0, tailcall)
void main_f_1497cb0() { main::sub_1497ce0(); }

// sub_1497cc0  (orig 0x1497cc0, tailcall)
uint64_t main_f_1497cc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1497cd0  (orig 0x1497cd0, tailcall)
uint64_t main_f_1497cd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14988e0  (orig 0x14988e0, tailcall)
void main_f_14988e0() { main::sub_1498a90(); }

// sub_14989b0  (orig 0x14989b0, tailcall)
void main_f_14989b0() { main::sub_1498a90(); }

// sub_14989c0  (orig 0x14989c0, tailcall)
void main_f_14989c0() { main::sub_1498a90(); }

// sub_1498d80  (orig 0x1498d80, tailcall)
uint64_t main_f_1498d80(void* a0) {
    return main::sub_1498d90(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_149ac80  (orig 0x149ac80, tailcall)
void main_f_149ac80() { main::sub_e7feb0(); }

// sub_149ac90  (orig 0x149ac90, tailcall)
void main_f_149ac90() { main::sub_149ad00(); }

// sub_149aca0  (orig 0x149aca0, tailcall)
uint64_t main_f_149aca0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_149acb0  (orig 0x149acb0, tailcall)
uint64_t main_f_149acb0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_149acc0  (orig 0x149acc0, tailcall)
void main_f_149acc0() { main::sub_149ad00(); }

// sub_149acd0  (orig 0x149acd0, tailcall)
void main_f_149acd0() { main::sub_149ad00(); }

// sub_149ace0  (orig 0x149ace0, tailcall)
uint64_t main_f_149ace0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_149acf0  (orig 0x149acf0, tailcall)
uint64_t main_f_149acf0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_149b000  (orig 0x149b000, tailcall)
void main_f_149b000() { main::sub_e7feb0(); }

// sub_149b010  (orig 0x149b010, tailcall)
void main_f_149b010() { main::sub_149b080(); }

// sub_149b020  (orig 0x149b020, tailcall)
uint64_t main_f_149b020(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_149b030  (orig 0x149b030, tailcall)
uint64_t main_f_149b030(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_149b040  (orig 0x149b040, tailcall)
void main_f_149b040() { main::sub_149b080(); }

// sub_149b050  (orig 0x149b050, tailcall)
void main_f_149b050() { main::sub_149b080(); }

// sub_149b060  (orig 0x149b060, tailcall)
uint64_t main_f_149b060(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_149b070  (orig 0x149b070, tailcall)
uint64_t main_f_149b070(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_149ed40  (orig 0x149ed40, tailcall)
void main_f_149ed40() { main::sub_149e8a0(); }

// sub_149ed50  (orig 0x149ed50, tailcall)
void main_f_149ed50() { main::sub_149edc0(); }

// sub_149ed60  (orig 0x149ed60, tailcall)
uint64_t main_f_149ed60(void* a0) {
    return main::sub_149e8a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_149ed70  (orig 0x149ed70, tailcall)
uint64_t main_f_149ed70(void* a0) {
    return main::sub_149e8a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_149ed80  (orig 0x149ed80, tailcall)
void main_f_149ed80() { main::sub_149edc0(); }

// sub_149ed90  (orig 0x149ed90, tailcall)
void main_f_149ed90() { main::sub_149edc0(); }

// sub_149eda0  (orig 0x149eda0, tailcall)
uint64_t main_f_149eda0(void* a0) {
    return main::sub_149e8a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_149edb0  (orig 0x149edb0, tailcall)
uint64_t main_f_149edb0(void* a0) {
    return main::sub_149e8a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_149fce0  (orig 0x149fce0, tailcall)
void main_f_149fce0() { main::sub_149fe90(); }

// sub_149fdb0  (orig 0x149fdb0, tailcall)
void main_f_149fdb0() { main::sub_149fe90(); }

// sub_149fdc0  (orig 0x149fdc0, tailcall)
void main_f_149fdc0() { main::sub_149fe90(); }

// sub_14a1d30  (orig 0x14a1d30, tailcall)
void main_f_14a1d30() { main::sub_14a1b90(); }

// sub_14a1d40  (orig 0x14a1d40, tailcall)
void main_f_14a1d40() { main::sub_148fee0(); }

// sub_14a1d50  (orig 0x14a1d50, tailcall)
uint64_t main_f_14a1d50(void* a0) {
    return main::sub_14a1b90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14a1d60  (orig 0x14a1d60, tailcall)
uint64_t main_f_14a1d60(void* a0) {
    return main::sub_14a1b90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14a1d70  (orig 0x14a1d70, tailcall)
void main_f_14a1d70() { main::sub_148fee0(); }

// sub_14a1d80  (orig 0x14a1d80, tailcall)
void main_f_14a1d80() { main::sub_148fee0(); }

// sub_14a1d90  (orig 0x14a1d90, tailcall)
uint64_t main_f_14a1d90(void* a0) {
    return main::sub_14a1b90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14a1da0  (orig 0x14a1da0, tailcall)
uint64_t main_f_14a1da0(void* a0) {
    return main::sub_14a1b90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14a5620  (orig 0x14a5620, tailcall)
void main_f_14a5620() { main::sub_14a53b0(); }

// sub_14a5630  (orig 0x14a5630, tailcall)
void main_f_14a5630() { main::sub_1495000(); }

// sub_14a5640  (orig 0x14a5640, tailcall)
uint64_t main_f_14a5640(void* a0) {
    return main::sub_14a53b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14a5650  (orig 0x14a5650, tailcall)
uint64_t main_f_14a5650(void* a0) {
    return main::sub_14a53b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14a5660  (orig 0x14a5660, tailcall)
void main_f_14a5660() { main::sub_1495000(); }

// sub_14a5670  (orig 0x14a5670, tailcall)
void main_f_14a5670() { main::sub_1495000(); }

// sub_14a5680  (orig 0x14a5680, tailcall)
uint64_t main_f_14a5680(void* a0) {
    return main::sub_14a53b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14a5690  (orig 0x14a5690, tailcall)
uint64_t main_f_14a5690(void* a0) {
    return main::sub_14a53b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14a6260  (orig 0x14a6260, tailcall)
void main_f_14a6260() { main::sub_14a6450(); }

// sub_14a6350  (orig 0x14a6350, tailcall)
void main_f_14a6350() { main::sub_14a6450(); }

// sub_14a6360  (orig 0x14a6360, tailcall)
void main_f_14a6360() { main::sub_14a6450(); }

// sub_14a7a10  (orig 0x14a7a10, tailcall)
void main_f_14a7a10() { main::sub_14a7d00(); }

// sub_14a7b80  (orig 0x14a7b80, tailcall)
void main_f_14a7b80() { main::sub_14a7d00(); }

// sub_14a7b90  (orig 0x14a7b90, tailcall)
void main_f_14a7b90() { main::sub_14a7d00(); }

// sub_14a81f0  (orig 0x14a81f0, tailcall)
uint64_t main_f_14a81f0(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14a8200  (orig 0x14a8200, tailcall)
uint64_t main_f_14a8200(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14a9570  (orig 0x14a9570, tailcall)
uint64_t main_f_14a9570(void* a0) {
    return main::sub_6859b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 192))));
}

// sub_14aac90  (orig 0x14aac90, tailcall)
uint64_t main_f_14aac90(void* a0) {
    return main::sub_14aa880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14aaca0  (orig 0x14aaca0, tailcall)
void main_f_14aaca0() { main::sub_14aa880(); }

// sub_14aacb0  (orig 0x14aacb0, tailcall)
uint64_t main_f_14aacb0(void* a0) {
    return main::sub_14aa880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b1e40  (orig 0x14b1e40, tailcall)
void main_f_14b1e40() { main::sub_14b1d50(); }

// sub_14b1f00  (orig 0x14b1f00, tailcall)
uint64_t main_f_14b1f00(void* a0) {
    return main::sub_14b1d50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b1f10  (orig 0x14b1f10, tailcall)
uint64_t main_f_14b1f10(void* a0) {
    return main::sub_14b1d50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b2080  (orig 0x14b2080, tailcall)
uint64_t main_f_14b2080(void* a0) {
    return main::sub_14b1d50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b2090  (orig 0x14b2090, tailcall)
uint64_t main_f_14b2090(void* a0) {
    return main::sub_14b1d50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b2cd0  (orig 0x14b2cd0, tailcall)
uint64_t main_f_14b2cd0(void* a0) {
    return main::sub_14ab080(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14b2ce0  (orig 0x14b2ce0, tailcall)
uint64_t main_f_14b2ce0(void* a0) {
    return main::sub_14ab0c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14b2cf0  (orig 0x14b2cf0, tailcall)
uint64_t main_f_14b2cf0(void* a0) {
    return main::sub_14ab200(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14b2d00  (orig 0x14b2d00, tailcall)
uint64_t main_f_14b2d00(void* a0) {
    return main::sub_14ab2b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14b2d10  (orig 0x14b2d10, tailcall)
uint64_t main_f_14b2d10(void* a0) {
    return main::sub_14ab380(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14b2d20  (orig 0x14b2d20, tailcall)
uint64_t main_f_14b2d20(void* a0) {
    return main::sub_14ab440(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14b3050  (orig 0x14b3050, tailcall)
uint64_t main_f_14b3050(void* a0) {
    return main::sub_14ab9a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14b59c0  (orig 0x14b59c0, tailcall)
void main_f_14b59c0() { main::sub_14a7fd0(); }

// sub_14b5a50  (orig 0x14b5a50, tailcall)
uint64_t main_f_14b5a50(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b5a60  (orig 0x14b5a60, tailcall)
uint64_t main_f_14b5a60(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b5b50  (orig 0x14b5b50, tailcall)
uint64_t main_f_14b5b50(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b5b60  (orig 0x14b5b60, tailcall)
uint64_t main_f_14b5b60(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b5fc0  (orig 0x14b5fc0, tailcall)
void main_f_14b5fc0() { main::sub_14a7fd0(); }

// sub_14b6050  (orig 0x14b6050, tailcall)
uint64_t main_f_14b6050(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b6060  (orig 0x14b6060, tailcall)
uint64_t main_f_14b6060(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b6150  (orig 0x14b6150, tailcall)
uint64_t main_f_14b6150(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b6160  (orig 0x14b6160, tailcall)
uint64_t main_f_14b6160(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b61c0  (orig 0x14b61c0, tailcall)
void main_f_14b61c0() { main::sub_14a7fd0(); }

// sub_14b61d0  (orig 0x14b61d0, tailcall)
uint64_t main_f_14b61d0(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b61e0  (orig 0x14b61e0, tailcall)
uint64_t main_f_14b61e0(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b61f0  (orig 0x14b61f0, tailcall)
void main_f_14b61f0() { main::sub_14a7fd0(); }

// sub_14b6200  (orig 0x14b6200, tailcall)
uint64_t main_f_14b6200(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b6210  (orig 0x14b6210, tailcall)
uint64_t main_f_14b6210(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b6620  (orig 0x14b6620, tailcall)
void main_f_14b6620() { main::sub_14a7fd0(); }

// sub_14b6630  (orig 0x14b6630, tailcall)
uint64_t main_f_14b6630(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b6640  (orig 0x14b6640, tailcall)
uint64_t main_f_14b6640(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b6650  (orig 0x14b6650, tailcall)
void main_f_14b6650() { main::sub_14a7fd0(); }

// sub_14b6660  (orig 0x14b6660, tailcall)
uint64_t main_f_14b6660(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b6670  (orig 0x14b6670, tailcall)
uint64_t main_f_14b6670(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b6ee0  (orig 0x14b6ee0, tailcall)
void main_f_14b6ee0() { main::sub_14a7fd0(); }

// sub_14b6ef0  (orig 0x14b6ef0, tailcall)
uint64_t main_f_14b6ef0(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b6f00  (orig 0x14b6f00, tailcall)
uint64_t main_f_14b6f00(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b6f10  (orig 0x14b6f10, tailcall)
void main_f_14b6f10() { main::sub_14a7fd0(); }

// sub_14b6f20  (orig 0x14b6f20, tailcall)
uint64_t main_f_14b6f20(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b6f30  (orig 0x14b6f30, tailcall)
uint64_t main_f_14b6f30(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b7360  (orig 0x14b7360, tailcall)
void main_f_14b7360() { main::sub_14a7fd0(); }

// sub_14b7370  (orig 0x14b7370, tailcall)
uint64_t main_f_14b7370(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b7380  (orig 0x14b7380, tailcall)
uint64_t main_f_14b7380(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b7390  (orig 0x14b7390, tailcall)
void main_f_14b7390() { main::sub_14a7fd0(); }

// sub_14b73a0  (orig 0x14b73a0, tailcall)
uint64_t main_f_14b73a0(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14b73b0  (orig 0x14b73b0, tailcall)
uint64_t main_f_14b73b0(void* a0) {
    return main::sub_14a7fd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14b76a0  (orig 0x14b76a0, tailcall)
void main_f_14b76a0() { main::sub_14b70f0(); }

// sub_14b87d0  (orig 0x14b87d0, tailcall)
void main_f_14b87d0() { main::sub_14b8030(); }

// sub_14b97b0  (orig 0x14b97b0, tailcall)
void main_f_14b97b0() { main::sub_14b8960(); }

// sub_14b97c0  (orig 0x14b97c0, tailcall)
uint64_t main_f_14b97c0(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 872)));
}

// sub_14b97d0  (orig 0x14b97d0, tailcall)
uint64_t main_f_14b97d0(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 944)));
}

// sub_14b97e0  (orig 0x14b97e0, tailcall)
void main_f_14b97e0() { main::sub_14b8960(); }

// sub_14b97f0  (orig 0x14b97f0, tailcall)
uint64_t main_f_14b97f0(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 872)));
}

// sub_14b9800  (orig 0x14b9800, tailcall)
uint64_t main_f_14b9800(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 944)));
}

// sub_14b9d30  (orig 0x14b9d30, tailcall)
void main_f_14b9d30() { main::sub_14b8960(); }

// sub_14b9d40  (orig 0x14b9d40, tailcall)
uint64_t main_f_14b9d40(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 872)));
}

// sub_14b9d50  (orig 0x14b9d50, tailcall)
uint64_t main_f_14b9d50(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 944)));
}

// sub_14b9d60  (orig 0x14b9d60, tailcall)
void main_f_14b9d60() { main::sub_14b8960(); }

// sub_14b9d70  (orig 0x14b9d70, tailcall)
uint64_t main_f_14b9d70(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 872)));
}

// sub_14b9d80  (orig 0x14b9d80, tailcall)
uint64_t main_f_14b9d80(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 944)));
}

// sub_14ba0b0  (orig 0x14ba0b0, tailcall)
void main_f_14ba0b0() { main::sub_14b8960(); }

// sub_14ba0c0  (orig 0x14ba0c0, tailcall)
uint64_t main_f_14ba0c0(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 872)));
}

// sub_14ba0d0  (orig 0x14ba0d0, tailcall)
uint64_t main_f_14ba0d0(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 944)));
}

// sub_14ba0e0  (orig 0x14ba0e0, tailcall)
void main_f_14ba0e0() { main::sub_14b8960(); }

// sub_14ba0f0  (orig 0x14ba0f0, tailcall)
uint64_t main_f_14ba0f0(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 872)));
}

// sub_14ba100  (orig 0x14ba100, tailcall)
uint64_t main_f_14ba100(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 944)));
}

// sub_14bcf00  (orig 0x14bcf00, tailcall)
void main_f_14bcf00() { main::sub_ce0(); }

// sub_14bcf90  (orig 0x14bcf90, tailcall)
void main_f_14bcf90() { main::sub_14ba4c0(); }

// sub_14bdca0  (orig 0x14bdca0, tailcall)
void main_f_14bdca0() { main::sub_14bdb50(); }

// sub_14bdcb0  (orig 0x14bdcb0, tailcall)
uint64_t main_f_14bdcb0(void* a0) {
    return main::sub_14bdb50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14bdcc0  (orig 0x14bdcc0, tailcall)
uint64_t main_f_14bdcc0(void* a0) {
    return main::sub_14bdb50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14bf040  (orig 0x14bf040, tailcall)
uint64_t main_f_14bf040(void* a0) {
    return main::sub_14bf050(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14bf2f0  (orig 0x14bf2f0, tailcall)
uint64_t main_f_14bf2f0(void* a0) {
    return main::sub_14bf300(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14bf490  (orig 0x14bf490, tailcall)
uint64_t main_f_14bf490(void* a0) {
    return main::sub_14bf4a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14bf750  (orig 0x14bf750, tailcall)
uint64_t main_f_14bf750(void* a0) {
    return main::sub_14bf760(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14c51b0  (orig 0x14c51b0, tailcall)
uint64_t main_f_14c51b0(void* a0) {
    return main::sub_14c51c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14c57f0  (orig 0x14c57f0, tailcall)
uint64_t main_f_14c57f0(void* a0) {
    return main::sub_14c5800(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14c59f0  (orig 0x14c59f0, tailcall)
uint64_t main_f_14c59f0(void* a0) {
    return main::sub_14c5a00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14c5bf0  (orig 0x14c5bf0, tailcall)
uint64_t main_f_14c5bf0(void* a0) {
    return main::sub_14c5c00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14c6600  (orig 0x14c6600, tailcall)
void main_f_14c6600() { main::sub_ce0(); }

// sub_14c6670  (orig 0x14c6670, tailcall)
void main_f_14c6670() { main::sub_ce0(); }

// sub_14c6900  (orig 0x14c6900, tailcall)
void main_f_14c6900() { main::sub_ce0(); }

// sub_14c6980  (orig 0x14c6980, tailcall)
void main_f_14c6980() { main::sub_ce0(); }

// sub_14c93e0  (orig 0x14c93e0, tailcall)
uint64_t main_f_14c93e0(void* a0) {
    return main::sub_14c93f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14c9740  (orig 0x14c9740, tailcall)
uint64_t main_f_14c9740(void* a0) {
    return main::sub_14c9750(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14cae50  (orig 0x14cae50, tailcall)
uint64_t main_f_14cae50(void* a0) {
    return main::sub_14ccbd0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14cae60  (orig 0x14cae60, tailcall)
uint64_t main_f_14cae60(void* a0) {
    return main::sub_14cae70(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14cc350  (orig 0x14cc350, tailcall)
uint64_t main_f_14cc350(void* a0) {
    return main::sub_14cc360(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14cc490  (orig 0x14cc490, tailcall)
uint64_t main_f_14cc490(void* a0) {
    return main::sub_14cc4a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14cc6e0  (orig 0x14cc6e0, tailcall)
uint64_t main_f_14cc6e0(void* a0) {
    return main::anime__s_7(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14cc8c0  (orig 0x14cc8c0, tailcall)
uint64_t main_f_14cc8c0(void* a0) {
    return main::anime__s_11(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14cc8d0  (orig 0x14cc8d0, tailcall)
uint64_t main_f_14cc8d0(void* a0) {
    return main::anime__s_8(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_14d3970  (orig 0x14d3970, tailcall)
void main_f_14d3970() { main::sub_e7feb0(); }

// sub_14d3980  (orig 0x14d3980, tailcall)
void main_f_14d3980() { main::sub_14d39f0(); }

// sub_14d3990  (orig 0x14d3990, tailcall)
uint64_t main_f_14d3990(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14d39a0  (orig 0x14d39a0, tailcall)
uint64_t main_f_14d39a0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14d39b0  (orig 0x14d39b0, tailcall)
void main_f_14d39b0() { main::sub_14d39f0(); }

// sub_14d39c0  (orig 0x14d39c0, tailcall)
void main_f_14d39c0() { main::sub_14d39f0(); }

// sub_14d39d0  (orig 0x14d39d0, tailcall)
uint64_t main_f_14d39d0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14d39e0  (orig 0x14d39e0, tailcall)
uint64_t main_f_14d39e0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14d4610  (orig 0x14d4610, tailcall)
void main_f_14d4610() { main::sub_14d4880(); }

// sub_14d4740  (orig 0x14d4740, tailcall)
void main_f_14d4740() { main::sub_14d4880(); }

// sub_14d4750  (orig 0x14d4750, tailcall)
void main_f_14d4750() { main::sub_14d4880(); }

// sub_14d5160  (orig 0x14d5160, tailcall)
uint64_t main_f_14d5160(void* a0) {
    return main::sub_14d4fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14d5170  (orig 0x14d5170, tailcall)
void main_f_14d5170() { main::sub_14d4fd0(); }

// sub_14d5180  (orig 0x14d5180, tailcall)
uint64_t main_f_14d5180(void* a0) {
    return main::sub_14d4fd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14d5270  (orig 0x14d5270, tailcall)
uint64_t main_f_14d5270(void* a0) {
    return main::sub_68f670(((uintptr_t)(*(uint64_t*)((char*)(a0) + 96))));
}

// sub_14d5280  (orig 0x14d5280, tailcall)
void main_f_14d5280() { main::sub_14d5290(); }

// sub_14d9fe0  (orig 0x14d9fe0, tailcall)
uint64_t main_f_14d9fe0(void* a0) {
    return main::sub_142aa00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 392))));
}

// sub_14da600  (orig 0x14da600, tailcall)
uint64_t main_f_14da600(void* a0) {
    return main::sub_14da520(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14da610  (orig 0x14da610, tailcall)
void main_f_14da610() { main::sub_14da520(); }

// sub_14da620  (orig 0x14da620, tailcall)
uint64_t main_f_14da620(void* a0) {
    return main::sub_14da520(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14dbcb0  (orig 0x14dbcb0, tailcall)
void main_f_14dbcb0() { main::sub_14dbb70(); }

// sub_14dbcd0  (orig 0x14dbcd0, tailcall)
uint64_t main_f_14dbcd0(void* a0) {
    return main::sub_14dbb70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14dbce0  (orig 0x14dbce0, tailcall)
uint64_t main_f_14dbce0(void* a0) {
    return main::sub_14dbb70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14dc0e0  (orig 0x14dc0e0, tailcall)
void main_f_14dc0e0() { main::sub_6726c0(); }

// sub_14dc0f0  (orig 0x14dc0f0, tailcall)
uint64_t main_f_14dc0f0(void* a0) {
    return main::sub_6726c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14dc100  (orig 0x14dc100, tailcall)
uint64_t main_f_14dc100(void* a0) {
    return main::sub_6726c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14dc110  (orig 0x14dc110, tailcall)
uint64_t main_f_14dc110(void* a0) {
    return main::sub_6726c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14dc120  (orig 0x14dc120, tailcall)
uint64_t main_f_14dc120(void* a0) {
    return main::sub_6726c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14dd2a0  (orig 0x14dd2a0, tailcall)
uint64_t main_f_14dd2a0(void* a0) {
    return main::sub_14dc330(((uintptr_t)((char*)(a0) + 160)));
}

// sub_14dd6a0  (orig 0x14dd6a0, tailcall)
uint64_t main_f_14dd6a0(void* a0) {
    return main::sub_14dd440(((uintptr_t)((char*)(a0) + 24)));
}

// sub_14e1c70  (orig 0x14e1c70, tailcall)
void main_f_14e1c70() { main::sub_14e1f30(); }

// sub_14e1e40  (orig 0x14e1e40, tailcall)
void main_f_14e1e40() { main::sub_14e1f30(); }

// sub_14e1e50  (orig 0x14e1e50, tailcall)
void main_f_14e1e50() { main::sub_14e1f30(); }

// sub_14e2ba0  (orig 0x14e2ba0, tailcall)
void main_f_14e2ba0() { main::sub_14e2aa0(); }

// sub_14e2c60  (orig 0x14e2c60, tailcall)
uint64_t main_f_14e2c60(void* a0) {
    return main::sub_14e2aa0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14e2c70  (orig 0x14e2c70, tailcall)
uint64_t main_f_14e2c70(void* a0) {
    return main::sub_14e2aa0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14e2d60  (orig 0x14e2d60, tailcall)
uint64_t main_f_14e2d60(void* a0) {
    return main::sub_14e2aa0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14e2d70  (orig 0x14e2d70, tailcall)
uint64_t main_f_14e2d70(void* a0) {
    return main::sub_14e2aa0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14e56c0  (orig 0x14e56c0, tailcall)
void main_f_14e56c0() { main::sub_14e5370(); }

// sub_14e5760  (orig 0x14e5760, tailcall)
uint64_t main_f_14e5760(void* a0) {
    return main::sub_14e5370(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14e5770  (orig 0x14e5770, tailcall)
uint64_t main_f_14e5770(void* a0) {
    return main::sub_14e5370(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14e5860  (orig 0x14e5860, tailcall)
uint64_t main_f_14e5860(void* a0) {
    return main::sub_14e5370(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14e5870  (orig 0x14e5870, tailcall)
uint64_t main_f_14e5870(void* a0) {
    return main::sub_14e5370(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14e5a50  (orig 0x14e5a50, tailcall)
void main_f_14e5a50() { main::sub_f0ce40(); }

// sub_14e5c60  (orig 0x14e5c60, tailcall)
void main_f_14e5c60() { main::sub_f0ce40(); }

// sub_14e5c70  (orig 0x14e5c70, tailcall)
void main_f_14e5c70() { main::sub_f0ce40(); }

// sub_14e8170  (orig 0x14e8170, tailcall)
uint64_t main_f_14e8170(void* a0) {
    return main::sub_14e8030(((uintptr_t)((char*)(a0) - 160)));
}

// sub_14e8680  (orig 0x14e8680, tailcall)
void main_f_14e8680() { main::sub_14e8460(); }

// sub_14e8740  (orig 0x14e8740, tailcall)
uint64_t main_f_14e8740(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14e8750  (orig 0x14e8750, tailcall)
uint64_t main_f_14e8750(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14e88c0  (orig 0x14e88c0, tailcall)
uint64_t main_f_14e88c0(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14e88d0  (orig 0x14e88d0, tailcall)
uint64_t main_f_14e88d0(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14e88e0  (orig 0x14e88e0, tailcall)
uint64_t main_f_14e88e0(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 160)));
}

// sub_14e88f0  (orig 0x14e88f0, tailcall)
uint64_t main_f_14e88f0(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 160)));
}

// sub_14ecab0  (orig 0x14ecab0, tailcall)
void main_f_14ecab0() { main::sub_14ec950(); }

// sub_14ecb30  (orig 0x14ecb30, tailcall)
uint64_t main_f_14ecb30(void* a0) {
    return main::sub_14ec950(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14ecb40  (orig 0x14ecb40, tailcall)
uint64_t main_f_14ecb40(void* a0) {
    return main::sub_14ec950(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14ecc30  (orig 0x14ecc30, tailcall)
uint64_t main_f_14ecc30(void* a0) {
    return main::sub_14ec950(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14ecc40  (orig 0x14ecc40, tailcall)
uint64_t main_f_14ecc40(void* a0) {
    return main::sub_14ec950(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14ed9f0  (orig 0x14ed9f0, tailcall)
uint64_t main_f_14ed9f0(void* a0) {
    return main::sub_14ed590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14eda00  (orig 0x14eda00, tailcall)
uint64_t main_f_14eda00(void* a0) {
    return main::sub_14ed590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14eda10  (orig 0x14eda10, tailcall)
uint64_t main_f_14eda10(void* a0) {
    return main::sub_14ed590(((uintptr_t)((char*)(a0) - 168)));
}

// sub_14eda20  (orig 0x14eda20, tailcall)
void main_f_14eda20() { main::sub_14ed590(); }

// sub_14eda30  (orig 0x14eda30, tailcall)
uint64_t main_f_14eda30(void* a0) {
    return main::sub_14ed590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_14eda40  (orig 0x14eda40, tailcall)
uint64_t main_f_14eda40(void* a0) {
    return main::sub_14ed590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_14eda50  (orig 0x14eda50, tailcall)
uint64_t main_f_14eda50(void* a0) {
    return main::sub_14ed590(((uintptr_t)((char*)(a0) - 168)));
}

// sub_14ee7b0  (orig 0x14ee7b0, tailcall)
uint64_t main_f_14ee7b0(void* a0) {
    return main::sub_14f7870(((uintptr_t)((char*)(a0) + 1752)));
}

// sub_14eec70  (orig 0x14eec70, tailcall)
uint64_t main_f_14eec70(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    *(uint8_t*)((char*)(a0) + 2104) = 0;
    return main::sub_14f5920(((uintptr_t)(*(uint64_t*)((char*)(p0) + 1872))));
}

// sub_14efae0  (orig 0x14efae0, tailcall)
uint64_t main_f_14efae0(void* a0) {
    return main::sub_14ef9c0(((uintptr_t)((char*)(a0) - 160)));
}

// sub_14efbb0  (orig 0x14efbb0, tailcall)
uint64_t main_f_14efbb0(void* a0) {
    return main::sub_14efaf0(((uintptr_t)((char*)(a0) - 160)));
}

// sub_14f5050  (orig 0x14f5050, tailcall)
void main_f_14f5050() { main::sub_14f5220(); }

// sub_14f5160  (orig 0x14f5160, tailcall)
void main_f_14f5160() { main::sub_14f5220(); }

// sub_14f5170  (orig 0x14f5170, tailcall)
void main_f_14f5170() { main::sub_14f5220(); }

// sub_14f63c0  (orig 0x14f63c0, tailcall)
void main_f_14f63c0() { main::sub_ce0(); }

// sub_14f8bd0  (orig 0x14f8bd0, tailcall)
void main_f_14f8bd0() { main::sub_ce0(); }

// sub_14f8f20  (orig 0x14f8f20, tailcall)
void main_f_14f8f20() { main::sub_14f90c0(); }

// sub_14f9000  (orig 0x14f9000, tailcall)
void main_f_14f9000() { main::sub_14f90c0(); }

// sub_14f9010  (orig 0x14f9010, tailcall)
void main_f_14f9010() { main::sub_14f90c0(); }

// sub_15001e0  (orig 0x15001e0, tailcall)
void main_f_15001e0() { main_f_14e6e00(); }

// sub_15001f0  (orig 0x15001f0, tailcall)
void main_f_15001f0() { main::sub_14e6e10(); }

// sub_1500200  (orig 0x1500200, tailcall)
void main_f_1500200() { main::sub_1500210(); }

// sub_1500350  (orig 0x1500350, tailcall)
void main_f_1500350() { main::sub_14e8460(); }

// sub_15004a0  (orig 0x15004a0, tailcall)
uint64_t main_f_15004a0(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15004b0  (orig 0x15004b0, tailcall)
uint64_t main_f_15004b0(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15006a0  (orig 0x15006a0, tailcall)
uint64_t main_f_15006a0(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15006b0  (orig 0x15006b0, tailcall)
uint64_t main_f_15006b0(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15006c0  (orig 0x15006c0, tailcall)
uint64_t main_f_15006c0(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 160)));
}

// sub_15006d0  (orig 0x15006d0, tailcall)
uint64_t main_f_15006d0(void* a0) {
    return main::sub_14e8460(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1501ca0  (orig 0x1501ca0, tailcall)
void main_f_1501ca0() { main::sub_ce0(); }

// sub_15030a0  (orig 0x15030a0, tailcall)
uint64_t main_f_15030a0(void* a0) {
    return main::sub_1502be0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15030b0  (orig 0x15030b0, tailcall)
void main_f_15030b0() { main::sub_1502be0(); }

// sub_15030c0  (orig 0x15030c0, tailcall)
uint64_t main_f_15030c0(void* a0) {
    return main::sub_1502be0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1506470  (orig 0x1506470, tailcall)
void main_f_1506470() { main::sub_ce0(); }

// sub_15064d0  (orig 0x15064d0, tailcall)
void main_f_15064d0() { main::sub_ce0(); }

// sub_15064f0  (orig 0x15064f0, tailcall)
void main_f_15064f0() { main::sub_ce0(); }

// sub_1506550  (orig 0x1506550, tailcall)
void main_f_1506550() { main::sub_ce0(); }

// sub_1506fd0  (orig 0x1506fd0, tailcall)
void main_f_1506fd0() { main::sub_1507000(); }

// sub_1506fe0  (orig 0x1506fe0, tailcall)
void main_f_1506fe0() { main::sub_1507000(); }

// sub_1506ff0  (orig 0x1506ff0, tailcall)
void main_f_1506ff0() { main::sub_1507000(); }

// sub_1507f80  (orig 0x1507f80, tailcall)
void main_f_1507f80() { main::sub_1507db0(); }

// sub_1508040  (orig 0x1508040, tailcall)
uint64_t main_f_1508040(void* a0) {
    return main::sub_1507db0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1508050  (orig 0x1508050, tailcall)
uint64_t main_f_1508050(void* a0) {
    return main::sub_1507db0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15081c0  (orig 0x15081c0, tailcall)
uint64_t main_f_15081c0(void* a0) {
    return main::sub_1507db0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15081d0  (orig 0x15081d0, tailcall)
uint64_t main_f_15081d0(void* a0) {
    return main::sub_1507db0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1508480  (orig 0x1508480, tailcall)
void main_f_1508480() { main::sub_1508360(); }

// sub_1508490  (orig 0x1508490, tailcall)
void main_f_1508490() { main::sub_1508500(); }

// sub_15084a0  (orig 0x15084a0, tailcall)
uint64_t main_f_15084a0(void* a0) {
    return main::sub_1508360(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15084b0  (orig 0x15084b0, tailcall)
uint64_t main_f_15084b0(void* a0) {
    return main::sub_1508360(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15084c0  (orig 0x15084c0, tailcall)
void main_f_15084c0() { main::sub_1508500(); }

// sub_15084d0  (orig 0x15084d0, tailcall)
void main_f_15084d0() { main::sub_1508500(); }

// sub_15084e0  (orig 0x15084e0, tailcall)
uint64_t main_f_15084e0(void* a0) {
    return main::sub_1508360(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15084f0  (orig 0x15084f0, tailcall)
uint64_t main_f_15084f0(void* a0) {
    return main::sub_1508360(((uintptr_t)((char*)(a0) - 80)));
}

// sub_150c1c0  (orig 0x150c1c0, tailcall)
void main_f_150c1c0() { main::sub_150c500(); }

// sub_150c380  (orig 0x150c380, tailcall)
void main_f_150c380() { main::sub_150c500(); }

// sub_150c390  (orig 0x150c390, tailcall)
void main_f_150c390() { main::sub_150c500(); }

// sub_150ccb0  (orig 0x150ccb0, tailcall)
void main_f_150ccb0() { main::sub_e7feb0(); }

// sub_150ccc0  (orig 0x150ccc0, tailcall)
void main_f_150ccc0() { main::sub_150cd80(); }

// sub_150cd20  (orig 0x150cd20, tailcall)
uint64_t main_f_150cd20(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_150cd30  (orig 0x150cd30, tailcall)
uint64_t main_f_150cd30(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_150cd40  (orig 0x150cd40, tailcall)
void main_f_150cd40() { main::sub_150cd80(); }

// sub_150cd50  (orig 0x150cd50, tailcall)
void main_f_150cd50() { main::sub_150cd80(); }

// sub_150cd60  (orig 0x150cd60, tailcall)
uint64_t main_f_150cd60(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_150cd70  (orig 0x150cd70, tailcall)
uint64_t main_f_150cd70(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_150d910  (orig 0x150d910, tailcall)
void main_f_150d910() { main::sub_e7c4c0(); }

// sub_150d920  (orig 0x150d920, tailcall)
void main_f_150d920() { main::sub_150d990(); }

// sub_150d930  (orig 0x150d930, tailcall)
uint64_t main_f_150d930(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_150d940  (orig 0x150d940, tailcall)
uint64_t main_f_150d940(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_150d950  (orig 0x150d950, tailcall)
void main_f_150d950() { main::sub_150d990(); }

// sub_150d960  (orig 0x150d960, tailcall)
void main_f_150d960() { main::sub_150d990(); }

// sub_150d970  (orig 0x150d970, tailcall)
uint64_t main_f_150d970(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_150d980  (orig 0x150d980, tailcall)
uint64_t main_f_150d980(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_150e610  (orig 0x150e610, tailcall)
void main_f_150e610() { main::sub_e7c4c0(); }

// sub_150e620  (orig 0x150e620, tailcall)
void main_f_150e620() { main::sub_150e690(); }

// sub_150e630  (orig 0x150e630, tailcall)
uint64_t main_f_150e630(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_150e640  (orig 0x150e640, tailcall)
uint64_t main_f_150e640(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_150e650  (orig 0x150e650, tailcall)
void main_f_150e650() { main::sub_150e690(); }

// sub_150e660  (orig 0x150e660, tailcall)
void main_f_150e660() { main::sub_150e690(); }

// sub_150e670  (orig 0x150e670, tailcall)
uint64_t main_f_150e670(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_150e680  (orig 0x150e680, tailcall)
uint64_t main_f_150e680(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_150f2b0  (orig 0x150f2b0, tailcall)
void main_f_150f2b0() { main::sub_e7c4c0(); }

// sub_150f2c0  (orig 0x150f2c0, tailcall)
void main_f_150f2c0() { main::sub_150f330(); }

// sub_150f2d0  (orig 0x150f2d0, tailcall)
uint64_t main_f_150f2d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_150f2e0  (orig 0x150f2e0, tailcall)
uint64_t main_f_150f2e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_150f2f0  (orig 0x150f2f0, tailcall)
void main_f_150f2f0() { main::sub_150f330(); }

// sub_150f300  (orig 0x150f300, tailcall)
void main_f_150f300() { main::sub_150f330(); }

// sub_150f310  (orig 0x150f310, tailcall)
uint64_t main_f_150f310(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_150f320  (orig 0x150f320, tailcall)
uint64_t main_f_150f320(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_150fd50  (orig 0x150fd50, tailcall)
void main_f_150fd50() { main::sub_150fd80(); }

// sub_150fd60  (orig 0x150fd60, tailcall)
void main_f_150fd60() { main::sub_150fd80(); }

// sub_150fd70  (orig 0x150fd70, tailcall)
void main_f_150fd70() { main::sub_150fd80(); }

// sub_15119b0  (orig 0x15119b0, tailcall)
void main_f_15119b0() { main::sub_1511810(); }

// sub_1511a70  (orig 0x1511a70, tailcall)
uint64_t main_f_1511a70(void* a0) {
    return main::sub_1511810(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1511a80  (orig 0x1511a80, tailcall)
uint64_t main_f_1511a80(void* a0) {
    return main::sub_1511810(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1511bf0  (orig 0x1511bf0, tailcall)
uint64_t main_f_1511bf0(void* a0) {
    return main::sub_1511810(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1511c00  (orig 0x1511c00, tailcall)
uint64_t main_f_1511c00(void* a0) {
    return main::sub_1511810(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1511c10  (orig 0x1511c10, tailcall)
void main_f_1511c10() { main::sub_e7c250(); }

// sub_1511c20  (orig 0x1511c20, tailcall)
void main_f_1511c20() { main::sub_1513650(); }

// sub_1511c30  (orig 0x1511c30, tailcall)
uint64_t main_f_1511c30(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1511c40  (orig 0x1511c40, tailcall)
uint64_t main_f_1511c40(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1511c50  (orig 0x1511c50, tailcall)
void main_f_1511c50() { main::sub_1513650(); }

// sub_1511c60  (orig 0x1511c60, tailcall)
void main_f_1511c60() { main::sub_1513650(); }

// sub_1511c70  (orig 0x1511c70, tailcall)
uint64_t main_f_1511c70(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1511c80  (orig 0x1511c80, tailcall)
uint64_t main_f_1511c80(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1514650  (orig 0x1514650, tailcall)
void main_f_1514650() { main::sub_e7c4c0(); }

// sub_1514660  (orig 0x1514660, tailcall)
void main_f_1514660() { main::sub_15146d0(); }

// sub_1514670  (orig 0x1514670, tailcall)
uint64_t main_f_1514670(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1514680  (orig 0x1514680, tailcall)
uint64_t main_f_1514680(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1514690  (orig 0x1514690, tailcall)
void main_f_1514690() { main::sub_15146d0(); }

// sub_15146a0  (orig 0x15146a0, tailcall)
void main_f_15146a0() { main::sub_15146d0(); }

// sub_15146b0  (orig 0x15146b0, tailcall)
uint64_t main_f_15146b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15146c0  (orig 0x15146c0, tailcall)
uint64_t main_f_15146c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1516010  (orig 0x1516010, tailcall)
void main_f_1516010() { main::sub_1516200(); }

// sub_1516100  (orig 0x1516100, tailcall)
void main_f_1516100() { main::sub_1516200(); }

// sub_1516110  (orig 0x1516110, tailcall)
void main_f_1516110() { main::sub_1516200(); }

// sub_1516ac0  (orig 0x1516ac0, tailcall)
void main_f_1516ac0() { main::sub_1516c70(); }

// sub_1516b90  (orig 0x1516b90, tailcall)
void main_f_1516b90() { main::sub_1516c70(); }

// sub_1516ba0  (orig 0x1516ba0, tailcall)
void main_f_1516ba0() { main::sub_1516c70(); }

// sub_1517510  (orig 0x1517510, tailcall)
void main_f_1517510() { main::sub_e7c4c0(); }

// sub_1517520  (orig 0x1517520, tailcall)
void main_f_1517520() { main::sub_1517590(); }

// sub_1517530  (orig 0x1517530, tailcall)
uint64_t main_f_1517530(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1517540  (orig 0x1517540, tailcall)
uint64_t main_f_1517540(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1517550  (orig 0x1517550, tailcall)
void main_f_1517550() { main::sub_1517590(); }

// sub_1517560  (orig 0x1517560, tailcall)
void main_f_1517560() { main::sub_1517590(); }

// sub_1517570  (orig 0x1517570, tailcall)
uint64_t main_f_1517570(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1517580  (orig 0x1517580, tailcall)
uint64_t main_f_1517580(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1517cb0  (orig 0x1517cb0, tailcall)
void main_f_1517cb0() { main::sub_1517e60(); }

// sub_1517d80  (orig 0x1517d80, tailcall)
void main_f_1517d80() { main::sub_1517e60(); }

// sub_1517d90  (orig 0x1517d90, tailcall)
void main_f_1517d90() { main::sub_1517e60(); }

// sub_1518570  (orig 0x1518570, tailcall)
void main_f_1518570() { main::sub_e7c4c0(); }

// sub_1518580  (orig 0x1518580, tailcall)
void main_f_1518580() { main::sub_15185f0(); }

// sub_1518590  (orig 0x1518590, tailcall)
uint64_t main_f_1518590(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15185a0  (orig 0x15185a0, tailcall)
uint64_t main_f_15185a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15185b0  (orig 0x15185b0, tailcall)
void main_f_15185b0() { main::sub_15185f0(); }

// sub_15185c0  (orig 0x15185c0, tailcall)
void main_f_15185c0() { main::sub_15185f0(); }

// sub_15185d0  (orig 0x15185d0, tailcall)
uint64_t main_f_15185d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15185e0  (orig 0x15185e0, tailcall)
uint64_t main_f_15185e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_151b500  (orig 0x151b500, tailcall)
void main_f_151b500() { main::sub_151b530(); }

// sub_151b510  (orig 0x151b510, tailcall)
void main_f_151b510() { main::sub_151b530(); }

// sub_151b520  (orig 0x151b520, tailcall)
void main_f_151b520() { main::sub_151b530(); }

// sub_151cd10  (orig 0x151cd10, tailcall)
uint64_t main_f_151cd10(void* a0) {
    return main::sub_1503210(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1768))));
}

// sub_151d560  (orig 0x151d560, tailcall)
uint64_t main_f_151d560(void* a0) {
    return main::sub_151a410(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1848))));
}

// sub_1520b60  (orig 0x1520b60, tailcall)
void main_f_1520b60() { main::sub_15209c0(); }

// sub_1520b70  (orig 0x1520b70, tailcall)
void main_f_1520b70() { main::sub_1520be0(); }

// sub_1520b80  (orig 0x1520b80, tailcall)
uint64_t main_f_1520b80(void* a0) {
    return main::sub_15209c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1520b90  (orig 0x1520b90, tailcall)
uint64_t main_f_1520b90(void* a0) {
    return main::sub_15209c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1520ba0  (orig 0x1520ba0, tailcall)
void main_f_1520ba0() { main::sub_1520be0(); }

// sub_1520bb0  (orig 0x1520bb0, tailcall)
void main_f_1520bb0() { main::sub_1520be0(); }

// sub_1520bc0  (orig 0x1520bc0, tailcall)
uint64_t main_f_1520bc0(void* a0) {
    return main::sub_15209c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1520bd0  (orig 0x1520bd0, tailcall)
uint64_t main_f_1520bd0(void* a0) {
    return main::sub_15209c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1527bf0  (orig 0x1527bf0, tailcall)
void main_f_1527bf0() { main::sub_e7feb0(); }

// sub_1527c00  (orig 0x1527c00, tailcall)
void main_f_1527c00() { main::sub_1527c70(); }

// sub_1527c10  (orig 0x1527c10, tailcall)
uint64_t main_f_1527c10(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1527c20  (orig 0x1527c20, tailcall)
uint64_t main_f_1527c20(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1527c30  (orig 0x1527c30, tailcall)
void main_f_1527c30() { main::sub_1527c70(); }

// sub_1527c40  (orig 0x1527c40, tailcall)
void main_f_1527c40() { main::sub_1527c70(); }

// sub_1527c50  (orig 0x1527c50, tailcall)
uint64_t main_f_1527c50(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1527c60  (orig 0x1527c60, tailcall)
uint64_t main_f_1527c60(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15296f0  (orig 0x15296f0, tailcall)
void main_f_15296f0() { main::sub_e7feb0(); }

// sub_1529700  (orig 0x1529700, tailcall)
void main_f_1529700() { main::sub_1529770(); }

// sub_1529710  (orig 0x1529710, tailcall)
uint64_t main_f_1529710(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1529720  (orig 0x1529720, tailcall)
uint64_t main_f_1529720(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1529730  (orig 0x1529730, tailcall)
void main_f_1529730() { main::sub_1529770(); }

// sub_1529740  (orig 0x1529740, tailcall)
void main_f_1529740() { main::sub_1529770(); }

// sub_1529750  (orig 0x1529750, tailcall)
uint64_t main_f_1529750(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1529760  (orig 0x1529760, tailcall)
uint64_t main_f_1529760(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_152a2a0  (orig 0x152a2a0, tailcall)
void main_f_152a2a0() { main::sub_e7c4c0(); }

// sub_152a2b0  (orig 0x152a2b0, tailcall)
void main_f_152a2b0() { main::sub_152a320(); }

// sub_152a2c0  (orig 0x152a2c0, tailcall)
uint64_t main_f_152a2c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_152a2d0  (orig 0x152a2d0, tailcall)
uint64_t main_f_152a2d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_152a2e0  (orig 0x152a2e0, tailcall)
void main_f_152a2e0() { main::sub_152a320(); }

// sub_152a2f0  (orig 0x152a2f0, tailcall)
void main_f_152a2f0() { main::sub_152a320(); }

// sub_152a300  (orig 0x152a300, tailcall)
uint64_t main_f_152a300(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_152a310  (orig 0x152a310, tailcall)
uint64_t main_f_152a310(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_152a800  (orig 0x152a800, tailcall)
void main_f_152a800() { main::sub_e7feb0(); }

// sub_152a810  (orig 0x152a810, tailcall)
void main_f_152a810() { main::sub_152a880(); }

// sub_152a820  (orig 0x152a820, tailcall)
uint64_t main_f_152a820(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_152a830  (orig 0x152a830, tailcall)
uint64_t main_f_152a830(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_152a840  (orig 0x152a840, tailcall)
void main_f_152a840() { main::sub_152a880(); }

// sub_152a850  (orig 0x152a850, tailcall)
void main_f_152a850() { main::sub_152a880(); }

// sub_152a860  (orig 0x152a860, tailcall)
uint64_t main_f_152a860(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_152a870  (orig 0x152a870, tailcall)
uint64_t main_f_152a870(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_152af90  (orig 0x152af90, tailcall)
void main_f_152af90() { main::sub_e7c4c0(); }

// sub_152afa0  (orig 0x152afa0, tailcall)
void main_f_152afa0() { main::sub_152b010(); }

// sub_152afb0  (orig 0x152afb0, tailcall)
uint64_t main_f_152afb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_152afc0  (orig 0x152afc0, tailcall)
uint64_t main_f_152afc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_152afd0  (orig 0x152afd0, tailcall)
void main_f_152afd0() { main::sub_152b010(); }

// sub_152afe0  (orig 0x152afe0, tailcall)
void main_f_152afe0() { main::sub_152b010(); }

// sub_152aff0  (orig 0x152aff0, tailcall)
uint64_t main_f_152aff0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_152b000  (orig 0x152b000, tailcall)
uint64_t main_f_152b000(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_152b4c0  (orig 0x152b4c0, tailcall)
void main_f_152b4c0() { main::sub_e7c4c0(); }

// sub_152b4d0  (orig 0x152b4d0, tailcall)
void main_f_152b4d0() { main::sub_152b540(); }

// sub_152b4e0  (orig 0x152b4e0, tailcall)
uint64_t main_f_152b4e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_152b4f0  (orig 0x152b4f0, tailcall)
uint64_t main_f_152b4f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_152b500  (orig 0x152b500, tailcall)
void main_f_152b500() { main::sub_152b540(); }

// sub_152b510  (orig 0x152b510, tailcall)
void main_f_152b510() { main::sub_152b540(); }

// sub_152b520  (orig 0x152b520, tailcall)
uint64_t main_f_152b520(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_152b530  (orig 0x152b530, tailcall)
uint64_t main_f_152b530(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_152ecc0  (orig 0x152ecc0, tailcall)
void main_f_152ecc0() { main::sub_152ee70(); }

// sub_152ed90  (orig 0x152ed90, tailcall)
void main_f_152ed90() { main::sub_152ee70(); }

// sub_152eda0  (orig 0x152eda0, tailcall)
void main_f_152eda0() { main::sub_152ee70(); }

// sub_1530280  (orig 0x1530280, tailcall)
void main_f_1530280() { main::sub_e7c4c0(); }

// sub_1530290  (orig 0x1530290, tailcall)
void main_f_1530290() { main::sub_1530300(); }

// sub_15302a0  (orig 0x15302a0, tailcall)
uint64_t main_f_15302a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15302b0  (orig 0x15302b0, tailcall)
uint64_t main_f_15302b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15302c0  (orig 0x15302c0, tailcall)
void main_f_15302c0() { main::sub_1530300(); }

// sub_15302d0  (orig 0x15302d0, tailcall)
void main_f_15302d0() { main::sub_1530300(); }

// sub_15302e0  (orig 0x15302e0, tailcall)
uint64_t main_f_15302e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15302f0  (orig 0x15302f0, tailcall)
uint64_t main_f_15302f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1530bb0  (orig 0x1530bb0, tailcall)
void main_f_1530bb0() { main::sub_e7c4c0(); }

// sub_1530bc0  (orig 0x1530bc0, tailcall)
void main_f_1530bc0() { main::sub_1530c30(); }

// sub_1530bd0  (orig 0x1530bd0, tailcall)
uint64_t main_f_1530bd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1530be0  (orig 0x1530be0, tailcall)
uint64_t main_f_1530be0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1530bf0  (orig 0x1530bf0, tailcall)
void main_f_1530bf0() { main::sub_1530c30(); }

// sub_1530c00  (orig 0x1530c00, tailcall)
void main_f_1530c00() { main::sub_1530c30(); }

// sub_1530c10  (orig 0x1530c10, tailcall)
uint64_t main_f_1530c10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1530c20  (orig 0x1530c20, tailcall)
uint64_t main_f_1530c20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1532890  (orig 0x1532890, tailcall)
void main_f_1532890() { main::sub_1532a80(); }

// sub_1532980  (orig 0x1532980, tailcall)
void main_f_1532980() { main::sub_1532a80(); }

// sub_1532990  (orig 0x1532990, tailcall)
void main_f_1532990() { main::sub_1532a80(); }

// sub_1532f10  (orig 0x1532f10, tailcall)
void main_f_1532f10() { main::sub_e7c4c0(); }

// sub_1532f20  (orig 0x1532f20, tailcall)
void main_f_1532f20() { main::sub_1532f90(); }

// sub_1532f30  (orig 0x1532f30, tailcall)
uint64_t main_f_1532f30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1532f40  (orig 0x1532f40, tailcall)
uint64_t main_f_1532f40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1532f50  (orig 0x1532f50, tailcall)
void main_f_1532f50() { main::sub_1532f90(); }

// sub_1532f60  (orig 0x1532f60, tailcall)
void main_f_1532f60() { main::sub_1532f90(); }

// sub_1532f70  (orig 0x1532f70, tailcall)
uint64_t main_f_1532f70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1532f80  (orig 0x1532f80, tailcall)
uint64_t main_f_1532f80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15334d0  (orig 0x15334d0, tailcall)
void main_f_15334d0() { main::sub_e7c4c0(); }

// sub_15334e0  (orig 0x15334e0, tailcall)
void main_f_15334e0() { main::sub_1533550(); }

// sub_15334f0  (orig 0x15334f0, tailcall)
uint64_t main_f_15334f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1533500  (orig 0x1533500, tailcall)
uint64_t main_f_1533500(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1533510  (orig 0x1533510, tailcall)
void main_f_1533510() { main::sub_1533550(); }

// sub_1533520  (orig 0x1533520, tailcall)
void main_f_1533520() { main::sub_1533550(); }

// sub_1533530  (orig 0x1533530, tailcall)
uint64_t main_f_1533530(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1533540  (orig 0x1533540, tailcall)
uint64_t main_f_1533540(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1533a90  (orig 0x1533a90, tailcall)
void main_f_1533a90() { main::sub_e7c4c0(); }

// sub_1533aa0  (orig 0x1533aa0, tailcall)
void main_f_1533aa0() { main::sub_1533b10(); }

// sub_1533ab0  (orig 0x1533ab0, tailcall)
uint64_t main_f_1533ab0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1533ac0  (orig 0x1533ac0, tailcall)
uint64_t main_f_1533ac0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1533ad0  (orig 0x1533ad0, tailcall)
void main_f_1533ad0() { main::sub_1533b10(); }

// sub_1533ae0  (orig 0x1533ae0, tailcall)
void main_f_1533ae0() { main::sub_1533b10(); }

// sub_1533af0  (orig 0x1533af0, tailcall)
uint64_t main_f_1533af0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1533b00  (orig 0x1533b00, tailcall)
uint64_t main_f_1533b00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1533f40  (orig 0x1533f40, tailcall)
void main_f_1533f40() { main::sub_e7c4c0(); }

// sub_1533f50  (orig 0x1533f50, tailcall)
void main_f_1533f50() { main::sub_1533fc0(); }

// sub_1533f60  (orig 0x1533f60, tailcall)
uint64_t main_f_1533f60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1533f70  (orig 0x1533f70, tailcall)
uint64_t main_f_1533f70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1533f80  (orig 0x1533f80, tailcall)
void main_f_1533f80() { main::sub_1533fc0(); }

// sub_1533f90  (orig 0x1533f90, tailcall)
void main_f_1533f90() { main::sub_1533fc0(); }

// sub_1533fa0  (orig 0x1533fa0, tailcall)
uint64_t main_f_1533fa0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1533fb0  (orig 0x1533fb0, tailcall)
uint64_t main_f_1533fb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1534640  (orig 0x1534640, tailcall)
void main_f_1534640() { main::sub_e7c4c0(); }

// sub_1534650  (orig 0x1534650, tailcall)
void main_f_1534650() { main::sub_15346c0(); }

// sub_1534660  (orig 0x1534660, tailcall)
uint64_t main_f_1534660(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1534670  (orig 0x1534670, tailcall)
uint64_t main_f_1534670(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1534680  (orig 0x1534680, tailcall)
void main_f_1534680() { main::sub_15346c0(); }

// sub_1534690  (orig 0x1534690, tailcall)
void main_f_1534690() { main::sub_15346c0(); }

// sub_15346a0  (orig 0x15346a0, tailcall)
uint64_t main_f_15346a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15346b0  (orig 0x15346b0, tailcall)
uint64_t main_f_15346b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1534b60  (orig 0x1534b60, tailcall)
void main_f_1534b60() { main::sub_e7c4c0(); }

// sub_1534b70  (orig 0x1534b70, tailcall)
void main_f_1534b70() { main::sub_1534be0(); }

// sub_1534b80  (orig 0x1534b80, tailcall)
uint64_t main_f_1534b80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1534b90  (orig 0x1534b90, tailcall)
uint64_t main_f_1534b90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1534ba0  (orig 0x1534ba0, tailcall)
void main_f_1534ba0() { main::sub_1534be0(); }

// sub_1534bb0  (orig 0x1534bb0, tailcall)
void main_f_1534bb0() { main::sub_1534be0(); }

// sub_1534bc0  (orig 0x1534bc0, tailcall)
uint64_t main_f_1534bc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1534bd0  (orig 0x1534bd0, tailcall)
uint64_t main_f_1534bd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1535420  (orig 0x1535420, tailcall)
void main_f_1535420() { main::sub_e7c4c0(); }

// sub_1535430  (orig 0x1535430, tailcall)
void main_f_1535430() { main::sub_15354a0(); }

// sub_1535440  (orig 0x1535440, tailcall)
uint64_t main_f_1535440(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1535450  (orig 0x1535450, tailcall)
uint64_t main_f_1535450(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1535460  (orig 0x1535460, tailcall)
void main_f_1535460() { main::sub_15354a0(); }

// sub_1535470  (orig 0x1535470, tailcall)
void main_f_1535470() { main::sub_15354a0(); }

// sub_1535480  (orig 0x1535480, tailcall)
uint64_t main_f_1535480(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1535490  (orig 0x1535490, tailcall)
uint64_t main_f_1535490(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1535920  (orig 0x1535920, tailcall)
void main_f_1535920() { main::sub_e7c4c0(); }

// sub_1535930  (orig 0x1535930, tailcall)
void main_f_1535930() { main::sub_15359a0(); }

// sub_1535940  (orig 0x1535940, tailcall)
uint64_t main_f_1535940(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1535950  (orig 0x1535950, tailcall)
uint64_t main_f_1535950(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1535960  (orig 0x1535960, tailcall)
void main_f_1535960() { main::sub_15359a0(); }

// sub_1535970  (orig 0x1535970, tailcall)
void main_f_1535970() { main::sub_15359a0(); }

// sub_1535980  (orig 0x1535980, tailcall)
uint64_t main_f_1535980(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1535990  (orig 0x1535990, tailcall)
uint64_t main_f_1535990(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15368e0  (orig 0x15368e0, tailcall)
void main_f_15368e0() { main::sub_e7c4c0(); }

// sub_15368f0  (orig 0x15368f0, tailcall)
void main_f_15368f0() { main::sub_1536960(); }

// sub_1536900  (orig 0x1536900, tailcall)
uint64_t main_f_1536900(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1536910  (orig 0x1536910, tailcall)
uint64_t main_f_1536910(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1536920  (orig 0x1536920, tailcall)
void main_f_1536920() { main::sub_1536960(); }

// sub_1536930  (orig 0x1536930, tailcall)
void main_f_1536930() { main::sub_1536960(); }

// sub_1536940  (orig 0x1536940, tailcall)
uint64_t main_f_1536940(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1536950  (orig 0x1536950, tailcall)
uint64_t main_f_1536950(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15372d0  (orig 0x15372d0, tailcall)
void main_f_15372d0() { main::sub_e7c4c0(); }

// sub_15372e0  (orig 0x15372e0, tailcall)
void main_f_15372e0() { main::sub_1537350(); }

// sub_15372f0  (orig 0x15372f0, tailcall)
uint64_t main_f_15372f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1537300  (orig 0x1537300, tailcall)
uint64_t main_f_1537300(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1537310  (orig 0x1537310, tailcall)
void main_f_1537310() { main::sub_1537350(); }

// sub_1537320  (orig 0x1537320, tailcall)
void main_f_1537320() { main::sub_1537350(); }

// sub_1537330  (orig 0x1537330, tailcall)
uint64_t main_f_1537330(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1537340  (orig 0x1537340, tailcall)
uint64_t main_f_1537340(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1537820  (orig 0x1537820, tailcall)
void main_f_1537820() { main::sub_e7c4c0(); }

// sub_1537830  (orig 0x1537830, tailcall)
void main_f_1537830() { main::sub_15378a0(); }

// sub_1537840  (orig 0x1537840, tailcall)
uint64_t main_f_1537840(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1537850  (orig 0x1537850, tailcall)
uint64_t main_f_1537850(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1537860  (orig 0x1537860, tailcall)
void main_f_1537860() { main::sub_15378a0(); }

// sub_1537870  (orig 0x1537870, tailcall)
void main_f_1537870() { main::sub_15378a0(); }

// sub_1537880  (orig 0x1537880, tailcall)
uint64_t main_f_1537880(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1537890  (orig 0x1537890, tailcall)
uint64_t main_f_1537890(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15383a0  (orig 0x15383a0, tailcall)
void main_f_15383a0() { main::sub_e7c4c0(); }

// sub_15383b0  (orig 0x15383b0, tailcall)
void main_f_15383b0() { main::sub_1538420(); }

// sub_15383c0  (orig 0x15383c0, tailcall)
uint64_t main_f_15383c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15383d0  (orig 0x15383d0, tailcall)
uint64_t main_f_15383d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15383e0  (orig 0x15383e0, tailcall)
void main_f_15383e0() { main::sub_1538420(); }

// sub_15383f0  (orig 0x15383f0, tailcall)
void main_f_15383f0() { main::sub_1538420(); }

// sub_1538400  (orig 0x1538400, tailcall)
uint64_t main_f_1538400(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1538410  (orig 0x1538410, tailcall)
uint64_t main_f_1538410(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1539270  (orig 0x1539270, tailcall)
void main_f_1539270() { main::sub_e7c4c0(); }

// sub_1539280  (orig 0x1539280, tailcall)
void main_f_1539280() { main::sub_15392f0(); }

// sub_1539290  (orig 0x1539290, tailcall)
uint64_t main_f_1539290(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15392a0  (orig 0x15392a0, tailcall)
uint64_t main_f_15392a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15392b0  (orig 0x15392b0, tailcall)
void main_f_15392b0() { main::sub_15392f0(); }

// sub_15392c0  (orig 0x15392c0, tailcall)
void main_f_15392c0() { main::sub_15392f0(); }

// sub_15392d0  (orig 0x15392d0, tailcall)
uint64_t main_f_15392d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15392e0  (orig 0x15392e0, tailcall)
uint64_t main_f_15392e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1539960  (orig 0x1539960, tailcall)
void main_f_1539960() { main::sub_e7c4c0(); }

// sub_1539970  (orig 0x1539970, tailcall)
void main_f_1539970() { main::sub_15399e0(); }

// sub_1539980  (orig 0x1539980, tailcall)
uint64_t main_f_1539980(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1539990  (orig 0x1539990, tailcall)
uint64_t main_f_1539990(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15399a0  (orig 0x15399a0, tailcall)
void main_f_15399a0() { main::sub_15399e0(); }

// sub_15399b0  (orig 0x15399b0, tailcall)
void main_f_15399b0() { main::sub_15399e0(); }

// sub_15399c0  (orig 0x15399c0, tailcall)
uint64_t main_f_15399c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15399d0  (orig 0x15399d0, tailcall)
uint64_t main_f_15399d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1539e60  (orig 0x1539e60, tailcall)
uint64_t main_f_1539e60(void* a0) {
    return main::sub_1539d10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1539e70  (orig 0x1539e70, tailcall)
uint64_t main_f_1539e70(void* a0) {
    return main::sub_1539d10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1539e80  (orig 0x1539e80, tailcall)
void main_f_1539e80() { main::sub_1539d10(); }

// sub_1539e90  (orig 0x1539e90, tailcall)
uint64_t main_f_1539e90(void* a0) {
    return main::sub_1539d10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1539ea0  (orig 0x1539ea0, tailcall)
uint64_t main_f_1539ea0(void* a0) {
    return main::sub_1539d10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_153ad50  (orig 0x153ad50, tailcall)
void main_f_153ad50() { main::sub_153ad80(); }

// sub_153ad60  (orig 0x153ad60, tailcall)
void main_f_153ad60() { main::sub_153ad80(); }

// sub_153ad70  (orig 0x153ad70, tailcall)
void main_f_153ad70() { main::sub_153ad80(); }

// sub_153bd60  (orig 0x153bd60, tailcall)
uint64_t main_f_153bd60(void* a0) {
    return main::sub_153bc90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_153bd70  (orig 0x153bd70, tailcall)
uint64_t main_f_153bd70(void* a0) {
    return main::sub_153bc90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_153bd80  (orig 0x153bd80, tailcall)
void main_f_153bd80() { main::sub_153bc90(); }

// sub_153bd90  (orig 0x153bd90, tailcall)
uint64_t main_f_153bd90(void* a0) {
    return main::sub_153bc90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_153bda0  (orig 0x153bda0, tailcall)
uint64_t main_f_153bda0(void* a0) {
    return main::sub_153bc90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_153c350  (orig 0x153c350, tailcall)
uint64_t main_f_153c350(void* a0) {
    return main::sub_1503210(((uintptr_t)(*(uint64_t*)((char*)(a0) + 168))));
}

// sub_153c3f0  (orig 0x153c3f0, tailcall)
uint64_t main_f_153c3f0(void* a0) {
    return main::sub_151a410(((uintptr_t)(*(uint64_t*)((char*)(a0) + 184))));
}

// sub_153d940  (orig 0x153d940, tailcall)
void main_f_153d940() { main::sub_153dd60(); }

// sub_153d950  (orig 0x153d950, tailcall)
void main_f_153d950() { main::sub_153dd60(); }

// sub_153d960  (orig 0x153d960, tailcall)
void main_f_153d960() { main::sub_153dd60(); }

// sub_1541b10  (orig 0x1541b10, tailcall)
void main_f_1541b10() { main::sub_153f430(); }

// sub_1541c60  (orig 0x1541c60, tailcall)
void main_f_1541c60() { main::sub_153f430(); }

// sub_1541c70  (orig 0x1541c70, tailcall)
void main_f_1541c70() { main::sub_153f430(); }

// sub_1542520  (orig 0x1542520, tailcall)
void main_f_1542520() { main::sub_e7c4c0(); }

// sub_1542530  (orig 0x1542530, tailcall)
void main_f_1542530() { main::sub_15425a0(); }

// sub_1542540  (orig 0x1542540, tailcall)
uint64_t main_f_1542540(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1542550  (orig 0x1542550, tailcall)
uint64_t main_f_1542550(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1542560  (orig 0x1542560, tailcall)
void main_f_1542560() { main::sub_15425a0(); }

// sub_1542570  (orig 0x1542570, tailcall)
void main_f_1542570() { main::sub_15425a0(); }

// sub_1542580  (orig 0x1542580, tailcall)
uint64_t main_f_1542580(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1542590  (orig 0x1542590, tailcall)
uint64_t main_f_1542590(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1542bd0  (orig 0x1542bd0, tailcall)
void main_f_1542bd0() { main::sub_e7feb0(); }

// sub_1542be0  (orig 0x1542be0, tailcall)
void main_f_1542be0() { main::sub_1542c50(); }

// sub_1542bf0  (orig 0x1542bf0, tailcall)
uint64_t main_f_1542bf0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1542c00  (orig 0x1542c00, tailcall)
uint64_t main_f_1542c00(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1542c10  (orig 0x1542c10, tailcall)
void main_f_1542c10() { main::sub_1542c50(); }

// sub_1542c20  (orig 0x1542c20, tailcall)
void main_f_1542c20() { main::sub_1542c50(); }

// sub_1542c30  (orig 0x1542c30, tailcall)
uint64_t main_f_1542c30(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1542c40  (orig 0x1542c40, tailcall)
uint64_t main_f_1542c40(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15443d0  (orig 0x15443d0, tailcall)
void main_f_15443d0() { main::sub_e7feb0(); }

// sub_15443e0  (orig 0x15443e0, tailcall)
void main_f_15443e0() { main::sub_1544450(); }

// sub_15443f0  (orig 0x15443f0, tailcall)
uint64_t main_f_15443f0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1544400  (orig 0x1544400, tailcall)
uint64_t main_f_1544400(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1544410  (orig 0x1544410, tailcall)
void main_f_1544410() { main::sub_1544450(); }

// sub_1544420  (orig 0x1544420, tailcall)
void main_f_1544420() { main::sub_1544450(); }

// sub_1544430  (orig 0x1544430, tailcall)
uint64_t main_f_1544430(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1544440  (orig 0x1544440, tailcall)
uint64_t main_f_1544440(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15452d0  (orig 0x15452d0, tailcall)
void main_f_15452d0() { main::sub_e7c4c0(); }

// sub_15452e0  (orig 0x15452e0, tailcall)
void main_f_15452e0() { main::sub_1545350(); }

// sub_15452f0  (orig 0x15452f0, tailcall)
uint64_t main_f_15452f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1545300  (orig 0x1545300, tailcall)
uint64_t main_f_1545300(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1545310  (orig 0x1545310, tailcall)
void main_f_1545310() { main::sub_1545350(); }

// sub_1545320  (orig 0x1545320, tailcall)
void main_f_1545320() { main::sub_1545350(); }

// sub_1545330  (orig 0x1545330, tailcall)
uint64_t main_f_1545330(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1545340  (orig 0x1545340, tailcall)
uint64_t main_f_1545340(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1545d20  (orig 0x1545d20, tailcall)
void main_f_1545d20() { main::sub_e7c4c0(); }

// sub_1545d30  (orig 0x1545d30, tailcall)
void main_f_1545d30() { main::sub_1545da0(); }

// sub_1545d40  (orig 0x1545d40, tailcall)
uint64_t main_f_1545d40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1545d50  (orig 0x1545d50, tailcall)
uint64_t main_f_1545d50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1545d60  (orig 0x1545d60, tailcall)
void main_f_1545d60() { main::sub_1545da0(); }

// sub_1545d70  (orig 0x1545d70, tailcall)
void main_f_1545d70() { main::sub_1545da0(); }

// sub_1545d80  (orig 0x1545d80, tailcall)
uint64_t main_f_1545d80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1545d90  (orig 0x1545d90, tailcall)
uint64_t main_f_1545d90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1546df0  (orig 0x1546df0, tailcall)
void main_f_1546df0() { main::sub_e7c4c0(); }

// sub_1546e00  (orig 0x1546e00, tailcall)
void main_f_1546e00() { main::sub_1546e70(); }

// sub_1546e10  (orig 0x1546e10, tailcall)
uint64_t main_f_1546e10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1546e20  (orig 0x1546e20, tailcall)
uint64_t main_f_1546e20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1546e30  (orig 0x1546e30, tailcall)
void main_f_1546e30() { main::sub_1546e70(); }

// sub_1546e40  (orig 0x1546e40, tailcall)
void main_f_1546e40() { main::sub_1546e70(); }

// sub_1546e50  (orig 0x1546e50, tailcall)
uint64_t main_f_1546e50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1546e60  (orig 0x1546e60, tailcall)
uint64_t main_f_1546e60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1547270  (orig 0x1547270, tailcall)
void main_f_1547270() { main::sub_e7c4c0(); }

// sub_1547280  (orig 0x1547280, tailcall)
void main_f_1547280() { main::sub_15472f0(); }

// sub_1547290  (orig 0x1547290, tailcall)
uint64_t main_f_1547290(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15472a0  (orig 0x15472a0, tailcall)
uint64_t main_f_15472a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15472b0  (orig 0x15472b0, tailcall)
void main_f_15472b0() { main::sub_15472f0(); }

// sub_15472c0  (orig 0x15472c0, tailcall)
void main_f_15472c0() { main::sub_15472f0(); }

// sub_15472d0  (orig 0x15472d0, tailcall)
uint64_t main_f_15472d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15472e0  (orig 0x15472e0, tailcall)
uint64_t main_f_15472e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1547640  (orig 0x1547640, tailcall)
void main_f_1547640() { main::sub_e7c4c0(); }

// sub_1547650  (orig 0x1547650, tailcall)
void main_f_1547650() { main::sub_15476c0(); }

// sub_1547660  (orig 0x1547660, tailcall)
uint64_t main_f_1547660(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1547670  (orig 0x1547670, tailcall)
uint64_t main_f_1547670(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1547680  (orig 0x1547680, tailcall)
void main_f_1547680() { main::sub_15476c0(); }

// sub_1547690  (orig 0x1547690, tailcall)
void main_f_1547690() { main::sub_15476c0(); }

// sub_15476a0  (orig 0x15476a0, tailcall)
uint64_t main_f_15476a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15476b0  (orig 0x15476b0, tailcall)
uint64_t main_f_15476b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1547c50  (orig 0x1547c50, tailcall)
void main_f_1547c50() { main::sub_e7c4c0(); }

// sub_1547c60  (orig 0x1547c60, tailcall)
void main_f_1547c60() { main::sub_1547cd0(); }

// sub_1547c70  (orig 0x1547c70, tailcall)
uint64_t main_f_1547c70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1547c80  (orig 0x1547c80, tailcall)
uint64_t main_f_1547c80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1547c90  (orig 0x1547c90, tailcall)
void main_f_1547c90() { main::sub_1547cd0(); }

// sub_1547ca0  (orig 0x1547ca0, tailcall)
void main_f_1547ca0() { main::sub_1547cd0(); }

// sub_1547cb0  (orig 0x1547cb0, tailcall)
uint64_t main_f_1547cb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1547cc0  (orig 0x1547cc0, tailcall)
uint64_t main_f_1547cc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1548260  (orig 0x1548260, tailcall)
void main_f_1548260() { main::sub_e7c4c0(); }

// sub_1548270  (orig 0x1548270, tailcall)
void main_f_1548270() { main::sub_15482e0(); }

// sub_1548280  (orig 0x1548280, tailcall)
uint64_t main_f_1548280(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_1548290  (orig 0x1548290, tailcall)
uint64_t main_f_1548290(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_15482a0  (orig 0x15482a0, tailcall)
void main_f_15482a0() { main::sub_15482e0(); }

// sub_15482b0  (orig 0x15482b0, tailcall)
void main_f_15482b0() { main::sub_15482e0(); }

// sub_15482c0  (orig 0x15482c0, tailcall)
uint64_t main_f_15482c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_15482d0  (orig 0x15482d0, tailcall)
uint64_t main_f_15482d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_1552860  (orig 0x1552860, tailcall)
uint64_t main_f_1552860(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return main::sub_1552790(((uintptr_t)(*(uint64_t*)((char*)(p0) + 200))));
}

// sub_15723f0  (orig 0x15723f0, tailcall)
uint64_t main_f_15723f0(void* a0) {
    return main::InstanceTable_25(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1572400  (orig 0x1572400, tailcall)
uint64_t main_f_1572400(void* a0) {
    return main::InstanceTable_25(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1572410  (orig 0x1572410, tailcall)
uint64_t main_f_1572410(void* a0) {
    return main::InstanceTable_25(((uintptr_t)((char*)(a0) - 144)));
}

// sub_15730d0  (orig 0x15730d0, tailcall)
void main_f_15730d0() { main::InstanceTable_11(); }

// sub_1573a90  (orig 0x1573a90, tailcall)
uint64_t main_f_1573a90(void* a0) {
    return main::sub_15734a0(((uintptr_t)((char*)(a0) - 184)));
}

// sub_1574090  (orig 0x1574090, tailcall)
uint64_t main_f_1574090(void* a0) {
    return main::sub_1573aa0(((uintptr_t)((char*)(a0) - 184)));
}

// sub_1574220  (orig 0x1574220, tailcall)
void main_f_1574220() { main::InstanceTable_14(); }

// sub_15744c0  (orig 0x15744c0, tailcall)
uint64_t main_f_15744c0(void* a0) {
    return main::InstanceTable_14(((uintptr_t)((char*)(a0) - 184)));
}

// sub_15744d0  (orig 0x15744d0, tailcall)
void main_f_15744d0() { main::InstanceTable_15(); }

// sub_1574770  (orig 0x1574770, tailcall)
uint64_t main_f_1574770(void* a0) {
    return main::InstanceTable_15(((uintptr_t)((char*)(a0) - 184)));
}

// sub_1574e20  (orig 0x1574e20, tailcall)
uint64_t main_f_1574e20(void* a0) {
    return main::sub_162f760(((uintptr_t)((char*)(a0) + 40)));
}

// sub_15751c0  (orig 0x15751c0, tailcall)
uint64_t main_f_15751c0(void* a0) {
    return main::InstanceTable_18(((uintptr_t)((char*)(a0) + 40)));
}

// sub_15753c0  (orig 0x15753c0, tailcall)
uint64_t main_f_15753c0(void* a0) {
    return main::InstanceTable_18(((uintptr_t)((char*)(a0) + 8)));
}

// sub_15759c0  (orig 0x15759c0, tailcall)
uint64_t main_f_15759c0(void* a0) {
    return main::InstanceTable_21(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1575bc0  (orig 0x1575bc0, tailcall)
uint64_t main_f_1575bc0(void* a0) {
    return main::InstanceTable_21(((uintptr_t)((char*)(a0) + 8)));
}

// sub_1575bd0  (orig 0x1575bd0, tailcall)
uint64_t main_f_1575bd0(void* a0) {
    return main::InstanceTable_22(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1575dc0  (orig 0x1575dc0, tailcall)
uint64_t main_f_1575dc0(void* a0) {
    return main::InstanceTable_22(((uintptr_t)((char*)(a0) + 8)));
}

// sub_1575dd0  (orig 0x1575dd0, tailcall)
uint64_t main_f_1575dd0(void* a0) {
    return main::InstanceTable_23(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1575fc0  (orig 0x1575fc0, tailcall)
uint64_t main_f_1575fc0(void* a0) {
    return main::InstanceTable_23(((uintptr_t)((char*)(a0) + 8)));
}

// sub_1575fd0  (orig 0x1575fd0, tailcall)
uint64_t main_f_1575fd0(void* a0) {
    return main::InstanceTable_24(((uintptr_t)((char*)(a0) + 40)));
}

// sub_15761f0  (orig 0x15761f0, tailcall)
uint64_t main_f_15761f0(void* a0) {
    return main::InstanceTable_24(((uintptr_t)((char*)(a0) + 8)));
}

// sub_15763f0  (orig 0x15763f0, tailcall)
uint64_t main_f_15763f0(void* a0) {
    return main::InstanceTable_25(((uintptr_t)((char*)(a0) + 8)));
}

// sub_1576c90  (orig 0x1576c90, tailcall)
uint64_t main_f_1576c90(void* a0) {
    return main::InstanceTable_29(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1576e80  (orig 0x1576e80, tailcall)
uint64_t main_f_1576e80(void* a0) {
    return main::InstanceTable_29(((uintptr_t)((char*)(a0) + 8)));
}

// sub_1576e90  (orig 0x1576e90, tailcall)
uint64_t main_f_1576e90(void* a0) {
    return main::InstanceTable_30(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1577080  (orig 0x1577080, tailcall)
uint64_t main_f_1577080(void* a0) {
    return main::InstanceTable_30(((uintptr_t)((char*)(a0) + 8)));
}

// sub_15774c0  (orig 0x15774c0, tailcall)
uint64_t main_f_15774c0(void* a0) {
    return main::InstanceTable_32(((uintptr_t)((char*)(a0) + 40)));
}

// sub_15776b0  (orig 0x15776b0, tailcall)
uint64_t main_f_15776b0(void* a0) {
    return main::InstanceTable_32(((uintptr_t)((char*)(a0) + 8)));
}

// sub_15776c0  (orig 0x15776c0, tailcall)
uint64_t main_f_15776c0(void* a0) {
    return main::InstanceTable_33(((uintptr_t)((char*)(a0) + 40)));
}

// sub_15780b0  (orig 0x15780b0, tailcall)
uint64_t main_f_15780b0(void* a0) {
    return main::InstanceTable_36(((uintptr_t)((char*)(a0) + 40)));
}

// sub_15782b0  (orig 0x15782b0, tailcall)
uint64_t main_f_15782b0(void* a0) {
    return main::InstanceTable_36(((uintptr_t)((char*)(a0) + 8)));
}

// sub_15782c0  (orig 0x15782c0, tailcall)
uint64_t main_f_15782c0(void* a0) {
    return main::InstanceTable_37(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1578550  (orig 0x1578550, tailcall)
uint64_t main_f_1578550(void* a0) {
    return main::InstanceTable_37(((uintptr_t)((char*)(a0) + 8)));
}

// sub_1578560  (orig 0x1578560, tailcall)
uint64_t main_f_1578560(void* a0) {
    return main::InstanceTable_38(((uintptr_t)((char*)(a0) + 40)));
}

// sub_15787c0  (orig 0x15787c0, tailcall)
uint64_t main_f_15787c0(void* a0) {
    return main::InstanceTable_38(((uintptr_t)((char*)(a0) + 8)));
}

// sub_15787d0  (orig 0x15787d0, tailcall)
uint64_t main_f_15787d0(void* a0) {
    return main::InstanceTable_39(((uintptr_t)((char*)(a0) + 40)));
}

// sub_15789d0  (orig 0x15789d0, tailcall)
uint64_t main_f_15789d0(void* a0) {
    return main::InstanceTable_39(((uintptr_t)((char*)(a0) + 8)));
}

// sub_15789e0  (orig 0x15789e0, tailcall)
uint64_t main_f_15789e0(void* a0) {
    return main::InstanceTable_40(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1578be0  (orig 0x1578be0, tailcall)
uint64_t main_f_1578be0(void* a0) {
    return main::InstanceTable_40(((uintptr_t)((char*)(a0) + 8)));
}

// sub_1578bf0  (orig 0x1578bf0, tailcall)
uint64_t main_f_1578bf0(void* a0) {
    return main::InstanceTable_41(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1578df0  (orig 0x1578df0, tailcall)
uint64_t main_f_1578df0(void* a0) {
    return main::InstanceTable_41(((uintptr_t)((char*)(a0) + 8)));
}

// sub_1578e00  (orig 0x1578e00, tailcall)
uint64_t main_f_1578e00(void* a0) {
    return main::InstanceTable_42(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1579010  (orig 0x1579010, tailcall)
uint64_t main_f_1579010(void* a0) {
    return main::InstanceTable_42(((uintptr_t)((char*)(a0) + 8)));
}

// sub_1579020  (orig 0x1579020, tailcall)
uint64_t main_f_1579020(void* a0) {
    return main::InstanceTable_43(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1579230  (orig 0x1579230, tailcall)
uint64_t main_f_1579230(void* a0) {
    return main::InstanceTable_43(((uintptr_t)((char*)(a0) + 8)));
}

// sub_157ae30  (orig 0x157ae30, tailcall)
uint64_t main_f_157ae30(void* a0) {
    return main::InstanceTable_52(((uintptr_t)((char*)(a0) + 40)));
}

// sub_157b030  (orig 0x157b030, tailcall)
uint64_t main_f_157b030(void* a0) {
    return main::InstanceTable_52(((uintptr_t)((char*)(a0) + 8)));
}

// sub_157b040  (orig 0x157b040, tailcall)
uint64_t main_f_157b040(void* a0) {
    return main::InstanceTable_53(((uintptr_t)((char*)(a0) + 40)));
}

// sub_157b240  (orig 0x157b240, tailcall)
uint64_t main_f_157b240(void* a0) {
    return main::InstanceTable_53(((uintptr_t)((char*)(a0) + 8)));
}

// sub_157b250  (orig 0x157b250, tailcall)
uint64_t main_f_157b250(void* a0) {
    return main::InstanceTable_54(((uintptr_t)((char*)(a0) + 40)));
}

// sub_157b440  (orig 0x157b440, tailcall)
uint64_t main_f_157b440(void* a0) {
    return main::InstanceTable_54(((uintptr_t)((char*)(a0) + 8)));
}

// sub_157c420  (orig 0x157c420, tailcall)
uint64_t main_f_157c420(void* a0) {
    return main::InstanceTable_61(((uintptr_t)((char*)(a0) + 40)));
}

// sub_157c670  (orig 0x157c670, tailcall)
uint64_t main_f_157c670(void* a0) {
    return main::InstanceTable_61(((uintptr_t)((char*)(a0) + 8)));
}

// sub_157c680  (orig 0x157c680, tailcall)
uint64_t main_f_157c680(void* a0) {
    return main::InstanceTable_62(((uintptr_t)((char*)(a0) + 40)));
}

// sub_157c8d0  (orig 0x157c8d0, tailcall)
uint64_t main_f_157c8d0(void* a0) {
    return main::InstanceTable_62(((uintptr_t)((char*)(a0) + 8)));
}

// sub_157c8e0  (orig 0x157c8e0, tailcall)
uint64_t main_f_157c8e0(void* a0) {
    return main::InstanceTable_63(((uintptr_t)((char*)(a0) + 40)));
}

// sub_157cad0  (orig 0x157cad0, tailcall)
uint64_t main_f_157cad0(void* a0) {
    return main::InstanceTable_64(((uintptr_t)((char*)(a0) + 40)));
}

// sub_157cf10  (orig 0x157cf10, tailcall)
uint64_t main_f_157cf10(void* a0) {
    return main::InstanceTable_66(((uintptr_t)((char*)(a0) + 40)));
}

// sub_157d120  (orig 0x157d120, tailcall)
uint64_t main_f_157d120(void* a0) {
    return main::InstanceTable_67(((uintptr_t)((char*)(a0) + 40)));
}

// sub_157d320  (orig 0x157d320, tailcall)
uint64_t main_f_157d320(void* a0) {
    return main::InstanceTable_68(((uintptr_t)((char*)(a0) + 40)));
}

// sub_157de50  (orig 0x157de50, tailcall)
uint64_t main_f_157de50(void* a0) {
    return main::sub_157dd90(((uintptr_t)((char*)(a0) - 160)));
}

// sub_157f0a0  (orig 0x157f0a0, tailcall)
uint64_t main_f_157f0a0(void* a0) {
    return main::InstanceTable_74(((uintptr_t)((char*)(a0) - 160)));
}

// sub_157f200  (orig 0x157f200, tailcall)
uint64_t main_f_157f200(void* a0) {
    return main::InstanceTable_75(((uintptr_t)((char*)(a0) - 160)));
}

// sub_157f320  (orig 0x157f320, tailcall)
uint64_t main_f_157f320(void* a0) {
    return main::sub_157f210(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1580440  (orig 0x1580440, tailcall)
uint64_t main_f_1580440(void* a0) {
    return main::InstanceTable_82(((uintptr_t)((char*)(a0) - 160)));
}

// sub_15805b0  (orig 0x15805b0, tailcall)
uint64_t main_f_15805b0(void* a0) {
    return main::InstanceTable_83(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1580810  (orig 0x1580810, tailcall)
uint64_t main_f_1580810(void* a0) {
    return main::InstanceTable_84(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1580960  (orig 0x1580960, tailcall)
uint64_t main_f_1580960(void* a0) {
    return main::sub_1580820(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1581ac0  (orig 0x1581ac0, tailcall)
uint64_t main_f_1581ac0(void* a0) {
    return main::InstanceTable_91(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1581c30  (orig 0x1581c30, tailcall)
uint64_t main_f_1581c30(void* a0) {
    return main::InstanceTable_92(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1581ea0  (orig 0x1581ea0, tailcall)
uint64_t main_f_1581ea0(void* a0) {
    return main::InstanceTable_93(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1591c30  (orig 0x1591c30, tailcall)
void main_f_1591c30() { main::sub_15b6e10(); }

// sub_1592070  (orig 0x1592070, tailcall)
void main_f_1592070() { main::sub_15b6e10(); }

// sub_1592920  (orig 0x1592920, tailcall)
void main_f_1592920() { main::sub_15b6e10(); }

// sub_1592a70  (orig 0x1592a70, tailcall)
void main_f_1592a70() { main::sub_15b6e10(); }

// sub_1592c70  (orig 0x1592c70, tailcall)
void main_f_1592c70() { main::sub_15b6e10(); }

// sub_1592d00  (orig 0x1592d00, tailcall)
void main_f_1592d00() { main::sub_15b6e10(); }

// sub_1592f80  (orig 0x1592f80, tailcall)
void main_f_1592f80() { main::sub_15b6e10(); }

// sub_15930f0  (orig 0x15930f0, tailcall)
void main_f_15930f0() { main::sub_15b6e10(); }

// sub_1593110  (orig 0x1593110, tailcall)
void main_f_1593110() { main::sub_15b6e10(); }

// sub_1593870  (orig 0x1593870, tailcall)
void main_f_1593870() { main::sub_15b6e10(); }

// sub_15946e0  (orig 0x15946e0, tailcall)
void main_f_15946e0() { main::sub_15b6e10(); }

// sub_1594700  (orig 0x1594700, tailcall)
void main_f_1594700() { main::sub_15b6e10(); }

// sub_15949b0  (orig 0x15949b0, tailcall)
void main_f_15949b0() { main::sub_15b6e10(); }

// sub_1595020  (orig 0x1595020, tailcall)
void main_f_1595020() { main::sub_15b6e10(); }

// sub_1595430  (orig 0x1595430, tailcall)
void main_f_1595430() { main::sub_15b6e10(); }

// sub_1599460  (orig 0x1599460, tailcall)
void main_f_1599460() { main::sub_15b6e10(); }

// sub_15994e0  (orig 0x15994e0, tailcall)
void main_f_15994e0() { main::sub_15b6e10(); }

// sub_159b400  (orig 0x159b400, tailcall)
uint64_t main_f_159b400(void* a0) {
    return main::sub_163ece0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_159b410  (orig 0x159b410, tailcall)
uint64_t main_f_159b410(void* a0) {
    return main::sub_163ecf0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_159b4e0  (orig 0x159b4e0, tailcall)
uint64_t main_f_159b4e0(void* a0) {
    return main::InstanceTable_386(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_159c700  (orig 0x159c700, tailcall)
void main_f_159c700() { main::sub_15b6e10(); }

// sub_159c8f0  (orig 0x159c8f0, tailcall)
void main_f_159c8f0() { main::sub_15b6e10(); }

// sub_159d3a0  (orig 0x159d3a0, tailcall)
uint64_t main_f_159d3a0(void* a0) {
    return main::InstanceTable_149(((uintptr_t)((char*)(a0) + 320)));
}

// sub_159d5a0  (orig 0x159d5a0, tailcall)
uint64_t main_f_159d5a0(void* a0) {
    return main::InstanceTable_150(((uintptr_t)((char*)(a0) + 320)));
}

// sub_159d7a0  (orig 0x159d7a0, tailcall)
uint64_t main_f_159d7a0(void* a0) {
    return main::InstanceTable_151(((uintptr_t)((char*)(a0) + 320)));
}

// sub_159e850  (orig 0x159e850, tailcall)
uint64_t main_f_159e850(void* a0) {
    return main::InstanceTable_157(((uintptr_t)((char*)(a0) + 320)));
}

// sub_159eea0  (orig 0x159eea0, tailcall)
uint64_t main_f_159eea0(void* a0) {
    return main::InstanceTable_160(((uintptr_t)((char*)(a0) + 320)));
}

// sub_159f550  (orig 0x159f550, tailcall)
uint64_t main_f_159f550(void* a0) {
    return main::InstanceTable_163(((uintptr_t)((char*)(a0) + 320)));
}

// sub_159f750  (orig 0x159f750, tailcall)
uint64_t main_f_159f750(void* a0) {
    return main::InstanceTable_164(((uintptr_t)((char*)(a0) + 320)));
}

// sub_159f950  (orig 0x159f950, tailcall)
uint64_t main_f_159f950(void* a0) {
    return main::InstanceTable_165(((uintptr_t)((char*)(a0) + 320)));
}

// sub_159fe10  (orig 0x159fe10, tailcall)
uint64_t main_f_159fe10(void* a0) {
    return main::InstanceTable_167(((uintptr_t)((char*)(a0) + 320)));
}

// sub_15a0790  (orig 0x15a0790, tailcall)
uint64_t main_f_15a0790(void* a0) {
    return main::InstanceTable_171(((uintptr_t)((char*)(a0) + 320)));
}

// sub_15a1080  (orig 0x15a1080, tailcall)
uint64_t main_f_15a1080(void* a0) {
    return main::InstanceTable_174(((uintptr_t)((char*)(a0) + 320)));
}

// sub_15a14f0  (orig 0x15a14f0, tailcall)
uint64_t main_f_15a14f0(void* a0) {
    return main::InstanceTable_176(((uintptr_t)((char*)(a0) + 320)));
}

// sub_15a1910  (orig 0x15a1910, tailcall)
uint64_t main_f_15a1910(void* a0) {
    return main::InstanceTable_178(((uintptr_t)((char*)(a0) + 320)));
}

// sub_15a1d30  (orig 0x15a1d30, tailcall)
uint64_t main_f_15a1d30(void* a0) {
    return main::InstanceTable_180(((uintptr_t)((char*)(a0) + 320)));
}

// sub_15a98d0  (orig 0x15a98d0, tailcall)
void main_f_15a98d0() { main::sub_15b6e10(); }

// sub_15a98e0  (orig 0x15a98e0, tailcall)
void main_f_15a98e0() { main::sub_15b6e10(); }

// sub_15ae580  (orig 0x15ae580, tailcall)
uint64_t main_f_15ae580(void* a0) {
    return main::sub_162f760(((uintptr_t)((char*)(a0) + 32)));
}

// sub_15ae590  (orig 0x15ae590, tailcall)
uint64_t main_f_15ae590(void* a0) {
    return main::InstanceTable_182(((uintptr_t)((char*)(a0) + 32)));
}

// sub_15ae790  (orig 0x15ae790, tailcall)
uint64_t main_f_15ae790(void* a0) {
    return main::InstanceTable_183(((uintptr_t)((char*)(a0) + 32)));
}

// sub_15ae980  (orig 0x15ae980, tailcall)
uint64_t main_f_15ae980(void* a0) {
    return main::InstanceTable_184(((uintptr_t)((char*)(a0) + 32)));
}

// sub_15aebd0  (orig 0x15aebd0, tailcall)
uint64_t main_f_15aebd0(void* a0) {
    return main::InstanceTable_185(((uintptr_t)((char*)(a0) + 32)));
}

// sub_15aedd0  (orig 0x15aedd0, tailcall)
uint64_t main_f_15aedd0(void* a0) {
    return main::InstanceTable_186(((uintptr_t)((char*)(a0) + 32)));
}

// sub_15b38d0  (orig 0x15b38d0, tailcall)
uint64_t main_f_15b38d0(void* a0) {
    return main::sub_15bab00(((uintptr_t)((char*)(a0) + 56)));
}

// sub_15b4170  (orig 0x15b4170, tailcall)
void main_f_15b4170() { main::sub_ce0(); }

// sub_15b4d40  (orig 0x15b4d40, tailcall)
uint64_t main_f_15b4d40(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 40));
    return main::InstanceTable_195(((uintptr_t)(*(uint64_t*)((char*)(p0) + 144))));
}

// sub_15b4f90  (orig 0x15b4f90, tailcall)
uint64_t main_f_15b4f90(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 40));
    return main::InstanceTable_196(((uintptr_t)(*(uint64_t*)((char*)(p0) + 144))));
}

// sub_15b5200  (orig 0x15b5200, tailcall)
uint64_t main_f_15b5200(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 40));
    return main::InstanceTable_197(((uintptr_t)(*(uint64_t*)((char*)(p0) + 144))));
}

// sub_15b5470  (orig 0x15b5470, tailcall)
uint64_t main_f_15b5470(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 40));
    return main::InstanceTable_198(((uintptr_t)(*(uint64_t*)((char*)(p0) + 144))));
}

// sub_15b9320  (orig 0x15b9320, tailcall)
void main_f_15b9320() { main::sub_15c0b80(); }

// sub_15b9330  (orig 0x15b9330, tailcall)
void main_f_15b9330() { main::sub_15c0c80(); }

// sub_15becb0  (orig 0x15becb0, tailcall)
uint64_t main_f_15becb0(void* a0) {
    *(uint32_t*)((char*)(a0) + 8) = 0;
    return main::sub_15becc0(((uintptr_t)(a0)));
}

// sub_15c64a0  (orig 0x15c64a0, tailcall)
void main_f_15c64a0() { main::sub_15b6e10(); }

// sub_15ca5b0  (orig 0x15ca5b0, tailcall)
void main_f_15ca5b0() { main::CallContext_2(); }

// sub_15cb140  (orig 0x15cb140, tailcall)
void main_f_15cb140() { main::InstanceTable_214(); }

// sub_15ce000  (orig 0x15ce000, tailcall)
void main_f_15ce000() { main::unnamed_69(); }

// sub_15ce680  (orig 0x15ce680, tailcall)
void main_f_15ce680() { main::sub_15b6e10(); }

// sub_15cee10  (orig 0x15cee10, tailcall)
void main_f_15cee10() { main::sub_15b6e10(); }

// sub_15d3020  (orig 0x15d3020, tailcall)
uint64_t main_f_15d3020(void* a0) {
    return main::sub_15bab00(((uintptr_t)((char*)(a0) + 16)));
}

// sub_15d4740  (orig 0x15d4740, tailcall)
void main_f_15d4740() { main::sub_15b6e10(); }

// sub_15d4d60  (orig 0x15d4d60, tailcall)
void main_f_15d4d60() { main::sub_15b6e10(); }

// sub_15d5710  (orig 0x15d5710, tailcall)
void main_f_15d5710() { main::sub_15b6e10(); }

// sub_15d65f0  (orig 0x15d65f0, tailcall)
uint64_t main_f_15d65f0(void* a0) {
    return main::sub_15bab00(((uintptr_t)((char*)(a0) + 8)));
}

// sub_15d7270  (orig 0x15d7270, tailcall)
uint64_t main_f_15d7270(void* a0) {
    return main::sub_15ccdf0(((uintptr_t)((char*)(a0) + 16)));
}

// sub_15d89d0  (orig 0x15d89d0, tailcall)
uint64_t main_f_15d89d0(void* a0) {
    return main::sub_15e74b0(((uintptr_t)((char*)(a0) + 128)));
}

// sub_15dacd0  (orig 0x15dacd0, tailcall)
void main_f_15dacd0() { main::InstanceTable_239(); }

// sub_15ed930  (orig 0x15ed930, tailcall)
void main_f_15ed930() { main::sub_15b6e10(); }

// sub_15f0910  (orig 0x15f0910, tailcall)
uint64_t main_f_15f0910(void* a0) {
    return main::sub_15d6e10(((uintptr_t)((char*)(a0) + 24)));
}

// sub_1606410  (orig 0x1606410, tailcall)
void main_f_1606410() { main::sub_15b6e10(); }

// sub_1609f70  (orig 0x1609f70, tailcall)
void main_f_1609f70() { main::sub_15b6e10(); }

// sub_160a520  (orig 0x160a520, tailcall)
void main_f_160a520() { main::sub_15b6e10(); }

// sub_160a760  (orig 0x160a760, tailcall)
void main_f_160a760() { main::sub_15b6e10(); }

// sub_160b000  (orig 0x160b000, tailcall)
void main_f_160b000() { main::sub_15b6e10(); }

// sub_160f680  (orig 0x160f680, tailcall)
void main_f_160f680() { main::sub_161e5f0(); }

// sub_160fca0  (orig 0x160fca0, tailcall)
void main_f_160fca0() { main::sub_15b6e10(); }

// sub_160fd00  (orig 0x160fd00, tailcall)
void main_f_160fd00() { main::sub_15b6e10(); }

// sub_1610650  (orig 0x1610650, tailcall)
void main_f_1610650() { main::sub_15b6e10(); }

// sub_1610950  (orig 0x1610950, tailcall)
void main_f_1610950() { main::sub_15b6e10(); }

// sub_1610960  (orig 0x1610960, tailcall)
void main_f_1610960() { main::sub_15b6e10(); }

// sub_1611c30  (orig 0x1611c30, tailcall)
void main_f_1611c30() { main::sub_15b6e10(); }

// sub_1612520  (orig 0x1612520, tailcall)
void main_f_1612520() { main::sub_15b6e10(); }

// sub_1612550  (orig 0x1612550, tailcall)
void main_f_1612550() { main::sub_15b6e10(); }

// sub_1614430  (orig 0x1614430, tailcall)
void main_f_1614430() { main::sub_15b6e10(); }

// sub_1615a00  (orig 0x1615a00, tailcall)
void main_f_1615a00() { main::sub_15b6e10(); }

// sub_1615a10  (orig 0x1615a10, tailcall)
void main_f_1615a10() { main::sub_15b6e10(); }

// sub_1615a20  (orig 0x1615a20, tailcall)
void main_f_1615a20() { main::sub_15b6e10(); }

// sub_1615a30  (orig 0x1615a30, tailcall)
void main_f_1615a30() { main::sub_15b6e10(); }

// sub_1615a40  (orig 0x1615a40, tailcall)
void main_f_1615a40() { main::sub_15b6e10(); }

// sub_1616850  (orig 0x1616850, tailcall)
void main_f_1616850() { main::sub_15b6e10(); }

// sub_1616860  (orig 0x1616860, tailcall)
void main_f_1616860() { main::sub_15b6e10(); }

// sub_1616c00  (orig 0x1616c00, tailcall)
void main_f_1616c00() { main::sub_15b6e10(); }

// sub_16179f0  (orig 0x16179f0, tailcall)
uint64_t main_f_16179f0(void* a0) {
    return main::sub_162a440(((uintptr_t)((char*)(a0) + 16)));
}

// sub_1617d60  (orig 0x1617d60, tailcall)
uint64_t main_f_1617d60(void* a0) {
    return main::sub_162a240(((uintptr_t)((char*)(a0) + 16)));
}

// sub_1617d70  (orig 0x1617d70, tailcall)
uint64_t main_f_1617d70(void* a0) {
    return main::Client_call_close(((uintptr_t)((char*)(a0) + 16)));
}

// sub_1617d80  (orig 0x1617d80, tailcall)
uint64_t main_f_1617d80(void* a0) {
    return main::sub_162a5a0(((uintptr_t)((char*)(a0) + 16)));
}

// sub_1617da0  (orig 0x1617da0, tailcall)
uint64_t main_f_1617da0(void* a0) {
    return main::sub_162a4f0(((uintptr_t)((char*)(a0) + 16)));
}

// sub_16184f0  (orig 0x16184f0, tailcall)
void main_f_16184f0() { main::sub_15b6e10(); }

// sub_1621f60  (orig 0x1621f60, tailcall)
void main_f_1621f60() { main::sub_15b6e10(); }

// sub_1622060  (orig 0x1622060, tailcall)
uint64_t main_f_1622060(void* a0) {
    return main::sub_15bab00(((uintptr_t)((char*)(a0) + 16)));
}

// sub_1622140  (orig 0x1622140, tailcall)
uint64_t main_f_1622140(void* a0) {
    return main::sub_15bab00(((uintptr_t)((char*)(a0) + 320)));
}

// sub_1622480  (orig 0x1622480, tailcall)
void main_f_1622480() { main::sub_15b6e10(); }

// sub_1622bb0  (orig 0x1622bb0, tailcall)
void main_f_1622bb0() { main::sub_15b6e10(); }

// sub_1622be0  (orig 0x1622be0, tailcall)
void main_f_1622be0() { main::sub_15b6e10(); }

// sub_1624b20  (orig 0x1624b20, tailcall)
void main_f_1624b20() { main::sub_15b6e10(); }

// sub_1624bc0  (orig 0x1624bc0, tailcall)
void main_f_1624bc0() { main::sub_15b6e10(); }

// sub_1624c20  (orig 0x1624c20, tailcall)
void main_f_1624c20() { main::sub_15b6e10(); }

// sub_1626e90  (orig 0x1626e90, tailcall)
void main_f_1626e90() { main::sub_15b6e10(); }

// sub_162c180  (orig 0x162c180, tailcall)
void main_f_162c180() { main::sub_162cae0(); }

// sub_162d870  (orig 0x162d870, tailcall)
void main_f_162d870() { main::sub_15b6e10(); }

// sub_162d890  (orig 0x162d890, tailcall)
void main_f_162d890() { main::sub_15b6e10(); }

// sub_162ee50  (orig 0x162ee50, tailcall)
void main_f_162ee50() { main::sub_15b6e10(); }

// sub_162ef90  (orig 0x162ef90, tailcall)
void main_f_162ef90() { main::sub_15cac40(); }

// sub_162efb0  (orig 0x162efb0, tailcall)
void main_f_162efb0() { main_f_15bb240(); }

