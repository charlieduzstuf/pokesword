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

namespace main { void sub_e7c4c0(); }
namespace main { void sub_1478b40(); }
namespace main { void sub_1479510(); }
namespace main { void sub_1479c40(); }
namespace main { void sub_147a3c0(); }
namespace main { void sub_147a970(); }
namespace main { void sub_147b180(); }
namespace main { void sub_147b920(); }
namespace main { void sub_147ba90(); }
namespace main { void sub_147c110(); }
namespace main { void sub_147cc80(); }
namespace main { void sub_147d0c0(); }
namespace main { void sub_147d510(); }
namespace main { void sub_147dc40(); }
namespace main { void sub_147ddb0(); }
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
namespace main { void sub_1484170(); }
namespace main { void sub_1484ad0(); }
namespace main { void sub_1485050(); }
namespace main { void sub_1485590(); }
namespace main { void sub_1485d90(); }
namespace main { void sub_1488f50(); }
namespace main { void sub_1489610(); }
namespace main { void sub_148ded0(); }
namespace main { void sub_148e870(); }
namespace main { void sub_148f0c0(); }
namespace main { void sub_148f750(); }
namespace main { void sub_148fdb0(); }
namespace main { void sub_14908a0(); }
namespace main { void sub_1490d90(); }
namespace main { void sub_1491200(); }
namespace main { void sub_1491620(); }
namespace main { void sub_1491a70(); }
namespace main { void sub_1492150(); }
namespace main { void sub_1492840(); }
namespace main { void sub_1493090(); }
namespace main { void sub_14939e0(); }
namespace main { void sub_1494330(); }
namespace main { void sub_1494ae0(); }
namespace main { void sub_1494ed0(); }
namespace main { void sub_14956b0(); }
namespace main { void sub_1495d60(); }
namespace main { void sub_1496410(); }
namespace main { void sub_1496ac0(); }
namespace main { void sub_14974f0(); }
namespace main { void sub_1497ce0(); }
namespace main { void sub_1498a90(); }
namespace main { void sub_e7feb0(); }
namespace main { void sub_149ad00(); }
namespace main { void sub_149b080(); }
namespace main { void sub_149e8a0(); }
namespace main { void sub_149edc0(); }
namespace main { void sub_149fe90(); }
namespace main { void sub_14a1b90(); }
namespace main { void sub_148fee0(); }
namespace main { void sub_14a53b0(); }
namespace main { void sub_1495000(); }
namespace main { void sub_14a6450(); }
namespace main { void sub_14a7d00(); }
namespace main { void sub_14aa880(); }
namespace main { void sub_14b1d50(); }
namespace main { void sub_14a7fd0(); }
namespace main { void sub_14b70f0(); }
namespace main { void sub_14b8030(); }
namespace main { void sub_14b8960(); }
namespace main { void sub_ce0(); }
namespace main { void sub_14ba4c0(); }
namespace main { void sub_14bdb50(); }
namespace main { void sub_14d39f0(); }
namespace main { void sub_14d4880(); }
namespace main { void sub_14d4fd0(); }
namespace main { void sub_14d5290(); }
namespace main { void sub_14da520(); }
namespace main { void sub_14dbb70(); }
namespace main { void sub_6726c0(); }
namespace main { void sub_14e1f30(); }
namespace main { void sub_14e2aa0(); }
namespace main { void sub_14e5370(); }
namespace main { void sub_f0ce40(); }
namespace main { void sub_14e8460(); }
namespace main { void sub_14ec950(); }
namespace main { void sub_14ed590(); }
namespace main { void sub_14f5220(); }
namespace main { void sub_14f90c0(); }
extern void main_f_14e6e00();
namespace main { void sub_14e6e10(); }
namespace main { void sub_1500210(); }
namespace main { void sub_1502be0(); }
namespace main { void sub_1507000(); }
namespace main { void sub_1507db0(); }
namespace main { void sub_1508360(); }
namespace main { void sub_1508500(); }
namespace main { void sub_150c500(); }
namespace main { void sub_150cd80(); }
namespace main { void sub_150d990(); }
namespace main { void sub_150e690(); }
namespace main { void sub_150f330(); }
namespace main { void sub_150fd80(); }
namespace main { void sub_1511810(); }
namespace main { void sub_e7c250(); }
namespace main { void sub_1513650(); }
namespace main { void sub_15146d0(); }
namespace main { void sub_1516200(); }
namespace main { void sub_1516c70(); }
namespace main { void sub_1517590(); }
namespace main { void sub_1517e60(); }
namespace main { void sub_15185f0(); }
namespace main { void sub_151b530(); }
namespace main { void sub_15209c0(); }
namespace main { void sub_1520be0(); }
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
namespace main { void sub_1539d10(); }
namespace main { void sub_153ad80(); }
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
namespace main { void InstanceTable_11(); }
namespace main { void InstanceTable_14(); }
namespace main { void InstanceTable_15(); }
namespace main { void sub_15b6e10(); }
namespace main { void sub_15c0b80(); }
namespace main { void sub_15c0c80(); }
namespace main { void CallContext_2(); }
namespace main { void InstanceTable_214(); }
namespace main { void unnamed_69(); }
namespace main { void InstanceTable_239(); }
namespace main { void sub_161e5f0(); }
namespace main { void sub_162cae0(); }
namespace main { void sub_15cac40(); }
extern void main_f_15bb240();
namespace main { void sub_1636d00(); }
extern uint32_t main_f_15d81f0();
namespace main { void sub_1655790(); }
namespace main { void sub_16613e0(); }
extern void main_f_1723320();
extern void main_f_1724e60();
extern void main_f_1731620();
extern void main_f_16a8a60();
namespace main { void sub_16a8ef0(); }
namespace main { void sub_16a8f30(); }
namespace main { void sub_16a8f70(); }
namespace main { void sub_16a8fb0(); }
namespace main { void sub_16a8ff0(); }
namespace main { void sub_16a9030(); }
namespace main { void sub_16a8cf0(); }
namespace main { void sub_16a8d30(); }
namespace main { void sub_16a8c70(); }
namespace main { void sub_16a8cb0(); }
namespace main { void sub_16a8d70(); }
namespace main { void sub_16a8db0(); }
namespace main { void sub_16a8e70(); }
namespace main { void sub_16a8eb0(); }
namespace main { void sub_1664290(); }
namespace main { void sub_1723b80(); }
namespace main { void sub_17263e0(); }
namespace main { void sub_17229e0(); }
namespace main { void sub_1723440(); }
namespace main { void sub_1723a90(); }
extern void main_f_16a3bd0();
namespace main { void sub_1735e30(); }
extern void main_f_1733d30();
namespace main { void sub_16886f0(); }
extern void main_f_168dfa0();
extern uint32_t main_f_168dfc0();
extern void main_f_168dfd0();
extern uint32_t main_f_168dfe0();
extern uint32_t main_f_168dff0();
extern uint32_t main_f_168e000();
extern uint32_t main_f_168e010();
extern uint32_t main_f_168e020();
extern uint32_t main_f_168e030();
extern uint32_t main_f_168e040();
namespace main { void sub_168e050(); }
namespace main { void sub_168e090(); }
namespace main { void sub_168e0d0(); }
namespace main { void sub_168e110(); }
extern void main_f_168e150();
extern void main_f_168e160();
extern void main_f_168e170();
extern void main_f_168e180();
extern void main_f_168e190();
extern void main_f_168e1a0();
extern void main_f_168e1b0();
extern void main_f_168e1c0();
extern void main_f_168e1d0();
extern void main_f_168e1e0();
namespace main { void sub_168e1f0(); }
namespace main { void sub_168e240(); }
extern void main_f_168e280();
extern void main_f_168e290();
extern void main_f_168e2a0();
extern void main_f_168e2b0();
extern void main_f_168e2c0();
extern void main_f_168e2d0();
extern void main_f_168e2e0();
extern void main_f_168e2f0();
namespace main { void sub_168e300(); }
namespace main { void sub_168e350(); }
namespace main { void sub_168e390(); }
namespace main { void sub_168e3e0(); }
namespace main { void sub_168e420(); }
namespace main { void sub_168e470(); }
extern uint64_t main_f_168e4b0();
extern void main_f_168e4c0();
namespace main { void sub_168e4d0(); }
namespace main { void sub_168e520(); }
namespace main { void sub_168e560(); }
namespace main { void sub_168e5b0(); }
namespace main { void sub_168e5f0(); }
namespace main { void sub_168e640(); }
namespace main { void sub_168e680(); }
namespace main { void sub_168e6c0(); }
namespace main { void sub_168e700(); }
namespace main { void sub_168e740(); }
extern uint64_t main_f_168e780();
extern void main_f_168e790();
namespace main { void sub_168e7a0(); }
namespace main { void sub_168e800(); }
namespace main { void sub_1688310(); }
namespace main { void sub_1687490(); }
namespace main { void sub_168a8a0(); }
namespace main { void sub_1688ab0(); }
extern void main_f_1688cd0();
namespace main { void sub_168a500(); }
extern void main_f_1688290();
namespace main { void sub_169a870(); }
extern void main_f_1733e40();
extern void main_f_169aed0();
namespace main { void sub_1727510(); }
namespace main { void sub_16a8b70(); }
namespace main { void sub_16a8bb0(); }
namespace main { void sub_16a8bf0(); }
namespace main { void sub_16a8c30(); }
namespace main { void sub_16a8df0(); }
namespace main { void sub_16a8e30(); }
namespace main { void sub_1723250(); }
namespace main { void sub_17227f0(); }
extern void main_f_165baa0();
namespace main { void sub_16a4440(); }

// sub_1478800  (orig 0x1478800, ret_only)
void main_f_1478800() {}

// sub_1478810  (orig 0x1478810, copy2)
void main_f_1478810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478820  (orig 0x1478820, copy2)
void main_f_1478820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478850  (orig 0x1478850, ret_only)
void main_f_1478850() {}

// sub_1478860  (orig 0x1478860, copy2)
void main_f_1478860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478870  (orig 0x1478870, copy2)
void main_f_1478870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1478ab0  (orig 0x1478ab0, ret_only)
void main_f_1478ab0() {}

// sub_1478ac0  (orig 0x1478ac0, tailcall)
void main_f_1478ac0() { main::sub_e7c4c0(); }

// sub_1478ad0  (orig 0x1478ad0, tailcall)
void main_f_1478ad0() { main::sub_1478b40(); }

// sub_1478b00  (orig 0x1478b00, tailcall)
void main_f_1478b00() { main::sub_1478b40(); }

// sub_1478b10  (orig 0x1478b10, tailcall)
void main_f_1478b10() { main::sub_1478b40(); }

// sub_1479480  (orig 0x1479480, ret_only)
void main_f_1479480() {}

// sub_1479490  (orig 0x1479490, tailcall)
void main_f_1479490() { main::sub_e7c4c0(); }

// sub_14794a0  (orig 0x14794a0, tailcall)
void main_f_14794a0() { main::sub_1479510(); }

// sub_14794d0  (orig 0x14794d0, tailcall)
void main_f_14794d0() { main::sub_1479510(); }

// sub_14794e0  (orig 0x14794e0, tailcall)
void main_f_14794e0() { main::sub_1479510(); }

// sub_1479a90  (orig 0x1479a90, tailcall)
void main_f_1479a90() { main::sub_1479c40(); }

// sub_1479b60  (orig 0x1479b60, tailcall)
void main_f_1479b60() { main::sub_1479c40(); }

// sub_1479b70  (orig 0x1479b70, tailcall)
void main_f_1479b70() { main::sub_1479c40(); }

// sub_1479ec0  (orig 0x1479ec0, ret_only)
void main_f_1479ec0() {}

// sub_1479ed0  (orig 0x1479ed0, copy2)
void main_f_1479ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1479ee0  (orig 0x1479ee0, copy2)
void main_f_1479ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_147a330  (orig 0x147a330, ret_only)
void main_f_147a330() {}

// sub_147a340  (orig 0x147a340, tailcall)
void main_f_147a340() { main::sub_e7c4c0(); }

// sub_147a350  (orig 0x147a350, tailcall)
void main_f_147a350() { main::sub_147a3c0(); }

// sub_147a380  (orig 0x147a380, tailcall)
void main_f_147a380() { main::sub_147a3c0(); }

// sub_147a390  (orig 0x147a390, tailcall)
void main_f_147a390() { main::sub_147a3c0(); }

// sub_147a8f0  (orig 0x147a8f0, tailcall)
void main_f_147a8f0() { main::sub_e7c4c0(); }

// sub_147a900  (orig 0x147a900, tailcall)
void main_f_147a900() { main::sub_147a970(); }

// sub_147a930  (orig 0x147a930, tailcall)
void main_f_147a930() { main::sub_147a970(); }

// sub_147a940  (orig 0x147a940, tailcall)
void main_f_147a940() { main::sub_147a970(); }

// sub_147b100  (orig 0x147b100, tailcall)
void main_f_147b100() { main::sub_e7c4c0(); }

// sub_147b110  (orig 0x147b110, tailcall)
void main_f_147b110() { main::sub_147b180(); }

// sub_147b140  (orig 0x147b140, tailcall)
void main_f_147b140() { main::sub_147b180(); }

// sub_147b150  (orig 0x147b150, tailcall)
void main_f_147b150() { main::sub_147b180(); }

// sub_147b910  (orig 0x147b910, ret_only)
void main_f_147b910() {}

// sub_147ba10  (orig 0x147ba10, tailcall)
void main_f_147ba10() { main::sub_147b920(); }

// sub_147ba20  (orig 0x147ba20, tailcall)
void main_f_147ba20() { main::sub_147ba90(); }

// sub_147ba50  (orig 0x147ba50, tailcall)
void main_f_147ba50() { main::sub_147ba90(); }

// sub_147ba60  (orig 0x147ba60, tailcall)
void main_f_147ba60() { main::sub_147ba90(); }

// sub_147c080  (orig 0x147c080, ret_only)
void main_f_147c080() {}

// sub_147c090  (orig 0x147c090, tailcall)
void main_f_147c090() { main::sub_e7c4c0(); }

// sub_147c0a0  (orig 0x147c0a0, tailcall)
void main_f_147c0a0() { main::sub_147c110(); }

// sub_147c0d0  (orig 0x147c0d0, tailcall)
void main_f_147c0d0() { main::sub_147c110(); }

// sub_147c0e0  (orig 0x147c0e0, tailcall)
void main_f_147c0e0() { main::sub_147c110(); }

// sub_147cbf0  (orig 0x147cbf0, ret_only)
void main_f_147cbf0() {}

// sub_147cc00  (orig 0x147cc00, tailcall)
void main_f_147cc00() { main::sub_e7c4c0(); }

// sub_147cc10  (orig 0x147cc10, tailcall)
void main_f_147cc10() { main::sub_147cc80(); }

// sub_147cc40  (orig 0x147cc40, tailcall)
void main_f_147cc40() { main::sub_147cc80(); }

// sub_147cc50  (orig 0x147cc50, tailcall)
void main_f_147cc50() { main::sub_147cc80(); }

// sub_147d030  (orig 0x147d030, ret_only)
void main_f_147d030() {}

// sub_147d040  (orig 0x147d040, tailcall)
void main_f_147d040() { main::sub_e7c4c0(); }

// sub_147d050  (orig 0x147d050, tailcall)
void main_f_147d050() { main::sub_147d0c0(); }

// sub_147d080  (orig 0x147d080, tailcall)
void main_f_147d080() { main::sub_147d0c0(); }

// sub_147d090  (orig 0x147d090, tailcall)
void main_f_147d090() { main::sub_147d0c0(); }

// sub_147d490  (orig 0x147d490, tailcall)
void main_f_147d490() { main::sub_e7c4c0(); }

// sub_147d4a0  (orig 0x147d4a0, tailcall)
void main_f_147d4a0() { main::sub_147d510(); }

// sub_147d4d0  (orig 0x147d4d0, tailcall)
void main_f_147d4d0() { main::sub_147d510(); }

// sub_147d4e0  (orig 0x147d4e0, tailcall)
void main_f_147d4e0() { main::sub_147d510(); }

// sub_147dc30  (orig 0x147dc30, ret_only)
void main_f_147dc30() {}

// sub_147dd30  (orig 0x147dd30, tailcall)
void main_f_147dd30() { main::sub_147dc40(); }

// sub_147dd40  (orig 0x147dd40, tailcall)
void main_f_147dd40() { main::sub_147ddb0(); }

// sub_147dd70  (orig 0x147dd70, tailcall)
void main_f_147dd70() { main::sub_147ddb0(); }

// sub_147dd80  (orig 0x147dd80, tailcall)
void main_f_147dd80() { main::sub_147ddb0(); }

// sub_147e160  (orig 0x147e160, tailcall)
void main_f_147e160() { main::sub_e7c4c0(); }

// sub_147e170  (orig 0x147e170, tailcall)
void main_f_147e170() { main::sub_147e1e0(); }

// sub_147e1a0  (orig 0x147e1a0, tailcall)
void main_f_147e1a0() { main::sub_147e1e0(); }

// sub_147e1b0  (orig 0x147e1b0, tailcall)
void main_f_147e1b0() { main::sub_147e1e0(); }

// sub_147e6d0  (orig 0x147e6d0, ret_only)
void main_f_147e6d0() {}

// sub_147e6e0  (orig 0x147e6e0, tailcall)
void main_f_147e6e0() { main::sub_e7c4c0(); }

// sub_147e6f0  (orig 0x147e6f0, tailcall)
void main_f_147e6f0() { main::sub_147e760(); }

// sub_147e720  (orig 0x147e720, tailcall)
void main_f_147e720() { main::sub_147e760(); }

// sub_147e730  (orig 0x147e730, tailcall)
void main_f_147e730() { main::sub_147e760(); }

// sub_147f010  (orig 0x147f010, ret_only)
void main_f_147f010() {}

// sub_147f140  (orig 0x147f140, tailcall)
void main_f_147f140() { main::sub_147f3b0(); }

// sub_147f270  (orig 0x147f270, tailcall)
void main_f_147f270() { main::sub_147f3b0(); }

// sub_147f280  (orig 0x147f280, tailcall)
void main_f_147f280() { main::sub_147f3b0(); }

// sub_147fc20  (orig 0x147fc20, ret_only)
void main_f_147fc20() {}

// sub_147fd50  (orig 0x147fd50, tailcall)
void main_f_147fd50() { main::sub_147ffc0(); }

// sub_147fe80  (orig 0x147fe80, tailcall)
void main_f_147fe80() { main::sub_147ffc0(); }

// sub_147fe90  (orig 0x147fe90, tailcall)
void main_f_147fe90() { main::sub_147ffc0(); }

// sub_1480440  (orig 0x1480440, ret_only)
void main_f_1480440() {}

// sub_1480450  (orig 0x1480450, tailcall)
void main_f_1480450() { main::sub_e7c4c0(); }

// sub_1480460  (orig 0x1480460, tailcall)
void main_f_1480460() { main::sub_14804d0(); }

// sub_1480490  (orig 0x1480490, tailcall)
void main_f_1480490() { main::sub_14804d0(); }

// sub_14804a0  (orig 0x14804a0, tailcall)
void main_f_14804a0() { main::sub_14804d0(); }

// sub_1480810  (orig 0x1480810, ret_only)
void main_f_1480810() {}

// sub_1480820  (orig 0x1480820, tailcall)
void main_f_1480820() { main::sub_e7c4c0(); }

// sub_1480830  (orig 0x1480830, tailcall)
void main_f_1480830() { main::sub_14808a0(); }

// sub_1480860  (orig 0x1480860, tailcall)
void main_f_1480860() { main::sub_14808a0(); }

// sub_1480870  (orig 0x1480870, tailcall)
void main_f_1480870() { main::sub_14808a0(); }

// sub_1480cb0  (orig 0x1480cb0, ret_only)
void main_f_1480cb0() {}

// sub_1480cc0  (orig 0x1480cc0, tailcall)
void main_f_1480cc0() { main::sub_e7c4c0(); }

// sub_1480cd0  (orig 0x1480cd0, tailcall)
void main_f_1480cd0() { main::sub_1480d40(); }

// sub_1480d00  (orig 0x1480d00, tailcall)
void main_f_1480d00() { main::sub_1480d40(); }

// sub_1480d10  (orig 0x1480d10, tailcall)
void main_f_1480d10() { main::sub_1480d40(); }

// sub_1481090  (orig 0x1481090, ret_only)
void main_f_1481090() {}

// sub_14810a0  (orig 0x14810a0, tailcall)
void main_f_14810a0() { main::sub_e7c4c0(); }

// sub_14810b0  (orig 0x14810b0, tailcall)
void main_f_14810b0() { main::sub_1481120(); }

// sub_14810e0  (orig 0x14810e0, tailcall)
void main_f_14810e0() { main::sub_1481120(); }

// sub_14810f0  (orig 0x14810f0, tailcall)
void main_f_14810f0() { main::sub_1481120(); }

// sub_1481470  (orig 0x1481470, ret_only)
void main_f_1481470() {}

// sub_1481480  (orig 0x1481480, tailcall)
void main_f_1481480() { main::sub_e7c4c0(); }

// sub_1481490  (orig 0x1481490, tailcall)
void main_f_1481490() { main::sub_1481500(); }

// sub_14814c0  (orig 0x14814c0, tailcall)
void main_f_14814c0() { main::sub_1481500(); }

// sub_14814d0  (orig 0x14814d0, tailcall)
void main_f_14814d0() { main::sub_1481500(); }

// sub_1481850  (orig 0x1481850, ret_only)
void main_f_1481850() {}

// sub_1481860  (orig 0x1481860, tailcall)
void main_f_1481860() { main::sub_e7c4c0(); }

// sub_1481870  (orig 0x1481870, tailcall)
void main_f_1481870() { main::sub_14818e0(); }

// sub_14818a0  (orig 0x14818a0, tailcall)
void main_f_14818a0() { main::sub_14818e0(); }

// sub_14818b0  (orig 0x14818b0, tailcall)
void main_f_14818b0() { main::sub_14818e0(); }

// sub_1481ba0  (orig 0x1481ba0, mov_ret)
uint32_t main_f_1481ba0() { return 1; }

// sub_1481bb0  (orig 0x1481bb0, ret_only)
void main_f_1481bb0() {}

// sub_1481ca0  (orig 0x1481ca0, ret_only)
void main_f_1481ca0() {}

// sub_1481e80  (orig 0x1481e80, tailcall)
void main_f_1481e80() { main::sub_1482030(); }

// sub_1481f50  (orig 0x1481f50, tailcall)
void main_f_1481f50() { main::sub_1482030(); }

// sub_1481f60  (orig 0x1481f60, tailcall)
void main_f_1481f60() { main::sub_1482030(); }

