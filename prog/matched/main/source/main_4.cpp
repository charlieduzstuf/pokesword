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

namespace main { void sub_ce0(); }
namespace main { void sub_ac70e0(); }
namespace main { void sub_15b6e10(); }
namespace main { void sub_ac5b50(); }
namespace main { void sub_b0d570(); }
namespace main { void sub_b1cc70(); }
namespace main { void sub_b22430(); }
namespace main { void sub_b2b8c0(); }
namespace main { void sub_b2bf60(); }
namespace main { void sub_e7c250(); }
namespace main { void sub_b2c9c0(); }
namespace main { void sub_b2d2b0(); }
namespace main { void sub_b2d590(); }
namespace main { void sub_e7c4c0(); }
namespace main { void sub_b2cc40(); }
namespace main { void sub_b2e480(); }
namespace main { void sub_b2f410(); }
namespace main { void sub_b309e0(); }
namespace main { void sub_b30410(); }
namespace main { void sub_b317d0(); }
namespace main { void sub_b32860(); }
namespace main { void sub_b32b10(); }
namespace main { void sub_b32f40(); }
namespace main { void sub_b3b0b0(); }
namespace main { void sub_b426b0(); }
namespace main { void sub_b46170(); }
namespace main { void sub_b465b0(); }
namespace main { void sub_ead240(); }
namespace main { void sub_b5eff0(); }
namespace main { void sub_b75450(); }
namespace main { void sub_b75f10(); }
namespace main { void sub_b77350(); }
namespace main { void sub_b78620(); }
namespace main { void sub_b79e10(); }
namespace main { void sub_b7a150(); }
namespace main { void sub_b7f300(); }
namespace main { void sub_b80850(); }
namespace main { void sub_b82fb0(); }
namespace main { void sub_b49230(); }
namespace main { void sub_b493d0(); }
namespace main { void sub_b84f60(); }
namespace main { void sub_b854f0(); }
namespace main { void sub_b866b0(); }
namespace main { void sub_b86f10(); }
namespace main { void sub_b8cc30(); }
namespace main { void sub_b3f380(); }
namespace main { void sub_b3f3a0(); }
namespace main { void sub_b3f3f0(); }
namespace main { void sub_b3fbd0(); }
namespace main { void sub_b3adb0(); }
namespace main { void sub_b9eec0(); }
namespace main { void sub_b946e0(); }
namespace main { void sub_ba1390(); }
namespace main { void sub_ba39c0(); }
namespace main { void sub_ba44c0(); }
namespace main { void sub_ba4690(); }
namespace main { void sub_ba5440(); }
namespace main { void sub_bb4d40(); }
namespace main { void sub_bb5bc0(); }
namespace main { void sub_bb6070(); }
namespace main { void contents_comp_organize_data_holder_2(); }
namespace main { void contents_regulation_2(); }
namespace main { void sub_bc0c30(); }
namespace main { void sub_bc78a0(); }
namespace main { void sub_bd0880(); }
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
namespace main { void sub_bebe30(); }
namespace main { void sub_bed700(); }
namespace main { void sub_bee1e0(); }
namespace main { void sub_bf1640(); }
namespace main { void sub_bf5460(); }
namespace main { void sub_bf6a10(); }
namespace main { void sub_bf6f70(); }
namespace main { void sub_bf9210(); }
namespace main { void sub_bfbed0(); }
namespace main { void sub_bfd300(); }
namespace main { void sub_c04ca0(); }
namespace main { void sub_c09460(); }
namespace main { void sub_c10d60(); }
namespace main { void sub_c13200(); }
namespace main { void sub_c156a0(); }
namespace main { void sub_bc7540(); }
namespace main { void sub_c1beb0(); }
namespace main { void sub_c1cdd0(); }
namespace main { void sub_c1e5a0(); }
namespace main { void sub_c22600(); }
namespace main { void sub_c23cc0(); }
namespace main { void sub_c24470(); }
namespace main { void sub_c24980(); }
namespace main { void sub_c277c0(); }
namespace main { void sub_c28d00(); }
namespace main { void sub_c2a3e0(); }
namespace main { void sub_c2c3b0(); }
namespace main { void sub_c2c8a0(); }
namespace main { void sub_c2cd70(); }
namespace main { void sub_c33460(); }
namespace main { void sub_c37f30(); }
namespace main { void sub_c38220(); }
namespace main { void sub_c3b730(); }
namespace main { void sub_c3cbc0(); }
namespace main { void sub_c3d130(); }
namespace main { void sub_c3e6e0(); }
namespace main { void sub_c3fc20(); }
namespace main { void sub_c42080(); }
namespace main { void sub_c41c60(); }
namespace main { void sub_c42930(); }
namespace main { void sub_c43920(); }
namespace main { void sub_c43f40(); }
namespace main { void sub_c44d90(); }
namespace main { void sub_c47dd0(); }
namespace main { void sub_c48ff0(); }
namespace main { void sub_c49140(); }
namespace main { void sub_c4aea0(); }
namespace main { void sub_c4c480(); }
namespace main { void sub_c4da30(); }
namespace main { void sub_c4deb0(); }
namespace main { void sub_c4ea00(); }
namespace main { void sub_c4ec20(); }
namespace main { void sub_c4f090(); }
namespace main { void sub_c532c0(); }
namespace main { void sub_c53f50(); }
namespace main { void sub_978cf0(); }
namespace main { void sub_c668b0(); }
namespace main { void sub_c68680(); }
namespace main { void sub_c69450(); }
namespace main { void sub_c73f50(); }
namespace main { void sub_c7b920(); }
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

// sub_ae6f10  (orig 0xae6f10, tailcall)
void main_f_ae6f10() { main::sub_ce0(); }

// sub_ae6f30  (orig 0xae6f30, tailcall)
void main_f_ae6f30() { main::sub_ce0(); }

// sub_ae6fa0  (orig 0xae6fa0, ret_only)
void main_f_ae6fa0() {}

// sub_ae6fb0  (orig 0xae6fb0, tailcall)
void main_f_ae6fb0() { main::sub_ce0(); }

// sub_ae6fd0  (orig 0xae6fd0, tailcall)
void main_f_ae6fd0() { main::sub_ce0(); }

// sub_ae7040  (orig 0xae7040, ret_only)
void main_f_ae7040() {}

// sub_ae7050  (orig 0xae7050, tailcall)
void main_f_ae7050() { main::sub_ce0(); }

// sub_ae7070  (orig 0xae7070, tailcall)
void main_f_ae7070() { main::sub_ce0(); }

// sub_ae70e0  (orig 0xae70e0, ret_only)
void main_f_ae70e0() {}

// sub_ae70f0  (orig 0xae70f0, tailcall)
void main_f_ae70f0() { main::sub_ce0(); }

// sub_ae7110  (orig 0xae7110, tailcall)
void main_f_ae7110() { main::sub_ce0(); }

// sub_ae7180  (orig 0xae7180, ret_only)
void main_f_ae7180() {}

// sub_ae7190  (orig 0xae7190, tailcall)
void main_f_ae7190() { main::sub_ce0(); }

// sub_ae71b0  (orig 0xae71b0, ret_only)
void main_f_ae71b0() {}

// sub_ae71c0  (orig 0xae71c0, tailcall)
void main_f_ae71c0() { main::sub_ce0(); }

// sub_ae7230  (orig 0xae7230, ret_only)
void main_f_ae7230() {}

// sub_ae7240  (orig 0xae7240, tailcall)
void main_f_ae7240() { main::sub_ce0(); }

// sub_ae7260  (orig 0xae7260, tailcall)
void main_f_ae7260() { main::sub_ce0(); }

// sub_ae72d0  (orig 0xae72d0, ret_only)
void main_f_ae72d0() {}

// sub_ae72e0  (orig 0xae72e0, tailcall)
void main_f_ae72e0() { main::sub_ce0(); }

// sub_ae7300  (orig 0xae7300, tailcall)
void main_f_ae7300() { main::sub_ce0(); }

// sub_ae7370  (orig 0xae7370, ret_only)
void main_f_ae7370() {}

// sub_ae7380  (orig 0xae7380, tailcall)
void main_f_ae7380() { main::sub_ce0(); }

// sub_ae73a0  (orig 0xae73a0, tailcall)
void main_f_ae73a0() { main::sub_ce0(); }

// sub_ae7410  (orig 0xae7410, ret_only)
void main_f_ae7410() {}

// sub_ae7420  (orig 0xae7420, tailcall)
void main_f_ae7420() { main::sub_ce0(); }

// sub_ae7440  (orig 0xae7440, tailcall)
void main_f_ae7440() { main::sub_ce0(); }

// sub_ae74b0  (orig 0xae74b0, ret_only)
void main_f_ae74b0() {}

// sub_ae74c0  (orig 0xae74c0, tailcall)
void main_f_ae74c0() { main::sub_ce0(); }

// sub_ae74e0  (orig 0xae74e0, tailcall)
void main_f_ae74e0() { main::sub_ce0(); }

// sub_ae7550  (orig 0xae7550, ret_only)
void main_f_ae7550() {}

// sub_ae7560  (orig 0xae7560, tailcall)
void main_f_ae7560() { main::sub_ce0(); }

// sub_ae7580  (orig 0xae7580, tailcall)
void main_f_ae7580() { main::sub_ce0(); }

// sub_ae75f0  (orig 0xae75f0, ret_only)
void main_f_ae75f0() {}

// sub_ae7600  (orig 0xae7600, tailcall)
void main_f_ae7600() { main::sub_ce0(); }

// sub_ae7620  (orig 0xae7620, tailcall)
void main_f_ae7620() { main::sub_ce0(); }

// sub_ae7690  (orig 0xae7690, ret_only)
void main_f_ae7690() {}

// sub_ae76a0  (orig 0xae76a0, tailcall)
void main_f_ae76a0() { main::sub_ce0(); }

// sub_ae76c0  (orig 0xae76c0, tailcall)
void main_f_ae76c0() { main::sub_ce0(); }

// sub_ae7730  (orig 0xae7730, ret_only)
void main_f_ae7730() {}

// sub_ae7740  (orig 0xae7740, tailcall)
void main_f_ae7740() { main::sub_ce0(); }

// sub_ae7760  (orig 0xae7760, tailcall)
void main_f_ae7760() { main::sub_ce0(); }

// sub_ae77d0  (orig 0xae77d0, ret_only)
void main_f_ae77d0() {}

// sub_ae77e0  (orig 0xae77e0, tailcall)
void main_f_ae77e0() { main::sub_ce0(); }

// sub_ae8c70  (orig 0xae8c70, tailcall)
void main_f_ae8c70() { main::sub_ac70e0(); }

// sub_ae8e10  (orig 0xae8e10, tailcall)
void main_f_ae8e10() { main::sub_ce0(); }

// sub_ae8e80  (orig 0xae8e80, ret_only)
void main_f_ae8e80() {}

// sub_ae8e90  (orig 0xae8e90, tailcall)
void main_f_ae8e90() { main::sub_ce0(); }

// sub_ae8f00  (orig 0xae8f00, tailcall)
void main_f_ae8f00() { main::sub_ce0(); }

// sub_ae8f70  (orig 0xae8f70, ret_only)
void main_f_ae8f70() {}

// sub_ae8f80  (orig 0xae8f80, tailcall)
void main_f_ae8f80() { main::sub_ce0(); }

// sub_ae8ff0  (orig 0xae8ff0, tailcall)
void main_f_ae8ff0() { main::sub_ce0(); }

// sub_ae9060  (orig 0xae9060, ret_only)
void main_f_ae9060() {}

// sub_ae9070  (orig 0xae9070, tailcall)
void main_f_ae9070() { main::sub_ce0(); }

// sub_ae90f0  (orig 0xae90f0, ret_only)
void main_f_ae90f0() {}

// sub_ae9100  (orig 0xae9100, copy2)
void main_f_ae9100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ae9110  (orig 0xae9110, copy2)
void main_f_ae9110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_aeb0b0  (orig 0xaeb0b0, ret_only)
void main_f_aeb0b0() {}

// sub_aeb0c0  (orig 0xaeb0c0, copy2)
void main_f_aeb0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_aeb0d0  (orig 0xaeb0d0, copy2)
void main_f_aeb0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_aeb0e0  (orig 0xaeb0e0, tailcall)
void main_f_aeb0e0() { main::sub_ce0(); }

// sub_aeb150  (orig 0xaeb150, ret_only)
void main_f_aeb150() {}

// sub_aeb160  (orig 0xaeb160, tailcall)
void main_f_aeb160() { main::sub_ce0(); }

// sub_aeb1d0  (orig 0xaeb1d0, tailcall)
void main_f_aeb1d0() { main::sub_ce0(); }

// sub_aeb240  (orig 0xaeb240, ret_only)
void main_f_aeb240() {}

// sub_aeb250  (orig 0xaeb250, tailcall)
void main_f_aeb250() { main::sub_ce0(); }

// sub_aeb2c0  (orig 0xaeb2c0, tailcall)
void main_f_aeb2c0() { main::sub_ce0(); }

// sub_aeb330  (orig 0xaeb330, ret_only)
void main_f_aeb330() {}

// sub_aeb340  (orig 0xaeb340, tailcall)
void main_f_aeb340() { main::sub_ce0(); }

// sub_aeb3b0  (orig 0xaeb3b0, tailcall)
void main_f_aeb3b0() { main::sub_ce0(); }

// sub_aeb420  (orig 0xaeb420, ret_only)
void main_f_aeb420() {}

// sub_aeb430  (orig 0xaeb430, tailcall)
void main_f_aeb430() { main::sub_ce0(); }

// sub_aeb4a0  (orig 0xaeb4a0, tailcall)
void main_f_aeb4a0() { main::sub_ce0(); }

// sub_aeb510  (orig 0xaeb510, ret_only)
void main_f_aeb510() {}

// sub_aeb520  (orig 0xaeb520, tailcall)
void main_f_aeb520() { main::sub_ce0(); }

// sub_aeb590  (orig 0xaeb590, tailcall)
void main_f_aeb590() { main::sub_ce0(); }

// sub_aeb600  (orig 0xaeb600, ret_only)
void main_f_aeb600() {}

// sub_aeb610  (orig 0xaeb610, tailcall)
void main_f_aeb610() { main::sub_ce0(); }

// sub_aeb680  (orig 0xaeb680, tailcall)
void main_f_aeb680() { main::sub_ce0(); }

// sub_aeb6f0  (orig 0xaeb6f0, ret_only)
void main_f_aeb6f0() {}

// sub_aeb700  (orig 0xaeb700, tailcall)
void main_f_aeb700() { main::sub_ce0(); }

// sub_aed2a0  (orig 0xaed2a0, ret_only)
void main_f_aed2a0() {}

// sub_aed2b0  (orig 0xaed2b0, copy2)
void main_f_aed2b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_aed2c0  (orig 0xaed2c0, copy2)
void main_f_aed2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_aed2d0  (orig 0xaed2d0, tailcall)
void main_f_aed2d0() { main::sub_ce0(); }

// sub_aed340  (orig 0xaed340, ret_only)
void main_f_aed340() {}

// sub_aed350  (orig 0xaed350, tailcall)
void main_f_aed350() { main::sub_ce0(); }

// sub_aed3c0  (orig 0xaed3c0, tailcall)
void main_f_aed3c0() { main::sub_ce0(); }

// sub_aed430  (orig 0xaed430, ret_only)
void main_f_aed430() {}

// sub_aed440  (orig 0xaed440, tailcall)
void main_f_aed440() { main::sub_ce0(); }

// sub_aed6f0  (orig 0xaed6f0, tailcall)
void main_f_aed6f0() { main::sub_ce0(); }

// sub_aed760  (orig 0xaed760, ret_only)
void main_f_aed760() {}

// sub_aed770  (orig 0xaed770, tailcall)
void main_f_aed770() { main::sub_ce0(); }

// sub_aed7e0  (orig 0xaed7e0, tailcall)
void main_f_aed7e0() { main::sub_ce0(); }

// sub_aed850  (orig 0xaed850, ret_only)
void main_f_aed850() {}

// sub_aed860  (orig 0xaed860, tailcall)
void main_f_aed860() { main::sub_ce0(); }

// sub_aed8d0  (orig 0xaed8d0, tailcall)
void main_f_aed8d0() { main::sub_ce0(); }

// sub_aed940  (orig 0xaed940, ret_only)
void main_f_aed940() {}

// sub_aed950  (orig 0xaed950, tailcall)
void main_f_aed950() { main::sub_ce0(); }

// sub_aed9c0  (orig 0xaed9c0, tailcall)
void main_f_aed9c0() { main::sub_ce0(); }

// sub_aeda30  (orig 0xaeda30, ret_only)
void main_f_aeda30() {}

// sub_aeda40  (orig 0xaeda40, tailcall)
void main_f_aeda40() { main::sub_ce0(); }

// sub_aedab0  (orig 0xaedab0, tailcall)
void main_f_aedab0() { main::sub_ce0(); }

// sub_aedb20  (orig 0xaedb20, ret_only)
void main_f_aedb20() {}

// sub_aedb30  (orig 0xaedb30, tailcall)
void main_f_aedb30() { main::sub_ce0(); }

// sub_aedba0  (orig 0xaedba0, tailcall)
void main_f_aedba0() { main::sub_ce0(); }

// sub_aedc10  (orig 0xaedc10, ret_only)
void main_f_aedc10() {}

// sub_aedc20  (orig 0xaedc20, tailcall)
void main_f_aedc20() { main::sub_ce0(); }

// sub_aedc90  (orig 0xaedc90, tailcall)
void main_f_aedc90() { main::sub_ce0(); }

// sub_aedd00  (orig 0xaedd00, ret_only)
void main_f_aedd00() {}

// sub_aedd10  (orig 0xaedd10, tailcall)
void main_f_aedd10() { main::sub_ce0(); }

// sub_aede50  (orig 0xaede50, tailcall)
void main_f_aede50() { main::sub_ce0(); }

// sub_aedec0  (orig 0xaedec0, ret_only)
void main_f_aedec0() {}

// sub_aeded0  (orig 0xaeded0, tailcall)
void main_f_aeded0() { main::sub_ce0(); }

// sub_aedf40  (orig 0xaedf40, tailcall)
void main_f_aedf40() { main::sub_ce0(); }

// sub_aedfb0  (orig 0xaedfb0, ret_only)
void main_f_aedfb0() {}

// sub_aedfc0  (orig 0xaedfc0, tailcall)
void main_f_aedfc0() { main::sub_ce0(); }

// sub_aefe20  (orig 0xaefe20, tailcall)
void main_f_aefe20() { main::sub_ce0(); }

// sub_aefe90  (orig 0xaefe90, ret_only)
void main_f_aefe90() {}

// sub_aefea0  (orig 0xaefea0, tailcall)
void main_f_aefea0() { main::sub_ce0(); }

// sub_aeff10  (orig 0xaeff10, tailcall)
void main_f_aeff10() { main::sub_ce0(); }

// sub_aeff80  (orig 0xaeff80, ret_only)
void main_f_aeff80() {}

// sub_aeff90  (orig 0xaeff90, tailcall)
void main_f_aeff90() { main::sub_ce0(); }

// sub_af0000  (orig 0xaf0000, tailcall)
void main_f_af0000() { main::sub_ce0(); }

// sub_af0070  (orig 0xaf0070, ret_only)
void main_f_af0070() {}

// sub_af0080  (orig 0xaf0080, tailcall)
void main_f_af0080() { main::sub_ce0(); }

// sub_af0100  (orig 0xaf0100, ret_only)
void main_f_af0100() {}

// sub_af0110  (orig 0xaf0110, copy2)
void main_f_af0110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af0120  (orig 0xaf0120, copy2)
void main_f_af0120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af0150  (orig 0xaf0150, ret_only)
void main_f_af0150() {}

// sub_af0160  (orig 0xaf0160, copy2)
void main_f_af0160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af0170  (orig 0xaf0170, copy2)
void main_f_af0170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af1c10  (orig 0xaf1c10, tailcall)
void main_f_af1c10() { main::sub_ac70e0(); }

// sub_af1e00  (orig 0xaf1e00, ret_only)
void main_f_af1e00() {}

// sub_af1e10  (orig 0xaf1e10, copy2)
void main_f_af1e10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af1e20  (orig 0xaf1e20, copy2)
void main_f_af1e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af1e30  (orig 0xaf1e30, tailcall)
void main_f_af1e30() { main::sub_ce0(); }

// sub_af1ea0  (orig 0xaf1ea0, ret_only)
void main_f_af1ea0() {}

// sub_af1eb0  (orig 0xaf1eb0, tailcall)
void main_f_af1eb0() { main::sub_ce0(); }

// sub_af1f20  (orig 0xaf1f20, tailcall)
void main_f_af1f20() { main::sub_ce0(); }

// sub_af1f90  (orig 0xaf1f90, ret_only)
void main_f_af1f90() {}

// sub_af1fa0  (orig 0xaf1fa0, tailcall)
void main_f_af1fa0() { main::sub_ce0(); }

// sub_af2010  (orig 0xaf2010, tailcall)
void main_f_af2010() { main::sub_ce0(); }

// sub_af2080  (orig 0xaf2080, ret_only)
void main_f_af2080() {}

// sub_af2090  (orig 0xaf2090, tailcall)
void main_f_af2090() { main::sub_ce0(); }

// sub_af2100  (orig 0xaf2100, tailcall)
void main_f_af2100() { main::sub_ce0(); }

// sub_af2170  (orig 0xaf2170, ret_only)
void main_f_af2170() {}

// sub_af2180  (orig 0xaf2180, tailcall)
void main_f_af2180() { main::sub_ce0(); }

// sub_af21f0  (orig 0xaf21f0, tailcall)
void main_f_af21f0() { main::sub_ce0(); }

// sub_af2260  (orig 0xaf2260, ret_only)
void main_f_af2260() {}

// sub_af2270  (orig 0xaf2270, tailcall)
void main_f_af2270() { main::sub_ce0(); }

// sub_af22e0  (orig 0xaf22e0, tailcall)
void main_f_af22e0() { main::sub_ce0(); }

// sub_af2350  (orig 0xaf2350, ret_only)
void main_f_af2350() {}

// sub_af2360  (orig 0xaf2360, tailcall)
void main_f_af2360() { main::sub_ce0(); }

// sub_af23d0  (orig 0xaf23d0, tailcall)
void main_f_af23d0() { main::sub_ce0(); }

// sub_af2440  (orig 0xaf2440, ret_only)
void main_f_af2440() {}

// sub_af2450  (orig 0xaf2450, tailcall)
void main_f_af2450() { main::sub_ce0(); }

// sub_af24c0  (orig 0xaf24c0, tailcall)
void main_f_af24c0() { main::sub_ce0(); }

// sub_af2530  (orig 0xaf2530, ret_only)
void main_f_af2530() {}

// sub_af2540  (orig 0xaf2540, tailcall)
void main_f_af2540() { main::sub_ce0(); }

// sub_af25b0  (orig 0xaf25b0, tailcall)
void main_f_af25b0() { main::sub_ce0(); }

// sub_af2620  (orig 0xaf2620, ret_only)
void main_f_af2620() {}

// sub_af2630  (orig 0xaf2630, tailcall)
void main_f_af2630() { main::sub_ce0(); }

// sub_af26a0  (orig 0xaf26a0, tailcall)
void main_f_af26a0() { main::sub_ce0(); }

// sub_af2710  (orig 0xaf2710, ret_only)
void main_f_af2710() {}

// sub_af2720  (orig 0xaf2720, tailcall)
void main_f_af2720() { main::sub_ce0(); }

// sub_af2790  (orig 0xaf2790, tailcall)
void main_f_af2790() { main::sub_ce0(); }

// sub_af2800  (orig 0xaf2800, ret_only)
void main_f_af2800() {}

// sub_af2810  (orig 0xaf2810, tailcall)
void main_f_af2810() { main::sub_ce0(); }

// sub_af2880  (orig 0xaf2880, tailcall)
void main_f_af2880() { main::sub_ce0(); }

// sub_af28f0  (orig 0xaf28f0, ret_only)
void main_f_af28f0() {}

// sub_af2900  (orig 0xaf2900, tailcall)
void main_f_af2900() { main::sub_ce0(); }

// sub_af2970  (orig 0xaf2970, tailcall)
void main_f_af2970() { main::sub_ce0(); }

// sub_af29e0  (orig 0xaf29e0, ret_only)
void main_f_af29e0() {}

// sub_af29f0  (orig 0xaf29f0, tailcall)
void main_f_af29f0() { main::sub_ce0(); }

// sub_af2a60  (orig 0xaf2a60, tailcall)
void main_f_af2a60() { main::sub_ce0(); }

// sub_af2ad0  (orig 0xaf2ad0, ret_only)
void main_f_af2ad0() {}

// sub_af2ae0  (orig 0xaf2ae0, tailcall)
void main_f_af2ae0() { main::sub_ce0(); }

// sub_af2b50  (orig 0xaf2b50, tailcall)
void main_f_af2b50() { main::sub_ce0(); }

// sub_af2bc0  (orig 0xaf2bc0, ret_only)
void main_f_af2bc0() {}

// sub_af2bd0  (orig 0xaf2bd0, tailcall)
void main_f_af2bd0() { main::sub_ce0(); }

// sub_af2c40  (orig 0xaf2c40, tailcall)
void main_f_af2c40() { main::sub_ce0(); }

// sub_af2cb0  (orig 0xaf2cb0, ret_only)
void main_f_af2cb0() {}

// sub_af2cc0  (orig 0xaf2cc0, tailcall)
void main_f_af2cc0() { main::sub_ce0(); }

