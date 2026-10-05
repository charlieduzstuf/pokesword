/* subsdk1 -- 58 functions verified to match the original.
 *
 * These bodies were synthesised from the instruction stream by
 * tools/auto_match.py and confirmed by compiling them for
 * aarch64-none-elf and comparing against data/subsdk1.elf with
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

namespace subsdk1 { void sub_9d0(); }
namespace subsdk1 { void sub_f10_subsdk1_f10(); }
namespace subsdk1 { void sub_1100_subsdk1_1100(); }
namespace subsdk1 { void sub_2f10(); }
namespace subsdk1 { void sub_e100_subsdk1_e100(); }
namespace subsdk1 { void sub_34d70(); }
namespace subsdk1 { void sub_392c0(); }
namespace subsdk1 { void sub_39400(); }
namespace subsdk1 { void sub_1c80f0(); }
namespace subsdk1 { void sub_1c61e0_subsdk1_1c61e0(); }
namespace subsdk1 { void sub_1c6b90(); }
namespace subsdk1 { void sub_1620d0(); }
namespace subsdk1 { void sub_1bb950(); }
namespace subsdk1 { void sub_264720(); }
namespace subsdk1 { void sub_29d280_subsdk1_29d280(); }
namespace subsdk1 { void sub_df80_subsdk1_df80(); }
namespace subsdk1 { void sub_dfa0(); }
namespace subsdk1 { void mem_Alloc(); }
namespace subsdk1 { void unsupported_node_type_in_DupNode(); }
namespace subsdk1 { void sub_3136f0(); }
namespace subsdk1 { void layout_qualifier_s_incompatible_with_s(); }
namespace subsdk1 { void component_4(); }
namespace subsdk1 { void ARB_enhanced_layouts_2(); }
namespace subsdk1 { void layout_qualifier_s_incompatible_with_s_3(); }
namespace subsdk1 { void NV_stereo_secondary_view_offset_d(); }
namespace subsdk1 { void sub_3774b0(); }
extern void subsdk1_f_4c0ce0();
extern void subsdk1_f_4c0cf0();
namespace subsdk1 { void sub_2b0_subsdk1_2b0(); }
namespace subsdk1 { void sub_2d0_subsdk1_2d0(); }
namespace subsdk1 { void sub_2c0_subsdk1_2c0(); }
namespace subsdk1 { void sub_4c4ab0(); }

// sub_1250  (orig 0x1250, tailcall)
void subsdk1_f_1250() { subsdk1::sub_9d0(); }

// sub_12b0  (orig 0x12b0, tailcall)
void subsdk1_f_12b0() { subsdk1::sub_f10_subsdk1_f10(); }

// sub_1380  (orig 0x1380, tailcall)
void subsdk1_f_1380() { subsdk1::sub_1100_subsdk1_1100(); }

// sub_3930  (orig 0x3930, tailcall)
void subsdk1_f_3930() { subsdk1::sub_2f10(); }

// sub_e0f0  (orig 0xe0f0, tailcall)
void subsdk1_f_e0f0() { subsdk1::sub_e100_subsdk1_e100(); }

// sub_13d30  (orig 0x13d30, tailcall)
void subsdk1_f_13d30() { subsdk1::sub_34d70(); }

// sub_343d0  (orig 0x343d0, tailcall)
void subsdk1_f_343d0() { subsdk1::sub_392c0(); }

// sub_34520  (orig 0x34520, tailcall)
void subsdk1_f_34520() { subsdk1::sub_39400(); }

// sub_1c85b0  (orig 0x1c85b0, tailcall)
void subsdk1_f_1c85b0() { subsdk1::sub_1c80f0(); }

// sub_1ca060  (orig 0x1ca060, tailcall)
void subsdk1_f_1ca060() { subsdk1::sub_1c61e0_subsdk1_1c61e0(); }

// sub_1ca070  (orig 0x1ca070, tailcall)
void subsdk1_f_1ca070() { subsdk1::sub_1c6b90(); }

// sub_1ca310  (orig 0x1ca310, tailcall)
void subsdk1_f_1ca310() { subsdk1::sub_1c61e0_subsdk1_1c61e0(); }

// sub_1ca320  (orig 0x1ca320, tailcall)
void subsdk1_f_1ca320() { subsdk1::sub_1c6b90(); }

// sub_21afe0  (orig 0x21afe0, tailcall)
void subsdk1_f_21afe0() { subsdk1::sub_1620d0(); }

// sub_223640  (orig 0x223640, tailcall)
void subsdk1_f_223640() { subsdk1::sub_1bb950(); }

// sub_29d210  (orig 0x29d210, tailcall)
void subsdk1_f_29d210() { subsdk1::sub_264720(); }

// sub_29d3c0  (orig 0x29d3c0, tailcall)
void subsdk1_f_29d3c0() { subsdk1::sub_29d280_subsdk1_29d280(); }

// sub_29d3d0  (orig 0x29d3d0, tailcall)
void subsdk1_f_29d3d0() { subsdk1::sub_29d280_subsdk1_29d280(); }

// sub_29d5d0  (orig 0x29d5d0, tailcall)
void subsdk1_f_29d5d0() { subsdk1::sub_df80_subsdk1_df80(); }

// sub_29d5e0  (orig 0x29d5e0, tailcall)
void subsdk1_f_29d5e0() { subsdk1::sub_dfa0(); }

// sub_2a5030  (orig 0x2a5030, tailcall)
void subsdk1_f_2a5030() { subsdk1::mem_Alloc(); }

// sub_2ac7f0  (orig 0x2ac7f0, tailcall)
void subsdk1_f_2ac7f0() { subsdk1::unsupported_node_type_in_DupNode(); }

// sub_2e1c50  (orig 0x2e1c50, tailcall)
void subsdk1_f_2e1c50() { subsdk1::sub_3136f0(); }

// sub_32b070  (orig 0x32b070, tailcall)
void subsdk1_f_32b070() { subsdk1::layout_qualifier_s_incompatible_with_s(); }

// sub_32b1d0  (orig 0x32b1d0, tailcall)
void subsdk1_f_32b1d0() { subsdk1::component_4(); }

// sub_32b1e0  (orig 0x32b1e0, tailcall)
void subsdk1_f_32b1e0() { subsdk1::ARB_enhanced_layouts_2(); }

// sub_32b1f0  (orig 0x32b1f0, tailcall)
void subsdk1_f_32b1f0() { subsdk1::layout_qualifier_s_incompatible_with_s_3(); }

// sub_32b2c0  (orig 0x32b2c0, tailcall)
void subsdk1_f_32b2c0() { subsdk1::NV_stereo_secondary_view_offset_d(); }

// sub_32b830  (orig 0x32b830, tailcall)
void subsdk1_f_32b830() { subsdk1::component_4(); }

// sub_32b880  (orig 0x32b880, tailcall)
void subsdk1_f_32b880() { subsdk1::layout_qualifier_s_incompatible_with_s_3(); }

// sub_32c260  (orig 0x32c260, tailcall)
void subsdk1_f_32c260() { subsdk1::component_4(); }

// sub_32c270  (orig 0x32c270, tailcall)
void subsdk1_f_32c270() { subsdk1::ARB_enhanced_layouts_2(); }

// sub_32c280  (orig 0x32c280, tailcall)
void subsdk1_f_32c280() { subsdk1::layout_qualifier_s_incompatible_with_s_3(); }

// sub_32ca40  (orig 0x32ca40, tailcall)
void subsdk1_f_32ca40() { subsdk1::layout_qualifier_s_incompatible_with_s(); }

// sub_32cb10  (orig 0x32cb10, tailcall)
void subsdk1_f_32cb10() { subsdk1::NV_stereo_secondary_view_offset_d(); }

// sub_32cbe0  (orig 0x32cbe0, tailcall)
void subsdk1_f_32cbe0() { subsdk1::component_4(); }

// sub_32cbf0  (orig 0x32cbf0, tailcall)
void subsdk1_f_32cbf0() { subsdk1::ARB_enhanced_layouts_2(); }

// sub_32cef0  (orig 0x32cef0, tailcall)
void subsdk1_f_32cef0() { subsdk1::layout_qualifier_s_incompatible_with_s(); }

// sub_32d0d0  (orig 0x32d0d0, tailcall)
void subsdk1_f_32d0d0() { subsdk1::NV_stereo_secondary_view_offset_d(); }

// sub_32d8c0  (orig 0x32d8c0, tailcall)
void subsdk1_f_32d8c0() { subsdk1::layout_qualifier_s_incompatible_with_s_3(); }

// sub_32da00  (orig 0x32da00, tailcall)
void subsdk1_f_32da00() { subsdk1::layout_qualifier_s_incompatible_with_s(); }

// sub_37d900  (orig 0x37d900, tailcall)
void subsdk1_f_37d900() { subsdk1::sub_3774b0(); }

// sub_4bfdf0  (orig 0x4bfdf0, tailcall)
void subsdk1_f_4bfdf0() { subsdk1_f_4c0ce0(); }

// sub_4bfe00  (orig 0x4bfe00, tailcall)
void subsdk1_f_4bfe00() { subsdk1_f_4c0cf0(); }

// sub_4c0cb0  (orig 0x4c0cb0, tailcall)
void subsdk1_f_4c0cb0() { subsdk1::sub_2b0_subsdk1_2b0(); }

// sub_4c0cc0  (orig 0x4c0cc0, tailcall)
void subsdk1_f_4c0cc0() { subsdk1::sub_2d0_subsdk1_2d0(); }

// sub_4c0cd0  (orig 0x4c0cd0, tailcall)
void subsdk1_f_4c0cd0() { subsdk1::sub_2c0_subsdk1_2c0(); }

// sub_4c0ce0  (orig 0x4c0ce0, tailcall)
void subsdk1_f_4c0ce0() { subsdk1::sub_2b0_subsdk1_2b0(); }

// sub_4c0cf0  (orig 0x4c0cf0, tailcall)
void subsdk1_f_4c0cf0() { subsdk1::sub_2c0_subsdk1_2c0(); }

// sub_4ccda0  (orig 0x4ccda0, tailcall)
void subsdk1_f_4ccda0() { subsdk1::sub_4c4ab0(); }

// sub_4cdee0  (orig 0x4cdee0, tailcall)
void subsdk1_f_4cdee0() { subsdk1::sub_2c0_subsdk1_2c0(); }

// sub_4cdf10  (orig 0x4cdf10, tailcall)
void subsdk1_f_4cdf10() { subsdk1::sub_2c0_subsdk1_2c0(); }

// sub_4cdf50  (orig 0x4cdf50, tailcall)
void subsdk1_f_4cdf50() { subsdk1::sub_2c0_subsdk1_2c0(); }

// sub_4ce0c0  (orig 0x4ce0c0, tailcall)
void subsdk1_f_4ce0c0() { subsdk1::sub_2c0_subsdk1_2c0(); }

// sub_4ce0f0  (orig 0x4ce0f0, tailcall)
void subsdk1_f_4ce0f0() { subsdk1::sub_2c0_subsdk1_2c0(); }

// sub_4ce140  (orig 0x4ce140, tailcall)
void subsdk1_f_4ce140() { subsdk1::sub_2c0_subsdk1_2c0(); }

// sub_4ce180  (orig 0x4ce180, tailcall)
void subsdk1_f_4ce180() { subsdk1::sub_2c0_subsdk1_2c0(); }

// sub_4ce1c0  (orig 0x4ce1c0, tailcall)
void subsdk1_f_4ce1c0() { subsdk1::sub_2c0_subsdk1_2c0(); }

