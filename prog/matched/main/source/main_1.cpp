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


namespace main { void sub_906550(); }
namespace main { void sub_906850(); }
namespace main { uint64_t sub_906550(uintptr_t); }
namespace main { void sub_ce0(); }
namespace main { void sub_90de90(); }
namespace main { uint64_t sub_90de90(uintptr_t); }
namespace main { void sub_90ed90(); }
namespace main { void sub_967370(); }
namespace main { uint64_t sub_90ed90(uintptr_t); }
namespace main { void sub_9177a0(); }
namespace main { void sub_e7feb0(); }
namespace main { uint64_t sub_e7feb0(uintptr_t); }
namespace main { void sub_91cf70(); }
namespace main { void sub_e7c4c0(); }
namespace main { uint64_t sub_e7c4c0(uintptr_t); }
namespace main { void sub_91e2c0(); }
namespace main { void sub_91e900(); }
namespace main { uint64_t L_cursorR_00_2(uintptr_t); }
namespace main { uint64_t L_cursorL_00(uintptr_t); }
namespace main { void sub_924560(); }
namespace main { void sub_9255a0(); }
namespace main { void sub_925d50(); }
namespace main { void sub_926c70(); }
namespace main { void sub_9275c0(); }
namespace main { void sub_92a1a0(); }
namespace main { uint64_t sub_92a1a0(uintptr_t); }
namespace main { void sub_92bcc0(); }
namespace main { uint64_t sub_92bcc0(uintptr_t); }
namespace main { uint64_t sub_92b890(uintptr_t); }
namespace main { uint64_t sub_7f33a0(uintptr_t); }
namespace main { void sub_92e310(); }
namespace main { uint64_t sub_92e310(uintptr_t); }
namespace main { uint64_t anime_in(uintptr_t); }
namespace main { uint64_t sub_e80810(uintptr_t); }
namespace main { void sub_932000(); }
namespace main { void sub_932db0(); }
namespace main { void sub_91b4b0(); }
namespace main { uint64_t sub_937090(uintptr_t); }
namespace main { uint64_t sub_9370d0(uintptr_t); }
namespace main { void sub_935b40(); }
namespace main { uint64_t sub_935b40(uintptr_t); }
namespace main { uint64_t ITEMINFO__4u(uintptr_t); }
namespace main { uint64_t sub_936de0(uintptr_t); }
namespace main { void sub_9386e0(); }
namespace main { uint64_t sub_93d6d0(uintptr_t); }
namespace main { uint64_t sub_93d6e0(uintptr_t); }
namespace main { void sub_93c220(); }
namespace main { void sub_939c20(); }
namespace main { uint64_t sub_93c220(uintptr_t); }
namespace main { uint64_t sub_93cdf0(uintptr_t); }
namespace main { void sub_93a3d0(); }
namespace main { void sub_93dfb0(); }
namespace main { uint64_t sub_93dfb0(uintptr_t); }
namespace main { void sub_93e3b0(); }
namespace main { void sub_93a090(); }
namespace main { void sub_940410(); }
namespace main { void sub_8a9740(); }
namespace main { void sub_8a9750(); }
namespace main { void sub_8a9370(); }
namespace main { void sub_8a93d0(); }
namespace main { uint64_t sub_9a8190(uintptr_t); }
namespace main { uint64_t sub_9a8a20(uintptr_t); }
namespace main { uint64_t sub_9bc580(uintptr_t); }
namespace main { uint64_t sub_98a6f0(uintptr_t); }
namespace main { uint64_t sub_98a8d0(uintptr_t); }
namespace main { void sub_966130(); }
namespace main { uint64_t sub_966130(uintptr_t); }
namespace main { void sub_96c4a0(); }
namespace main { void sub_979390(); }
namespace main { void sub_978f50(); }
namespace main { uint64_t sub_978f50(uintptr_t); }
namespace main { void sub_984d50(); }
namespace main { void sub_985c80(); }
namespace main { void sub_974790(); }
namespace main { uint64_t sub_984d50(uintptr_t); }
namespace main { void sub_9892f0(); }
namespace main { void sub_9895d0(); }
namespace main { uint64_t sub_9892f0(uintptr_t); }
namespace main { void sub_98db40(); }
namespace main { void sub_98dd50(); }
namespace main { uint64_t sub_98db40(uintptr_t); }
namespace main { void sub_98ed90(); }
namespace main { uint64_t sub_999800(uintptr_t); }
namespace main { void sub_9a3e70(); }
namespace main { uint64_t sub_9a3e70(uintptr_t); }
namespace main { void sub_9a4060(); }
namespace main { uint64_t sub_9a4060(uintptr_t); }
namespace main { void sub_9a78d0(); }
namespace main { uint64_t sub_9a76e0(uintptr_t); }
namespace main { void sub_9acb70(); }
namespace main { uint64_t sub_9acb70(uintptr_t); }
namespace main { void sub_9b0150(); }
namespace main { uint64_t sub_9b03a0(uintptr_t); }
namespace main { void sub_9b03a0(); }
namespace main { void sub_970170(); }
namespace main { uint64_t sub_7941a0(uintptr_t); }
namespace main { uint64_t sub_793f30(uintptr_t); }
namespace main { uint64_t sub_793fb0(uintptr_t); }
namespace main { void sub_9b0ae0(); }
namespace main { uint64_t Audience_Tension_2(uintptr_t); }
namespace main { uint64_t sub_98a4b0(uintptr_t); }
namespace main { uint64_t sub_98a4e0(uintptr_t); }
namespace main { uint64_t sub_98a510(uintptr_t); }
namespace main { uint64_t sub_981350(uintptr_t); }
namespace main { uint64_t sub_954450(uintptr_t); }
namespace main { uint64_t sub_954570(uintptr_t); }
namespace main { uint64_t sub_98c900(uintptr_t); }
namespace main { uint64_t sub_a6cc90(uintptr_t); }
namespace main { void sub_a6cc90(); }
namespace battle { void battle_common(); }
namespace main { void sub_9484c0(); }
namespace main { void sub_948790(); }
namespace main { void sub_949fb0(); }
namespace main { void sub_a6e930(); }
namespace main { void sub_a6ffa0(); }
namespace main { uint64_t sub_a6ffa0(uintptr_t); }
namespace main { void sub_a703a0(); }
namespace main { void sub_a70780(); }
namespace main { uint64_t sub_a703a0(uintptr_t); }
namespace main { void sub_a71770(); }
namespace main { void sub_a73040(); }
namespace main { void sub_a741e0(); }
namespace main { uint64_t sub_a74a40(uintptr_t); }
namespace main { void sub_a74a40(); }
namespace main { void sub_a76020(); }
namespace main { void sub_a79cd0(); }
namespace main { uint64_t sub_a79cd0(uintptr_t); }
namespace main { void sub_a7a700(); }
namespace main { void sub_a7a4b0(); }
namespace main { uint64_t sub_a7a4b0(uintptr_t); }
namespace main { void sub_14b8960(); }
namespace main { uint64_t sub_14b8960(uintptr_t); }
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
namespace main { uint64_t sub_aab950(uintptr_t); }
namespace main { void sub_aac6c0(); }
namespace main { void sub_ab34d0(); }
namespace main { void sub_a8af70(); }
namespace main { uint64_t sub_ab4ad0(uintptr_t); }
namespace main { void sub_ab4ad0(); }
namespace main { void sub_ab7560(); }
namespace main { void sub_ab81e0(); }
namespace main { uint64_t sub_ab81e0(uintptr_t); }
namespace main { uint64_t sub_ab9140(uintptr_t); }
namespace main { uint64_t sub_abdfa0(uintptr_t); }
namespace main { uint64_t sub_15afe30(uintptr_t); }
namespace main { uint64_t sub_abdc40(uintptr_t); }
namespace main { uint64_t sub_abdd60(uintptr_t); }
namespace main { void sub_ab8fb0(); }
namespace main { void sub_abd640(); }
namespace main { uint64_t sub_abd640(uintptr_t); }
namespace main { void sub_abd920(); }
namespace main { uint64_t sub_abd920(uintptr_t); }
namespace main { uint64_t sub_abda60(uintptr_t); }
namespace main { void sub_15b6e10(); }
namespace main { uint64_t sub_abf760(uintptr_t); }
namespace main { uint64_t sub_ac1dc0(uintptr_t); }
namespace main { void sub_ac56c0(); }
namespace main { uint64_t sub_ac56c0(uintptr_t); }
namespace main { void sub_ac70e0(); }
namespace main { uint64_t sub_ac70e0(uintptr_t); }
namespace main { void sub_acb7b0(); }
namespace main { void sub_ac7630(); }
namespace main { uint64_t sub_ad1f30(uintptr_t); }
namespace main { void sub_ad1f30(); }
namespace main { uint64_t sub_ad45c0(uintptr_t); }
namespace main { void sub_add5d0(); }
namespace main { void sub_ae3d20(); }
namespace main { void sub_ae43b0(); }
namespace main { uint64_t sub_ae3d20(uintptr_t); }
namespace main { void sub_ac5b50(); }
namespace main { uint64_t sub_b08a20(uintptr_t); }
namespace main { void sub_b0d570(); }
namespace main { uint64_t sub_b0d570(uintptr_t); }
namespace main { uint64_t sub_b13d10(uintptr_t); }
namespace main { uint64_t sub_b14300(uintptr_t); }
namespace main { void sub_b1cc70(); }
namespace main { uint64_t sub_b1cc70(uintptr_t); }
namespace main { void sub_b22430(); }
namespace main { uint64_t sub_b22430(uintptr_t); }
namespace main { void sub_b2b8c0(); }
namespace main { void sub_b2bf60(); }
namespace main { uint64_t sub_b2bf60(uintptr_t); }
namespace main { void sub_e7c250(); }
namespace main { void sub_b2c9c0(); }
namespace main { uint64_t sub_e7c250(uintptr_t); }
namespace main { void sub_b2d2b0(); }
namespace main { void sub_b2d590(); }
namespace main { void sub_b2cc40(); }
namespace main { void sub_b2e480(); }
namespace main { void sub_b2f410(); }
namespace main { uint64_t sub_b2f410(uintptr_t); }
namespace main { void sub_b309e0(); }
namespace main { void sub_b30410(); }
namespace main { uint64_t sub_b309e0(uintptr_t); }
namespace main { void sub_b317d0(); }
namespace main { void sub_b32860(); }
namespace main { void sub_b32b10(); }
namespace main { void sub_b32f40(); }
namespace main { uint64_t sub_b34480(uintptr_t); }
namespace main { uint64_t sub_b37020(uintptr_t); }
namespace main { uint64_t sub_b374b0(uintptr_t); }
namespace main { uint64_t sub_b37230(uintptr_t); }
namespace main { uint64_t sub_b3b0b0(uintptr_t); }
namespace main { void sub_b3b0b0(); }
namespace main { void sub_b426b0(); }
namespace main { void sub_b46170(); }
namespace main { uint64_t sub_b465b0(uintptr_t); }
namespace main { void sub_b465b0(); }
namespace main { uint64_t sub_b56610(uintptr_t); }
namespace main { uint64_t sub_b56630(uintptr_t); }
namespace main { uint64_t sub_b56650(uintptr_t); }
namespace main { void sub_ead240(); }
namespace main { uint64_t sub_ead240(uintptr_t); }
namespace main { uint64_t sub_b5eff0(uintptr_t); }
namespace main { void sub_b5eff0(); }
namespace main { uint64_t sub_b6c2c0(uintptr_t); }
namespace main { uint64_t sub_b74050(uintptr_t); }
namespace main { void sub_b75450(); }
namespace main { uint64_t sub_b75450(uintptr_t); }
namespace main { void sub_b75f10(); }
namespace main { uint64_t sub_b75f10(uintptr_t); }
namespace main { void sub_b77350(); }
namespace main { uint64_t sub_b77350(uintptr_t); }
namespace main { void sub_b78620(); }
namespace main { uint64_t sub_b78620(uintptr_t); }
namespace main { void sub_b79e10(); }
namespace main { void sub_b7a150(); }
namespace main { void sub_b7f300(); }
namespace main { uint64_t sub_b7f300(uintptr_t); }
namespace main { void sub_b80850(); }
namespace main { uint64_t sub_b80850(uintptr_t); }
namespace main { uint64_t sub_b82fb0(uintptr_t); }
namespace main { void sub_b82fb0(); }
namespace main { void sub_b49230(); }
namespace main { void sub_b493d0(); }
namespace main { uint64_t sub_b84f60(uintptr_t); }
namespace main { void sub_b84f60(); }
namespace main { uint64_t sub_b854f0(uintptr_t); }
namespace main { void sub_b854f0(); }
namespace main { void sub_b866b0(); }
namespace main { uint64_t sub_b866b0(uintptr_t); }
namespace main { uint64_t sub_b86800(uintptr_t); }
namespace main { uint64_t sub_b86f10(uintptr_t); }
namespace main { void sub_b86f10(); }
namespace main { uint64_t sub_b8cc30(uintptr_t); }
namespace main { void sub_b8cc30(); }
namespace main { void sub_b3f380(); }
namespace main { void sub_b3f3a0(); }
namespace main { void sub_b3f3f0(); }
namespace main { void sub_b3fbd0(); }
namespace main { void sub_b3adb0(); }
namespace main { void sub_b9eec0(); }
namespace main { uint64_t sub_b9eec0(uintptr_t); }
namespace main { void sub_b946e0(); }
namespace main { void sub_ba1390(); }
namespace main { uint64_t sub_ba19f0(uintptr_t); }
namespace main { uint64_t sub_ba2260(uintptr_t); }
namespace main { void sub_ba39c0(); }
namespace main { uint64_t sub_ba39c0(uintptr_t); }
namespace main { void sub_ba44c0(); }
namespace main { void sub_ba4690(); }
namespace main { uint64_t sub_ba44c0(uintptr_t); }
namespace main { void sub_ba5440(); }
namespace main { uint64_t pointer_3(uintptr_t); }
namespace main { uint64_t sub_bb4170(uintptr_t); }
namespace main { void sub_bb4d40(); }
namespace main { void sub_bb5bc0(); }
namespace main { uint64_t sub_bb5bc0(uintptr_t); }
namespace main { uint64_t sub_bb5d20(uintptr_t); }
namespace main { void sub_bb6070(); }
namespace main { uint64_t sub_bb6070(uintptr_t); }
namespace main { uint64_t sub_bb6270(uintptr_t); }
namespace main { uint64_t sub_bb65e0(uintptr_t); }
namespace main { uint64_t sub_bb6760(uintptr_t); }
namespace main { uint64_t sub_bb6470(uintptr_t); }
namespace main { void contents_comp_organize_data_holder_2(); }
namespace main { void contents_regulation_2(); }
namespace main { uint64_t sub_ba7db0(uintptr_t); }
namespace main { uint64_t sub_bbc450(uintptr_t); }
namespace main { uint64_t sub_bbf1e0(uintptr_t); }
namespace main { uint64_t sub_bc0c30(uintptr_t); }
namespace main { void sub_bc0c30(); }
namespace main { uint64_t sub_c182b0(uintptr_t); }
namespace main { void sub_bc78a0(); }
namespace main { uint64_t sub_bc78a0(uintptr_t); }
namespace main { void sub_bd0880(); }
namespace main { uint64_t sub_bd0880(uintptr_t); }
namespace main { void sub_bc8a00(); }
namespace main { void sub_bc9e80(); }
namespace main { void sub_bcc670(); }
namespace main { void sub_bce620(); }
namespace main { void sub_bcf010(); }
namespace main { void sub_bcf440(); }
namespace main { void sub_bd3da0(); }
namespace main { void sub_bd53c0(); }
namespace main { void sub_bd62f0(); }
namespace main { void sub_bd7b90(); }
namespace main { void sub_bd98c0(); }
namespace main { void sub_bda560(); }
namespace main { void sub_bdaf10(); }
namespace main { void sub_bdbb00(); }
namespace main { void sub_bdc420(); }
namespace main { void sub_bdcdd0(); }
namespace main { void EffCenter01(); }
namespace main { void sub_be1860(); }
namespace main { void sub_be1cb0(); }
namespace main { void sub_be3610(); }
namespace main { uint64_t sub_be4540(uintptr_t); }
namespace main { uint64_t sub_be7f40(uintptr_t); }
namespace main { uint64_t sub_1308340(uintptr_t); }
namespace main { void sub_bebe30(); }
namespace main { uint64_t sub_bebe30(uintptr_t); }
namespace main { void sub_bed700(); }
namespace main { uint64_t sub_bed700(uintptr_t); }
namespace main { void sub_bee1e0(); }
namespace main { uint64_t sub_bee1e0(uintptr_t); }
namespace main { void sub_bf1640(); }
namespace main { uint64_t sub_bf1640(uintptr_t); }
namespace main { uint64_t sub_14bacd0(uintptr_t); }
namespace main { void sub_bf5460(); }
namespace main { uint64_t sub_bf5460(uintptr_t); }
namespace main { void sub_bf6a10(); }
namespace main { uint64_t sub_bf6a10(uintptr_t); }
namespace main { void sub_bf6f70(); }
namespace main { uint64_t sub_bf6f70(uintptr_t); }
namespace main { void sub_bf9210(); }
namespace main { uint64_t sub_bf9210(uintptr_t); }
namespace main { void sub_bfbed0(); }
namespace main { uint64_t sub_bfbed0(uintptr_t); }
namespace main { void sub_bfd300(); }
namespace main { uint64_t sub_bfd300(uintptr_t); }
namespace main { void sub_c04ca0(); }
namespace main { uint64_t sub_c04ca0(uintptr_t); }
namespace main { void sub_c09460(); }
namespace main { uint64_t sub_c09460(uintptr_t); }
namespace main { void sub_c10d60(); }
namespace main { uint64_t sub_c10d60(uintptr_t); }
namespace main { void sub_c13200(); }
namespace main { uint64_t sub_c13200(uintptr_t); }
namespace main { uint64_t sub_c156a0(uintptr_t); }
namespace main { void sub_c156a0(); }
namespace main { uint64_t sub_c545c0(uintptr_t); }
namespace main { uint64_t sub_c5ac90(uintptr_t); }
namespace main { uint64_t sub_c18900(uintptr_t); }
namespace main { uint64_t sub_c18c00(uintptr_t); }
namespace main { void sub_bc7540(); }
namespace main { void sub_c1beb0(); }
namespace main { uint64_t sub_c1beb0(uintptr_t); }
namespace main { void sub_c1cdd0(); }
namespace main { void sub_c1e5a0(); }
namespace main { uint64_t sub_c1e5a0(uintptr_t); }
namespace main { void sub_c22600(); }
namespace main { void sub_c23cc0(); }
namespace main { uint64_t sub_c23cc0(uintptr_t); }
namespace main { void sub_c24470(); }
namespace main { void sub_c24980(); }
namespace main { uint64_t sub_c24470(uintptr_t); }
namespace main { void sub_c277c0(); }
namespace main { uint64_t sub_c277c0(uintptr_t); }
namespace main { void sub_c28d00(); }
namespace main { void sub_c2a3e0(); }
namespace main { void sub_c2c3b0(); }
namespace main { void sub_c2c8a0(); }
namespace main { void sub_c2cd70(); }
namespace main { uint64_t sub_eb75e0(uintptr_t); }
namespace main { void sub_c33460(); }
namespace main { uint64_t sub_c54770(uintptr_t); }
namespace main { void sub_c37f30(); }
namespace main { void sub_c38220(); }
namespace main { uint64_t sub_c37f30(uintptr_t); }
namespace main { void sub_c3b730(); }
namespace main { void sub_c3cbc0(); }
namespace main { void sub_c3d130(); }
namespace main { uint64_t sub_c3cbc0(uintptr_t); }
namespace main { void sub_c3e6e0(); }
namespace main { uint64_t sub_c3fc20(uintptr_t); }
namespace main { void sub_c3fc20(); }

// sub_9067d0  (orig 0x9067d0, tailcall)
void main_f_9067d0() { main::sub_906550(); }

// sub_9067e0  (orig 0x9067e0, tailcall)
void main_f_9067e0() { main::sub_906850(); }