// sub_1482810  (orig 0x1482810, getter)
uint64_t main_f_1482810(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1482980  (orig 0x1482980, mov_ret)
uint32_t main_f_1482980() { return 1; }

// sub_1483c40  (orig 0x1483c40, tailcall)
void main_f_1483c40() { main::sub_1483a40(); }

// sub_1483f80  (orig 0x1483f80, tailcall)
void main_f_1483f80() { main::sub_1484170(); }

// sub_1484070  (orig 0x1484070, tailcall)
void main_f_1484070() { main::sub_1484170(); }

// sub_1484080  (orig 0x1484080, tailcall)
void main_f_1484080() { main::sub_1484170(); }

// sub_14842b0  (orig 0x14842b0, ret_only)
void main_f_14842b0() {}

// sub_14842c0  (orig 0x14842c0, copy2)
void main_f_14842c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14842d0  (orig 0x14842d0, copy2)
void main_f_14842d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1484a50  (orig 0x1484a50, tailcall)
void main_f_1484a50() { main::sub_e7c4c0(); }

// sub_1484a60  (orig 0x1484a60, tailcall)
void main_f_1484a60() { main::sub_1484ad0(); }

// sub_1484a90  (orig 0x1484a90, tailcall)
void main_f_1484a90() { main::sub_1484ad0(); }

// sub_1484aa0  (orig 0x1484aa0, tailcall)
void main_f_1484aa0() { main::sub_1484ad0(); }

// sub_1484fc0  (orig 0x1484fc0, ret_only)
void main_f_1484fc0() {}

// sub_1484fd0  (orig 0x1484fd0, tailcall)
void main_f_1484fd0() { main::sub_e7c4c0(); }

// sub_1484fe0  (orig 0x1484fe0, tailcall)
void main_f_1484fe0() { main::sub_1485050(); }

// sub_1485010  (orig 0x1485010, tailcall)
void main_f_1485010() { main::sub_1485050(); }

// sub_1485020  (orig 0x1485020, tailcall)
void main_f_1485020() { main::sub_1485050(); }

// sub_1485500  (orig 0x1485500, ret_only)
void main_f_1485500() {}

// sub_1485510  (orig 0x1485510, tailcall)
void main_f_1485510() { main::sub_e7c4c0(); }

// sub_1485520  (orig 0x1485520, tailcall)
void main_f_1485520() { main::sub_1485590(); }

// sub_1485550  (orig 0x1485550, tailcall)
void main_f_1485550() { main::sub_1485590(); }

// sub_1485560  (orig 0x1485560, tailcall)
void main_f_1485560() { main::sub_1485590(); }

// sub_1485a90  (orig 0x1485a90, mov_ret)
uint32_t main_f_1485a90() { return 1; }

// sub_1485aa0  (orig 0x1485aa0, ret_only)
void main_f_1485aa0() {}

// sub_1485c40  (orig 0x1485c40, ret_only)
void main_f_1485c40() {}

// sub_1485d60  (orig 0x1485d60, tailcall)
void main_f_1485d60() { main::sub_1485d90(); }

// sub_1485d70  (orig 0x1485d70, tailcall)
void main_f_1485d70() { main::sub_1485d90(); }

// sub_1485d80  (orig 0x1485d80, tailcall)
void main_f_1485d80() { main::sub_1485d90(); }

// sub_1486570  (orig 0x1486570, getter)
uint64_t main_f_1486570(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14866e0  (orig 0x14866e0, mov_ret)
uint32_t main_f_14866e0() { return 1; }

// sub_1489140  (orig 0x1489140, tailcall)
void main_f_1489140() { main::sub_1488f50(); }

// sub_1489460  (orig 0x1489460, tailcall)
void main_f_1489460() { main::sub_1489610(); }

// sub_1489530  (orig 0x1489530, tailcall)
void main_f_1489530() { main::sub_1489610(); }

// sub_1489540  (orig 0x1489540, tailcall)
void main_f_1489540() { main::sub_1489610(); }

// sub_1489750  (orig 0x1489750, ret_only)
void main_f_1489750() {}

// sub_1489760  (orig 0x1489760, copy2)
void main_f_1489760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1489770  (orig 0x1489770, copy2)
void main_f_1489770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b640  (orig 0x148b640, ret_only)
void main_f_148b640() {}

// sub_148b650  (orig 0x148b650, copy2)
void main_f_148b650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b660  (orig 0x148b660, copy2)
void main_f_148b660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b690  (orig 0x148b690, ret_only)
void main_f_148b690() {}

// sub_148b6a0  (orig 0x148b6a0, copy2)
void main_f_148b6a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b6b0  (orig 0x148b6b0, copy2)
void main_f_148b6b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b6e0  (orig 0x148b6e0, ret_only)
void main_f_148b6e0() {}

// sub_148b6f0  (orig 0x148b6f0, copy2)
void main_f_148b6f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b700  (orig 0x148b700, copy2)
void main_f_148b700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b870  (orig 0x148b870, ret_only)
void main_f_148b870() {}

// sub_148b880  (orig 0x148b880, copy2)
void main_f_148b880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b890  (orig 0x148b890, copy2)
void main_f_148b890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b8b0  (orig 0x148b8b0, ret_only)
void main_f_148b8b0() {}

// sub_148b8c0  (orig 0x148b8c0, copy2)
void main_f_148b8c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b8d0  (orig 0x148b8d0, copy2)
void main_f_148b8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b8f0  (orig 0x148b8f0, ret_only)
void main_f_148b8f0() {}

// sub_148b900  (orig 0x148b900, copy2)
void main_f_148b900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148b910  (orig 0x148b910, copy2)
void main_f_148b910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148ba80  (orig 0x148ba80, ret_only)
void main_f_148ba80() {}

// sub_148ba90  (orig 0x148ba90, copy2)
void main_f_148ba90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148baa0  (orig 0x148baa0, copy2)
void main_f_148baa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_148de40  (orig 0x148de40, ret_only)
void main_f_148de40() {}

// sub_148de50  (orig 0x148de50, tailcall)
void main_f_148de50() { main::sub_e7c4c0(); }

// sub_148de60  (orig 0x148de60, tailcall)
void main_f_148de60() { main::sub_148ded0(); }

// sub_148de90  (orig 0x148de90, tailcall)
void main_f_148de90() { main::sub_148ded0(); }

// sub_148dea0  (orig 0x148dea0, tailcall)
void main_f_148dea0() { main::sub_148ded0(); }

// sub_148e7e0  (orig 0x148e7e0, ret_only)
void main_f_148e7e0() {}

// sub_148e7f0  (orig 0x148e7f0, tailcall)
void main_f_148e7f0() { main::sub_e7c4c0(); }

// sub_148e800  (orig 0x148e800, tailcall)
void main_f_148e800() { main::sub_148e870(); }

// sub_148e830  (orig 0x148e830, tailcall)
void main_f_148e830() { main::sub_148e870(); }

// sub_148e840  (orig 0x148e840, tailcall)
void main_f_148e840() { main::sub_148e870(); }

// sub_148f030  (orig 0x148f030, ret_only)
void main_f_148f030() {}

// sub_148f040  (orig 0x148f040, tailcall)
void main_f_148f040() { main::sub_e7c4c0(); }

// sub_148f050  (orig 0x148f050, tailcall)
void main_f_148f050() { main::sub_148f0c0(); }

// sub_148f080  (orig 0x148f080, tailcall)
void main_f_148f080() { main::sub_148f0c0(); }

// sub_148f090  (orig 0x148f090, tailcall)
void main_f_148f090() { main::sub_148f0c0(); }

// sub_148f6d0  (orig 0x148f6d0, tailcall)
void main_f_148f6d0() { main::sub_e7c4c0(); }

// sub_148f6e0  (orig 0x148f6e0, tailcall)
void main_f_148f6e0() { main::sub_148f750(); }

// sub_148f710  (orig 0x148f710, tailcall)
void main_f_148f710() { main::sub_148f750(); }

// sub_148f720  (orig 0x148f720, tailcall)
void main_f_148f720() { main::sub_148f750(); }

// sub_148fb30  (orig 0x148fb30, ret_only)
void main_f_148fb30() {}

// sub_148fc00  (orig 0x148fc00, tailcall)
void main_f_148fc00() { main::sub_148fdb0(); }

// sub_148fcd0  (orig 0x148fcd0, tailcall)
void main_f_148fcd0() { main::sub_148fdb0(); }

// sub_148fce0  (orig 0x148fce0, tailcall)
void main_f_148fce0() { main::sub_148fdb0(); }

// sub_1490620  (orig 0x1490620, ret_only)
void main_f_1490620() {}

// sub_14906f0  (orig 0x14906f0, tailcall)
void main_f_14906f0() { main::sub_14908a0(); }

// sub_14907c0  (orig 0x14907c0, tailcall)
void main_f_14907c0() { main::sub_14908a0(); }

// sub_14907d0  (orig 0x14907d0, tailcall)
void main_f_14907d0() { main::sub_14908a0(); }

// sub_1490cf0  (orig 0x1490cf0, mov_ret)
uint32_t main_f_1490cf0() { return 1; }

// sub_1490d10  (orig 0x1490d10, tailcall)
void main_f_1490d10() { main::sub_e7c4c0(); }

// sub_1490d20  (orig 0x1490d20, tailcall)
void main_f_1490d20() { main::sub_1490d90(); }

// sub_1490d50  (orig 0x1490d50, tailcall)
void main_f_1490d50() { main::sub_1490d90(); }

// sub_1490d60  (orig 0x1490d60, tailcall)
void main_f_1490d60() { main::sub_1490d90(); }

// sub_1491160  (orig 0x1491160, mov_ret)
uint32_t main_f_1491160() { return 1; }

// sub_1491170  (orig 0x1491170, ret_only)
void main_f_1491170() {}

// sub_1491180  (orig 0x1491180, tailcall)
void main_f_1491180() { main::sub_e7c4c0(); }

// sub_1491190  (orig 0x1491190, tailcall)
void main_f_1491190() { main::sub_1491200(); }

// sub_14911c0  (orig 0x14911c0, tailcall)
void main_f_14911c0() { main::sub_1491200(); }

// sub_14911d0  (orig 0x14911d0, tailcall)
void main_f_14911d0() { main::sub_1491200(); }

// sub_14915a0  (orig 0x14915a0, tailcall)
void main_f_14915a0() { main::sub_e7c4c0(); }

// sub_14915b0  (orig 0x14915b0, tailcall)
void main_f_14915b0() { main::sub_1491620(); }

// sub_14915e0  (orig 0x14915e0, tailcall)
void main_f_14915e0() { main::sub_1491620(); }

// sub_14915f0  (orig 0x14915f0, tailcall)
void main_f_14915f0() { main::sub_1491620(); }

// sub_14919e0  (orig 0x14919e0, ret_only)
void main_f_14919e0() {}

// sub_14919f0  (orig 0x14919f0, tailcall)
void main_f_14919f0() { main::sub_e7c4c0(); }

// sub_1491a00  (orig 0x1491a00, tailcall)
void main_f_1491a00() { main::sub_1491a70(); }

// sub_1491a30  (orig 0x1491a30, tailcall)
void main_f_1491a30() { main::sub_1491a70(); }

// sub_1491a40  (orig 0x1491a40, tailcall)
void main_f_1491a40() { main::sub_1491a70(); }

// sub_14920d0  (orig 0x14920d0, tailcall)
void main_f_14920d0() { main::sub_e7c4c0(); }

// sub_14920e0  (orig 0x14920e0, tailcall)
void main_f_14920e0() { main::sub_1492150(); }

// sub_1492110  (orig 0x1492110, tailcall)
void main_f_1492110() { main::sub_1492150(); }

// sub_1492120  (orig 0x1492120, tailcall)
void main_f_1492120() { main::sub_1492150(); }

// sub_14927c0  (orig 0x14927c0, tailcall)
void main_f_14927c0() { main::sub_e7c4c0(); }

// sub_14927d0  (orig 0x14927d0, tailcall)
void main_f_14927d0() { main::sub_1492840(); }

// sub_1492800  (orig 0x1492800, tailcall)
void main_f_1492800() { main::sub_1492840(); }

// sub_1492810  (orig 0x1492810, tailcall)
void main_f_1492810() { main::sub_1492840(); }

// sub_1493010  (orig 0x1493010, tailcall)
void main_f_1493010() { main::sub_e7c4c0(); }

// sub_1493020  (orig 0x1493020, tailcall)
void main_f_1493020() { main::sub_1493090(); }

// sub_1493050  (orig 0x1493050, tailcall)
void main_f_1493050() { main::sub_1493090(); }

// sub_1493060  (orig 0x1493060, tailcall)
void main_f_1493060() { main::sub_1493090(); }

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

// sub_1494aa0  (orig 0x1494aa0, tailcall)
void main_f_1494aa0() { main::sub_1494ae0(); }

// sub_1494ab0  (orig 0x1494ab0, tailcall)
void main_f_1494ab0() { main::sub_1494ae0(); }

// sub_1494e50  (orig 0x1494e50, tailcall)
void main_f_1494e50() { main::sub_e7c4c0(); }

// sub_1494e60  (orig 0x1494e60, tailcall)
void main_f_1494e60() { main::sub_1494ed0(); }

// sub_1494e90  (orig 0x1494e90, tailcall)
void main_f_1494e90() { main::sub_1494ed0(); }

// sub_1494ea0  (orig 0x1494ea0, tailcall)
void main_f_1494ea0() { main::sub_1494ed0(); }

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

// sub_14974b0  (orig 0x14974b0, tailcall)
void main_f_14974b0() { main::sub_14974f0(); }

// sub_14974c0  (orig 0x14974c0, tailcall)
void main_f_14974c0() { main::sub_14974f0(); }

// sub_1497c60  (orig 0x1497c60, tailcall)
void main_f_1497c60() { main::sub_e7c4c0(); }

// sub_1497c70  (orig 0x1497c70, tailcall)
void main_f_1497c70() { main::sub_1497ce0(); }

// sub_1497ca0  (orig 0x1497ca0, tailcall)
void main_f_1497ca0() { main::sub_1497ce0(); }

// sub_1497cb0  (orig 0x1497cb0, tailcall)
void main_f_1497cb0() { main::sub_1497ce0(); }

// sub_1498810  (orig 0x1498810, ret_only)
void main_f_1498810() {}

// sub_14988e0  (orig 0x14988e0, tailcall)
void main_f_14988e0() { main::sub_1498a90(); }

// sub_14989b0  (orig 0x14989b0, tailcall)
void main_f_14989b0() { main::sub_1498a90(); }

// sub_14989c0  (orig 0x14989c0, tailcall)
void main_f_14989c0() { main::sub_1498a90(); }

// sub_149aab0  (orig 0x149aab0, ret_only)
void main_f_149aab0() {}

// sub_149ac80  (orig 0x149ac80, tailcall)
void main_f_149ac80() { main::sub_e7feb0(); }

// sub_149ac90  (orig 0x149ac90, tailcall)
void main_f_149ac90() { main::sub_149ad00(); }

// sub_149acc0  (orig 0x149acc0, tailcall)
void main_f_149acc0() { main::sub_149ad00(); }

// sub_149acd0  (orig 0x149acd0, tailcall)
void main_f_149acd0() { main::sub_149ad00(); }

// sub_149ae30  (orig 0x149ae30, ret_only)
void main_f_149ae30() {}

// sub_149b000  (orig 0x149b000, tailcall)
void main_f_149b000() { main::sub_e7feb0(); }

// sub_149b010  (orig 0x149b010, tailcall)
void main_f_149b010() { main::sub_149b080(); }

// sub_149b040  (orig 0x149b040, tailcall)
void main_f_149b040() { main::sub_149b080(); }

// sub_149b050  (orig 0x149b050, tailcall)
void main_f_149b050() { main::sub_149b080(); }

// sub_149ed40  (orig 0x149ed40, tailcall)
void main_f_149ed40() { main::sub_149e8a0(); }

// sub_149ed50  (orig 0x149ed50, tailcall)
void main_f_149ed50() { main::sub_149edc0(); }

// sub_149ed80  (orig 0x149ed80, tailcall)
void main_f_149ed80() { main::sub_149edc0(); }

// sub_149ed90  (orig 0x149ed90, tailcall)
void main_f_149ed90() { main::sub_149edc0(); }

// sub_149f130  (orig 0x149f130, ret_only)
void main_f_149f130() {}

// sub_149f140  (orig 0x149f140, copy2)
void main_f_149f140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f150  (orig 0x149f150, copy2)
void main_f_149f150(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f170  (orig 0x149f170, ret_only)
void main_f_149f170() {}

// sub_149f180  (orig 0x149f180, copy2)
void main_f_149f180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f190  (orig 0x149f190, copy2)
void main_f_149f190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f1f0  (orig 0x149f1f0, ret_only)
void main_f_149f1f0() {}

// sub_149f200  (orig 0x149f200, copy2)
void main_f_149f200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f210  (orig 0x149f210, copy2)
void main_f_149f210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f2b0  (orig 0x149f2b0, ret_only)
void main_f_149f2b0() {}

// sub_149f2c0  (orig 0x149f2c0, copy2)
void main_f_149f2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f2d0  (orig 0x149f2d0, copy2)
void main_f_149f2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f370  (orig 0x149f370, ret_only)
void main_f_149f370() {}

// sub_149f380  (orig 0x149f380, copy2)
void main_f_149f380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f390  (orig 0x149f390, copy2)
void main_f_149f390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f430  (orig 0x149f430, ret_only)
void main_f_149f430() {}

// sub_149f440  (orig 0x149f440, copy2)
void main_f_149f440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f450  (orig 0x149f450, copy2)
void main_f_149f450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f4b0  (orig 0x149f4b0, ret_only)
void main_f_149f4b0() {}

// sub_149f4c0  (orig 0x149f4c0, copy2)
void main_f_149f4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f4d0  (orig 0x149f4d0, copy2)
void main_f_149f4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_149f760  (orig 0x149f760, ret_only)
void main_f_149f760() {}

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

// sub_14a1d70  (orig 0x14a1d70, tailcall)
void main_f_14a1d70() { main::sub_148fee0(); }

// sub_14a1d80  (orig 0x14a1d80, tailcall)
void main_f_14a1d80() { main::sub_148fee0(); }

// sub_14a1ed0  (orig 0x14a1ed0, ret_only)
void main_f_14a1ed0() {}

// sub_14a1ee0  (orig 0x14a1ee0, copy2)
void main_f_14a1ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1ef0  (orig 0x14a1ef0, copy2)
void main_f_14a1ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1f40  (orig 0x14a1f40, ret_only)
void main_f_14a1f40() {}

// sub_14a1f50  (orig 0x14a1f50, copy2)
void main_f_14a1f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1f60  (orig 0x14a1f60, copy2)
void main_f_14a1f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1f90  (orig 0x14a1f90, ret_only)
void main_f_14a1f90() {}

// sub_14a1fa0  (orig 0x14a1fa0, copy2)
void main_f_14a1fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a1fb0  (orig 0x14a1fb0, copy2)
void main_f_14a1fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a4290  (orig 0x14a4290, mov_ret)
uint32_t main_f_14a4290() { return 1; }

// sub_14a52a0  (orig 0x14a52a0, straight)
void main_f_14a52a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 1484) = 2;
}

// sub_14a5620  (orig 0x14a5620, tailcall)
void main_f_14a5620() { main::sub_14a53b0(); }

// sub_14a5630  (orig 0x14a5630, tailcall)
void main_f_14a5630() { main::sub_1495000(); }

// sub_14a5660  (orig 0x14a5660, tailcall)
void main_f_14a5660() { main::sub_1495000(); }

// sub_14a5670  (orig 0x14a5670, tailcall)
void main_f_14a5670() { main::sub_1495000(); }

// sub_14a58a0  (orig 0x14a58a0, ret_only)
void main_f_14a58a0() {}

// sub_14a5900  (orig 0x14a5900, ret_only)
void main_f_14a5900() {}

// sub_14a5910  (orig 0x14a5910, copy2)
void main_f_14a5910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a5920  (orig 0x14a5920, copy2)
void main_f_14a5920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a5950  (orig 0x14a5950, ret_only)
void main_f_14a5950() {}

// sub_14a6260  (orig 0x14a6260, tailcall)
void main_f_14a6260() { main::sub_14a6450(); }

// sub_14a6350  (orig 0x14a6350, tailcall)
void main_f_14a6350() { main::sub_14a6450(); }

// sub_14a6360  (orig 0x14a6360, tailcall)
void main_f_14a6360() { main::sub_14a6450(); }

// sub_14a6590  (orig 0x14a6590, ret_only)
void main_f_14a6590() {}

// sub_14a65a0  (orig 0x14a65a0, copy2)
void main_f_14a65a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65b0  (orig 0x14a65b0, copy2)
void main_f_14a65b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65d0  (orig 0x14a65d0, ret_only)
void main_f_14a65d0() {}

// sub_14a65e0  (orig 0x14a65e0, copy2)
void main_f_14a65e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a65f0  (orig 0x14a65f0, copy2)
void main_f_14a65f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a6610  (orig 0x14a6610, ret_only)
void main_f_14a6610() {}

// sub_14a6620  (orig 0x14a6620, copy2)
void main_f_14a6620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a6630  (orig 0x14a6630, copy2)
void main_f_14a6630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7a10  (orig 0x14a7a10, tailcall)
void main_f_14a7a10() { main::sub_14a7d00(); }

// sub_14a7b80  (orig 0x14a7b80, tailcall)
void main_f_14a7b80() { main::sub_14a7d00(); }

// sub_14a7b90  (orig 0x14a7b90, tailcall)
void main_f_14a7b90() { main::sub_14a7d00(); }

// sub_14a7e40  (orig 0x14a7e40, ret_only)
void main_f_14a7e40() {}

// sub_14a7e50  (orig 0x14a7e50, copy2)
void main_f_14a7e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7e60  (orig 0x14a7e60, copy2)
void main_f_14a7e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7e80  (orig 0x14a7e80, ret_only)
void main_f_14a7e80() {}

// sub_14a7e90  (orig 0x14a7e90, copy2)
void main_f_14a7e90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a7ea0  (orig 0x14a7ea0, copy2)
void main_f_14a7ea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14a8b70  (orig 0x14a8b70, mov_ret)
uint32_t main_f_14a8b70() { return 1; }

// sub_14a92b0  (orig 0x14a92b0, getter)
uint32_t main_f_14a92b0(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_14a92c0  (orig 0x14a92c0, getter)
uint32_t main_f_14a92c0(void* a0) { return *(uint32_t*)((char*)(a0) + 176); }

// sub_14a9360  (orig 0x14a9360, ret_only)
void main_f_14a9360() {}

// sub_14a9590  (orig 0x14a9590, ret_only)
void main_f_14a9590() {}

// sub_14a95a0  (orig 0x14a95a0, mov_ret)
uint32_t main_f_14a95a0() { return 0; }

// sub_14a96c0  (orig 0x14a96c0, mov_ret)
uint32_t main_f_14a96c0() { return 2; }

// sub_14a97b0  (orig 0x14a97b0, mov_ret)
uint32_t main_f_14a97b0() { return 0; }

// sub_14a97c0  (orig 0x14a97c0, ret_only)
void main_f_14a97c0() {}

// sub_14a97d0  (orig 0x14a97d0, mov_ret)
uint32_t main_f_14a97d0() { return 0; }

// sub_14aa670  (orig 0x14aa670, setter-chain)
void main_f_14aa670(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 64) = 0; *(uint64_t*)((char*)(a0) + 80) = 0; *(uint64_t*)((char*)(a0) + 96) = 0; *(uint64_t*)((char*)(a0) + 112) = 0; *(uint64_t*)((char*)(a0) + 128) = 0; *(uint64_t*)((char*)(a0) + 144) = 0; *(uint64_t*)((char*)(a0) + 160) = 0; *(uint64_t*)((char*)(a0) + 176) = 0; *(uint64_t*)((char*)(a0) + 192) = 0; *(uint64_t*)((char*)(a0) + 208) = 0; *(uint64_t*)((char*)(a0) + 224) = 0; *(uint64_t*)((char*)(a0) + 240) = 0; *(uint64_t*)((char*)(a0) + 256) = 0; *(uint64_t*)((char*)(a0) + 272) = 0; *(uint64_t*)((char*)(a0) + 288) = 0; *(uint64_t*)((char*)(a0) + 304) = 0; *(uint64_t*)((char*)(a0) + 320) = 0; *(uint64_t*)((char*)(a0) + 336) = 0; *(uint64_t*)((char*)(a0) + 352) = 0; *(uint64_t*)((char*)(a0) + 368) = 0; *(uint64_t*)((char*)(a0) + 384) = 0; *(uint64_t*)((char*)(a0) + 400) = 0; *(uint64_t*)((char*)(a0) + 416) = 0; *(uint64_t*)((char*)(a0) + 432) = 0; *(uint64_t*)((char*)(a0) + 448) = 0; *(uint64_t*)((char*)(a0) + 464) = 0; *(uint64_t*)((char*)(a0) + 480) = 0; *(uint64_t*)((char*)(a0) + 496) = 0; *(uint64_t*)((char*)(a0) + 512) = 0; *(uint64_t*)((char*)(a0) + 528) = 0; *(uint64_t*)((char*)(a0) + 544) = 0; *(uint64_t*)((char*)(a0) + 560) = 0; *(uint64_t*)((char*)(a0) + 576) = 0; *(uint64_t*)((char*)(a0) + 592) = 0; *(uint64_t*)((char*)(a0) + 608) = 0; *(uint64_t*)((char*)(a0) + 624) = 0; *(uint64_t*)((char*)(a0) + 640) = 0; *(uint64_t*)((char*)(a0) + 656) = 0; *(uint64_t*)((char*)(a0) + 672) = 0; *(uint64_t*)((char*)(a0) + 688) = 0; *(uint64_t*)((char*)(a0) + 704) = 0; *(uint64_t*)((char*)(a0) + 720) = 0; *(uint64_t*)((char*)(a0) + 736) = 0; *(uint64_t*)((char*)(a0) + 752) = 0; *(uint64_t*)((char*)(a0) + 768) = 0; *(uint64_t*)((char*)(a0) + 784) = 0; *(uint64_t*)((char*)(a0) + 800) = 0; *(uint64_t*)((char*)(a0) + 816) = 0; *(uint64_t*)((char*)(a0) + 832) = 0; *(uint64_t*)((char*)(a0) + 848) = 0; *(uint64_t*)((char*)(a0) + 864) = 0; *(uint64_t*)((char*)(a0) + 880) = 0; *(uint64_t*)((char*)(a0) + 896) = 0; *(uint64_t*)((char*)(a0) + 912) = 0; *(uint64_t*)((char*)(a0) + 928) = 0; *(uint64_t*)((char*)(a0) + 944) = 0; *(uint64_t*)((char*)(a0) + 960) = 0; *(uint64_t*)((char*)(a0) + 976) = 0; *(uint64_t*)((char*)(a0) + 992) = 0; *(uint64_t*)((char*)(a0) + 1008) = 0; *(uint64_t*)((char*)(a0) + 1024) = 0; *(uint64_t*)((char*)(a0) + 1040) = 0; *(uint64_t*)((char*)(a0) + 1056) = 0; *(uint64_t*)((char*)(a0) + 1072) = 0; *(uint64_t*)((char*)(a0) + 1088) = 0; *(uint64_t*)((char*)(a0) + 1104) = 0; *(uint64_t*)((char*)(a0) + 1120) = 0; *(uint64_t*)((char*)(a0) + 1136) = 0; *(uint64_t*)((char*)(a0) + 1152) = 0; *(uint64_t*)((char*)(a0) + 1168) = 0; *(uint64_t*)((char*)(a0) + 1184) = 0; *(uint64_t*)((char*)(a0) + 1200) = 0; *(uint64_t*)((char*)(a0) + 1216) = 0; *(uint64_t*)((char*)(a0) + 1232) = 0; *(uint64_t*)((char*)(a0) + 1248) = 0; *(uint64_t*)((char*)(a0) + 1264) = 0; *(uint64_t*)((char*)(a0) + 1280) = 0; *(uint64_t*)((char*)(a0) + 1296) = 0; *(uint64_t*)((char*)(a0) + 1312) = 0; *(uint64_t*)((char*)(a0) + 1328) = 0; *(uint64_t*)((char*)(a0) + 1344) = 0; *(uint64_t*)((char*)(a0) + 1360) = 0; *(uint64_t*)((char*)(a0) + 1376) = 0; *(uint64_t*)((char*)(a0) + 1392) = 0; *(uint64_t*)((char*)(a0) + 1408) = 0; *(uint64_t*)((char*)(a0) + 1424) = 0; *(uint64_t*)((char*)(a0) + 1440) = 0; *(uint64_t*)((char*)(a0) + 1456) = 0; *(uint64_t*)((char*)(a0) + 1472) = 0; *(uint64_t*)((char*)(a0) + 1488) = 0; *(uint64_t*)((char*)(a0) + 1504) = 0; *(uint64_t*)((char*)(a0) + 1520) = 0; *(uint64_t*)((char*)(a0) + 1536) = 0; *(uint64_t*)((char*)(a0) + 1552) = 0; *(uint64_t*)((char*)(a0) + 1568) = 0; *(uint64_t*)((char*)(a0) + 1584) = 0; *(uint64_t*)((char*)(a0) + 1600) = 0; *(uint64_t*)((char*)(a0) + 1616) = 0; *(uint64_t*)((char*)(a0) + 1632) = 0; *(uint64_t*)((char*)(a0) + 1648) = 0; *(uint64_t*)((char*)(a0) + 1664) = 0; *(uint64_t*)((char*)(a0) + 1680) = 0; *(uint64_t*)((char*)(a0) + 1696) = 0; *(uint64_t*)((char*)(a0) + 1712) = 0; *(uint64_t*)((char*)(a0) + 1728) = 0; *(uint64_t*)((char*)(a0) + 1744) = 0; *(uint64_t*)((char*)(a0) + 1760) = 0; *(uint64_t*)((char*)(a0) + 1776) = 0; *(uint64_t*)((char*)(a0) + 1792) = 0; *(uint64_t*)((char*)(a0) + 1808) = 0; *(uint64_t*)((char*)(a0) + 1824) = 0; *(uint64_t*)((char*)(a0) + 1840) = 0; *(uint64_t*)((char*)(a0) + 1856) = 0; *(uint64_t*)((char*)(a0) + 1872) = 0; *(uint64_t*)((char*)(a0) + 1888) = 0; *(uint64_t*)((char*)(a0) + 1904) = 0; *(uint64_t*)((char*)(a0) + 1920) = 0; *(uint64_t*)((char*)(a0) + 1936) = 0; *(uint64_t*)((char*)(a0) + 1952) = 0; *(uint64_t*)((char*)(a0) + 1968) = 0; *(uint64_t*)((char*)(a0) + 1984) = 0; *(uint64_t*)((char*)(a0) + 2000) = 0; *(uint64_t*)((char*)(a0) + 2016) = 0; *(uint64_t*)((char*)(a0) + 2032) = 0; }

// sub_14aaca0  (orig 0x14aaca0, tailcall)
void main_f_14aaca0() { main::sub_14aa880(); }

// sub_14ac420  (orig 0x14ac420, getter)
uint8_t main_f_14ac420(void* a0) { return *(uint8_t*)((char*)(a0) + 764); }

// sub_14b1e40  (orig 0x14b1e40, tailcall)
void main_f_14b1e40() { main::sub_14b1d50(); }

// sub_14b2d60  (orig 0x14b2d60, mov_ret)
uint32_t main_f_14b2d60() { return 0; }

// sub_14b3230  (orig 0x14b3230, ret_only)
void main_f_14b3230() {}

// sub_14b3240  (orig 0x14b3240, ret_only)
void main_f_14b3240() {}

// sub_14b3250  (orig 0x14b3250, ret_only)
void main_f_14b3250() {}

// sub_14b3260  (orig 0x14b3260, ret_only)
void main_f_14b3260() {}

// sub_14b5880  (orig 0x14b5880, mov_ret)
uint32_t main_f_14b5880() { return 3; }

// sub_14b59c0  (orig 0x14b59c0, tailcall)
void main_f_14b59c0() { main::sub_14a7fd0(); }

// sub_14b5a40  (orig 0x14b5a40, ret_only)
void main_f_14b5a40() {}

// sub_14b5f30  (orig 0x14b5f30, mov_ret)
uint32_t main_f_14b5f30() { return 3; }

// sub_14b5fc0  (orig 0x14b5fc0, tailcall)
void main_f_14b5fc0() { main::sub_14a7fd0(); }

// sub_14b6040  (orig 0x14b6040, ret_only)
void main_f_14b6040() {}

// sub_14b61c0  (orig 0x14b61c0, tailcall)
void main_f_14b61c0() { main::sub_14a7fd0(); }

// sub_14b61f0  (orig 0x14b61f0, tailcall)
void main_f_14b61f0() { main::sub_14a7fd0(); }

// sub_14b6320  (orig 0x14b6320, mov_ret)
uint32_t main_f_14b6320() { return 3; }

// sub_14b64d0  (orig 0x14b64d0, ret_only)
void main_f_14b64d0() {}

// sub_14b64e0  (orig 0x14b64e0, mov_ret)
uint32_t main_f_14b64e0() { return 5; }

// sub_14b6620  (orig 0x14b6620, tailcall)
void main_f_14b6620() { main::sub_14a7fd0(); }

// sub_14b6650  (orig 0x14b6650, tailcall)
void main_f_14b6650() { main::sub_14a7fd0(); }

// sub_14b67b0  (orig 0x14b67b0, mov_ret)
uint32_t main_f_14b67b0() { return 4; }

// sub_14b6ee0  (orig 0x14b6ee0, tailcall)
void main_f_14b6ee0() { main::sub_14a7fd0(); }

// sub_14b6f10  (orig 0x14b6f10, tailcall)
void main_f_14b6f10() { main::sub_14a7fd0(); }

// sub_14b7190  (orig 0x14b7190, mov_ret)
uint32_t main_f_14b7190() { return 7; }

// sub_14b7360  (orig 0x14b7360, tailcall)
void main_f_14b7360() { main::sub_14a7fd0(); }

// sub_14b7390  (orig 0x14b7390, tailcall)
void main_f_14b7390() { main::sub_14a7fd0(); }

// sub_14b74a0  (orig 0x14b74a0, mov_ret)
uint32_t main_f_14b74a0() { return 6; }

// sub_14b75d0  (orig 0x14b75d0, mov_ret)
uint32_t main_f_14b75d0() { return 1; }

// sub_14b75e0  (orig 0x14b75e0, mov_ret)
uint32_t main_f_14b75e0() { return 1; }

// sub_14b76a0  (orig 0x14b76a0, tailcall)
void main_f_14b76a0() { main::sub_14b70f0(); }

// sub_14b78c0  (orig 0x14b78c0, ret_only)
void main_f_14b78c0() {}

// sub_14b81f0  (orig 0x14b81f0, mov_ret)
uint32_t main_f_14b81f0() { return 6; }

// sub_14b87d0  (orig 0x14b87d0, tailcall)
void main_f_14b87d0() { main::sub_14b8030(); }

// sub_14b97b0  (orig 0x14b97b0, tailcall)
void main_f_14b97b0() { main::sub_14b8960(); }

// sub_14b97e0  (orig 0x14b97e0, tailcall)
void main_f_14b97e0() { main::sub_14b8960(); }

// sub_14b9d30  (orig 0x14b9d30, tailcall)
void main_f_14b9d30() { main::sub_14b8960(); }

// sub_14b9d60  (orig 0x14b9d60, tailcall)
void main_f_14b9d60() { main::sub_14b8960(); }

// sub_14ba0b0  (orig 0x14ba0b0, tailcall)
void main_f_14ba0b0() { main::sub_14b8960(); }

// sub_14ba0e0  (orig 0x14ba0e0, tailcall)
void main_f_14ba0e0() { main::sub_14b8960(); }

// sub_14ba810  (orig 0x14ba810, mov_ret)
uint32_t main_f_14ba810() { return 1; }

// sub_14bcf00  (orig 0x14bcf00, tailcall)
void main_f_14bcf00() { main::sub_ce0(); }

// sub_14bcf10  (orig 0x14bcf10, ret_only)
void main_f_14bcf10() {}

// sub_14bcf40  (orig 0x14bcf40, mov_ret)
uint32_t main_f_14bcf40() { return 0; }

// sub_14bcf50  (orig 0x14bcf50, mov_ret)
uint64_t main_f_14bcf50() { return 0; }

// sub_14bcf60  (orig 0x14bcf60, mov_ret)
uint64_t main_f_14bcf60() { return 0; }

// sub_14bcf70  (orig 0x14bcf70, mov_ret)
uint64_t main_f_14bcf70() { return 0; }

// sub_14bcf80  (orig 0x14bcf80, ret_only)
void main_f_14bcf80() {}

// sub_14bcf90  (orig 0x14bcf90, tailcall)
void main_f_14bcf90() { main::sub_14ba4c0(); }

// sub_14bdca0  (orig 0x14bdca0, tailcall)
void main_f_14bdca0() { main::sub_14bdb50(); }

// sub_14bfb70  (orig 0x14bfb70, getter-chain)
uint8_t main_f_14bfb70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 1648); }

