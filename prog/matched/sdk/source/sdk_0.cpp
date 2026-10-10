/* sdk -- 72 functions verified to match the original.
 *
 * These bodies were synthesised from the instruction stream by
 * tools/auto_match.py and confirmed by compiling them for
 * aarch64-none-elf and comparing against data/sdk.elf with
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

namespace sdk { void sub_1d5f0(); }
namespace sdk { void sub_29450(); }
namespace sdk { void sub_14d680(); }
namespace sdk { void sub_373ef0(); }
namespace sdk { void sub_374190(); }
namespace sdk { void sub_374450(); }
namespace sdk { void sub_3746d0(); }
namespace sdk { void sub_374970(); }
namespace sdk { void sub_374d50(); }
namespace sdk { void sub_38c630(); }
namespace sdk { void sub_39adb0(); }
namespace sdk { void sub_39b080(); }
namespace sdk { void sub_3c42b0(); }
namespace sdk { void sub_3c4290(); }
namespace sdk { void sub_3c42d0(); }
namespace sdk { void sub_3c42f0(); }
namespace sdk { void sub_3c3e10(); }
namespace sdk { void sub_3c3f40(); }
extern uint32_t sdk_f_3c4790();
namespace sdk { void sub_3c4050(); }
namespace sdk { void sub_3c4090(); }
namespace sdk { void sub_3c40d0_sdk_3c40d0(); }
namespace sdk { void sub_3c40f0(); }
extern uint32_t sdk_f_3c47a0();
extern uint32_t sdk_f_3c47c0();
namespace sdk { void nvn_no_vsync_capability_2(); }
namespace sdk { void sub_3c8ff0(); }
namespace sdk { void sub_3f18e0(); }
namespace sdk { void sub_40b3d0(); }
namespace sdk { void sub_42c7f0(); }
namespace sdk { void sub_42e420(); }
namespace sdk { void sub_42e570(); }
namespace sdk { void sub_40db90(); }
namespace sdk { void sub_413ce0(); }
namespace sdk { void sub_4166f0(); }
namespace sdk { void sub_4167e0(); }
namespace sdk { void sub_416a80(); }
namespace sdk { void sub_4314c0(); }
extern uint32_t sdk_f_49f340();
namespace sdk { void sub_45f310(); }
namespace sdk { void sub_45f7d8(); }
namespace sdk { void sub_45fca0(); }
namespace sdk { void sub_460168(); }
namespace sdk { void sub_460630(); }
namespace sdk { void sub_460af8(); }
namespace sdk { void sub_460fc0(); }
namespace sdk { void sub_461468(); }
namespace sdk { void sub_461910(); }
namespace sdk { void sub_463048(); }
namespace sdk { void sub_463568(); }
namespace sdk { void sub_463a88(); }
namespace sdk { void sub_463fa8(); }
namespace sdk { void sub_4644c8(); }
namespace sdk { void sub_4649e8(); }
namespace sdk { void sub_464f08(); }
namespace sdk { void sub_465408(); }
namespace sdk { void sub_465908(); }
namespace sdk { void sub_49f258(); }
namespace sdk { void sub_49f270_sdk_49f270(); }
namespace sdk { void sub_49f358(); }
namespace sdk { void sub_49f3b0(); }
namespace sdk { void sub_4b5a60(); }
namespace sdk { void sub_4ff0d8(); }
namespace sdk { void sub_5019f0(); }

// sub_1ab80  (orig 0x1ab80, tailcall)
void sdk_f_1ab80() { sdk::sub_1d5f0(); }

// sub_2c590  (orig 0x2c590, tailcall)
void sdk_f_2c590() { sdk::sub_29450(); }

// sub_14d670  (orig 0x14d670, tailcall)
void sdk_f_14d670() { sdk::sub_14d680(); }

// sub_2a6fb0  (orig 0x2a6fb0, tailcall)
uint64_t sdk_f_2a6fb0() { return MISSING_TAIL_DESTINATION(); }

// sub_374420  (orig 0x374420, tailcall)
void sdk_f_374420() { sdk::sub_373ef0(); }

// sub_374430  (orig 0x374430, tailcall)
void sdk_f_374430() { sdk::sub_374190(); }

// sub_374940  (orig 0x374940, tailcall)
void sdk_f_374940() { sdk::sub_374450(); }

// sub_374950  (orig 0x374950, tailcall)
void sdk_f_374950() { sdk::sub_3746d0(); }

// sub_3750f0  (orig 0x3750f0, tailcall)
void sdk_f_3750f0() { sdk::sub_374970(); }

// sub_375100  (orig 0x375100, tailcall)
void sdk_f_375100() { sdk::sub_374d50(); }

// sub_38c620  (orig 0x38c620, tailcall)
void sdk_f_38c620() { sdk::sub_38c630(); }

// sub_38c940  (orig 0x38c940, tailcall)
void sdk_f_38c940() { sdk::sub_38c630(); }

// sub_39ada0  (orig 0x39ada0, tailcall)
void sdk_f_39ada0() { sdk::sub_39adb0(); }

// sub_39aea0  (orig 0x39aea0, tailcall)
void sdk_f_39aea0() { sdk::sub_39adb0(); }

// sub_39aeb0  (orig 0x39aeb0, tailcall)
void sdk_f_39aeb0() { sdk::sub_39adb0(); }

// sub_39b070  (orig 0x39b070, tailcall)
void sdk_f_39b070() { sdk::sub_39b080(); }

// sub_39b1b0  (orig 0x39b1b0, tailcall)
void sdk_f_39b1b0() { sdk::sub_39b080(); }

// sub_39b1c0  (orig 0x39b1c0, tailcall)
void sdk_f_39b1c0() { sdk::sub_39b080(); }

// sub_3bc4a0  (orig 0x3bc4a0, tailcall)
void sdk_f_3bc4a0() { sdk::sub_3c42b0(); }

// sub_3bc4b0  (orig 0x3bc4b0, tailcall)
void sdk_f_3bc4b0() { sdk::sub_3c4290(); }

// sub_3bc4c0  (orig 0x3bc4c0, tailcall)
void sdk_f_3bc4c0() { sdk::sub_3c42d0(); }

// sub_3bc4d0  (orig 0x3bc4d0, tailcall)
void sdk_f_3bc4d0() { sdk::sub_3c42f0(); }

// sub_3bc520  (orig 0x3bc520, tailcall)
void sdk_f_3bc520() { sdk::sub_3c3e10(); }

// sub_3bc590  (orig 0x3bc590, tailcall)
void sdk_f_3bc590() { sdk::sub_3c3f40(); }

// sub_3bc670  (orig 0x3bc670, tailcall)
uint32_t sdk_f_3bc670() { return sdk_f_3c4790(); }

// sub_3bc690  (orig 0x3bc690, tailcall)
void sdk_f_3bc690() { sdk::sub_3c4050(); }

// sub_3bc6a0  (orig 0x3bc6a0, tailcall)
void sdk_f_3bc6a0() { sdk::sub_3c4090(); }

// sub_3bc6b0  (orig 0x3bc6b0, tailcall)
void sdk_f_3bc6b0() { sdk::sub_3c40d0_sdk_3c40d0(); }

// sub_3bc6c0  (orig 0x3bc6c0, tailcall)
void sdk_f_3bc6c0() { sdk::sub_3c40f0(); }

// sub_3bc6d0  (orig 0x3bc6d0, tailcall)
uint32_t sdk_f_3bc6d0() { return sdk_f_3c47a0(); }

// sub_3bc6e0  (orig 0x3bc6e0, tailcall)
uint32_t sdk_f_3bc6e0() { return sdk_f_3c47c0(); }

// sub_3c4780  (orig 0x3c4780, tailcall)
void sdk_f_3c4780() { sdk::nvn_no_vsync_capability_2(); }

// sub_3c5170  (orig 0x3c5170, tailcall)
void sdk_f_3c5170() { sdk::sub_3c8ff0(); }

// sub_3f18d0  (orig 0x3f18d0, tailcall)
void sdk_f_3f18d0() { sdk::sub_3f18e0(); }

// sub_40b570  (orig 0x40b570, tailcall)
void sdk_f_40b570() { sdk::sub_40b3d0(); }

// sub_40bb50  (orig 0x40bb50, tailcall)
void sdk_f_40bb50() { sdk::sub_42c7f0(); }

// sub_40bb60  (orig 0x40bb60, tailcall)
void sdk_f_40bb60() { sdk::sub_42e420(); }

// sub_40bb70  (orig 0x40bb70, tailcall)
void sdk_f_40bb70() { sdk::sub_42e420(); }

// sub_40bb80  (orig 0x40bb80, tailcall)
void sdk_f_40bb80() { sdk::sub_42e570(); }

// sub_40da00  (orig 0x40da00, tailcall)
void sdk_f_40da00() { sdk::sub_40db90(); }

// sub_414bf0  (orig 0x414bf0, tailcall)
void sdk_f_414bf0() { sdk::sub_413ce0(); }

// sub_4167c0  (orig 0x4167c0, tailcall)
void sdk_f_4167c0() { sdk::sub_4166f0(); }

// sub_4167d0  (orig 0x4167d0, tailcall)
void sdk_f_4167d0() { sdk::sub_4167e0(); }

// sub_416b70  (orig 0x416b70, tailcall)
void sdk_f_416b70() { sdk::sub_416a80(); }

// sub_431a20  (orig 0x431a20, tailcall)
void sdk_f_431a20() { sdk::sub_4314c0(); }

// sub_4520c8  (orig 0x4520c8, tailcall)
uint32_t sdk_f_4520c8() { return sdk_f_49f340(); }

// sub_45f308  (orig 0x45f308, tailcall)
void sdk_f_45f308() { sdk::sub_45f310(); }

// sub_45f7d0  (orig 0x45f7d0, tailcall)
void sdk_f_45f7d0() { sdk::sub_45f7d8(); }

// sub_45fc98  (orig 0x45fc98, tailcall)
void sdk_f_45fc98() { sdk::sub_45fca0(); }

// sub_460160  (orig 0x460160, tailcall)
void sdk_f_460160() { sdk::sub_460168(); }

// sub_460628  (orig 0x460628, tailcall)
void sdk_f_460628() { sdk::sub_460630(); }

// sub_460af0  (orig 0x460af0, tailcall)
void sdk_f_460af0() { sdk::sub_460af8(); }

// sub_460fb8  (orig 0x460fb8, tailcall)
void sdk_f_460fb8() { sdk::sub_460fc0(); }

// sub_461460  (orig 0x461460, tailcall)
void sdk_f_461460() { sdk::sub_461468(); }

// sub_461908  (orig 0x461908, tailcall)
void sdk_f_461908() { sdk::sub_461910(); }

// sub_463040  (orig 0x463040, tailcall)
void sdk_f_463040() { sdk::sub_463048(); }

// sub_463560  (orig 0x463560, tailcall)
void sdk_f_463560() { sdk::sub_463568(); }

// sub_463a80  (orig 0x463a80, tailcall)
void sdk_f_463a80() { sdk::sub_463a88(); }

// sub_463fa0  (orig 0x463fa0, tailcall)
void sdk_f_463fa0() { sdk::sub_463fa8(); }

// sub_4644c0  (orig 0x4644c0, tailcall)
void sdk_f_4644c0() { sdk::sub_4644c8(); }

// sub_4649e0  (orig 0x4649e0, tailcall)
void sdk_f_4649e0() { sdk::sub_4649e8(); }

// sub_464f00  (orig 0x464f00, tailcall)
void sdk_f_464f00() { sdk::sub_464f08(); }

// sub_465400  (orig 0x465400, tailcall)
void sdk_f_465400() { sdk::sub_465408(); }

// sub_465900  (orig 0x465900, tailcall)
void sdk_f_465900() { sdk::sub_465908(); }

// sub_49e7c0  (orig 0x49e7c0, tailcall)
void sdk_f_49e7c0() { sdk::sub_49f258(); }

// sub_49e7f8  (orig 0x49e7f8, tailcall)
void sdk_f_49e7f8() { sdk::sub_49f258(); }

// sub_49e9c0  (orig 0x49e9c0, tailcall)
void sdk_f_49e9c0() { sdk::sub_49f270_sdk_49f270(); }

// sub_49ea18  (orig 0x49ea18, tailcall)
void sdk_f_49ea18() { sdk::sub_49f358(); }

// sub_49ea90  (orig 0x49ea90, tailcall)
void sdk_f_49ea90() { sdk::sub_49f3b0(); }

// sub_4b7568  (orig 0x4b7568, tailcall)
void sdk_f_4b7568() { sdk::sub_4b5a60(); }

// sub_4ff150  (orig 0x4ff150, tailcall)
void sdk_f_4ff150() { sdk::sub_4ff0d8(); }

// sub_501af0  (orig 0x501af0, tailcall)
void sdk_f_501af0() { sdk::sub_5019f0(); }