// sub_9067f0  (orig 0x9067f0, tailcall)
uint64_t main_f_9067f0(void* a0) {
    return main::sub_906550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_906800  (orig 0x906800, tailcall)
uint64_t main_f_906800(void* a0) {
    return main::sub_906550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_906810  (orig 0x906810, tailcall)
void main_f_906810() { main::sub_906850(); }

// sub_906820  (orig 0x906820, tailcall)
void main_f_906820() { main::sub_906850(); }

// sub_906830  (orig 0x906830, tailcall)
uint64_t main_f_906830(void* a0) {
    return main::sub_906550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_906840  (orig 0x906840, tailcall)
uint64_t main_f_906840(void* a0) {
    return main::sub_906550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_906980  (orig 0x906980, tailcall)
void main_f_906980() { main::sub_ce0(); }

// sub_907a50  (orig 0x907a50, tailcall)
void main_f_907a50() { main::sub_ce0(); }

// sub_90e060  (orig 0x90e060, tailcall)
void main_f_90e060() { main::sub_90de90(); }

// sub_90e120  (orig 0x90e120, tailcall)
uint64_t main_f_90e120(void* a0) {
    return main::sub_90de90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_90e130  (orig 0x90e130, tailcall)
uint64_t main_f_90e130(void* a0) {
    return main::sub_90de90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_90e2a0  (orig 0x90e2a0, tailcall)
uint64_t main_f_90e2a0(void* a0) {
    return main::sub_90de90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_90e2b0  (orig 0x90e2b0, tailcall)
uint64_t main_f_90e2b0(void* a0) {
    return main::sub_90de90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_90e2c0  (orig 0x90e2c0, tailcall)
void main_f_90e2c0() { main::sub_ce0(); }

// sub_90f010  (orig 0x90f010, tailcall)
void main_f_90f010() { main::sub_90ed90(); }

// sub_90f020  (orig 0x90f020, tailcall)
void main_f_90f020() { main::sub_967370(); }

// sub_90f030  (orig 0x90f030, tailcall)
uint64_t main_f_90f030(void* a0) {
    return main::sub_90ed90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_90f040  (orig 0x90f040, tailcall)
uint64_t main_f_90f040(void* a0) {
    return main::sub_90ed90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_90f050  (orig 0x90f050, tailcall)
void main_f_90f050() { main::sub_967370(); }

// sub_90f060  (orig 0x90f060, tailcall)
void main_f_90f060() { main::sub_967370(); }

// sub_90f070  (orig 0x90f070, tailcall)
uint64_t main_f_90f070(void* a0) {
    return main::sub_90ed90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_90f080  (orig 0x90f080, tailcall)
uint64_t main_f_90f080(void* a0) {
    return main::sub_90ed90(((uintptr_t)((char*)(a0) - 80)));
}

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

// sub_9172a0  (orig 0x9172a0, tailcall)
void main_f_9172a0() { main::sub_9177a0(); }

// sub_917470  (orig 0x917470, tailcall)
void main_f_917470() { main::sub_9177a0(); }

// sub_917480  (orig 0x917480, tailcall)
void main_f_917480() { main::sub_9177a0(); }

// sub_91a930  (orig 0x91a930, tailcall)
void main_f_91a930() { main::sub_ce0(); }

// sub_91cad0  (orig 0x91cad0, tailcall)
void main_f_91cad0() { main::sub_e7feb0(); }

// sub_91cb50  (orig 0x91cb50, tailcall)
uint64_t main_f_91cb50(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_91cb60  (orig 0x91cb60, tailcall)
uint64_t main_f_91cb60(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_91cc50  (orig 0x91cc50, tailcall)
uint64_t main_f_91cc50(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_91cc60  (orig 0x91cc60, tailcall)
uint64_t main_f_91cc60(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_91cef0  (orig 0x91cef0, tailcall)
void main_f_91cef0() { main::sub_e7feb0(); }

// sub_91cf00  (orig 0x91cf00, tailcall)
void main_f_91cf00() { main::sub_91cf70(); }

// sub_91cf10  (orig 0x91cf10, tailcall)
uint64_t main_f_91cf10(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_91cf20  (orig 0x91cf20, tailcall)
uint64_t main_f_91cf20(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_91cf30  (orig 0x91cf30, tailcall)
void main_f_91cf30() { main::sub_91cf70(); }

// sub_91cf40  (orig 0x91cf40, tailcall)
void main_f_91cf40() { main::sub_91cf70(); }

// sub_91cf50  (orig 0x91cf50, tailcall)
uint64_t main_f_91cf50(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_91cf60  (orig 0x91cf60, tailcall)
uint64_t main_f_91cf60(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_91d4e0  (orig 0x91d4e0, tailcall)
void main_f_91d4e0() { main::sub_e7c4c0(); }

// sub_91d560  (orig 0x91d560, tailcall)
uint64_t main_f_91d560(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_91d570  (orig 0x91d570, tailcall)
uint64_t main_f_91d570(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_91d660  (orig 0x91d660, tailcall)
uint64_t main_f_91d660(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_91d670  (orig 0x91d670, tailcall)
uint64_t main_f_91d670(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_91e0d0  (orig 0x91e0d0, tailcall)
void main_f_91e0d0() { main::sub_91e2c0(); }

// sub_91e1c0  (orig 0x91e1c0, tailcall)
void main_f_91e1c0() { main::sub_91e2c0(); }

// sub_91e1d0  (orig 0x91e1d0, tailcall)
void main_f_91e1d0() { main::sub_91e2c0(); }

// sub_91e880  (orig 0x91e880, tailcall)
void main_f_91e880() { main::sub_e7c4c0(); }

// sub_91e890  (orig 0x91e890, tailcall)
void main_f_91e890() { main::sub_91e900(); }

// sub_91e8a0  (orig 0x91e8a0, tailcall)
uint64_t main_f_91e8a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_91e8b0  (orig 0x91e8b0, tailcall)
uint64_t main_f_91e8b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_91e8c0  (orig 0x91e8c0, tailcall)
void main_f_91e8c0() { main::sub_91e900(); }

// sub_91e8d0  (orig 0x91e8d0, tailcall)
void main_f_91e8d0() { main::sub_91e900(); }

// sub_91e8e0  (orig 0x91e8e0, tailcall)
uint64_t main_f_91e8e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_91e8f0  (orig 0x91e8f0, tailcall)
uint64_t main_f_91e8f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_91ff50  (orig 0x91ff50, tailcall)
uint64_t main_f_91ff50(void* a0) {
    return main::L_cursorR_00_2(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_91ff90  (orig 0x91ff90, tailcall)
uint64_t main_f_91ff90(void* a0) {
    return main::L_cursorL_00(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_9244e0  (orig 0x9244e0, tailcall)
void main_f_9244e0() { main::sub_e7c4c0(); }

// sub_9244f0  (orig 0x9244f0, tailcall)
void main_f_9244f0() { main::sub_924560(); }

// sub_924500  (orig 0x924500, tailcall)
uint64_t main_f_924500(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_924510  (orig 0x924510, tailcall)
uint64_t main_f_924510(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_924520  (orig 0x924520, tailcall)
void main_f_924520() { main::sub_924560(); }

// sub_924530  (orig 0x924530, tailcall)
void main_f_924530() { main::sub_924560(); }

// sub_924540  (orig 0x924540, tailcall)
uint64_t main_f_924540(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_924550  (orig 0x924550, tailcall)
uint64_t main_f_924550(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_924ac0  (orig 0x924ac0, tailcall)
void main_f_924ac0() { main::sub_e7c4c0(); }

// sub_924b40  (orig 0x924b40, tailcall)
uint64_t main_f_924b40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_924b50  (orig 0x924b50, tailcall)
uint64_t main_f_924b50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_924c40  (orig 0x924c40, tailcall)
uint64_t main_f_924c40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_924c50  (orig 0x924c50, tailcall)
uint64_t main_f_924c50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_925520  (orig 0x925520, tailcall)
void main_f_925520() { main::sub_e7feb0(); }

// sub_925530  (orig 0x925530, tailcall)
void main_f_925530() { main::sub_9255a0(); }

// sub_925540  (orig 0x925540, tailcall)
uint64_t main_f_925540(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_925550  (orig 0x925550, tailcall)
uint64_t main_f_925550(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_925560  (orig 0x925560, tailcall)
void main_f_925560() { main::sub_9255a0(); }

// sub_925570  (orig 0x925570, tailcall)
void main_f_925570() { main::sub_9255a0(); }

// sub_925580  (orig 0x925580, tailcall)
uint64_t main_f_925580(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_925590  (orig 0x925590, tailcall)
uint64_t main_f_925590(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_925ba0  (orig 0x925ba0, tailcall)
void main_f_925ba0() { main::sub_925d50(); }

// sub_925c70  (orig 0x925c70, tailcall)
void main_f_925c70() { main::sub_925d50(); }

// sub_925c80  (orig 0x925c80, tailcall)
void main_f_925c80() { main::sub_925d50(); }

// sub_926390  (orig 0x926390, tailcall)
void main_f_926390() { main::sub_e7c4c0(); }

// sub_926410  (orig 0x926410, tailcall)
uint64_t main_f_926410(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_926420  (orig 0x926420, tailcall)
uint64_t main_f_926420(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_926510  (orig 0x926510, tailcall)
uint64_t main_f_926510(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_926520  (orig 0x926520, tailcall)
uint64_t main_f_926520(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_926ac0  (orig 0x926ac0, tailcall)
void main_f_926ac0() { main::sub_926c70(); }

// sub_926b90  (orig 0x926b90, tailcall)
void main_f_926b90() { main::sub_926c70(); }

// sub_926ba0  (orig 0x926ba0, tailcall)
void main_f_926ba0() { main::sub_926c70(); }

// sub_927540  (orig 0x927540, tailcall)
void main_f_927540() { main::sub_e7c4c0(); }

// sub_927550  (orig 0x927550, tailcall)
void main_f_927550() { main::sub_9275c0(); }

// sub_927560  (orig 0x927560, tailcall)
uint64_t main_f_927560(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_927570  (orig 0x927570, tailcall)
uint64_t main_f_927570(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_927580  (orig 0x927580, tailcall)
void main_f_927580() { main::sub_9275c0(); }

// sub_927590  (orig 0x927590, tailcall)
void main_f_927590() { main::sub_9275c0(); }

// sub_9275a0  (orig 0x9275a0, tailcall)
uint64_t main_f_9275a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9275b0  (orig 0x9275b0, tailcall)
uint64_t main_f_9275b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_92a350  (orig 0x92a350, tailcall)
void main_f_92a350() { main::sub_92a1a0(); }

// sub_92a3d0  (orig 0x92a3d0, tailcall)
uint64_t main_f_92a3d0(void* a0) {
    return main::sub_92a1a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_92a3e0  (orig 0x92a3e0, tailcall)
uint64_t main_f_92a3e0(void* a0) {
    return main::sub_92a1a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_92a4d0  (orig 0x92a4d0, tailcall)
uint64_t main_f_92a4d0(void* a0) {
    return main::sub_92a1a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_92a4e0  (orig 0x92a4e0, tailcall)
uint64_t main_f_92a4e0(void* a0) {
    return main::sub_92a1a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_92aad0  (orig 0x92aad0, tailcall)
void main_f_92aad0() { main::sub_e7c4c0(); }

// sub_92ab50  (orig 0x92ab50, tailcall)
uint64_t main_f_92ab50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_92ab60  (orig 0x92ab60, tailcall)
uint64_t main_f_92ab60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_92ac50  (orig 0x92ac50, tailcall)
uint64_t main_f_92ac50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_92ac60  (orig 0x92ac60, tailcall)
uint64_t main_f_92ac60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_92be60  (orig 0x92be60, tailcall)
void main_f_92be60() { main::sub_92bcc0(); }

// sub_92bee0  (orig 0x92bee0, tailcall)
uint64_t main_f_92bee0(void* a0) {
    return main::sub_92bcc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_92bef0  (orig 0x92bef0, tailcall)
uint64_t main_f_92bef0(void* a0) {
    return main::sub_92bcc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_92bfe0  (orig 0x92bfe0, tailcall)
uint64_t main_f_92bfe0(void* a0) {
    return main::sub_92bcc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_92bff0  (orig 0x92bff0, tailcall)
uint64_t main_f_92bff0(void* a0) {
    return main::sub_92bcc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_92c2f0  (orig 0x92c2f0, tailcall)
uint64_t main_f_92c2f0(void* a0) {
    return main::sub_92b890(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_92c630  (orig 0x92c630, tailcall)
uint64_t main_f_92c630(void* a0) {
    return main::sub_7f33a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_92c640  (orig 0x92c640, tailcall)
void main_f_92c640() { main::sub_ce0(); }

// sub_92e410  (orig 0x92e410, tailcall)
void main_f_92e410() { main::sub_92e310(); }

// sub_92e490  (orig 0x92e490, tailcall)
uint64_t main_f_92e490(void* a0) {
    return main::sub_92e310(((uintptr_t)((char*)(a0) - 72)));
}

// sub_92e4a0  (orig 0x92e4a0, tailcall)
uint64_t main_f_92e4a0(void* a0) {
    return main::sub_92e310(((uintptr_t)((char*)(a0) - 72)));
}

// sub_92e590  (orig 0x92e590, tailcall)
uint64_t main_f_92e590(void* a0) {
    return main::sub_92e310(((uintptr_t)((char*)(a0) - 80)));
}

// sub_92e5a0  (orig 0x92e5a0, tailcall)
uint64_t main_f_92e5a0(void* a0) {
    return main::sub_92e310(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9300d0  (orig 0x9300d0, tailcall)
void main_f_9300d0() { main::sub_e7c4c0(); }

// sub_930150  (orig 0x930150, tailcall)
uint64_t main_f_930150(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_930160  (orig 0x930160, tailcall)
uint64_t main_f_930160(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_930250  (orig 0x930250, tailcall)
uint64_t main_f_930250(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_930260  (orig 0x930260, tailcall)
uint64_t main_f_930260(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_930ba0  (orig 0x930ba0, tailcall)
uint64_t main_f_930ba0(void* a0) {
    return main::anime_in(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_930bb0  (orig 0x930bb0, tailcall)
void main_f_930bb0() { main::sub_e7c4c0(); }

// sub_930c30  (orig 0x930c30, tailcall)
uint64_t main_f_930c30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_930c40  (orig 0x930c40, tailcall)
uint64_t main_f_930c40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_930d30  (orig 0x930d30, tailcall)
uint64_t main_f_930d30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_930d40  (orig 0x930d40, tailcall)
uint64_t main_f_930d40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_931770  (orig 0x931770, tailcall)
uint64_t main_f_931770(void* a0) {
    return main::sub_e80810(((uintptr_t)(*(uint64_t*)((char*)(a0) + 136))));
}

// sub_931930  (orig 0x931930, tailcall)
void main_f_931930() { main::sub_e7c4c0(); }

// sub_9319b0  (orig 0x9319b0, tailcall)
uint64_t main_f_9319b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_9319c0  (orig 0x9319c0, tailcall)
uint64_t main_f_9319c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_931ab0  (orig 0x931ab0, tailcall)
uint64_t main_f_931ab0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_931ac0  (orig 0x931ac0, tailcall)
uint64_t main_f_931ac0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_931f80  (orig 0x931f80, tailcall)
void main_f_931f80() { main::sub_e7c4c0(); }

// sub_931f90  (orig 0x931f90, tailcall)
void main_f_931f90() { main::sub_932000(); }

// sub_931fa0  (orig 0x931fa0, tailcall)
uint64_t main_f_931fa0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_931fb0  (orig 0x931fb0, tailcall)
uint64_t main_f_931fb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_931fc0  (orig 0x931fc0, tailcall)
void main_f_931fc0() { main::sub_932000(); }

// sub_931fd0  (orig 0x931fd0, tailcall)
void main_f_931fd0() { main::sub_932000(); }

// sub_931fe0  (orig 0x931fe0, tailcall)
uint64_t main_f_931fe0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_931ff0  (orig 0x931ff0, tailcall)
uint64_t main_f_931ff0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9325b0  (orig 0x9325b0, tailcall)
uint64_t main_f_9325b0(void* a0) {
    return main::anime_in(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_9325c0  (orig 0x9325c0, tailcall)
void main_f_9325c0() { main::sub_e7c4c0(); }

// sub_932640  (orig 0x932640, tailcall)
uint64_t main_f_932640(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_932650  (orig 0x932650, tailcall)
uint64_t main_f_932650(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_932740  (orig 0x932740, tailcall)
uint64_t main_f_932740(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_932750  (orig 0x932750, tailcall)
uint64_t main_f_932750(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_932c00  (orig 0x932c00, tailcall)
void main_f_932c00() { main::sub_932db0(); }

// sub_932cd0  (orig 0x932cd0, tailcall)
void main_f_932cd0() { main::sub_932db0(); }

// sub_932ce0  (orig 0x932ce0, tailcall)
void main_f_932ce0() { main::sub_932db0(); }

// sub_934e40  (orig 0x934e40, tailcall)
void main_f_934e40() { main::sub_91b4b0(); }

// sub_935960  (orig 0x935960, tailcall)
uint64_t main_f_935960(void* a0) {
    return main::sub_937090(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1720))));
}

// sub_935970  (orig 0x935970, tailcall)
uint64_t main_f_935970(void* a0) {
    return main::sub_9370d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1720))));
}

// sub_935d40  (orig 0x935d40, tailcall)
void main_f_935d40() { main::sub_935b40(); }

// sub_935dc0  (orig 0x935dc0, tailcall)
uint64_t main_f_935dc0(void* a0) {
    return main::sub_935b40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_935dd0  (orig 0x935dd0, tailcall)
uint64_t main_f_935dd0(void* a0) {
    return main::sub_935b40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_935ec0  (orig 0x935ec0, tailcall)
uint64_t main_f_935ec0(void* a0) {
    return main::sub_935b40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_935ed0  (orig 0x935ed0, tailcall)
uint64_t main_f_935ed0(void* a0) {
    return main::sub_935b40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9360c0  (orig 0x9360c0, tailcall)
void main_f_9360c0() { main::sub_ce0(); }

// sub_936440  (orig 0x936440, tailcall)
uint64_t main_f_936440(void* a0) {
    return main::ITEMINFO__4u(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_9372b0  (orig 0x9372b0, tailcall)
uint64_t main_f_9372b0(void* a0) {
    return main::sub_936de0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_9380c0  (orig 0x9380c0, tailcall)
uint64_t main_f_9380c0(void* a0) {
    return main::sub_e80810(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_938100  (orig 0x938100, tailcall)
void main_f_938100() { main::sub_e7c4c0(); }

// sub_938180  (orig 0x938180, tailcall)
uint64_t main_f_938180(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_938190  (orig 0x938190, tailcall)
uint64_t main_f_938190(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_938280  (orig 0x938280, tailcall)
uint64_t main_f_938280(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_938290  (orig 0x938290, tailcall)
uint64_t main_f_938290(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_938660  (orig 0x938660, tailcall)
void main_f_938660() { main::sub_e7c4c0(); }

// sub_938670  (orig 0x938670, tailcall)
void main_f_938670() { main::sub_9386e0(); }

// sub_938680  (orig 0x938680, tailcall)
uint64_t main_f_938680(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_938690  (orig 0x938690, tailcall)
uint64_t main_f_938690(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_9386a0  (orig 0x9386a0, tailcall)
void main_f_9386a0() { main::sub_9386e0(); }

// sub_9386b0  (orig 0x9386b0, tailcall)
void main_f_9386b0() { main::sub_9386e0(); }

// sub_9386c0  (orig 0x9386c0, tailcall)
uint64_t main_f_9386c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9386d0  (orig 0x9386d0, tailcall)
uint64_t main_f_9386d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_939f70  (orig 0x939f70, tailcall)
void main_f_939f70() { main::sub_ce0(); }

// sub_93a290  (orig 0x93a290, tailcall)
uint64_t main_f_93a290(void* a0) {
    return main::sub_93d6d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 32))));
}

// sub_93a2a0  (orig 0x93a2a0, tailcall)
uint64_t main_f_93a2a0(void* a0) {
    return main::sub_93d6e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 32))));
}

// sub_93a2b0  (orig 0x93a2b0, tailcall)
void main_f_93a2b0() { main::sub_ce0(); }

// sub_93c1a0  (orig 0x93c1a0, tailcall)
void main_f_93c1a0() { main::sub_93c220(); }

// sub_93c1b0  (orig 0x93c1b0, tailcall)
void main_f_93c1b0() { main::sub_939c20(); }

// sub_93c1c0  (orig 0x93c1c0, tailcall)
uint64_t main_f_93c1c0(void* a0) {
    return main::sub_93c220(((uintptr_t)((char*)(a0) - 72)));
}

// sub_93c1d0  (orig 0x93c1d0, tailcall)
uint64_t main_f_93c1d0(void* a0) {
    return main::sub_93c220(((uintptr_t)((char*)(a0) - 72)));
}

// sub_93c1e0  (orig 0x93c1e0, tailcall)
void main_f_93c1e0() { main::sub_939c20(); }

// sub_93c1f0  (orig 0x93c1f0, tailcall)
void main_f_93c1f0() { main::sub_939c20(); }

// sub_93c200  (orig 0x93c200, tailcall)
uint64_t main_f_93c200(void* a0) {
    return main::sub_93c220(((uintptr_t)((char*)(a0) - 80)));
}

// sub_93c210  (orig 0x93c210, tailcall)
uint64_t main_f_93c210(void* a0) {
    return main::sub_93c220(((uintptr_t)((char*)(a0) - 80)));
}

// sub_93c3c0  (orig 0x93c3c0, tailcall)
void main_f_93c3c0() { main::sub_93c220(); }

// sub_93c450  (orig 0x93c450, tailcall)
uint64_t main_f_93c450(void* a0) {
    return main::sub_93c220(((uintptr_t)((char*)(a0) - 72)));
}

// sub_93c460  (orig 0x93c460, tailcall)
uint64_t main_f_93c460(void* a0) {
    return main::sub_93c220(((uintptr_t)((char*)(a0) - 72)));
}

// sub_93c550  (orig 0x93c550, tailcall)
uint64_t main_f_93c550(void* a0) {
    return main::sub_93c220(((uintptr_t)((char*)(a0) - 80)));
}

// sub_93c560  (orig 0x93c560, tailcall)
uint64_t main_f_93c560(void* a0) {
    return main::sub_93c220(((uintptr_t)((char*)(a0) - 80)));
}

// sub_93d000  (orig 0x93d000, tailcall)
uint64_t main_f_93d000(void* a0) {
    return main::sub_93cdf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_93d010  (orig 0x93d010, tailcall)
uint64_t main_f_93d010(void* a0) {
    return main::sub_93cdf0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_93d750  (orig 0x93d750, tailcall)
void main_f_93d750() { main::sub_e7feb0(); }

// sub_93d760  (orig 0x93d760, tailcall)
void main_f_93d760() { main::sub_93a3d0(); }

// sub_93d770  (orig 0x93d770, tailcall)
uint64_t main_f_93d770(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_93d780  (orig 0x93d780, tailcall)
uint64_t main_f_93d780(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_93d790  (orig 0x93d790, tailcall)
void main_f_93d790() { main::sub_93a3d0(); }

// sub_93d7a0  (orig 0x93d7a0, tailcall)
void main_f_93d7a0() { main::sub_93a3d0(); }

// sub_93d7b0  (orig 0x93d7b0, tailcall)
uint64_t main_f_93d7b0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_93d7c0  (orig 0x93d7c0, tailcall)
uint64_t main_f_93d7c0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_93e150  (orig 0x93e150, tailcall)
void main_f_93e150() { main::sub_93dfb0(); }

// sub_93e210  (orig 0x93e210, tailcall)
uint64_t main_f_93e210(void* a0) {
    return main::sub_93dfb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_93e220  (orig 0x93e220, tailcall)
uint64_t main_f_93e220(void* a0) {
    return main::sub_93dfb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_93e390  (orig 0x93e390, tailcall)
uint64_t main_f_93e390(void* a0) {
    return main::sub_93dfb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_93e3a0  (orig 0x93e3a0, tailcall)
uint64_t main_f_93e3a0(void* a0) {
    return main::sub_93dfb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_93e730  (orig 0x93e730, tailcall)
void main_f_93e730() { main::sub_93e3b0(); }

// sub_93e840  (orig 0x93e840, tailcall)
void main_f_93e840() { main::sub_93e3b0(); }

// sub_93e850  (orig 0x93e850, tailcall)
void main_f_93e850() { main::sub_93e3b0(); }

// sub_93fda0  (orig 0x93fda0, tailcall)
void main_f_93fda0() { main::sub_e7feb0(); }

// sub_93fdb0  (orig 0x93fdb0, tailcall)
void main_f_93fdb0() { main::sub_93a090(); }

// sub_93fdc0  (orig 0x93fdc0, tailcall)
uint64_t main_f_93fdc0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_93fdd0  (orig 0x93fdd0, tailcall)
uint64_t main_f_93fdd0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_93fde0  (orig 0x93fde0, tailcall)
void main_f_93fde0() { main::sub_93a090(); }

// sub_93fdf0  (orig 0x93fdf0, tailcall)
void main_f_93fdf0() { main::sub_93a090(); }

// sub_93fe00  (orig 0x93fe00, tailcall)
uint64_t main_f_93fe00(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_93fe10  (orig 0x93fe10, tailcall)
uint64_t main_f_93fe10(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_940260  (orig 0x940260, tailcall)
void main_f_940260() { main::sub_940410(); }

// sub_940330  (orig 0x940330, tailcall)
void main_f_940330() { main::sub_940410(); }

// sub_940340  (orig 0x940340, tailcall)
void main_f_940340() { main::sub_940410(); }

// sub_950c60  (orig 0x950c60, tailcall)
void main_f_950c60() { main::sub_8a9740(); }

// sub_950c70  (orig 0x950c70, tailcall)
void main_f_950c70() { main::sub_8a9750(); }

// sub_950c80  (orig 0x950c80, tailcall)
void main_f_950c80() { main::sub_8a9370(); }

// sub_950c90  (orig 0x950c90, tailcall)
void main_f_950c90() { main::sub_8a93d0(); }

// sub_952910  (orig 0x952910, tailcall)
uint64_t main_f_952910(void* a0) {
    return main::sub_9a8190(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1224))));
}

// sub_952930  (orig 0x952930, tailcall)
uint64_t main_f_952930(void* a0) {
    return main::sub_9a8a20(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1224))));
}

// sub_95abe0  (orig 0x95abe0, tailcall)
uint64_t main_f_95abe0(void* a0) {
    return main::sub_9bc580(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1544))));
}

// sub_95bd00  (orig 0x95bd00, tailcall)
uint64_t main_f_95bd00(void* a0) {
    return main::sub_98a6f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1480))));
}

// sub_95bdf0  (orig 0x95bdf0, tailcall)
uint64_t main_f_95bdf0(void* a0) {
    return main::sub_98a8d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1480))));
}

// sub_967100  (orig 0x967100, tailcall)
void main_f_967100() { main::sub_966130(); }

// sub_9671a0  (orig 0x9671a0, tailcall)
uint64_t main_f_9671a0(void* a0) {
    return main::sub_966130(((uintptr_t)((char*)(a0) - 72)));
}

// sub_9671b0  (orig 0x9671b0, tailcall)
uint64_t main_f_9671b0(void* a0) {
    return main::sub_966130(((uintptr_t)((char*)(a0) - 72)));
}

// sub_96f600  (orig 0x96f600, tailcall)
void main_f_96f600() { main::sub_ce0(); }

// sub_96f680  (orig 0x96f680, tailcall)
void main_f_96f680() { main::sub_ce0(); }

// sub_96f7a0  (orig 0x96f7a0, tailcall)
void main_f_96f7a0() { main::sub_ce0(); }

// sub_96f800  (orig 0x96f800, tailcall)
void main_f_96f800() { main::sub_ce0(); }

// sub_9780e0  (orig 0x9780e0, tailcall)
void main_f_9780e0() { main::sub_96c4a0(); }

// sub_978470  (orig 0x978470, tailcall)
void main_f_978470() { main::sub_96c4a0(); }

// sub_978480  (orig 0x978480, tailcall)
void main_f_978480() { main::sub_96c4a0(); }

// sub_978880  (orig 0x978880, tailcall)
void main_f_978880() { main::sub_979390(); }

// sub_978b10  (orig 0x978b10, tailcall)
void main_f_978b10() { main::sub_979390(); }

// sub_978b60  (orig 0x978b60, tailcall)
void main_f_978b60() { main::sub_979390(); }

// sub_9790d0  (orig 0x9790d0, tailcall)
void main_f_9790d0() { main::sub_978f50(); }

// sub_979150  (orig 0x979150, tailcall)
uint64_t main_f_979150(void* a0) {
    return main::sub_978f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_979160  (orig 0x979160, tailcall)
uint64_t main_f_979160(void* a0) {
    return main::sub_978f50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_979250  (orig 0x979250, tailcall)
uint64_t main_f_979250(void* a0) {
    return main::sub_978f50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_979260  (orig 0x979260, tailcall)
uint64_t main_f_979260(void* a0) {
    return main::sub_978f50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_984ef0  (orig 0x984ef0, tailcall)
void main_f_984ef0() { main::sub_984d50(); }

// sub_984f00  (orig 0x984f00, tailcall)
void main_f_984f00() { main::sub_985c80(); }

// sub_984f20  (orig 0x984f20, tailcall)
void main_f_984f20() { main::sub_974790(); }

// sub_984fb0  (orig 0x984fb0, tailcall)
uint64_t main_f_984fb0(void* a0) {
    return main::sub_984d50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_984fc0  (orig 0x984fc0, tailcall)
uint64_t main_f_984fc0(void* a0) {
    return main::sub_984d50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_984fd0  (orig 0x984fd0, tailcall)
void main_f_984fd0() { main::sub_985c80(); }

// sub_984fe0  (orig 0x984fe0, tailcall)
void main_f_984fe0() { main::sub_985c80(); }

// sub_984ff0  (orig 0x984ff0, tailcall)
uint64_t main_f_984ff0(void* a0) {
    return main::sub_984d50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_985000  (orig 0x985000, tailcall)
uint64_t main_f_985000(void* a0) {
    return main::sub_984d50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_985db0  (orig 0x985db0, tailcall)
void main_f_985db0() { main::sub_ce0(); }

// sub_985e30  (orig 0x985e30, tailcall)
void main_f_985e30() { main::sub_ce0(); }

// sub_986600  (orig 0x986600, tailcall)
void main_f_986600() { main::sub_ce0(); }

// sub_986660  (orig 0x986660, tailcall)
void main_f_986660() { main::sub_ce0(); }

// sub_9866b0  (orig 0x9866b0, tailcall)
void main_f_9866b0() { main::sub_ce0(); }

// sub_986730  (orig 0x986730, tailcall)
void main_f_986730() { main::sub_ce0(); }

// sub_9867b0  (orig 0x9867b0, tailcall)
void main_f_9867b0() { main::sub_ce0(); }

// sub_986830  (orig 0x986830, tailcall)
void main_f_986830() { main::sub_ce0(); }

// sub_9868c0  (orig 0x9868c0, tailcall)
void main_f_9868c0() { main::sub_ce0(); }

// sub_986940  (orig 0x986940, tailcall)
void main_f_986940() { main::sub_ce0(); }

// sub_9869c0  (orig 0x9869c0, tailcall)
void main_f_9869c0() { main::sub_ce0(); }

// sub_986a40  (orig 0x986a40, tailcall)
void main_f_986a40() { main::sub_ce0(); }

// sub_987130  (orig 0x987130, tailcall)
void main_f_987130() { main::sub_ce0(); }

// sub_9871b0  (orig 0x9871b0, tailcall)
void main_f_9871b0() { main::sub_ce0(); }

// sub_987470  (orig 0x987470, tailcall)
void main_f_987470() { main::sub_ce0(); }

// sub_9874f0  (orig 0x9874f0, tailcall)
void main_f_9874f0() { main::sub_ce0(); }

// sub_987640  (orig 0x987640, tailcall)
void main_f_987640() { main::sub_ce0(); }

// sub_9876c0  (orig 0x9876c0, tailcall)
void main_f_9876c0() { main::sub_ce0(); }

// sub_987800  (orig 0x987800, tailcall)
void main_f_987800() { main::sub_ce0(); }

// sub_987880  (orig 0x987880, tailcall)
void main_f_987880() { main::sub_ce0(); }

// sub_987970  (orig 0x987970, tailcall)
void main_f_987970() { main::sub_ce0(); }

// sub_9879f0  (orig 0x9879f0, tailcall)
void main_f_9879f0() { main::sub_ce0(); }

// sub_987a80  (orig 0x987a80, tailcall)
void main_f_987a80() { main::sub_ce0(); }

// sub_987b00  (orig 0x987b00, tailcall)
void main_f_987b00() { main::sub_ce0(); }

// sub_987b90  (orig 0x987b90, tailcall)
void main_f_987b90() { main::sub_ce0(); }

// sub_987c10  (orig 0x987c10, tailcall)
void main_f_987c10() { main::sub_ce0(); }

// sub_987ed0  (orig 0x987ed0, tailcall)
void main_f_987ed0() { main::sub_ce0(); }

// sub_989550  (orig 0x989550, tailcall)
void main_f_989550() { main::sub_9892f0(); }

// sub_989560  (orig 0x989560, tailcall)
void main_f_989560() { main::sub_9895d0(); }

// sub_989570  (orig 0x989570, tailcall)
uint64_t main_f_989570(void* a0) {
    return main::sub_9892f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_989580  (orig 0x989580, tailcall)
uint64_t main_f_989580(void* a0) {
    return main::sub_9892f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_989590  (orig 0x989590, tailcall)
void main_f_989590() { main::sub_9895d0(); }

// sub_9895a0  (orig 0x9895a0, tailcall)
void main_f_9895a0() { main::sub_9895d0(); }

// sub_9895b0  (orig 0x9895b0, tailcall)
uint64_t main_f_9895b0(void* a0) {
    return main::sub_9892f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9895c0  (orig 0x9895c0, tailcall)
uint64_t main_f_9895c0(void* a0) {
    return main::sub_9892f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_98dc60  (orig 0x98dc60, tailcall)
void main_f_98dc60() { main::sub_98db40(); }

// sub_98dc70  (orig 0x98dc70, tailcall)
void main_f_98dc70() { main::sub_98dd50(); }

// sub_98dcf0  (orig 0x98dcf0, tailcall)
uint64_t main_f_98dcf0(void* a0) {
    return main::sub_98db40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_98dd00  (orig 0x98dd00, tailcall)
uint64_t main_f_98dd00(void* a0) {
    return main::sub_98db40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_98dd10  (orig 0x98dd10, tailcall)
void main_f_98dd10() { main::sub_98dd50(); }

// sub_98dd20  (orig 0x98dd20, tailcall)
void main_f_98dd20() { main::sub_98dd50(); }

// sub_98dd30  (orig 0x98dd30, tailcall)
uint64_t main_f_98dd30(void* a0) {
    return main::sub_98db40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_98dd40  (orig 0x98dd40, tailcall)
uint64_t main_f_98dd40(void* a0) {
    return main::sub_98db40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_98de80  (orig 0x98de80, tailcall)
void main_f_98de80() { main::sub_ce0(); }

// sub_98df00  (orig 0x98df00, tailcall)
void main_f_98df00() { main::sub_ce0(); }

// sub_98dfd0  (orig 0x98dfd0, tailcall)
void main_f_98dfd0() { main::sub_ce0(); }

// sub_98e050  (orig 0x98e050, tailcall)
void main_f_98e050() { main::sub_ce0(); }

// sub_98e0d0  (orig 0x98e0d0, tailcall)
void main_f_98e0d0() { main::sub_ce0(); }

// sub_98e150  (orig 0x98e150, tailcall)
void main_f_98e150() { main::sub_ce0(); }

// sub_98e9a0  (orig 0x98e9a0, tailcall)
void main_f_98e9a0() { main::sub_98ed90(); }

// sub_98eb90  (orig 0x98eb90, tailcall)
void main_f_98eb90() { main::sub_98ed90(); }

// sub_98eba0  (orig 0x98eba0, tailcall)
void main_f_98eba0() { main::sub_98ed90(); }

// sub_999ad0  (orig 0x999ad0, tailcall)
uint64_t main_f_999ad0(void* a0) {
    return main::sub_999800(((uintptr_t)((char*)(a0) - 72)));
}

// sub_999ae0  (orig 0x999ae0, tailcall)
uint64_t main_f_999ae0(void* a0) {
    return main::sub_999800(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9a4010  (orig 0x9a4010, tailcall)
void main_f_9a4010() { main::sub_9a3e70(); }

// sub_9a4020  (orig 0x9a4020, tailcall)
uint64_t main_f_9a4020(void* a0) {
    return main::sub_9a3e70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_9a4030  (orig 0x9a4030, tailcall)
uint64_t main_f_9a4030(void* a0) {
    return main::sub_9a3e70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_9a4040  (orig 0x9a4040, tailcall)
uint64_t main_f_9a4040(void* a0) {
    return main::sub_9a3e70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9a4050  (orig 0x9a4050, tailcall)
uint64_t main_f_9a4050(void* a0) {
    return main::sub_9a3e70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9a41e0  (orig 0x9a41e0, tailcall)
void main_f_9a41e0() { main::sub_9a4060(); }

// sub_9a41f0  (orig 0x9a41f0, tailcall)
uint64_t main_f_9a41f0(void* a0) {
    return main::sub_9a4060(((uintptr_t)((char*)(a0) - 72)));
}

// sub_9a4200  (orig 0x9a4200, tailcall)
uint64_t main_f_9a4200(void* a0) {
    return main::sub_9a4060(((uintptr_t)((char*)(a0) - 72)));
}

// sub_9a4210  (orig 0x9a4210, tailcall)
uint64_t main_f_9a4210(void* a0) {
    return main::sub_9a4060(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9a4220  (orig 0x9a4220, tailcall)
uint64_t main_f_9a4220(void* a0) {
    return main::sub_9a4060(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9a8a10  (orig 0x9a8a10, tailcall)
void main_f_9a8a10() { main::sub_9a78d0(); }

// sub_9ac600  (orig 0x9ac600, tailcall)
uint64_t main_f_9ac600(void* a0) {
    return main::sub_9a76e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_9ac610  (orig 0x9ac610, tailcall)
uint64_t main_f_9ac610(void* a0) {
    return main::sub_9a76e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))));
}

// sub_9accc0  (orig 0x9accc0, tailcall)
void main_f_9accc0() { main::sub_9acb70(); }

// sub_9acf60  (orig 0x9acf60, tailcall)
uint64_t main_f_9acf60(void* a0) {
    return main::sub_9acb70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_9acf70  (orig 0x9acf70, tailcall)
uint64_t main_f_9acf70(void* a0) {
    return main::sub_9acb70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_9ad0e0  (orig 0x9ad0e0, tailcall)
uint64_t main_f_9ad0e0(void* a0) {
    return main::sub_9acb70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9ad0f0  (orig 0x9ad0f0, tailcall)
uint64_t main_f_9ad0f0(void* a0) {
    return main::sub_9acb70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9afd60  (orig 0x9afd60, tailcall)
void main_f_9afd60() { main::sub_9b0150(); }

// sub_9aff50  (orig 0x9aff50, tailcall)
void main_f_9aff50() { main::sub_9b0150(); }

// sub_9aff60  (orig 0x9aff60, tailcall)
void main_f_9aff60() { main::sub_9b0150(); }

// sub_9b0280  (orig 0x9b0280, tailcall)
void main_f_9b0280() { main::sub_ce0(); }

// sub_9b0300  (orig 0x9b0300, tailcall)
void main_f_9b0300() { main::sub_ce0(); }

// sub_9b05e0  (orig 0x9b05e0, tailcall)
uint64_t main_f_9b05e0(void* a0) {
    return main::sub_9b03a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_9b05f0  (orig 0x9b05f0, tailcall)
uint64_t main_f_9b05f0(void* a0) {
    return main::sub_9b03a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9b0600  (orig 0x9b0600, tailcall)
void main_f_9b0600() { main::sub_9b03a0(); }

// sub_9b0610  (orig 0x9b0610, tailcall)
uint64_t main_f_9b0610(void* a0) {
    return main::sub_9b03a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_9b0620  (orig 0x9b0620, tailcall)
uint64_t main_f_9b0620(void* a0) {
    return main::sub_9b03a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_9b0630  (orig 0x9b0630, tailcall)
void main_f_9b0630() { main::sub_970170(); }

// sub_9b0a80  (orig 0x9b0a80, tailcall)
uint64_t main_f_9b0a80(void* a0) {
    return main::sub_7941a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1192))));
}

// sub_9b0a90  (orig 0x9b0a90, tailcall)
uint64_t main_f_9b0a90(void* a0) {
    return main::sub_793f30(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1192))));
}

// sub_9b0aa0  (orig 0x9b0aa0, tailcall)
uint64_t main_f_9b0aa0(void* a0) {
    return main::sub_793fb0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1192))));
}

// sub_9b0ab0  (orig 0x9b0ab0, tailcall)
void main_f_9b0ab0() { main::sub_9b0ae0(); }

// sub_9b0ac0  (orig 0x9b0ac0, tailcall)
void main_f_9b0ac0() { main::sub_9b0ae0(); }

// sub_9b0ad0  (orig 0x9b0ad0, tailcall)
void main_f_9b0ad0() { main::sub_9b0ae0(); }

// sub_9b31b0  (orig 0x9b31b0, tailcall)
uint64_t main_f_9b31b0(void* a0) {
    return main::Audience_Tension_2(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1544))));
}

// sub_9b35d0  (orig 0x9b35d0, tailcall)
uint64_t main_f_9b35d0(void* a0) {
    return main::sub_98a4b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1480))));
}

// sub_9b35e0  (orig 0x9b35e0, tailcall)
uint64_t main_f_9b35e0(void* a0) {
    return main::sub_98a4e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1480))));
}

// sub_9b35f0  (orig 0x9b35f0, tailcall)
uint64_t main_f_9b35f0(void* a0) {
    return main::sub_98a510(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1480))));
}

// sub_9bc920  (orig 0x9bc920, tailcall)
void main_f_9bc920() { main::sub_ce0(); }

// sub_9be850  (orig 0x9be850, tailcall)
void main_f_9be850() { main::sub_ce0(); }

// sub_a65c20  (orig 0xa65c20, tailcall)
uint64_t main_f_a65c20(void* a0) {
    return main::sub_981350(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_a6c190  (orig 0xa6c190, tailcall)
uint64_t main_f_a6c190(void* a0) {
    return main::sub_954450(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_a6c1d0  (orig 0xa6c1d0, tailcall)
uint64_t main_f_a6c1d0(void* a0) {
    return main::sub_954570(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_a6c210  (orig 0xa6c210, tailcall)
uint64_t main_f_a6c210(void* a0) {
    return main::sub_98c900(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_a6cfa0  (orig 0xa6cfa0, tailcall)
uint64_t main_f_a6cfa0(void* a0) {
    return main::sub_a6cc90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a6cfb0  (orig 0xa6cfb0, tailcall)
void main_f_a6cfb0() { main::sub_a6cc90(); }

// sub_a6cfc0  (orig 0xa6cfc0, tailcall)
uint64_t main_f_a6cfc0(void* a0) {
    return main::sub_a6cc90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a6d6c0  (orig 0xa6d6c0, tailcall)
void main_f_a6d6c0() { battle::battle_common(); }

// sub_a6d6d0  (orig 0xa6d6d0, tailcall)
void main_f_a6d6d0() { main::sub_9484c0(); }

// sub_a6d6e0  (orig 0xa6d6e0, tailcall)
void main_f_a6d6e0() { main::sub_948790(); }

// sub_a6d780  (orig 0xa6d780, tailcall)
void main_f_a6d780() { main::sub_949fb0(); }

// sub_a6e900  (orig 0xa6e900, tailcall)
void main_f_a6e900() { main::sub_a6e930(); }

// sub_a6e910  (orig 0xa6e910, tailcall)
void main_f_a6e910() { main::sub_a6e930(); }

// sub_a6e920  (orig 0xa6e920, tailcall)
void main_f_a6e920() { main::sub_a6e930(); }

// sub_a70140  (orig 0xa70140, tailcall)
void main_f_a70140() { main::sub_a6ffa0(); }

// sub_a70200  (orig 0xa70200, tailcall)
uint64_t main_f_a70200(void* a0) {
    return main::sub_a6ffa0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a70210  (orig 0xa70210, tailcall)
uint64_t main_f_a70210(void* a0) {
    return main::sub_a6ffa0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a70380  (orig 0xa70380, tailcall)
uint64_t main_f_a70380(void* a0) {
    return main::sub_a6ffa0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a70390  (orig 0xa70390, tailcall)
uint64_t main_f_a70390(void* a0) {
    return main::sub_a6ffa0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a70470  (orig 0xa70470, tailcall)
void main_f_a70470() { main::sub_a703a0(); }

// sub_a70480  (orig 0xa70480, tailcall)
void main_f_a70480() { main::sub_a70780(); }

// sub_a70490  (orig 0xa70490, tailcall)
uint64_t main_f_a70490(void* a0) {
    return main::sub_a703a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a704a0  (orig 0xa704a0, tailcall)
uint64_t main_f_a704a0(void* a0) {
    return main::sub_a703a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a704b0  (orig 0xa704b0, tailcall)
void main_f_a704b0() { main::sub_a70780(); }

// sub_a704c0  (orig 0xa704c0, tailcall)
void main_f_a704c0() { main::sub_a70780(); }

// sub_a704d0  (orig 0xa704d0, tailcall)
uint64_t main_f_a704d0(void* a0) {
    return main::sub_a703a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a704e0  (orig 0xa704e0, tailcall)
uint64_t main_f_a704e0(void* a0) {
    return main::sub_a703a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a716f0  (orig 0xa716f0, tailcall)
void main_f_a716f0() { main::sub_e7c4c0(); }

// sub_a71700  (orig 0xa71700, tailcall)
void main_f_a71700() { main::sub_a71770(); }

// sub_a71710  (orig 0xa71710, tailcall)
uint64_t main_f_a71710(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a71720  (orig 0xa71720, tailcall)
uint64_t main_f_a71720(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a71730  (orig 0xa71730, tailcall)
void main_f_a71730() { main::sub_a71770(); }

// sub_a71740  (orig 0xa71740, tailcall)
void main_f_a71740() { main::sub_a71770(); }

// sub_a71750  (orig 0xa71750, tailcall)
uint64_t main_f_a71750(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a71760  (orig 0xa71760, tailcall)
uint64_t main_f_a71760(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a72d90  (orig 0xa72d90, tailcall)
void main_f_a72d90() { main::sub_a73040(); }

// sub_a72ee0  (orig 0xa72ee0, tailcall)
void main_f_a72ee0() { main::sub_a73040(); }

// sub_a72ef0  (orig 0xa72ef0, tailcall)
void main_f_a72ef0() { main::sub_a73040(); }

// sub_a74160  (orig 0xa74160, tailcall)
void main_f_a74160() { main::sub_e7c4c0(); }

// sub_a74170  (orig 0xa74170, tailcall)
void main_f_a74170() { main::sub_a741e0(); }

// sub_a74180  (orig 0xa74180, tailcall)
uint64_t main_f_a74180(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a74190  (orig 0xa74190, tailcall)
uint64_t main_f_a74190(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a741a0  (orig 0xa741a0, tailcall)
void main_f_a741a0() { main::sub_a741e0(); }

// sub_a741b0  (orig 0xa741b0, tailcall)
void main_f_a741b0() { main::sub_a741e0(); }

// sub_a741c0  (orig 0xa741c0, tailcall)
uint64_t main_f_a741c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a741d0  (orig 0xa741d0, tailcall)
uint64_t main_f_a741d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a74bc0  (orig 0xa74bc0, tailcall)
uint64_t main_f_a74bc0(void* a0) {
    return main::sub_a74a40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a74bd0  (orig 0xa74bd0, tailcall)
uint64_t main_f_a74bd0(void* a0) {
    return main::sub_a74a40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a74be0  (orig 0xa74be0, tailcall)
void main_f_a74be0() { main::sub_a74a40(); }

// sub_a74bf0  (orig 0xa74bf0, tailcall)
uint64_t main_f_a74bf0(void* a0) {
    return main::sub_a74a40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a74c00  (orig 0xa74c00, tailcall)
uint64_t main_f_a74c00(void* a0) {
    return main::sub_a74a40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a75fb0  (orig 0xa75fb0, tailcall)
void main_f_a75fb0() { main::sub_a76020(); }

// sub_a75fc0  (orig 0xa75fc0, tailcall)
void main_f_a75fc0() { main::sub_a76020(); }

// sub_a75fd0  (orig 0xa75fd0, tailcall)
void main_f_a75fd0() { main::sub_a76020(); }

// sub_a79e30  (orig 0xa79e30, tailcall)
void main_f_a79e30() { main::sub_a79cd0(); }

// sub_a79ef0  (orig 0xa79ef0, tailcall)
uint64_t main_f_a79ef0(void* a0) {
    return main::sub_a79cd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a79f00  (orig 0xa79f00, tailcall)
uint64_t main_f_a79f00(void* a0) {
    return main::sub_a79cd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7a070  (orig 0xa7a070, tailcall)
uint64_t main_f_a7a070(void* a0) {
    return main::sub_a79cd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a7a080  (orig 0xa7a080, tailcall)
uint64_t main_f_a7a080(void* a0) {
    return main::sub_a79cd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a7a170  (orig 0xa7a170, tailcall)
void main_f_a7a170() { main::sub_a7a700(); }

// sub_a7a260  (orig 0xa7a260, tailcall)
void main_f_a7a260() { main::sub_a7a700(); }

// sub_a7a270  (orig 0xa7a270, tailcall)
void main_f_a7a270() { main::sub_a7a700(); }

// sub_a7a5b0  (orig 0xa7a5b0, tailcall)
void main_f_a7a5b0() { main::sub_a7a4b0(); }

// sub_a7a5c0  (orig 0xa7a5c0, tailcall)
uint64_t main_f_a7a5c0(void* a0) {
    return main::sub_a7a4b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7a5d0  (orig 0xa7a5d0, tailcall)
uint64_t main_f_a7a5d0(void* a0) {
    return main::sub_a7a4b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7a950  (orig 0xa7a950, tailcall)
void main_f_a7a950() { main::sub_14b8960(); }

// sub_a7a960  (orig 0xa7a960, tailcall)
void main_f_a7a960() { main::sub_14b8960(); }

// sub_a7a970  (orig 0xa7a970, tailcall)
uint64_t main_f_a7a970(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 872)));
}

// sub_a7a980  (orig 0xa7a980, tailcall)
uint64_t main_f_a7a980(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 872)));
}

// sub_a7a990  (orig 0xa7a990, tailcall)
uint64_t main_f_a7a990(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 944)));
}

// sub_a7a9a0  (orig 0xa7a9a0, tailcall)
uint64_t main_f_a7a9a0(void* a0) {
    return main::sub_14b8960(((uintptr_t)((char*)(a0) - 944)));
}

// sub_a7e590  (orig 0xa7e590, tailcall)
void main_f_a7e590() { main::sub_e7c4c0(); }

// sub_a7e5a0  (orig 0xa7e5a0, tailcall)
void main_f_a7e5a0() { main::sub_a7e610(); }

// sub_a7e5b0  (orig 0xa7e5b0, tailcall)
uint64_t main_f_a7e5b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7e5c0  (orig 0xa7e5c0, tailcall)
uint64_t main_f_a7e5c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7e5d0  (orig 0xa7e5d0, tailcall)
void main_f_a7e5d0() { main::sub_a7e610(); }

// sub_a7e5e0  (orig 0xa7e5e0, tailcall)
void main_f_a7e5e0() { main::sub_a7e610(); }

// sub_a7e5f0  (orig 0xa7e5f0, tailcall)
uint64_t main_f_a7e5f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a7e600  (orig 0xa7e600, tailcall)
uint64_t main_f_a7e600(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a7eb70  (orig 0xa7eb70, tailcall)
void main_f_a7eb70() { main::sub_e7c4c0(); }

// sub_a7eb80  (orig 0xa7eb80, tailcall)
void main_f_a7eb80() { main::sub_a7ebf0(); }

// sub_a7eb90  (orig 0xa7eb90, tailcall)
uint64_t main_f_a7eb90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7eba0  (orig 0xa7eba0, tailcall)
uint64_t main_f_a7eba0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7ebb0  (orig 0xa7ebb0, tailcall)
void main_f_a7ebb0() { main::sub_a7ebf0(); }

// sub_a7ebc0  (orig 0xa7ebc0, tailcall)
void main_f_a7ebc0() { main::sub_a7ebf0(); }

// sub_a7ebd0  (orig 0xa7ebd0, tailcall)
uint64_t main_f_a7ebd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a7ebe0  (orig 0xa7ebe0, tailcall)
uint64_t main_f_a7ebe0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a7efb0  (orig 0xa7efb0, tailcall)
void main_f_a7efb0() { main::sub_e7c4c0(); }

// sub_a7efc0  (orig 0xa7efc0, tailcall)
void main_f_a7efc0() { main::sub_a7f030(); }

// sub_a7efd0  (orig 0xa7efd0, tailcall)
uint64_t main_f_a7efd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7efe0  (orig 0xa7efe0, tailcall)
uint64_t main_f_a7efe0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7eff0  (orig 0xa7eff0, tailcall)
void main_f_a7eff0() { main::sub_a7f030(); }

// sub_a7f000  (orig 0xa7f000, tailcall)
void main_f_a7f000() { main::sub_a7f030(); }

// sub_a7f010  (orig 0xa7f010, tailcall)
uint64_t main_f_a7f010(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a7f020  (orig 0xa7f020, tailcall)
uint64_t main_f_a7f020(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a7f750  (orig 0xa7f750, tailcall)
void main_f_a7f750() { main::sub_e7c4c0(); }

// sub_a7f760  (orig 0xa7f760, tailcall)
void main_f_a7f760() { main::sub_a7f7d0(); }

// sub_a7f770  (orig 0xa7f770, tailcall)
uint64_t main_f_a7f770(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7f780  (orig 0xa7f780, tailcall)
uint64_t main_f_a7f780(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7f790  (orig 0xa7f790, tailcall)
void main_f_a7f790() { main::sub_a7f7d0(); }

// sub_a7f7a0  (orig 0xa7f7a0, tailcall)
void main_f_a7f7a0() { main::sub_a7f7d0(); }

// sub_a7f7b0  (orig 0xa7f7b0, tailcall)
uint64_t main_f_a7f7b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a7f7c0  (orig 0xa7f7c0, tailcall)
uint64_t main_f_a7f7c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a7ff40  (orig 0xa7ff40, tailcall)
void main_f_a7ff40() { main::sub_e7c4c0(); }

// sub_a7ff50  (orig 0xa7ff50, tailcall)
void main_f_a7ff50() { main::sub_a7ffc0(); }

// sub_a7ff60  (orig 0xa7ff60, tailcall)
uint64_t main_f_a7ff60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7ff70  (orig 0xa7ff70, tailcall)
uint64_t main_f_a7ff70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a7ff80  (orig 0xa7ff80, tailcall)
void main_f_a7ff80() { main::sub_a7ffc0(); }

// sub_a7ff90  (orig 0xa7ff90, tailcall)
void main_f_a7ff90() { main::sub_a7ffc0(); }

// sub_a7ffa0  (orig 0xa7ffa0, tailcall)
uint64_t main_f_a7ffa0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a7ffb0  (orig 0xa7ffb0, tailcall)
uint64_t main_f_a7ffb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a80ea0  (orig 0xa80ea0, tailcall)
void main_f_a80ea0() { main::sub_e7c4c0(); }

// sub_a80eb0  (orig 0xa80eb0, tailcall)
void main_f_a80eb0() { main::sub_a80f20(); }

// sub_a80ec0  (orig 0xa80ec0, tailcall)
uint64_t main_f_a80ec0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a80ed0  (orig 0xa80ed0, tailcall)
uint64_t main_f_a80ed0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a80ee0  (orig 0xa80ee0, tailcall)
void main_f_a80ee0() { main::sub_a80f20(); }

// sub_a80ef0  (orig 0xa80ef0, tailcall)
void main_f_a80ef0() { main::sub_a80f20(); }

// sub_a80f00  (orig 0xa80f00, tailcall)
uint64_t main_f_a80f00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a80f10  (orig 0xa80f10, tailcall)
uint64_t main_f_a80f10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a81540  (orig 0xa81540, tailcall)
void main_f_a81540() { main::sub_e7c4c0(); }

// sub_a81550  (orig 0xa81550, tailcall)
void main_f_a81550() { main::sub_a815c0(); }

// sub_a81560  (orig 0xa81560, tailcall)
uint64_t main_f_a81560(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a81570  (orig 0xa81570, tailcall)
uint64_t main_f_a81570(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a81580  (orig 0xa81580, tailcall)
void main_f_a81580() { main::sub_a815c0(); }

// sub_a81590  (orig 0xa81590, tailcall)
void main_f_a81590() { main::sub_a815c0(); }

// sub_a815a0  (orig 0xa815a0, tailcall)
uint64_t main_f_a815a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a815b0  (orig 0xa815b0, tailcall)
uint64_t main_f_a815b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a81c30  (orig 0xa81c30, tailcall)
void main_f_a81c30() { main::sub_e7c4c0(); }

// sub_a81c40  (orig 0xa81c40, tailcall)
void main_f_a81c40() { main::sub_a81cb0(); }

// sub_a81c50  (orig 0xa81c50, tailcall)
uint64_t main_f_a81c50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a81c60  (orig 0xa81c60, tailcall)
uint64_t main_f_a81c60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a81c70  (orig 0xa81c70, tailcall)
void main_f_a81c70() { main::sub_a81cb0(); }

// sub_a81c80  (orig 0xa81c80, tailcall)
void main_f_a81c80() { main::sub_a81cb0(); }

// sub_a81c90  (orig 0xa81c90, tailcall)
uint64_t main_f_a81c90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a81ca0  (orig 0xa81ca0, tailcall)
uint64_t main_f_a81ca0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a82320  (orig 0xa82320, tailcall)
void main_f_a82320() { main::sub_e7c4c0(); }

// sub_a82330  (orig 0xa82330, tailcall)
void main_f_a82330() { main::sub_a823a0(); }

// sub_a82340  (orig 0xa82340, tailcall)
uint64_t main_f_a82340(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a82350  (orig 0xa82350, tailcall)
uint64_t main_f_a82350(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a82360  (orig 0xa82360, tailcall)
void main_f_a82360() { main::sub_a823a0(); }

// sub_a82370  (orig 0xa82370, tailcall)
void main_f_a82370() { main::sub_a823a0(); }

// sub_a82380  (orig 0xa82380, tailcall)
uint64_t main_f_a82380(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a82390  (orig 0xa82390, tailcall)
uint64_t main_f_a82390(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a82750  (orig 0xa82750, tailcall)
void main_f_a82750() { main::sub_e7c4c0(); }

// sub_a82760  (orig 0xa82760, tailcall)
void main_f_a82760() { main::sub_a827d0(); }

// sub_a82770  (orig 0xa82770, tailcall)
uint64_t main_f_a82770(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a82780  (orig 0xa82780, tailcall)
uint64_t main_f_a82780(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a82790  (orig 0xa82790, tailcall)
void main_f_a82790() { main::sub_a827d0(); }

// sub_a827a0  (orig 0xa827a0, tailcall)
void main_f_a827a0() { main::sub_a827d0(); }

// sub_a827b0  (orig 0xa827b0, tailcall)
uint64_t main_f_a827b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a827c0  (orig 0xa827c0, tailcall)
uint64_t main_f_a827c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a82c20  (orig 0xa82c20, tailcall)
void main_f_a82c20() { main::sub_e7c4c0(); }

// sub_a82c30  (orig 0xa82c30, tailcall)
void main_f_a82c30() { main::sub_a82ca0(); }

// sub_a82c40  (orig 0xa82c40, tailcall)
uint64_t main_f_a82c40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a82c50  (orig 0xa82c50, tailcall)
uint64_t main_f_a82c50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a82c60  (orig 0xa82c60, tailcall)
void main_f_a82c60() { main::sub_a82ca0(); }

// sub_a82c70  (orig 0xa82c70, tailcall)
void main_f_a82c70() { main::sub_a82ca0(); }

// sub_a82c80  (orig 0xa82c80, tailcall)
uint64_t main_f_a82c80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a82c90  (orig 0xa82c90, tailcall)
uint64_t main_f_a82c90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a83100  (orig 0xa83100, tailcall)
void main_f_a83100() { main::sub_e7c4c0(); }

// sub_a83110  (orig 0xa83110, tailcall)
void main_f_a83110() { main::sub_a83180(); }

// sub_a83120  (orig 0xa83120, tailcall)
uint64_t main_f_a83120(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a83130  (orig 0xa83130, tailcall)
uint64_t main_f_a83130(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a83140  (orig 0xa83140, tailcall)
void main_f_a83140() { main::sub_a83180(); }

// sub_a83150  (orig 0xa83150, tailcall)
void main_f_a83150() { main::sub_a83180(); }

// sub_a83160  (orig 0xa83160, tailcall)
uint64_t main_f_a83160(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a83170  (orig 0xa83170, tailcall)
uint64_t main_f_a83170(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a849f0  (orig 0xa849f0, tailcall)
void main_f_a849f0() { main::sub_e7c4c0(); }

// sub_a84a00  (orig 0xa84a00, tailcall)
void main_f_a84a00() { main::sub_a84a70(); }

// sub_a84a10  (orig 0xa84a10, tailcall)
uint64_t main_f_a84a10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a84a20  (orig 0xa84a20, tailcall)
uint64_t main_f_a84a20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a84a30  (orig 0xa84a30, tailcall)
void main_f_a84a30() { main::sub_a84a70(); }

// sub_a84a40  (orig 0xa84a40, tailcall)
void main_f_a84a40() { main::sub_a84a70(); }

// sub_a84a50  (orig 0xa84a50, tailcall)
uint64_t main_f_a84a50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a84a60  (orig 0xa84a60, tailcall)
uint64_t main_f_a84a60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a850b0  (orig 0xa850b0, tailcall)
void main_f_a850b0() { main::sub_e7c4c0(); }

// sub_a850c0  (orig 0xa850c0, tailcall)
void main_f_a850c0() { main::sub_a85130(); }

// sub_a850d0  (orig 0xa850d0, tailcall)
uint64_t main_f_a850d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a850e0  (orig 0xa850e0, tailcall)
uint64_t main_f_a850e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a850f0  (orig 0xa850f0, tailcall)
void main_f_a850f0() { main::sub_a85130(); }

// sub_a85100  (orig 0xa85100, tailcall)
void main_f_a85100() { main::sub_a85130(); }

// sub_a85110  (orig 0xa85110, tailcall)
uint64_t main_f_a85110(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a85120  (orig 0xa85120, tailcall)
uint64_t main_f_a85120(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a86460  (orig 0xa86460, tailcall)
void main_f_a86460() { main::sub_e7c4c0(); }

// sub_a86470  (orig 0xa86470, tailcall)
void main_f_a86470() { main::sub_a864e0(); }

// sub_a86480  (orig 0xa86480, tailcall)
uint64_t main_f_a86480(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a86490  (orig 0xa86490, tailcall)
uint64_t main_f_a86490(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a864a0  (orig 0xa864a0, tailcall)
void main_f_a864a0() { main::sub_a864e0(); }

// sub_a864b0  (orig 0xa864b0, tailcall)
void main_f_a864b0() { main::sub_a864e0(); }

// sub_a864c0  (orig 0xa864c0, tailcall)
uint64_t main_f_a864c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a864d0  (orig 0xa864d0, tailcall)
uint64_t main_f_a864d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a871d0  (orig 0xa871d0, tailcall)
void main_f_a871d0() { main::sub_a873c0(); }

// sub_a872c0  (orig 0xa872c0, tailcall)
void main_f_a872c0() { main::sub_a873c0(); }

// sub_a872d0  (orig 0xa872d0, tailcall)
void main_f_a872d0() { main::sub_a873c0(); }

// sub_a87770  (orig 0xa87770, tailcall)
void main_f_a87770() { main::sub_e7c4c0(); }

// sub_a87780  (orig 0xa87780, tailcall)
void main_f_a87780() { main::sub_a877f0(); }

// sub_a87790  (orig 0xa87790, tailcall)
uint64_t main_f_a87790(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a877a0  (orig 0xa877a0, tailcall)
uint64_t main_f_a877a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a877b0  (orig 0xa877b0, tailcall)
void main_f_a877b0() { main::sub_a877f0(); }

// sub_a877c0  (orig 0xa877c0, tailcall)
void main_f_a877c0() { main::sub_a877f0(); }

// sub_a877d0  (orig 0xa877d0, tailcall)
uint64_t main_f_a877d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a877e0  (orig 0xa877e0, tailcall)
uint64_t main_f_a877e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a87c70  (orig 0xa87c70, tailcall)
void main_f_a87c70() { main::sub_e7c4c0(); }

// sub_a87c80  (orig 0xa87c80, tailcall)
void main_f_a87c80() { main::sub_a87cf0(); }

// sub_a87c90  (orig 0xa87c90, tailcall)
uint64_t main_f_a87c90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a87ca0  (orig 0xa87ca0, tailcall)
uint64_t main_f_a87ca0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a87cb0  (orig 0xa87cb0, tailcall)
void main_f_a87cb0() { main::sub_a87cf0(); }

// sub_a87cc0  (orig 0xa87cc0, tailcall)
void main_f_a87cc0() { main::sub_a87cf0(); }

// sub_a87cd0  (orig 0xa87cd0, tailcall)
uint64_t main_f_a87cd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a87ce0  (orig 0xa87ce0, tailcall)
uint64_t main_f_a87ce0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a88180  (orig 0xa88180, tailcall)
void main_f_a88180() { main::sub_e7c4c0(); }

// sub_a88190  (orig 0xa88190, tailcall)
void main_f_a88190() { main::sub_a88200(); }

// sub_a881a0  (orig 0xa881a0, tailcall)
uint64_t main_f_a881a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a881b0  (orig 0xa881b0, tailcall)
uint64_t main_f_a881b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a881c0  (orig 0xa881c0, tailcall)
void main_f_a881c0() { main::sub_a88200(); }

// sub_a881d0  (orig 0xa881d0, tailcall)
void main_f_a881d0() { main::sub_a88200(); }

// sub_a881e0  (orig 0xa881e0, tailcall)
uint64_t main_f_a881e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a881f0  (orig 0xa881f0, tailcall)
uint64_t main_f_a881f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a88690  (orig 0xa88690, tailcall)
void main_f_a88690() { main::sub_e7c4c0(); }

// sub_a886a0  (orig 0xa886a0, tailcall)
void main_f_a886a0() { main::sub_a88710(); }

// sub_a886b0  (orig 0xa886b0, tailcall)
uint64_t main_f_a886b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a886c0  (orig 0xa886c0, tailcall)
uint64_t main_f_a886c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a886d0  (orig 0xa886d0, tailcall)
void main_f_a886d0() { main::sub_a88710(); }

// sub_a886e0  (orig 0xa886e0, tailcall)
void main_f_a886e0() { main::sub_a88710(); }

// sub_a886f0  (orig 0xa886f0, tailcall)
uint64_t main_f_a886f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a88700  (orig 0xa88700, tailcall)
uint64_t main_f_a88700(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a88dd0  (orig 0xa88dd0, tailcall)
void main_f_a88dd0() { main::sub_e7c4c0(); }

// sub_a88de0  (orig 0xa88de0, tailcall)
void main_f_a88de0() { main::sub_a88e50(); }

// sub_a88df0  (orig 0xa88df0, tailcall)
uint64_t main_f_a88df0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a88e00  (orig 0xa88e00, tailcall)
uint64_t main_f_a88e00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a88e10  (orig 0xa88e10, tailcall)
void main_f_a88e10() { main::sub_a88e50(); }

// sub_a88e20  (orig 0xa88e20, tailcall)
void main_f_a88e20() { main::sub_a88e50(); }

// sub_a88e30  (orig 0xa88e30, tailcall)
uint64_t main_f_a88e30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a88e40  (orig 0xa88e40, tailcall)
uint64_t main_f_a88e40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a89300  (orig 0xa89300, tailcall)
void main_f_a89300() { main::sub_e7c4c0(); }

// sub_a89310  (orig 0xa89310, tailcall)
void main_f_a89310() { main::sub_a89380(); }

// sub_a89320  (orig 0xa89320, tailcall)
uint64_t main_f_a89320(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a89330  (orig 0xa89330, tailcall)
uint64_t main_f_a89330(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a89340  (orig 0xa89340, tailcall)
void main_f_a89340() { main::sub_a89380(); }

// sub_a89350  (orig 0xa89350, tailcall)
void main_f_a89350() { main::sub_a89380(); }

// sub_a89360  (orig 0xa89360, tailcall)
uint64_t main_f_a89360(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a89370  (orig 0xa89370, tailcall)
uint64_t main_f_a89370(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a89840  (orig 0xa89840, tailcall)
void main_f_a89840() { main::sub_e7c4c0(); }

// sub_a89850  (orig 0xa89850, tailcall)
void main_f_a89850() { main::sub_a898c0(); }

// sub_a89860  (orig 0xa89860, tailcall)
uint64_t main_f_a89860(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a89870  (orig 0xa89870, tailcall)
uint64_t main_f_a89870(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a89880  (orig 0xa89880, tailcall)
void main_f_a89880() { main::sub_a898c0(); }

// sub_a89890  (orig 0xa89890, tailcall)
void main_f_a89890() { main::sub_a898c0(); }

// sub_a898a0  (orig 0xa898a0, tailcall)
uint64_t main_f_a898a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a898b0  (orig 0xa898b0, tailcall)
uint64_t main_f_a898b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a89c80  (orig 0xa89c80, tailcall)
void main_f_a89c80() { main::sub_e7c4c0(); }

// sub_a89c90  (orig 0xa89c90, tailcall)
void main_f_a89c90() { main::sub_a89d00(); }

// sub_a89ca0  (orig 0xa89ca0, tailcall)
uint64_t main_f_a89ca0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a89cb0  (orig 0xa89cb0, tailcall)
uint64_t main_f_a89cb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a89cc0  (orig 0xa89cc0, tailcall)
void main_f_a89cc0() { main::sub_a89d00(); }

// sub_a89cd0  (orig 0xa89cd0, tailcall)
void main_f_a89cd0() { main::sub_a89d00(); }

// sub_a89ce0  (orig 0xa89ce0, tailcall)
uint64_t main_f_a89ce0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a89cf0  (orig 0xa89cf0, tailcall)
uint64_t main_f_a89cf0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a8a250  (orig 0xa8a250, tailcall)
void main_f_a8a250() { main::sub_e7c4c0(); }

// sub_a8a260  (orig 0xa8a260, tailcall)
void main_f_a8a260() { main::sub_a8a2d0(); }

// sub_a8a270  (orig 0xa8a270, tailcall)
uint64_t main_f_a8a270(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a8a280  (orig 0xa8a280, tailcall)
uint64_t main_f_a8a280(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a8a290  (orig 0xa8a290, tailcall)
void main_f_a8a290() { main::sub_a8a2d0(); }

// sub_a8a2a0  (orig 0xa8a2a0, tailcall)
void main_f_a8a2a0() { main::sub_a8a2d0(); }

// sub_a8a2b0  (orig 0xa8a2b0, tailcall)
uint64_t main_f_a8a2b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a8a2c0  (orig 0xa8a2c0, tailcall)
uint64_t main_f_a8a2c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a8a980  (orig 0xa8a980, tailcall)
void main_f_a8a980() { main::sub_e7c4c0(); }

// sub_a8a990  (orig 0xa8a990, tailcall)
void main_f_a8a990() { main::sub_a8aa00(); }

// sub_a8a9a0  (orig 0xa8a9a0, tailcall)
uint64_t main_f_a8a9a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a8a9b0  (orig 0xa8a9b0, tailcall)
uint64_t main_f_a8a9b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a8a9c0  (orig 0xa8a9c0, tailcall)
void main_f_a8a9c0() { main::sub_a8aa00(); }

// sub_a8a9d0  (orig 0xa8a9d0, tailcall)
void main_f_a8a9d0() { main::sub_a8aa00(); }

// sub_a8a9e0  (orig 0xa8a9e0, tailcall)
uint64_t main_f_a8a9e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a8a9f0  (orig 0xa8a9f0, tailcall)
uint64_t main_f_a8a9f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a8adc0  (orig 0xa8adc0, tailcall)
void main_f_a8adc0() { main::sub_e7c4c0(); }

// sub_a8add0  (orig 0xa8add0, tailcall)
void main_f_a8add0() { main::sub_a8ae40(); }

// sub_a8ade0  (orig 0xa8ade0, tailcall)
uint64_t main_f_a8ade0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a8adf0  (orig 0xa8adf0, tailcall)
uint64_t main_f_a8adf0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a8ae00  (orig 0xa8ae00, tailcall)
void main_f_a8ae00() { main::sub_a8ae40(); }

// sub_a8ae10  (orig 0xa8ae10, tailcall)
void main_f_a8ae10() { main::sub_a8ae40(); }

// sub_a8ae20  (orig 0xa8ae20, tailcall)
uint64_t main_f_a8ae20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a8ae30  (orig 0xa8ae30, tailcall)
uint64_t main_f_a8ae30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a8b340  (orig 0xa8b340, tailcall)
void main_f_a8b340() { main::sub_e7c4c0(); }

// sub_a8b350  (orig 0xa8b350, tailcall)
void main_f_a8b350() { main::sub_a8b3c0(); }

// sub_a8b360  (orig 0xa8b360, tailcall)
uint64_t main_f_a8b360(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a8b370  (orig 0xa8b370, tailcall)
uint64_t main_f_a8b370(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a8b380  (orig 0xa8b380, tailcall)
void main_f_a8b380() { main::sub_a8b3c0(); }

// sub_a8b390  (orig 0xa8b390, tailcall)
void main_f_a8b390() { main::sub_a8b3c0(); }

// sub_a8b3a0  (orig 0xa8b3a0, tailcall)
uint64_t main_f_a8b3a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a8b3b0  (orig 0xa8b3b0, tailcall)
uint64_t main_f_a8b3b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a8b910  (orig 0xa8b910, tailcall)
void main_f_a8b910() { main::sub_e7feb0(); }

// sub_a8b920  (orig 0xa8b920, tailcall)
void main_f_a8b920() { main::sub_a8b990(); }

// sub_a8b930  (orig 0xa8b930, tailcall)
uint64_t main_f_a8b930(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a8b940  (orig 0xa8b940, tailcall)
uint64_t main_f_a8b940(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_a8b950  (orig 0xa8b950, tailcall)
void main_f_a8b950() { main::sub_a8b990(); }

// sub_a8b960  (orig 0xa8b960, tailcall)
void main_f_a8b960() { main::sub_a8b990(); }

// sub_a8b970  (orig 0xa8b970, tailcall)
uint64_t main_f_a8b970(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a8b980  (orig 0xa8b980, tailcall)
uint64_t main_f_a8b980(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_a90df0  (orig 0xa90df0, tailcall)
void main_f_a90df0() { main::sub_a91120(); }

// sub_a90f80  (orig 0xa90f80, tailcall)
void main_f_a90f80() { main::sub_a91120(); }

// sub_a90f90  (orig 0xa90f90, tailcall)
void main_f_a90f90() { main::sub_a91120(); }

// sub_aaba80  (orig 0xaaba80, tailcall)
void main_f_aaba80() { main::sub_aab950(); }

// sub_aaba90  (orig 0xaaba90, tailcall)
void main_f_aaba90() { main::sub_a7e740(); }

// sub_aabaa0  (orig 0xaabaa0, tailcall)
uint64_t main_f_aabaa0(void* a0) {
    return main::sub_aab950(((uintptr_t)((char*)(a0) - 72)));
}

// sub_aabab0  (orig 0xaabab0, tailcall)
uint64_t main_f_aabab0(void* a0) {
    return main::sub_aab950(((uintptr_t)((char*)(a0) - 72)));
}

// sub_aabac0  (orig 0xaabac0, tailcall)
void main_f_aabac0() { main::sub_a7e740(); }

// sub_aabad0  (orig 0xaabad0, tailcall)
void main_f_aabad0() { main::sub_a7e740(); }

// sub_aabae0  (orig 0xaabae0, tailcall)
uint64_t main_f_aabae0(void* a0) {
    return main::sub_aab950(((uintptr_t)((char*)(a0) - 80)));
}

// sub_aabaf0  (orig 0xaabaf0, tailcall)
uint64_t main_f_aabaf0(void* a0) {
    return main::sub_aab950(((uintptr_t)((char*)(a0) - 80)));
}

// sub_aac6b0  (orig 0xaac6b0, tailcall)
void main_f_aac6b0() { main::sub_aac6c0(); }

// sub_ab34c0  (orig 0xab34c0, tailcall)
void main_f_ab34c0() { main::sub_ab34d0(); }

// sub_ab4330  (orig 0xab4330, tailcall)
void main_f_ab4330() { main::sub_a8af70(); }

// sub_ab4400  (orig 0xab4400, tailcall)
void main_f_ab4400() { main::sub_a8af70(); }

// sub_ab4410  (orig 0xab4410, tailcall)
void main_f_ab4410() { main::sub_a8af70(); }

// sub_ab4d80  (orig 0xab4d80, tailcall)
uint64_t main_f_ab4d80(void* a0) {
    return main::sub_ab4ad0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ab4d90  (orig 0xab4d90, tailcall)
uint64_t main_f_ab4d90(void* a0) {
    return main::sub_ab4ad0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ab4da0  (orig 0xab4da0, tailcall)
void main_f_ab4da0() { main::sub_ab4ad0(); }

// sub_ab4db0  (orig 0xab4db0, tailcall)
uint64_t main_f_ab4db0(void* a0) {
    return main::sub_ab4ad0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ab4dc0  (orig 0xab4dc0, tailcall)
uint64_t main_f_ab4dc0(void* a0) {
    return main::sub_ab4ad0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ab7530  (orig 0xab7530, tailcall)
void main_f_ab7530() { main::sub_ab7560(); }

// sub_ab7540  (orig 0xab7540, tailcall)
void main_f_ab7540() { main::sub_ab7560(); }

// sub_ab7550  (orig 0xab7550, tailcall)
void main_f_ab7550() { main::sub_ab7560(); }

// sub_ab8310  (orig 0xab8310, tailcall)
void main_f_ab8310() { main::sub_ab81e0(); }

// sub_ab8320  (orig 0xab8320, tailcall)
uint64_t main_f_ab8320(void* a0) {
    return main::sub_ab81e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ab8330  (orig 0xab8330, tailcall)
uint64_t main_f_ab8330(void* a0) {
    return main::sub_ab81e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ab92a0  (orig 0xab92a0, tailcall)
uint64_t main_f_ab92a0(void* a0) {
    return main::sub_ab9140(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ab92b0  (orig 0xab92b0, tailcall)
uint64_t main_f_ab92b0(void* a0) {
    return main::sub_ab9140(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ab95c0  (orig 0xab95c0, tailcall)
uint64_t main_f_ab95c0(void* a0) {
    return main::sub_abdfa0(((uintptr_t)((char*)(a0) + 112)));
}

// sub_abb0b0  (orig 0xabb0b0, tailcall)
uint64_t main_f_abb0b0(uint64_t a0) {
    return main::sub_15afe30(((uintptr_t)((((uint64_t)a0)) + (6432))));
}

// sub_abb0c0  (orig 0xabb0c0, tailcall)
uint64_t main_f_abb0c0(uint64_t a0) {
    return main::sub_15afe30(((uintptr_t)((((uint64_t)a0)) + (6544))));
}

// sub_abb7e0  (orig 0xabb7e0, tailcall)
uint64_t main_f_abb7e0(uint64_t a0) {
    return main::sub_abdc40(((uintptr_t)((((uint64_t)a0)) + (6416))));
}

// sub_abb7f0  (orig 0xabb7f0, tailcall)
uint64_t main_f_abb7f0(uint64_t a0) {
    return main::sub_abdc40(((uintptr_t)((((uint64_t)a0)) + (6536))));
}

// sub_abbbc0  (orig 0xabbbc0, tailcall)
uint64_t main_f_abbbc0(uint64_t a0) {
    return main::sub_abdd60(((uintptr_t)((((uint64_t)a0)) + (6688))));
}

// sub_abcdd0  (orig 0xabcdd0, tailcall)
void main_f_abcdd0() { main::sub_ab8fb0(); }

// sub_abcde0  (orig 0xabcde0, tailcall)
void main_f_abcde0() { main::sub_ab8fb0(); }

// sub_abcdf0  (orig 0xabcdf0, tailcall)
void main_f_abcdf0() { main::sub_ab8fb0(); }

// sub_abd770  (orig 0xabd770, tailcall)
void main_f_abd770() { main::sub_abd640(); }

// sub_abd800  (orig 0xabd800, tailcall)
uint64_t main_f_abd800(void* a0) {
    return main::sub_abd640(((uintptr_t)((char*)(a0) - 72)));
}

// sub_abd810  (orig 0xabd810, tailcall)
uint64_t main_f_abd810(void* a0) {
    return main::sub_abd640(((uintptr_t)((char*)(a0) - 72)));
}

// sub_abd900  (orig 0xabd900, tailcall)
uint64_t main_f_abd900(void* a0) {
    return main::sub_abd640(((uintptr_t)((char*)(a0) - 80)));
}

// sub_abd910  (orig 0xabd910, tailcall)
uint64_t main_f_abd910(void* a0) {
    return main::sub_abd640(((uintptr_t)((char*)(a0) - 80)));
}

// sub_abda50  (orig 0xabda50, tailcall)
void main_f_abda50() { main::sub_abd920(); }

// sub_abdb50  (orig 0xabdb50, tailcall)
uint64_t main_f_abdb50(void* a0) {
    return main::sub_abd920(((uintptr_t)((char*)(a0) - 72)));
}

// sub_abdb60  (orig 0xabdb60, tailcall)
uint64_t main_f_abdb60(void* a0) {
    return main::sub_abd920(((uintptr_t)((char*)(a0) - 72)));
}

// sub_abdb70  (orig 0xabdb70, tailcall)
uint64_t main_f_abdb70(void* a0) {
    return main::sub_abda60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_abdb80  (orig 0xabdb80, tailcall)
uint64_t main_f_abdb80(void* a0) {
    return main::sub_abda60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_abdb90  (orig 0xabdb90, tailcall)
uint64_t main_f_abdb90(void* a0) {
    return main::sub_abd920(((uintptr_t)((char*)(a0) - 80)));
}

// sub_abdba0  (orig 0xabdba0, tailcall)
uint64_t main_f_abdba0(void* a0) {
    return main::sub_abd920(((uintptr_t)((char*)(a0) - 80)));
}

// sub_abdbb0  (orig 0xabdbb0, tailcall)
void main_f_abdbb0() { main::sub_15b6e10(); }

// sub_abdc30  (orig 0xabdc30, tailcall)
void main_f_abdc30() { main::sub_15b6e10(); }

// sub_abf850  (orig 0xabf850, tailcall)
uint64_t main_f_abf850(void* a0) {
    return main::sub_abf760(((uintptr_t)((char*)(a0) - 72)));
}

// sub_abf860  (orig 0xabf860, tailcall)
uint64_t main_f_abf860(void* a0) {
    return main::sub_abf760(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ac1eb0  (orig 0xac1eb0, tailcall)
uint64_t main_f_ac1eb0(void* a0) {
    return main::sub_ac1dc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ac1ec0  (orig 0xac1ec0, tailcall)
uint64_t main_f_ac1ec0(void* a0) {
    return main::sub_ac1dc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ac58f0  (orig 0xac58f0, tailcall)
void main_f_ac58f0() { main::sub_ac56c0(); }

// sub_ac59b0  (orig 0xac59b0, tailcall)
uint64_t main_f_ac59b0(void* a0) {
    return main::sub_ac56c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ac59c0  (orig 0xac59c0, tailcall)
uint64_t main_f_ac59c0(void* a0) {
    return main::sub_ac56c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ac5b30  (orig 0xac5b30, tailcall)
uint64_t main_f_ac5b30(void* a0) {
    return main::sub_ac56c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ac5b40  (orig 0xac5b40, tailcall)
uint64_t main_f_ac5b40(void* a0) {
    return main::sub_ac56c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ac73b0  (orig 0xac73b0, tailcall)
void main_f_ac73b0() { main::sub_ac70e0(); }

// sub_ac7490  (orig 0xac7490, tailcall)
uint64_t main_f_ac7490(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ac74a0  (orig 0xac74a0, tailcall)
uint64_t main_f_ac74a0(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ac7610  (orig 0xac7610, tailcall)
uint64_t main_f_ac7610(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ac7620  (orig 0xac7620, tailcall)
uint64_t main_f_ac7620(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ac7f90  (orig 0xac7f90, tailcall)
void main_f_ac7f90() { main::sub_ac70e0(); }

// sub_ac8050  (orig 0xac8050, tailcall)
uint64_t main_f_ac8050(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ac8060  (orig 0xac8060, tailcall)
uint64_t main_f_ac8060(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ac81d0  (orig 0xac81d0, tailcall)
uint64_t main_f_ac81d0(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ac81e0  (orig 0xac81e0, tailcall)
uint64_t main_f_ac81e0(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ac8a10  (orig 0xac8a10, tailcall)
void main_f_ac8a10() { main::sub_ac70e0(); }

// sub_ac8ad0  (orig 0xac8ad0, tailcall)
uint64_t main_f_ac8ad0(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ac8ae0  (orig 0xac8ae0, tailcall)
uint64_t main_f_ac8ae0(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ac8c50  (orig 0xac8c50, tailcall)
uint64_t main_f_ac8c50(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ac8c60  (orig 0xac8c60, tailcall)
uint64_t main_f_ac8c60(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_acb730  (orig 0xacb730, tailcall)
void main_f_acb730() { main::sub_e7c4c0(); }

// sub_acb740  (orig 0xacb740, tailcall)
void main_f_acb740() { main::sub_acb7b0(); }

// sub_acb750  (orig 0xacb750, tailcall)
uint64_t main_f_acb750(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_acb760  (orig 0xacb760, tailcall)
uint64_t main_f_acb760(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_acb770  (orig 0xacb770, tailcall)
void main_f_acb770() { main::sub_acb7b0(); }

// sub_acb780  (orig 0xacb780, tailcall)
void main_f_acb780() { main::sub_acb7b0(); }

// sub_acb790  (orig 0xacb790, tailcall)
uint64_t main_f_acb790(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_acb7a0  (orig 0xacb7a0, tailcall)
uint64_t main_f_acb7a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad0bb0  (orig 0xad0bb0, tailcall)
void main_f_ad0bb0() { main::sub_ac70e0(); }

// sub_ad0bc0  (orig 0xad0bc0, tailcall)
void main_f_ad0bc0() { main::sub_ac7630(); }

// sub_ad0c00  (orig 0xad0c00, tailcall)
uint64_t main_f_ad0c00(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ad0c10  (orig 0xad0c10, tailcall)
uint64_t main_f_ad0c10(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ad0c20  (orig 0xad0c20, tailcall)
void main_f_ad0c20() { main::sub_ac7630(); }

// sub_ad0c30  (orig 0xad0c30, tailcall)
void main_f_ad0c30() { main::sub_ac7630(); }

// sub_ad0c40  (orig 0xad0c40, tailcall)
uint64_t main_f_ad0c40(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad0c50  (orig 0xad0c50, tailcall)
uint64_t main_f_ad0c50(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad2090  (orig 0xad2090, tailcall)
uint64_t main_f_ad2090(void* a0) {
    return main::sub_ad1f30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ad20a0  (orig 0xad20a0, tailcall)
uint64_t main_f_ad20a0(void* a0) {
    return main::sub_ad1f30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad20b0  (orig 0xad20b0, tailcall)
void main_f_ad20b0() { main::sub_ad1f30(); }

// sub_ad20c0  (orig 0xad20c0, tailcall)
uint64_t main_f_ad20c0(void* a0) {
    return main::sub_ad1f30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ad20d0  (orig 0xad20d0, tailcall)
uint64_t main_f_ad20d0(void* a0) {
    return main::sub_ad1f30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad46b0  (orig 0xad46b0, tailcall)
uint64_t main_f_ad46b0(void* a0) {
    return main::sub_ad45c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ad46c0  (orig 0xad46c0, tailcall)
uint64_t main_f_ad46c0(void* a0) {
    return main::sub_ad45c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad60b0  (orig 0xad60b0, tailcall)
void main_f_ad60b0() { main::sub_ac70e0(); }

// sub_ad6130  (orig 0xad6130, tailcall)
uint64_t main_f_ad6130(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ad6140  (orig 0xad6140, tailcall)
uint64_t main_f_ad6140(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ad6230  (orig 0xad6230, tailcall)
uint64_t main_f_ad6230(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad6240  (orig 0xad6240, tailcall)
uint64_t main_f_ad6240(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad6ee0  (orig 0xad6ee0, tailcall)
void main_f_ad6ee0() { main::sub_ac70e0(); }

// sub_ad6f60  (orig 0xad6f60, tailcall)
uint64_t main_f_ad6f60(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ad6f70  (orig 0xad6f70, tailcall)
uint64_t main_f_ad6f70(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ad7060  (orig 0xad7060, tailcall)
uint64_t main_f_ad7060(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad7070  (orig 0xad7070, tailcall)
uint64_t main_f_ad7070(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad7080  (orig 0xad7080, tailcall)
void main_f_ad7080() { main::sub_ce0(); }

// sub_ad7100  (orig 0xad7100, tailcall)
void main_f_ad7100() { main::sub_ce0(); }

// sub_ad7180  (orig 0xad7180, tailcall)
void main_f_ad7180() { main::sub_ce0(); }

// sub_ad7200  (orig 0xad7200, tailcall)
void main_f_ad7200() { main::sub_ce0(); }

// sub_ad7270  (orig 0xad7270, tailcall)
void main_f_ad7270() { main::sub_ce0(); }

// sub_ad72f0  (orig 0xad72f0, tailcall)
void main_f_ad72f0() { main::sub_ce0(); }

// sub_ad9180  (orig 0xad9180, tailcall)
void main_f_ad9180() { main::sub_ac70e0(); }

// sub_ad9200  (orig 0xad9200, tailcall)
uint64_t main_f_ad9200(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ad9210  (orig 0xad9210, tailcall)
uint64_t main_f_ad9210(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ad9300  (orig 0xad9300, tailcall)
uint64_t main_f_ad9300(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad9310  (orig 0xad9310, tailcall)
uint64_t main_f_ad9310(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ad9330  (orig 0xad9330, tailcall)
void main_f_ad9330() { main::sub_ce0(); }

// sub_ad93b0  (orig 0xad93b0, tailcall)
void main_f_ad93b0() { main::sub_ce0(); }

// sub_ad9770  (orig 0xad9770, tailcall)
void main_f_ad9770() { main::sub_ce0(); }

// sub_ad97f0  (orig 0xad97f0, tailcall)
void main_f_ad97f0() { main::sub_ce0(); }

// sub_ad9860  (orig 0xad9860, tailcall)
void main_f_ad9860() { main::sub_ce0(); }

// sub_ad98e0  (orig 0xad98e0, tailcall)
void main_f_ad98e0() { main::sub_ce0(); }

// sub_ad9950  (orig 0xad9950, tailcall)
void main_f_ad9950() { main::sub_ce0(); }

// sub_ad99d0  (orig 0xad99d0, tailcall)
void main_f_ad99d0() { main::sub_ce0(); }

// sub_ad9a40  (orig 0xad9a40, tailcall)
void main_f_ad9a40() { main::sub_ce0(); }

// sub_ad9ac0  (orig 0xad9ac0, tailcall)
void main_f_ad9ac0() { main::sub_ce0(); }

// sub_ad9b30  (orig 0xad9b30, tailcall)
void main_f_ad9b30() { main::sub_ce0(); }

// sub_ad9bb0  (orig 0xad9bb0, tailcall)
void main_f_ad9bb0() { main::sub_ce0(); }

// sub_ada200  (orig 0xada200, tailcall)
void main_f_ada200() { main::sub_ac70e0(); }

// sub_ada280  (orig 0xada280, tailcall)
uint64_t main_f_ada280(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ada290  (orig 0xada290, tailcall)
uint64_t main_f_ada290(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ada380  (orig 0xada380, tailcall)
uint64_t main_f_ada380(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ada390  (orig 0xada390, tailcall)
uint64_t main_f_ada390(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_adc7d0  (orig 0xadc7d0, tailcall)
void main_f_adc7d0() { main::sub_ac70e0(); }

// sub_adc850  (orig 0xadc850, tailcall)
uint64_t main_f_adc850(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_adc860  (orig 0xadc860, tailcall)
uint64_t main_f_adc860(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_adc950  (orig 0xadc950, tailcall)
uint64_t main_f_adc950(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_adc960  (orig 0xadc960, tailcall)
uint64_t main_f_adc960(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_adca30  (orig 0xadca30, tailcall)
void main_f_adca30() { main::sub_ce0(); }

// sub_adcab0  (orig 0xadcab0, tailcall)
void main_f_adcab0() { main::sub_ce0(); }

// sub_adcb20  (orig 0xadcb20, tailcall)
void main_f_adcb20() { main::sub_ce0(); }

// sub_adcba0  (orig 0xadcba0, tailcall)
void main_f_adcba0() { main::sub_ce0(); }

// sub_add3c0  (orig 0xadd3c0, tailcall)
void main_f_add3c0() { main::sub_add5d0(); }

// sub_add4d0  (orig 0xadd4d0, tailcall)
void main_f_add4d0() { main::sub_add5d0(); }

// sub_add4e0  (orig 0xadd4e0, tailcall)
void main_f_add4e0() { main::sub_add5d0(); }

// sub_ae4140  (orig 0xae4140, tailcall)
void main_f_ae4140() { main::sub_ae3d20(); }

// sub_ae4150  (orig 0xae4150, tailcall)
void main_f_ae4150() { main::sub_ae43b0(); }

// sub_ae4160  (orig 0xae4160, tailcall)
uint64_t main_f_ae4160(void* a0) {
    return main::sub_ae3d20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ae4170  (orig 0xae4170, tailcall)
uint64_t main_f_ae4170(void* a0) {
    return main::sub_ae3d20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ae4180  (orig 0xae4180, tailcall)
void main_f_ae4180() { main::sub_ae43b0(); }

// sub_ae4190  (orig 0xae4190, tailcall)
void main_f_ae4190() { main::sub_ae43b0(); }

// sub_ae41a0  (orig 0xae41a0, tailcall)
uint64_t main_f_ae41a0(void* a0) {
    return main::sub_ae3d20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ae41b0  (orig 0xae41b0, tailcall)
uint64_t main_f_ae41b0(void* a0) {
    return main::sub_ae3d20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ae47a0  (orig 0xae47a0, tailcall)
void main_f_ae47a0() { main::sub_ce0(); }

// sub_ae4820  (orig 0xae4820, tailcall)
void main_f_ae4820() { main::sub_ce0(); }

// sub_ae4870  (orig 0xae4870, tailcall)
void main_f_ae4870() { main::sub_ce0(); }

// sub_ae48f0  (orig 0xae48f0, tailcall)
void main_f_ae48f0() { main::sub_ce0(); }

// sub_ae4910  (orig 0xae4910, tailcall)
void main_f_ae4910() { main::sub_ce0(); }

// sub_ae4990  (orig 0xae4990, tailcall)
void main_f_ae4990() { main::sub_ce0(); }

// sub_ae49b0  (orig 0xae49b0, tailcall)
void main_f_ae49b0() { main::sub_ce0(); }

// sub_ae4a30  (orig 0xae4a30, tailcall)
void main_f_ae4a30() { main::sub_ce0(); }

// sub_ae4a50  (orig 0xae4a50, tailcall)
void main_f_ae4a50() { main::sub_ce0(); }

// sub_ae4ad0  (orig 0xae4ad0, tailcall)
void main_f_ae4ad0() { main::sub_ce0(); }

// sub_ae4af0  (orig 0xae4af0, tailcall)
void main_f_ae4af0() { main::sub_ce0(); }

// sub_ae4b70  (orig 0xae4b70, tailcall)
void main_f_ae4b70() { main::sub_ce0(); }

// sub_ae4b90  (orig 0xae4b90, tailcall)
void main_f_ae4b90() { main::sub_ce0(); }

// sub_ae4c10  (orig 0xae4c10, tailcall)
void main_f_ae4c10() { main::sub_ce0(); }

// sub_ae4c30  (orig 0xae4c30, tailcall)
void main_f_ae4c30() { main::sub_ce0(); }

// sub_ae4cb0  (orig 0xae4cb0, tailcall)
void main_f_ae4cb0() { main::sub_ce0(); }

// sub_ae4cd0  (orig 0xae4cd0, tailcall)
void main_f_ae4cd0() { main::sub_ce0(); }

// sub_ae4d50  (orig 0xae4d50, tailcall)
void main_f_ae4d50() { main::sub_ce0(); }

// sub_ae4d70  (orig 0xae4d70, tailcall)
void main_f_ae4d70() { main::sub_ce0(); }

// sub_ae4df0  (orig 0xae4df0, tailcall)
void main_f_ae4df0() { main::sub_ce0(); }

// sub_ae4e10  (orig 0xae4e10, tailcall)
void main_f_ae4e10() { main::sub_ce0(); }

// sub_ae4e90  (orig 0xae4e90, tailcall)
void main_f_ae4e90() { main::sub_ce0(); }

// sub_ae4eb0  (orig 0xae4eb0, tailcall)
void main_f_ae4eb0() { main::sub_ce0(); }

// sub_ae4f30  (orig 0xae4f30, tailcall)
void main_f_ae4f30() { main::sub_ce0(); }

// sub_ae4f50  (orig 0xae4f50, tailcall)
void main_f_ae4f50() { main::sub_ce0(); }

// sub_ae4fd0  (orig 0xae4fd0, tailcall)
void main_f_ae4fd0() { main::sub_ce0(); }

// sub_ae4ff0  (orig 0xae4ff0, tailcall)
void main_f_ae4ff0() { main::sub_ce0(); }

// sub_ae5070  (orig 0xae5070, tailcall)
void main_f_ae5070() { main::sub_ce0(); }

// sub_ae5090  (orig 0xae5090, tailcall)
void main_f_ae5090() { main::sub_ce0(); }

// sub_ae5110  (orig 0xae5110, tailcall)
void main_f_ae5110() { main::sub_ce0(); }

// sub_ae5130  (orig 0xae5130, tailcall)
void main_f_ae5130() { main::sub_ce0(); }

// sub_ae51b0  (orig 0xae51b0, tailcall)
void main_f_ae51b0() { main::sub_ce0(); }

// sub_ae51d0  (orig 0xae51d0, tailcall)
void main_f_ae51d0() { main::sub_ce0(); }

// sub_ae5250  (orig 0xae5250, tailcall)
void main_f_ae5250() { main::sub_ce0(); }

// sub_ae5270  (orig 0xae5270, tailcall)
void main_f_ae5270() { main::sub_ce0(); }

// sub_ae52f0  (orig 0xae52f0, tailcall)
void main_f_ae52f0() { main::sub_ce0(); }

// sub_ae5310  (orig 0xae5310, tailcall)
void main_f_ae5310() { main::sub_ce0(); }

// sub_ae5390  (orig 0xae5390, tailcall)
void main_f_ae5390() { main::sub_ce0(); }

// sub_ae53b0  (orig 0xae53b0, tailcall)
void main_f_ae53b0() { main::sub_ce0(); }

// sub_ae5430  (orig 0xae5430, tailcall)
void main_f_ae5430() { main::sub_ce0(); }

// sub_ae5450  (orig 0xae5450, tailcall)
void main_f_ae5450() { main::sub_ce0(); }

// sub_ae54d0  (orig 0xae54d0, tailcall)
void main_f_ae54d0() { main::sub_ce0(); }

// sub_ae54f0  (orig 0xae54f0, tailcall)
void main_f_ae54f0() { main::sub_ce0(); }

// sub_ae5570  (orig 0xae5570, tailcall)
void main_f_ae5570() { main::sub_ce0(); }

// sub_ae5590  (orig 0xae5590, tailcall)
void main_f_ae5590() { main::sub_ce0(); }

// sub_ae5610  (orig 0xae5610, tailcall)
void main_f_ae5610() { main::sub_ce0(); }

// sub_ae5630  (orig 0xae5630, tailcall)
void main_f_ae5630() { main::sub_ce0(); }

// sub_ae56b0  (orig 0xae56b0, tailcall)
void main_f_ae56b0() { main::sub_ce0(); }

// sub_ae56d0  (orig 0xae56d0, tailcall)
void main_f_ae56d0() { main::sub_ce0(); }

// sub_ae5750  (orig 0xae5750, tailcall)
void main_f_ae5750() { main::sub_ce0(); }

// sub_ae5770  (orig 0xae5770, tailcall)
void main_f_ae5770() { main::sub_ce0(); }

// sub_ae57f0  (orig 0xae57f0, tailcall)
void main_f_ae57f0() { main::sub_ce0(); }

// sub_ae5810  (orig 0xae5810, tailcall)
void main_f_ae5810() { main::sub_ce0(); }

// sub_ae5890  (orig 0xae5890, tailcall)
void main_f_ae5890() { main::sub_ce0(); }

// sub_ae58b0  (orig 0xae58b0, tailcall)
void main_f_ae58b0() { main::sub_ce0(); }

// sub_ae5930  (orig 0xae5930, tailcall)
void main_f_ae5930() { main::sub_ce0(); }

// sub_ae5950  (orig 0xae5950, tailcall)
void main_f_ae5950() { main::sub_ce0(); }

// sub_ae59d0  (orig 0xae59d0, tailcall)
void main_f_ae59d0() { main::sub_ce0(); }

// sub_ae59f0  (orig 0xae59f0, tailcall)
void main_f_ae59f0() { main::sub_ce0(); }

// sub_ae5a70  (orig 0xae5a70, tailcall)
void main_f_ae5a70() { main::sub_ce0(); }

// sub_ae5a90  (orig 0xae5a90, tailcall)
void main_f_ae5a90() { main::sub_ce0(); }

// sub_ae5b10  (orig 0xae5b10, tailcall)
void main_f_ae5b10() { main::sub_ce0(); }

// sub_ae5b30  (orig 0xae5b30, tailcall)
void main_f_ae5b30() { main::sub_ce0(); }

// sub_ae5bb0  (orig 0xae5bb0, tailcall)
void main_f_ae5bb0() { main::sub_ce0(); }

// sub_ae5bd0  (orig 0xae5bd0, tailcall)
void main_f_ae5bd0() { main::sub_ce0(); }

// sub_ae5c50  (orig 0xae5c50, tailcall)
void main_f_ae5c50() { main::sub_ce0(); }

// sub_ae5c70  (orig 0xae5c70, tailcall)
void main_f_ae5c70() { main::sub_ce0(); }

// sub_ae5cf0  (orig 0xae5cf0, tailcall)
void main_f_ae5cf0() { main::sub_ce0(); }

// sub_ae5d10  (orig 0xae5d10, tailcall)
void main_f_ae5d10() { main::sub_ce0(); }

// sub_ae5d90  (orig 0xae5d90, tailcall)
void main_f_ae5d90() { main::sub_ce0(); }

// sub_ae5db0  (orig 0xae5db0, tailcall)
void main_f_ae5db0() { main::sub_ce0(); }

// sub_ae5e30  (orig 0xae5e30, tailcall)
void main_f_ae5e30() { main::sub_ce0(); }

// sub_ae5e50  (orig 0xae5e50, tailcall)
void main_f_ae5e50() { main::sub_ce0(); }

// sub_ae5ed0  (orig 0xae5ed0, tailcall)
void main_f_ae5ed0() { main::sub_ce0(); }

// sub_ae5ef0  (orig 0xae5ef0, tailcall)
void main_f_ae5ef0() { main::sub_ce0(); }

// sub_ae5f70  (orig 0xae5f70, tailcall)
void main_f_ae5f70() { main::sub_ce0(); }

// sub_ae5f90  (orig 0xae5f90, tailcall)
void main_f_ae5f90() { main::sub_ce0(); }

// sub_ae6010  (orig 0xae6010, tailcall)
void main_f_ae6010() { main::sub_ce0(); }

// sub_ae6030  (orig 0xae6030, tailcall)
void main_f_ae6030() { main::sub_ce0(); }

// sub_ae60b0  (orig 0xae60b0, tailcall)
void main_f_ae60b0() { main::sub_ce0(); }

// sub_ae60d0  (orig 0xae60d0, tailcall)
void main_f_ae60d0() { main::sub_ce0(); }

// sub_ae6150  (orig 0xae6150, tailcall)
void main_f_ae6150() { main::sub_ce0(); }

// sub_ae6170  (orig 0xae6170, tailcall)
void main_f_ae6170() { main::sub_ce0(); }

// sub_ae61f0  (orig 0xae61f0, tailcall)
void main_f_ae61f0() { main::sub_ce0(); }

// sub_ae6210  (orig 0xae6210, tailcall)
void main_f_ae6210() { main::sub_ce0(); }

// sub_ae6290  (orig 0xae6290, tailcall)
void main_f_ae6290() { main::sub_ce0(); }

// sub_ae62b0  (orig 0xae62b0, tailcall)
void main_f_ae62b0() { main::sub_ce0(); }

// sub_ae6330  (orig 0xae6330, tailcall)
void main_f_ae6330() { main::sub_ce0(); }

// sub_ae6350  (orig 0xae6350, tailcall)
void main_f_ae6350() { main::sub_ce0(); }

// sub_ae63d0  (orig 0xae63d0, tailcall)
void main_f_ae63d0() { main::sub_ce0(); }

// sub_ae63f0  (orig 0xae63f0, tailcall)
void main_f_ae63f0() { main::sub_ce0(); }

// sub_ae6470  (orig 0xae6470, tailcall)
void main_f_ae6470() { main::sub_ce0(); }

// sub_ae6490  (orig 0xae6490, tailcall)
void main_f_ae6490() { main::sub_ce0(); }

// sub_ae6510  (orig 0xae6510, tailcall)
void main_f_ae6510() { main::sub_ce0(); }

// sub_ae6530  (orig 0xae6530, tailcall)
void main_f_ae6530() { main::sub_ce0(); }

// sub_ae65b0  (orig 0xae65b0, tailcall)
void main_f_ae65b0() { main::sub_ce0(); }

// sub_ae65d0  (orig 0xae65d0, tailcall)
void main_f_ae65d0() { main::sub_ce0(); }

// sub_ae6650  (orig 0xae6650, tailcall)
void main_f_ae6650() { main::sub_ce0(); }

// sub_ae6670  (orig 0xae6670, tailcall)
void main_f_ae6670() { main::sub_ce0(); }

// sub_ae66f0  (orig 0xae66f0, tailcall)
void main_f_ae66f0() { main::sub_ce0(); }

// sub_ae6710  (orig 0xae6710, tailcall)
void main_f_ae6710() { main::sub_ce0(); }

// sub_ae6790  (orig 0xae6790, tailcall)
void main_f_ae6790() { main::sub_ce0(); }

// sub_ae67b0  (orig 0xae67b0, tailcall)
void main_f_ae67b0() { main::sub_ce0(); }

// sub_ae6830  (orig 0xae6830, tailcall)
void main_f_ae6830() { main::sub_ce0(); }

// sub_ae6850  (orig 0xae6850, tailcall)
void main_f_ae6850() { main::sub_ce0(); }

// sub_ae68d0  (orig 0xae68d0, tailcall)
void main_f_ae68d0() { main::sub_ce0(); }

// sub_ae68f0  (orig 0xae68f0, tailcall)
void main_f_ae68f0() { main::sub_ce0(); }

// sub_ae6970  (orig 0xae6970, tailcall)
void main_f_ae6970() { main::sub_ce0(); }

// sub_ae6990  (orig 0xae6990, tailcall)
void main_f_ae6990() { main::sub_ce0(); }

// sub_ae6a10  (orig 0xae6a10, tailcall)
void main_f_ae6a10() { main::sub_ce0(); }

// sub_ae6a30  (orig 0xae6a30, tailcall)
void main_f_ae6a30() { main::sub_ce0(); }

// sub_ae6ab0  (orig 0xae6ab0, tailcall)
void main_f_ae6ab0() { main::sub_ce0(); }

// sub_ae6ad0  (orig 0xae6ad0, tailcall)
void main_f_ae6ad0() { main::sub_ce0(); }

// sub_ae6b50  (orig 0xae6b50, tailcall)
void main_f_ae6b50() { main::sub_ce0(); }

// sub_ae6b70  (orig 0xae6b70, tailcall)
void main_f_ae6b70() { main::sub_ce0(); }

// sub_ae6bf0  (orig 0xae6bf0, tailcall)
void main_f_ae6bf0() { main::sub_ce0(); }

// sub_ae6c10  (orig 0xae6c10, tailcall)
void main_f_ae6c10() { main::sub_ce0(); }

// sub_ae6c90  (orig 0xae6c90, tailcall)
void main_f_ae6c90() { main::sub_ce0(); }

// sub_ae6cb0  (orig 0xae6cb0, tailcall)
void main_f_ae6cb0() { main::sub_ce0(); }

// sub_ae6d30  (orig 0xae6d30, tailcall)
void main_f_ae6d30() { main::sub_ce0(); }

// sub_ae6d50  (orig 0xae6d50, tailcall)
void main_f_ae6d50() { main::sub_ce0(); }

// sub_ae6dd0  (orig 0xae6dd0, tailcall)
void main_f_ae6dd0() { main::sub_ce0(); }

// sub_ae6df0  (orig 0xae6df0, tailcall)
void main_f_ae6df0() { main::sub_ce0(); }

// sub_ae6e70  (orig 0xae6e70, tailcall)
void main_f_ae6e70() { main::sub_ce0(); }

// sub_ae6e90  (orig 0xae6e90, tailcall)
void main_f_ae6e90() { main::sub_ce0(); }

// sub_ae6f10  (orig 0xae6f10, tailcall)
void main_f_ae6f10() { main::sub_ce0(); }

// sub_ae6f30  (orig 0xae6f30, tailcall)
void main_f_ae6f30() { main::sub_ce0(); }

// sub_ae6fb0  (orig 0xae6fb0, tailcall)
void main_f_ae6fb0() { main::sub_ce0(); }

// sub_ae6fd0  (orig 0xae6fd0, tailcall)
void main_f_ae6fd0() { main::sub_ce0(); }

// sub_ae7050  (orig 0xae7050, tailcall)
void main_f_ae7050() { main::sub_ce0(); }

// sub_ae7070  (orig 0xae7070, tailcall)
void main_f_ae7070() { main::sub_ce0(); }

// sub_ae70f0  (orig 0xae70f0, tailcall)
void main_f_ae70f0() { main::sub_ce0(); }

// sub_ae7110  (orig 0xae7110, tailcall)
void main_f_ae7110() { main::sub_ce0(); }

// sub_ae7190  (orig 0xae7190, tailcall)
void main_f_ae7190() { main::sub_ce0(); }

// sub_ae71c0  (orig 0xae71c0, tailcall)
void main_f_ae71c0() { main::sub_ce0(); }

// sub_ae7240  (orig 0xae7240, tailcall)
void main_f_ae7240() { main::sub_ce0(); }

// sub_ae7260  (orig 0xae7260, tailcall)
void main_f_ae7260() { main::sub_ce0(); }

// sub_ae72e0  (orig 0xae72e0, tailcall)
void main_f_ae72e0() { main::sub_ce0(); }

// sub_ae7300  (orig 0xae7300, tailcall)
void main_f_ae7300() { main::sub_ce0(); }

// sub_ae7380  (orig 0xae7380, tailcall)
void main_f_ae7380() { main::sub_ce0(); }

// sub_ae73a0  (orig 0xae73a0, tailcall)
void main_f_ae73a0() { main::sub_ce0(); }

// sub_ae7420  (orig 0xae7420, tailcall)
void main_f_ae7420() { main::sub_ce0(); }

// sub_ae7440  (orig 0xae7440, tailcall)
void main_f_ae7440() { main::sub_ce0(); }

// sub_ae74c0  (orig 0xae74c0, tailcall)
void main_f_ae74c0() { main::sub_ce0(); }

// sub_ae74e0  (orig 0xae74e0, tailcall)
void main_f_ae74e0() { main::sub_ce0(); }

// sub_ae7560  (orig 0xae7560, tailcall)
void main_f_ae7560() { main::sub_ce0(); }

// sub_ae7580  (orig 0xae7580, tailcall)
void main_f_ae7580() { main::sub_ce0(); }

// sub_ae7600  (orig 0xae7600, tailcall)
void main_f_ae7600() { main::sub_ce0(); }

// sub_ae7620  (orig 0xae7620, tailcall)
void main_f_ae7620() { main::sub_ce0(); }

// sub_ae76a0  (orig 0xae76a0, tailcall)
void main_f_ae76a0() { main::sub_ce0(); }

// sub_ae76c0  (orig 0xae76c0, tailcall)
void main_f_ae76c0() { main::sub_ce0(); }

// sub_ae7740  (orig 0xae7740, tailcall)
void main_f_ae7740() { main::sub_ce0(); }

// sub_ae7760  (orig 0xae7760, tailcall)
void main_f_ae7760() { main::sub_ce0(); }

// sub_ae77e0  (orig 0xae77e0, tailcall)
void main_f_ae77e0() { main::sub_ce0(); }

// sub_ae8c70  (orig 0xae8c70, tailcall)
void main_f_ae8c70() { main::sub_ac70e0(); }

// sub_ae8cf0  (orig 0xae8cf0, tailcall)
uint64_t main_f_ae8cf0(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ae8d00  (orig 0xae8d00, tailcall)
uint64_t main_f_ae8d00(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ae8df0  (orig 0xae8df0, tailcall)
uint64_t main_f_ae8df0(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ae8e00  (orig 0xae8e00, tailcall)
uint64_t main_f_ae8e00(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ae8e10  (orig 0xae8e10, tailcall)
void main_f_ae8e10() { main::sub_ce0(); }

// sub_ae8e90  (orig 0xae8e90, tailcall)
void main_f_ae8e90() { main::sub_ce0(); }

// sub_ae8f00  (orig 0xae8f00, tailcall)
void main_f_ae8f00() { main::sub_ce0(); }

// sub_ae8f80  (orig 0xae8f80, tailcall)
void main_f_ae8f80() { main::sub_ce0(); }

// sub_ae8ff0  (orig 0xae8ff0, tailcall)
void main_f_ae8ff0() { main::sub_ce0(); }

// sub_ae9070  (orig 0xae9070, tailcall)
void main_f_ae9070() { main::sub_ce0(); }

// sub_aeb0e0  (orig 0xaeb0e0, tailcall)
void main_f_aeb0e0() { main::sub_ce0(); }

// sub_aeb160  (orig 0xaeb160, tailcall)
void main_f_aeb160() { main::sub_ce0(); }

// sub_aeb1d0  (orig 0xaeb1d0, tailcall)
void main_f_aeb1d0() { main::sub_ce0(); }

// sub_aeb250  (orig 0xaeb250, tailcall)
void main_f_aeb250() { main::sub_ce0(); }

// sub_aeb2c0  (orig 0xaeb2c0, tailcall)
void main_f_aeb2c0() { main::sub_ce0(); }

// sub_aeb340  (orig 0xaeb340, tailcall)
void main_f_aeb340() { main::sub_ce0(); }

// sub_aeb3b0  (orig 0xaeb3b0, tailcall)
void main_f_aeb3b0() { main::sub_ce0(); }

// sub_aeb430  (orig 0xaeb430, tailcall)
void main_f_aeb430() { main::sub_ce0(); }

// sub_aeb4a0  (orig 0xaeb4a0, tailcall)
void main_f_aeb4a0() { main::sub_ce0(); }

// sub_aeb520  (orig 0xaeb520, tailcall)
void main_f_aeb520() { main::sub_ce0(); }

// sub_aeb590  (orig 0xaeb590, tailcall)
void main_f_aeb590() { main::sub_ce0(); }

// sub_aeb610  (orig 0xaeb610, tailcall)
void main_f_aeb610() { main::sub_ce0(); }

// sub_aeb680  (orig 0xaeb680, tailcall)
void main_f_aeb680() { main::sub_ce0(); }

// sub_aeb700  (orig 0xaeb700, tailcall)
void main_f_aeb700() { main::sub_ce0(); }

// sub_aed2d0  (orig 0xaed2d0, tailcall)
void main_f_aed2d0() { main::sub_ce0(); }

// sub_aed350  (orig 0xaed350, tailcall)
void main_f_aed350() { main::sub_ce0(); }

// sub_aed3c0  (orig 0xaed3c0, tailcall)
void main_f_aed3c0() { main::sub_ce0(); }

// sub_aed440  (orig 0xaed440, tailcall)
void main_f_aed440() { main::sub_ce0(); }

// sub_aed6f0  (orig 0xaed6f0, tailcall)
void main_f_aed6f0() { main::sub_ce0(); }

// sub_aed770  (orig 0xaed770, tailcall)
void main_f_aed770() { main::sub_ce0(); }

// sub_aed7e0  (orig 0xaed7e0, tailcall)
void main_f_aed7e0() { main::sub_ce0(); }

// sub_aed860  (orig 0xaed860, tailcall)
void main_f_aed860() { main::sub_ce0(); }

// sub_aed8d0  (orig 0xaed8d0, tailcall)
void main_f_aed8d0() { main::sub_ce0(); }

// sub_aed950  (orig 0xaed950, tailcall)
void main_f_aed950() { main::sub_ce0(); }

// sub_aed9c0  (orig 0xaed9c0, tailcall)
void main_f_aed9c0() { main::sub_ce0(); }

// sub_aeda40  (orig 0xaeda40, tailcall)
void main_f_aeda40() { main::sub_ce0(); }

// sub_aedab0  (orig 0xaedab0, tailcall)
void main_f_aedab0() { main::sub_ce0(); }

// sub_aedb30  (orig 0xaedb30, tailcall)
void main_f_aedb30() { main::sub_ce0(); }

// sub_aedba0  (orig 0xaedba0, tailcall)
void main_f_aedba0() { main::sub_ce0(); }

// sub_aedc20  (orig 0xaedc20, tailcall)
void main_f_aedc20() { main::sub_ce0(); }

// sub_aedc90  (orig 0xaedc90, tailcall)
void main_f_aedc90() { main::sub_ce0(); }

// sub_aedd10  (orig 0xaedd10, tailcall)
void main_f_aedd10() { main::sub_ce0(); }

// sub_aede50  (orig 0xaede50, tailcall)
void main_f_aede50() { main::sub_ce0(); }

// sub_aeded0  (orig 0xaeded0, tailcall)
void main_f_aeded0() { main::sub_ce0(); }

// sub_aedf40  (orig 0xaedf40, tailcall)
void main_f_aedf40() { main::sub_ce0(); }

// sub_aedfc0  (orig 0xaedfc0, tailcall)
void main_f_aedfc0() { main::sub_ce0(); }

// sub_aefe20  (orig 0xaefe20, tailcall)
void main_f_aefe20() { main::sub_ce0(); }

// sub_aefea0  (orig 0xaefea0, tailcall)
void main_f_aefea0() { main::sub_ce0(); }

// sub_aeff10  (orig 0xaeff10, tailcall)
void main_f_aeff10() { main::sub_ce0(); }

// sub_aeff90  (orig 0xaeff90, tailcall)
void main_f_aeff90() { main::sub_ce0(); }

// sub_af0000  (orig 0xaf0000, tailcall)
void main_f_af0000() { main::sub_ce0(); }

// sub_af0080  (orig 0xaf0080, tailcall)
void main_f_af0080() { main::sub_ce0(); }

// sub_af1c10  (orig 0xaf1c10, tailcall)
void main_f_af1c10() { main::sub_ac70e0(); }

// sub_af1c90  (orig 0xaf1c90, tailcall)
uint64_t main_f_af1c90(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_af1ca0  (orig 0xaf1ca0, tailcall)
uint64_t main_f_af1ca0(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_af1d90  (orig 0xaf1d90, tailcall)
uint64_t main_f_af1d90(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_af1da0  (orig 0xaf1da0, tailcall)
uint64_t main_f_af1da0(void* a0) {
    return main::sub_ac70e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_af1e30  (orig 0xaf1e30, tailcall)
void main_f_af1e30() { main::sub_ce0(); }

// sub_af1eb0  (orig 0xaf1eb0, tailcall)
void main_f_af1eb0() { main::sub_ce0(); }

// sub_af1f20  (orig 0xaf1f20, tailcall)
void main_f_af1f20() { main::sub_ce0(); }

// sub_af1fa0  (orig 0xaf1fa0, tailcall)
void main_f_af1fa0() { main::sub_ce0(); }

// sub_af2010  (orig 0xaf2010, tailcall)
void main_f_af2010() { main::sub_ce0(); }

// sub_af2090  (orig 0xaf2090, tailcall)
void main_f_af2090() { main::sub_ce0(); }

// sub_af2100  (orig 0xaf2100, tailcall)
void main_f_af2100() { main::sub_ce0(); }

// sub_af2180  (orig 0xaf2180, tailcall)
void main_f_af2180() { main::sub_ce0(); }

// sub_af21f0  (orig 0xaf21f0, tailcall)
void main_f_af21f0() { main::sub_ce0(); }

// sub_af2270  (orig 0xaf2270, tailcall)
void main_f_af2270() { main::sub_ce0(); }

// sub_af22e0  (orig 0xaf22e0, tailcall)
void main_f_af22e0() { main::sub_ce0(); }

// sub_af2360  (orig 0xaf2360, tailcall)
void main_f_af2360() { main::sub_ce0(); }

// sub_af23d0  (orig 0xaf23d0, tailcall)
void main_f_af23d0() { main::sub_ce0(); }

// sub_af2450  (orig 0xaf2450, tailcall)
void main_f_af2450() { main::sub_ce0(); }

// sub_af24c0  (orig 0xaf24c0, tailcall)
void main_f_af24c0() { main::sub_ce0(); }

// sub_af2540  (orig 0xaf2540, tailcall)
void main_f_af2540() { main::sub_ce0(); }

// sub_af25b0  (orig 0xaf25b0, tailcall)
void main_f_af25b0() { main::sub_ce0(); }

// sub_af2630  (orig 0xaf2630, tailcall)
void main_f_af2630() { main::sub_ce0(); }

// sub_af26a0  (orig 0xaf26a0, tailcall)
void main_f_af26a0() { main::sub_ce0(); }

// sub_af2720  (orig 0xaf2720, tailcall)
void main_f_af2720() { main::sub_ce0(); }

// sub_af2790  (orig 0xaf2790, tailcall)
void main_f_af2790() { main::sub_ce0(); }

// sub_af2810  (orig 0xaf2810, tailcall)
void main_f_af2810() { main::sub_ce0(); }

// sub_af2880  (orig 0xaf2880, tailcall)
void main_f_af2880() { main::sub_ce0(); }

// sub_af2900  (orig 0xaf2900, tailcall)
void main_f_af2900() { main::sub_ce0(); }

// sub_af2970  (orig 0xaf2970, tailcall)
void main_f_af2970() { main::sub_ce0(); }

// sub_af29f0  (orig 0xaf29f0, tailcall)
void main_f_af29f0() { main::sub_ce0(); }

// sub_af2a60  (orig 0xaf2a60, tailcall)
void main_f_af2a60() { main::sub_ce0(); }

// sub_af2ae0  (orig 0xaf2ae0, tailcall)
void main_f_af2ae0() { main::sub_ce0(); }

// sub_af2b50  (orig 0xaf2b50, tailcall)
void main_f_af2b50() { main::sub_ce0(); }

// sub_af2bd0  (orig 0xaf2bd0, tailcall)
void main_f_af2bd0() { main::sub_ce0(); }

// sub_af2c40  (orig 0xaf2c40, tailcall)
void main_f_af2c40() { main::sub_ce0(); }

// sub_af2cc0  (orig 0xaf2cc0, tailcall)
void main_f_af2cc0() { main::sub_ce0(); }

// sub_af59c0  (orig 0xaf59c0, tailcall)
void main_f_af59c0() { main::sub_ce0(); }

// sub_af5a40  (orig 0xaf5a40, tailcall)
void main_f_af5a40() { main::sub_ce0(); }

// sub_af5ab0  (orig 0xaf5ab0, tailcall)
void main_f_af5ab0() { main::sub_ce0(); }

// sub_af5b30  (orig 0xaf5b30, tailcall)
void main_f_af5b30() { main::sub_ce0(); }

// sub_af6120  (orig 0xaf6120, tailcall)
void main_f_af6120() { main::sub_ce0(); }

// sub_af61a0  (orig 0xaf61a0, tailcall)
void main_f_af61a0() { main::sub_ce0(); }

// sub_af6210  (orig 0xaf6210, tailcall)
void main_f_af6210() { main::sub_ce0(); }

// sub_af6290  (orig 0xaf6290, tailcall)
void main_f_af6290() { main::sub_ce0(); }

// sub_af6300  (orig 0xaf6300, tailcall)
void main_f_af6300() { main::sub_ce0(); }

// sub_af6380  (orig 0xaf6380, tailcall)
void main_f_af6380() { main::sub_ce0(); }

// sub_af63f0  (orig 0xaf63f0, tailcall)
void main_f_af63f0() { main::sub_ce0(); }

// sub_af6470  (orig 0xaf6470, tailcall)
void main_f_af6470() { main::sub_ce0(); }

// sub_af64e0  (orig 0xaf64e0, tailcall)
void main_f_af64e0() { main::sub_ce0(); }

// sub_af6560  (orig 0xaf6560, tailcall)
void main_f_af6560() { main::sub_ce0(); }

// sub_af65d0  (orig 0xaf65d0, tailcall)
void main_f_af65d0() { main::sub_ce0(); }

// sub_af6650  (orig 0xaf6650, tailcall)
void main_f_af6650() { main::sub_ce0(); }

// sub_af66c0  (orig 0xaf66c0, tailcall)
void main_f_af66c0() { main::sub_ce0(); }

// sub_af6740  (orig 0xaf6740, tailcall)
void main_f_af6740() { main::sub_ce0(); }

// sub_af67b0  (orig 0xaf67b0, tailcall)
void main_f_af67b0() { main::sub_ce0(); }

// sub_af6830  (orig 0xaf6830, tailcall)
void main_f_af6830() { main::sub_ce0(); }

// sub_af68a0  (orig 0xaf68a0, tailcall)
void main_f_af68a0() { main::sub_ce0(); }

// sub_af6920  (orig 0xaf6920, tailcall)
void main_f_af6920() { main::sub_ce0(); }

// sub_af6990  (orig 0xaf6990, tailcall)
void main_f_af6990() { main::sub_ce0(); }

// sub_af6a10  (orig 0xaf6a10, tailcall)
void main_f_af6a10() { main::sub_ce0(); }

// sub_af6a80  (orig 0xaf6a80, tailcall)
void main_f_af6a80() { main::sub_ce0(); }

// sub_af6b00  (orig 0xaf6b00, tailcall)
void main_f_af6b00() { main::sub_ce0(); }

// sub_af6b70  (orig 0xaf6b70, tailcall)
void main_f_af6b70() { main::sub_ce0(); }

// sub_af6bf0  (orig 0xaf6bf0, tailcall)
void main_f_af6bf0() { main::sub_ce0(); }

// sub_af6c60  (orig 0xaf6c60, tailcall)
void main_f_af6c60() { main::sub_ce0(); }

// sub_af6ce0  (orig 0xaf6ce0, tailcall)
void main_f_af6ce0() { main::sub_ce0(); }

// sub_af6d50  (orig 0xaf6d50, tailcall)
void main_f_af6d50() { main::sub_ce0(); }

// sub_af6dd0  (orig 0xaf6dd0, tailcall)
void main_f_af6dd0() { main::sub_ce0(); }

// sub_af6e40  (orig 0xaf6e40, tailcall)
void main_f_af6e40() { main::sub_ce0(); }

// sub_af6ec0  (orig 0xaf6ec0, tailcall)
void main_f_af6ec0() { main::sub_ce0(); }

// sub_af6f30  (orig 0xaf6f30, tailcall)
void main_f_af6f30() { main::sub_ce0(); }

// sub_af6fb0  (orig 0xaf6fb0, tailcall)
void main_f_af6fb0() { main::sub_ce0(); }

// sub_afa580  (orig 0xafa580, tailcall)
void main_f_afa580() { main::sub_15b6e10(); }

// sub_afa590  (orig 0xafa590, tailcall)
void main_f_afa590() { main::sub_15b6e10(); }

// sub_afbc90  (orig 0xafbc90, tailcall)
void main_f_afbc90() { main::sub_ac5b50(); }

// sub_afbe00  (orig 0xafbe00, tailcall)
void main_f_afbe00() { main::sub_ac5b50(); }

// sub_afbe10  (orig 0xafbe10, tailcall)
void main_f_afbe10() { main::sub_ac5b50(); }

// sub_b08bb0  (orig 0xb08bb0, tailcall)
uint64_t main_f_b08bb0(void* a0) {
    return main::sub_b08a20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b08bc0  (orig 0xb08bc0, tailcall)
uint64_t main_f_b08bc0(void* a0) {
    return main::sub_b08a20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b0d6c0  (orig 0xb0d6c0, tailcall)
void main_f_b0d6c0() { main::sub_b0d570(); }

// sub_b0d6d0  (orig 0xb0d6d0, tailcall)
uint64_t main_f_b0d6d0(void* a0) {
    return main::sub_b0d570(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b0d6e0  (orig 0xb0d6e0, tailcall)
uint64_t main_f_b0d6e0(void* a0) {
    return main::sub_b0d570(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b0d6f0  (orig 0xb0d6f0, tailcall)
uint64_t main_f_b0d6f0(void* a0) {
    return main::sub_b0d570(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b0d700  (orig 0xb0d700, tailcall)
uint64_t main_f_b0d700(void* a0) {
    return main::sub_b0d570(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b0d710  (orig 0xb0d710, tailcall)
uint64_t main_f_b0d710(void* a0) {
    return main::sub_b0d570(((uintptr_t)((char*)(a0) - 136)));
}

// sub_b0d720  (orig 0xb0d720, tailcall)
uint64_t main_f_b0d720(void* a0) {
    return main::sub_b0d570(((uintptr_t)((char*)(a0) - 136)));
}

// sub_b13ea0  (orig 0xb13ea0, tailcall)
uint64_t main_f_b13ea0(void* a0) {
    return main::sub_b13d10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b13eb0  (orig 0xb13eb0, tailcall)
uint64_t main_f_b13eb0(void* a0) {
    return main::sub_b13d10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b14490  (orig 0xb14490, tailcall)
uint64_t main_f_b14490(void* a0) {
    return main::sub_b14300(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b144a0  (orig 0xb144a0, tailcall)
uint64_t main_f_b144a0(void* a0) {
    return main::sub_b14300(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b1cdd0  (orig 0xb1cdd0, tailcall)
void main_f_b1cdd0() { main::sub_b1cc70(); }

// sub_b1cde0  (orig 0xb1cde0, tailcall)
uint64_t main_f_b1cde0(void* a0) {
    return main::sub_b1cc70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b1cdf0  (orig 0xb1cdf0, tailcall)
uint64_t main_f_b1cdf0(void* a0) {
    return main::sub_b1cc70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b1ce00  (orig 0xb1ce00, tailcall)
uint64_t main_f_b1ce00(void* a0) {
    return main::sub_b1cc70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b1ce10  (orig 0xb1ce10, tailcall)
uint64_t main_f_b1ce10(void* a0) {
    return main::sub_b1cc70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b22510  (orig 0xb22510, tailcall)
void main_f_b22510() { main::sub_b22430(); }

// sub_b22520  (orig 0xb22520, tailcall)
uint64_t main_f_b22520(void* a0) {
    return main::sub_b22430(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b22530  (orig 0xb22530, tailcall)
uint64_t main_f_b22530(void* a0) {
    return main::sub_b22430(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b22540  (orig 0xb22540, tailcall)
uint64_t main_f_b22540(void* a0) {
    return main::sub_b22430(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b22550  (orig 0xb22550, tailcall)
uint64_t main_f_b22550(void* a0) {
    return main::sub_b22430(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b2b890  (orig 0xb2b890, tailcall)
void main_f_b2b890() { main::sub_b2b8c0(); }

// sub_b2b8a0  (orig 0xb2b8a0, tailcall)
void main_f_b2b8a0() { main::sub_b2b8c0(); }

// sub_b2b8b0  (orig 0xb2b8b0, tailcall)
void main_f_b2b8b0() { main::sub_b2b8c0(); }

// sub_b2c100  (orig 0xb2c100, tailcall)
void main_f_b2c100() { main::sub_b2bf60(); }

// sub_b2c1c0  (orig 0xb2c1c0, tailcall)
uint64_t main_f_b2c1c0(void* a0) {
    return main::sub_b2bf60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b2c1d0  (orig 0xb2c1d0, tailcall)
uint64_t main_f_b2c1d0(void* a0) {
    return main::sub_b2bf60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b2c340  (orig 0xb2c340, tailcall)
uint64_t main_f_b2c340(void* a0) {
    return main::sub_b2bf60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b2c350  (orig 0xb2c350, tailcall)
uint64_t main_f_b2c350(void* a0) {
    return main::sub_b2bf60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b2c360  (orig 0xb2c360, tailcall)
void main_f_b2c360() { main::sub_e7c250(); }

// sub_b2c370  (orig 0xb2c370, tailcall)
void main_f_b2c370() { main::sub_b2c9c0(); }

// sub_b2c380  (orig 0xb2c380, tailcall)
uint64_t main_f_b2c380(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b2c390  (orig 0xb2c390, tailcall)
uint64_t main_f_b2c390(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b2c3a0  (orig 0xb2c3a0, tailcall)
void main_f_b2c3a0() { main::sub_b2c9c0(); }

// sub_b2c3b0  (orig 0xb2c3b0, tailcall)
void main_f_b2c3b0() { main::sub_b2c9c0(); }

// sub_b2c3c0  (orig 0xb2c3c0, tailcall)
uint64_t main_f_b2c3c0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b2c3d0  (orig 0xb2c3d0, tailcall)
uint64_t main_f_b2c3d0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b2d2a0  (orig 0xb2d2a0, tailcall)
void main_f_b2d2a0() { main::sub_b2d2b0(); }

// sub_b2d760  (orig 0xb2d760, tailcall)
void main_f_b2d760() { main::sub_b2d590(); }

// sub_b2d770  (orig 0xb2d770, tailcall)
void main_f_b2d770() { main::sub_e7c4c0(); }

// sub_b2d780  (orig 0xb2d780, tailcall)
void main_f_b2d780() { main::sub_e7c4c0(); }

// sub_b2d790  (orig 0xb2d790, tailcall)
void main_f_b2d790() { main::sub_b2cc40(); }

// sub_b2d7a0  (orig 0xb2d7a0, tailcall)
uint64_t main_f_b2d7a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b2d7b0  (orig 0xb2d7b0, tailcall)
uint64_t main_f_b2d7b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b2d7c0  (orig 0xb2d7c0, tailcall)
void main_f_b2d7c0() { main::sub_b2cc40(); }

// sub_b2d7d0  (orig 0xb2d7d0, tailcall)
void main_f_b2d7d0() { main::sub_b2cc40(); }

// sub_b2d7e0  (orig 0xb2d7e0, tailcall)
uint64_t main_f_b2d7e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b2d7f0  (orig 0xb2d7f0, tailcall)
uint64_t main_f_b2d7f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b2d800  (orig 0xb2d800, tailcall)
uint64_t main_f_b2d800(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_b2d810  (orig 0xb2d810, tailcall)
uint64_t main_f_b2d810(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_b2e450  (orig 0xb2e450, tailcall)
void main_f_b2e450() { main::sub_b2e480(); }

// sub_b2e460  (orig 0xb2e460, tailcall)
void main_f_b2e460() { main::sub_b2e480(); }

// sub_b2e470  (orig 0xb2e470, tailcall)
void main_f_b2e470() { main::sub_b2e480(); }

// sub_b2f630  (orig 0xb2f630, tailcall)
void main_f_b2f630() { main::sub_b2f410(); }

// sub_b2f6f0  (orig 0xb2f6f0, tailcall)
uint64_t main_f_b2f6f0(void* a0) {
    return main::sub_b2f410(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b2f700  (orig 0xb2f700, tailcall)
uint64_t main_f_b2f700(void* a0) {
    return main::sub_b2f410(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b2f870  (orig 0xb2f870, tailcall)
uint64_t main_f_b2f870(void* a0) {
    return main::sub_b2f410(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b2f880  (orig 0xb2f880, tailcall)
uint64_t main_f_b2f880(void* a0) {
    return main::sub_b2f410(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b30ad0  (orig 0xb30ad0, tailcall)
void main_f_b30ad0() { main::sub_b309e0(); }

// sub_b30ae0  (orig 0xb30ae0, tailcall)
void main_f_b30ae0() { main::sub_b30410(); }

// sub_b30af0  (orig 0xb30af0, tailcall)
uint64_t main_f_b30af0(void* a0) {
    return main::sub_b309e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b30b00  (orig 0xb30b00, tailcall)
uint64_t main_f_b30b00(void* a0) {
    return main::sub_b309e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b30b10  (orig 0xb30b10, tailcall)
void main_f_b30b10() { main::sub_b30410(); }

// sub_b30b20  (orig 0xb30b20, tailcall)
void main_f_b30b20() { main::sub_b30410(); }

// sub_b30b30  (orig 0xb30b30, tailcall)
uint64_t main_f_b30b30(void* a0) {
    return main::sub_b309e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b30b40  (orig 0xb30b40, tailcall)
uint64_t main_f_b30b40(void* a0) {
    return main::sub_b309e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b315e0  (orig 0xb315e0, tailcall)
void main_f_b315e0() { main::sub_b317d0(); }

// sub_b316d0  (orig 0xb316d0, tailcall)
void main_f_b316d0() { main::sub_b317d0(); }

// sub_b316e0  (orig 0xb316e0, tailcall)
void main_f_b316e0() { main::sub_b317d0(); }

// sub_b32a30  (orig 0xb32a30, tailcall)
void main_f_b32a30() { main::sub_b32860(); }

// sub_b32a40  (orig 0xb32a40, tailcall)
void main_f_b32a40() { main::sub_e7c4c0(); }

// sub_b32a50  (orig 0xb32a50, tailcall)
void main_f_b32a50() { main::sub_e7c4c0(); }

// sub_b32a60  (orig 0xb32a60, tailcall)
void main_f_b32a60() { main::sub_b32b10(); }

// sub_b32a70  (orig 0xb32a70, tailcall)
uint64_t main_f_b32a70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b32a80  (orig 0xb32a80, tailcall)
uint64_t main_f_b32a80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b32a90  (orig 0xb32a90, tailcall)
void main_f_b32a90() { main::sub_b32b10(); }

// sub_b32aa0  (orig 0xb32aa0, tailcall)
void main_f_b32aa0() { main::sub_b32b10(); }

// sub_b32ab0  (orig 0xb32ab0, tailcall)
uint64_t main_f_b32ab0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b32ac0  (orig 0xb32ac0, tailcall)
uint64_t main_f_b32ac0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b32ad0  (orig 0xb32ad0, tailcall)
uint64_t main_f_b32ad0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_b32ae0  (orig 0xb32ae0, tailcall)
uint64_t main_f_b32ae0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_b32ec0  (orig 0xb32ec0, tailcall)
void main_f_b32ec0() { main::sub_e7c4c0(); }

// sub_b32ed0  (orig 0xb32ed0, tailcall)
void main_f_b32ed0() { main::sub_b32f40(); }

// sub_b32ee0  (orig 0xb32ee0, tailcall)
uint64_t main_f_b32ee0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b32ef0  (orig 0xb32ef0, tailcall)
uint64_t main_f_b32ef0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b32f00  (orig 0xb32f00, tailcall)
void main_f_b32f00() { main::sub_b32f40(); }

// sub_b32f10  (orig 0xb32f10, tailcall)
void main_f_b32f10() { main::sub_b32f40(); }

// sub_b32f20  (orig 0xb32f20, tailcall)
uint64_t main_f_b32f20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b32f30  (orig 0xb32f30, tailcall)
uint64_t main_f_b32f30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b334b0  (orig 0xb334b0, tailcall)
uint64_t main_f_b334b0(void* a0) {
    return main::sub_b34480(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_b334e0  (orig 0xb334e0, tailcall)
uint64_t main_f_b334e0(void* a0) {
    return main::sub_b37020(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_b334f0  (orig 0xb334f0, tailcall)
uint64_t main_f_b334f0(void* a0) {
    return main::sub_b374b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_b33500  (orig 0xb33500, tailcall)
uint64_t main_f_b33500(void* a0) {
    return main::sub_b37230(((uintptr_t)(*(uint64_t*)((char*)(a0) + 88))));
}

// sub_b3b3e0  (orig 0xb3b3e0, tailcall)
uint64_t main_f_b3b3e0(void* a0) {
    return main::sub_b3b0b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b3b3f0  (orig 0xb3b3f0, tailcall)
uint64_t main_f_b3b3f0(void* a0) {
    return main::sub_b3b0b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b3b400  (orig 0xb3b400, tailcall)
void main_f_b3b400() { main::sub_b3b0b0(); }

// sub_b3b410  (orig 0xb3b410, tailcall)
uint64_t main_f_b3b410(void* a0) {
    return main::sub_b3b0b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b3b420  (orig 0xb3b420, tailcall)
uint64_t main_f_b3b420(void* a0) {
    return main::sub_b3b0b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b42350  (orig 0xb42350, tailcall)
void main_f_b42350() { main::sub_ce0(); }

// sub_b42b10  (orig 0xb42b10, tailcall)
void main_f_b42b10() { main::sub_b426b0(); }

// sub_b42cc0  (orig 0xb42cc0, tailcall)
void main_f_b42cc0() { main::sub_b426b0(); }

// sub_b42cd0  (orig 0xb42cd0, tailcall)
void main_f_b42cd0() { main::sub_b426b0(); }

// sub_b44360  (orig 0xb44360, tailcall)
void main_f_b44360() { main::sub_ce0(); }

// sub_b443e0  (orig 0xb443e0, tailcall)
void main_f_b443e0() { main::sub_ce0(); }

// sub_b45ec0  (orig 0xb45ec0, tailcall)
void main_f_b45ec0() { main::sub_b46170(); }

// sub_b46010  (orig 0xb46010, tailcall)
void main_f_b46010() { main::sub_b46170(); }

// sub_b46020  (orig 0xb46020, tailcall)
void main_f_b46020() { main::sub_b46170(); }

// sub_b462a0  (orig 0xb462a0, tailcall)
void main_f_b462a0() { main::sub_ce0(); }

// sub_b46320  (orig 0xb46320, tailcall)
void main_f_b46320() { main::sub_ce0(); }

// sub_b466d0  (orig 0xb466d0, tailcall)
uint64_t main_f_b466d0(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b466e0  (orig 0xb466e0, tailcall)
uint64_t main_f_b466e0(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b466f0  (orig 0xb466f0, tailcall)
void main_f_b466f0() { main::sub_b465b0(); }

// sub_b46700  (orig 0xb46700, tailcall)
uint64_t main_f_b46700(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b46710  (orig 0xb46710, tailcall)
uint64_t main_f_b46710(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b48850  (orig 0xb48850, tailcall)
void main_f_b48850() { main::sub_ce0(); }

// sub_b488d0  (orig 0xb488d0, tailcall)
void main_f_b488d0() { main::sub_ce0(); }

// sub_b48930  (orig 0xb48930, tailcall)
void main_f_b48930() { main::sub_ce0(); }

// sub_b489b0  (orig 0xb489b0, tailcall)
void main_f_b489b0() { main::sub_ce0(); }

// sub_b48a10  (orig 0xb48a10, tailcall)
void main_f_b48a10() { main::sub_ce0(); }

// sub_b48a90  (orig 0xb48a90, tailcall)
void main_f_b48a90() { main::sub_ce0(); }

// sub_b48d60  (orig 0xb48d60, tailcall)
void main_f_b48d60() { main::sub_ce0(); }

// sub_b48de0  (orig 0xb48de0, tailcall)
void main_f_b48de0() { main::sub_ce0(); }

// sub_b48e10  (orig 0xb48e10, tailcall)
void main_f_b48e10() { main::sub_ce0(); }

// sub_b48e90  (orig 0xb48e90, tailcall)
void main_f_b48e90() { main::sub_ce0(); }

// sub_b48eb0  (orig 0xb48eb0, tailcall)
void main_f_b48eb0() { main::sub_ce0(); }

// sub_b48f30  (orig 0xb48f30, tailcall)
void main_f_b48f30() { main::sub_ce0(); }

// sub_b48f60  (orig 0xb48f60, tailcall)
void main_f_b48f60() { main::sub_ce0(); }

// sub_b48fe0  (orig 0xb48fe0, tailcall)
void main_f_b48fe0() { main::sub_ce0(); }

// sub_b49000  (orig 0xb49000, tailcall)
void main_f_b49000() { main::sub_ce0(); }

// sub_b49080  (orig 0xb49080, tailcall)
void main_f_b49080() { main::sub_ce0(); }

// sub_b498d0  (orig 0xb498d0, tailcall)
void main_f_b498d0() { main::sub_ce0(); }

// sub_b4a790  (orig 0xb4a790, tailcall)
void main_f_b4a790() { main::sub_ce0(); }

// sub_b4c060  (orig 0xb4c060, tailcall)
uint64_t main_f_b4c060(void* a0) {
    return main::sub_b56610(((uintptr_t)(*(uint64_t*)((char*)(a0) + 14384L))));
}

// sub_b4c070  (orig 0xb4c070, tailcall)
uint64_t main_f_b4c070(void* a0) {
    return main::sub_b56630(((uintptr_t)(*(uint64_t*)((char*)(a0) + 14384L))));
}

// sub_b4c080  (orig 0xb4c080, tailcall)
uint64_t main_f_b4c080(void* a0) {
    return main::sub_b56650(((uintptr_t)(*(uint64_t*)((char*)(a0) + 14384L))));
}

// sub_b58130  (orig 0xb58130, tailcall)
void main_f_b58130() { main::sub_ead240(); }

// sub_b58140  (orig 0xb58140, tailcall)
uint64_t main_f_b58140(void* a0) {
    return main::sub_ead240(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b58150  (orig 0xb58150, tailcall)
void main_f_b58150() { main::sub_ead240(); }

// sub_b58160  (orig 0xb58160, tailcall)
uint64_t main_f_b58160(void* a0) {
    return main::sub_ead240(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b5fb60  (orig 0xb5fb60, tailcall)
uint64_t main_f_b5fb60(void* a0) {
    return main::sub_b5eff0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b5fb70  (orig 0xb5fb70, tailcall)
uint64_t main_f_b5fb70(void* a0) {
    return main::sub_b5eff0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b5fb80  (orig 0xb5fb80, tailcall)
void main_f_b5fb80() { main::sub_b5eff0(); }

// sub_b5fb90  (orig 0xb5fb90, tailcall)
uint64_t main_f_b5fb90(void* a0) {
    return main::sub_b5eff0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b5fba0  (orig 0xb5fba0, tailcall)
uint64_t main_f_b5fba0(void* a0) {
    return main::sub_b5eff0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b6c3b0  (orig 0xb6c3b0, tailcall)
uint64_t main_f_b6c3b0(void* a0) {
    return main::sub_b6c2c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b6c3c0  (orig 0xb6c3c0, tailcall)
uint64_t main_f_b6c3c0(void* a0) {
    return main::sub_b6c2c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b6c770  (orig 0xb6c770, tailcall)
void main_f_b6c770() { main::sub_ce0(); }

// sub_b74280  (orig 0xb74280, tailcall)
uint64_t main_f_b74280(void* a0) {
    return main::sub_b74050(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b74290  (orig 0xb74290, tailcall)
uint64_t main_f_b74290(void* a0) {
    return main::sub_b74050(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b75610  (orig 0xb75610, tailcall)
void main_f_b75610() { main::sub_b75450(); }

// sub_b75620  (orig 0xb75620, tailcall)
uint64_t main_f_b75620(void* a0) {
    return main::sub_b75450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b75630  (orig 0xb75630, tailcall)
uint64_t main_f_b75630(void* a0) {
    return main::sub_b75450(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b76070  (orig 0xb76070, tailcall)
void main_f_b76070() { main::sub_b75f10(); }

// sub_b76170  (orig 0xb76170, tailcall)
uint64_t main_f_b76170(void* a0) {
    return main::sub_b75f10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b76180  (orig 0xb76180, tailcall)
uint64_t main_f_b76180(void* a0) {
    return main::sub_b75f10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b762f0  (orig 0xb762f0, tailcall)
uint64_t main_f_b762f0(void* a0) {
    return main::sub_b75f10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b76300  (orig 0xb76300, tailcall)
uint64_t main_f_b76300(void* a0) {
    return main::sub_b75f10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b774b0  (orig 0xb774b0, tailcall)
void main_f_b774b0() { main::sub_b77350(); }

// sub_b77570  (orig 0xb77570, tailcall)
uint64_t main_f_b77570(void* a0) {
    return main::sub_b77350(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b77580  (orig 0xb77580, tailcall)
uint64_t main_f_b77580(void* a0) {
    return main::sub_b77350(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b776f0  (orig 0xb776f0, tailcall)
uint64_t main_f_b776f0(void* a0) {
    return main::sub_b77350(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b77700  (orig 0xb77700, tailcall)
uint64_t main_f_b77700(void* a0) {
    return main::sub_b77350(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b78780  (orig 0xb78780, tailcall)
void main_f_b78780() { main::sub_b78620(); }

// sub_b78840  (orig 0xb78840, tailcall)
uint64_t main_f_b78840(void* a0) {
    return main::sub_b78620(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b78850  (orig 0xb78850, tailcall)
uint64_t main_f_b78850(void* a0) {
    return main::sub_b78620(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b789c0  (orig 0xb789c0, tailcall)
uint64_t main_f_b789c0(void* a0) {
    return main::sub_b78620(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b789d0  (orig 0xb789d0, tailcall)
uint64_t main_f_b789d0(void* a0) {
    return main::sub_b78620(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b79df0  (orig 0xb79df0, tailcall)
void main_f_b79df0() { main::sub_b79e10(); }

// sub_b7a130  (orig 0xb7a130, tailcall)
void main_f_b7a130() { main::sub_b7a150(); }

// sub_b7f460  (orig 0xb7f460, tailcall)
void main_f_b7f460() { main::sub_b7f300(); }

// sub_b7f4e0  (orig 0xb7f4e0, tailcall)
uint64_t main_f_b7f4e0(void* a0) {
    return main::sub_b7f300(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b7f4f0  (orig 0xb7f4f0, tailcall)
uint64_t main_f_b7f4f0(void* a0) {
    return main::sub_b7f300(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b7f6e0  (orig 0xb7f6e0, tailcall)
uint64_t main_f_b7f6e0(void* a0) {
    return main::sub_b7f300(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b7f6f0  (orig 0xb7f6f0, tailcall)
uint64_t main_f_b7f6f0(void* a0) {
    return main::sub_b7f300(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b7fad0  (orig 0xb7fad0, tailcall)
void main_f_b7fad0() { main::sub_b77350(); }

// sub_b7fb50  (orig 0xb7fb50, tailcall)
uint64_t main_f_b7fb50(void* a0) {
    return main::sub_b77350(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b7fb60  (orig 0xb7fb60, tailcall)
uint64_t main_f_b7fb60(void* a0) {
    return main::sub_b77350(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b7fd50  (orig 0xb7fd50, tailcall)
uint64_t main_f_b7fd50(void* a0) {
    return main::sub_b77350(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b7fd60  (orig 0xb7fd60, tailcall)
uint64_t main_f_b7fd60(void* a0) {
    return main::sub_b77350(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b80a60  (orig 0xb80a60, tailcall)
void main_f_b80a60() { main::sub_b80850(); }

// sub_b80b20  (orig 0xb80b20, tailcall)
uint64_t main_f_b80b20(void* a0) {
    return main::sub_b80850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b80b30  (orig 0xb80b30, tailcall)
uint64_t main_f_b80b30(void* a0) {
    return main::sub_b80850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b80ca0  (orig 0xb80ca0, tailcall)
uint64_t main_f_b80ca0(void* a0) {
    return main::sub_b80850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b80cb0  (orig 0xb80cb0, tailcall)
uint64_t main_f_b80cb0(void* a0) {
    return main::sub_b80850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b830d0  (orig 0xb830d0, tailcall)
uint64_t main_f_b830d0(void* a0) {
    return main::sub_b82fb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b830e0  (orig 0xb830e0, tailcall)
void main_f_b830e0() { main::sub_b82fb0(); }

// sub_b830f0  (orig 0xb830f0, tailcall)
uint64_t main_f_b830f0(void* a0) {
    return main::sub_b82fb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b843a0  (orig 0xb843a0, tailcall)
void main_f_b843a0() { main::sub_b49230(); }

// sub_b843e0  (orig 0xb843e0, tailcall)
void main_f_b843e0() { main::sub_b493d0(); }

// sub_b85090  (orig 0xb85090, tailcall)
uint64_t main_f_b85090(void* a0) {
    return main::sub_b84f60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b850a0  (orig 0xb850a0, tailcall)
uint64_t main_f_b850a0(void* a0) {
    return main::sub_b84f60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b850b0  (orig 0xb850b0, tailcall)
void main_f_b850b0() { main::sub_b84f60(); }

// sub_b850c0  (orig 0xb850c0, tailcall)
uint64_t main_f_b850c0(void* a0) {
    return main::sub_b84f60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b850d0  (orig 0xb850d0, tailcall)
uint64_t main_f_b850d0(void* a0) {
    return main::sub_b84f60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b85680  (orig 0xb85680, tailcall)
uint64_t main_f_b85680(void* a0) {
    return main::sub_b854f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b85690  (orig 0xb85690, tailcall)
uint64_t main_f_b85690(void* a0) {
    return main::sub_b854f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b856a0  (orig 0xb856a0, tailcall)
void main_f_b856a0() { main::sub_b854f0(); }

// sub_b856b0  (orig 0xb856b0, tailcall)
uint64_t main_f_b856b0(void* a0) {
    return main::sub_b854f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b856c0  (orig 0xb856c0, tailcall)
uint64_t main_f_b856c0(void* a0) {
    return main::sub_b854f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b867f0  (orig 0xb867f0, tailcall)
void main_f_b867f0() { main::sub_b866b0(); }

// sub_b868f0  (orig 0xb868f0, tailcall)
uint64_t main_f_b868f0(void* a0) {
    return main::sub_b866b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b86900  (orig 0xb86900, tailcall)
uint64_t main_f_b86900(void* a0) {
    return main::sub_b866b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b86910  (orig 0xb86910, tailcall)
uint64_t main_f_b86910(void* a0) {
    return main::sub_b86800(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b86920  (orig 0xb86920, tailcall)
uint64_t main_f_b86920(void* a0) {
    return main::sub_b86800(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b86930  (orig 0xb86930, tailcall)
uint64_t main_f_b86930(void* a0) {
    return main::sub_b866b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b86940  (orig 0xb86940, tailcall)
uint64_t main_f_b86940(void* a0) {
    return main::sub_b866b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b871a0  (orig 0xb871a0, tailcall)
uint64_t main_f_b871a0(void* a0) {
    return main::sub_b86f10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b871b0  (orig 0xb871b0, tailcall)
uint64_t main_f_b871b0(void* a0) {
    return main::sub_b86f10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b871c0  (orig 0xb871c0, tailcall)
void main_f_b871c0() { main::sub_b86f10(); }

// sub_b871d0  (orig 0xb871d0, tailcall)
uint64_t main_f_b871d0(void* a0) {
    return main::sub_b86f10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b871e0  (orig 0xb871e0, tailcall)
uint64_t main_f_b871e0(void* a0) {
    return main::sub_b86f10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b8ca90  (orig 0xb8ca90, tailcall)
void main_f_b8ca90() { main::sub_b465b0(); }

// sub_b8cb10  (orig 0xb8cb10, tailcall)
uint64_t main_f_b8cb10(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b8cb20  (orig 0xb8cb20, tailcall)
uint64_t main_f_b8cb20(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b8cc10  (orig 0xb8cc10, tailcall)
uint64_t main_f_b8cc10(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b8cc20  (orig 0xb8cc20, tailcall)
uint64_t main_f_b8cc20(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b8cda0  (orig 0xb8cda0, tailcall)
uint64_t main_f_b8cda0(void* a0) {
    return main::sub_b8cc30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b8cdb0  (orig 0xb8cdb0, tailcall)
uint64_t main_f_b8cdb0(void* a0) {
    return main::sub_b8cc30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b8cdc0  (orig 0xb8cdc0, tailcall)
void main_f_b8cdc0() { main::sub_b8cc30(); }

// sub_b8cdd0  (orig 0xb8cdd0, tailcall)
uint64_t main_f_b8cdd0(void* a0) {
    return main::sub_b8cc30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b8cde0  (orig 0xb8cde0, tailcall)
uint64_t main_f_b8cde0(void* a0) {
    return main::sub_b8cc30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b8fc20  (orig 0xb8fc20, tailcall)
void main_f_b8fc20() { main::sub_b3f380(); }

// sub_b8fc30  (orig 0xb8fc30, tailcall)
void main_f_b8fc30() { main::sub_b3f3a0(); }

// sub_b8fc40  (orig 0xb8fc40, tailcall)
void main_f_b8fc40() { main::sub_b3f3f0(); }

// sub_b90260  (orig 0xb90260, tailcall)
void main_f_b90260() { main::sub_b3fbd0(); }

// sub_b94120  (orig 0xb94120, tailcall)
void main_f_b94120() { main::sub_b3adb0(); }

// sub_b94140  (orig 0xb94140, tailcall)
void main_f_b94140() { main::sub_b3adb0(); }

// sub_b94150  (orig 0xb94150, tailcall)
void main_f_b94150() { main::sub_b3adb0(); }

// sub_b95710  (orig 0xb95710, tailcall)
void main_f_b95710() { main::sub_b465b0(); }

// sub_b95790  (orig 0xb95790, tailcall)
uint64_t main_f_b95790(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b957a0  (orig 0xb957a0, tailcall)
uint64_t main_f_b957a0(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b95890  (orig 0xb95890, tailcall)
uint64_t main_f_b95890(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b958a0  (orig 0xb958a0, tailcall)
uint64_t main_f_b958a0(void* a0) {
    return main::sub_b465b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b991a0  (orig 0xb991a0, tailcall)
void main_f_b991a0() { main::sub_ce0(); }

// sub_b99220  (orig 0xb99220, tailcall)
void main_f_b99220() { main::sub_ce0(); }

// sub_b99530  (orig 0xb99530, tailcall)
void main_f_b99530() { main::sub_ce0(); }

// sub_b995b0  (orig 0xb995b0, tailcall)
void main_f_b995b0() { main::sub_ce0(); }

// sub_b998c0  (orig 0xb998c0, tailcall)
void main_f_b998c0() { main::sub_ce0(); }

// sub_b99940  (orig 0xb99940, tailcall)
void main_f_b99940() { main::sub_ce0(); }

// sub_b99d90  (orig 0xb99d90, tailcall)
void main_f_b99d90() { main::sub_ce0(); }

// sub_b99e10  (orig 0xb99e10, tailcall)
void main_f_b99e10() { main::sub_ce0(); }

// sub_b99fc0  (orig 0xb99fc0, tailcall)
void main_f_b99fc0() { main::sub_ce0(); }

// sub_b9a040  (orig 0xb9a040, tailcall)
void main_f_b9a040() { main::sub_ce0(); }

// sub_b9a1f0  (orig 0xb9a1f0, tailcall)
void main_f_b9a1f0() { main::sub_ce0(); }

// sub_b9a270  (orig 0xb9a270, tailcall)
void main_f_b9a270() { main::sub_ce0(); }

// sub_b9a2d0  (orig 0xb9a2d0, tailcall)
void main_f_b9a2d0() { main::sub_ce0(); }

// sub_b9a350  (orig 0xb9a350, tailcall)
void main_f_b9a350() { main::sub_ce0(); }

// sub_b9f0b0  (orig 0xb9f0b0, tailcall)
void main_f_b9f0b0() { main::sub_b9eec0(); }

// sub_b9f160  (orig 0xb9f160, tailcall)
uint64_t main_f_b9f160(void* a0) {
    return main::sub_b9eec0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b9f170  (orig 0xb9f170, tailcall)
uint64_t main_f_b9f170(void* a0) {
    return main::sub_b9eec0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_b9f260  (orig 0xb9f260, tailcall)
uint64_t main_f_b9f260(void* a0) {
    return main::sub_b9eec0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b9f270  (orig 0xb9f270, tailcall)
uint64_t main_f_b9f270(void* a0) {
    return main::sub_b9eec0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_b9f5f0  (orig 0xb9f5f0, tailcall)
void main_f_b9f5f0() { main::sub_b946e0(); }

// sub_b9f7a0  (orig 0xb9f7a0, tailcall)
void main_f_b9f7a0() { main::sub_b946e0(); }

// sub_b9f7b0  (orig 0xb9f7b0, tailcall)
void main_f_b9f7b0() { main::sub_b946e0(); }

// sub_ba1360  (orig 0xba1360, tailcall)
void main_f_ba1360() { main::sub_ba1390(); }

// sub_ba1370  (orig 0xba1370, tailcall)
void main_f_ba1370() { main::sub_ba1390(); }

// sub_ba1380  (orig 0xba1380, tailcall)
void main_f_ba1380() { main::sub_ba1390(); }

// sub_ba1cc0  (orig 0xba1cc0, tailcall)
uint64_t main_f_ba1cc0(void* a0) {
    return main::sub_ba19f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ba1cd0  (orig 0xba1cd0, tailcall)
uint64_t main_f_ba1cd0(void* a0) {
    return main::sub_ba19f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ba2470  (orig 0xba2470, tailcall)
uint64_t main_f_ba2470(void* a0) {
    return main::sub_ba2260(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ba2480  (orig 0xba2480, tailcall)
uint64_t main_f_ba2480(void* a0) {
    return main::sub_ba2260(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ba3b80  (orig 0xba3b80, tailcall)
void main_f_ba3b80() { main::sub_ba39c0(); }

// sub_ba3c40  (orig 0xba3c40, tailcall)
uint64_t main_f_ba3c40(void* a0) {
    return main::sub_ba39c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ba3c50  (orig 0xba3c50, tailcall)
uint64_t main_f_ba3c50(void* a0) {
    return main::sub_ba39c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ba3dc0  (orig 0xba3dc0, tailcall)
uint64_t main_f_ba3dc0(void* a0) {
    return main::sub_ba39c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ba3dd0  (orig 0xba3dd0, tailcall)
uint64_t main_f_ba3dd0(void* a0) {
    return main::sub_ba39c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ba4610  (orig 0xba4610, tailcall)
void main_f_ba4610() { main::sub_ba44c0(); }

// sub_ba4620  (orig 0xba4620, tailcall)
void main_f_ba4620() { main::sub_ba4690(); }

// sub_ba4630  (orig 0xba4630, tailcall)
uint64_t main_f_ba4630(void* a0) {
    return main::sub_ba44c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ba4640  (orig 0xba4640, tailcall)
uint64_t main_f_ba4640(void* a0) {
    return main::sub_ba44c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_ba4650  (orig 0xba4650, tailcall)
void main_f_ba4650() { main::sub_ba4690(); }

// sub_ba4660  (orig 0xba4660, tailcall)
void main_f_ba4660() { main::sub_ba4690(); }

// sub_ba4670  (orig 0xba4670, tailcall)
uint64_t main_f_ba4670(void* a0) {
    return main::sub_ba44c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ba4680  (orig 0xba4680, tailcall)
uint64_t main_f_ba4680(void* a0) {
    return main::sub_ba44c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_ba7a20  (orig 0xba7a20, tailcall)
void main_f_ba7a20() { main::sub_ba5440(); }

// sub_ba7b30  (orig 0xba7b30, tailcall)
void main_f_ba7b30() { main::sub_ba5440(); }

// sub_ba7b40  (orig 0xba7b40, tailcall)
void main_f_ba7b40() { main::sub_ba5440(); }

// sub_bb1690  (orig 0xbb1690, tailcall)
uint64_t main_f_bb1690(void* a0) {
    return main::pointer_3(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_bb4460  (orig 0xbb4460, tailcall)
uint64_t main_f_bb4460(void* a0) {
    return main::sub_bb4170(((uintptr_t)((char*)(a0) - 416)));
}

// sub_bb46f0  (orig 0xbb46f0, tailcall)
void main_f_bb46f0() { main::sub_bb4d40(); }

// sub_bb48e0  (orig 0xbb48e0, tailcall)
void main_f_bb48e0() { main::sub_bb4d40(); }

// sub_bb48f0  (orig 0xbb48f0, tailcall)
void main_f_bb48f0() { main::sub_bb4d40(); }

// sub_bb5d10  (orig 0xbb5d10, tailcall)
void main_f_bb5d10() { main::sub_bb5bc0(); }

// sub_bb5e10  (orig 0xbb5e10, tailcall)
uint64_t main_f_bb5e10(void* a0) {
    return main::sub_bb5bc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bb5e20  (orig 0xbb5e20, tailcall)
uint64_t main_f_bb5e20(void* a0) {
    return main::sub_bb5bc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bb5e30  (orig 0xbb5e30, tailcall)
uint64_t main_f_bb5e30(void* a0) {
    return main::sub_bb5d20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bb5e40  (orig 0xbb5e40, tailcall)
uint64_t main_f_bb5e40(void* a0) {
    return main::sub_bb5d20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bb5e50  (orig 0xbb5e50, tailcall)
uint64_t main_f_bb5e50(void* a0) {
    return main::sub_bb5bc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bb5e60  (orig 0xbb5e60, tailcall)
uint64_t main_f_bb5e60(void* a0) {
    return main::sub_bb5bc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bb5e70  (orig 0xbb5e70, tailcall)
uint64_t main_f_bb5e70(void* a0) {
    return main::sub_bb5bc0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_bb5e80  (orig 0xbb5e80, tailcall)
uint64_t main_f_bb5e80(void* a0) {
    return main::sub_bb5bc0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_bb6260  (orig 0xbb6260, tailcall)
void main_f_bb6260() { main::sub_bb6070(); }

// sub_bb69e0  (orig 0xbb69e0, tailcall)
uint64_t main_f_bb69e0(void* a0) {
    return main::sub_bb6070(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bb69f0  (orig 0xbb69f0, tailcall)
uint64_t main_f_bb69f0(void* a0) {
    return main::sub_bb6070(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bb6a00  (orig 0xbb6a00, tailcall)
uint64_t main_f_bb6a00(void* a0) {
    return main::sub_bb6270(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bb6a10  (orig 0xbb6a10, tailcall)
uint64_t main_f_bb6a10(void* a0) {
    return main::sub_bb6270(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bb6a20  (orig 0xbb6a20, tailcall)
uint64_t main_f_bb6a20(void* a0) {
    return main::sub_bb6070(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bb6a30  (orig 0xbb6a30, tailcall)
uint64_t main_f_bb6a30(void* a0) {
    return main::sub_bb6070(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bb6be0  (orig 0xbb6be0, tailcall)
uint64_t main_f_bb6be0(void* a0) {
    return main::sub_bb65e0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_bb6bf0  (orig 0xbb6bf0, tailcall)
uint64_t main_f_bb6bf0(void* a0) {
    return main::sub_bb6760(((uintptr_t)((char*)(a0) - 104)));
}

// sub_bb6c00  (orig 0xbb6c00, tailcall)
uint64_t main_f_bb6c00(void* a0) {
    return main::sub_bb6470(((uintptr_t)((char*)(a0) - 104)));
}

// sub_bb8e10  (orig 0xbb8e10, tailcall)
void main_f_bb8e10() { main::contents_comp_organize_data_holder_2(); }

// sub_bb99a0  (orig 0xbb99a0, tailcall)
void main_f_bb99a0() { main::contents_regulation_2(); }

// sub_bbbff0  (orig 0xbbbff0, tailcall)
uint64_t main_f_bbbff0(void* a0) {
    return main::sub_ba7db0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 408))));
}

// sub_bbcf60  (orig 0xbbcf60, tailcall)
uint64_t main_f_bbcf60(void* a0) {
    return main::sub_bbc450(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_bbe9e0  (orig 0xbbe9e0, tailcall)
uint64_t main_f_bbe9e0(void* a0) {
    return main::sub_ba7db0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 408))));
}

// sub_bbf820  (orig 0xbbf820, tailcall)
uint64_t main_f_bbf820(void* a0) {
    return main::sub_bbf1e0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_bc0e90  (orig 0xbc0e90, tailcall)
uint64_t main_f_bc0e90(void* a0) {
    return main::sub_bc0c30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bc0ea0  (orig 0xbc0ea0, tailcall)
uint64_t main_f_bc0ea0(void* a0) {
    return main::sub_bc0c30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bc0eb0  (orig 0xbc0eb0, tailcall)
void main_f_bc0eb0() { main::sub_bc0c30(); }

// sub_bc0ec0  (orig 0xbc0ec0, tailcall)
uint64_t main_f_bc0ec0(void* a0) {
    return main::sub_bc0c30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bc0ed0  (orig 0xbc0ed0, tailcall)
uint64_t main_f_bc0ed0(void* a0) {
    return main::sub_bc0c30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bc64e0  (orig 0xbc64e0, tailcall)
uint64_t main_f_bc64e0(void* a0) {
    return main::sub_c182b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 696))));
}

// sub_bc7680  (orig 0xbc7680, tailcall)
void main_f_bc7680() { main::sub_ce0(); }

// sub_bc7a00  (orig 0xbc7a00, tailcall)
void main_f_bc7a00() { main::sub_bc78a0(); }

// sub_bc7aa0  (orig 0xbc7aa0, tailcall)
uint64_t main_f_bc7aa0(void* a0) {
    return main::sub_bc78a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bc7ab0  (orig 0xbc7ab0, tailcall)
uint64_t main_f_bc7ab0(void* a0) {
    return main::sub_bc78a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bc7bc0  (orig 0xbc7bc0, tailcall)
uint64_t main_f_bc7bc0(void* a0) {
    return main::sub_bc78a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bc7bd0  (orig 0xbc7bd0, tailcall)
uint64_t main_f_bc7bd0(void* a0) {
    return main::sub_bc78a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bc9b70  (orig 0xbc9b70, tailcall)
void main_f_bc9b70() { main::sub_bd0880(); }

// sub_bc9ca0  (orig 0xbc9ca0, tailcall)
uint64_t main_f_bc9ca0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bc9cb0  (orig 0xbc9cb0, tailcall)
uint64_t main_f_bc9cb0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bc9da0  (orig 0xbc9da0, tailcall)
uint64_t main_f_bc9da0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bc9db0  (orig 0xbc9db0, tailcall)
uint64_t main_f_bc9db0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bc9dc0  (orig 0xbc9dc0, tailcall)
void main_f_bc9dc0() { main::sub_bd0880(); }

// sub_bc9dd0  (orig 0xbc9dd0, tailcall)
void main_f_bc9dd0() { main::sub_bc8a00(); }

// sub_bc9e00  (orig 0xbc9e00, tailcall)
uint64_t main_f_bc9e00(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bc9e10  (orig 0xbc9e10, tailcall)
uint64_t main_f_bc9e10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bc9e20  (orig 0xbc9e20, tailcall)
void main_f_bc9e20() { main::sub_bc8a00(); }

// sub_bc9e30  (orig 0xbc9e30, tailcall)
void main_f_bc9e30() { main::sub_bc8a00(); }

// sub_bc9e40  (orig 0xbc9e40, tailcall)
uint64_t main_f_bc9e40(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bc9e50  (orig 0xbc9e50, tailcall)
uint64_t main_f_bc9e50(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bc9e60  (orig 0xbc9e60, tailcall)
void main_f_bc9e60() { main::sub_bc9e80(); }

// sub_bca290  (orig 0xbca290, tailcall)
void main_f_bca290() { main::sub_bd0880(); }

// sub_bca3a0  (orig 0xbca3a0, tailcall)
uint64_t main_f_bca3a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bca3b0  (orig 0xbca3b0, tailcall)
uint64_t main_f_bca3b0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bca4a0  (orig 0xbca4a0, tailcall)
uint64_t main_f_bca4a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bca4b0  (orig 0xbca4b0, tailcall)
uint64_t main_f_bca4b0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bcabb0  (orig 0xbcabb0, tailcall)
void main_f_bcabb0() { main::sub_bd0880(); }

// sub_bcad40  (orig 0xbcad40, tailcall)
uint64_t main_f_bcad40(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bcad50  (orig 0xbcad50, tailcall)
uint64_t main_f_bcad50(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bcae40  (orig 0xbcae40, tailcall)
uint64_t main_f_bcae40(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bcae50  (orig 0xbcae50, tailcall)
uint64_t main_f_bcae50(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bcb400  (orig 0xbcb400, tailcall)
void main_f_bcb400() { main::sub_bd0880(); }

// sub_bcb590  (orig 0xbcb590, tailcall)
uint64_t main_f_bcb590(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bcb5a0  (orig 0xbcb5a0, tailcall)
uint64_t main_f_bcb5a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bcb690  (orig 0xbcb690, tailcall)
uint64_t main_f_bcb690(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bcb6a0  (orig 0xbcb6a0, tailcall)
uint64_t main_f_bcb6a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bcc650  (orig 0xbcc650, tailcall)
void main_f_bcc650() { main::sub_bcc670(); }

// sub_bcd280  (orig 0xbcd280, tailcall)
void main_f_bcd280() { main::sub_bd0880(); }

// sub_bcd3e0  (orig 0xbcd3e0, tailcall)
uint64_t main_f_bcd3e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bcd3f0  (orig 0xbcd3f0, tailcall)
uint64_t main_f_bcd3f0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bcd4e0  (orig 0xbcd4e0, tailcall)
uint64_t main_f_bcd4e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bcd4f0  (orig 0xbcd4f0, tailcall)
uint64_t main_f_bcd4f0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bcd850  (orig 0xbcd850, tailcall)
void main_f_bcd850() { main::sub_bd0880(); }

// sub_bcd9c0  (orig 0xbcd9c0, tailcall)
uint64_t main_f_bcd9c0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bcd9d0  (orig 0xbcd9d0, tailcall)
uint64_t main_f_bcd9d0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bcdac0  (orig 0xbcdac0, tailcall)
uint64_t main_f_bcdac0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bcdad0  (orig 0xbcdad0, tailcall)
uint64_t main_f_bcdad0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bce600  (orig 0xbce600, tailcall)
void main_f_bce600() { main::sub_bce620(); }

// sub_bceff0  (orig 0xbceff0, tailcall)
void main_f_bceff0() { main::sub_bcf010(); }

// sub_bcf420  (orig 0xbcf420, tailcall)
void main_f_bcf420() { main::sub_bcf440(); }

// sub_bcfca0  (orig 0xbcfca0, tailcall)
void main_f_bcfca0() { main::sub_bd0880(); }

// sub_bd0400  (orig 0xbd0400, tailcall)
uint64_t main_f_bd0400(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd0410  (orig 0xbd0410, tailcall)
uint64_t main_f_bd0410(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd0580  (orig 0xbd0580, tailcall)
uint64_t main_f_bd0580(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd0590  (orig 0xbd0590, tailcall)
uint64_t main_f_bd0590(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd09e0  (orig 0xbd09e0, tailcall)
void main_f_bd09e0() { main::sub_bd0880(); }

// sub_bd09f0  (orig 0xbd09f0, tailcall)
uint64_t main_f_bd09f0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd0a00  (orig 0xbd0a00, tailcall)
uint64_t main_f_bd0a00(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd0a10  (orig 0xbd0a10, tailcall)
uint64_t main_f_bd0a10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd0a20  (orig 0xbd0a20, tailcall)
uint64_t main_f_bd0a20(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd0e50  (orig 0xbd0e50, tailcall)
void main_f_bd0e50() { main::sub_bd0880(); }

// sub_bd0f90  (orig 0xbd0f90, tailcall)
uint64_t main_f_bd0f90(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd0fa0  (orig 0xbd0fa0, tailcall)
uint64_t main_f_bd0fa0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd1090  (orig 0xbd1090, tailcall)
uint64_t main_f_bd1090(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd10a0  (orig 0xbd10a0, tailcall)
uint64_t main_f_bd10a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd1450  (orig 0xbd1450, tailcall)
void main_f_bd1450() { main::sub_bd0880(); }

// sub_bd1550  (orig 0xbd1550, tailcall)
uint64_t main_f_bd1550(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd1560  (orig 0xbd1560, tailcall)
uint64_t main_f_bd1560(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd1650  (orig 0xbd1650, tailcall)
uint64_t main_f_bd1650(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd1660  (orig 0xbd1660, tailcall)
uint64_t main_f_bd1660(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd1860  (orig 0xbd1860, tailcall)
void main_f_bd1860() { main::sub_bd0880(); }

// sub_bd19c0  (orig 0xbd19c0, tailcall)
uint64_t main_f_bd19c0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd19d0  (orig 0xbd19d0, tailcall)
uint64_t main_f_bd19d0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd1ac0  (orig 0xbd1ac0, tailcall)
uint64_t main_f_bd1ac0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd1ad0  (orig 0xbd1ad0, tailcall)
uint64_t main_f_bd1ad0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd1ed0  (orig 0xbd1ed0, tailcall)
void main_f_bd1ed0() { main::sub_bd0880(); }

// sub_bd2040  (orig 0xbd2040, tailcall)
uint64_t main_f_bd2040(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd2050  (orig 0xbd2050, tailcall)
uint64_t main_f_bd2050(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd2140  (orig 0xbd2140, tailcall)
uint64_t main_f_bd2140(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd2150  (orig 0xbd2150, tailcall)
uint64_t main_f_bd2150(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd33f0  (orig 0xbd33f0, tailcall)
void main_f_bd33f0() { main::sub_bd0880(); }

// sub_bd3500  (orig 0xbd3500, tailcall)
uint64_t main_f_bd3500(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd3510  (orig 0xbd3510, tailcall)
uint64_t main_f_bd3510(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd3600  (orig 0xbd3600, tailcall)
uint64_t main_f_bd3600(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd3610  (orig 0xbd3610, tailcall)
uint64_t main_f_bd3610(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd3d80  (orig 0xbd3d80, tailcall)
void main_f_bd3d80() { main::sub_bd3da0(); }

// sub_bd53a0  (orig 0xbd53a0, tailcall)
void main_f_bd53a0() { main::sub_bd53c0(); }

// sub_bd6060  (orig 0xbd6060, tailcall)
void main_f_bd6060() { main::sub_bd0880(); }

// sub_bd61b0  (orig 0xbd61b0, tailcall)
uint64_t main_f_bd61b0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd61c0  (orig 0xbd61c0, tailcall)
uint64_t main_f_bd61c0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd62b0  (orig 0xbd62b0, tailcall)
uint64_t main_f_bd62b0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd62c0  (orig 0xbd62c0, tailcall)
uint64_t main_f_bd62c0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd62d0  (orig 0xbd62d0, tailcall)
void main_f_bd62d0() { main::sub_bd62f0(); }

// sub_bd7140  (orig 0xbd7140, tailcall)
void main_f_bd7140() { main::sub_bd0880(); }

// sub_bd72e0  (orig 0xbd72e0, tailcall)
uint64_t main_f_bd72e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd72f0  (orig 0xbd72f0, tailcall)
uint64_t main_f_bd72f0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd73e0  (orig 0xbd73e0, tailcall)
uint64_t main_f_bd73e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd73f0  (orig 0xbd73f0, tailcall)
uint64_t main_f_bd73f0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd78c0  (orig 0xbd78c0, tailcall)
void main_f_bd78c0() { main::sub_bd0880(); }

// sub_bd7a50  (orig 0xbd7a50, tailcall)
uint64_t main_f_bd7a50(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd7a60  (orig 0xbd7a60, tailcall)
uint64_t main_f_bd7a60(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd7b50  (orig 0xbd7b50, tailcall)
uint64_t main_f_bd7b50(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd7b60  (orig 0xbd7b60, tailcall)
uint64_t main_f_bd7b60(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd7b70  (orig 0xbd7b70, tailcall)
void main_f_bd7b70() { main::sub_bd7b90(); }

// sub_bd7de0  (orig 0xbd7de0, tailcall)
void main_f_bd7de0() { main::sub_bd0880(); }

// sub_bd8070  (orig 0xbd8070, tailcall)
uint64_t main_f_bd8070(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd8080  (orig 0xbd8080, tailcall)
uint64_t main_f_bd8080(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd8170  (orig 0xbd8170, tailcall)
uint64_t main_f_bd8170(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd8180  (orig 0xbd8180, tailcall)
uint64_t main_f_bd8180(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd8430  (orig 0xbd8430, tailcall)
void main_f_bd8430() { main::sub_bd0880(); }

// sub_bd8630  (orig 0xbd8630, tailcall)
uint64_t main_f_bd8630(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd8640  (orig 0xbd8640, tailcall)
uint64_t main_f_bd8640(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd8730  (orig 0xbd8730, tailcall)
uint64_t main_f_bd8730(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd8740  (orig 0xbd8740, tailcall)
uint64_t main_f_bd8740(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd8c80  (orig 0xbd8c80, tailcall)
void main_f_bd8c80() { main::sub_bd0880(); }

// sub_bd8da0  (orig 0xbd8da0, tailcall)
uint64_t main_f_bd8da0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd8db0  (orig 0xbd8db0, tailcall)
uint64_t main_f_bd8db0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bd8ea0  (orig 0xbd8ea0, tailcall)
uint64_t main_f_bd8ea0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd8eb0  (orig 0xbd8eb0, tailcall)
uint64_t main_f_bd8eb0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bd98a0  (orig 0xbd98a0, tailcall)
void main_f_bd98a0() { main::sub_bd98c0(); }

// sub_bda540  (orig 0xbda540, tailcall)
void main_f_bda540() { main::sub_bda560(); }

// sub_bdaef0  (orig 0xbdaef0, tailcall)
void main_f_bdaef0() { main::sub_bdaf10(); }

// sub_bdbae0  (orig 0xbdbae0, tailcall)
void main_f_bdbae0() { main::sub_bdbb00(); }

// sub_bdc400  (orig 0xbdc400, tailcall)
void main_f_bdc400() { main::sub_bdc420(); }

// sub_bdcdb0  (orig 0xbdcdb0, tailcall)
void main_f_bdcdb0() { main::sub_bdcdd0(); }

// sub_bdd1f0  (orig 0xbdd1f0, tailcall)
void main_f_bdd1f0() { main::sub_bd0880(); }

// sub_bdd460  (orig 0xbdd460, tailcall)
uint64_t main_f_bdd460(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bdd470  (orig 0xbdd470, tailcall)
uint64_t main_f_bdd470(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bdd560  (orig 0xbdd560, tailcall)
uint64_t main_f_bdd560(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bdd570  (orig 0xbdd570, tailcall)
uint64_t main_f_bdd570(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bdd760  (orig 0xbdd760, tailcall)
void main_f_bdd760() { main::sub_bd0880(); }

// sub_bdd900  (orig 0xbdd900, tailcall)
uint64_t main_f_bdd900(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bdd910  (orig 0xbdd910, tailcall)
uint64_t main_f_bdd910(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bdda00  (orig 0xbdda00, tailcall)
uint64_t main_f_bdda00(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bdda10  (orig 0xbdda10, tailcall)
uint64_t main_f_bdda10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bdda20  (orig 0xbdda20, tailcall)
void main_f_bdda20() { main::EffCenter01(); }

// sub_bde1a0  (orig 0xbde1a0, tailcall)
void main_f_bde1a0() { main::sub_bd0880(); }

// sub_bde570  (orig 0xbde570, tailcall)
uint64_t main_f_bde570(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bde580  (orig 0xbde580, tailcall)
uint64_t main_f_bde580(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bde670  (orig 0xbde670, tailcall)
uint64_t main_f_bde670(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bde680  (orig 0xbde680, tailcall)
uint64_t main_f_bde680(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bdeec0  (orig 0xbdeec0, tailcall)
void main_f_bdeec0() { main::sub_bd0880(); }

// sub_bdf0e0  (orig 0xbdf0e0, tailcall)
uint64_t main_f_bdf0e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bdf0f0  (orig 0xbdf0f0, tailcall)
uint64_t main_f_bdf0f0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bdf1e0  (orig 0xbdf1e0, tailcall)
uint64_t main_f_bdf1e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bdf1f0  (orig 0xbdf1f0, tailcall)
uint64_t main_f_bdf1f0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bdf530  (orig 0xbdf530, tailcall)
void main_f_bdf530() { main::sub_bd0880(); }

// sub_bdf670  (orig 0xbdf670, tailcall)
uint64_t main_f_bdf670(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bdf680  (orig 0xbdf680, tailcall)
uint64_t main_f_bdf680(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bdf770  (orig 0xbdf770, tailcall)
uint64_t main_f_bdf770(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bdf780  (orig 0xbdf780, tailcall)
uint64_t main_f_bdf780(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bdf940  (orig 0xbdf940, tailcall)
void main_f_bdf940() { main::sub_bd0880(); }

// sub_bdfb00  (orig 0xbdfb00, tailcall)
uint64_t main_f_bdfb00(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bdfb10  (orig 0xbdfb10, tailcall)
uint64_t main_f_bdfb10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bdfc00  (orig 0xbdfc00, tailcall)
uint64_t main_f_bdfc00(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bdfc10  (orig 0xbdfc10, tailcall)
uint64_t main_f_bdfc10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bdff10  (orig 0xbdff10, tailcall)
void main_f_bdff10() { main::sub_bd0880(); }

// sub_be00d0  (orig 0xbe00d0, tailcall)
uint64_t main_f_be00d0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be00e0  (orig 0xbe00e0, tailcall)
uint64_t main_f_be00e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be01d0  (orig 0xbe01d0, tailcall)
uint64_t main_f_be01d0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be01e0  (orig 0xbe01e0, tailcall)
uint64_t main_f_be01e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be04e0  (orig 0xbe04e0, tailcall)
void main_f_be04e0() { main::sub_bd0880(); }

// sub_be06a0  (orig 0xbe06a0, tailcall)
uint64_t main_f_be06a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be06b0  (orig 0xbe06b0, tailcall)
uint64_t main_f_be06b0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be07a0  (orig 0xbe07a0, tailcall)
uint64_t main_f_be07a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be07b0  (orig 0xbe07b0, tailcall)
uint64_t main_f_be07b0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be0ae0  (orig 0xbe0ae0, tailcall)
void main_f_be0ae0() { main::sub_bd0880(); }

// sub_be0b80  (orig 0xbe0b80, tailcall)
uint64_t main_f_be0b80(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be0b90  (orig 0xbe0b90, tailcall)
uint64_t main_f_be0b90(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be0c80  (orig 0xbe0c80, tailcall)
uint64_t main_f_be0c80(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be0c90  (orig 0xbe0c90, tailcall)
uint64_t main_f_be0c90(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be0db0  (orig 0xbe0db0, tailcall)
void main_f_be0db0() { main::sub_bd0880(); }

// sub_be0ef0  (orig 0xbe0ef0, tailcall)
uint64_t main_f_be0ef0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be0f00  (orig 0xbe0f00, tailcall)
uint64_t main_f_be0f00(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be0ff0  (orig 0xbe0ff0, tailcall)
uint64_t main_f_be0ff0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be1000  (orig 0xbe1000, tailcall)
uint64_t main_f_be1000(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be12c0  (orig 0xbe12c0, tailcall)
void main_f_be12c0() { main::sub_bd0880(); }

// sub_be1380  (orig 0xbe1380, tailcall)
uint64_t main_f_be1380(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be1390  (orig 0xbe1390, tailcall)
uint64_t main_f_be1390(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be1480  (orig 0xbe1480, tailcall)
uint64_t main_f_be1480(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be1490  (orig 0xbe1490, tailcall)
uint64_t main_f_be1490(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be15b0  (orig 0xbe15b0, tailcall)
void main_f_be15b0() { main::sub_bd0880(); }

// sub_be1720  (orig 0xbe1720, tailcall)
uint64_t main_f_be1720(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be1730  (orig 0xbe1730, tailcall)
uint64_t main_f_be1730(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be1820  (orig 0xbe1820, tailcall)
uint64_t main_f_be1820(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be1830  (orig 0xbe1830, tailcall)
uint64_t main_f_be1830(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be1840  (orig 0xbe1840, tailcall)
void main_f_be1840() { main::sub_be1860(); }

// sub_be1c90  (orig 0xbe1c90, tailcall)
void main_f_be1c90() { main::sub_be1cb0(); }

// sub_be2750  (orig 0xbe2750, tailcall)
void main_f_be2750() { main::sub_bd0880(); }

// sub_be2930  (orig 0xbe2930, tailcall)
uint64_t main_f_be2930(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be2940  (orig 0xbe2940, tailcall)
uint64_t main_f_be2940(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be2a30  (orig 0xbe2a30, tailcall)
uint64_t main_f_be2a30(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be2a40  (orig 0xbe2a40, tailcall)
uint64_t main_f_be2a40(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be35f0  (orig 0xbe35f0, tailcall)
void main_f_be35f0() { main::sub_be3610(); }

// sub_be3c20  (orig 0xbe3c20, tailcall)
void main_f_be3c20() { main::sub_bd0880(); }

// sub_be3e00  (orig 0xbe3e00, tailcall)
uint64_t main_f_be3e00(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be3e10  (orig 0xbe3e10, tailcall)
uint64_t main_f_be3e10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be3f00  (orig 0xbe3f00, tailcall)
uint64_t main_f_be3f00(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be3f10  (orig 0xbe3f10, tailcall)
uint64_t main_f_be3f10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be4b00  (orig 0xbe4b00, tailcall)
uint64_t main_f_be4b00(void* a0) {
    return main::sub_be4540(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_be4ef0  (orig 0xbe4ef0, tailcall)
void main_f_be4ef0() { main::sub_bd0880(); }

// sub_be4f90  (orig 0xbe4f90, tailcall)
uint64_t main_f_be4f90(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be4fa0  (orig 0xbe4fa0, tailcall)
uint64_t main_f_be4fa0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be5090  (orig 0xbe5090, tailcall)
uint64_t main_f_be5090(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be50a0  (orig 0xbe50a0, tailcall)
uint64_t main_f_be50a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be8130  (orig 0xbe8130, tailcall)
uint64_t main_f_be8130(void* a0) {
    return main::sub_be7f40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be8140  (orig 0xbe8140, tailcall)
uint64_t main_f_be8140(void* a0) {
    return main::sub_be7f40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be8740  (orig 0xbe8740, tailcall)
void main_f_be8740() { main::sub_bd0880(); }

// sub_be87d0  (orig 0xbe87d0, tailcall)
uint64_t main_f_be87d0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be87e0  (orig 0xbe87e0, tailcall)
uint64_t main_f_be87e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_be88d0  (orig 0xbe88d0, tailcall)
uint64_t main_f_be88d0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be88e0  (orig 0xbe88e0, tailcall)
uint64_t main_f_be88e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_be9d50  (orig 0xbe9d50, tailcall)
uint64_t main_f_be9d50(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return main::sub_1308340(((uintptr_t)(*(uint64_t*)((char*)(p0) + 880))));
}

// sub_bea680  (orig 0xbea680, tailcall)
void main_f_bea680() { main::sub_bd0880(); }

// sub_bea700  (orig 0xbea700, tailcall)
uint64_t main_f_bea700(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bea710  (orig 0xbea710, tailcall)
uint64_t main_f_bea710(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bea800  (orig 0xbea800, tailcall)
uint64_t main_f_bea800(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bea810  (orig 0xbea810, tailcall)
uint64_t main_f_bea810(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_beab30  (orig 0xbeab30, tailcall)
void main_f_beab30() { main::sub_bd0880(); }

// sub_beabb0  (orig 0xbeabb0, tailcall)
uint64_t main_f_beabb0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_beabc0  (orig 0xbeabc0, tailcall)
uint64_t main_f_beabc0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_beacb0  (orig 0xbeacb0, tailcall)
uint64_t main_f_beacb0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_beacc0  (orig 0xbeacc0, tailcall)
uint64_t main_f_beacc0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bec030  (orig 0xbec030, tailcall)
void main_f_bec030() { main::sub_bebe30(); }

// sub_bec0b0  (orig 0xbec0b0, tailcall)
uint64_t main_f_bec0b0(void* a0) {
    return main::sub_bebe30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bec0c0  (orig 0xbec0c0, tailcall)
uint64_t main_f_bec0c0(void* a0) {
    return main::sub_bebe30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bec1b0  (orig 0xbec1b0, tailcall)
uint64_t main_f_bec1b0(void* a0) {
    return main::sub_bebe30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bec1c0  (orig 0xbec1c0, tailcall)
uint64_t main_f_bec1c0(void* a0) {
    return main::sub_bebe30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_becb80  (orig 0xbecb80, tailcall)
void main_f_becb80() { main::sub_bd0880(); }

// sub_becc00  (orig 0xbecc00, tailcall)
uint64_t main_f_becc00(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_becc10  (orig 0xbecc10, tailcall)
uint64_t main_f_becc10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_becd00  (orig 0xbecd00, tailcall)
uint64_t main_f_becd00(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_becd10  (orig 0xbecd10, tailcall)
uint64_t main_f_becd10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bed8a0  (orig 0xbed8a0, tailcall)
void main_f_bed8a0() { main::sub_bed700(); }

// sub_bed920  (orig 0xbed920, tailcall)
uint64_t main_f_bed920(void* a0) {
    return main::sub_bed700(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bed930  (orig 0xbed930, tailcall)
uint64_t main_f_bed930(void* a0) {
    return main::sub_bed700(((uintptr_t)((char*)(a0) - 72)));
}

// sub_beda20  (orig 0xbeda20, tailcall)
uint64_t main_f_beda20(void* a0) {
    return main::sub_bed700(((uintptr_t)((char*)(a0) - 80)));
}

// sub_beda30  (orig 0xbeda30, tailcall)
uint64_t main_f_beda30(void* a0) {
    return main::sub_bed700(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bee360  (orig 0xbee360, tailcall)
void main_f_bee360() { main::sub_bee1e0(); }

// sub_bee3e0  (orig 0xbee3e0, tailcall)
uint64_t main_f_bee3e0(void* a0) {
    return main::sub_bee1e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bee3f0  (orig 0xbee3f0, tailcall)
uint64_t main_f_bee3f0(void* a0) {
    return main::sub_bee1e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bee4e0  (orig 0xbee4e0, tailcall)
uint64_t main_f_bee4e0(void* a0) {
    return main::sub_bee1e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bee4f0  (orig 0xbee4f0, tailcall)
uint64_t main_f_bee4f0(void* a0) {
    return main::sub_bee1e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_beeff0  (orig 0xbeeff0, tailcall)
void main_f_beeff0() { main::sub_bd0880(); }

// sub_bef070  (orig 0xbef070, tailcall)
uint64_t main_f_bef070(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bef080  (orig 0xbef080, tailcall)
uint64_t main_f_bef080(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bef170  (orig 0xbef170, tailcall)
uint64_t main_f_bef170(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bef180  (orig 0xbef180, tailcall)
uint64_t main_f_bef180(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf17e0  (orig 0xbf17e0, tailcall)
void main_f_bf17e0() { main::sub_bf1640(); }

// sub_bf1860  (orig 0xbf1860, tailcall)
uint64_t main_f_bf1860(void* a0) {
    return main::sub_bf1640(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf1870  (orig 0xbf1870, tailcall)
uint64_t main_f_bf1870(void* a0) {
    return main::sub_bf1640(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf1960  (orig 0xbf1960, tailcall)
uint64_t main_f_bf1960(void* a0) {
    return main::sub_bf1640(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf1970  (orig 0xbf1970, tailcall)
uint64_t main_f_bf1970(void* a0) {
    return main::sub_bf1640(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf1c50  (orig 0xbf1c50, tailcall)
void main_f_bf1c50() { main::sub_bd0880(); }

// sub_bf1cd0  (orig 0xbf1cd0, tailcall)
uint64_t main_f_bf1cd0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf1ce0  (orig 0xbf1ce0, tailcall)
uint64_t main_f_bf1ce0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf1dd0  (orig 0xbf1dd0, tailcall)
uint64_t main_f_bf1dd0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf1de0  (orig 0xbf1de0, tailcall)
uint64_t main_f_bf1de0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf24a0  (orig 0xbf24a0, tailcall)
void main_f_bf24a0() { main::sub_bd0880(); }

// sub_bf2520  (orig 0xbf2520, tailcall)
uint64_t main_f_bf2520(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf2530  (orig 0xbf2530, tailcall)
uint64_t main_f_bf2530(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf2620  (orig 0xbf2620, tailcall)
uint64_t main_f_bf2620(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf2630  (orig 0xbf2630, tailcall)
uint64_t main_f_bf2630(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf3bf0  (orig 0xbf3bf0, tailcall)
uint64_t main_f_bf3bf0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    return main::sub_14bacd0(((uintptr_t)(*(uint64_t*)((char*)(p0) + 880))));
}

// sub_bf55e0  (orig 0xbf55e0, tailcall)
void main_f_bf55e0() { main::sub_bf5460(); }

// sub_bf5660  (orig 0xbf5660, tailcall)
uint64_t main_f_bf5660(void* a0) {
    return main::sub_bf5460(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf5670  (orig 0xbf5670, tailcall)
uint64_t main_f_bf5670(void* a0) {
    return main::sub_bf5460(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf5760  (orig 0xbf5760, tailcall)
uint64_t main_f_bf5760(void* a0) {
    return main::sub_bf5460(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf5770  (orig 0xbf5770, tailcall)
uint64_t main_f_bf5770(void* a0) {
    return main::sub_bf5460(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf6bc0  (orig 0xbf6bc0, tailcall)
void main_f_bf6bc0() { main::sub_bf6a10(); }

// sub_bf6c80  (orig 0xbf6c80, tailcall)
uint64_t main_f_bf6c80(void* a0) {
    return main::sub_bf6a10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf6c90  (orig 0xbf6c90, tailcall)
uint64_t main_f_bf6c90(void* a0) {
    return main::sub_bf6a10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf6e00  (orig 0xbf6e00, tailcall)
uint64_t main_f_bf6e00(void* a0) {
    return main::sub_bf6a10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf6e10  (orig 0xbf6e10, tailcall)
uint64_t main_f_bf6e10(void* a0) {
    return main::sub_bf6a10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf70c0  (orig 0xbf70c0, tailcall)
void main_f_bf70c0() { main::sub_bf6f70(); }

// sub_bf7350  (orig 0xbf7350, tailcall)
uint64_t main_f_bf7350(void* a0) {
    return main::sub_bf6f70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf7360  (orig 0xbf7360, tailcall)
uint64_t main_f_bf7360(void* a0) {
    return main::sub_bf6f70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf74d0  (orig 0xbf74d0, tailcall)
uint64_t main_f_bf74d0(void* a0) {
    return main::sub_bf6f70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf74e0  (orig 0xbf74e0, tailcall)
uint64_t main_f_bf74e0(void* a0) {
    return main::sub_bf6f70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf9590  (orig 0xbf9590, tailcall)
void main_f_bf9590() { main::sub_bf9210(); }

// sub_bf9610  (orig 0xbf9610, tailcall)
uint64_t main_f_bf9610(void* a0) {
    return main::sub_bf9210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf9620  (orig 0xbf9620, tailcall)
uint64_t main_f_bf9620(void* a0) {
    return main::sub_bf9210(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bf9710  (orig 0xbf9710, tailcall)
uint64_t main_f_bf9710(void* a0) {
    return main::sub_bf9210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bf9720  (orig 0xbf9720, tailcall)
uint64_t main_f_bf9720(void* a0) {
    return main::sub_bf9210(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bfae10  (orig 0xbfae10, tailcall)
void main_f_bfae10() { main::sub_bd0880(); }

// sub_bfae90  (orig 0xbfae90, tailcall)
uint64_t main_f_bfae90(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bfaea0  (orig 0xbfaea0, tailcall)
uint64_t main_f_bfaea0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bfaf90  (orig 0xbfaf90, tailcall)
uint64_t main_f_bfaf90(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bfafa0  (orig 0xbfafa0, tailcall)
uint64_t main_f_bfafa0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bfb710  (orig 0xbfb710, tailcall)
void main_f_bfb710() { main::sub_bd0880(); }

// sub_bfb790  (orig 0xbfb790, tailcall)
uint64_t main_f_bfb790(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bfb7a0  (orig 0xbfb7a0, tailcall)
uint64_t main_f_bfb7a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bfb890  (orig 0xbfb890, tailcall)
uint64_t main_f_bfb890(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bfb8a0  (orig 0xbfb8a0, tailcall)
uint64_t main_f_bfb8a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bfc170  (orig 0xbfc170, tailcall)
void main_f_bfc170() { main::sub_bfbed0(); }

// sub_bfc1f0  (orig 0xbfc1f0, tailcall)
uint64_t main_f_bfc1f0(void* a0) {
    return main::sub_bfbed0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bfc200  (orig 0xbfc200, tailcall)
uint64_t main_f_bfc200(void* a0) {
    return main::sub_bfbed0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bfc2f0  (orig 0xbfc2f0, tailcall)
uint64_t main_f_bfc2f0(void* a0) {
    return main::sub_bfbed0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bfc300  (orig 0xbfc300, tailcall)
uint64_t main_f_bfc300(void* a0) {
    return main::sub_bfbed0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bfd450  (orig 0xbfd450, tailcall)
void main_f_bfd450() { main::sub_bfd300(); }

// sub_bfd6e0  (orig 0xbfd6e0, tailcall)
uint64_t main_f_bfd6e0(void* a0) {
    return main::sub_bfd300(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bfd6f0  (orig 0xbfd6f0, tailcall)
uint64_t main_f_bfd6f0(void* a0) {
    return main::sub_bfd300(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bfd860  (orig 0xbfd860, tailcall)
uint64_t main_f_bfd860(void* a0) {
    return main::sub_bfd300(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bfd870  (orig 0xbfd870, tailcall)
uint64_t main_f_bfd870(void* a0) {
    return main::sub_bfd300(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bfeba0  (orig 0xbfeba0, tailcall)
void main_f_bfeba0() { main::sub_bd0880(); }

// sub_bfec20  (orig 0xbfec20, tailcall)
uint64_t main_f_bfec20(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bfec30  (orig 0xbfec30, tailcall)
uint64_t main_f_bfec30(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_bfed20  (orig 0xbfed20, tailcall)
uint64_t main_f_bfed20(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_bfed30  (orig 0xbfed30, tailcall)
uint64_t main_f_bfed30(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c008a0  (orig 0xc008a0, tailcall)
void main_f_c008a0() { main::sub_ce0(); }

// sub_c00900  (orig 0xc00900, tailcall)
void main_f_c00900() { main::sub_ce0(); }

// sub_c00c70  (orig 0xc00c70, tailcall)
void main_f_c00c70() { main::sub_ce0(); }

// sub_c00cd0  (orig 0xc00cd0, tailcall)
void main_f_c00cd0() { main::sub_ce0(); }

// sub_c00d10  (orig 0xc00d10, tailcall)
void main_f_c00d10() { main::sub_ce0(); }

// sub_c00d70  (orig 0xc00d70, tailcall)
void main_f_c00d70() { main::sub_ce0(); }

// sub_c010c0  (orig 0xc010c0, tailcall)
void main_f_c010c0() { main::sub_ce0(); }

// sub_c01120  (orig 0xc01120, tailcall)
void main_f_c01120() { main::sub_ce0(); }

// sub_c01160  (orig 0xc01160, tailcall)
void main_f_c01160() { main::sub_ce0(); }

// sub_c011c0  (orig 0xc011c0, tailcall)
void main_f_c011c0() { main::sub_ce0(); }

// sub_c013d0  (orig 0xc013d0, tailcall)
void main_f_c013d0() { main::sub_ce0(); }

// sub_c01450  (orig 0xc01450, tailcall)
void main_f_c01450() { main::sub_ce0(); }

// sub_c01490  (orig 0xc01490, tailcall)
void main_f_c01490() { main::sub_ce0(); }

// sub_c01510  (orig 0xc01510, tailcall)
void main_f_c01510() { main::sub_ce0(); }

// sub_c01560  (orig 0xc01560, tailcall)
void main_f_c01560() { main::sub_ce0(); }

// sub_c015c0  (orig 0xc015c0, tailcall)
void main_f_c015c0() { main::sub_ce0(); }

// sub_c03590  (orig 0xc03590, tailcall)
void main_f_c03590() { main::sub_ce0(); }

// sub_c03610  (orig 0xc03610, tailcall)
void main_f_c03610() { main::sub_ce0(); }

// sub_c04240  (orig 0xc04240, tailcall)
void main_f_c04240() { main::sub_ce0(); }

// sub_c042a0  (orig 0xc042a0, tailcall)
void main_f_c042a0() { main::sub_ce0(); }

// sub_c04e00  (orig 0xc04e00, tailcall)
void main_f_c04e00() { main::sub_c04ca0(); }

// sub_c04e80  (orig 0xc04e80, tailcall)
uint64_t main_f_c04e80(void* a0) {
    return main::sub_c04ca0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c04e90  (orig 0xc04e90, tailcall)
uint64_t main_f_c04e90(void* a0) {
    return main::sub_c04ca0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c04f80  (orig 0xc04f80, tailcall)
uint64_t main_f_c04f80(void* a0) {
    return main::sub_c04ca0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c04f90  (orig 0xc04f90, tailcall)
uint64_t main_f_c04f90(void* a0) {
    return main::sub_c04ca0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c05890  (orig 0xc05890, tailcall)
void main_f_c05890() { main::sub_bd0880(); }

// sub_c05910  (orig 0xc05910, tailcall)
uint64_t main_f_c05910(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c05920  (orig 0xc05920, tailcall)
uint64_t main_f_c05920(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c05a10  (orig 0xc05a10, tailcall)
uint64_t main_f_c05a10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c05a20  (orig 0xc05a20, tailcall)
uint64_t main_f_c05a20(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c061a0  (orig 0xc061a0, tailcall)
void main_f_c061a0() { main::sub_bd0880(); }

// sub_c06220  (orig 0xc06220, tailcall)
uint64_t main_f_c06220(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c06230  (orig 0xc06230, tailcall)
uint64_t main_f_c06230(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c06320  (orig 0xc06320, tailcall)
uint64_t main_f_c06320(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c06330  (orig 0xc06330, tailcall)
uint64_t main_f_c06330(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c06660  (orig 0xc06660, tailcall)
void main_f_c06660() { main::sub_bd0880(); }

// sub_c066e0  (orig 0xc066e0, tailcall)
uint64_t main_f_c066e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c066f0  (orig 0xc066f0, tailcall)
uint64_t main_f_c066f0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c067e0  (orig 0xc067e0, tailcall)
uint64_t main_f_c067e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c067f0  (orig 0xc067f0, tailcall)
uint64_t main_f_c067f0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c06b00  (orig 0xc06b00, tailcall)
void main_f_c06b00() { main::sub_bd0880(); }

// sub_c06b80  (orig 0xc06b80, tailcall)
uint64_t main_f_c06b80(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c06b90  (orig 0xc06b90, tailcall)
uint64_t main_f_c06b90(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c06c80  (orig 0xc06c80, tailcall)
uint64_t main_f_c06c80(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c06c90  (orig 0xc06c90, tailcall)
uint64_t main_f_c06c90(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c07090  (orig 0xc07090, tailcall)
void main_f_c07090() { main::sub_bd0880(); }

// sub_c07110  (orig 0xc07110, tailcall)
uint64_t main_f_c07110(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c07120  (orig 0xc07120, tailcall)
uint64_t main_f_c07120(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c07210  (orig 0xc07210, tailcall)
uint64_t main_f_c07210(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c07220  (orig 0xc07220, tailcall)
uint64_t main_f_c07220(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c07430  (orig 0xc07430, tailcall)
void main_f_c07430() { main::sub_bd0880(); }

// sub_c074b0  (orig 0xc074b0, tailcall)
uint64_t main_f_c074b0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c074c0  (orig 0xc074c0, tailcall)
uint64_t main_f_c074c0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c075b0  (orig 0xc075b0, tailcall)
uint64_t main_f_c075b0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c075c0  (orig 0xc075c0, tailcall)
uint64_t main_f_c075c0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c07900  (orig 0xc07900, tailcall)
void main_f_c07900() { main::sub_bd0880(); }

// sub_c07980  (orig 0xc07980, tailcall)
uint64_t main_f_c07980(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c07990  (orig 0xc07990, tailcall)
uint64_t main_f_c07990(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c07a80  (orig 0xc07a80, tailcall)
uint64_t main_f_c07a80(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c07a90  (orig 0xc07a90, tailcall)
uint64_t main_f_c07a90(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c07d90  (orig 0xc07d90, tailcall)
void main_f_c07d90() { main::sub_bd0880(); }

// sub_c07e10  (orig 0xc07e10, tailcall)
uint64_t main_f_c07e10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c07e20  (orig 0xc07e20, tailcall)
uint64_t main_f_c07e20(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c07f10  (orig 0xc07f10, tailcall)
uint64_t main_f_c07f10(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c07f20  (orig 0xc07f20, tailcall)
uint64_t main_f_c07f20(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c08390  (orig 0xc08390, tailcall)
void main_f_c08390() { main::sub_bd0880(); }

// sub_c08410  (orig 0xc08410, tailcall)
uint64_t main_f_c08410(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c08420  (orig 0xc08420, tailcall)
uint64_t main_f_c08420(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c08510  (orig 0xc08510, tailcall)
uint64_t main_f_c08510(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c08520  (orig 0xc08520, tailcall)
uint64_t main_f_c08520(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c09660  (orig 0xc09660, tailcall)
void main_f_c09660() { main::sub_c09460(); }

// sub_c096e0  (orig 0xc096e0, tailcall)
uint64_t main_f_c096e0(void* a0) {
    return main::sub_c09460(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c096f0  (orig 0xc096f0, tailcall)
uint64_t main_f_c096f0(void* a0) {
    return main::sub_c09460(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c097e0  (orig 0xc097e0, tailcall)
uint64_t main_f_c097e0(void* a0) {
    return main::sub_c09460(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c097f0  (orig 0xc097f0, tailcall)
uint64_t main_f_c097f0(void* a0) {
    return main::sub_c09460(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c09800  (orig 0xc09800, tailcall)
void main_f_c09800() { main::sub_ce0(); }

// sub_c09860  (orig 0xc09860, tailcall)
void main_f_c09860() { main::sub_ce0(); }

// sub_c09a80  (orig 0xc09a80, tailcall)
void main_f_c09a80() { main::sub_ce0(); }

// sub_c09ae0  (orig 0xc09ae0, tailcall)
void main_f_c09ae0() { main::sub_ce0(); }

// sub_c09ea0  (orig 0xc09ea0, tailcall)
void main_f_c09ea0() { main::sub_ce0(); }

// sub_c09f00  (orig 0xc09f00, tailcall)
void main_f_c09f00() { main::sub_ce0(); }

// sub_c0a1e0  (orig 0xc0a1e0, tailcall)
void main_f_c0a1e0() { main::sub_bd0880(); }

// sub_c0a260  (orig 0xc0a260, tailcall)
uint64_t main_f_c0a260(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c0a270  (orig 0xc0a270, tailcall)
uint64_t main_f_c0a270(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c0a360  (orig 0xc0a360, tailcall)
uint64_t main_f_c0a360(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c0a370  (orig 0xc0a370, tailcall)
uint64_t main_f_c0a370(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c0b6e0  (orig 0xc0b6e0, tailcall)
void main_f_c0b6e0() { main::sub_ce0(); }

// sub_c0b740  (orig 0xc0b740, tailcall)
void main_f_c0b740() { main::sub_ce0(); }

// sub_c0b9c0  (orig 0xc0b9c0, tailcall)
void main_f_c0b9c0() { main::sub_ce0(); }

// sub_c0ba20  (orig 0xc0ba20, tailcall)
void main_f_c0ba20() { main::sub_ce0(); }

// sub_c0ba60  (orig 0xc0ba60, tailcall)
void main_f_c0ba60() { main::sub_ce0(); }

// sub_c0bac0  (orig 0xc0bac0, tailcall)
void main_f_c0bac0() { main::sub_ce0(); }

// sub_c0bd20  (orig 0xc0bd20, tailcall)
void main_f_c0bd20() { main::sub_ce0(); }

// sub_c0bd80  (orig 0xc0bd80, tailcall)
void main_f_c0bd80() { main::sub_ce0(); }

// sub_c0bdc0  (orig 0xc0bdc0, tailcall)
void main_f_c0bdc0() { main::sub_ce0(); }

// sub_c0be20  (orig 0xc0be20, tailcall)
void main_f_c0be20() { main::sub_ce0(); }

// sub_c0bfb0  (orig 0xc0bfb0, tailcall)
void main_f_c0bfb0() { main::sub_ce0(); }

// sub_c0c030  (orig 0xc0c030, tailcall)
void main_f_c0c030() { main::sub_ce0(); }

// sub_c0c070  (orig 0xc0c070, tailcall)
void main_f_c0c070() { main::sub_ce0(); }

// sub_c0c0d0  (orig 0xc0c0d0, tailcall)
void main_f_c0c0d0() { main::sub_ce0(); }

// sub_c0c660  (orig 0xc0c660, tailcall)
void main_f_c0c660() { main::sub_bd0880(); }

// sub_c0c6e0  (orig 0xc0c6e0, tailcall)
uint64_t main_f_c0c6e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c0c6f0  (orig 0xc0c6f0, tailcall)
uint64_t main_f_c0c6f0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c0c7e0  (orig 0xc0c7e0, tailcall)
uint64_t main_f_c0c7e0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c0c7f0  (orig 0xc0c7f0, tailcall)
uint64_t main_f_c0c7f0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c0f5b0  (orig 0xc0f5b0, tailcall)
void main_f_c0f5b0() { main::sub_bd0880(); }

// sub_c0f6c0  (orig 0xc0f6c0, tailcall)
uint64_t main_f_c0f6c0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c0f6d0  (orig 0xc0f6d0, tailcall)
uint64_t main_f_c0f6d0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c0f840  (orig 0xc0f840, tailcall)
uint64_t main_f_c0f840(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c0f850  (orig 0xc0f850, tailcall)
uint64_t main_f_c0f850(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c10e50  (orig 0xc10e50, tailcall)
void main_f_c10e50() { main::sub_c10d60(); }

// sub_c10f10  (orig 0xc10f10, tailcall)
uint64_t main_f_c10f10(void* a0) {
    return main::sub_c10d60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c10f20  (orig 0xc10f20, tailcall)
uint64_t main_f_c10f20(void* a0) {
    return main::sub_c10d60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c11090  (orig 0xc11090, tailcall)
uint64_t main_f_c11090(void* a0) {
    return main::sub_c10d60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c110a0  (orig 0xc110a0, tailcall)
uint64_t main_f_c110a0(void* a0) {
    return main::sub_c10d60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c11610  (orig 0xc11610, tailcall)
void main_f_c11610() { main::sub_bd0880(); }

// sub_c11690  (orig 0xc11690, tailcall)
uint64_t main_f_c11690(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c116a0  (orig 0xc116a0, tailcall)
uint64_t main_f_c116a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c11790  (orig 0xc11790, tailcall)
uint64_t main_f_c11790(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c117a0  (orig 0xc117a0, tailcall)
uint64_t main_f_c117a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c11bc0  (orig 0xc11bc0, tailcall)
void main_f_c11bc0() { main::sub_bd0880(); }

// sub_c11c40  (orig 0xc11c40, tailcall)
uint64_t main_f_c11c40(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c11c50  (orig 0xc11c50, tailcall)
uint64_t main_f_c11c50(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c11d40  (orig 0xc11d40, tailcall)
uint64_t main_f_c11d40(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c11d50  (orig 0xc11d50, tailcall)
uint64_t main_f_c11d50(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c12110  (orig 0xc12110, tailcall)
void main_f_c12110() { main::sub_bd0880(); }

// sub_c12190  (orig 0xc12190, tailcall)
uint64_t main_f_c12190(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c121a0  (orig 0xc121a0, tailcall)
uint64_t main_f_c121a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c12290  (orig 0xc12290, tailcall)
uint64_t main_f_c12290(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c122a0  (orig 0xc122a0, tailcall)
uint64_t main_f_c122a0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c128d0  (orig 0xc128d0, tailcall)
void main_f_c128d0() { main::sub_bd0880(); }

// sub_c12950  (orig 0xc12950, tailcall)
uint64_t main_f_c12950(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c12960  (orig 0xc12960, tailcall)
uint64_t main_f_c12960(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c12a50  (orig 0xc12a50, tailcall)
uint64_t main_f_c12a50(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c12a60  (orig 0xc12a60, tailcall)
uint64_t main_f_c12a60(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c12be0  (orig 0xc12be0, tailcall)
void main_f_c12be0() { main::sub_bd0880(); }

// sub_c12c60  (orig 0xc12c60, tailcall)
uint64_t main_f_c12c60(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c12c70  (orig 0xc12c70, tailcall)
uint64_t main_f_c12c70(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c12d60  (orig 0xc12d60, tailcall)
uint64_t main_f_c12d60(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c12d70  (orig 0xc12d70, tailcall)
uint64_t main_f_c12d70(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c134a0  (orig 0xc134a0, tailcall)
void main_f_c134a0() { main::sub_c13200(); }

// sub_c13520  (orig 0xc13520, tailcall)
uint64_t main_f_c13520(void* a0) {
    return main::sub_c13200(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c13530  (orig 0xc13530, tailcall)
uint64_t main_f_c13530(void* a0) {
    return main::sub_c13200(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c13620  (orig 0xc13620, tailcall)
uint64_t main_f_c13620(void* a0) {
    return main::sub_c13200(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c13630  (orig 0xc13630, tailcall)
uint64_t main_f_c13630(void* a0) {
    return main::sub_c13200(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c14d50  (orig 0xc14d50, tailcall)
void main_f_c14d50() { main::sub_bd0880(); }

// sub_c14dd0  (orig 0xc14dd0, tailcall)
uint64_t main_f_c14dd0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c14de0  (orig 0xc14de0, tailcall)
uint64_t main_f_c14de0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c14ed0  (orig 0xc14ed0, tailcall)
uint64_t main_f_c14ed0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c14ee0  (orig 0xc14ee0, tailcall)
uint64_t main_f_c14ee0(void* a0) {
    return main::sub_bd0880(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c16070  (orig 0xc16070, tailcall)
uint64_t main_f_c16070(void* a0) {
    return main::sub_c156a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c16080  (orig 0xc16080, tailcall)
uint64_t main_f_c16080(void* a0) {
    return main::sub_c156a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c16090  (orig 0xc16090, tailcall)
void main_f_c16090() { main::sub_c156a0(); }

// sub_c160a0  (orig 0xc160a0, tailcall)
uint64_t main_f_c160a0(void* a0) {
    return main::sub_c156a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c160b0  (orig 0xc160b0, tailcall)
uint64_t main_f_c160b0(void* a0) {
    return main::sub_c156a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c178a0  (orig 0xc178a0, tailcall)
uint64_t main_f_c178a0(void* a0) {
    return main::sub_c545c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1920))));
}

// sub_c18050  (orig 0xc18050, tailcall)
uint64_t main_f_c18050(void* a0) {
    return main::sub_c5ac90(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1920))));
}

// sub_c189f0  (orig 0xc189f0, tailcall)
uint64_t main_f_c189f0(void* a0) {
    return main::sub_c18900(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c18a00  (orig 0xc18a00, tailcall)
uint64_t main_f_c18a00(void* a0) {
    return main::sub_c18900(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c18db0  (orig 0xc18db0, tailcall)
uint64_t main_f_c18db0(void* a0) {
    return main::sub_c18c00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c18dc0  (orig 0xc18dc0, tailcall)
uint64_t main_f_c18dc0(void* a0) {
    return main::sub_c18c00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c1ac70  (orig 0xc1ac70, tailcall)
void main_f_c1ac70() { main::sub_bc7540(); }

// sub_c1ae50  (orig 0xc1ae50, tailcall)
void main_f_c1ae50() { main::sub_bc7540(); }

// sub_c1ae60  (orig 0xc1ae60, tailcall)
void main_f_c1ae60() { main::sub_bc7540(); }

// sub_c1c140  (orig 0xc1c140, tailcall)
void main_f_c1c140() { main::sub_c1beb0(); }

// sub_c1c150  (orig 0xc1c150, tailcall)
uint64_t main_f_c1c150(void* a0) {
    return main::sub_c1beb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c1c160  (orig 0xc1c160, tailcall)
uint64_t main_f_c1c160(void* a0) {
    return main::sub_c1beb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c1ca60  (orig 0xc1ca60, tailcall)
void main_f_c1ca60() { main::sub_c1cdd0(); }

// sub_c1cc10  (orig 0xc1cc10, tailcall)
void main_f_c1cc10() { main::sub_c1cdd0(); }

// sub_c1cc20  (orig 0xc1cc20, tailcall)
void main_f_c1cc20() { main::sub_c1cdd0(); }

// sub_c1e6a0  (orig 0xc1e6a0, tailcall)
void main_f_c1e6a0() { main::sub_c1e5a0(); }

// sub_c1e720  (orig 0xc1e720, tailcall)
uint64_t main_f_c1e720(void* a0) {
    return main::sub_c1e5a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c1e730  (orig 0xc1e730, tailcall)
uint64_t main_f_c1e730(void* a0) {
    return main::sub_c1e5a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c1e820  (orig 0xc1e820, tailcall)
uint64_t main_f_c1e820(void* a0) {
    return main::sub_c1e5a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c1e830  (orig 0xc1e830, tailcall)
uint64_t main_f_c1e830(void* a0) {
    return main::sub_c1e5a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c22450  (orig 0xc22450, tailcall)
void main_f_c22450() { main::sub_c22600(); }

// sub_c22520  (orig 0xc22520, tailcall)
void main_f_c22520() { main::sub_c22600(); }

// sub_c22530  (orig 0xc22530, tailcall)
void main_f_c22530() { main::sub_c22600(); }

// sub_c23e80  (orig 0xc23e80, tailcall)
void main_f_c23e80() { main::sub_c23cc0(); }

// sub_c23f40  (orig 0xc23f40, tailcall)
uint64_t main_f_c23f40(void* a0) {
    return main::sub_c23cc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c23f50  (orig 0xc23f50, tailcall)
uint64_t main_f_c23f50(void* a0) {
    return main::sub_c23cc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c240c0  (orig 0xc240c0, tailcall)
uint64_t main_f_c240c0(void* a0) {
    return main::sub_c23cc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c240d0  (orig 0xc240d0, tailcall)
uint64_t main_f_c240d0(void* a0) {
    return main::sub_c23cc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c24550  (orig 0xc24550, tailcall)
void main_f_c24550() { main::sub_c24470(); }

// sub_c24560  (orig 0xc24560, tailcall)
void main_f_c24560() { main::sub_c24980(); }

// sub_c24570  (orig 0xc24570, tailcall)
uint64_t main_f_c24570(void* a0) {
    return main::sub_c24470(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c24580  (orig 0xc24580, tailcall)
uint64_t main_f_c24580(void* a0) {
    return main::sub_c24470(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c24590  (orig 0xc24590, tailcall)
void main_f_c24590() { main::sub_c24980(); }

// sub_c245a0  (orig 0xc245a0, tailcall)
void main_f_c245a0() { main::sub_c24980(); }

// sub_c245b0  (orig 0xc245b0, tailcall)
uint64_t main_f_c245b0(void* a0) {
    return main::sub_c24470(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c245c0  (orig 0xc245c0, tailcall)
uint64_t main_f_c245c0(void* a0) {
    return main::sub_c24470(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c278c0  (orig 0xc278c0, tailcall)
void main_f_c278c0() { main::sub_c277c0(); }

// sub_c27940  (orig 0xc27940, tailcall)
uint64_t main_f_c27940(void* a0) {
    return main::sub_c277c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c27950  (orig 0xc27950, tailcall)
uint64_t main_f_c27950(void* a0) {
    return main::sub_c277c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c28b50  (orig 0xc28b50, tailcall)
void main_f_c28b50() { main::sub_c28d00(); }

// sub_c28c20  (orig 0xc28c20, tailcall)
void main_f_c28c20() { main::sub_c28d00(); }

// sub_c28c30  (orig 0xc28c30, tailcall)
void main_f_c28c30() { main::sub_c28d00(); }

// sub_c2a360  (orig 0xc2a360, tailcall)
void main_f_c2a360() { main::sub_e7c4c0(); }

// sub_c2a370  (orig 0xc2a370, tailcall)
void main_f_c2a370() { main::sub_c2a3e0(); }

// sub_c2a380  (orig 0xc2a380, tailcall)
uint64_t main_f_c2a380(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c2a390  (orig 0xc2a390, tailcall)
uint64_t main_f_c2a390(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c2a3a0  (orig 0xc2a3a0, tailcall)
void main_f_c2a3a0() { main::sub_c2a3e0(); }

// sub_c2a3b0  (orig 0xc2a3b0, tailcall)
void main_f_c2a3b0() { main::sub_c2a3e0(); }

// sub_c2a3c0  (orig 0xc2a3c0, tailcall)
uint64_t main_f_c2a3c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c2a3d0  (orig 0xc2a3d0, tailcall)
uint64_t main_f_c2a3d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c2c330  (orig 0xc2c330, tailcall)
void main_f_c2c330() { main::sub_e7c4c0(); }

// sub_c2c340  (orig 0xc2c340, tailcall)
void main_f_c2c340() { main::sub_c2c3b0(); }

// sub_c2c350  (orig 0xc2c350, tailcall)
uint64_t main_f_c2c350(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c2c360  (orig 0xc2c360, tailcall)
uint64_t main_f_c2c360(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c2c370  (orig 0xc2c370, tailcall)
void main_f_c2c370() { main::sub_c2c3b0(); }

// sub_c2c380  (orig 0xc2c380, tailcall)
void main_f_c2c380() { main::sub_c2c3b0(); }

// sub_c2c390  (orig 0xc2c390, tailcall)
uint64_t main_f_c2c390(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c2c3a0  (orig 0xc2c3a0, tailcall)
uint64_t main_f_c2c3a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c2c820  (orig 0xc2c820, tailcall)
void main_f_c2c820() { main::sub_e7c4c0(); }

// sub_c2c830  (orig 0xc2c830, tailcall)
void main_f_c2c830() { main::sub_c2c8a0(); }

// sub_c2c840  (orig 0xc2c840, tailcall)
uint64_t main_f_c2c840(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c2c850  (orig 0xc2c850, tailcall)
uint64_t main_f_c2c850(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c2c860  (orig 0xc2c860, tailcall)
void main_f_c2c860() { main::sub_c2c8a0(); }

// sub_c2c870  (orig 0xc2c870, tailcall)
void main_f_c2c870() { main::sub_c2c8a0(); }

// sub_c2c880  (orig 0xc2c880, tailcall)
uint64_t main_f_c2c880(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c2c890  (orig 0xc2c890, tailcall)
uint64_t main_f_c2c890(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c2ccf0  (orig 0xc2ccf0, tailcall)
void main_f_c2ccf0() { main::sub_e7c4c0(); }

// sub_c2cd00  (orig 0xc2cd00, tailcall)
void main_f_c2cd00() { main::sub_c2cd70(); }

// sub_c2cd10  (orig 0xc2cd10, tailcall)
uint64_t main_f_c2cd10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c2cd20  (orig 0xc2cd20, tailcall)
uint64_t main_f_c2cd20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c2cd30  (orig 0xc2cd30, tailcall)
void main_f_c2cd30() { main::sub_c2cd70(); }

// sub_c2cd40  (orig 0xc2cd40, tailcall)
void main_f_c2cd40() { main::sub_c2cd70(); }

// sub_c2cd50  (orig 0xc2cd50, tailcall)
uint64_t main_f_c2cd50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c2cd60  (orig 0xc2cd60, tailcall)
uint64_t main_f_c2cd60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c2eea0  (orig 0xc2eea0, tailcall)
uint64_t main_f_c2eea0(void* a0) {
    return main::sub_eb75e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1632))));
}

// sub_c333e0  (orig 0xc333e0, tailcall)
void main_f_c333e0() { main::sub_e7c4c0(); }

// sub_c333f0  (orig 0xc333f0, tailcall)
void main_f_c333f0() { main::sub_c33460(); }

// sub_c33400  (orig 0xc33400, tailcall)
uint64_t main_f_c33400(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c33410  (orig 0xc33410, tailcall)
uint64_t main_f_c33410(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c33420  (orig 0xc33420, tailcall)
void main_f_c33420() { main::sub_c33460(); }

// sub_c33430  (orig 0xc33430, tailcall)
void main_f_c33430() { main::sub_c33460(); }

// sub_c33440  (orig 0xc33440, tailcall)
uint64_t main_f_c33440(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c33450  (orig 0xc33450, tailcall)
uint64_t main_f_c33450(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c35ac0  (orig 0xc35ac0, tailcall)
uint64_t main_f_c35ac0(void* a0) {
    return main::sub_c54770(((uintptr_t)(*(uint64_t*)((char*)(a0) + 288))));
}

// sub_c36420  (orig 0xc36420, tailcall)
void main_f_c36420() { main::sub_c277c0(); }

// sub_c36450  (orig 0xc36450, tailcall)
uint64_t main_f_c36450(void* a0) {
    return main::sub_c277c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c36460  (orig 0xc36460, tailcall)
uint64_t main_f_c36460(void* a0) {
    return main::sub_c277c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c36470  (orig 0xc36470, tailcall)
void main_f_c36470() { main::sub_ce0(); }

// sub_c364f0  (orig 0xc364f0, tailcall)
void main_f_c364f0() { main::sub_ce0(); }

// sub_c38030  (orig 0xc38030, tailcall)
void main_f_c38030() { main::sub_c37f30(); }

// sub_c38040  (orig 0xc38040, tailcall)
void main_f_c38040() { main::sub_c38220(); }

// sub_c38060  (orig 0xc38060, tailcall)
uint64_t main_f_c38060(void* a0) {
    return main::sub_c37f30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c38070  (orig 0xc38070, tailcall)
uint64_t main_f_c38070(void* a0) {
    return main::sub_c37f30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c38080  (orig 0xc38080, tailcall)
void main_f_c38080() { main::sub_c38220(); }

// sub_c38090  (orig 0xc38090, tailcall)
void main_f_c38090() { main::sub_c38220(); }

// sub_c380a0  (orig 0xc380a0, tailcall)
uint64_t main_f_c380a0(void* a0) {
    return main::sub_c37f30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c380b0  (orig 0xc380b0, tailcall)
uint64_t main_f_c380b0(void* a0) {
    return main::sub_c37f30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c3b540  (orig 0xc3b540, tailcall)
void main_f_c3b540() { main::sub_c3b730(); }

// sub_c3b630  (orig 0xc3b630, tailcall)
void main_f_c3b630() { main::sub_c3b730(); }

// sub_c3b640  (orig 0xc3b640, tailcall)
void main_f_c3b640() { main::sub_c3b730(); }

// sub_c3cdf0  (orig 0xc3cdf0, tailcall)
void main_f_c3cdf0() { main::sub_c3cbc0(); }

// sub_c3ce00  (orig 0xc3ce00, tailcall)
void main_f_c3ce00() { main::sub_c3d130(); }

// sub_c3ce10  (orig 0xc3ce10, tailcall)
uint64_t main_f_c3ce10(void* a0) {
    return main::sub_c3cbc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c3ce20  (orig 0xc3ce20, tailcall)
uint64_t main_f_c3ce20(void* a0) {
    return main::sub_c3cbc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c3ce30  (orig 0xc3ce30, tailcall)
void main_f_c3ce30() { main::sub_c3d130(); }

// sub_c3ce40  (orig 0xc3ce40, tailcall)
void main_f_c3ce40() { main::sub_c3d130(); }

// sub_c3ce50  (orig 0xc3ce50, tailcall)
uint64_t main_f_c3ce50(void* a0) {
    return main::sub_c3cbc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c3ce60  (orig 0xc3ce60, tailcall)
uint64_t main_f_c3ce60(void* a0) {
    return main::sub_c3cbc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c3e6b0  (orig 0xc3e6b0, tailcall)
void main_f_c3e6b0() { main::sub_c3e6e0(); }

// sub_c3e6c0  (orig 0xc3e6c0, tailcall)
void main_f_c3e6c0() { main::sub_c3e6e0(); }

// sub_c3e6d0  (orig 0xc3e6d0, tailcall)
void main_f_c3e6d0() { main::sub_c3e6e0(); }

// sub_c3fd40  (orig 0xc3fd40, tailcall)
uint64_t main_f_c3fd40(void* a0) {
    return main::sub_c3fc20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_c3fd50  (orig 0xc3fd50, tailcall)
uint64_t main_f_c3fd50(void* a0) {
    return main::sub_c3fc20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_c3fd60  (orig 0xc3fd60, tailcall)
void main_f_c3fd60() { main::sub_c3fc20(); }

// sub_c3fd70  (orig 0xc3fd70, tailcall)
uint64_t main_f_c3fd70(void* a0) {
    return main::sub_c3fc20(((uintptr_t)((char*)(a0) - 72)));
}