// sub_14bfba0  (orig 0x14bfba0, getter-chain)
uint8_t main_f_14bfba0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 1649); }

// sub_14c33f0  (orig 0x14c33f0, ret_only)
void main_f_14c33f0() {}

// sub_14c4b80  (orig 0x14c4b80, mov_ret)
uint32_t main_f_14c4b80() { return 1; }

// sub_14c5e60  (orig 0x14c5e60, getter-chain)
uint8_t main_f_14c5e60(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 136); }

// sub_14c6600  (orig 0x14c6600, tailcall)
void main_f_14c6600() { main::sub_ce0(); }

// sub_14c6660  (orig 0x14c6660, ret_only)
void main_f_14c6660() {}

// sub_14c6670  (orig 0x14c6670, tailcall)
void main_f_14c6670() { main::sub_ce0(); }

// sub_14c6900  (orig 0x14c6900, tailcall)
void main_f_14c6900() { main::sub_ce0(); }

// sub_14c6970  (orig 0x14c6970, ret_only)
void main_f_14c6970() {}

// sub_14c6980  (orig 0x14c6980, tailcall)
void main_f_14c6980() { main::sub_ce0(); }

// sub_14c6c60  (orig 0x14c6c60, mov_ret)
uint32_t main_f_14c6c60() { return 1; }

// sub_14ca680  (orig 0x14ca680, ret_only)
void main_f_14ca680() {}

// sub_14caaf0  (orig 0x14caaf0, mov_ret)
uint32_t main_f_14caaf0() { return 3; }

// sub_14ce010  (orig 0x14ce010, ret_only)
void main_f_14ce010() {}

// sub_14ce060  (orig 0x14ce060, ret_only)
void main_f_14ce060() {}

// sub_14ce070  (orig 0x14ce070, copy2)
void main_f_14ce070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce080  (orig 0x14ce080, copy2)
void main_f_14ce080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce0a0  (orig 0x14ce0a0, ret_only)
void main_f_14ce0a0() {}

// sub_14ce0b0  (orig 0x14ce0b0, copy2)
void main_f_14ce0b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce0c0  (orig 0x14ce0c0, copy2)
void main_f_14ce0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14ce1c0  (orig 0x14ce1c0, ret_only)
void main_f_14ce1c0() {}

// sub_14d13c0  (orig 0x14d13c0, ret_only)
void main_f_14d13c0() {}

// sub_14d3970  (orig 0x14d3970, tailcall)
void main_f_14d3970() { main::sub_e7feb0(); }

// sub_14d3980  (orig 0x14d3980, tailcall)
void main_f_14d3980() { main::sub_14d39f0(); }

// sub_14d39b0  (orig 0x14d39b0, tailcall)
void main_f_14d39b0() { main::sub_14d39f0(); }

// sub_14d39c0  (orig 0x14d39c0, tailcall)
void main_f_14d39c0() { main::sub_14d39f0(); }

// sub_14d4610  (orig 0x14d4610, tailcall)
void main_f_14d4610() { main::sub_14d4880(); }

// sub_14d4740  (orig 0x14d4740, tailcall)
void main_f_14d4740() { main::sub_14d4880(); }

// sub_14d4750  (orig 0x14d4750, tailcall)
void main_f_14d4750() { main::sub_14d4880(); }

// sub_14d5170  (orig 0x14d5170, tailcall)
void main_f_14d5170() { main::sub_14d4fd0(); }

// sub_14d5280  (orig 0x14d5280, tailcall)
void main_f_14d5280() { main::sub_14d5290(); }

// sub_14d5a80  (orig 0x14d5a80, compare)
bool main_f_14d5a80(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(0); }

// sub_14d6890  (orig 0x14d6890, compare)
bool main_f_14d6890(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(0); }

// sub_14da610  (orig 0x14da610, tailcall)
void main_f_14da610() { main::sub_14da520(); }

// sub_14db760  (orig 0x14db760, ret_only)
void main_f_14db760() {}

// sub_14db770  (orig 0x14db770, ret_only)
void main_f_14db770() {}

// sub_14db780  (orig 0x14db780, ret_only)
void main_f_14db780() {}

// sub_14dbb00  (orig 0x14dbb00, compare)
bool main_f_14dbb00(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(0); }

// sub_14dbb60  (orig 0x14dbb60, getter)
uint64_t main_f_14dbb60(void* a0) { return *(uint64_t*)((char*)(a0) + 440); }

// sub_14dbcb0  (orig 0x14dbcb0, tailcall)
void main_f_14dbcb0() { main::sub_14dbb70(); }

// sub_14dbcc0  (orig 0x14dbcc0, ret_only)
void main_f_14dbcc0() {}

// sub_14dbdd0  (orig 0x14dbdd0, ret_only)
void main_f_14dbdd0() {}

// sub_14dc0e0  (orig 0x14dc0e0, tailcall)
void main_f_14dc0e0() { main::sub_6726c0(); }

// sub_14dd690  (orig 0x14dd690, ret_only)
void main_f_14dd690() {}

// sub_14dde20  (orig 0x14dde20, getter)
uint64_t main_f_14dde20(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_14ddfb0  (orig 0x14ddfb0, mov_ret)
uint32_t main_f_14ddfb0() { return 2; }

// sub_14de3f0  (orig 0x14de3f0, mov_ret)
uint32_t main_f_14de3f0() { return 1; }

// sub_14deda0  (orig 0x14deda0, getter)
uint64_t main_f_14deda0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14def10  (orig 0x14def10, mov_ret)
uint32_t main_f_14def10() { return 1; }

// sub_14e0aa0  (orig 0x14e0aa0, ret_only)
void main_f_14e0aa0() {}

// sub_14e11c0  (orig 0x14e11c0, getter)
uint64_t main_f_14e11c0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_14e1330  (orig 0x14e1330, mov_ret)
uint32_t main_f_14e1330() { return 1; }

// sub_14e1830  (orig 0x14e1830, ret_only)
void main_f_14e1830() {}

// sub_14e1c70  (orig 0x14e1c70, tailcall)
void main_f_14e1c70() { main::sub_14e1f30(); }

// sub_14e1ce0  (orig 0x14e1ce0, ret_only)
void main_f_14e1ce0() {}

// sub_14e1cf0  (orig 0x14e1cf0, ret_only)
void main_f_14e1cf0() {}

// sub_14e1d00  (orig 0x14e1d00, ret_only)
void main_f_14e1d00() {}

// sub_14e1d10  (orig 0x14e1d10, ret_only)
void main_f_14e1d10() {}

// sub_14e1d40  (orig 0x14e1d40, ret_only)
void main_f_14e1d40() {}

// sub_14e1d50  (orig 0x14e1d50, mov_ret)
uint32_t main_f_14e1d50() { return 0; }

// sub_14e1d60  (orig 0x14e1d60, getter)
uint8_t main_f_14e1d60(void* a0) { return *(uint8_t*)((char*)(a0) + 132); }

// sub_14e1e40  (orig 0x14e1e40, tailcall)
void main_f_14e1e40() { main::sub_14e1f30(); }

// sub_14e1e50  (orig 0x14e1e50, tailcall)
void main_f_14e1e50() { main::sub_14e1f30(); }

// sub_14e28f0  (orig 0x14e28f0, compare)
bool main_f_14e28f0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 129)) == (uint64_t)(0); }

// sub_14e2ba0  (orig 0x14e2ba0, tailcall)
void main_f_14e2ba0() { main::sub_14e2aa0(); }

// sub_14e2c30  (orig 0x14e2c30, ret_only)
void main_f_14e2c30() {}

// sub_14e2c40  (orig 0x14e2c40, ret_only)
void main_f_14e2c40() {}

// sub_14e2c50  (orig 0x14e2c50, ret_only)
void main_f_14e2c50() {}

// sub_14e2f00  (orig 0x14e2f00, ret_only)
void main_f_14e2f00() {}

// sub_14e2f10  (orig 0x14e2f10, ret_only)
void main_f_14e2f10() {}

// sub_14e2f20  (orig 0x14e2f20, ret_only)
void main_f_14e2f20() {}

// sub_14e2f30  (orig 0x14e2f30, ret_only)
void main_f_14e2f30() {}

// sub_14e2f40  (orig 0x14e2f40, ret_only)
void main_f_14e2f40() {}

// sub_14e2f50  (orig 0x14e2f50, mov_ret)
uint32_t main_f_14e2f50() { return 1; }

// sub_14e2f60  (orig 0x14e2f60, mov_ret)
uint32_t main_f_14e2f60() { return 1; }

// sub_14e4110  (orig 0x14e4110, straight)
void main_f_14e4110(void* a0) {
    *(uint8_t*)((char*)(a0) + 1151) = (uint8_t)(1);
}

// sub_14e4180  (orig 0x14e4180, compare)
bool main_f_14e4180(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 640)) == (uint64_t)(0); }

// sub_14e5040  (orig 0x14e5040, mov_ret)
uint32_t main_f_14e5040() { return 1; }

// sub_14e56c0  (orig 0x14e56c0, tailcall)
void main_f_14e56c0() { main::sub_14e5370(); }

// sub_14e5740  (orig 0x14e5740, ret_only)
void main_f_14e5740() {}

// sub_14e5750  (orig 0x14e5750, ret_only)
void main_f_14e5750() {}

// sub_14e5980  (orig 0x14e5980, ret_only)
void main_f_14e5980() {}

// sub_14e5a50  (orig 0x14e5a50, tailcall)
void main_f_14e5a50() { main::sub_f0ce40(); }

// sub_14e5a60  (orig 0x14e5a60, ret_only)
void main_f_14e5a60() {}

// sub_14e5a70  (orig 0x14e5a70, ret_only)
void main_f_14e5a70() {}

// sub_14e5a80  (orig 0x14e5a80, ret_only)
void main_f_14e5a80() {}

// sub_14e5a90  (orig 0x14e5a90, ret_only)
void main_f_14e5a90() {}

// sub_14e5aa0  (orig 0x14e5aa0, ret_only)
void main_f_14e5aa0() {}

// sub_14e5ab0  (orig 0x14e5ab0, mov_ret)
uint32_t main_f_14e5ab0() { return 1; }

// sub_14e5ac0  (orig 0x14e5ac0, mov_ret)
uint32_t main_f_14e5ac0() { return 1; }

// sub_14e5ad0  (orig 0x14e5ad0, ret_only)
void main_f_14e5ad0() {}

// sub_14e5c60  (orig 0x14e5c60, tailcall)
void main_f_14e5c60() { main::sub_f0ce40(); }

// sub_14e5c70  (orig 0x14e5c70, tailcall)
void main_f_14e5c70() { main::sub_f0ce40(); }

// sub_14e6540  (orig 0x14e6540, getter-chain)
uint64_t main_f_14e6540(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 1032))) + 12); }

// sub_14e6e00  (orig 0x14e6e00, ret_only)
void main_f_14e6e00() {}

// sub_14e6f30  (orig 0x14e6f30, mov_ret)
uint32_t main_f_14e6f30() { return 1; }

// sub_14e8680  (orig 0x14e8680, tailcall)
void main_f_14e8680() { main::sub_14e8460(); }

// sub_14eac60  (orig 0x14eac60, mov_ret)
uint32_t main_f_14eac60() { return 1; }

// sub_14eb420  (orig 0x14eb420, ret_only)
void main_f_14eb420() {}

// sub_14eb430  (orig 0x14eb430, ret_only)
void main_f_14eb430() {}

// sub_14ec830  (orig 0x14ec830, compare)
bool main_f_14ec830(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 129)) == (uint64_t)(0); }

// sub_14ecab0  (orig 0x14ecab0, tailcall)
void main_f_14ecab0() { main::sub_14ec950(); }

// sub_14eda20  (orig 0x14eda20, tailcall)
void main_f_14eda20() { main::sub_14ed590(); }

// sub_14ee7c0  (orig 0x14ee7c0, copy2)
void main_f_14ee7c0(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 2064) = *(uint64_t*)((char*)(a1)); }

// sub_14eebd0  (orig 0x14eebd0, getter-chain)
uint32_t main_f_14eebd0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 1872))) + 20); }

// sub_14eebe0  (orig 0x14eebe0, getter-chain)
uint32_t main_f_14eebe0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 1872))) + 16); }

// sub_14eec80  (orig 0x14eec80, ret_only)
void main_f_14eec80() {}

// sub_14ef1e0  (orig 0x14ef1e0, mov_ret)
uint32_t main_f_14ef1e0() { return 1; }

// sub_14f1850  (orig 0x14f1850, setter)
void main_f_14f1850(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1948) = a1; }

// sub_14f1ef0  (orig 0x14f1ef0, setter-chain)
void main_f_14f1ef0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 1968) = a2; *(uint64_t*)((char*)(a0) + 1960) = a1; }

// sub_14f22e0  (orig 0x14f22e0, ret_only)
void main_f_14f22e0() {}

// sub_14f22f0  (orig 0x14f22f0, copy2)
void main_f_14f22f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2300  (orig 0x14f2300, copy2)
void main_f_14f2300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2330  (orig 0x14f2330, ret_only)
void main_f_14f2330() {}

// sub_14f2340  (orig 0x14f2340, copy2)
void main_f_14f2340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2350  (orig 0x14f2350, copy2)
void main_f_14f2350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f2360  (orig 0x14f2360, ret_only)
void main_f_14f2360() {}

// sub_14f2370  (orig 0x14f2370, ret_only)
void main_f_14f2370() {}

// sub_14f2380  (orig 0x14f2380, ret_only)
void main_f_14f2380() {}

// sub_14f2390  (orig 0x14f2390, ret_only)
void main_f_14f2390() {}

// sub_14f3140  (orig 0x14f3140, ret_only)
void main_f_14f3140() {}

// sub_14f31b0  (orig 0x14f31b0, ret_only)
void main_f_14f31b0() {}

// sub_14f4070  (orig 0x14f4070, ret_only)
void main_f_14f4070() {}

// sub_14f4080  (orig 0x14f4080, copy2)
void main_f_14f4080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f4090  (orig 0x14f4090, copy2)
void main_f_14f4090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_14f4d60  (orig 0x14f4d60, getter)
uint32_t main_f_14f4d60(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_14f4d70  (orig 0x14f4d70, setter)
void main_f_14f4d70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_14f5050  (orig 0x14f5050, tailcall)
void main_f_14f5050() { main::sub_14f5220(); }

// sub_14f5060  (orig 0x14f5060, mov_ret)
uint32_t main_f_14f5060() { return 0; }

// sub_14f5070  (orig 0x14f5070, mov_ret)
uint32_t main_f_14f5070() { return 0; }

// sub_14f5080  (orig 0x14f5080, mov_ret)
uint32_t main_f_14f5080() { return 0; }

// sub_14f5090  (orig 0x14f5090, compare)
bool main_f_14f5090(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 104)) == (uint64_t)(3); }

// sub_14f5160  (orig 0x14f5160, tailcall)
void main_f_14f5160() { main::sub_14f5220(); }

// sub_14f5170  (orig 0x14f5170, tailcall)
void main_f_14f5170() { main::sub_14f5220(); }

// sub_14f5b60  (orig 0x14f5b60, compare)
bool main_f_14f5b60(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 12)) > (int64_t)(0); }

// sub_14f5c60  (orig 0x14f5c60, mov_ret)
uint32_t main_f_14f5c60() { return 0; }

// sub_14f63b0  (orig 0x14f63b0, ret_only)
void main_f_14f63b0() {}

// sub_14f63c0  (orig 0x14f63c0, tailcall)
void main_f_14f63c0() { main::sub_ce0(); }

// sub_14f63d0  (orig 0x14f63d0, getter)
uint32_t main_f_14f63d0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_14f63e0  (orig 0x14f63e0, setter)
void main_f_14f63e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_14f76f0  (orig 0x14f76f0, setter-chain)
void main_f_14f76f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; *(uint8_t*)((char*)(a0) + 8) = 0; }

// sub_14f7e40  (orig 0x14f7e40, compare)
bool main_f_14f7e40(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 440)) != (uint64_t)(0); }

// sub_14f8030  (orig 0x14f8030, getter)
uint8_t main_f_14f8030(void* a0) { return *(uint8_t*)((char*)(a0) + 476); }

// sub_14f8bc0  (orig 0x14f8bc0, ret_only)
void main_f_14f8bc0() {}

// sub_14f8bd0  (orig 0x14f8bd0, tailcall)
void main_f_14f8bd0() { main::sub_ce0(); }

// sub_14f8f20  (orig 0x14f8f20, tailcall)
void main_f_14f8f20() { main::sub_14f90c0(); }

// sub_14f8f30  (orig 0x14f8f30, compare)
bool main_f_14f8f30(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 104)) == (uint64_t)(11); }

// sub_14f9000  (orig 0x14f9000, tailcall)
void main_f_14f9000() { main::sub_14f90c0(); }

// sub_14f9010  (orig 0x14f9010, tailcall)
void main_f_14f9010() { main::sub_14f90c0(); }

// sub_14fb430  (orig 0x14fb430, ret_only)
void main_f_14fb430() {}

// sub_14fb440  (orig 0x14fb440, ret_only)
void main_f_14fb440() {}

// sub_14fb450  (orig 0x14fb450, ret_only)
void main_f_14fb450() {}

// sub_14fbc60  (orig 0x14fbc60, ret_only)
void main_f_14fbc60() {}

// sub_14fbc70  (orig 0x14fbc70, ret_only)
void main_f_14fbc70() {}

// sub_14fbc80  (orig 0x14fbc80, ret_only)
void main_f_14fbc80() {}

// sub_14fbfe0  (orig 0x14fbfe0, ret_only)
void main_f_14fbfe0() {}

// sub_14fc060  (orig 0x14fc060, mov_ret)
uint32_t main_f_14fc060() { return 1; }

// sub_14fc070  (orig 0x14fc070, mov_ret)
uint32_t main_f_14fc070() { return 1; }

// sub_14fc080  (orig 0x14fc080, ret_only)
void main_f_14fc080() {}

// sub_14fc090  (orig 0x14fc090, ret_only)
void main_f_14fc090() {}

// sub_14fcd70  (orig 0x14fcd70, ret_only)
void main_f_14fcd70() {}

// sub_14fcd80  (orig 0x14fcd80, ret_only)
void main_f_14fcd80() {}

// sub_14fcd90  (orig 0x14fcd90, ret_only)
void main_f_14fcd90() {}

// sub_14fd5b0  (orig 0x14fd5b0, ret_only)
void main_f_14fd5b0() {}

// sub_14fd5c0  (orig 0x14fd5c0, ret_only)
void main_f_14fd5c0() {}

// sub_14fd5d0  (orig 0x14fd5d0, ret_only)
void main_f_14fd5d0() {}

// sub_14fdd60  (orig 0x14fdd60, ret_only)
void main_f_14fdd60() {}

// sub_14fdd70  (orig 0x14fdd70, ret_only)
void main_f_14fdd70() {}

// sub_14fdd80  (orig 0x14fdd80, ret_only)
void main_f_14fdd80() {}

// sub_14fe4f0  (orig 0x14fe4f0, ret_only)
void main_f_14fe4f0() {}

// sub_14fe500  (orig 0x14fe500, ret_only)
void main_f_14fe500() {}

// sub_14fe510  (orig 0x14fe510, ret_only)
void main_f_14fe510() {}

// sub_14fe890  (orig 0x14fe890, ret_only)
void main_f_14fe890() {}

// sub_14fe8a0  (orig 0x14fe8a0, ret_only)
void main_f_14fe8a0() {}

// sub_14fe8b0  (orig 0x14fe8b0, ret_only)
void main_f_14fe8b0() {}

// sub_14ff4c0  (orig 0x14ff4c0, ret_only)
void main_f_14ff4c0() {}

// sub_14ff4d0  (orig 0x14ff4d0, ret_only)
void main_f_14ff4d0() {}

// sub_14ff4e0  (orig 0x14ff4e0, ret_only)
void main_f_14ff4e0() {}

// sub_1500080  (orig 0x1500080, ret_only)
void main_f_1500080() {}

// sub_1500090  (orig 0x1500090, ret_only)
void main_f_1500090() {}

// sub_15000a0  (orig 0x15000a0, ret_only)
void main_f_15000a0() {}

// sub_15001e0  (orig 0x15001e0, tailcall)
void main_f_15001e0() { main_f_14e6e00(); }

// sub_15001f0  (orig 0x15001f0, tailcall)
void main_f_15001f0() { main::sub_14e6e10(); }

// sub_1500200  (orig 0x1500200, tailcall)
void main_f_1500200() { main::sub_1500210(); }

// sub_1500350  (orig 0x1500350, tailcall)
void main_f_1500350() { main::sub_14e8460(); }

// sub_1501c90  (orig 0x1501c90, ret_only)
void main_f_1501c90() {}

// sub_1501ca0  (orig 0x1501ca0, tailcall)
void main_f_1501ca0() { main::sub_ce0(); }

// sub_15030b0  (orig 0x15030b0, tailcall)
void main_f_15030b0() { main::sub_1502be0(); }

// sub_15030d0  (orig 0x15030d0, mov_ret)
uint32_t main_f_15030d0() { return 1; }

// sub_15030e0  (orig 0x15030e0, ret_only)
void main_f_15030e0() {}

// sub_1505a10  (orig 0x1505a10, compare)
bool main_f_1505a10(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 288)) == (uint64_t)(2); }

// sub_1505a20  (orig 0x1505a20, compare)
bool main_f_1505a20(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 288)) == (uint64_t)(5); }

// sub_1505fc0  (orig 0x1505fc0, ptr_add)
void* main_f_1505fc0(void* a0) { return (char*)a0 + 432; }

// sub_1506190  (orig 0x1506190, mov_ret)
uint32_t main_f_1506190() { return 4; }

// sub_1506360  (orig 0x1506360, ret_only)
void main_f_1506360() {}

// sub_1506370  (orig 0x1506370, copy2)
void main_f_1506370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1506380  (orig 0x1506380, copy2)
void main_f_1506380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1506440  (orig 0x1506440, ret_only)
void main_f_1506440() {}

// sub_1506450  (orig 0x1506450, copy2)
void main_f_1506450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1506460  (orig 0x1506460, copy2)
void main_f_1506460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1506470  (orig 0x1506470, tailcall)
void main_f_1506470() { main::sub_ce0(); }

// sub_15064c0  (orig 0x15064c0, ret_only)
void main_f_15064c0() {}

// sub_15064d0  (orig 0x15064d0, tailcall)
void main_f_15064d0() { main::sub_ce0(); }

// sub_15064f0  (orig 0x15064f0, tailcall)
void main_f_15064f0() { main::sub_ce0(); }

// sub_1506540  (orig 0x1506540, ret_only)
void main_f_1506540() {}

// sub_1506550  (orig 0x1506550, tailcall)
void main_f_1506550() { main::sub_ce0(); }

// sub_1506b20  (orig 0x1506b20, mov_ret)
uint32_t main_f_1506b20() { return 1; }

// sub_1506fd0  (orig 0x1506fd0, tailcall)
void main_f_1506fd0() { main::sub_1507000(); }

// sub_1506fe0  (orig 0x1506fe0, tailcall)
void main_f_1506fe0() { main::sub_1507000(); }

// sub_1506ff0  (orig 0x1506ff0, tailcall)
void main_f_1506ff0() { main::sub_1507000(); }

// sub_1507bb0  (orig 0x1507bb0, ret_only)
void main_f_1507bb0() {}

// sub_1507f80  (orig 0x1507f80, tailcall)
void main_f_1507f80() { main::sub_1507db0(); }

// sub_1508480  (orig 0x1508480, tailcall)
void main_f_1508480() { main::sub_1508360(); }

// sub_1508490  (orig 0x1508490, tailcall)
void main_f_1508490() { main::sub_1508500(); }

// sub_15084c0  (orig 0x15084c0, tailcall)
void main_f_15084c0() { main::sub_1508500(); }

// sub_15084d0  (orig 0x15084d0, tailcall)
void main_f_15084d0() { main::sub_1508500(); }

// sub_150c1c0  (orig 0x150c1c0, tailcall)
void main_f_150c1c0() { main::sub_150c500(); }

// sub_150c380  (orig 0x150c380, tailcall)
void main_f_150c380() { main::sub_150c500(); }

// sub_150c390  (orig 0x150c390, tailcall)
void main_f_150c390() { main::sub_150c500(); }

// sub_150c650  (orig 0x150c650, ret_only)
void main_f_150c650() {}

// sub_150c660  (orig 0x150c660, copy2)
void main_f_150c660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150c670  (orig 0x150c670, copy2)
void main_f_150c670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150c6d0  (orig 0x150c6d0, ret_only)
void main_f_150c6d0() {}

// sub_150c6e0  (orig 0x150c6e0, copy2)
void main_f_150c6e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150c6f0  (orig 0x150c6f0, copy2)
void main_f_150c6f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150ca80  (orig 0x150ca80, ret_only)
void main_f_150ca80() {}

// sub_150ca90  (orig 0x150ca90, copy2)
void main_f_150ca90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150caa0  (orig 0x150caa0, copy2)
void main_f_150caa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_150ccb0  (orig 0x150ccb0, tailcall)
void main_f_150ccb0() { main::sub_e7feb0(); }

// sub_150ccc0  (orig 0x150ccc0, tailcall)
void main_f_150ccc0() { main::sub_150cd80(); }

// sub_150cd40  (orig 0x150cd40, tailcall)
void main_f_150cd40() { main::sub_150cd80(); }

// sub_150cd50  (orig 0x150cd50, tailcall)
void main_f_150cd50() { main::sub_150cd80(); }

// sub_150d900  (orig 0x150d900, ret_only)
void main_f_150d900() {}

// sub_150d910  (orig 0x150d910, tailcall)
void main_f_150d910() { main::sub_e7c4c0(); }

// sub_150d920  (orig 0x150d920, tailcall)
void main_f_150d920() { main::sub_150d990(); }

// sub_150d950  (orig 0x150d950, tailcall)
void main_f_150d950() { main::sub_150d990(); }

// sub_150d960  (orig 0x150d960, tailcall)
void main_f_150d960() { main::sub_150d990(); }

// sub_150e600  (orig 0x150e600, ret_only)
void main_f_150e600() {}

// sub_150e610  (orig 0x150e610, tailcall)
void main_f_150e610() { main::sub_e7c4c0(); }

// sub_150e620  (orig 0x150e620, tailcall)
void main_f_150e620() { main::sub_150e690(); }

// sub_150e650  (orig 0x150e650, tailcall)
void main_f_150e650() { main::sub_150e690(); }

// sub_150e660  (orig 0x150e660, tailcall)
void main_f_150e660() { main::sub_150e690(); }

// sub_150f2a0  (orig 0x150f2a0, ret_only)
void main_f_150f2a0() {}

// sub_150f2b0  (orig 0x150f2b0, tailcall)
void main_f_150f2b0() { main::sub_e7c4c0(); }

// sub_150f2c0  (orig 0x150f2c0, tailcall)
void main_f_150f2c0() { main::sub_150f330(); }

// sub_150f2f0  (orig 0x150f2f0, tailcall)
void main_f_150f2f0() { main::sub_150f330(); }

// sub_150f300  (orig 0x150f300, tailcall)
void main_f_150f300() { main::sub_150f330(); }

// sub_150f8f0  (orig 0x150f8f0, mov_ret)
uint32_t main_f_150f8f0() { return 1; }

// sub_150f910  (orig 0x150f910, ret_only)
void main_f_150f910() {}

// sub_150fd50  (orig 0x150fd50, tailcall)
void main_f_150fd50() { main::sub_150fd80(); }

// sub_150fd60  (orig 0x150fd60, tailcall)
void main_f_150fd60() { main::sub_150fd80(); }

// sub_150fd70  (orig 0x150fd70, tailcall)
void main_f_150fd70() { main::sub_150fd80(); }

// sub_15103b0  (orig 0x15103b0, getter)
uint64_t main_f_15103b0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1510520  (orig 0x1510520, mov_ret)
uint32_t main_f_1510520() { return 1; }

// sub_15106d0  (orig 0x15106d0, getter)
uint64_t main_f_15106d0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_15106e0  (orig 0x15106e0, setter)
void main_f_15106e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_1510ec0  (orig 0x1510ec0, setter)
void main_f_1510ec0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1792) = a1; }

// sub_15114f0  (orig 0x15114f0, ret_only)
void main_f_15114f0() {}

// sub_1511800  (orig 0x1511800, mov_ret)
uint32_t main_f_1511800() { return 1; }

// sub_15119b0  (orig 0x15119b0, tailcall)
void main_f_15119b0() { main::sub_1511810(); }

// sub_1511c10  (orig 0x1511c10, tailcall)
void main_f_1511c10() { main::sub_e7c250(); }

// sub_1511c20  (orig 0x1511c20, tailcall)
void main_f_1511c20() { main::sub_1513650(); }

// sub_1511c50  (orig 0x1511c50, tailcall)
void main_f_1511c50() { main::sub_1513650(); }

// sub_1511c60  (orig 0x1511c60, tailcall)
void main_f_1511c60() { main::sub_1513650(); }

// sub_1514640  (orig 0x1514640, ret_only)
void main_f_1514640() {}

// sub_1514650  (orig 0x1514650, tailcall)
void main_f_1514650() { main::sub_e7c4c0(); }

// sub_1514660  (orig 0x1514660, tailcall)
void main_f_1514660() { main::sub_15146d0(); }

// sub_1514690  (orig 0x1514690, tailcall)
void main_f_1514690() { main::sub_15146d0(); }

