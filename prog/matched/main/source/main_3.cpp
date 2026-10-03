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

namespace main { void sub_8c2840(); }
namespace main { void sub_66b040(); }
namespace main { void sub_8d0070(); }
namespace main { void sub_8d23b0(); }
namespace main { void sub_8d2bf0(); }
namespace main { void sub_e7feb0(); }
namespace main { void sub_8d4f30(); }
namespace main { void sub_e7c4c0(); }
namespace main { void sub_8d84b0(); }
namespace main { void sub_8d3f10(); }
namespace main { void sub_8da520(); }
namespace main { void sub_8dbc20(); }
namespace main { void sub_8dd2f0(); }
namespace main { void sub_8dfe20(); }
namespace main { void sub_8e2010(); }
namespace main { void sub_8e3410(); }
namespace main { void sub_8e4e90(); }
namespace main { void sub_eb81a0(); }
namespace main { void sub_e7c250(); }
namespace main { void sub_8e5870(); }
namespace main { void sub_8e8120(); }
namespace main { void sub_8e82a0(); }
namespace main { void sub_8e8e50(); }
namespace main { void sub_ce0(); }
namespace main { void sub_8efb20(); }
namespace main { void sub_8efc70(); }
namespace main { void sub_8f44e0(); }
namespace main { void sub_8f49d0(); }
namespace main { void sub_8fac70(); }
namespace main { void sub_8fb040(); }
namespace main { void sub_8f0b90(); }
namespace main { void sub_900ec0(); }
namespace main { void Set_State_NetBattleOff(); }
namespace main { void sub_906550(); }
namespace main { void sub_906850(); }
namespace main { void sub_90de90(); }
namespace main { void sub_90ed90(); }
namespace main { void sub_967370(); }
namespace main { void sub_9177a0(); }
namespace main { void sub_91cf70(); }
namespace main { void sub_91e2c0(); }
namespace main { void sub_91e900(); }
namespace main { void sub_924560(); }
namespace main { void sub_9255a0(); }
namespace main { void sub_925d50(); }
namespace main { void sub_926c70(); }
namespace main { void sub_9275c0(); }
namespace main { void sub_92a1a0(); }
namespace main { void sub_92bcc0(); }
namespace main { void sub_92e310(); }
namespace main { void sub_932000(); }
namespace main { void sub_932db0(); }
namespace main { void sub_91b4b0(); }
namespace main { void sub_935b40(); }
namespace main { void sub_9386e0(); }
namespace main { void sub_93c220(); }
namespace main { void sub_939c20(); }
namespace main { void sub_93a3d0(); }
namespace main { void sub_93dfb0(); }
namespace main { void sub_93e3b0(); }
namespace main { void sub_93a090(); }
namespace main { void sub_940410(); }
namespace main { void sub_8a9740(); }
namespace main { void sub_8a9750(); }
namespace main { void sub_8a9370(); }
namespace main { void sub_8a93d0(); }
namespace main { void sub_966130(); }
namespace main { void sub_96c4a0(); }
namespace main { void sub_979390(); }
namespace main { void sub_978f50(); }
namespace main { void sub_984d50(); }
namespace main { void sub_985c80(); }
namespace main { void sub_974780(); }
namespace main { void sub_974790(); }
namespace main { void sub_9892f0(); }
namespace main { void sub_9895d0(); }
namespace main { void sub_98db40(); }
namespace main { void sub_98dd50(); }
namespace main { void sub_98ed90(); }
namespace main { void sub_9a3e70(); }
namespace main { void sub_9a4060(); }
namespace main { void sub_9a78d0(); }
namespace main { void sub_9acb70(); }
namespace main { void sub_9b0150(); }
namespace main { void sub_9b03a0(); }
namespace main { void sub_970170(); }
namespace main { void sub_9b0ae0(); }
namespace main { void sub_a6cc90(); }
namespace battle { void battle_common(); }
namespace main { void sub_9484c0(); }
namespace main { void sub_948790(); }
namespace main { void sub_949fb0(); }
namespace main { void sub_a6e930(); }
namespace main { void sub_a6ffa0(); }
namespace main { void sub_a703a0(); }
namespace main { void sub_a70780(); }
namespace main { void sub_a71770(); }
namespace main { void sub_a73040(); }
namespace main { void sub_a741e0(); }
namespace main { void sub_a74a40(); }
namespace main { void sub_a76020(); }
namespace main { void sub_a79cd0(); }
namespace main { void sub_a7a700(); }
namespace main { void sub_a7a4b0(); }
namespace main { void sub_14b8960(); }
namespace main { void sub_a7e610(); }
namespace main { void sub_a7ebf0(); }
namespace main { void sub_a7f030(); }
namespace main { void sub_a7f7d0(); }
namespace main { void sub_a7ffc0(); }
namespace main { void sub_a80f20(); }
namespace main { void sub_a815c0(); }
namespace main { void sub_a81cb0(); }
namespace main { void sub_a823a0(); }
namespace main { void sub_a827d0(); }
namespace main { void sub_a82ca0(); }
namespace main { void sub_a83180(); }
namespace main { void sub_a84a70(); }
namespace main { void sub_a85130(); }
namespace main { void sub_a864e0(); }
namespace main { void sub_a873c0(); }
namespace main { void sub_a877f0(); }
namespace main { void sub_a87cf0(); }
namespace main { void sub_a88200(); }
namespace main { void sub_a88710(); }
namespace main { void sub_a88e50(); }
namespace main { void sub_a89380(); }
namespace main { void sub_a898c0(); }
namespace main { void sub_a89d00(); }
namespace main { void sub_a8a2d0(); }
namespace main { void sub_a8aa00(); }
namespace main { void sub_a8ae40(); }
namespace main { void sub_a8b3c0(); }
namespace main { void sub_a8b990(); }
namespace main { void sub_a91120(); }
namespace main { void sub_aab950(); }
namespace main { void sub_a7e740(); }
namespace main { void sub_aac6c0(); }
namespace main { void sub_ab34d0(); }
namespace main { void sub_a8af70(); }
namespace main { void sub_ab4ad0(); }
namespace main { void sub_ab7560(); }
namespace main { void sub_ab81e0(); }
namespace main { void sub_ab8fb0(); }
namespace main { void sub_abd640(); }
namespace main { void sub_abd920(); }
namespace main { void sub_15b6e10(); }
namespace main { void sub_ac56c0(); }
namespace main { void sub_ac70e0(); }
namespace main { void sub_acb7b0(); }
namespace main { void sub_ac7630(); }
namespace main { void sub_ad1f30(); }
namespace main { void sub_add5d0(); }
namespace main { void sub_ae3d20(); }
namespace main { void sub_ae43b0(); }

// sub_8c0040  (orig 0x8c0040, getter)
uint8_t main_f_8c0040(void* a0) { return *(uint8_t*)((char*)(a0) + 136); }

// sub_8c0050  (orig 0x8c0050, ptr_add)
void* main_f_8c0050(void* a0) { return (char*)a0 + 116; }

// sub_8c1750  (orig 0x8c1750, getter)
uint8_t main_f_8c1750(void* a0) { return *(uint8_t*)((char*)(a0) + 196); }

// sub_8c1760  (orig 0x8c1760, getter)
uint32_t main_f_8c1760(void* a0) { return *(uint32_t*)((char*)(a0) + 188); }

// sub_8c1d30  (orig 0x8c1d30, ptr_add)
void* main_f_8c1d30(void* a0) { return (char*)a0 + 172; }

// sub_8c1e70  (orig 0x8c1e70, ret_only)
void main_f_8c1e70() {}

// sub_8c1e80  (orig 0x8c1e80, ret_only)
void main_f_8c1e80() {}

// sub_8c1e90  (orig 0x8c1e90, ret_only)
void main_f_8c1e90() {}

// sub_8c1ea0  (orig 0x8c1ea0, ret_only)
void main_f_8c1ea0() {}

// sub_8c1ee0  (orig 0x8c1ee0, ptr_add)
void* main_f_8c1ee0(void* a0) { return (char*)a0 + 112; }

// sub_8c1ef0  (orig 0x8c1ef0, ptr_add)
void* main_f_8c1ef0(void* a0) { return (char*)a0 + 656; }

// sub_8c1f00  (orig 0x8c1f00, getter)
uint64_t main_f_8c1f00(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8c1f10  (orig 0x8c1f10, getter)
uint64_t main_f_8c1f10(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_8c1f30  (orig 0x8c1f30, getter)
uint64_t main_f_8c1f30(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_8c1f40  (orig 0x8c1f40, getter)
uint64_t main_f_8c1f40(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_8c1f50  (orig 0x8c1f50, getter)
uint64_t main_f_8c1f50(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_8c2040  (orig 0x8c2040, getter)
uint8_t main_f_8c2040(void* a0) { return *(uint8_t*)((char*)(a0) + 136); }

// sub_8c2050  (orig 0x8c2050, getter)
uint32_t main_f_8c2050(void* a0) { return *(uint32_t*)((char*)(a0) + 140); }

// sub_8c2060  (orig 0x8c2060, getter)
uint16_t main_f_8c2060(void* a0) { return *(uint16_t*)((char*)(a0) + 144); }

// sub_8c2610  (orig 0x8c2610, setter)
void main_f_8c2610(void* a0) { *(uint8_t*)((char*)(a0) + 648) = 0; }

// sub_8c2620  (orig 0x8c2620, straight)
void main_f_8c2620(void* a0) {
    *(uint8_t*)((char*)(a0) + 648) = (uint8_t)(1);
}

// sub_8c2630  (orig 0x8c2630, getter)
uint8_t main_f_8c2630(void* a0) { return *(uint8_t*)((char*)(a0) + 648); }

// sub_8c29d0  (orig 0x8c29d0, tailcall)
void main_f_8c29d0() { main::sub_8c2840(); }

// sub_8c5b00  (orig 0x8c5b00, mov_ret)
uint64_t main_f_8c5b00() { return 0; }

// sub_8c5b10  (orig 0x8c5b10, mov_ret)
uint64_t main_f_8c5b10() { return 0; }

// sub_8c6590  (orig 0x8c6590, tailcall)
void main_f_8c6590() { main::sub_66b040(); }

// sub_8c65c0  (orig 0x8c65c0, tailcall)
void main_f_8c65c0() { main::sub_66b040(); }

// sub_8c67d0  (orig 0x8c67d0, ret_only)
void main_f_8c67d0() {}

// sub_8c67e0  (orig 0x8c67e0, ret_only)
void main_f_8c67e0() {}

// sub_8c6810  (orig 0x8c6810, getter)
uint8_t main_f_8c6810(void* a0) { return *(uint8_t*)((char*)(a0) + 100); }

// sub_8c6820  (orig 0x8c6820, getter)
uint32_t main_f_8c6820(void* a0) { return *(uint32_t*)((char*)(a0) + 92); }

// sub_8c6ea0  (orig 0x8c6ea0, getter)
uint8_t main_f_8c6ea0(void* a0) { return *(uint8_t*)((char*)(a0) + 418); }

// sub_8c82c0  (orig 0x8c82c0, getter)
uint8_t main_f_8c82c0(void* a0) { return *(uint8_t*)((char*)(a0) + 417); }

// sub_8c82d0  (orig 0x8c82d0, getter)
uint32_t main_f_8c82d0(void* a0) { return *(uint32_t*)((char*)(a0) + 408); }

// sub_8c8c70  (orig 0x8c8c70, getter)
uint8_t main_f_8c8c70(void* a0) { return *(uint8_t*)((char*)(a0) + 196); }

// sub_8c8c80  (orig 0x8c8c80, ptr_add)
void* main_f_8c8c80(void* a0) { return (char*)a0 + 248; }

// sub_8ce700  (orig 0x8ce700, ret_only)
void main_f_8ce700() {}

// sub_8ce710  (orig 0x8ce710, ret_only)
void main_f_8ce710() {}

// sub_8ce740  (orig 0x8ce740, ret_only)
void main_f_8ce740() {}

// sub_8cf5c0  (orig 0x8cf5c0, mov_ret)
uint32_t main_f_8cf5c0() { return 12; }

// sub_8cfb90  (orig 0x8cfb90, mov_ret)
uint32_t main_f_8cfb90() { return 1; }

// sub_8cfd00  (orig 0x8cfd00, ret_only)
void main_f_8cfd00() {}

// sub_8d0040  (orig 0x8d0040, tailcall)
void main_f_8d0040() { main::sub_8d0070(); }

// sub_8d0050  (orig 0x8d0050, tailcall)
void main_f_8d0050() { main::sub_8d0070(); }

// sub_8d0060  (orig 0x8d0060, tailcall)
void main_f_8d0060() { main::sub_8d0070(); }

// sub_8d07d0  (orig 0x8d07d0, getter)
uint64_t main_f_8d07d0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8d0940  (orig 0x8d0940, mov_ret)
uint32_t main_f_8d0940() { return 1; }

// sub_8d2550  (orig 0x8d2550, tailcall)
void main_f_8d2550() { main::sub_8d23b0(); }

// sub_8d2870  (orig 0x8d2870, tailcall)
void main_f_8d2870() { main::sub_8d2bf0(); }

// sub_8d2940  (orig 0x8d2940, tailcall)
void main_f_8d2940() { main::sub_8d2bf0(); }

// sub_8d2950  (orig 0x8d2950, tailcall)
void main_f_8d2950() { main::sub_8d2bf0(); }

// sub_8d4eb0  (orig 0x8d4eb0, tailcall)
void main_f_8d4eb0() { main::sub_e7feb0(); }

// sub_8d4ec0  (orig 0x8d4ec0, tailcall)
void main_f_8d4ec0() { main::sub_8d4f30(); }

// sub_8d4ef0  (orig 0x8d4ef0, tailcall)
void main_f_8d4ef0() { main::sub_8d4f30(); }

// sub_8d4f00  (orig 0x8d4f00, tailcall)
void main_f_8d4f00() { main::sub_8d4f30(); }

// sub_8d5c00  (orig 0x8d5c00, ret_only)
void main_f_8d5c00() {}

// sub_8d5c10  (orig 0x8d5c10, tailcall)
void main_f_8d5c10() { main::sub_e7c4c0(); }

// sub_8d7c80  (orig 0x8d7c80, getter)
uint32_t main_f_8d7c80(void* a0) { return *(uint32_t*)((char*)(a0) + 1716); }

// sub_8d8660  (orig 0x8d8660, tailcall)
void main_f_8d8660() { main::sub_8d84b0(); }

// sub_8d8670  (orig 0x8d8670, tailcall)
void main_f_8d8670() { main::sub_8d3f10(); }

// sub_8d86a0  (orig 0x8d86a0, tailcall)
void main_f_8d86a0() { main::sub_8d3f10(); }

// sub_8d86b0  (orig 0x8d86b0, tailcall)
void main_f_8d86b0() { main::sub_8d3f10(); }

// sub_8d8700  (orig 0x8d8700, ret_only)
void main_f_8d8700() {}

// sub_8d8710  (orig 0x8d8710, copy2)
void main_f_8d8710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8720  (orig 0x8d8720, copy2)
void main_f_8d8720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8750  (orig 0x8d8750, ret_only)
void main_f_8d8750() {}

// sub_8d8760  (orig 0x8d8760, copy2)
void main_f_8d8760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8770  (orig 0x8d8770, copy2)
void main_f_8d8770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8800  (orig 0x8d8800, ret_only)
void main_f_8d8800() {}

// sub_8d8810  (orig 0x8d8810, copy2)
void main_f_8d8810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8d8820  (orig 0x8d8820, copy2)
void main_f_8d8820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8da230  (orig 0x8da230, tailcall)
void main_f_8da230() { main::sub_8da520(); }

// sub_8da3a0  (orig 0x8da3a0, tailcall)
void main_f_8da3a0() { main::sub_8da520(); }

// sub_8da3b0  (orig 0x8da3b0, tailcall)
void main_f_8da3b0() { main::sub_8da520(); }

// sub_8da660  (orig 0x8da660, ret_only)
void main_f_8da660() {}

// sub_8da670  (orig 0x8da670, copy2)
void main_f_8da670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8da680  (orig 0x8da680, copy2)
void main_f_8da680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8dbb90  (orig 0x8dbb90, ret_only)
void main_f_8dbb90() {}

// sub_8dbba0  (orig 0x8dbba0, tailcall)
void main_f_8dbba0() { main::sub_e7c4c0(); }

// sub_8dbbb0  (orig 0x8dbbb0, tailcall)
void main_f_8dbbb0() { main::sub_8dbc20(); }

// sub_8dbbe0  (orig 0x8dbbe0, tailcall)
void main_f_8dbbe0() { main::sub_8dbc20(); }

// sub_8dbbf0  (orig 0x8dbbf0, tailcall)
void main_f_8dbbf0() { main::sub_8dbc20(); }

// sub_8dc120  (orig 0x8dc120, ret_only)
void main_f_8dc120() {}

// sub_8dc130  (orig 0x8dc130, tailcall)
void main_f_8dc130() { main::sub_e7c4c0(); }

// sub_8dc670  (orig 0x8dc670, ret_only)
void main_f_8dc670() {}

// sub_8dc9f0  (orig 0x8dc9f0, ret_only)
void main_f_8dc9f0() {}

// sub_8dca00  (orig 0x8dca00, tailcall)
void main_f_8dca00() { main::sub_e7c4c0(); }

// sub_8dd190  (orig 0x8dd190, ret_only)
void main_f_8dd190() {}

// sub_8dd200  (orig 0x8dd200, tailcall)
void main_f_8dd200() { main::sub_8dd2f0(); }

// sub_8dd270  (orig 0x8dd270, tailcall)
void main_f_8dd270() { main::sub_8dd2f0(); }

// sub_8dd280  (orig 0x8dd280, tailcall)
void main_f_8dd280() { main::sub_8dd2f0(); }

// sub_8dd7e0  (orig 0x8dd7e0, ret_only)
void main_f_8dd7e0() {}

// sub_8dd7f0  (orig 0x8dd7f0, tailcall)
void main_f_8dd7f0() { main::sub_e7c4c0(); }

// sub_8ddba0  (orig 0x8ddba0, ret_only)
void main_f_8ddba0() {}

// sub_8ddbb0  (orig 0x8ddbb0, tailcall)
void main_f_8ddbb0() { main::sub_e7c4c0(); }

// sub_8dffc0  (orig 0x8dffc0, tailcall)
void main_f_8dffc0() { main::sub_8dfe20(); }

// sub_8e04b0  (orig 0x8e04b0, compare)
bool main_f_8e04b0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 392)) != (uint64_t)(0); }

// sub_8e16c0  (orig 0x8e16c0, ret_only)
void main_f_8e16c0() {}

// sub_8e16d0  (orig 0x8e16d0, copy2)
void main_f_8e16d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e16e0  (orig 0x8e16e0, copy2)
void main_f_8e16e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e21d0  (orig 0x8e21d0, tailcall)
void main_f_8e21d0() { main::sub_8e2010(); }

// sub_8e2200  (orig 0x8e2200, mov_ret)
uint32_t main_f_8e2200() { return 1; }

// sub_8e2330  (orig 0x8e2330, ret_only)
void main_f_8e2330() {}

// sub_8e33e0  (orig 0x8e33e0, tailcall)
void main_f_8e33e0() { main::sub_8e3410(); }

// sub_8e33f0  (orig 0x8e33f0, tailcall)
void main_f_8e33f0() { main::sub_8e3410(); }

// sub_8e3400  (orig 0x8e3400, tailcall)
void main_f_8e3400() { main::sub_8e3410(); }

// sub_8e4150  (orig 0x8e4150, mov_ret)
uint32_t main_f_8e4150() { return 1; }

// sub_8e4a50  (orig 0x8e4a50, ret_only)
void main_f_8e4a50() {}

// sub_8e5030  (orig 0x8e5030, tailcall)
void main_f_8e5030() { main::sub_8e4e90(); }

// sub_8e54e0  (orig 0x8e54e0, getter)
uint64_t main_f_8e54e0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8e5650  (orig 0x8e5650, mov_ret)
uint32_t main_f_8e5650() { return 1; }

// sub_8e6170  (orig 0x8e6170, tailcall)
void main_f_8e6170() { main::sub_eb81a0(); }

// sub_8e6f90  (orig 0x8e6f90, tailcall)
void main_f_8e6f90() { main::sub_e7c250(); }

// sub_8e6fa0  (orig 0x8e6fa0, tailcall)
void main_f_8e6fa0() { main::sub_8e5870(); }

// sub_8e6fd0  (orig 0x8e6fd0, tailcall)
void main_f_8e6fd0() { main::sub_8e5870(); }

// sub_8e6fe0  (orig 0x8e6fe0, tailcall)
void main_f_8e6fe0() { main::sub_8e5870(); }

// sub_8e8220  (orig 0x8e8220, tailcall)
void main_f_8e8220() { main::sub_8e8120(); }

// sub_8e8230  (orig 0x8e8230, tailcall)
void main_f_8e8230() { main::sub_8e82a0(); }

// sub_8e8260  (orig 0x8e8260, tailcall)
void main_f_8e8260() { main::sub_8e82a0(); }

// sub_8e8270  (orig 0x8e8270, tailcall)
void main_f_8e8270() { main::sub_8e82a0(); }

// sub_8e84a0  (orig 0x8e84a0, ret_only)
void main_f_8e84a0() {}

// sub_8e84b0  (orig 0x8e84b0, copy2)
void main_f_8e84b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e84c0  (orig 0x8e84c0, copy2)
void main_f_8e84c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8e8530  (orig 0x8e8530, ret_only)
void main_f_8e8530() {}

// sub_8e85b0  (orig 0x8e85b0, ret_only)
void main_f_8e85b0() {}

// sub_8e8630  (orig 0x8e8630, ret_only)
void main_f_8e8630() {}

// sub_8e8730  (orig 0x8e8730, ret_only)
void main_f_8e8730() {}

// sub_8e87e0  (orig 0x8e87e0, tailcall)
void main_f_8e87e0() { main::sub_8e8e50(); }

// sub_8e8930  (orig 0x8e8930, tailcall)
void main_f_8e8930() { main::sub_8e8e50(); }

// sub_8e8940  (orig 0x8e8940, tailcall)
void main_f_8e8940() { main::sub_8e8e50(); }

// sub_8e9560  (orig 0x8e9560, ret_only)
void main_f_8e9560() {}

// sub_8e9910  (orig 0x8e9910, ret_only)
void main_f_8e9910() {}

// sub_8e9d50  (orig 0x8e9d50, ret_only)
void main_f_8e9d50() {}

// sub_8eb1f0  (orig 0x8eb1f0, tailcall)
void main_f_8eb1f0() { main::sub_ce0(); }

// sub_8eb200  (orig 0x8eb200, tailcall)
void main_f_8eb200() { main::sub_ce0(); }

// sub_8eb210  (orig 0x8eb210, tailcall)
void main_f_8eb210() { main::sub_ce0(); }

// sub_8eb220  (orig 0x8eb220, ret_only)
void main_f_8eb220() {}

// sub_8eb230  (orig 0x8eb230, tailcall)
void main_f_8eb230() { main::sub_ce0(); }

// sub_8eb240  (orig 0x8eb240, tailcall)
void main_f_8eb240() { main::sub_ce0(); }

// sub_8ec4c0  (orig 0x8ec4c0, getter)
uint8_t main_f_8ec4c0(void* a0) { return *(uint8_t*)((char*)(a0) + 66); }

// sub_8ec540  (orig 0x8ec540, getter)
uint8_t main_f_8ec540(void* a0) { return *(uint8_t*)((char*)(a0) + 58); }

// sub_8ec6f0  (orig 0x8ec6f0, ret_only)
void main_f_8ec6f0() {}

// sub_8ec7f0  (orig 0x8ec7f0, ret_only)
void main_f_8ec7f0() {}

// sub_8ec830  (orig 0x8ec830, getter)
uint32_t main_f_8ec830(void* a0) { return *(uint32_t*)((char*)(a0) + 80); }

// sub_8ec8a0  (orig 0x8ec8a0, getter)
uint8_t main_f_8ec8a0(void* a0) { return *(uint8_t*)((char*)(a0) + 57); }

// sub_8ec930  (orig 0x8ec930, getter)
uint8_t main_f_8ec930(void* a0) { return *(uint8_t*)((char*)(a0) + 45); }

// sub_8ec940  (orig 0x8ec940, getter)
uint16_t main_f_8ec940(void* a0) { return *(uint16_t*)((char*)(a0) + 38); }

// sub_8ec950  (orig 0x8ec950, getter)
uint8_t main_f_8ec950(void* a0) { return *(uint8_t*)((char*)(a0) + 40); }

// sub_8ec960  (orig 0x8ec960, getter)
uint8_t main_f_8ec960(void* a0) { return *(uint8_t*)((char*)(a0) + 41); }

// sub_8ec970  (orig 0x8ec970, ret_only)
void main_f_8ec970() {}

// sub_8ec9e0  (orig 0x8ec9e0, getter)
uint8_t main_f_8ec9e0(void* a0) { return *(uint8_t*)((char*)(a0) + 432); }

// sub_8ec9f0  (orig 0x8ec9f0, tailcall)
void main_f_8ec9f0() { main::sub_ce0(); }

// sub_8eca00  (orig 0x8eca00, setter-chain)
void main_f_8eca00(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; *(uint8_t*)((char*)(a0) + 12) = 0; *(uint16_t*)((char*)(a0) + 16) = 0; *(uint32_t*)((char*)(a0) + 20) = 0; *(uint16_t*)((char*)(a0) + 24) = 0; *(uint32_t*)((char*)(a0) + 28) = 0; *(uint16_t*)((char*)(a0) + 32) = 0; *(uint32_t*)((char*)(a0) + 36) = 0; *(uint16_t*)((char*)(a0) + 40) = 0; *(uint32_t*)((char*)(a0) + 44) = 0; *(uint16_t*)((char*)(a0) + 48) = 0; *(uint32_t*)((char*)(a0) + 52) = 0; *(uint16_t*)((char*)(a0) + 56) = 0; *(uint32_t*)((char*)(a0) + 60) = 0; *(uint16_t*)((char*)(a0) + 64) = 0; *(uint32_t*)((char*)(a0) + 68) = 0; *(uint16_t*)((char*)(a0) + 72) = 0; *(uint32_t*)((char*)(a0) + 76) = 0; *(uint16_t*)((char*)(a0) + 80) = 0; *(uint32_t*)((char*)(a0) + 84) = 0; *(uint16_t*)((char*)(a0) + 88) = 0; *(uint32_t*)((char*)(a0) + 92) = 0; *(uint16_t*)((char*)(a0) + 96) = 0; *(uint32_t*)((char*)(a0) + 100) = 0; *(uint16_t*)((char*)(a0) + 104) = 0; *(uint32_t*)((char*)(a0) + 108) = 0; *(uint16_t*)((char*)(a0) + 112) = 0; *(uint32_t*)((char*)(a0) + 116) = 0; *(uint16_t*)((char*)(a0) + 120) = 0; *(uint32_t*)((char*)(a0) + 124) = 0; *(uint16_t*)((char*)(a0) + 128) = 0; *(uint32_t*)((char*)(a0) + 132) = 0; *(uint16_t*)((char*)(a0) + 136) = 0; *(uint32_t*)((char*)(a0) + 140) = 0; *(uint16_t*)((char*)(a0) + 144) = 0; *(uint32_t*)((char*)(a0) + 148) = 0; *(uint16_t*)((char*)(a0) + 152) = 0; *(uint32_t*)((char*)(a0) + 156) = 0; *(uint16_t*)((char*)(a0) + 160) = 0; *(uint32_t*)((char*)(a0) + 164) = 0; *(uint16_t*)((char*)(a0) + 168) = 0; *(uint32_t*)((char*)(a0) + 172) = 0; *(uint16_t*)((char*)(a0) + 176) = 0; *(uint32_t*)((char*)(a0) + 180) = 0; *(uint16_t*)((char*)(a0) + 184) = 0; *(uint32_t*)((char*)(a0) + 188) = 0; *(uint16_t*)((char*)(a0) + 192) = 0; *(uint32_t*)((char*)(a0) + 196) = 0; *(uint16_t*)((char*)(a0) + 200) = 0; *(uint32_t*)((char*)(a0) + 204) = 0; *(uint16_t*)((char*)(a0) + 208) = 0; *(uint32_t*)((char*)(a0) + 212) = 0; *(uint16_t*)((char*)(a0) + 216) = 0; *(uint32_t*)((char*)(a0) + 220) = 0; *(uint16_t*)((char*)(a0) + 224) = 0; *(uint32_t*)((char*)(a0) + 228) = 0; *(uint16_t*)((char*)(a0) + 232) = 0; *(uint32_t*)((char*)(a0) + 236) = 0; *(uint16_t*)((char*)(a0) + 240) = 0; *(uint32_t*)((char*)(a0) + 244) = 0; *(uint16_t*)((char*)(a0) + 248) = 0; *(uint32_t*)((char*)(a0) + 252) = 0; *(uint16_t*)((char*)(a0) + 256) = 0; *(uint32_t*)((char*)(a0) + 260) = 0; *(uint16_t*)((char*)(a0) + 264) = 0; *(uint32_t*)((char*)(a0) + 268) = 0; *(uint16_t*)((char*)(a0) + 272) = 0; *(uint32_t*)((char*)(a0) + 276) = 0; *(uint16_t*)((char*)(a0) + 280) = 0; *(uint32_t*)((char*)(a0) + 284) = 0; *(uint16_t*)((char*)(a0) + 288) = 0; *(uint32_t*)((char*)(a0) + 292) = 0; *(uint16_t*)((char*)(a0) + 296) = 0; *(uint32_t*)((char*)(a0) + 300) = 0; *(uint16_t*)((char*)(a0) + 304) = 0; *(uint32_t*)((char*)(a0) + 308) = 0; *(uint16_t*)((char*)(a0) + 312) = 0; *(uint32_t*)((char*)(a0) + 316) = 0; *(uint16_t*)((char*)(a0) + 320) = 0; *(uint32_t*)((char*)(a0) + 324) = 0; *(uint16_t*)((char*)(a0) + 328) = 0; *(uint32_t*)((char*)(a0) + 332) = 0; *(uint16_t*)((char*)(a0) + 336) = 0; *(uint32_t*)((char*)(a0) + 340) = 0; *(uint16_t*)((char*)(a0) + 344) = 0; *(uint32_t*)((char*)(a0) + 348) = 0; *(uint16_t*)((char*)(a0) + 352) = 0; *(uint32_t*)((char*)(a0) + 356) = 0; *(uint16_t*)((char*)(a0) + 360) = 0; *(uint32_t*)((char*)(a0) + 364) = 0; *(uint16_t*)((char*)(a0) + 368) = 0; *(uint32_t*)((char*)(a0) + 372) = 0; *(uint16_t*)((char*)(a0) + 376) = 0; *(uint32_t*)((char*)(a0) + 380) = 0; *(uint16_t*)((char*)(a0) + 384) = 0; *(uint32_t*)((char*)(a0) + 388) = 0; *(uint16_t*)((char*)(a0) + 392) = 0; *(uint32_t*)((char*)(a0) + 396) = 0; }

// sub_8edd90  (orig 0x8edd90, mov_ret)
uint32_t main_f_8edd90() { return 75; }

// sub_8efbf0  (orig 0x8efbf0, tailcall)
void main_f_8efbf0() { main::sub_8efb20(); }

// sub_8efc00  (orig 0x8efc00, tailcall)
void main_f_8efc00() { main::sub_8efc70(); }

// sub_8efc30  (orig 0x8efc30, tailcall)
void main_f_8efc30() { main::sub_8efc70(); }

// sub_8efc40  (orig 0x8efc40, tailcall)
void main_f_8efc40() { main::sub_8efc70(); }

// sub_8efda0  (orig 0x8efda0, ret_only)
void main_f_8efda0() {}

// sub_8efdb0  (orig 0x8efdb0, ret_only)
void main_f_8efdb0() {}

// sub_8efdc0  (orig 0x8efdc0, tailcall)
void main_f_8efdc0() { main::sub_ce0(); }

// sub_8f0770  (orig 0x8f0770, ret_only)
void main_f_8f0770() {}

// sub_8f0780  (orig 0x8f0780, copy2)
void main_f_8f0780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8f0790  (orig 0x8f0790, copy2)
void main_f_8f0790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8f1dd0  (orig 0x8f1dd0, getter-chain)
uint32_t main_f_8f1dd0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 344))) + 240); }

