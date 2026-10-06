/* main -- 1133 functions verified to match the original.
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

// sub_16598a0  (orig 0x16598a0, mov_ret)
uint32_t main_f_16598a0() { return 16; }

// sub_1659bf0  (orig 0x1659bf0, mov_ret)
uint32_t main_f_1659bf0() { return 16; }

// sub_165af60  (orig 0x165af60, straight)
void main_f_165af60(void* a0) {
    uint32_t k0 = -1;
    *(uint64_t*)((char*)(a0)) = (uint64_t)k0;
    *(uint8_t*)((char*)(a0) + 8) = 0;
    *(uint32_t*)((char*)(a0) + 12) = -1;
}

// sub_165af80  (orig 0x165af80, ret_only)
void main_f_165af80() {}

// sub_165ba30  (orig 0x165ba30, ret_only)
void main_f_165ba30() {}

// sub_165ba40  (orig 0x165ba40, ret_only)
void main_f_165ba40() {}

// sub_165bab0  (orig 0x165bab0, ret_only)
void main_f_165bab0() {}

// sub_165bc60  (orig 0x165bc60, ret_only)
void main_f_165bc60() {}

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
    uint32_t k0 = 1;
    uint32_t k1 = 1;
    uint32_t k2 = 1;
    uint32_t k3 = 1;
    uint32_t k4 = 1;
    uint32_t k5 = 1;
    uint32_t k6 = 1;
    uint32_t k7 = 1;
    uint32_t k8 = 1;
    uint32_t k9 = 1;
    uint32_t k10 = 1;
    uint32_t k11 = 1;
    *(uint8_t*)((char*)(a0) + 32) = (uint8_t)k0;
    *(uint8_t*)((char*)(a0) + 136) = (uint8_t)k1;
    *(uint8_t*)((char*)(a0) + 240) = (uint8_t)k2;
    *(uint8_t*)((char*)(a0) + 344) = (uint8_t)k3;
    *(uint8_t*)((char*)(a0) + 448) = (uint8_t)k4;
    *(uint8_t*)((char*)(a0) + 552) = (uint8_t)k5;
    *(uint8_t*)((char*)(a0) + 656) = (uint8_t)k6;
    *(uint8_t*)((char*)(a0) + 760) = (uint8_t)k7;
    *(uint8_t*)((char*)(a0) + 864) = (uint8_t)k8;
    *(uint8_t*)((char*)(a0) + 968) = (uint8_t)k9;
    *(uint8_t*)((char*)(a0) + 1072) = (uint8_t)k10;
    *(uint8_t*)((char*)(a0) + 1176) = (uint8_t)k11;
}

// sub_165da10  (orig 0x165da10, ret_only)
void main_f_165da10() {}

// sub_165dad0  (orig 0x165dad0, setter-chain-zero)
void main_f_165dad0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 16) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 24) = 0;
}

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

// sub_16609c0  (orig 0x16609c0, mov_ret)
uint32_t main_f_16609c0() { return 32; }

// sub_1660a30  (orig 0x1660a30, ret_only)
void main_f_1660a30() {}

// sub_1660cb0  (orig 0x1660cb0, setter)
void main_f_1660cb0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_1661340  (orig 0x1661340, mov_ret)
uint32_t main_f_1661340() { return 32; }

// sub_1661350  (orig 0x1661350, mov_ret)
uint32_t main_f_1661350() { return 64; }

// sub_1661510  (orig 0x1661510, setter-chain)
void main_f_1661510(void* a0) { *(uint64_t*)((char*)(a0) + 112) = 0; *(uint64_t*)((char*)(a0) + 120) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 128) = 0; }

// sub_1661520  (orig 0x1661520, ret_only)
void main_f_1661520() {}

// sub_16615e0  (orig 0x16615e0, setter-chain)
void main_f_16615e0(void* a0) { *(uint64_t*)((char*)(a0) + 112) = 0; *(uint32_t*)((char*)(a0) + 120) = 0; }

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

// sub_1662740  (orig 0x1662740, ret_only)
void main_f_1662740() {}

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

// sub_1667c60  (orig 0x1667c60, ret_only)
void main_f_1667c60() {}

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

// sub_166a660  (orig 0x166a660, ret_only)
void main_f_166a660() {}

// sub_166a670  (orig 0x166a670, mov_ret)
uint32_t main_f_166a670() { return 0; }

// sub_166ae60  (orig 0x166ae60, ret_only)
void main_f_166ae60() {}

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

// sub_166d890  (orig 0x166d890, ret_only)
void main_f_166d890() {}

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

// sub_16735f0  (orig 0x16735f0, compare-pred)
bool main_f_16735f0(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 4768) - 2)) < (uint32_t)(3); }

// sub_1673660  (orig 0x1673660, compare-pred)
bool main_f_1673660(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 4880) - 2)) < (uint32_t)(3); }

// sub_1673e40  (orig 0x1673e40, compare-pred)
bool main_f_1673e40(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 4824) - 2)) < (uint32_t)(3); }

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

// sub_16768b0  (orig 0x16768b0, compare-pred)
bool main_f_16768b0(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 3464) - 2)) < (uint32_t)(3); }

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

// sub_167c190  (orig 0x167c190, ptr_add)
void* main_f_167c190(void* a0) { return (char*)a0 + 85; }

// sub_167c1a0  (orig 0x167c1a0, getter)
uint32_t main_f_167c1a0(void* a0) { return *(uint32_t*)((char*)(a0) + 472); }

// sub_167c380  (orig 0x167c380, ptr_add)
void* main_f_167c380(void* a0) { return (char*)a0 + 88; }

// sub_167c480  (orig 0x167c480, mov_ret)
uint32_t main_f_167c480() { return 8; }

// sub_167c490  (orig 0x167c490, mov_ret)
uint32_t main_f_167c490() { return 28; }

// sub_167c4a0  (orig 0x167c4a0, mov_ret)
uint32_t main_f_167c4a0() { return 1500; }

// sub_167c4b0  (orig 0x167c4b0, mov_ret)
uint32_t main_f_167c4b0() { return 1500; }

// sub_167c510  (orig 0x167c510, mov_ret)
uint32_t main_f_167c510() { return 24; }

// sub_167c520  (orig 0x167c520, mov_ret)
uint32_t main_f_167c520() { return 0; }

// sub_167c550  (orig 0x167c550, mov_ret)
uint32_t main_f_167c550() { return 1; }

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
    uint32_t k0 = 64;
    *(uint8_t*)((char*)(a0) + 1148) = (uint8_t)k0;
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

// sub_1682890  (orig 0x1682890, ret_only)
void main_f_1682890() {}

// sub_1684b90  (orig 0x1684b90, ret_only)
void main_f_1684b90() {}

// sub_16853f0  (orig 0x16853f0, ret_only)
void main_f_16853f0() {}

// sub_1685570  (orig 0x1685570, ret_only)
void main_f_1685570() {}

// sub_1685850  (orig 0x1685850, compare)
bool main_f_1685850(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 8)) == (uint64_t)(6); }

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

// sub_1685c20  (orig 0x1685c20, ret_only)
void main_f_1685c20() {}

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

// sub_1686ce0  (orig 0x1686ce0, ret_only)
void main_f_1686ce0() {}

// sub_1686cf0  (orig 0x1686cf0, ptr_add)
void* main_f_1686cf0(void* a0) { return (char*)a0 + 32; }

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

// sub_1688670  (orig 0x1688670, ret_only)
void main_f_1688670() {}

// sub_1688860  (orig 0x1688860, ptr_add)
void* main_f_1688860(void* a0) { return (char*)a0 + 16; }

// sub_1688870  (orig 0x1688870, ret_only)
void main_f_1688870() {}

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

// sub_168c8d0  (orig 0x168c8d0, ret_only)
void main_f_168c8d0() {}

// sub_168c8e0  (orig 0x168c8e0, ret_only)
void main_f_168c8e0() {}

// sub_168c900  (orig 0x168c900, mov_ret)
uint32_t main_f_168c900() { return 1; }

// sub_168cac0  (orig 0x168cac0, mov_ret)
uint32_t main_f_168cac0() { return 0; }

// sub_168d620  (orig 0x168d620, mov_ret)
uint32_t main_f_168d620() { return 0; }

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

// sub_168f890  (orig 0x168f890, ret_only)
void main_f_168f890() {}

// sub_168fb00  (orig 0x168fb00, ret_only)
void main_f_168fb00() {}

// sub_16903b0  (orig 0x16903b0, ret_only)
void main_f_16903b0() {}

// sub_1690620  (orig 0x1690620, ret_only)
void main_f_1690620() {}

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

// sub_1693bc0  (orig 0x1693bc0, setter-chain-zero)
void main_f_1693bc0(void* a0) {
    *(uint64_t*)((char*)a0 + 1312) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 1320) = 0;
}

// sub_1694e90  (orig 0x1694e90, compare)
bool main_f_1694e90(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1256)) == (uint64_t)(1); }

// sub_1695d90  (orig 0x1695d90, compare-pred)
bool main_f_1695d90(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 1032)) + 92)) != (uint32_t)(0); }

// sub_1697210  (orig 0x1697210, compare)
bool main_f_1697210(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1232)) != (uint64_t)(0); }

// sub_1697830  (orig 0x1697830, setter-chain)
void main_f_1697830(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint32_t*)((char*)(a0) + 8) = a2; *(uint16_t*)((char*)(a0) + 12) = 0; }

// sub_16978a0  (orig 0x16978a0, ret_only)
void main_f_16978a0() {}

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

// sub_169af20  (orig 0x169af20, getter)
uint32_t main_f_169af20(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_169bbb0  (orig 0x169bbb0, mov_ret)
uint32_t main_f_169bbb0() { return 0; }

// sub_169bfa0  (orig 0x169bfa0, ret_only)
void main_f_169bfa0() {}

// sub_169bfb0  (orig 0x169bfb0, ret_only)
void main_f_169bfb0() {}

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

// sub_16a3b60  (orig 0x16a3b60, ret_only)
void main_f_16a3b60() {}

// sub_16a4420  (orig 0x16a4420, ret_only)
void main_f_16a4420() {}

// sub_16a56b0  (orig 0x16a56b0, setter)
void main_f_16a56b0(void* a0) { *(uint64_t*)((char*)(a0) + 196) = 0; }

// sub_16a56c0  (orig 0x16a56c0, getter)
uint64_t main_f_16a56c0(void* a0) { return *(uint64_t*)((char*)(a0) + 888); }

// sub_16a6bd0  (orig 0x16a6bd0, getter)
uint8_t main_f_16a6bd0(void* a0) { return *(uint8_t*)((char*)(a0) + 190); }

// sub_16a7890  (orig 0x16a7890, getter)
uint64_t main_f_16a7890(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_16a7a50  (orig 0x16a7a50, getter)
uint8_t main_f_16a7a50(void* a0) { return *(uint8_t*)((char*)(a0) + 171); }

// sub_16a7b40  (orig 0x16a7b40, setter)
void main_f_16a7b40(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_16a7b50  (orig 0x16a7b50, setter)
void main_f_16a7b50(void* a0) { *(uint64_t*)((char*)(a0) + 96) = 0; }

// sub_16a7be0  (orig 0x16a7be0, setter)
void main_f_16a7be0(void* a0) { *(uint64_t*)((char*)(a0) + 104) = 0; }

// sub_16a7bf0  (orig 0x16a7bf0, setter)
void main_f_16a7bf0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 112) = a1; }

// sub_16a7c00  (orig 0x16a7c00, setter)
void main_f_16a7c00(void* a0) { *(uint64_t*)((char*)(a0) + 112) = 0; }

// sub_16a7c40  (orig 0x16a7c40, getter)
uint32_t main_f_16a7c40(void* a0) { return *(uint32_t*)((char*)(a0) + 184); }

// sub_16a7c60  (orig 0x16a7c60, getter)
uint8_t main_f_16a7c60(void* a0) { return *(uint8_t*)((char*)(a0) + 226); }

// sub_16a7e70  (orig 0x16a7e70, ret_only)
void main_f_16a7e70() {}

// sub_16a7e80  (orig 0x16a7e80, setter)
void main_f_16a7e80(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 288) = a1; }

// sub_16a7e90  (orig 0x16a7e90, setter)
void main_f_16a7e90(void* a0) { *(uint64_t*)((char*)(a0) + 288) = 0; }

// sub_16a7ea0  (orig 0x16a7ea0, getter)
uint8_t main_f_16a7ea0(void* a0) { return *(uint8_t*)((char*)(a0) + 172); }

// sub_16a7eb0  (orig 0x16a7eb0, getter)
uint32_t main_f_16a7eb0(void* a0) { return *(uint32_t*)((char*)(a0) + 200); }

// sub_16a7ec0  (orig 0x16a7ec0, getter)
uint64_t main_f_16a7ec0(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_16a8020  (orig 0x16a8020, getter)
uint8_t main_f_16a8020(void* a0) { return *(uint8_t*)((char*)(a0) + 189); }

// sub_16a80b0  (orig 0x16a80b0, getter)
uint32_t main_f_16a80b0(void* a0) { return *(uint32_t*)((char*)(a0) + 176); }

// sub_16a80d0  (orig 0x16a80d0, getter)
uint8_t main_f_16a80d0(void* a0) { return *(uint8_t*)((char*)(a0) + 298); }

// sub_16a80e0  (orig 0x16a80e0, getter)
uint8_t main_f_16a80e0(void* a0) { return *(uint8_t*)((char*)(a0) + 192); }

// sub_16a82e0  (orig 0x16a82e0, getter)
uint8_t main_f_16a82e0(void* a0) { return *(uint8_t*)((char*)(a0) + 299); }

// sub_16a8300  (orig 0x16a8300, getter)
uint64_t main_f_16a8300(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_16a8310  (orig 0x16a8310, getter)
uint64_t main_f_16a8310(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_16a8320  (orig 0x16a8320, getter)
uint64_t main_f_16a8320(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_16a8330  (orig 0x16a8330, getter)
uint64_t main_f_16a8330(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_16a8340  (orig 0x16a8340, getter)
uint8_t main_f_16a8340(void* a0) { return *(uint8_t*)((char*)(a0) + 188); }

// sub_16a8350  (orig 0x16a8350, straight)
void main_f_16a8350(void* a0, void* a1) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0) + 216) = *(uint64_t*)((char*)(a1));
    *(uint8_t*)((char*)(a0) + 224) = (uint8_t)k0;
}

// sub_16a8370  (orig 0x16a8370, getter)
uint64_t main_f_16a8370(void* a0) { return *(uint64_t*)((char*)(a0) + 864); }

// sub_16a8380  (orig 0x16a8380, getter)
uint64_t main_f_16a8380(void* a0) { return *(uint64_t*)((char*)(a0) + 872); }

// sub_16a8390  (orig 0x16a8390, getter)
uint64_t main_f_16a8390(void* a0) { return *(uint64_t*)((char*)(a0) + 880); }

// sub_16a83a0  (orig 0x16a83a0, setter)
void main_f_16a83a0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 858) = a1; }

// sub_16a83b0  (orig 0x16a83b0, setter)
void main_f_16a83b0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 860) = a1; }

// sub_16a83c0  (orig 0x16a83c0, getter)
uint16_t main_f_16a83c0(void* a0) { return *(uint16_t*)((char*)(a0) + 858); }

// sub_16a83d0  (orig 0x16a83d0, getter)
uint16_t main_f_16a83d0(void* a0) { return *(uint16_t*)((char*)(a0) + 860); }

// sub_16a8a00  (orig 0x16a8a00, ret_only)
void main_f_16a8a00() {}

// sub_16a9920  (orig 0x16a9920, ret_only)
void main_f_16a9920() {}

// sub_16a99f0  (orig 0x16a99f0, setter)
void main_f_16a99f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_16a9a00  (orig 0x16a9a00, getter)
uint8_t main_f_16a9a00(void* a0) { return *(uint8_t*)((char*)(a0) + 44); }

// sub_16a9a10  (orig 0x16a9a10, getter)
uint8_t main_f_16a9a10(void* a0) { return *(uint8_t*)((char*)(a0) + 45); }

// sub_16aae40  (orig 0x16aae40, ret_only)
void main_f_16aae40() {}

// sub_16afc70  (orig 0x16afc70, setter)
void main_f_16afc70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 72) = a1; }

// sub_16afc80  (orig 0x16afc80, setter)
void main_f_16afc80(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 80) = a1; }

// sub_16afc90  (orig 0x16afc90, setter)
void main_f_16afc90(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_16afca0  (orig 0x16afca0, ret_only)
void main_f_16afca0() {}

// sub_16afcb0  (orig 0x16afcb0, mov_ret)
uint32_t main_f_16afcb0() { return 24; }

// sub_16b0e80  (orig 0x16b0e80, ret_only)
void main_f_16b0e80() {}

// sub_16b1670  (orig 0x16b1670, ret_only)
void main_f_16b1670() {}

// sub_16b1780  (orig 0x16b1780, ret_only)
void main_f_16b1780() {}

// sub_16b3e70  (orig 0x16b3e70, mov_ret)
uint32_t main_f_16b3e70() { return 0; }

// sub_16b3e80  (orig 0x16b3e80, ret_only)
void main_f_16b3e80() {}

// sub_16b3e90  (orig 0x16b3e90, mov_ret)
uint32_t main_f_16b3e90() { return 20; }

// sub_16b5420  (orig 0x16b5420, ret_only)
void main_f_16b5420() {}

// sub_16b5780  (orig 0x16b5780, setter)
void main_f_16b5780(void* a0) { *(uint8_t*)((char*)(a0) + 100) = 0; }

// sub_16b5790  (orig 0x16b5790, ret_only)
void main_f_16b5790() {}

// sub_16b6da0  (orig 0x16b6da0, ret_only)
void main_f_16b6da0() {}

// sub_16b71a0  (orig 0x16b71a0, mov_ret)
uint32_t main_f_16b71a0() { return 0; }

// sub_16b7b10  (orig 0x16b7b10, straight)
void main_f_16b7b10(void* a0) {
    *(uint64_t*)((char*)(a0) + 120) = 0;
    *(uint32_t*)((char*)(a0) + 128) = 16776960;
}

// sub_16b7b90  (orig 0x16b7b90, ret_only)
void main_f_16b7b90() {}

// sub_16b8820  (orig 0x16b8820, ret_only)
void main_f_16b8820() {}

// sub_16bcc90  (orig 0x16bcc90, setter)
void main_f_16bcc90(void* a0) { *(uint32_t*)((char*)(a0) + 248) = 0; }

// sub_16bccc0  (orig 0x16bccc0, ret_only)
void main_f_16bccc0() {}

// sub_16bccd0  (orig 0x16bccd0, ret_only)
void main_f_16bccd0() {}

// sub_16bd4f0  (orig 0x16bd4f0, ret_only)
void main_f_16bd4f0() {}

// sub_16bd540  (orig 0x16bd540, ret_only)
void main_f_16bd540() {}

// sub_16bf6e0  (orig 0x16bf6e0, ret_only)
void main_f_16bf6e0() {}

// sub_16c03f0  (orig 0x16c03f0, setter-chain-zero)
void main_f_16c03f0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 80) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 64) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 1500) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
}

// sub_16c0410  (orig 0x16c0410, ret_only)
void main_f_16c0410() {}

// sub_16c1b80  (orig 0x16c1b80, ret_only)
void main_f_16c1b80() {}

// sub_16c1b90  (orig 0x16c1b90, setter-chain)
void main_f_16c1b90(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint8_t*)((char*)(a0) + 8) = 0; }

// sub_16c1ba0  (orig 0x16c1ba0, ret_only)
void main_f_16c1ba0() {}

// sub_16c1c00  (orig 0x16c1c00, straight)
void main_f_16c1c00(void* a0, void* a1) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)k0;
}

// sub_16c1c20  (orig 0x16c1c20, setter-chain)
void main_f_16c1c20(void* a0) { *(uint8_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0)) = 0; }

// sub_16c2830  (orig 0x16c2830, ret_only)
void main_f_16c2830() {}

// sub_16c2950  (orig 0x16c2950, mov_ret)
uint32_t main_f_16c2950() { return 28; }

// sub_16c2970  (orig 0x16c2970, mov_ret)
uint32_t main_f_16c2970() { return 16; }

// sub_16c2f80  (orig 0x16c2f80, ret_only)
void main_f_16c2f80() {}

// sub_16c3da0  (orig 0x16c3da0, ret_only)
void main_f_16c3da0() {}

// sub_16c48e0  (orig 0x16c48e0, getter)
uint32_t main_f_16c48e0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_16c4930  (orig 0x16c4930, getter)
uint32_t main_f_16c4930(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_16c4940  (orig 0x16c4940, getter)
uint8_t main_f_16c4940(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_16c4ba0  (orig 0x16c4ba0, getter)
uint32_t main_f_16c4ba0(void* a0) { return *(uint32_t*)((char*)(a0) + 564); }

// sub_16c4cb0  (orig 0x16c4cb0, ptr_add)
void* main_f_16c4cb0(void* a0) { return (char*)a0 + 672; }

// sub_16c4dc0  (orig 0x16c4dc0, ptr_add)
void* main_f_16c4dc0(void* a0) { return (char*)a0 + 1432; }

// sub_16c4e00  (orig 0x16c4e00, getter)
uint8_t main_f_16c4e00(void* a0) { return *(uint8_t*)((char*)(a0) + 568); }

// sub_16c4e20  (orig 0x16c4e20, getter)
uint8_t main_f_16c4e20(void* a0) { return *(uint8_t*)((char*)(a0) + 569); }

// sub_16c4e40  (orig 0x16c4e40, getter)
uint32_t main_f_16c4e40(void* a0) { return *(uint32_t*)((char*)(a0) + 572); }

// sub_16c4e60  (orig 0x16c4e60, getter)
uint32_t main_f_16c4e60(void* a0) { return *(uint32_t*)((char*)(a0) + 576); }

// sub_16c4e80  (orig 0x16c4e80, getter)
uint32_t main_f_16c4e80(void* a0) { return *(uint32_t*)((char*)(a0) + 580); }

// sub_16c4ea0  (orig 0x16c4ea0, getter)
uint8_t main_f_16c4ea0(void* a0) { return *(uint8_t*)((char*)(a0) + 584); }

// sub_16c4ec0  (orig 0x16c4ec0, ptr_add)
void* main_f_16c4ec0(void* a0) { return (char*)a0 + 592; }

// sub_16c4ee0  (orig 0x16c4ee0, ptr_add)
void* main_f_16c4ee0(void* a0) { return (char*)a0 + 632; }

// sub_16c5140  (orig 0x16c5140, getter)
uint16_t main_f_16c5140(void* a0) { return *(uint16_t*)((char*)(a0) + 664); }

// sub_16c5150  (orig 0x16c5150, getter)
uint32_t main_f_16c5150(void* a0) { return *(uint32_t*)((char*)(a0) + 668); }

// sub_16c5170  (orig 0x16c5170, getter)
uint32_t main_f_16c5170(void* a0) { return *(uint32_t*)((char*)(a0) + 832); }

// sub_16c5200  (orig 0x16c5200, ret_only)
void main_f_16c5200() {}

// sub_16c6880  (orig 0x16c6880, getter)
uint8_t main_f_16c6880(void* a0) { return *(uint8_t*)((char*)(a0) + 178); }

// sub_16c7e60  (orig 0x16c7e60, ret_only)
void main_f_16c7e60() {}

// sub_16c7e70  (orig 0x16c7e70, setter)
void main_f_16c7e70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 88) = a1; }

// sub_16c8350  (orig 0x16c8350, mov_ret)
uint32_t main_f_16c8350() { return 49152; }

// sub_16c8360  (orig 0x16c8360, mov_ret)
uint32_t main_f_16c8360() { return 65535; }

// sub_16c8410  (orig 0x16c8410, setter)
void main_f_16c8410(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 396) = a1; }

// sub_16c8420  (orig 0x16c8420, getter)
uint32_t main_f_16c8420(void* a0) { return *(uint32_t*)((char*)(a0) + 396); }

// sub_16c8c60  (orig 0x16c8c60, getter)
uint8_t main_f_16c8c60(void* a0) { return *(uint8_t*)((char*)(a0) + 528); }

// sub_16c8d00  (orig 0x16c8d00, setter)
void main_f_16c8d00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 552) = a1; }

// sub_16c8d10  (orig 0x16c8d10, setter)
void main_f_16c8d10(void* a0) { *(uint64_t*)((char*)(a0) + 552) = 0; }

// sub_16c9670  (orig 0x16c9670, ret_only)
void main_f_16c9670() {}

// sub_16c9680  (orig 0x16c9680, ret_only)
void main_f_16c9680() {}

// sub_16ca3c0  (orig 0x16ca3c0, ret_only)
void main_f_16ca3c0() {}

// sub_16ca5c0  (orig 0x16ca5c0, compare)
bool main_f_16ca5c0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 32)) == (uint64_t)(3); }

// sub_16ca650  (orig 0x16ca650, ptr_add)
void* main_f_16ca650(void* a0) { return (char*)a0 + 336; }

// sub_16ca660  (orig 0x16ca660, getter)
uint16_t main_f_16ca660(void* a0) { return *(uint16_t*)((char*)(a0) + 34); }

// sub_16ca670  (orig 0x16ca670, ptr_add)
void* main_f_16ca670(void* a0) { return (char*)a0 + 56; }

// sub_16ca680  (orig 0x16ca680, getter)
uint64_t main_f_16ca680(void* a0) { return *(uint64_t*)((char*)(a0) + 512); }

// sub_16ca690  (orig 0x16ca690, ptr_add)
void* main_f_16ca690(void* a0) { return (char*)a0 + 568; }

// sub_16ca720  (orig 0x16ca720, ret_only)
void main_f_16ca720() {}

// sub_16ca780  (orig 0x16ca780, ret_only)
void main_f_16ca780() {}

// sub_16cb950  (orig 0x16cb950, setter-chain-zero)
void main_f_16cb950(void* a0) {
    *(uint64_t*)((char*)a0 + 1472) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 1480) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 1488) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 1496) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 1504) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 1512) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 1520) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 1528) = 0;
}

// sub_16cb980  (orig 0x16cb980, getter)
uint32_t main_f_16cb980(void* a0) { return *(uint32_t*)((char*)(a0) + 1480); }

// sub_16cb9a0  (orig 0x16cb9a0, ret_only)
void main_f_16cb9a0() {}

// sub_16cb9b0  (orig 0x16cb9b0, mov_ret)
uint32_t main_f_16cb9b0() { return 0; }

// sub_16cd590  (orig 0x16cd590, ret_only)
void main_f_16cd590() {}

// sub_16cdeb0  (orig 0x16cdeb0, ret_only)
void main_f_16cdeb0() {}

// sub_16ce1f0  (orig 0x16ce1f0, mov_ret)
uint32_t main_f_16ce1f0() { return 2000; }

// sub_16ce300  (orig 0x16ce300, compare)
bool main_f_16ce300(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1472)) != (uint64_t)(0); }

// sub_16ce310  (orig 0x16ce310, compare)
bool main_f_16ce310(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1472)) != (uint64_t)(0); }

// sub_16ce4f0  (orig 0x16ce4f0, ptr_add)
void* main_f_16ce4f0(void* a0) { return (char*)a0 + 1784; }

// sub_16ce500  (orig 0x16ce500, ptr_add)
void* main_f_16ce500(void* a0) { return (char*)a0 + 1912; }

// sub_16ce7c0  (orig 0x16ce7c0, mov_ret)
uint32_t main_f_16ce7c0() { return 2500; }

// sub_16d24a0  (orig 0x16d24a0, setter)
void main_f_16d24a0(void* a0) { *(uint64_t*)((char*)(a0) + 6064L) = 0; }

// sub_16d24b0  (orig 0x16d24b0, mov_ret)
uint32_t main_f_16d24b0() { return 0; }

// sub_16d2620  (orig 0x16d2620, mov_ret)
uint32_t main_f_16d2620() { return 52; }

// sub_16d28e0  (orig 0x16d28e0, mov_ret)
uint32_t main_f_16d28e0() { return 20; }

// sub_16d29e0  (orig 0x16d29e0, ret_only)
void main_f_16d29e0() {}

// sub_16d3430  (orig 0x16d3430, ptr_add)
void* main_f_16d3430(void* a0) { return (char*)a0 + 8; }

// sub_16d3460  (orig 0x16d3460, ptr_add)
void* main_f_16d3460(void* a0) { return (char*)a0 + 8; }

// sub_16d3490  (orig 0x16d3490, getter)
uint32_t main_f_16d3490(void* a0) { return *(uint32_t*)((char*)(a0) + 8376L); }

// sub_16d34d0  (orig 0x16d34d0, ret_only)
void main_f_16d34d0() {}

// sub_16d3800  (orig 0x16d3800, ptr_add)
void* main_f_16d3800(void* a0) { return (char*)a0 + 24; }

// sub_16d3810  (orig 0x16d3810, ptr_add)
void* main_f_16d3810(void* a0) { return (char*)a0 + 184; }

// sub_16d3820  (orig 0x16d3820, getter)
uint16_t main_f_16d3820(void* a0) { return *(uint16_t*)((char*)(a0) + 280); }

// sub_16d3830  (orig 0x16d3830, getter)
uint32_t main_f_16d3830(void* a0) { return *(uint32_t*)((char*)(a0) + 284); }

// sub_16d3840  (orig 0x16d3840, getter)
uint8_t main_f_16d3840(void* a0) { return *(uint8_t*)((char*)(a0) + 288); }

// sub_16d3850  (orig 0x16d3850, getter)
uint8_t main_f_16d3850(void* a0) { return *(uint8_t*)((char*)(a0) + 289); }

// sub_16d3860  (orig 0x16d3860, getter)
uint8_t main_f_16d3860(void* a0) { return *(uint8_t*)((char*)(a0) + 290); }

// sub_16d3b50  (orig 0x16d3b50, setter)
void main_f_16d3b50(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_16d4e00  (orig 0x16d4e00, ret_only)
void main_f_16d4e00() {}

// sub_16d4fc0  (orig 0x16d4fc0, ptr_add)
void* main_f_16d4fc0(void* a0) { return (char*)a0 + 88; }

// sub_16d5130  (orig 0x16d5130, setter)
void main_f_16d5130(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 128) = a1; }

// sub_16d5140  (orig 0x16d5140, getter)
uint32_t main_f_16d5140(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_16d5160  (orig 0x16d5160, ptr_add)
void* main_f_16d5160(void* a0) { return (char*)a0 + 132; }

// sub_16d5cd0  (orig 0x16d5cd0, ret_only)
void main_f_16d5cd0() {}

// sub_16d5ce0  (orig 0x16d5ce0, ret_only)
void main_f_16d5ce0() {}

// sub_16d5cf0  (orig 0x16d5cf0, ret_only)
void main_f_16d5cf0() {}

// sub_16d5d00  (orig 0x16d5d00, ret_only)
void main_f_16d5d00() {}

// sub_16d64e0  (orig 0x16d64e0, setter)
void main_f_16d64e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 600) = a1; }

// sub_16d6a30  (orig 0x16d6a30, ret_only)
void main_f_16d6a30() {}

// sub_16d6b70  (orig 0x16d6b70, mov_ret)
uint32_t main_f_16d6b70() { return 16; }

// sub_16d6b80  (orig 0x16d6b80, mov_ret)
uint32_t main_f_16d6b80() { return 28; }

// sub_16d6b90  (orig 0x16d6b90, mov_ret)
uint32_t main_f_16d6b90() { return 1364; }

// sub_16d6ba0  (orig 0x16d6ba0, mov_ret)
uint32_t main_f_16d6ba0() { return 576; }

// sub_16d6bb0  (orig 0x16d6bb0, mov_ret)
uint32_t main_f_16d6bb0() { return 500; }

// sub_16d6bd0  (orig 0x16d6bd0, mov_ret)
uint32_t main_f_16d6bd0() { return 1; }

// sub_16d6be0  (orig 0x16d6be0, mov_ret)
uint32_t main_f_16d6be0() { return 1; }

// sub_16d6bf0  (orig 0x16d6bf0, mov_ret)
uint32_t main_f_16d6bf0() { return 2; }

// sub_16d6c00  (orig 0x16d6c00, mov_ret)
uint32_t main_f_16d6c00() { return 1000; }

// sub_16d6c10  (orig 0x16d6c10, mov_ret)
uint32_t main_f_16d6c10() { return 100; }

// sub_16d6c20  (orig 0x16d6c20, mov_ret)
uint32_t main_f_16d6c20() { return 1; }

// sub_16d6c30  (orig 0x16d6c30, mov_ret)
uint32_t main_f_16d6c30() { return 1; }

// sub_16d6c40  (orig 0x16d6c40, mov_ret)
uint32_t main_f_16d6c40() { return 1; }

// sub_16d6c50  (orig 0x16d6c50, mov_ret)
uint32_t main_f_16d6c50() { return 1; }

// sub_16d6c60  (orig 0x16d6c60, mov_ret)
uint32_t main_f_16d6c60() { return 1; }

// sub_16d7ee0  (orig 0x16d7ee0, getter)
uint64_t main_f_16d7ee0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_16d7ef0  (orig 0x16d7ef0, getter)
uint64_t main_f_16d7ef0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_16d7f20  (orig 0x16d7f20, getter)
uint16_t main_f_16d7f20(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_16d7f30  (orig 0x16d7f30, getter)
uint16_t main_f_16d7f30(void* a0) { return *(uint16_t*)((char*)(a0) + 10); }

// sub_16d8270  (orig 0x16d8270, getter)
uint64_t main_f_16d8270(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_16d8280  (orig 0x16d8280, getter)
uint64_t main_f_16d8280(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_16d82b0  (orig 0x16d82b0, getter)
uint32_t main_f_16d82b0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_16d82c0  (orig 0x16d82c0, getter)
uint32_t main_f_16d82c0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_16d8420  (orig 0x16d8420, ret_only)
void main_f_16d8420() {}

// sub_16d8b80  (orig 0x16d8b80, ret_only)
void main_f_16d8b80() {}

// sub_16d8c50  (orig 0x16d8c50, getter)
uint32_t main_f_16d8c50(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_16d8c60  (orig 0x16d8c60, setter)
void main_f_16d8c60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_16d8c70  (orig 0x16d8c70, getter)
uint8_t main_f_16d8c70(void* a0) { return *(uint8_t*)((char*)(a0) + 12); }

// sub_16d8c90  (orig 0x16d8c90, getter)
uint8_t main_f_16d8c90(void* a0) { return *(uint8_t*)((char*)(a0) + 13); }

// sub_16d8cb0  (orig 0x16d8cb0, ptr_add)
void* main_f_16d8cb0(void* a0) { return (char*)a0 + 1640; }

// sub_16d8cc0  (orig 0x16d8cc0, straight)
void main_f_16d8cc0(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0) + 1648) = *(uint16_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 1650) = *(uint8_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 1651) = *(uint8_t*)((char*)(a1) + 11);
    *(uint8_t*)((char*)(a0) + 1652) = *(uint8_t*)((char*)(a1) + 12);
    *(uint8_t*)((char*)(a0) + 1653) = *(uint8_t*)((char*)(a1) + 13);
    *(uint8_t*)((char*)(a0) + 1654) = *(uint8_t*)((char*)(a1) + 14);
    *(uint8_t*)((char*)(a0) + 1655) = *(uint8_t*)((char*)(a1) + 15);
}

// sub_16d8d00  (orig 0x16d8d00, ptr_add)
void* main_f_16d8d00(void* a0) { return (char*)a0 + 1656; }

// sub_16d8d10  (orig 0x16d8d10, straight)
void main_f_16d8d10(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0) + 1664) = *(uint16_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 1666) = *(uint8_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 1667) = *(uint8_t*)((char*)(a1) + 11);
    *(uint8_t*)((char*)(a0) + 1668) = *(uint8_t*)((char*)(a1) + 12);
    *(uint8_t*)((char*)(a0) + 1669) = *(uint8_t*)((char*)(a1) + 13);
    *(uint8_t*)((char*)(a0) + 1670) = *(uint8_t*)((char*)(a1) + 14);
    *(uint8_t*)((char*)(a0) + 1671) = *(uint8_t*)((char*)(a1) + 15);
}

// sub_16d8d50  (orig 0x16d8d50, getter)
uint32_t main_f_16d8d50(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_16d8d60  (orig 0x16d8d60, setter)
void main_f_16d8d60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_16d8e00  (orig 0x16d8e00, getter)
uint64_t main_f_16d8e00(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_16d8e10  (orig 0x16d8e10, setter)
void main_f_16d8e10(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_16d8e20  (orig 0x16d8e20, getter)
uint16_t main_f_16d8e20(void* a0) { return *(uint16_t*)((char*)(a0) + 44); }

// sub_16d8e30  (orig 0x16d8e30, setter)
void main_f_16d8e30(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 44) = a1; }

// sub_16d8e40  (orig 0x16d8e40, getter)
uint16_t main_f_16d8e40(void* a0) { return *(uint16_t*)((char*)(a0) + 56); }

// sub_16d8e50  (orig 0x16d8e50, setter)
void main_f_16d8e50(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 56) = a1; }

// sub_16d8e60  (orig 0x16d8e60, getter)
uint16_t main_f_16d8e60(void* a0) { return *(uint16_t*)((char*)(a0) + 58); }

// sub_16d8e70  (orig 0x16d8e70, setter)
void main_f_16d8e70(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 58) = a1; }

// sub_16d8e80  (orig 0x16d8e80, ptr_add)
void* main_f_16d8e80(void* a0) { return (char*)a0 + 64; }

// sub_16d9130  (orig 0x16d9130, ret_only)
void main_f_16d9130() {}

// sub_16da8a0  (orig 0x16da8a0, getter)
uint64_t main_f_16da8a0(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_16da8b0  (orig 0x16da8b0, getter)
uint64_t main_f_16da8b0(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_16da970  (orig 0x16da970, ptr_add)
void* main_f_16da970(void* a0) { return (char*)a0 + 736; }

// sub_16da980  (orig 0x16da980, getter)
uint8_t main_f_16da980(void* a0) { return *(uint8_t*)((char*)(a0) + 712); }

// sub_16ee090  (orig 0x16ee090, getter)
uint8_t main_f_16ee090(void* a0) { return *(uint8_t*)((char*)(a0) + 1364); }

// sub_16ee0a0  (orig 0x16ee0a0, getter)
uint32_t main_f_16ee0a0(void* a0) { return *(uint32_t*)((char*)(a0) + 1360); }

// sub_16ee0b0  (orig 0x16ee0b0, getter)
uint8_t main_f_16ee0b0(void* a0) { return *(uint8_t*)((char*)(a0) + 1365); }

// sub_16ee0c0  (orig 0x16ee0c0, setter-chain)
void main_f_16ee0c0(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0) + 1368) = a1; *(uint64_t*)((char*)(a0) + 1376) = a2; }

// sub_16ee570  (orig 0x16ee570, getter)
uint8_t main_f_16ee570(void* a0) { return *(uint8_t*)((char*)(a0) + 720); }

// sub_16f00d0  (orig 0x16f00d0, ret_only)
void main_f_16f00d0() {}

// sub_16f1420  (orig 0x16f1420, ptr_add)
void* main_f_16f1420(void* a0) { return (char*)a0 + 16; }

// sub_16f1430  (orig 0x16f1430, ptr_add)
void* main_f_16f1430(void* a0) { return (char*)a0 + 16; }

// sub_16f1440  (orig 0x16f1440, ptr_add)
void* main_f_16f1440(void* a0) { return (char*)a0 + 32; }

// sub_16f14a0  (orig 0x16f14a0, ptr_add)
void* main_f_16f14a0(void* a0) { return (char*)a0 + 48; }

// sub_16f14b0  (orig 0x16f14b0, ptr_add)
void* main_f_16f14b0(void* a0) { return (char*)a0 + 1648; }

// sub_16f3350  (orig 0x16f3350, ret_only)
void main_f_16f3350() {}

// sub_16f61b0  (orig 0x16f61b0, setter-chain)
void main_f_16f61b0(void* a0) { *(uint64_t*)((char*)(a0) + 312) = 0; *(uint8_t*)((char*)(a0) + 364) = 0; }

// sub_16f61c0  (orig 0x16f61c0, ret_only)
void main_f_16f61c0() {}

// sub_16f6360  (orig 0x16f6360, ret_only)
void main_f_16f6360() {}

// sub_1705200  (orig 0x1705200, getter)
uint32_t main_f_1705200(void* a0) { return *(uint32_t*)((char*)(a0) + 560); }

// sub_1705210  (orig 0x1705210, ret_only)
void main_f_1705210() {}

// sub_1705ff0  (orig 0x1705ff0, mov_ret)
uint32_t main_f_1705ff0() { return 15000; }

// sub_1706070  (orig 0x1706070, ret_only)
void main_f_1706070() {}

// sub_17075c0  (orig 0x17075c0, ret_only)
void main_f_17075c0() {}

// sub_1707b60  (orig 0x1707b60, ret_only)
void main_f_1707b60() {}

// sub_1708b80  (orig 0x1708b80, ret_only)
void main_f_1708b80() {}

// sub_170b9c0  (orig 0x170b9c0, ret_only)
void main_f_170b9c0() {}

// sub_170bea0  (orig 0x170bea0, ret_only)
void main_f_170bea0() {}

// sub_170c420  (orig 0x170c420, ret_only)
void main_f_170c420() {}

// sub_170e800  (orig 0x170e800, ret_only)
void main_f_170e800() {}

// sub_170e810  (orig 0x170e810, getter)
uint64_t main_f_170e810(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_170e820  (orig 0x170e820, getter)
uint8_t main_f_170e820(void* a0) { return *(uint8_t*)((char*)(a0) + 20); }

// sub_170e830  (orig 0x170e830, ptr_add)
void* main_f_170e830(void* a0) { return (char*)a0 + 20; }

// sub_170e840  (orig 0x170e840, getter)
uint32_t main_f_170e840(void* a0) { return *(uint32_t*)((char*)(a0) + 420); }

// sub_170e850  (orig 0x170e850, getter)
uint64_t main_f_170e850(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_170fe30  (orig 0x170fe30, ret_only)
void main_f_170fe30() {}

// sub_17103b0  (orig 0x17103b0, ret_only)
void main_f_17103b0() {}

// sub_17110e0  (orig 0x17110e0, mov_ret)
uint32_t main_f_17110e0() { return 1; }

// sub_17110f0  (orig 0x17110f0, mov_ret)
uint32_t main_f_17110f0() { return 1; }

// sub_1711100  (orig 0x1711100, mov_ret)
uint32_t main_f_1711100() { return 1; }

// sub_1711110  (orig 0x1711110, mov_ret)
uint32_t main_f_1711110() { return 1; }

// sub_1711120  (orig 0x1711120, mov_ret)
uint32_t main_f_1711120() { return 0; }

// sub_1711130  (orig 0x1711130, mov_ret)
uint32_t main_f_1711130() { return 0; }

// sub_17113d0  (orig 0x17113d0, mov_ret)
uint32_t main_f_17113d0() { return 0; }

// sub_1713880  (orig 0x1713880, ret_only)
void main_f_1713880() {}

// sub_1713a20  (orig 0x1713a20, ret_only)
void main_f_1713a20() {}

// sub_1713bb0  (orig 0x1713bb0, getter)
uint32_t main_f_1713bb0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1713bc0  (orig 0x1713bc0, getter)
uint32_t main_f_1713bc0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_1713bd0  (orig 0x1713bd0, getter)
uint16_t main_f_1713bd0(void* a0) { return *(uint16_t*)((char*)(a0) + 16); }

// sub_1713be0  (orig 0x1713be0, getter)
uint16_t main_f_1713be0(void* a0) { return *(uint16_t*)((char*)(a0) + 18); }

// sub_1713bf0  (orig 0x1713bf0, getter)
uint16_t main_f_1713bf0(void* a0) { return *(uint16_t*)((char*)(a0) + 20); }

// sub_1713c00  (orig 0x1713c00, getter)
uint8_t main_f_1713c00(void* a0) { return *(uint8_t*)((char*)(a0) + 22); }

// sub_1713c10  (orig 0x1713c10, setter)
void main_f_1713c10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_1713c20  (orig 0x1713c20, setter)
void main_f_1713c20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; }

// sub_1713c30  (orig 0x1713c30, setter)
void main_f_1713c30(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 616) = a1; }

// sub_1713c40  (orig 0x1713c40, setter)
void main_f_1713c40(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 16) = a1; }

// sub_1713c50  (orig 0x1713c50, setter)
void main_f_1713c50(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 18) = a1; }

// sub_1713c60  (orig 0x1713c60, setter)
void main_f_1713c60(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 20) = a1; }

// sub_1713db0  (orig 0x1713db0, getter)
uint32_t main_f_1713db0(void* a0) { return *(uint32_t*)((char*)(a0) + 560); }

// sub_1713df0  (orig 0x1713df0, setter)
void main_f_1713df0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 576) = a1; }

// sub_1713e00  (orig 0x1713e00, setter)
void main_f_1713e00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 584) = a1; }

// sub_1713e10  (orig 0x1713e10, setter)
void main_f_1713e10(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 592) = a1; }

// sub_1713e20  (orig 0x1713e20, straight)
void main_f_1713e20(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0) + 608) = *(uint16_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 610) = *(uint8_t*)((char*)(a1) + 10);
    *(uint8_t*)((char*)(a0) + 611) = *(uint8_t*)((char*)(a1) + 11);
    *(uint8_t*)((char*)(a0) + 612) = *(uint8_t*)((char*)(a1) + 12);
    *(uint8_t*)((char*)(a0) + 613) = *(uint8_t*)((char*)(a1) + 13);
    *(uint8_t*)((char*)(a0) + 614) = *(uint8_t*)((char*)(a1) + 14);
    *(uint8_t*)((char*)(a0) + 615) = *(uint8_t*)((char*)(a1) + 15);
}

// sub_1713e60  (orig 0x1713e60, mov_ret)
uint32_t main_f_1713e60() { return 1; }

// sub_1713e70  (orig 0x1713e70, ret_only)
void main_f_1713e70() {}

// sub_17159b0  (orig 0x17159b0, ret_only)
void main_f_17159b0() {}

// sub_17159c0  (orig 0x17159c0, getter)
uint64_t main_f_17159c0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_17159d0  (orig 0x17159d0, ptr_add)
void* main_f_17159d0(void* a0) { return (char*)a0 + 24; }

// sub_17159e0  (orig 0x17159e0, getter)
uint32_t main_f_17159e0(void* a0) { return *(uint32_t*)((char*)(a0) + 2424); }

// sub_17159f0  (orig 0x17159f0, getter)
uint8_t main_f_17159f0(void* a0) { return *(uint8_t*)((char*)(a0) + 2429); }

// sub_1715a00  (orig 0x1715a00, getter)
uint8_t main_f_1715a00(void* a0) { return *(uint8_t*)((char*)(a0) + 2430); }

// sub_1715a10  (orig 0x1715a10, getter)
uint8_t main_f_1715a10(void* a0) { return *(uint8_t*)((char*)(a0) + 2431); }

// sub_1715a20  (orig 0x1715a20, ptr_add)
void* main_f_1715a20(void* a0) { return (char*)a0 + 20; }

// sub_1715a30  (orig 0x1715a30, getter)
uint32_t main_f_1715a30(void* a0) { return *(uint32_t*)((char*)(a0) + 420); }

// sub_1715a40  (orig 0x1715a40, getter)
uint32_t main_f_1715a40(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1715a50  (orig 0x1715a50, getter)
uint16_t main_f_1715a50(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_1715a60  (orig 0x1715a60, getter)
uint16_t main_f_1715a60(void* a0) { return *(uint16_t*)((char*)(a0) + 14); }

// sub_1715a90  (orig 0x1715a90, ptr_add)
void* main_f_1715a90(void* a0) { return (char*)a0 + 1616; }

// sub_1715ab0  (orig 0x1715ab0, ptr_add)
void* main_f_1715ab0(void* a0) { return (char*)a0 + 560; }

// sub_1715c80  (orig 0x1715c80, mov_ret)
uint32_t main_f_1715c80() { return 1; }

// sub_1715c90  (orig 0x1715c90, ptr_add)
void* main_f_1715c90(void* a0) { return (char*)a0 + 1776; }

// sub_1715ca0  (orig 0x1715ca0, ptr_add)
void* main_f_1715ca0(void* a0) { return (char*)a0 + 1792; }

// sub_1715cb0  (orig 0x1715cb0, getter)
uint16_t main_f_1715cb0(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_1715cc0  (orig 0x1715cc0, getter)
uint16_t main_f_1715cc0(void* a0) { return *(uint16_t*)((char*)(a0) + 14); }

// sub_1715cd0  (orig 0x1715cd0, getter)
uint32_t main_f_1715cd0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1715ce0  (orig 0x1715ce0, getter)
uint8_t main_f_1715ce0(void* a0) { return *(uint8_t*)((char*)(a0) + 20); }

// sub_1715cf0  (orig 0x1715cf0, indexed-getter)
uint8_t main_f_1715cf0(void* a0, uint32_t a1) { return *(uint8_t *)(((char *)a0 + a1 * 1 + 48)); }

// sub_1715d20  (orig 0x1715d20, ptr_add)
void* main_f_1715d20(void* a0) { return (char*)a0 + 576; }

// sub_1715d30  (orig 0x1715d30, ptr_add)
void* main_f_1715d30(void* a0) { return (char*)a0 + 736; }

// sub_1715d40  (orig 0x1715d40, getter)
uint8_t main_f_1715d40(void* a0) { return *(uint8_t*)((char*)(a0) + 572); }

// sub_1715d50  (orig 0x1715d50, getter)
uint32_t main_f_1715d50(void* a0) { return *(uint32_t*)((char*)(a0) + 912); }

// sub_1715d60  (orig 0x1715d60, getter)
uint8_t main_f_1715d60(void* a0) { return *(uint8_t*)((char*)(a0) + 916); }

// sub_1715d70  (orig 0x1715d70, getter)
uint32_t main_f_1715d70(void* a0) { return *(uint32_t*)((char*)(a0) + 920); }

// sub_1715d80  (orig 0x1715d80, getter)
uint8_t main_f_1715d80(void* a0) { return *(uint8_t*)((char*)(a0) + 924); }

// sub_1715d90  (orig 0x1715d90, getter)
uint32_t main_f_1715d90(void* a0) { return *(uint32_t*)((char*)(a0) + 928); }

// sub_1715da0  (orig 0x1715da0, getter)
uint8_t main_f_1715da0(void* a0) { return *(uint8_t*)((char*)(a0) + 932); }

// sub_1715db0  (orig 0x1715db0, ptr_add)
void* main_f_1715db0(void* a0) { return (char*)a0 + 936; }

// sub_1715dc0  (orig 0x1715dc0, getter)
uint8_t main_f_1715dc0(void* a0) { return *(uint8_t*)((char*)(a0) + 976); }

// sub_1715dd0  (orig 0x1715dd0, getter)
uint8_t main_f_1715dd0(void* a0) { return *(uint8_t*)((char*)(a0) + 977); }

// sub_17162c0  (orig 0x17162c0, ptr_add)
void* main_f_17162c0(void* a0) { return (char*)a0 + 896; }

// sub_1718400  (orig 0x1718400, getter)
uint64_t main_f_1718400(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_1718420  (orig 0x1718420, getter)
uint64_t main_f_1718420(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_1718f90  (orig 0x1718f90, compare)
bool main_f_1718f90(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 256)) == (uint64_t)(0); }

// sub_1718fa0  (orig 0x1718fa0, mov_ret)
uint32_t main_f_1718fa0() { return 1; }

// sub_1718fb0  (orig 0x1718fb0, mov_ret)
uint32_t main_f_1718fb0() { return 1; }

// sub_1718fc0  (orig 0x1718fc0, mov_ret)
uint32_t main_f_1718fc0() { return 1; }

// sub_1719140  (orig 0x1719140, setter)
void main_f_1719140(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 212) = a1; }

// sub_1719150  (orig 0x1719150, getter)
uint32_t main_f_1719150(void* a0) { return *(uint32_t*)((char*)(a0) + 212); }

// sub_17191f0  (orig 0x17191f0, compare)
bool main_f_17191f0(uint64_t a0, uint64_t a1) { return (uint64_t)(a0) == (uint64_t)(a1); }

// sub_171a7d0  (orig 0x171a7d0, mov_ret)
uint64_t main_f_171a7d0() { return 0; }

// sub_171a7e0  (orig 0x171a7e0, ret_only)
void main_f_171a7e0() {}

// sub_171a9b0  (orig 0x171a9b0, ret_only)
void main_f_171a9b0() {}

// sub_171aea0  (orig 0x171aea0, setter)
void main_f_171aea0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_171b240  (orig 0x171b240, ret_only)
void main_f_171b240() {}

// sub_171b250  (orig 0x171b250, copy2)
void main_f_171b250(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8); }

// sub_171b260  (orig 0x171b260, copy2)
void main_f_171b260(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8); }

// sub_171b5a0  (orig 0x171b5a0, ret_only)
void main_f_171b5a0() {}

// sub_171e250  (orig 0x171e250, ret_only)
void main_f_171e250() {}

// sub_17209c0  (orig 0x17209c0, ret_only)
void main_f_17209c0() {}

// sub_1721160  (orig 0x1721160, ptr_add)
void* main_f_1721160(void* a0) { return (char*)a0 + 48; }

// sub_1721180  (orig 0x1721180, getter)
uint32_t main_f_1721180(void* a0) { return *(uint32_t*)((char*)(a0) + 184); }

// sub_1721190  (orig 0x1721190, getter)
uint32_t main_f_1721190(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_1721210  (orig 0x1721210, mov_ret)
uint32_t main_f_1721210() { return 0; }

// sub_1721740  (orig 0x1721740, setter)
void main_f_1721740(void* a0) { *(uint64_t*)((char*)(a0) + 72) = 0; }

// sub_1721750  (orig 0x1721750, ret_only)
void main_f_1721750() {}

// sub_1721e60  (orig 0x1721e60, getter)
uint64_t main_f_1721e60(void* a0) { return *(uint64_t*)((char*)(a0) + 224); }

// sub_1721e90  (orig 0x1721e90, getter)
uint32_t main_f_1721e90(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_17222e0  (orig 0x17222e0, ret_only)
void main_f_17222e0() {}

// sub_17222f0  (orig 0x17222f0, ret_only)
void main_f_17222f0() {}

// sub_1722300  (orig 0x1722300, ret_only)
void main_f_1722300() {}

// sub_1722310  (orig 0x1722310, ret_only)
void main_f_1722310() {}

// sub_1722320  (orig 0x1722320, ret_only)
void main_f_1722320() {}

// sub_1722330  (orig 0x1722330, ret_only)
void main_f_1722330() {}

// sub_1722830  (orig 0x1722830, ret_only)
void main_f_1722830() {}

// sub_1722860  (orig 0x1722860, ret_only)
void main_f_1722860() {}

// sub_1722870  (orig 0x1722870, getter)
uint64_t main_f_1722870(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1722880  (orig 0x1722880, setter)
void main_f_1722880(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1722890  (orig 0x1722890, getter)
uint8_t main_f_1722890(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_17228b0  (orig 0x17228b0, mov_ret)
uint64_t main_f_17228b0() { return 0; }

// sub_17228c0  (orig 0x17228c0, mov_ret)
uint32_t main_f_17228c0() { return 0; }

// sub_17228d0  (orig 0x17228d0, mov_ret)
uint64_t main_f_17228d0() { return 0; }

// sub_1722940  (orig 0x1722940, mov_ret)
uint32_t main_f_1722940() { return 0; }

// sub_1722950  (orig 0x1722950, ret_only)
void main_f_1722950() {}

// sub_1722970  (orig 0x1722970, ret_only)
void main_f_1722970() {}

// sub_17232e0  (orig 0x17232e0, ret_only)
void main_f_17232e0() {}

// sub_1723340  (orig 0x1723340, straight)
void main_f_1723340(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)(a1);
    *(uint8_t*)((char*)(a0) + 10) = (uint8_t)k0;
}

// sub_1723350  (orig 0x1723350, getter)
uint16_t main_f_1723350(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_1723360  (orig 0x1723360, getter)
uint8_t main_f_1723360(void* a0) { return *(uint8_t*)((char*)(a0) + 10); }

// sub_1723370  (orig 0x1723370, straight)
void main_f_1723370(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 12) = (uint16_t)(a1);
    *(uint8_t*)((char*)(a0) + 14) = (uint8_t)k0;
}

// sub_1723380  (orig 0x1723380, getter)
uint16_t main_f_1723380(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_1723390  (orig 0x1723390, getter)
uint8_t main_f_1723390(void* a0) { return *(uint8_t*)((char*)(a0) + 14); }

// sub_17233a0  (orig 0x17233a0, straight)
void main_f_17233a0(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0) + 8) = *(uint16_t*)((char*)(a1) + 8);
    *(uint8_t*)((char*)(a0) + 10) = *(uint8_t*)((char*)(a1) + 10);
    *(uint16_t*)((char*)(a0) + 12) = *(uint16_t*)((char*)(a1) + 12);
    *(uint8_t*)((char*)(a0) + 14) = *(uint8_t*)((char*)(a1) + 14);
}

// sub_17233d0  (orig 0x17233d0, setter-chain)
void main_f_17233d0(void* a0) { *(uint16_t*)((char*)(a0) + 8) = 0; *(uint8_t*)((char*)(a0) + 10) = 0; *(uint16_t*)((char*)(a0) + 12) = 0; *(uint8_t*)((char*)(a0) + 14) = 0; }

// sub_17233f0  (orig 0x17233f0, ret_only)
void main_f_17233f0() {}

// sub_1723ae0  (orig 0x1723ae0, ret_only)
void main_f_1723ae0() {}

// sub_1724d50  (orig 0x1724d50, ret_only)
void main_f_1724d50() {}

// sub_1724e30  (orig 0x1724e30, ret_only)
void main_f_1724e30() {}

// sub_1724e80  (orig 0x1724e80, setter)
void main_f_1724e80(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1724e90  (orig 0x1724e90, getter)
uint64_t main_f_1724e90(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1724ea0  (orig 0x1724ea0, setter)
void main_f_1724ea0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 16) = a1; }

// sub_1724ee0  (orig 0x1724ee0, setter)
void main_f_1724ee0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 20) = a1; }

// sub_1724f10  (orig 0x1724f10, setter-chain)
void main_f_1724f10(void* a0) { *(uint32_t*)((char*)(a0) + 16) = 0; *(uint16_t*)((char*)(a0) + 20) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_17255c0  (orig 0x17255c0, compare-pred)
bool main_f_17255c0(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 144) - 9)) < (uint32_t)(2); }

// sub_1726360  (orig 0x1726360, compare-pred)
bool main_f_1726360(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 144) - 6)) < (uint32_t)(3); }

// sub_1726380  (orig 0x1726380, ret_only)
void main_f_1726380() {}

// sub_1727320  (orig 0x1727320, ret_only)
void main_f_1727320() {}

// sub_17273a0  (orig 0x17273a0, ret_only)
void main_f_17273a0() {}

// sub_17278f0  (orig 0x17278f0, ret_only)
void main_f_17278f0() {}

// sub_1727990  (orig 0x1727990, ret_only)
void main_f_1727990() {}

// sub_17279b0  (orig 0x17279b0, mov_ret)
uint32_t main_f_17279b0() { return 0; }

// sub_17279c0  (orig 0x17279c0, mov_ret)
uint32_t main_f_17279c0() { return 0; }

// sub_1729240  (orig 0x1729240, ret_only)
void main_f_1729240() {}

// sub_1729320  (orig 0x1729320, ret_only)
void main_f_1729320() {}

// sub_1729330  (orig 0x1729330, ret_only)
void main_f_1729330() {}

// sub_172ade0  (orig 0x172ade0, compare)
bool main_f_172ade0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 272)) == (uint64_t)(1); }

// sub_172be60  (orig 0x172be60, getter)
uint32_t main_f_172be60(void* a0) { return *(uint32_t*)((char*)(a0) + 424); }

// sub_172be70  (orig 0x172be70, getter)
uint32_t main_f_172be70(void* a0) { return *(uint32_t*)((char*)(a0) + 424); }

// sub_172be80  (orig 0x172be80, getter)
uint16_t main_f_172be80(void* a0) { return *(uint16_t*)((char*)(a0) + 520); }

// sub_172c3d0  (orig 0x172c3d0, getter)
uint8_t main_f_172c3d0(void* a0) { return *(uint8_t*)((char*)(a0) + 349); }

// sub_172ca20  (orig 0x172ca20, setter)
void main_f_172ca20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 176) = a1; }

// sub_172ca30  (orig 0x172ca30, setter)
void main_f_172ca30(void* a0) { *(uint64_t*)((char*)(a0) + 176) = 0; }

// sub_172ca60  (orig 0x172ca60, getter)
uint64_t main_f_172ca60(void* a0) { return *(uint64_t*)((char*)(a0) + 328); }

// sub_172ca70  (orig 0x172ca70, strlit-ret)
const char *main_f_172ca70() { static char g_f_172ca70[1]; __asm__ volatile("" ::: "memory"); return g_f_172ca70; }

// sub_172d090  (orig 0x172d090, ptr_add)
void* main_f_172d090(void* a0) { return (char*)a0 + 485; }

// sub_172eaf0  (orig 0x172eaf0, ret_only)
void main_f_172eaf0() {}

// sub_1730830  (orig 0x1730830, ret_only)
void main_f_1730830() {}

// sub_17311c0  (orig 0x17311c0, ret_only)
void main_f_17311c0() {}

// sub_17312b0  (orig 0x17312b0, ret_only)
void main_f_17312b0() {}

// sub_1731430  (orig 0x1731430, ret_only)
void main_f_1731430() {}

// sub_17315b0  (orig 0x17315b0, ret_only)
void main_f_17315b0() {}

// sub_17315c0  (orig 0x17315c0, getter)
uint32_t main_f_17315c0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_17315d0  (orig 0x17315d0, getter)
uint32_t main_f_17315d0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_17315e0  (orig 0x17315e0, getter)
uint32_t main_f_17315e0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1731640  (orig 0x1731640, mov_ret)
uint64_t main_f_1731640() { return 0; }

// sub_1731650  (orig 0x1731650, mov_ret)
uint64_t main_f_1731650() { return 0; }

// sub_1731660  (orig 0x1731660, mov_ret)
uint64_t main_f_1731660() { return 0; }

// sub_1731670  (orig 0x1731670, ret_only)
void main_f_1731670() {}

// sub_1731680  (orig 0x1731680, ret_only)
void main_f_1731680() {}

// sub_1731690  (orig 0x1731690, ret_only)
void main_f_1731690() {}

// sub_17316a0  (orig 0x17316a0, mov_ret)
uint64_t main_f_17316a0() { return 0; }

// sub_17316b0  (orig 0x17316b0, ret_only)
void main_f_17316b0() {}

// sub_17316c0  (orig 0x17316c0, mov_ret)
uint64_t main_f_17316c0() { return 0; }

// sub_17316d0  (orig 0x17316d0, ret_only)
void main_f_17316d0() {}

// sub_1733cf0  (orig 0x1733cf0, ret_only)
void main_f_1733cf0() {}

// sub_1733d00  (orig 0x1733d00, mov_ret)
uint32_t main_f_1733d00() { return 148; }

// sub_1733d50  (orig 0x1733d50, straight)
void main_f_1733d50(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a1) + 16);
    *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 12) = *(uint32_t*)((char*)(a1) + 12);
}

// sub_1733d70  (orig 0x1733d70, straight)
void main_f_1733d70(void* a0) {
    *(uint32_t*)((char*)(a0) + 16) = 0;
    *(uint64_t*)((char*)(a0) + 8) = 85899345920;
}

// sub_1733de0  (orig 0x1733de0, getter)
uint32_t main_f_1733de0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1733df0  (orig 0x1733df0, getter)
uint32_t main_f_1733df0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1733e00  (orig 0x1733e00, getter)
uint32_t main_f_1733e00(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_1733e10  (orig 0x1733e10, ret_only)
void main_f_1733e10() {}

// sub_1733e60  (orig 0x1733e60, setter)
void main_f_1733e60(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_1733e70  (orig 0x1733e70, setter)
void main_f_1733e70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_1733e80  (orig 0x1733e80, getter)
uint32_t main_f_1733e80(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1734af0  (orig 0x1734af0, ret_only)
void main_f_1734af0() {}

// sub_1735d40  (orig 0x1735d40, ret_only)
void main_f_1735d40() {}

// sub_1735d70  (orig 0x1735d70, setter)
void main_f_1735d70(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_1735d80  (orig 0x1735d80, getter)
uint32_t main_f_1735d80(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1735dc0  (orig 0x1735dc0, ret_only)
void main_f_1735dc0() {}

// sub_1735dd0  (orig 0x1735dd0, ret_only)
void main_f_1735dd0() {}

// sub_17360b0  (orig 0x17360b0, ret_only)
void main_f_17360b0() {}

// sub_17360c0  (orig 0x17360c0, getter)
uint32_t main_f_17360c0(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_17360d0  (orig 0x17360d0, getter)
uint16_t main_f_17360d0(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_17360e0  (orig 0x17360e0, getter)
uint16_t main_f_17360e0(void* a0) { return *(uint16_t*)((char*)(a0) + 10); }

// sub_17368a0  (orig 0x17368a0, setter)
void main_f_17368a0(void* a0) { *(uint64_t*)((char*)(a0) + 96) = 0; }

// sub_1737e50  (orig 0x1737e50, ret_only)
void main_f_1737e50() {}

// sub_1737e70  (orig 0x1737e70, mov_ret)
uint32_t main_f_1737e70() { return 16; }

// sub_1737e80  (orig 0x1737e80, mov_ret)
uint32_t main_f_1737e80() { return 84; }

// sub_1738dd0  (orig 0x1738dd0, mov_ret)
uint32_t main_f_1738dd0() { return 128; }

// sub_1739760  (orig 0x1739760, mov_ret)
uint64_t main_f_1739760() { return 0; }

// sub_17399e0  (orig 0x17399e0, straight)
void main_f_17399e0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0)) = (uint8_t)k0;
}

// sub_17399f0  (orig 0x17399f0, ret_only)
void main_f_17399f0() {}

// sub_1739a90  (orig 0x1739a90, straight)
void main_f_1739a90(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0)) = 1000;
    *(uint8_t*)((char*)(a0) + 4) = (uint8_t)k0;
}

// sub_1739ab0  (orig 0x1739ab0, ret_only)
void main_f_1739ab0() {}

// sub_1739ce0  (orig 0x1739ce0, ret_only)
void main_f_1739ce0() {}

// sub_1739e30  (orig 0x1739e30, ret_only)
void main_f_1739e30() {}

// sub_173a700  (orig 0x173a700, ret_only)
void main_f_173a700() {}

// sub_173abe0  (orig 0x173abe0, compare-pred)
bool main_f_173abe0(void* a0) { return (int32_t)(*(uint64_t*)((char*)a0 + 220)) >= (int32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 56)) + 16)); }

// sub_173ad90  (orig 0x173ad90, getter)
uint32_t main_f_173ad90(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 1512); }

// sub_173ada0  (orig 0x173ada0, mov_ret)
uint32_t main_f_173ada0() { return 1; }

// sub_173adb0  (orig 0x173adb0, mov_ret)
uint32_t main_f_173adb0() { return 1; }

// sub_173afb0  (orig 0x173afb0, ret_only)
void main_f_173afb0() {}

// sub_173b0c0  (orig 0x173b0c0, ret_only)
void main_f_173b0c0() {}

// sub_173b2f0  (orig 0x173b2f0, ret_only)
void main_f_173b2f0() {}

// sub_173bb30  (orig 0x173bb30, ret_only)
void main_f_173bb30() {}

// sub_173bc80  (orig 0x173bc80, copy-chain-store)
void main_f_173bc80(void* a0) {
    uint32_t t0 = *(uint32_t*)((char*)a0 + 12);
    *(uint32_t*)((char*)a0 + 8) = (uint32_t)(t0);
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 16) = 0;
}

// sub_173bd40  (orig 0x173bd40, copy-chain-store)
void main_f_173bd40(void* a0) {
    uint32_t t0 = *(uint32_t*)((char*)a0 + 12);
    *(uint32_t*)((char*)a0 + 8) = (uint32_t)(t0);
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 16) = 0;
}

// sub_173c350  (orig 0x173c350, ret_only)
void main_f_173c350() {}

// sub_173ce90  (orig 0x173ce90, ret_only)
void main_f_173ce90() {}

// sub_173cfc0  (orig 0x173cfc0, setter)
void main_f_173cfc0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_173d030  (orig 0x173d030, ret_only)
void main_f_173d030() {}

// sub_173d1f0  (orig 0x173d1f0, straight)
void main_f_173d1f0(void* a0) {
    uint32_t k0 = 253;
    *(uint64_t*)((char*)(a0) + 48) = 0;
    *(uint64_t*)((char*)(a0) + 64) = 0;
    *(uint8_t*)((char*)(a0) + 56) = (uint8_t)k0;
}

// sub_173d2d0  (orig 0x173d2d0, mov_ret)
uint32_t main_f_173d2d0() { return 1; }

// sub_173d2e0  (orig 0x173d2e0, ret_only)
void main_f_173d2e0() {}

// sub_173e230  (orig 0x173e230, ret_only)
void main_f_173e230() {}

// sub_173e5e0  (orig 0x173e5e0, getter)
uint64_t main_f_173e5e0(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_173e7c0  (orig 0x173e7c0, ret_only)
void main_f_173e7c0() {}

// sub_173eb40  (orig 0x173eb40, ret_only)
void main_f_173eb40() {}

// sub_173eb50  (orig 0x173eb50, setter)
void main_f_173eb50(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 2992) = a1; }

// sub_1741960  (orig 0x1741960, ret_only)
void main_f_1741960() {}

// sub_1742610  (orig 0x1742610, mov_ret)
uint32_t main_f_1742610() { return 132; }

// sub_1742620  (orig 0x1742620, mov_ret)
uint32_t main_f_1742620() { return 20; }

// sub_1743940  (orig 0x1743940, ret_only)
void main_f_1743940() {}

// sub_1743950  (orig 0x1743950, mov_ret)
uint32_t main_f_1743950() { return 124; }

// sub_1746cb0  (orig 0x1746cb0, mov_ret)
uint32_t main_f_1746cb0() { return 0; }

// sub_17474f0  (orig 0x17474f0, mov_ret)
uint32_t main_f_17474f0() { return 0; }

// sub_1747500  (orig 0x1747500, ret_only)
void main_f_1747500() {}

// sub_1747b90  (orig 0x1747b90, getter)
uint64_t main_f_1747b90(void* a0) { return *(uint64_t*)((char*)(a0) + 816); }

// sub_1747bb0  (orig 0x1747bb0, mov_ret)
uint32_t main_f_1747bb0() { return 608; }

// sub_1748970  (orig 0x1748970, ret_only)
void main_f_1748970() {}

// sub_1748980  (orig 0x1748980, mov_ret)
uint32_t main_f_1748980() { return 88; }

// sub_1748aa0  (orig 0x1748aa0, mov_ret)
uint32_t main_f_1748aa0() { return 16; }

// sub_1748ab0  (orig 0x1748ab0, straight)
void main_f_1748ab0(void* a0) {
    uint8_t k0 = 0;
    *(uint8_t*)((char*)(a0)) = 0;
    *(uint64_t*)((char*)(a0) + 4) = -1;
    *(uint32_t*)((char*)(a0) + 12) = -1;
    *(uint64_t*)((char*)(a0) + 16) = 0;
    *(uint8_t*)((char*)(a0) + 24) = 0;
    *(uint64_t*)((char*)(a0) + 72) = 0;
    *(uint64_t*)((char*)(a0) + 28) = 0;
    *(uint32_t*)((char*)(a0) + 80) = (uint32_t)k0;
}

// sub_1748ae0  (orig 0x1748ae0, ret_only)
void main_f_1748ae0() {}

// sub_1748d10  (orig 0x1748d10, straight)
void main_f_1748d10(void* a0) {
    *(uint64_t*)((char*)(a0) + 8) = -1;
}

// sub_1748e60  (orig 0x1748e60, straight)
void main_f_1748e60(void* a0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 24) = (uint8_t)k0;
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1));
}

// sub_1749050  (orig 0x1749050, ret_only)
void main_f_1749050() {}

// sub_17490e0  (orig 0x17490e0, ret_only)
void main_f_17490e0() {}

// sub_1749260  (orig 0x1749260, ret_only)
void main_f_1749260() {}

// sub_17493f0  (orig 0x17493f0, setter-chain)
void main_f_17493f0(void* a0) { *(uint8_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 80) = 0; }

// sub_1749400  (orig 0x1749400, setter-chain)
void main_f_1749400(void* a0, uint64_t a1, uint8_t a2) { *(uint64_t*)((char*)(a0) + 64) = a1; *(uint8_t*)((char*)(a0) + 56) = a2; }

// sub_1749810  (orig 0x1749810, ret_only)
void main_f_1749810() {}

// sub_1749cd0  (orig 0x1749cd0, ptr_add)
void* main_f_1749cd0(void* a0) { return (char*)a0 + 8; }

// sub_1749ce0  (orig 0x1749ce0, ptr_add)
void* main_f_1749ce0(void* a0) { return (char*)a0 + 40; }

// sub_1749d80  (orig 0x1749d80, getter)
uint64_t main_f_1749d80(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_1749d90  (orig 0x1749d90, getter)
uint32_t main_f_1749d90(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_1749da0  (orig 0x1749da0, getter)
uint32_t main_f_1749da0(void* a0) { return *(uint32_t*)((char*)(a0) + 116); }

// sub_1749db0  (orig 0x1749db0, getter)
uint8_t main_f_1749db0(void* a0) { return *(uint8_t*)((char*)(a0) + 121); }

// sub_1749dc0  (orig 0x1749dc0, compare-pred)
bool main_f_1749dc0(void* a0) { return (uint32_t)((*(uint8_t*)((char*)a0 + 120) & 12)) == (uint32_t)(8); }

// sub_1749de0  (orig 0x1749de0, compare-pred)
bool main_f_1749de0(void* a0) { return (uint32_t)((*(uint8_t*)((char*)a0 + 120) & 12)) == (uint32_t)(4); }

// sub_1749e20  (orig 0x1749e20, compare-pred)
bool main_f_1749e20(void* a0) { return (uint32_t)((*(uint8_t*)((char*)a0 + 121) & 3)) == (uint32_t)(2); }

// sub_1749e40  (orig 0x1749e40, ptr_add)
void* main_f_1749e40(void* a0) { return (char*)a0 + 72; }

// sub_1749e50  (orig 0x1749e50, ptr_add)
void* main_f_1749e50(void* a0) { return (char*)a0 + 72; }

// sub_1749e80  (orig 0x1749e80, compare)
bool main_f_1749e80(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) == (uint64_t)(*(uint64_t*)((char*)(a1) + 104)); }

// sub_1749ea0  (orig 0x1749ea0, compare)
bool main_f_1749ea0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 116)) == (uint32_t)(*(uint32_t*)((char*)(a1) + 116)); }

// sub_1749ec0  (orig 0x1749ec0, compare)
bool main_f_1749ec0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 112)) == (uint32_t)(*(uint32_t*)((char*)(a1) + 112)); }

// sub_1749ee0  (orig 0x1749ee0, compare)
bool main_f_1749ee0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 122)) == (uint64_t)(1); }

// sub_1749ef0  (orig 0x1749ef0, compare)
bool main_f_1749ef0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 123)) == (uint64_t)(1); }

// sub_1749f30  (orig 0x1749f30, setter)
void main_f_1749f30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 104) = a1; }

// sub_1749f40  (orig 0x1749f40, setter)
void main_f_1749f40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 112) = a1; }

// sub_1749f50  (orig 0x1749f50, setter)
void main_f_1749f50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 116) = a1; }

// sub_1749fa0  (orig 0x1749fa0, setter)
void main_f_1749fa0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 121) = a1; }

// sub_174a450  (orig 0x174a450, ret_only)
void main_f_174a450() {}

// sub_174a590  (orig 0x174a590, ret_only)
void main_f_174a590() {}

// sub_174ac10  (orig 0x174ac10, ret_only)
void main_f_174ac10() {}

// sub_174b0e0  (orig 0x174b0e0, getter)
uint32_t main_f_174b0e0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_174b170  (orig 0x174b170, ret_only)
void main_f_174b170() {}

// sub_174b590  (orig 0x174b590, ret_only)
void main_f_174b590() {}

// sub_174b9a0  (orig 0x174b9a0, ret_only)
void main_f_174b9a0() {}

// sub_174be00  (orig 0x174be00, setter)
void main_f_174be00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 80) = a1; }

// sub_174be10  (orig 0x174be10, setter)
void main_f_174be10(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 72) = a1; }

// sub_174dbc0  (orig 0x174dbc0, getter-chain)
uint32_t main_f_174dbc0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 96))) + 4076); }

// sub_174de50  (orig 0x174de50, getter)
uint64_t main_f_174de50(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_174de60  (orig 0x174de60, getter)
uint64_t main_f_174de60(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_174e330  (orig 0x174e330, getter)
uint64_t main_f_174e330(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_174e340  (orig 0x174e340, getter)
uint64_t main_f_174e340(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_174e350  (orig 0x174e350, getter)
uint64_t main_f_174e350(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_174e490  (orig 0x174e490, ret_only)
void main_f_174e490() {}

// sub_174e620  (orig 0x174e620, mov_ret)
uint32_t main_f_174e620() { return 164; }

// sub_174ea90  (orig 0x174ea90, ret_only)
void main_f_174ea90() {}

// sub_174ed30  (orig 0x174ed30, ret_only)
void main_f_174ed30() {}

// sub_1755000  (orig 0x1755000, setter)
void main_f_1755000(uint64_t unused0, void* a1) { *(uint64_t*)((char*)(a1) + 2936) = 0; }

// sub_1755010  (orig 0x1755010, mov_ret)
uint32_t main_f_1755010() { return 0; }

// sub_1755020  (orig 0x1755020, ret_only)
void main_f_1755020() {}

// sub_1755030  (orig 0x1755030, mov_ret)
uint32_t main_f_1755030() { return 0; }

// sub_1755040  (orig 0x1755040, ret_only)
void main_f_1755040() {}

// sub_1755410  (orig 0x1755410, mov_ret)
uint32_t main_f_1755410() { return 0; }

// sub_1755660  (orig 0x1755660, mov_ret)
uint32_t main_f_1755660() { return 4; }

// sub_1755670  (orig 0x1755670, mov_ret)
uint32_t main_f_1755670() { return 4; }

// sub_1755680  (orig 0x1755680, mov_ret)
uint32_t main_f_1755680() { return 4; }

// sub_1755690  (orig 0x1755690, mov_ret)
uint32_t main_f_1755690() { return 4; }

// sub_17568b0  (orig 0x17568b0, setter-chain)
void main_f_17568b0(uint64_t a0, void* a1) { *(uint64_t*)((char*)(a1)) = a0; *(uint32_t*)((char*)(a1) + 8) = 0; *(uint64_t*)((char*)(a1) + 16) = 0; }

// sub_1757530  (orig 0x1757530, compare)
bool main_f_1757530(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 2152)) != (uint64_t)(2); }

// sub_17575d0  (orig 0x17575d0, mov_ret)
uint32_t main_f_17575d0() { return 0; }

// sub_17575e0  (orig 0x17575e0, mov_ret)
uint32_t main_f_17575e0() { return 0; }

// sub_17577e0  (orig 0x17577e0, setter-chain)
void main_f_17577e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_17579a0  (orig 0x17579a0, getter)
uint64_t main_f_17579a0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_1759430  (orig 0x1759430, ret_only)
void main_f_1759430() {}

// sub_175a410  (orig 0x175a410, setter)
void main_f_175a410(void* a0) { *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_175cc20  (orig 0x175cc20, ptr_add)
void* main_f_175cc20(void* a0) { return (char*)a0 + 384; }

// sub_175cc30  (orig 0x175cc30, ptr_add)
void* main_f_175cc30(void* a0) { return (char*)a0 + 416; }

// sub_175cc50  (orig 0x175cc50, compare)
bool main_f_175cc50(void* a0, uint64_t unused1, void* a2) { return (uint32_t)(*(uint32_t*)((char*)(a0))) == (uint32_t)(*(uint32_t*)((char*)(a2))); }

// sub_175f720  (orig 0x175f720, straight)
uint32_t main_f_175f720(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 600);
    return 65536;
}

// sub_17651c0  (orig 0x17651c0, setter)
void main_f_17651c0(void* a0) { *(uint8_t*)((char*)(a0) + 2249) = 0; }

// sub_1765680  (orig 0x1765680, setter)
void main_f_1765680(void* a0) { *(uint8_t*)((char*)(a0) + 2248) = 0; }

// sub_1766dd0  (orig 0x1766dd0, mov_ret)
uint32_t main_f_1766dd0() { return 0; }

// sub_1767d40  (orig 0x1767d40, setter-chain-zero)
void main_f_1767d40(void* a0) {
    *(uint64_t*)((char*)a0 + 2936) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 2928) = 0;
}

// sub_1769a50  (orig 0x1769a50, straight)
void main_f_1769a50(void* a0) {
    *(uint64_t*)((char*)(a0) + 20432L) = *(uint64_t*)((char*)(a0) + 792);
    *(uint64_t*)((char*)(a0) + 20440L) = *(uint64_t*)((char*)(a0) + 648);
}

// sub_1769c30  (orig 0x1769c30, mov_ret)
uint32_t main_f_1769c30() { return 0; }

// sub_1773510  (orig 0x1773510, ret_only)
void main_f_1773510() {}

// sub_17757e0  (orig 0x17757e0, mov_ret)
uint32_t main_f_17757e0() { return 1; }

// sub_17771a0  (orig 0x17771a0, mov_ret)
uint32_t main_f_17771a0() { return 30; }

// sub_1777410  (orig 0x1777410, mov_ret)
uint32_t main_f_1777410() { return 0; }

// sub_1777430  (orig 0x1777430, mov_ret)
uint32_t main_f_1777430() { return 4; }

// sub_1777440  (orig 0x1777440, mov_ret)
uint32_t main_f_1777440() { return 4; }

// sub_1777450  (orig 0x1777450, mov_ret)
uint64_t main_f_1777450() { return 0; }

// sub_1778130  (orig 0x1778130, ret_only)
void main_f_1778130() {}

// sub_1778140  (orig 0x1778140, ret_only)
void main_f_1778140() {}

// sub_1778160  (orig 0x1778160, ret_only)
void main_f_1778160() {}

// sub_1778180  (orig 0x1778180, ret_only)
void main_f_1778180() {}

// sub_1778190  (orig 0x1778190, ret_only)
void main_f_1778190() {}

// sub_17781a0  (orig 0x17781a0, ret_only)
void main_f_17781a0() {}

// sub_1778f30  (orig 0x1778f30, ret_only)
void main_f_1778f30() {}

// sub_1779240  (orig 0x1779240, ret_only)
void main_f_1779240() {}

// sub_17796c0  (orig 0x17796c0, ret_only)
void main_f_17796c0() {}

// sub_17796d0  (orig 0x17796d0, setter-chain-zero)
void main_f_17796d0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 8) = 0;
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
}

// sub_1779710  (orig 0x1779710, ret_only)
void main_f_1779710() {}

// sub_1779890  (orig 0x1779890, setter)
void main_f_1779890(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 176) = a1; }

// sub_177a5b0  (orig 0x177a5b0, setter)
void main_f_177a5b0(void* a0, float a1) { *(float*)((char*)(a0) + 188) = a1; }

// sub_177bed0  (orig 0x177bed0, compare-pred)
bool main_f_177bed0(void* a0) { return (uint32_t)(*(uint8_t*)(char*)(*(uint64_t*)((char*)a0 + 32))) == (uint32_t)(2); }

// sub_177c0b0  (orig 0x177c0b0, setter-chain)
void main_f_177c0b0(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4, uint64_t a5, uint64_t a6) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint64_t*)((char*)(a0) + 32) = a2; *(uint64_t*)((char*)(a0) + 96) = a3; *(uint64_t*)((char*)(a0) + 104) = a4; *(uint64_t*)((char*)(a0) + 112) = a5; *(uint64_t*)((char*)(a0) + 120) = a6; }

// sub_177c110  (orig 0x177c110, getter-chain)
uint64_t main_f_177c110(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 40))) + 136); }

// sub_177c140  (orig 0x177c140, getter-chain)
uint8_t main_f_177c140(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 2); }

// sub_177c150  (orig 0x177c150, getter-chain)
uint8_t main_f_177c150(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 1); }

// sub_177c160  (orig 0x177c160, getter-chain)
uint8_t main_f_177c160(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 3); }

// sub_177c200  (orig 0x177c200, mov_ret)
uint32_t main_f_177c200() { return 1; }

// sub_177c230  (orig 0x177c230, getter-chain)
int32_t main_f_177c230(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 32);
    return *(int16_t*)((char*)(t0) + 4);
}

// sub_177c7f0  (orig 0x177c7f0, getter-chain)
uint8_t main_f_177c7f0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 11); }

// sub_177c890  (orig 0x177c890, getter)
uint32_t main_f_177c890(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_177c8a0  (orig 0x177c8a0, getter)
uint8_t main_f_177c8a0(void* a0) { return *(uint8_t*)((char*)(a0) + 63); }

// sub_177c8c0  (orig 0x177c8c0, compare-pred)
bool main_f_177c8c0(void* a0) { return (uint32_t)(*(uint8_t*)(char*)(*(uint64_t*)((char*)a0 + 32))) == (uint32_t)(2); }

// sub_177ccb0  (orig 0x177ccb0, ret_only)
void main_f_177ccb0() {}

// sub_177cd10  (orig 0x177cd10, getter-chain)
uint64_t main_f_177cd10(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 40))) + 136); }

// sub_177cf10  (orig 0x177cf10, mov_ret)
uint32_t main_f_177cf10() { return 0; }

// sub_177d270  (orig 0x177d270, getter)
uint32_t main_f_177d270(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_177d280  (orig 0x177d280, getter)
uint32_t main_f_177d280(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_177d290  (orig 0x177d290, getter)
uint32_t main_f_177d290(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_177d2b0  (orig 0x177d2b0, getter)
uint32_t main_f_177d2b0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_177d2c0  (orig 0x177d2c0, mov_ret)
uint32_t main_f_177d2c0() { return 2; }

// sub_177d2d0  (orig 0x177d2d0, mov_ret)
uint32_t main_f_177d2d0() { return 8; }

// sub_177d2e0  (orig 0x177d2e0, getter)
uint32_t main_f_177d2e0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_177d300  (orig 0x177d300, setter)
void main_f_177d300(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_177d7b0  (orig 0x177d7b0, mov_ret)
uint32_t main_f_177d7b0() { return 1; }

// sub_177d7c0  (orig 0x177d7c0, getter)
uint32_t main_f_177d7c0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_177d7d0  (orig 0x177d7d0, getter)
uint32_t main_f_177d7d0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_177d7e0  (orig 0x177d7e0, getter)
uint32_t main_f_177d7e0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_177d7f0  (orig 0x177d7f0, ret_only)
void main_f_177d7f0() {}

// sub_177d800  (orig 0x177d800, mov_ret)
uint32_t main_f_177d800() { return 1; }

// sub_177d810  (orig 0x177d810, mov_ret)
uint32_t main_f_177d810() { return 1; }

// sub_177d820  (orig 0x177d820, mov_ret)
uint32_t main_f_177d820() { return 0; }

// sub_177d830  (orig 0x177d830, mov_ret)
uint32_t main_f_177d830() { return 1; }

// sub_177d860  (orig 0x177d860, ret_only)
void main_f_177d860() {}

// sub_177d920  (orig 0x177d920, mov_ret)
uint32_t main_f_177d920() { return 1; }

// sub_177d9b0  (orig 0x177d9b0, ret_only)
void main_f_177d9b0() {}

// sub_177dc70  (orig 0x177dc70, ret_only)
void main_f_177dc70() {}

// sub_177dc80  (orig 0x177dc80, ret_only)
void main_f_177dc80() {}

// sub_177dc90  (orig 0x177dc90, ret_only)
void main_f_177dc90() {}

// sub_177dca0  (orig 0x177dca0, ret_only)
void main_f_177dca0() {}

// sub_177dcb0  (orig 0x177dcb0, ret_only)
void main_f_177dcb0() {}

// sub_177dcc0  (orig 0x177dcc0, ret_only)
void main_f_177dcc0() {}

// sub_177dcd0  (orig 0x177dcd0, ret_only)
void main_f_177dcd0() {}

// sub_177dce0  (orig 0x177dce0, ret_only)
void main_f_177dce0() {}

// sub_177dd60  (orig 0x177dd60, ret_only)
void main_f_177dd60() {}

// sub_177e020  (orig 0x177e020, ret_only)
void main_f_177e020() {}

// sub_177e030  (orig 0x177e030, ret_only)
void main_f_177e030() {}

// sub_177e040  (orig 0x177e040, ret_only)
void main_f_177e040() {}

// sub_177e050  (orig 0x177e050, ret_only)
void main_f_177e050() {}

// sub_177e060  (orig 0x177e060, ret_only)
void main_f_177e060() {}

// sub_177e070  (orig 0x177e070, ret_only)
void main_f_177e070() {}

// sub_177e080  (orig 0x177e080, ret_only)
void main_f_177e080() {}

// sub_177e090  (orig 0x177e090, ret_only)
void main_f_177e090() {}

// sub_177e0a0  (orig 0x177e0a0, straight)
void* main_f_177e0a0(uint64_t unused0, void* a1, void* a2) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a1)) = (uint8_t)k0;
    return (char*)(a2) + 2;
}

// sub_17816d0  (orig 0x17816d0, mov_ret)
uint64_t main_f_17816d0() { return 0; }

// sub_17816e0  (orig 0x17816e0, mov_ret)
uint64_t main_f_17816e0() { return 0; }

// sub_1781780  (orig 0x1781780, setter-chain-zero)
void main_f_1781780(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 24) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
}

// sub_1787320  (orig 0x1787320, setter)
void main_f_1787320(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_1787330  (orig 0x1787330, straight)
void main_f_1787330(void* a0) {
    uint32_t k0 = 7;
    *(uint8_t*)((char*)(a0)) = 0;
    *(uint16_t*)((char*)(a0) + 2) = (uint16_t)k0;
}

// sub_1787340  (orig 0x1787340, setter-chain)
void main_f_1787340(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 4) = 0; }

// sub_1787350  (orig 0x1787350, setter-chain)
void main_f_1787350(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 4) = 0; }

// sub_17874f0  (orig 0x17874f0, straight)
void main_f_17874f0(void* a0) {
    *(uint32_t*)((char*)(a0)) = 117440512;
    *(uint8_t*)((char*)(a0) + 4) = 0;
}

// sub_1787560  (orig 0x1787560, setter)
void main_f_1787560(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_1787570  (orig 0x1787570, setter-chain)
void main_f_1787570(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_17875f0  (orig 0x17875f0, ret_only)
void main_f_17875f0() {}

// sub_1787600  (orig 0x1787600, ret_only)
void main_f_1787600() {}

// sub_1787670  (orig 0x1787670, straight)
void main_f_1787670(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0)) = (uint8_t)k0;
    *(uint64_t*)((char*)(a0) + 4) = 0;
    *(uint16_t*)((char*)(a0) + 2) = 0;
    *(uint32_t*)((char*)(a0) + 12) = 1;
    *(uint64_t*)((char*)(a0) + 24) = 0;
}

// sub_1787690  (orig 0x1787690, straight)
void main_f_1787690(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0)) = (uint8_t)k0;
    *(uint16_t*)((char*)(a0) + 2) = 0;
    *(uint64_t*)((char*)(a0) + 8) = 4294967296;
    *(uint64_t*)((char*)(a0) + 24) = 0;
}

// sub_17876b0  (orig 0x17876b0, setter-chain)
void main_f_17876b0(void* a0) { *(uint16_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 4) = 0; }

// sub_1787a90  (orig 0x1787a90, setter-chain-zero)
void main_f_1787a90(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_1787ab0  (orig 0x1787ab0, ret_only)
void main_f_1787ab0() {}

// sub_1787ca0  (orig 0x1787ca0, getter)
uint64_t main_f_1787ca0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1787d40  (orig 0x1787d40, setter-chain-zero)
void main_f_1787d40(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 216) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 200) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
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

// sub_1787d80  (orig 0x1787d80, ret_only)
void main_f_1787d80() {}

// sub_1787f40  (orig 0x1787f40, setter)
void main_f_1787f40(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 208) = a1; }

// sub_1787f50  (orig 0x1787f50, setter)
void main_f_1787f50(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 216) = a1; }

// sub_1787f60  (orig 0x1787f60, ret_only)
void main_f_1787f60() {}

// sub_1789910  (orig 0x1789910, setter-chain-zero)
void main_f_1789910(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1789930  (orig 0x1789930, ret_only)
void main_f_1789930() {}

// sub_1789ac0  (orig 0x1789ac0, straight)
void main_f_1789ac0(void* a0) {
    uint32_t k0 = 2;
    *(uint8_t*)((char*)(a0)) = (uint8_t)k0;
}

// sub_1789ad0  (orig 0x1789ad0, straight)
void main_f_1789ad0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0)) = (uint8_t)k0;
}

// sub_1789bc0  (orig 0x1789bc0, mov_ret)
uint32_t main_f_1789bc0() { return 4096; }

// sub_1789bd0  (orig 0x1789bd0, mov_ret)
uint32_t main_f_1789bd0() { return 4096; }

// sub_1789c00  (orig 0x1789c00, ret_only)
void main_f_1789c00() {}

// sub_1789d00  (orig 0x1789d00, ret_only)
void main_f_1789d00() {}

// sub_178d530  (orig 0x178d530, ret_only)
void main_f_178d530() {}

// sub_178d730  (orig 0x178d730, ret_only)
void main_f_178d730() {}

// sub_178df90  (orig 0x178df90, ret_only)
void main_f_178df90() {}

// sub_178e4c0  (orig 0x178e4c0, setter-chain-zero)
void main_f_178e4c0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 104) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
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

// sub_178e4f0  (orig 0x178e4f0, ret_only)
void main_f_178e4f0() {}

// sub_178f6e0  (orig 0x178f6e0, setter-chain-zero)
void main_f_178f6e0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_178f6f0  (orig 0x178f6f0, ret_only)
void main_f_178f6f0() {}

// sub_178f8d0  (orig 0x178f8d0, setter)
void main_f_178f8d0(void* a0) { *(uint8_t*)((char*)(a0) + 44) = 0; }

// sub_178f8f0  (orig 0x178f8f0, setter-chain-zero)
void main_f_178f8f0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_178f900  (orig 0x178f900, ret_only)
void main_f_178f900() {}

// sub_178f910  (orig 0x178f910, setter-chain)
void main_f_178f910(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0)) = a1; *(uint32_t*)((char*)(a0) + 32) = a2; }

// sub_178f920  (orig 0x178f920, getter)
uint64_t main_f_178f920(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_178fb40  (orig 0x178fb40, setter)
void main_f_178fb40(void* a0) { *(uint8_t*)((char*)(a0) + 36) = 0; }

// sub_178fb50  (orig 0x178fb50, setter-chain-zero)
void main_f_178fb50(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 24) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
}

// sub_178fb60  (orig 0x178fb60, ret_only)
void main_f_178fb60() {}

// sub_178fd20  (orig 0x178fd20, setter)
void main_f_178fd20(void* a0) { *(uint8_t*)((char*)(a0) + 24) = 0; }

// sub_178fda0  (orig 0x178fda0, setter-chain-zero)
void main_f_178fda0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_178fdb0  (orig 0x178fdb0, ret_only)
void main_f_178fdb0() {}

// sub_178fdc0  (orig 0x178fdc0, setter-chain)
void main_f_178fdc0(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 16) = a1; *(uint32_t*)((char*)(a0) + 12) = a2; }

// sub_178fdd0  (orig 0x178fdd0, getter)
uint64_t main_f_178fdd0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1790120  (orig 0x1790120, setter)
void main_f_1790120(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_1790130  (orig 0x1790130, setter-chain-zero)
void main_f_1790130(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_1790150  (orig 0x1790150, ret_only)
void main_f_1790150() {}

// sub_17902f0  (orig 0x17902f0, setter)
void main_f_17902f0(void* a0) { *(uint8_t*)((char*)(a0) + 64) = 0; }

// sub_1790410  (orig 0x1790410, ret_only)
void main_f_1790410() {}

// sub_17908a0  (orig 0x17908a0, setter-chain-zero)
void main_f_17908a0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 72) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_17908c0  (orig 0x17908c0, ret_only)
void main_f_17908c0() {}

// sub_17909a0  (orig 0x17909a0, setter-chain-zero)
void main_f_17909a0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 72) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_17909c0  (orig 0x17909c0, ret_only)
void main_f_17909c0() {}

// sub_1790b10  (orig 0x1790b10, setter-chain-zero)
void main_f_1790b10(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 200) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
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

// sub_1790b50  (orig 0x1790b50, ret_only)
void main_f_1790b50() {}

// sub_1790c70  (orig 0x1790c70, setter-chain-zero)
void main_f_1790c70(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_1790c90  (orig 0x1790c90, ret_only)
void main_f_1790c90() {}

// sub_1790de0  (orig 0x1790de0, setter-chain)
void main_f_1790de0(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_1790df0  (orig 0x1790df0, setter-chain-zero)
void main_f_1790df0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_1790e10  (orig 0x1790e10, ret_only)
void main_f_1790e10() {}

// sub_1790f00  (orig 0x1790f00, setter-chain)
void main_f_1790f00(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_1790f10  (orig 0x1790f10, setter-chain-zero)
void main_f_1790f10(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 56) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_1790f30  (orig 0x1790f30, ret_only)
void main_f_1790f30() {}

// sub_1791000  (orig 0x1791000, setter-chain)
void main_f_1791000(void* a0) { *(uint8_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_1791010  (orig 0x1791010, ret_only)
void main_f_1791010() {}

// sub_1791070  (orig 0x1791070, ret_only)
void main_f_1791070() {}

// sub_1791190  (orig 0x1791190, mov_ret)
uint32_t main_f_1791190() { return 0; }

// sub_17911a0  (orig 0x17911a0, ret_only)
void main_f_17911a0() {}

// sub_17912b0  (orig 0x17912b0, ret_only)
void main_f_17912b0() {}

// sub_17912c0  (orig 0x17912c0, compare)
bool main_f_17912c0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_17912d0  (orig 0x17912d0, mov_ret)
uint32_t main_f_17912d0() { return 1; }

// sub_1791410  (orig 0x1791410, getter)
uint64_t main_f_1791410(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1791420  (orig 0x1791420, getter)
uint64_t main_f_1791420(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_1791460  (orig 0x1791460, getter)
uint64_t main_f_1791460(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_1791470  (orig 0x1791470, getter)
uint64_t main_f_1791470(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_1791480  (orig 0x1791480, getter)
uint32_t main_f_1791480(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_1791490  (orig 0x1791490, getter)
uint32_t main_f_1791490(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_17914a0  (orig 0x17914a0, getter)
uint32_t main_f_17914a0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_17914b0  (orig 0x17914b0, getter)
uint32_t main_f_17914b0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_17914d0  (orig 0x17914d0, setter)
void main_f_17914d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_17914e0  (orig 0x17914e0, setter)
void main_f_17914e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_17914f0  (orig 0x17914f0, setter)
void main_f_17914f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_1791500  (orig 0x1791500, setter)
void main_f_1791500(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 56) = a1; }

// sub_1791510  (orig 0x1791510, setter)
void main_f_1791510(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_1793360  (orig 0x1793360, ret_only)
void main_f_1793360() {}

// sub_1794730  (orig 0x1794730, getter-chain)
uint16_t main_f_1794730(void* a0) { return *(uint16_t*)((char*)((*(uint64_t*)((char*)(a0) + 24))) + 8); }

// sub_1794740  (orig 0x1794740, ret_only)
void main_f_1794740() {}

// sub_1794760  (orig 0x1794760, compare-pred)
bool main_f_1794760(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 24)) + 10)) != (uint32_t)(0); }

// sub_1795520  (orig 0x1795520, setter)
void main_f_1795520(void* a0) { *(uint16_t*)((char*)(a0) + 56) = 0; }

// sub_1796d40  (orig 0x1796d40, setter-chain-zero)
void main_f_1796d40(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1799a10  (orig 0x1799a10, ret_only)
void main_f_1799a10() {}

// sub_1799f80  (orig 0x1799f80, setter-chain)
void main_f_1799f80(void* a0) { *(uint16_t*)((char*)(a0) + 4) = 0; *(uint32_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint32_t*)((char*)(a0) + 16) = 0; }

// sub_179a0f0  (orig 0x179a0f0, setter-chain)
void main_f_179a0f0(void* a0) { *(uint16_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_179a620  (orig 0x179a620, ret_only)
void main_f_179a620() {}

// sub_179a630  (orig 0x179a630, ret_only)
void main_f_179a630() {}

// sub_179a640  (orig 0x179a640, mov_ret)
uint64_t main_f_179a640() { return 0; }

// sub_179a650  (orig 0x179a650, ret_only)
void main_f_179a650() {}

// sub_179a730  (orig 0x179a730, ret_only)
void main_f_179a730() {}

// sub_179a750  (orig 0x179a750, straight)
void main_f_179a750(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 396) = (uint8_t)k0;
    *(uint64_t*)((char*)(a0) + 400) = 0;
    *(uint16_t*)((char*)(a0) + 408) = 0;
    *(uint64_t*)((char*)(a0) + 192) = (uint64_t)(a1);
}

// sub_179a770  (orig 0x179a770, setter)
void main_f_179a770(void* a0) { *(uint64_t*)((char*)(a0) + 192) = 0; }

// sub_179a780  (orig 0x179a780, setter-chain)
void main_f_179a780(void* a0) { *(uint64_t*)((char*)(a0) + 400) = 0; *(uint16_t*)((char*)(a0) + 408) = 0; }

// sub_179a9e0  (orig 0x179a9e0, getter)
uint64_t main_f_179a9e0(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_179a9f0  (orig 0x179a9f0, getter)
uint64_t main_f_179a9f0(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_179aa60  (orig 0x179aa60, ret_only)
void main_f_179aa60() {}

// sub_179e670  (orig 0x179e670, ret_only)
void main_f_179e670() {}

// sub_17a0130  (orig 0x17a0130, getter-chain)
uint64_t main_f_17a0130(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(uint64_t*)((char*)(t0) + (uintptr_t)(a1) * 8);
}

// sub_17a2d10  (orig 0x17a2d10, mov_ret)
uint32_t main_f_17a2d10() { return 1; }

// sub_17a2e30  (orig 0x17a2e30, compare)
bool main_f_17a2e30(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 16)) == (uint64_t)(4); }

// sub_17a3150  (orig 0x17a3150, compare)
bool main_f_17a3150(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 16)) == (uint64_t)(11); }

// sub_17a37a0  (orig 0x17a37a0, ret_only)
void main_f_17a37a0() {}

// sub_17a4330  (orig 0x17a4330, getter)
uint64_t main_f_17a4330(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_17a43d0  (orig 0x17a43d0, ret_only)
void main_f_17a43d0() {}

// sub_17ab1b0  (orig 0x17ab1b0, mov_ret)
uint32_t main_f_17ab1b0() { return -1; }

// sub_17ab1c0  (orig 0x17ab1c0, ret_only)
void main_f_17ab1c0() {}

// sub_17ab210  (orig 0x17ab210, mov_ret)
uint32_t main_f_17ab210() { return 255; }

// sub_17ab220  (orig 0x17ab220, ret_only)
void main_f_17ab220() {}

// sub_17ac430  (orig 0x17ac430, ret_only)
void main_f_17ac430() {}

// sub_17ac6f0  (orig 0x17ac6f0, mov_ret)
uint32_t main_f_17ac6f0() { return 0; }

// sub_17b0e00  (orig 0x17b0e00, compare)
bool main_f_17b0e00(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 216)) != (uint64_t)(0); }

// sub_17b2c00  (orig 0x17b2c00, ret_only)
void main_f_17b2c00() {}

// sub_17b2d00  (orig 0x17b2d00, ret_only)
void main_f_17b2d00() {}

// sub_17b2f40  (orig 0x17b2f40, mov_ret)
uint64_t main_f_17b2f40() { return 0; }

// sub_17b2f50  (orig 0x17b2f50, ret_only)
void main_f_17b2f50() {}

// sub_17b3330  (orig 0x17b3330, ret_only)
void main_f_17b3330() {}

// sub_17b49d0  (orig 0x17b49d0, ret_only)
void main_f_17b49d0() {}

// sub_17b4a70  (orig 0x17b4a70, ret_only)
void main_f_17b4a70() {}

// sub_17b4a80  (orig 0x17b4a80, ret_only)
void main_f_17b4a80() {}

// sub_17b5cb0  (orig 0x17b5cb0, compare)
bool main_f_17b5cb0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 320)) != (uint64_t)(0); }

// sub_17b7510  (orig 0x17b7510, getter)
uint64_t main_f_17b7510(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_17b7780  (orig 0x17b7780, ret_only)
void main_f_17b7780() {}

// sub_17b8250  (orig 0x17b8250, ret_only)
void main_f_17b8250() {}

// sub_17b8990  (orig 0x17b8990, getter-chain)
uint32_t main_f_17b8990(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 28); }

// sub_17b89f0  (orig 0x17b89f0, getter-chain)
uint64_t main_f_17b89f0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 136); }

// sub_17b8a00  (orig 0x17b8a00, getter-chain)
uint64_t main_f_17b8a00(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 136); }

// sub_17b8e00  (orig 0x17b8e00, getter)
uint32_t main_f_17b8e00(void* a0) { return *(uint32_t*)((char*)(a0) + 208); }

// sub_17b8e10  (orig 0x17b8e10, compare)
bool main_f_17b8e10(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 208)) != (uint64_t)(0); }

// sub_17b8e20  (orig 0x17b8e20, getter)
uint64_t main_f_17b8e20(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_17b8e30  (orig 0x17b8e30, getter)
uint64_t main_f_17b8e30(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_17b8e40  (orig 0x17b8e40, getter)
uint64_t main_f_17b8e40(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_17b8f40  (orig 0x17b8f40, mov_ret)
uint32_t main_f_17b8f40() { return 1; }

// sub_17b8f50  (orig 0x17b8f50, mov_ret)
uint64_t main_f_17b8f50() { return 0; }

// sub_17b8f60  (orig 0x17b8f60, mov_ret)
uint64_t main_f_17b8f60() { return 0; }

// sub_17bb4a0  (orig 0x17bb4a0, ret_only)
void main_f_17bb4a0() {}

// sub_17c02d0  (orig 0x17c02d0, mov_ret)
uint32_t main_f_17c02d0() { return 1; }

// sub_17c19e0  (orig 0x17c19e0, straight)
void main_f_17c19e0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 9) = (uint8_t)k0;
}

// sub_17c1b90  (orig 0x17c1b90, getter-chain)
uint8_t main_f_17c1b90(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 568))) + 42); }

// sub_17c48e0  (orig 0x17c48e0, ret_only)
void main_f_17c48e0() {}

// sub_17c9ae0  (orig 0x17c9ae0, setter)
void main_f_17c9ae0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1024) = a1; }

// sub_17ccc00  (orig 0x17ccc00, ret_only)
void main_f_17ccc00() {}

// sub_17d4c20  (orig 0x17d4c20, getter)
uint32_t main_f_17d4c20(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_17d4c30  (orig 0x17d4c30, getter)
uint32_t main_f_17d4c30(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_17d4c40  (orig 0x17d4c40, getter)
uint64_t main_f_17d4c40(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_17d4c50  (orig 0x17d4c50, getter)
uint64_t main_f_17d4c50(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_17d4c70  (orig 0x17d4c70, ptr_add)
void* main_f_17d4c70(void* a0) { return (char*)a0 + 72; }

// sub_17d4c80  (orig 0x17d4c80, mov_ret)
uint32_t main_f_17d4c80() { return 1; }

// sub_17d4c90  (orig 0x17d4c90, mov_ret)
uint32_t main_f_17d4c90() { return 0; }

// sub_17d4ca0  (orig 0x17d4ca0, mov_ret)
uint32_t main_f_17d4ca0() { return 6405; }

// sub_17d4cb0  (orig 0x17d4cb0, mov_ret)
uint32_t main_f_17d4cb0() { return 2; }

// sub_17d4df0  (orig 0x17d4df0, getter-chain)
uint32_t main_f_17d4df0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 24))) + 80); }

// sub_17d4e00  (orig 0x17d4e00, getter-chain)
uint32_t main_f_17d4e00(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 40))) + 44); }

// sub_17d4e60  (orig 0x17d4e60, ptr_add)
void* main_f_17d4e60(void* a0) { return (char*)a0 + 48; }

// sub_17d4e70  (orig 0x17d4e70, getter-chain)
uint8_t main_f_17d4e70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 24))) + 77); }

// sub_17d4ea0  (orig 0x17d4ea0, getter-chain)
uint32_t main_f_17d4ea0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 40))) + 40); }

// sub_17d57a0  (orig 0x17d57a0, setter-chain-zero)
void main_f_17d57a0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 8) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 16) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 48) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 24) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
}

// sub_17d5c10  (orig 0x17d5c10, setter-chain-zero)
void main_f_17d5c10(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 40) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
}

// sub_17d60b0  (orig 0x17d60b0, setter)
void main_f_17d60b0(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_17d6d30  (orig 0x17d6d30, mov_ret)
uint32_t main_f_17d6d30() { return 1; }

// sub_17de500  (orig 0x17de500, copy2)
void main_f_17de500(void* a0, void* a1) { *(uint64_t*)((char*)(a1) + 152) = *(uint64_t*)((char*)(a0) + 2240); }

// sub_17df790  (orig 0x17df790, setter-chain)
void main_f_17df790(void* a0, uint32_t a1, uint64_t a2) { *(uint32_t*)((char*)(a0) + 4488L) = a1; *(uint64_t*)((char*)(a0) + 4520L) = a2; }

// sub_17e5360  (orig 0x17e5360, mov_ret)
uint32_t main_f_17e5360() { return 1; }

// sub_17e53a0  (orig 0x17e53a0, mov_ret)
uint32_t main_f_17e53a0() { return 1; }

// sub_17e5d50  (orig 0x17e5d50, ret_only)
void main_f_17e5d50() {}

// sub_17e8260  (orig 0x17e8260, setter-chain)
void main_f_17e8260(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint8_t*)((char*)(a0) + 48) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_17e84c0  (orig 0x17e84c0, ret_only)
void main_f_17e84c0() {}

// sub_17e8d00  (orig 0x17e8d00, setter-chain-zero)
void main_f_17e8d00(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 80) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 64) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 48) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 32) = (struct u64x2){ 0, 0 };
}

// sub_17e8ed0  (orig 0x17e8ed0, ret_only)
void main_f_17e8ed0() {}