// sub_af4ad0  (orig 0xaf4ad0, setter)
void main_f_af4ad0(void* a0, uint64_t unused1, uint64_t unused2, uint32_t a3) { *(uint32_t*)((char*)(a0) + 2216) = a3; }

// sub_af5970  (orig 0xaf5970, ret_only)
void main_f_af5970() {}

// sub_af59c0  (orig 0xaf59c0, tailcall)
void main_f_af59c0() { main::sub_ce0(); }

// sub_af5a30  (orig 0xaf5a30, ret_only)
void main_f_af5a30() {}

// sub_af5a40  (orig 0xaf5a40, tailcall)
void main_f_af5a40() { main::sub_ce0(); }

// sub_af5ab0  (orig 0xaf5ab0, tailcall)
void main_f_af5ab0() { main::sub_ce0(); }

// sub_af5b20  (orig 0xaf5b20, ret_only)
void main_f_af5b20() {}

// sub_af5b30  (orig 0xaf5b30, tailcall)
void main_f_af5b30() { main::sub_ce0(); }

// sub_af5c10  (orig 0xaf5c10, ret_only)
void main_f_af5c10() {}

// sub_af5c20  (orig 0xaf5c20, copy2)
void main_f_af5c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af5c30  (orig 0xaf5c30, copy2)
void main_f_af5c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_af6120  (orig 0xaf6120, tailcall)
void main_f_af6120() { main::sub_ce0(); }

// sub_af6190  (orig 0xaf6190, ret_only)
void main_f_af6190() {}

// sub_af61a0  (orig 0xaf61a0, tailcall)
void main_f_af61a0() { main::sub_ce0(); }

// sub_af6210  (orig 0xaf6210, tailcall)
void main_f_af6210() { main::sub_ce0(); }

// sub_af6280  (orig 0xaf6280, ret_only)
void main_f_af6280() {}

// sub_af6290  (orig 0xaf6290, tailcall)
void main_f_af6290() { main::sub_ce0(); }

// sub_af6300  (orig 0xaf6300, tailcall)
void main_f_af6300() { main::sub_ce0(); }

// sub_af6370  (orig 0xaf6370, ret_only)
void main_f_af6370() {}

// sub_af6380  (orig 0xaf6380, tailcall)
void main_f_af6380() { main::sub_ce0(); }

// sub_af63f0  (orig 0xaf63f0, tailcall)
void main_f_af63f0() { main::sub_ce0(); }

// sub_af6460  (orig 0xaf6460, ret_only)
void main_f_af6460() {}

// sub_af6470  (orig 0xaf6470, tailcall)
void main_f_af6470() { main::sub_ce0(); }

// sub_af64e0  (orig 0xaf64e0, tailcall)
void main_f_af64e0() { main::sub_ce0(); }

// sub_af6550  (orig 0xaf6550, ret_only)
void main_f_af6550() {}

// sub_af6560  (orig 0xaf6560, tailcall)
void main_f_af6560() { main::sub_ce0(); }

// sub_af65d0  (orig 0xaf65d0, tailcall)
void main_f_af65d0() { main::sub_ce0(); }

// sub_af6640  (orig 0xaf6640, ret_only)
void main_f_af6640() {}

// sub_af6650  (orig 0xaf6650, tailcall)
void main_f_af6650() { main::sub_ce0(); }

// sub_af66c0  (orig 0xaf66c0, tailcall)
void main_f_af66c0() { main::sub_ce0(); }

// sub_af6730  (orig 0xaf6730, ret_only)
void main_f_af6730() {}

// sub_af6740  (orig 0xaf6740, tailcall)
void main_f_af6740() { main::sub_ce0(); }

// sub_af67b0  (orig 0xaf67b0, tailcall)
void main_f_af67b0() { main::sub_ce0(); }

// sub_af6820  (orig 0xaf6820, ret_only)
void main_f_af6820() {}

// sub_af6830  (orig 0xaf6830, tailcall)
void main_f_af6830() { main::sub_ce0(); }

// sub_af68a0  (orig 0xaf68a0, tailcall)
void main_f_af68a0() { main::sub_ce0(); }

// sub_af6910  (orig 0xaf6910, ret_only)
void main_f_af6910() {}

// sub_af6920  (orig 0xaf6920, tailcall)
void main_f_af6920() { main::sub_ce0(); }

// sub_af6990  (orig 0xaf6990, tailcall)
void main_f_af6990() { main::sub_ce0(); }

// sub_af6a00  (orig 0xaf6a00, ret_only)
void main_f_af6a00() {}

// sub_af6a10  (orig 0xaf6a10, tailcall)
void main_f_af6a10() { main::sub_ce0(); }

// sub_af6a80  (orig 0xaf6a80, tailcall)
void main_f_af6a80() { main::sub_ce0(); }

// sub_af6af0  (orig 0xaf6af0, ret_only)
void main_f_af6af0() {}

// sub_af6b00  (orig 0xaf6b00, tailcall)
void main_f_af6b00() { main::sub_ce0(); }

// sub_af6b70  (orig 0xaf6b70, tailcall)
void main_f_af6b70() { main::sub_ce0(); }

// sub_af6be0  (orig 0xaf6be0, ret_only)
void main_f_af6be0() {}

// sub_af6bf0  (orig 0xaf6bf0, tailcall)
void main_f_af6bf0() { main::sub_ce0(); }

// sub_af6c60  (orig 0xaf6c60, tailcall)
void main_f_af6c60() { main::sub_ce0(); }

// sub_af6cd0  (orig 0xaf6cd0, ret_only)
void main_f_af6cd0() {}

// sub_af6ce0  (orig 0xaf6ce0, tailcall)
void main_f_af6ce0() { main::sub_ce0(); }

// sub_af6d50  (orig 0xaf6d50, tailcall)
void main_f_af6d50() { main::sub_ce0(); }

// sub_af6dc0  (orig 0xaf6dc0, ret_only)
void main_f_af6dc0() {}

// sub_af6dd0  (orig 0xaf6dd0, tailcall)
void main_f_af6dd0() { main::sub_ce0(); }

// sub_af6e40  (orig 0xaf6e40, tailcall)
void main_f_af6e40() { main::sub_ce0(); }

// sub_af6eb0  (orig 0xaf6eb0, ret_only)
void main_f_af6eb0() {}

// sub_af6ec0  (orig 0xaf6ec0, tailcall)
void main_f_af6ec0() { main::sub_ce0(); }

// sub_af6f30  (orig 0xaf6f30, tailcall)
void main_f_af6f30() { main::sub_ce0(); }

// sub_af6fa0  (orig 0xaf6fa0, ret_only)
void main_f_af6fa0() {}

// sub_af6fb0  (orig 0xaf6fb0, tailcall)
void main_f_af6fb0() { main::sub_ce0(); }

// sub_af7450  (orig 0xaf7450, ret_only)
void main_f_af7450() {}

// sub_afa580  (orig 0xafa580, tailcall)
void main_f_afa580() { main::sub_15b6e10(); }

// sub_afa590  (orig 0xafa590, tailcall)
void main_f_afa590() { main::sub_15b6e10(); }

