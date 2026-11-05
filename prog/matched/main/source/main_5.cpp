/* main -- 370 functions verified to match the original.
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


namespace main { void sub_15b6e10(); }
namespace main { void sub_1636d00(); }
namespace main { uint64_t sub_164a700(uintptr_t); }
namespace main { uint64_t sub_1646670(uintptr_t); }
namespace main { uint64_t InstanceTable_422(uintptr_t); }
namespace main { uint64_t InstanceTable_424(uintptr_t); }
namespace main { uint64_t Location_2(uintptr_t); }
namespace main { uint64_t InstanceTable_425(uintptr_t); }
namespace main { uint64_t sub_162f760(uintptr_t); }
namespace main { uint64_t InstanceTable_369(uintptr_t); }
extern uint32_t main_f_15d81f0();
namespace main { uint64_t InstanceTable_447(uintptr_t); }
namespace main { uint64_t InstanceTable_449(uintptr_t); }
namespace main { uint64_t InstanceTable_450(uintptr_t); }
namespace main { uint64_t InstanceTable_452(uintptr_t); }
namespace main { uint64_t InstanceTable_454(uintptr_t); }
namespace main { void sub_ce0(); }
namespace main { uint64_t sub_16559c0(uintptr_t); }
namespace main { void sub_1655790(); }
namespace main { uint64_t sub_16538d0(uintptr_t); }
namespace main { uint64_t sub_16532e0(uintptr_t); }
namespace main { uint64_t sub_1653890(uintptr_t); }
namespace main { void sub_16613e0(); }
extern void main_f_1723320();
namespace main { uint64_t sub_1672060(uintptr_t); }
namespace main { uint64_t sub_16727e0(uintptr_t); }
namespace main { uint64_t sub_16728b0(uintptr_t); }
namespace main { uint64_t sub_1674d00(uintptr_t); }
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
namespace main { uint64_t sub_1677a80(uintptr_t); }
namespace main { uint64_t sub_1663dc0(uintptr_t); }
namespace main { void sub_1664290(); }
namespace main { void sub_1723b80(); }
namespace main { void sub_17263e0(); }
namespace main { void sub_17229e0(); }
namespace main { void sub_1723440(); }
namespace main { void sub_1723a90(); }
extern void main_f_16a3bd0();
namespace main { void sub_1735e30(); }
namespace main { uint64_t sub_166df50(uintptr_t); }
namespace main { uint64_t sub_166e0a0(uintptr_t); }
namespace main { uint64_t sub_166e200(uintptr_t); }
namespace main { uint64_t sub_166e2f0(uintptr_t); }
namespace main { uint64_t sub_1676830(uintptr_t); }
namespace main { uint64_t sub_1749a80(uintptr_t); }
namespace main { uint64_t sub_1678710(uintptr_t); }
namespace main { uint64_t sub_1678cd0(uintptr_t); }
extern void main_f_1733d30();
namespace main { uint64_t sub_167a330(uintptr_t); }
namespace main { uint64_t sub_167a960(uintptr_t); }
namespace main { uint64_t sub_167b0d0(uintptr_t); }
namespace main { uint64_t sub_167b450(uintptr_t); }
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
namespace main { uint64_t sub_1686c60(uintptr_t); }
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
namespace main { uint64_t sub_1660a50(uintptr_t); }
namespace main { void sub_1727510(); }
namespace main { void sub_16a8b70(); }
namespace main { void sub_16a8bb0(); }
namespace main { void sub_16a8bf0(); }
namespace main { void sub_16a8c30(); }
namespace main { void sub_16a8df0(); }
namespace main { void sub_16a8e30(); }
namespace main { uint64_t sub_1694080(uintptr_t); }
namespace main { void sub_1723250(); }
namespace main { void sub_17227f0(); }
extern void main_f_165baa0();
namespace main { void sub_16a4440(); }
namespace main { uint64_t sub_16ab5c0(uintptr_t); }
extern void main_f_1739d10();
namespace main { void sub_1739d30(); }
namespace main { uint64_t sub_173a500(uintptr_t); }
namespace main { uint64_t sub_173a6d0(uintptr_t); }
namespace main { void sub_173bdc0(); }
namespace main { uint64_t sub_173c090(uintptr_t); }
extern void main_f_173cfa0();
namespace main { void sub_173d040(); }
namespace main { void sub_174a680(); }
namespace main { uint64_t sub_165fd50(uintptr_t); }
namespace main { void sub_16a90b0(); }
extern void main_f_16a9a50();
namespace main { void sub_16a9ce0(); }
namespace main { void sub_15a1030(); }
namespace main { void sub_15d82c0(); }
namespace main { void sub_16cac60(); }
namespace main { void sub_16cada0(); }
namespace main { void sub_165ff30(); }
namespace main { uint64_t sub_165ff30(uintptr_t); }
namespace main { void sub_16d3060(); }
namespace main { void sub_16c9550(); }
namespace main { void sub_169e170(); }
extern void main_f_169c000();
extern void main_f_16a1f40();
namespace main { void sub_1727a50(); }
namespace main { void sub_1731300(); }
namespace main { void sub_1731210(); }
namespace main { void sub_1731480(); }
namespace main { uint64_t sub_17105a0(uintptr_t); }
namespace main { void sub_1710700(); }
namespace main { uint64_t sub_1710810(uintptr_t); }
namespace main { void sub_171b640(); }
namespace main { void sub_171bb70(); }
namespace main { void sub_171c100(); }
namespace main { void sub_171c610(); }
namespace main { void sub_171cb80(); }
namespace main { void sub_171d0b0(); }
namespace main { void sub_171d610(); }
namespace main { void sub_171db40(); }
namespace main { void sub_1721c60(); }
namespace main { void pead_MainThread(); }
extern void main_f_16a8a40();
namespace main { uint64_t sub_173b1b0(uintptr_t); }
namespace main { uint64_t sub_1655c70(uintptr_t); }
namespace main { uint64_t sub_174fcd0(uintptr_t); }
namespace main { void sub_1748f30(); }
extern void main_f_1748960();
namespace main { uint64_t sub_1652cf0(uintptr_t); }
namespace main { void sub_174f410(); }
namespace main { void sub_8c0(); }
namespace main { void sub_1755420(); }
namespace main { void sub_1778340(); }
namespace main { uint64_t sub_1778700(uintptr_t); }
namespace main { void sub_1777df0(); }
namespace gflib3 { void nn_ssl(); }
namespace main { void sub_1777f50(); }
namespace main { void sub_1777f00(); }
extern uint32_t main_f_1777f30();
extern uint32_t main_f_1777f40();
extern void main_f_177cde0();
extern void main_f_17792a0();
namespace main { uint64_t sub_17b8680(uintptr_t); }
namespace main { uint64_t sub_179f270(uintptr_t); }
extern void main_f_17a9e80();
namespace main { uint64_t sub_17a9da0(uintptr_t); }
namespace main { void uConstantBufferForVertexShader(); }
extern void main_f_17913f0();
namespace main { uint64_t sub_17d2b10(uintptr_t); }

// sub_162fa60  (orig 0x162fa60, tailcall)
void main_f_162fa60() { main::sub_15b6e10(); }

// sub_16317c0  (orig 0x16317c0, tailcall)
void main_f_16317c0() { main::sub_15b6e10(); }

// sub_1638860  (orig 0x1638860, tailcall)
void main_f_1638860() { main::sub_15b6e10(); }

// sub_163e120  (orig 0x163e120, tailcall)
void main_f_163e120() { main::sub_1636d00(); }

// sub_1641690  (orig 0x1641690, tailcall)
void main_f_1641690() { main::sub_15b6e10(); }

// sub_1645560  (orig 0x1645560, tailcall)
uint64_t main_f_1645560(void* a0) {
    return main::sub_164a700(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1646700  (orig 0x1646700, tailcall)
uint64_t main_f_1646700(void* a0) {
    return main::sub_1646670(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1646950  (orig 0x1646950, tailcall)
uint64_t main_f_1646950(void* a0) {
    return main::InstanceTable_422(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1646a90  (orig 0x1646a90, tailcall)
uint64_t main_f_1646a90(void* a0) {
    return main::InstanceTable_424(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1646bf0  (orig 0x1646bf0, tailcall)
uint64_t main_f_1646bf0(void* a0) {
    return main::Location_2(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1646d80  (orig 0x1646d80, tailcall)
uint64_t main_f_1646d80(void* a0) {
    return main::InstanceTable_425(((uintptr_t)((char*)(a0) - 160)));
}

// sub_1647f70  (orig 0x1647f70, tailcall)
void main_f_1647f70() { main::sub_15b6e10(); }

// sub_1647f90  (orig 0x1647f90, tailcall)
void main_f_1647f90() { main::sub_15b6e10(); }

// sub_1648030  (orig 0x1648030, tailcall)
uint64_t main_f_1648030(void* a0) {
    return main::sub_162f760(((uintptr_t)((char*)(a0) + 32)));
}

// sub_1648040  (orig 0x1648040, tailcall)
uint64_t main_f_1648040(void* a0) {
    return main::InstanceTable_369(((uintptr_t)((char*)(a0) + 32)));
}

// sub_164b6d0  (orig 0x164b6d0, tailcall)
uint32_t main_f_164b6d0() { return main_f_15d81f0(); }

// sub_164c1b0  (orig 0x164c1b0, tailcall)
void main_f_164c1b0() { main::sub_15b6e10(); }

// sub_164c340  (orig 0x164c340, tailcall)
void main_f_164c340() { main::sub_15b6e10(); }

// sub_164c520  (orig 0x164c520, tailcall)
uint64_t main_f_164c520(void* a0) {
    return main::sub_162f760(((uintptr_t)((char*)(a0) + 32)));
}

// sub_164cc40  (orig 0x164cc40, tailcall)
uint64_t main_f_164cc40(void* a0) {
    return main::InstanceTable_447(((uintptr_t)((char*)(a0) + 32)));
}

// sub_164d0b0  (orig 0x164d0b0, tailcall)
uint64_t main_f_164d0b0(void* a0) {
    return main::InstanceTable_449(((uintptr_t)((char*)(a0) + 32)));
}

// sub_164d2f0  (orig 0x164d2f0, tailcall)
uint64_t main_f_164d2f0(void* a0) {
    return main::InstanceTable_450(((uintptr_t)((char*)(a0) + 32)));
}

// sub_164d740  (orig 0x164d740, tailcall)
uint64_t main_f_164d740(void* a0) {
    return main::InstanceTable_452(((uintptr_t)((char*)(a0) + 32)));
}

// sub_1650350  (orig 0x1650350, tailcall)
uint64_t main_f_1650350(void* a0) {
    return main::sub_162f760(((uintptr_t)((char*)(a0) + 32)));
}

// sub_1650360  (orig 0x1650360, tailcall)
uint64_t main_f_1650360(void* a0) {
    return main::InstanceTable_454(((uintptr_t)((char*)(a0) + 32)));
}

// sub_1652920  (orig 0x1652920, tailcall)
void main_f_1652920() { main::sub_ce0(); }

// sub_1652d40  (orig 0x1652d40, tailcall)
void main_f_1652d40() { main::sub_ce0(); }

// sub_1653bc0  (orig 0x1653bc0, tailcall)
void main_f_1653bc0() { main::sub_ce0(); }

// sub_1654860  (orig 0x1654860, tailcall)
uint64_t main_f_1654860(void* a0) {
    return main::sub_16559c0(((uintptr_t)((char*)(a0) + 176)));
}

// sub_1655570  (orig 0x1655570, tailcall)
void main_f_1655570() { main::sub_ce0(); }

// sub_165baa0  (orig 0x165baa0, tailcall)
void main_f_165baa0() { main::sub_1655790(); }

// sub_165bc70  (orig 0x165bc70, tailcall)
void main_f_165bc70() { main::sub_ce0(); }

// sub_165c5f0  (orig 0x165c5f0, tailcall)
void main_f_165c5f0() { main::sub_ce0(); }

// sub_165fb70  (orig 0x165fb70, tailcall)
uint64_t main_f_165fb70(void* a0) {
    return main::sub_16538d0(((uintptr_t)((char*)(a0) + 8)));
}

// sub_165fd20  (orig 0x165fd20, tailcall)
uint64_t main_f_165fd20(void* a0) {
    return main::sub_16532e0(((uintptr_t)((char*)(a0) + 8)));
}

// sub_165fd30  (orig 0x165fd30, tailcall)
uint64_t main_f_165fd30(void* a0) {
    return main::sub_1653890(((uintptr_t)((char*)(a0) + 8)));
}

// sub_16609b0  (orig 0x16609b0, tailcall)
void main_f_16609b0() { main::sub_ce0(); }

// sub_1661060  (orig 0x1661060, tailcall)
void main_f_1661060() { main::sub_16613e0(); }

// sub_1661af0  (orig 0x1661af0, tailcall)
void main_f_1661af0() { main_f_1723320(); }

// sub_1662310  (orig 0x1662310, tailcall)
uint64_t main_f_1662310(void* a0) {
    return main::sub_1672060(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1662320  (orig 0x1662320, tailcall)
uint64_t main_f_1662320(void* a0) {
    return main::sub_16727e0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1662360  (orig 0x1662360, tailcall)
uint64_t main_f_1662360(void* a0) {
    return main::sub_16728b0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1662390  (orig 0x1662390, tailcall)
uint64_t main_f_1662390(void* a0) {
    return main::sub_1674d00(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_1662700  (orig 0x1662700, tailcall)
void main_f_1662700() { main_f_1724e60(); }

// sub_1662790  (orig 0x1662790, tailcall)
void main_f_1662790() { main_f_1731620(); }

// sub_1662820  (orig 0x1662820, tailcall)
void main_f_1662820() { main_f_16a8a60(); }

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

// sub_16639a0  (orig 0x16639a0, tailcall)
uint64_t main_f_16639a0(void* a0) {
    return main::sub_1677a80(((uintptr_t)((char*)(a0) - 8)));
}

// sub_1664280  (orig 0x1664280, tailcall)
uint64_t main_f_1664280(void* a0) {
    return main::sub_1663dc0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_1664360  (orig 0x1664360, tailcall)
void main_f_1664360() { main::sub_1664290(); }

// sub_16676b0  (orig 0x16676b0, tailcall)
void main_f_16676b0() { main::sub_ce0(); }

// sub_1667cd0  (orig 0x1667cd0, tailcall)
void main_f_1667cd0() { main::sub_1723b80(); }

// sub_166a5f0  (orig 0x166a5f0, tailcall)
void main_f_166a5f0() { main::sub_17263e0(); }

// sub_166a6f0  (orig 0x166a6f0, tailcall)
void main_f_166a6f0() { main::sub_17229e0(); }

// sub_166aea0  (orig 0x166aea0, tailcall)
void main_f_166aea0() { main::sub_1723440(); }

// sub_166b0a0  (orig 0x166b0a0, tailcall)
void main_f_166b0a0() { main::sub_1723a90(); }

// sub_166cb50  (orig 0x166cb50, tailcall)
void main_f_166cb50() { main::sub_ce0(); }

// sub_166d3f0  (orig 0x166d3f0, tailcall)
void main_f_166d3f0() { main_f_16a3bd0(); }

// sub_166d8e0  (orig 0x166d8e0, tailcall)
void main_f_166d8e0() { main::sub_1735e30(); }

// sub_166e010  (orig 0x166e010, tailcall)
uint64_t main_f_166e010(void* a0) {
    return main::sub_166df50(((uintptr_t)((char*)(a0) - 24)));
}

// sub_166e1f0  (orig 0x166e1f0, tailcall)
uint64_t main_f_166e1f0(void* a0) {
    return main::sub_166e0a0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_166e2e0  (orig 0x166e2e0, tailcall)
uint64_t main_f_166e2e0(void* a0) {
    return main::sub_166e200(((uintptr_t)((char*)(a0) - 24)));
}

// sub_166eb90  (orig 0x166eb90, tailcall)
uint64_t main_f_166eb90(void* a0) {
    return main::sub_166e2f0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_1672890  (orig 0x1672890, tailcall)
uint64_t main_f_1672890(void* a0) {
    return main::sub_1676830(((uintptr_t)(*(uint64_t*)((char*)(a0) + 200))));
}

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

// sub_1677b40  (orig 0x1677b40, tailcall)
uint64_t main_f_1677b40(void* a0) {
    return main::sub_1677a80(((uintptr_t)((char*)(a0) - 8)));
}

// sub_16786f0  (orig 0x16786f0, tailcall)
uint64_t main_f_16786f0(void* a0) {
    return main::sub_1749a80(((uintptr_t)((char*)(a0) + 480)));
}

// sub_1678cc0  (orig 0x1678cc0, tailcall)
uint64_t main_f_1678cc0(void* a0) {
    return main::sub_1678710(((uintptr_t)((char*)(a0) - 8)));
}

// sub_1679120  (orig 0x1679120, tailcall)
uint64_t main_f_1679120(void* a0) {
    return main::sub_1678cd0(((uintptr_t)((char*)(a0) - 8)));
}

// sub_1679d30  (orig 0x1679d30, tailcall)
void main_f_1679d30() { main_f_1733d30(); }

// sub_167a950  (orig 0x167a950, tailcall)
uint64_t main_f_167a950(void* a0) {
    return main::sub_167a330(((uintptr_t)((char*)(a0) - 24)));
}

// sub_167acc0  (orig 0x167acc0, tailcall)
uint64_t main_f_167acc0(void* a0) {
    return main::sub_167a960(((uintptr_t)((char*)(a0) - 24)));
}

// sub_167b440  (orig 0x167b440, tailcall)
uint64_t main_f_167b440(void* a0) {
    return main::sub_167b0d0(((uintptr_t)((char*)(a0) - 16)));
}

// sub_167b840  (orig 0x167b840, tailcall)
uint64_t main_f_167b840(void* a0) {
    return main::sub_167b450(((uintptr_t)((char*)(a0) - 16)));
}

// sub_167b8e0  (orig 0x167b8e0, tailcall)
void main_f_167b8e0() { main::sub_ce0(); }

// sub_167be80  (orig 0x167be80, tailcall)
void main_f_167be80() { main::sub_16886f0(); }

// sub_167c180  (orig 0x167c180, tailcall)
void main_f_167c180() { main::sub_ce0(); }

// sub_167c440  (orig 0x167c440, tailcall)
void main_f_167c440() { main_f_168dfa0(); }

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

// sub_167c530  (orig 0x167c530, tailcall)
uint32_t main_f_167c530() { return main_f_168e010(); }

// sub_167c540  (orig 0x167c540, tailcall)
uint32_t main_f_167c540() { return main_f_168e020(); }

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

// sub_167dde0  (orig 0x167dde0, tailcall)
uint64_t main_f_167dde0(void* a0) {
    return main::sub_1686c60(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_167e950  (orig 0x167e950, tailcall)
void main_f_167e950() { main::sub_ce0(); }

// sub_1682700  (orig 0x1682700, tailcall)
void main_f_1682700() { main::sub_1688310(); }

// sub_16829b0  (orig 0x16829b0, tailcall)
void main_f_16829b0() { main::sub_1687490(); }

// sub_1684c70  (orig 0x1684c70, tailcall)
void main_f_1684c70() { main::sub_168a8a0(); }

// sub_16854b0  (orig 0x16854b0, tailcall)
void main_f_16854b0() { main::sub_1688ab0(); }

// sub_16854f0  (orig 0x16854f0, tailcall)
void main_f_16854f0() { main_f_1688cd0(); }

// sub_1685530  (orig 0x1685530, tailcall)
void main_f_1685530() { main::sub_168a500(); }

// sub_16858b0  (orig 0x16858b0, tailcall)
void main_f_16858b0() { main_f_1688290(); }

// sub_1685aa0  (orig 0x1685aa0, tailcall)
void main_f_1685aa0() { main::sub_169a870(); }

// sub_16861d0  (orig 0x16861d0, tailcall)
void main_f_16861d0() { main_f_1733e40(); }

// sub_1686970  (orig 0x1686970, tailcall)
void main_f_1686970() { main::sub_ce0(); }

// sub_1686dc0  (orig 0x1686dc0, tailcall)
void main_f_1686dc0() { main_f_169aed0(); }

// sub_1687ad0  (orig 0x1687ad0, tailcall)
uint64_t main_f_1687ad0(void* a0) {
    return main::sub_1660a50(((uintptr_t)((char*)(a0) + 128)));
}

// sub_1688880  (orig 0x1688880, tailcall)
void main_f_1688880() { main::sub_ce0(); }

// sub_168c040  (orig 0x168c040, tailcall)
void main_f_168c040() { main::sub_1727510(); }

// sub_168c8f0  (orig 0x168c8f0, tailcall)
void main_f_168c8f0() { main::sub_ce0(); }

// sub_168dfa0  (orig 0x168dfa0, tailcall)
void main_f_168dfa0() { main_f_1731620(); }

// sub_168dfd0  (orig 0x168dfd0, tailcall)
void main_f_168dfd0() { main_f_16a8a60(); }

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

// sub_168e900  (orig 0x168e900, tailcall)
uint64_t main_f_168e900(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 432));
    return main::sub_1694080(((uintptr_t)(*(uint64_t*)((char*)(p0) + 24))));
}

// sub_168f880  (orig 0x168f880, tailcall)
void main_f_168f880() { main::sub_1723250(); }

// sub_168f8d0  (orig 0x168f8d0, tailcall)
void main_f_168f8d0() { main::sub_1723440(); }

// sub_168faf0  (orig 0x168faf0, tailcall)
void main_f_168faf0() { main::sub_1723a90(); }

// sub_16903a0  (orig 0x16903a0, tailcall)
void main_f_16903a0() { main::sub_17227f0(); }

// sub_1690680  (orig 0x1690680, tailcall)
void main_f_1690680() { main::sub_1735e30(); }

// sub_1697880  (orig 0x1697880, tailcall)
void main_f_1697880() { main::sub_ce0(); }

// sub_1697890  (orig 0x1697890, tailcall)
void main_f_1697890() { main::sub_ce0(); }

// sub_16978b0  (orig 0x16978b0, tailcall)
void main_f_16978b0() { main::sub_ce0(); }

// sub_16978c0  (orig 0x16978c0, tailcall)
void main_f_16978c0() { main::sub_ce0(); }

// sub_16978d0  (orig 0x16978d0, tailcall)
void main_f_16978d0() { main::sub_ce0(); }

// sub_169af80  (orig 0x169af80, tailcall)
void main_f_169af80() { main_f_165baa0(); }

// sub_169c000  (orig 0x169c000, tailcall)
void main_f_169c000() { main_f_165baa0(); }

// sub_16a1f40  (orig 0x16a1f40, tailcall)
void main_f_16a1f40() { main_f_165baa0(); }

// sub_16a3470  (orig 0x16a3470, tailcall)
void main_f_16a3470() { main_f_165baa0(); }

// sub_16a3bd0  (orig 0x16a3bd0, tailcall)
void main_f_16a3bd0() { main_f_165baa0(); }

// sub_16a4430  (orig 0x16a4430, tailcall)
void main_f_16a4430() { main::sub_16a4440(); }

// sub_16a51e0  (orig 0x16a51e0, tailcall)
uint64_t main_f_16a51e0(void* a0) {
    return main::sub_16ab5c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_16a8450  (orig 0x16a8450, tailcall)
void main_f_16a8450() { main_f_165baa0(); }

// sub_16a8a40  (orig 0x16a8a40, tailcall)
void main_f_16a8a40() { main_f_1739d10(); }

// sub_16a8a60  (orig 0x16a8a60, tailcall)
void main_f_16a8a60() { main::sub_1739d30(); }

// sub_16a9210  (orig 0x16a9210, tailcall)
uint64_t main_f_16a9210(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 253;
    *(uint8_t*)((char*)(a0) + 268) = (uint8_t)k1;
    *(uint32_t*)((char*)(p0) + 272) = 0;
    return main::sub_173a500(((uintptr_t)(a0)));
}

// sub_16a9310  (orig 0x16a9310, tailcall)
uint64_t main_f_16a9310(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 253;
    *(uint8_t*)((char*)(a0) + 268) = (uint8_t)k1;
    *(uint32_t*)((char*)(p0) + 272) = 0;
    return main::sub_173a6d0(((uintptr_t)(a0)));
}

// sub_16a9a50  (orig 0x16a9a50, tailcall)
void main_f_16a9a50() { main::sub_173bdc0(); }

// sub_16a9b80  (orig 0x16a9b80, tailcall)
uint64_t main_f_16a9b80(void* a0) {
    void* p0 = (void*)((uintptr_t)(a0));
    uint32_t k1 = 253;
    *(uint8_t*)((char*)(a0) + 4152L) = (uint8_t)k1;
    *(uint32_t*)((char*)(p0) + 4156L) = 0;
    return main::sub_173c090(((uintptr_t)(a0)));
}

// sub_16aafc0  (orig 0x16aafc0, tailcall)
void main_f_16aafc0() { main_f_173cfa0(); }

// sub_16afcc0  (orig 0x16afcc0, tailcall)
void main_f_16afcc0() { main::sub_173d040(); }

// sub_16b0f00  (orig 0x16b0f00, tailcall)
void main_f_16b0f00() { main::sub_174a680(); }

// sub_16b16e0  (orig 0x16b16e0, tailcall)
void main_f_16b16e0() { main_f_173cfa0(); }

// sub_16b1790  (orig 0x16b1790, tailcall)
void main_f_16b1790() { main::sub_173d040(); }

// sub_16b5470  (orig 0x16b5470, tailcall)
void main_f_16b5470() { main_f_165baa0(); }

// sub_16b5860  (orig 0x16b5860, tailcall)
void main_f_16b5860() { main_f_165baa0(); }

// sub_16b8760  (orig 0x16b8760, tailcall)
uint64_t main_f_16b8760(void* a0) {
    return main::sub_165fd50(((uintptr_t)((char*)(a0) + 144)));
}

// sub_16c2960  (orig 0x16c2960, tailcall)
void main_f_16c2960() { main::sub_ce0(); }

// sub_16c2a90  (orig 0x16c2a90, tailcall)
void main_f_16c2a90() { main::sub_16a90b0(); }

// sub_16c3080  (orig 0x16c3080, tailcall)
void main_f_16c3080() { main_f_16a9a50(); }

// sub_16c3280  (orig 0x16c3280, tailcall)
void main_f_16c3280() { main::sub_16a9ce0(); }

// sub_16c5210  (orig 0x16c5210, tailcall)
void main_f_16c5210() { main::sub_ce0(); }

// sub_16c5400  (orig 0x16c5400, tailcall)
void main_f_16c5400() { main::sub_ce0(); }

// sub_16c8010  (orig 0x16c8010, tailcall)
void main_f_16c8010() { main::sub_15a1030(); }

// sub_16c8370  (orig 0x16c8370, tailcall)
void main_f_16c8370() { main::sub_15d82c0(); }

// sub_16cba10  (orig 0x16cba10, tailcall)
void main_f_16cba10() { main_f_165baa0(); }

// sub_16ce020  (orig 0x16ce020, tailcall)
void main_f_16ce020() { main::sub_16cac60(); }

// sub_16ce1e0  (orig 0x16ce1e0, tailcall)
void main_f_16ce1e0() { main::sub_16cada0(); }

// sub_16ce5e0  (orig 0x16ce5e0, tailcall)
void main_f_16ce5e0() { main::sub_16cac60(); }

// sub_16ce780  (orig 0x16ce780, tailcall)
void main_f_16ce780() { main::sub_16cada0(); }

// sub_16d28d0  (orig 0x16d28d0, tailcall)
void main_f_16d28d0() { main::sub_ce0(); }

// sub_16d2bf0  (orig 0x16d2bf0, tailcall)
void main_f_16d2bf0() { main::sub_165ff30(); }

// sub_16d2c00  (orig 0x16d2c00, tailcall)
uint64_t main_f_16d2c00(void* a0) {
    return main::sub_165ff30(((uintptr_t)((char*)(a0) - 24)));
}

// sub_16d3120  (orig 0x16d3120, tailcall)
void main_f_16d3120() { main::sub_16d3060(); }

// sub_16d3870  (orig 0x16d3870, tailcall)
void main_f_16d3870() { main::sub_ce0(); }

// sub_16d3aa0  (orig 0x16d3aa0, tailcall)
void main_f_16d3aa0() { main_f_165baa0(); }

// sub_16d5120  (orig 0x16d5120, tailcall)
uint64_t main_f_16d5120(void* a0) {
    return main::sub_1653890(((uintptr_t)((char*)(a0) + 88)));
}

// sub_16d5db0  (orig 0x16d5db0, tailcall)
void main_f_16d5db0() { main_f_165baa0(); }

// sub_16d64d0  (orig 0x16d64d0, tailcall)
void main_f_16d64d0() { main::sub_16c9550(); }

// sub_16d6a80  (orig 0x16d6a80, tailcall)
void main_f_16d6a80() { main_f_165baa0(); }

// sub_16d6b30  (orig 0x16d6b30, tailcall)
void main_f_16d6b30() { main_f_1731620(); }

// sub_16d6bc0  (orig 0x16d6bc0, tailcall)
void main_f_16d6bc0() { main_f_16a8a60(); }

// sub_16d6ff0  (orig 0x16d6ff0, tailcall)
void main_f_16d6ff0() { main::sub_16a8ef0(); }

// sub_16d7000  (orig 0x16d7000, tailcall)
void main_f_16d7000() { main::sub_16a8f30(); }

// sub_16d7010  (orig 0x16d7010, tailcall)
void main_f_16d7010() { main::sub_16a8f70(); }

// sub_16d7020  (orig 0x16d7020, tailcall)
void main_f_16d7020() { main::sub_16a8fb0(); }

// sub_16d7030  (orig 0x16d7030, tailcall)
void main_f_16d7030() { main::sub_16a8ff0(); }

// sub_16d7040  (orig 0x16d7040, tailcall)
void main_f_16d7040() { main::sub_16a9030(); }

// sub_16d7150  (orig 0x16d7150, tailcall)
void main_f_16d7150() { main::sub_16a8cf0(); }

// sub_16d7160  (orig 0x16d7160, tailcall)
void main_f_16d7160() { main::sub_16a8d30(); }

// sub_16d7170  (orig 0x16d7170, tailcall)
void main_f_16d7170() { main::sub_16a8c70(); }

// sub_16d7180  (orig 0x16d7180, tailcall)
void main_f_16d7180() { main::sub_16a8cb0(); }

// sub_16d8350  (orig 0x16d8350, tailcall)
void main_f_16d8350() { main::sub_169e170(); }

// sub_16d8ff0  (orig 0x16d8ff0, tailcall)
void main_f_16d8ff0() { main::sub_ce0(); }

// sub_16d9030  (orig 0x16d9030, tailcall)
void main_f_16d9030() { main_f_169c000(); }

// sub_16f35e0  (orig 0x16f35e0, tailcall)
void main_f_16f35e0() { main::sub_1723b80(); }

// sub_16f6200  (orig 0x16f6200, tailcall)
void main_f_16f6200() { main_f_16a1f40(); }

// sub_17052a0  (orig 0x17052a0, tailcall)
void main_f_17052a0() { main::sub_17263e0(); }

// sub_17060c0  (orig 0x17060c0, tailcall)
void main_f_17060c0() { main::sub_17229e0(); }

// sub_1707600  (orig 0x1707600, tailcall)
void main_f_1707600() { main::sub_1723440(); }

// sub_1707b50  (orig 0x1707b50, tailcall)
void main_f_1707b50() { main::sub_1723a90(); }

// sub_1708be0  (orig 0x1708be0, tailcall)
void main_f_1708be0() { main::sub_1727a50(); }

// sub_170ba00  (orig 0x170ba00, tailcall)
void main_f_170ba00() { main_f_16a3bd0(); }

// sub_170bef0  (orig 0x170bef0, tailcall)
void main_f_170bef0() { main::sub_1731300(); }

// sub_170c470  (orig 0x170c470, tailcall)
void main_f_170c470() { main::sub_1731210(); }

// sub_170e8a0  (orig 0x170e8a0, tailcall)
void main_f_170e8a0() { main::sub_1735e30(); }

// sub_170fe80  (orig 0x170fe80, tailcall)
void main_f_170fe80() { main::sub_1731480(); }

// sub_1710520  (orig 0x1710520, tailcall)
void main_f_1710520() { main::sub_165ff30(); }

// sub_1710530  (orig 0x1710530, tailcall)
uint64_t main_f_1710530(void* a0) {
    return main::sub_165ff30(((uintptr_t)((char*)(a0) - 24)));
}

// sub_17106f0  (orig 0x17106f0, tailcall)
uint64_t main_f_17106f0(void* a0) {
    return main::sub_17105a0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_1710800  (orig 0x1710800, tailcall)
void main_f_1710800() { main::sub_1710700(); }

// sub_17110d0  (orig 0x17110d0, tailcall)
uint64_t main_f_17110d0(void* a0) {
    return main::sub_1710810(((uintptr_t)((char*)(a0) - 24)));
}

// sub_1713890  (orig 0x1713890, tailcall)
void main_f_1713890() { main::sub_15b6e10(); }

// sub_1713a30  (orig 0x1713a30, tailcall)
void main_f_1713a30() { main::sub_ce0(); }

// sub_1719200  (orig 0x1719200, tailcall)
void main_f_1719200() { main::sub_ce0(); }

// sub_1719300  (orig 0x1719300, tailcall)
void main_f_1719300() { main::sub_ce0(); }

// sub_1719400  (orig 0x1719400, tailcall)
void main_f_1719400() { main::sub_ce0(); }

// sub_171a9c0  (orig 0x171a9c0, tailcall)
void main_f_171a9c0() { main::sub_ce0(); }

// sub_171b140  (orig 0x171b140, tailcall)
void main_f_171b140() { main::sub_ce0(); }

// sub_171b590  (orig 0x171b590, tailcall)
void main_f_171b590() { main::sub_ce0(); }

// sub_171b630  (orig 0x171b630, tailcall)
void main_f_171b630() { main::sub_171b640(); }

// sub_171bb60  (orig 0x171bb60, tailcall)
void main_f_171bb60() { main::sub_171bb70(); }

// sub_171c0f0  (orig 0x171c0f0, tailcall)
void main_f_171c0f0() { main::sub_171c100(); }

// sub_171c600  (orig 0x171c600, tailcall)
void main_f_171c600() { main::sub_171c610(); }

// sub_171cb70  (orig 0x171cb70, tailcall)
void main_f_171cb70() { main::sub_171cb80(); }

// sub_171d0a0  (orig 0x171d0a0, tailcall)
void main_f_171d0a0() { main::sub_171d0b0(); }

// sub_171d600  (orig 0x171d600, tailcall)
void main_f_171d600() { main::sub_171d610(); }

// sub_171db30  (orig 0x171db30, tailcall)
void main_f_171db30() { main::sub_171db40(); }

// sub_17209d0  (orig 0x17209d0, tailcall)
void main_f_17209d0() { main::sub_ce0(); }

// sub_17210f0  (orig 0x17210f0, tailcall)
void main_f_17210f0() { main::sub_1721c60(); }

// sub_1721350  (orig 0x1721350, tailcall)
void main_f_1721350() { main::pead_MainThread(); }

// sub_1722650  (orig 0x1722650, tailcall)
void main_f_1722650() { main_f_165baa0(); }

// sub_1724e70  (orig 0x1724e70, tailcall)
void main_f_1724e70() { main::sub_ce0(); }

// sub_172e410  (orig 0x172e410, tailcall)
void main_f_172e410() { main_f_165baa0(); }

// sub_172eb00  (orig 0x172eb00, tailcall)
void main_f_172eb00() { main::sub_ce0(); }

// sub_1731620  (orig 0x1731620, tailcall)
void main_f_1731620() { main_f_16a8a40(); }

// sub_1731720  (orig 0x1731720, tailcall)
void main_f_1731720() { main_f_173cfa0(); }

// sub_1733d40  (orig 0x1733d40, tailcall)
void main_f_1733d40() { main::sub_ce0(); }

// sub_1733e50  (orig 0x1733e50, tailcall)
void main_f_1733e50() { main::sub_ce0(); }

// sub_1733ec0  (orig 0x1733ec0, tailcall)
void main_f_1733ec0() { main_f_165baa0(); }

// sub_1737e60  (orig 0x1737e60, tailcall)
void main_f_1737e60() { main::sub_ce0(); }

// sub_1739770  (orig 0x1739770, tailcall)
void main_f_1739770() { main::sub_ce0(); }

// sub_1739c60  (orig 0x1739c60, tailcall)
void main_f_1739c60() { main_f_173cfa0(); }

// sub_173b1a0  (orig 0x173b1a0, tailcall)
uint64_t main_f_173b1a0(void* a0) {
    *(uint64_t*)((char*)(a0) + 8) = 0;
    return main::sub_173b1b0(((uintptr_t)(a0)));
}

// sub_173b410  (orig 0x173b410, tailcall)
uint64_t main_f_173b410(void* a0) {
    return main::sub_1655c70(((uintptr_t)((char*)(a0) + 832)));
}

// sub_173e7d0  (orig 0x173e7d0, tailcall)
void main_f_173e7d0() { main::sub_ce0(); }

// sub_173f370  (orig 0x173f370, tailcall)
uint64_t main_f_173f370(void* a0) {
    return main::sub_174fcd0(((uintptr_t)(*(uint8_t*)((char*)(a0)))));
}

// sub_1747ba0  (orig 0x1747ba0, tailcall)
void main_f_1747ba0() { main::sub_ce0(); }

// sub_1747c00  (orig 0x1747c00, tailcall)
void main_f_1747c00() { main_f_173cfa0(); }

// sub_1748960  (orig 0x1748960, tailcall)
void main_f_1748960() { main::sub_1748f30(); }

// sub_1748990  (orig 0x1748990, tailcall)
void main_f_1748990() { main::sub_ce0(); }

// sub_1749060  (orig 0x1749060, tailcall)
void main_f_1749060() { main::sub_ce0(); }

// sub_1749800  (orig 0x1749800, tailcall)
void main_f_1749800() { main_f_1748960(); }

// sub_1749f00  (orig 0x1749f00, tailcall)
uint64_t main_f_1749f00(void* a0) {
    return main::sub_1652cf0(((uintptr_t)((char*)(a0) + 8)));
}

// sub_1749f10  (orig 0x1749f10, tailcall)
uint64_t main_f_1749f10(void* a0) {
    return main::sub_1652cf0(((uintptr_t)((char*)(a0) + 40)));
}

// sub_1749f20  (orig 0x1749f20, tailcall)
uint64_t main_f_1749f20(void* a0) {
    return main::sub_1652cf0(((uintptr_t)((char*)(a0) + 72)));
}

// sub_174a5e0  (orig 0x174a5e0, tailcall)
uint64_t main_f_174a5e0(void* a0) {
    return main::sub_1749a80(((uintptr_t)((char*)(a0) + 136)));
}

// sub_174b5e0  (orig 0x174b5e0, tailcall)
void main_f_174b5e0() { main::sub_174f410(); }

// sub_174c610  (orig 0x174c610, tailcall)
void main_f_174c610() { main::sub_174f410(); }

// sub_174e3f0  (orig 0x174e3f0, tailcall)
void main_f_174e3f0() { main_f_173cfa0(); }

// sub_174fe60  (orig 0x174fe60, tailcall)
void main_f_174fe60() { main::sub_8c0(); }

// sub_1756a60  (orig 0x1756a60, tailcall)
void main_f_1756a60() { main::sub_1755420(); }

// sub_175cc70  (orig 0x175cc70, tailcall)
void main_f_175cc70() { main::sub_1778340(); }

// sub_17687c0  (orig 0x17687c0, tailcall)
uint64_t main_f_17687c0(uint64_t a0) {
    return main::sub_1778700(((uintptr_t)(0)));
}

// sub_1777420  (orig 0x1777420, tailcall)
void main_f_1777420() { main::sub_1777df0(); }

// sub_17774d0  (orig 0x17774d0, tailcall)
void main_f_17774d0() { gflib3::nn_ssl(); }

// sub_17774e0  (orig 0x17774e0, tailcall)
void main_f_17774e0() { main::sub_1777f50(); }

// sub_1777570  (orig 0x1777570, tailcall)
void main_f_1777570() { main::sub_1777f00(); }

// sub_1777580  (orig 0x1777580, tailcall)
uint32_t main_f_1777580() { return main_f_1777f30(); }

// sub_1777590  (orig 0x1777590, tailcall)
uint32_t main_f_1777590() { return main_f_1777f40(); }

// sub_177d080  (orig 0x177d080, tailcall)
void main_f_177d080() { main_f_177cde0(); }

// sub_177d9c0  (orig 0x177d9c0, tailcall)
void main_f_177d9c0() { main::sub_ce0(); }

// sub_177dd70  (orig 0x177dd70, tailcall)
void main_f_177dd70() { main::sub_ce0(); }

// sub_1782380  (orig 0x1782380, tailcall)
void main_f_1782380() { main_f_17792a0(); }

// sub_1783b10  (orig 0x1783b10, tailcall)
void main_f_1783b10() { main_f_17792a0(); }

// sub_17915f0  (orig 0x17915f0, tailcall)
void main_f_17915f0() { main::sub_ce0(); }

// sub_1799610  (orig 0x1799610, tailcall)
uint64_t main_f_1799610(void* a0) {
    return main::sub_17b8680(((uintptr_t)((char*)(a0) + 40)));
}

// sub_179a070  (orig 0x179a070, tailcall)
void main_f_179a070() { main::sub_ce0(); }

// sub_179a740  (orig 0x179a740, tailcall)
void main_f_179a740() { main::sub_ce0(); }

// sub_179cde0  (orig 0x179cde0, tailcall)
void main_f_179cde0() { main::sub_ce0(); }

// sub_179f260  (orig 0x179f260, tailcall)
uint64_t main_f_179f260(void* a0) {
    return main::sub_179f270(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_17a2d00  (orig 0x17a2d00, tailcall)
void main_f_17a2d00() { main::sub_ce0(); }

// sub_17a2d40  (orig 0x17a2d40, tailcall)
void main_f_17a2d40() { main::sub_ce0(); }

// sub_17a2db0  (orig 0x17a2db0, tailcall)
void main_f_17a2db0() { main::sub_ce0(); }

// sub_17a2e20  (orig 0x17a2e20, tailcall)
void main_f_17a2e20() { main::sub_ce0(); }

// sub_17a2e60  (orig 0x17a2e60, tailcall)
void main_f_17a2e60() { main::sub_ce0(); }

// sub_17a2f40  (orig 0x17a2f40, tailcall)
void main_f_17a2f40() { main::sub_ce0(); }

// sub_17a30a0  (orig 0x17a30a0, tailcall)
void main_f_17a30a0() { main::sub_ce0(); }

// sub_17a3140  (orig 0x17a3140, tailcall)
void main_f_17a3140() { main::sub_ce0(); }

// sub_17a35f0  (orig 0x17a35f0, tailcall)
void main_f_17a35f0() { main_f_17a9e80(); }

// sub_17a4390  (orig 0x17a4390, tailcall)
void main_f_17a4390() { main_f_17a9e80(); }

// sub_17a6620  (orig 0x17a6620, tailcall)
void main_f_17a6620() { main::sub_ce0(); }

// sub_17aacf0  (orig 0x17aacf0, tailcall)
void main_f_17aacf0() { main::sub_ce0(); }

// sub_17b05b0  (orig 0x17b05b0, tailcall)
void main_f_17b05b0() { main_f_17a9e80(); }

// sub_17b1eb0  (orig 0x17b1eb0, tailcall)
uint64_t main_f_17b1eb0(void* a0) {
    return main::sub_17a9da0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 216))));
}

// sub_17b2fb0  (orig 0x17b2fb0, tailcall)
void main_f_17b2fb0() { main_f_17a9e80(); }

// sub_17b49e0  (orig 0x17b49e0, tailcall)
void main_f_17b49e0() { main::sub_ce0(); }

// sub_17b6ef0  (orig 0x17b6ef0, tailcall)
uint64_t main_f_17b6ef0(void* a0) {
    return main::sub_17a9da0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 320))));
}

// sub_17b8900  (orig 0x17b8900, tailcall)
void main_f_17b8900() { main::sub_ce0(); }

// sub_17b8f20  (orig 0x17b8f20, tailcall)
void main_f_17b8f20() { main::sub_ce0(); }

// sub_17b9040  (orig 0x17b9040, tailcall)
void main_f_17b9040() { main::uConstantBufferForVertexShader(); }

// sub_17ba090  (orig 0x17ba090, tailcall)
void main_f_17ba090() { main_f_17913f0(); }

// sub_17bcc50  (orig 0x17bcc50, tailcall)
uint64_t main_f_17bcc50(void* a0) {
    return main::sub_17a9da0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 280))));
}

// sub_17c1f90  (orig 0x17c1f90, tailcall)
uint64_t main_f_17c1f90(void* a0) {
    return main::sub_17d2b10(((uintptr_t)((char*)(a0) + 280)));
}

// sub_17d4c10  (orig 0x17d4c10, tailcall)
void main_f_17d4c10() { main::sub_ce0(); }

// sub_17dfe10  (orig 0x17dfe10, tailcall)
void main_f_17dfe10() { main::sub_ce0(); }

// sub_17e5d60  (orig 0x17e5d60, tailcall)
void main_f_17e5d60() { main::sub_ce0(); }

