/* subsdk0 -- 28 functions verified to match the original.
 *
 * These bodies were synthesised from the instruction stream by
 * tools/auto_match.py and confirmed by compiling them for
 * aarch64-none-elf and comparing against data/subsdk0.elf with
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

namespace subsdk0 { void sub_54020(); }
namespace subsdk0 { void libnvmm_camera(); }
namespace subsdk0 { void sub_273e00(); }
namespace subsdk0 { void sub_273c50(); }
extern uint32_t subsdk0_f_273a10();
namespace subsdk0 { void BlockMP3Dec_2(); }
namespace subsdk0 { void BlockAACEnc(); }
namespace subsdk0 { void BlockH264Dec(); }
namespace subsdk0 { void OMX_Nvidia_h264_decode_low_latency(); }
namespace subsdk0 { void BlockH264Dec_2(); }
namespace subsdk0 { void BlockVc1Dec(); }
namespace subsdk0 { void BlockMpeg2Dec(); }
namespace subsdk0 { void BlockAACDec(); }
namespace subsdk0 { void BlockJpgEnc(); }
namespace subsdk0 { void BlockWMADec(); }
namespace subsdk0 { void BlockMJpgDec(); }
namespace subsdk0 { void BlockSuperJpgDec(); }
namespace subsdk0 { void sub_2baa90(); }
namespace subsdk0 { void sub_31abc0_subsdk0_31abc0(); }
namespace subsdk0 { void sub_338590(); }
namespace subsdk0 { void sub_338a90_subsdk0_338a90(); }
namespace subsdk0 { void sub_353db0(); }
namespace subsdk0 { void sub_355620(); }
namespace subsdk0 { void sub_3557e0_subsdk0_3557e0(); }
namespace subsdk0 { void sub_355580(); }
namespace subsdk0 { void sub_356390(); }
namespace subsdk0 { void sub_3554b0(); }
namespace subsdk0 { void sub_356ef0(); }

// sub_54010  (orig 0x54010, tailcall)
void subsdk0_f_54010() { subsdk0::sub_54020(); }

// sub_258660  (orig 0x258660, tailcall)
void subsdk0_f_258660() { subsdk0::libnvmm_camera(); }

// sub_297280  (orig 0x297280, tailcall)
void subsdk0_f_297280() { subsdk0::sub_273e00(); }

// sub_297290  (orig 0x297290, tailcall)
void subsdk0_f_297290() { subsdk0::sub_273c50(); }

// sub_29af10  (orig 0x29af10, tailcall)
uint32_t subsdk0_f_29af10() { return subsdk0_f_273a10(); }

// sub_2a6fa0  (orig 0x2a6fa0, tailcall)
void subsdk0_f_2a6fa0() { subsdk0::BlockMP3Dec_2(); }

// sub_2a6fb0  (orig 0x2a6fb0, tailcall)
void subsdk0_f_2a6fb0() { subsdk0::BlockAACEnc(); }

// sub_2a6fc0  (orig 0x2a6fc0, tailcall)
void subsdk0_f_2a6fc0() { subsdk0::BlockH264Dec(); }

// sub_2a6fd0  (orig 0x2a6fd0, tailcall)
void subsdk0_f_2a6fd0() { subsdk0::OMX_Nvidia_h264_decode_low_latency(); }

// sub_2a6fe0  (orig 0x2a6fe0, tailcall)
void subsdk0_f_2a6fe0() { subsdk0::BlockH264Dec_2(); }

// sub_2a6ff0  (orig 0x2a6ff0, tailcall)
void subsdk0_f_2a6ff0() { subsdk0::BlockVc1Dec(); }

// sub_2a7000  (orig 0x2a7000, tailcall)
void subsdk0_f_2a7000() { subsdk0::BlockMpeg2Dec(); }

// sub_2a7010  (orig 0x2a7010, tailcall)
void subsdk0_f_2a7010() { subsdk0::BlockAACDec(); }

// sub_2a7020  (orig 0x2a7020, tailcall)
void subsdk0_f_2a7020() { subsdk0::BlockJpgEnc(); }

// sub_2a7030  (orig 0x2a7030, tailcall)
void subsdk0_f_2a7030() { subsdk0::BlockWMADec(); }

// sub_2a7040  (orig 0x2a7040, tailcall)
void subsdk0_f_2a7040() { subsdk0::BlockMJpgDec(); }

// sub_2a7050  (orig 0x2a7050, tailcall)
void subsdk0_f_2a7050() { subsdk0::BlockSuperJpgDec(); }

// sub_2baa70  (orig 0x2baa70, tailcall)
void subsdk0_f_2baa70() { subsdk0::sub_2baa90(); }

// sub_31cc70  (orig 0x31cc70, tailcall)
void subsdk0_f_31cc70() { subsdk0::sub_31abc0_subsdk0_31abc0(); }

// sub_338580  (orig 0x338580, tailcall)
void subsdk0_f_338580() { subsdk0::sub_338590(); }

// sub_338a80  (orig 0x338a80, tailcall)
void subsdk0_f_338a80() { subsdk0::sub_338a90_subsdk0_338a90(); }

// sub_348a80  (orig 0x348a80, tailcall)
void subsdk0_f_348a80() { subsdk0::sub_353db0(); }

// sub_348a90  (orig 0x348a90, tailcall)
void subsdk0_f_348a90() { subsdk0::sub_355620(); }

// sub_348aa0  (orig 0x348aa0, tailcall)
void subsdk0_f_348aa0() { subsdk0::sub_3557e0_subsdk0_3557e0(); }

// sub_348ad0  (orig 0x348ad0, tailcall)
void subsdk0_f_348ad0() { subsdk0::sub_355580(); }

// sub_348ae0  (orig 0x348ae0, tailcall)
void subsdk0_f_348ae0() { subsdk0::sub_356390(); }

// sub_348af0  (orig 0x348af0, tailcall)
void subsdk0_f_348af0() { subsdk0::sub_3554b0(); }

// sub_35bbc0  (orig 0x35bbc0, tailcall)
void subsdk0_f_35bbc0() { subsdk0::sub_356ef0(); }