// sub_15146a0  (orig 0x15146a0, tailcall)
void main_f_15146a0() { main::sub_15146d0(); }

// sub_1515000  (orig 0x1515000, setter)
void main_f_1515000(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_1515010  (orig 0x1515010, getter)
uint32_t main_f_1515010(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1516010  (orig 0x1516010, tailcall)
void main_f_1516010() { main::sub_1516200(); }

// sub_1516100  (orig 0x1516100, tailcall)
void main_f_1516100() { main::sub_1516200(); }

// sub_1516110  (orig 0x1516110, tailcall)
void main_f_1516110() { main::sub_1516200(); }

// sub_15169f0  (orig 0x15169f0, ret_only)
void main_f_15169f0() {}

// sub_1516ac0  (orig 0x1516ac0, tailcall)
void main_f_1516ac0() { main::sub_1516c70(); }

// sub_1516b90  (orig 0x1516b90, tailcall)
void main_f_1516b90() { main::sub_1516c70(); }

// sub_1516ba0  (orig 0x1516ba0, tailcall)
void main_f_1516ba0() { main::sub_1516c70(); }

// sub_1516ee0  (orig 0x1516ee0, ret_only)
void main_f_1516ee0() {}

// sub_1516ef0  (orig 0x1516ef0, copy2)
void main_f_1516ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1516f00  (orig 0x1516f00, copy2)
void main_f_1516f00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1517500  (orig 0x1517500, ret_only)
void main_f_1517500() {}

// sub_1517510  (orig 0x1517510, tailcall)
void main_f_1517510() { main::sub_e7c4c0(); }

// sub_1517520  (orig 0x1517520, tailcall)
void main_f_1517520() { main::sub_1517590(); }

// sub_1517550  (orig 0x1517550, tailcall)
void main_f_1517550() { main::sub_1517590(); }

// sub_1517560  (orig 0x1517560, tailcall)
void main_f_1517560() { main::sub_1517590(); }

// sub_1517be0  (orig 0x1517be0, ret_only)
void main_f_1517be0() {}

// sub_1517cb0  (orig 0x1517cb0, tailcall)
void main_f_1517cb0() { main::sub_1517e60(); }

// sub_1517d80  (orig 0x1517d80, tailcall)
void main_f_1517d80() { main::sub_1517e60(); }

// sub_1517d90  (orig 0x1517d90, tailcall)
void main_f_1517d90() { main::sub_1517e60(); }

// sub_15180e0  (orig 0x15180e0, ret_only)
void main_f_15180e0() {}

// sub_15180f0  (orig 0x15180f0, copy2)
void main_f_15180f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1518100  (orig 0x1518100, copy2)
void main_f_1518100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1518570  (orig 0x1518570, tailcall)
void main_f_1518570() { main::sub_e7c4c0(); }

// sub_1518580  (orig 0x1518580, tailcall)
void main_f_1518580() { main::sub_15185f0(); }

// sub_15185b0  (orig 0x15185b0, tailcall)
void main_f_15185b0() { main::sub_15185f0(); }

// sub_15185c0  (orig 0x15185c0, tailcall)
void main_f_15185c0() { main::sub_15185f0(); }

// sub_151a420  (orig 0x151a420, mov_ret)
uint32_t main_f_151a420() { return 9; }

// sub_151ad40  (orig 0x151ad40, mov_ret)
uint32_t main_f_151ad40() { return 1; }

// sub_151ad50  (orig 0x151ad50, ret_only)
void main_f_151ad50() {}

// sub_151b500  (orig 0x151b500, tailcall)
void main_f_151b500() { main::sub_151b530(); }

// sub_151b510  (orig 0x151b510, tailcall)
void main_f_151b510() { main::sub_151b530(); }

// sub_151b520  (orig 0x151b520, tailcall)
void main_f_151b520() { main::sub_151b530(); }

// sub_151bc50  (orig 0x151bc50, getter)
uint64_t main_f_151bc50(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_151bde0  (orig 0x151bde0, mov_ret)
uint32_t main_f_151bde0() { return 5; }

// sub_151c2d0  (orig 0x151c2d0, getter)
uint64_t main_f_151c2d0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_151c2e0  (orig 0x151c2e0, getter)
uint32_t main_f_151c2e0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_151c2f0  (orig 0x151c2f0, setter)
void main_f_151c2f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_151c300  (orig 0x151c300, getter)
uint32_t main_f_151c300(void* a0) { return *(uint32_t*)((char*)(a0) + 116); }

// sub_151c310  (orig 0x151c310, getter)
uint32_t main_f_151c310(void* a0) { return *(uint32_t*)((char*)(a0) + 124); }

// sub_151c320  (orig 0x151c320, setter)
void main_f_151c320(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 124) = a1; }

// sub_151c330  (orig 0x151c330, getter)
uint32_t main_f_151c330(void* a0) { return *(uint32_t*)((char*)(a0) + 120); }

// sub_151c340  (orig 0x151c340, setter)
void main_f_151c340(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 120) = a1; }

// sub_151ca40  (orig 0x151ca40, ptr_add)
void* main_f_151ca40(void* a0) { return (char*)a0 + 168; }

// sub_151cf70  (orig 0x151cf70, getter)
uint32_t main_f_151cf70(void* a0) { return *(uint32_t*)((char*)(a0) + 1804); }

// sub_151d580  (orig 0x151d580, setter)
void main_f_151d580(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1856) = a1; }

// sub_151d590  (orig 0x151d590, getter)
uint32_t main_f_151d590(void* a0) { return *(uint32_t*)((char*)(a0) + 1856); }

// sub_151d5b0  (orig 0x151d5b0, getter)
uint8_t main_f_151d5b0(void* a0) { return *(uint8_t*)((char*)(a0) + 2652); }

// sub_151d5c0  (orig 0x151d5c0, compare)
bool main_f_151d5c0(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 3104)) > (uint64_t)(7); }

// sub_151e0d0  (orig 0x151e0d0, setter)
void main_f_151e0d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1920) = a1; }

// sub_1520b60  (orig 0x1520b60, tailcall)
void main_f_1520b60() { main::sub_15209c0(); }

// sub_1520b70  (orig 0x1520b70, tailcall)
void main_f_1520b70() { main::sub_1520be0(); }

// sub_1520ba0  (orig 0x1520ba0, tailcall)
void main_f_1520ba0() { main::sub_1520be0(); }

// sub_1520bb0  (orig 0x1520bb0, tailcall)
void main_f_1520bb0() { main::sub_1520be0(); }

// sub_1523aa0  (orig 0x1523aa0, ret_only)
void main_f_1523aa0() {}

// sub_15247d0  (orig 0x15247d0, setter)
void main_f_15247d0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_15248f0  (orig 0x15248f0, getter)
uint32_t main_f_15248f0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1524900  (orig 0x1524900, setter)
void main_f_1524900(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 2576) = a1; }

// sub_1525130  (orig 0x1525130, getter)
uint64_t main_f_1525130(void* a0) { return *(uint64_t*)((char*)(a0) + 1496); }

// sub_1525940  (orig 0x1525940, getter)
uint32_t main_f_1525940(void* a0) { return *(uint32_t*)((char*)(a0) + 1492); }

// sub_1527bd0  (orig 0x1527bd0, setter-chain)
void main_f_1527bd0(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 2584) = a1; *(uint32_t*)((char*)(a0) + 2592) = a2; }

// sub_1527bf0  (orig 0x1527bf0, tailcall)
void main_f_1527bf0() { main::sub_e7feb0(); }

// sub_1527c00  (orig 0x1527c00, tailcall)
void main_f_1527c00() { main::sub_1527c70(); }

// sub_1527c30  (orig 0x1527c30, tailcall)
void main_f_1527c30() { main::sub_1527c70(); }

// sub_1527c40  (orig 0x1527c40, tailcall)
void main_f_1527c40() { main::sub_1527c70(); }

// sub_15288d0  (orig 0x15288d0, getter)
uint32_t main_f_15288d0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1529670  (orig 0x1529670, ptr_add)
void* main_f_1529670(void* a0) { return (char*)a0 + 1488; }

// sub_15296f0  (orig 0x15296f0, tailcall)
void main_f_15296f0() { main::sub_e7feb0(); }

// sub_1529700  (orig 0x1529700, tailcall)
void main_f_1529700() { main::sub_1529770(); }

// sub_1529730  (orig 0x1529730, tailcall)
void main_f_1529730() { main::sub_1529770(); }

// sub_1529740  (orig 0x1529740, tailcall)
void main_f_1529740() { main::sub_1529770(); }

// sub_152a130  (orig 0x152a130, ret_only)
void main_f_152a130() {}

// sub_152a2a0  (orig 0x152a2a0, tailcall)
void main_f_152a2a0() { main::sub_e7c4c0(); }

// sub_152a2b0  (orig 0x152a2b0, tailcall)
void main_f_152a2b0() { main::sub_152a320(); }

// sub_152a2e0  (orig 0x152a2e0, tailcall)
void main_f_152a2e0() { main::sub_152a320(); }

// sub_152a2f0  (orig 0x152a2f0, tailcall)
void main_f_152a2f0() { main::sub_152a320(); }

// sub_152a6b0  (orig 0x152a6b0, ret_only)
void main_f_152a6b0() {}

// sub_152a6c0  (orig 0x152a6c0, ret_only)
void main_f_152a6c0() {}

// sub_152a6d0  (orig 0x152a6d0, mov_ret)
uint32_t main_f_152a6d0() { return 0; }

// sub_152a800  (orig 0x152a800, tailcall)
void main_f_152a800() { main::sub_e7feb0(); }

// sub_152a810  (orig 0x152a810, tailcall)
void main_f_152a810() { main::sub_152a880(); }

// sub_152a840  (orig 0x152a840, tailcall)
void main_f_152a840() { main::sub_152a880(); }

// sub_152a850  (orig 0x152a850, tailcall)
void main_f_152a850() { main::sub_152a880(); }

// sub_152af80  (orig 0x152af80, ret_only)
void main_f_152af80() {}

// sub_152af90  (orig 0x152af90, tailcall)
void main_f_152af90() { main::sub_e7c4c0(); }

// sub_152afa0  (orig 0x152afa0, tailcall)
void main_f_152afa0() { main::sub_152b010(); }

// sub_152afd0  (orig 0x152afd0, tailcall)
void main_f_152afd0() { main::sub_152b010(); }

// sub_152afe0  (orig 0x152afe0, tailcall)
void main_f_152afe0() { main::sub_152b010(); }

// sub_152b4b0  (orig 0x152b4b0, ret_only)
void main_f_152b4b0() {}

// sub_152b4c0  (orig 0x152b4c0, tailcall)
void main_f_152b4c0() { main::sub_e7c4c0(); }

// sub_152b4d0  (orig 0x152b4d0, tailcall)
void main_f_152b4d0() { main::sub_152b540(); }

// sub_152b500  (orig 0x152b500, tailcall)
void main_f_152b500() { main::sub_152b540(); }

// sub_152b510  (orig 0x152b510, tailcall)
void main_f_152b510() { main::sub_152b540(); }

// sub_152bf60  (orig 0x152bf60, ret_only)
void main_f_152bf60() {}

// sub_152c1b0  (orig 0x152c1b0, setter)
void main_f_152c1b0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_152c2d0  (orig 0x152c2d0, getter)
uint32_t main_f_152c2d0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_152ecc0  (orig 0x152ecc0, tailcall)
void main_f_152ecc0() { main::sub_152ee70(); }

// sub_152ed90  (orig 0x152ed90, tailcall)
void main_f_152ed90() { main::sub_152ee70(); }

// sub_152eda0  (orig 0x152eda0, tailcall)
void main_f_152eda0() { main::sub_152ee70(); }

// sub_152f6c0  (orig 0x152f6c0, getter)
uint32_t main_f_152f6c0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_152fd80  (orig 0x152fd80, ret_only)
void main_f_152fd80() {}

// sub_152fdf0  (orig 0x152fdf0, ret_only)
void main_f_152fdf0() {}

// sub_1530270  (orig 0x1530270, ret_only)
void main_f_1530270() {}

// sub_1530280  (orig 0x1530280, tailcall)
void main_f_1530280() { main::sub_e7c4c0(); }

// sub_1530290  (orig 0x1530290, tailcall)
void main_f_1530290() { main::sub_1530300(); }

// sub_15302c0  (orig 0x15302c0, tailcall)
void main_f_15302c0() { main::sub_1530300(); }

// sub_15302d0  (orig 0x15302d0, tailcall)
void main_f_15302d0() { main::sub_1530300(); }

// sub_1530ba0  (orig 0x1530ba0, ret_only)
void main_f_1530ba0() {}

// sub_1530bb0  (orig 0x1530bb0, tailcall)
void main_f_1530bb0() { main::sub_e7c4c0(); }

// sub_1530bc0  (orig 0x1530bc0, tailcall)
void main_f_1530bc0() { main::sub_1530c30(); }

// sub_1530bf0  (orig 0x1530bf0, tailcall)
void main_f_1530bf0() { main::sub_1530c30(); }

// sub_1530c00  (orig 0x1530c00, tailcall)
void main_f_1530c00() { main::sub_1530c30(); }

// sub_1531390  (orig 0x1531390, ret_only)
void main_f_1531390() {}

// sub_15317e0  (orig 0x15317e0, setter)
void main_f_15317e0(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_1531900  (orig 0x1531900, getter)
uint32_t main_f_1531900(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1531910  (orig 0x1531910, setter-chain)
void main_f_1531910(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0) + 1492) = a1; *(uint64_t*)((char*)(a0) + 1496) = a2; }

// sub_1532790  (orig 0x1532790, getter)
uint8_t main_f_1532790(void* a0) { return *(uint8_t*)((char*)(a0) + 1528); }

// sub_15327a0  (orig 0x15327a0, getter)
uint64_t main_f_15327a0(void* a0) { return *(uint64_t*)((char*)(a0) + 1496); }

// sub_1532890  (orig 0x1532890, tailcall)
void main_f_1532890() { main::sub_1532a80(); }

// sub_1532980  (orig 0x1532980, tailcall)
void main_f_1532980() { main::sub_1532a80(); }

// sub_1532990  (orig 0x1532990, tailcall)
void main_f_1532990() { main::sub_1532a80(); }

// sub_1532f00  (orig 0x1532f00, ret_only)
void main_f_1532f00() {}

// sub_1532f10  (orig 0x1532f10, tailcall)
void main_f_1532f10() { main::sub_e7c4c0(); }

// sub_1532f20  (orig 0x1532f20, tailcall)
void main_f_1532f20() { main::sub_1532f90(); }

// sub_1532f50  (orig 0x1532f50, tailcall)
void main_f_1532f50() { main::sub_1532f90(); }

// sub_1532f60  (orig 0x1532f60, tailcall)
void main_f_1532f60() { main::sub_1532f90(); }

// sub_15334c0  (orig 0x15334c0, ret_only)
void main_f_15334c0() {}

// sub_15334d0  (orig 0x15334d0, tailcall)
void main_f_15334d0() { main::sub_e7c4c0(); }

// sub_15334e0  (orig 0x15334e0, tailcall)
void main_f_15334e0() { main::sub_1533550(); }

// sub_1533510  (orig 0x1533510, tailcall)
void main_f_1533510() { main::sub_1533550(); }

// sub_1533520  (orig 0x1533520, tailcall)
void main_f_1533520() { main::sub_1533550(); }

// sub_1533a80  (orig 0x1533a80, ret_only)
void main_f_1533a80() {}

// sub_1533a90  (orig 0x1533a90, tailcall)
void main_f_1533a90() { main::sub_e7c4c0(); }

// sub_1533aa0  (orig 0x1533aa0, tailcall)
void main_f_1533aa0() { main::sub_1533b10(); }

// sub_1533ad0  (orig 0x1533ad0, tailcall)
void main_f_1533ad0() { main::sub_1533b10(); }

// sub_1533ae0  (orig 0x1533ae0, tailcall)
void main_f_1533ae0() { main::sub_1533b10(); }

// sub_1533f30  (orig 0x1533f30, ret_only)
void main_f_1533f30() {}

// sub_1533f40  (orig 0x1533f40, tailcall)
void main_f_1533f40() { main::sub_e7c4c0(); }

// sub_1533f50  (orig 0x1533f50, tailcall)
void main_f_1533f50() { main::sub_1533fc0(); }

// sub_1533f80  (orig 0x1533f80, tailcall)
void main_f_1533f80() { main::sub_1533fc0(); }

// sub_1533f90  (orig 0x1533f90, tailcall)
void main_f_1533f90() { main::sub_1533fc0(); }

// sub_1534640  (orig 0x1534640, tailcall)
void main_f_1534640() { main::sub_e7c4c0(); }

// sub_1534650  (orig 0x1534650, tailcall)
void main_f_1534650() { main::sub_15346c0(); }

// sub_1534680  (orig 0x1534680, tailcall)
void main_f_1534680() { main::sub_15346c0(); }

// sub_1534690  (orig 0x1534690, tailcall)
void main_f_1534690() { main::sub_15346c0(); }

// sub_1534b50  (orig 0x1534b50, ret_only)
void main_f_1534b50() {}

// sub_1534b60  (orig 0x1534b60, tailcall)
void main_f_1534b60() { main::sub_e7c4c0(); }

// sub_1534b70  (orig 0x1534b70, tailcall)
void main_f_1534b70() { main::sub_1534be0(); }

// sub_1534ba0  (orig 0x1534ba0, tailcall)
void main_f_1534ba0() { main::sub_1534be0(); }

// sub_1534bb0  (orig 0x1534bb0, tailcall)
void main_f_1534bb0() { main::sub_1534be0(); }

// sub_1535410  (orig 0x1535410, ret_only)
void main_f_1535410() {}

// sub_1535420  (orig 0x1535420, tailcall)
void main_f_1535420() { main::sub_e7c4c0(); }

// sub_1535430  (orig 0x1535430, tailcall)
void main_f_1535430() { main::sub_15354a0(); }

// sub_1535460  (orig 0x1535460, tailcall)
void main_f_1535460() { main::sub_15354a0(); }

// sub_1535470  (orig 0x1535470, tailcall)
void main_f_1535470() { main::sub_15354a0(); }

// sub_1535910  (orig 0x1535910, ret_only)
void main_f_1535910() {}

// sub_1535920  (orig 0x1535920, tailcall)
void main_f_1535920() { main::sub_e7c4c0(); }

// sub_1535930  (orig 0x1535930, tailcall)
void main_f_1535930() { main::sub_15359a0(); }

// sub_1535960  (orig 0x1535960, tailcall)
void main_f_1535960() { main::sub_15359a0(); }

// sub_1535970  (orig 0x1535970, tailcall)
void main_f_1535970() { main::sub_15359a0(); }

// sub_15368d0  (orig 0x15368d0, ret_only)
void main_f_15368d0() {}

// sub_15368e0  (orig 0x15368e0, tailcall)
void main_f_15368e0() { main::sub_e7c4c0(); }

// sub_15368f0  (orig 0x15368f0, tailcall)
void main_f_15368f0() { main::sub_1536960(); }

// sub_1536920  (orig 0x1536920, tailcall)
void main_f_1536920() { main::sub_1536960(); }

// sub_1536930  (orig 0x1536930, tailcall)
void main_f_1536930() { main::sub_1536960(); }

// sub_1536ab0  (orig 0x1536ab0, ret_only)
void main_f_1536ab0() {}

// sub_1536b20  (orig 0x1536b20, ret_only)
void main_f_1536b20() {}

// sub_15372c0  (orig 0x15372c0, ret_only)
void main_f_15372c0() {}

// sub_15372d0  (orig 0x15372d0, tailcall)
void main_f_15372d0() { main::sub_e7c4c0(); }

// sub_15372e0  (orig 0x15372e0, tailcall)
void main_f_15372e0() { main::sub_1537350(); }

// sub_1537310  (orig 0x1537310, tailcall)
void main_f_1537310() { main::sub_1537350(); }

// sub_1537320  (orig 0x1537320, tailcall)
void main_f_1537320() { main::sub_1537350(); }

// sub_1537810  (orig 0x1537810, ret_only)
void main_f_1537810() {}

// sub_1537820  (orig 0x1537820, tailcall)
void main_f_1537820() { main::sub_e7c4c0(); }

// sub_1537830  (orig 0x1537830, tailcall)
void main_f_1537830() { main::sub_15378a0(); }

// sub_1537860  (orig 0x1537860, tailcall)
void main_f_1537860() { main::sub_15378a0(); }

// sub_1537870  (orig 0x1537870, tailcall)
void main_f_1537870() { main::sub_15378a0(); }

// sub_1538390  (orig 0x1538390, ret_only)
void main_f_1538390() {}

// sub_15383a0  (orig 0x15383a0, tailcall)
void main_f_15383a0() { main::sub_e7c4c0(); }

// sub_15383b0  (orig 0x15383b0, tailcall)
void main_f_15383b0() { main::sub_1538420(); }

// sub_15383e0  (orig 0x15383e0, tailcall)
void main_f_15383e0() { main::sub_1538420(); }

// sub_15383f0  (orig 0x15383f0, tailcall)
void main_f_15383f0() { main::sub_1538420(); }

// sub_1539270  (orig 0x1539270, tailcall)
void main_f_1539270() { main::sub_e7c4c0(); }

// sub_1539280  (orig 0x1539280, tailcall)
void main_f_1539280() { main::sub_15392f0(); }

// sub_15392b0  (orig 0x15392b0, tailcall)
void main_f_15392b0() { main::sub_15392f0(); }

// sub_15392c0  (orig 0x15392c0, tailcall)
void main_f_15392c0() { main::sub_15392f0(); }

// sub_1539950  (orig 0x1539950, ret_only)
void main_f_1539950() {}

// sub_1539960  (orig 0x1539960, tailcall)
void main_f_1539960() { main::sub_e7c4c0(); }

// sub_1539970  (orig 0x1539970, tailcall)
void main_f_1539970() { main::sub_15399e0(); }

// sub_15399a0  (orig 0x15399a0, tailcall)
void main_f_15399a0() { main::sub_15399e0(); }

// sub_15399b0  (orig 0x15399b0, tailcall)
void main_f_15399b0() { main::sub_15399e0(); }

// sub_1539e80  (orig 0x1539e80, tailcall)
void main_f_1539e80() { main::sub_1539d10(); }

// sub_1539eb0  (orig 0x1539eb0, mov_ret)
uint32_t main_f_1539eb0() { return 1; }

// sub_153ad50  (orig 0x153ad50, tailcall)
void main_f_153ad50() { main::sub_153ad80(); }

// sub_153ad60  (orig 0x153ad60, tailcall)
void main_f_153ad60() { main::sub_153ad80(); }

// sub_153ad70  (orig 0x153ad70, tailcall)
void main_f_153ad70() { main::sub_153ad80(); }

// sub_153b630  (orig 0x153b630, getter)
uint64_t main_f_153b630(void* a0) { return *(uint64_t*)((char*)(a0) + 216); }

// sub_153b7c0  (orig 0x153b7c0, mov_ret)
uint32_t main_f_153b7c0() { return 5; }

// sub_153bd80  (orig 0x153bd80, tailcall)
void main_f_153bd80() { main::sub_153bc90(); }

// sub_153bdb0  (orig 0x153bdb0, getter)
uint64_t main_f_153bdb0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_153bdc0  (orig 0x153bdc0, ptr_add)
void* main_f_153bdc0(void* a0) { return (char*)a0 + 136; }

// sub_153bdd0  (orig 0x153bdd0, setter)
void main_f_153bdd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_153c340  (orig 0x153c340, compare)
bool main_f_153c340(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 176)) == (uint64_t)(3); }

// sub_153c410  (orig 0x153c410, setter)
void main_f_153c410(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1920) = a1; }

// sub_153d940  (orig 0x153d940, tailcall)
void main_f_153d940() { main::sub_153dd60(); }

// sub_153d950  (orig 0x153d950, tailcall)
void main_f_153d950() { main::sub_153dd60(); }

// sub_153d960  (orig 0x153d960, tailcall)
void main_f_153d960() { main::sub_153dd60(); }

// sub_1540510  (orig 0x1540510, ret_only)
void main_f_1540510() {}

// sub_15407f0  (orig 0x15407f0, getter)
uint32_t main_f_15407f0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_1540800  (orig 0x1540800, setter)
void main_f_1540800(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1496) = a1; }

// sub_1541b10  (orig 0x1541b10, tailcall)
void main_f_1541b10() { main::sub_153f430(); }

// sub_1541c60  (orig 0x1541c60, tailcall)
void main_f_1541c60() { main::sub_153f430(); }

// sub_1541c70  (orig 0x1541c70, tailcall)
void main_f_1541c70() { main::sub_153f430(); }

// sub_1542510  (orig 0x1542510, ret_only)
void main_f_1542510() {}

// sub_1542520  (orig 0x1542520, tailcall)
void main_f_1542520() { main::sub_e7c4c0(); }

// sub_1542530  (orig 0x1542530, tailcall)
void main_f_1542530() { main::sub_15425a0(); }

// sub_1542560  (orig 0x1542560, tailcall)
void main_f_1542560() { main::sub_15425a0(); }

// sub_1542570  (orig 0x1542570, tailcall)
void main_f_1542570() { main::sub_15425a0(); }

// sub_1542a80  (orig 0x1542a80, ret_only)
void main_f_1542a80() {}

// sub_1542a90  (orig 0x1542a90, ret_only)
void main_f_1542a90() {}

// sub_1542aa0  (orig 0x1542aa0, mov_ret)
uint32_t main_f_1542aa0() { return 0; }

// sub_1542bd0  (orig 0x1542bd0, tailcall)
void main_f_1542bd0() { main::sub_e7feb0(); }

// sub_1542be0  (orig 0x1542be0, tailcall)
void main_f_1542be0() { main::sub_1542c50(); }

// sub_1542c10  (orig 0x1542c10, tailcall)
void main_f_1542c10() { main::sub_1542c50(); }

// sub_1542c20  (orig 0x1542c20, tailcall)
void main_f_1542c20() { main::sub_1542c50(); }

// sub_15434f0  (orig 0x15434f0, ret_only)
void main_f_15434f0() {}

// sub_1543500  (orig 0x1543500, mov_ret)
uint32_t main_f_1543500() { return 0; }

// sub_15443d0  (orig 0x15443d0, tailcall)
void main_f_15443d0() { main::sub_e7feb0(); }

// sub_15443e0  (orig 0x15443e0, tailcall)
void main_f_15443e0() { main::sub_1544450(); }

// sub_1544410  (orig 0x1544410, tailcall)
void main_f_1544410() { main::sub_1544450(); }

// sub_1544420  (orig 0x1544420, tailcall)
void main_f_1544420() { main::sub_1544450(); }

// sub_15452c0  (orig 0x15452c0, ret_only)
void main_f_15452c0() {}

// sub_15452d0  (orig 0x15452d0, tailcall)
void main_f_15452d0() { main::sub_e7c4c0(); }

// sub_15452e0  (orig 0x15452e0, tailcall)
void main_f_15452e0() { main::sub_1545350(); }

// sub_1545310  (orig 0x1545310, tailcall)
void main_f_1545310() { main::sub_1545350(); }

// sub_1545320  (orig 0x1545320, tailcall)
void main_f_1545320() { main::sub_1545350(); }

// sub_1545d10  (orig 0x1545d10, ret_only)
void main_f_1545d10() {}

// sub_1545d20  (orig 0x1545d20, tailcall)
void main_f_1545d20() { main::sub_e7c4c0(); }

// sub_1545d30  (orig 0x1545d30, tailcall)
void main_f_1545d30() { main::sub_1545da0(); }

// sub_1545d60  (orig 0x1545d60, tailcall)
void main_f_1545d60() { main::sub_1545da0(); }

// sub_1545d70  (orig 0x1545d70, tailcall)
void main_f_1545d70() { main::sub_1545da0(); }

// sub_1546de0  (orig 0x1546de0, ret_only)
void main_f_1546de0() {}

// sub_1546df0  (orig 0x1546df0, tailcall)
void main_f_1546df0() { main::sub_e7c4c0(); }

// sub_1546e00  (orig 0x1546e00, tailcall)
void main_f_1546e00() { main::sub_1546e70(); }

// sub_1546e30  (orig 0x1546e30, tailcall)
void main_f_1546e30() { main::sub_1546e70(); }

// sub_1546e40  (orig 0x1546e40, tailcall)
void main_f_1546e40() { main::sub_1546e70(); }

// sub_1547260  (orig 0x1547260, ret_only)
void main_f_1547260() {}

// sub_1547270  (orig 0x1547270, tailcall)
void main_f_1547270() { main::sub_e7c4c0(); }

// sub_1547280  (orig 0x1547280, tailcall)
void main_f_1547280() { main::sub_15472f0(); }

// sub_15472b0  (orig 0x15472b0, tailcall)
void main_f_15472b0() { main::sub_15472f0(); }

// sub_15472c0  (orig 0x15472c0, tailcall)
void main_f_15472c0() { main::sub_15472f0(); }

// sub_1547630  (orig 0x1547630, ret_only)
void main_f_1547630() {}

// sub_1547640  (orig 0x1547640, tailcall)
void main_f_1547640() { main::sub_e7c4c0(); }

// sub_1547650  (orig 0x1547650, tailcall)
void main_f_1547650() { main::sub_15476c0(); }

// sub_1547680  (orig 0x1547680, tailcall)
void main_f_1547680() { main::sub_15476c0(); }

// sub_1547690  (orig 0x1547690, tailcall)
void main_f_1547690() { main::sub_15476c0(); }

// sub_1547c40  (orig 0x1547c40, ret_only)
void main_f_1547c40() {}

// sub_1547c50  (orig 0x1547c50, tailcall)
void main_f_1547c50() { main::sub_e7c4c0(); }