// sub_8f3740  (orig 0x8f3740, ret_only)
void main_f_8f3740() {}

// sub_8f40c0  (orig 0x8f40c0, tailcall)
void main_f_8f40c0() { main::sub_ce0(); }

// sub_8f4460  (orig 0x8f4460, tailcall)
void main_f_8f4460() { main::sub_e7feb0(); }

// sub_8f4470  (orig 0x8f4470, tailcall)
void main_f_8f4470() { main::sub_8f44e0(); }

// sub_8f44a0  (orig 0x8f44a0, tailcall)
void main_f_8f44a0() { main::sub_8f44e0(); }

// sub_8f44b0  (orig 0x8f44b0, tailcall)
void main_f_8f44b0() { main::sub_8f44e0(); }

// sub_8f4950  (orig 0x8f4950, tailcall)
void main_f_8f4950() { main::sub_e7feb0(); }

// sub_8f4960  (orig 0x8f4960, tailcall)
void main_f_8f4960() { main::sub_8f49d0(); }

// sub_8f4990  (orig 0x8f4990, tailcall)
void main_f_8f4990() { main::sub_8f49d0(); }

// sub_8f49a0  (orig 0x8f49a0, tailcall)
void main_f_8f49a0() { main::sub_8f49d0(); }

// sub_8fae70  (orig 0x8fae70, tailcall)
void main_f_8fae70() { main::sub_8fac70(); }

// sub_8fae80  (orig 0x8fae80, tailcall)
void main_f_8fae80() { main::sub_8fb040(); }

// sub_8faeb0  (orig 0x8faeb0, tailcall)
void main_f_8faeb0() { main::sub_8fb040(); }

// sub_8faec0  (orig 0x8faec0, tailcall)
void main_f_8faec0() { main::sub_8fb040(); }

// sub_8faf50  (orig 0x8faf50, ret_only)
void main_f_8faf50() {}

// sub_8faff0  (orig 0x8faff0, ret_only)
void main_f_8faff0() {}

// sub_8fb3e0  (orig 0x8fb3e0, tailcall)
void main_f_8fb3e0() { main::sub_ce0(); }

// sub_8fdc80  (orig 0x8fdc80, tailcall)
void main_f_8fdc80() { main::sub_8f0b90(); }

// sub_8ffe70  (orig 0x8ffe70, ret_only)
void main_f_8ffe70() {}

// sub_8ffe80  (orig 0x8ffe80, copy2)
void main_f_8ffe80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_8ffe90  (orig 0x8ffe90, copy2)
void main_f_8ffe90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_900a40  (orig 0x900a40, tailcall)
void main_f_900a40() { main::sub_900ec0(); }

// sub_900c10  (orig 0x900c10, tailcall)
void main_f_900c10() { main::sub_900ec0(); }

// sub_900c20  (orig 0x900c20, tailcall)
void main_f_900c20() { main::sub_900ec0(); }

// sub_901010  (orig 0x901010, ret_only)
void main_f_901010() {}

// sub_901020  (orig 0x901020, copy2)
void main_f_901020(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901030  (orig 0x901030, copy2)
void main_f_901030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901060  (orig 0x901060, ret_only)
void main_f_901060() {}

// sub_901070  (orig 0x901070, copy2)
void main_f_901070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901080  (orig 0x901080, copy2)
void main_f_901080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9010b0  (orig 0x9010b0, ret_only)
void main_f_9010b0() {}

// sub_9010c0  (orig 0x9010c0, copy2)
void main_f_9010c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9010d0  (orig 0x9010d0, copy2)
void main_f_9010d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901100  (orig 0x901100, ret_only)
void main_f_901100() {}

// sub_901110  (orig 0x901110, copy2)
void main_f_901110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901120  (orig 0x901120, copy2)
void main_f_901120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_901160  (orig 0x901160, ret_only)
void main_f_901160() {}

// sub_901440  (orig 0x901440, tailcall)
void main_f_901440() { main::Set_State_NetBattleOff(); }

// sub_9067d0  (orig 0x9067d0, tailcall)
void main_f_9067d0() { main::sub_906550(); }

// sub_9067e0  (orig 0x9067e0, tailcall)
void main_f_9067e0() { main::sub_906850(); }

// sub_906810  (orig 0x906810, tailcall)
void main_f_906810() { main::sub_906850(); }

// sub_906820  (orig 0x906820, tailcall)
void main_f_906820() { main::sub_906850(); }

// sub_906980  (orig 0x906980, tailcall)
void main_f_906980() { main::sub_ce0(); }

// sub_907a50  (orig 0x907a50, tailcall)
void main_f_907a50() { main::sub_ce0(); }

// sub_90e060  (orig 0x90e060, tailcall)
void main_f_90e060() { main::sub_90de90(); }

// sub_90e2c0  (orig 0x90e2c0, tailcall)
void main_f_90e2c0() { main::sub_ce0(); }

// sub_90e2d0  (orig 0x90e2d0, ret_only)
void main_f_90e2d0() {}

// sub_90f010  (orig 0x90f010, tailcall)
void main_f_90f010() { main::sub_90ed90(); }

// sub_90f020  (orig 0x90f020, tailcall)
void main_f_90f020() { main::sub_967370(); }

// sub_90f050  (orig 0x90f050, tailcall)
void main_f_90f050() { main::sub_967370(); }

// sub_90f060  (orig 0x90f060, tailcall)
void main_f_90f060() { main::sub_967370(); }

// sub_90f240  (orig 0x90f240, tailcall)
void main_f_90f240() { main::sub_ce0(); }

// sub_90f250  (orig 0x90f250, tailcall)
void main_f_90f250() { main::sub_ce0(); }

// sub_90f260  (orig 0x90f260, tailcall)
void main_f_90f260() { main::sub_ce0(); }

// sub_90f270  (orig 0x90f270, tailcall)
void main_f_90f270() { main::sub_ce0(); }

// sub_90f280  (orig 0x90f280, tailcall)
void main_f_90f280() { main::sub_ce0(); }

// sub_90f290  (orig 0x90f290, tailcall)
void main_f_90f290() { main::sub_ce0(); }

// sub_90f2a0  (orig 0x90f2a0, tailcall)
void main_f_90f2a0() { main::sub_ce0(); }

// sub_90f350  (orig 0x90f350, tailcall)
void main_f_90f350() { main::sub_ce0(); }

// sub_913870  (orig 0x913870, getter-chain)
uint64_t main_f_913870(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 1832); }

// sub_913880  (orig 0x913880, ret_only)
void main_f_913880() {}

// sub_913890  (orig 0x913890, copy2)
void main_f_913890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9138a0  (orig 0x9138a0, copy2)
void main_f_9138a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9172a0  (orig 0x9172a0, tailcall)
void main_f_9172a0() { main::sub_9177a0(); }

// sub_917470  (orig 0x917470, tailcall)
void main_f_917470() { main::sub_9177a0(); }

// sub_917480  (orig 0x917480, tailcall)
void main_f_917480() { main::sub_9177a0(); }

// sub_9176b0  (orig 0x9176b0, ret_only)
void main_f_9176b0() {}

// sub_917750  (orig 0x917750, ret_only)
void main_f_917750() {}

// sub_917990  (orig 0x917990, ret_only)
void main_f_917990() {}

// sub_919be0  (orig 0x919be0, ret_only)
void main_f_919be0() {}

// sub_919bf0  (orig 0x919bf0, copy2)
void main_f_919bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_919c00  (orig 0x919c00, copy2)
void main_f_919c00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_919f80  (orig 0x919f80, ret_only)
void main_f_919f80() {}

// sub_91a930  (orig 0x91a930, tailcall)
void main_f_91a930() { main::sub_ce0(); }

// sub_91b5f0  (orig 0x91b5f0, ret_only)
void main_f_91b5f0() {}

// sub_91b600  (orig 0x91b600, ret_only)
void main_f_91b600() {}

// sub_91cad0  (orig 0x91cad0, tailcall)
void main_f_91cad0() { main::sub_e7feb0(); }

// sub_91cef0  (orig 0x91cef0, tailcall)
void main_f_91cef0() { main::sub_e7feb0(); }

// sub_91cf00  (orig 0x91cf00, tailcall)
void main_f_91cf00() { main::sub_91cf70(); }

// sub_91cf30  (orig 0x91cf30, tailcall)
void main_f_91cf30() { main::sub_91cf70(); }

// sub_91cf40  (orig 0x91cf40, tailcall)
void main_f_91cf40() { main::sub_91cf70(); }

// sub_91d190  (orig 0x91d190, straight)
void main_f_91d190(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_91d4d0  (orig 0x91d4d0, ret_only)
void main_f_91d4d0() {}

// sub_91d4e0  (orig 0x91d4e0, tailcall)
void main_f_91d4e0() { main::sub_e7c4c0(); }

// sub_91dfe0  (orig 0x91dfe0, ret_only)
void main_f_91dfe0() {}

// sub_91e0d0  (orig 0x91e0d0, tailcall)
void main_f_91e0d0() { main::sub_91e2c0(); }

// sub_91e1c0  (orig 0x91e1c0, tailcall)
void main_f_91e1c0() { main::sub_91e2c0(); }

// sub_91e1d0  (orig 0x91e1d0, tailcall)
void main_f_91e1d0() { main::sub_91e2c0(); }

// sub_91e870  (orig 0x91e870, ret_only)
void main_f_91e870() {}

// sub_91e880  (orig 0x91e880, tailcall)
void main_f_91e880() { main::sub_e7c4c0(); }

// sub_91e890  (orig 0x91e890, tailcall)
void main_f_91e890() { main::sub_91e900(); }

// sub_91e8c0  (orig 0x91e8c0, tailcall)
void main_f_91e8c0() { main::sub_91e900(); }

// sub_91e8d0  (orig 0x91e8d0, tailcall)
void main_f_91e8d0() { main::sub_91e900(); }

// sub_91f910  (orig 0x91f910, setter-chain)
void main_f_91f910(void* a0) { *(uint64_t*)((char*)(a0) + 1520) = 0; *(uint32_t*)((char*)(a0) + 1536) = 0; *(uint32_t*)((char*)(a0) + 1544) = 0; }

// sub_91ff60  (orig 0x91ff60, ret_only)
void main_f_91ff60() {}

// sub_91ff70  (orig 0x91ff70, copy2)
void main_f_91ff70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_91ff80  (orig 0x91ff80, copy2)
void main_f_91ff80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_91ffa0  (orig 0x91ffa0, ret_only)
void main_f_91ffa0() {}

// sub_91ffb0  (orig 0x91ffb0, copy2)
void main_f_91ffb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_91ffc0  (orig 0x91ffc0, copy2)
void main_f_91ffc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9215a0  (orig 0x9215a0, ret_only)
void main_f_9215a0() {}

// sub_9215b0  (orig 0x9215b0, copy2)
void main_f_9215b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9215c0  (orig 0x9215c0, copy2)
void main_f_9215c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_921f70  (orig 0x921f70, ret_only)
void main_f_921f70() {}

// sub_921f80  (orig 0x921f80, copy2)
void main_f_921f80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_921f90  (orig 0x921f90, copy2)
void main_f_921f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_922960  (orig 0x922960, getter)
uint32_t main_f_922960(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_923620  (orig 0x923620, ret_only)
void main_f_923620() {}

// sub_923630  (orig 0x923630, copy2)
void main_f_923630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_923640  (orig 0x923640, copy2)
void main_f_923640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9244c0  (orig 0x9244c0, mov_ret)
uint32_t main_f_9244c0() { return 0; }

// sub_9244d0  (orig 0x9244d0, ret_only)
void main_f_9244d0() {}

// sub_9244e0  (orig 0x9244e0, tailcall)
void main_f_9244e0() { main::sub_e7c4c0(); }

// sub_9244f0  (orig 0x9244f0, tailcall)
void main_f_9244f0() { main::sub_924560(); }

// sub_924520  (orig 0x924520, tailcall)
void main_f_924520() { main::sub_924560(); }

// sub_924530  (orig 0x924530, tailcall)
void main_f_924530() { main::sub_924560(); }

// sub_924780  (orig 0x924780, straight)
void main_f_924780(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_924ab0  (orig 0x924ab0, ret_only)
void main_f_924ab0() {}

// sub_924ac0  (orig 0x924ac0, tailcall)
void main_f_924ac0() { main::sub_e7c4c0(); }

// sub_925490  (orig 0x925490, setter)
void main_f_925490(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_925520  (orig 0x925520, tailcall)
void main_f_925520() { main::sub_e7feb0(); }

// sub_925530  (orig 0x925530, tailcall)
void main_f_925530() { main::sub_9255a0(); }

// sub_925560  (orig 0x925560, tailcall)
void main_f_925560() { main::sub_9255a0(); }

// sub_925570  (orig 0x925570, tailcall)
void main_f_925570() { main::sub_9255a0(); }

// sub_925ad0  (orig 0x925ad0, ret_only)
void main_f_925ad0() {}

// sub_925ba0  (orig 0x925ba0, tailcall)
void main_f_925ba0() { main::sub_925d50(); }

// sub_925c70  (orig 0x925c70, tailcall)
void main_f_925c70() { main::sub_925d50(); }

// sub_925c80  (orig 0x925c80, tailcall)
void main_f_925c80() { main::sub_925d50(); }

// sub_9260c0  (orig 0x9260c0, straight)
void main_f_9260c0(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_926380  (orig 0x926380, ret_only)
void main_f_926380() {}

// sub_926390  (orig 0x926390, tailcall)
void main_f_926390() { main::sub_e7c4c0(); }

// sub_9269f0  (orig 0x9269f0, ret_only)
void main_f_9269f0() {}

// sub_926ac0  (orig 0x926ac0, tailcall)
void main_f_926ac0() { main::sub_926c70(); }

// sub_926b90  (orig 0x926b90, tailcall)
void main_f_926b90() { main::sub_926c70(); }

// sub_926ba0  (orig 0x926ba0, tailcall)
void main_f_926ba0() { main::sub_926c70(); }

// sub_927530  (orig 0x927530, ret_only)
void main_f_927530() {}

// sub_927540  (orig 0x927540, tailcall)
void main_f_927540() { main::sub_e7c4c0(); }

// sub_927550  (orig 0x927550, tailcall)
void main_f_927550() { main::sub_9275c0(); }

// sub_927580  (orig 0x927580, tailcall)
void main_f_927580() { main::sub_9275c0(); }

// sub_927590  (orig 0x927590, tailcall)
void main_f_927590() { main::sub_9275c0(); }

// sub_92a350  (orig 0x92a350, tailcall)
void main_f_92a350() { main::sub_92a1a0(); }

// sub_92a7c0  (orig 0x92a7c0, ret_only)
void main_f_92a7c0() {}

// sub_92a7d0  (orig 0x92a7d0, copy2)
void main_f_92a7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a7e0  (orig 0x92a7e0, copy2)
void main_f_92a7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a800  (orig 0x92a800, ret_only)
void main_f_92a800() {}

// sub_92a810  (orig 0x92a810, copy2)
void main_f_92a810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a820  (orig 0x92a820, copy2)
void main_f_92a820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92a920  (orig 0x92a920, straight)
void main_f_92a920(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_92aab0  (orig 0x92aab0, straight)
void main_f_92aab0(void* a0) {
    *(uint32_t*)((char*)(a0) + 124) = 3;
}

// sub_92aac0  (orig 0x92aac0, ret_only)
void main_f_92aac0() {}

// sub_92aad0  (orig 0x92aad0, tailcall)
void main_f_92aad0() { main::sub_e7c4c0(); }

// sub_92ad60  (orig 0x92ad60, straight)
void main_f_92ad60(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_92bcb0  (orig 0x92bcb0, ret_only)
void main_f_92bcb0() {}

// sub_92be60  (orig 0x92be60, tailcall)
void main_f_92be60() { main::sub_92bcc0(); }

// sub_92c2c0  (orig 0x92c2c0, ret_only)
void main_f_92c2c0() {}

// sub_92c2d0  (orig 0x92c2d0, copy2)
void main_f_92c2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c2e0  (orig 0x92c2e0, copy2)
void main_f_92c2e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c300  (orig 0x92c300, ret_only)
void main_f_92c300() {}

// sub_92c310  (orig 0x92c310, copy2)
void main_f_92c310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c320  (orig 0x92c320, copy2)
void main_f_92c320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c370  (orig 0x92c370, ret_only)
void main_f_92c370() {}

// sub_92c380  (orig 0x92c380, copy2)
void main_f_92c380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c390  (orig 0x92c390, copy2)
void main_f_92c390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c590  (orig 0x92c590, ret_only)
void main_f_92c590() {}

// sub_92c5a0  (orig 0x92c5a0, ret_only)
void main_f_92c5a0() {}

// sub_92c5d0  (orig 0x92c5d0, getter-chain)
uint8_t main_f_92c5d0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 8))) + 829); }

// sub_92c640  (orig 0x92c640, tailcall)
void main_f_92c640() { main::sub_ce0(); }

// sub_92c650  (orig 0x92c650, copy2)
void main_f_92c650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c660  (orig 0x92c660, copy2)
void main_f_92c660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c690  (orig 0x92c690, ret_only)
void main_f_92c690() {}

// sub_92c6a0  (orig 0x92c6a0, copy2)
void main_f_92c6a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c6b0  (orig 0x92c6b0, copy2)
void main_f_92c6b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c760  (orig 0x92c760, ret_only)
void main_f_92c760() {}

// sub_92c770  (orig 0x92c770, copy2)
void main_f_92c770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c780  (orig 0x92c780, copy2)
void main_f_92c780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c7e0  (orig 0x92c7e0, ret_only)
void main_f_92c7e0() {}

// sub_92c7f0  (orig 0x92c7f0, copy2)
void main_f_92c7f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c800  (orig 0x92c800, copy2)
void main_f_92c800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c980  (orig 0x92c980, ret_only)
void main_f_92c980() {}

// sub_92c990  (orig 0x92c990, copy2)
void main_f_92c990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92c9a0  (orig 0x92c9a0, copy2)
void main_f_92c9a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_92e410  (orig 0x92e410, tailcall)
void main_f_92e410() { main::sub_92e310(); }

// sub_92fb90  (orig 0x92fb90, ret_only)
void main_f_92fb90() {}

// sub_92fdd0  (orig 0x92fdd0, straight)
void main_f_92fdd0(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_930060  (orig 0x930060, getter-chain)
uint8_t main_f_930060(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 128))) + 1492); }

// sub_9300d0  (orig 0x9300d0, tailcall)
void main_f_9300d0() { main::sub_e7c4c0(); }

// sub_9305a0  (orig 0x9305a0, straight)
void main_f_9305a0(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_930bb0  (orig 0x930bb0, tailcall)
void main_f_930bb0() { main::sub_e7c4c0(); }

// sub_930f90  (orig 0x930f90, straight)
void main_f_930f90(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_931930  (orig 0x931930, tailcall)
void main_f_931930() { main::sub_e7c4c0(); }

// sub_931f70  (orig 0x931f70, ret_only)
void main_f_931f70() {}

// sub_931f80  (orig 0x931f80, tailcall)
void main_f_931f80() { main::sub_e7c4c0(); }

// sub_931f90  (orig 0x931f90, tailcall)
void main_f_931f90() { main::sub_932000(); }

// sub_931fc0  (orig 0x931fc0, tailcall)
void main_f_931fc0() { main::sub_932000(); }

// sub_931fd0  (orig 0x931fd0, tailcall)
void main_f_931fd0() { main::sub_932000(); }

// sub_932220  (orig 0x932220, straight)
void main_f_932220(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_9325c0  (orig 0x9325c0, tailcall)
void main_f_9325c0() { main::sub_e7c4c0(); }

// sub_932b30  (orig 0x932b30, ret_only)
void main_f_932b30() {}

// sub_932c00  (orig 0x932c00, tailcall)
void main_f_932c00() { main::sub_932db0(); }

// sub_932cd0  (orig 0x932cd0, tailcall)
void main_f_932cd0() { main::sub_932db0(); }

// sub_932ce0  (orig 0x932ce0, tailcall)
void main_f_932ce0() { main::sub_932db0(); }

// sub_934e40  (orig 0x934e40, tailcall)
void main_f_934e40() { main::sub_91b4b0(); }

// sub_935d40  (orig 0x935d40, tailcall)
void main_f_935d40() { main::sub_935b40(); }

// sub_9360c0  (orig 0x9360c0, tailcall)
void main_f_9360c0() { main::sub_ce0(); }

// sub_936450  (orig 0x936450, ret_only)
void main_f_936450() {}

// sub_936460  (orig 0x936460, copy2)
void main_f_936460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_936470  (orig 0x936470, copy2)
void main_f_936470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_936490  (orig 0x936490, ret_only)
void main_f_936490() {}

// sub_9364a0  (orig 0x9364a0, copy2)
void main_f_9364a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9364b0  (orig 0x9364b0, copy2)
void main_f_9364b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_936640  (orig 0x936640, ret_only)
void main_f_936640() {}

// sub_9372c0  (orig 0x9372c0, ret_only)
void main_f_9372c0() {}

// sub_9372d0  (orig 0x9372d0, copy2)
void main_f_9372d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9372e0  (orig 0x9372e0, copy2)
void main_f_9372e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_937e00  (orig 0x937e00, straight)
void main_f_937e00(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1)) = (uint8_t)(1);
}

// sub_9380b0  (orig 0x9380b0, getter-chain)
uint8_t main_f_9380b0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 128))) + 1928); }

// sub_938100  (orig 0x938100, tailcall)
void main_f_938100() { main::sub_e7c4c0(); }

// sub_938660  (orig 0x938660, tailcall)
void main_f_938660() { main::sub_e7c4c0(); }

// sub_938670  (orig 0x938670, tailcall)
void main_f_938670() { main::sub_9386e0(); }

// sub_9386a0  (orig 0x9386a0, tailcall)
void main_f_9386a0() { main::sub_9386e0(); }

// sub_9386b0  (orig 0x9386b0, tailcall)
void main_f_9386b0() { main::sub_9386e0(); }

// sub_939650  (orig 0x939650, setter)
void main_f_939650(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 56) = a1; }

// sub_939f60  (orig 0x939f60, ret_only)
void main_f_939f60() {}

// sub_939f70  (orig 0x939f70, tailcall)
void main_f_939f70() { main::sub_ce0(); }

// sub_93a2b0  (orig 0x93a2b0, tailcall)
void main_f_93a2b0() { main::sub_ce0(); }

// sub_93c1a0  (orig 0x93c1a0, tailcall)
void main_f_93c1a0() { main::sub_93c220(); }

// sub_93c1b0  (orig 0x93c1b0, tailcall)
void main_f_93c1b0() { main::sub_939c20(); }

// sub_93c1e0  (orig 0x93c1e0, tailcall)
void main_f_93c1e0() { main::sub_939c20(); }