// sub_afb5f0  (orig 0xafb5f0, getter)
uint64_t main_f_afb5f0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_afb7c0  (orig 0xafb7c0, getter)
uint64_t main_f_afb7c0(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_afbc90  (orig 0xafbc90, tailcall)
void main_f_afbc90() { main::sub_ac5b50(); }

// sub_afbe00  (orig 0xafbe00, tailcall)
void main_f_afbe00() { main::sub_ac5b50(); }

// sub_afbe10  (orig 0xafbe10, tailcall)
void main_f_afbe10() { main::sub_ac5b50(); }

// sub_afc4b0  (orig 0xafc4b0, ret_only)
void main_f_afc4b0() {}

// sub_b02200  (orig 0xb02200, ret_only)
void main_f_b02200() {}

// sub_b02940  (orig 0xb02940, ret_only)
void main_f_b02940() {}

// sub_b08ef0  (orig 0xb08ef0, ret_only)
void main_f_b08ef0() {}

// sub_b0ade0  (orig 0xb0ade0, ret_only)
void main_f_b0ade0() {}

// sub_b0d6c0  (orig 0xb0d6c0, tailcall)
void main_f_b0d6c0() { main::sub_b0d570(); }

// sub_b0ec90  (orig 0xb0ec90, setter)
void main_f_b0ec90(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_b0edf0  (orig 0xb0edf0, ret_only)
void main_f_b0edf0() {}

// sub_b0eea0  (orig 0xb0eea0, ret_only)
void main_f_b0eea0() {}

// sub_b0eeb0  (orig 0xb0eeb0, mov_ret)
uint64_t main_f_b0eeb0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_b0f0a0  (orig 0xb0f0a0, mov_ret)
uint32_t main_f_b0f0a0() { return 1; }

// sub_b0f150  (orig 0xb0f150, getter)
uint32_t main_f_b0f150(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_b0f160  (orig 0xb0f160, mov_ret)
uint32_t main_f_b0f160() { return 1; }

// sub_b0f6f0  (orig 0xb0f6f0, setter)
void main_f_b0f6f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_b0fbf0  (orig 0xb0fbf0, mov_ret)
uint32_t main_f_b0fbf0() { return 1; }

// sub_b0fca0  (orig 0xb0fca0, getter)
uint32_t main_f_b0fca0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_b0fcb0  (orig 0xb0fcb0, mov_ret)
uint32_t main_f_b0fcb0() { return 1; }

// sub_b10120  (orig 0xb10120, ret_only)
void main_f_b10120() {}

// sub_b14b20  (orig 0xb14b20, ret_only)
void main_f_b14b20() {}

// sub_b16c80  (orig 0xb16c80, ret_only)
void main_f_b16c80() {}

// sub_b19480  (orig 0xb19480, ret_only)
void main_f_b19480() {}

// sub_b1cdd0  (orig 0xb1cdd0, tailcall)
void main_f_b1cdd0() { main::sub_b1cc70(); }

// sub_b1f0c0  (orig 0xb1f0c0, ret_only)
void main_f_b1f0c0() {}

// sub_b22510  (orig 0xb22510, tailcall)
void main_f_b22510() { main::sub_b22430(); }

// sub_b23690  (orig 0xb23690, ret_only)
void main_f_b23690() {}

// sub_b25570  (orig 0xb25570, ret_only)
void main_f_b25570() {}

// sub_b27050  (orig 0xb27050, ret_only)
void main_f_b27050() {}

// sub_b294d0  (orig 0xb294d0, ret_only)
void main_f_b294d0() {}

// sub_b2a060  (orig 0xb2a060, ret_only)
void main_f_b2a060() {}

// sub_b2b5a0  (orig 0xb2b5a0, mov_ret)
uint32_t main_f_b2b5a0() { return 1; }

// sub_b2b5b0  (orig 0xb2b5b0, ret_only)
void main_f_b2b5b0() {}

// sub_b2b5c0  (orig 0xb2b5c0, ret_only)
void main_f_b2b5c0() {}

// sub_b2b890  (orig 0xb2b890, tailcall)
void main_f_b2b890() { main::sub_b2b8c0(); }

// sub_b2b8a0  (orig 0xb2b8a0, tailcall)
void main_f_b2b8a0() { main::sub_b2b8c0(); }

// sub_b2b8b0  (orig 0xb2b8b0, tailcall)
void main_f_b2b8b0() { main::sub_b2b8c0(); }

// sub_b2bdb0  (orig 0xb2bdb0, mov_ret)
uint32_t main_f_b2bdb0() { return 1; }

// sub_b2bdc0  (orig 0xb2bdc0, ret_only)
void main_f_b2bdc0() {}

// sub_b2bdd0  (orig 0xb2bdd0, ret_only)
void main_f_b2bdd0() {}

// sub_b2bf50  (orig 0xb2bf50, mov_ret)
uint32_t main_f_b2bf50() { return 1; }

// sub_b2c100  (orig 0xb2c100, tailcall)
void main_f_b2c100() { main::sub_b2bf60(); }

// sub_b2c360  (orig 0xb2c360, tailcall)
void main_f_b2c360() { main::sub_e7c250(); }

// sub_b2c370  (orig 0xb2c370, tailcall)
void main_f_b2c370() { main::sub_b2c9c0(); }

// sub_b2c3a0  (orig 0xb2c3a0, tailcall)
void main_f_b2c3a0() { main::sub_b2c9c0(); }

// sub_b2c3b0  (orig 0xb2c3b0, tailcall)
void main_f_b2c3b0() { main::sub_b2c9c0(); }

// sub_b2c630  (orig 0xb2c630, getter)
uint64_t main_f_b2c630(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_b2c7a0  (orig 0xb2c7a0, mov_ret)
uint32_t main_f_b2c7a0() { return 1; }

// sub_b2d2a0  (orig 0xb2d2a0, tailcall)
void main_f_b2d2a0() { main::sub_b2d2b0(); }

// sub_b2d500  (orig 0xb2d500, ret_only)
void main_f_b2d500() {}

// sub_b2d510  (orig 0xb2d510, straight)
void main_f_b2d510(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 3;
}

// sub_b2d520  (orig 0xb2d520, straight)
void main_f_b2d520(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 3;
}

// sub_b2d530  (orig 0xb2d530, straight)
void main_f_b2d530(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 4;
}

// sub_b2d540  (orig 0xb2d540, straight)
void main_f_b2d540(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 4;
}

// sub_b2d550  (orig 0xb2d550, straight)
void main_f_b2d550(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 4;
}

// sub_b2d560  (orig 0xb2d560, straight)
void main_f_b2d560(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 4;
}

// sub_b2d570  (orig 0xb2d570, straight)
void main_f_b2d570(void* a0) {
    *(uint32_t*)((char*)(a0) + 132) = 4;
}

// sub_b2d580  (orig 0xb2d580, straight)
void main_f_b2d580(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = 4;
}

// sub_b2d760  (orig 0xb2d760, tailcall)
void main_f_b2d760() { main::sub_b2d590(); }

// sub_b2d770  (orig 0xb2d770, tailcall)
void main_f_b2d770() { main::sub_e7c4c0(); }

// sub_b2d780  (orig 0xb2d780, tailcall)
void main_f_b2d780() { main::sub_e7c4c0(); }

// sub_b2d790  (orig 0xb2d790, tailcall)
void main_f_b2d790() { main::sub_b2cc40(); }

// sub_b2d7c0  (orig 0xb2d7c0, tailcall)
void main_f_b2d7c0() { main::sub_b2cc40(); }

// sub_b2d7d0  (orig 0xb2d7d0, tailcall)
void main_f_b2d7d0() { main::sub_b2cc40(); }

// sub_b2dd00  (orig 0xb2dd00, mov_ret)
uint32_t main_f_b2dd00() { return 1; }

// sub_b2dd10  (orig 0xb2dd10, ret_only)
void main_f_b2dd10() {}

// sub_b2e450  (orig 0xb2e450, tailcall)
void main_f_b2e450() { main::sub_b2e480(); }

// sub_b2e460  (orig 0xb2e460, tailcall)
void main_f_b2e460() { main::sub_b2e480(); }

// sub_b2e470  (orig 0xb2e470, tailcall)
void main_f_b2e470() { main::sub_b2e480(); }

// sub_b2ea50  (orig 0xb2ea50, mov_ret)
uint32_t main_f_b2ea50() { return 1; }

// sub_b2f090  (orig 0xb2f090, ret_only)
void main_f_b2f090() {}

// sub_b2f400  (orig 0xb2f400, mov_ret)
uint32_t main_f_b2f400() { return 1; }

// sub_b2f630  (orig 0xb2f630, tailcall)
void main_f_b2f630() { main::sub_b2f410(); }

// sub_b30080  (orig 0xb30080, getter)
uint64_t main_f_b30080(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_b301f0  (orig 0xb301f0, mov_ret)
uint32_t main_f_b301f0() { return 1; }

// sub_b30ad0  (orig 0xb30ad0, tailcall)
void main_f_b30ad0() { main::sub_b309e0(); }

// sub_b30ae0  (orig 0xb30ae0, tailcall)
void main_f_b30ae0() { main::sub_b30410(); }

// sub_b30b10  (orig 0xb30b10, tailcall)
void main_f_b30b10() { main::sub_b30410(); }

// sub_b30b20  (orig 0xb30b20, tailcall)
void main_f_b30b20() { main::sub_b30410(); }

// sub_b314f0  (orig 0xb314f0, ret_only)
void main_f_b314f0() {}

// sub_b315e0  (orig 0xb315e0, tailcall)
void main_f_b315e0() { main::sub_b317d0(); }

// sub_b316d0  (orig 0xb316d0, tailcall)
void main_f_b316d0() { main::sub_b317d0(); }

// sub_b316e0  (orig 0xb316e0, tailcall)
void main_f_b316e0() { main::sub_b317d0(); }

// sub_b327a0  (orig 0xb327a0, straight)
void main_f_b327a0(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 4;
}

// sub_b327b0  (orig 0xb327b0, straight)
void main_f_b327b0(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 4;
}

// sub_b32800  (orig 0xb32800, straight)
void main_f_b32800(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 5;
}

// sub_b32810  (orig 0xb32810, straight)
void main_f_b32810(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 5;
}

// sub_b32820  (orig 0xb32820, straight)
void main_f_b32820(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 5;
}

// sub_b32830  (orig 0xb32830, straight)
void main_f_b32830(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 5;
}

// sub_b32840  (orig 0xb32840, straight)
void main_f_b32840(void* a0) {
    *(uint32_t*)((char*)(a0) + 140) = 5;
}

// sub_b32850  (orig 0xb32850, straight)
void main_f_b32850(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 5;
}

// sub_b32a30  (orig 0xb32a30, tailcall)
void main_f_b32a30() { main::sub_b32860(); }

// sub_b32a40  (orig 0xb32a40, tailcall)
void main_f_b32a40() { main::sub_e7c4c0(); }

// sub_b32a50  (orig 0xb32a50, tailcall)
void main_f_b32a50() { main::sub_e7c4c0(); }

// sub_b32a60  (orig 0xb32a60, tailcall)
void main_f_b32a60() { main::sub_b32b10(); }

// sub_b32a90  (orig 0xb32a90, tailcall)
void main_f_b32a90() { main::sub_b32b10(); }

// sub_b32aa0  (orig 0xb32aa0, tailcall)
void main_f_b32aa0() { main::sub_b32b10(); }

// sub_b32af0  (orig 0xb32af0, ret_only)
void main_f_b32af0() {}

// sub_b32b00  (orig 0xb32b00, ret_only)
void main_f_b32b00() {}

// sub_b32eb0  (orig 0xb32eb0, ret_only)
void main_f_b32eb0() {}

// sub_b32ec0  (orig 0xb32ec0, tailcall)
void main_f_b32ec0() { main::sub_e7c4c0(); }

// sub_b32ed0  (orig 0xb32ed0, tailcall)
void main_f_b32ed0() { main::sub_b32f40(); }

// sub_b32f00  (orig 0xb32f00, tailcall)
void main_f_b32f00() { main::sub_b32f40(); }

// sub_b32f10  (orig 0xb32f10, tailcall)
void main_f_b32f10() { main::sub_b32f40(); }

// sub_b37010  (orig 0xb37010, getter)
uint64_t main_f_b37010(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_b3b400  (orig 0xb3b400, tailcall)
void main_f_b3b400() { main::sub_b3b0b0(); }

// sub_b40eb0  (orig 0xb40eb0, getter)
uint64_t main_f_b40eb0(void* a0) { return *(uint64_t*)((char*)(a0) + 328); }

// sub_b42040  (orig 0xb42040, compare)
bool main_f_b42040(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 148)) == (uint64_t)(5); }

// sub_b42050  (orig 0xb42050, compare)
bool main_f_b42050(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 148)) == (uint64_t)(0); }

// sub_b42340  (orig 0xb42340, ret_only)
void main_f_b42340() {}

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

// sub_b443d0  (orig 0xb443d0, ret_only)
void main_f_b443d0() {}

// sub_b443e0  (orig 0xb443e0, tailcall)
void main_f_b443e0() { main::sub_ce0(); }

// sub_b44420  (orig 0xb44420, ret_only)
void main_f_b44420() {}

// sub_b45370  (orig 0xb45370, ret_only)
void main_f_b45370() {}

// sub_b45380  (orig 0xb45380, ret_only)
void main_f_b45380() {}

// sub_b45390  (orig 0xb45390, ret_only)
void main_f_b45390() {}

// sub_b453a0  (orig 0xb453a0, ret_only)
void main_f_b453a0() {}

// sub_b453b0  (orig 0xb453b0, ret_only)
void main_f_b453b0() {}

// sub_b453c0  (orig 0xb453c0, mov_ret)
uint32_t main_f_b453c0() { return 0; }

// sub_b453d0  (orig 0xb453d0, mov_ret)
uint32_t main_f_b453d0() { return 1; }

// sub_b45af0  (orig 0xb45af0, ret_only)
void main_f_b45af0() {}

// sub_b45b00  (orig 0xb45b00, ret_only)
void main_f_b45b00() {}

// sub_b45b10  (orig 0xb45b10, ret_only)
void main_f_b45b10() {}

// sub_b45b20  (orig 0xb45b20, ret_only)
void main_f_b45b20() {}

// sub_b45b30  (orig 0xb45b30, mov_ret)
uint32_t main_f_b45b30() { return 1; }

// sub_b45b40  (orig 0xb45b40, ret_only)
void main_f_b45b40() {}

// sub_b45b50  (orig 0xb45b50, ret_only)
void main_f_b45b50() {}

// sub_b45b60  (orig 0xb45b60, ret_only)
void main_f_b45b60() {}

// sub_b45b70  (orig 0xb45b70, ret_only)
void main_f_b45b70() {}

// sub_b45b80  (orig 0xb45b80, mov_ret)
uint32_t main_f_b45b80() { return 0; }

// sub_b45b90  (orig 0xb45b90, ret_only)
void main_f_b45b90() {}

// sub_b45ba0  (orig 0xb45ba0, ret_only)
void main_f_b45ba0() {}

// sub_b45bb0  (orig 0xb45bb0, mov_ret)
uint32_t main_f_b45bb0() { return 1; }

// sub_b45bc0  (orig 0xb45bc0, mov_ret)
uint64_t main_f_b45bc0() { return 0; }

// sub_b45bd0  (orig 0xb45bd0, mov_ret)
uint64_t main_f_b45bd0() { return 0; }

// sub_b45ec0  (orig 0xb45ec0, tailcall)
void main_f_b45ec0() { main::sub_b46170(); }

// sub_b46010  (orig 0xb46010, tailcall)
void main_f_b46010() { main::sub_b46170(); }

// sub_b46020  (orig 0xb46020, tailcall)
void main_f_b46020() { main::sub_b46170(); }

// sub_b462a0  (orig 0xb462a0, tailcall)
void main_f_b462a0() { main::sub_ce0(); }

// sub_b46310  (orig 0xb46310, ret_only)
void main_f_b46310() {}

// sub_b46320  (orig 0xb46320, tailcall)
void main_f_b46320() { main::sub_ce0(); }

// sub_b466f0  (orig 0xb466f0, tailcall)
void main_f_b466f0() { main::sub_b465b0(); }

// sub_b48850  (orig 0xb48850, tailcall)
void main_f_b48850() { main::sub_ce0(); }

// sub_b488c0  (orig 0xb488c0, ret_only)
void main_f_b488c0() {}

// sub_b488d0  (orig 0xb488d0, tailcall)
void main_f_b488d0() { main::sub_ce0(); }

// sub_b48930  (orig 0xb48930, tailcall)
void main_f_b48930() { main::sub_ce0(); }

// sub_b489a0  (orig 0xb489a0, ret_only)
void main_f_b489a0() {}

// sub_b489b0  (orig 0xb489b0, tailcall)
void main_f_b489b0() { main::sub_ce0(); }

// sub_b48a10  (orig 0xb48a10, tailcall)
void main_f_b48a10() { main::sub_ce0(); }

// sub_b48a80  (orig 0xb48a80, ret_only)
void main_f_b48a80() {}

// sub_b48a90  (orig 0xb48a90, tailcall)
void main_f_b48a90() { main::sub_ce0(); }

// sub_b48d60  (orig 0xb48d60, tailcall)
void main_f_b48d60() { main::sub_ce0(); }

// sub_b48dd0  (orig 0xb48dd0, ret_only)
void main_f_b48dd0() {}

// sub_b48de0  (orig 0xb48de0, tailcall)
void main_f_b48de0() { main::sub_ce0(); }

// sub_b48e00  (orig 0xb48e00, ret_only)
void main_f_b48e00() {}

// sub_b48e10  (orig 0xb48e10, tailcall)
void main_f_b48e10() { main::sub_ce0(); }

// sub_b48e80  (orig 0xb48e80, ret_only)
void main_f_b48e80() {}

// sub_b48e90  (orig 0xb48e90, tailcall)
void main_f_b48e90() { main::sub_ce0(); }

// sub_b48eb0  (orig 0xb48eb0, tailcall)
void main_f_b48eb0() { main::sub_ce0(); }

// sub_b48f20  (orig 0xb48f20, ret_only)
void main_f_b48f20() {}

// sub_b48f30  (orig 0xb48f30, tailcall)
void main_f_b48f30() { main::sub_ce0(); }

// sub_b48f60  (orig 0xb48f60, tailcall)
void main_f_b48f60() { main::sub_ce0(); }

// sub_b48fd0  (orig 0xb48fd0, ret_only)
void main_f_b48fd0() {}

// sub_b48fe0  (orig 0xb48fe0, tailcall)
void main_f_b48fe0() { main::sub_ce0(); }

// sub_b49000  (orig 0xb49000, tailcall)
void main_f_b49000() { main::sub_ce0(); }

// sub_b49070  (orig 0xb49070, ret_only)
void main_f_b49070() {}

// sub_b49080  (orig 0xb49080, tailcall)
void main_f_b49080() { main::sub_ce0(); }

// sub_b498a0  (orig 0xb498a0, ret_only)
void main_f_b498a0() {}

// sub_b498b0  (orig 0xb498b0, setter)
void main_f_b498b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_b498c0  (orig 0xb498c0, ret_only)
void main_f_b498c0() {}

// sub_b498d0  (orig 0xb498d0, tailcall)
void main_f_b498d0() { main::sub_ce0(); }

// sub_b4a450  (orig 0xb4a450, setter)
void main_f_b4a450(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_b4a780  (orig 0xb4a780, ret_only)
void main_f_b4a780() {}

// sub_b4a790  (orig 0xb4a790, tailcall)
void main_f_b4a790() { main::sub_ce0(); }

// sub_b4ce10  (orig 0xb4ce10, mov_ret)
uint32_t main_f_b4ce10() { return 1; }

// sub_b4d2e0  (orig 0xb4d2e0, mov_ret)
uint32_t main_f_b4d2e0() { return 9; }

// sub_b4dbe0  (orig 0xb4dbe0, mov_ret)
uint32_t main_f_b4dbe0() { return 28; }

// sub_b4e290  (orig 0xb4e290, mov_ret)
uint32_t main_f_b4e290() { return 28; }

// sub_b4e700  (orig 0xb4e700, mov_ret)
uint32_t main_f_b4e700() { return 8; }

// sub_b4ed80  (orig 0xb4ed80, mov_ret)
uint32_t main_f_b4ed80() { return 8; }

// sub_b4f640  (orig 0xb4f640, mov_ret)
uint32_t main_f_b4f640() { return 28; }

// sub_b4fcf0  (orig 0xb4fcf0, mov_ret)
uint32_t main_f_b4fcf0() { return 28; }

// sub_b50110  (orig 0xb50110, mov_ret)
uint32_t main_f_b50110() { return 7; }

// sub_b50710  (orig 0xb50710, mov_ret)
uint32_t main_f_b50710() { return 7; }

// sub_b50d10  (orig 0xb50d10, mov_ret)
uint32_t main_f_b50d10() { return 7; }

// sub_b513d0  (orig 0xb513d0, mov_ret)
uint32_t main_f_b513d0() { return 4; }

// sub_b518b0  (orig 0xb518b0, mov_ret)
uint32_t main_f_b518b0() { return 4; }

// sub_b51d00  (orig 0xb51d00, mov_ret)
uint32_t main_f_b51d00() { return 3; }

// sub_b52150  (orig 0xb52150, mov_ret)
uint32_t main_f_b52150() { return 3; }

// sub_b526b0  (orig 0xb526b0, mov_ret)
uint32_t main_f_b526b0() { return 20; }

// sub_b530e0  (orig 0xb530e0, mov_ret)
uint32_t main_f_b530e0() { return 20; }

// sub_b53ad0  (orig 0xb53ad0, mov_ret)
uint32_t main_f_b53ad0() { return 16; }

// sub_b54420  (orig 0xb54420, mov_ret)
uint32_t main_f_b54420() { return 20; }

// sub_b54e50  (orig 0xb54e50, mov_ret)
uint32_t main_f_b54e50() { return 20; }

// sub_b55840  (orig 0xb55840, mov_ret)
uint32_t main_f_b55840() { return 16; }

// sub_b55fb0  (orig 0xb55fb0, mov_ret)
uint32_t main_f_b55fb0() { return 1; }

// sub_b57170  (orig 0xb57170, getter)
uint64_t main_f_b57170(void* a0) { return *(uint64_t*)((char*)(a0) + 576); }

// sub_b57180  (orig 0xb57180, getter)
uint64_t main_f_b57180(void* a0) { return *(uint64_t*)((char*)(a0) + 584); }

// sub_b571b0  (orig 0xb571b0, getter)
uint64_t main_f_b571b0(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_b571c0  (orig 0xb571c0, getter)
uint64_t main_f_b571c0(void* a0) { return *(uint64_t*)((char*)(a0) + 600); }

// sub_b571d0  (orig 0xb571d0, getter)
uint64_t main_f_b571d0(void* a0) { return *(uint64_t*)((char*)(a0) + 608); }

// sub_b571e0  (orig 0xb571e0, getter)
uint64_t main_f_b571e0(void* a0) { return *(uint64_t*)((char*)(a0) + 616); }

// sub_b571f0  (orig 0xb571f0, getter)
uint64_t main_f_b571f0(void* a0) { return *(uint64_t*)((char*)(a0) + 624); }

// sub_b57200  (orig 0xb57200, getter)
uint64_t main_f_b57200(void* a0) { return *(uint64_t*)((char*)(a0) + 632); }

// sub_b57210  (orig 0xb57210, getter)
uint64_t main_f_b57210(void* a0) { return *(uint64_t*)((char*)(a0) + 640); }

// sub_b572c0  (orig 0xb572c0, ret_only)
void main_f_b572c0() {}

// sub_b572d0  (orig 0xb572d0, copy2)
void main_f_b572d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b572e0  (orig 0xb572e0, copy2)
void main_f_b572e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b57af0  (orig 0xb57af0, ptr_add)
void* main_f_b57af0(void* a0) { return (char*)a0 + 384; }

// sub_b58130  (orig 0xb58130, tailcall)
void main_f_b58130() { main::sub_ead240(); }

// sub_b58150  (orig 0xb58150, tailcall)
void main_f_b58150() { main::sub_ead240(); }

// sub_b58170  (orig 0xb58170, strlit-ret)
const char *main_f_b58170() { static char g_f_b58170[1]; __asm__ volatile("" ::: "memory"); return g_f_b58170; }

// sub_b58460  (orig 0xb58460, strlit-ret)
const char *main_f_b58460() { static char g_f_b58460[1]; __asm__ volatile("" ::: "memory"); return g_f_b58460; }

// sub_b5af10  (orig 0xb5af10, ret_only)
void main_f_b5af10() {}

// sub_b5af20  (orig 0xb5af20, ret_only)
void main_f_b5af20() {}

// sub_b5af30  (orig 0xb5af30, ret_only)
void main_f_b5af30() {}

// sub_b5b310  (orig 0xb5b310, ret_only)
void main_f_b5b310() {}

// sub_b5b320  (orig 0xb5b320, ret_only)
void main_f_b5b320() {}

// sub_b5b330  (orig 0xb5b330, ret_only)
void main_f_b5b330() {}

// sub_b5b420  (orig 0xb5b420, ret_only)
void main_f_b5b420() {}

// sub_b5b430  (orig 0xb5b430, copy2)
void main_f_b5b430(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b440  (orig 0xb5b440, copy2)
void main_f_b5b440(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b530  (orig 0xb5b530, ret_only)
void main_f_b5b530() {}

// sub_b5b540  (orig 0xb5b540, copy2)
void main_f_b5b540(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b550  (orig 0xb5b550, copy2)
void main_f_b5b550(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b640  (orig 0xb5b640, ret_only)
void main_f_b5b640() {}

// sub_b5b650  (orig 0xb5b650, copy2)
void main_f_b5b650(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b660  (orig 0xb5b660, copy2)
void main_f_b5b660(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b750  (orig 0xb5b750, ret_only)
void main_f_b5b750() {}

// sub_b5b760  (orig 0xb5b760, copy2)
void main_f_b5b760(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b770  (orig 0xb5b770, copy2)
void main_f_b5b770(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b860  (orig 0xb5b860, ret_only)
void main_f_b5b860() {}

// sub_b5b870  (orig 0xb5b870, copy2)
void main_f_b5b870(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b880  (orig 0xb5b880, copy2)
void main_f_b5b880(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b970  (orig 0xb5b970, ret_only)
void main_f_b5b970() {}

// sub_b5b980  (orig 0xb5b980, copy2)
void main_f_b5b980(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5b990  (orig 0xb5b990, copy2)
void main_f_b5b990(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5ba80  (orig 0xb5ba80, ret_only)
void main_f_b5ba80() {}

// sub_b5ba90  (orig 0xb5ba90, copy2)
void main_f_b5ba90(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5baa0  (orig 0xb5baa0, copy2)
void main_f_b5baa0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bb90  (orig 0xb5bb90, ret_only)
void main_f_b5bb90() {}

// sub_b5bba0  (orig 0xb5bba0, copy2)
void main_f_b5bba0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bbb0  (orig 0xb5bbb0, copy2)
void main_f_b5bbb0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bca0  (orig 0xb5bca0, ret_only)
void main_f_b5bca0() {}

// sub_b5bcb0  (orig 0xb5bcb0, copy2)
void main_f_b5bcb0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bcc0  (orig 0xb5bcc0, copy2)
void main_f_b5bcc0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bdb0  (orig 0xb5bdb0, ret_only)
void main_f_b5bdb0() {}

// sub_b5bdc0  (orig 0xb5bdc0, copy2)
void main_f_b5bdc0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bdd0  (orig 0xb5bdd0, copy2)
void main_f_b5bdd0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bec0  (orig 0xb5bec0, ret_only)
void main_f_b5bec0() {}

// sub_b5bed0  (orig 0xb5bed0, copy2)
void main_f_b5bed0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bee0  (orig 0xb5bee0, copy2)
void main_f_b5bee0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bfd0  (orig 0xb5bfd0, ret_only)
void main_f_b5bfd0() {}

// sub_b5bfe0  (orig 0xb5bfe0, copy2)
void main_f_b5bfe0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5bff0  (orig 0xb5bff0, copy2)
void main_f_b5bff0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_b5c740  (orig 0xb5c740, ret_only)
void main_f_b5c740() {}

// sub_b5c750  (orig 0xb5c750, ret_only)
void main_f_b5c750() {}

// sub_b5c760  (orig 0xb5c760, ret_only)
void main_f_b5c760() {}

// sub_b5ceb0  (orig 0xb5ceb0, ret_only)
void main_f_b5ceb0() {}

// sub_b5cec0  (orig 0xb5cec0, ret_only)
void main_f_b5cec0() {}

// sub_b5ced0  (orig 0xb5ced0, ret_only)
void main_f_b5ced0() {}

// sub_b5cfe0  (orig 0xb5cfe0, ret_only)
void main_f_b5cfe0() {}

// sub_b5cff0  (orig 0xb5cff0, ret_only)
void main_f_b5cff0() {}

// sub_b5d000  (orig 0xb5d000, ret_only)
void main_f_b5d000() {}

// sub_b5d110  (orig 0xb5d110, ret_only)
void main_f_b5d110() {}

// sub_b5d120  (orig 0xb5d120, ret_only)
void main_f_b5d120() {}

// sub_b5d130  (orig 0xb5d130, ret_only)
void main_f_b5d130() {}

// sub_b5d760  (orig 0xb5d760, ret_only)
void main_f_b5d760() {}

// sub_b5d770  (orig 0xb5d770, ret_only)
void main_f_b5d770() {}

// sub_b5d780  (orig 0xb5d780, ret_only)
void main_f_b5d780() {}

// sub_b5d820  (orig 0xb5d820, ret_only)
void main_f_b5d820() {}

// sub_b5d830  (orig 0xb5d830, ret_only)
void main_f_b5d830() {}

// sub_b5d840  (orig 0xb5d840, ret_only)
void main_f_b5d840() {}

// sub_b5fb80  (orig 0xb5fb80, tailcall)
void main_f_b5fb80() { main::sub_b5eff0(); }

// sub_b6c770  (orig 0xb6c770, tailcall)
void main_f_b6c770() { main::sub_ce0(); }

// sub_b6f890  (orig 0xb6f890, ret_only)
void main_f_b6f890() {}

// sub_b6f8a0  (orig 0xb6f8a0, copy2)
void main_f_b6f8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b6f8b0  (orig 0xb6f8b0, copy2)
void main_f_b6f8b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b6fb40  (orig 0xb6fb40, getter)
uint8_t main_f_b6fb40(void* a0) { return *(uint8_t*)((char*)(a0) + 5); }

// sub_b6fb50  (orig 0xb6fb50, setter)
void main_f_b6fb50(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 5) = a1; }

// sub_b6fb60  (orig 0xb6fb60, copy2)
void main_f_b6fb60(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1)); }

// sub_b70ea0  (orig 0xb70ea0, ret_only)
void main_f_b70ea0() {}

// sub_b744c0  (orig 0xb744c0, strlit-ret)
const char *main_f_b744c0() { static char g_f_b744c0[1]; __asm__ volatile("" ::: "memory"); return g_f_b744c0; }

// sub_b74840  (orig 0xb74840, strlit-ret)
const char *main_f_b74840() { static char g_f_b74840[1]; __asm__ volatile("" ::: "memory"); return g_f_b74840; }

// sub_b75610  (orig 0xb75610, tailcall)
void main_f_b75610() { main::sub_b75450(); }

// sub_b75f00  (orig 0xb75f00, getter)
uint64_t main_f_b75f00(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_b76070  (orig 0xb76070, tailcall)
void main_f_b76070() { main::sub_b75f10(); }

// sub_b76130  (orig 0xb76130, compare)
bool main_f_b76130(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 120)) == (uint64_t)(4); }

// sub_b76140  (orig 0xb76140, compare)
bool main_f_b76140(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 120)) == (uint64_t)(0); }

// sub_b765d0  (orig 0xb765d0, ret_only)
void main_f_b765d0() {}

// sub_b765e0  (orig 0xb765e0, ret_only)
void main_f_b765e0() {}

// sub_b765f0  (orig 0xb765f0, ret_only)
void main_f_b765f0() {}

// sub_b76600  (orig 0xb76600, ret_only)
void main_f_b76600() {}

// sub_b76610  (orig 0xb76610, ret_only)
void main_f_b76610() {}

// sub_b76620  (orig 0xb76620, ret_only)
void main_f_b76620() {}

// sub_b76630  (orig 0xb76630, mov_ret)
uint32_t main_f_b76630() { return 1; }

// sub_b77330  (orig 0xb77330, getter)
uint64_t main_f_b77330(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_b77340  (orig 0xb77340, getter)
uint64_t main_f_b77340(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_b774b0  (orig 0xb774b0, tailcall)
void main_f_b774b0() { main::sub_b77350(); }

// sub_b78780  (orig 0xb78780, tailcall)
void main_f_b78780() { main::sub_b78620(); }

// sub_b79510  (orig 0xb79510, getter)
uint64_t main_f_b79510(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_b79df0  (orig 0xb79df0, tailcall)
void main_f_b79df0() { main::sub_b79e10(); }

// sub_b79e00  (orig 0xb79e00, ret_only)
void main_f_b79e00() {}

// sub_b7a130  (orig 0xb7a130, tailcall)
void main_f_b7a130() { main::sub_b7a150(); }

// sub_b7a140  (orig 0xb7a140, ret_only)
void main_f_b7a140() {}

// sub_b7e3c0  (orig 0xb7e3c0, getter)
uint32_t main_f_b7e3c0(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_b7f2f0  (orig 0xb7f2f0, getter)
uint64_t main_f_b7f2f0(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_b7f460  (orig 0xb7f460, tailcall)
void main_f_b7f460() { main::sub_b7f300(); }

// sub_b7fad0  (orig 0xb7fad0, tailcall)
void main_f_b7fad0() { main::sub_b77350(); }

// sub_b80690  (orig 0xb80690, setter)
void main_f_b80690(void* a0) { *(uint32_t*)((char*)(a0) + 120) = 0; }

// sub_b80a60  (orig 0xb80a60, tailcall)
void main_f_b80a60() { main::sub_b80850(); }

// sub_b80fd0  (orig 0xb80fd0, ret_only)
void main_f_b80fd0() {}

// sub_b80fe0  (orig 0xb80fe0, copy2)
void main_f_b80fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b80ff0  (orig 0xb80ff0, copy2)
void main_f_b80ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b81210  (orig 0xb81210, setter)
void main_f_b81210(void* a0) { *(uint32_t*)((char*)(a0) + 120) = 0; }

// sub_b830e0  (orig 0xb830e0, tailcall)
void main_f_b830e0() { main::sub_b82fb0(); }

// sub_b839f0  (orig 0xb839f0, strlit-ret)
const char *main_f_b839f0() { static char g_f_b839f0[1]; __asm__ volatile("" ::: "memory"); return g_f_b839f0; }

// sub_b83d50  (orig 0xb83d50, strlit-ret)
const char *main_f_b83d50() { static char g_f_b83d50[1]; __asm__ volatile("" ::: "memory"); return g_f_b83d50; }

// sub_b843a0  (orig 0xb843a0, tailcall)
void main_f_b843a0() { main::sub_b49230(); }

// sub_b843e0  (orig 0xb843e0, tailcall)
void main_f_b843e0() { main::sub_b493d0(); }

// sub_b850b0  (orig 0xb850b0, tailcall)
void main_f_b850b0() { main::sub_b84f60(); }

// sub_b856a0  (orig 0xb856a0, tailcall)
void main_f_b856a0() { main::sub_b854f0(); }

// sub_b86230  (orig 0xb86230, ret_only)
void main_f_b86230() {}

// sub_b864c0  (orig 0xb864c0, copy2)
void main_f_b864c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b864d0  (orig 0xb864d0, copy2)
void main_f_b864d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b867f0  (orig 0xb867f0, tailcall)
void main_f_b867f0() { main::sub_b866b0(); }

// sub_b871c0  (orig 0xb871c0, tailcall)
void main_f_b871c0() { main::sub_b86f10(); }

// sub_b8a630  (orig 0xb8a630, getter)
uint64_t main_f_b8a630(void* a0) { return *(uint64_t*)((char*)(a0) + 320); }

// sub_b8b8c0  (orig 0xb8b8c0, ret_only)
void main_f_b8b8c0() {}

// sub_b8b8d0  (orig 0xb8b8d0, copy2)
void main_f_b8b8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8b8e0  (orig 0xb8b8e0, copy2)
void main_f_b8b8e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8bc20  (orig 0xb8bc20, ret_only)
void main_f_b8bc20() {}

// sub_b8bc30  (orig 0xb8bc30, copy2)
void main_f_b8bc30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8bc40  (orig 0xb8bc40, copy2)
void main_f_b8bc40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8bf20  (orig 0xb8bf20, ret_only)
void main_f_b8bf20() {}

// sub_b8bf30  (orig 0xb8bf30, copy2)
void main_f_b8bf30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8bf40  (orig 0xb8bf40, copy2)
void main_f_b8bf40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_b8ca90  (orig 0xb8ca90, tailcall)
void main_f_b8ca90() { main::sub_b465b0(); }

// sub_b8cdc0  (orig 0xb8cdc0, tailcall)
void main_f_b8cdc0() { main::sub_b8cc30(); }

// sub_b8fc20  (orig 0xb8fc20, tailcall)
void main_f_b8fc20() { main::sub_b3f380(); }

// sub_b8fc30  (orig 0xb8fc30, tailcall)
void main_f_b8fc30() { main::sub_b3f3a0(); }

// sub_b8fc40  (orig 0xb8fc40, tailcall)
void main_f_b8fc40() { main::sub_b3f3f0(); }

// sub_b90260  (orig 0xb90260, tailcall)
void main_f_b90260() { main::sub_b3fbd0(); }

// sub_b918f0  (orig 0xb918f0, ptr_add)
void* main_f_b918f0(void* a0) { return (char*)a0 + 472; }

// sub_b94120  (orig 0xb94120, tailcall)
void main_f_b94120() { main::sub_b3adb0(); }

// sub_b94140  (orig 0xb94140, tailcall)
void main_f_b94140() { main::sub_b3adb0(); }

// sub_b94150  (orig 0xb94150, tailcall)
void main_f_b94150() { main::sub_b3adb0(); }

// sub_b95710  (orig 0xb95710, tailcall)
void main_f_b95710() { main::sub_b465b0(); }

// sub_b99170  (orig 0xb99170, ret_only)
void main_f_b99170() {}

// sub_b99180  (orig 0xb99180, ret_only)
void main_f_b99180() {}

// sub_b99190  (orig 0xb99190, ret_only)
void main_f_b99190() {}

// sub_b991a0  (orig 0xb991a0, tailcall)
void main_f_b991a0() { main::sub_ce0(); }

// sub_b99210  (orig 0xb99210, ret_only)
void main_f_b99210() {}

// sub_b99220  (orig 0xb99220, tailcall)
void main_f_b99220() { main::sub_ce0(); }

// sub_b99530  (orig 0xb99530, tailcall)
void main_f_b99530() { main::sub_ce0(); }

// sub_b995a0  (orig 0xb995a0, ret_only)
void main_f_b995a0() {}

// sub_b995b0  (orig 0xb995b0, tailcall)
void main_f_b995b0() { main::sub_ce0(); }

// sub_b998c0  (orig 0xb998c0, tailcall)
void main_f_b998c0() { main::sub_ce0(); }

// sub_b99930  (orig 0xb99930, ret_only)
void main_f_b99930() {}

// sub_b99940  (orig 0xb99940, tailcall)
void main_f_b99940() { main::sub_ce0(); }

// sub_b99d90  (orig 0xb99d90, tailcall)
void main_f_b99d90() { main::sub_ce0(); }

// sub_b99e00  (orig 0xb99e00, ret_only)
void main_f_b99e00() {}

// sub_b99e10  (orig 0xb99e10, tailcall)
void main_f_b99e10() { main::sub_ce0(); }

// sub_b99fc0  (orig 0xb99fc0, tailcall)
void main_f_b99fc0() { main::sub_ce0(); }

// sub_b9a030  (orig 0xb9a030, ret_only)
void main_f_b9a030() {}

// sub_b9a040  (orig 0xb9a040, tailcall)
void main_f_b9a040() { main::sub_ce0(); }

// sub_b9a1f0  (orig 0xb9a1f0, tailcall)
void main_f_b9a1f0() { main::sub_ce0(); }

// sub_b9a260  (orig 0xb9a260, ret_only)
void main_f_b9a260() {}

// sub_b9a270  (orig 0xb9a270, tailcall)
void main_f_b9a270() { main::sub_ce0(); }

// sub_b9a2d0  (orig 0xb9a2d0, tailcall)
void main_f_b9a2d0() { main::sub_ce0(); }

// sub_b9a340  (orig 0xb9a340, ret_only)
void main_f_b9a340() {}

// sub_b9a350  (orig 0xb9a350, tailcall)
void main_f_b9a350() { main::sub_ce0(); }

// sub_b9a3c0  (orig 0xb9a3c0, ret_only)
void main_f_b9a3c0() {}

// sub_b9f0b0  (orig 0xb9f0b0, tailcall)
void main_f_b9f0b0() { main::sub_b9eec0(); }

// sub_b9f5f0  (orig 0xb9f5f0, tailcall)
void main_f_b9f5f0() { main::sub_b946e0(); }

// sub_b9f7a0  (orig 0xb9f7a0, tailcall)
void main_f_b9f7a0() { main::sub_b946e0(); }

// sub_b9f7b0  (orig 0xb9f7b0, tailcall)
void main_f_b9f7b0() { main::sub_b946e0(); }

// sub_ba0070  (orig 0xba0070, ret_only)
void main_f_ba0070() {}

// sub_ba0100  (orig 0xba0100, ret_only)
void main_f_ba0100() {}

// sub_ba0110  (orig 0xba0110, copy2)
void main_f_ba0110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba0120  (orig 0xba0120, copy2)
void main_f_ba0120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba0240  (orig 0xba0240, ret_only)
void main_f_ba0240() {}

// sub_ba0390  (orig 0xba0390, ret_only)
void main_f_ba0390() {}

// sub_ba03a0  (orig 0xba03a0, copy2)
void main_f_ba03a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba03b0  (orig 0xba03b0, copy2)
void main_f_ba03b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba04c0  (orig 0xba04c0, ret_only)
void main_f_ba04c0() {}

// sub_ba04d0  (orig 0xba04d0, copy2)
void main_f_ba04d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba04e0  (orig 0xba04e0, copy2)
void main_f_ba04e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba0a70  (orig 0xba0a70, mov_ret)
uint32_t main_f_ba0a70() { return 1; }

// sub_ba0a80  (orig 0xba0a80, ret_only)
void main_f_ba0a80() {}

// sub_ba0a90  (orig 0xba0a90, ret_only)
void main_f_ba0a90() {}

// sub_ba1360  (orig 0xba1360, tailcall)
void main_f_ba1360() { main::sub_ba1390(); }

// sub_ba1370  (orig 0xba1370, tailcall)
void main_f_ba1370() { main::sub_ba1390(); }

// sub_ba1380  (orig 0xba1380, tailcall)
void main_f_ba1380() { main::sub_ba1390(); }

// sub_ba3630  (orig 0xba3630, ret_only)
void main_f_ba3630() {}

// sub_ba3b80  (orig 0xba3b80, tailcall)
void main_f_ba3b80() { main::sub_ba39c0(); }

// sub_ba4030  (orig 0xba4030, getter)
uint64_t main_f_ba4030(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_ba41a0  (orig 0xba41a0, mov_ret)
uint32_t main_f_ba41a0() { return 1; }

// sub_ba4610  (orig 0xba4610, tailcall)
void main_f_ba4610() { main::sub_ba44c0(); }

// sub_ba4620  (orig 0xba4620, tailcall)
void main_f_ba4620() { main::sub_ba4690(); }

// sub_ba4650  (orig 0xba4650, tailcall)
void main_f_ba4650() { main::sub_ba4690(); }

// sub_ba4660  (orig 0xba4660, tailcall)
void main_f_ba4660() { main::sub_ba4690(); }

// sub_ba7260  (orig 0xba7260, ret_only)
void main_f_ba7260() {}

// sub_ba7270  (orig 0xba7270, copy2)
void main_f_ba7270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba7280  (orig 0xba7280, copy2)
void main_f_ba7280(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ba7a20  (orig 0xba7a20, tailcall)
void main_f_ba7a20() { main::sub_ba5440(); }

// sub_ba7a30  (orig 0xba7a30, ret_only)
void main_f_ba7a30() {}

// sub_ba7a40  (orig 0xba7a40, ret_only)
void main_f_ba7a40() {}

// sub_ba7b30  (orig 0xba7b30, tailcall)
void main_f_ba7b30() { main::sub_ba5440(); }

// sub_ba7b40  (orig 0xba7b40, tailcall)
void main_f_ba7b40() { main::sub_ba5440(); }

// sub_bab600  (orig 0xbab600, mov_ret)
uint32_t main_f_bab600() { return 0; }

// sub_bad4d0  (orig 0xbad4d0, ret_only)
void main_f_bad4d0() {}

// sub_bad4e0  (orig 0xbad4e0, copy2)
void main_f_bad4e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bad4f0  (orig 0xbad4f0, copy2)
void main_f_bad4f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bad500  (orig 0xbad500, ret_only)
void main_f_bad500() {}

// sub_bad6f0  (orig 0xbad6f0, mov_ret)
uint32_t main_f_bad6f0() { return 0; }

// sub_bb0b60  (orig 0xbb0b60, ret_only)
void main_f_bb0b60() {}

// sub_bb0b70  (orig 0xbb0b70, copy2)
void main_f_bb0b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb0b80  (orig 0xbb0b80, copy2)
void main_f_bb0b80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb0ba0  (orig 0xbb0ba0, ret_only)
void main_f_bb0ba0() {}

// sub_bb0bb0  (orig 0xbb0bb0, copy2)
void main_f_bb0bb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb0bc0  (orig 0xbb0bc0, copy2)
void main_f_bb0bc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb11a0  (orig 0xbb11a0, getter)
uint32_t main_f_bb11a0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_bb1660  (orig 0xbb1660, ret_only)
void main_f_bb1660() {}

// sub_bb1670  (orig 0xbb1670, copy2)
void main_f_bb1670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb1680  (orig 0xbb1680, copy2)
void main_f_bb1680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb16a0  (orig 0xbb16a0, ret_only)
void main_f_bb16a0() {}

// sub_bb16b0  (orig 0xbb16b0, copy2)
void main_f_bb16b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb16c0  (orig 0xbb16c0, copy2)
void main_f_bb16c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb40f0  (orig 0xbb40f0, ret_only)
void main_f_bb40f0() {}

// sub_bb4100  (orig 0xbb4100, ret_only)
void main_f_bb4100() {}

// sub_bb4110  (orig 0xbb4110, straight)
void main_f_bb4110(void* a0) {
    *(uint8_t*)((char*)(a0) + 459) = (uint8_t)(1);
}

// sub_bb4120  (orig 0xbb4120, straight)
void main_f_bb4120(void* a0) {
    *(uint8_t*)((char*)(a0) + 51) = (uint8_t)(1);
}

// sub_bb46f0  (orig 0xbb46f0, tailcall)
void main_f_bb46f0() { main::sub_bb4d40(); }

// sub_bb48e0  (orig 0xbb48e0, tailcall)
void main_f_bb48e0() { main::sub_bb4d40(); }

// sub_bb48f0  (orig 0xbb48f0, tailcall)
void main_f_bb48f0() { main::sub_bb4d40(); }

// sub_bb4ce0  (orig 0xbb4ce0, ret_only)
void main_f_bb4ce0() {}

// sub_bb4cf0  (orig 0xbb4cf0, ret_only)
void main_f_bb4cf0() {}

// sub_bb4d00  (orig 0xbb4d00, ret_only)
void main_f_bb4d00() {}

// sub_bb4d10  (orig 0xbb4d10, ret_only)
void main_f_bb4d10() {}

// sub_bb4d20  (orig 0xbb4d20, ret_only)
void main_f_bb4d20() {}

// sub_bb4d30  (orig 0xbb4d30, ret_only)
void main_f_bb4d30() {}

// sub_bb5510  (orig 0xbb5510, ret_only)
void main_f_bb5510() {}

// sub_bb5520  (orig 0xbb5520, copy2)
void main_f_bb5520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5530  (orig 0xbb5530, copy2)
void main_f_bb5530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5600  (orig 0xbb5600, ret_only)
void main_f_bb5600() {}

// sub_bb5610  (orig 0xbb5610, copy2)
void main_f_bb5610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5620  (orig 0xbb5620, copy2)
void main_f_bb5620(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5640  (orig 0xbb5640, ret_only)
void main_f_bb5640() {}

// sub_bb5650  (orig 0xbb5650, copy2)
void main_f_bb5650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5660  (orig 0xbb5660, copy2)
void main_f_bb5660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5680  (orig 0xbb5680, ret_only)
void main_f_bb5680() {}

// sub_bb5690  (orig 0xbb5690, copy2)
void main_f_bb5690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56a0  (orig 0xbb56a0, copy2)
void main_f_bb56a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56c0  (orig 0xbb56c0, ret_only)
void main_f_bb56c0() {}

// sub_bb56d0  (orig 0xbb56d0, copy2)
void main_f_bb56d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb56e0  (orig 0xbb56e0, copy2)
void main_f_bb56e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5700  (orig 0xbb5700, ret_only)
void main_f_bb5700() {}

// sub_bb5710  (orig 0xbb5710, copy2)
void main_f_bb5710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5720  (orig 0xbb5720, copy2)
void main_f_bb5720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bb5d10  (orig 0xbb5d10, tailcall)
void main_f_bb5d10() { main::sub_bb5bc0(); }

// sub_bb6260  (orig 0xbb6260, tailcall)
void main_f_bb6260() { main::sub_bb6070(); }

// sub_bb6c80  (orig 0xbb6c80, ret_only)
void main_f_bb6c80() {}

// sub_bb6d30  (orig 0xbb6d30, ret_only)
void main_f_bb6d30() {}

// sub_bb6e60  (orig 0xbb6e60, ret_only)
void main_f_bb6e60() {}

// sub_bb7190  (orig 0xbb7190, getter)
uint64_t main_f_bb7190(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_bb7b40  (orig 0xbb7b40, ret_only)
void main_f_bb7b40() {}

// sub_bb8690  (orig 0xbb8690, setter)
void main_f_bb8690(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_bb8d40  (orig 0xbb8d40, mov_ret)
uint32_t main_f_bb8d40() { return 1; }

// sub_bb8df0  (orig 0xbb8df0, getter)
uint32_t main_f_bb8df0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_bb8e00  (orig 0xbb8e00, mov_ret)
uint32_t main_f_bb8e00() { return 1; }

// sub_bb8e10  (orig 0xbb8e10, tailcall)
void main_f_bb8e10() { main::contents_comp_organize_data_holder_2(); }

// sub_bb9350  (orig 0xbb9350, setter)
void main_f_bb9350(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_bb98d0  (orig 0xbb98d0, mov_ret)
uint32_t main_f_bb98d0() { return 1; }

// sub_bb9980  (orig 0xbb9980, getter)
uint32_t main_f_bb9980(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_bb9990  (orig 0xbb9990, mov_ret)
uint32_t main_f_bb9990() { return 1; }

// sub_bb99a0  (orig 0xbb99a0, tailcall)
void main_f_bb99a0() { main::contents_regulation_2(); }

// sub_bb9e50  (orig 0xbb9e50, setter)
void main_f_bb9e50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_bb9fb0  (orig 0xbb9fb0, ret_only)
void main_f_bb9fb0() {}

// sub_bba060  (orig 0xbba060, ret_only)
void main_f_bba060() {}

// sub_bba070  (orig 0xbba070, mov_ret)
uint64_t main_f_bba070(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_bba260  (orig 0xbba260, mov_ret)
uint32_t main_f_bba260() { return 1; }

// sub_bba310  (orig 0xbba310, getter)
uint32_t main_f_bba310(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_bba320  (orig 0xbba320, mov_ret)
uint32_t main_f_bba320() { return 1; }

// sub_bbcf30  (orig 0xbbcf30, ret_only)
void main_f_bbcf30() {}

// sub_bbcf40  (orig 0xbbcf40, copy2)
void main_f_bbcf40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbcf50  (orig 0xbbcf50, copy2)
void main_f_bbcf50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbcf70  (orig 0xbbcf70, ret_only)
void main_f_bbcf70() {}

// sub_bbcf80  (orig 0xbbcf80, copy2)
void main_f_bbcf80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbcf90  (orig 0xbbcf90, copy2)
void main_f_bbcf90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd0c0  (orig 0xbbd0c0, ret_only)
void main_f_bbd0c0() {}

// sub_bbd0d0  (orig 0xbbd0d0, copy2)
void main_f_bbd0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd0e0  (orig 0xbbd0e0, copy2)
void main_f_bbd0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd3c0  (orig 0xbbd3c0, ret_only)
void main_f_bbd3c0() {}

// sub_bbd3d0  (orig 0xbbd3d0, copy2)
void main_f_bbd3d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd3e0  (orig 0xbbd3e0, copy2)
void main_f_bbd3e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd520  (orig 0xbbd520, ret_only)
void main_f_bbd520() {}

// sub_bbd530  (orig 0xbbd530, copy2)
void main_f_bbd530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd540  (orig 0xbbd540, copy2)
void main_f_bbd540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd5d0  (orig 0xbbd5d0, ret_only)
void main_f_bbd5d0() {}

// sub_bbd5e0  (orig 0xbbd5e0, copy2)
void main_f_bbd5e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd5f0  (orig 0xbbd5f0, copy2)
void main_f_bbd5f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd710  (orig 0xbbd710, ret_only)
void main_f_bbd710() {}

// sub_bbd720  (orig 0xbbd720, copy2)
void main_f_bbd720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd730  (orig 0xbbd730, copy2)
void main_f_bbd730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd7c0  (orig 0xbbd7c0, ret_only)
void main_f_bbd7c0() {}

// sub_bbd7d0  (orig 0xbbd7d0, copy2)
void main_f_bbd7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbd7e0  (orig 0xbbd7e0, copy2)
void main_f_bbd7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbf7f0  (orig 0xbbf7f0, ret_only)
void main_f_bbf7f0() {}

// sub_bbf800  (orig 0xbbf800, copy2)
void main_f_bbf800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbf810  (orig 0xbbf810, copy2)
void main_f_bbf810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbf830  (orig 0xbbf830, ret_only)
void main_f_bbf830() {}

// sub_bbf840  (orig 0xbbf840, copy2)
void main_f_bbf840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbf850  (orig 0xbbf850, copy2)
void main_f_bbf850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfa20  (orig 0xbbfa20, ret_only)
void main_f_bbfa20() {}

// sub_bbfa30  (orig 0xbbfa30, copy2)
void main_f_bbfa30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfa40  (orig 0xbbfa40, copy2)
void main_f_bbfa40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfa90  (orig 0xbbfa90, ret_only)
void main_f_bbfa90() {}

// sub_bbfaa0  (orig 0xbbfaa0, copy2)
void main_f_bbfaa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfab0  (orig 0xbbfab0, copy2)
void main_f_bbfab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfd00  (orig 0xbbfd00, ret_only)
void main_f_bbfd00() {}

// sub_bbfd10  (orig 0xbbfd10, copy2)
void main_f_bbfd10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfd20  (orig 0xbbfd20, copy2)
void main_f_bbfd20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbfe60  (orig 0xbbfe60, ret_only)
void main_f_bbfe60() {}

// sub_bbff10  (orig 0xbbff10, ret_only)
void main_f_bbff10() {}

// sub_bbff20  (orig 0xbbff20, copy2)
void main_f_bbff20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bbff30  (orig 0xbbff30, copy2)
void main_f_bbff30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0070  (orig 0xbc0070, ret_only)
void main_f_bc0070() {}

// sub_bc0080  (orig 0xbc0080, copy2)
void main_f_bc0080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0090  (orig 0xbc0090, copy2)
void main_f_bc0090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0120  (orig 0xbc0120, ret_only)
void main_f_bc0120() {}

// sub_bc0130  (orig 0xbc0130, copy2)
void main_f_bc0130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0140  (orig 0xbc0140, copy2)
void main_f_bc0140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0260  (orig 0xbc0260, ret_only)
void main_f_bc0260() {}

// sub_bc0270  (orig 0xbc0270, copy2)
void main_f_bc0270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0280  (orig 0xbc0280, copy2)
void main_f_bc0280(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0310  (orig 0xbc0310, ret_only)
void main_f_bc0310() {}

// sub_bc0320  (orig 0xbc0320, copy2)
void main_f_bc0320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0330  (orig 0xbc0330, copy2)
void main_f_bc0330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bc0eb0  (orig 0xbc0eb0, tailcall)
void main_f_bc0eb0() { main::sub_bc0c30(); }

// sub_bc7670  (orig 0xbc7670, ret_only)
void main_f_bc7670() {}

// sub_bc7680  (orig 0xbc7680, tailcall)
void main_f_bc7680() { main::sub_ce0(); }

// sub_bc76c0  (orig 0xbc76c0, ret_only)
void main_f_bc76c0() {}

// sub_bc7a00  (orig 0xbc7a00, tailcall)
void main_f_bc7a00() { main::sub_bc78a0(); }

// sub_bc7a80  (orig 0xbc7a80, ret_only)
void main_f_bc7a80() {}

// sub_bc7a90  (orig 0xbc7a90, ret_only)
void main_f_bc7a90() {}

// sub_bc7b30  (orig 0xbc7b30, ret_only)
void main_f_bc7b30() {}

// sub_bc7b40  (orig 0xbc7b40, ret_only)
void main_f_bc7b40() {}

// sub_bc9b70  (orig 0xbc9b70, tailcall)
void main_f_bc9b70() { main::sub_bd0880(); }

// sub_bc9dc0  (orig 0xbc9dc0, tailcall)
void main_f_bc9dc0() { main::sub_bd0880(); }

// sub_bc9dd0  (orig 0xbc9dd0, tailcall)
void main_f_bc9dd0() { main::sub_bc8a00(); }

// sub_bc9de0  (orig 0xbc9de0, ret_only)
void main_f_bc9de0() {}

// sub_bc9df0  (orig 0xbc9df0, mov_ret)
uint32_t main_f_bc9df0() { return 1; }

// sub_bc9e20  (orig 0xbc9e20, tailcall)
void main_f_bc9e20() { main::sub_bc8a00(); }

// sub_bc9e30  (orig 0xbc9e30, tailcall)
void main_f_bc9e30() { main::sub_bc8a00(); }

// sub_bc9e60  (orig 0xbc9e60, tailcall)
void main_f_bc9e60() { main::sub_bc9e80(); }

// sub_bc9e70  (orig 0xbc9e70, ret_only)
void main_f_bc9e70() {}

// sub_bca050  (orig 0xbca050, copy2)
void main_f_bca050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bca060  (orig 0xbca060, copy2)
void main_f_bca060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bca290  (orig 0xbca290, tailcall)
void main_f_bca290() { main::sub_bd0880(); }

// sub_bca310  (orig 0xbca310, ret_only)
void main_f_bca310() {}

// sub_bca4d0  (orig 0xbca4d0, ret_only)
void main_f_bca4d0() {}

// sub_bcaa80  (orig 0xbcaa80, copy2)
void main_f_bcaa80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcaa90  (orig 0xbcaa90, copy2)
void main_f_bcaa90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcabb0  (orig 0xbcabb0, tailcall)
void main_f_bcabb0() { main::sub_bd0880(); }

// sub_bcaee0  (orig 0xbcaee0, ret_only)
void main_f_bcaee0() {}

// sub_bcafb0  (orig 0xbcafb0, copy2)
void main_f_bcafb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcafc0  (orig 0xbcafc0, copy2)
void main_f_bcafc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb190  (orig 0xbcb190, ret_only)
void main_f_bcb190() {}

// sub_bcb1a0  (orig 0xbcb1a0, copy2)
void main_f_bcb1a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb1b0  (orig 0xbcb1b0, copy2)
void main_f_bcb1b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb400  (orig 0xbcb400, tailcall)
void main_f_bcb400() { main::sub_bd0880(); }

// sub_bcb730  (orig 0xbcb730, ret_only)
void main_f_bcb730() {}

// sub_bcb740  (orig 0xbcb740, copy2)
void main_f_bcb740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb750  (orig 0xbcb750, copy2)
void main_f_bcb750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb940  (orig 0xbcb940, ret_only)
void main_f_bcb940() {}

// sub_bcb950  (orig 0xbcb950, copy2)
void main_f_bcb950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcb960  (orig 0xbcb960, copy2)
void main_f_bcb960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcc650  (orig 0xbcc650, tailcall)
void main_f_bcc650() { main::sub_bcc670(); }

// sub_bcc660  (orig 0xbcc660, ret_only)
void main_f_bcc660() {}

// sub_bccc20  (orig 0xbccc20, copy2)
void main_f_bccc20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bccc30  (orig 0xbccc30, copy2)
void main_f_bccc30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bccce0  (orig 0xbccce0, ret_only)
void main_f_bccce0() {}

// sub_bcd070  (orig 0xbcd070, copy2)
void main_f_bcd070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd080  (orig 0xbcd080, copy2)
void main_f_bcd080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd140  (orig 0xbcd140, ret_only)
void main_f_bcd140() {}

// sub_bcd150  (orig 0xbcd150, copy2)
void main_f_bcd150(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd160  (orig 0xbcd160, copy2)
void main_f_bcd160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd280  (orig 0xbcd280, tailcall)
void main_f_bcd280() { main::sub_bd0880(); }

// sub_bcd300  (orig 0xbcd300, ret_only)
void main_f_bcd300() {}

// sub_bcd580  (orig 0xbcd580, ret_only)
void main_f_bcd580() {}

// sub_bcd590  (orig 0xbcd590, copy2)
void main_f_bcd590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd5a0  (orig 0xbcd5a0, copy2)
void main_f_bcd5a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd700  (orig 0xbcd700, ret_only)
void main_f_bcd700() {}

// sub_bcd710  (orig 0xbcd710, copy2)
void main_f_bcd710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd720  (orig 0xbcd720, copy2)
void main_f_bcd720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcd850  (orig 0xbcd850, tailcall)
void main_f_bcd850() { main::sub_bd0880(); }

// sub_bcdaf0  (orig 0xbcdaf0, ret_only)
void main_f_bcdaf0() {}

// sub_bcde20  (orig 0xbcde20, copy2)
void main_f_bcde20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcde30  (orig 0xbcde30, copy2)
void main_f_bcde30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bce600  (orig 0xbce600, tailcall)
void main_f_bce600() { main::sub_bce620(); }

// sub_bce610  (orig 0xbce610, ret_only)
void main_f_bce610() {}

// sub_bce7c0  (orig 0xbce7c0, copy2)
void main_f_bce7c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bce7d0  (orig 0xbce7d0, copy2)
void main_f_bce7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bceff0  (orig 0xbceff0, tailcall)
void main_f_bceff0() { main::sub_bcf010(); }

// sub_bcf000  (orig 0xbcf000, ret_only)
void main_f_bcf000() {}

// sub_bcf400  (orig 0xbcf400, copy2)
void main_f_bcf400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcf410  (orig 0xbcf410, copy2)
void main_f_bcf410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcf420  (orig 0xbcf420, tailcall)
void main_f_bcf420() { main::sub_bcf440(); }

// sub_bcf430  (orig 0xbcf430, ret_only)
void main_f_bcf430() {}

// sub_bcf600  (orig 0xbcf600, copy2)
void main_f_bcf600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcf610  (orig 0xbcf610, copy2)
void main_f_bcf610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bcfca0  (orig 0xbcfca0, tailcall)
void main_f_bcfca0() { main::sub_bd0880(); }

// sub_bd09e0  (orig 0xbd09e0, tailcall)
void main_f_bd09e0() { main::sub_bd0880(); }

// sub_bd0e50  (orig 0xbd0e50, tailcall)
void main_f_bd0e50() { main::sub_bd0880(); }

// sub_bd1180  (orig 0xbd1180, ret_only)
void main_f_bd1180() {}

// sub_bd1190  (orig 0xbd1190, copy2)
void main_f_bd1190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd11a0  (orig 0xbd11a0, copy2)
void main_f_bd11a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1450  (orig 0xbd1450, tailcall)
void main_f_bd1450() { main::sub_bd0880(); }

// sub_bd1720  (orig 0xbd1720, ret_only)
void main_f_bd1720() {}

// sub_bd1730  (orig 0xbd1730, copy2)
void main_f_bd1730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1740  (orig 0xbd1740, copy2)
void main_f_bd1740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1860  (orig 0xbd1860, tailcall)
void main_f_bd1860() { main::sub_bd0880(); }

// sub_bd18e0  (orig 0xbd18e0, ret_only)
void main_f_bd18e0() {}

// sub_bd1bb0  (orig 0xbd1bb0, ret_only)
void main_f_bd1bb0() {}

// sub_bd1bc0  (orig 0xbd1bc0, copy2)
void main_f_bd1bc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1bd0  (orig 0xbd1bd0, copy2)
void main_f_bd1bd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1bf0  (orig 0xbd1bf0, ret_only)
void main_f_bd1bf0() {}

// sub_bd1d90  (orig 0xbd1d90, copy2)
void main_f_bd1d90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1da0  (orig 0xbd1da0, copy2)
void main_f_bd1da0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd1ed0  (orig 0xbd1ed0, tailcall)
void main_f_bd1ed0() { main::sub_bd0880(); }

// sub_bd2170  (orig 0xbd2170, ret_only)
void main_f_bd2170() {}

// sub_bd2480  (orig 0xbd2480, copy2)
void main_f_bd2480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd2490  (orig 0xbd2490, copy2)
void main_f_bd2490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd33f0  (orig 0xbd33f0, tailcall)
void main_f_bd33f0() { main::sub_bd0880(); }

// sub_bd3d80  (orig 0xbd3d80, tailcall)
void main_f_bd3d80() { main::sub_bd3da0(); }

// sub_bd3d90  (orig 0xbd3d90, ret_only)
void main_f_bd3d90() {}

// sub_bd4770  (orig 0xbd4770, copy2)
void main_f_bd4770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd4780  (orig 0xbd4780, copy2)
void main_f_bd4780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd47a0  (orig 0xbd47a0, ret_only)
void main_f_bd47a0() {}

// sub_bd4c20  (orig 0xbd4c20, copy2)
void main_f_bd4c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd4c30  (orig 0xbd4c30, copy2)
void main_f_bd4c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd53a0  (orig 0xbd53a0, tailcall)
void main_f_bd53a0() { main::sub_bd53c0(); }

// sub_bd53b0  (orig 0xbd53b0, ret_only)
void main_f_bd53b0() {}

// sub_bd5c60  (orig 0xbd5c60, copy2)
void main_f_bd5c60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd5c70  (orig 0xbd5c70, copy2)
void main_f_bd5c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd5c90  (orig 0xbd5c90, ret_only)
void main_f_bd5c90() {}

// sub_bd5f30  (orig 0xbd5f30, copy2)
void main_f_bd5f30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd5f40  (orig 0xbd5f40, copy2)
void main_f_bd5f40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd6060  (orig 0xbd6060, tailcall)
void main_f_bd6060() { main::sub_bd0880(); }

// sub_bd62d0  (orig 0xbd62d0, tailcall)
void main_f_bd62d0() { main::sub_bd62f0(); }

// sub_bd62e0  (orig 0xbd62e0, ret_only)
void main_f_bd62e0() {}

// sub_bd6530  (orig 0xbd6530, copy2)
void main_f_bd6530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd6540  (orig 0xbd6540, copy2)
void main_f_bd6540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd7140  (orig 0xbd7140, tailcall)
void main_f_bd7140() { main::sub_bd0880(); }

// sub_bd74c0  (orig 0xbd74c0, ret_only)
void main_f_bd74c0() {}

// sub_bd7690  (orig 0xbd7690, copy2)
void main_f_bd7690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd76a0  (orig 0xbd76a0, copy2)
void main_f_bd76a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd7770  (orig 0xbd7770, ret_only)
void main_f_bd7770() {}

// sub_bd7780  (orig 0xbd7780, copy2)
void main_f_bd7780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd7790  (orig 0xbd7790, copy2)
void main_f_bd7790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd78c0  (orig 0xbd78c0, tailcall)
void main_f_bd78c0() { main::sub_bd0880(); }

// sub_bd7b70  (orig 0xbd7b70, tailcall)
void main_f_bd7b70() { main::sub_bd7b90(); }

// sub_bd7b80  (orig 0xbd7b80, ret_only)
void main_f_bd7b80() {}

// sub_bd7ca0  (orig 0xbd7ca0, copy2)
void main_f_bd7ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd7cb0  (orig 0xbd7cb0, copy2)
void main_f_bd7cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd7de0  (orig 0xbd7de0, tailcall)
void main_f_bd7de0() { main::sub_bd0880(); }

// sub_bd81d0  (orig 0xbd81d0, ret_only)
void main_f_bd81d0() {}

// sub_bd81e0  (orig 0xbd81e0, copy2)
void main_f_bd81e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd81f0  (orig 0xbd81f0, copy2)
void main_f_bd81f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8240  (orig 0xbd8240, ret_only)
void main_f_bd8240() {}

// sub_bd8250  (orig 0xbd8250, copy2)
void main_f_bd8250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8260  (orig 0xbd8260, copy2)
void main_f_bd8260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8290  (orig 0xbd8290, ret_only)
void main_f_bd8290() {}

// sub_bd82a0  (orig 0xbd82a0, copy2)
void main_f_bd82a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd82b0  (orig 0xbd82b0, copy2)
void main_f_bd82b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd82f0  (orig 0xbd82f0, ret_only)
void main_f_bd82f0() {}

// sub_bd8300  (orig 0xbd8300, copy2)
void main_f_bd8300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8310  (orig 0xbd8310, copy2)
void main_f_bd8310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8430  (orig 0xbd8430, tailcall)
void main_f_bd8430() { main::sub_bd0880(); }

// sub_bd8830  (orig 0xbd8830, ret_only)
void main_f_bd8830() {}

// sub_bd8840  (orig 0xbd8840, copy2)
void main_f_bd8840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8850  (orig 0xbd8850, copy2)
void main_f_bd8850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8920  (orig 0xbd8920, ret_only)
void main_f_bd8920() {}

// sub_bd8930  (orig 0xbd8930, copy2)
void main_f_bd8930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8940  (orig 0xbd8940, copy2)
void main_f_bd8940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8a10  (orig 0xbd8a10, ret_only)
void main_f_bd8a10() {}

// sub_bd8a20  (orig 0xbd8a20, copy2)
void main_f_bd8a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8a30  (orig 0xbd8a30, copy2)
void main_f_bd8a30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd8c80  (orig 0xbd8c80, tailcall)
void main_f_bd8c80() { main::sub_bd0880(); }

// sub_bd8f60  (orig 0xbd8f60, ret_only)
void main_f_bd8f60() {}

// sub_bd90e0  (orig 0xbd90e0, copy2)
void main_f_bd90e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd90f0  (orig 0xbd90f0, copy2)
void main_f_bd90f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd98a0  (orig 0xbd98a0, tailcall)
void main_f_bd98a0() { main::sub_bd98c0(); }

// sub_bd98b0  (orig 0xbd98b0, ret_only)
void main_f_bd98b0() {}

// sub_bd9db0  (orig 0xbd9db0, ret_only)
void main_f_bd9db0() {}

// sub_bd9dc0  (orig 0xbd9dc0, copy2)
void main_f_bd9dc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd9dd0  (orig 0xbd9dd0, copy2)
void main_f_bd9dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd9de0  (orig 0xbd9de0, copy2)
void main_f_bd9de0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd9df0  (orig 0xbd9df0, copy2)
void main_f_bd9df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd9f30  (orig 0xbd9f30, ret_only)
void main_f_bd9f30() {}

// sub_bd9f40  (orig 0xbd9f40, copy2)
void main_f_bd9f40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bd9f50  (orig 0xbd9f50, copy2)
void main_f_bd9f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bda540  (orig 0xbda540, tailcall)
void main_f_bda540() { main::sub_bda560(); }

// sub_bda550  (orig 0xbda550, ret_only)
void main_f_bda550() {}

// sub_bda850  (orig 0xbda850, copy2)
void main_f_bda850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bda860  (orig 0xbda860, copy2)
void main_f_bda860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdaef0  (orig 0xbdaef0, tailcall)
void main_f_bdaef0() { main::sub_bdaf10(); }

// sub_bdaf00  (orig 0xbdaf00, ret_only)
void main_f_bdaf00() {}

// sub_bdb400  (orig 0xbdb400, ret_only)
void main_f_bdb400() {}

// sub_bdb410  (orig 0xbdb410, copy2)
void main_f_bdb410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdb420  (orig 0xbdb420, copy2)
void main_f_bdb420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdb430  (orig 0xbdb430, copy2)
void main_f_bdb430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdb440  (orig 0xbdb440, copy2)
void main_f_bdb440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdb4d0  (orig 0xbdb4d0, ret_only)
void main_f_bdb4d0() {}

// sub_bdb4e0  (orig 0xbdb4e0, copy2)
void main_f_bdb4e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdb4f0  (orig 0xbdb4f0, copy2)
void main_f_bdb4f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdbae0  (orig 0xbdbae0, tailcall)
void main_f_bdbae0() { main::sub_bdbb00(); }

// sub_bdbaf0  (orig 0xbdbaf0, ret_only)
void main_f_bdbaf0() {}

// sub_bdbdf0  (orig 0xbdbdf0, copy2)
void main_f_bdbdf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdbe00  (orig 0xbdbe00, copy2)
void main_f_bdbe00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdc400  (orig 0xbdc400, tailcall)
void main_f_bdc400() { main::sub_bdc420(); }

// sub_bdc410  (orig 0xbdc410, ret_only)
void main_f_bdc410() {}

// sub_bdc770  (orig 0xbdc770, getter-chain)
uint8_t main_f_bdc770(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 848); }

// sub_bdc780  (orig 0xbdc780, ret_only)
void main_f_bdc780() {}

// sub_bdc790  (orig 0xbdc790, copy2)
void main_f_bdc790(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdc7a0  (orig 0xbdc7a0, copy2)
void main_f_bdc7a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdc7b0  (orig 0xbdc7b0, copy2)
void main_f_bdc7b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdc7c0  (orig 0xbdc7c0, copy2)
void main_f_bdc7c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdcdb0  (orig 0xbdcdb0, tailcall)
void main_f_bdcdb0() { main::sub_bdcdd0(); }

// sub_bdcdc0  (orig 0xbdcdc0, ret_only)
void main_f_bdcdc0() {}

// sub_bdd0c0  (orig 0xbdd0c0, copy2)
void main_f_bdd0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdd0d0  (orig 0xbdd0d0, copy2)
void main_f_bdd0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdd1f0  (orig 0xbdd1f0, tailcall)
void main_f_bdd1f0() { main::sub_bd0880(); }

// sub_bdd270  (orig 0xbdd270, ret_only)
void main_f_bdd270() {}

// sub_bdd600  (orig 0xbdd600, ret_only)
void main_f_bdd600() {}

// sub_bdd610  (orig 0xbdd610, ret_only)
void main_f_bdd610() {}

// sub_bdd620  (orig 0xbdd620, ret_only)
void main_f_bdd620() {}

// sub_bdd760  (orig 0xbdd760, tailcall)
void main_f_bdd760() { main::sub_bd0880(); }

// sub_bdda20  (orig 0xbdda20, tailcall)
void main_f_bdda20() { main::EffCenter01(); }

// sub_bdda30  (orig 0xbdda30, ret_only)
void main_f_bdda30() {}

// sub_bddcf0  (orig 0xbddcf0, copy2)
void main_f_bddcf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bddd00  (orig 0xbddd00, copy2)
void main_f_bddd00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bddd20  (orig 0xbddd20, ret_only)
void main_f_bddd20() {}

// sub_bde070  (orig 0xbde070, copy2)
void main_f_bde070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bde080  (orig 0xbde080, copy2)
void main_f_bde080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bde1a0  (orig 0xbde1a0, tailcall)
void main_f_bde1a0() { main::sub_bd0880(); }

// sub_bdeec0  (orig 0xbdeec0, tailcall)
void main_f_bdeec0() { main::sub_bd0880(); }

// sub_bdf3e0  (orig 0xbdf3e0, ret_only)
void main_f_bdf3e0() {}

// sub_bdf3f0  (orig 0xbdf3f0, copy2)
void main_f_bdf3f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdf400  (orig 0xbdf400, copy2)
void main_f_bdf400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdf530  (orig 0xbdf530, tailcall)
void main_f_bdf530() { main::sub_bd0880(); }

// sub_bdf800  (orig 0xbdf800, ret_only)
void main_f_bdf800() {}

// sub_bdf810  (orig 0xbdf810, copy2)
void main_f_bdf810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdf820  (orig 0xbdf820, copy2)
void main_f_bdf820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdf940  (orig 0xbdf940, tailcall)
void main_f_bdf940() { main::sub_bd0880(); }

// sub_bdf9c0  (orig 0xbdf9c0, ret_only)
void main_f_bdf9c0() {}

// sub_bdfc80  (orig 0xbdfc80, ret_only)
void main_f_bdfc80() {}

// sub_bdfc90  (orig 0xbdfc90, copy2)
void main_f_bdfc90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdfca0  (orig 0xbdfca0, copy2)
void main_f_bdfca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdfd40  (orig 0xbdfd40, ret_only)
void main_f_bdfd40() {}

// sub_bdfd50  (orig 0xbdfd50, copy2)
void main_f_bdfd50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdfd60  (orig 0xbdfd60, copy2)
void main_f_bdfd60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdfdd0  (orig 0xbdfdd0, ret_only)
void main_f_bdfdd0() {}

// sub_bdfde0  (orig 0xbdfde0, copy2)
void main_f_bdfde0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdfdf0  (orig 0xbdfdf0, copy2)
void main_f_bdfdf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdff10  (orig 0xbdff10, tailcall)
void main_f_bdff10() { main::sub_bd0880(); }

// sub_bdff90  (orig 0xbdff90, ret_only)
void main_f_bdff90() {}

// sub_be0250  (orig 0xbe0250, ret_only)
void main_f_be0250() {}

// sub_be0260  (orig 0xbe0260, copy2)
void main_f_be0260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be0270  (orig 0xbe0270, copy2)
void main_f_be0270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be0310  (orig 0xbe0310, ret_only)
void main_f_be0310() {}

// sub_be0320  (orig 0xbe0320, copy2)
void main_f_be0320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be0330  (orig 0xbe0330, copy2)
void main_f_be0330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be03a0  (orig 0xbe03a0, ret_only)
void main_f_be03a0() {}

// sub_be03b0  (orig 0xbe03b0, copy2)
void main_f_be03b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be03c0  (orig 0xbe03c0, copy2)
void main_f_be03c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be04e0  (orig 0xbe04e0, tailcall)
void main_f_be04e0() { main::sub_bd0880(); }

// sub_be0560  (orig 0xbe0560, ret_only)
void main_f_be0560() {}

// sub_be0820  (orig 0xbe0820, ret_only)
void main_f_be0820() {}

// sub_be0830  (orig 0xbe0830, copy2)
void main_f_be0830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be0840  (orig 0xbe0840, copy2)
void main_f_be0840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be0910  (orig 0xbe0910, ret_only)
void main_f_be0910() {}

// sub_be0920  (orig 0xbe0920, copy2)
void main_f_be0920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be0930  (orig 0xbe0930, copy2)
void main_f_be0930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be09a0  (orig 0xbe09a0, ret_only)
void main_f_be09a0() {}

// sub_be09b0  (orig 0xbe09b0, copy2)
void main_f_be09b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be09c0  (orig 0xbe09c0, copy2)
void main_f_be09c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be0ae0  (orig 0xbe0ae0, tailcall)
void main_f_be0ae0() { main::sub_bd0880(); }

// sub_be0b60  (orig 0xbe0b60, ret_only)
void main_f_be0b60() {}

// sub_be0b70  (orig 0xbe0b70, mov_ret)
uint32_t main_f_be0b70() { return 1; }

// sub_be0db0  (orig 0xbe0db0, tailcall)
void main_f_be0db0() { main::sub_bd0880(); }

// sub_be1020  (orig 0xbe1020, ret_only)
void main_f_be1020() {}

// sub_be1190  (orig 0xbe1190, copy2)
void main_f_be1190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be11a0  (orig 0xbe11a0, copy2)
void main_f_be11a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be12c0  (orig 0xbe12c0, tailcall)
void main_f_be12c0() { main::sub_bd0880(); }

// sub_be1370  (orig 0xbe1370, mov_ret)
uint32_t main_f_be1370() { return 1; }

// sub_be15b0  (orig 0xbe15b0, tailcall)
void main_f_be15b0() { main::sub_bd0880(); }

// sub_be1840  (orig 0xbe1840, tailcall)
void main_f_be1840() { main::sub_be1860(); }

// sub_be1850  (orig 0xbe1850, ret_only)
void main_f_be1850() {}

// sub_be1c70  (orig 0xbe1c70, copy2)
void main_f_be1c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be1c80  (orig 0xbe1c80, copy2)
void main_f_be1c80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be1c90  (orig 0xbe1c90, tailcall)
void main_f_be1c90() { main::sub_be1cb0(); }

// sub_be1ca0  (orig 0xbe1ca0, ret_only)
void main_f_be1ca0() {}

// sub_be2070  (orig 0xbe2070, copy2)
void main_f_be2070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be2080  (orig 0xbe2080, copy2)
void main_f_be2080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be2750  (orig 0xbe2750, tailcall)
void main_f_be2750() { main::sub_bd0880(); }

// sub_be2f60  (orig 0xbe2f60, ret_only)
void main_f_be2f60() {}

// sub_be3250  (orig 0xbe3250, copy2)
void main_f_be3250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be3260  (orig 0xbe3260, copy2)
void main_f_be3260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be3270  (orig 0xbe3270, ret_only)
void main_f_be3270() {}

// sub_be3280  (orig 0xbe3280, ret_only)
void main_f_be3280() {}

// sub_be3290  (orig 0xbe3290, ret_only)
void main_f_be3290() {}

// sub_be32a0  (orig 0xbe32a0, ret_only)
void main_f_be32a0() {}

// sub_be35f0  (orig 0xbe35f0, tailcall)
void main_f_be35f0() { main::sub_be3610(); }

// sub_be3600  (orig 0xbe3600, ret_only)
void main_f_be3600() {}

// sub_be3920  (orig 0xbe3920, copy2)
void main_f_be3920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be3930  (orig 0xbe3930, copy2)
void main_f_be3930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be3ae0  (orig 0xbe3ae0, ret_only)
void main_f_be3ae0() {}

// sub_be3af0  (orig 0xbe3af0, copy2)
void main_f_be3af0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be3b00  (orig 0xbe3b00, copy2)
void main_f_be3b00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be3c20  (orig 0xbe3c20, tailcall)
void main_f_be3c20() { main::sub_bd0880(); }

// sub_be4430  (orig 0xbe4430, ret_only)
void main_f_be4430() {}

// sub_be4440  (orig 0xbe4440, copy2)
void main_f_be4440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be4450  (orig 0xbe4450, copy2)
void main_f_be4450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be4460  (orig 0xbe4460, ret_only)
void main_f_be4460() {}

// sub_be4470  (orig 0xbe4470, ret_only)
void main_f_be4470() {}

// sub_be4480  (orig 0xbe4480, ret_only)
void main_f_be4480() {}

// sub_be4490  (orig 0xbe4490, ret_only)
void main_f_be4490() {}

// sub_be4530  (orig 0xbe4530, ret_only)
void main_f_be4530() {}

// sub_be4ae0  (orig 0xbe4ae0, copy2)
void main_f_be4ae0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be4af0  (orig 0xbe4af0, copy2)
void main_f_be4af0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be4b10  (orig 0xbe4b10, ret_only)
void main_f_be4b10() {}

// sub_be4b20  (orig 0xbe4b20, copy2)
void main_f_be4b20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be4b30  (orig 0xbe4b30, copy2)
void main_f_be4b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be4ef0  (orig 0xbe4ef0, tailcall)
void main_f_be4ef0() { main::sub_bd0880(); }

// sub_be4f70  (orig 0xbe4f70, ret_only)
void main_f_be4f70() {}

// sub_be4f80  (orig 0xbe4f80, mov_ret)
uint32_t main_f_be4f80() { return 1; }

// sub_be83a0  (orig 0xbe83a0, ret_only)
void main_f_be83a0() {}

// sub_be8740  (orig 0xbe8740, tailcall)
void main_f_be8740() { main::sub_bd0880(); }

// sub_be87c0  (orig 0xbe87c0, ret_only)
void main_f_be87c0() {}

// sub_be8970  (orig 0xbe8970, ret_only)
void main_f_be8970() {}

// sub_be8980  (orig 0xbe8980, copy2)
void main_f_be8980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be8990  (orig 0xbe8990, copy2)
void main_f_be8990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be8eb0  (orig 0xbe8eb0, ret_only)
void main_f_be8eb0() {}

// sub_be8ec0  (orig 0xbe8ec0, copy2)
void main_f_be8ec0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be8ed0  (orig 0xbe8ed0, copy2)
void main_f_be8ed0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be9d60  (orig 0xbe9d60, ret_only)
void main_f_be9d60() {}

// sub_be9d70  (orig 0xbe9d70, copy2)
void main_f_be9d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be9d80  (orig 0xbe9d80, copy2)
void main_f_be9d80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be9e60  (orig 0xbe9e60, ret_only)
void main_f_be9e60() {}

// sub_be9e70  (orig 0xbe9e70, copy2)
void main_f_be9e70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be9e80  (orig 0xbe9e80, copy2)
void main_f_be9e80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be9f50  (orig 0xbe9f50, ret_only)
void main_f_be9f50() {}

// sub_be9f60  (orig 0xbe9f60, copy2)
void main_f_be9f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be9f70  (orig 0xbe9f70, copy2)
void main_f_be9f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bea010  (orig 0xbea010, ret_only)
void main_f_bea010() {}

// sub_bea020  (orig 0xbea020, copy2)
void main_f_bea020(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bea030  (orig 0xbea030, copy2)
void main_f_bea030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bea250  (orig 0xbea250, ret_only)
void main_f_bea250() {}

// sub_bea260  (orig 0xbea260, copy2)
void main_f_bea260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bea270  (orig 0xbea270, copy2)
void main_f_bea270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bea330  (orig 0xbea330, ret_only)
void main_f_bea330() {}

// sub_bea340  (orig 0xbea340, copy2)
void main_f_bea340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bea350  (orig 0xbea350, copy2)
void main_f_bea350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bea390  (orig 0xbea390, ret_only)
void main_f_bea390() {}

// sub_bea3a0  (orig 0xbea3a0, copy2)
void main_f_bea3a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bea3b0  (orig 0xbea3b0, copy2)
void main_f_bea3b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bea680  (orig 0xbea680, tailcall)
void main_f_bea680() { main::sub_bd0880(); }

// sub_bea9a0  (orig 0xbea9a0, ret_only)
void main_f_bea9a0() {}

// sub_bea9b0  (orig 0xbea9b0, copy2)
void main_f_bea9b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bea9c0  (orig 0xbea9c0, copy2)
void main_f_bea9c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_beab30  (orig 0xbeab30, tailcall)
void main_f_beab30() { main::sub_bd0880(); }

// sub_beae70  (orig 0xbeae70, ret_only)
void main_f_beae70() {}

// sub_beae80  (orig 0xbeae80, copy2)
void main_f_beae80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_beae90  (orig 0xbeae90, copy2)
void main_f_beae90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_beb150  (orig 0xbeb150, ret_only)
void main_f_beb150() {}

// sub_beb160  (orig 0xbeb160, copy2)
void main_f_beb160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_beb170  (orig 0xbeb170, copy2)
void main_f_beb170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bec030  (orig 0xbec030, tailcall)
void main_f_bec030() { main::sub_bebe30(); }

// sub_bec200  (orig 0xbec200, ret_only)
void main_f_bec200() {}

// sub_bec210  (orig 0xbec210, copy2)
void main_f_bec210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bec220  (orig 0xbec220, copy2)
void main_f_bec220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bec630  (orig 0xbec630, ret_only)
void main_f_bec630() {}

// sub_bec640  (orig 0xbec640, copy2)
void main_f_bec640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bec650  (orig 0xbec650, copy2)
void main_f_bec650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bec690  (orig 0xbec690, ret_only)
void main_f_bec690() {}

// sub_bec6a0  (orig 0xbec6a0, copy2)
void main_f_bec6a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bec6b0  (orig 0xbec6b0, copy2)
void main_f_bec6b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bec6f0  (orig 0xbec6f0, ret_only)
void main_f_bec6f0() {}

// sub_bec700  (orig 0xbec700, copy2)
void main_f_bec700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bec710  (orig 0xbec710, copy2)
void main_f_bec710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bec880  (orig 0xbec880, ret_only)
void main_f_bec880() {}

// sub_bec890  (orig 0xbec890, copy2)
void main_f_bec890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bec8a0  (orig 0xbec8a0, copy2)
void main_f_bec8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_becb80  (orig 0xbecb80, tailcall)
void main_f_becb80() { main::sub_bd0880(); }

// sub_becdf0  (orig 0xbecdf0, ret_only)
void main_f_becdf0() {}

// sub_bece00  (orig 0xbece00, copy2)
void main_f_bece00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bece10  (orig 0xbece10, copy2)
void main_f_bece10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bed8a0  (orig 0xbed8a0, tailcall)
void main_f_bed8a0() { main::sub_bed700(); }

// sub_beda70  (orig 0xbeda70, ret_only)
void main_f_beda70() {}

// sub_beda80  (orig 0xbeda80, copy2)
void main_f_beda80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_beda90  (orig 0xbeda90, copy2)
void main_f_beda90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bedb10  (orig 0xbedb10, ret_only)
void main_f_bedb10() {}

// sub_bedb20  (orig 0xbedb20, copy2)
void main_f_bedb20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bedb30  (orig 0xbedb30, copy2)
void main_f_bedb30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bee360  (orig 0xbee360, tailcall)
void main_f_bee360() { main::sub_bee1e0(); }

// sub_bee530  (orig 0xbee530, ret_only)
void main_f_bee530() {}

// sub_bee540  (orig 0xbee540, copy2)
void main_f_bee540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bee550  (orig 0xbee550, copy2)
void main_f_bee550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bee800  (orig 0xbee800, ret_only)
void main_f_bee800() {}

// sub_bee810  (orig 0xbee810, copy2)
void main_f_bee810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bee820  (orig 0xbee820, copy2)
void main_f_bee820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bee840  (orig 0xbee840, ret_only)
void main_f_bee840() {}

// sub_bee850  (orig 0xbee850, copy2)
void main_f_bee850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bee860  (orig 0xbee860, copy2)
void main_f_bee860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bee880  (orig 0xbee880, ret_only)
void main_f_bee880() {}

// sub_bee890  (orig 0xbee890, copy2)
void main_f_bee890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bee8a0  (orig 0xbee8a0, copy2)
void main_f_bee8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_beed40  (orig 0xbeed40, ret_only)
void main_f_beed40() {}

// sub_beedb0  (orig 0xbeedb0, ret_only)
void main_f_beedb0() {}

// sub_beedc0  (orig 0xbeedc0, copy2)
void main_f_beedc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_beedd0  (orig 0xbeedd0, copy2)
void main_f_beedd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_beede0  (orig 0xbeede0, ret_only)
void main_f_beede0() {}

// sub_beedf0  (orig 0xbeedf0, ret_only)
void main_f_beedf0() {}

// sub_beee00  (orig 0xbeee00, ret_only)
void main_f_beee00() {}

// sub_beee10  (orig 0xbeee10, ret_only)
void main_f_beee10() {}

// sub_beee20  (orig 0xbeee20, copy2)
void main_f_beee20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_beee30  (orig 0xbeee30, copy2)
void main_f_beee30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_beeff0  (orig 0xbeeff0, tailcall)
void main_f_beeff0() { main::sub_bd0880(); }

// sub_bef320  (orig 0xbef320, ret_only)
void main_f_bef320() {}

// sub_bef330  (orig 0xbef330, copy2)
void main_f_bef330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bef340  (orig 0xbef340, copy2)
void main_f_bef340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bef570  (orig 0xbef570, ret_only)
void main_f_bef570() {}

// sub_bef580  (orig 0xbef580, copy2)
void main_f_bef580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bef590  (orig 0xbef590, copy2)
void main_f_bef590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bef710  (orig 0xbef710, ret_only)
void main_f_bef710() {}

// sub_bef720  (orig 0xbef720, copy2)
void main_f_bef720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bef730  (orig 0xbef730, copy2)
void main_f_bef730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf0310  (orig 0xbf0310, ret_only)
void main_f_bf0310() {}

// sub_bf0320  (orig 0xbf0320, copy2)
void main_f_bf0320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf0330  (orig 0xbf0330, copy2)
void main_f_bf0330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf0340  (orig 0xbf0340, ret_only)
void main_f_bf0340() {}

// sub_bf0350  (orig 0xbf0350, ret_only)
void main_f_bf0350() {}

// sub_bf0360  (orig 0xbf0360, ret_only)
void main_f_bf0360() {}

// sub_bf0370  (orig 0xbf0370, ret_only)
void main_f_bf0370() {}

// sub_bf05d0  (orig 0xbf05d0, ret_only)
void main_f_bf05d0() {}

// sub_bf0950  (orig 0xbf0950, copy2)
void main_f_bf0950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf0960  (orig 0xbf0960, copy2)
void main_f_bf0960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf0cb0  (orig 0xbf0cb0, ret_only)
void main_f_bf0cb0() {}

// sub_bf0cc0  (orig 0xbf0cc0, copy2)
void main_f_bf0cc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf0cd0  (orig 0xbf0cd0, copy2)
void main_f_bf0cd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf17e0  (orig 0xbf17e0, tailcall)
void main_f_bf17e0() { main::sub_bf1640(); }

// sub_bf19b0  (orig 0xbf19b0, ret_only)
void main_f_bf19b0() {}

// sub_bf19c0  (orig 0xbf19c0, copy2)
void main_f_bf19c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf19d0  (orig 0xbf19d0, copy2)
void main_f_bf19d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf1aa0  (orig 0xbf1aa0, ret_only)
void main_f_bf1aa0() {}

// sub_bf1ab0  (orig 0xbf1ab0, copy2)
void main_f_bf1ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf1ac0  (orig 0xbf1ac0, copy2)
void main_f_bf1ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf1c50  (orig 0xbf1c50, tailcall)
void main_f_bf1c50() { main::sub_bd0880(); }

// sub_bf1f80  (orig 0xbf1f80, ret_only)
void main_f_bf1f80() {}

// sub_bf1f90  (orig 0xbf1f90, copy2)
void main_f_bf1f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf1fa0  (orig 0xbf1fa0, copy2)
void main_f_bf1fa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf22d0  (orig 0xbf22d0, ret_only)
void main_f_bf22d0() {}

// sub_bf22e0  (orig 0xbf22e0, copy2)
void main_f_bf22e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf22f0  (orig 0xbf22f0, copy2)
void main_f_bf22f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf24a0  (orig 0xbf24a0, tailcall)
void main_f_bf24a0() { main::sub_bd0880(); }

// sub_bf28e0  (orig 0xbf28e0, ret_only)
void main_f_bf28e0() {}

// sub_bf2b00  (orig 0xbf2b00, ret_only)
void main_f_bf2b00() {}

// sub_bf2b10  (orig 0xbf2b10, copy2)
void main_f_bf2b10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf2b20  (orig 0xbf2b20, copy2)
void main_f_bf2b20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf2ba0  (orig 0xbf2ba0, ret_only)
void main_f_bf2ba0() {}

// sub_bf2bb0  (orig 0xbf2bb0, copy2)
void main_f_bf2bb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf2bc0  (orig 0xbf2bc0, copy2)
void main_f_bf2bc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf2bd0  (orig 0xbf2bd0, copy2)
void main_f_bf2bd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf2be0  (orig 0xbf2be0, copy2)
void main_f_bf2be0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf2ca0  (orig 0xbf2ca0, ret_only)
void main_f_bf2ca0() {}

// sub_bf2fd0  (orig 0xbf2fd0, copy2)
void main_f_bf2fd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf2fe0  (orig 0xbf2fe0, copy2)
void main_f_bf2fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf3a00  (orig 0xbf3a00, ret_only)
void main_f_bf3a00() {}

// sub_bf3bd0  (orig 0xbf3bd0, copy2)
void main_f_bf3bd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf3be0  (orig 0xbf3be0, copy2)
void main_f_bf3be0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf3c00  (orig 0xbf3c00, ret_only)
void main_f_bf3c00() {}

// sub_bf3c10  (orig 0xbf3c10, copy2)
void main_f_bf3c10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf3c20  (orig 0xbf3c20, copy2)
void main_f_bf3c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf3c90  (orig 0xbf3c90, ret_only)
void main_f_bf3c90() {}

// sub_bf3ca0  (orig 0xbf3ca0, copy2)
void main_f_bf3ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf3cb0  (orig 0xbf3cb0, copy2)
void main_f_bf3cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf4670  (orig 0xbf4670, ret_only)
void main_f_bf4670() {}

// sub_bf4680  (orig 0xbf4680, copy2)
void main_f_bf4680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf4690  (orig 0xbf4690, copy2)
void main_f_bf4690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf46a0  (orig 0xbf46a0, ret_only)
void main_f_bf46a0() {}

// sub_bf46b0  (orig 0xbf46b0, ret_only)
void main_f_bf46b0() {}

// sub_bf46c0  (orig 0xbf46c0, ret_only)
void main_f_bf46c0() {}

// sub_bf46d0  (orig 0xbf46d0, ret_only)
void main_f_bf46d0() {}

// sub_bf4b60  (orig 0xbf4b60, ret_only)
void main_f_bf4b60() {}

// sub_bf4bc0  (orig 0xbf4bc0, ret_only)
void main_f_bf4bc0() {}

// sub_bf4bd0  (orig 0xbf4bd0, copy2)
void main_f_bf4bd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf4be0  (orig 0xbf4be0, copy2)
void main_f_bf4be0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf4bf0  (orig 0xbf4bf0, ret_only)
void main_f_bf4bf0() {}

// sub_bf4c00  (orig 0xbf4c00, ret_only)
void main_f_bf4c00() {}

// sub_bf4c10  (orig 0xbf4c10, ret_only)
void main_f_bf4c10() {}

// sub_bf4c20  (orig 0xbf4c20, ret_only)
void main_f_bf4c20() {}

// sub_bf4c30  (orig 0xbf4c30, copy2)
void main_f_bf4c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf4c40  (orig 0xbf4c40, copy2)
void main_f_bf4c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf55e0  (orig 0xbf55e0, tailcall)
void main_f_bf55e0() { main::sub_bf5460(); }

// sub_bf57b0  (orig 0xbf57b0, ret_only)
void main_f_bf57b0() {}

// sub_bf57c0  (orig 0xbf57c0, copy2)
void main_f_bf57c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf57d0  (orig 0xbf57d0, copy2)
void main_f_bf57d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf5960  (orig 0xbf5960, ret_only)
void main_f_bf5960() {}

// sub_bf5970  (orig 0xbf5970, copy2)
void main_f_bf5970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf5980  (orig 0xbf5980, copy2)
void main_f_bf5980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf5ac0  (orig 0xbf5ac0, ret_only)
void main_f_bf5ac0() {}

// sub_bf5c40  (orig 0xbf5c40, copy2)
void main_f_bf5c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf5c50  (orig 0xbf5c50, copy2)
void main_f_bf5c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf5ca0  (orig 0xbf5ca0, ret_only)
void main_f_bf5ca0() {}

// sub_bf5cb0  (orig 0xbf5cb0, copy2)
void main_f_bf5cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf5cc0  (orig 0xbf5cc0, copy2)
void main_f_bf5cc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf5d20  (orig 0xbf5d20, ret_only)
void main_f_bf5d20() {}

// sub_bf5d30  (orig 0xbf5d30, copy2)
void main_f_bf5d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf5d40  (orig 0xbf5d40, copy2)
void main_f_bf5d40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf6bc0  (orig 0xbf6bc0, tailcall)
void main_f_bf6bc0() { main::sub_bf6a10(); }

// sub_bf70c0  (orig 0xbf70c0, tailcall)
void main_f_bf70c0() { main::sub_bf6f70(); }

// sub_bf7340  (orig 0xbf7340, ret_only)
void main_f_bf7340() {}

// sub_bf7450  (orig 0xbf7450, ret_only)
void main_f_bf7450() {}

// sub_bf7570  (orig 0xbf7570, ret_only)
void main_f_bf7570() {}

// sub_bf7580  (orig 0xbf7580, copy2)
void main_f_bf7580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf7590  (orig 0xbf7590, copy2)
void main_f_bf7590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf75f0  (orig 0xbf75f0, ret_only)
void main_f_bf75f0() {}

// sub_bf7600  (orig 0xbf7600, copy2)
void main_f_bf7600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf7610  (orig 0xbf7610, copy2)
void main_f_bf7610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf7650  (orig 0xbf7650, ret_only)
void main_f_bf7650() {}

// sub_bf7660  (orig 0xbf7660, copy2)
void main_f_bf7660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf7670  (orig 0xbf7670, copy2)
void main_f_bf7670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf7970  (orig 0xbf7970, ret_only)
void main_f_bf7970() {}

// sub_bf7ca0  (orig 0xbf7ca0, copy2)
void main_f_bf7ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf7cb0  (orig 0xbf7cb0, copy2)
void main_f_bf7cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf9590  (orig 0xbf9590, tailcall)
void main_f_bf9590() { main::sub_bf9210(); }

// sub_bf9760  (orig 0xbf9760, ret_only)
void main_f_bf9760() {}

// sub_bf9770  (orig 0xbf9770, copy2)
void main_f_bf9770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf9780  (orig 0xbf9780, copy2)
void main_f_bf9780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf9840  (orig 0xbf9840, ret_only)
void main_f_bf9840() {}

// sub_bf9850  (orig 0xbf9850, copy2)
void main_f_bf9850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf9860  (orig 0xbf9860, copy2)
void main_f_bf9860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf98a0  (orig 0xbf98a0, ret_only)
void main_f_bf98a0() {}

// sub_bf98b0  (orig 0xbf98b0, copy2)
void main_f_bf98b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf98c0  (orig 0xbf98c0, copy2)
void main_f_bf98c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf9980  (orig 0xbf9980, ret_only)
void main_f_bf9980() {}

// sub_bf9990  (orig 0xbf9990, copy2)
void main_f_bf9990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf99a0  (orig 0xbf99a0, copy2)
void main_f_bf99a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf99e0  (orig 0xbf99e0, ret_only)
void main_f_bf99e0() {}

// sub_bf99f0  (orig 0xbf99f0, copy2)
void main_f_bf99f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf9a00  (orig 0xbf9a00, copy2)
void main_f_bf9a00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf9cd0  (orig 0xbf9cd0, ret_only)
void main_f_bf9cd0() {}

// sub_bf9ce0  (orig 0xbf9ce0, copy2)
void main_f_bf9ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bf9cf0  (orig 0xbf9cf0, copy2)
void main_f_bf9cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfa1f0  (orig 0xbfa1f0, ret_only)
void main_f_bfa1f0() {}

// sub_bfa200  (orig 0xbfa200, copy2)
void main_f_bfa200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfa210  (orig 0xbfa210, copy2)
void main_f_bfa210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfa6f0  (orig 0xbfa6f0, ret_only)
void main_f_bfa6f0() {}

// sub_bfa700  (orig 0xbfa700, copy2)
void main_f_bfa700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfa710  (orig 0xbfa710, copy2)
void main_f_bfa710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfac60  (orig 0xbfac60, ret_only)
void main_f_bfac60() {}

// sub_bfac70  (orig 0xbfac70, copy2)
void main_f_bfac70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfac80  (orig 0xbfac80, copy2)
void main_f_bfac80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfae10  (orig 0xbfae10, tailcall)
void main_f_bfae10() { main::sub_bd0880(); }

// sub_bfb160  (orig 0xbfb160, ret_only)
void main_f_bfb160() {}

// sub_bfb170  (orig 0xbfb170, copy2)
void main_f_bfb170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfb180  (orig 0xbfb180, copy2)
void main_f_bfb180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfb530  (orig 0xbfb530, ret_only)
void main_f_bfb530() {}

// sub_bfb540  (orig 0xbfb540, copy2)
void main_f_bfb540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfb550  (orig 0xbfb550, copy2)
void main_f_bfb550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfb710  (orig 0xbfb710, tailcall)
void main_f_bfb710() { main::sub_bd0880(); }

// sub_bfba40  (orig 0xbfba40, ret_only)
void main_f_bfba40() {}

// sub_bfba50  (orig 0xbfba50, copy2)
void main_f_bfba50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfba60  (orig 0xbfba60, copy2)
void main_f_bfba60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfc170  (orig 0xbfc170, tailcall)
void main_f_bfc170() { main::sub_bfbed0(); }

// sub_bfc8d0  (orig 0xbfc8d0, ret_only)
void main_f_bfc8d0() {}

// sub_bfc8e0  (orig 0xbfc8e0, copy2)
void main_f_bfc8e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfc8f0  (orig 0xbfc8f0, copy2)
void main_f_bfc8f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfc900  (orig 0xbfc900, ret_only)
void main_f_bfc900() {}

// sub_bfc910  (orig 0xbfc910, ret_only)
void main_f_bfc910() {}

// sub_bfc920  (orig 0xbfc920, ret_only)
void main_f_bfc920() {}

// sub_bfc930  (orig 0xbfc930, ret_only)
void main_f_bfc930() {}

// sub_bfd1a0  (orig 0xbfd1a0, ret_only)
void main_f_bfd1a0() {}

// sub_bfd450  (orig 0xbfd450, tailcall)
void main_f_bfd450() { main::sub_bfd300(); }

// sub_bfd6d0  (orig 0xbfd6d0, ret_only)
void main_f_bfd6d0() {}

// sub_bfd7e0  (orig 0xbfd7e0, ret_only)
void main_f_bfd7e0() {}

// sub_bfd880  (orig 0xbfd880, copy2)
void main_f_bfd880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfd890  (orig 0xbfd890, copy2)
void main_f_bfd890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfe180  (orig 0xbfe180, ret_only)
void main_f_bfe180() {}

// sub_bfe190  (orig 0xbfe190, copy2)
void main_f_bfe190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfe1a0  (orig 0xbfe1a0, copy2)
void main_f_bfe1a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfe6b0  (orig 0xbfe6b0, ret_only)
void main_f_bfe6b0() {}

// sub_bfe6c0  (orig 0xbfe6c0, copy2)
void main_f_bfe6c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfe6d0  (orig 0xbfe6d0, copy2)
void main_f_bfe6d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfeba0  (orig 0xbfeba0, tailcall)
void main_f_bfeba0() { main::sub_bd0880(); }

// sub_bfeda0  (orig 0xbfeda0, ret_only)
void main_f_bfeda0() {}

// sub_bfedb0  (orig 0xbfedb0, copy2)
void main_f_bfedb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfedc0  (orig 0xbfedc0, copy2)
void main_f_bfedc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfee50  (orig 0xbfee50, ret_only)
void main_f_bfee50() {}

// sub_bfee60  (orig 0xbfee60, copy2)
void main_f_bfee60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfee70  (orig 0xbfee70, copy2)
void main_f_bfee70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfeed0  (orig 0xbfeed0, ret_only)
void main_f_bfeed0() {}

// sub_bfeee0  (orig 0xbfeee0, copy2)
void main_f_bfeee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfeef0  (orig 0xbfeef0, copy2)
void main_f_bfeef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bff6e0  (orig 0xbff6e0, ret_only)
void main_f_bff6e0() {}

// sub_c006a0  (orig 0xc006a0, ret_only)
void main_f_c006a0() {}

// sub_c006b0  (orig 0xc006b0, copy2)
void main_f_c006b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c006c0  (orig 0xc006c0, copy2)
void main_f_c006c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c00890  (orig 0xc00890, ret_only)
void main_f_c00890() {}

// sub_c008a0  (orig 0xc008a0, tailcall)
void main_f_c008a0() { main::sub_ce0(); }

// sub_c008f0  (orig 0xc008f0, ret_only)
void main_f_c008f0() {}

// sub_c00900  (orig 0xc00900, tailcall)
void main_f_c00900() { main::sub_ce0(); }

// sub_c00960  (orig 0xc00960, copy2)
void main_f_c00960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c00970  (orig 0xc00970, copy2)
void main_f_c00970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c00c60  (orig 0xc00c60, ret_only)
void main_f_c00c60() {}

// sub_c00c70  (orig 0xc00c70, tailcall)
void main_f_c00c70() { main::sub_ce0(); }

// sub_c00cc0  (orig 0xc00cc0, ret_only)
void main_f_c00cc0() {}

// sub_c00cd0  (orig 0xc00cd0, tailcall)
void main_f_c00cd0() { main::sub_ce0(); }

// sub_c00d10  (orig 0xc00d10, tailcall)
void main_f_c00d10() { main::sub_ce0(); }

// sub_c00d60  (orig 0xc00d60, ret_only)
void main_f_c00d60() {}

// sub_c00d70  (orig 0xc00d70, tailcall)
void main_f_c00d70() { main::sub_ce0(); }

// sub_c00db0  (orig 0xc00db0, copy2)
void main_f_c00db0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c00dc0  (orig 0xc00dc0, copy2)
void main_f_c00dc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c010b0  (orig 0xc010b0, ret_only)
void main_f_c010b0() {}

// sub_c010c0  (orig 0xc010c0, tailcall)
void main_f_c010c0() { main::sub_ce0(); }

// sub_c01110  (orig 0xc01110, ret_only)
void main_f_c01110() {}

// sub_c01120  (orig 0xc01120, tailcall)
void main_f_c01120() { main::sub_ce0(); }

// sub_c01160  (orig 0xc01160, tailcall)
void main_f_c01160() { main::sub_ce0(); }

// sub_c011b0  (orig 0xc011b0, ret_only)
void main_f_c011b0() {}

// sub_c011c0  (orig 0xc011c0, tailcall)
void main_f_c011c0() { main::sub_ce0(); }

// sub_c01200  (orig 0xc01200, copy2)
void main_f_c01200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c01210  (orig 0xc01210, copy2)
void main_f_c01210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c013c0  (orig 0xc013c0, ret_only)
void main_f_c013c0() {}

// sub_c013d0  (orig 0xc013d0, tailcall)
void main_f_c013d0() { main::sub_ce0(); }

// sub_c01440  (orig 0xc01440, ret_only)
void main_f_c01440() {}

// sub_c01450  (orig 0xc01450, tailcall)
void main_f_c01450() { main::sub_ce0(); }

// sub_c01470  (orig 0xc01470, copy2)
void main_f_c01470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c01480  (orig 0xc01480, copy2)
void main_f_c01480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c01490  (orig 0xc01490, tailcall)
void main_f_c01490() { main::sub_ce0(); }

// sub_c01500  (orig 0xc01500, ret_only)
void main_f_c01500() {}

// sub_c01510  (orig 0xc01510, tailcall)
void main_f_c01510() { main::sub_ce0(); }

// sub_c01560  (orig 0xc01560, tailcall)
void main_f_c01560() { main::sub_ce0(); }

// sub_c015b0  (orig 0xc015b0, ret_only)
void main_f_c015b0() {}

// sub_c015c0  (orig 0xc015c0, tailcall)
void main_f_c015c0() { main::sub_ce0(); }

// sub_c02330  (orig 0xc02330, getter)
uint8_t main_f_c02330(void* a0) { return *(uint8_t*)((char*)(a0) + 888); }

// sub_c02340  (orig 0xc02340, getter)
uint8_t main_f_c02340(void* a0) { return *(uint8_t*)((char*)(a0) + 889); }

// sub_c02ff0  (orig 0xc02ff0, ret_only)
void main_f_c02ff0() {}

// sub_c03000  (orig 0xc03000, copy2)
void main_f_c03000(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c03010  (orig 0xc03010, copy2)
void main_f_c03010(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c03580  (orig 0xc03580, ret_only)
void main_f_c03580() {}

// sub_c03590  (orig 0xc03590, tailcall)
void main_f_c03590() { main::sub_ce0(); }

// sub_c03600  (orig 0xc03600, ret_only)
void main_f_c03600() {}

// sub_c03610  (orig 0xc03610, tailcall)
void main_f_c03610() { main::sub_ce0(); }

// sub_c03700  (orig 0xc03700, copy2)
void main_f_c03700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c03710  (orig 0xc03710, copy2)
void main_f_c03710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c03890  (orig 0xc03890, ret_only)
void main_f_c03890() {}

// sub_c038a0  (orig 0xc038a0, copy2)
void main_f_c038a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c038b0  (orig 0xc038b0, copy2)
void main_f_c038b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c03a30  (orig 0xc03a30, ret_only)
void main_f_c03a30() {}

// sub_c03a40  (orig 0xc03a40, copy2)
void main_f_c03a40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c03a50  (orig 0xc03a50, copy2)
void main_f_c03a50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c04230  (orig 0xc04230, ret_only)
void main_f_c04230() {}

// sub_c04240  (orig 0xc04240, tailcall)
void main_f_c04240() { main::sub_ce0(); }

// sub_c04290  (orig 0xc04290, ret_only)
void main_f_c04290() {}

// sub_c042a0  (orig 0xc042a0, tailcall)
void main_f_c042a0() { main::sub_ce0(); }

// sub_c043f0  (orig 0xc043f0, ret_only)
void main_f_c043f0() {}

// sub_c04400  (orig 0xc04400, copy2)
void main_f_c04400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c04410  (orig 0xc04410, copy2)
void main_f_c04410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c04420  (orig 0xc04420, ret_only)
void main_f_c04420() {}

// sub_c04430  (orig 0xc04430, ret_only)
void main_f_c04430() {}

// sub_c04440  (orig 0xc04440, ret_only)
void main_f_c04440() {}

// sub_c04450  (orig 0xc04450, ret_only)
void main_f_c04450() {}

// sub_c04460  (orig 0xc04460, copy2)
void main_f_c04460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c04470  (orig 0xc04470, copy2)
void main_f_c04470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c04a40  (orig 0xc04a40, ret_only)
void main_f_c04a40() {}

// sub_c04a50  (orig 0xc04a50, copy2)
void main_f_c04a50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c04a60  (orig 0xc04a60, copy2)
void main_f_c04a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c04e00  (orig 0xc04e00, tailcall)
void main_f_c04e00() { main::sub_c04ca0(); }

// sub_c05560  (orig 0xc05560, ret_only)
void main_f_c05560() {}

// sub_c05570  (orig 0xc05570, copy2)
void main_f_c05570(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c05580  (orig 0xc05580, copy2)
void main_f_c05580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c05590  (orig 0xc05590, ret_only)
void main_f_c05590() {}

// sub_c055a0  (orig 0xc055a0, ret_only)
void main_f_c055a0() {}

// sub_c055b0  (orig 0xc055b0, ret_only)
void main_f_c055b0() {}

// sub_c055c0  (orig 0xc055c0, ret_only)
void main_f_c055c0() {}

// sub_c056b0  (orig 0xc056b0, ret_only)
void main_f_c056b0() {}

// sub_c056c0  (orig 0xc056c0, copy2)
void main_f_c056c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c056d0  (orig 0xc056d0, copy2)
void main_f_c056d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c05890  (orig 0xc05890, tailcall)
void main_f_c05890() { main::sub_bd0880(); }

// sub_c05b40  (orig 0xc05b40, ret_only)
void main_f_c05b40() {}

// sub_c05b50  (orig 0xc05b50, copy2)
void main_f_c05b50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c05b60  (orig 0xc05b60, copy2)
void main_f_c05b60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c06040  (orig 0xc06040, ret_only)
void main_f_c06040() {}

// sub_c06050  (orig 0xc06050, copy2)
void main_f_c06050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c06060  (orig 0xc06060, copy2)
void main_f_c06060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c061a0  (orig 0xc061a0, tailcall)
void main_f_c061a0() { main::sub_bd0880(); }

// sub_c06450  (orig 0xc06450, ret_only)
void main_f_c06450() {}

// sub_c06460  (orig 0xc06460, copy2)
void main_f_c06460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c06470  (orig 0xc06470, copy2)
void main_f_c06470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c06660  (orig 0xc06660, tailcall)
void main_f_c06660() { main::sub_bd0880(); }

// sub_c06940  (orig 0xc06940, ret_only)
void main_f_c06940() {}

// sub_c06950  (orig 0xc06950, copy2)
void main_f_c06950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c06960  (orig 0xc06960, copy2)
void main_f_c06960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c06a30  (orig 0xc06a30, ret_only)
void main_f_c06a30() {}

// sub_c06a40  (orig 0xc06a40, copy2)
void main_f_c06a40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c06a50  (orig 0xc06a50, copy2)
void main_f_c06a50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c06b00  (orig 0xc06b00, tailcall)
void main_f_c06b00() { main::sub_bd0880(); }

// sub_c06e10  (orig 0xc06e10, ret_only)
void main_f_c06e10() {}

// sub_c06e20  (orig 0xc06e20, copy2)
void main_f_c06e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c06e30  (orig 0xc06e30, copy2)
void main_f_c06e30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c07090  (orig 0xc07090, tailcall)
void main_f_c07090() { main::sub_bd0880(); }

// sub_c07430  (orig 0xc07430, tailcall)
void main_f_c07430() { main::sub_bd0880(); }

// sub_c07710  (orig 0xc07710, ret_only)
void main_f_c07710() {}

// sub_c07720  (orig 0xc07720, copy2)
void main_f_c07720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c07730  (orig 0xc07730, copy2)
void main_f_c07730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c07800  (orig 0xc07800, ret_only)
void main_f_c07800() {}

// sub_c07810  (orig 0xc07810, copy2)
void main_f_c07810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c07820  (orig 0xc07820, copy2)
void main_f_c07820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c07900  (orig 0xc07900, tailcall)
void main_f_c07900() { main::sub_bd0880(); }

// sub_c07b60  (orig 0xc07b60, ret_only)
void main_f_c07b60() {}

// sub_c07b70  (orig 0xc07b70, copy2)
void main_f_c07b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c07b80  (orig 0xc07b80, copy2)
void main_f_c07b80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c07d90  (orig 0xc07d90, tailcall)
void main_f_c07d90() { main::sub_bd0880(); }

// sub_c08070  (orig 0xc08070, ret_only)
void main_f_c08070() {}

// sub_c08080  (orig 0xc08080, copy2)
void main_f_c08080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c08090  (orig 0xc08090, copy2)
void main_f_c08090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c08160  (orig 0xc08160, ret_only)
void main_f_c08160() {}

// sub_c08170  (orig 0xc08170, copy2)
void main_f_c08170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c08180  (orig 0xc08180, copy2)
void main_f_c08180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c08390  (orig 0xc08390, tailcall)
void main_f_c08390() { main::sub_bd0880(); }

// sub_c08670  (orig 0xc08670, ret_only)
void main_f_c08670() {}

// sub_c08680  (orig 0xc08680, copy2)
void main_f_c08680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c08690  (orig 0xc08690, copy2)
void main_f_c08690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c08760  (orig 0xc08760, ret_only)
void main_f_c08760() {}

// sub_c08770  (orig 0xc08770, copy2)
void main_f_c08770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c08780  (orig 0xc08780, copy2)
void main_f_c08780(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c09660  (orig 0xc09660, tailcall)
void main_f_c09660() { main::sub_c09460(); }

// sub_c09800  (orig 0xc09800, tailcall)
void main_f_c09800() { main::sub_ce0(); }

// sub_c09850  (orig 0xc09850, ret_only)
void main_f_c09850() {}

// sub_c09860  (orig 0xc09860, tailcall)
void main_f_c09860() { main::sub_ce0(); }

// sub_c09a80  (orig 0xc09a80, tailcall)
void main_f_c09a80() { main::sub_ce0(); }

// sub_c09ad0  (orig 0xc09ad0, ret_only)
void main_f_c09ad0() {}

// sub_c09ae0  (orig 0xc09ae0, tailcall)
void main_f_c09ae0() { main::sub_ce0(); }

// sub_c09e90  (orig 0xc09e90, ret_only)
void main_f_c09e90() {}

// sub_c09ea0  (orig 0xc09ea0, tailcall)
void main_f_c09ea0() { main::sub_ce0(); }

// sub_c09ef0  (orig 0xc09ef0, ret_only)
void main_f_c09ef0() {}

// sub_c09f00  (orig 0xc09f00, tailcall)
void main_f_c09f00() { main::sub_ce0(); }

// sub_c0a120  (orig 0xc0a120, copy2)
void main_f_c0a120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0a130  (orig 0xc0a130, copy2)
void main_f_c0a130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0a1e0  (orig 0xc0a1e0, tailcall)
void main_f_c0a1e0() { main::sub_bd0880(); }

// sub_c0a4c0  (orig 0xc0a4c0, ret_only)
void main_f_c0a4c0() {}

// sub_c0a4d0  (orig 0xc0a4d0, copy2)
void main_f_c0a4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0a4e0  (orig 0xc0a4e0, copy2)
void main_f_c0a4e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0aac0  (orig 0xc0aac0, ret_only)
void main_f_c0aac0() {}

// sub_c0b550  (orig 0xc0b550, ret_only)
void main_f_c0b550() {}

// sub_c0b560  (orig 0xc0b560, copy2)
void main_f_c0b560(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0b570  (orig 0xc0b570, copy2)
void main_f_c0b570(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0b6d0  (orig 0xc0b6d0, ret_only)
void main_f_c0b6d0() {}

// sub_c0b6e0  (orig 0xc0b6e0, tailcall)
void main_f_c0b6e0() { main::sub_ce0(); }

// sub_c0b730  (orig 0xc0b730, ret_only)
void main_f_c0b730() {}

// sub_c0b740  (orig 0xc0b740, tailcall)
void main_f_c0b740() { main::sub_ce0(); }

// sub_c0b7a0  (orig 0xc0b7a0, copy2)
void main_f_c0b7a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0b7b0  (orig 0xc0b7b0, copy2)
void main_f_c0b7b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0b9b0  (orig 0xc0b9b0, ret_only)
void main_f_c0b9b0() {}

// sub_c0b9c0  (orig 0xc0b9c0, tailcall)
void main_f_c0b9c0() { main::sub_ce0(); }

// sub_c0ba10  (orig 0xc0ba10, ret_only)
void main_f_c0ba10() {}

// sub_c0ba20  (orig 0xc0ba20, tailcall)
void main_f_c0ba20() { main::sub_ce0(); }

// sub_c0ba60  (orig 0xc0ba60, tailcall)
void main_f_c0ba60() { main::sub_ce0(); }

// sub_c0bab0  (orig 0xc0bab0, ret_only)
void main_f_c0bab0() {}

// sub_c0bac0  (orig 0xc0bac0, tailcall)
void main_f_c0bac0() { main::sub_ce0(); }

// sub_c0bb00  (orig 0xc0bb00, copy2)
void main_f_c0bb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0bb10  (orig 0xc0bb10, copy2)
void main_f_c0bb10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0bd10  (orig 0xc0bd10, ret_only)
void main_f_c0bd10() {}

// sub_c0bd20  (orig 0xc0bd20, tailcall)
void main_f_c0bd20() { main::sub_ce0(); }

// sub_c0bd70  (orig 0xc0bd70, ret_only)
void main_f_c0bd70() {}

// sub_c0bd80  (orig 0xc0bd80, tailcall)
void main_f_c0bd80() { main::sub_ce0(); }

// sub_c0bdc0  (orig 0xc0bdc0, tailcall)
void main_f_c0bdc0() { main::sub_ce0(); }

// sub_c0be10  (orig 0xc0be10, ret_only)
void main_f_c0be10() {}

// sub_c0be20  (orig 0xc0be20, tailcall)
void main_f_c0be20() { main::sub_ce0(); }

// sub_c0be60  (orig 0xc0be60, copy2)
void main_f_c0be60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0be70  (orig 0xc0be70, copy2)
void main_f_c0be70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0bfa0  (orig 0xc0bfa0, ret_only)
void main_f_c0bfa0() {}

// sub_c0bfb0  (orig 0xc0bfb0, tailcall)
void main_f_c0bfb0() { main::sub_ce0(); }

// sub_c0c020  (orig 0xc0c020, ret_only)
void main_f_c0c020() {}

// sub_c0c030  (orig 0xc0c030, tailcall)
void main_f_c0c030() { main::sub_ce0(); }

// sub_c0c050  (orig 0xc0c050, copy2)
void main_f_c0c050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0c060  (orig 0xc0c060, copy2)
void main_f_c0c060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0c070  (orig 0xc0c070, tailcall)
void main_f_c0c070() { main::sub_ce0(); }

// sub_c0c0c0  (orig 0xc0c0c0, ret_only)
void main_f_c0c0c0() {}

// sub_c0c0d0  (orig 0xc0c0d0, tailcall)
void main_f_c0c0d0() { main::sub_ce0(); }

// sub_c0c660  (orig 0xc0c660, tailcall)
void main_f_c0c660() { main::sub_bd0880(); }

// sub_c0c800  (orig 0xc0c800, mov_ret)
uint32_t main_f_c0c800() { return 1; }

// sub_c0c810  (orig 0xc0c810, ret_only)
void main_f_c0c810() {}

// sub_c0c820  (orig 0xc0c820, ret_only)
void main_f_c0c820() {}

// sub_c0c830  (orig 0xc0c830, ret_only)
void main_f_c0c830() {}

// sub_c0c840  (orig 0xc0c840, ret_only)
void main_f_c0c840() {}

// sub_c0c850  (orig 0xc0c850, ret_only)
void main_f_c0c850() {}

// sub_c0c860  (orig 0xc0c860, ret_only)
void main_f_c0c860() {}

// sub_c0c870  (orig 0xc0c870, ret_only)
void main_f_c0c870() {}

// sub_c0c950  (orig 0xc0c950, ret_only)
void main_f_c0c950() {}

// sub_c0c960  (orig 0xc0c960, copy2)
void main_f_c0c960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0c970  (orig 0xc0c970, copy2)
void main_f_c0c970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0c980  (orig 0xc0c980, ret_only)
void main_f_c0c980() {}

// sub_c0c990  (orig 0xc0c990, ret_only)
void main_f_c0c990() {}

// sub_c0c9a0  (orig 0xc0c9a0, ret_only)
void main_f_c0c9a0() {}

// sub_c0c9b0  (orig 0xc0c9b0, ret_only)
void main_f_c0c9b0() {}

// sub_c0c9c0  (orig 0xc0c9c0, mov_ret)
uint32_t main_f_c0c9c0() { return 1; }

// sub_c0c9d0  (orig 0xc0c9d0, ret_only)
void main_f_c0c9d0() {}

// sub_c0c9e0  (orig 0xc0c9e0, ret_only)
void main_f_c0c9e0() {}

// sub_c0c9f0  (orig 0xc0c9f0, ret_only)
void main_f_c0c9f0() {}

// sub_c0f5b0  (orig 0xc0f5b0, tailcall)
void main_f_c0f5b0() { main::sub_bd0880(); }

// sub_c10e50  (orig 0xc10e50, tailcall)
void main_f_c10e50() { main::sub_c10d60(); }

// sub_c11610  (orig 0xc11610, tailcall)
void main_f_c11610() { main::sub_bd0880(); }

// sub_c119b0  (orig 0xc119b0, ret_only)
void main_f_c119b0() {}

// sub_c119c0  (orig 0xc119c0, copy2)
void main_f_c119c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c119d0  (orig 0xc119d0, copy2)
void main_f_c119d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c11bc0  (orig 0xc11bc0, tailcall)
void main_f_c11bc0() { main::sub_bd0880(); }

// sub_c11f60  (orig 0xc11f60, ret_only)
void main_f_c11f60() {}

// sub_c11f70  (orig 0xc11f70, copy2)
void main_f_c11f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c11f80  (orig 0xc11f80, copy2)
void main_f_c11f80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c12110  (orig 0xc12110, tailcall)
void main_f_c12110() { main::sub_bd0880(); }

// sub_c12580  (orig 0xc12580, ret_only)
void main_f_c12580() {}

// sub_c12590  (orig 0xc12590, copy2)
void main_f_c12590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c125a0  (orig 0xc125a0, copy2)
void main_f_c125a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c12820  (orig 0xc12820, ret_only)
void main_f_c12820() {}

// sub_c12830  (orig 0xc12830, copy2)
void main_f_c12830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c12840  (orig 0xc12840, copy2)
void main_f_c12840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c128d0  (orig 0xc128d0, tailcall)
void main_f_c128d0() { main::sub_bd0880(); }

// sub_c12aa0  (orig 0xc12aa0, ret_only)
void main_f_c12aa0() {}

// sub_c12ab0  (orig 0xc12ab0, copy2)
void main_f_c12ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c12ac0  (orig 0xc12ac0, copy2)
void main_f_c12ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c12be0  (orig 0xc12be0, tailcall)
void main_f_c12be0() { main::sub_bd0880(); }

// sub_c12de0  (orig 0xc12de0, ret_only)
void main_f_c12de0() {}

// sub_c12df0  (orig 0xc12df0, copy2)
void main_f_c12df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c12e00  (orig 0xc12e00, copy2)
void main_f_c12e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c134a0  (orig 0xc134a0, tailcall)
void main_f_c134a0() { main::sub_c13200(); }

// sub_c14490  (orig 0xc14490, ret_only)
void main_f_c14490() {}

// sub_c144a0  (orig 0xc144a0, copy2)
void main_f_c144a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c144b0  (orig 0xc144b0, copy2)
void main_f_c144b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c144c0  (orig 0xc144c0, ret_only)
void main_f_c144c0() {}

// sub_c144d0  (orig 0xc144d0, ret_only)
void main_f_c144d0() {}

// sub_c144e0  (orig 0xc144e0, ret_only)
void main_f_c144e0() {}

// sub_c144f0  (orig 0xc144f0, ret_only)
void main_f_c144f0() {}

// sub_c14740  (orig 0xc14740, ret_only)
void main_f_c14740() {}

// sub_c14750  (orig 0xc14750, copy2)
void main_f_c14750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c14760  (orig 0xc14760, copy2)
void main_f_c14760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c14d50  (orig 0xc14d50, tailcall)
void main_f_c14d50() { main::sub_bd0880(); }

// sub_c14f10  (orig 0xc14f10, ret_only)
void main_f_c14f10() {}

// sub_c14f20  (orig 0xc14f20, ret_only)
void main_f_c14f20() {}

// sub_c14f30  (orig 0xc14f30, ret_only)
void main_f_c14f30() {}

// sub_c14f40  (orig 0xc14f40, ret_only)
void main_f_c14f40() {}

// sub_c14f50  (orig 0xc14f50, ret_only)
void main_f_c14f50() {}

// sub_c14f60  (orig 0xc14f60, ret_only)
void main_f_c14f60() {}

// sub_c14f70  (orig 0xc14f70, ret_only)
void main_f_c14f70() {}

// sub_c14fd0  (orig 0xc14fd0, ret_only)
void main_f_c14fd0() {}

// sub_c14fe0  (orig 0xc14fe0, copy2)
void main_f_c14fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c14ff0  (orig 0xc14ff0, copy2)
void main_f_c14ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c15050  (orig 0xc15050, ret_only)
void main_f_c15050() {}

// sub_c15060  (orig 0xc15060, copy2)
void main_f_c15060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c15070  (orig 0xc15070, copy2)
void main_f_c15070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c150d0  (orig 0xc150d0, ret_only)
void main_f_c150d0() {}

// sub_c150e0  (orig 0xc150e0, copy2)
void main_f_c150e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c150f0  (orig 0xc150f0, copy2)
void main_f_c150f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c16090  (orig 0xc16090, tailcall)
void main_f_c16090() { main::sub_c156a0(); }

// sub_c18a10  (orig 0xc18a10, mov_ret)
uint32_t main_f_c18a10() { return 2; }

// sub_c18cf0  (orig 0xc18cf0, ret_only)
void main_f_c18cf0() {}

// sub_c18d00  (orig 0xc18d00, ret_only)
void main_f_c18d00() {}

// sub_c1ac70  (orig 0xc1ac70, tailcall)
void main_f_c1ac70() { main::sub_bc7540(); }

// sub_c1ac80  (orig 0xc1ac80, ret_only)
void main_f_c1ac80() {}

// sub_c1ae50  (orig 0xc1ae50, tailcall)
void main_f_c1ae50() { main::sub_bc7540(); }

// sub_c1ae60  (orig 0xc1ae60, tailcall)
void main_f_c1ae60() { main::sub_bc7540(); }

// sub_c1c140  (orig 0xc1c140, tailcall)
void main_f_c1c140() { main::sub_c1beb0(); }

// sub_c1c170  (orig 0xc1c170, mov_ret)
uint32_t main_f_c1c170() { return 1; }

// sub_c1ca60  (orig 0xc1ca60, tailcall)
void main_f_c1ca60() { main::sub_c1cdd0(); }

// sub_c1cc10  (orig 0xc1cc10, tailcall)
void main_f_c1cc10() { main::sub_c1cdd0(); }

// sub_c1cc20  (orig 0xc1cc20, tailcall)
void main_f_c1cc20() { main::sub_c1cdd0(); }

// sub_c1e6a0  (orig 0xc1e6a0, tailcall)
void main_f_c1e6a0() { main::sub_c1e5a0(); }

// sub_c22020  (orig 0xc22020, mov_ret)
uint32_t main_f_c22020() { return 1; }

// sub_c22450  (orig 0xc22450, tailcall)
void main_f_c22450() { main::sub_c22600(); }

// sub_c22520  (orig 0xc22520, tailcall)
void main_f_c22520() { main::sub_c22600(); }

// sub_c22530  (orig 0xc22530, tailcall)
void main_f_c22530() { main::sub_c22600(); }

// sub_c22c40  (orig 0xc22c40, getter)
uint64_t main_f_c22c40(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_c22db0  (orig 0xc22db0, mov_ret)
uint32_t main_f_c22db0() { return 1; }

// sub_c23e80  (orig 0xc23e80, tailcall)
void main_f_c23e80() { main::sub_c23cc0(); }

// sub_c24550  (orig 0xc24550, tailcall)
void main_f_c24550() { main::sub_c24470(); }

// sub_c24560  (orig 0xc24560, tailcall)
void main_f_c24560() { main::sub_c24980(); }

// sub_c24590  (orig 0xc24590, tailcall)
void main_f_c24590() { main::sub_c24980(); }

// sub_c245a0  (orig 0xc245a0, tailcall)
void main_f_c245a0() { main::sub_c24980(); }

// sub_c26090  (orig 0xc26090, ret_only)
void main_f_c26090() {}

// sub_c260a0  (orig 0xc260a0, copy2)
void main_f_c260a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c260b0  (orig 0xc260b0, copy2)
void main_f_c260b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c278c0  (orig 0xc278c0, tailcall)
void main_f_c278c0() { main::sub_c277c0(); }

// sub_c278d0  (orig 0xc278d0, ret_only)
void main_f_c278d0() {}

// sub_c278e0  (orig 0xc278e0, mov_ret)
uint32_t main_f_c278e0() { return 1; }

// sub_c278f0  (orig 0xc278f0, mov_ret)
uint32_t main_f_c278f0() { return 1; }

// sub_c27900  (orig 0xc27900, ret_only)
void main_f_c27900() {}

// sub_c27910  (orig 0xc27910, ret_only)
void main_f_c27910() {}

// sub_c27920  (orig 0xc27920, mov_ret)
uint32_t main_f_c27920() { return 1; }

// sub_c27930  (orig 0xc27930, mov_ret)
uint32_t main_f_c27930() { return 1; }

// sub_c28b50  (orig 0xc28b50, tailcall)
void main_f_c28b50() { main::sub_c28d00(); }

// sub_c28c20  (orig 0xc28c20, tailcall)
void main_f_c28c20() { main::sub_c28d00(); }

// sub_c28c30  (orig 0xc28c30, tailcall)
void main_f_c28c30() { main::sub_c28d00(); }

// sub_c28fa0  (orig 0xc28fa0, ret_only)
void main_f_c28fa0() {}

// sub_c2a360  (orig 0xc2a360, tailcall)
void main_f_c2a360() { main::sub_e7c4c0(); }

// sub_c2a370  (orig 0xc2a370, tailcall)
void main_f_c2a370() { main::sub_c2a3e0(); }

// sub_c2a3a0  (orig 0xc2a3a0, tailcall)
void main_f_c2a3a0() { main::sub_c2a3e0(); }

// sub_c2a3b0  (orig 0xc2a3b0, tailcall)
void main_f_c2a3b0() { main::sub_c2a3e0(); }

// sub_c2c330  (orig 0xc2c330, tailcall)
void main_f_c2c330() { main::sub_e7c4c0(); }

// sub_c2c340  (orig 0xc2c340, tailcall)
void main_f_c2c340() { main::sub_c2c3b0(); }

// sub_c2c370  (orig 0xc2c370, tailcall)
void main_f_c2c370() { main::sub_c2c3b0(); }

// sub_c2c380  (orig 0xc2c380, tailcall)
void main_f_c2c380() { main::sub_c2c3b0(); }

// sub_c2c820  (orig 0xc2c820, tailcall)
void main_f_c2c820() { main::sub_e7c4c0(); }

// sub_c2c830  (orig 0xc2c830, tailcall)
void main_f_c2c830() { main::sub_c2c8a0(); }

// sub_c2c860  (orig 0xc2c860, tailcall)
void main_f_c2c860() { main::sub_c2c8a0(); }

// sub_c2c870  (orig 0xc2c870, tailcall)
void main_f_c2c870() { main::sub_c2c8a0(); }

// sub_c2ccf0  (orig 0xc2ccf0, tailcall)
void main_f_c2ccf0() { main::sub_e7c4c0(); }

// sub_c2cd00  (orig 0xc2cd00, tailcall)
void main_f_c2cd00() { main::sub_c2cd70(); }

// sub_c2cd30  (orig 0xc2cd30, tailcall)
void main_f_c2cd30() { main::sub_c2cd70(); }

// sub_c2cd40  (orig 0xc2cd40, tailcall)
void main_f_c2cd40() { main::sub_c2cd70(); }

// sub_c2d6f0  (orig 0xc2d6f0, getter)
uint32_t main_f_c2d6f0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_c32b20  (orig 0xc32b20, ret_only)
void main_f_c32b20() {}

// sub_c32c30  (orig 0xc32c30, ret_only)
void main_f_c32c30() {}

// sub_c32c40  (orig 0xc32c40, copy2)
void main_f_c32c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c32c50  (orig 0xc32c50, copy2)
void main_f_c32c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c32d20  (orig 0xc32d20, ret_only)
void main_f_c32d20() {}

// sub_c32d30  (orig 0xc32d30, copy2)
void main_f_c32d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c32d40  (orig 0xc32d40, copy2)
void main_f_c32d40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c32e10  (orig 0xc32e10, ret_only)
void main_f_c32e10() {}

// sub_c32e20  (orig 0xc32e20, copy2)
void main_f_c32e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c32e30  (orig 0xc32e30, copy2)
void main_f_c32e30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c32f00  (orig 0xc32f00, ret_only)
void main_f_c32f00() {}

// sub_c32f10  (orig 0xc32f10, copy2)
void main_f_c32f10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c32f20  (orig 0xc32f20, copy2)
void main_f_c32f20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c33060  (orig 0xc33060, ret_only)
void main_f_c33060() {}

// sub_c33070  (orig 0xc33070, copy2)
void main_f_c33070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c33080  (orig 0xc33080, copy2)
void main_f_c33080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c333e0  (orig 0xc333e0, tailcall)
void main_f_c333e0() { main::sub_e7c4c0(); }

// sub_c333f0  (orig 0xc333f0, tailcall)
void main_f_c333f0() { main::sub_c33460(); }

// sub_c33420  (orig 0xc33420, tailcall)
void main_f_c33420() { main::sub_c33460(); }

// sub_c33430  (orig 0xc33430, tailcall)
void main_f_c33430() { main::sub_c33460(); }

// sub_c338a0  (orig 0xc338a0, straight)
void main_f_c338a0(void* a0) {
    *(uint8_t*)((char*)(a0) + 232) = (uint8_t)(1);
}

// sub_c33940  (orig 0xc33940, straight)
void main_f_c33940(void* a0) {
    *(uint8_t*)((char*)(a0) + 234) = (uint8_t)(1);
}

// sub_c36420  (orig 0xc36420, tailcall)
void main_f_c36420() { main::sub_c277c0(); }

// sub_c36430  (orig 0xc36430, ret_only)
void main_f_c36430() {}

// sub_c36440  (orig 0xc36440, ret_only)
void main_f_c36440() {}

// sub_c36470  (orig 0xc36470, tailcall)
void main_f_c36470() { main::sub_ce0(); }

// sub_c364e0  (orig 0xc364e0, ret_only)
void main_f_c364e0() {}

// sub_c364f0  (orig 0xc364f0, tailcall)
void main_f_c364f0() { main::sub_ce0(); }

// sub_c37d70  (orig 0xc37d70, ret_only)
void main_f_c37d70() {}

// sub_c38030  (orig 0xc38030, tailcall)
void main_f_c38030() { main::sub_c37f30(); }

// sub_c38040  (orig 0xc38040, tailcall)
void main_f_c38040() { main::sub_c38220(); }

// sub_c38050  (orig 0xc38050, mov_ret)
uint32_t main_f_c38050() { return 1; }

// sub_c38080  (orig 0xc38080, tailcall)
void main_f_c38080() { main::sub_c38220(); }

// sub_c38090  (orig 0xc38090, tailcall)
void main_f_c38090() { main::sub_c38220(); }

// sub_c385b0  (orig 0xc385b0, ret_only)
void main_f_c385b0() {}

// sub_c385c0  (orig 0xc385c0, ret_only)
void main_f_c385c0() {}

// sub_c385d0  (orig 0xc385d0, ret_only)
void main_f_c385d0() {}

// sub_c38e50  (orig 0xc38e50, getter)
uint64_t main_f_c38e50(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_c38ff0  (orig 0xc38ff0, mov_ret)
uint32_t main_f_c38ff0() { return 1; }

// sub_c39120  (orig 0xc39120, mov_ret)
uint32_t main_f_c39120() { return 1; }

// sub_c397b0  (orig 0xc397b0, getter)
uint64_t main_f_c397b0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_c39920  (orig 0xc39920, mov_ret)
uint32_t main_f_c39920() { return 1; }

// sub_c3a510  (orig 0xc3a510, getter)
uint64_t main_f_c3a510(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_c3a680  (orig 0xc3a680, mov_ret)
uint32_t main_f_c3a680() { return 1; }

// sub_c3ac40  (orig 0xc3ac40, mov_ret)
uint32_t main_f_c3ac40() { return 1; }

// sub_c3ac50  (orig 0xc3ac50, ret_only)
void main_f_c3ac50() {}

// sub_c3b2e0  (orig 0xc3b2e0, ret_only)
void main_f_c3b2e0() {}

// sub_c3b3c0  (orig 0xc3b3c0, ret_only)
void main_f_c3b3c0() {}

// sub_c3b3d0  (orig 0xc3b3d0, ret_only)
void main_f_c3b3d0() {}

// sub_c3b540  (orig 0xc3b540, tailcall)
void main_f_c3b540() { main::sub_c3b730(); }

// sub_c3b630  (orig 0xc3b630, tailcall)
void main_f_c3b630() { main::sub_c3b730(); }

// sub_c3b640  (orig 0xc3b640, tailcall)
void main_f_c3b640() { main::sub_c3b730(); }

// sub_c3bcd0  (orig 0xc3bcd0, mov_ret)
uint32_t main_f_c3bcd0() { return 1; }

// sub_c3cdf0  (orig 0xc3cdf0, tailcall)
void main_f_c3cdf0() { main::sub_c3cbc0(); }

// sub_c3ce00  (orig 0xc3ce00, tailcall)
void main_f_c3ce00() { main::sub_c3d130(); }

// sub_c3ce30  (orig 0xc3ce30, tailcall)
void main_f_c3ce30() { main::sub_c3d130(); }

// sub_c3ce40  (orig 0xc3ce40, tailcall)
void main_f_c3ce40() { main::sub_c3d130(); }

// sub_c3d630  (orig 0xc3d630, ret_only)
void main_f_c3d630() {}

// sub_c3d640  (orig 0xc3d640, copy2)
void main_f_c3d640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c3d650  (orig 0xc3d650, copy2)
void main_f_c3d650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c3dcb0  (orig 0xc3dcb0, mov_ret)
uint32_t main_f_c3dcb0() { return 1; }

// sub_c3e6b0  (orig 0xc3e6b0, tailcall)
void main_f_c3e6b0() { main::sub_c3e6e0(); }

// sub_c3e6c0  (orig 0xc3e6c0, tailcall)
void main_f_c3e6c0() { main::sub_c3e6e0(); }

// sub_c3e6d0  (orig 0xc3e6d0, tailcall)
void main_f_c3e6d0() { main::sub_c3e6e0(); }

// sub_c3ee80  (orig 0xc3ee80, getter)
uint64_t main_f_c3ee80(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_c3f010  (orig 0xc3f010, mov_ret)
uint32_t main_f_c3f010() { return 2; }

// sub_c3f7d0  (orig 0xc3f7d0, getter)
uint64_t main_f_c3f7d0(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_c3f960  (orig 0xc3f960, mov_ret)
uint32_t main_f_c3f960() { return 2; }

// sub_c3fd60  (orig 0xc3fd60, tailcall)
void main_f_c3fd60() { main::sub_c3fc20(); }

// sub_c3fd90  (orig 0xc3fd90, getter)
uint64_t main_f_c3fd90(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_c3fda0  (orig 0xc3fda0, setter)
void main_f_c3fda0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_c41280  (orig 0xc41280, setter)
void main_f_c41280(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1824) = a1; }

// sub_c418f0  (orig 0xc418f0, ret_only)
void main_f_c418f0() {}

// sub_c41c30  (orig 0xc41c30, tailcall)
void main_f_c41c30() { main::sub_c42080(); }

// sub_c41c40  (orig 0xc41c40, tailcall)
void main_f_c41c40() { main::sub_c42080(); }

// sub_c41c50  (orig 0xc41c50, tailcall)
void main_f_c41c50() { main::sub_c42080(); }

// sub_c41e20  (orig 0xc41e20, tailcall)
void main_f_c41e20() { main::sub_c41c60(); }

// sub_c428a0  (orig 0xc428a0, ret_only)
void main_f_c428a0() {}

// sub_c428b0  (orig 0xc428b0, tailcall)
void main_f_c428b0() { main::sub_e7c4c0(); }

// sub_c428c0  (orig 0xc428c0, tailcall)
void main_f_c428c0() { main::sub_c42930(); }

// sub_c428f0  (orig 0xc428f0, tailcall)
void main_f_c428f0() { main::sub_c42930(); }

// sub_c42900  (orig 0xc42900, tailcall)
void main_f_c42900() { main::sub_c42930(); }

// sub_c43890  (orig 0xc43890, ret_only)
void main_f_c43890() {}

// sub_c438a0  (orig 0xc438a0, tailcall)
void main_f_c438a0() { main::sub_e7c4c0(); }

// sub_c438b0  (orig 0xc438b0, tailcall)
void main_f_c438b0() { main::sub_c43920(); }

// sub_c438e0  (orig 0xc438e0, tailcall)
void main_f_c438e0() { main::sub_c43920(); }

// sub_c438f0  (orig 0xc438f0, tailcall)
void main_f_c438f0() { main::sub_c43920(); }

// sub_c44050  (orig 0xc44050, tailcall)
void main_f_c44050() { main::sub_c43f40(); }

// sub_c447b0  (orig 0xc447b0, ret_only)
void main_f_c447b0() {}

// sub_c44830  (orig 0xc44830, ret_only)
void main_f_c44830() {}

// sub_c44f10  (orig 0xc44f10, tailcall)
void main_f_c44f10() { main::sub_c44d90(); }

// sub_c45d70  (orig 0xc45d70, ret_only)
void main_f_c45d70() {}

// sub_c46fc0  (orig 0xc46fc0, mov_ret)
uint32_t main_f_c46fc0() { return 1; }

// sub_c46fd0  (orig 0xc46fd0, ret_only)
void main_f_c46fd0() {}

// sub_c46fe0  (orig 0xc46fe0, ret_only)
void main_f_c46fe0() {}

// sub_c46ff0  (orig 0xc46ff0, mov_ret)
uint32_t main_f_c46ff0() { return 0; }

// sub_c47000  (orig 0xc47000, getter)
uint8_t main_f_c47000(void* a0) { return *(uint8_t*)((char*)(a0) + 1618); }

// sub_c471d0  (orig 0xc471d0, ret_only)
void main_f_c471d0() {}

// sub_c471e0  (orig 0xc471e0, copy2)
void main_f_c471e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c471f0  (orig 0xc471f0, copy2)
void main_f_c471f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c48110  (orig 0xc48110, tailcall)
void main_f_c48110() { main::sub_c47dd0(); }

// sub_c48fd0  (orig 0xc48fd0, ret_only)
void main_f_c48fd0() {}

// sub_c48fe0  (orig 0xc48fe0, tailcall)
void main_f_c48fe0() { main::sub_c48ff0(); }

// sub_c49130  (orig 0xc49130, tailcall)
void main_f_c49130() { main::sub_c49140(); }

// sub_c49200  (orig 0xc49200, tailcall)
void main_f_c49200() { main::sub_c49140(); }

// sub_c49210  (orig 0xc49210, tailcall)
void main_f_c49210() { main::sub_c48ff0(); }

// sub_c49340  (orig 0xc49340, straight)
void main_f_c49340(void* a0) {
    *(uint32_t*)((char*)(a0) + 112) = 1;
}

// sub_c49d70  (orig 0xc49d70, ret_only)
void main_f_c49d70() {}

// sub_c49d80  (orig 0xc49d80, ret_only)
void main_f_c49d80() {}

// sub_c49d90  (orig 0xc49d90, mov_ret)
uint32_t main_f_c49d90() { return 0; }

// sub_c49da0  (orig 0xc49da0, ret_only)
void main_f_c49da0() {}

// sub_c49db0  (orig 0xc49db0, mov_ret)
uint32_t main_f_c49db0() { return 0; }

// sub_c4aff0  (orig 0xc4aff0, tailcall)
void main_f_c4aff0() { main::sub_c4aea0(); }

// sub_c4b1c0  (orig 0xc4b1c0, compare)
bool main_f_c4b1c0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 320)) == (uint64_t)(3); }

// sub_c4b960  (orig 0xc4b960, ret_only)
void main_f_c4b960() {}

// sub_c4bd80  (orig 0xc4bd80, setter)
void main_f_c4bd80(void* a0) { *(uint32_t*)((char*)(a0) + 868) = 0; }

// sub_c4c300  (orig 0xc4c300, ret_only)
void main_f_c4c300() {}

// sub_c4c310  (orig 0xc4c310, mov_ret)
uint32_t main_f_c4c310() { return 0; }

// sub_c4c5c0  (orig 0xc4c5c0, tailcall)
void main_f_c4c5c0() { main::sub_c4c480(); }

// sub_c4ce80  (orig 0xc4ce80, ret_only)
void main_f_c4ce80() {}

// sub_c4d220  (orig 0xc4d220, setter)
void main_f_c4d220(void* a0) { *(uint32_t*)((char*)(a0) + 692) = 0; }

// sub_c4d4e0  (orig 0xc4d4e0, ret_only)
void main_f_c4d4e0() {}

// sub_c4d4f0  (orig 0xc4d4f0, mov_ret)
uint32_t main_f_c4d4f0() { return 0; }

// sub_c4d7f0  (orig 0xc4d7f0, mov_ret)
uint32_t main_f_c4d7f0() { return 1; }

// sub_c4d800  (orig 0xc4d800, ret_only)
void main_f_c4d800() {}

// sub_c4d810  (orig 0xc4d810, ret_only)
void main_f_c4d810() {}

// sub_c4da20  (orig 0xc4da20, mov_ret)
uint32_t main_f_c4da20() { return 1; }

// sub_c4dbd0  (orig 0xc4dbd0, tailcall)
void main_f_c4dbd0() { main::sub_c4da30(); }

// sub_c4de30  (orig 0xc4de30, tailcall)
void main_f_c4de30() { main::sub_e7c250(); }

// sub_c4de40  (orig 0xc4de40, tailcall)
void main_f_c4de40() { main::sub_c4deb0(); }

// sub_c4de70  (orig 0xc4de70, tailcall)
void main_f_c4de70() { main::sub_c4deb0(); }

// sub_c4de80  (orig 0xc4de80, tailcall)
void main_f_c4de80() { main::sub_c4deb0(); }

// sub_c4e710  (orig 0xc4e710, mov_ret)
uint32_t main_f_c4e710() { return 0; }

// sub_c4e720  (orig 0xc4e720, ret_only)
void main_f_c4e720() {}

// sub_c4e810  (orig 0xc4e810, tailcall)
void main_f_c4e810() { main::sub_c4ea00(); }

// sub_c4e900  (orig 0xc4e900, tailcall)
void main_f_c4e900() { main::sub_c4ea00(); }

// sub_c4e910  (orig 0xc4e910, tailcall)
void main_f_c4e910() { main::sub_c4ea00(); }

// sub_c4eb80  (orig 0xc4eb80, mov_ret)
uint32_t main_f_c4eb80() { return 0; }

// sub_c4eb90  (orig 0xc4eb90, ret_only)
void main_f_c4eb90() {}

// sub_c4eba0  (orig 0xc4eba0, tailcall)
void main_f_c4eba0() { main::sub_e7c4c0(); }

// sub_c4ebb0  (orig 0xc4ebb0, tailcall)
void main_f_c4ebb0() { main::sub_c4ec20(); }

// sub_c4ebe0  (orig 0xc4ebe0, tailcall)
void main_f_c4ebe0() { main::sub_c4ec20(); }

// sub_c4ebf0  (orig 0xc4ebf0, tailcall)
void main_f_c4ebf0() { main::sub_c4ec20(); }

// sub_c4eec0  (orig 0xc4eec0, mov_ret)
uint32_t main_f_c4eec0() { return 0; }

// sub_c4f010  (orig 0xc4f010, tailcall)
void main_f_c4f010() { main::sub_e7c4c0(); }

// sub_c4f020  (orig 0xc4f020, tailcall)
void main_f_c4f020() { main::sub_c4f090(); }

// sub_c4f050  (orig 0xc4f050, tailcall)
void main_f_c4f050() { main::sub_c4f090(); }

// sub_c4f060  (orig 0xc4f060, tailcall)
void main_f_c4f060() { main::sub_c4f090(); }

// sub_c53050  (orig 0xc53050, tailcall)
void main_f_c53050() { main::sub_c532c0(); }

// sub_c53180  (orig 0xc53180, tailcall)
void main_f_c53180() { main::sub_c532c0(); }

// sub_c53190  (orig 0xc53190, tailcall)
void main_f_c53190() { main::sub_c532c0(); }

// sub_c53800  (orig 0xc53800, ret_only)
void main_f_c53800() {}

// sub_c53810  (orig 0xc53810, ret_only)
void main_f_c53810() {}

// sub_c54b60  (orig 0xc54b60, tailcall)
void main_f_c54b60() { main::sub_c53f50(); }

// sub_c60270  (orig 0xc60270, tailcall)
void main_f_c60270() { main::sub_ce0(); }

// sub_c602c0  (orig 0xc602c0, ret_only)
void main_f_c602c0() {}

// sub_c602d0  (orig 0xc602d0, tailcall)
void main_f_c602d0() { main::sub_ce0(); }

// sub_c60800  (orig 0xc60800, tailcall)
void main_f_c60800() { main::sub_ce0(); }

// sub_c60850  (orig 0xc60850, ret_only)
void main_f_c60850() {}

// sub_c60860  (orig 0xc60860, tailcall)
void main_f_c60860() { main::sub_ce0(); }

// sub_c609f0  (orig 0xc609f0, ret_only)
void main_f_c609f0() {}

// sub_c60a00  (orig 0xc60a00, tailcall)
void main_f_c60a00() { main::sub_ce0(); }

// sub_c60a50  (orig 0xc60a50, ret_only)
void main_f_c60a50() {}

// sub_c60a60  (orig 0xc60a60, tailcall)
void main_f_c60a60() { main::sub_ce0(); }

// sub_c628c0  (orig 0xc628c0, mov_ret)
uint32_t main_f_c628c0() { return 1; }

// sub_c63380  (orig 0xc63380, ret_only)
void main_f_c63380() {}

// sub_c64ca0  (orig 0xc64ca0, tailcall)
void main_f_c64ca0() { main::sub_978cf0(); }

// sub_c64d60  (orig 0xc64d60, mov_ret)
uint32_t main_f_c64d60() { return 0; }

// sub_c65100  (orig 0xc65100, ret_only)
void main_f_c65100() {}

// sub_c65110  (orig 0xc65110, copy2)
void main_f_c65110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c65120  (orig 0xc65120, copy2)
void main_f_c65120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c65540  (orig 0xc65540, ret_only)
void main_f_c65540() {}

// sub_c65550  (orig 0xc65550, copy2)
void main_f_c65550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c65560  (orig 0xc65560, copy2)
void main_f_c65560(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c65b20  (orig 0xc65b20, ret_only)
void main_f_c65b20() {}

// sub_c65b30  (orig 0xc65b30, ret_only)
void main_f_c65b30() {}

// sub_c65b40  (orig 0xc65b40, setter)
void main_f_c65b40(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_c65b50  (orig 0xc65b50, straight)
void main_f_c65b50(void* a0) {
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)(1);
}

// sub_c65be0  (orig 0xc65be0, ret_only)
void main_f_c65be0() {}

// sub_c65bf0  (orig 0xc65bf0, ret_only)
void main_f_c65bf0() {}

// sub_c660f0  (orig 0xc660f0, ret_only)
void main_f_c660f0() {}

// sub_c66100  (orig 0xc66100, copy2)
void main_f_c66100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c66110  (orig 0xc66110, copy2)
void main_f_c66110(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c66560  (orig 0xc66560, tailcall)
void main_f_c66560() { main::sub_c668b0(); }

// sub_c666f0  (orig 0xc666f0, tailcall)
void main_f_c666f0() { main::sub_c668b0(); }

// sub_c66700  (orig 0xc66700, tailcall)
void main_f_c66700() { main::sub_c668b0(); }

// sub_c68570  (orig 0xc68570, copy2)
void main_f_c68570(void* a0) { *(uint64_t*)((char*)(a0) + 232) = *(uint64_t*)((char*)(a0) + 224); }

// sub_c687a0  (orig 0xc687a0, tailcall)
void main_f_c687a0() { main::sub_c68680(); }

// sub_c69790  (orig 0xc69790, tailcall)
void main_f_c69790() { main::sub_c69450(); }

// sub_c6d780  (orig 0xc6d780, ret_only)
void main_f_c6d780() {}

// sub_c6d790  (orig 0xc6d790, ret_only)
void main_f_c6d790() {}

// sub_c6e5a0  (orig 0xc6e5a0, mov_ret)
uint32_t main_f_c6e5a0() { return 8; }

// sub_c6ebd0  (orig 0xc6ebd0, ret_only)
void main_f_c6ebd0() {}

// sub_c6ec60  (orig 0xc6ec60, ret_only)
void main_f_c6ec60() {}

// sub_c6ecf0  (orig 0xc6ecf0, ret_only)
void main_f_c6ecf0() {}

// sub_c6ed60  (orig 0xc6ed60, ret_only)
void main_f_c6ed60() {}

// sub_c6ed70  (orig 0xc6ed70, copy2)
void main_f_c6ed70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c6ed80  (orig 0xc6ed80, copy2)
void main_f_c6ed80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c6eda0  (orig 0xc6eda0, ret_only)
void main_f_c6eda0() {}

// sub_c6edb0  (orig 0xc6edb0, ret_only)
void main_f_c6edb0() {}

// sub_c6edc0  (orig 0xc6edc0, ret_only)
void main_f_c6edc0() {}

// sub_c6ede0  (orig 0xc6ede0, ret_only)
void main_f_c6ede0() {}

// sub_c6edf0  (orig 0xc6edf0, ret_only)
void main_f_c6edf0() {}

// sub_c6ee00  (orig 0xc6ee00, ret_only)
void main_f_c6ee00() {}

// sub_c6ee20  (orig 0xc6ee20, ret_only)
void main_f_c6ee20() {}

// sub_c6ee30  (orig 0xc6ee30, ret_only)
void main_f_c6ee30() {}

// sub_c6ee40  (orig 0xc6ee40, ret_only)
void main_f_c6ee40() {}

// sub_c6ee60  (orig 0xc6ee60, ret_only)
void main_f_c6ee60() {}

// sub_c6ee70  (orig 0xc6ee70, ret_only)
void main_f_c6ee70() {}

// sub_c6ee80  (orig 0xc6ee80, ret_only)
void main_f_c6ee80() {}

// sub_c6f030  (orig 0xc6f030, ret_only)
void main_f_c6f030() {}

// sub_c6f080  (orig 0xc6f080, tailcall)
void main_f_c6f080() { main::sub_ce0(); }

// sub_c6f0f0  (orig 0xc6f0f0, ret_only)
void main_f_c6f0f0() {}

// sub_c6f100  (orig 0xc6f100, tailcall)
void main_f_c6f100() { main::sub_ce0(); }

// sub_c6f2c0  (orig 0xc6f2c0, ret_only)
void main_f_c6f2c0() {}

// sub_c6fca0  (orig 0xc6fca0, ret_only)
void main_f_c6fca0() {}

// sub_c6fed0  (orig 0xc6fed0, ret_only)
void main_f_c6fed0() {}

// sub_c70cb0  (orig 0xc70cb0, copy2)
void main_f_c70cb0(void* a0) { *(uint64_t*)((char*)(a0) + 1056) = *(uint64_t*)((char*)(a0) + 1048); }

// sub_c73a20  (orig 0xc73a20, straight)
void main_f_c73a20(void* a0) {
    *(uint8_t*)((char*)(a0) + 1626) = (uint8_t)(1);
}

// sub_c74080  (orig 0xc74080, tailcall)
void main_f_c74080() { main::sub_c73f50(); }

// sub_c75b40  (orig 0xc75b40, ret_only)
void main_f_c75b40() {}

// sub_c75b50  (orig 0xc75b50, tailcall)
void main_f_c75b50() { main::sub_ce0(); }

// sub_c75b60  (orig 0xc75b60, straight)
void main_f_c75b60(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 24) = *(uint64_t*)((char*)(a1) + 24);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1) + 16);
}

// sub_c79ed0  (orig 0xc79ed0, ret_only)
void main_f_c79ed0() {}

// sub_c7a030  (orig 0xc7a030, ret_only)
void main_f_c7a030() {}

// sub_c7be00  (orig 0xc7be00, tailcall)
void main_f_c7be00() { main::sub_c7b920(); }

// sub_c7bec0  (orig 0xc7bec0, compare)
bool main_f_c7bec0(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 388)) > (int64_t)(3); }

// sub_c7ca10  (orig 0xc7ca10, ret_only)
void main_f_c7ca10() {}

// sub_c7ca20  (orig 0xc7ca20, copy2)
void main_f_c7ca20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c7ca30  (orig 0xc7ca30, copy2)
void main_f_c7ca30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c7cb50  (orig 0xc7cb50, ret_only)
void main_f_c7cb50() {}

// sub_c7cd00  (orig 0xc7cd00, ret_only)
void main_f_c7cd00() {}

// sub_c7d690  (orig 0xc7d690, ret_only)
void main_f_c7d690() {}

// sub_c7d6a0  (orig 0xc7d6a0, copy2)
void main_f_c7d6a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c7d6b0  (orig 0xc7d6b0, copy2)
void main_f_c7d6b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c7d7d0  (orig 0xc7d7d0, ret_only)
void main_f_c7d7d0() {}

// sub_c7d980  (orig 0xc7d980, ret_only)
void main_f_c7d980() {}

// sub_c7e470  (orig 0xc7e470, ret_only)
void main_f_c7e470() {}

// sub_c7e710  (orig 0xc7e710, ret_only)
void main_f_c7e710() {}

// sub_c7e720  (orig 0xc7e720, copy2)
void main_f_c7e720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c7e730  (orig 0xc7e730, copy2)
void main_f_c7e730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c7ed30  (orig 0xc7ed30, ret_only)
void main_f_c7ed30() {}

// sub_c7ef80  (orig 0xc7ef80, copy2)
void main_f_c7ef80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c7ef90  (orig 0xc7ef90, copy2)
void main_f_c7ef90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c7f480  (orig 0xc7f480, ret_only)
void main_f_c7f480() {}

// sub_c80750  (orig 0xc80750, tailcall)
void main_f_c80750() { main::sub_c80510(); }

// sub_c836c0  (orig 0xc836c0, tailcall)
void main_f_c836c0() { main::sub_c69450(); }

// sub_c836d0  (orig 0xc836d0, tailcall)
void main_f_c836d0() { main::sub_13b1c90(); }

// sub_c836e0  (orig 0xc836e0, getter)
uint8_t main_f_c836e0(void* a0) { return *(uint8_t*)((char*)(a0) + 1224); }

// sub_c836f0  (orig 0xc836f0, mov_ret)
uint32_t main_f_c836f0() { return 0; }

// sub_c83700  (orig 0xc83700, ret_only)
void main_f_c83700() {}

// sub_c83710  (orig 0xc83710, ret_only)
void main_f_c83710() {}

// sub_c83720  (orig 0xc83720, ret_only)
void main_f_c83720() {}

// sub_c83750  (orig 0xc83750, tailcall)
void main_f_c83750() { main::sub_13b1c90(); }

// sub_c83760  (orig 0xc83760, tailcall)
void main_f_c83760() { main::sub_13b1c90(); }

// sub_c83930  (orig 0xc83930, ret_only)
void main_f_c83930() {}

// sub_c83960  (orig 0xc83960, tailcall)
void main_f_c83960() { main::sub_ce0(); }

// sub_c839b0  (orig 0xc839b0, ret_only)
void main_f_c839b0() {}

// sub_c839c0  (orig 0xc839c0, tailcall)
void main_f_c839c0() { main::sub_ce0(); }

// sub_c83d80  (orig 0xc83d80, tailcall)
void main_f_c83d80() { main::sub_ce0(); }

// sub_c83df0  (orig 0xc83df0, ret_only)
void main_f_c83df0() {}

// sub_c83e00  (orig 0xc83e00, tailcall)
void main_f_c83e00() { main::sub_ce0(); }

// sub_c84990  (orig 0xc84990, tailcall)
void main_f_c84990() { main::sub_978cf0(); }

// sub_c85b50  (orig 0xc85b50, tailcall)
void main_f_c85b50() { main::sub_96c590(); }

// sub_c85c00  (orig 0xc85c00, tailcall)
void main_f_c85c00() { main::sub_96c590(); }

// sub_c85c10  (orig 0xc85c10, tailcall)
void main_f_c85c10() { main::sub_96c590(); }

// sub_c86480  (orig 0xc86480, getter)
uint8_t main_f_c86480(void* a0) { return *(uint8_t*)((char*)(a0) + 320); }

// sub_c86490  (orig 0xc86490, straight)
void main_f_c86490(void* a0) {
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)(1);
}

// sub_c86620  (orig 0xc86620, ret_only)
void main_f_c86620() {}

// sub_c86630  (orig 0xc86630, copy2)
void main_f_c86630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c86640  (orig 0xc86640, copy2)
void main_f_c86640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c866c0  (orig 0xc866c0, ret_only)
void main_f_c866c0() {}

// sub_c86990  (orig 0xc86990, ret_only)
void main_f_c86990() {}

// sub_c86a20  (orig 0xc86a20, ret_only)
void main_f_c86a20() {}

// sub_c86a30  (orig 0xc86a30, copy2)
void main_f_c86a30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c86a40  (orig 0xc86a40, copy2)
void main_f_c86a40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c87440  (orig 0xc87440, getter)
uint8_t main_f_c87440(void* a0) { return *(uint8_t*)((char*)(a0) + 320); }

// sub_c87450  (orig 0xc87450, straight)
void main_f_c87450(void* a0) {
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)(1);
}

// sub_c875e0  (orig 0xc875e0, ret_only)
void main_f_c875e0() {}

// sub_c875f0  (orig 0xc875f0, copy2)
void main_f_c875f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c87600  (orig 0xc87600, copy2)
void main_f_c87600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c87650  (orig 0xc87650, ret_only)
void main_f_c87650() {}

// sub_c87690  (orig 0xc87690, ret_only)
void main_f_c87690() {}

// sub_c876a0  (orig 0xc876a0, copy2)
void main_f_c876a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c876b0  (orig 0xc876b0, copy2)
void main_f_c876b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c87e80  (orig 0xc87e80, getter)
uint8_t main_f_c87e80(void* a0) { return *(uint8_t*)((char*)(a0) + 320); }

// sub_c87e90  (orig 0xc87e90, straight)
void main_f_c87e90(void* a0) {
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)(1);
}

// sub_c87f70  (orig 0xc87f70, ret_only)
void main_f_c87f70() {}

// sub_c87f80  (orig 0xc87f80, copy2)
void main_f_c87f80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c87f90  (orig 0xc87f90, copy2)
void main_f_c87f90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c87fe0  (orig 0xc87fe0, ret_only)
void main_f_c87fe0() {}

// sub_c88020  (orig 0xc88020, ret_only)
void main_f_c88020() {}

// sub_c88030  (orig 0xc88030, copy2)
void main_f_c88030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c88040  (orig 0xc88040, copy2)
void main_f_c88040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c88810  (orig 0xc88810, getter)
uint8_t main_f_c88810(void* a0) { return *(uint8_t*)((char*)(a0) + 320); }

// sub_c88820  (orig 0xc88820, straight)
void main_f_c88820(void* a0) {
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)(1);
}

// sub_c889c0  (orig 0xc889c0, ret_only)
void main_f_c889c0() {}

// sub_c889d0  (orig 0xc889d0, copy2)
void main_f_c889d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c889e0  (orig 0xc889e0, copy2)
void main_f_c889e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c88a30  (orig 0xc88a30, ret_only)
void main_f_c88a30() {}

// sub_c88a60  (orig 0xc88a60, ret_only)
void main_f_c88a60() {}

// sub_c88a70  (orig 0xc88a70, ret_only)
void main_f_c88a70() {}

// sub_c88a80  (orig 0xc88a80, copy2)
void main_f_c88a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c88a90  (orig 0xc88a90, copy2)
void main_f_c88a90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