// sub_1547c60  (orig 0x1547c60, tailcall)
void main_f_1547c60() { main::sub_1547cd0(); }

// sub_1547c90  (orig 0x1547c90, tailcall)
void main_f_1547c90() { main::sub_1547cd0(); }

// sub_1547ca0  (orig 0x1547ca0, tailcall)
void main_f_1547ca0() { main::sub_1547cd0(); }

// sub_1548260  (orig 0x1548260, tailcall)
void main_f_1548260() { main::sub_e7c4c0(); }

// sub_1548270  (orig 0x1548270, tailcall)
void main_f_1548270() { main::sub_15482e0(); }

// sub_15482a0  (orig 0x15482a0, tailcall)
void main_f_15482a0() { main::sub_15482e0(); }

// sub_15482b0  (orig 0x15482b0, tailcall)
void main_f_15482b0() { main::sub_15482e0(); }

// sub_154db40  (orig 0x154db40, getter)
uint8_t main_f_154db40(void* a0) { return *(uint8_t*)((char*)(a0) + 12); }

// sub_1551c30  (orig 0x1551c30, compare)
bool main_f_1551c30(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 196)) == (uint64_t)(0); }

// sub_1552e80  (orig 0x1552e80, getter)
uint64_t main_f_1552e80(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_1552e90  (orig 0x1552e90, getter)
uint32_t main_f_1552e90(void* a0) { return *(uint32_t*)((char*)(a0) + 200); }

// sub_1552ea0  (orig 0x1552ea0, getter)
uint32_t main_f_1552ea0(void* a0) { return *(uint32_t*)((char*)(a0) + 188); }

// sub_15621a0  (orig 0x15621a0, straight)
uint32_t main_f_15621a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 36) = *(uint32_t*)((char*)(a0) + 32);
    return *(uint32_t*)((char*)(a0) + 32);
}

// sub_1570e40  (orig 0x1570e40, ret_only)
void main_f_1570e40() {}

// sub_1571110  (orig 0x1571110, getter)
uint64_t main_f_1571110(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1571120  (orig 0x1571120, setter)
void main_f_1571120(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15730d0  (orig 0x15730d0, tailcall)
void main_f_15730d0() { main::InstanceTable_11(); }

// sub_1574220  (orig 0x1574220, tailcall)
void main_f_1574220() { main::InstanceTable_14(); }

// sub_15744d0  (orig 0x15744d0, tailcall)
void main_f_15744d0() { main::InstanceTable_15(); }

// sub_157f0b0  (orig 0x157f0b0, setter)
void main_f_157f0b0(void* a0, uint64_t unused1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 664) = a2; }

// sub_157f0c0  (orig 0x157f0c0, setter)
void main_f_157f0c0(void* a0, uint64_t unused1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 504) = a2; }

// sub_158a780  (orig 0x158a780, ret_only)
void main_f_158a780() {}

// sub_158c0f0  (orig 0x158c0f0, straight)
void main_f_158c0f0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint16_t*)((char*)(a0) + 10) = *(uint16_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 12) = *(uint8_t*)((char*)(a1) + 12);
}

// sub_158c1f0  (orig 0x158c1f0, straight)
void main_f_158c1f0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1) + 16);
    *(uint16_t*)((char*)(a0) + 24) = *(uint16_t*)((char*)(a1) + 24);
}

// sub_158cf90  (orig 0x158cf90, ret_only)
void main_f_158cf90() {}

// sub_158cfa0  (orig 0x158cfa0, ret_only)
void main_f_158cfa0() {}

// sub_158d020  (orig 0x158d020, ret_only)
void main_f_158d020() {}

// sub_158d3b0  (orig 0x158d3b0, ret_only)
void main_f_158d3b0() {}

// sub_158d8a0  (orig 0x158d8a0, ret_only)
void main_f_158d8a0() {}

// sub_158da60  (orig 0x158da60, ret_only)
void main_f_158da60() {}

// sub_158dd30  (orig 0x158dd30, ret_only)
void main_f_158dd30() {}

// sub_158e030  (orig 0x158e030, ret_only)
void main_f_158e030() {}

// sub_158e040  (orig 0x158e040, ret_only)
void main_f_158e040() {}

// sub_158e480  (orig 0x158e480, ret_only)
void main_f_158e480() {}

// sub_158e490  (orig 0x158e490, ret_only)
void main_f_158e490() {}

// sub_158e610  (orig 0x158e610, ret_only)
void main_f_158e610() {}

// sub_158e9d0  (orig 0x158e9d0, ret_only)
void main_f_158e9d0() {}

// sub_158e9e0  (orig 0x158e9e0, ret_only)
void main_f_158e9e0() {}

// sub_158e9f0  (orig 0x158e9f0, ret_only)
void main_f_158e9f0() {}

// sub_158ea00  (orig 0x158ea00, ret_only)
void main_f_158ea00() {}

// sub_1591b40  (orig 0x1591b40, mov_ret)
uint32_t main_f_1591b40() { return 1; }

// sub_1591b70  (orig 0x1591b70, mov_ret)
uint32_t main_f_1591b70() { return 1; }

// sub_1591c00  (orig 0x1591c00, ret_only)
void main_f_1591c00() {}

// sub_1591c10  (orig 0x1591c10, mov_ret)
uint32_t main_f_1591c10() { return 1; }

// sub_1591c20  (orig 0x1591c20, straight)
uint64_t main_f_1591c20(uint64_t unused0, uint64_t unused1, uint64_t unused2, uint64_t unused3, void* a4) {
    *(uint8_t*)((char*)(a4)) = (uint8_t)(1);
    return 0;
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

// sub_1593100  (orig 0x1593100, ret_only)
void main_f_1593100() {}

// sub_1593110  (orig 0x1593110, tailcall)
void main_f_1593110() { main::sub_15b6e10(); }

// sub_1593870  (orig 0x1593870, tailcall)
void main_f_1593870() { main::sub_15b6e10(); }

// sub_15946e0  (orig 0x15946e0, tailcall)
void main_f_15946e0() { main::sub_15b6e10(); }

// sub_15946f0  (orig 0x15946f0, ret_only)
void main_f_15946f0() {}

// sub_1594700  (orig 0x1594700, tailcall)
void main_f_1594700() { main::sub_15b6e10(); }

// sub_15949b0  (orig 0x15949b0, tailcall)
void main_f_15949b0() { main::sub_15b6e10(); }

// sub_1595020  (orig 0x1595020, tailcall)
void main_f_1595020() { main::sub_15b6e10(); }

// sub_1595430  (orig 0x1595430, tailcall)
void main_f_1595430() { main::sub_15b6e10(); }

// sub_1599450  (orig 0x1599450, ret_only)
void main_f_1599450() {}

// sub_1599460  (orig 0x1599460, tailcall)
void main_f_1599460() { main::sub_15b6e10(); }

// sub_15994d0  (orig 0x15994d0, ret_only)
void main_f_15994d0() {}

// sub_15994e0  (orig 0x15994e0, tailcall)
void main_f_15994e0() { main::sub_15b6e10(); }

// sub_1599790  (orig 0x1599790, getter)
uint64_t main_f_1599790(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15997a0  (orig 0x15997a0, setter)
void main_f_15997a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_159b3d0  (orig 0x159b3d0, getter-chain)
uint64_t main_f_159b3d0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 8))) + 192); }

// sub_159c6f0  (orig 0x159c6f0, ret_only)
void main_f_159c6f0() {}

// sub_159c700  (orig 0x159c700, tailcall)
void main_f_159c700() { main::sub_15b6e10(); }

// sub_159c8f0  (orig 0x159c8f0, tailcall)
void main_f_159c8f0() { main::sub_15b6e10(); }

// sub_15a37e0  (orig 0x15a37e0, straight)
void main_f_15a37e0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 12) = *(uint32_t*)((char*)(a1) + 12);
}

// sub_15a3960  (orig 0x15a3960, ret_only)
void main_f_15a3960() {}

// sub_15a3a70  (orig 0x15a3a70, ret_only)
void main_f_15a3a70() {}

// sub_15a3a80  (orig 0x15a3a80, ret_only)
void main_f_15a3a80() {}

// sub_15a3a90  (orig 0x15a3a90, ret_only)
void main_f_15a3a90() {}

// sub_15a3aa0  (orig 0x15a3aa0, ret_only)
void main_f_15a3aa0() {}

// sub_15a3ab0  (orig 0x15a3ab0, ret_only)
void main_f_15a3ab0() {}

// sub_15a3b60  (orig 0x15a3b60, ret_only)
void main_f_15a3b60() {}

// sub_15a3b70  (orig 0x15a3b70, ret_only)
void main_f_15a3b70() {}

// sub_15a3df0  (orig 0x15a3df0, ret_only)
void main_f_15a3df0() {}

// sub_15a3e90  (orig 0x15a3e90, ret_only)
void main_f_15a3e90() {}

// sub_15a4320  (orig 0x15a4320, ret_only)
void main_f_15a4320() {}

// sub_15a5840  (orig 0x15a5840, setter)
void main_f_15a5840(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 100) = a1; }

// sub_15a6ab0  (orig 0x15a6ab0, setter)
void main_f_15a6ab0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 204) = a1; }

// sub_15a73b0  (orig 0x15a73b0, setter)
void main_f_15a73b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 100) = a1; }

// sub_15a73c0  (orig 0x15a73c0, getter)
uint32_t main_f_15a73c0(void* a0) { return *(uint32_t*)((char*)(a0) + 100); }

// ServerProtocol  (orig 0x15a9050, strlit-ret)
const char *main_f_15a9050() { static const char s[] = "ServerProtocol"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15a90e0  (orig 0x15a90e0, ret_only)
void main_f_15a90e0() {}

// sub_15a90f0  (orig 0x15a90f0, ret_only)
void main_f_15a90f0() {}

// sub_15a9120  (orig 0x15a9120, mov_ret)
uint32_t main_f_15a9120() { return 1; }

// sub_15a9130  (orig 0x15a9130, mov_ret)
uint32_t main_f_15a9130() { return 1; }

// sub_15a9140  (orig 0x15a9140, getter)
uint32_t main_f_15a9140(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_15a9150  (orig 0x15a9150, ret_only)
void main_f_15a9150() {}

// sub_15a9160  (orig 0x15a9160, mov_ret)
uint32_t main_f_15a9160() { return 1; }

// sub_15a9170  (orig 0x15a9170, ret_only)
void main_f_15a9170() {}

// sub_15a9180  (orig 0x15a9180, ret_only)
void main_f_15a9180() {}

// sub_15a9190  (orig 0x15a9190, mov_ret)
uint64_t main_f_15a9190() { return 0; }

// sub_15a91a0  (orig 0x15a91a0, mov_ret)
uint32_t main_f_15a91a0() { return 1; }

// sub_15a91b0  (orig 0x15a91b0, ret_only)
void main_f_15a91b0() {}

// sub_15a91c0  (orig 0x15a91c0, mov_ret)
uint32_t main_f_15a91c0() { return 0; }

// sub_15a91e0  (orig 0x15a91e0, ret_only)
void main_f_15a91e0() {}

// sub_15a9200  (orig 0x15a9200, mov_ret)
uint32_t main_f_15a9200() { return 0; }

// sub_15a9210  (orig 0x15a9210, ret_only)
void main_f_15a9210() {}

// sub_15a9220  (orig 0x15a9220, ret_only)
void main_f_15a9220() {}

// sub_15a9230  (orig 0x15a9230, ret_only)
void main_f_15a9230() {}

// ClientProtocol  (orig 0x15a9270, strlit-ret)
const char *main_f_15a9270() { static const char s[] = "ClientProtocol"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15a9300  (orig 0x15a9300, ret_only)
void main_f_15a9300() {}

// sub_15a9310  (orig 0x15a9310, mov_ret)
uint32_t main_f_15a9310() { return 0; }

// sub_15a98d0  (orig 0x15a98d0, tailcall)
void main_f_15a98d0() { main::sub_15b6e10(); }

// sub_15a98e0  (orig 0x15a98e0, tailcall)
void main_f_15a98e0() { main::sub_15b6e10(); }

// sub_15ad640  (orig 0x15ad640, getter)
uint64_t main_f_15ad640(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15ad650  (orig 0x15ad650, setter)
void main_f_15ad650(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15af2d0  (orig 0x15af2d0, ret_only)
void main_f_15af2d0() {}

// sub_15af720  (orig 0x15af720, ret_only)
void main_f_15af720() {}

// sub_15b05a0  (orig 0x15b05a0, straight)
void main_f_15b05a0(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1) + 16);
    *(uint32_t*)((char*)(a0) + 24) = *(uint32_t*)((char*)(a1) + 24);
}

// sub_15b1200  (orig 0x15b1200, getter)
uint64_t main_f_15b1200(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15b1210  (orig 0x15b1210, setter)
void main_f_15b1210(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15b38c0  (orig 0x15b38c0, getter)
uint32_t main_f_15b38c0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_15b38e0  (orig 0x15b38e0, ret_only)
void main_f_15b38e0() {}

// sub_15b3df0  (orig 0x15b3df0, ret_only)
void main_f_15b3df0() {}

// sub_15b3e00  (orig 0x15b3e00, ret_only)
void main_f_15b3e00() {}

// sub_15b40e0  (orig 0x15b40e0, ret_only)
void main_f_15b40e0() {}

// sub_15b4170  (orig 0x15b4170, tailcall)
void main_f_15b4170() { main::sub_ce0(); }

// sub_15b4680  (orig 0x15b4680, ret_only)
void main_f_15b4680() {}

// sub_15b48d0  (orig 0x15b48d0, getter)
uint64_t main_f_15b48d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15b48e0  (orig 0x15b48e0, setter)
void main_f_15b48e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15b58c0  (orig 0x15b58c0, ret_only)
void main_f_15b58c0() {}

// sub_15b59d0  (orig 0x15b59d0, ret_only)
void main_f_15b59d0() {}

// sub_15b59e0  (orig 0x15b59e0, ret_only)
void main_f_15b59e0() {}

// sub_15b59f0  (orig 0x15b59f0, ret_only)
void main_f_15b59f0() {}

// sub_15b66c0  (orig 0x15b66c0, ret_only)
void main_f_15b66c0() {}

// sub_15b66d0  (orig 0x15b66d0, ret_only)
void main_f_15b66d0() {}

// sub_15b66e0  (orig 0x15b66e0, ret_only)
void main_f_15b66e0() {}

// sub_15b66f0  (orig 0x15b66f0, ret_only)
void main_f_15b66f0() {}

// sub_15b6700  (orig 0x15b6700, ret_only)
void main_f_15b6700() {}

// sub_15b6710  (orig 0x15b6710, ret_only)
void main_f_15b6710() {}

// sub_15b6850  (orig 0x15b6850, ret_only)
void main_f_15b6850() {}

// sub_15b6c40  (orig 0x15b6c40, getter)
uint64_t main_f_15b6c40(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15b6c50  (orig 0x15b6c50, setter)
void main_f_15b6c50(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_15b79f0  (orig 0x15b79f0, ret_only)
void main_f_15b79f0() {}

// sub_15b7a70  (orig 0x15b7a70, setter)
void main_f_15b7a70(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_15b7a80  (orig 0x15b7a80, copy2)
void main_f_15b7a80(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); }

// sub_15b7b20  (orig 0x15b7b20, copy2)
void main_f_15b7b20(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); }

// sub_15b7d30  (orig 0x15b7d30, getter)
uint64_t main_f_15b7d30(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_15b7d40  (orig 0x15b7d40, getter)
uint64_t main_f_15b7d40(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_15b7d50  (orig 0x15b7d50, compare)
bool main_f_15b7d50(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) > (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_15b7d70  (orig 0x15b7d70, compare)
bool main_f_15b7d70(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) <= (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_15b8f60  (orig 0x15b8f60, ret_only)
void main_f_15b8f60() {}

// sub_15b9280  (orig 0x15b9280, getter)
uint64_t main_f_15b9280(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_15b9320  (orig 0x15b9320, tailcall)
void main_f_15b9320() { main::sub_15c0b80(); }

// sub_15b9330  (orig 0x15b9330, tailcall)
void main_f_15b9330() { main::sub_15c0c80(); }

// sub_15baa10  (orig 0x15baa10, straight)
void main_f_15baa10(void* a0) {
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(2);
}

// sub_15baaf0  (orig 0x15baaf0, straight)
void main_f_15baaf0(void* a0) {
    *(uint8_t*)((char*)(a0) + 81) = (uint8_t)(1);
}

// sub_15bab40  (orig 0x15bab40, setter)
void main_f_15bab40(uint64_t unused0, void* a1) { *(uint8_t*)((char*)(a1)) = 0; }

// sub_15babb0  (orig 0x15babb0, ret_only)
void main_f_15babb0() {}

// sub_15babc0  (orig 0x15babc0, ret_only)
void main_f_15babc0() {}

// sub_15babd0  (orig 0x15babd0, ret_only)
void main_f_15babd0() {}

// sub_15bacb0  (orig 0x15bacb0, ret_only)
void main_f_15bacb0() {}

// sub_15bacf0  (orig 0x15bacf0, straight)
void main_f_15bacf0(void* a0) {
    *(uint8_t*)((char*)(a0) + 288) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 291) = (uint8_t)(1);
}

// sub_15bad00  (orig 0x15bad00, setter)
void main_f_15bad00(void* a0) { *(uint8_t*)((char*)(a0) + 289) = 0; }

// sub_15bb240  (orig 0x15bb240, ret_only)
void main_f_15bb240() {}

// sub_15bb900  (orig 0x15bb900, ret_only)
void main_f_15bb900() {}

// sub_15bbc70  (orig 0x15bbc70, compare)
bool main_f_15bbc70(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) == (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_15bbd10  (orig 0x15bbd10, straight)
void main_f_15bbd10(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a1) + 16);
}

// sub_15bc130  (orig 0x15bc130, ret_only)
void main_f_15bc130() {}

// sub_15bd7f0  (orig 0x15bd7f0, getter)
uint64_t main_f_15bd7f0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_15bd800  (orig 0x15bd800, getter)
uint64_t main_f_15bd800(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_15beca0  (orig 0x15beca0, setter)
void main_f_15beca0(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_15bf120  (orig 0x15bf120, getter)
uint32_t main_f_15bf120(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_15c0590  (orig 0x15c0590, mov_ret)
uint32_t main_f_15c0590() { return 0; }

// sub_15c05a0  (orig 0x15c05a0, mov_ret)
uint32_t main_f_15c05a0() { return 1; }

// sub_15c05d0  (orig 0x15c05d0, ret_only)
void main_f_15c05d0() {}

// sub_15c05e0  (orig 0x15c05e0, ret_only)
void main_f_15c05e0() {}

// sub_15c05f0  (orig 0x15c05f0, ret_only)
void main_f_15c05f0() {}

// sub_15c06d0  (orig 0x15c06d0, mov_ret)
uint32_t main_f_15c06d0() { return 1; }

// sub_15c06e0  (orig 0x15c06e0, mov_ret)
uint32_t main_f_15c06e0() { return 1; }

// sub_15c0ac0  (orig 0x15c0ac0, mov_ret)
uint32_t main_f_15c0ac0() { return 0; }

// sub_15c3ed0  (orig 0x15c3ed0, ret_only)
void main_f_15c3ed0() {}

// sub_15c4610  (orig 0x15c4610, mov_ret)
uint32_t main_f_15c4610() { return 16; }

// sub_15c64a0  (orig 0x15c64a0, tailcall)
void main_f_15c64a0() { main::sub_15b6e10(); }

// sub_15c66f0  (orig 0x15c66f0, mov_ret)
uint32_t main_f_15c66f0() { return 16; }

// sub_15c9350  (orig 0x15c9350, setter-chain)
void main_f_15c9350(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 112) = a1; *(uint32_t*)((char*)(a0) + 120) = a2; }

// sub_15ca5b0  (orig 0x15ca5b0, tailcall)
void main_f_15ca5b0() { main::CallContext_2(); }

// sub_15cb140  (orig 0x15cb140, tailcall)
void main_f_15cb140() { main::InstanceTable_214(); }

// sub_15cdff0  (orig 0x15cdff0, ret_only)
void main_f_15cdff0() {}

// sub_15ce000  (orig 0x15ce000, tailcall)
void main_f_15ce000() { main::unnamed_69(); }

// sub_15ce110  (orig 0x15ce110, ret_only)
void main_f_15ce110() {}

// sub_15ce670  (orig 0x15ce670, ret_only)
void main_f_15ce670() {}

// sub_15ce680  (orig 0x15ce680, tailcall)
void main_f_15ce680() { main::sub_15b6e10(); }

// sub_15cedf0  (orig 0x15cedf0, compare)
bool main_f_15cedf0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 100)) == (uint64_t)(0); }

// sub_15cee00  (orig 0x15cee00, ret_only)
void main_f_15cee00() {}

// sub_15cee10  (orig 0x15cee10, tailcall)
void main_f_15cee10() { main::sub_15b6e10(); }

// sub_15cefa0  (orig 0x15cefa0, ret_only)
void main_f_15cefa0() {}

// sub_15d2cd0  (orig 0x15d2cd0, setter)
void main_f_15d2cd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_15d2fc0  (orig 0x15d2fc0, ret_only)
void main_f_15d2fc0() {}

// sub_15d45f0  (orig 0x15d45f0, mov_ret)
uint32_t main_f_15d45f0() { return 1; }

// sub_15d4640  (orig 0x15d4640, ret_only)
void main_f_15d4640() {}

// sub_15d4650  (orig 0x15d4650, ret_only)
void main_f_15d4650() {}

// sub_15d4660  (orig 0x15d4660, ret_only)
void main_f_15d4660() {}

// sub_15d4670  (orig 0x15d4670, mov_ret)
uint32_t main_f_15d4670() { return 1; }

// sub_15d4680  (orig 0x15d4680, mov_ret)
uint32_t main_f_15d4680() { return 16; }

// sub_15d4690  (orig 0x15d4690, ret_only)
void main_f_15d4690() {}

// CallContextRegister_2  (orig 0x15d46c0, strlit-ret)
const char *main_f_15d46c0() { static const char s[] = "CallContextRegister"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15d4730  (orig 0x15d4730, ret_only)
void main_f_15d4730() {}

// sub_15d4740  (orig 0x15d4740, tailcall)
void main_f_15d4740() { main::sub_15b6e10(); }

// sub_15d4750  (orig 0x15d4750, getter)
uint32_t main_f_15d4750(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_15d47c0  (orig 0x15d47c0, getter)
uint32_t main_f_15d47c0(void* a0) { return *(uint32_t*)((char*)(a0) + 80); }

// SystemComponent_4  (orig 0x15d47d0, strlit-ret)
const char *main_f_15d47d0() { static const char s[] = "SystemComponent"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15d4810  (orig 0x15d4810, mov_ret)
uint32_t main_f_15d4810() { return 1; }

// sub_15d4820  (orig 0x15d4820, mov_ret)
uint32_t main_f_15d4820() { return 1; }

// SystemComponentGroup  (orig 0x15d4830, strlit-ret)
const char *main_f_15d4830() { static const char s[] = "SystemComponentGroup"; __asm__ volatile("" ::: "memory"); return s; }

// sub_15d48a0  (orig 0x15d48a0, ret_only)
void main_f_15d48a0() {}

// sub_15d48b0  (orig 0x15d48b0, ret_only)
void main_f_15d48b0() {}

// sub_15d48c0  (orig 0x15d48c0, ret_only)
void main_f_15d48c0() {}

// sub_15d48d0  (orig 0x15d48d0, ret_only)
void main_f_15d48d0() {}

// sub_15d48e0  (orig 0x15d48e0, ret_only)
void main_f_15d48e0() {}

// sub_15d48f0  (orig 0x15d48f0, ret_only)
void main_f_15d48f0() {}

// sub_15d4d60  (orig 0x15d4d60, tailcall)
void main_f_15d4d60() { main::sub_15b6e10(); }

// sub_15d5710  (orig 0x15d5710, tailcall)
void main_f_15d5710() { main::sub_15b6e10(); }

// sub_15d65c0  (orig 0x15d65c0, ptr_add)
void* main_f_15d65c0(void* a0) { return (char*)a0 + 8; }

// sub_15d65d0  (orig 0x15d65d0, ptr_add)
void* main_f_15d65d0(void* a0) { return (char*)a0 + 128; }

// sub_15d65e0  (orig 0x15d65e0, getter)
uint32_t main_f_15d65e0(void* a0) { return *(uint32_t*)((char*)(a0) + 168); }

// sub_15d7280  (orig 0x15d7280, compare)
bool main_f_15d7280(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 72)) == (uint64_t)(64); }

// sub_15d7fb0  (orig 0x15d7fb0, ret_only)
void main_f_15d7fb0() {}

// sub_15d80e0  (orig 0x15d80e0, ret_only)
void main_f_15d80e0() {}

// sub_15d80f0  (orig 0x15d80f0, mov_ret)
uint32_t main_f_15d80f0() { return 0; }

// sub_15d8100  (orig 0x15d8100, mov_ret)
uint64_t main_f_15d8100() { return 0; }

// sub_15d8110  (orig 0x15d8110, ret_only)
void main_f_15d8110() {}

// sub_15d8120  (orig 0x15d8120, mov_ret)
uint32_t main_f_15d8120() { return 0; }

// sub_15d8130  (orig 0x15d8130, mov_ret)
uint64_t main_f_15d8130() { return 0; }

// sub_15d8150  (orig 0x15d8150, mov_ret)
uint32_t main_f_15d8150() { return 0; }

// sub_15d8160  (orig 0x15d8160, ret_only)
void main_f_15d8160() {}

// sub_15d8170  (orig 0x15d8170, ret_only)
void main_f_15d8170() {}

// sub_15d8180  (orig 0x15d8180, ret_only)
void main_f_15d8180() {}

// sub_15d81f0  (orig 0x15d81f0, mov_ret)
uint32_t main_f_15d81f0() { return 0; }

// sub_15d8df0  (orig 0x15d8df0, setter)
void main_f_15d8df0(void* a0, float a1) { *(float*)((char*)(a0) + 36) = a1; }

// sub_15d98d0  (orig 0x15d98d0, ret_only)
void main_f_15d98d0() {}

// sub_15dacd0  (orig 0x15dacd0, tailcall)
void main_f_15dacd0() { main::InstanceTable_239(); }

// sub_15de580  (orig 0x15de580, ret_only)
void main_f_15de580() {}

// sub_15df270  (orig 0x15df270, ret_only)
void main_f_15df270() {}

// sub_15e6fc0  (orig 0x15e6fc0, ptr_add)
void* main_f_15e6fc0(void* a0) { return (char*)a0 + 128; }

// sub_15e7d10  (orig 0x15e7d10, ptr_add)
void* main_f_15e7d10(void* a0) { return (char*)a0 + 64; }

// sub_15e8a50  (orig 0x15e8a50, ret_only)
void main_f_15e8a50() {}

// sub_15e8a70  (orig 0x15e8a70, mov_ret)
uint64_t main_f_15e8a70() { return 0; }

// sub_15e8a80  (orig 0x15e8a80, mov_ret)
uint64_t main_f_15e8a80() { return 0; }

// sub_15eaa80  (orig 0x15eaa80, mov_ret)
uint32_t main_f_15eaa80() { return 3; }

// sub_15ec6b0  (orig 0x15ec6b0, ret_only)
void main_f_15ec6b0() {}

// sub_15ec6c0  (orig 0x15ec6c0, mov_ret)
uint32_t main_f_15ec6c0() { return 1; }

// sub_15ecbe0  (orig 0x15ecbe0, ret_only)
void main_f_15ecbe0() {}

// sub_15ecbf0  (orig 0x15ecbf0, ret_only)
void main_f_15ecbf0() {}

// sub_15ecc00  (orig 0x15ecc00, ret_only)
void main_f_15ecc00() {}

// sub_15ecc10  (orig 0x15ecc10, mov_ret)
uint32_t main_f_15ecc10() { return 0; }

// sub_15ed920  (orig 0x15ed920, ret_only)
void main_f_15ed920() {}

// sub_15ed930  (orig 0x15ed930, tailcall)
void main_f_15ed930() { main::sub_15b6e10(); }

// sub_15f3d30  (orig 0x15f3d30, ptr_add)
void* main_f_15f3d30(void* a0) { return (char*)a0 + 1080; }

// sub_15f5f10  (orig 0x15f5f10, mov_ret)
uint64_t main_f_15f5f10() { return 0; }

// sub_15f5f20  (orig 0x15f5f20, mov_ret)
uint64_t main_f_15f5f20() { return 0; }

// sub_1601d50  (orig 0x1601d50, strlit-ret)
const char *main_f_1601d50() { static const char s[] = "prudp"; __asm__ volatile("" ::: "memory"); return s; }

// sub_1606400  (orig 0x1606400, ret_only)
void main_f_1606400() {}

// sub_1606410  (orig 0x1606410, tailcall)
void main_f_1606410() { main::sub_15b6e10(); }

// sub_1607c60  (orig 0x1607c60, ret_only)
void main_f_1607c60() {}

// sub_16092b0  (orig 0x16092b0, ret_only)
void main_f_16092b0() {}

// sub_1609f50  (orig 0x1609f50, ret_only)
void main_f_1609f50() {}

// sub_1609f60  (orig 0x1609f60, ret_only)
void main_f_1609f60() {}

// sub_1609f70  (orig 0x1609f70, tailcall)
void main_f_1609f70() { main::sub_15b6e10(); }

// sub_160a2e0  (orig 0x160a2e0, getter)
uint32_t main_f_160a2e0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_160a510  (orig 0x160a510, ret_only)
void main_f_160a510() {}

// sub_160a520  (orig 0x160a520, tailcall)
void main_f_160a520() { main::sub_15b6e10(); }

// sub_160a750  (orig 0x160a750, ret_only)
void main_f_160a750() {}

// sub_160a760  (orig 0x160a760, tailcall)
void main_f_160a760() { main::sub_15b6e10(); }

// sub_160aff0  (orig 0x160aff0, ret_only)
void main_f_160aff0() {}

// sub_160b000  (orig 0x160b000, tailcall)
void main_f_160b000() { main::sub_15b6e10(); }

// sub_160cf80  (orig 0x160cf80, ret_only)
void main_f_160cf80() {}

// sub_160f5d0  (orig 0x160f5d0, mov_ret)
uint32_t main_f_160f5d0() { return 1; }

// sub_160f680  (orig 0x160f680, tailcall)
void main_f_160f680() { main::sub_161e5f0(); }

// sub_160fc90  (orig 0x160fc90, ret_only)
void main_f_160fc90() {}

// sub_160fca0  (orig 0x160fca0, tailcall)
void main_f_160fca0() { main::sub_15b6e10(); }

// sub_160fce0  (orig 0x160fce0, mov_ret)
uint32_t main_f_160fce0() { return 0; }

// sub_160fcf0  (orig 0x160fcf0, ret_only)
void main_f_160fcf0() {}

// sub_160fd00  (orig 0x160fd00, tailcall)
void main_f_160fd00() { main::sub_15b6e10(); }

// sub_160fd10  (orig 0x160fd10, mov_ret)
uint32_t main_f_160fd10() { return 0; }

// sub_160fd20  (orig 0x160fd20, ret_only)
void main_f_160fd20() {}

// sub_160fd30  (orig 0x160fd30, mov_ret)
uint32_t main_f_160fd30() { return 0; }

// sub_160fd40  (orig 0x160fd40, mov_ret)
uint32_t main_f_160fd40() { return 3; }

// sub_160fd50  (orig 0x160fd50, mov_ret)
uint32_t main_f_160fd50() { return 0; }

// sub_160fdc0  (orig 0x160fdc0, straight)
void main_f_160fdc0(void* a0) {
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)(1);
}

// sub_160fde0  (orig 0x160fde0, setter)
void main_f_160fde0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 168) = a1; }

// sub_160fdf0  (orig 0x160fdf0, setter)
void main_f_160fdf0(void* a0) { *(uint64_t*)((char*)(a0) + 168) = 0; }

// sub_160fe00  (orig 0x160fe00, ret_only)
void main_f_160fe00() {}

// sub_160fe10  (orig 0x160fe10, ret_only)
void main_f_160fe10() {}

// sub_160fe80  (orig 0x160fe80, ret_only)
void main_f_160fe80() {}

// sub_160fe90  (orig 0x160fe90, ret_only)
void main_f_160fe90() {}

// sub_160fea0  (orig 0x160fea0, ret_only)
void main_f_160fea0() {}

// sub_160feb0  (orig 0x160feb0, ptr_add)
void* main_f_160feb0(void* a0) { return (char*)a0 + 1112; }

// sub_160fec0  (orig 0x160fec0, straight)
void main_f_160fec0(void* a0) {
    *(uint8_t*)((char*)(a0) + 736) = (uint8_t)(1);
}

// sub_160fed0  (orig 0x160fed0, getter)
uint8_t main_f_160fed0(void* a0) { return *(uint8_t*)((char*)(a0) + 384); }

// sub_160fee0  (orig 0x160fee0, compare)
bool main_f_160fee0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(0); }

// sub_160fef0  (orig 0x160fef0, compare)
bool main_f_160fef0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(1); }

// sub_160ff00  (orig 0x160ff00, compare)
bool main_f_160ff00(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(3); }

// sub_160ff10  (orig 0x160ff10, compare)
bool main_f_160ff10(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(4); }

// sub_160ff20  (orig 0x160ff20, compare)
bool main_f_160ff20(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 276)) == (uint64_t)(2); }

// sub_160ff30  (orig 0x160ff30, getter)
uint8_t main_f_160ff30(void* a0) { return *(uint8_t*)((char*)(a0) + 280); }

// sub_160ff40  (orig 0x160ff40, compare)
bool main_f_160ff40(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 280)) == (uint64_t)(0); }