// sub_93c1f0  (orig 0x93c1f0, tailcall)
void main_f_93c1f0() { main::sub_939c20(); }

// sub_93c3c0  (orig 0x93c3c0, tailcall)
void main_f_93c3c0() { main::sub_93c220(); }

// sub_93c440  (orig 0x93c440, ret_only)
void main_f_93c440() {}

// sub_93c8b0  (orig 0x93c8b0, ret_only)
void main_f_93c8b0() {}

// sub_93c8c0  (orig 0x93c8c0, copy2)
void main_f_93c8c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_93c8d0  (orig 0x93c8d0, copy2)
void main_f_93c8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_93ccc0  (orig 0x93ccc0, mov_ret)
uint32_t main_f_93ccc0() { return 0; }

// sub_93d750  (orig 0x93d750, tailcall)
void main_f_93d750() { main::sub_e7feb0(); }

// sub_93d760  (orig 0x93d760, tailcall)
void main_f_93d760() { main::sub_93a3d0(); }

// sub_93d790  (orig 0x93d790, tailcall)
void main_f_93d790() { main::sub_93a3d0(); }

// sub_93d7a0  (orig 0x93d7a0, tailcall)
void main_f_93d7a0() { main::sub_93a3d0(); }

// sub_93dfa0  (orig 0x93dfa0, mov_ret)
uint32_t main_f_93dfa0() { return 1; }

// sub_93e150  (orig 0x93e150, tailcall)
void main_f_93e150() { main::sub_93dfb0(); }

// sub_93e730  (orig 0x93e730, tailcall)
void main_f_93e730() { main::sub_93e3b0(); }

// sub_93e840  (orig 0x93e840, tailcall)
void main_f_93e840() { main::sub_93e3b0(); }

// sub_93e850  (orig 0x93e850, tailcall)
void main_f_93e850() { main::sub_93e3b0(); }

// sub_93fbe0  (orig 0x93fbe0, mov_ret)
uint32_t main_f_93fbe0() { return 1; }

// sub_93fda0  (orig 0x93fda0, tailcall)
void main_f_93fda0() { main::sub_e7feb0(); }

// sub_93fdb0  (orig 0x93fdb0, tailcall)
void main_f_93fdb0() { main::sub_93a090(); }

// sub_93fde0  (orig 0x93fde0, tailcall)
void main_f_93fde0() { main::sub_93a090(); }

// sub_93fdf0  (orig 0x93fdf0, tailcall)
void main_f_93fdf0() { main::sub_93a090(); }

// sub_93fee0  (orig 0x93fee0, ret_only)
void main_f_93fee0() {}

// sub_940260  (orig 0x940260, tailcall)
void main_f_940260() { main::sub_940410(); }

// sub_940330  (orig 0x940330, tailcall)
void main_f_940330() { main::sub_940410(); }

// sub_940340  (orig 0x940340, tailcall)
void main_f_940340() { main::sub_940410(); }

// sub_9470b0  (orig 0x9470b0, mov_ret)
uint32_t main_f_9470b0() { return 1; }

// sub_950c60  (orig 0x950c60, tailcall)
void main_f_950c60() { main::sub_8a9740(); }

// sub_950c70  (orig 0x950c70, tailcall)
void main_f_950c70() { main::sub_8a9750(); }

// sub_950c80  (orig 0x950c80, tailcall)
void main_f_950c80() { main::sub_8a9370(); }

// sub_950c90  (orig 0x950c90, tailcall)
void main_f_950c90() { main::sub_8a93d0(); }

// sub_95abd0  (orig 0x95abd0, compare)
bool main_f_95abd0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 160)) == (uint64_t)(0); }

// sub_967100  (orig 0x967100, tailcall)
void main_f_967100() { main::sub_966130(); }

// sub_967110  (orig 0x967110, mov_ret)
uint32_t main_f_967110() { return 1; }

// sub_967120  (orig 0x967120, mov_ret)
uint32_t main_f_967120() { return 1; }

// sub_967130  (orig 0x967130, ret_only)
void main_f_967130() {}

// sub_967140  (orig 0x967140, ret_only)
void main_f_967140() {}

// sub_967150  (orig 0x967150, ret_only)
void main_f_967150() {}

// sub_967190  (orig 0x967190, mov_ret)
uint32_t main_f_967190() { return 0; }

// sub_967920  (orig 0x967920, mov_ret)
uint32_t main_f_967920() { return 16; }

// sub_967b80  (orig 0x967b80, mov_ret)
uint32_t main_f_967b80() { return 1; }

// sub_967b90  (orig 0x967b90, mov_ret)
uint32_t main_f_967b90() { return 1; }

// sub_967ba0  (orig 0x967ba0, ret_only)
void main_f_967ba0() {}

// sub_967bb0  (orig 0x967bb0, ret_only)
void main_f_967bb0() {}

// sub_967bc0  (orig 0x967bc0, ret_only)
void main_f_967bc0() {}

// sub_96a390  (orig 0x96a390, ret_only)
void main_f_96a390() {}

// sub_96a570  (orig 0x96a570, ret_only)
void main_f_96a570() {}

// sub_96a580  (orig 0x96a580, copy2)
void main_f_96a580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96a590  (orig 0x96a590, copy2)
void main_f_96a590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b000  (orig 0x96b000, ret_only)
void main_f_96b000() {}

// sub_96b010  (orig 0x96b010, copy2)
void main_f_96b010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b020  (orig 0x96b020, copy2)
void main_f_96b020(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b080  (orig 0x96b080, ret_only)
void main_f_96b080() {}

// sub_96b090  (orig 0x96b090, copy2)
void main_f_96b090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b0a0  (orig 0x96b0a0, copy2)
void main_f_96b0a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b2c0  (orig 0x96b2c0, ret_only)
void main_f_96b2c0() {}

// sub_96b940  (orig 0x96b940, copy2)
void main_f_96b940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96b950  (orig 0x96b950, copy2)
void main_f_96b950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96bb70  (orig 0x96bb70, ret_only)
void main_f_96bb70() {}

// sub_96c900  (orig 0x96c900, ret_only)
void main_f_96c900() {}

// sub_96c910  (orig 0x96c910, copy2)
void main_f_96c910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96c920  (orig 0x96c920, copy2)
void main_f_96c920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96ca90  (orig 0x96ca90, ret_only)
void main_f_96ca90() {}

// sub_96caa0  (orig 0x96caa0, copy2)
void main_f_96caa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cab0  (orig 0x96cab0, copy2)
void main_f_96cab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cae0  (orig 0x96cae0, ret_only)
void main_f_96cae0() {}

// sub_96caf0  (orig 0x96caf0, copy2)
void main_f_96caf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb00  (orig 0x96cb00, copy2)
void main_f_96cb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb30  (orig 0x96cb30, ret_only)
void main_f_96cb30() {}

// sub_96cb40  (orig 0x96cb40, copy2)
void main_f_96cb40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cb50  (orig 0x96cb50, copy2)
void main_f_96cb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96ccc0  (orig 0x96ccc0, ret_only)
void main_f_96ccc0() {}

// sub_96ccd0  (orig 0x96ccd0, copy2)
void main_f_96ccd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96cce0  (orig 0x96cce0, copy2)
void main_f_96cce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96d2b0  (orig 0x96d2b0, ret_only)
void main_f_96d2b0() {}

// sub_96d970  (orig 0x96d970, ret_only)
void main_f_96d970() {}

// sub_96d980  (orig 0x96d980, copy2)
void main_f_96d980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96d990  (orig 0x96d990, copy2)
void main_f_96d990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db00  (orig 0x96db00, ret_only)
void main_f_96db00() {}

// sub_96db10  (orig 0x96db10, copy2)
void main_f_96db10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db20  (orig 0x96db20, copy2)
void main_f_96db20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db50  (orig 0x96db50, ret_only)
void main_f_96db50() {}

// sub_96db60  (orig 0x96db60, copy2)
void main_f_96db60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96db70  (orig 0x96db70, copy2)
void main_f_96db70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96dd70  (orig 0x96dd70, ret_only)
void main_f_96dd70() {}

// sub_96e0c0  (orig 0x96e0c0, ret_only)
void main_f_96e0c0() {}

// sub_96e490  (orig 0x96e490, ret_only)
void main_f_96e490() {}

// sub_96e6b0  (orig 0x96e6b0, ret_only)
void main_f_96e6b0() {}

// sub_96e8d0  (orig 0x96e8d0, ret_only)
void main_f_96e8d0() {}

// sub_96eaf0  (orig 0x96eaf0, ret_only)
void main_f_96eaf0() {}

// sub_96ed10  (orig 0x96ed10, ret_only)
void main_f_96ed10() {}

// sub_96ef30  (orig 0x96ef30, ret_only)
void main_f_96ef30() {}

// sub_96f150  (orig 0x96f150, ret_only)
void main_f_96f150() {}

// sub_96f370  (orig 0x96f370, ret_only)
void main_f_96f370() {}

// sub_96f3c0  (orig 0x96f3c0, ret_only)
void main_f_96f3c0() {}

// sub_96f500  (orig 0x96f500, ret_only)
void main_f_96f500() {}

// sub_96f510  (orig 0x96f510, copy2)
void main_f_96f510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96f520  (orig 0x96f520, copy2)
void main_f_96f520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96f5d0  (orig 0x96f5d0, ret_only)
void main_f_96f5d0() {}

// sub_96f600  (orig 0x96f600, tailcall)
void main_f_96f600() { main::sub_ce0(); }

// sub_96f670  (orig 0x96f670, ret_only)
void main_f_96f670() {}

// sub_96f680  (orig 0x96f680, tailcall)
void main_f_96f680() { main::sub_ce0(); }

// sub_96f790  (orig 0x96f790, ret_only)
void main_f_96f790() {}

// sub_96f7a0  (orig 0x96f7a0, tailcall)
void main_f_96f7a0() { main::sub_ce0(); }

// sub_96f7f0  (orig 0x96f7f0, ret_only)
void main_f_96f7f0() {}

// sub_96f800  (orig 0x96f800, tailcall)
void main_f_96f800() { main::sub_ce0(); }

// sub_96fa00  (orig 0x96fa00, ret_only)
void main_f_96fa00() {}

// sub_96fa10  (orig 0x96fa10, copy2)
void main_f_96fa10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96fa20  (orig 0x96fa20, copy2)
void main_f_96fa20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_96fb20  (orig 0x96fb20, ret_only)
void main_f_96fb20() {}

// sub_96fb30  (orig 0x96fb30, ret_only)
void main_f_96fb30() {}

// sub_96fb40  (orig 0x96fb40, ret_only)
void main_f_96fb40() {}

// sub_970160  (orig 0x970160, straight)
void main_f_970160(void* a0) {
    *(uint32_t*)((char*)(a0) + 1120) = 257;
    *(uint16_t*)((char*)(a0) + 1124) = (uint16_t)(257);
}

// sub_9780e0  (orig 0x9780e0, tailcall)
void main_f_9780e0() { main::sub_96c4a0(); }

// sub_9780f0  (orig 0x9780f0, ret_only)
void main_f_9780f0() {}

// sub_978100  (orig 0x978100, ret_only)
void main_f_978100() {}

// sub_978110  (orig 0x978110, mov_ret)
uint32_t main_f_978110() { return 0; }

// sub_978120  (orig 0x978120, getter)
uint8_t main_f_978120(void* a0) { return *(uint8_t*)((char*)(a0) + 480); }

// sub_978130  (orig 0x978130, getter)
uint8_t main_f_978130(void* a0) { return *(uint8_t*)((char*)(a0) + 481); }

// sub_978140  (orig 0x978140, getter)
uint8_t main_f_978140(void* a0) { return *(uint8_t*)((char*)(a0) + 482); }

// sub_9781a0  (orig 0x9781a0, compare)
bool main_f_9781a0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 488)) != (uint64_t)(0); }

// sub_9781b0  (orig 0x9781b0, ret_only)
void main_f_9781b0() {}

// sub_9781c0  (orig 0x9781c0, ret_only)
void main_f_9781c0() {}

// sub_9781d0  (orig 0x9781d0, mov_ret)
uint32_t main_f_9781d0() { return 0; }

// sub_9781e0  (orig 0x9781e0, ret_only)
void main_f_9781e0() {}

// sub_978200  (orig 0x978200, copy2)
void main_f_978200(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 392) = *(uint64_t*)((char*)(a1)); }

// sub_978210  (orig 0x978210, ret_only)
void main_f_978210() {}

// sub_978220  (orig 0x978220, ret_only)
void main_f_978220() {}

// sub_978230  (orig 0x978230, ret_only)
void main_f_978230() {}

// sub_978240  (orig 0x978240, mov_ret)
uint32_t main_f_978240() { return 0; }

// sub_978250  (orig 0x978250, ret_only)
void main_f_978250() {}

// sub_978260  (orig 0x978260, ret_only)
void main_f_978260() {}

// sub_978270  (orig 0x978270, mov_ret)
uint32_t main_f_978270() { return 0; }

// sub_978290  (orig 0x978290, mov_ret)
uint64_t main_f_978290() { return 0; }

// sub_9782a0  (orig 0x9782a0, mov_ret)
uint32_t main_f_9782a0() { return 0; }

// sub_9782b0  (orig 0x9782b0, mov_ret)
uint32_t main_f_9782b0() { return 1; }

// sub_9782e0  (orig 0x9782e0, mov_ret)
uint32_t main_f_9782e0() { return 15; }

// sub_978470  (orig 0x978470, tailcall)
void main_f_978470() { main::sub_96c4a0(); }

// sub_978480  (orig 0x978480, tailcall)
void main_f_978480() { main::sub_96c4a0(); }

// sub_978880  (orig 0x978880, tailcall)
void main_f_978880() { main::sub_979390(); }

// sub_978890  (orig 0x978890, getter)
uint32_t main_f_978890(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_9788a0  (orig 0x9788a0, getter)
uint32_t main_f_9788a0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_9788b0  (orig 0x9788b0, straight)
void main_f_9788b0(void* a0) {
    *(uint8_t*)((char*)(a0) + 116) = (uint8_t)(1);
}

// sub_9788c0  (orig 0x9788c0, getter)
uint8_t main_f_9788c0(void* a0) { return *(uint8_t*)((char*)(a0) + 116); }

// sub_9788d0  (orig 0x9788d0, ret_only)
void main_f_9788d0() {}

// sub_978b10  (orig 0x978b10, tailcall)
void main_f_978b10() { main::sub_979390(); }

// sub_978b20  (orig 0x978b20, getter)
uint32_t main_f_978b20(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_978b30  (orig 0x978b30, getter)
uint32_t main_f_978b30(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_978b40  (orig 0x978b40, straight)
void main_f_978b40(void* a0) {
    *(uint8_t*)((char*)(a0) + 44) = (uint8_t)(1);
}

// sub_978b50  (orig 0x978b50, getter)
uint8_t main_f_978b50(void* a0) { return *(uint8_t*)((char*)(a0) + 44); }

// sub_978b60  (orig 0x978b60, tailcall)
void main_f_978b60() { main::sub_979390(); }

// sub_9790d0  (orig 0x9790d0, tailcall)
void main_f_9790d0() { main::sub_978f50(); }

// sub_983f60  (orig 0x983f60, getter)
uint8_t main_f_983f60(void* a0) { return *(uint8_t*)((char*)(a0) + 1201); }

// sub_984ef0  (orig 0x984ef0, tailcall)
void main_f_984ef0() { main::sub_984d50(); }

// sub_984f00  (orig 0x984f00, tailcall)
void main_f_984f00() { main::sub_985c80(); }

// sub_984f10  (orig 0x984f10, tailcall)
void main_f_984f10() { main::sub_974780(); }

// sub_984f20  (orig 0x984f20, tailcall)
void main_f_984f20() { main::sub_974790(); }

// sub_984f30  (orig 0x984f30, getter)
uint32_t main_f_984f30(void* a0) { return *(uint32_t*)((char*)(a0) + 1216); }

// sub_984f40  (orig 0x984f40, getter)
uint8_t main_f_984f40(void* a0) { return *(uint8_t*)((char*)(a0) + 1220); }

// sub_984fa0  (orig 0x984fa0, getter)
uint32_t main_f_984fa0(void* a0) { return *(uint32_t*)((char*)(a0) + 1236); }

// sub_984fd0  (orig 0x984fd0, tailcall)
void main_f_984fd0() { main::sub_985c80(); }

// sub_984fe0  (orig 0x984fe0, tailcall)
void main_f_984fe0() { main::sub_985c80(); }

// sub_985010  (orig 0x985010, ret_only)
void main_f_985010() {}

// sub_985db0  (orig 0x985db0, tailcall)
void main_f_985db0() { main::sub_ce0(); }

// sub_985e20  (orig 0x985e20, ret_only)
void main_f_985e20() {}

// sub_985e30  (orig 0x985e30, tailcall)
void main_f_985e30() { main::sub_ce0(); }

// sub_9861d0  (orig 0x9861d0, ret_only)
void main_f_9861d0() {}

// sub_9861e0  (orig 0x9861e0, copy2)
void main_f_9861e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9861f0  (orig 0x9861f0, copy2)
void main_f_9861f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_986600  (orig 0x986600, tailcall)
void main_f_986600() { main::sub_ce0(); }

// sub_986650  (orig 0x986650, ret_only)
void main_f_986650() {}

// sub_986660  (orig 0x986660, tailcall)
void main_f_986660() { main::sub_ce0(); }

// sub_9866b0  (orig 0x9866b0, tailcall)
void main_f_9866b0() { main::sub_ce0(); }

// sub_986720  (orig 0x986720, ret_only)
void main_f_986720() {}

// sub_986730  (orig 0x986730, tailcall)
void main_f_986730() { main::sub_ce0(); }

// sub_9867b0  (orig 0x9867b0, tailcall)
void main_f_9867b0() { main::sub_ce0(); }

// sub_986820  (orig 0x986820, ret_only)
void main_f_986820() {}

// sub_986830  (orig 0x986830, tailcall)
void main_f_986830() { main::sub_ce0(); }

// sub_9868b0  (orig 0x9868b0, ret_only)
void main_f_9868b0() {}

// sub_9868c0  (orig 0x9868c0, tailcall)
void main_f_9868c0() { main::sub_ce0(); }

// sub_986930  (orig 0x986930, ret_only)
void main_f_986930() {}

// sub_986940  (orig 0x986940, tailcall)
void main_f_986940() { main::sub_ce0(); }

// sub_9869c0  (orig 0x9869c0, tailcall)
void main_f_9869c0() { main::sub_ce0(); }

// sub_986a30  (orig 0x986a30, ret_only)
void main_f_986a30() {}

// sub_986a40  (orig 0x986a40, tailcall)
void main_f_986a40() { main::sub_ce0(); }

// sub_987130  (orig 0x987130, tailcall)
void main_f_987130() { main::sub_ce0(); }

// sub_9871a0  (orig 0x9871a0, ret_only)
void main_f_9871a0() {}

// sub_9871b0  (orig 0x9871b0, tailcall)
void main_f_9871b0() { main::sub_ce0(); }

// sub_987420  (orig 0x987420, ret_only)
void main_f_987420() {}

// sub_987430  (orig 0x987430, straight)
void main_f_987430(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
}

// sub_987450  (orig 0x987450, straight)
void main_f_987450(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
}

// sub_987470  (orig 0x987470, tailcall)
void main_f_987470() { main::sub_ce0(); }

// sub_9874e0  (orig 0x9874e0, ret_only)
void main_f_9874e0() {}

// sub_9874f0  (orig 0x9874f0, tailcall)
void main_f_9874f0() { main::sub_ce0(); }

// sub_9875b0  (orig 0x9875b0, ret_only)
void main_f_9875b0() {}

// sub_9875c0  (orig 0x9875c0, straight)
void main_f_9875c0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
}

// sub_9875e0  (orig 0x9875e0, straight)
void main_f_9875e0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 8) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0));
}

// sub_987600  (orig 0x987600, getter)
float main_f_987600(void* a0) { return *(float*)((char*)(a0)); }

// sub_987610  (orig 0x987610, ret_only)
void main_f_987610() {}

// sub_987620  (orig 0x987620, copy2)
void main_f_987620(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_987630  (orig 0x987630, copy2)
void main_f_987630(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_987640  (orig 0x987640, tailcall)
void main_f_987640() { main::sub_ce0(); }

// sub_9876b0  (orig 0x9876b0, ret_only)
void main_f_9876b0() {}

// sub_9876c0  (orig 0x9876c0, tailcall)
void main_f_9876c0() { main::sub_ce0(); }

// sub_987770  (orig 0x987770, getter)
float main_f_987770(void* a0) { return *(float*)((char*)(a0)); }

// sub_987780  (orig 0x987780, ret_only)
void main_f_987780() {}

// sub_987790  (orig 0x987790, copy2)
void main_f_987790(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_9877a0  (orig 0x9877a0, copy2)
void main_f_9877a0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_9877b0  (orig 0x9877b0, compare)
bool main_f_9877b0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_9877c0  (orig 0x9877c0, ret_only)
void main_f_9877c0() {}

// sub_9877d0  (orig 0x9877d0, copy2)
void main_f_9877d0(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_9877e0  (orig 0x9877e0, copy2)
void main_f_9877e0(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_9877f0  (orig 0x9877f0, ret_only)
void main_f_9877f0() {}

// sub_987800  (orig 0x987800, tailcall)
void main_f_987800() { main::sub_ce0(); }

// sub_987870  (orig 0x987870, ret_only)
void main_f_987870() {}

// sub_987880  (orig 0x987880, tailcall)
void main_f_987880() { main::sub_ce0(); }

// sub_987930  (orig 0x987930, compare)
bool main_f_987930(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_987940  (orig 0x987940, ret_only)
void main_f_987940() {}

// sub_987950  (orig 0x987950, copy2)
void main_f_987950(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_987960  (orig 0x987960, copy2)
void main_f_987960(void* a0, void* a1) { *(uint8_t*)((char*)(a1)) = *(uint8_t*)((char*)(a0)); }

// sub_987970  (orig 0x987970, tailcall)
void main_f_987970() { main::sub_ce0(); }

// sub_9879e0  (orig 0x9879e0, ret_only)
void main_f_9879e0() {}

// sub_9879f0  (orig 0x9879f0, tailcall)
void main_f_9879f0() { main::sub_ce0(); }

// sub_987a80  (orig 0x987a80, tailcall)
void main_f_987a80() { main::sub_ce0(); }

// sub_987af0  (orig 0x987af0, ret_only)
void main_f_987af0() {}

// sub_987b00  (orig 0x987b00, tailcall)
void main_f_987b00() { main::sub_ce0(); }

// sub_987b90  (orig 0x987b90, tailcall)
void main_f_987b90() { main::sub_ce0(); }

// sub_987c00  (orig 0x987c00, ret_only)
void main_f_987c00() {}

// sub_987c10  (orig 0x987c10, tailcall)
void main_f_987c10() { main::sub_ce0(); }

// sub_987ec0  (orig 0x987ec0, ret_only)
void main_f_987ec0() {}

// sub_987ed0  (orig 0x987ed0, tailcall)
void main_f_987ed0() { main::sub_ce0(); }

// sub_989550  (orig 0x989550, tailcall)
void main_f_989550() { main::sub_9892f0(); }

// sub_989560  (orig 0x989560, tailcall)
void main_f_989560() { main::sub_9895d0(); }

// sub_989590  (orig 0x989590, tailcall)
void main_f_989590() { main::sub_9895d0(); }

// sub_9895a0  (orig 0x9895a0, tailcall)
void main_f_9895a0() { main::sub_9895d0(); }

// sub_98af00  (orig 0x98af00, ret_only)
void main_f_98af00() {}

// sub_98af10  (orig 0x98af10, copy2)
void main_f_98af10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_98af20  (orig 0x98af20, copy2)
void main_f_98af20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_98dc60  (orig 0x98dc60, tailcall)
void main_f_98dc60() { main::sub_98db40(); }

// sub_98dc70  (orig 0x98dc70, tailcall)
void main_f_98dc70() { main::sub_98dd50(); }

// sub_98dc80  (orig 0x98dc80, getter)
uint32_t main_f_98dc80(void* a0) { return *(uint32_t*)((char*)(a0) + 1200); }

// sub_98dc90  (orig 0x98dc90, getter)
uint8_t main_f_98dc90(void* a0) { return *(uint8_t*)((char*)(a0) + 1204); }

// sub_98dd10  (orig 0x98dd10, tailcall)
void main_f_98dd10() { main::sub_98dd50(); }

// sub_98dd20  (orig 0x98dd20, tailcall)
void main_f_98dd20() { main::sub_98dd50(); }

// sub_98de80  (orig 0x98de80, tailcall)
void main_f_98de80() { main::sub_ce0(); }

// sub_98def0  (orig 0x98def0, ret_only)
void main_f_98def0() {}

// sub_98df00  (orig 0x98df00, tailcall)
void main_f_98df00() { main::sub_ce0(); }

// sub_98dfd0  (orig 0x98dfd0, tailcall)
void main_f_98dfd0() { main::sub_ce0(); }

// sub_98e040  (orig 0x98e040, ret_only)
void main_f_98e040() {}

// sub_98e050  (orig 0x98e050, tailcall)
void main_f_98e050() { main::sub_ce0(); }

// sub_98e0d0  (orig 0x98e0d0, tailcall)
void main_f_98e0d0() { main::sub_ce0(); }

// sub_98e140  (orig 0x98e140, ret_only)
void main_f_98e140() {}

// sub_98e150  (orig 0x98e150, tailcall)
void main_f_98e150() { main::sub_ce0(); }

// sub_98e820  (orig 0x98e820, ret_only)
void main_f_98e820() {}

// sub_98e9a0  (orig 0x98e9a0, tailcall)
void main_f_98e9a0() { main::sub_98ed90(); }

// sub_98eb90  (orig 0x98eb90, tailcall)
void main_f_98eb90() { main::sub_98ed90(); }

// sub_98eba0  (orig 0x98eba0, tailcall)
void main_f_98eba0() { main::sub_98ed90(); }

// sub_9a4010  (orig 0x9a4010, tailcall)
void main_f_9a4010() { main::sub_9a3e70(); }

// sub_9a41e0  (orig 0x9a41e0, tailcall)
void main_f_9a41e0() { main::sub_9a4060(); }

// sub_9a42f0  (orig 0x9a42f0, ret_only)
void main_f_9a42f0() {}

// sub_9a48f0  (orig 0x9a48f0, ret_only)
void main_f_9a48f0() {}

// sub_9a4900  (orig 0x9a4900, copy2)
void main_f_9a4900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9a4910  (orig 0x9a4910, copy2)
void main_f_9a4910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_9a78c0  (orig 0x9a78c0, setter)
void main_f_9a78c0(void* a0) { *(uint8_t*)((char*)(a0) + 256) = 0; }

// sub_9a8a10  (orig 0x9a8a10, tailcall)
void main_f_9a8a10() { main::sub_9a78d0(); }

// sub_9ac5e0  (orig 0x9ac5e0, ret_only)
void main_f_9ac5e0() {}

// sub_9ac5f0  (orig 0x9ac5f0, ret_only)
void main_f_9ac5f0() {}

// sub_9accc0  (orig 0x9accc0, tailcall)
void main_f_9accc0() { main::sub_9acb70(); }

// sub_9acf50  (orig 0x9acf50, ret_only)
void main_f_9acf50() {}

// sub_9ad060  (orig 0x9ad060, ret_only)
void main_f_9ad060() {}

// sub_9ae1b0  (orig 0x9ae1b0, ret_only)
void main_f_9ae1b0() {}

// sub_9ae3b0  (orig 0x9ae3b0, ret_only)
void main_f_9ae3b0() {}

// sub_9afd60  (orig 0x9afd60, tailcall)
void main_f_9afd60() { main::sub_9b0150(); }

// sub_9aff50  (orig 0x9aff50, tailcall)
void main_f_9aff50() { main::sub_9b0150(); }

// sub_9aff60  (orig 0x9aff60, tailcall)
void main_f_9aff60() { main::sub_9b0150(); }

// sub_9b0280  (orig 0x9b0280, tailcall)
void main_f_9b0280() { main::sub_ce0(); }

// sub_9b02f0  (orig 0x9b02f0, ret_only)
void main_f_9b02f0() {}

// sub_9b0300  (orig 0x9b0300, tailcall)
void main_f_9b0300() { main::sub_ce0(); }

// sub_9b0600  (orig 0x9b0600, tailcall)
void main_f_9b0600() { main::sub_9b03a0(); }

// sub_9b0630  (orig 0x9b0630, tailcall)
void main_f_9b0630() { main::sub_970170(); }

// sub_9b0ab0  (orig 0x9b0ab0, tailcall)
void main_f_9b0ab0() { main::sub_9b0ae0(); }

// sub_9b0ac0  (orig 0x9b0ac0, tailcall)
void main_f_9b0ac0() { main::sub_9b0ae0(); }

// sub_9b0ad0  (orig 0x9b0ad0, tailcall)
void main_f_9b0ad0() { main::sub_9b0ae0(); }

// sub_9b32b0  (orig 0x9b32b0, mov_ret)
uint32_t main_f_9b32b0() { return 1; }

// sub_9b7700  (orig 0x9b7700, mov_ret)
uint32_t main_f_9b7700() { return 1; }

// sub_9b7730  (orig 0x9b7730, mov_ret)
uint32_t main_f_9b7730() { return 1; }

// sub_9b79b0  (orig 0x9b79b0, mov_ret)
uint32_t main_f_9b79b0() { return 0; }

// sub_9b84c0  (orig 0x9b84c0, ret_only)
void main_f_9b84c0() {}

// sub_9b84d0  (orig 0x9b84d0, mov_ret)
uint32_t main_f_9b84d0() { return 1; }

// sub_9bad40  (orig 0x9bad40, compare)
bool main_f_9bad40(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 16)) == (uint64_t)(4); }

// sub_9bbb40  (orig 0x9bbb40, ret_only)
void main_f_9bbb40() {}

// sub_9bc910  (orig 0x9bc910, ret_only)
void main_f_9bc910() {}

// sub_9bc920  (orig 0x9bc920, tailcall)
void main_f_9bc920() { main::sub_ce0(); }

// sub_9bde40  (orig 0x9bde40, straight)
void main_f_9bde40(void* a0) {
    *(uint8_t*)((char*)(a0) + 52) = (uint8_t)(1);
}

// sub_9bde50  (orig 0x9bde50, compare)
bool main_f_9bde50(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 16)) == (uint64_t)(0); }

// sub_9be200  (orig 0x9be200, mov_ret)
uint32_t main_f_9be200() { return 1; }

// sub_9be840  (orig 0x9be840, ret_only)
void main_f_9be840() {}

// sub_9be850  (orig 0x9be850, tailcall)
void main_f_9be850() { main::sub_ce0(); }

// sub_9f9350  (orig 0x9f9350, compare)
bool main_f_9f9350(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 16)) == (uint64_t)(0); }

// sub_a37b70  (orig 0xa37b70, ret_only)
void main_f_a37b70() {}

// sub_a37b80  (orig 0xa37b80, ret_only)
void main_f_a37b80() {}

// sub_a37b90  (orig 0xa37b90, ret_only)
void main_f_a37b90() {}

// sub_a3cdd0  (orig 0xa3cdd0, ret_only)
void main_f_a3cdd0() {}

// sub_a3cde0  (orig 0xa3cde0, ret_only)
void main_f_a3cde0() {}

// sub_a3ec10  (orig 0xa3ec10, ret_only)
void main_f_a3ec10() {}

// sub_a40220  (orig 0xa40220, ret_only)
void main_f_a40220() {}

// sub_a40840  (orig 0xa40840, ret_only)
void main_f_a40840() {}

// sub_a40ab0  (orig 0xa40ab0, ret_only)
void main_f_a40ab0() {}

// sub_a41560  (orig 0xa41560, ret_only)
void main_f_a41560() {}

// sub_a41880  (orig 0xa41880, ret_only)
void main_f_a41880() {}

// sub_a42630  (orig 0xa42630, ret_only)
void main_f_a42630() {}

// sub_a42800  (orig 0xa42800, ret_only)
void main_f_a42800() {}

// sub_a42980  (orig 0xa42980, ret_only)
void main_f_a42980() {}

// sub_a42b50  (orig 0xa42b50, ret_only)
void main_f_a42b50() {}

// sub_a42cd0  (orig 0xa42cd0, ret_only)
void main_f_a42cd0() {}

// sub_a47fc0  (orig 0xa47fc0, ret_only)
void main_f_a47fc0() {}

// sub_a488f0  (orig 0xa488f0, ret_only)
void main_f_a488f0() {}

// sub_a49140  (orig 0xa49140, ret_only)
void main_f_a49140() {}

// sub_a497e0  (orig 0xa497e0, ret_only)
void main_f_a497e0() {}

// sub_a4c310  (orig 0xa4c310, ret_only)
void main_f_a4c310() {}

// sub_a4c9a0  (orig 0xa4c9a0, ret_only)
void main_f_a4c9a0() {}

// sub_a4ddb0  (orig 0xa4ddb0, ret_only)
void main_f_a4ddb0() {}

// sub_a4ddc0  (orig 0xa4ddc0, ret_only)
void main_f_a4ddc0() {}

// sub_a4e380  (orig 0xa4e380, ret_only)
void main_f_a4e380() {}

// sub_a4ea20  (orig 0xa4ea20, ret_only)
void main_f_a4ea20() {}

// sub_a4ebf0  (orig 0xa4ebf0, ret_only)
void main_f_a4ebf0() {}

// sub_a4f260  (orig 0xa4f260, ret_only)
void main_f_a4f260() {}

// sub_a51e30  (orig 0xa51e30, ret_only)
void main_f_a51e30() {}

// sub_a51e40  (orig 0xa51e40, ret_only)
void main_f_a51e40() {}

// sub_a51e50  (orig 0xa51e50, ret_only)
void main_f_a51e50() {}

// sub_a51e60  (orig 0xa51e60, ret_only)
void main_f_a51e60() {}

// sub_a51e70  (orig 0xa51e70, ret_only)
void main_f_a51e70() {}

// sub_a51e80  (orig 0xa51e80, ret_only)
void main_f_a51e80() {}

// sub_a51e90  (orig 0xa51e90, ret_only)
void main_f_a51e90() {}

// sub_a51ea0  (orig 0xa51ea0, ret_only)
void main_f_a51ea0() {}

// sub_a51eb0  (orig 0xa51eb0, ret_only)
void main_f_a51eb0() {}

// sub_a51ec0  (orig 0xa51ec0, ret_only)
void main_f_a51ec0() {}

// sub_a51ed0  (orig 0xa51ed0, ret_only)
void main_f_a51ed0() {}

// sub_a51ee0  (orig 0xa51ee0, ret_only)
void main_f_a51ee0() {}

// sub_a51ef0  (orig 0xa51ef0, ret_only)
void main_f_a51ef0() {}

// sub_a529a0  (orig 0xa529a0, ret_only)
void main_f_a529a0() {}

// sub_a53990  (orig 0xa53990, ret_only)
void main_f_a53990() {}

// sub_a53b30  (orig 0xa53b30, ret_only)
void main_f_a53b30() {}

// sub_a53b40  (orig 0xa53b40, ret_only)
void main_f_a53b40() {}

// sub_a5bb00  (orig 0xa5bb00, ret_only)
void main_f_a5bb00() {}

// sub_a5bb10  (orig 0xa5bb10, ret_only)
void main_f_a5bb10() {}

// sub_a5bb20  (orig 0xa5bb20, ret_only)
void main_f_a5bb20() {}

// sub_a5bb30  (orig 0xa5bb30, ret_only)
void main_f_a5bb30() {}

// sub_a5bb40  (orig 0xa5bb40, ret_only)
void main_f_a5bb40() {}

// sub_a5bb50  (orig 0xa5bb50, ret_only)
void main_f_a5bb50() {}

// sub_a5bb60  (orig 0xa5bb60, ret_only)
void main_f_a5bb60() {}

// sub_a5bb70  (orig 0xa5bb70, ret_only)
void main_f_a5bb70() {}

// sub_a5bb80  (orig 0xa5bb80, ret_only)
void main_f_a5bb80() {}

// sub_a5bb90  (orig 0xa5bb90, ret_only)
void main_f_a5bb90() {}

// sub_a5bba0  (orig 0xa5bba0, ret_only)
void main_f_a5bba0() {}

// sub_a5bbb0  (orig 0xa5bbb0, ret_only)
void main_f_a5bbb0() {}

// sub_a5bbc0  (orig 0xa5bbc0, ret_only)
void main_f_a5bbc0() {}

// sub_a5bbd0  (orig 0xa5bbd0, ret_only)
void main_f_a5bbd0() {}

// sub_a5bbe0  (orig 0xa5bbe0, ret_only)
void main_f_a5bbe0() {}

// sub_a5bbf0  (orig 0xa5bbf0, ret_only)
void main_f_a5bbf0() {}

// sub_a5bc00  (orig 0xa5bc00, ret_only)
void main_f_a5bc00() {}

// sub_a5bc10  (orig 0xa5bc10, ret_only)
void main_f_a5bc10() {}

// sub_a5bc20  (orig 0xa5bc20, ret_only)
void main_f_a5bc20() {}

// sub_a5bc30  (orig 0xa5bc30, ret_only)
void main_f_a5bc30() {}

// sub_a5bc90  (orig 0xa5bc90, ret_only)
void main_f_a5bc90() {}

// sub_a5bca0  (orig 0xa5bca0, ret_only)
void main_f_a5bca0() {}

// sub_a5d4e0  (orig 0xa5d4e0, ret_only)
void main_f_a5d4e0() {}

// sub_a5d4f0  (orig 0xa5d4f0, ret_only)
void main_f_a5d4f0() {}

// sub_a5d500  (orig 0xa5d500, ret_only)
void main_f_a5d500() {}

// sub_a5d510  (orig 0xa5d510, ret_only)
void main_f_a5d510() {}

// sub_a5d520  (orig 0xa5d520, ret_only)
void main_f_a5d520() {}

// sub_a5da20  (orig 0xa5da20, ret_only)
void main_f_a5da20() {}

// sub_a5ef70  (orig 0xa5ef70, ret_only)
void main_f_a5ef70() {}

// sub_a5f350  (orig 0xa5f350, ret_only)
void main_f_a5f350() {}

// sub_a5fb30  (orig 0xa5fb30, ret_only)
void main_f_a5fb30() {}

// sub_a5fb40  (orig 0xa5fb40, ret_only)
void main_f_a5fb40() {}

// sub_a5fb50  (orig 0xa5fb50, ret_only)
void main_f_a5fb50() {}

// sub_a5fb60  (orig 0xa5fb60, ret_only)
void main_f_a5fb60() {}

// sub_a5fb70  (orig 0xa5fb70, ret_only)
void main_f_a5fb70() {}

// sub_a5fb80  (orig 0xa5fb80, ret_only)
void main_f_a5fb80() {}

// sub_a5fb90  (orig 0xa5fb90, ret_only)
void main_f_a5fb90() {}

// sub_a61150  (orig 0xa61150, ret_only)
void main_f_a61150() {}

// sub_a61160  (orig 0xa61160, ret_only)
void main_f_a61160() {}

// sub_a61170  (orig 0xa61170, ret_only)
void main_f_a61170() {}

// sub_a61180  (orig 0xa61180, ret_only)
void main_f_a61180() {}

// sub_a61190  (orig 0xa61190, ret_only)
void main_f_a61190() {}

// sub_a61470  (orig 0xa61470, ret_only)
void main_f_a61470() {}

// sub_a63590  (orig 0xa63590, ret_only)
void main_f_a63590() {}

// sub_a635a0  (orig 0xa635a0, ret_only)
void main_f_a635a0() {}

// sub_a63760  (orig 0xa63760, ret_only)
void main_f_a63760() {}

// sub_a63770  (orig 0xa63770, ret_only)
void main_f_a63770() {}

// sub_a63780  (orig 0xa63780, ret_only)
void main_f_a63780() {}

// sub_a63790  (orig 0xa63790, ret_only)
void main_f_a63790() {}

// sub_a637a0  (orig 0xa637a0, ret_only)
void main_f_a637a0() {}

// sub_a637b0  (orig 0xa637b0, ret_only)
void main_f_a637b0() {}

// sub_a637c0  (orig 0xa637c0, ret_only)
void main_f_a637c0() {}

// sub_a637d0  (orig 0xa637d0, ret_only)
void main_f_a637d0() {}

// sub_a637e0  (orig 0xa637e0, ret_only)
void main_f_a637e0() {}

// sub_a637f0  (orig 0xa637f0, ret_only)
void main_f_a637f0() {}

// sub_a63800  (orig 0xa63800, ret_only)
void main_f_a63800() {}

// sub_a63810  (orig 0xa63810, ret_only)
void main_f_a63810() {}

// sub_a63820  (orig 0xa63820, ret_only)
void main_f_a63820() {}

// sub_a63830  (orig 0xa63830, ret_only)
void main_f_a63830() {}

// sub_a63840  (orig 0xa63840, ret_only)
void main_f_a63840() {}

// sub_a63850  (orig 0xa63850, ret_only)
void main_f_a63850() {}

// sub_a63860  (orig 0xa63860, ret_only)
void main_f_a63860() {}

// sub_a63870  (orig 0xa63870, ret_only)
void main_f_a63870() {}

// sub_a63880  (orig 0xa63880, ret_only)
void main_f_a63880() {}

// sub_a63890  (orig 0xa63890, ret_only)
void main_f_a63890() {}

// sub_a638a0  (orig 0xa638a0, ret_only)
void main_f_a638a0() {}

// sub_a638b0  (orig 0xa638b0, ret_only)
void main_f_a638b0() {}

// sub_a638c0  (orig 0xa638c0, ret_only)
void main_f_a638c0() {}

// sub_a638d0  (orig 0xa638d0, ret_only)
void main_f_a638d0() {}

// sub_a638e0  (orig 0xa638e0, ret_only)
void main_f_a638e0() {}

// sub_a638f0  (orig 0xa638f0, ret_only)
void main_f_a638f0() {}

// sub_a63900  (orig 0xa63900, ret_only)
void main_f_a63900() {}

// sub_a63910  (orig 0xa63910, ret_only)
void main_f_a63910() {}

// sub_a63920  (orig 0xa63920, ret_only)
void main_f_a63920() {}

// sub_a63930  (orig 0xa63930, ret_only)
void main_f_a63930() {}

// sub_a63940  (orig 0xa63940, ret_only)
void main_f_a63940() {}

// sub_a63950  (orig 0xa63950, ret_only)
void main_f_a63950() {}

// sub_a63960  (orig 0xa63960, ret_only)
void main_f_a63960() {}

// sub_a63970  (orig 0xa63970, ret_only)
void main_f_a63970() {}

// sub_a63980  (orig 0xa63980, ret_only)
void main_f_a63980() {}

// sub_a63990  (orig 0xa63990, ret_only)
void main_f_a63990() {}

// sub_a639a0  (orig 0xa639a0, ret_only)
void main_f_a639a0() {}

// sub_a639b0  (orig 0xa639b0, ret_only)
void main_f_a639b0() {}

// sub_a639c0  (orig 0xa639c0, ret_only)
void main_f_a639c0() {}

// sub_a639d0  (orig 0xa639d0, ret_only)
void main_f_a639d0() {}

// sub_a639e0  (orig 0xa639e0, ret_only)
void main_f_a639e0() {}

// sub_a639f0  (orig 0xa639f0, ret_only)
void main_f_a639f0() {}

// sub_a63a00  (orig 0xa63a00, ret_only)
void main_f_a63a00() {}

// sub_a63a10  (orig 0xa63a10, ret_only)
void main_f_a63a10() {}

// sub_a63a20  (orig 0xa63a20, ret_only)
void main_f_a63a20() {}

// sub_a63a30  (orig 0xa63a30, ret_only)
void main_f_a63a30() {}

// sub_a63a40  (orig 0xa63a40, ret_only)
void main_f_a63a40() {}

// sub_a63a50  (orig 0xa63a50, ret_only)
void main_f_a63a50() {}

// sub_a63a60  (orig 0xa63a60, ret_only)
void main_f_a63a60() {}

// sub_a63a70  (orig 0xa63a70, ret_only)
void main_f_a63a70() {}

// sub_a63a80  (orig 0xa63a80, ret_only)
void main_f_a63a80() {}

// sub_a63a90  (orig 0xa63a90, ret_only)
void main_f_a63a90() {}

// sub_a63aa0  (orig 0xa63aa0, ret_only)
void main_f_a63aa0() {}

// sub_a63ab0  (orig 0xa63ab0, ret_only)
void main_f_a63ab0() {}

// sub_a63ac0  (orig 0xa63ac0, ret_only)
void main_f_a63ac0() {}

// sub_a63ad0  (orig 0xa63ad0, ret_only)
void main_f_a63ad0() {}

// sub_a63ae0  (orig 0xa63ae0, ret_only)
void main_f_a63ae0() {}

// sub_a63af0  (orig 0xa63af0, ret_only)
void main_f_a63af0() {}

// sub_a63b00  (orig 0xa63b00, ret_only)
void main_f_a63b00() {}

// sub_a63b10  (orig 0xa63b10, ret_only)
void main_f_a63b10() {}

// sub_a63b20  (orig 0xa63b20, ret_only)
void main_f_a63b20() {}

// sub_a63b30  (orig 0xa63b30, ret_only)
void main_f_a63b30() {}

// sub_a63b40  (orig 0xa63b40, ret_only)
void main_f_a63b40() {}

// sub_a63b50  (orig 0xa63b50, ret_only)
void main_f_a63b50() {}

// sub_a63b60  (orig 0xa63b60, ret_only)
void main_f_a63b60() {}

// sub_a63b70  (orig 0xa63b70, ret_only)
void main_f_a63b70() {}

// sub_a63b80  (orig 0xa63b80, ret_only)
void main_f_a63b80() {}

// sub_a63b90  (orig 0xa63b90, ret_only)
void main_f_a63b90() {}

// sub_a63ba0  (orig 0xa63ba0, ret_only)
void main_f_a63ba0() {}

// sub_a63bb0  (orig 0xa63bb0, ret_only)
void main_f_a63bb0() {}

// sub_a63bc0  (orig 0xa63bc0, ret_only)
void main_f_a63bc0() {}

// sub_a63bd0  (orig 0xa63bd0, ret_only)
void main_f_a63bd0() {}

// sub_a63be0  (orig 0xa63be0, ret_only)
void main_f_a63be0() {}

// sub_a63bf0  (orig 0xa63bf0, ret_only)
void main_f_a63bf0() {}

// sub_a63c00  (orig 0xa63c00, ret_only)
void main_f_a63c00() {}

// sub_a63c10  (orig 0xa63c10, ret_only)
void main_f_a63c10() {}

// sub_a63c20  (orig 0xa63c20, ret_only)
void main_f_a63c20() {}

// sub_a63c30  (orig 0xa63c30, ret_only)
void main_f_a63c30() {}

// sub_a63c40  (orig 0xa63c40, ret_only)
void main_f_a63c40() {}

// sub_a63c50  (orig 0xa63c50, ret_only)
void main_f_a63c50() {}

// sub_a63c60  (orig 0xa63c60, ret_only)
void main_f_a63c60() {}

// sub_a63c70  (orig 0xa63c70, ret_only)
void main_f_a63c70() {}

// sub_a63c80  (orig 0xa63c80, ret_only)
void main_f_a63c80() {}

// sub_a63c90  (orig 0xa63c90, ret_only)
void main_f_a63c90() {}

// sub_a63ca0  (orig 0xa63ca0, ret_only)
void main_f_a63ca0() {}

// sub_a63cb0  (orig 0xa63cb0, ret_only)
void main_f_a63cb0() {}

// sub_a63cc0  (orig 0xa63cc0, ret_only)
void main_f_a63cc0() {}

// sub_a63cd0  (orig 0xa63cd0, ret_only)
void main_f_a63cd0() {}

// sub_a63ce0  (orig 0xa63ce0, ret_only)
void main_f_a63ce0() {}

// sub_a63cf0  (orig 0xa63cf0, ret_only)
void main_f_a63cf0() {}

// sub_a63d00  (orig 0xa63d00, ret_only)
void main_f_a63d00() {}

// sub_a63d10  (orig 0xa63d10, ret_only)
void main_f_a63d10() {}

// sub_a63d20  (orig 0xa63d20, ret_only)
void main_f_a63d20() {}

// sub_a63d30  (orig 0xa63d30, ret_only)
void main_f_a63d30() {}

// sub_a63d40  (orig 0xa63d40, ret_only)
void main_f_a63d40() {}

// sub_a63d50  (orig 0xa63d50, ret_only)
void main_f_a63d50() {}

// sub_a63d60  (orig 0xa63d60, ret_only)
void main_f_a63d60() {}

// sub_a63d70  (orig 0xa63d70, ret_only)
void main_f_a63d70() {}

// sub_a63d80  (orig 0xa63d80, ret_only)
void main_f_a63d80() {}

// sub_a63d90  (orig 0xa63d90, ret_only)
void main_f_a63d90() {}

// sub_a63da0  (orig 0xa63da0, ret_only)
void main_f_a63da0() {}

// sub_a63db0  (orig 0xa63db0, ret_only)
void main_f_a63db0() {}

// sub_a63dc0  (orig 0xa63dc0, ret_only)
void main_f_a63dc0() {}

// sub_a63dd0  (orig 0xa63dd0, ret_only)
void main_f_a63dd0() {}

// sub_a63de0  (orig 0xa63de0, ret_only)
void main_f_a63de0() {}

// sub_a63df0  (orig 0xa63df0, ret_only)
void main_f_a63df0() {}

// sub_a63e00  (orig 0xa63e00, ret_only)
void main_f_a63e00() {}

// sub_a63e10  (orig 0xa63e10, ret_only)
void main_f_a63e10() {}

// sub_a63e20  (orig 0xa63e20, ret_only)
void main_f_a63e20() {}

// sub_a63e30  (orig 0xa63e30, ret_only)
void main_f_a63e30() {}

// sub_a63e40  (orig 0xa63e40, ret_only)
void main_f_a63e40() {}

// sub_a63e50  (orig 0xa63e50, ret_only)
void main_f_a63e50() {}

// sub_a63e60  (orig 0xa63e60, ret_only)
void main_f_a63e60() {}

// sub_a63e70  (orig 0xa63e70, ret_only)
void main_f_a63e70() {}

// sub_a63e80  (orig 0xa63e80, ret_only)
void main_f_a63e80() {}

// sub_a63e90  (orig 0xa63e90, ret_only)
void main_f_a63e90() {}

// sub_a63ea0  (orig 0xa63ea0, ret_only)
void main_f_a63ea0() {}

// sub_a63eb0  (orig 0xa63eb0, ret_only)
void main_f_a63eb0() {}

// sub_a63ec0  (orig 0xa63ec0, ret_only)
void main_f_a63ec0() {}

// sub_a63ed0  (orig 0xa63ed0, ret_only)
void main_f_a63ed0() {}

// sub_a63ee0  (orig 0xa63ee0, ret_only)
void main_f_a63ee0() {}

// sub_a63ef0  (orig 0xa63ef0, ret_only)
void main_f_a63ef0() {}

// sub_a63f00  (orig 0xa63f00, ret_only)
void main_f_a63f00() {}

// sub_a63f10  (orig 0xa63f10, ret_only)
void main_f_a63f10() {}

// sub_a63f20  (orig 0xa63f20, ret_only)
void main_f_a63f20() {}

// sub_a63f30  (orig 0xa63f30, ret_only)
void main_f_a63f30() {}

// sub_a63f40  (orig 0xa63f40, ret_only)
void main_f_a63f40() {}

// sub_a63f50  (orig 0xa63f50, ret_only)
void main_f_a63f50() {}

// sub_a63f60  (orig 0xa63f60, ret_only)
void main_f_a63f60() {}

// sub_a63f70  (orig 0xa63f70, ret_only)
void main_f_a63f70() {}

// sub_a63f80  (orig 0xa63f80, ret_only)
void main_f_a63f80() {}

// sub_a63f90  (orig 0xa63f90, ret_only)
void main_f_a63f90() {}

// sub_a63fa0  (orig 0xa63fa0, ret_only)
void main_f_a63fa0() {}

// sub_a63fb0  (orig 0xa63fb0, ret_only)
void main_f_a63fb0() {}

// sub_a63fc0  (orig 0xa63fc0, ret_only)
void main_f_a63fc0() {}

// sub_a63fd0  (orig 0xa63fd0, ret_only)
void main_f_a63fd0() {}

// sub_a63fe0  (orig 0xa63fe0, ret_only)
void main_f_a63fe0() {}

// sub_a63ff0  (orig 0xa63ff0, ret_only)
void main_f_a63ff0() {}

// sub_a64000  (orig 0xa64000, ret_only)
void main_f_a64000() {}

// sub_a64010  (orig 0xa64010, ret_only)
void main_f_a64010() {}

// sub_a64020  (orig 0xa64020, ret_only)
void main_f_a64020() {}

// sub_a64030  (orig 0xa64030, ret_only)
void main_f_a64030() {}

// sub_a64040  (orig 0xa64040, ret_only)
void main_f_a64040() {}

// sub_a64050  (orig 0xa64050, ret_only)
void main_f_a64050() {}

// sub_a64060  (orig 0xa64060, ret_only)
void main_f_a64060() {}

// sub_a64070  (orig 0xa64070, ret_only)
void main_f_a64070() {}

// sub_a64080  (orig 0xa64080, ret_only)
void main_f_a64080() {}

// sub_a64090  (orig 0xa64090, ret_only)
void main_f_a64090() {}

// sub_a640a0  (orig 0xa640a0, ret_only)
void main_f_a640a0() {}

// sub_a640b0  (orig 0xa640b0, ret_only)
void main_f_a640b0() {}

// sub_a640c0  (orig 0xa640c0, ret_only)
void main_f_a640c0() {}

// sub_a640d0  (orig 0xa640d0, ret_only)
void main_f_a640d0() {}

// sub_a640e0  (orig 0xa640e0, ret_only)
void main_f_a640e0() {}

// sub_a640f0  (orig 0xa640f0, ret_only)
void main_f_a640f0() {}

// sub_a64100  (orig 0xa64100, ret_only)
void main_f_a64100() {}

// sub_a64110  (orig 0xa64110, ret_only)
void main_f_a64110() {}

// sub_a64120  (orig 0xa64120, ret_only)
void main_f_a64120() {}

// sub_a64130  (orig 0xa64130, ret_only)
void main_f_a64130() {}

// sub_a64140  (orig 0xa64140, ret_only)
void main_f_a64140() {}

// sub_a64150  (orig 0xa64150, ret_only)
void main_f_a64150() {}

// sub_a64160  (orig 0xa64160, ret_only)
void main_f_a64160() {}

// sub_a64170  (orig 0xa64170, ret_only)
void main_f_a64170() {}

// sub_a64180  (orig 0xa64180, ret_only)
void main_f_a64180() {}

// sub_a64190  (orig 0xa64190, ret_only)
void main_f_a64190() {}

// sub_a641a0  (orig 0xa641a0, ret_only)
void main_f_a641a0() {}

// sub_a641b0  (orig 0xa641b0, ret_only)
void main_f_a641b0() {}

// sub_a641c0  (orig 0xa641c0, ret_only)
void main_f_a641c0() {}

// sub_a641d0  (orig 0xa641d0, ret_only)
void main_f_a641d0() {}

// sub_a641e0  (orig 0xa641e0, ret_only)
void main_f_a641e0() {}

// sub_a641f0  (orig 0xa641f0, ret_only)
void main_f_a641f0() {}

// sub_a64200  (orig 0xa64200, ret_only)
void main_f_a64200() {}

// sub_a64210  (orig 0xa64210, ret_only)
void main_f_a64210() {}

// sub_a64220  (orig 0xa64220, ret_only)
void main_f_a64220() {}

// sub_a64230  (orig 0xa64230, ret_only)
void main_f_a64230() {}

// sub_a64240  (orig 0xa64240, ret_only)
void main_f_a64240() {}

// sub_a64250  (orig 0xa64250, ret_only)
void main_f_a64250() {}

// sub_a64260  (orig 0xa64260, ret_only)
void main_f_a64260() {}

// sub_a64270  (orig 0xa64270, ret_only)
void main_f_a64270() {}

// sub_a64280  (orig 0xa64280, ret_only)
void main_f_a64280() {}

// sub_a64290  (orig 0xa64290, ret_only)
void main_f_a64290() {}

// sub_a642a0  (orig 0xa642a0, ret_only)
void main_f_a642a0() {}

// sub_a642b0  (orig 0xa642b0, ret_only)
void main_f_a642b0() {}

// sub_a642c0  (orig 0xa642c0, ret_only)
void main_f_a642c0() {}

// sub_a642d0  (orig 0xa642d0, ret_only)
void main_f_a642d0() {}

// sub_a642e0  (orig 0xa642e0, ret_only)
void main_f_a642e0() {}

// sub_a642f0  (orig 0xa642f0, ret_only)
void main_f_a642f0() {}

// sub_a64300  (orig 0xa64300, ret_only)
void main_f_a64300() {}

// sub_a64310  (orig 0xa64310, ret_only)
void main_f_a64310() {}

// sub_a64320  (orig 0xa64320, ret_only)
void main_f_a64320() {}

// sub_a64330  (orig 0xa64330, ret_only)
void main_f_a64330() {}

// sub_a64340  (orig 0xa64340, ret_only)
void main_f_a64340() {}

// sub_a64350  (orig 0xa64350, ret_only)
void main_f_a64350() {}

// sub_a64360  (orig 0xa64360, ret_only)
void main_f_a64360() {}

// sub_a64370  (orig 0xa64370, ret_only)
void main_f_a64370() {}

// sub_a64380  (orig 0xa64380, ret_only)
void main_f_a64380() {}

// sub_a64390  (orig 0xa64390, ret_only)
void main_f_a64390() {}

// sub_a643a0  (orig 0xa643a0, ret_only)
void main_f_a643a0() {}

// sub_a643b0  (orig 0xa643b0, ret_only)
void main_f_a643b0() {}

// sub_a643c0  (orig 0xa643c0, ret_only)
void main_f_a643c0() {}

// sub_a643d0  (orig 0xa643d0, ret_only)
void main_f_a643d0() {}

// sub_a643e0  (orig 0xa643e0, ret_only)
void main_f_a643e0() {}

// sub_a643f0  (orig 0xa643f0, ret_only)
void main_f_a643f0() {}

// sub_a64400  (orig 0xa64400, ret_only)
void main_f_a64400() {}

// sub_a64410  (orig 0xa64410, ret_only)
void main_f_a64410() {}

// sub_a64420  (orig 0xa64420, ret_only)
void main_f_a64420() {}

// sub_a64430  (orig 0xa64430, ret_only)
void main_f_a64430() {}

// sub_a64440  (orig 0xa64440, ret_only)
void main_f_a64440() {}

// sub_a64450  (orig 0xa64450, ret_only)
void main_f_a64450() {}

// sub_a64460  (orig 0xa64460, ret_only)
void main_f_a64460() {}

// sub_a64470  (orig 0xa64470, ret_only)
void main_f_a64470() {}

// sub_a64480  (orig 0xa64480, ret_only)
void main_f_a64480() {}

// sub_a64490  (orig 0xa64490, ret_only)
void main_f_a64490() {}

// sub_a644a0  (orig 0xa644a0, ret_only)
void main_f_a644a0() {}

// sub_a644b0  (orig 0xa644b0, ret_only)
void main_f_a644b0() {}

// sub_a644c0  (orig 0xa644c0, ret_only)
void main_f_a644c0() {}

// sub_a644d0  (orig 0xa644d0, ret_only)
void main_f_a644d0() {}

// sub_a644e0  (orig 0xa644e0, ret_only)
void main_f_a644e0() {}

// sub_a644f0  (orig 0xa644f0, ret_only)
void main_f_a644f0() {}

// sub_a64500  (orig 0xa64500, ret_only)
void main_f_a64500() {}

// sub_a64510  (orig 0xa64510, ret_only)
void main_f_a64510() {}

// sub_a64520  (orig 0xa64520, ret_only)
void main_f_a64520() {}

// sub_a64530  (orig 0xa64530, ret_only)
void main_f_a64530() {}

// sub_a64540  (orig 0xa64540, ret_only)
void main_f_a64540() {}

// sub_a64550  (orig 0xa64550, ret_only)
void main_f_a64550() {}

// sub_a64560  (orig 0xa64560, ret_only)
void main_f_a64560() {}

// sub_a64570  (orig 0xa64570, ret_only)
void main_f_a64570() {}

// sub_a64580  (orig 0xa64580, ret_only)
void main_f_a64580() {}

// sub_a64590  (orig 0xa64590, ret_only)
void main_f_a64590() {}

// sub_a645a0  (orig 0xa645a0, ret_only)
void main_f_a645a0() {}

// sub_a645b0  (orig 0xa645b0, ret_only)
void main_f_a645b0() {}

// sub_a645c0  (orig 0xa645c0, ret_only)
void main_f_a645c0() {}

// sub_a645d0  (orig 0xa645d0, ret_only)
void main_f_a645d0() {}

// sub_a645e0  (orig 0xa645e0, ret_only)
void main_f_a645e0() {}

// sub_a645f0  (orig 0xa645f0, ret_only)
void main_f_a645f0() {}

// sub_a64600  (orig 0xa64600, ret_only)
void main_f_a64600() {}

// sub_a64610  (orig 0xa64610, ret_only)
void main_f_a64610() {}

// sub_a64620  (orig 0xa64620, ret_only)
void main_f_a64620() {}

// sub_a64630  (orig 0xa64630, ret_only)
void main_f_a64630() {}

// sub_a64640  (orig 0xa64640, ret_only)
void main_f_a64640() {}

// sub_a64650  (orig 0xa64650, ret_only)
void main_f_a64650() {}

// sub_a64660  (orig 0xa64660, ret_only)
void main_f_a64660() {}

// sub_a64670  (orig 0xa64670, ret_only)
void main_f_a64670() {}

// sub_a64680  (orig 0xa64680, ret_only)
void main_f_a64680() {}

// sub_a64690  (orig 0xa64690, ret_only)
void main_f_a64690() {}

// sub_a646a0  (orig 0xa646a0, ret_only)
void main_f_a646a0() {}

// sub_a646b0  (orig 0xa646b0, ret_only)
void main_f_a646b0() {}

// sub_a646c0  (orig 0xa646c0, ret_only)
void main_f_a646c0() {}

// sub_a646d0  (orig 0xa646d0, ret_only)
void main_f_a646d0() {}

// sub_a646e0  (orig 0xa646e0, ret_only)
void main_f_a646e0() {}

// sub_a646f0  (orig 0xa646f0, ret_only)
void main_f_a646f0() {}

// sub_a64700  (orig 0xa64700, ret_only)
void main_f_a64700() {}

// sub_a64710  (orig 0xa64710, ret_only)
void main_f_a64710() {}

// sub_a64720  (orig 0xa64720, ret_only)
void main_f_a64720() {}

// sub_a64730  (orig 0xa64730, ret_only)
void main_f_a64730() {}

// sub_a64740  (orig 0xa64740, ret_only)
void main_f_a64740() {}

// sub_a64750  (orig 0xa64750, ret_only)
void main_f_a64750() {}

// sub_a64760  (orig 0xa64760, ret_only)
void main_f_a64760() {}

// sub_a64770  (orig 0xa64770, ret_only)
void main_f_a64770() {}

// sub_a64780  (orig 0xa64780, ret_only)
void main_f_a64780() {}

// sub_a64790  (orig 0xa64790, ret_only)
void main_f_a64790() {}

// sub_a647a0  (orig 0xa647a0, ret_only)
void main_f_a647a0() {}

// sub_a647b0  (orig 0xa647b0, ret_only)
void main_f_a647b0() {}

// sub_a647c0  (orig 0xa647c0, ret_only)
void main_f_a647c0() {}

// sub_a647d0  (orig 0xa647d0, ret_only)
void main_f_a647d0() {}

// sub_a647e0  (orig 0xa647e0, ret_only)
void main_f_a647e0() {}

// sub_a647f0  (orig 0xa647f0, ret_only)
void main_f_a647f0() {}

// sub_a64800  (orig 0xa64800, ret_only)
void main_f_a64800() {}

// sub_a64810  (orig 0xa64810, ret_only)
void main_f_a64810() {}

// sub_a64820  (orig 0xa64820, ret_only)
void main_f_a64820() {}

// sub_a64830  (orig 0xa64830, ret_only)
void main_f_a64830() {}

// sub_a64840  (orig 0xa64840, ret_only)
void main_f_a64840() {}

// sub_a64850  (orig 0xa64850, ret_only)
void main_f_a64850() {}

// sub_a64860  (orig 0xa64860, ret_only)
void main_f_a64860() {}

// sub_a64870  (orig 0xa64870, ret_only)
void main_f_a64870() {}

// sub_a64880  (orig 0xa64880, ret_only)
void main_f_a64880() {}

// sub_a64890  (orig 0xa64890, ret_only)
void main_f_a64890() {}

// sub_a648a0  (orig 0xa648a0, ret_only)
void main_f_a648a0() {}

// sub_a648b0  (orig 0xa648b0, ret_only)
void main_f_a648b0() {}

// sub_a648c0  (orig 0xa648c0, ret_only)
void main_f_a648c0() {}

// sub_a648d0  (orig 0xa648d0, ret_only)
void main_f_a648d0() {}

// sub_a648e0  (orig 0xa648e0, ret_only)
void main_f_a648e0() {}

// sub_a648f0  (orig 0xa648f0, ret_only)
void main_f_a648f0() {}

// sub_a64900  (orig 0xa64900, ret_only)
void main_f_a64900() {}

// sub_a64910  (orig 0xa64910, ret_only)
void main_f_a64910() {}

// sub_a64920  (orig 0xa64920, ret_only)
void main_f_a64920() {}

// sub_a64930  (orig 0xa64930, ret_only)
void main_f_a64930() {}

// sub_a64940  (orig 0xa64940, ret_only)
void main_f_a64940() {}

// sub_a64950  (orig 0xa64950, ret_only)
void main_f_a64950() {}

// sub_a64960  (orig 0xa64960, ret_only)
void main_f_a64960() {}

// sub_a64970  (orig 0xa64970, ret_only)
void main_f_a64970() {}

// sub_a64980  (orig 0xa64980, ret_only)
void main_f_a64980() {}

// sub_a64990  (orig 0xa64990, ret_only)
void main_f_a64990() {}

// sub_a649a0  (orig 0xa649a0, ret_only)
void main_f_a649a0() {}

// sub_a649b0  (orig 0xa649b0, ret_only)
void main_f_a649b0() {}

// sub_a649c0  (orig 0xa649c0, ret_only)
void main_f_a649c0() {}

// sub_a649d0  (orig 0xa649d0, ret_only)
void main_f_a649d0() {}

// sub_a649e0  (orig 0xa649e0, ret_only)
void main_f_a649e0() {}

// sub_a649f0  (orig 0xa649f0, ret_only)
void main_f_a649f0() {}

// sub_a64a00  (orig 0xa64a00, ret_only)
void main_f_a64a00() {}

// sub_a64a10  (orig 0xa64a10, ret_only)
void main_f_a64a10() {}

// sub_a64a20  (orig 0xa64a20, ret_only)
void main_f_a64a20() {}

// sub_a64a30  (orig 0xa64a30, ret_only)
void main_f_a64a30() {}

// sub_a64a40  (orig 0xa64a40, ret_only)
void main_f_a64a40() {}

// sub_a64a50  (orig 0xa64a50, ret_only)
void main_f_a64a50() {}

// sub_a64a60  (orig 0xa64a60, ret_only)
void main_f_a64a60() {}

// sub_a64a70  (orig 0xa64a70, ret_only)
void main_f_a64a70() {}

// sub_a64a80  (orig 0xa64a80, ret_only)
void main_f_a64a80() {}

// sub_a64a90  (orig 0xa64a90, ret_only)
void main_f_a64a90() {}

// sub_a64aa0  (orig 0xa64aa0, ret_only)
void main_f_a64aa0() {}

// sub_a64ab0  (orig 0xa64ab0, ret_only)
void main_f_a64ab0() {}

// sub_a64ac0  (orig 0xa64ac0, ret_only)
void main_f_a64ac0() {}

// sub_a64ad0  (orig 0xa64ad0, ret_only)
void main_f_a64ad0() {}

// sub_a64ae0  (orig 0xa64ae0, ret_only)
void main_f_a64ae0() {}

// sub_a64af0  (orig 0xa64af0, ret_only)
void main_f_a64af0() {}

// sub_a64b00  (orig 0xa64b00, ret_only)
void main_f_a64b00() {}

// sub_a64b10  (orig 0xa64b10, ret_only)
void main_f_a64b10() {}

// sub_a64b20  (orig 0xa64b20, ret_only)
void main_f_a64b20() {}

// sub_a64b30  (orig 0xa64b30, ret_only)
void main_f_a64b30() {}

// sub_a64b40  (orig 0xa64b40, ret_only)
void main_f_a64b40() {}

// sub_a64b50  (orig 0xa64b50, ret_only)
void main_f_a64b50() {}

// sub_a64b60  (orig 0xa64b60, ret_only)
void main_f_a64b60() {}

// sub_a64b70  (orig 0xa64b70, ret_only)
void main_f_a64b70() {}

// sub_a64b80  (orig 0xa64b80, ret_only)
void main_f_a64b80() {}

// sub_a64b90  (orig 0xa64b90, ret_only)
void main_f_a64b90() {}

// sub_a64ba0  (orig 0xa64ba0, ret_only)
void main_f_a64ba0() {}

// sub_a64bb0  (orig 0xa64bb0, ret_only)
void main_f_a64bb0() {}

// sub_a64bc0  (orig 0xa64bc0, ret_only)
void main_f_a64bc0() {}

// sub_a64bd0  (orig 0xa64bd0, ret_only)
void main_f_a64bd0() {}

// sub_a64be0  (orig 0xa64be0, ret_only)
void main_f_a64be0() {}

// sub_a64bf0  (orig 0xa64bf0, ret_only)
void main_f_a64bf0() {}

// sub_a64c00  (orig 0xa64c00, ret_only)
void main_f_a64c00() {}

// sub_a64c10  (orig 0xa64c10, ret_only)
void main_f_a64c10() {}

// sub_a64c20  (orig 0xa64c20, ret_only)
void main_f_a64c20() {}

// sub_a64c30  (orig 0xa64c30, ret_only)
void main_f_a64c30() {}

// sub_a64c40  (orig 0xa64c40, ret_only)
void main_f_a64c40() {}

// sub_a64c50  (orig 0xa64c50, ret_only)
void main_f_a64c50() {}

// sub_a64c60  (orig 0xa64c60, ret_only)
void main_f_a64c60() {}

// sub_a64c70  (orig 0xa64c70, ret_only)
void main_f_a64c70() {}

// sub_a64c80  (orig 0xa64c80, ret_only)
void main_f_a64c80() {}

// sub_a64c90  (orig 0xa64c90, ret_only)
void main_f_a64c90() {}

// sub_a64ca0  (orig 0xa64ca0, ret_only)
void main_f_a64ca0() {}

// sub_a64cb0  (orig 0xa64cb0, ret_only)
void main_f_a64cb0() {}

// sub_a64cc0  (orig 0xa64cc0, ret_only)
void main_f_a64cc0() {}

// sub_a64cd0  (orig 0xa64cd0, ret_only)
void main_f_a64cd0() {}

// sub_a64ce0  (orig 0xa64ce0, ret_only)
void main_f_a64ce0() {}

// sub_a64cf0  (orig 0xa64cf0, ret_only)
void main_f_a64cf0() {}

// sub_a64d00  (orig 0xa64d00, ret_only)
void main_f_a64d00() {}

// sub_a64d10  (orig 0xa64d10, ret_only)
void main_f_a64d10() {}

// sub_a64d20  (orig 0xa64d20, ret_only)
void main_f_a64d20() {}

// sub_a64d30  (orig 0xa64d30, ret_only)
void main_f_a64d30() {}

// sub_a64d40  (orig 0xa64d40, ret_only)
void main_f_a64d40() {}

// sub_a64d50  (orig 0xa64d50, ret_only)
void main_f_a64d50() {}

// sub_a64d60  (orig 0xa64d60, ret_only)
void main_f_a64d60() {}

// sub_a64d70  (orig 0xa64d70, ret_only)
void main_f_a64d70() {}

// sub_a64d80  (orig 0xa64d80, ret_only)
void main_f_a64d80() {}

// sub_a64d90  (orig 0xa64d90, ret_only)
void main_f_a64d90() {}

// sub_a64da0  (orig 0xa64da0, ret_only)
void main_f_a64da0() {}

// sub_a64db0  (orig 0xa64db0, ret_only)
void main_f_a64db0() {}

// sub_a64dc0  (orig 0xa64dc0, ret_only)
void main_f_a64dc0() {}

// sub_a64dd0  (orig 0xa64dd0, ret_only)
void main_f_a64dd0() {}

// sub_a64de0  (orig 0xa64de0, ret_only)
void main_f_a64de0() {}

// sub_a64df0  (orig 0xa64df0, ret_only)
void main_f_a64df0() {}

// sub_a64e00  (orig 0xa64e00, ret_only)
void main_f_a64e00() {}

// sub_a64e10  (orig 0xa64e10, ret_only)
void main_f_a64e10() {}

// sub_a64e20  (orig 0xa64e20, ret_only)
void main_f_a64e20() {}

// sub_a64e30  (orig 0xa64e30, ret_only)
void main_f_a64e30() {}

// sub_a64e40  (orig 0xa64e40, ret_only)
void main_f_a64e40() {}

// sub_a64e50  (orig 0xa64e50, ret_only)
void main_f_a64e50() {}

// sub_a64e60  (orig 0xa64e60, ret_only)
void main_f_a64e60() {}

// sub_a64e70  (orig 0xa64e70, ret_only)
void main_f_a64e70() {}

// sub_a64e80  (orig 0xa64e80, ret_only)
void main_f_a64e80() {}

// sub_a64e90  (orig 0xa64e90, ret_only)
void main_f_a64e90() {}

// sub_a64ea0  (orig 0xa64ea0, ret_only)
void main_f_a64ea0() {}

// sub_a64eb0  (orig 0xa64eb0, ret_only)
void main_f_a64eb0() {}

// sub_a64ec0  (orig 0xa64ec0, ret_only)
void main_f_a64ec0() {}

// sub_a64ed0  (orig 0xa64ed0, ret_only)
void main_f_a64ed0() {}

// sub_a64ee0  (orig 0xa64ee0, ret_only)
void main_f_a64ee0() {}

// sub_a64ef0  (orig 0xa64ef0, ret_only)
void main_f_a64ef0() {}

// sub_a64f00  (orig 0xa64f00, ret_only)
void main_f_a64f00() {}

// sub_a64f10  (orig 0xa64f10, ret_only)
void main_f_a64f10() {}

// sub_a64f20  (orig 0xa64f20, ret_only)
void main_f_a64f20() {}

// sub_a64f30  (orig 0xa64f30, ret_only)
void main_f_a64f30() {}

// sub_a64f40  (orig 0xa64f40, ret_only)
void main_f_a64f40() {}

// sub_a64f50  (orig 0xa64f50, ret_only)
void main_f_a64f50() {}

// sub_a64f60  (orig 0xa64f60, ret_only)
void main_f_a64f60() {}

// sub_a64f70  (orig 0xa64f70, ret_only)
void main_f_a64f70() {}

// sub_a64f80  (orig 0xa64f80, ret_only)
void main_f_a64f80() {}

// sub_a64f90  (orig 0xa64f90, ret_only)
void main_f_a64f90() {}

// sub_a64fa0  (orig 0xa64fa0, ret_only)
void main_f_a64fa0() {}

// sub_a64fb0  (orig 0xa64fb0, ret_only)
void main_f_a64fb0() {}

// sub_a64fc0  (orig 0xa64fc0, ret_only)
void main_f_a64fc0() {}

// sub_a64fd0  (orig 0xa64fd0, ret_only)
void main_f_a64fd0() {}

// sub_a64ff0  (orig 0xa64ff0, ret_only)
void main_f_a64ff0() {}

// sub_a65000  (orig 0xa65000, copy2)
void main_f_a65000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65010  (orig 0xa65010, copy2)
void main_f_a65010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65030  (orig 0xa65030, ret_only)
void main_f_a65030() {}

// sub_a65040  (orig 0xa65040, copy2)
void main_f_a65040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65050  (orig 0xa65050, copy2)
void main_f_a65050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65290  (orig 0xa65290, ret_only)
void main_f_a65290() {}

// sub_a652a0  (orig 0xa652a0, copy2)
void main_f_a652a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a652b0  (orig 0xa652b0, copy2)
void main_f_a652b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a652d0  (orig 0xa652d0, ret_only)
void main_f_a652d0() {}

// sub_a652e0  (orig 0xa652e0, copy2)
void main_f_a652e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a652f0  (orig 0xa652f0, copy2)
void main_f_a652f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65310  (orig 0xa65310, ret_only)
void main_f_a65310() {}

// sub_a65320  (orig 0xa65320, copy2)
void main_f_a65320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65330  (orig 0xa65330, copy2)
void main_f_a65330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a654a0  (orig 0xa654a0, ret_only)
void main_f_a654a0() {}

// sub_a654b0  (orig 0xa654b0, copy2)
void main_f_a654b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a654c0  (orig 0xa654c0, copy2)
void main_f_a654c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65630  (orig 0xa65630, ret_only)
void main_f_a65630() {}

// sub_a65640  (orig 0xa65640, copy2)
void main_f_a65640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65650  (orig 0xa65650, copy2)
void main_f_a65650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a657c0  (orig 0xa657c0, ret_only)
void main_f_a657c0() {}

// sub_a657d0  (orig 0xa657d0, copy2)
void main_f_a657d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a657e0  (orig 0xa657e0, copy2)
void main_f_a657e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65810  (orig 0xa65810, ret_only)
void main_f_a65810() {}

// sub_a65820  (orig 0xa65820, copy2)
void main_f_a65820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65830  (orig 0xa65830, copy2)
void main_f_a65830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65860  (orig 0xa65860, ret_only)
void main_f_a65860() {}

// sub_a65870  (orig 0xa65870, copy2)
void main_f_a65870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65880  (orig 0xa65880, copy2)
void main_f_a65880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a658b0  (orig 0xa658b0, ret_only)
void main_f_a658b0() {}

// sub_a658c0  (orig 0xa658c0, copy2)
void main_f_a658c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a658d0  (orig 0xa658d0, copy2)
void main_f_a658d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65900  (orig 0xa65900, ret_only)
void main_f_a65900() {}

// sub_a65910  (orig 0xa65910, copy2)
void main_f_a65910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65920  (orig 0xa65920, copy2)
void main_f_a65920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65950  (orig 0xa65950, ret_only)
void main_f_a65950() {}

// sub_a65960  (orig 0xa65960, copy2)
void main_f_a65960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65970  (orig 0xa65970, copy2)
void main_f_a65970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a659a0  (orig 0xa659a0, ret_only)
void main_f_a659a0() {}

// sub_a659b0  (orig 0xa659b0, copy2)
void main_f_a659b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a659c0  (orig 0xa659c0, copy2)
void main_f_a659c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65bf0  (orig 0xa65bf0, ret_only)
void main_f_a65bf0() {}

// sub_a65c30  (orig 0xa65c30, ret_only)
void main_f_a65c30() {}

// sub_a65c40  (orig 0xa65c40, copy2)
void main_f_a65c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65c50  (orig 0xa65c50, copy2)
void main_f_a65c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65dc0  (orig 0xa65dc0, ret_only)
void main_f_a65dc0() {}

// sub_a65dd0  (orig 0xa65dd0, copy2)
void main_f_a65dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65de0  (orig 0xa65de0, copy2)
void main_f_a65de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65f50  (orig 0xa65f50, ret_only)
void main_f_a65f50() {}

// sub_a65f60  (orig 0xa65f60, copy2)
void main_f_a65f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65f70  (orig 0xa65f70, copy2)
void main_f_a65f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65f90  (orig 0xa65f90, ret_only)
void main_f_a65f90() {}

// sub_a65fa0  (orig 0xa65fa0, copy2)
void main_f_a65fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65fb0  (orig 0xa65fb0, copy2)
void main_f_a65fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65fd0  (orig 0xa65fd0, ret_only)
void main_f_a65fd0() {}

// sub_a65fe0  (orig 0xa65fe0, copy2)
void main_f_a65fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a65ff0  (orig 0xa65ff0, copy2)
void main_f_a65ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a66290  (orig 0xa66290, ret_only)
void main_f_a66290() {}

// sub_a662a0  (orig 0xa662a0, copy2)
void main_f_a662a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a662b0  (orig 0xa662b0, copy2)
void main_f_a662b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a66fd0  (orig 0xa66fd0, ret_only)
void main_f_a66fd0() {}

// sub_a66fe0  (orig 0xa66fe0, copy2)
void main_f_a66fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a66ff0  (orig 0xa66ff0, copy2)
void main_f_a66ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67020  (orig 0xa67020, ret_only)
void main_f_a67020() {}

// sub_a67030  (orig 0xa67030, copy2)
void main_f_a67030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67040  (orig 0xa67040, copy2)
void main_f_a67040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67070  (orig 0xa67070, ret_only)
void main_f_a67070() {}

// sub_a67080  (orig 0xa67080, copy2)
void main_f_a67080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67090  (orig 0xa67090, copy2)
void main_f_a67090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a670c0  (orig 0xa670c0, ret_only)
void main_f_a670c0() {}

// sub_a670d0  (orig 0xa670d0, copy2)
void main_f_a670d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a670e0  (orig 0xa670e0, copy2)
void main_f_a670e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67110  (orig 0xa67110, ret_only)
void main_f_a67110() {}

// sub_a67120  (orig 0xa67120, copy2)
void main_f_a67120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67130  (orig 0xa67130, copy2)
void main_f_a67130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67160  (orig 0xa67160, ret_only)
void main_f_a67160() {}

// sub_a67170  (orig 0xa67170, copy2)
void main_f_a67170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67180  (orig 0xa67180, copy2)
void main_f_a67180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a671b0  (orig 0xa671b0, ret_only)
void main_f_a671b0() {}

// sub_a671c0  (orig 0xa671c0, copy2)
void main_f_a671c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a671d0  (orig 0xa671d0, copy2)
void main_f_a671d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67200  (orig 0xa67200, ret_only)
void main_f_a67200() {}

// sub_a67210  (orig 0xa67210, copy2)
void main_f_a67210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67220  (orig 0xa67220, copy2)
void main_f_a67220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67250  (orig 0xa67250, ret_only)
void main_f_a67250() {}

// sub_a67260  (orig 0xa67260, copy2)
void main_f_a67260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67270  (orig 0xa67270, copy2)
void main_f_a67270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a672a0  (orig 0xa672a0, ret_only)
void main_f_a672a0() {}

// sub_a672b0  (orig 0xa672b0, copy2)
void main_f_a672b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a672c0  (orig 0xa672c0, copy2)
void main_f_a672c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a672f0  (orig 0xa672f0, ret_only)
void main_f_a672f0() {}

// sub_a67300  (orig 0xa67300, copy2)
void main_f_a67300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67310  (orig 0xa67310, copy2)
void main_f_a67310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67340  (orig 0xa67340, ret_only)
void main_f_a67340() {}

// sub_a67350  (orig 0xa67350, copy2)
void main_f_a67350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67360  (orig 0xa67360, copy2)
void main_f_a67360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67530  (orig 0xa67530, ret_only)
void main_f_a67530() {}

// sub_a67540  (orig 0xa67540, copy2)
void main_f_a67540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67550  (orig 0xa67550, copy2)
void main_f_a67550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67580  (orig 0xa67580, ret_only)
void main_f_a67580() {}

// sub_a67590  (orig 0xa67590, copy2)
void main_f_a67590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a675a0  (orig 0xa675a0, copy2)
void main_f_a675a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a675c0  (orig 0xa675c0, ret_only)
void main_f_a675c0() {}

// sub_a675d0  (orig 0xa675d0, copy2)
void main_f_a675d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a675e0  (orig 0xa675e0, copy2)
void main_f_a675e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67600  (orig 0xa67600, ret_only)
void main_f_a67600() {}

// sub_a67610  (orig 0xa67610, copy2)
void main_f_a67610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a67620  (orig 0xa67620, copy2)
void main_f_a67620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a682a0  (orig 0xa682a0, ret_only)
void main_f_a682a0() {}

// sub_a682b0  (orig 0xa682b0, copy2)
void main_f_a682b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a682c0  (orig 0xa682c0, copy2)
void main_f_a682c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a682f0  (orig 0xa682f0, ret_only)
void main_f_a682f0() {}

// sub_a68300  (orig 0xa68300, copy2)
void main_f_a68300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68310  (orig 0xa68310, copy2)
void main_f_a68310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68340  (orig 0xa68340, ret_only)
void main_f_a68340() {}

// sub_a68350  (orig 0xa68350, copy2)
void main_f_a68350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68360  (orig 0xa68360, copy2)
void main_f_a68360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68390  (orig 0xa68390, ret_only)
void main_f_a68390() {}

// sub_a683a0  (orig 0xa683a0, copy2)
void main_f_a683a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a683b0  (orig 0xa683b0, copy2)
void main_f_a683b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a683e0  (orig 0xa683e0, ret_only)
void main_f_a683e0() {}

// sub_a683f0  (orig 0xa683f0, copy2)
void main_f_a683f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68400  (orig 0xa68400, copy2)
void main_f_a68400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68430  (orig 0xa68430, ret_only)
void main_f_a68430() {}

// sub_a68440  (orig 0xa68440, copy2)
void main_f_a68440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68450  (orig 0xa68450, copy2)
void main_f_a68450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68480  (orig 0xa68480, ret_only)
void main_f_a68480() {}

// sub_a68490  (orig 0xa68490, copy2)
void main_f_a68490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684a0  (orig 0xa684a0, copy2)
void main_f_a684a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684d0  (orig 0xa684d0, ret_only)
void main_f_a684d0() {}

// sub_a684e0  (orig 0xa684e0, copy2)
void main_f_a684e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a684f0  (orig 0xa684f0, copy2)
void main_f_a684f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68520  (orig 0xa68520, ret_only)
void main_f_a68520() {}

// sub_a68530  (orig 0xa68530, copy2)
void main_f_a68530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68540  (orig 0xa68540, copy2)
void main_f_a68540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68570  (orig 0xa68570, ret_only)
void main_f_a68570() {}

// sub_a68580  (orig 0xa68580, copy2)
void main_f_a68580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68590  (orig 0xa68590, copy2)
void main_f_a68590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a685c0  (orig 0xa685c0, ret_only)
void main_f_a685c0() {}

// sub_a68610  (orig 0xa68610, ret_only)
void main_f_a68610() {}

// sub_a68660  (orig 0xa68660, ret_only)
void main_f_a68660() {}

// sub_a68670  (orig 0xa68670, copy2)
void main_f_a68670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68680  (orig 0xa68680, copy2)
void main_f_a68680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a686b0  (orig 0xa686b0, ret_only)
void main_f_a686b0() {}

// sub_a686c0  (orig 0xa686c0, copy2)
void main_f_a686c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a686d0  (orig 0xa686d0, copy2)
void main_f_a686d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a686f0  (orig 0xa686f0, ret_only)
void main_f_a686f0() {}

// sub_a68700  (orig 0xa68700, copy2)
void main_f_a68700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68710  (orig 0xa68710, copy2)
void main_f_a68710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68730  (orig 0xa68730, ret_only)
void main_f_a68730() {}

// sub_a68740  (orig 0xa68740, copy2)
void main_f_a68740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68750  (orig 0xa68750, copy2)
void main_f_a68750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a68780  (orig 0xa68780, ret_only)
void main_f_a68780() {}

// sub_a68790  (orig 0xa68790, copy2)
void main_f_a68790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a687a0  (orig 0xa687a0, copy2)
void main_f_a687a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69290  (orig 0xa69290, ret_only)
void main_f_a69290() {}

// sub_a692a0  (orig 0xa692a0, copy2)
void main_f_a692a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a692b0  (orig 0xa692b0, copy2)
void main_f_a692b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a692e0  (orig 0xa692e0, ret_only)
void main_f_a692e0() {}

// sub_a692f0  (orig 0xa692f0, copy2)
void main_f_a692f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69300  (orig 0xa69300, copy2)
void main_f_a69300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69330  (orig 0xa69330, ret_only)
void main_f_a69330() {}

// sub_a69340  (orig 0xa69340, copy2)
void main_f_a69340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a69350  (orig 0xa69350, copy2)
void main_f_a69350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a695a0  (orig 0xa695a0, ret_only)
void main_f_a695a0() {}

// sub_a695f0  (orig 0xa695f0, ret_only)
void main_f_a695f0() {}

// sub_a6a000  (orig 0xa6a000, ret_only)
void main_f_a6a000() {}

// sub_a6a010  (orig 0xa6a010, ret_only)
void main_f_a6a010() {}

// sub_a6a020  (orig 0xa6a020, ret_only)
void main_f_a6a020() {}

// sub_a6a180  (orig 0xa6a180, ret_only)
void main_f_a6a180() {}

// sub_a6a190  (orig 0xa6a190, ret_only)
void main_f_a6a190() {}

// sub_a6a1a0  (orig 0xa6a1a0, ret_only)
void main_f_a6a1a0() {}

// sub_a6a2a0  (orig 0xa6a2a0, ret_only)
void main_f_a6a2a0() {}

// sub_a6a2b0  (orig 0xa6a2b0, copy2)
void main_f_a6a2b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6a2c0  (orig 0xa6a2c0, copy2)
void main_f_a6a2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6aca0  (orig 0xa6aca0, ret_only)
void main_f_a6aca0() {}

// sub_a6aee0  (orig 0xa6aee0, ret_only)
void main_f_a6aee0() {}

// sub_a6b100  (orig 0xa6b100, ret_only)
void main_f_a6b100() {}

// sub_a6b950  (orig 0xa6b950, ret_only)
void main_f_a6b950() {}

// sub_a6b960  (orig 0xa6b960, copy2)
void main_f_a6b960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6b970  (orig 0xa6b970, copy2)
void main_f_a6b970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bb30  (orig 0xa6bb30, ret_only)
void main_f_a6bb30() {}

// sub_a6bb40  (orig 0xa6bb40, copy2)
void main_f_a6bb40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bb50  (orig 0xa6bb50, copy2)
void main_f_a6bb50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bb80  (orig 0xa6bb80, ret_only)
void main_f_a6bb80() {}

// sub_a6bb90  (orig 0xa6bb90, copy2)
void main_f_a6bb90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bba0  (orig 0xa6bba0, copy2)
void main_f_a6bba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bbd0  (orig 0xa6bbd0, ret_only)
void main_f_a6bbd0() {}

// sub_a6bbe0  (orig 0xa6bbe0, copy2)
void main_f_a6bbe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bbf0  (orig 0xa6bbf0, copy2)
void main_f_a6bbf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bc10  (orig 0xa6bc10, ret_only)
void main_f_a6bc10() {}

// sub_a6bc20  (orig 0xa6bc20, copy2)
void main_f_a6bc20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bc30  (orig 0xa6bc30, copy2)
void main_f_a6bc30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bc60  (orig 0xa6bc60, ret_only)
void main_f_a6bc60() {}

// sub_a6bc70  (orig 0xa6bc70, copy2)
void main_f_a6bc70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bc80  (orig 0xa6bc80, copy2)
void main_f_a6bc80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bca0  (orig 0xa6bca0, ret_only)
void main_f_a6bca0() {}

// sub_a6bcb0  (orig 0xa6bcb0, copy2)
void main_f_a6bcb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bcc0  (orig 0xa6bcc0, copy2)
void main_f_a6bcc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bcf0  (orig 0xa6bcf0, ret_only)
void main_f_a6bcf0() {}

// sub_a6bd00  (orig 0xa6bd00, copy2)
void main_f_a6bd00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bd10  (orig 0xa6bd10, copy2)
void main_f_a6bd10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bf80  (orig 0xa6bf80, ret_only)
void main_f_a6bf80() {}

// sub_a6bf90  (orig 0xa6bf90, copy2)
void main_f_a6bf90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6bfa0  (orig 0xa6bfa0, copy2)
void main_f_a6bfa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c160  (orig 0xa6c160, ret_only)
void main_f_a6c160() {}

// sub_a6c170  (orig 0xa6c170, copy2)
void main_f_a6c170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c180  (orig 0xa6c180, copy2)
void main_f_a6c180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c1a0  (orig 0xa6c1a0, ret_only)
void main_f_a6c1a0() {}

// sub_a6c1b0  (orig 0xa6c1b0, copy2)
void main_f_a6c1b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c1c0  (orig 0xa6c1c0, copy2)
void main_f_a6c1c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c1e0  (orig 0xa6c1e0, ret_only)
void main_f_a6c1e0() {}

// sub_a6c1f0  (orig 0xa6c1f0, copy2)
void main_f_a6c1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c200  (orig 0xa6c200, copy2)
void main_f_a6c200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c2b0  (orig 0xa6c2b0, ret_only)
void main_f_a6c2b0() {}

// sub_a6c2c0  (orig 0xa6c2c0, copy2)
void main_f_a6c2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c2d0  (orig 0xa6c2d0, copy2)
void main_f_a6c2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c300  (orig 0xa6c300, ret_only)
void main_f_a6c300() {}

// sub_a6c310  (orig 0xa6c310, copy2)
void main_f_a6c310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c320  (orig 0xa6c320, copy2)
void main_f_a6c320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c350  (orig 0xa6c350, ret_only)
void main_f_a6c350() {}

// sub_a6c360  (orig 0xa6c360, copy2)
void main_f_a6c360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c370  (orig 0xa6c370, copy2)
void main_f_a6c370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c3a0  (orig 0xa6c3a0, ret_only)
void main_f_a6c3a0() {}

// sub_a6c3b0  (orig 0xa6c3b0, copy2)
void main_f_a6c3b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c3c0  (orig 0xa6c3c0, copy2)
void main_f_a6c3c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c3f0  (orig 0xa6c3f0, ret_only)
void main_f_a6c3f0() {}

// sub_a6c400  (orig 0xa6c400, copy2)
void main_f_a6c400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6c410  (orig 0xa6c410, copy2)
void main_f_a6c410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a6cfb0  (orig 0xa6cfb0, tailcall)
void main_f_a6cfb0() { main::sub_a6cc90(); }

// sub_a6d010  (orig 0xa6d010, mov_ret)
uint64_t main_f_a6d010() { return 0; }

// sub_a6d400  (orig 0xa6d400, getter)
uint64_t main_f_a6d400(void* a0) { return *(uint64_t*)((char*)(a0) + 8664L); }

// sub_a6d410  (orig 0xa6d410, mov_ret)
uint64_t main_f_a6d410() { return 0; }

// sub_a6d420  (orig 0xa6d420, getter)
uint64_t main_f_a6d420(void* a0) { return *(uint64_t*)((char*)(a0) + 8704L); }

// sub_a6d6c0  (orig 0xa6d6c0, tailcall)
void main_f_a6d6c0() { battle::battle_common(); }

// sub_a6d6d0  (orig 0xa6d6d0, tailcall)
void main_f_a6d6d0() { main::sub_9484c0(); }

// sub_a6d6e0  (orig 0xa6d6e0, tailcall)
void main_f_a6d6e0() { main::sub_948790(); }

// sub_a6d780  (orig 0xa6d780, tailcall)
void main_f_a6d780() { main::sub_949fb0(); }

// sub_a6df80  (orig 0xa6df80, mov_ret)
uint32_t main_f_a6df80() { return 0; }

// sub_a6df90  (orig 0xa6df90, getter)
uint32_t main_f_a6df90(void* a0) { return *(uint32_t*)((char*)(a0) + 8608L); }

// sub_a6dfa0  (orig 0xa6dfa0, compare)
bool main_f_a6dfa0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 8608L)) == (uint64_t)(1); }