// sub_160ff50  (orig 0x160ff50, setter)
void main_f_160ff50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 268) = a1; }

// sub_160ff60  (orig 0x160ff60, getter)
uint32_t main_f_160ff60(void* a0) { return *(uint32_t*)((char*)(a0) + 272); }

// sub_160ff70  (orig 0x160ff70, getter)
uint32_t main_f_160ff70(void* a0) { return *(uint32_t*)((char*)(a0) + 268); }

// sub_160ff80  (orig 0x160ff80, straight)
void main_f_160ff80(void* a0) {
    *(uint8_t*)((char*)(a0) + 280) = (uint8_t)(1);
}

// sub_160ff90  (orig 0x160ff90, setter)
void main_f_160ff90(void* a0) { *(uint8_t*)((char*)(a0) + 280) = 0; }

// sub_160ffa0  (orig 0x160ffa0, getter)
uint32_t main_f_160ffa0(void* a0) { return *(uint32_t*)((char*)(a0) + 276); }

// sub_160ffb0  (orig 0x160ffb0, getter)
uint32_t main_f_160ffb0(void* a0) { return *(uint32_t*)((char*)(a0) + 284); }

// sub_160ffc0  (orig 0x160ffc0, getter)
uint32_t main_f_160ffc0(void* a0) { return *(uint32_t*)((char*)(a0) + 304); }

// sub_160ffe0  (orig 0x160ffe0, getter)
uint64_t main_f_160ffe0(void* a0) { return *(uint64_t*)((char*)(a0) + 496); }

// sub_1610010  (orig 0x1610010, getter)
uint32_t main_f_1610010(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1610020  (orig 0x1610020, setter)
void main_f_1610020(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_1610030  (orig 0x1610030, ptr_add)
void* main_f_1610030(void* a0) { return (char*)a0 + 16; }

// sub_1610040  (orig 0x1610040, ptr_add)
void* main_f_1610040(void* a0) { return (char*)a0 + 16; }

// sub_1610050  (orig 0x1610050, getter)
uint32_t main_f_1610050(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1610110  (orig 0x1610110, mov_ret)
uint64_t main_f_1610110() { return 0; }

// ComponentState  (orig 0x1610480, strlit-ret)
const char *main_f_1610480() { static const char s[] = "ComponentState"; __asm__ volatile("" ::: "memory"); return s; }

// sub_16104f0  (orig 0x16104f0, ret_only)
void main_f_16104f0() {}

// sub_1610650  (orig 0x1610650, tailcall)
void main_f_1610650() { main::sub_15b6e10(); }

// sub_1610950  (orig 0x1610950, tailcall)
void main_f_1610950() { main::sub_15b6e10(); }

// sub_1610960  (orig 0x1610960, tailcall)
void main_f_1610960() { main::sub_15b6e10(); }

// sub_1611c30  (orig 0x1611c30, tailcall)
void main_f_1611c30() { main::sub_15b6e10(); }

// sub_1611c40  (orig 0x1611c40, mov_ret)
uint32_t main_f_1611c40() { return 1; }

// sub_1611c50  (orig 0x1611c50, ret_only)
void main_f_1611c50() {}

// sub_1611c60  (orig 0x1611c60, ret_only)
void main_f_1611c60() {}

// sub_1611c70  (orig 0x1611c70, ret_only)
void main_f_1611c70() {}

// sub_1611c80  (orig 0x1611c80, ret_only)
void main_f_1611c80() {}

// sub_1611c90  (orig 0x1611c90, mov_ret)
uint64_t main_f_1611c90() { return 0; }

// sub_1611ca0  (orig 0x1611ca0, ret_only)
void main_f_1611ca0() {}

// sub_1611cb0  (orig 0x1611cb0, ret_only)
void main_f_1611cb0() {}

// sub_1612510  (orig 0x1612510, ret_only)
void main_f_1612510() {}

// sub_1612520  (orig 0x1612520, tailcall)
void main_f_1612520() { main::sub_15b6e10(); }

// sub_1612550  (orig 0x1612550, tailcall)
void main_f_1612550() { main::sub_15b6e10(); }

// sub_1612690  (orig 0x1612690, getter)
uint64_t main_f_1612690(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_16126a0  (orig 0x16126a0, setter)
void main_f_16126a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1612d60  (orig 0x1612d60, getter)
uint64_t main_f_1612d60(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1612d70  (orig 0x1612d70, setter)
void main_f_1612d70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1612f20  (orig 0x1612f20, getter)
uint64_t main_f_1612f20(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1612f30  (orig 0x1612f30, setter)
void main_f_1612f30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1613bb0  (orig 0x1613bb0, getter)
uint64_t main_f_1613bb0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1613bc0  (orig 0x1613bc0, setter)
void main_f_1613bc0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1614430  (orig 0x1614430, tailcall)
void main_f_1614430() { main::sub_15b6e10(); }

// sub_1614b20  (orig 0x1614b20, getter)
uint64_t main_f_1614b20(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1614b30  (orig 0x1614b30, setter)
void main_f_1614b30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

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

// sub_1616be0  (orig 0x1616be0, mov_ret)
uint32_t main_f_1616be0() { return 0; }

// sub_1616bf0  (orig 0x1616bf0, ret_only)
void main_f_1616bf0() {}

// sub_1616c00  (orig 0x1616c00, tailcall)
void main_f_1616c00() { main::sub_15b6e10(); }

// sub_1617390  (orig 0x1617390, getter)
uint8_t main_f_1617390(void* a0) { return *(uint8_t*)((char*)(a0) + 20); }

// sub_1617790  (orig 0x1617790, mov_ret)
uint32_t main_f_1617790() { return 1; }

// sub_16179b0  (orig 0x16179b0, mov_ret)
uint32_t main_f_16179b0() { return 1; }

// sub_1617a00  (orig 0x1617a00, mov_ret)
uint32_t main_f_1617a00() { return 1; }

// sub_1617a10  (orig 0x1617a10, mov_ret)
uint32_t main_f_1617a10() { return 1; }

// sub_1617c70  (orig 0x1617c70, mov_ret)
uint32_t main_f_1617c70() { return 1; }

// sub_1617c80  (orig 0x1617c80, mov_ret)
uint32_t main_f_1617c80() { return 0; }

// sub_1617c90  (orig 0x1617c90, mov_ret)
uint32_t main_f_1617c90() { return 1; }

// sub_1617d90  (orig 0x1617d90, mov_ret)
uint32_t main_f_1617d90() { return 1; }

// sub_1617db0  (orig 0x1617db0, mov_ret)
uint32_t main_f_1617db0() { return 1; }

// sub_16180c0  (orig 0x16180c0, mov_ret)
uint32_t main_f_16180c0() { return 1; }

// sub_16180d0  (orig 0x16180d0, mov_ret)
uint32_t main_f_16180d0() { return 1; }

// sub_16184e0  (orig 0x16184e0, ret_only)
void main_f_16184e0() {}

// sub_16184f0  (orig 0x16184f0, tailcall)
void main_f_16184f0() { main::sub_15b6e10(); }

// sub_1618570  (orig 0x1618570, setter)
void main_f_1618570(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; }

// sub_1618830  (orig 0x1618830, getter)
uint32_t main_f_1618830(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_1618840  (orig 0x1618840, getter)
uint32_t main_f_1618840(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_1618850  (orig 0x1618850, getter)
uint32_t main_f_1618850(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_1618860  (orig 0x1618860, setter-chain)
void main_f_1618860(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_1618a20  (orig 0x1618a20, getter)
uint32_t main_f_1618a20(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_161cea0  (orig 0x161cea0, ptr_add)
void* main_f_161cea0(void* a0) { return (char*)a0 + 8; }

// sub_1621f60  (orig 0x1621f60, tailcall)
void main_f_1621f60() { main::sub_15b6e10(); }

// sub_1621f70  (orig 0x1621f70, mov_ret)
uint32_t main_f_1621f70() { return 0; }

// sub_1621f80  (orig 0x1621f80, mov_ret)
uint64_t main_f_1621f80() { return 0; }

// sub_1621f90  (orig 0x1621f90, getter)
uint8_t main_f_1621f90(void* a0) { return *(uint8_t*)((char*)(a0) + 21); }

// sub_1621fa0  (orig 0x1621fa0, mov_ret)
uint32_t main_f_1621fa0() { return 1; }

// sub_1621fb0  (orig 0x1621fb0, ret_only)
void main_f_1621fb0() {}

// sub_1621fc0  (orig 0x1621fc0, getter)
uint32_t main_f_1621fc0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// BerkeleySocketDriver_BerkeleySocket  (orig 0x1621fd0, strlit-ret)
const char *main_f_1621fd0() { static const char s[] = "BerkeleySocketDriver::BerkeleySocket"; __asm__ volatile("" ::: "memory"); return s; }

// sub_1621fe0  (orig 0x1621fe0, ret_only)
void main_f_1621fe0() {}

// sub_1622050  (orig 0x1622050, getter)
uint8_t main_f_1622050(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_16220a0  (orig 0x16220a0, ret_only)
void main_f_16220a0() {}

// sub_16220b0  (orig 0x16220b0, ret_only)
void main_f_16220b0() {}

// sub_16220c0  (orig 0x16220c0, ret_only)
void main_f_16220c0() {}

// sub_16220d0  (orig 0x16220d0, ret_only)
void main_f_16220d0() {}

// sub_16220e0  (orig 0x16220e0, ret_only)
void main_f_16220e0() {}

// sub_16220f0  (orig 0x16220f0, mov_ret)
uint32_t main_f_16220f0() { return 0; }

// sub_1622100  (orig 0x1622100, ret_only)
void main_f_1622100() {}

// sub_1622110  (orig 0x1622110, mov_ret)
uint32_t main_f_1622110() { return 0; }

// sub_1622120  (orig 0x1622120, mov_ret)
uint32_t main_f_1622120() { return 1; }

// ClientWebSocketDriver_ClientWebSocket  (orig 0x1622130, strlit-ret)
const char *main_f_1622130() { static const char s[] = "ClientWebSocketDriver::ClientWebSocket"; __asm__ volatile("" ::: "memory"); return s; }

// sub_1622150  (orig 0x1622150, mov_ret)
uint32_t main_f_1622150() { return 0; }

// sub_1622160  (orig 0x1622160, mov_ret)
uint32_t main_f_1622160() { return 0; }

// sub_1622170  (orig 0x1622170, mov_ret)
uint32_t main_f_1622170() { return 1; }

// sub_1622180  (orig 0x1622180, mov_ret)
uint32_t main_f_1622180() { return 1; }

// sub_1622190  (orig 0x1622190, mov_ret)
uint32_t main_f_1622190() { return 0; }

// sub_16221a0  (orig 0x16221a0, mov_ret)
uint32_t main_f_16221a0() { return -1; }

// SocketDriver_Socket  (orig 0x16221b0, strlit-ret)
const char *main_f_16221b0() { static const char s[] = "SocketDriver::Socket"; __asm__ volatile("" ::: "memory"); return s; }

// sub_16221c0  (orig 0x16221c0, ret_only)
void main_f_16221c0() {}

// sub_1622470  (orig 0x1622470, ret_only)
void main_f_1622470() {}

// sub_1622480  (orig 0x1622480, tailcall)
void main_f_1622480() { main::sub_15b6e10(); }

// sub_16224d0  (orig 0x16224d0, ret_only)
void main_f_16224d0() {}

// sub_16224f0  (orig 0x16224f0, ret_only)
void main_f_16224f0() {}

// sub_16228d0  (orig 0x16228d0, getter)
uint64_t main_f_16228d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_16228e0  (orig 0x16228e0, setter)
void main_f_16228e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1622ba0  (orig 0x1622ba0, ret_only)
void main_f_1622ba0() {}

// sub_1622bb0  (orig 0x1622bb0, tailcall)
void main_f_1622bb0() { main::sub_15b6e10(); }

// sub_1622bd0  (orig 0x1622bd0, ret_only)
void main_f_1622bd0() {}

// sub_1622be0  (orig 0x1622be0, tailcall)
void main_f_1622be0() { main::sub_15b6e10(); }

// sub_16234f0  (orig 0x16234f0, ret_only)
void main_f_16234f0() {}

// sub_1624b10  (orig 0x1624b10, ret_only)
void main_f_1624b10() {}

// sub_1624b20  (orig 0x1624b20, tailcall)
void main_f_1624b20() { main::sub_15b6e10(); }

// sub_1624bb0  (orig 0x1624bb0, ret_only)
void main_f_1624bb0() {}

// sub_1624bc0  (orig 0x1624bc0, tailcall)
void main_f_1624bc0() { main::sub_15b6e10(); }

// sub_1624c10  (orig 0x1624c10, ret_only)
void main_f_1624c10() {}

// sub_1624c20  (orig 0x1624c20, tailcall)
void main_f_1624c20() { main::sub_15b6e10(); }

// sub_1626b00  (orig 0x1626b00, getter)
uint8_t main_f_1626b00(void* a0) { return *(uint8_t*)((char*)(a0) + 516); }

// sub_1626e50  (orig 0x1626e50, mov_ret)
uint32_t main_f_1626e50() { return 1; }

// sub_1626e80  (orig 0x1626e80, ret_only)
void main_f_1626e80() {}

// sub_1626e90  (orig 0x1626e90, tailcall)
void main_f_1626e90() { main::sub_15b6e10(); }

// sub_1627140  (orig 0x1627140, getter)
uint8_t main_f_1627140(void* a0) { return *(uint8_t*)((char*)(a0) + 32); }

// sub_162a8c0  (orig 0x162a8c0, ret_only)
void main_f_162a8c0() {}

// sub_162a8e0  (orig 0x162a8e0, ret_only)
void main_f_162a8e0() {}

// sub_162a8f0  (orig 0x162a8f0, setter)
void main_f_162a8f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 592) = a1; }

// sub_162bf70  (orig 0x162bf70, setter)
void main_f_162bf70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 112) = a1; }

// sub_162bf80  (orig 0x162bf80, getter)
uint8_t main_f_162bf80(void* a0) { return *(uint8_t*)((char*)(a0) + 32); }

// sub_162c010  (orig 0x162c010, getter)
uint8_t main_f_162c010(void* a0) { return *(uint8_t*)((char*)(a0) + 33); }

// sub_162c180  (orig 0x162c180, tailcall)
void main_f_162c180() { main::sub_162cae0(); }

// sub_162cca0  (orig 0x162cca0, getter-chain)
uint64_t main_f_162cca0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0))))); }

// sub_162ccb0  (orig 0x162ccb0, getter-chain)
uint64_t main_f_162ccb0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 8)))); }

// sub_162ccc0  (orig 0x162ccc0, compare)
bool main_f_162ccc0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(0); }

// sub_162cd20  (orig 0x162cd20, ret_only)
void main_f_162cd20() {}

// sub_162cd80  (orig 0x162cd80, ret_only)
void main_f_162cd80() {}

// sub_162d870  (orig 0x162d870, tailcall)
void main_f_162d870() { main::sub_15b6e10(); }

// sub_162d880  (orig 0x162d880, ret_only)
void main_f_162d880() {}

// sub_162d890  (orig 0x162d890, tailcall)
void main_f_162d890() { main::sub_15b6e10(); }

// sub_162dae0  (orig 0x162dae0, getter)
uint64_t main_f_162dae0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162daf0  (orig 0x162daf0, setter)
void main_f_162daf0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162ddd0  (orig 0x162ddd0, getter)
uint64_t main_f_162ddd0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162dde0  (orig 0x162dde0, setter)
void main_f_162dde0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162dfd0  (orig 0x162dfd0, getter)
uint64_t main_f_162dfd0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162dfe0  (orig 0x162dfe0, setter)
void main_f_162dfe0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162e190  (orig 0x162e190, getter)
uint64_t main_f_162e190(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162e1a0  (orig 0x162e1a0, setter)
void main_f_162e1a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162e350  (orig 0x162e350, getter)
uint64_t main_f_162e350(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_162e360  (orig 0x162e360, setter)
void main_f_162e360(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_162ee30  (orig 0x162ee30, ret_only)
void main_f_162ee30() {}

// sub_162ee40  (orig 0x162ee40, ret_only)
void main_f_162ee40() {}

// sub_162ee50  (orig 0x162ee50, tailcall)
void main_f_162ee50() { main::sub_15b6e10(); }

// sub_162eec0  (orig 0x162eec0, getter)
uint64_t main_f_162eec0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_162ef90  (orig 0x162ef90, tailcall)
void main_f_162ef90() { main::sub_15cac40(); }

// sub_162efb0  (orig 0x162efb0, tailcall)
void main_f_162efb0() { main_f_15bb240(); }

// sub_162fa60  (orig 0x162fa60, tailcall)
void main_f_162fa60() { main::sub_15b6e10(); }

// sub_162fef0  (orig 0x162fef0, setter-chain)
void main_f_162fef0(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint8_t*)((char*)(a0) + 24) = 0; }

// sub_16305b0  (orig 0x16305b0, setter-chain)
void main_f_16305b0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint64_t*)((char*)(a0) + 8) = a2; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint8_t*)((char*)(a0) + 24) = 0; }

// sub_1630750  (orig 0x1630750, ret_only)
void main_f_1630750() {}

// sub_1630a10  (orig 0x1630a10, setter)
void main_f_1630a10(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 72) = a1; }

// sub_1630cb0  (orig 0x1630cb0, ret_only)
void main_f_1630cb0() {}

// sub_16317b0  (orig 0x16317b0, ret_only)
void main_f_16317b0() {}

// sub_16317c0  (orig 0x16317c0, tailcall)
void main_f_16317c0() { main::sub_15b6e10(); }

// sub_1632860  (orig 0x1632860, ret_only)
void main_f_1632860() {}

// sub_1633bd0  (orig 0x1633bd0, setter)
void main_f_1633bd0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 80) = a1; }

// sub_1634130  (orig 0x1634130, ret_only)
void main_f_1634130() {}

// sub_1634590  (orig 0x1634590, straight)
void main_f_1634590(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 12) = *(uint32_t*)((char*)(a1) + 12);
    *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a1) + 16);
}

// sub_1634b90  (orig 0x1634b90, ret_only)
void main_f_1634b90() {}

// sub_1634ba0  (orig 0x1634ba0, ret_only)
void main_f_1634ba0() {}

// sub_1634bb0  (orig 0x1634bb0, ret_only)
void main_f_1634bb0() {}

// sub_1635d80  (orig 0x1635d80, ret_only)
void main_f_1635d80() {}