// sub_a6dfb0  (orig 0xa6dfb0, mov_ret)
uint32_t main_f_a6dfb0() { return 1; }

// sub_a6e120  (orig 0xa6e120, ret_only)
void main_f_a6e120() {}

// sub_a6e6d0  (orig 0xa6e6d0, mov_ret)
uint32_t main_f_a6e6d0() { return 1; }

// sub_a6e6e0  (orig 0xa6e6e0, ret_only)
void main_f_a6e6e0() {}

// sub_a6e6f0  (orig 0xa6e6f0, ret_only)
void main_f_a6e6f0() {}

// sub_a6e900  (orig 0xa6e900, tailcall)
void main_f_a6e900() { main::sub_a6e930(); }

// sub_a6e910  (orig 0xa6e910, tailcall)
void main_f_a6e910() { main::sub_a6e930(); }

// sub_a6e920  (orig 0xa6e920, tailcall)
void main_f_a6e920() { main::sub_a6e930(); }

// sub_a6ef60  (orig 0xa6ef60, getter)
uint64_t main_f_a6ef60(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_a6f0d0  (orig 0xa6f0d0, mov_ret)
uint32_t main_f_a6f0d0() { return 1; }

// sub_a6fd90  (orig 0xa6fd90, mov_ret)
uint32_t main_f_a6fd90() { return 1; }

// sub_a6fda0  (orig 0xa6fda0, ret_only)
void main_f_a6fda0() {}

// sub_a6fdb0  (orig 0xa6fdb0, ret_only)
void main_f_a6fdb0() {}

// sub_a6ff90  (orig 0xa6ff90, mov_ret)
uint32_t main_f_a6ff90() { return 1; }

// sub_a70140  (orig 0xa70140, tailcall)
void main_f_a70140() { main::sub_a6ffa0(); }

// sub_a70470  (orig 0xa70470, tailcall)
void main_f_a70470() { main::sub_a703a0(); }

// sub_a70480  (orig 0xa70480, tailcall)
void main_f_a70480() { main::sub_a70780(); }

// sub_a704b0  (orig 0xa704b0, tailcall)
void main_f_a704b0() { main::sub_a70780(); }

// sub_a704c0  (orig 0xa704c0, tailcall)
void main_f_a704c0() { main::sub_a70780(); }

// sub_a716e0  (orig 0xa716e0, ret_only)
void main_f_a716e0() {}

// sub_a716f0  (orig 0xa716f0, tailcall)
void main_f_a716f0() { main::sub_e7c4c0(); }

// sub_a71700  (orig 0xa71700, tailcall)
void main_f_a71700() { main::sub_a71770(); }

// sub_a71730  (orig 0xa71730, tailcall)
void main_f_a71730() { main::sub_a71770(); }

// sub_a71740  (orig 0xa71740, tailcall)
void main_f_a71740() { main::sub_a71770(); }

// sub_a72850  (orig 0xa72850, mov_ret)
uint32_t main_f_a72850() { return 0; }

// sub_a72d90  (orig 0xa72d90, tailcall)
void main_f_a72d90() { main::sub_a73040(); }

// sub_a72ee0  (orig 0xa72ee0, tailcall)
void main_f_a72ee0() { main::sub_a73040(); }

// sub_a72ef0  (orig 0xa72ef0, tailcall)
void main_f_a72ef0() { main::sub_a73040(); }

// sub_a73370  (orig 0xa73370, ret_only)
void main_f_a73370() {}

// sub_a73430  (orig 0xa73430, ret_only)
void main_f_a73430() {}

// sub_a73440  (orig 0xa73440, copy2)
void main_f_a73440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a73450  (orig 0xa73450, copy2)
void main_f_a73450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_a74150  (orig 0xa74150, ret_only)
void main_f_a74150() {}

// sub_a74160  (orig 0xa74160, tailcall)
void main_f_a74160() { main::sub_e7c4c0(); }

// sub_a74170  (orig 0xa74170, tailcall)
void main_f_a74170() { main::sub_a741e0(); }

// sub_a741a0  (orig 0xa741a0, tailcall)
void main_f_a741a0() { main::sub_a741e0(); }

// sub_a741b0  (orig 0xa741b0, tailcall)
void main_f_a741b0() { main::sub_a741e0(); }

// sub_a74be0  (orig 0xa74be0, tailcall)
void main_f_a74be0() { main::sub_a74a40(); }

// sub_a74c10  (orig 0xa74c10, mov_ret)
uint32_t main_f_a74c10() { return 1; }

// sub_a75fb0  (orig 0xa75fb0, tailcall)
void main_f_a75fb0() { main::sub_a76020(); }

// sub_a75fc0  (orig 0xa75fc0, tailcall)
void main_f_a75fc0() { main::sub_a76020(); }

// sub_a75fd0  (orig 0xa75fd0, tailcall)
void main_f_a75fd0() { main::sub_a76020(); }

// sub_a75fe0  (orig 0xa75fe0, ret_only)
void main_f_a75fe0() {}

// sub_a75ff0  (orig 0xa75ff0, ret_only)
void main_f_a75ff0() {}

// sub_a76000  (orig 0xa76000, ret_only)
void main_f_a76000() {}

// sub_a76010  (orig 0xa76010, ret_only)
void main_f_a76010() {}

// sub_a76540  (orig 0xa76540, getter)
uint64_t main_f_a76540(void* a0) { return *(uint64_t*)((char*)(a0) + 280); }

// sub_a766d0  (orig 0xa766d0, mov_ret)
uint32_t main_f_a766d0() { return 7; }

// sub_a76e20  (orig 0xa76e20, getter)
uint64_t main_f_a76e20(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_a76f90  (orig 0xa76f90, mov_ret)
uint32_t main_f_a76f90() { return 1; }

// sub_a77140  (orig 0xa77140, getter)
uint32_t main_f_a77140(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_a77150  (orig 0xa77150, setter)
void main_f_a77150(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 100) = a1; }

// sub_a77160  (orig 0xa77160, getter)
uint64_t main_f_a77160(void* a0) { return *(uint64_t*)((char*)(a0) + 112); }

// sub_a77460  (orig 0xa77460, setter)
void main_f_a77460(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 120) = a1; }

// sub_a775e0  (orig 0xa775e0, getter)
uint32_t main_f_a775e0(void* a0) { return *(uint32_t*)((char*)(a0) + 136); }

// sub_a77790  (orig 0xa77790, setter)
void main_f_a77790(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 176) = a1; }

// sub_a777c0  (orig 0xa777c0, setter)
void main_f_a777c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1984) = a1; }

// sub_a79e30  (orig 0xa79e30, tailcall)
void main_f_a79e30() { main::sub_a79cd0(); }

// sub_a7a170  (orig 0xa7a170, tailcall)
void main_f_a7a170() { main::sub_a7a700(); }

// sub_a7a260  (orig 0xa7a260, tailcall)
void main_f_a7a260() { main::sub_a7a700(); }

// sub_a7a270  (orig 0xa7a270, tailcall)
void main_f_a7a270() { main::sub_a7a700(); }

// sub_a7a5b0  (orig 0xa7a5b0, tailcall)
void main_f_a7a5b0() { main::sub_a7a4b0(); }

// sub_a7a950  (orig 0xa7a950, tailcall)
void main_f_a7a950() { main::sub_14b8960(); }

// sub_a7a960  (orig 0xa7a960, tailcall)
void main_f_a7a960() { main::sub_14b8960(); }

// sub_a7e580  (orig 0xa7e580, ret_only)
void main_f_a7e580() {}

// sub_a7e590  (orig 0xa7e590, tailcall)
void main_f_a7e590() { main::sub_e7c4c0(); }

// sub_a7e5a0  (orig 0xa7e5a0, tailcall)
void main_f_a7e5a0() { main::sub_a7e610(); }

// sub_a7e5d0  (orig 0xa7e5d0, tailcall)
void main_f_a7e5d0() { main::sub_a7e610(); }

// sub_a7e5e0  (orig 0xa7e5e0, tailcall)
void main_f_a7e5e0() { main::sub_a7e610(); }

// sub_a7eb60  (orig 0xa7eb60, ret_only)
void main_f_a7eb60() {}

// sub_a7eb70  (orig 0xa7eb70, tailcall)
void main_f_a7eb70() { main::sub_e7c4c0(); }

// sub_a7eb80  (orig 0xa7eb80, tailcall)
void main_f_a7eb80() { main::sub_a7ebf0(); }

// sub_a7ebb0  (orig 0xa7ebb0, tailcall)
void main_f_a7ebb0() { main::sub_a7ebf0(); }

// sub_a7ebc0  (orig 0xa7ebc0, tailcall)
void main_f_a7ebc0() { main::sub_a7ebf0(); }

// sub_a7efa0  (orig 0xa7efa0, ret_only)
void main_f_a7efa0() {}

// sub_a7efb0  (orig 0xa7efb0, tailcall)
void main_f_a7efb0() { main::sub_e7c4c0(); }

// sub_a7efc0  (orig 0xa7efc0, tailcall)
void main_f_a7efc0() { main::sub_a7f030(); }

// sub_a7eff0  (orig 0xa7eff0, tailcall)
void main_f_a7eff0() { main::sub_a7f030(); }

// sub_a7f000  (orig 0xa7f000, tailcall)
void main_f_a7f000() { main::sub_a7f030(); }

// sub_a7f750  (orig 0xa7f750, tailcall)
void main_f_a7f750() { main::sub_e7c4c0(); }

// sub_a7f760  (orig 0xa7f760, tailcall)
void main_f_a7f760() { main::sub_a7f7d0(); }

// sub_a7f790  (orig 0xa7f790, tailcall)
void main_f_a7f790() { main::sub_a7f7d0(); }

// sub_a7f7a0  (orig 0xa7f7a0, tailcall)
void main_f_a7f7a0() { main::sub_a7f7d0(); }

// sub_a7ff30  (orig 0xa7ff30, ret_only)
void main_f_a7ff30() {}

// sub_a7ff40  (orig 0xa7ff40, tailcall)
void main_f_a7ff40() { main::sub_e7c4c0(); }

// sub_a7ff50  (orig 0xa7ff50, tailcall)
void main_f_a7ff50() { main::sub_a7ffc0(); }

// sub_a7ff80  (orig 0xa7ff80, tailcall)
void main_f_a7ff80() { main::sub_a7ffc0(); }

// sub_a7ff90  (orig 0xa7ff90, tailcall)
void main_f_a7ff90() { main::sub_a7ffc0(); }

// sub_a80e90  (orig 0xa80e90, ret_only)
void main_f_a80e90() {}

// sub_a80ea0  (orig 0xa80ea0, tailcall)
void main_f_a80ea0() { main::sub_e7c4c0(); }

// sub_a80eb0  (orig 0xa80eb0, tailcall)
void main_f_a80eb0() { main::sub_a80f20(); }

// sub_a80ee0  (orig 0xa80ee0, tailcall)
void main_f_a80ee0() { main::sub_a80f20(); }

// sub_a80ef0  (orig 0xa80ef0, tailcall)
void main_f_a80ef0() { main::sub_a80f20(); }

// sub_a81530  (orig 0xa81530, ret_only)
void main_f_a81530() {}

// sub_a81540  (orig 0xa81540, tailcall)
void main_f_a81540() { main::sub_e7c4c0(); }

// sub_a81550  (orig 0xa81550, tailcall)
void main_f_a81550() { main::sub_a815c0(); }

// sub_a81580  (orig 0xa81580, tailcall)
void main_f_a81580() { main::sub_a815c0(); }

// sub_a81590  (orig 0xa81590, tailcall)
void main_f_a81590() { main::sub_a815c0(); }

// sub_a81c30  (orig 0xa81c30, tailcall)
void main_f_a81c30() { main::sub_e7c4c0(); }

// sub_a81c40  (orig 0xa81c40, tailcall)
void main_f_a81c40() { main::sub_a81cb0(); }

// sub_a81c70  (orig 0xa81c70, tailcall)
void main_f_a81c70() { main::sub_a81cb0(); }

// sub_a81c80  (orig 0xa81c80, tailcall)
void main_f_a81c80() { main::sub_a81cb0(); }

// sub_a82320  (orig 0xa82320, tailcall)
void main_f_a82320() { main::sub_e7c4c0(); }

// sub_a82330  (orig 0xa82330, tailcall)
void main_f_a82330() { main::sub_a823a0(); }

// sub_a82360  (orig 0xa82360, tailcall)
void main_f_a82360() { main::sub_a823a0(); }

// sub_a82370  (orig 0xa82370, tailcall)
void main_f_a82370() { main::sub_a823a0(); }

// sub_a82740  (orig 0xa82740, ret_only)
void main_f_a82740() {}

// sub_a82750  (orig 0xa82750, tailcall)
void main_f_a82750() { main::sub_e7c4c0(); }

// sub_a82760  (orig 0xa82760, tailcall)
void main_f_a82760() { main::sub_a827d0(); }

// sub_a82790  (orig 0xa82790, tailcall)
void main_f_a82790() { main::sub_a827d0(); }

// sub_a827a0  (orig 0xa827a0, tailcall)
void main_f_a827a0() { main::sub_a827d0(); }

// sub_a82c10  (orig 0xa82c10, ret_only)
void main_f_a82c10() {}

// sub_a82c20  (orig 0xa82c20, tailcall)
void main_f_a82c20() { main::sub_e7c4c0(); }

// sub_a82c30  (orig 0xa82c30, tailcall)
void main_f_a82c30() { main::sub_a82ca0(); }

// sub_a82c60  (orig 0xa82c60, tailcall)
void main_f_a82c60() { main::sub_a82ca0(); }

// sub_a82c70  (orig 0xa82c70, tailcall)
void main_f_a82c70() { main::sub_a82ca0(); }

// sub_a830f0  (orig 0xa830f0, ret_only)
void main_f_a830f0() {}