// sub_1637270  (orig 0x1637270, getter)
uint8_t main_f_1637270(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_1638190  (orig 0x1638190, mov_ret)
uint32_t main_f_1638190() { return 19; }

// CallProtocolMethod  (orig 0x16381a0, strlit-ret)
const char *main_f_16381a0() { static const char s[] = "CallProtocolMethod"; __asm__ volatile("" ::: "memory"); return s; }

// sub_16381b0  (orig 0x16381b0, ret_only)
void main_f_16381b0() {}

// sub_16381f0  (orig 0x16381f0, ret_only)
void main_f_16381f0() {}

// sub_1638200  (orig 0x1638200, ret_only)
void main_f_1638200() {}

// sub_1638210  (orig 0x1638210, ret_only)
void main_f_1638210() {}

// sub_1638320  (orig 0x1638320, ret_only)
void main_f_1638320() {}

// sub_1638500  (orig 0x1638500, ret_only)
void main_f_1638500() {}

// sub_1638860  (orig 0x1638860, tailcall)
void main_f_1638860() { main::sub_15b6e10(); }

// sub_1639140  (orig 0x1639140, getter)
uint64_t main_f_1639140(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639150  (orig 0x1639150, setter)
void main_f_1639150(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639430  (orig 0x1639430, getter)
uint64_t main_f_1639430(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639440  (orig 0x1639440, setter)
void main_f_1639440(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639720  (orig 0x1639720, getter)
uint64_t main_f_1639720(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639730  (orig 0x1639730, setter)
void main_f_1639730(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639a10  (orig 0x1639a10, getter)
uint64_t main_f_1639a10(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639a20  (orig 0x1639a20, setter)
void main_f_1639a20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1639d00  (orig 0x1639d00, getter)
uint64_t main_f_1639d00(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1639d10  (orig 0x1639d10, setter)
void main_f_1639d10(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_163a5d0  (orig 0x163a5d0, ret_only)
void main_f_163a5d0() {}

// sub_163e120  (orig 0x163e120, tailcall)
void main_f_163e120() { main::sub_1636d00(); }

// sub_1640e90  (orig 0x1640e90, mov_ret)
uint32_t main_f_1640e90() { return 0; }

// sub_1640ea0  (orig 0x1640ea0, ret_only)
void main_f_1640ea0() {}

// sub_1640eb0  (orig 0x1640eb0, mov_ret)
uint64_t main_f_1640eb0() { return 0; }

// sub_1640ec0  (orig 0x1640ec0, mov_ret)
uint32_t main_f_1640ec0() { return 0; }

// sub_1640ed0  (orig 0x1640ed0, mov_ret)
uint32_t main_f_1640ed0() { return 0; }

// sub_1641680  (orig 0x1641680, ret_only)
void main_f_1641680() {}

// sub_1641690  (orig 0x1641690, tailcall)
void main_f_1641690() { main::sub_15b6e10(); }

// sub_1647f60  (orig 0x1647f60, ret_only)
void main_f_1647f60() {}

// sub_1647f70  (orig 0x1647f70, tailcall)
void main_f_1647f70() { main::sub_15b6e10(); }

// sub_1647f80  (orig 0x1647f80, ret_only)
void main_f_1647f80() {}

// sub_1647f90  (orig 0x1647f90, tailcall)
void main_f_1647f90() { main::sub_15b6e10(); }

// prudps_2  (orig 0x164ac60, strlit-ret)
const char *main_f_164ac60() { static const char s[] = "prudps"; __asm__ volatile("" ::: "memory"); return s; }

// sub_164ad60  (orig 0x164ad60, mov_ret)
uint64_t main_f_164ad60() { return 0; }

// sub_164add0  (orig 0x164add0, mov_ret)
uint32_t main_f_164add0() { return 0; }

// sub_164ade0  (orig 0x164ade0, ret_only)
void main_f_164ade0() {}

// sub_164af80  (orig 0x164af80, ret_only)
void main_f_164af80() {}

// sub_164b560  (orig 0x164b560, ret_only)
void main_f_164b560() {}

// sub_164b620  (orig 0x164b620, mov_ret)
uint32_t main_f_164b620() { return 21; }

// RendezVousLogin  (orig 0x164b630, strlit-ret)
const char *main_f_164b630() { static const char s[] = "RendezVousLogin"; __asm__ volatile("" ::: "memory"); return s; }

// sub_164b640  (orig 0x164b640, ret_only)
void main_f_164b640() {}

// sub_164b650  (orig 0x164b650, mov_ret)
uint32_t main_f_164b650() { return 22; }

// RendezVousLogout  (orig 0x164b660, strlit-ret)
const char *main_f_164b660() { static const char s[] = "RendezVousLogout"; __asm__ volatile("" ::: "memory"); return s; }

// sub_164b670  (orig 0x164b670, ret_only)
void main_f_164b670() {}

// sub_164b680  (orig 0x164b680, ret_only)
void main_f_164b680() {}

// sub_164b690  (orig 0x164b690, mov_ret)
uint32_t main_f_164b690() { return 0; }

// sub_164b6a0  (orig 0x164b6a0, mov_ret)
uint64_t main_f_164b6a0() { return 0; }

// sub_164b6b0  (orig 0x164b6b0, ret_only)
void main_f_164b6b0() {}

// sub_164b6c0  (orig 0x164b6c0, mov_ret)
uint32_t main_f_164b6c0() { return 0; }

// sub_164b6d0  (orig 0x164b6d0, tailcall)
uint32_t main_f_164b6d0() { return main_f_15d81f0(); }

// sub_164b710  (orig 0x164b710, mov_ret)
uint32_t main_f_164b710() { return 0; }

// sub_164bf90  (orig 0x164bf90, getter)
uint64_t main_f_164bf90(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_164bfa0  (orig 0x164bfa0, setter)
void main_f_164bfa0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_164c190  (orig 0x164c190, ret_only)
void main_f_164c190() {}

// sub_164c1a0  (orig 0x164c1a0, ret_only)
void main_f_164c1a0() {}

// sub_164c1b0  (orig 0x164c1b0, tailcall)
void main_f_164c1b0() { main::sub_15b6e10(); }

// sub_164c330  (orig 0x164c330, ret_only)
void main_f_164c330() {}

// sub_164c340  (orig 0x164c340, tailcall)
void main_f_164c340() { main::sub_15b6e10(); }

// sub_164e5f0  (orig 0x164e5f0, ret_only)
void main_f_164e5f0() {}

// sub_164e820  (orig 0x164e820, ret_only)
void main_f_164e820() {}

// sub_164e830  (orig 0x164e830, ret_only)
void main_f_164e830() {}

// sub_164e840  (orig 0x164e840, ret_only)
void main_f_164e840() {}

// sub_164ea30  (orig 0x164ea30, ret_only)
void main_f_164ea30() {}

// sub_1650100  (orig 0x1650100, getter)
uint64_t main_f_1650100(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1650110  (orig 0x1650110, setter)
void main_f_1650110(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1650a60  (orig 0x1650a60, ret_only)
void main_f_1650a60() {}

// sub_1651310  (orig 0x1651310, getter)
uint64_t main_f_1651310(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1651320  (orig 0x1651320, setter)
void main_f_1651320(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1652460  (orig 0x1652460, ret_only)
void main_f_1652460() {}

// sub_1652470  (orig 0x1652470, getter)
uint32_t main_f_1652470(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_1652480  (orig 0x1652480, mov_ret)
uint32_t main_f_1652480() { return 119; }

// sub_1652490  (orig 0x1652490, setter)
void main_f_1652490(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_1652660  (orig 0x1652660, ret_only)
void main_f_1652660() {}

// sub_1652910  (orig 0x1652910, mov_ret)
uint64_t main_f_1652910() { return 0; }

// sub_1652920  (orig 0x1652920, tailcall)
void main_f_1652920() { main::sub_ce0(); }

// sub_1652930  (orig 0x1652930, ret_only)
void main_f_1652930() {}

// sub_1652990  (orig 0x1652990, ret_only)
void main_f_1652990() {}

// sub_1652d30  (orig 0x1652d30, ret_only)
void main_f_1652d30() {}

// sub_1652d40  (orig 0x1652d40, tailcall)
void main_f_1652d40() { main::sub_ce0(); }

// sub_1653bb0  (orig 0x1653bb0, ret_only)
void main_f_1653bb0() {}

// sub_1653bc0  (orig 0x1653bc0, tailcall)
void main_f_1653bc0() { main::sub_ce0(); }

// sub_1654290  (orig 0x1654290, ptr_add)
void* main_f_1654290(void* a0) { return (char*)a0 + 1392; }

// sub_1654870  (orig 0x1654870, getter)
uint8_t main_f_1654870(void* a0) { return *(uint8_t*)((char*)(a0) + 1424); }

// sub_1654880  (orig 0x1654880, setter)
void main_f_1654880(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1432) = a1; }

// sub_1654890  (orig 0x1654890, setter)
void main_f_1654890(void* a0) { *(uint64_t*)((char*)(a0) + 1432) = 0; }

// sub_16548a0  (orig 0x16548a0, getter)
uint8_t main_f_16548a0(void* a0) { return *(uint8_t*)((char*)(a0) + 1384); }

// sub_1655070  (orig 0x1655070, ret_only)
void main_f_1655070() {}

// sub_1655170  (orig 0x1655170, ret_only)
void main_f_1655170() {}

// sub_1655330  (orig 0x1655330, straight)
void main_f_1655330(void* a0) {
    *(uint8_t*)((char*)(a0) + 40) = (uint8_t)(1);
}

// sub_1655570  (orig 0x1655570, tailcall)
void main_f_1655570() { main::sub_ce0(); }

// sub_1657630  (orig 0x1657630, ret_only)
void main_f_1657630() {}

// sub_16580b0  (orig 0x16580b0, setter-chain)
void main_f_16580b0(void* a0) { *(void**)((char*)(a0)) = a0; *(void**)((char*)(a0) + 8) = a0; *(uint32_t*)((char*)(a0) + 16) = 0; }

// sub_16598a0  (orig 0x16598a0, mov_ret)
uint32_t main_f_16598a0() { return 16; }

// sub_1659bf0  (orig 0x1659bf0, mov_ret)
uint32_t main_f_1659bf0() { return 16; }

// sub_165af80  (orig 0x165af80, ret_only)
void main_f_165af80() {}

// sub_165ba30  (orig 0x165ba30, ret_only)
void main_f_165ba30() {}

// sub_165ba40  (orig 0x165ba40, ret_only)
void main_f_165ba40() {}

// sub_165baa0  (orig 0x165baa0, tailcall)
void main_f_165baa0() { main::sub_1655790(); }

// sub_165bab0  (orig 0x165bab0, ret_only)
void main_f_165bab0() {}

// sub_165bc60  (orig 0x165bc60, ret_only)
void main_f_165bc60() {}

// sub_165bc70  (orig 0x165bc70, tailcall)
void main_f_165bc70() { main::sub_ce0(); }

// sub_165bc80  (orig 0x165bc80, ret_only)
void main_f_165bc80() {}

// sub_165be70  (orig 0x165be70, getter)
uint64_t main_f_165be70(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_165be80  (orig 0x165be80, getter)
uint32_t main_f_165be80(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_165be90  (orig 0x165be90, getter)
uint64_t main_f_165be90(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_165c180  (orig 0x165c180, getter)
uint32_t main_f_165c180(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_165c5e0  (orig 0x165c5e0, ret_only)
void main_f_165c5e0() {}

// sub_165c5f0  (orig 0x165c5f0, tailcall)
void main_f_165c5f0() { main::sub_ce0(); }

// sub_165ca00  (orig 0x165ca00, setter)
void main_f_165ca00(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0)) = a1; }

// sub_165ca10  (orig 0x165ca10, getter)
uint8_t main_f_165ca10(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_165d640  (orig 0x165d640, mov_ret)
uint32_t main_f_165d640() { return 16; }

// sub_165d650  (orig 0x165d650, mov_ret)
uint32_t main_f_165d650() { return 64; }

// sub_165d900  (orig 0x165d900, straight)
void main_f_165d900(void* a0) {
    *(uint8_t*)((char*)(a0) + 32) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 136) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 240) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 344) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 448) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 552) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 656) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 760) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 864) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 968) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 1072) = (uint8_t)(1);
    *(uint8_t*)((char*)(a0) + 1176) = (uint8_t)(1);
}

// sub_165da10  (orig 0x165da10, ret_only)
void main_f_165da10() {}

// sub_165dae0  (orig 0x165dae0, ret_only)
void main_f_165dae0() {}

// sub_165dba0  (orig 0x165dba0, setter-chain)
void main_f_165dba0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_165fea0  (orig 0x165fea0, ret_only)
void main_f_165fea0() {}

// sub_165ffd0  (orig 0x165ffd0, setter)
void main_f_165ffd0(void* a0) { *(uint8_t*)((char*)(a0) + 8) = 0; }

// sub_1660970  (orig 0x1660970, ret_only)
void main_f_1660970() {}

// sub_16609a0  (orig 0x16609a0, ret_only)
void main_f_16609a0() {}

// sub_16609b0  (orig 0x16609b0, tailcall)
void main_f_16609b0() { main::sub_ce0(); }

// sub_16609c0  (orig 0x16609c0, mov_ret)
uint32_t main_f_16609c0() { return 32; }

// sub_1660a30  (orig 0x1660a30, ret_only)
void main_f_1660a30() {}

// sub_1660cb0  (orig 0x1660cb0, setter)
void main_f_1660cb0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_1661060  (orig 0x1661060, tailcall)
void main_f_1661060() { main::sub_16613e0(); }

// sub_1661340  (orig 0x1661340, mov_ret)
uint32_t main_f_1661340() { return 32; }

// sub_1661350  (orig 0x1661350, mov_ret)
uint32_t main_f_1661350() { return 64; }

// sub_1661510  (orig 0x1661510, setter-chain)
void main_f_1661510(void* a0) { *(uint64_t*)((char*)(a0) + 112) = 0; *(uint64_t*)((char*)(a0) + 120) = 0; *(uint32_t*)((char*)(a0) + 128) = 0; }

// sub_1661520  (orig 0x1661520, ret_only)
void main_f_1661520() {}

// sub_16615e0  (orig 0x16615e0, setter-chain)
void main_f_16615e0(void* a0) { *(uint64_t*)((char*)(a0) + 112) = 0; *(uint32_t*)((char*)(a0) + 120) = 0; }

// sub_1661af0  (orig 0x1661af0, tailcall)
void main_f_1661af0() { main_f_1723320(); }

// sub_1661d50  (orig 0x1661d50, getter)
uint32_t main_f_1661d50(void* a0) { return *(uint32_t*)((char*)(a0) + 432); }

// sub_1661d90  (orig 0x1661d90, getter)
uint32_t main_f_1661d90(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1661db0  (orig 0x1661db0, getter)
uint32_t main_f_1661db0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1661ec0  (orig 0x1661ec0, getter)
uint8_t main_f_1661ec0(void* a0) { return *(uint8_t*)((char*)(a0) + 436); }

// sub_1661ee0  (orig 0x1661ee0, ret_only)
void main_f_1661ee0() {}

// sub_16621d0  (orig 0x16621d0, getter)
uint64_t main_f_16621d0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_1662350  (orig 0x1662350, getter-chain)
uint8_t main_f_1662350(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 152); }

// sub_1662650  (orig 0x1662650, ptr_add)
void* main_f_1662650(void* a0) { return (char*)a0 + 8; }

// sub_1662680  (orig 0x1662680, ptr_add)
void* main_f_1662680(void* a0) { return (char*)a0 + 8; }

// sub_16626b0  (orig 0x16626b0, ret_only)
void main_f_16626b0() {}

// sub_16626c0  (orig 0x16626c0, getter)
uint32_t main_f_16626c0(void* a0) { return *(uint32_t*)((char*)(a0) + 1688); }

// sub_1662700  (orig 0x1662700, tailcall)
void main_f_1662700() { main_f_1724e60(); }

// sub_1662740  (orig 0x1662740, ret_only)
void main_f_1662740() {}

// sub_1662790  (orig 0x1662790, tailcall)
void main_f_1662790() { main_f_1731620(); }

// sub_16627d0  (orig 0x16627d0, mov_ret)
uint32_t main_f_16627d0() { return 16; }

// sub_16627e0  (orig 0x16627e0, mov_ret)
uint32_t main_f_16627e0() { return 48; }

// sub_16627f0  (orig 0x16627f0, mov_ret)
uint32_t main_f_16627f0() { return 1364; }

// sub_1662800  (orig 0x1662800, mov_ret)
uint32_t main_f_1662800() { return 1364; }

// sub_1662810  (orig 0x1662810, mov_ret)
uint32_t main_f_1662810() { return 400; }

// sub_1662820  (orig 0x1662820, tailcall)
void main_f_1662820() { main_f_16a8a60(); }

// sub_1662830  (orig 0x1662830, mov_ret)
uint32_t main_f_1662830() { return 0; }

// sub_1662840  (orig 0x1662840, mov_ret)
uint32_t main_f_1662840() { return 0; }

// sub_1662850  (orig 0x1662850, mov_ret)
uint32_t main_f_1662850() { return 2; }

// sub_1662860  (orig 0x1662860, mov_ret)
uint32_t main_f_1662860() { return 10; }

// sub_1662870  (orig 0x1662870, mov_ret)
uint32_t main_f_1662870() { return 0; }

// sub_1662880  (orig 0x1662880, mov_ret)
uint32_t main_f_1662880() { return 1; }

// sub_1662890  (orig 0x1662890, mov_ret)
uint32_t main_f_1662890() { return 0; }

// sub_16628a0  (orig 0x16628a0, mov_ret)
uint32_t main_f_16628a0() { return 0; }

// sub_16628b0  (orig 0x16628b0, mov_ret)
uint32_t main_f_16628b0() { return 1; }

// sub_16628c0  (orig 0x16628c0, mov_ret)
uint32_t main_f_16628c0() { return 1; }

// sub_1662c80  (orig 0x1662c80, tailcall)
void main_f_1662c80() { main::sub_16a8ef0(); }

// sub_1662c90  (orig 0x1662c90, tailcall)
void main_f_1662c90() { main::sub_16a8f30(); }

// sub_1662ca0  (orig 0x1662ca0, tailcall)
void main_f_1662ca0() { main::sub_16a8f70(); }

// sub_1662cb0  (orig 0x1662cb0, tailcall)
void main_f_1662cb0() { main::sub_16a8fb0(); }

// sub_1662cc0  (orig 0x1662cc0, tailcall)
void main_f_1662cc0() { main::sub_16a8ff0(); }

// sub_1662cd0  (orig 0x1662cd0, tailcall)
void main_f_1662cd0() { main::sub_16a9030(); }

// sub_1662e60  (orig 0x1662e60, tailcall)
void main_f_1662e60() { main::sub_16a8cf0(); }

// sub_1662e70  (orig 0x1662e70, tailcall)
void main_f_1662e70() { main::sub_16a8d30(); }

// sub_1662e80  (orig 0x1662e80, tailcall)
void main_f_1662e80() { main::sub_16a8c70(); }

// sub_1662e90  (orig 0x1662e90, tailcall)
void main_f_1662e90() { main::sub_16a8cb0(); }

// sub_1662ea0  (orig 0x1662ea0, tailcall)
void main_f_1662ea0() { main::sub_16a8d70(); }

// sub_1662eb0  (orig 0x1662eb0, tailcall)
void main_f_1662eb0() { main::sub_16a8db0(); }

// sub_1662f40  (orig 0x1662f40, tailcall)
void main_f_1662f40() { main::sub_16a8e70(); }

// sub_1662f50  (orig 0x1662f50, tailcall)
void main_f_1662f50() { main::sub_16a8eb0(); }

// sub_16635f0  (orig 0x16635f0, ret_only)
void main_f_16635f0() {}

// sub_1663860  (orig 0x1663860, getter)
uint64_t main_f_1663860(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1663870  (orig 0x1663870, getter)
uint64_t main_f_1663870(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_16638a0  (orig 0x16638a0, getter)
uint16_t main_f_16638a0(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_16638b0  (orig 0x16638b0, getter)
uint16_t main_f_16638b0(void* a0) { return *(uint16_t*)((char*)(a0) + 10); }

// sub_1663d40  (orig 0x1663d40, setter)
void main_f_1663d40(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 176) = a1; }

// sub_1663d50  (orig 0x1663d50, setter)
void main_f_1663d50(void* a0) { *(uint64_t*)((char*)(a0) + 176) = 0; }

// sub_1664360  (orig 0x1664360, tailcall)
void main_f_1664360() { main::sub_1664290(); }

// sub_1667420  (orig 0x1667420, getter)
uint32_t main_f_1667420(void* a0) { return *(uint32_t*)((char*)(a0) + 5832L); }

// sub_1667430  (orig 0x1667430, ptr_add)
void* main_f_1667430(void* a0) { return (char*)a0 + 24; }

// sub_1667440  (orig 0x1667440, ptr_add)
void* main_f_1667440(void* a0) { return (char*)a0 + 2304; }

// sub_1667450  (orig 0x1667450, getter)
uint64_t main_f_1667450(void* a0) { return *(uint64_t*)((char*)(a0) + 5824L); }

// sub_1667490  (orig 0x1667490, setter)
void main_f_1667490(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 5836L) = a1; }

// sub_16674a0  (orig 0x16674a0, setter)
void main_f_16674a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 5840L) = a1; }

// sub_16675d0  (orig 0x16675d0, getter)
uint64_t main_f_16675d0(void* a0) { return *(uint64_t*)((char*)(a0) + 5824L); }

// sub_16676b0  (orig 0x16676b0, tailcall)
void main_f_16676b0() { main::sub_ce0(); }

// sub_1667c60  (orig 0x1667c60, ret_only)
void main_f_1667c60() {}

// sub_1667cd0  (orig 0x1667cd0, tailcall)
void main_f_1667cd0() { main::sub_1723b80(); }

// sub_1668f30  (orig 0x1668f30, ret_only)
void main_f_1668f30() {}

// sub_1668f40  (orig 0x1668f40, ret_only)
void main_f_1668f40() {}

// sub_1668f50  (orig 0x1668f50, getter)
uint32_t main_f_1668f50(void* a0) { return *(uint32_t*)((char*)(a0) + 272); }

// sub_166a430  (orig 0x166a430, ret_only)
void main_f_166a430() {}

// sub_166a440  (orig 0x166a440, mov_ret)
uint32_t main_f_166a440() { return 0; }

// sub_166a450  (orig 0x166a450, ret_only)
void main_f_166a450() {}

// sub_166a580  (orig 0x166a580, ret_only)
void main_f_166a580() {}

// sub_166a590  (orig 0x166a590, ret_only)
void main_f_166a590() {}

// sub_166a5a0  (orig 0x166a5a0, ret_only)
void main_f_166a5a0() {}

// sub_166a5b0  (orig 0x166a5b0, ret_only)
void main_f_166a5b0() {}

// sub_166a5f0  (orig 0x166a5f0, tailcall)
void main_f_166a5f0() { main::sub_17263e0(); }

// sub_166a660  (orig 0x166a660, ret_only)
void main_f_166a660() {}

// sub_166a670  (orig 0x166a670, mov_ret)
uint32_t main_f_166a670() { return 0; }

// sub_166a6f0  (orig 0x166a6f0, tailcall)
void main_f_166a6f0() { main::sub_17229e0(); }

// sub_166ae60  (orig 0x166ae60, ret_only)
void main_f_166ae60() {}

// sub_166aea0  (orig 0x166aea0, tailcall)
void main_f_166aea0() { main::sub_1723440(); }

// sub_166b0a0  (orig 0x166b0a0, tailcall)
void main_f_166b0a0() { main::sub_1723a90(); }

// sub_166b0b0  (orig 0x166b0b0, ret_only)
void main_f_166b0b0() {}

// sub_166b640  (orig 0x166b640, ret_only)
void main_f_166b640() {}

// sub_166cad0  (orig 0x166cad0, ret_only)
void main_f_166cad0() {}

// sub_166cae0  (orig 0x166cae0, getter)
uint32_t main_f_166cae0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_166caf0  (orig 0x166caf0, ret_only)
void main_f_166caf0() {}

// sub_166cb40  (orig 0x166cb40, ret_only)
void main_f_166cb40() {}

// sub_166cb50  (orig 0x166cb50, tailcall)
void main_f_166cb50() { main::sub_ce0(); }

// sub_166d0f0  (orig 0x166d0f0, straight)
void main_f_166d0f0(void* a0) {
    *(uint32_t*)((char*)(a0) + 688) = 3;
}

// sub_166d2d0  (orig 0x166d2d0, ret_only)
void main_f_166d2d0() {}

// sub_166d340  (orig 0x166d340, mov_ret)
uint32_t main_f_166d340() { return 0; }

// sub_166d370  (orig 0x166d370, getter)
uint8_t main_f_166d370(void* a0) { return *(uint8_t*)((char*)(a0) + 552); }

// sub_166d380  (orig 0x166d380, getter)
uint8_t main_f_166d380(void* a0) { return *(uint8_t*)((char*)(a0) + 554); }

// sub_166d390  (orig 0x166d390, getter)
uint8_t main_f_166d390(void* a0) { return *(uint8_t*)((char*)(a0) + 553); }

// sub_166d3a0  (orig 0x166d3a0, getter)
uint8_t main_f_166d3a0(void* a0) { return *(uint8_t*)((char*)(a0) + 564); }

// sub_166d3b0  (orig 0x166d3b0, getter)
uint8_t main_f_166d3b0(void* a0) { return *(uint8_t*)((char*)(a0) + 641); }

// sub_166d3f0  (orig 0x166d3f0, tailcall)
void main_f_166d3f0() { main_f_16a3bd0(); }

// sub_166d890  (orig 0x166d890, ret_only)
void main_f_166d890() {}

// sub_166d8e0  (orig 0x166d8e0, tailcall)
void main_f_166d8e0() { main::sub_1735e30(); }

// sub_166dd10  (orig 0x166dd10, ret_only)
void main_f_166dd10() {}

// sub_166dd70  (orig 0x166dd70, ret_only)
void main_f_166dd70() {}

// sub_166de50  (orig 0x166de50, ret_only)
void main_f_166de50() {}

// sub_166e080  (orig 0x166e080, setter)
void main_f_166e080(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 544) = a1; }

// sub_166e090  (orig 0x166e090, setter)
void main_f_166e090(void* a0) { *(uint64_t*)((char*)(a0) + 544) = 0; }

// sub_166eba0  (orig 0x166eba0, mov_ret)
uint32_t main_f_166eba0() { return 16; }

// sub_166ebb0  (orig 0x166ebb0, mov_ret)
uint32_t main_f_166ebb0() { return 16; }

// sub_166ebc0  (orig 0x166ebc0, mov_ret)
uint32_t main_f_166ebc0() { return 1; }

// sub_166ebd0  (orig 0x166ebd0, mov_ret)
uint32_t main_f_166ebd0() { return 1; }

// sub_166ebe0  (orig 0x166ebe0, mov_ret)
uint32_t main_f_166ebe0() { return 1; }

// sub_166ebf0  (orig 0x166ebf0, mov_ret)
uint32_t main_f_166ebf0() { return 1; }

// sub_16709f0  (orig 0x16709f0, getter)
uint8_t main_f_16709f0(void* a0) { return *(uint8_t*)((char*)(a0) + 417); }

// sub_1670a10  (orig 0x1670a10, mov_ret)
uint32_t main_f_1670a10() { return 1; }

// sub_1670a20  (orig 0x1670a20, ret_only)
void main_f_1670a20() {}

// sub_1670a30  (orig 0x1670a30, ret_only)
void main_f_1670a30() {}

// sub_16711e0  (orig 0x16711e0, compare)
bool main_f_16711e0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 4940L)) != (uint64_t)(0); }

// sub_1673e70  (orig 0x1673e70, ret_only)
void main_f_1673e70() {}

// sub_1674e80  (orig 0x1674e80, mov_ret)
uint32_t main_f_1674e80() { return 68; }

// sub_1674e90  (orig 0x1674e90, mov_ret)
uint32_t main_f_1674e90() { return 0; }

// sub_1674ea0  (orig 0x1674ea0, getter)
uint64_t main_f_1674ea0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_1674f80  (orig 0x1674f80, mov_ret)
uint32_t main_f_1674f80() { return 12; }

// sub_16751c0  (orig 0x16751c0, mov_ret)
uint32_t main_f_16751c0() { return 16; }

// sub_16756c0  (orig 0x16756c0, mov_ret)
uint32_t main_f_16756c0() { return 16; }

// sub_1675be0  (orig 0x1675be0, mov_ret)
uint32_t main_f_1675be0() { return 12; }

// sub_1675c80  (orig 0x1675c80, tailcall)
void main_f_1675c80() { main::sub_ce0(); }

// sub_1675c90  (orig 0x1675c90, tailcall)
void main_f_1675c90() { main::sub_ce0(); }

// sub_1675d00  (orig 0x1675d00, tailcall)
void main_f_1675d00() { main::sub_ce0(); }

// sub_1675d10  (orig 0x1675d10, tailcall)
void main_f_1675d10() { main::sub_ce0(); }

// sub_1675d20  (orig 0x1675d20, tailcall)
void main_f_1675d20() { main::sub_ce0(); }

// sub_16777e0  (orig 0x16777e0, ret_only)
void main_f_16777e0() {}

// sub_1678240  (orig 0x1678240, getter)
uint16_t main_f_1678240(void* a0) { return *(uint16_t*)((char*)(a0) + 58); }

// sub_1678260  (orig 0x1678260, getter)
uint32_t main_f_1678260(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1678270  (orig 0x1678270, getter)
uint32_t main_f_1678270(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1678280  (orig 0x1678280, getter)
uint16_t main_f_1678280(void* a0) { return *(uint16_t*)((char*)(a0) + 24); }

// sub_1678290  (orig 0x1678290, getter)
uint16_t main_f_1678290(void* a0) { return *(uint16_t*)((char*)(a0) + 26); }

// sub_16782a0  (orig 0x16782a0, getter)
uint16_t main_f_16782a0(void* a0) { return *(uint16_t*)((char*)(a0) + 28); }

// sub_16782b0  (orig 0x16782b0, getter)
uint8_t main_f_16782b0(void* a0) { return *(uint8_t*)((char*)(a0) + 30); }

// sub_16782c0  (orig 0x16782c0, setter)
void main_f_16782c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 16) = a1; }

// sub_16782d0  (orig 0x16782d0, setter)
void main_f_16782d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_16782e0  (orig 0x16782e0, setter)
void main_f_16782e0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 24) = a1; }

// sub_16782f0  (orig 0x16782f0, setter)
void main_f_16782f0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 26) = a1; }

// sub_1678300  (orig 0x1678300, setter)
void main_f_1678300(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 28) = a1; }

// sub_1678560  (orig 0x1678560, ptr_add)
void* main_f_1678560(void* a0) { return (char*)a0 + 480; }

// sub_1678570  (orig 0x1678570, setter)
void main_f_1678570(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 58) = a1; }

// sub_1678580  (orig 0x1678580, setter)
void main_f_1678580(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 56) = a1; }

// sub_1678590  (orig 0x1678590, getter)
uint8_t main_f_1678590(void* a0) { return *(uint8_t*)((char*)(a0) + 56); }

// sub_16785a0  (orig 0x16785a0, setter)
void main_f_16785a0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 57) = a1; }

// sub_16785b0  (orig 0x16785b0, getter)
uint8_t main_f_16785b0(void* a0) { return *(uint8_t*)((char*)(a0) + 57); }

// sub_16785c0  (orig 0x16785c0, ptr_add)
void* main_f_16785c0(void* a0) { return (char*)a0 + 60; }

// sub_16786e0  (orig 0x16786e0, getter)
uint32_t main_f_16786e0(void* a0) { return *(uint32_t*)((char*)(a0) + 476); }

// sub_1678700  (orig 0x1678700, mov_ret)
uint32_t main_f_1678700() { return 0; }

// sub_1679c00  (orig 0x1679c00, ret_only)
void main_f_1679c00() {}

// sub_1679d30  (orig 0x1679d30, tailcall)
void main_f_1679d30() { main_f_1733d30(); }

// sub_167acd0  (orig 0x167acd0, mov_ret)
uint32_t main_f_167acd0() { return 570; }

// sub_167ace0  (orig 0x167ace0, mov_ret)
uint32_t main_f_167ace0() { return 570; }

// sub_167aec0  (orig 0x167aec0, ret_only)
void main_f_167aec0() {}