// sub_a83100  (orig 0xa83100, tailcall)
void main_f_a83100() { main::sub_e7c4c0(); }

// sub_a83110  (orig 0xa83110, tailcall)
void main_f_a83110() { main::sub_a83180(); }

// sub_a83140  (orig 0xa83140, tailcall)
void main_f_a83140() { main::sub_a83180(); }

// sub_a83150  (orig 0xa83150, tailcall)
void main_f_a83150() { main::sub_a83180(); }

// sub_a849e0  (orig 0xa849e0, ret_only)
void main_f_a849e0() {}

// sub_a849f0  (orig 0xa849f0, tailcall)
void main_f_a849f0() { main::sub_e7c4c0(); }

// sub_a84a00  (orig 0xa84a00, tailcall)
void main_f_a84a00() { main::sub_a84a70(); }

// sub_a84a30  (orig 0xa84a30, tailcall)
void main_f_a84a30() { main::sub_a84a70(); }

// sub_a84a40  (orig 0xa84a40, tailcall)
void main_f_a84a40() { main::sub_a84a70(); }

// sub_a850a0  (orig 0xa850a0, ret_only)
void main_f_a850a0() {}

// sub_a850b0  (orig 0xa850b0, tailcall)
void main_f_a850b0() { main::sub_e7c4c0(); }

// sub_a850c0  (orig 0xa850c0, tailcall)
void main_f_a850c0() { main::sub_a85130(); }

// sub_a850f0  (orig 0xa850f0, tailcall)
void main_f_a850f0() { main::sub_a85130(); }

// sub_a85100  (orig 0xa85100, tailcall)
void main_f_a85100() { main::sub_a85130(); }

// sub_a86450  (orig 0xa86450, ret_only)
void main_f_a86450() {}

// sub_a86460  (orig 0xa86460, tailcall)
void main_f_a86460() { main::sub_e7c4c0(); }

// sub_a86470  (orig 0xa86470, tailcall)
void main_f_a86470() { main::sub_a864e0(); }

// sub_a864a0  (orig 0xa864a0, tailcall)
void main_f_a864a0() { main::sub_a864e0(); }

// sub_a864b0  (orig 0xa864b0, tailcall)
void main_f_a864b0() { main::sub_a864e0(); }

// sub_a870e0  (orig 0xa870e0, ret_only)
void main_f_a870e0() {}

// sub_a871d0  (orig 0xa871d0, tailcall)
void main_f_a871d0() { main::sub_a873c0(); }

// sub_a872c0  (orig 0xa872c0, tailcall)
void main_f_a872c0() { main::sub_a873c0(); }

// sub_a872d0  (orig 0xa872d0, tailcall)
void main_f_a872d0() { main::sub_a873c0(); }

// sub_a87760  (orig 0xa87760, ret_only)
void main_f_a87760() {}

// sub_a87770  (orig 0xa87770, tailcall)
void main_f_a87770() { main::sub_e7c4c0(); }

// sub_a87780  (orig 0xa87780, tailcall)
void main_f_a87780() { main::sub_a877f0(); }

// sub_a877b0  (orig 0xa877b0, tailcall)
void main_f_a877b0() { main::sub_a877f0(); }

// sub_a877c0  (orig 0xa877c0, tailcall)
void main_f_a877c0() { main::sub_a877f0(); }

// sub_a87c60  (orig 0xa87c60, ret_only)
void main_f_a87c60() {}

// sub_a87c70  (orig 0xa87c70, tailcall)
void main_f_a87c70() { main::sub_e7c4c0(); }

// sub_a87c80  (orig 0xa87c80, tailcall)
void main_f_a87c80() { main::sub_a87cf0(); }

// sub_a87cb0  (orig 0xa87cb0, tailcall)
void main_f_a87cb0() { main::sub_a87cf0(); }

// sub_a87cc0  (orig 0xa87cc0, tailcall)
void main_f_a87cc0() { main::sub_a87cf0(); }

// sub_a88170  (orig 0xa88170, ret_only)
void main_f_a88170() {}

// sub_a88180  (orig 0xa88180, tailcall)
void main_f_a88180() { main::sub_e7c4c0(); }

// sub_a88190  (orig 0xa88190, tailcall)
void main_f_a88190() { main::sub_a88200(); }

// sub_a881c0  (orig 0xa881c0, tailcall)
void main_f_a881c0() { main::sub_a88200(); }

// sub_a881d0  (orig 0xa881d0, tailcall)
void main_f_a881d0() { main::sub_a88200(); }

// sub_a88680  (orig 0xa88680, ret_only)
void main_f_a88680() {}

// sub_a88690  (orig 0xa88690, tailcall)
void main_f_a88690() { main::sub_e7c4c0(); }

// sub_a886a0  (orig 0xa886a0, tailcall)
void main_f_a886a0() { main::sub_a88710(); }

// sub_a886d0  (orig 0xa886d0, tailcall)
void main_f_a886d0() { main::sub_a88710(); }

// sub_a886e0  (orig 0xa886e0, tailcall)
void main_f_a886e0() { main::sub_a88710(); }

// sub_a88dc0  (orig 0xa88dc0, ret_only)
void main_f_a88dc0() {}

// sub_a88dd0  (orig 0xa88dd0, tailcall)
void main_f_a88dd0() { main::sub_e7c4c0(); }

// sub_a88de0  (orig 0xa88de0, tailcall)
void main_f_a88de0() { main::sub_a88e50(); }

// sub_a88e10  (orig 0xa88e10, tailcall)
void main_f_a88e10() { main::sub_a88e50(); }

// sub_a88e20  (orig 0xa88e20, tailcall)
void main_f_a88e20() { main::sub_a88e50(); }

// sub_a89300  (orig 0xa89300, tailcall)
void main_f_a89300() { main::sub_e7c4c0(); }

// sub_a89310  (orig 0xa89310, tailcall)
void main_f_a89310() { main::sub_a89380(); }

// sub_a89340  (orig 0xa89340, tailcall)
void main_f_a89340() { main::sub_a89380(); }

// sub_a89350  (orig 0xa89350, tailcall)
void main_f_a89350() { main::sub_a89380(); }

// sub_a89830  (orig 0xa89830, ret_only)
void main_f_a89830() {}

// sub_a89840  (orig 0xa89840, tailcall)
void main_f_a89840() { main::sub_e7c4c0(); }

// sub_a89850  (orig 0xa89850, tailcall)
void main_f_a89850() { main::sub_a898c0(); }

// sub_a89880  (orig 0xa89880, tailcall)
void main_f_a89880() { main::sub_a898c0(); }

// sub_a89890  (orig 0xa89890, tailcall)
void main_f_a89890() { main::sub_a898c0(); }

// sub_a89c70  (orig 0xa89c70, ret_only)
void main_f_a89c70() {}

// sub_a89c80  (orig 0xa89c80, tailcall)
void main_f_a89c80() { main::sub_e7c4c0(); }

// sub_a89c90  (orig 0xa89c90, tailcall)
void main_f_a89c90() { main::sub_a89d00(); }

// sub_a89cc0  (orig 0xa89cc0, tailcall)
void main_f_a89cc0() { main::sub_a89d00(); }

// sub_a89cd0  (orig 0xa89cd0, tailcall)
void main_f_a89cd0() { main::sub_a89d00(); }

// sub_a8a240  (orig 0xa8a240, ret_only)
void main_f_a8a240() {}

// sub_a8a250  (orig 0xa8a250, tailcall)
void main_f_a8a250() { main::sub_e7c4c0(); }

// sub_a8a260  (orig 0xa8a260, tailcall)
void main_f_a8a260() { main::sub_a8a2d0(); }

// sub_a8a290  (orig 0xa8a290, tailcall)
void main_f_a8a290() { main::sub_a8a2d0(); }

// sub_a8a2a0  (orig 0xa8a2a0, tailcall)
void main_f_a8a2a0() { main::sub_a8a2d0(); }

// sub_a8a970  (orig 0xa8a970, ret_only)
void main_f_a8a970() {}

// sub_a8a980  (orig 0xa8a980, tailcall)
void main_f_a8a980() { main::sub_e7c4c0(); }

// sub_a8a990  (orig 0xa8a990, tailcall)
void main_f_a8a990() { main::sub_a8aa00(); }

// sub_a8a9c0  (orig 0xa8a9c0, tailcall)
void main_f_a8a9c0() { main::sub_a8aa00(); }

// sub_a8a9d0  (orig 0xa8a9d0, tailcall)
void main_f_a8a9d0() { main::sub_a8aa00(); }

// sub_a8adc0  (orig 0xa8adc0, tailcall)
void main_f_a8adc0() { main::sub_e7c4c0(); }

// sub_a8add0  (orig 0xa8add0, tailcall)
void main_f_a8add0() { main::sub_a8ae40(); }

// sub_a8ae00  (orig 0xa8ae00, tailcall)
void main_f_a8ae00() { main::sub_a8ae40(); }

// sub_a8ae10  (orig 0xa8ae10, tailcall)
void main_f_a8ae10() { main::sub_a8ae40(); }

// sub_a8b330  (orig 0xa8b330, ret_only)
void main_f_a8b330() {}

// sub_a8b340  (orig 0xa8b340, tailcall)
void main_f_a8b340() { main::sub_e7c4c0(); }

// sub_a8b350  (orig 0xa8b350, tailcall)
void main_f_a8b350() { main::sub_a8b3c0(); }

// sub_a8b380  (orig 0xa8b380, tailcall)
void main_f_a8b380() { main::sub_a8b3c0(); }

// sub_a8b390  (orig 0xa8b390, tailcall)
void main_f_a8b390() { main::sub_a8b3c0(); }

// sub_a8b680  (orig 0xa8b680, ret_only)
void main_f_a8b680() {}

// sub_a8b690  (orig 0xa8b690, ret_only)
void main_f_a8b690() {}

// sub_a8b800  (orig 0xa8b800, getter)
uint32_t main_f_a8b800(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_a8b810  (orig 0xa8b810, setter)
void main_f_a8b810(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_a8b910  (orig 0xa8b910, tailcall)
void main_f_a8b910() { main::sub_e7feb0(); }

// sub_a8b920  (orig 0xa8b920, tailcall)
void main_f_a8b920() { main::sub_a8b990(); }

// sub_a8b950  (orig 0xa8b950, tailcall)
void main_f_a8b950() { main::sub_a8b990(); }

// sub_a8b960  (orig 0xa8b960, tailcall)
void main_f_a8b960() { main::sub_a8b990(); }

// sub_a8bfa0  (orig 0xa8bfa0, ret_only)
void main_f_a8bfa0() {}

// sub_a8c970  (orig 0xa8c970, getter)
uint32_t main_f_a8c970(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_a8c980  (orig 0xa8c980, setter)
void main_f_a8c980(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_a8c990  (orig 0xa8c990, setter)
void main_f_a8c990(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1488) = a1; }

// sub_a90df0  (orig 0xa90df0, tailcall)
void main_f_a90df0() { main::sub_a91120(); }

// sub_a90f80  (orig 0xa90f80, tailcall)
void main_f_a90f80() { main::sub_a91120(); }

// sub_a90f90  (orig 0xa90f90, tailcall)
void main_f_a90f90() { main::sub_a91120(); }

// sub_a91970  (orig 0xa91970, getter)
uint32_t main_f_a91970(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_a92580  (orig 0xa92580, getter)
uint32_t main_f_a92580(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_a92a60  (orig 0xa92a60, ret_only)
void main_f_a92a60() {}

// sub_a94040  (orig 0xa94040, getter)
uint32_t main_f_a94040(void* a0) { return *(uint32_t*)((char*)(a0) + 1556); }

// sub_a95a60  (orig 0xa95a60, ret_only)
void main_f_a95a60() {}

// sub_a96b20  (orig 0xa96b20, getter)
uint32_t main_f_a96b20(void* a0) { return *(uint32_t*)((char*)(a0) + 1544); }

// sub_a96b30  (orig 0xa96b30, setter)
void main_f_a96b30(void* a0) { *(uint32_t*)((char*)(a0) + 1544) = 0; }

// sub_a96b40  (orig 0xa96b40, setter)
void main_f_a96b40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1484) = a1; }

// sub_a96bb0  (orig 0xa96bb0, setter-chain)
void main_f_a96bb0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 1488) = a1; *(uint64_t*)((char*)(a0) + 1496) = a2; }

// sub_a96bc0  (orig 0xa96bc0, setter)
void main_f_a96bc0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1756) = a1; }

// sub_a96bd0  (orig 0xa96bd0, setter)
void main_f_a96bd0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1560) = a1; }

// sub_a96be0  (orig 0xa96be0, getter)
uint32_t main_f_a96be0(void* a0) { return *(uint32_t*)((char*)(a0) + 1560); }

// sub_a97440  (orig 0xa97440, setter)
void main_f_a97440(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 1556) = a1; }

// sub_aa0b40  (orig 0xaa0b40, compare)
bool main_f_aa0b40(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 1754)) == (uint16_t)(*(uint16_t*)((char*)(a0) + 1752)); }

// sub_aa4660  (orig 0xaa4660, getter)
uint8_t main_f_aa4660(void* a0) { return *(uint8_t*)((char*)(a0) + 1665); }

// sub_aa4670  (orig 0xaa4670, getter)
uint32_t main_f_aa4670(void* a0) { return *(uint32_t*)((char*)(a0) + 1668); }

// sub_aa5440  (orig 0xaa5440, getter)
uint32_t main_f_aa5440(void* a0) { return *(uint32_t*)((char*)(a0) + 1672); }

// sub_aa6650  (orig 0xaa6650, compare)
bool main_f_aa6650(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1676)) != (uint64_t)(1); }

// sub_aa75b0  (orig 0xaa75b0, compare)
bool main_f_aa75b0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1676)) == (uint64_t)(2); }

// sub_aaa310  (orig 0xaaa310, getter)
uint16_t main_f_aaa310(void* a0) { return *(uint16_t*)((char*)(a0) + 1754); }

// sub_aab1a0  (orig 0xaab1a0, getter)
uint8_t main_f_aab1a0(void* a0) { return *(uint8_t*)((char*)(a0) + 1664); }

// sub_aab1b0  (orig 0xaab1b0, getter)
uint8_t main_f_aab1b0(void* a0) { return *(uint8_t*)((char*)(a0) + 1568); }

// sub_aab8b0  (orig 0xaab8b0, getter)
uint8_t main_f_aab8b0(void* a0) { return *(uint8_t*)((char*)(a0) + 1548); }

// sub_aaba80  (orig 0xaaba80, tailcall)
void main_f_aaba80() { main::sub_aab950(); }

// sub_aaba90  (orig 0xaaba90, tailcall)
void main_f_aaba90() { main::sub_a7e740(); }

// sub_aabac0  (orig 0xaabac0, tailcall)
void main_f_aabac0() { main::sub_a7e740(); }

// sub_aabad0  (orig 0xaabad0, tailcall)
void main_f_aabad0() { main::sub_a7e740(); }

// sub_aabcf0  (orig 0xaabcf0, ret_only)
void main_f_aabcf0() {}

// sub_aabd60  (orig 0xaabd60, ret_only)
void main_f_aabd60() {}

// sub_aabf70  (orig 0xaabf70, ret_only)
void main_f_aabf70() {}

// sub_aac6b0  (orig 0xaac6b0, tailcall)
void main_f_aac6b0() { main::sub_aac6c0(); }

// sub_aad500  (orig 0xaad500, getter)
uint32_t main_f_aad500(void* a0) { return *(uint32_t*)((char*)(a0) + 128); }

// sub_aad510  (orig 0xaad510, setter)
void main_f_aad510(void* a0) { *(uint32_t*)((char*)(a0) + 128) = 0; }

// sub_aafb90  (orig 0xaafb90, setter-chain)
void main_f_aafb90(void* a0, uint32_t a1, uint8_t a2, uint8_t a3, uint16_t a4) { *(uint32_t*)((char*)(a0) + 1680) = a1; *(uint8_t*)((char*)(a0) + 1684) = a2; *(uint8_t*)((char*)(a0) + 1685) = a3; *(uint16_t*)((char*)(a0) + 1686) = a4; }

// sub_aafbb0  (orig 0xaafbb0, ptr_add)
void* main_f_aafbb0(void* a0) { return (char*)a0 + 1680; }

// sub_ab16c0  (orig 0xab16c0, straight)
void main_f_ab16c0(void* a0) {
    *(uint64_t*)((char*)(a0) + 12296L) = (uint64_t)(2);
}

// sub_ab34c0  (orig 0xab34c0, tailcall)
void main_f_ab34c0() { main::sub_ab34d0(); }

// sub_ab3620  (orig 0xab3620, ret_only)
void main_f_ab3620() {}

// sub_ab3af0  (orig 0xab3af0, getter)
uint32_t main_f_ab3af0(void* a0) { return *(uint32_t*)((char*)(a0) + 1484); }

// sub_ab3b00  (orig 0xab3b00, setter)
void main_f_ab3b00(void* a0) { *(uint32_t*)((char*)(a0) + 1484) = 0; }

// sub_ab4260  (orig 0xab4260, getter)
uint32_t main_f_ab4260(void* a0) { return *(uint32_t*)((char*)(a0) + 1488); }

// sub_ab4330  (orig 0xab4330, tailcall)
void main_f_ab4330() { main::sub_a8af70(); }

// sub_ab4400  (orig 0xab4400, tailcall)
void main_f_ab4400() { main::sub_a8af70(); }

// sub_ab4410  (orig 0xab4410, tailcall)
void main_f_ab4410() { main::sub_a8af70(); }

// sub_ab4870  (orig 0xab4870, ret_only)
void main_f_ab4870() {}

// sub_ab4da0  (orig 0xab4da0, tailcall)
void main_f_ab4da0() { main::sub_ab4ad0(); }

// sub_ab4dd0  (orig 0xab4dd0, mov_ret)
uint32_t main_f_ab4dd0() { return 1; }

// sub_ab7530  (orig 0xab7530, tailcall)
void main_f_ab7530() { main::sub_ab7560(); }

// sub_ab7540  (orig 0xab7540, tailcall)
void main_f_ab7540() { main::sub_ab7560(); }

// sub_ab7550  (orig 0xab7550, tailcall)
void main_f_ab7550() { main::sub_ab7560(); }

// sub_ab8310  (orig 0xab8310, tailcall)
void main_f_ab8310() { main::sub_ab81e0(); }

// sub_ab8c20  (orig 0xab8c20, getter)
uint64_t main_f_ab8c20(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_ab8d90  (orig 0xab8d90, mov_ret)
uint32_t main_f_ab8d90() { return 1; }

// sub_ab97a0  (orig 0xab97a0, setter)
void main_f_ab97a0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 480) = a1; }

// sub_ab97b0  (orig 0xab97b0, getter)
uint8_t main_f_ab97b0(void* a0) { return *(uint8_t*)((char*)(a0) + 480); }

// sub_ab97e0  (orig 0xab97e0, setter)
void main_f_ab97e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 2616) = a1; }

// sub_ab97f0  (orig 0xab97f0, getter)
uint64_t main_f_ab97f0(void* a0) { return *(uint64_t*)((char*)(a0) + 2616); }

// sub_aba2e0  (orig 0xaba2e0, ret_only)
void main_f_aba2e0() {}

// sub_aba2f0  (orig 0xaba2f0, ret_only)
void main_f_aba2f0() {}

// sub_aba670  (orig 0xaba670, getter)
uint64_t main_f_aba670(void* a0) { return *(uint64_t*)((char*)(a0) + 6408L); }

// sub_aba6f0  (orig 0xaba6f0, setter)
void main_f_aba6f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 6404L) = a1; }

// sub_aba700  (orig 0xaba700, getter)
uint32_t main_f_aba700(void* a0) { return *(uint32_t*)((char*)(a0) + 6404L); }

// sub_aba710  (orig 0xaba710, setter)
void main_f_aba710(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 6408L) = a1; }

// sub_abaf70  (orig 0xabaf70, getter)
uint64_t main_f_abaf70(void* a0) { return *(uint64_t*)((char*)(a0) + 6416L); }

// sub_abaf80  (orig 0xabaf80, getter)
uint64_t main_f_abaf80(void* a0) { return *(uint64_t*)((char*)(a0) + 6424L); }

// sub_abb050  (orig 0xabb050, setter)
void main_f_abb050(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 6656L) = a1; }

// sub_abb060  (orig 0xabb060, getter)
uint16_t main_f_abb060(void* a0) { return *(uint16_t*)((char*)(a0) + 6656L); }

// sub_abb070  (orig 0xabb070, setter)
void main_f_abb070(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 6392L) = a1; }

// sub_abb080  (orig 0xabb080, getter)
uint32_t main_f_abb080(void* a0) { return *(uint32_t*)((char*)(a0) + 6392L); }

// sub_abb7c0  (orig 0xabb7c0, setter)
void main_f_abb7c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 6412L) = a1; }

// sub_abb7d0  (orig 0xabb7d0, getter)
uint32_t main_f_abb7d0(void* a0) { return *(uint32_t*)((char*)(a0) + 6412L); }

// sub_abb8f0  (orig 0xabb8f0, setter-chain)
void main_f_abb8f0(void* a0, uint64_t a1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 6656L) = a1; *(uint64_t*)((char*)(a0) + 6664L) = a2; }

// sub_abc650  (orig 0xabc650, getter)
uint32_t main_f_abc650(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_abcdd0  (orig 0xabcdd0, tailcall)
void main_f_abcdd0() { main::sub_ab8fb0(); }

// sub_abcde0  (orig 0xabcde0, tailcall)
void main_f_abcde0() { main::sub_ab8fb0(); }

// sub_abcdf0  (orig 0xabcdf0, tailcall)
void main_f_abcdf0() { main::sub_ab8fb0(); }

// sub_abcf10  (orig 0xabcf10, mov_ret)
uint32_t main_f_abcf10() { return 1; }

// sub_abd310  (orig 0xabd310, mov_ret)
uint32_t main_f_abd310() { return 2; }

// sub_abd770  (orig 0xabd770, tailcall)
void main_f_abd770() { main::sub_abd640(); }

// sub_abd7f0  (orig 0xabd7f0, mov_ret)
uint32_t main_f_abd7f0() { return 3; }

// sub_abda50  (orig 0xabda50, tailcall)
void main_f_abda50() { main::sub_abd920(); }

// sub_abdbb0  (orig 0xabdbb0, tailcall)
void main_f_abdbb0() { main::sub_15b6e10(); }

// sub_abdc30  (orig 0xabdc30, tailcall)
void main_f_abdc30() { main::sub_15b6e10(); }

// sub_abf2c0  (orig 0xabf2c0, getter)
uint8_t main_f_abf2c0(void* a0) { return *(uint8_t*)((char*)(a0) + 146); }

// sub_ac1b00  (orig 0xac1b00, getter)
uint32_t main_f_ac1b00(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_ac1db0  (orig 0xac1db0, compare)
bool main_f_ac1db0(void* a0, uint64_t a1) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 142)) <= (uint32_t)(a1); }

// sub_ac58f0  (orig 0xac58f0, tailcall)
void main_f_ac58f0() { main::sub_ac56c0(); }

// sub_ac73b0  (orig 0xac73b0, tailcall)
void main_f_ac73b0() { main::sub_ac70e0(); }

// sub_ac7f90  (orig 0xac7f90, tailcall)
void main_f_ac7f90() { main::sub_ac70e0(); }

// sub_ac8a10  (orig 0xac8a10, tailcall)
void main_f_ac8a10() { main::sub_ac70e0(); }

// sub_acb730  (orig 0xacb730, tailcall)
void main_f_acb730() { main::sub_e7c4c0(); }

// sub_acb740  (orig 0xacb740, tailcall)
void main_f_acb740() { main::sub_acb7b0(); }

// sub_acb770  (orig 0xacb770, tailcall)
void main_f_acb770() { main::sub_acb7b0(); }

// sub_acb780  (orig 0xacb780, tailcall)
void main_f_acb780() { main::sub_acb7b0(); }

// sub_aced10  (orig 0xaced10, setter-chain)
void main_f_aced10(void* a0) { *(uint64_t*)((char*)(a0) + 1536) = 0; *(uint32_t*)((char*)(a0) + 1544) = 0; }

// sub_ad0bb0  (orig 0xad0bb0, tailcall)
void main_f_ad0bb0() { main::sub_ac70e0(); }

// sub_ad0bc0  (orig 0xad0bc0, tailcall)
void main_f_ad0bc0() { main::sub_ac7630(); }

// sub_ad0bd0  (orig 0xad0bd0, ret_only)
void main_f_ad0bd0() {}

// sub_ad0be0  (orig 0xad0be0, mov_ret)
uint32_t main_f_ad0be0() { return 1; }

// sub_ad0bf0  (orig 0xad0bf0, ret_only)
void main_f_ad0bf0() {}

// sub_ad0c20  (orig 0xad0c20, tailcall)
void main_f_ad0c20() { main::sub_ac7630(); }

// sub_ad0c30  (orig 0xad0c30, tailcall)
void main_f_ad0c30() { main::sub_ac7630(); }

// sub_ad0dd0  (orig 0xad0dd0, ret_only)
void main_f_ad0dd0() {}

// sub_ad0de0  (orig 0xad0de0, copy2)
void main_f_ad0de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0df0  (orig 0xad0df0, copy2)
void main_f_ad0df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e10  (orig 0xad0e10, ret_only)
void main_f_ad0e10() {}

// sub_ad0e20  (orig 0xad0e20, copy2)
void main_f_ad0e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e30  (orig 0xad0e30, copy2)
void main_f_ad0e30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e50  (orig 0xad0e50, ret_only)
void main_f_ad0e50() {}

// sub_ad0e60  (orig 0xad0e60, copy2)
void main_f_ad0e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e70  (orig 0xad0e70, copy2)
void main_f_ad0e70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0e90  (orig 0xad0e90, ret_only)
void main_f_ad0e90() {}

// sub_ad0ea0  (orig 0xad0ea0, copy2)
void main_f_ad0ea0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad0eb0  (orig 0xad0eb0, copy2)
void main_f_ad0eb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad20b0  (orig 0xad20b0, tailcall)
void main_f_ad20b0() { main::sub_ad1f30(); }

// sub_ad60b0  (orig 0xad60b0, tailcall)
void main_f_ad60b0() { main::sub_ac70e0(); }

// sub_ad6ee0  (orig 0xad6ee0, tailcall)
void main_f_ad6ee0() { main::sub_ac70e0(); }

// sub_ad7080  (orig 0xad7080, tailcall)
void main_f_ad7080() { main::sub_ce0(); }

// sub_ad70f0  (orig 0xad70f0, ret_only)
void main_f_ad70f0() {}

// sub_ad7100  (orig 0xad7100, tailcall)
void main_f_ad7100() { main::sub_ce0(); }

// sub_ad7170  (orig 0xad7170, ret_only)
void main_f_ad7170() {}

// sub_ad7180  (orig 0xad7180, tailcall)
void main_f_ad7180() { main::sub_ce0(); }

// sub_ad71f0  (orig 0xad71f0, ret_only)
void main_f_ad71f0() {}

// sub_ad7200  (orig 0xad7200, tailcall)
void main_f_ad7200() { main::sub_ce0(); }

// sub_ad7270  (orig 0xad7270, tailcall)
void main_f_ad7270() { main::sub_ce0(); }

// sub_ad72e0  (orig 0xad72e0, ret_only)
void main_f_ad72e0() {}

// sub_ad72f0  (orig 0xad72f0, tailcall)
void main_f_ad72f0() { main::sub_ce0(); }

// sub_ad7370  (orig 0xad7370, ret_only)
void main_f_ad7370() {}

// sub_ad7380  (orig 0xad7380, copy2)
void main_f_ad7380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad7390  (orig 0xad7390, copy2)
void main_f_ad7390(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad9180  (orig 0xad9180, tailcall)
void main_f_ad9180() { main::sub_ac70e0(); }

// sub_ad9320  (orig 0xad9320, ret_only)
void main_f_ad9320() {}

// sub_ad9330  (orig 0xad9330, tailcall)
void main_f_ad9330() { main::sub_ce0(); }

// sub_ad93a0  (orig 0xad93a0, ret_only)
void main_f_ad93a0() {}

// sub_ad93b0  (orig 0xad93b0, tailcall)
void main_f_ad93b0() { main::sub_ce0(); }

// sub_ad9740  (orig 0xad9740, ret_only)
void main_f_ad9740() {}

// sub_ad9750  (orig 0xad9750, copy2)
void main_f_ad9750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad9760  (orig 0xad9760, copy2)
void main_f_ad9760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ad9770  (orig 0xad9770, tailcall)
void main_f_ad9770() { main::sub_ce0(); }

// sub_ad97e0  (orig 0xad97e0, ret_only)
void main_f_ad97e0() {}

// sub_ad97f0  (orig 0xad97f0, tailcall)
void main_f_ad97f0() { main::sub_ce0(); }

// sub_ad9860  (orig 0xad9860, tailcall)
void main_f_ad9860() { main::sub_ce0(); }

// sub_ad98d0  (orig 0xad98d0, ret_only)
void main_f_ad98d0() {}

// sub_ad98e0  (orig 0xad98e0, tailcall)
void main_f_ad98e0() { main::sub_ce0(); }

// sub_ad9950  (orig 0xad9950, tailcall)
void main_f_ad9950() { main::sub_ce0(); }

// sub_ad99c0  (orig 0xad99c0, ret_only)
void main_f_ad99c0() {}

// sub_ad99d0  (orig 0xad99d0, tailcall)
void main_f_ad99d0() { main::sub_ce0(); }

// sub_ad9a40  (orig 0xad9a40, tailcall)
void main_f_ad9a40() { main::sub_ce0(); }

// sub_ad9ab0  (orig 0xad9ab0, ret_only)
void main_f_ad9ab0() {}

// sub_ad9ac0  (orig 0xad9ac0, tailcall)
void main_f_ad9ac0() { main::sub_ce0(); }

// sub_ad9b30  (orig 0xad9b30, tailcall)
void main_f_ad9b30() { main::sub_ce0(); }

// sub_ad9ba0  (orig 0xad9ba0, ret_only)
void main_f_ad9ba0() {}

// sub_ad9bb0  (orig 0xad9bb0, tailcall)
void main_f_ad9bb0() { main::sub_ce0(); }

// sub_ada200  (orig 0xada200, tailcall)
void main_f_ada200() { main::sub_ac70e0(); }

// sub_ada4c0  (orig 0xada4c0, getter-chain)
uint8_t main_f_ada4c0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 2120))) + 408); }

// sub_adc7d0  (orig 0xadc7d0, tailcall)
void main_f_adc7d0() { main::sub_ac70e0(); }

// sub_adc9e0  (orig 0xadc9e0, ret_only)
void main_f_adc9e0() {}

// sub_adca30  (orig 0xadca30, tailcall)
void main_f_adca30() { main::sub_ce0(); }

// sub_adcaa0  (orig 0xadcaa0, ret_only)
void main_f_adcaa0() {}

// sub_adcab0  (orig 0xadcab0, tailcall)
void main_f_adcab0() { main::sub_ce0(); }

// sub_adcb20  (orig 0xadcb20, tailcall)
void main_f_adcb20() { main::sub_ce0(); }

// sub_adcb90  (orig 0xadcb90, ret_only)
void main_f_adcb90() {}

// sub_adcba0  (orig 0xadcba0, tailcall)
void main_f_adcba0() { main::sub_ce0(); }

// sub_adcdd0  (orig 0xadcdd0, setter)
void main_f_adcdd0(void* a0) { *(uint8_t*)((char*)(a0) + 1504) = 0; }

// sub_add260  (orig 0xadd260, mov_ret)
uint32_t main_f_add260() { return 0; }

// sub_add3c0  (orig 0xadd3c0, tailcall)
void main_f_add3c0() { main::sub_add5d0(); }

// sub_add4d0  (orig 0xadd4d0, tailcall)
void main_f_add4d0() { main::sub_add5d0(); }

// sub_add4e0  (orig 0xadd4e0, tailcall)
void main_f_add4e0() { main::sub_add5d0(); }

// sub_adee70  (orig 0xadee70, ret_only)
void main_f_adee70() {}

// sub_adee80  (orig 0xadee80, copy2)
void main_f_adee80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_adee90  (orig 0xadee90, copy2)
void main_f_adee90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae0c40  (orig 0xae0c40, ret_only)
void main_f_ae0c40() {}

// sub_ae0ca0  (orig 0xae0ca0, ret_only)
void main_f_ae0ca0() {}

// sub_ae0cb0  (orig 0xae0cb0, copy2)
void main_f_ae0cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae0cc0  (orig 0xae0cc0, copy2)
void main_f_ae0cc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae0ce0  (orig 0xae0ce0, ret_only)
void main_f_ae0ce0() {}

// sub_ae0cf0  (orig 0xae0cf0, copy2)
void main_f_ae0cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae0d00  (orig 0xae0d00, copy2)
void main_f_ae0d00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae1600  (orig 0xae1600, compare)
bool main_f_ae1600(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1784)) == (uint64_t)(4); }

// sub_ae1800  (orig 0xae1800, getter)
uint64_t main_f_ae1800(void* a0) { return *(uint64_t*)((char*)(a0) + 2880); }

// sub_ae4140  (orig 0xae4140, tailcall)
void main_f_ae4140() { main::sub_ae3d20(); }

// sub_ae4150  (orig 0xae4150, tailcall)
void main_f_ae4150() { main::sub_ae43b0(); }

// sub_ae4180  (orig 0xae4180, tailcall)
void main_f_ae4180() { main::sub_ae43b0(); }

// sub_ae4190  (orig 0xae4190, tailcall)
void main_f_ae4190() { main::sub_ae43b0(); }

// sub_ae47a0  (orig 0xae47a0, tailcall)
void main_f_ae47a0() { main::sub_ce0(); }

// sub_ae4810  (orig 0xae4810, ret_only)
void main_f_ae4810() {}

// sub_ae4820  (orig 0xae4820, tailcall)
void main_f_ae4820() { main::sub_ce0(); }

// sub_ae4870  (orig 0xae4870, tailcall)
void main_f_ae4870() { main::sub_ce0(); }

// sub_ae48e0  (orig 0xae48e0, ret_only)
void main_f_ae48e0() {}

// sub_ae48f0  (orig 0xae48f0, tailcall)
void main_f_ae48f0() { main::sub_ce0(); }

// sub_ae4910  (orig 0xae4910, tailcall)
void main_f_ae4910() { main::sub_ce0(); }

// sub_ae4980  (orig 0xae4980, ret_only)
void main_f_ae4980() {}

// sub_ae4990  (orig 0xae4990, tailcall)
void main_f_ae4990() { main::sub_ce0(); }

// sub_ae49b0  (orig 0xae49b0, tailcall)
void main_f_ae49b0() { main::sub_ce0(); }

// sub_ae4a20  (orig 0xae4a20, ret_only)
void main_f_ae4a20() {}

// sub_ae4a30  (orig 0xae4a30, tailcall)
void main_f_ae4a30() { main::sub_ce0(); }

// sub_ae4a50  (orig 0xae4a50, tailcall)
void main_f_ae4a50() { main::sub_ce0(); }

// sub_ae4ac0  (orig 0xae4ac0, ret_only)
void main_f_ae4ac0() {}

// sub_ae4ad0  (orig 0xae4ad0, tailcall)
void main_f_ae4ad0() { main::sub_ce0(); }

// sub_ae4af0  (orig 0xae4af0, tailcall)
void main_f_ae4af0() { main::sub_ce0(); }

// sub_ae4b60  (orig 0xae4b60, ret_only)
void main_f_ae4b60() {}

// sub_ae4b70  (orig 0xae4b70, tailcall)
void main_f_ae4b70() { main::sub_ce0(); }

// sub_ae4b90  (orig 0xae4b90, tailcall)
void main_f_ae4b90() { main::sub_ce0(); }

// sub_ae4c00  (orig 0xae4c00, ret_only)
void main_f_ae4c00() {}

// sub_ae4c10  (orig 0xae4c10, tailcall)
void main_f_ae4c10() { main::sub_ce0(); }

// sub_ae4c30  (orig 0xae4c30, tailcall)
void main_f_ae4c30() { main::sub_ce0(); }

// sub_ae4ca0  (orig 0xae4ca0, ret_only)
void main_f_ae4ca0() {}

// sub_ae4cb0  (orig 0xae4cb0, tailcall)
void main_f_ae4cb0() { main::sub_ce0(); }

// sub_ae4cd0  (orig 0xae4cd0, tailcall)
void main_f_ae4cd0() { main::sub_ce0(); }

// sub_ae4d40  (orig 0xae4d40, ret_only)
void main_f_ae4d40() {}

// sub_ae4d50  (orig 0xae4d50, tailcall)
void main_f_ae4d50() { main::sub_ce0(); }

// sub_ae4d70  (orig 0xae4d70, tailcall)
void main_f_ae4d70() { main::sub_ce0(); }

// sub_ae4de0  (orig 0xae4de0, ret_only)
void main_f_ae4de0() {}

// sub_ae4df0  (orig 0xae4df0, tailcall)
void main_f_ae4df0() { main::sub_ce0(); }

// sub_ae4e10  (orig 0xae4e10, tailcall)
void main_f_ae4e10() { main::sub_ce0(); }

// sub_ae4e80  (orig 0xae4e80, ret_only)
void main_f_ae4e80() {}

// sub_ae4e90  (orig 0xae4e90, tailcall)
void main_f_ae4e90() { main::sub_ce0(); }

// sub_ae4eb0  (orig 0xae4eb0, tailcall)
void main_f_ae4eb0() { main::sub_ce0(); }

// sub_ae4f20  (orig 0xae4f20, ret_only)
void main_f_ae4f20() {}

// sub_ae4f30  (orig 0xae4f30, tailcall)
void main_f_ae4f30() { main::sub_ce0(); }

// sub_ae4f50  (orig 0xae4f50, tailcall)
void main_f_ae4f50() { main::sub_ce0(); }

// sub_ae4fc0  (orig 0xae4fc0, ret_only)
void main_f_ae4fc0() {}

// sub_ae4fd0  (orig 0xae4fd0, tailcall)
void main_f_ae4fd0() { main::sub_ce0(); }

// sub_ae4ff0  (orig 0xae4ff0, tailcall)
void main_f_ae4ff0() { main::sub_ce0(); }

// sub_ae5060  (orig 0xae5060, ret_only)
void main_f_ae5060() {}

// sub_ae5070  (orig 0xae5070, tailcall)
void main_f_ae5070() { main::sub_ce0(); }

// sub_ae5090  (orig 0xae5090, tailcall)
void main_f_ae5090() { main::sub_ce0(); }

// sub_ae5100  (orig 0xae5100, ret_only)
void main_f_ae5100() {}

// sub_ae5110  (orig 0xae5110, tailcall)
void main_f_ae5110() { main::sub_ce0(); }

// sub_ae5130  (orig 0xae5130, tailcall)
void main_f_ae5130() { main::sub_ce0(); }

// sub_ae51a0  (orig 0xae51a0, ret_only)
void main_f_ae51a0() {}

// sub_ae51b0  (orig 0xae51b0, tailcall)
void main_f_ae51b0() { main::sub_ce0(); }

// sub_ae51d0  (orig 0xae51d0, tailcall)
void main_f_ae51d0() { main::sub_ce0(); }

// sub_ae5240  (orig 0xae5240, ret_only)
void main_f_ae5240() {}

// sub_ae5250  (orig 0xae5250, tailcall)
void main_f_ae5250() { main::sub_ce0(); }

// sub_ae5270  (orig 0xae5270, tailcall)
void main_f_ae5270() { main::sub_ce0(); }

// sub_ae52e0  (orig 0xae52e0, ret_only)
void main_f_ae52e0() {}

// sub_ae52f0  (orig 0xae52f0, tailcall)
void main_f_ae52f0() { main::sub_ce0(); }

// sub_ae5310  (orig 0xae5310, tailcall)
void main_f_ae5310() { main::sub_ce0(); }

// sub_ae5380  (orig 0xae5380, ret_only)
void main_f_ae5380() {}

// sub_ae5390  (orig 0xae5390, tailcall)
void main_f_ae5390() { main::sub_ce0(); }

// sub_ae53b0  (orig 0xae53b0, tailcall)
void main_f_ae53b0() { main::sub_ce0(); }

// sub_ae5420  (orig 0xae5420, ret_only)
void main_f_ae5420() {}

// sub_ae5430  (orig 0xae5430, tailcall)
void main_f_ae5430() { main::sub_ce0(); }

// sub_ae5450  (orig 0xae5450, tailcall)
void main_f_ae5450() { main::sub_ce0(); }

// sub_ae54c0  (orig 0xae54c0, ret_only)
void main_f_ae54c0() {}

// sub_ae54d0  (orig 0xae54d0, tailcall)
void main_f_ae54d0() { main::sub_ce0(); }

// sub_ae54f0  (orig 0xae54f0, tailcall)
void main_f_ae54f0() { main::sub_ce0(); }

// sub_ae5560  (orig 0xae5560, ret_only)
void main_f_ae5560() {}

// sub_ae5570  (orig 0xae5570, tailcall)
void main_f_ae5570() { main::sub_ce0(); }

// sub_ae5590  (orig 0xae5590, tailcall)
void main_f_ae5590() { main::sub_ce0(); }

// sub_ae5600  (orig 0xae5600, ret_only)
void main_f_ae5600() {}

// sub_ae5610  (orig 0xae5610, tailcall)
void main_f_ae5610() { main::sub_ce0(); }

// sub_ae5630  (orig 0xae5630, tailcall)
void main_f_ae5630() { main::sub_ce0(); }

// sub_ae56a0  (orig 0xae56a0, ret_only)
void main_f_ae56a0() {}

// sub_ae56b0  (orig 0xae56b0, tailcall)
void main_f_ae56b0() { main::sub_ce0(); }

// sub_ae56d0  (orig 0xae56d0, tailcall)
void main_f_ae56d0() { main::sub_ce0(); }

// sub_ae5740  (orig 0xae5740, ret_only)
void main_f_ae5740() {}

// sub_ae5750  (orig 0xae5750, tailcall)
void main_f_ae5750() { main::sub_ce0(); }

// sub_ae5770  (orig 0xae5770, tailcall)
void main_f_ae5770() { main::sub_ce0(); }

// sub_ae57e0  (orig 0xae57e0, ret_only)
void main_f_ae57e0() {}

// sub_ae57f0  (orig 0xae57f0, tailcall)
void main_f_ae57f0() { main::sub_ce0(); }

// sub_ae5810  (orig 0xae5810, tailcall)
void main_f_ae5810() { main::sub_ce0(); }

// sub_ae5880  (orig 0xae5880, ret_only)
void main_f_ae5880() {}

// sub_ae5890  (orig 0xae5890, tailcall)
void main_f_ae5890() { main::sub_ce0(); }

// sub_ae58b0  (orig 0xae58b0, tailcall)
void main_f_ae58b0() { main::sub_ce0(); }

// sub_ae5920  (orig 0xae5920, ret_only)
void main_f_ae5920() {}

// sub_ae5930  (orig 0xae5930, tailcall)
void main_f_ae5930() { main::sub_ce0(); }

// sub_ae5950  (orig 0xae5950, tailcall)
void main_f_ae5950() { main::sub_ce0(); }

// sub_ae59c0  (orig 0xae59c0, ret_only)
void main_f_ae59c0() {}

// sub_ae59d0  (orig 0xae59d0, tailcall)
void main_f_ae59d0() { main::sub_ce0(); }

// sub_ae59f0  (orig 0xae59f0, tailcall)
void main_f_ae59f0() { main::sub_ce0(); }

// sub_ae5a60  (orig 0xae5a60, ret_only)
void main_f_ae5a60() {}

// sub_ae5a70  (orig 0xae5a70, tailcall)
void main_f_ae5a70() { main::sub_ce0(); }

// sub_ae5a90  (orig 0xae5a90, tailcall)
void main_f_ae5a90() { main::sub_ce0(); }

// sub_ae5b00  (orig 0xae5b00, ret_only)
void main_f_ae5b00() {}

// sub_ae5b10  (orig 0xae5b10, tailcall)
void main_f_ae5b10() { main::sub_ce0(); }

// sub_ae5b30  (orig 0xae5b30, tailcall)
void main_f_ae5b30() { main::sub_ce0(); }

// sub_ae5ba0  (orig 0xae5ba0, ret_only)
void main_f_ae5ba0() {}

// sub_ae5bb0  (orig 0xae5bb0, tailcall)
void main_f_ae5bb0() { main::sub_ce0(); }

// sub_ae5bd0  (orig 0xae5bd0, tailcall)
void main_f_ae5bd0() { main::sub_ce0(); }

// sub_ae5c40  (orig 0xae5c40, ret_only)
void main_f_ae5c40() {}

// sub_ae5c50  (orig 0xae5c50, tailcall)
void main_f_ae5c50() { main::sub_ce0(); }

// sub_ae5c70  (orig 0xae5c70, tailcall)
void main_f_ae5c70() { main::sub_ce0(); }

// sub_ae5ce0  (orig 0xae5ce0, ret_only)
void main_f_ae5ce0() {}

// sub_ae5cf0  (orig 0xae5cf0, tailcall)
void main_f_ae5cf0() { main::sub_ce0(); }

// sub_ae5d10  (orig 0xae5d10, tailcall)
void main_f_ae5d10() { main::sub_ce0(); }

// sub_ae5d80  (orig 0xae5d80, ret_only)
void main_f_ae5d80() {}

// sub_ae5d90  (orig 0xae5d90, tailcall)
void main_f_ae5d90() { main::sub_ce0(); }

// sub_ae5db0  (orig 0xae5db0, tailcall)
void main_f_ae5db0() { main::sub_ce0(); }

// sub_ae5e20  (orig 0xae5e20, ret_only)
void main_f_ae5e20() {}

// sub_ae5e30  (orig 0xae5e30, tailcall)
void main_f_ae5e30() { main::sub_ce0(); }

// sub_ae5e50  (orig 0xae5e50, tailcall)
void main_f_ae5e50() { main::sub_ce0(); }

// sub_ae5ec0  (orig 0xae5ec0, ret_only)
void main_f_ae5ec0() {}

// sub_ae5ed0  (orig 0xae5ed0, tailcall)
void main_f_ae5ed0() { main::sub_ce0(); }

// sub_ae5ef0  (orig 0xae5ef0, tailcall)
void main_f_ae5ef0() { main::sub_ce0(); }

// sub_ae5f60  (orig 0xae5f60, ret_only)
void main_f_ae5f60() {}

// sub_ae5f70  (orig 0xae5f70, tailcall)
void main_f_ae5f70() { main::sub_ce0(); }

// sub_ae5f90  (orig 0xae5f90, tailcall)
void main_f_ae5f90() { main::sub_ce0(); }

// sub_ae6000  (orig 0xae6000, ret_only)
void main_f_ae6000() {}

// sub_ae6010  (orig 0xae6010, tailcall)
void main_f_ae6010() { main::sub_ce0(); }

// sub_ae6030  (orig 0xae6030, tailcall)
void main_f_ae6030() { main::sub_ce0(); }

// sub_ae60a0  (orig 0xae60a0, ret_only)
void main_f_ae60a0() {}

// sub_ae60b0  (orig 0xae60b0, tailcall)
void main_f_ae60b0() { main::sub_ce0(); }

// sub_ae60d0  (orig 0xae60d0, tailcall)
void main_f_ae60d0() { main::sub_ce0(); }

// sub_ae6140  (orig 0xae6140, ret_only)
void main_f_ae6140() {}

// sub_ae6150  (orig 0xae6150, tailcall)
void main_f_ae6150() { main::sub_ce0(); }

// sub_ae6170  (orig 0xae6170, tailcall)
void main_f_ae6170() { main::sub_ce0(); }

// sub_ae61e0  (orig 0xae61e0, ret_only)
void main_f_ae61e0() {}

// sub_ae61f0  (orig 0xae61f0, tailcall)
void main_f_ae61f0() { main::sub_ce0(); }

// sub_ae6210  (orig 0xae6210, tailcall)
void main_f_ae6210() { main::sub_ce0(); }

// sub_ae6280  (orig 0xae6280, ret_only)
void main_f_ae6280() {}

// sub_ae6290  (orig 0xae6290, tailcall)
void main_f_ae6290() { main::sub_ce0(); }

// sub_ae62b0  (orig 0xae62b0, tailcall)
void main_f_ae62b0() { main::sub_ce0(); }

// sub_ae6320  (orig 0xae6320, ret_only)
void main_f_ae6320() {}

// sub_ae6330  (orig 0xae6330, tailcall)
void main_f_ae6330() { main::sub_ce0(); }

// sub_ae6350  (orig 0xae6350, tailcall)
void main_f_ae6350() { main::sub_ce0(); }

// sub_ae63c0  (orig 0xae63c0, ret_only)
void main_f_ae63c0() {}

// sub_ae63d0  (orig 0xae63d0, tailcall)
void main_f_ae63d0() { main::sub_ce0(); }

// sub_ae63f0  (orig 0xae63f0, tailcall)
void main_f_ae63f0() { main::sub_ce0(); }

// sub_ae6460  (orig 0xae6460, ret_only)
void main_f_ae6460() {}

// sub_ae6470  (orig 0xae6470, tailcall)
void main_f_ae6470() { main::sub_ce0(); }

// sub_ae6490  (orig 0xae6490, tailcall)
void main_f_ae6490() { main::sub_ce0(); }

// sub_ae6500  (orig 0xae6500, ret_only)
void main_f_ae6500() {}

// sub_ae6510  (orig 0xae6510, tailcall)
void main_f_ae6510() { main::sub_ce0(); }

// sub_ae6530  (orig 0xae6530, tailcall)
void main_f_ae6530() { main::sub_ce0(); }

// sub_ae65a0  (orig 0xae65a0, ret_only)
void main_f_ae65a0() {}

// sub_ae65b0  (orig 0xae65b0, tailcall)
void main_f_ae65b0() { main::sub_ce0(); }

// sub_ae65d0  (orig 0xae65d0, tailcall)
void main_f_ae65d0() { main::sub_ce0(); }

// sub_ae6640  (orig 0xae6640, ret_only)
void main_f_ae6640() {}

// sub_ae6650  (orig 0xae6650, tailcall)
void main_f_ae6650() { main::sub_ce0(); }

// sub_ae6670  (orig 0xae6670, tailcall)
void main_f_ae6670() { main::sub_ce0(); }

// sub_ae66e0  (orig 0xae66e0, ret_only)
void main_f_ae66e0() {}

// sub_ae66f0  (orig 0xae66f0, tailcall)
void main_f_ae66f0() { main::sub_ce0(); }

// sub_ae6710  (orig 0xae6710, tailcall)
void main_f_ae6710() { main::sub_ce0(); }

// sub_ae6780  (orig 0xae6780, ret_only)
void main_f_ae6780() {}

// sub_ae6790  (orig 0xae6790, tailcall)
void main_f_ae6790() { main::sub_ce0(); }

// sub_ae67b0  (orig 0xae67b0, tailcall)
void main_f_ae67b0() { main::sub_ce0(); }

// sub_ae6820  (orig 0xae6820, ret_only)
void main_f_ae6820() {}

// sub_ae6830  (orig 0xae6830, tailcall)
void main_f_ae6830() { main::sub_ce0(); }

// sub_ae6850  (orig 0xae6850, tailcall)
void main_f_ae6850() { main::sub_ce0(); }

// sub_ae68c0  (orig 0xae68c0, ret_only)
void main_f_ae68c0() {}

// sub_ae68d0  (orig 0xae68d0, tailcall)
void main_f_ae68d0() { main::sub_ce0(); }

// sub_ae68f0  (orig 0xae68f0, tailcall)
void main_f_ae68f0() { main::sub_ce0(); }

// sub_ae6960  (orig 0xae6960, ret_only)
void main_f_ae6960() {}

// sub_ae6970  (orig 0xae6970, tailcall)
void main_f_ae6970() { main::sub_ce0(); }

// sub_ae6990  (orig 0xae6990, tailcall)
void main_f_ae6990() { main::sub_ce0(); }

// sub_ae6a00  (orig 0xae6a00, ret_only)
void main_f_ae6a00() {}

// sub_ae6a10  (orig 0xae6a10, tailcall)
void main_f_ae6a10() { main::sub_ce0(); }

// sub_ae6a30  (orig 0xae6a30, tailcall)
void main_f_ae6a30() { main::sub_ce0(); }

// sub_ae6aa0  (orig 0xae6aa0, ret_only)
void main_f_ae6aa0() {}

// sub_ae6ab0  (orig 0xae6ab0, tailcall)
void main_f_ae6ab0() { main::sub_ce0(); }

// sub_ae6ad0  (orig 0xae6ad0, tailcall)
void main_f_ae6ad0() { main::sub_ce0(); }

// sub_ae6b40  (orig 0xae6b40, ret_only)
void main_f_ae6b40() {}

// sub_ae6b50  (orig 0xae6b50, tailcall)
void main_f_ae6b50() { main::sub_ce0(); }

// sub_ae6b70  (orig 0xae6b70, tailcall)
void main_f_ae6b70() { main::sub_ce0(); }

// sub_ae6be0  (orig 0xae6be0, ret_only)
void main_f_ae6be0() {}

// sub_ae6bf0  (orig 0xae6bf0, tailcall)
void main_f_ae6bf0() { main::sub_ce0(); }

// sub_ae6c10  (orig 0xae6c10, tailcall)
void main_f_ae6c10() { main::sub_ce0(); }

// sub_ae6c80  (orig 0xae6c80, ret_only)
void main_f_ae6c80() {}

// sub_ae6c90  (orig 0xae6c90, tailcall)
void main_f_ae6c90() { main::sub_ce0(); }

// sub_ae6cb0  (orig 0xae6cb0, tailcall)
void main_f_ae6cb0() { main::sub_ce0(); }

// sub_ae6d20  (orig 0xae6d20, ret_only)
void main_f_ae6d20() {}

// sub_ae6d30  (orig 0xae6d30, tailcall)
void main_f_ae6d30() { main::sub_ce0(); }

// sub_ae6d50  (orig 0xae6d50, tailcall)
void main_f_ae6d50() { main::sub_ce0(); }

// sub_ae6dc0  (orig 0xae6dc0, ret_only)
void main_f_ae6dc0() {}

// sub_ae6dd0  (orig 0xae6dd0, tailcall)
void main_f_ae6dd0() { main::sub_ce0(); }

// sub_ae6df0  (orig 0xae6df0, tailcall)
void main_f_ae6df0() { main::sub_ce0(); }

// sub_ae6e60  (orig 0xae6e60, ret_only)
void main_f_ae6e60() {}

// sub_ae6e70  (orig 0xae6e70, tailcall)
void main_f_ae6e70() { main::sub_ce0(); }

// sub_ae6e90  (orig 0xae6e90, tailcall)
void main_f_ae6e90() { main::sub_ce0(); }

// sub_ae6f00  (orig 0xae6f00, ret_only)
void main_f_ae6f00() {}