// sub_167b070  (orig 0x167b070, setter)
void main_f_167b070(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_167b080  (orig 0x167b080, getter)
uint64_t main_f_167b080(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_167b0c0  (orig 0x167b0c0, ptr_add)
void* main_f_167b0c0(void* a0) { return (char*)a0 + 24; }

// sub_167b850  (orig 0x167b850, mov_ret)
uint32_t main_f_167b850() { return 50; }

// sub_167b860  (orig 0x167b860, mov_ret)
uint32_t main_f_167b860() { return 50; }

// sub_167b8d0  (orig 0x167b8d0, ret_only)
void main_f_167b8d0() {}

// sub_167b8e0  (orig 0x167b8e0, tailcall)
void main_f_167b8e0() { main::sub_ce0(); }

// sub_167b940  (orig 0x167b940, getter)
uint16_t main_f_167b940(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_167b950  (orig 0x167b950, getter)
uint16_t main_f_167b950(void* a0) { return *(uint16_t*)((char*)(a0) + 14); }

// sub_167b960  (orig 0x167b960, getter)
uint32_t main_f_167b960(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_167bb10  (orig 0x167bb10, getter)
uint32_t main_f_167bb10(void* a0) { return *(uint32_t*)((char*)(a0) + 428); }

// sub_167bb20  (orig 0x167bb20, ret_only)
void main_f_167bb20() {}

// sub_167be80  (orig 0x167be80, tailcall)
void main_f_167be80() { main::sub_16886f0(); }

// sub_167be90  (orig 0x167be90, ret_only)
void main_f_167be90() {}

// sub_167c130  (orig 0x167c130, getter)
uint32_t main_f_167c130(void* a0) { return *(uint32_t*)((char*)(a0) + 552); }

// sub_167c140  (orig 0x167c140, getter)
uint8_t main_f_167c140(void* a0) { return *(uint8_t*)((char*)(a0) + 560); }

// sub_167c150  (orig 0x167c150, ret_only)
void main_f_167c150() {}

// sub_167c160  (orig 0x167c160, setter-chain)
void main_f_167c160(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 12) = a1; *(uint16_t*)((char*)(a0) + 98) = a1; }

// sub_167c170  (orig 0x167c170, ptr_add)
void* main_f_167c170(void* a0) { return (char*)a0 + 80; }

// sub_167c180  (orig 0x167c180, tailcall)
void main_f_167c180() { main::sub_ce0(); }

// sub_167c190  (orig 0x167c190, ptr_add)
void* main_f_167c190(void* a0) { return (char*)a0 + 85; }

// sub_167c1a0  (orig 0x167c1a0, getter)
uint32_t main_f_167c1a0(void* a0) { return *(uint32_t*)((char*)(a0) + 472); }

// sub_167c380  (orig 0x167c380, ptr_add)
void* main_f_167c380(void* a0) { return (char*)a0 + 88; }

// sub_167c440  (orig 0x167c440, tailcall)
void main_f_167c440() { main_f_168dfa0(); }

// sub_167c480  (orig 0x167c480, mov_ret)
uint32_t main_f_167c480() { return 8; }

// sub_167c490  (orig 0x167c490, mov_ret)
uint32_t main_f_167c490() { return 28; }

// sub_167c4a0  (orig 0x167c4a0, mov_ret)
uint32_t main_f_167c4a0() { return 1500; }

// sub_167c4b0  (orig 0x167c4b0, mov_ret)
uint32_t main_f_167c4b0() { return 1500; }

// sub_167c4c0  (orig 0x167c4c0, tailcall)
uint32_t main_f_167c4c0() { return main_f_168dfc0(); }

// sub_167c4d0  (orig 0x167c4d0, tailcall)
void main_f_167c4d0() { main_f_168dfd0(); }

// sub_167c4e0  (orig 0x167c4e0, tailcall)
uint32_t main_f_167c4e0() { return main_f_168dfe0(); }

// sub_167c4f0  (orig 0x167c4f0, tailcall)
uint32_t main_f_167c4f0() { return main_f_168dff0(); }

// sub_167c500  (orig 0x167c500, tailcall)
uint32_t main_f_167c500() { return main_f_168e000(); }

// sub_167c510  (orig 0x167c510, mov_ret)
uint32_t main_f_167c510() { return 24; }

// sub_167c520  (orig 0x167c520, mov_ret)
uint32_t main_f_167c520() { return 0; }

// sub_167c530  (orig 0x167c530, tailcall)
uint32_t main_f_167c530() { return main_f_168e010(); }

// sub_167c540  (orig 0x167c540, tailcall)
uint32_t main_f_167c540() { return main_f_168e020(); }

// sub_167c550  (orig 0x167c550, mov_ret)
uint32_t main_f_167c550() { return 1; }

// sub_167c560  (orig 0x167c560, tailcall)
uint32_t main_f_167c560() { return main_f_168e030(); }

// sub_167c570  (orig 0x167c570, tailcall)
uint32_t main_f_167c570() { return main_f_168e040(); }

// sub_167c710  (orig 0x167c710, tailcall)
void main_f_167c710() { main::sub_168e050(); }

// sub_167c720  (orig 0x167c720, tailcall)
void main_f_167c720() { main::sub_168e090(); }

// sub_167c730  (orig 0x167c730, tailcall)
void main_f_167c730() { main::sub_168e0d0(); }

// sub_167c740  (orig 0x167c740, tailcall)
void main_f_167c740() { main::sub_168e110(); }

// sub_167c850  (orig 0x167c850, tailcall)
void main_f_167c850() { main_f_168e150(); }

// sub_167c860  (orig 0x167c860, tailcall)
void main_f_167c860() { main_f_168e160(); }

// sub_167c870  (orig 0x167c870, tailcall)
void main_f_167c870() { main_f_168e170(); }

// sub_167c880  (orig 0x167c880, tailcall)
void main_f_167c880() { main_f_168e180(); }

// sub_167c890  (orig 0x167c890, tailcall)
void main_f_167c890() { main_f_168e190(); }

// sub_167c8a0  (orig 0x167c8a0, tailcall)
void main_f_167c8a0() { main_f_168e1a0(); }

// sub_167c8b0  (orig 0x167c8b0, tailcall)
void main_f_167c8b0() { main_f_168e1b0(); }

// sub_167c8c0  (orig 0x167c8c0, tailcall)
void main_f_167c8c0() { main_f_168e1c0(); }

// sub_167c8d0  (orig 0x167c8d0, tailcall)
void main_f_167c8d0() { main_f_168e1d0(); }

// sub_167c8e0  (orig 0x167c8e0, tailcall)
void main_f_167c8e0() { main_f_168e1e0(); }

// sub_167c8f0  (orig 0x167c8f0, tailcall)
void main_f_167c8f0() { main::sub_168e1f0(); }

// sub_167c900  (orig 0x167c900, tailcall)
void main_f_167c900() { main::sub_168e240(); }

// sub_167c910  (orig 0x167c910, tailcall)
void main_f_167c910() { main_f_168e280(); }

// sub_167c920  (orig 0x167c920, tailcall)
void main_f_167c920() { main_f_168e290(); }

// sub_167c930  (orig 0x167c930, tailcall)
void main_f_167c930() { main_f_168e2a0(); }

// sub_167c940  (orig 0x167c940, tailcall)
void main_f_167c940() { main_f_168e2b0(); }

// sub_167c950  (orig 0x167c950, tailcall)
void main_f_167c950() { main_f_168e2c0(); }

// sub_167c960  (orig 0x167c960, tailcall)
void main_f_167c960() { main_f_168e2d0(); }

// sub_167c970  (orig 0x167c970, tailcall)
void main_f_167c970() { main_f_168e2e0(); }

// sub_167c980  (orig 0x167c980, tailcall)
void main_f_167c980() { main_f_168e2f0(); }

// sub_167c990  (orig 0x167c990, tailcall)
void main_f_167c990() { main::sub_168e300(); }

// sub_167c9a0  (orig 0x167c9a0, tailcall)
void main_f_167c9a0() { main::sub_168e350(); }

// sub_167c9b0  (orig 0x167c9b0, tailcall)
void main_f_167c9b0() { main::sub_168e390(); }

// sub_167c9c0  (orig 0x167c9c0, tailcall)
void main_f_167c9c0() { main::sub_168e3e0(); }

// sub_167c9d0  (orig 0x167c9d0, tailcall)
void main_f_167c9d0() { main::sub_168e420(); }

// sub_167c9e0  (orig 0x167c9e0, tailcall)
void main_f_167c9e0() { main::sub_168e470(); }

// sub_167c9f0  (orig 0x167c9f0, tailcall)
uint64_t main_f_167c9f0() { return main_f_168e4b0(); }

// sub_167ca00  (orig 0x167ca00, tailcall)
void main_f_167ca00() { main_f_168e4c0(); }

// sub_167ca10  (orig 0x167ca10, tailcall)
void main_f_167ca10() { main::sub_168e4d0(); }

// sub_167ca20  (orig 0x167ca20, tailcall)
void main_f_167ca20() { main::sub_168e520(); }

// sub_167ca30  (orig 0x167ca30, tailcall)
void main_f_167ca30() { main::sub_168e560(); }

// sub_167ca40  (orig 0x167ca40, tailcall)
void main_f_167ca40() { main::sub_168e5b0(); }

// sub_167ca50  (orig 0x167ca50, tailcall)
void main_f_167ca50() { main::sub_168e5f0(); }

// sub_167ca60  (orig 0x167ca60, tailcall)
void main_f_167ca60() { main::sub_168e640(); }

// sub_167ca70  (orig 0x167ca70, tailcall)
void main_f_167ca70() { main::sub_168e680(); }

// sub_167ca80  (orig 0x167ca80, tailcall)
void main_f_167ca80() { main::sub_168e6c0(); }

// sub_167ca90  (orig 0x167ca90, tailcall)
void main_f_167ca90() { main::sub_168e700(); }

// sub_167caa0  (orig 0x167caa0, tailcall)
void main_f_167caa0() { main::sub_168e740(); }

// sub_167cab0  (orig 0x167cab0, tailcall)
uint64_t main_f_167cab0() { return main_f_168e780(); }

// sub_167cac0  (orig 0x167cac0, tailcall)
void main_f_167cac0() { main_f_168e790(); }

// sub_167cbf0  (orig 0x167cbf0, tailcall)
void main_f_167cbf0() { main::sub_168e7a0(); }

// sub_167cc00  (orig 0x167cc00, tailcall)
void main_f_167cc00() { main::sub_168e800(); }

// sub_167ce40  (orig 0x167ce40, getter)
uint64_t main_f_167ce40(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_167ce50  (orig 0x167ce50, getter)
uint64_t main_f_167ce50(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_167ce80  (orig 0x167ce80, getter)
uint16_t main_f_167ce80(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_167ce90  (orig 0x167ce90, getter)
uint16_t main_f_167ce90(void* a0) { return *(uint16_t*)((char*)(a0) + 10); }

// sub_167d640  (orig 0x167d640, ret_only)
void main_f_167d640() {}

// sub_167e450  (orig 0x167e450, getter)
uint64_t main_f_167e450(void* a0) { return *(uint64_t*)((char*)(a0) + 1368); }

// sub_167e7c0  (orig 0x167e7c0, getter)
uint64_t main_f_167e7c0(void* a0) { return *(uint64_t*)((char*)(a0) + 1360); }

// sub_167e850  (orig 0x167e850, mov_ret)
uint32_t main_f_167e850() { return 0; }

// sub_167e860  (orig 0x167e860, ptr_add)
void* main_f_167e860(void* a0) { return (char*)a0 + 120; }

// sub_167e8f0  (orig 0x167e8f0, getter)
uint16_t main_f_167e8f0(void* a0) { return *(uint16_t*)((char*)(a0) + 80); }

// sub_167e950  (orig 0x167e950, tailcall)
void main_f_167e950() { main::sub_ce0(); }

// sub_167e970  (orig 0x167e970, ret_only)
void main_f_167e970() {}

// sub_167f0b0  (orig 0x167f0b0, ret_only)
void main_f_167f0b0() {}

// sub_167f120  (orig 0x167f120, mov_ret)
uint32_t main_f_167f120() { return 1; }

// sub_167f130  (orig 0x167f130, mov_ret)
uint32_t main_f_167f130() { return 1; }

// sub_167f140  (orig 0x167f140, mov_ret)
uint32_t main_f_167f140() { return 1; }

// sub_167f740  (orig 0x167f740, straight)
void main_f_167f740(void* a0) {
    *(uint8_t*)((char*)(a0) + 1148) = (uint8_t)(64);
}

// sub_1680ab0  (orig 0x1680ab0, mov_ret)
uint32_t main_f_1680ab0() { return 0; }

// sub_1681dd0  (orig 0x1681dd0, setter)
void main_f_1681dd0(uint64_t unused0, void* a1, uint32_t a2) { *(uint32_t*)((char*)(a1) + 12) = a2; }

// sub_1681de0  (orig 0x1681de0, mov_ret)
uint32_t main_f_1681de0() { return 0; }

// sub_1682580  (orig 0x1682580, mov_ret)
uint32_t main_f_1682580() { return 36; }

// sub_1682590  (orig 0x1682590, mov_ret)
uint32_t main_f_1682590() { return 0; }

// sub_16825a0  (orig 0x16825a0, mov_ret)
uint32_t main_f_16825a0() { return 1472; }

// sub_16825b0  (orig 0x16825b0, mov_ret)
uint32_t main_f_16825b0() { return 1460; }

// sub_16825c0  (orig 0x16825c0, mov_ret)
uint32_t main_f_16825c0() { return 24; }

// sub_16825d0  (orig 0x16825d0, mov_ret)
uint32_t main_f_16825d0() { return 360; }

// sub_1682620  (orig 0x1682620, ret_only)
void main_f_1682620() {}

// sub_1682700  (orig 0x1682700, tailcall)
void main_f_1682700() { main::sub_1688310(); }

// sub_1682890  (orig 0x1682890, ret_only)
void main_f_1682890() {}

// sub_16829b0  (orig 0x16829b0, tailcall)
void main_f_16829b0() { main::sub_1687490(); }

// sub_1684b90  (orig 0x1684b90, ret_only)
void main_f_1684b90() {}

// sub_1684c70  (orig 0x1684c70, tailcall)
void main_f_1684c70() { main::sub_168a8a0(); }

// sub_16853f0  (orig 0x16853f0, ret_only)
void main_f_16853f0() {}

// sub_16854b0  (orig 0x16854b0, tailcall)
void main_f_16854b0() { main::sub_1688ab0(); }

// sub_16854f0  (orig 0x16854f0, tailcall)
void main_f_16854f0() { main_f_1688cd0(); }

// sub_1685530  (orig 0x1685530, tailcall)
void main_f_1685530() { main::sub_168a500(); }

// sub_1685570  (orig 0x1685570, ret_only)
void main_f_1685570() {}

// sub_1685850  (orig 0x1685850, compare)
bool main_f_1685850(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 8)) == (uint64_t)(6); }

// sub_16858b0  (orig 0x16858b0, tailcall)
void main_f_16858b0() { main_f_1688290(); }

// sub_1685930  (orig 0x1685930, compare)
bool main_f_1685930(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 8)) == (uint64_t)(3); }

// sub_1685940  (orig 0x1685940, compare)
bool main_f_1685940(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 8)) == (uint64_t)(5); }

// sub_1685970  (orig 0x1685970, getter)
uint16_t main_f_1685970(void* a0) { return *(uint16_t*)((char*)(a0) + 682); }

// sub_1685980  (orig 0x1685980, ptr_add)
void* main_f_1685980(void* a0) { return (char*)a0 + 684; }

// sub_16859b0  (orig 0x16859b0, getter)
uint32_t main_f_16859b0(void* a0) { return *(uint32_t*)((char*)(a0) + 1216); }

// sub_16859c0  (orig 0x16859c0, getter)
uint16_t main_f_16859c0(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_16859d0  (orig 0x16859d0, ptr_add)
void* main_f_16859d0(void* a0) { return (char*)a0 + 16; }

// sub_1685aa0  (orig 0x1685aa0, tailcall)
void main_f_1685aa0() { main::sub_169a870(); }

// sub_1685c20  (orig 0x1685c20, ret_only)
void main_f_1685c20() {}

// sub_16861d0  (orig 0x16861d0, tailcall)
void main_f_16861d0() { main_f_1733e40(); }

// sub_16864d0  (orig 0x16864d0, getter)
uint32_t main_f_16864d0(void* a0) { return *(uint32_t*)((char*)(a0) + 2656); }

// sub_16864e0  (orig 0x16864e0, getter)
uint32_t main_f_16864e0(void* a0) { return *(uint32_t*)((char*)(a0) + 2660); }

// sub_16864f0  (orig 0x16864f0, getter)
uint16_t main_f_16864f0(void* a0) { return *(uint16_t*)((char*)(a0) + 2664); }

// sub_1686500  (orig 0x1686500, getter)
uint16_t main_f_1686500(void* a0) { return *(uint16_t*)((char*)(a0) + 2666); }

// sub_1686590  (orig 0x1686590, getter)
uint32_t main_f_1686590(void* a0) { return *(uint32_t*)((char*)(a0) + 3028); }

// sub_16865a0  (orig 0x16865a0, getter)
uint8_t main_f_16865a0(void* a0) { return *(uint8_t*)((char*)(a0) + 3034); }

// sub_1686740  (orig 0x1686740, ptr_add)
void* main_f_1686740(void* a0) { return (char*)a0 + 16; }

// sub_16868d0  (orig 0x16868d0, ret_only)
void main_f_16868d0() {}

// sub_16868e0  (orig 0x16868e0, mov_ret)
uint32_t main_f_16868e0() { return 3; }

// sub_1686970  (orig 0x1686970, tailcall)
void main_f_1686970() { main::sub_ce0(); }

// sub_1686ce0  (orig 0x1686ce0, ret_only)
void main_f_1686ce0() {}

// sub_1686cf0  (orig 0x1686cf0, ptr_add)
void* main_f_1686cf0(void* a0) { return (char*)a0 + 32; }

// sub_1686dc0  (orig 0x1686dc0, tailcall)
void main_f_1686dc0() { main_f_169aed0(); }

// sub_1686f90  (orig 0x1686f90, ptr_add)
void* main_f_1686f90(void* a0) { return (char*)a0 + 16; }

// sub_1686fa0  (orig 0x1686fa0, mov_ret)
uint32_t main_f_1686fa0() { return 360; }

// sub_1687070  (orig 0x1687070, mov_ret)
uint32_t main_f_1687070() { return 8; }

// sub_16873d0  (orig 0x16873d0, ret_only)
void main_f_16873d0() {}

// sub_1688220  (orig 0x1688220, ret_only)
void main_f_1688220() {}

// sub_1688290  (orig 0x1688290, ret_only)
void main_f_1688290() {}

// sub_1688670  (orig 0x1688670, ret_only)
void main_f_1688670() {}

// sub_1688860  (orig 0x1688860, ptr_add)
void* main_f_1688860(void* a0) { return (char*)a0 + 16; }

// sub_1688870  (orig 0x1688870, ret_only)
void main_f_1688870() {}

// sub_1688880  (orig 0x1688880, tailcall)
void main_f_1688880() { main::sub_ce0(); }

// sub_1688cd0  (orig 0x1688cd0, ret_only)
void main_f_1688cd0() {}

// sub_1689150  (orig 0x1689150, ret_only)
void main_f_1689150() {}

// sub_1689330  (orig 0x1689330, ret_only)
void main_f_1689330() {}

// sub_168a430  (orig 0x168a430, ret_only)
void main_f_168a430() {}

// sub_168a820  (orig 0x168a820, ret_only)
void main_f_168a820() {}

// sub_168bca0  (orig 0x168bca0, ret_only)
void main_f_168bca0() {}

// sub_168bd00  (orig 0x168bd00, setter)
void main_f_168bd00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_168bd10  (orig 0x168bd10, setter)
void main_f_168bd10(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_168be20  (orig 0x168be20, ret_only)
void main_f_168be20() {}

// sub_168bf20  (orig 0x168bf20, ret_only)
void main_f_168bf20() {}

// sub_168c030  (orig 0x168c030, ptr_add)
void* main_f_168c030(void* a0) { return (char*)a0 + 24; }

// sub_168c040  (orig 0x168c040, tailcall)
void main_f_168c040() { main::sub_1727510(); }

// sub_168c8d0  (orig 0x168c8d0, ret_only)
void main_f_168c8d0() {}

// sub_168c8e0  (orig 0x168c8e0, ret_only)
void main_f_168c8e0() {}

// sub_168c8f0  (orig 0x168c8f0, tailcall)
void main_f_168c8f0() { main::sub_ce0(); }

// sub_168c900  (orig 0x168c900, mov_ret)
uint32_t main_f_168c900() { return 1; }

// sub_168cac0  (orig 0x168cac0, mov_ret)
uint32_t main_f_168cac0() { return 0; }

// sub_168d620  (orig 0x168d620, mov_ret)
uint32_t main_f_168d620() { return 0; }

// sub_168dfa0  (orig 0x168dfa0, tailcall)
void main_f_168dfa0() { main_f_1731620(); }

// sub_168dfc0  (orig 0x168dfc0, mov_ret)
uint32_t main_f_168dfc0() { return 400; }

// sub_168dfd0  (orig 0x168dfd0, tailcall)
void main_f_168dfd0() { main_f_16a8a60(); }

// sub_168dfe0  (orig 0x168dfe0, mov_ret)
uint32_t main_f_168dfe0() { return 0; }

// sub_168dff0  (orig 0x168dff0, mov_ret)
uint32_t main_f_168dff0() { return 0; }

// sub_168e000  (orig 0x168e000, mov_ret)
uint32_t main_f_168e000() { return 1; }

// sub_168e010  (orig 0x168e010, mov_ret)
uint32_t main_f_168e010() { return 1; }

// sub_168e020  (orig 0x168e020, mov_ret)
uint32_t main_f_168e020() { return 0; }

// sub_168e030  (orig 0x168e030, mov_ret)
uint32_t main_f_168e030() { return 0; }

// sub_168e040  (orig 0x168e040, mov_ret)
uint32_t main_f_168e040() { return 0; }

// sub_168e150  (orig 0x168e150, tailcall)
void main_f_168e150() { main::sub_16a8ef0(); }

// sub_168e160  (orig 0x168e160, tailcall)
void main_f_168e160() { main::sub_16a8f30(); }

// sub_168e170  (orig 0x168e170, tailcall)
void main_f_168e170() { main::sub_16a8f70(); }

// sub_168e180  (orig 0x168e180, tailcall)
void main_f_168e180() { main::sub_16a8fb0(); }

// sub_168e190  (orig 0x168e190, tailcall)
void main_f_168e190() { main::sub_16a8ff0(); }

// sub_168e1a0  (orig 0x168e1a0, tailcall)
void main_f_168e1a0() { main::sub_16a9030(); }

// sub_168e1b0  (orig 0x168e1b0, tailcall)
void main_f_168e1b0() { main::sub_16a8b70(); }

// sub_168e1c0  (orig 0x168e1c0, tailcall)
void main_f_168e1c0() { main::sub_16a8bb0(); }

// sub_168e1d0  (orig 0x168e1d0, tailcall)
void main_f_168e1d0() { main::sub_16a8bf0(); }

// sub_168e1e0  (orig 0x168e1e0, tailcall)
void main_f_168e1e0() { main::sub_16a8c30(); }

// sub_168e280  (orig 0x168e280, tailcall)
void main_f_168e280() { main::sub_16a8c70(); }

// sub_168e290  (orig 0x168e290, tailcall)
void main_f_168e290() { main::sub_16a8cb0(); }

// sub_168e2a0  (orig 0x168e2a0, tailcall)
void main_f_168e2a0() { main::sub_16a8d70(); }

// sub_168e2b0  (orig 0x168e2b0, tailcall)
void main_f_168e2b0() { main::sub_16a8db0(); }

// sub_168e2c0  (orig 0x168e2c0, tailcall)
void main_f_168e2c0() { main::sub_16a8df0(); }

// sub_168e2d0  (orig 0x168e2d0, tailcall)
void main_f_168e2d0() { main::sub_16a8e30(); }

// sub_168e2e0  (orig 0x168e2e0, tailcall)
void main_f_168e2e0() { main::sub_16a8e70(); }

// sub_168e2f0  (orig 0x168e2f0, tailcall)
void main_f_168e2f0() { main::sub_16a8eb0(); }

// sub_168e4b0  (orig 0x168e4b0, mov_ret)
uint64_t main_f_168e4b0() { return 0; }

// sub_168e4c0  (orig 0x168e4c0, ret_only)
void main_f_168e4c0() {}

// sub_168e780  (orig 0x168e780, mov_ret)
uint64_t main_f_168e780() { return 0; }

// sub_168e790  (orig 0x168e790, ret_only)
void main_f_168e790() {}

// sub_168e910  (orig 0x168e910, ret_only)
void main_f_168e910() {}

// sub_168f0f0  (orig 0x168f0f0, ret_only)
void main_f_168f0f0() {}

// sub_168f100  (orig 0x168f100, ret_only)
void main_f_168f100() {}

// sub_168f1c0  (orig 0x168f1c0, mov_ret)
uint32_t main_f_168f1c0() { return 0; }

// sub_168f1d0  (orig 0x168f1d0, ret_only)
void main_f_168f1d0() {}

// sub_168f880  (orig 0x168f880, tailcall)
void main_f_168f880() { main::sub_1723250(); }

// sub_168f890  (orig 0x168f890, ret_only)
void main_f_168f890() {}

// sub_168f8d0  (orig 0x168f8d0, tailcall)
void main_f_168f8d0() { main::sub_1723440(); }

// sub_168faf0  (orig 0x168faf0, tailcall)
void main_f_168faf0() { main::sub_1723a90(); }

// sub_168fb00  (orig 0x168fb00, ret_only)
void main_f_168fb00() {}

// sub_16903a0  (orig 0x16903a0, tailcall)
void main_f_16903a0() { main::sub_17227f0(); }

// sub_16903b0  (orig 0x16903b0, ret_only)
void main_f_16903b0() {}

// sub_1690620  (orig 0x1690620, ret_only)
void main_f_1690620() {}

// sub_1690680  (orig 0x1690680, tailcall)
void main_f_1690680() { main::sub_1735e30(); }

// sub_1690c60  (orig 0x1690c60, ret_only)
void main_f_1690c60() {}

// sub_1690d00  (orig 0x1690d00, setter)
void main_f_1690d00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1690d10  (orig 0x1690d10, setter)
void main_f_1690d10(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_1690e20  (orig 0x1690e20, ret_only)
void main_f_1690e20() {}

// sub_1690e90  (orig 0x1690e90, mov_ret)
uint32_t main_f_1690e90() { return 1; }

// sub_1690ea0  (orig 0x1690ea0, mov_ret)
uint32_t main_f_1690ea0() { return 1; }

// sub_1690eb0  (orig 0x1690eb0, mov_ret)
uint32_t main_f_1690eb0() { return 1; }

// sub_1691a50  (orig 0x1691a50, mov_ret)
uint32_t main_f_1691a50() { return 1; }

// sub_1691a60  (orig 0x1691a60, ret_only)
void main_f_1691a60() {}

// sub_1691a70  (orig 0x1691a70, mov_ret)
uint32_t main_f_1691a70() { return 0; }

// sub_1691a80  (orig 0x1691a80, mov_ret)
uint32_t main_f_1691a80() { return 0; }

// sub_16928a0  (orig 0x16928a0, setter)
void main_f_16928a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1132) = a1; }

// sub_16928b0  (orig 0x16928b0, setter)
void main_f_16928b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1140) = a1; }

// sub_1693bb0  (orig 0x1693bb0, setter-chain)
void main_f_1693bb0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 1312) = a1; *(uint64_t*)((char*)(a0) + 1320) = a2; }

// sub_1694e90  (orig 0x1694e90, compare)
bool main_f_1694e90(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1256)) == (uint64_t)(1); }

// sub_1697210  (orig 0x1697210, compare)
bool main_f_1697210(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1232)) != (uint64_t)(0); }

// sub_1697830  (orig 0x1697830, setter-chain)
void main_f_1697830(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint32_t*)((char*)(a0) + 8) = a2; *(uint16_t*)((char*)(a0) + 12) = 0; }

// sub_1697880  (orig 0x1697880, tailcall)
void main_f_1697880() { main::sub_ce0(); }

// sub_1697890  (orig 0x1697890, tailcall)
void main_f_1697890() { main::sub_ce0(); }

// sub_16978a0  (orig 0x16978a0, ret_only)
void main_f_16978a0() {}

// sub_16978b0  (orig 0x16978b0, tailcall)
void main_f_16978b0() { main::sub_ce0(); }

// sub_16978c0  (orig 0x16978c0, tailcall)
void main_f_16978c0() { main::sub_ce0(); }

// sub_16978d0  (orig 0x16978d0, tailcall)
void main_f_16978d0() { main::sub_ce0(); }

// sub_1697c80  (orig 0x1697c80, ret_only)
void main_f_1697c80() {}

// sub_16981a0  (orig 0x16981a0, ret_only)
void main_f_16981a0() {}

// sub_1698a50  (orig 0x1698a50, ret_only)
void main_f_1698a50() {}

// sub_1698f00  (orig 0x1698f00, ret_only)
void main_f_1698f00() {}

// sub_1699460  (orig 0x1699460, ret_only)
void main_f_1699460() {}

// sub_16997d0  (orig 0x16997d0, ret_only)
void main_f_16997d0() {}

// sub_1699e30  (orig 0x1699e30, ret_only)
void main_f_1699e30() {}

// sub_169a160  (orig 0x169a160, ret_only)
void main_f_169a160() {}

// sub_169a800  (orig 0x169a800, ret_only)
void main_f_169a800() {}

// sub_169ac10  (orig 0x169ac10, ret_only)
void main_f_169ac10() {}

// sub_169ac40  (orig 0x169ac40, ret_only)
void main_f_169ac40() {}

// sub_169ac60  (orig 0x169ac60, straight)
void main_f_169ac60(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 9) = *(uint8_t*)((char*)(a1) + 9);
    *(uint8_t*)((char*)(a0) + 10) = *(uint8_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 11) = *(uint8_t*)((char*)(a1) + 11);
}

// sub_169ac90  (orig 0x169ac90, setter)
void main_f_169ac90(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_169aca0  (orig 0x169aca0, getter)
uint8_t main_f_169aca0(void* a0) { return *(uint8_t*)((char*)(a0) + 8); }

// sub_169acb0  (orig 0x169acb0, getter)
uint8_t main_f_169acb0(void* a0) { return *(uint8_t*)((char*)(a0) + 9); }

// sub_169ad10  (orig 0x169ad10, setter)
void main_f_169ad10(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 9) = a1; }

// sub_169ad20  (orig 0x169ad20, getter)
uint8_t main_f_169ad20(void* a0) { return *(uint8_t*)((char*)(a0) + 10); }

// sub_169ad40  (orig 0x169ad40, setter)
void main_f_169ad40(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 11) = a1; }

// sub_169ad50  (orig 0x169ad50, ret_only)
void main_f_169ad50() {}

// sub_169aed0  (orig 0x169aed0, ret_only)
void main_f_169aed0() {}

// sub_169af20  (orig 0x169af20, getter)
uint32_t main_f_169af20(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_169af80  (orig 0x169af80, tailcall)
void main_f_169af80() { main_f_165baa0(); }

// sub_169bbb0  (orig 0x169bbb0, mov_ret)
uint32_t main_f_169bbb0() { return 0; }

// sub_169bfa0  (orig 0x169bfa0, ret_only)
void main_f_169bfa0() {}

// sub_169bfb0  (orig 0x169bfb0, ret_only)
void main_f_169bfb0() {}

// sub_169c000  (orig 0x169c000, tailcall)
void main_f_169c000() { main_f_165baa0(); }

// sub_169c900  (orig 0x169c900, ret_only)
void main_f_169c900() {}

// sub_169c910  (orig 0x169c910, ret_only)
void main_f_169c910() {}

// sub_169df30  (orig 0x169df30, ret_only)
void main_f_169df30() {}

// sub_16a1c40  (orig 0x16a1c40, ret_only)
void main_f_16a1c40() {}

// sub_16a1ed0  (orig 0x16a1ed0, getter)
uint32_t main_f_16a1ed0(void* a0) { return *(uint32_t*)((char*)(a0) + 152); }

// sub_16a1ee0  (orig 0x16a1ee0, ret_only)
void main_f_16a1ee0() {}

// sub_16a1f40  (orig 0x16a1f40, tailcall)
void main_f_16a1f40() { main_f_165baa0(); }

// sub_16a2460  (orig 0x16a2460, setter-chain)
void main_f_16a2460(void* a0) { *(uint64_t*)((char*)(a0) + 104) = 0; *(uint8_t*)((char*)(a0) + 124) = 0; *(uint64_t*)((char*)(a0) + 88) = 0; }

// sub_16a2470  (orig 0x16a2470, ret_only)
void main_f_16a2470() {}

// sub_16a2480  (orig 0x16a2480, ret_only)
void main_f_16a2480() {}

// sub_16a33f0  (orig 0x16a33f0, ret_only)
void main_f_16a33f0() {}

// sub_16a3400  (orig 0x16a3400, ret_only)
void main_f_16a3400() {}

// sub_16a3410  (orig 0x16a3410, ret_only)
void main_f_16a3410() {}

// sub_16a3470  (orig 0x16a3470, tailcall)
void main_f_16a3470() { main_f_165baa0(); }

// sub_16a3b60  (orig 0x16a3b60, ret_only)
void main_f_16a3b60() {}

// sub_16a3bd0  (orig 0x16a3bd0, tailcall)
void main_f_16a3bd0() { main_f_165baa0(); }

// sub_16a4420  (orig 0x16a4420, ret_only)
void main_f_16a4420() {}

// sub_16a4430  (orig 0x16a4430, tailcall)
void main_f_16a4430() { main::sub_16a4440(); }

// sub_16a56b0  (orig 0x16a56b0, setter)
void main_f_16a56b0(void* a0) { *(uint64_t*)((char*)(a0) + 196) = 0; }

// sub_16a56c0  (orig 0x16a56c0, getter)
uint64_t main_f_16a56c0(void* a0) { return *(uint64_t*)((char*)(a0) + 888); }

// sub_16a6bd0  (orig 0x16a6bd0, getter)
uint8_t main_f_16a6bd0(void* a0) { return *(uint8_t*)((char*)(a0) + 190); }

