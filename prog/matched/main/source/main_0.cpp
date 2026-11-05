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


extern void main_f_210();
namespace main { void sub_7a10(); }
namespace main { void sub_84f0(); }
namespace main { void sub_9070(); }
namespace main { void sub_a510(); }
namespace main { void sub_ba20(); }
namespace main { void sub_ce0(); }
namespace main { void sub_1315b0(); }
namespace main { void sub_12fb10(); }
namespace main { void sub_12f6e0(); }
namespace main { void sub_1314a0(); }
namespace main { void sub_11ebf0(); }
namespace main { void sub_130150(); }
namespace main { void sub_12fdb0(); }
namespace main { void sub_12c4e0(); }
namespace main { void sub_12cbf0(); }
namespace main { void sub_12cfa0(); }
namespace main { void sub_11e410(); }
namespace main { void sub_11c9b0(); }
namespace main { void sub_122a00(); }
namespace main { void sub_122260(); }
namespace main { void sub_11a9e0(); }
namespace main { void sub_124cd0(); }
namespace main { void sub_128b10(); }
namespace main { void sub_128370(); }
namespace main { void sub_1262b0(); }
namespace main { void sub_1284c0(); }
namespace main { void sub_127ca0(); }
namespace main { void sub_18b160(); }
namespace main { void sub_18aff0(); }
namespace main { void sub_187b80(); }
namespace main { void sub_1876f0(); }
namespace main { void sub_187e30(); }
namespace main { void sub_188d20(); }
namespace main { void sub_189e80(); }
namespace main { void sub_185c60(); }
namespace main { void sub_186650(); }
namespace main { void sub_186e30(); }
namespace main { void sub_164820(); }
namespace main { void sub_162060(); }
namespace main { void sub_1652e0(); }
namespace main { void sub_169a50(); }
namespace main { void sub_16b370(); }
namespace main { void sub_152bf0(); }
namespace main { void sub_15b0f0(); }
namespace main { void sub_17e200(); }
namespace main { void sub_17fa10(); }
namespace main { void sub_1719f0(); }
namespace main { void sub_17dcc0(); }
namespace main { void sub_17f4a0(); }
namespace main { uint64_t sub_16ff0(uintptr_t); }
namespace main { uint64_t sub_117e0(uintptr_t); }
namespace main { uint64_t sub_253e0(uintptr_t); }
namespace main { uint64_t sub_2a400(uintptr_t); }
namespace main { uint64_t sub_2a5f0(uintptr_t); }
namespace main { uint64_t sub_2a950(uintptr_t); }
namespace main { uint64_t sub_2ab50(uintptr_t); }
namespace main { uint64_t sub_2b120(uintptr_t); }
namespace main { uint64_t sub_2b290(uintptr_t); }
namespace main { uint64_t sub_2b5f0(uintptr_t); }
namespace main { uint64_t BpBroadPhaseMBP_4(uintptr_t); }
namespace main { uint64_t sub_3aa90(uintptr_t); }
namespace main { uint64_t sub_3b900(uintptr_t); }
namespace main { uint64_t sub_3b970(uintptr_t); }
namespace main { uint64_t sub_43570(uintptr_t); }
namespace main { uint64_t sub_44680(uintptr_t); }
namespace main { uint64_t sub_44830(uintptr_t); }
namespace main { uint64_t sub_44950(uintptr_t); }
namespace main { uint64_t NonTrackedAlloc_43(uintptr_t); }
namespace main { uint64_t sub_54b20(uintptr_t); }
namespace main { uint64_t sub_55020(uintptr_t); }
namespace main { uint64_t sub_553b0(uintptr_t); }
namespace main { uint64_t sub_558e0(uintptr_t); }
namespace main { uint64_t sub_55c00(uintptr_t); }
namespace main { uint64_t sub_55ff0(uintptr_t); }
namespace main { uint64_t sub_56a90(uintptr_t); }
namespace main { uint64_t NonTrackedAlloc_49(uintptr_t); }
namespace main { void sub_61f80(); }
namespace main { void sub_5c2d0(); }
namespace main { void sub_5d140(); }
namespace main { void sub_69aa0(); }
namespace main { void sub_6ec70(); }
namespace main { void sub_6fa60(); }
namespace main { void sub_6fe50(); }
namespace main { uint64_t sub_79f40(uintptr_t); }
namespace main { uint64_t PtParticleSystemSimCpu(uintptr_t); }
namespace main { uint64_t sub_9f2a0(uintptr_t); }
namespace main { uint64_t sub_a9670(uintptr_t); }
namespace main { void sub_b35c0(); }
namespace main { uint64_t sub_2ff3c0(uintptr_t); }
namespace main { uint64_t ScScene_9(uintptr_t); }
namespace main { uint64_t sub_2ddef0(uintptr_t); }
namespace main { uint64_t sub_2ddf10(uintptr_t); }
namespace main { uint64_t sub_2ddf30(uintptr_t); }
namespace main { uint64_t sub_2ddf50(uintptr_t); }
namespace main { uint64_t sub_2ba9e0(uintptr_t); }
namespace main { uint64_t sub_2baa00(uintptr_t); }
namespace main { void sub_e1dc0(); }
namespace main { uint64_t sub_e1610(uintptr_t); }
namespace main { uint64_t sub_1077c0(uintptr_t); }
namespace main { uint64_t sub_e0cc0(uintptr_t); }
namespace main { uint64_t sub_e0fa0(uintptr_t); }
namespace main { uint64_t sub_2b2630(uintptr_t); }
namespace main { uint64_t ScClothFabricCore(uintptr_t); }
namespace main { uint64_t ScClothFabricCore_2(uintptr_t); }
namespace main { uint64_t sub_2b3560(uintptr_t); }
namespace main { uint64_t sub_2b37c0(uintptr_t); }
namespace main { uint64_t sub_2b3870(uintptr_t); }
namespace main { uint64_t sub_2b3710(uintptr_t); }
namespace main { uint64_t sub_2b3920(uintptr_t); }
namespace main { uint64_t sub_2b39d0(uintptr_t); }
namespace main { uint64_t sub_2b3a80(uintptr_t); }
namespace main { uint64_t ScbParticleSystem_3(uintptr_t); }
namespace main { uint64_t sub_2a9b80(uintptr_t); }
namespace main { uint64_t sub_2a9c80(uintptr_t); }
namespace main { uint64_t sub_2a97c0(uintptr_t); }
namespace main { uint64_t sub_2b07d0(uintptr_t); }
namespace main { uint64_t sub_2ae5d0(uintptr_t); }
namespace main { uint64_t sub_d90c0(uintptr_t); }
namespace main { uint64_t sub_d5ed0(uintptr_t); }
namespace main { uint64_t sub_2df880(uintptr_t); }
namespace main { uint64_t sub_2df8d0(uintptr_t); }
namespace main { uint64_t ScbScene_4(uintptr_t); }
namespace main { uint64_t sub_29a470(uintptr_t); }
namespace main { uint64_t sub_2f8990(uintptr_t); }
namespace main { uint64_t sub_104d70(uintptr_t); }
namespace main { uint64_t sub_140290(uintptr_t); }
namespace main { uint64_t sub_1408f0(uintptr_t); }
namespace main { uint64_t sub_141240(uintptr_t); }
namespace main { uint64_t sub_141cb0(uintptr_t); }
namespace main { void GuMeshFactory(); }
namespace main { void GuMeshFactory_2(); }
namespace main { uint64_t sub_19e2f0(uintptr_t); }
namespace main { uint64_t GuConvexMesh(uintptr_t); }
namespace main { uint64_t sub_19ff40(uintptr_t); }
namespace main { uint64_t sub_1a0cd0(uintptr_t); }
namespace main { uint64_t sub_1fd670(uintptr_t); }
namespace main { uint64_t sub_1fd830(uintptr_t); }
namespace main { uint64_t sub_2009e0(uintptr_t); }
namespace main { uint64_t sub_200ba0(uintptr_t); }
namespace main { uint64_t sub_203f30(uintptr_t); }
namespace main { uint64_t sub_2040f0(uintptr_t); }
namespace main { uint64_t sub_207560(uintptr_t); }
namespace main { uint64_t sub_207720(uintptr_t); }
namespace main { uint64_t sub_20ab40(uintptr_t); }
namespace main { uint64_t sub_20ad00(uintptr_t); }
namespace main { uint64_t sub_20c960(uintptr_t); }
namespace main { uint64_t sub_20f8e0(uintptr_t); }
namespace main { uint64_t sub_20faa0(uintptr_t); }
namespace main { uint64_t sub_29ee80(uintptr_t); }
namespace main { uint64_t NonTrackedAlloc_137(uintptr_t); }
namespace main { uint64_t sub_2a5080(uintptr_t); }
namespace main { uint64_t sub_2a5560(uintptr_t); }
namespace main { uint64_t NonTrackedAlloc_144(uintptr_t); }
namespace main { uint64_t CmBitMap(uintptr_t); }
namespace main { uint64_t sub_2bc760(uintptr_t); }
extern void main_f_2d9550();
namespace main { void sub_2c43e0(); }
extern void main_f_2ba210();
namespace main { uint64_t sub_1e8e0(uintptr_t); }
namespace main { uint64_t NonTrackedAlloc(uintptr_t); }
namespace main { uint64_t sub_1db60(uintptr_t); }
namespace main { uint64_t sub_2eba70(uintptr_t); }
namespace main { uint64_t sub_2e5380(uintptr_t); }
namespace main { uint64_t sub_2e2f50(uintptr_t); }
namespace main { uint64_t sub_2e2d40(uintptr_t); }
namespace main { uint64_t sub_2e2c40(uintptr_t); }
namespace main { uint64_t sub_2e22f0(uintptr_t); }
namespace main { uint64_t sub_2e2a70(uintptr_t); }
namespace main { uint64_t sub_2e21d0(uintptr_t); }
namespace main { uint64_t sub_2ea820(uintptr_t); }
namespace main { uint64_t sub_2ea8e0(uintptr_t); }
namespace main { uint64_t sub_2ea9e0(uintptr_t); }
namespace main { uint64_t ScScene_5(uintptr_t); }
namespace main { void sub_2d9880(); }
namespace main { void sub_308fa0(); }
namespace main { uint64_t sub_3097b0(uintptr_t); }
namespace main { void sub_37e350(); }
namespace main { void sub_308750(); }
namespace main { uint64_t sub_308750(uintptr_t); }
namespace main { void sub_30a520(); }
namespace main { void sub_3191e0(); }
namespace main { uint64_t sub_3191e0(uintptr_t); }
namespace main { uint64_t sub_3101f0(uintptr_t); }
namespace main { uint64_t sub_313160(uintptr_t); }
namespace main { uint64_t sub_31b340(uintptr_t); }
namespace main { uint64_t sub_316ee0(uintptr_t); }
namespace main { void sub_308eb0(); }
namespace main { void sub_3338a0(); }
namespace main { void sub_368b00(); }
namespace main { void sub_3c8a50(); }
extern void main_f_33cfe0();
namespace main { void sub_33d330(); }
extern void main_f_33ebe0();
namespace main { void sub_33d8a0(); }
namespace main { uint64_t sub_3791b0(uintptr_t); }
namespace main { uint64_t sub_379400(uintptr_t); }
namespace main { void sub_3463b0(); }
namespace main { uint64_t sub_3b3970(uintptr_t); }
namespace main { void sub_3518d0(); }
namespace main { uint64_t sub_3518d0(uintptr_t); }
namespace main { uint64_t sub_3549e0(uintptr_t); }
namespace main { uint64_t sub_3c57e0(uintptr_t); }
namespace main { uint64_t sub_3c5a70(uintptr_t); }
namespace main { void sub_384140(); }
namespace main { void sub_3862d0(); }
namespace main { uint64_t sub_35d580(uintptr_t); }
namespace main { uint64_t sub_3627c0(uintptr_t); }
namespace main { uint64_t sub_360ba0(uintptr_t); }
namespace main { uint64_t sub_304740(uintptr_t); }
namespace main { uint64_t sub_3636d0(uintptr_t); }
namespace main { void sub_37cdf0(); }
namespace main { uint64_t sub_34fc50(uintptr_t); }
namespace main { void sub_32ee10(); }
namespace main { uint64_t sub_37e0e0(uintptr_t); }
namespace main { uint64_t sub_381d40(uintptr_t); }
namespace main { void sub_3a44a0(); }
namespace main { uint64_t sub_38b400(uintptr_t); }
namespace main { uint64_t sub_38c900(uintptr_t); }
namespace main { uint64_t sub_38d590(uintptr_t); }
namespace main { uint64_t sub_38dcd0(uintptr_t); }
namespace main { void sub_363530(); }
namespace main { uint64_t sub_3a7f50(uintptr_t); }
namespace main { uint64_t sub_3a7f80(uintptr_t); }
namespace main { void sub_37e0e0(); }
namespace main { uint64_t sub_34d6a0(uintptr_t); }
namespace main { void sub_349ab0(); }
namespace main { uint64_t sub_3c5b10(uintptr_t); }
namespace main { void sub_34e6e0(); }
namespace main { uint64_t sub_3ca420(uintptr_t); }
namespace main { uint64_t sub_3ca2c0(uintptr_t); }
namespace main { uint64_t sub_369110(uintptr_t); }
namespace main { uint64_t sub_395a20(uintptr_t); }
namespace main { uint64_t sub_34fdc0(uintptr_t); }
namespace main { uint64_t sub_34fc00(uintptr_t); }
namespace main { uint64_t sub_3ce490(uintptr_t); }
namespace main { uint64_t sub_3ce3e0(uintptr_t); }
namespace main { void sub_3cf7b0(); }
namespace main { uint64_t sub_3d17f0(uintptr_t); }
namespace main { uint64_t sub_3d4310(uintptr_t); }
namespace main { uint64_t sub_3d6cf0(uintptr_t); }
namespace main { void sub_3cc3a0(); }
namespace main { uint64_t sub_3cd0c0(uintptr_t); }
namespace main { uint64_t sub_3dfb80(uintptr_t); }
namespace main { uint64_t sub_3e03b0(uintptr_t); }
namespace main { uint64_t sub_38ddf0(uintptr_t); }
namespace main { uint64_t sub_3e1e50(uintptr_t); }
namespace main { uint64_t sub_3e25d0(uintptr_t); }
namespace main { void sub_3c2c10(); }
namespace main { void sub_3c2c30(); }
namespace main { uint64_t sub_3c2c10(uintptr_t); }
namespace main { uint64_t sub_3c2c30(uintptr_t); }
namespace main { uint64_t sub_3f4910(uintptr_t); }
namespace main { uint64_t sub_3e5be0(uintptr_t); }
namespace main { uint64_t sub_3fc760(uintptr_t); }
namespace main { uint64_t sub_3fcc60(uintptr_t); }
namespace main { uint64_t sub_3fcf30(uintptr_t); }
namespace main { uint64_t sub_3fd7a0(uintptr_t); }
namespace main { void sub_3fa180(); }
namespace main { void sub_3fa1d0(); }
namespace main { void sub_3fb3e0(); }
namespace main { uint64_t sub_3fb3e0(uintptr_t); }
namespace main { uint64_t sub_400590(uintptr_t); }
namespace main { uint64_t sub_400620(uintptr_t); }
namespace main { void sub_3fc0a0(); }
namespace main { uint64_t sub_3fc0a0(uintptr_t); }
namespace main { uint64_t sub_401d20(uintptr_t); }
namespace main { uint64_t sub_401e70(uintptr_t); }
namespace main { void sub_4071b0(); }
namespace main { void GPUPostEffect_cpp_d_PPFX_ERROR_18(); }
namespace main { uint64_t sub_4534a0(uintptr_t); }
namespace main { void GPUInterfaceSurface_2(); }
namespace main { void sub_446440(); }
namespace main { void sub_446680(); }
namespace main { uint64_t sub_44e630(uintptr_t); }
namespace main { uint64_t sub_44e750(uintptr_t); }
namespace main { uint64_t sub_44e870(uintptr_t); }
namespace main { uint64_t sub_44e960(uintptr_t); }
namespace main { uint64_t SiCore_String_17(uintptr_t); }
namespace main { void SiCore_String_23(); }
namespace main { uint64_t sub_4c4700(uintptr_t); }
namespace main { uint64_t SiCore_Array_84(uintptr_t); }
namespace main { void sub_4dc9e0(); }
namespace main { uint64_t SiCore_String_46(uintptr_t); }
namespace main { uint64_t SiCore_Array_89(uintptr_t); }
extern void main_f_4dd6e0();
namespace main { void SiCore_Array_92(); }
namespace main { uint64_t SiCore_Array_91(uintptr_t); }
namespace main { void sub_4de030(); }
namespace main { void SiCore_Array_95(); }
namespace main { uint64_t SiCore_Array_93(uintptr_t); }
namespace main { void SiCore_String_47(); }
namespace main { void sub_4e0860(); }
namespace main { void SiCore_Array_100(); }
namespace main { uint64_t SiCore_Array_98(uintptr_t); }
namespace main { uint64_t SiCore_Array_103(uintptr_t); }
namespace main { uint64_t SiCore_String_69(uintptr_t); }
namespace main { uint64_t SiCore_String_72(uintptr_t); }
namespace main { void sub_534430(); }
namespace main { uint64_t SiCore_String_73(uintptr_t); }
namespace main { uint64_t sub_500890(uintptr_t); }
namespace main { void sub_8c0(); }
namespace main { void sub_502810(); }
namespace main { uint64_t sub_502820(uintptr_t); }
namespace main { uint64_t sub_5082e0(uintptr_t); }
namespace main { uint64_t SiCore_String_80(uintptr_t); }
namespace main { uint64_t sub_5472d0(uintptr_t); }
namespace main { uint64_t sub_5474b0(uintptr_t); }
namespace main { uint64_t sub_547760(uintptr_t); }
namespace main { uint64_t sub_547810(uintptr_t); }
namespace main { uint64_t sub_5478f0(uintptr_t); }
namespace main { uint64_t sub_547930(uintptr_t); }
namespace main { uint64_t sub_547a40(uintptr_t); }
namespace main { uint64_t sub_547b60(uintptr_t); }
namespace main { uint64_t sub_547ca0(uintptr_t); }
namespace main { uint64_t sub_547df0(uintptr_t); }
namespace main { uint64_t sub_547f50(uintptr_t); }
namespace main { uint64_t sub_5480c0(uintptr_t); }
namespace main { uint64_t sub_548230(uintptr_t); }
namespace main { uint64_t sub_548380(uintptr_t); }
namespace main { uint64_t sub_5484f0(uintptr_t); }
namespace main { uint64_t sub_55ba30(uintptr_t); }
namespace main { uint64_t sub_544010(uintptr_t); }
namespace main { uint64_t sub_544290(uintptr_t); }
namespace main { uint64_t sub_544540(uintptr_t); }
namespace main { uint64_t sub_544610(uintptr_t); }
namespace main { uint64_t sub_544b00(uintptr_t); }
namespace main { uint64_t sub_545910(uintptr_t); }
namespace main { uint64_t sub_548640(uintptr_t); }
namespace main { uint64_t sub_54cab0(uintptr_t); }
extern uint32_t main_f_50b0c0();
extern void main_f_50c2d0();
extern void main_f_50c2e0();
extern void main_f_50c2f0();
extern void main_f_50c300();
namespace render { uint64_t SiGfx_NX_MemoryHeap_Impl(uintptr_t); }
namespace main { uint64_t SiCore_String_92(uintptr_t); }
namespace main { void sub_535330(); }
namespace main { uint64_t SiCore_String_106(uintptr_t); }
namespace main { uint64_t sub_59a960(uintptr_t); }
namespace main { uint64_t sub_59aec0(uintptr_t); }
namespace main { void sub_59b360(); }
namespace main { uint64_t sub_59b360(uintptr_t); }
namespace main { uint64_t sub_5a8370(uintptr_t); }
namespace main { uint64_t sub_5a90c0(uintptr_t); }
namespace main { uint64_t sub_5b0a20(uintptr_t); }
namespace main { uint64_t sub_5b1140(uintptr_t); }
namespace main { uint64_t sub_5b1680(uintptr_t); }
namespace main { void sub_5b2530(); }
namespace main { uint64_t sub_5b2530(uintptr_t); }
namespace main { void sub_5b2f90(); }
namespace main { uint64_t sub_5b6b20(uintptr_t); }
namespace main { uint64_t sub_5b6eb0(uintptr_t); }
namespace main { void sub_5bf500(); }
namespace main { uint64_t sub_5bf500(uintptr_t); }
namespace main { void sub_5c1b90(); }
namespace main { uint64_t sub_5cb430(uintptr_t); }
namespace main { uint64_t sub_5cb760(uintptr_t); }
namespace main { void sub_5cbcf0(); }
namespace main { void sub_5cc540(); }
namespace main { uint64_t sub_5d1550(uintptr_t); }
namespace main { void sub_5d1550(); }
namespace main { uint64_t sub_5d2980(uintptr_t); }
namespace main { uint64_t sub_5d4350(uintptr_t); }
namespace main { void sub_5eca40(); }
namespace main { void sub_5d5df0(); }
namespace main { uint64_t sub_5cf890(uintptr_t); }
namespace main { uint64_t sub_5cf8a0(uintptr_t); }
namespace main { uint64_t sub_5cf8b0(uintptr_t); }
namespace main { void sub_5d8db0(); }
namespace main { uint64_t sub_5db590(uintptr_t); }
namespace main { void sub_619640(); }
namespace main { void sub_59b970(); }
namespace main { void sub_5dd1b0(); }
namespace main { uint64_t sub_5dd1b0(uintptr_t); }
namespace main { void sub_5e9700(); }
namespace main { void sub_5e0470(); }
namespace main { uint64_t sub_5e1dc0(uintptr_t); }
namespace main { uint64_t sub_5e2ee0(uintptr_t); }
namespace main { uint64_t sub_5e30f0(uintptr_t); }
namespace save { void save_d(); }
namespace main { void sub_5e7150(); }
namespace main { void sub_5e7300(); }
namespace main { uint64_t sub_5e7150(uintptr_t); }
namespace main { void sub_5e8b30(); }
namespace main { uint64_t sub_5e8b30(uintptr_t); }
namespace main { uint64_t sub_5e8c30(uintptr_t); }
namespace main { void sub_5e9220(); }
namespace main { uint64_t sub_5ed5e0(uintptr_t); }
namespace main { void sub_5eb880(); }
namespace main { uint64_t sub_5f5570(uintptr_t); }
namespace main { uint64_t sub_5f5660(uintptr_t); }
namespace main { uint64_t sub_5f5780(uintptr_t); }
namespace main { uint64_t sub_5efcd0(uintptr_t); }
namespace main { uint64_t sub_5f1fe0(uintptr_t); }
namespace main { void sub_5f1fe0(); }
namespace main { uint64_t sub_5f3280(uintptr_t); }
namespace main { uint64_t sub_5f2e40(uintptr_t); }
namespace main { void sub_5f2e40(); }
namespace main { uint64_t sub_5f3e90(uintptr_t); }
namespace main { uint64_t sub_5f4030(uintptr_t); }
namespace main { void sub_1787c60(); }
namespace main { void sub_1787bf0(); }
extern void main_f_1787c10();
namespace main { uint64_t sub_5f7dd0(uintptr_t); }
namespace main { void sub_5f7fd0(); }
namespace main { void sub_5f9c50(); }
namespace main { void sub_5f9d50(); }
namespace main { void sub_5fa8e0(); }
namespace main { void sub_5fabd0(); }
namespace main { void sub_5fbe30(); }
namespace main { void sub_5fc3c0(); }
namespace main { uint64_t sub_5fc3c0(uintptr_t); }
namespace main { void sub_5fd380(); }
namespace main { void sub_5fdfe0(); }
namespace main { uint64_t sub_5fdfe0(uintptr_t); }
namespace main { void sub_5fe110(); }
namespace main { uint64_t sub_5fef00(uintptr_t); }
namespace main { void sub_5fef00(); }
namespace main { void sub_5ffbb0(); }
namespace main { uint64_t sub_5ff9d0(uintptr_t); }
namespace main { uint64_t sub_600390(uintptr_t); }
namespace main { void sub_601520(); }
namespace main { void sub_601f10(); }
namespace main { uint64_t sub_601f10(uintptr_t); }
namespace main { void sub_603500(); }
namespace main { uint64_t sub_603500(uintptr_t); }
namespace main { uint64_t sub_604830(uintptr_t); }
namespace main { void sub_603810(); }
namespace main { void sub_60c170(); }
namespace main { uint64_t sub_60c170(uintptr_t); }
namespace main { uint64_t sub_60f390(uintptr_t); }
namespace main { void sub_60e430(); }
namespace main { void sub_60e5a0(); }
namespace main { uint64_t sub_60e430(uintptr_t); }
namespace main { uint64_t sub_60e6d0(uintptr_t); }
namespace main { uint64_t sub_60eb80(uintptr_t); }
namespace main { void sub_60eb80(); }
namespace main { uint64_t sub_610d10(uintptr_t); }
namespace main { void sub_610d10(); }
namespace main { void sub_613240(); }
namespace main { uint64_t sub_613240(uintptr_t); }
namespace main { void sub_615d80(); }
namespace main { uint64_t sub_615d80(uintptr_t); }
namespace main { uint64_t sub_617590(uintptr_t); }
namespace main { void sub_617590(); }
namespace main { uint64_t sub_618b20(uintptr_t); }
namespace main { uint64_t sub_612ef0(uintptr_t); }
namespace main { void sub_61cbc0(); }
namespace main { uint64_t sub_61cbc0(uintptr_t); }
namespace main { uint64_t sub_60f060(uintptr_t); }
namespace main { void sub_61e180(); }
namespace main { uint64_t sub_61e180(uintptr_t); }
namespace main { uint64_t sub_61e6e0(uintptr_t); }
namespace main { void sub_61ee80(); }
namespace main { uint64_t sub_61ee80(uintptr_t); }
namespace main { uint64_t sub_61efd0(uintptr_t); }
namespace main { void sub_61e5b0(); }
namespace main { uint64_t sub_61fff0(uintptr_t); }
namespace main { uint64_t sub_622ce0(uintptr_t); }
namespace main { void sub_622ce0(); }
namespace main { uint64_t sub_623a00(uintptr_t); }
namespace main { void sub_623bc0(); }
namespace main { void sub_6299c0(); }
namespace main { uint64_t sub_6299c0(uintptr_t); }
namespace main { uint64_t sub_6342b0(uintptr_t); }
namespace main { void sub_634540(); }
namespace main { uint64_t sub_634540(uintptr_t); }
namespace main { uint64_t sub_63c770(uintptr_t); }
namespace main { void sub_63db70(); }
namespace main { uint64_t sub_63db70(uintptr_t); }
namespace main { void sub_646590(); }
namespace main { uint64_t sub_646590(uintptr_t); }
namespace main { void sub_64b110(); }
namespace main { uint64_t sub_64b110(uintptr_t); }
namespace main { void sub_64c9b0(); }
namespace main { uint64_t sub_64c660(uintptr_t); }
namespace main { void sub_64d250(); }
namespace main { void sub_64d460(); }
namespace main { uint64_t sub_64d250(uintptr_t); }
namespace main { void sub_699410(); }
namespace main { uint64_t sub_64ed00(uintptr_t); }
namespace main { void sub_64ed00(); }
namespace main { uint64_t sub_64f1c0(uintptr_t); }
namespace main { void sub_64f430(); }
namespace main { void sub_652c10(); }
namespace main { uint64_t sub_652c10(uintptr_t); }
namespace main { void sub_655440(); }
namespace main { uint64_t sub_655440(uintptr_t); }
namespace main { void sub_6574b0(); }
namespace main { uint64_t sub_6574b0(uintptr_t); }
namespace main { void sub_6588e0(); }
namespace main { uint64_t sub_6588e0(uintptr_t); }
namespace main { uint64_t sub_659470(uintptr_t); }
namespace main { uint64_t sub_659050(uintptr_t); }
namespace main { uint64_t sub_659be0(uintptr_t); }
namespace main { void sub_659be0(); }
namespace main { uint64_t sub_65a680(uintptr_t); }
namespace main { void sub_65b030(); }
namespace main { void An_unknown_error_has_triggered_the_default_error_handler(); }
namespace main { uint64_t sub_5cf8d0(uintptr_t); }
namespace main { uint64_t sub_65f220(uintptr_t); }
namespace main { uint64_t sub_6606c0(uintptr_t); }
namespace main { void sub_6606c0(); }
namespace main { uint64_t sub_660a50(uintptr_t); }
namespace main { uint64_t height_3(uintptr_t); }
namespace main { uint64_t sub_668020(uintptr_t); }
namespace main { void sub_668020(); }
namespace main { void sub_600c30(); }
namespace main { void sub_66a900(); }
namespace main { uint64_t sub_600c30(uintptr_t); }
namespace main { uint64_t sub_670ad0(uintptr_t); }
namespace main { void sub_672350(); }
namespace main { uint64_t sub_672350(uintptr_t); }
namespace main { uint64_t sub_6726c0(uintptr_t); }
namespace main { void sub_6726c0(); }
namespace main { uint64_t sub_672c60(uintptr_t); }
namespace main { void sub_3044e0(); }
namespace main { void sub_3044f0(); }
extern void main_f_305c10();
namespace main { void sub_32efa0(); }
namespace main { void sub_32f750(); }
extern void main_f_67abb0();
namespace main { uint64_t sub_67cce0(uintptr_t); }
namespace main { void sub_67cce0(); }
namespace main { void sub_67d770(); }
namespace main { void sub_67f550(); }
namespace main { uint64_t sub_67f550(uintptr_t); }
namespace main { uint64_t sub_67f710(uintptr_t); }
namespace main { void sub_6813f0(); }
namespace main { uint64_t sub_6825e0(uintptr_t); }
namespace main { void sub_6825e0(); }
namespace main { uint64_t sub_682f10(uintptr_t); }
namespace main { uint64_t sub_683fc0(uintptr_t); }
namespace main { void sub_683fc0(); }
namespace main { void sub_6860b0(); }
namespace main { uint64_t sub_6860b0(uintptr_t); }
namespace main { uint64_t sub_686b00(uintptr_t); }
namespace main { uint64_t sub_687470(uintptr_t); }
namespace main { void sub_687470(); }
namespace main { uint64_t sub_688e10(uintptr_t); }
namespace main { void sub_68c590(); }
namespace main { uint64_t sub_68c590(uintptr_t); }
namespace main { uint64_t sub_691560(uintptr_t); }
namespace main { uint64_t sub_68f030(uintptr_t); }
namespace main { uint64_t sub_68db00(uintptr_t); }
namespace main { void sub_68e850(); }
namespace main { uint64_t sub_68e850(uintptr_t); }
namespace main { void sub_690130(); }
namespace main { void sub_68ffb0(); }
namespace main { void sub_690e40(); }
namespace main { uint64_t sub_68ffb0(uintptr_t); }
namespace main { uint64_t sub_690260(uintptr_t); }
namespace main { uint64_t sub_694d90(uintptr_t); }
namespace main { uint64_t sub_695020(uintptr_t); }
namespace main { uint64_t sub_695150(uintptr_t); }
namespace main { uint64_t sub_6953f0(uintptr_t); }
namespace main { uint64_t sub_695de0(uintptr_t); }
namespace main { uint64_t sub_694170(uintptr_t); }
namespace main { void sub_694170(); }
namespace main { void sub_699080(); }
namespace main { uint64_t sub_699080(uintptr_t); }
namespace main { uint64_t sub_699b40(uintptr_t); }
namespace main { void sub_699b40(); }
namespace main { uint64_t sub_699f60(uintptr_t); }
namespace main { uint64_t sub_69a540(uintptr_t); }
namespace main { uint64_t sub_69b100(uintptr_t); }
namespace main { void sub_69d4b0(); }
namespace main { uint64_t sub_69d4b0(uintptr_t); }
namespace main { void sub_6a0380(); }
namespace main { void sub_6a1ab0(); }
namespace main { void sub_6a3820(); }
namespace main { void sub_15b6e10(); }
namespace main { void sub_15b87a0(); }
namespace main { void sub_6af2b0(); }
namespace main { void sub_6b1000(); }
namespace main { uint64_t sub_6b67d0(uintptr_t); }
namespace main { void sub_6b67d0(); }
namespace main { uint64_t sub_6b7b00(uintptr_t); }
namespace main { uint64_t sub_6b7cd0(uintptr_t); }
namespace main { uint64_t sub_6b7f20(uintptr_t); }
namespace main { void sub_6c2bb0(); }
namespace main { void sub_6c35c0(); }
namespace main { void sub_6c5a70(); }
namespace main { uint64_t sub_6c5a70(uintptr_t); }
namespace main { void sub_6ce780(); }
namespace main { uint64_t sub_6ce5e0(uintptr_t); }
namespace main { uint64_t sub_6d73a0(uintptr_t); }
namespace main { void sub_6d73a0(); }
namespace main { uint64_t sub_6d8140(uintptr_t); }
namespace main { uint64_t sub_6d8270(uintptr_t); }
namespace main { void sub_6fed50(); }
namespace main { void sub_6febe0(); }
namespace gflib3 { uint64_t gflnet3_text_format(uintptr_t); }
namespace gflib3 { uint64_t gflnet3_text_format_4(uintptr_t); }
namespace gflib3 { void gflnet3_message_lite_5(); }
extern void main_f_70d9f0();
extern void main_f_70da00();
namespace main { void sub_722f60(); }
namespace main { void sub_723780(); }
namespace main { void sub_723970(); }
extern void main_f_717010();
namespace gflib3 { void gflnet3_descriptor_17(); }
namespace main { uint64_t sub_760190(uintptr_t); }
namespace main { uint64_t sub_779480(uintptr_t); }
namespace main { uint64_t sub_771ff0(uintptr_t); }
namespace main { uint64_t sub_774690(uintptr_t); }
namespace main { uint64_t sub_762bb0(uintptr_t); }
namespace main { void sub_762bb0(); }
namespace main { uint64_t sub_771120(uintptr_t); }
namespace main { uint64_t sub_771250(uintptr_t); }
namespace main { uint64_t sub_770cf0(uintptr_t); }
namespace main { uint64_t sub_778c10(uintptr_t); }
namespace main { uint64_t sub_772950(uintptr_t); }
namespace main { uint64_t sub_775390(uintptr_t); }
namespace main { uint64_t sub_77c010(uintptr_t); }
namespace main { uint64_t sub_7762b0(uintptr_t); }
namespace main { uint64_t sub_77ce80(uintptr_t); }
namespace main { uint64_t sub_771ea0(uintptr_t); }
namespace main { uint64_t sub_774e10(uintptr_t); }
namespace main { uint64_t sub_774910(uintptr_t); }
namespace main { uint64_t sub_7723b0(uintptr_t); }
namespace main { uint64_t sub_771280(uintptr_t); }
namespace main { uint64_t sub_777d50(uintptr_t); }
namespace main { uint64_t sub_773210(uintptr_t); }
namespace main { uint64_t sub_773630(uintptr_t); }
namespace main { uint64_t sub_777840(uintptr_t); }
namespace main { uint64_t sub_774550(uintptr_t); }
namespace main { uint64_t sub_7747d0(uintptr_t); }
namespace main { uint64_t sub_7726d0(uintptr_t); }
namespace main { uint64_t sub_774190(uintptr_t); }
namespace main { uint64_t sub_775090(uintptr_t); }
namespace main { uint64_t sub_775210(uintptr_t); }
namespace main { uint64_t sub_7754d0(uintptr_t); }
namespace main { uint64_t sub_775620(uintptr_t); }
namespace main { uint64_t sub_77c160(uintptr_t); }
namespace main { uint64_t sub_776530(uintptr_t); }
namespace main { uint64_t sub_77d120(uintptr_t); }
namespace main { uint64_t sub_777330(uintptr_t); }
namespace main { uint64_t sub_777480(uintptr_t); }
namespace main { uint64_t sub_7775c0(uintptr_t); }
namespace main { uint64_t sub_7724f0(uintptr_t); }
namespace main { uint64_t sub_7779a0(uintptr_t); }
namespace main { uint64_t sub_777ae0(uintptr_t); }
namespace main { uint64_t sub_77e7a0(uintptr_t); }
namespace main { uint64_t sub_772270(uintptr_t); }
namespace main { uint64_t sub_778d60(uintptr_t); }
namespace main { uint64_t sub_77eb90(uintptr_t); }
namespace main { uint64_t sub_77edf0(uintptr_t); }
namespace main { uint64_t sub_77f050(uintptr_t); }
namespace main { uint64_t sub_77f4b0(uintptr_t); }
namespace main { uint64_t sub_77f5f0(uintptr_t); }
namespace main { uint64_t sub_7742d0(uintptr_t); }
namespace main { uint64_t sub_774410(uintptr_t); }
namespace main { void sub_7803c0(); }
namespace main { uint64_t sub_770fe0(uintptr_t); }
namespace main { uint64_t sub_771130(uintptr_t); }
namespace main { void sub_78f620(); }
namespace main { uint64_t sub_78f620(uintptr_t); }
namespace main { void sub_e7c250(); }
namespace main { void sub_790010(); }
namespace main { uint64_t sub_e7c250(uintptr_t); }
namespace main { void sub_790e60(); }
namespace main { uint64_t sub_6744e0(uintptr_t); }
namespace main { uint64_t sub_674680(uintptr_t); }
namespace main { uint64_t sub_674690(uintptr_t); }
namespace main { uint64_t sub_6746f0(uintptr_t); }
namespace main { void sub_799420(); }
namespace main { uint64_t sub_799420(uintptr_t); }
namespace main { void sub_799b20(); }
namespace main { void sub_799dd0(); }
namespace main { uint64_t sub_799b20(uintptr_t); }
namespace main { void sub_7a3850(); }
namespace main { void sub_7a3af0(); }
namespace main { uint64_t sub_7a3850(uintptr_t); }
namespace main { void sub_e7c4c0(); }
namespace main { void sub_7a8880(); }
namespace main { uint64_t sub_e7c4c0(uintptr_t); }
namespace main { void sub_e7feb0(); }
namespace main { void sub_7a8db0(); }
namespace main { uint64_t sub_e7feb0(uintptr_t); }
namespace main { void sub_7aaf50(); }
namespace main { void sub_7aba20(); }
namespace main { void sub_7ac2f0(); }
namespace main { void sub_7aefa0(); }
namespace main { void sub_7afb60(); }
namespace main { void sub_7b09e0(); }
namespace main { void sub_7b11c0(); }
namespace main { void sub_7b1ec0(); }
namespace main { void sub_7b3a60(); }
namespace main { void sub_7b4810(); }
namespace main { void sub_7b5c60(); }
namespace main { void sub_7b6440(); }
namespace main { void sub_7b76d0(); }
namespace main { void sub_7b8090(); }
namespace main { void sub_7b9240(); }
namespace main { void sub_7b9ba0(); }
namespace main { void sub_7bac50(); }
namespace main { void sub_7bc520(); }
namespace main { void sub_7c0260(); }
extern void main_f_782ea0();
namespace main { uint64_t sub_7c3160(uintptr_t); }
namespace main { void sub_7c3160(); }
namespace main { uint64_t sub_7f9c40(uintptr_t); }
namespace main { uint64_t sub_7fa9d0(uintptr_t); }
namespace main { uint64_t sub_7f9e00(uintptr_t); }
namespace main { uint64_t sub_7f9de0(uintptr_t); }
namespace main { uint64_t sub_7cdf00(uintptr_t); }
namespace main { void sub_7cdf00(); }
namespace main { uint64_t sub_7cf960(uintptr_t); }
namespace main { void sub_7cf960(); }
namespace main { void sub_7d1790(); }
namespace main { void sub_7eb3d0(); }
namespace main { uint64_t sub_768f00(uintptr_t); }
namespace main { uint64_t sub_768fa0(uintptr_t); }
namespace main { void sub_7870a0(); }
namespace main { void sub_787110(); }
namespace main { uint64_t sub_ead0f0(uintptr_t); }
namespace main { uint64_t sub_8022b0(uintptr_t); }
namespace main { uint64_t sub_8016e0(uintptr_t); }
namespace main { uint64_t sub_800d20(uintptr_t); }
namespace main { void sub_7ff8f0(); }
namespace main { void sub_7cc1b0(); }
namespace main { uint64_t sub_818a60(uintptr_t); }
namespace main { uint64_t sub_818b90(uintptr_t); }
namespace main { uint64_t sub_864ed0(uintptr_t); }
namespace main { uint64_t sub_864ff0(uintptr_t); }
namespace main { uint64_t sub_865090(uintptr_t); }
namespace main { uint64_t sub_865120(uintptr_t); }
namespace main { uint64_t sub_87d760(uintptr_t); }
namespace main { uint64_t sub_87d7f0(uintptr_t); }
namespace main { uint64_t sub_7e9830(uintptr_t); }
namespace main { uint64_t sub_7e97b0(uintptr_t); }
namespace main { uint64_t sub_7e97f0(uintptr_t); }
namespace main { uint64_t sub_7e9860(uintptr_t); }
namespace main { uint64_t sub_7e9910(uintptr_t); }
namespace main { uint64_t sub_7cc000(uintptr_t); }
namespace main { uint64_t sub_7cc030(uintptr_t); }
namespace main { uint64_t sub_7cbf80(uintptr_t); }
namespace main { uint64_t sub_7cb320(uintptr_t); }
namespace main { uint64_t sub_7e9a30(uintptr_t); }
namespace main { uint64_t sub_82cd00(uintptr_t); }
namespace main { uint64_t sub_7fe3b0(uintptr_t); }
namespace main { uint64_t sub_7c5910(uintptr_t); }
namespace main { uint64_t sub_7cce80(uintptr_t); }
namespace main { uint64_t sub_7cb3d0(uintptr_t); }
namespace main { uint64_t sub_7cb3b0(uintptr_t); }
namespace main { uint64_t sub_7cd200(uintptr_t); }
namespace main { uint64_t sub_7cab30(uintptr_t); }
namespace main { uint64_t sub_80d8f0(uintptr_t); }
namespace main { uint64_t sub_80d950(uintptr_t); }
namespace main { uint64_t sub_80d980(uintptr_t); }
namespace main { uint64_t sub_80daf0(uintptr_t); }
namespace main { void sub_7eb260(); }
namespace main { void sub_780d70(); }
namespace main { void sub_7812a0(); }
namespace main { void sub_7e8d00(); }
namespace main { void sub_85b740(); }
namespace main { void sub_81b550(); }
namespace main { void sub_81b6e0(); }
namespace main { void sub_81b320(); }
namespace main { void sub_81b860(); }
namespace main { void sub_86f720(); }
namespace main { void sub_87a210(); }
namespace main { void sub_87a7b0(); }
namespace main { void sub_81b230(); }
namespace main { void sub_88cec0(); }
namespace main { void sub_88df70(); }
namespace main { uint64_t sub_891bf0(uintptr_t); }
namespace main { void sub_891bf0(); }
namespace main { uint64_t sub_8935e0(uintptr_t); }
namespace main { void sub_8935e0(); }
namespace main { uint64_t sub_8a7000(uintptr_t); }
namespace main { uint64_t sub_896c70(uintptr_t); }
namespace main { uint64_t sub_897a50(uintptr_t); }
namespace main { uint64_t sub_897dc0(uintptr_t); }
namespace main { uint64_t sub_898c10(uintptr_t); }
namespace main { void sub_8992b0(); }
namespace main { uint64_t sub_8992b0(uintptr_t); }
namespace main { uint64_t sub_8994b0(uintptr_t); }
namespace main { uint64_t sub_899820(uintptr_t); }
namespace main { uint64_t sub_8999a0(uintptr_t); }
namespace main { uint64_t sub_8996b0(uintptr_t); }
namespace battle { void battle_battle_command_2(); }
namespace battle { void battle_btl_data_holder_2(); }
namespace battle { void battle_poke_party_2(); }
namespace battle { void battle_btl_cmd_data_holder_2(); }
namespace main { uint64_t sub_8a7400(uintptr_t); }
namespace main { uint64_t sub_8ae890(uintptr_t); }
namespace main { uint64_t sub_8aea20(uintptr_t); }
namespace main { uint64_t sub_8b0650(uintptr_t); }
namespace main { uint64_t sub_8b09a0(uintptr_t); }
namespace main { uint64_t sub_8b0c90(uintptr_t); }
namespace main { void sub_8b1980(); }
namespace main { uint64_t sub_8b1980(uintptr_t); }
namespace main { uint64_t sub_8b1b80(uintptr_t); }
namespace main { uint64_t sub_8b1ef0(uintptr_t); }
namespace main { uint64_t sub_8b2070(uintptr_t); }
namespace main { uint64_t sub_8b1d80(uintptr_t); }
namespace battle { void battle_watch_party_2(); }
namespace battle { void battle_watch_command_2(); }
namespace battle { void battle_watch_clienttimer_2(); }
namespace battle { void battle_watch_target_party_2(); }
namespace battle { void battle_btlwatch_data_holder_2(); }
namespace battle { void battle_watch_cmd_2(); }
namespace main { void sub_8bb9b0(); }
namespace battle { void battle_btlwatch_async_data_holder_2(); }
namespace battle { void battle_watch_body_2(); }
namespace main { uint64_t sub_8bfab0(uintptr_t); }
namespace main { uint64_t sub_8c2840(uintptr_t); }
namespace main { void sub_8c2840(); }
namespace main { void sub_66b040(); }
namespace main { uint64_t sub_66b040(uintptr_t); }
namespace main { uint64_t sub_8c6600(uintptr_t); }
namespace main { void sub_8d0070(); }
namespace main { void sub_8d23b0(); }
namespace main { uint64_t sub_8d23b0(uintptr_t); }
namespace main { void sub_8d2bf0(); }
namespace main { void sub_8d4f30(); }
namespace main { void sub_8d84b0(); }
namespace main { void sub_8d3f10(); }
namespace main { uint64_t sub_8d84b0(uintptr_t); }
namespace main { void sub_8da520(); }
namespace main { void sub_8dbc20(); }
namespace main { void sub_8dd2f0(); }
namespace main { uint64_t sub_8dfe20(uintptr_t); }
namespace main { void sub_8dfe20(); }
namespace main { uint64_t sub_8e1510(uintptr_t); }
namespace main { uint64_t sub_8e1850(uintptr_t); }
namespace main { uint64_t sub_8e1c00(uintptr_t); }
namespace main { uint64_t sub_8e2010(uintptr_t); }
namespace main { void sub_8e2010(); }
namespace main { void sub_8e3410(); }
namespace main { void sub_8e4e90(); }
namespace main { uint64_t sub_8e4e90(uintptr_t); }
namespace main { void sub_eb81a0(); }
namespace main { uint64_t sub_eb81a0(uintptr_t); }
namespace main { void sub_8e5870(); }
namespace main { void sub_8e8120(); }
namespace main { void sub_8e82a0(); }
namespace main { uint64_t sub_8e8120(uintptr_t); }
namespace main { void sub_8e8e50(); }
namespace main { uint64_t sub_8f4820(uintptr_t); }
namespace main { void sub_8efb20(); }
namespace main { void sub_8efc70(); }
namespace main { uint64_t sub_8efb20(uintptr_t); }
namespace main { void sub_8f44e0(); }
namespace main { void sub_8f49d0(); }
namespace main { void sub_8fac70(); }
namespace main { void sub_8fb040(); }
namespace main { uint64_t sub_8fac70(uintptr_t); }
namespace main { void sub_8f0b90(); }
namespace main { void sub_900ec0(); }
namespace main { void Set_State_NetBattleOff(); }

// sub_1e0  (orig 0x1e0, tailcall)
void main_f_1e0() { main_f_210(); }

// sub_7c00  (orig 0x7c00, tailcall)
void main_f_7c00() { main::sub_7a10(); }

// sub_8670  (orig 0x8670, tailcall)
void main_f_8670() { main::sub_84f0(); }

// sub_9170  (orig 0x9170, tailcall)
void main_f_9170() { main::sub_9070(); }

// sub_a7c0  (orig 0xa7c0, tailcall)
void main_f_a7c0() { main::sub_a510(); }

// sub_bd40  (orig 0xbd40, tailcall)
void main_f_bd40() { main::sub_ba20(); }

// sub_c560  (orig 0xc560, tailcall)
void main_f_c560() { main::sub_ce0(); }

// sub_10b70  (orig 0x10b70, tailcall)
void main_f_10b70() { main::sub_1315b0(); }

// sub_10b80  (orig 0x10b80, tailcall)
void main_f_10b80() { main::sub_12fb10(); }

// sub_10b90  (orig 0x10b90, tailcall)
void main_f_10b90() { main::sub_12f6e0(); }

// sub_10ba0  (orig 0x10ba0, tailcall)
void main_f_10ba0() { main::sub_1314a0(); }

// sub_10bb0  (orig 0x10bb0, tailcall)
void main_f_10bb0() { main::sub_11ebf0(); }

// sub_10bc0  (orig 0x10bc0, tailcall)
void main_f_10bc0() { main::sub_130150(); }

// sub_10bd0  (orig 0x10bd0, tailcall)
void main_f_10bd0() { main::sub_12fdb0(); }

// sub_10be0  (orig 0x10be0, tailcall)
void main_f_10be0() { main::sub_12c4e0(); }

// sub_10bf0  (orig 0x10bf0, tailcall)
void main_f_10bf0() { main::sub_12cbf0(); }

// sub_10c00  (orig 0x10c00, tailcall)
void main_f_10c00() { main::sub_12cfa0(); }

// sub_10c10  (orig 0x10c10, tailcall)
void main_f_10c10() { main::sub_11e410(); }

// sub_10c20  (orig 0x10c20, tailcall)
void main_f_10c20() { main::sub_11c9b0(); }

// sub_10c30  (orig 0x10c30, tailcall)
void main_f_10c30() { main::sub_11ebf0(); }

// sub_10c40  (orig 0x10c40, tailcall)
void main_f_10c40() { main::sub_122a00(); }

// sub_10c50  (orig 0x10c50, tailcall)
void main_f_10c50() { main::sub_122260(); }

// sub_10c60  (orig 0x10c60, tailcall)
void main_f_10c60() { main::sub_11a9e0(); }

// sub_10c70  (orig 0x10c70, tailcall)
void main_f_10c70() { main::sub_124cd0(); }

// sub_10c80  (orig 0x10c80, tailcall)
void main_f_10c80() { main::sub_128b10(); }

// sub_10c90  (orig 0x10c90, tailcall)
void main_f_10c90() { main::sub_128370(); }

// sub_10ca0  (orig 0x10ca0, tailcall)
void main_f_10ca0() { main::sub_1262b0(); }

// sub_10cb0  (orig 0x10cb0, tailcall)
void main_f_10cb0() { main::sub_1284c0(); }

// sub_10cc0  (orig 0x10cc0, tailcall)
void main_f_10cc0() { main::sub_127ca0(); }

// sub_10cd0  (orig 0x10cd0, tailcall)
void main_f_10cd0() { main::sub_18b160(); }

// sub_10ce0  (orig 0x10ce0, tailcall)
void main_f_10ce0() { main::sub_18aff0(); }

// sub_10cf0  (orig 0x10cf0, tailcall)
void main_f_10cf0() { main::sub_187b80(); }

// sub_10d00  (orig 0x10d00, tailcall)
void main_f_10d00() { main::sub_1876f0(); }

// sub_10d10  (orig 0x10d10, tailcall)
void main_f_10d10() { main::sub_187e30(); }

// sub_10d20  (orig 0x10d20, tailcall)
void main_f_10d20() { main::sub_188d20(); }

// sub_10d30  (orig 0x10d30, tailcall)
void main_f_10d30() { main::sub_189e80(); }

// sub_10d40  (orig 0x10d40, tailcall)
void main_f_10d40() { main::sub_185c60(); }

// sub_10d50  (orig 0x10d50, tailcall)
void main_f_10d50() { main::sub_186650(); }

// sub_10d60  (orig 0x10d60, tailcall)
void main_f_10d60() { main::sub_186e30(); }

// sub_10d70  (orig 0x10d70, tailcall)
void main_f_10d70() { main::sub_164820(); }

// sub_10d80  (orig 0x10d80, tailcall)
void main_f_10d80() { main::sub_162060(); }

// sub_10d90  (orig 0x10d90, tailcall)
void main_f_10d90() { main::sub_1652e0(); }

// sub_10da0  (orig 0x10da0, tailcall)
void main_f_10da0() { main::sub_169a50(); }

// sub_10db0  (orig 0x10db0, tailcall)
void main_f_10db0() { main::sub_16b370(); }

// sub_10dc0  (orig 0x10dc0, tailcall)
void main_f_10dc0() { main::sub_152bf0(); }

// sub_10dd0  (orig 0x10dd0, tailcall)
void main_f_10dd0() { main::sub_15b0f0(); }

// sub_10de0  (orig 0x10de0, tailcall)
void main_f_10de0() { main::sub_17e200(); }

// sub_10df0  (orig 0x10df0, tailcall)
void main_f_10df0() { main::sub_17fa10(); }

// sub_10e00  (orig 0x10e00, tailcall)
void main_f_10e00() { main::sub_1719f0(); }

// sub_10e10  (orig 0x10e10, tailcall)
void main_f_10e10() { main::sub_17dcc0(); }

// sub_10e20  (orig 0x10e20, tailcall)
void main_f_10e20() { main::sub_17f4a0(); }

// sub_13f40  (orig 0x13f40, tailcall)
uint64_t main_f_13f40(void* a0) {
    return main::sub_16ff0(((uintptr_t)((char*)(a0) + 784)));
}

// sub_1dcf0  (orig 0x1dcf0, tailcall)
uint64_t main_f_1dcf0(void* a0) {
    return main::sub_117e0(((uintptr_t)((char*)(a0) + 40)));
}

// sub_26d70  (orig 0x26d70, tailcall)
uint64_t main_f_26d70(void* a0) {
    return main::sub_253e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2a170  (orig 0x2a170, tailcall)
void main_f_2a170() { main::sub_ce0(); }

// sub_2a5e0  (orig 0x2a5e0, tailcall)
uint64_t main_f_2a5e0(void* a0) {
    return main::sub_2a400(((uintptr_t)((char*)(a0) - 16)));
}

// sub_2a7d0  (orig 0x2a7d0, tailcall)
uint64_t main_f_2a7d0(void* a0) {
    return main::sub_2a5f0(((uintptr_t)((char*)(a0) - 16)));
}

// sub_2ab40  (orig 0x2ab40, tailcall)
uint64_t main_f_2ab40(void* a0) {
    return main::sub_2a950(((uintptr_t)((char*)(a0) - 16)));
}

// sub_2acb0  (orig 0x2acb0, tailcall)
uint64_t main_f_2acb0(void* a0) {
    return main::sub_2ab50(((uintptr_t)((char*)(a0) - 16)));
}

// sub_2b280  (orig 0x2b280, tailcall)
uint64_t main_f_2b280(void* a0) {
    return main::sub_2b120(((uintptr_t)((char*)(a0) - 16)));
}

// sub_2b430  (orig 0x2b430, tailcall)
uint64_t main_f_2b430(void* a0) {
    return main::sub_2b290(((uintptr_t)((char*)(a0) - 16)));
}

// sub_2b750  (orig 0x2b750, tailcall)
uint64_t main_f_2b750(void* a0) {
    return main::sub_2b5f0(((uintptr_t)((char*)(a0) - 16)));
}

// sub_3b410  (orig 0x3b410, tailcall)
uint64_t main_f_3b410(void* a0) {
    return main::BpBroadPhaseMBP_4(((uintptr_t)(*(uint64_t*)((char*)(a0) + 136))));
}

// sub_3bbc0  (orig 0x3bbc0, tailcall)
uint64_t main_f_3bbc0(void* a0) {
    return main::sub_3aa90(((uintptr_t)(*(uint64_t*)((char*)(a0) + 136))));
}

// sub_3c2f0  (orig 0x3c2f0, tailcall)
uint64_t main_f_3c2f0(void* a0) {
    return main::sub_3b900(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_3c300  (orig 0x3c300, tailcall)
uint64_t main_f_3c300(void* a0) {
    return main::sub_3b970(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_43720  (orig 0x43720, tailcall)
uint64_t main_f_43720(void* a0) {
    return main::sub_43570(((uintptr_t)((char*)(a0) - 8)));
}

// sub_447c0  (orig 0x447c0, tailcall)
uint64_t main_f_447c0(void* a0) {
    return main::sub_44680(((uintptr_t)((char*)(a0) - 8)));
}

// sub_44940  (orig 0x44940, tailcall)
uint64_t main_f_44940(void* a0) {
    return main::sub_44830(((uintptr_t)((char*)(a0) - 8)));
}

// sub_44a60  (orig 0x44a60, tailcall)
uint64_t main_f_44a60(void* a0) {
    return main::sub_44950(((uintptr_t)((char*)(a0) - 8)));
}

// sub_450a0  (orig 0x450a0, tailcall)
uint64_t main_f_450a0(void* a0) {
    return main::NonTrackedAlloc_43(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_54ff0  (orig 0x54ff0, tailcall)
uint64_t main_f_54ff0(void* a0) {
    return main::sub_54b20(((uintptr_t)((char*)(a0) - 8)));
}

// sub_55380  (orig 0x55380, tailcall)
uint64_t main_f_55380(void* a0) {
    return main::sub_55020(((uintptr_t)((char*)(a0) - 8)));
}

// sub_558b0  (orig 0x558b0, tailcall)
uint64_t main_f_558b0(void* a0) {
    return main::sub_553b0(((uintptr_t)((char*)(a0) - 8)));
}

// sub_55bd0  (orig 0x55bd0, tailcall)
uint64_t main_f_55bd0(void* a0) {
    return main::sub_558e0(((uintptr_t)((char*)(a0) - 8)));
}

// sub_55fe0  (orig 0x55fe0, tailcall)
uint64_t main_f_55fe0(void* a0) {
    return main::sub_55c00(((uintptr_t)((char*)(a0) - 8)));
}

// sub_561a0  (orig 0x561a0, tailcall)
uint64_t main_f_561a0(void* a0) {
    return main::sub_55ff0(((uintptr_t)((char*)(a0) - 8)));
}

// sub_56b90  (orig 0x56b90, tailcall)
uint64_t main_f_56b90(void* a0) {
    return main::sub_56a90(((uintptr_t)((char*)(a0) - 8)));
}

// sub_58410  (orig 0x58410, tailcall)
uint64_t main_f_58410(void* a0) {
    return main::NonTrackedAlloc_49(((uintptr_t)((char*)(a0) - 8)));
}

// sub_59820  (orig 0x59820, tailcall)
void main_f_59820() { main::sub_61f80(); }

// sub_59830  (orig 0x59830, tailcall)
void main_f_59830() { main::sub_5c2d0(); }

// sub_59840  (orig 0x59840, tailcall)
void main_f_59840() { main::sub_5d140(); }

// sub_65950  (orig 0x65950, tailcall)
void main_f_65950() { main::sub_ce0(); }

// sub_69a90  (orig 0x69a90, tailcall)
void main_f_69a90() { main::sub_69aa0(); }

// sub_6ce10  (orig 0x6ce10, tailcall)
void main_f_6ce10() { main::sub_ce0(); }

// sub_6ec60  (orig 0x6ec60, tailcall)
void main_f_6ec60() { main::sub_6ec70(); }

// sub_6fa50  (orig 0x6fa50, tailcall)
void main_f_6fa50() { main::sub_6fa60(); }

// sub_6fe40  (orig 0x6fe40, tailcall)
void main_f_6fe40() { main::sub_6fe50(); }

// sub_700a0  (orig 0x700a0, tailcall)
void main_f_700a0() { main::sub_6fa60(); }

// sub_700b0  (orig 0x700b0, tailcall)
void main_f_700b0() { main::sub_6fe50(); }

// sub_700c0  (orig 0x700c0, tailcall)
void main_f_700c0() { main::sub_6fa60(); }

// sub_700d0  (orig 0x700d0, tailcall)
void main_f_700d0() { main::sub_6fe50(); }

// sub_79f20  (orig 0x79f20, tailcall)
uint64_t main_f_79f20(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 40));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0) + 8));
    *(uint32_t*)((char*)(p1) + 16) = *(uint32_t*)((char*)(p0) + 684);
    return main::sub_79f40(((uintptr_t)(a0)));
}

// sub_7b200  (orig 0x7b200, tailcall)
void main_f_7b200() { main::sub_ce0(); }

// sub_90d70  (orig 0x90d70, tailcall)
void main_f_90d70() { main::sub_ce0(); }

// sub_93a30  (orig 0x93a30, tailcall)
uint64_t main_f_93a30(void* a0) {
    return main::PtParticleSystemSimCpu(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_a66a0  (orig 0xa66a0, tailcall)
uint64_t main_f_a66a0(void* a0) {
    return main::sub_9f2a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_aad50  (orig 0xaad50, tailcall)
uint64_t main_f_aad50(void* a0) {
    return main::sub_a9670(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_b1330  (orig 0xb1330, tailcall)
void main_f_b1330() { main::sub_ce0(); }

// sub_b4020  (orig 0xb4020, tailcall)
void main_f_b4020() { main::sub_b35c0(); }

// sub_b4130  (orig 0xb4130, tailcall)
void main_f_b4130() { main::sub_ce0(); }

// sub_b4140  (orig 0xb4140, tailcall)
void main_f_b4140() { main::sub_ce0(); }

// sub_c9cb0  (orig 0xc9cb0, tailcall)
uint64_t main_f_c9cb0(void* a0) {
    return main::sub_2ff3c0(((uintptr_t)((char*)(a0) + 32)));
}

// sub_cf5c0  (orig 0xcf5c0, tailcall)
uint64_t main_f_cf5c0(void* a0) {
    return main::ScScene_9(((uintptr_t)((char*)(a0) + 16)));
}

// sub_d1b40  (orig 0xd1b40, tailcall)
uint64_t main_f_d1b40(void* a0) {
    return main::sub_2ddef0(((uintptr_t)((char*)(a0) + 16)));
}

// sub_d1b50  (orig 0xd1b50, tailcall)
uint64_t main_f_d1b50(void* a0) {
    return main::sub_2ddf10(((uintptr_t)((char*)(a0) + 16)));
}

// sub_d1b60  (orig 0xd1b60, tailcall)
uint64_t main_f_d1b60(void* a0) {
    return main::sub_2ddf30(((uintptr_t)((char*)(a0) + 16)));
}

// sub_d1b70  (orig 0xd1b70, tailcall)
uint64_t main_f_d1b70(void* a0) {
    return main::sub_2ddf50(((uintptr_t)((char*)(a0) + 16)));
}

// sub_d99c0  (orig 0xd99c0, tailcall)
uint64_t main_f_d99c0(void* a0) {
    return main::sub_2ba9e0(((uintptr_t)((char*)(a0) + 48)));
}

// sub_d99e0  (orig 0xd99e0, tailcall)
uint64_t main_f_d99e0(void* a0) {
    return main::sub_2baa00(((uintptr_t)((char*)(a0) + 48)));
}

// sub_dcd10  (orig 0xdcd10, tailcall)
void main_f_dcd10() { main::sub_e1dc0(); }

// sub_dd790  (orig 0xdd790, tailcall)
uint64_t main_f_dd790(void* a0) {
    return main::sub_e1610(((uintptr_t)((char*)(a0) + 24)));
}

// sub_dd940  (orig 0xdd940, tailcall)
uint64_t main_f_dd940(void* a0) {
    return main::sub_1077c0(((uintptr_t)((char*)(a0) + 40)));
}

// sub_dece0  (orig 0xdece0, tailcall)
uint64_t main_f_dece0(void* a0) {
    return main::sub_e0cc0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_decf0  (orig 0xdecf0, tailcall)
uint64_t main_f_decf0(void* a0) {
    return main::sub_e0fa0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_deef0  (orig 0xdeef0, tailcall)
void main_f_deef0() { main::sub_ce0(); }

// sub_e53d0  (orig 0xe53d0, tailcall)
uint64_t main_f_e53d0(void* a0) {
    return main::sub_2b2630(((uintptr_t)((char*)(a0) + 32)));
}

// sub_e5720  (orig 0xe5720, tailcall)
uint64_t main_f_e5720(void* a0) {
    return main::sub_2ff3c0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_e5730  (orig 0xe5730, tailcall)
uint64_t main_f_e5730(void* a0) {
    return main::ScClothFabricCore(((uintptr_t)((char*)(a0) + 32)));
}

// sub_e5740  (orig 0xe5740, tailcall)
uint64_t main_f_e5740(void* a0) {
    return main::ScClothFabricCore_2(((uintptr_t)((char*)(a0) + 32)));
}

// sub_e57b0  (orig 0xe57b0, tailcall)
uint64_t main_f_e57b0(void* a0) {
    return main::sub_2b3560(((uintptr_t)((char*)(a0) + 32)));
}

// sub_e57c0  (orig 0xe57c0, tailcall)
uint64_t main_f_e57c0(void* a0) {
    return main::sub_2b37c0(((uintptr_t)((char*)(a0) + 32)));
}

// sub_e57d0  (orig 0xe57d0, tailcall)
uint64_t main_f_e57d0(void* a0) {
    return main::sub_2b3870(((uintptr_t)((char*)(a0) + 32)));
}

// sub_e57e0  (orig 0xe57e0, tailcall)
uint64_t main_f_e57e0(void* a0) {
    return main::sub_2b3710(((uintptr_t)((char*)(a0) + 32)));
}

// sub_e57f0  (orig 0xe57f0, tailcall)
uint64_t main_f_e57f0(void* a0) {
    return main::sub_2b3920(((uintptr_t)((char*)(a0) + 32)));
}

// sub_e5800  (orig 0xe5800, tailcall)
uint64_t main_f_e5800(void* a0) {
    return main::sub_2b39d0(((uintptr_t)((char*)(a0) + 32)));
}

// sub_e5820  (orig 0xe5820, tailcall)
uint64_t main_f_e5820(void* a0) {
    return main::sub_2b3a80(((uintptr_t)((char*)(a0) + 32)));
}

// sub_e5ea0  (orig 0xe5ea0, tailcall)
void main_f_e5ea0() { main::sub_e1dc0(); }

// sub_e6560  (orig 0xe6560, tailcall)
uint64_t main_f_e6560(void* a0) {
    return main::sub_e1610(((uintptr_t)((char*)(a0) + 24)));
}

// sub_e6650  (orig 0xe6650, tailcall)
uint64_t main_f_e6650(void* a0) {
    return main::ScbParticleSystem_3(((uintptr_t)((char*)(a0) + 40)));
}

// sub_e6f70  (orig 0xe6f70, tailcall)
uint64_t main_f_e6f70(void* a0) {
    return main::sub_2a9b80(((uintptr_t)((char*)(a0) + 64)));
}

// sub_e7070  (orig 0xe7070, tailcall)
uint64_t main_f_e7070(void* a0) {
    return main::sub_2a9c80(((uintptr_t)((char*)(a0) + 64)));
}

// sub_e7170  (orig 0xe7170, tailcall)
uint64_t main_f_e7170(void* a0) {
    return main::sub_2a97c0(((uintptr_t)((char*)(a0) + 64)));
}

// sub_e7180  (orig 0xe7180, tailcall)
uint64_t main_f_e7180(void* a0) {
    return main::sub_e0fa0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_e7280  (orig 0xe7280, tailcall)
uint64_t main_f_e7280(void* a0) {
    return main::sub_e0cc0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_e7c00  (orig 0xe7c00, tailcall)
void main_f_e7c00() { main::sub_e1dc0(); }

// sub_e82c0  (orig 0xe82c0, tailcall)
uint64_t main_f_e82c0(void* a0) {
    return main::sub_e1610(((uintptr_t)((char*)(a0) + 24)));
}

// sub_e83b0  (orig 0xe83b0, tailcall)
uint64_t main_f_e83b0(void* a0) {
    return main::ScbParticleSystem_3(((uintptr_t)((char*)(a0) + 40)));
}

// sub_e8cd0  (orig 0xe8cd0, tailcall)
uint64_t main_f_e8cd0(void* a0) {
    return main::sub_2a9b80(((uintptr_t)((char*)(a0) + 64)));
}

// sub_e8dd0  (orig 0xe8dd0, tailcall)
uint64_t main_f_e8dd0(void* a0) {
    return main::sub_2a9c80(((uintptr_t)((char*)(a0) + 64)));
}

// sub_e8e30  (orig 0xe8e30, tailcall)
uint64_t main_f_e8e30(void* a0) {
    return main::sub_2a97c0(((uintptr_t)((char*)(a0) + 64)));
}

// sub_e8e40  (orig 0xe8e40, tailcall)
uint64_t main_f_e8e40(void* a0) {
    return main::sub_e0fa0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_e8fb0  (orig 0xe8fb0, tailcall)
uint64_t main_f_e8fb0(void* a0) {
    return main::sub_e0cc0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_eccc0  (orig 0xeccc0, tailcall)
void main_f_eccc0() { main::sub_e1dc0(); }

// sub_ed280  (orig 0xed280, tailcall)
uint64_t main_f_ed280(void* a0) {
    return main::sub_e1610(((uintptr_t)((char*)(a0) + 24)));
}

// sub_ed290  (orig 0xed290, tailcall)
uint64_t main_f_ed290(void* a0) {
    return main::sub_2b07d0(((uintptr_t)((char*)(a0) + 64)));
}

// sub_ed310  (orig 0xed310, tailcall)
uint64_t main_f_ed310(void* a0) {
    return main::sub_e0cc0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_ed320  (orig 0xed320, tailcall)
uint64_t main_f_ed320(void* a0) {
    return main::sub_e0fa0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_edab0  (orig 0xedab0, tailcall)
uint64_t main_f_edab0(void* a0) {
    return main::sub_2ae5d0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_f0250  (orig 0xf0250, tailcall)
uint64_t main_f_f0250(void* a0) {
    return main::sub_d90c0(((uintptr_t)((char*)(a0) + 96)));
}

// sub_f0300  (orig 0xf0300, tailcall)
uint64_t main_f_f0300(void* a0) {
    return main::sub_d5ed0(((uintptr_t)((char*)(a0) + 96)));
}

// sub_f0e60  (orig 0xf0e60, tailcall)
void main_f_f0e60() { main::sub_e1dc0(); }

// sub_f18e0  (orig 0xf18e0, tailcall)
uint64_t main_f_f18e0(void* a0) {
    return main::sub_e1610(((uintptr_t)((char*)(a0) + 24)));
}

// sub_f1c80  (orig 0xf1c80, tailcall)
uint64_t main_f_f1c80(void* a0) {
    return main::sub_1077c0(((uintptr_t)((char*)(a0) + 40)));
}

// sub_f3160  (orig 0xf3160, tailcall)
uint64_t main_f_f3160(void* a0) {
    return main::sub_e0cc0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_f3170  (orig 0xf3170, tailcall)
uint64_t main_f_f3170(void* a0) {
    return main::sub_e0fa0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_f3e00  (orig 0xf3e00, tailcall)
void main_f_f3e00() { main::sub_e1dc0(); }

// sub_f4880  (orig 0xf4880, tailcall)
uint64_t main_f_f4880(void* a0) {
    return main::sub_e1610(((uintptr_t)((char*)(a0) + 24)));
}

// sub_f49c0  (orig 0xf49c0, tailcall)
uint64_t main_f_f49c0(void* a0) {
    return main::sub_1077c0(((uintptr_t)((char*)(a0) + 40)));
}

// sub_f4f60  (orig 0xf4f60, tailcall)
uint64_t main_f_f4f60(void* a0) {
    return main::sub_e0cc0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_f4f70  (orig 0xf4f70, tailcall)
uint64_t main_f_f4f70(void* a0) {
    return main::sub_e0fa0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_fa950  (orig 0xfa950, tailcall)
uint64_t main_f_fa950(void* a0) {
    return main::sub_2df880(((uintptr_t)((char*)(a0) + 32)));
}

// sub_faa40  (orig 0xfaa40, tailcall)
uint64_t main_f_faa40(void* a0) {
    return main::sub_2df8d0(((uintptr_t)((char*)(a0) + 32)));
}

// sub_fab30  (orig 0xfab30, tailcall)
uint64_t main_f_fab30(void* a0) {
    return main::ScbScene_4(((uintptr_t)((char*)(a0) + 16)));
}

// sub_fca10  (orig 0xfca10, tailcall)
uint64_t main_f_fca10(uint64_t a0) {
    return main::sub_29a470(((uintptr_t)((((uint64_t)a0)) + (9264))));
}

// sub_fdd70  (orig 0xfdd70, tailcall)
void main_f_fdd70() { main::sub_ce0(); }

// sub_102630  (orig 0x102630, tailcall)
void main_f_102630() { main::sub_ce0(); }

// sub_1026c0  (orig 0x1026c0, tailcall)
void main_f_1026c0() { main::sub_ce0(); }

// sub_102750  (orig 0x102750, tailcall)
void main_f_102750() { main::sub_ce0(); }

// sub_104b80  (orig 0x104b80, tailcall)
void main_f_104b80() { main::sub_ce0(); }

// sub_104bc0  (orig 0x104bc0, tailcall)
void main_f_104bc0() { main::sub_ce0(); }

// sub_104bd0  (orig 0x104bd0, tailcall)
void main_f_104bd0() { main::sub_ce0(); }

// sub_104be0  (orig 0x104be0, tailcall)
void main_f_104be0() { main::sub_ce0(); }

// sub_104c10  (orig 0x104c10, tailcall)
void main_f_104c10() { main::sub_ce0(); }

// sub_104d60  (orig 0x104d60, tailcall)
uint64_t main_f_104d60(void* a0) {
    return main::sub_2f8990(((uintptr_t)((char*)(a0) + 32)));
}

// sub_104f20  (orig 0x104f20, tailcall)
uint64_t main_f_104f20(void* a0) {
    return main::sub_104d70(((uintptr_t)((char*)(a0) - 24)));
}

// sub_105480  (orig 0x105480, tailcall)
uint64_t main_f_105480(void* a0) {
    return main::sub_2ff3c0(((uintptr_t)((char*)(a0) + 32)));
}

// sub_106c90  (orig 0x106c90, tailcall)
uint64_t main_f_106c90(void* a0) {
    return main::sub_2ff3c0(((uintptr_t)((char*)(a0) - 16)));
}

// sub_10d7c0  (orig 0x10d7c0, tailcall)
void main_f_10d7c0() { main::sub_ce0(); }

// sub_10d9b0  (orig 0x10d9b0, tailcall)
void main_f_10d9b0() { main::sub_ce0(); }

// sub_112a60  (orig 0x112a60, tailcall)
void main_f_112a60() { main::sub_ce0(); }

// sub_112a90  (orig 0x112a90, tailcall)
void main_f_112a90() { main::sub_ce0(); }

// sub_112bf0  (orig 0x112bf0, tailcall)
void main_f_112bf0() { main::sub_ce0(); }

// sub_112c00  (orig 0x112c00, tailcall)
void main_f_112c00() { main::sub_ce0(); }

// sub_112d40  (orig 0x112d40, tailcall)
void main_f_112d40() { main::sub_ce0(); }

// sub_112d50  (orig 0x112d50, tailcall)
void main_f_112d50() { main::sub_ce0(); }

// sub_112e90  (orig 0x112e90, tailcall)
void main_f_112e90() { main::sub_ce0(); }

// sub_112ea0  (orig 0x112ea0, tailcall)
void main_f_112ea0() { main::sub_ce0(); }

// sub_112fe0  (orig 0x112fe0, tailcall)
void main_f_112fe0() { main::sub_ce0(); }

// sub_112ff0  (orig 0x112ff0, tailcall)
void main_f_112ff0() { main::sub_ce0(); }

// sub_1130a0  (orig 0x1130a0, tailcall)
void main_f_1130a0() { main::sub_ce0(); }

// sub_1131c0  (orig 0x1131c0, tailcall)
void main_f_1131c0() { main::sub_ce0(); }

// sub_1131d0  (orig 0x1131d0, tailcall)
void main_f_1131d0() { main::sub_ce0(); }

// sub_1132a0  (orig 0x1132a0, tailcall)
void main_f_1132a0() { main::sub_ce0(); }

// sub_1133b0  (orig 0x1133b0, tailcall)
void main_f_1133b0() { main::sub_ce0(); }

// sub_1133c0  (orig 0x1133c0, tailcall)
void main_f_1133c0() { main::sub_ce0(); }

// sub_1134e0  (orig 0x1134e0, tailcall)
void main_f_1134e0() { main::sub_ce0(); }

// sub_1134f0  (orig 0x1134f0, tailcall)
void main_f_1134f0() { main::sub_ce0(); }

// sub_113630  (orig 0x113630, tailcall)
void main_f_113630() { main::sub_ce0(); }

// sub_113650  (orig 0x113650, tailcall)
void main_f_113650() { main::sub_ce0(); }

// sub_113790  (orig 0x113790, tailcall)
void main_f_113790() { main::sub_ce0(); }

// sub_1137a0  (orig 0x1137a0, tailcall)
void main_f_1137a0() { main::sub_ce0(); }

// sub_1138d0  (orig 0x1138d0, tailcall)
void main_f_1138d0() { main::sub_ce0(); }

// sub_1138e0  (orig 0x1138e0, tailcall)
void main_f_1138e0() { main::sub_ce0(); }

// sub_113a00  (orig 0x113a00, tailcall)
void main_f_113a00() { main::sub_ce0(); }

// sub_113a10  (orig 0x113a10, tailcall)
void main_f_113a10() { main::sub_ce0(); }

// sub_113b50  (orig 0x113b50, tailcall)
void main_f_113b50() { main::sub_ce0(); }

// sub_113b60  (orig 0x113b60, tailcall)
void main_f_113b60() { main::sub_ce0(); }

// sub_113ca0  (orig 0x113ca0, tailcall)
void main_f_113ca0() { main::sub_ce0(); }

// sub_113cb0  (orig 0x113cb0, tailcall)
void main_f_113cb0() { main::sub_ce0(); }

// sub_113df0  (orig 0x113df0, tailcall)
void main_f_113df0() { main::sub_ce0(); }

// sub_113e00  (orig 0x113e00, tailcall)
void main_f_113e00() { main::sub_ce0(); }

// sub_113f40  (orig 0x113f40, tailcall)
void main_f_113f40() { main::sub_ce0(); }

// sub_113f50  (orig 0x113f50, tailcall)
void main_f_113f50() { main::sub_ce0(); }

// sub_114090  (orig 0x114090, tailcall)
void main_f_114090() { main::sub_ce0(); }

// sub_1140a0  (orig 0x1140a0, tailcall)
void main_f_1140a0() { main::sub_ce0(); }

// sub_121db0  (orig 0x121db0, tailcall)
void main_f_121db0() { main::sub_ce0(); }

// sub_121fb0  (orig 0x121fb0, tailcall)
void main_f_121fb0() { main::sub_ce0(); }

// sub_123200  (orig 0x123200, tailcall)
void main_f_123200() { main::sub_ce0(); }

// sub_124850  (orig 0x124850, tailcall)
void main_f_124850() { main::sub_ce0(); }

// sub_124860  (orig 0x124860, tailcall)
void main_f_124860() { main::sub_ce0(); }

// sub_129820  (orig 0x129820, tailcall)
void main_f_129820() { main::sub_ce0(); }

// sub_12c050  (orig 0x12c050, tailcall)
void main_f_12c050() { main::sub_ce0(); }

// sub_1313e0  (orig 0x1313e0, tailcall)
void main_f_1313e0() { main::sub_ce0(); }

// sub_13b920  (orig 0x13b920, tailcall)
void main_f_13b920() { main::sub_ce0(); }

// sub_13ff90  (orig 0x13ff90, tailcall)
void main_f_13ff90() { main::sub_ce0(); }

// sub_140510  (orig 0x140510, tailcall)
uint64_t main_f_140510(void* a0) {
    return main::sub_140290(((uintptr_t)((char*)(a0) - 8)));
}

// sub_140b70  (orig 0x140b70, tailcall)
uint64_t main_f_140b70(void* a0) {
    return main::sub_1408f0(((uintptr_t)((char*)(a0) - 8)));
}

// sub_1417b0  (orig 0x1417b0, tailcall)
uint64_t main_f_1417b0(void* a0) {
    return main::sub_141240(((uintptr_t)((char*)(a0) - 8)));
}

// sub_142050  (orig 0x142050, tailcall)
uint64_t main_f_142050(void* a0) {
    return main::sub_141cb0(((uintptr_t)((char*)(a0) - 8)));
}

// sub_142270  (orig 0x142270, tailcall)
void main_f_142270() { main::sub_ce0(); }

// sub_1424b0  (orig 0x1424b0, tailcall)
void main_f_1424b0() { main::sub_ce0(); }

// sub_142930  (orig 0x142930, tailcall)
void main_f_142930() { main::sub_ce0(); }

// sub_142b50  (orig 0x142b50, tailcall)
void main_f_142b50() { main::sub_ce0(); }

// sub_142ca0  (orig 0x142ca0, tailcall)
void main_f_142ca0() { main::sub_ce0(); }

// sub_142ef0  (orig 0x142ef0, tailcall)
void main_f_142ef0() { main::sub_ce0(); }

// sub_1473f0  (orig 0x1473f0, tailcall)
void main_f_1473f0() { main::sub_ce0(); }

// sub_147400  (orig 0x147400, tailcall)
void main_f_147400() { main::sub_ce0(); }

// sub_147410  (orig 0x147410, tailcall)
void main_f_147410() { main::sub_ce0(); }

// sub_148630  (orig 0x148630, tailcall)
void main_f_148630() { main::sub_ce0(); }

// sub_148710  (orig 0x148710, tailcall)
void main_f_148710() { main::sub_ce0(); }

// sub_14f610  (orig 0x14f610, tailcall)
uint64_t main_f_14f610(void* a0) {
    return main::sub_2ff3c0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_158750  (orig 0x158750, tailcall)
void main_f_158750() { main::sub_ce0(); }

// sub_1603e0  (orig 0x1603e0, tailcall)
void main_f_1603e0() { main::sub_ce0(); }

// sub_1604f0  (orig 0x1604f0, tailcall)
void main_f_1604f0() { main::sub_ce0(); }

// sub_160720  (orig 0x160720, tailcall)
void main_f_160720() { main::sub_ce0(); }

// sub_1610e0  (orig 0x1610e0, tailcall)
void main_f_1610e0() { main::sub_ce0(); }

// sub_162050  (orig 0x162050, tailcall)
void main_f_162050() { main::sub_ce0(); }

// sub_169a40  (orig 0x169a40, tailcall)
void main_f_169a40() { main::sub_ce0(); }

// sub_16a7b0  (orig 0x16a7b0, tailcall)
void main_f_16a7b0() { main::sub_ce0(); }

// sub_16ada0  (orig 0x16ada0, tailcall)
void main_f_16ada0() { main::sub_ce0(); }

// sub_16c380  (orig 0x16c380, tailcall)
void main_f_16c380() { main::sub_ce0(); }

// sub_171070  (orig 0x171070, tailcall)
void main_f_171070() { main::sub_ce0(); }

// sub_177a50  (orig 0x177a50, tailcall)
void main_f_177a50() { main::sub_ce0(); }

// sub_17cf10  (orig 0x17cf10, tailcall)
void main_f_17cf10() { main::sub_ce0(); }

// sub_17d240  (orig 0x17d240, tailcall)
void main_f_17d240() { main::sub_ce0(); }

// sub_17e410  (orig 0x17e410, tailcall)
void main_f_17e410() { main::sub_ce0(); }

// sub_17ea00  (orig 0x17ea00, tailcall)
void main_f_17ea00() { main::sub_ce0(); }

// sub_1800f0  (orig 0x1800f0, tailcall)
void main_f_1800f0() { main::sub_ce0(); }

// sub_189e70  (orig 0x189e70, tailcall)
void main_f_189e70() { main::sub_ce0(); }

// sub_197840  (orig 0x197840, tailcall)
void main_f_197840() { main::sub_ce0(); }

// sub_19b290  (orig 0x19b290, tailcall)
void main_f_19b290() { main::GuMeshFactory(); }

// sub_19c4f0  (orig 0x19c4f0, tailcall)
void main_f_19c4f0() { main::GuMeshFactory_2(); }

// sub_19e380  (orig 0x19e380, tailcall)
uint64_t main_f_19e380(void* a0) {
    return main::sub_19e2f0(((uintptr_t)((char*)(a0) - 16)));
}

// sub_19ee20  (orig 0x19ee20, tailcall)
uint64_t main_f_19ee20(void* a0) {
    return main::GuConvexMesh(((uintptr_t)((char*)(a0) - 16)));
}

// sub_19ee30  (orig 0x19ee30, tailcall)
uint64_t main_f_19ee30(void* a0) {
    return main::sub_2ff3c0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_19fd20  (orig 0x19fd20, tailcall)
uint64_t main_f_19fd20(void* a0) {
    return main::sub_2ff3c0(((uintptr_t)((char*)(a0) + 24)));
}

// sub_1a00f0  (orig 0x1a00f0, tailcall)
uint64_t main_f_1a00f0(void* a0) {
    return main::sub_19ff40(((uintptr_t)((char*)(a0) - 16)));
}

// sub_1a0de0  (orig 0x1a0de0, tailcall)
uint64_t main_f_1a0de0(void* a0) {
    return main::sub_1a0cd0(((uintptr_t)((char*)(a0) - 16)));
}

// sub_1a0f10  (orig 0x1a0f10, tailcall)
void main_f_1a0f10() { main::sub_ce0(); }

// sub_1a1040  (orig 0x1a1040, tailcall)
void main_f_1a1040() { main::sub_ce0(); }

// sub_1a7950  (orig 0x1a7950, tailcall)
void main_f_1a7950() { main::sub_ce0(); }

// sub_1a8a30  (orig 0x1a8a30, tailcall)
void main_f_1a8a30() { main::sub_ce0(); }

// sub_1b5870  (orig 0x1b5870, tailcall)
void main_f_1b5870() { main::sub_ce0(); }

// sub_1b58d0  (orig 0x1b58d0, tailcall)
void main_f_1b58d0() { main::sub_ce0(); }

// sub_1c0d00  (orig 0x1c0d00, tailcall)
void main_f_1c0d00() { main::sub_ce0(); }

// sub_1c7fe0  (orig 0x1c7fe0, tailcall)
void main_f_1c7fe0() { main::sub_ce0(); }

// sub_1ccd10  (orig 0x1ccd10, tailcall)
void main_f_1ccd10() { main::sub_ce0(); }

// sub_1ccea0  (orig 0x1ccea0, tailcall)
void main_f_1ccea0() { main::sub_ce0(); }

// sub_1cd400  (orig 0x1cd400, tailcall)
void main_f_1cd400() { main::sub_ce0(); }

// sub_1d4810  (orig 0x1d4810, tailcall)
void main_f_1d4810() { main::sub_ce0(); }

// sub_1dadf0  (orig 0x1dadf0, tailcall)
void main_f_1dadf0() { main::sub_ce0(); }

// sub_1f2890  (orig 0x1f2890, tailcall)
void main_f_1f2890() { main::sub_ce0(); }

// sub_1f2b70  (orig 0x1f2b70, tailcall)
void main_f_1f2b70() { main::sub_ce0(); }

// sub_1f3130  (orig 0x1f3130, tailcall)
void main_f_1f3130() { main::sub_ce0(); }

// sub_1f4520  (orig 0x1f4520, tailcall)
void main_f_1f4520() { main::sub_ce0(); }

// sub_1fae10  (orig 0x1fae10, tailcall)
void main_f_1fae10() { main::sub_ce0(); }

// sub_1fae20  (orig 0x1fae20, tailcall)
void main_f_1fae20() { main::sub_ce0(); }

// sub_1faf60  (orig 0x1faf60, tailcall)
void main_f_1faf60() { main::sub_ce0(); }

// sub_1faf70  (orig 0x1faf70, tailcall)
void main_f_1faf70() { main::sub_ce0(); }

// sub_1fb0b0  (orig 0x1fb0b0, tailcall)
void main_f_1fb0b0() { main::sub_ce0(); }

// sub_1fb0c0  (orig 0x1fb0c0, tailcall)
void main_f_1fb0c0() { main::sub_ce0(); }

// sub_1fb200  (orig 0x1fb200, tailcall)
void main_f_1fb200() { main::sub_ce0(); }

// sub_1fb210  (orig 0x1fb210, tailcall)
void main_f_1fb210() { main::sub_ce0(); }

// sub_1fb350  (orig 0x1fb350, tailcall)
void main_f_1fb350() { main::sub_ce0(); }

// sub_1fb360  (orig 0x1fb360, tailcall)
void main_f_1fb360() { main::sub_ce0(); }

// sub_1fb4a0  (orig 0x1fb4a0, tailcall)
void main_f_1fb4a0() { main::sub_ce0(); }

// sub_1fb4b0  (orig 0x1fb4b0, tailcall)
void main_f_1fb4b0() { main::sub_ce0(); }

// sub_1fda70  (orig 0x1fda70, tailcall)
uint64_t main_f_1fda70(void* a0) {
    return main::sub_1fd670(((uintptr_t)((char*)(a0) - 24)));
}

// sub_1fda80  (orig 0x1fda80, tailcall)
uint64_t main_f_1fda80(void* a0) {
    return main::sub_1fd830(((uintptr_t)((char*)(a0) - 24)));
}

// sub_200de0  (orig 0x200de0, tailcall)
uint64_t main_f_200de0(void* a0) {
    return main::sub_2009e0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_200df0  (orig 0x200df0, tailcall)
uint64_t main_f_200df0(void* a0) {
    return main::sub_200ba0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_204310  (orig 0x204310, tailcall)
uint64_t main_f_204310(void* a0) {
    return main::sub_203f30(((uintptr_t)((char*)(a0) - 24)));
}

// sub_204320  (orig 0x204320, tailcall)
uint64_t main_f_204320(void* a0) {
    return main::sub_2040f0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_207960  (orig 0x207960, tailcall)
uint64_t main_f_207960(void* a0) {
    return main::sub_207560(((uintptr_t)((char*)(a0) - 24)));
}

// sub_207970  (orig 0x207970, tailcall)
uint64_t main_f_207970(void* a0) {
    return main::sub_207720(((uintptr_t)((char*)(a0) - 24)));
}

// sub_20af20  (orig 0x20af20, tailcall)
uint64_t main_f_20af20(void* a0) {
    return main::sub_20ab40(((uintptr_t)((char*)(a0) - 24)));
}

// sub_20af30  (orig 0x20af30, tailcall)
uint64_t main_f_20af30(void* a0) {
    return main::sub_20ad00(((uintptr_t)((char*)(a0) - 24)));
}

// sub_20cc90  (orig 0x20cc90, tailcall)
uint64_t main_f_20cc90(void* a0) {
    return main::sub_20c960(((uintptr_t)((char*)(a0) - 24)));
}

// sub_20fcc0  (orig 0x20fcc0, tailcall)
uint64_t main_f_20fcc0(void* a0) {
    return main::sub_20f8e0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_20fcd0  (orig 0x20fcd0, tailcall)
uint64_t main_f_20fcd0(void* a0) {
    return main::sub_20faa0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_29afc0  (orig 0x29afc0, tailcall)
void main_f_29afc0() { main::sub_ce0(); }

// sub_29e700  (orig 0x29e700, tailcall)
uint64_t main_f_29e700(uint64_t a0) {
    return main::sub_29ee80(((uintptr_t)((((uint64_t)a0)) + (8080))));
}

// sub_2a5be0  (orig 0x2a5be0, tailcall)
uint64_t main_f_2a5be0(void* a0) {
    return main::NonTrackedAlloc_137(((uintptr_t)((char*)(a0) + 16)));
}

// sub_2a5bf0  (orig 0x2a5bf0, tailcall)
uint64_t main_f_2a5bf0(void* a0) {
    return main::sub_2a5080(((uintptr_t)((char*)(a0) + 16)));
}

// sub_2a5c60  (orig 0x2a5c60, tailcall)
uint64_t main_f_2a5c60(void* a0) {
    return main::sub_2a5560(((uintptr_t)((char*)(a0) + 16)));
}

// sub_2a6140  (orig 0x2a6140, tailcall)
uint64_t main_f_2a6140(uint64_t a0) {
    return main::sub_29ee80(((uintptr_t)((((uint64_t)a0)) + (7840))));
}

// sub_2a9160  (orig 0x2a9160, tailcall)
void main_f_2a9160() { main::sub_ce0(); }

// sub_2a91b0  (orig 0x2a91b0, tailcall)
void main_f_2a91b0() { main::sub_ce0(); }

// sub_2a9200  (orig 0x2a9200, tailcall)
void main_f_2a9200() { main::sub_ce0(); }

// sub_2a9250  (orig 0x2a9250, tailcall)
void main_f_2a9250() { main::sub_ce0(); }

// sub_2a92a0  (orig 0x2a92a0, tailcall)
void main_f_2a92a0() { main::sub_ce0(); }

// sub_2a9300  (orig 0x2a9300, tailcall)
void main_f_2a9300() { main::sub_ce0(); }

// sub_2ad5c0  (orig 0x2ad5c0, tailcall)
uint64_t main_f_2ad5c0(void* a0) {
    return main::NonTrackedAlloc_144(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2b40b0  (orig 0x2b40b0, tailcall)
uint64_t main_f_2b40b0(void* a0) {
    return main::CmBitMap(((uintptr_t)((char*)(a0) + 96)));
}

// sub_2ba9f0  (orig 0x2ba9f0, tailcall)
uint64_t main_f_2ba9f0(void* a0) {
    return main::sub_2bc760(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_2bd7e0  (orig 0x2bd7e0, tailcall)
void main_f_2bd7e0() { main_f_2d9550(); }

// sub_2c1720  (orig 0x2c1720, tailcall)
void main_f_2c1720() { main::sub_2c43e0(); }

// sub_2d9550  (orig 0x2d9550, tailcall)
void main_f_2d9550() { main_f_2ba210(); }

// sub_2e6570  (orig 0x2e6570, tailcall)
uint64_t main_f_2e6570(void* a0) {
    return main::sub_1e8e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1824))));
}

// sub_2e7510  (orig 0x2e7510, tailcall)
uint64_t main_f_2e7510(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 1824));
    return main::NonTrackedAlloc(((uintptr_t)((char*)(p0) + 40)));
}

// sub_2e7540  (orig 0x2e7540, tailcall)
uint64_t main_f_2e7540(void* a0) {
    return main::sub_1db60(((uintptr_t)(*(uint64_t*)((char*)(a0) + 1824))));
}

// sub_2ebf50  (orig 0x2ebf50, tailcall)
void main_f_2ebf50() { main::sub_ce0(); }

// sub_2efe60  (orig 0x2efe60, tailcall)
uint64_t main_f_2efe60(void* a0) {
    return main::sub_2eba70(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2effe0  (orig 0x2effe0, tailcall)
uint64_t main_f_2effe0(void* a0) {
    return main::sub_2e5380(((uintptr_t)(*(uint64_t*)((char*)(a0) + 168))));
}

// sub_2f0610  (orig 0x2f0610, tailcall)
uint64_t main_f_2f0610(void* a0) {
    return main::sub_2e2f50(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2f0680  (orig 0x2f0680, tailcall)
uint64_t main_f_2f0680(void* a0) {
    return main::sub_2e2d40(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2f07f0  (orig 0x2f07f0, tailcall)
uint64_t main_f_2f07f0(void* a0) {
    return main::sub_2e2c40(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2f0920  (orig 0x2f0920, tailcall)
uint64_t main_f_2f0920(void* a0) {
    return main::sub_2e22f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2f0990  (orig 0x2f0990, tailcall)
uint64_t main_f_2f0990(void* a0) {
    return main::sub_2e2a70(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2f0b50  (orig 0x2f0b50, tailcall)
uint64_t main_f_2f0b50(void* a0) {
    return main::sub_2e21d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2f1080  (orig 0x2f1080, tailcall)
uint64_t main_f_2f1080(void* a0) {
    return main::sub_2ea820(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2f11c0  (orig 0x2f11c0, tailcall)
uint64_t main_f_2f11c0(void* a0) {
    return main::sub_2ea8e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2f1230  (orig 0x2f1230, tailcall)
uint64_t main_f_2f1230(void* a0) {
    return main::sub_2ea9e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2f4e80  (orig 0x2f4e80, tailcall)
uint64_t main_f_2f4e80(void* a0) {
    return main::ScScene_5(((uintptr_t)(*(uint64_t*)((char*)(a0) + 40))));
}

// sub_2fe2d0  (orig 0x2fe2d0, tailcall)
void main_f_2fe2d0() { main::sub_ce0(); }

// sub_2ff020  (orig 0x2ff020, tailcall)
void main_f_2ff020() { main::sub_2d9880(); }

// sub_303680  (orig 0x303680, tailcall)
void main_f_303680() { main::sub_ce0(); }

// sub_304250  (orig 0x304250, tailcall)
void main_f_304250() { main::sub_ce0(); }

// sub_3086c0  (orig 0x3086c0, tailcall)
void main_f_3086c0() { main::sub_ce0(); }

// sub_308f90  (orig 0x308f90, tailcall)
void main_f_308f90() { main::sub_308fa0(); }

// sub_309880  (orig 0x309880, tailcall)
uint64_t main_f_309880(void* a0) {
    return main::sub_3097b0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_30a6e0  (orig 0x30a6e0, tailcall)
void main_f_30a6e0() { main::sub_37e350(); }

// sub_30ad30  (orig 0x30ad30, tailcall)
void main_f_30ad30() { main::sub_308750(); }

// sub_30ad40  (orig 0x30ad40, tailcall)
uint64_t main_f_30ad40(void* a0) {
    return main::sub_308750(((uintptr_t)((char*)(a0) - 24)));
}

// sub_30f220  (orig 0x30f220, tailcall)
void main_f_30f220() { main::sub_30a520(); }

// sub_30fd80  (orig 0x30fd80, tailcall)
void main_f_30fd80() { main::sub_3191e0(); }

// sub_30fd90  (orig 0x30fd90, tailcall)
uint64_t main_f_30fd90(void* a0) {
    return main::sub_3191e0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_3102d0  (orig 0x3102d0, tailcall)
uint64_t main_f_3102d0(void* a0) {
    return main::sub_3101f0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_3132f0  (orig 0x3132f0, tailcall)
uint64_t main_f_3132f0(void* a0) {
    return main::sub_313160(((uintptr_t)((char*)(a0) - 24)));
}

// sub_31a7d0  (orig 0x31a7d0, tailcall)
uint64_t main_f_31a7d0(void* a0) {
    return main::sub_31b340(((uintptr_t)((char*)(a0) + 96)));
}

// sub_31b150  (orig 0x31b150, tailcall)
void main_f_31b150() { main::sub_ce0(); }

// sub_31b180  (orig 0x31b180, tailcall)
void main_f_31b180() { main::sub_ce0(); }

// sub_31b1e0  (orig 0x31b1e0, tailcall)
void main_f_31b1e0() { main::sub_ce0(); }

// sub_31c5d0  (orig 0x31c5d0, tailcall)
uint64_t main_f_31c5d0(void* a0) {
    return main::sub_316ee0(((uintptr_t)((char*)(a0) + 152)));
}

// sub_31d4d0  (orig 0x31d4d0, tailcall)
void main_f_31d4d0() { main::sub_308eb0(); }

// sub_31de10  (orig 0x31de10, tailcall)
void main_f_31de10() { main::sub_ce0(); }

// sub_31e560  (orig 0x31e560, tailcall)
void main_f_31e560() { main::sub_ce0(); }

// sub_31f830  (orig 0x31f830, tailcall)
void main_f_31f830() { main::sub_ce0(); }

// sub_31fc20  (orig 0x31fc20, tailcall)
void main_f_31fc20() { main::sub_ce0(); }

// sub_321b30  (orig 0x321b30, tailcall)
void main_f_321b30() { main::sub_ce0(); }

// sub_321f10  (orig 0x321f10, tailcall)
void main_f_321f10() { main::sub_ce0(); }

// sub_32a1c0  (orig 0x32a1c0, tailcall)
void main_f_32a1c0() { main::sub_ce0(); }

// sub_32b760  (orig 0x32b760, tailcall)
void main_f_32b760() { main::sub_ce0(); }

// sub_32b8e0  (orig 0x32b8e0, tailcall)
void main_f_32b8e0() { main::sub_ce0(); }

// sub_32fdc0  (orig 0x32fdc0, tailcall)
void main_f_32fdc0() { main::sub_3338a0(); }

// sub_332b30  (orig 0x332b30, tailcall)
void main_f_332b30() { main::sub_ce0(); }

// sub_333930  (orig 0x333930, tailcall)
void main_f_333930() { main::sub_368b00(); }

// sub_333a00  (orig 0x333a00, tailcall)
void main_f_333a00() { main::sub_3c8a50(); }

// sub_33cdc0  (orig 0x33cdc0, tailcall)
void main_f_33cdc0() { main_f_33cfe0(); }

// sub_33cfe0  (orig 0x33cfe0, tailcall)
void main_f_33cfe0() { main::sub_33d330(); }

// sub_33e850  (orig 0x33e850, tailcall)
void main_f_33e850() { main_f_33ebe0(); }

// sub_33ebe0  (orig 0x33ebe0, tailcall)
void main_f_33ebe0() { main::sub_33d330(); }

// sub_33f0d0  (orig 0x33f0d0, tailcall)
void main_f_33f0d0() { main::sub_33d8a0(); }

// sub_33f500  (orig 0x33f500, tailcall)
void main_f_33f500() { main::sub_33d330(); }

// sub_33f8e0  (orig 0x33f8e0, tailcall)
void main_f_33f8e0() { main::sub_33d8a0(); }

// sub_33f9e0  (orig 0x33f9e0, tailcall)
void main_f_33f9e0() { main_f_33cfe0(); }

// sub_33fbf0  (orig 0x33fbf0, tailcall)
void main_f_33fbf0() { main_f_33cfe0(); }

// sub_33fe00  (orig 0x33fe00, tailcall)
void main_f_33fe00() { main_f_33cfe0(); }

// sub_33ff50  (orig 0x33ff50, tailcall)
void main_f_33ff50() { main::sub_33d8a0(); }

// sub_340030  (orig 0x340030, tailcall)
void main_f_340030() { main::sub_33d330(); }

// sub_340400  (orig 0x340400, tailcall)
void main_f_340400() { main::sub_33d8a0(); }

// sub_340530  (orig 0x340530, tailcall)
void main_f_340530() { main::sub_33d8a0(); }

// sub_340640  (orig 0x340640, tailcall)
void main_f_340640() { main::sub_33d8a0(); }

// sub_3407d0  (orig 0x3407d0, tailcall)
void main_f_3407d0() { main_f_33ebe0(); }

// sub_340c50  (orig 0x340c50, tailcall)
void main_f_340c50() { main::sub_33d8a0(); }

// sub_340db0  (orig 0x340db0, tailcall)
void main_f_340db0() { main_f_33cfe0(); }

// sub_340f10  (orig 0x340f10, tailcall)
void main_f_340f10() { main_f_33ebe0(); }

// sub_341c80  (orig 0x341c80, tailcall)
uint64_t main_f_341c80(void* a0) {
    return main::sub_3791b0(((uintptr_t)((char*)(a0) + 272)));
}

// sub_341c90  (orig 0x341c90, tailcall)
uint64_t main_f_341c90(void* a0) {
    return main::sub_379400(((uintptr_t)((char*)(a0) + 272)));
}

// sub_349ef0  (orig 0x349ef0, tailcall)
void main_f_349ef0() { main::sub_3463b0(); }

// sub_34b260  (orig 0x34b260, tailcall)
uint64_t main_f_34b260(void* a0) {
    return main::sub_3b3970(((uintptr_t)((char*)(a0) + 24)));
}

// sub_34d760  (orig 0x34d760, tailcall)
void main_f_34d760() { main::sub_3518d0(); }

// sub_34d770  (orig 0x34d770, tailcall)
uint64_t main_f_34d770(void* a0) {
    return main::sub_3518d0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_351ea0  (orig 0x351ea0, tailcall)
uint64_t main_f_351ea0(void* a0) {
    return main::sub_3518d0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_354bc0  (orig 0x354bc0, tailcall)
uint64_t main_f_354bc0(void* a0) {
    return main::sub_3549e0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_354bd0  (orig 0x354bd0, tailcall)
uint64_t main_f_354bd0(void* a0) {
    return main::sub_3c57e0(((uintptr_t)(*(uint32_t*)((char*)(a0) + 16))));
}

// sub_355d50  (orig 0x355d50, tailcall)
uint64_t main_f_355d50(void* a0) {
    return main::sub_3c5a70(((uintptr_t)(*(uint32_t*)((char*)(a0) + 16))));
}

// sub_356a80  (orig 0x356a80, tailcall)
void main_f_356a80() { main::sub_384140(); }

// sub_356f70  (orig 0x356f70, tailcall)
void main_f_356f70() { main::sub_3862d0(); }

// sub_357af0  (orig 0x357af0, tailcall)
void main_f_357af0() { main::sub_33d8a0(); }

// sub_35d720  (orig 0x35d720, tailcall)
uint64_t main_f_35d720(void* a0) {
    return main::sub_35d580(((uintptr_t)((char*)(a0) - 24)));
}

// sub_35ff00  (orig 0x35ff00, tailcall)
uint64_t main_f_35ff00(void* a0) {
    return main::sub_3627c0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_362780  (orig 0x362780, tailcall)
uint64_t main_f_362780(void* a0) {
    return main::sub_3627c0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_362920  (orig 0x362920, tailcall)
uint64_t main_f_362920(void* a0) {
    return main::sub_3627c0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_3629a0  (orig 0x3629a0, tailcall)
uint64_t main_f_3629a0(void* a0) {
    return main::sub_3627c0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_362c60  (orig 0x362c60, tailcall)
uint64_t main_f_362c60(void* a0) {
    return main::sub_360ba0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_362c70  (orig 0x362c70, tailcall)
uint64_t main_f_362c70(void* a0) {
    return main::sub_360ba0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_362ca0  (orig 0x362ca0, tailcall)
uint64_t main_f_362ca0(void* a0) {
    return main::sub_304740(((uintptr_t)(*(uint32_t*)((char*)(a0) + 8))));
}

// sub_362cb0  (orig 0x362cb0, tailcall)
void main_f_362cb0() { main::sub_ce0(); }

// sub_363790  (orig 0x363790, tailcall)
uint64_t main_f_363790(void* a0) {
    return main::sub_3636d0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_368b10  (orig 0x368b10, tailcall)
void main_f_368b10() { main::sub_37cdf0(); }

// sub_369b20  (orig 0x369b20, tailcall)
uint64_t main_f_369b20(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 72));
    return main::sub_34fc50(((uintptr_t)(*(uint64_t*)((char*)(p0) + 32))));
}

// sub_369b30  (orig 0x369b30, tailcall)
uint64_t main_f_369b30(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 64));
    return main::sub_34fc50(((uintptr_t)(*(uint64_t*)((char*)(p0) + 32))));
}

// sub_36d780  (orig 0x36d780, tailcall)
void main_f_36d780() { main::sub_ce0(); }

// sub_36e290  (orig 0x36e290, tailcall)
void main_f_36e290() { main::sub_ce0(); }

// sub_36ff80  (orig 0x36ff80, tailcall)
void main_f_36ff80() { main::sub_ce0(); }

// sub_36ffb0  (orig 0x36ffb0, tailcall)
void main_f_36ffb0() { main::sub_ce0(); }

// sub_3705d0  (orig 0x3705d0, tailcall)
void main_f_3705d0() { main::sub_ce0(); }

// sub_3705e0  (orig 0x3705e0, tailcall)
void main_f_3705e0() { main::sub_ce0(); }

// sub_370b00  (orig 0x370b00, tailcall)
void main_f_370b00() { main::sub_ce0(); }

// sub_370b30  (orig 0x370b30, tailcall)
void main_f_370b30() { main::sub_ce0(); }

// sub_371070  (orig 0x371070, tailcall)
void main_f_371070() { main::sub_ce0(); }

// sub_371080  (orig 0x371080, tailcall)
void main_f_371080() { main::sub_ce0(); }

// sub_371510  (orig 0x371510, tailcall)
void main_f_371510() { main::sub_ce0(); }

// sub_371520  (orig 0x371520, tailcall)
void main_f_371520() { main::sub_ce0(); }

// sub_37df30  (orig 0x37df30, tailcall)
void main_f_37df30() { main::sub_32ee10(); }

// sub_37e190  (orig 0x37e190, tailcall)
uint64_t main_f_37e190(void* a0) {
    return main::sub_37e0e0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_3820c0  (orig 0x3820c0, tailcall)
uint64_t main_f_3820c0(void* a0) {
    return main::sub_381d40(((uintptr_t)((char*)(a0) - 24)));
}

// sub_388e60  (orig 0x388e60, tailcall)
void main_f_388e60() { main::sub_3a44a0(); }

// sub_38b5c0  (orig 0x38b5c0, tailcall)
uint64_t main_f_38b5c0(void* a0) {
    return main::sub_38b400(((uintptr_t)((char*)(a0) - 24)));
}

// sub_38ca60  (orig 0x38ca60, tailcall)
uint64_t main_f_38ca60(void* a0) {
    return main::sub_38c900(((uintptr_t)((char*)(a0) - 24)));
}

// sub_38dcc0  (orig 0x38dcc0, tailcall)
uint64_t main_f_38dcc0(void* a0) {
    return main::sub_38d590(((uintptr_t)((char*)(a0) - 24)));
}

// sub_38dde0  (orig 0x38dde0, tailcall)
uint64_t main_f_38dde0(void* a0) {
    return main::sub_38dcd0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_38e980  (orig 0x38e980, tailcall)
void main_f_38e980() { main::sub_363530(); }

// sub_394cc0  (orig 0x394cc0, tailcall)
void main_f_394cc0() { main::sub_ce0(); }

// sub_394f00  (orig 0x394f00, tailcall)
void main_f_394f00() { main::sub_ce0(); }

// sub_3953d0  (orig 0x3953d0, tailcall)
void main_f_3953d0() { main::sub_ce0(); }

// sub_39f670  (orig 0x39f670, tailcall)
void main_f_39f670() { main::sub_ce0(); }

// sub_39f680  (orig 0x39f680, tailcall)
void main_f_39f680() { main::sub_ce0(); }

// sub_3a1d50  (orig 0x3a1d50, tailcall)
void main_f_3a1d50() { main::sub_ce0(); }

// sub_3a1d60  (orig 0x3a1d60, tailcall)
void main_f_3a1d60() { main::sub_ce0(); }

// sub_3a2360  (orig 0x3a2360, tailcall)
void main_f_3a2360() { main::sub_ce0(); }

// sub_3a2390  (orig 0x3a2390, tailcall)
void main_f_3a2390() { main::sub_ce0(); }

// sub_3a28c0  (orig 0x3a28c0, tailcall)
void main_f_3a28c0() { main::sub_ce0(); }

// sub_3a28d0  (orig 0x3a28d0, tailcall)
void main_f_3a28d0() { main::sub_ce0(); }

// sub_3a2e00  (orig 0x3a2e00, tailcall)
void main_f_3a2e00() { main::sub_ce0(); }

// sub_3a2e10  (orig 0x3a2e10, tailcall)
void main_f_3a2e10() { main::sub_ce0(); }

// sub_3a32a0  (orig 0x3a32a0, tailcall)
void main_f_3a32a0() { main::sub_ce0(); }

// sub_3a32b0  (orig 0x3a32b0, tailcall)
void main_f_3a32b0() { main::sub_ce0(); }

// sub_3a5d50  (orig 0x3a5d50, tailcall)
void main_f_3a5d50() { main::sub_ce0(); }

// sub_3a6f90  (orig 0x3a6f90, tailcall)
uint64_t main_f_3a6f90(void* a0) {
    return main::sub_3a7f50(((uintptr_t)((char*)(a0) + 184)));
}

// sub_3a6fa0  (orig 0x3a6fa0, tailcall)
uint64_t main_f_3a6fa0(void* a0) {
    return main::sub_3a7f80(((uintptr_t)((char*)(a0) + 184)));
}

// sub_3a7300  (orig 0x3a7300, tailcall)
void main_f_3a7300() { main::sub_37e0e0(); }

// sub_3a7310  (orig 0x3a7310, tailcall)
uint64_t main_f_3a7310(void* a0) {
    return main::sub_37e0e0(((uintptr_t)((char*)(a0) - 24)));
}

// sub_3bd690  (orig 0x3bd690, tailcall)
uint64_t main_f_3bd690(void* a0) {
    return main::sub_34d6a0(((uintptr_t)((char*)(a0) + 216)));
}

// sub_3bd6a0  (orig 0x3bd6a0, tailcall)
void main_f_3bd6a0() { main::sub_349ab0(); }

// sub_3c20e0  (orig 0x3c20e0, tailcall)
void main_f_3c20e0() { main::sub_363530(); }

// sub_3c5b00  (orig 0x3c5b00, tailcall)
uint64_t main_f_3c5b00(uint64_t a0) {
    return main::sub_3c5b10(((uintptr_t)(1)));
}

// sub_3c8ec0  (orig 0x3c8ec0, tailcall)
void main_f_3c8ec0() { main::sub_34e6e0(); }

// sub_3c9fe0  (orig 0x3c9fe0, tailcall)
uint64_t main_f_3c9fe0(void* a0) {
    return main::sub_3ca420(((uintptr_t)((char*)(a0) + 40)));
}

// sub_3c9ff0  (orig 0x3c9ff0, tailcall)
uint64_t main_f_3c9ff0(void* a0) {
    return main::sub_3ca2c0(((uintptr_t)((char*)(a0) + 40)));
}

// sub_3ca200  (orig 0x3ca200, tailcall)
void main_f_3ca200() { main::sub_32ee10(); }

// sub_3ca210  (orig 0x3ca210, tailcall)
void main_f_3ca210() { main::sub_32ee10(); }

// sub_3cbcd0  (orig 0x3cbcd0, tailcall)
uint64_t main_f_3cbcd0(void* a0) {
    return main::sub_369110(((uintptr_t)((char*)(a0) + 64)));
}

// sub_3cd320  (orig 0x3cd320, tailcall)
void main_f_3cd320() { main::sub_ce0(); }

// sub_3d11d0  (orig 0x3d11d0, tailcall)
uint64_t main_f_3d11d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 32));
    return main::sub_395a20(((uintptr_t)(*(uint64_t*)((char*)(p0) + 16))));
}

// sub_3d11e0  (orig 0x3d11e0, tailcall)
uint64_t main_f_3d11e0(void* a0) {
    return main::sub_34fdc0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 32))));
}

// sub_3d1210  (orig 0x3d1210, tailcall)
uint64_t main_f_3d1210(void* a0) {
    return main::sub_34fc00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 32))));
}

// sub_3d1300  (orig 0x3d1300, tailcall)
uint64_t main_f_3d1300(void* a0) {
    return main::sub_34fc50(((uintptr_t)(*(uint64_t*)((char*)(a0) + 32))));
}

// sub_3d1350  (orig 0x3d1350, tailcall)
uint64_t main_f_3d1350(void* a0) {
    return main::sub_3ce490(((uintptr_t)((char*)(a0) + 16)));
}

// sub_3d1360  (orig 0x3d1360, tailcall)
uint64_t main_f_3d1360(void* a0) {
    return main::sub_3ce3e0(((uintptr_t)((char*)(a0) + 16)));
}

// sub_3d14c0  (orig 0x3d14c0, tailcall)
void main_f_3d14c0() { main::sub_3cf7b0(); }

// sub_3d1bb0  (orig 0x3d1bb0, tailcall)
uint64_t main_f_3d1bb0(void* a0) {
    return main::sub_3d17f0(((uintptr_t)((char*)(a0) - 192)));
}

// sub_3d43c0  (orig 0x3d43c0, tailcall)
uint64_t main_f_3d43c0(void* a0) {
    return main::sub_3d4310(((uintptr_t)((char*)(a0) - 192)));
}

// sub_3d57c0  (orig 0x3d57c0, tailcall)
void main_f_3d57c0() { main::sub_32ee10(); }

// sub_3d5810  (orig 0x3d5810, tailcall)
void main_f_3d5810() { main::sub_32ee10(); }

// sub_3dc6d0  (orig 0x3dc6d0, tailcall)
uint64_t main_f_3dc6d0(void* a0) {
    return main::sub_3d6cf0(((uintptr_t)((char*)(a0) + 160)));
}

// sub_3de1a0  (orig 0x3de1a0, tailcall)
void main_f_3de1a0() { main::sub_3cc3a0(); }

// sub_3df850  (orig 0x3df850, tailcall)
uint64_t main_f_3df850(void* a0) {
    *(uint16_t*)((char*)(a0) + 152) = 0;
    return main::sub_3cd0c0(((uintptr_t)(a0)));
}

// sub_3dfc50  (orig 0x3dfc50, tailcall)
uint64_t main_f_3dfc50(void* a0) {
    return main::sub_3dfb80(((uintptr_t)((char*)(a0) - 40)));
}

// sub_3dfc60  (orig 0x3dfc60, tailcall)
uint64_t main_f_3dfc60(void* a0) {
    return main::sub_3dfb80(((uintptr_t)((char*)(a0) - 48)));
}

// sub_3e0550  (orig 0x3e0550, tailcall)
uint64_t main_f_3e0550(void* a0) {
    return main::sub_3e03b0(((uintptr_t)((char*)(a0) - 40)));
}

// sub_3e0700  (orig 0x3e0700, tailcall)
void main_f_3e0700() { main::sub_32ee10(); }

// sub_3e0770  (orig 0x3e0770, tailcall)
uint64_t main_f_3e0770(void* a0) {
    return main::sub_38ddf0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_3e0790  (orig 0x3e0790, tailcall)
uint64_t main_f_3e0790(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return main::sub_395a20(((uintptr_t)(*(uint64_t*)((char*)(p0) + 40))));
}

// sub_3e07a0  (orig 0x3e07a0, tailcall)
uint64_t main_f_3e07a0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return main::sub_34fdc0(((uintptr_t)((char*)(p0) + 24)));
}

// sub_3e0810  (orig 0x3e0810, tailcall)
uint64_t main_f_3e0810(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return main::sub_34fc00(((uintptr_t)((char*)(p0) + 24)));
}

// sub_3e08c0  (orig 0x3e08c0, tailcall)
uint64_t main_f_3e08c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 24));
    return main::sub_34fc50(((uintptr_t)((char*)(p0) + 24)));
}

// sub_3e08d0  (orig 0x3e08d0, tailcall)
void main_f_3e08d0() { main::sub_32ee10(); }

// sub_3e0940  (orig 0x3e0940, tailcall)
uint64_t main_f_3e0940(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) - 24));
    return main::sub_395a20(((uintptr_t)(*(uint64_t*)((char*)(p0) + 40))));
}

// sub_3e0950  (orig 0x3e0950, tailcall)
uint64_t main_f_3e0950(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) - 24));
    return main::sub_34fdc0(((uintptr_t)((char*)(p0) + 24)));
}

// sub_3e0980  (orig 0x3e0980, tailcall)
uint64_t main_f_3e0980(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) - 24));
    return main::sub_34fc00(((uintptr_t)((char*)(p0) + 24)));
}

// sub_3e0a70  (orig 0x3e0a70, tailcall)
uint64_t main_f_3e0a70(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) - 24));
    return main::sub_34fc50(((uintptr_t)((char*)(p0) + 24)));
}

// sub_3e0aa0  (orig 0x3e0aa0, tailcall)
uint64_t main_f_3e0aa0(void* a0) {
    return main::sub_38ddf0(((uintptr_t)(*(uint64_t*)((char*)(a0) - 24))));
}

// sub_3e0ac0  (orig 0x3e0ac0, tailcall)
void main_f_3e0ac0() { main::sub_ce0(); }

// sub_3e1fb0  (orig 0x3e1fb0, tailcall)
uint64_t main_f_3e1fb0(void* a0) {
    return main::sub_3e1e50(((uintptr_t)((char*)(a0) - 88)));
}

// sub_3e1fc0  (orig 0x3e1fc0, tailcall)
uint64_t main_f_3e1fc0(void* a0) {
    return main::sub_3e1e50(((uintptr_t)((char*)(a0) - 112)));
}

// sub_3e2690  (orig 0x3e2690, tailcall)
uint64_t main_f_3e2690(void* a0) {
    return main::sub_3e25d0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_3e2c00  (orig 0x3e2c00, tailcall)
void main_f_3e2c00() { main::sub_3c2c10(); }

// sub_3e2c10  (orig 0x3e2c10, tailcall)
void main_f_3e2c10() { main::sub_3c2c30(); }

// sub_3e2c60  (orig 0x3e2c60, tailcall)
uint64_t main_f_3e2c60(void* a0) {
    return main::sub_3c2c10(((uintptr_t)((char*)(a0) - 88)));
}

// sub_3e2c70  (orig 0x3e2c70, tailcall)
uint64_t main_f_3e2c70(void* a0) {
    return main::sub_3c2c30(((uintptr_t)((char*)(a0) - 88)));
}

// sub_3e2d20  (orig 0x3e2d20, tailcall)
void main_f_3e2d20() { main::sub_ce0(); }

// sub_3f4900  (orig 0x3f4900, tailcall)
uint64_t main_f_3f4900(void* a0) {
    return main::sub_3f4910(((uintptr_t)((char*)(a0) + 224)));
}

// sub_3f4c70  (orig 0x3f4c70, tailcall)
uint64_t main_f_3f4c70(void* a0) {
    return main::sub_3e5be0(((uintptr_t)((char*)(a0) + 240)));
}

// sub_3f5550  (orig 0x3f5550, tailcall)
void main_f_3f5550() { main::sub_ce0(); }

// sub_3f7660  (orig 0x3f7660, tailcall)
void main_f_3f7660() { main::sub_ce0(); }

// sub_3fcc50  (orig 0x3fcc50, tailcall)
uint64_t main_f_3fcc50(void* a0) {
    return main::sub_3fc760(((uintptr_t)((char*)(a0) - 112)));
}

// sub_3fcda0  (orig 0x3fcda0, tailcall)
uint64_t main_f_3fcda0(void* a0) {
    return main::sub_3fcc60(((uintptr_t)((char*)(a0) - 112)));
}

// sub_3fcfe0  (orig 0x3fcfe0, tailcall)
uint64_t main_f_3fcfe0(void* a0) {
    return main::sub_3fcf30(((uintptr_t)((char*)(a0) - 112)));
}

// sub_3fd880  (orig 0x3fd880, tailcall)
uint64_t main_f_3fd880(void* a0) {
    return main::sub_3fd7a0(((uintptr_t)((char*)(a0) - 112)));
}

// sub_3fe250  (orig 0x3fe250, tailcall)
void main_f_3fe250() { main::sub_ce0(); }

// sub_3ff900  (orig 0x3ff900, tailcall)
void main_f_3ff900() { main::sub_ce0(); }

// sub_3fff20  (orig 0x3fff20, tailcall)
void main_f_3fff20() { main::sub_3fa180(); }

// sub_3fff60  (orig 0x3fff60, tailcall)
void main_f_3fff60() { main::sub_3fa1d0(); }

// sub_400510  (orig 0x400510, tailcall)
void main_f_400510() { main::sub_3fb3e0(); }

// sub_400520  (orig 0x400520, tailcall)
uint64_t main_f_400520(void* a0) {
    return main::sub_3fb3e0(((uintptr_t)((char*)(a0) - 112)));
}

// sub_400610  (orig 0x400610, tailcall)
uint64_t main_f_400610(void* a0) {
    return main::sub_400590(((uintptr_t)((char*)(a0) - 112)));
}

// sub_400690  (orig 0x400690, tailcall)
uint64_t main_f_400690(void* a0) {
    return main::sub_400620(((uintptr_t)((char*)(a0) - 112)));
}

// sub_400960  (orig 0x400960, tailcall)
void main_f_400960() { main::sub_3fc0a0(); }

// sub_400970  (orig 0x400970, tailcall)
uint64_t main_f_400970(void* a0) {
    return main::sub_3fc0a0(((uintptr_t)((char*)(a0) - 112)));
}

// sub_401dc0  (orig 0x401dc0, tailcall)
uint64_t main_f_401dc0(void* a0) {
    return main::sub_401d20(((uintptr_t)((char*)(a0) - 112)));
}

// sub_401f10  (orig 0x401f10, tailcall)
uint64_t main_f_401f10(void* a0) {
    return main::sub_401e70(((uintptr_t)((char*)(a0) - 112)));
}

// sub_4071a0  (orig 0x4071a0, tailcall)
void main_f_4071a0() { main::sub_4071b0(); }

// sub_418b70  (orig 0x418b70, tailcall)
void main_f_418b70() { main::GPUPostEffect_cpp_d_PPFX_ERROR_18(); }

// sub_423b80  (orig 0x423b80, tailcall)
uint64_t main_f_423b80(void* a0) {
    return main::sub_4534a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 408))));
}

// sub_445af0  (orig 0x445af0, tailcall)
void main_f_445af0() { main::GPUInterfaceSurface_2(); }

// sub_445df0  (orig 0x445df0, tailcall)
void main_f_445df0() { main::sub_ce0(); }

// sub_445f60  (orig 0x445f60, tailcall)
void main_f_445f60() { main::sub_446440(); }

// sub_445fc0  (orig 0x445fc0, tailcall)
void main_f_445fc0() { main::sub_446680(); }

// sub_49a1b0  (orig 0x49a1b0, tailcall)
uint64_t main_f_49a1b0(void* a0) {
    return main::sub_44e630(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_49a1c0  (orig 0x49a1c0, tailcall)
uint64_t main_f_49a1c0(void* a0) {
    return main::sub_44e750(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_49a1d0  (orig 0x49a1d0, tailcall)
uint64_t main_f_49a1d0(void* a0) {
    return main::sub_44e870(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_49a1e0  (orig 0x49a1e0, tailcall)
uint64_t main_f_49a1e0(void* a0) {
    return main::sub_44e960(((uintptr_t)(*(uint64_t*)((char*)(a0) + 120))));
}

// sub_4b9810  (orig 0x4b9810, tailcall)
void main_f_4b9810() { main::sub_ce0(); }

// sub_4b9aa0  (orig 0x4b9aa0, tailcall)
void main_f_4b9aa0() { main::sub_ce0(); }

// sub_4c6fc0  (orig 0x4c6fc0, tailcall)
uint64_t main_f_4c6fc0(void* a0) {
    return main::SiCore_String_17(((uintptr_t)((char*)(a0) - 8)));
}

// sub_4c94c0  (orig 0x4c94c0, tailcall)
void main_f_4c94c0() { main::SiCore_String_23(); }

// sub_4ce580  (orig 0x4ce580, tailcall)
uint64_t main_f_4ce580(void* a0) {
    return main::sub_4c4700(((uintptr_t)((char*)(a0) + 232)));
}

// sub_4cfed0  (orig 0x4cfed0, tailcall)
void main_f_4cfed0() { main::sub_ce0(); }

// sub_4dc030  (orig 0x4dc030, tailcall)
uint64_t main_f_4dc030(void* a0) {
    return main::SiCore_Array_84(((uintptr_t)((char*)(a0) - 8)));
}

// sub_4dc040  (orig 0x4dc040, tailcall)
uint64_t main_f_4dc040(void* a0) {
    return main::SiCore_Array_84(((uintptr_t)((char*)(a0) - 16)));
}

// sub_4dc050  (orig 0x4dc050, tailcall)
uint64_t main_f_4dc050(void* a0) {
    return main::SiCore_Array_84(((uintptr_t)((char*)(a0) - 24)));
}

// sub_4dc0a0  (orig 0x4dc0a0, tailcall)
void main_f_4dc0a0() { main::sub_4dc9e0(); }

// sub_4dc8f0  (orig 0x4dc8f0, tailcall)
uint64_t main_f_4dc8f0(void* a0) {
    return main::SiCore_String_46(((uintptr_t)((char*)(a0) - 8)));
}

// sub_4dc900  (orig 0x4dc900, tailcall)
uint64_t main_f_4dc900(void* a0) {
    return main::SiCore_String_46(((uintptr_t)((char*)(a0) - 16)));
}

// sub_4dc910  (orig 0x4dc910, tailcall)
uint64_t main_f_4dc910(void* a0) {
    return main::SiCore_String_46(((uintptr_t)((char*)(a0) - 24)));
}

// sub_4dce50  (orig 0x4dce50, tailcall)
uint64_t main_f_4dce50(void* a0) {
    return main::SiCore_Array_89(((uintptr_t)((char*)(a0) - 8)));
}

// sub_4dce60  (orig 0x4dce60, tailcall)
uint64_t main_f_4dce60(void* a0) {
    return main::SiCore_Array_89(((uintptr_t)((char*)(a0) - 16)));
}

// sub_4dce70  (orig 0x4dce70, tailcall)
uint64_t main_f_4dce70(void* a0) {
    return main::SiCore_Array_89(((uintptr_t)((char*)(a0) - 24)));
}

// sub_4dcf40  (orig 0x4dcf40, tailcall)
void main_f_4dcf40() { main::sub_4dc9e0(); }

// sub_4dd400  (orig 0x4dd400, tailcall)
void main_f_4dd400() { main_f_4dd6e0(); }

// sub_4dd410  (orig 0x4dd410, tailcall)
void main_f_4dd410() { main::SiCore_Array_92(); }

// sub_4dd670  (orig 0x4dd670, tailcall)
uint64_t main_f_4dd670(void* a0) {
    return main::SiCore_Array_91(((uintptr_t)((char*)(a0) - 8)));
}

// sub_4dd680  (orig 0x4dd680, tailcall)
uint64_t main_f_4dd680(void* a0) {
    return main::SiCore_Array_91(((uintptr_t)((char*)(a0) - 16)));
}

// sub_4dd690  (orig 0x4dd690, tailcall)
uint64_t main_f_4dd690(void* a0) {
    return main::SiCore_Array_91(((uintptr_t)((char*)(a0) - 24)));
}

// sub_4dd6e0  (orig 0x4dd6e0, tailcall)
void main_f_4dd6e0() { main::sub_4dc9e0(); }

// sub_4ddb90  (orig 0x4ddb90, tailcall)
void main_f_4ddb90() { main::sub_4de030(); }

// sub_4ddba0  (orig 0x4ddba0, tailcall)
void main_f_4ddba0() { main::SiCore_Array_95(); }

// sub_4ddf40  (orig 0x4ddf40, tailcall)
uint64_t main_f_4ddf40(void* a0) {
    return main::SiCore_Array_93(((uintptr_t)((char*)(a0) - 8)));
}

// sub_4ddf50  (orig 0x4ddf50, tailcall)
uint64_t main_f_4ddf50(void* a0) {
    return main::SiCore_Array_93(((uintptr_t)((char*)(a0) - 16)));
}

// sub_4ddf60  (orig 0x4ddf60, tailcall)
uint64_t main_f_4ddf60(void* a0) {
    return main::SiCore_Array_93(((uintptr_t)((char*)(a0) - 24)));
}

// sub_4de8e0  (orig 0x4de8e0, tailcall)
void main_f_4de8e0() { main::sub_4de030(); }

// sub_4de8f0  (orig 0x4de8f0, tailcall)
void main_f_4de8f0() { main::SiCore_Array_95(); }

// sub_4ded00  (orig 0x4ded00, tailcall)
void main_f_4ded00() { main_f_4dd6e0(); }

// sub_4ded10  (orig 0x4ded10, tailcall)
void main_f_4ded10() { main::SiCore_Array_92(); }

// sub_4df060  (orig 0x4df060, tailcall)
void main_f_4df060() { main::sub_4de030(); }

// sub_4df070  (orig 0x4df070, tailcall)
void main_f_4df070() { main::SiCore_Array_95(); }

// sub_4df900  (orig 0x4df900, tailcall)
void main_f_4df900() { main::SiCore_Array_92(); }

// sub_4dff20  (orig 0x4dff20, tailcall)
void main_f_4dff20() { main::sub_4dc9e0(); }

// sub_4dff30  (orig 0x4dff30, tailcall)
void main_f_4dff30() { main::SiCore_String_47(); }

// sub_4e0350  (orig 0x4e0350, tailcall)
void main_f_4e0350() { main::sub_4e0860(); }

// sub_4e0360  (orig 0x4e0360, tailcall)
void main_f_4e0360() { main::SiCore_Array_100(); }

// sub_4e0770  (orig 0x4e0770, tailcall)
uint64_t main_f_4e0770(void* a0) {
    return main::SiCore_Array_98(((uintptr_t)((char*)(a0) - 8)));
}

// sub_4e0780  (orig 0x4e0780, tailcall)
uint64_t main_f_4e0780(void* a0) {
    return main::SiCore_Array_98(((uintptr_t)((char*)(a0) - 16)));
}

// sub_4e0790  (orig 0x4e0790, tailcall)
uint64_t main_f_4e0790(void* a0) {
    return main::SiCore_Array_98(((uintptr_t)((char*)(a0) - 24)));
}

// sub_4e1300  (orig 0x4e1300, tailcall)
uint64_t main_f_4e1300(void* a0) {
    return main::SiCore_Array_103(((uintptr_t)((char*)(a0) - 8)));
}

// sub_4e1310  (orig 0x4e1310, tailcall)
uint64_t main_f_4e1310(void* a0) {
    return main::SiCore_Array_103(((uintptr_t)((char*)(a0) - 16)));
}

// sub_4e1320  (orig 0x4e1320, tailcall)
uint64_t main_f_4e1320(void* a0) {
    return main::SiCore_Array_103(((uintptr_t)((char*)(a0) - 24)));
}

// sub_4f1780  (orig 0x4f1780, tailcall)
uint64_t main_f_4f1780(void* a0) {
    return main::SiCore_String_69(((uintptr_t)((char*)(a0) - 8)));
}

// sub_4fbaa0  (orig 0x4fbaa0, tailcall)
uint64_t main_f_4fbaa0(void* a0) {
    return main::SiCore_String_72(((uintptr_t)((char*)(a0) - 8)));
}

// sub_4fe940  (orig 0x4fe940, tailcall)
void main_f_4fe940() { main::sub_534430(); }

// sub_4ff660  (orig 0x4ff660, tailcall)
uint64_t main_f_4ff660(void* a0) {
    return main::SiCore_String_73(((uintptr_t)((char*)(a0) - 8)));
}

// sub_4ffbe0  (orig 0x4ffbe0, tailcall)
uint64_t main_f_4ffbe0(void* a0) {
    return main::sub_500890(((uintptr_t)((char*)(a0) + 120)));
}

// sub_50ae00  (orig 0x50ae00, tailcall)
void main_f_50ae00() { main::sub_8c0(); }

// sub_5168e0  (orig 0x5168e0, tailcall)
void main_f_5168e0() { main::sub_502810(); }

// sub_5205a0  (orig 0x5205a0, tailcall)
void main_f_5205a0() { main::sub_502810(); }

// sub_522790  (orig 0x522790, tailcall)
uint64_t main_f_522790(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 296));
    return main::sub_502820(((uintptr_t)(*(uint64_t*)((char*)(p0)))));
}

// sub_530d70  (orig 0x530d70, tailcall)
uint64_t main_f_530d70(void* a0) {
    return main::sub_5082e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))));
}

// sub_536390  (orig 0x536390, tailcall)
void main_f_536390() { main::sub_ce0(); }

// sub_5363a0  (orig 0x5363a0, tailcall)
void main_f_5363a0() { main::sub_ce0(); }

// sub_5363b0  (orig 0x5363b0, tailcall)
void main_f_5363b0() { main::sub_ce0(); }

// sub_536db0  (orig 0x536db0, tailcall)
void main_f_536db0() { main::sub_534430(); }

// sub_5374e0  (orig 0x5374e0, tailcall)
uint64_t main_f_5374e0(void* a0) {
    return main::SiCore_String_80(((uintptr_t)((char*)(a0) - 8)));
}

// sub_538f50  (orig 0x538f50, tailcall)
void main_f_538f50() { main::sub_534430(); }

// sub_540630  (orig 0x540630, tailcall)
uint64_t main_f_540630(uint64_t a0) {
    return main::sub_5472d0(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_540640  (orig 0x540640, tailcall)
uint64_t main_f_540640(uint64_t a0) {
    return main::sub_5474b0(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_540650  (orig 0x540650, tailcall)
uint64_t main_f_540650(uint64_t a0) {
    return main::sub_547760(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_540660  (orig 0x540660, tailcall)
uint64_t main_f_540660(uint64_t a0) {
    return main::sub_547810(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_540670  (orig 0x540670, tailcall)
uint64_t main_f_540670(uint64_t a0) {
    return main::sub_5478f0(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_540680  (orig 0x540680, tailcall)
uint64_t main_f_540680(uint64_t a0) {
    return main::sub_547930(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_540690  (orig 0x540690, tailcall)
uint64_t main_f_540690(uint64_t a0) {
    return main::sub_547a40(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_5406a0  (orig 0x5406a0, tailcall)
uint64_t main_f_5406a0(uint64_t a0) {
    return main::sub_547b60(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_5406b0  (orig 0x5406b0, tailcall)
uint64_t main_f_5406b0(uint64_t a0) {
    return main::sub_547ca0(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_5406c0  (orig 0x5406c0, tailcall)
uint64_t main_f_5406c0(uint64_t a0) {
    return main::sub_547df0(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_5406d0  (orig 0x5406d0, tailcall)
uint64_t main_f_5406d0(uint64_t a0) {
    return main::sub_547f50(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_5406e0  (orig 0x5406e0, tailcall)
uint64_t main_f_5406e0(uint64_t a0) {
    return main::sub_5480c0(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_5406f0  (orig 0x5406f0, tailcall)
uint64_t main_f_5406f0(uint64_t a0) {
    return main::sub_548230(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_540700  (orig 0x540700, tailcall)
uint64_t main_f_540700(uint64_t a0) {
    return main::sub_548380(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_540710  (orig 0x540710, tailcall)
uint64_t main_f_540710(uint64_t a0) {
    return main::sub_5484f0(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_540750  (orig 0x540750, tailcall)
uint64_t main_f_540750(void* a0) {
    return main::sub_55ba30(((uintptr_t)((char*)(a0) + 48)));
}

// sub_5407a0  (orig 0x5407a0, tailcall)
uint64_t main_f_5407a0(uint64_t a0) {
    return main::sub_544010(((uintptr_t)((((uint64_t)a0)) + (14208))));
}

// sub_5407c0  (orig 0x5407c0, tailcall)
uint64_t main_f_5407c0(uint64_t a0) {
    return main::sub_544290(((uintptr_t)((((uint64_t)a0)) + (14208))));
}

// sub_5407d0  (orig 0x5407d0, tailcall)
uint64_t main_f_5407d0(uint64_t a0) {
    return main::sub_544540(((uintptr_t)((((uint64_t)a0)) + (14208))));
}

// sub_5407e0  (orig 0x5407e0, tailcall)
uint64_t main_f_5407e0(uint64_t a0) {
    return main::sub_544610(((uintptr_t)((((uint64_t)a0)) + (14208))));
}

// sub_5407f0  (orig 0x5407f0, tailcall)
uint64_t main_f_5407f0(uint64_t a0) {
    return main::sub_544b00(((uintptr_t)((((uint64_t)a0)) + (14208))));
}

// sub_540800  (orig 0x540800, tailcall)
uint64_t main_f_540800(uint64_t a0) {
    return main::sub_545910(((uintptr_t)((((uint64_t)a0)) + (14208))));
}

// sub_540810  (orig 0x540810, tailcall)
uint64_t main_f_540810(uint64_t a0) {
    return main::sub_548640(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_540820  (orig 0x540820, tailcall)
uint64_t main_f_540820(uint64_t a0) {
    return main::sub_54cab0(((uintptr_t)((((uint64_t)a0)) + (11376))));
}

// sub_551450  (orig 0x551450, tailcall)
uint32_t main_f_551450() { return main_f_50b0c0(); }

// sub_551810  (orig 0x551810, tailcall)
void main_f_551810() { main_f_50c2d0(); }

// sub_551820  (orig 0x551820, tailcall)
void main_f_551820() { main_f_50c2e0(); }

// sub_551830  (orig 0x551830, tailcall)
void main_f_551830() { main_f_50c2f0(); }

// sub_551840  (orig 0x551840, tailcall)
void main_f_551840() { main_f_50c300(); }

// sub_552a80  (orig 0x552a80, tailcall)
uint64_t main_f_552a80(void* a0) {
    return render::SiGfx_NX_MemoryHeap_Impl(((uintptr_t)((char*)(a0) - 8)));
}

// sub_5545e0  (orig 0x5545e0, tailcall)
void main_f_5545e0() { main::sub_534430(); }

// sub_555440  (orig 0x555440, tailcall)
void main_f_555440() { main::sub_534430(); }

// sub_5589d0  (orig 0x5589d0, tailcall)
void main_f_5589d0() { main::sub_534430(); }

// sub_558e20  (orig 0x558e20, tailcall)
uint64_t main_f_558e20(void* a0) {
    return main::SiCore_String_92(((uintptr_t)((char*)(a0) - 8)));
}

// sub_5594f0  (orig 0x5594f0, tailcall)
void main_f_5594f0() { main::sub_534430(); }

// sub_5598a0  (orig 0x5598a0, tailcall)
void main_f_5598a0() { main::sub_535330(); }

// sub_55c320  (orig 0x55c320, tailcall)
void main_f_55c320() { main::sub_534430(); }

// sub_55d6b0  (orig 0x55d6b0, tailcall)
void main_f_55d6b0() { main::sub_534430(); }

// sub_55f110  (orig 0x55f110, tailcall)
uint64_t main_f_55f110(void* a0) {
    return main::SiCore_String_106(((uintptr_t)((char*)(a0) - 8)));
}

// sub_55f120  (orig 0x55f120, tailcall)
uint64_t main_f_55f120(void* a0) {
    return main::SiCore_String_106(((uintptr_t)((char*)(a0) - 16)));
}

// sub_563800  (orig 0x563800, tailcall)
void main_f_563800() { main::sub_534430(); }

// sub_565660  (orig 0x565660, tailcall)
void main_f_565660() { main::sub_534430(); }

// sub_5856e0  (orig 0x5856e0, tailcall)
uint64_t main_f_5856e0(void* a0) {
    return main::sub_4c4700(((uintptr_t)((char*)(a0) + 136)));
}

// sub_59aeb0  (orig 0x59aeb0, tailcall)
uint64_t main_f_59aeb0(void* a0) {
    return main::sub_59a960(((uintptr_t)((char*)(a0) - 72)));
}

// sub_59b050  (orig 0x59b050, tailcall)
uint64_t main_f_59b050(void* a0) {
    return main::sub_59aec0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_59b7d0  (orig 0x59b7d0, tailcall)
void main_f_59b7d0() { main::sub_59b360(); }

// sub_59b850  (orig 0x59b850, tailcall)
uint64_t main_f_59b850(void* a0) {
    return main::sub_59b360(((uintptr_t)((char*)(a0) - 72)));
}

// sub_59b860  (orig 0x59b860, tailcall)
uint64_t main_f_59b860(void* a0) {
    return main::sub_59b360(((uintptr_t)((char*)(a0) - 72)));
}

// sub_59b950  (orig 0x59b950, tailcall)
uint64_t main_f_59b950(void* a0) {
    return main::sub_59b360(((uintptr_t)((char*)(a0) - 80)));
}

// sub_59b960  (orig 0x59b960, tailcall)
uint64_t main_f_59b960(void* a0) {
    return main::sub_59b360(((uintptr_t)((char*)(a0) - 80)));
}

// sub_59f2b0  (orig 0x59f2b0, tailcall)
uint64_t main_f_59f2b0(void* a0) {
    return main::sub_5a8370(((uintptr_t)(*(uint64_t*)((char*)(a0) + 432))));
}

// sub_59f2f0  (orig 0x59f2f0, tailcall)
uint64_t main_f_59f2f0(void* a0) {
    return main::sub_5a90c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 400))));
}

// sub_5a8730  (orig 0x5a8730, tailcall)
void main_f_5a8730() { main::sub_ce0(); }

// sub_5a9a70  (orig 0x5a9a70, tailcall)
void main_f_5a9a70() { main::sub_ce0(); }

// sub_5abb10  (orig 0x5abb10, tailcall)
void main_f_5abb10() { main::sub_ce0(); }

// sub_5b0ea0  (orig 0x5b0ea0, tailcall)
uint64_t main_f_5b0ea0(void* a0) {
    return main::sub_5b0a20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5b1390  (orig 0x5b1390, tailcall)
uint64_t main_f_5b1390(void* a0) {
    return main::sub_5b1140(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5b18d0  (orig 0x5b18d0, tailcall)
uint64_t main_f_5b18d0(void* a0) {
    return main::sub_5b1680(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5b27b0  (orig 0x5b27b0, tailcall)
void main_f_5b27b0() { main::sub_5b2530(); }

// sub_5b2ac0  (orig 0x5b2ac0, tailcall)
uint64_t main_f_5b2ac0(void* a0) {
    return main::sub_5b2530(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5b2ad0  (orig 0x5b2ad0, tailcall)
uint64_t main_f_5b2ad0(void* a0) {
    return main::sub_5b2530(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5b2e30  (orig 0x5b2e30, tailcall)
uint64_t main_f_5b2e30(void* a0) {
    return main::sub_5b2530(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5b2e40  (orig 0x5b2e40, tailcall)
uint64_t main_f_5b2e40(void* a0) {
    return main::sub_5b2530(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5b2f10  (orig 0x5b2f10, tailcall)
void main_f_5b2f10() { main::sub_5b2f90(); }

// sub_5b2f20  (orig 0x5b2f20, tailcall)
void main_f_5b2f20() { main::sub_5b2f90(); }

// sub_5b50f0  (orig 0x5b50f0, tailcall)
uint64_t main_f_5b50f0(void* a0) {
    return main::sub_5b6b20(((uintptr_t)(*(uint64_t*)((char*)(a0) + 432))));
}

// sub_5b5120  (orig 0x5b5120, tailcall)
uint64_t main_f_5b5120(void* a0) {
    return main::sub_5b6eb0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 432))));
}

// sub_5bf670  (orig 0x5bf670, tailcall)
void main_f_5bf670() { main::sub_5bf500(); }

// sub_5bf6f0  (orig 0x5bf6f0, tailcall)
uint64_t main_f_5bf6f0(void* a0) {
    return main::sub_5bf500(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5bf700  (orig 0x5bf700, tailcall)
uint64_t main_f_5bf700(void* a0) {
    return main::sub_5bf500(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5bf7f0  (orig 0x5bf7f0, tailcall)
uint64_t main_f_5bf7f0(void* a0) {
    return main::sub_5bf500(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5bf800  (orig 0x5bf800, tailcall)
uint64_t main_f_5bf800(void* a0) {
    return main::sub_5bf500(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5c19a0  (orig 0x5c19a0, tailcall)
void main_f_5c19a0() { main::sub_5c1b90(); }

// sub_5c1ab0  (orig 0x5c1ab0, tailcall)
void main_f_5c1ab0() { main::sub_5c1b90(); }

// sub_5c1ac0  (orig 0x5c1ac0, tailcall)
void main_f_5c1ac0() { main::sub_5c1b90(); }

// sub_5c6860  (orig 0x5c6860, tailcall)
void main_f_5c6860() { main::sub_ce0(); }

// sub_5c83e0  (orig 0x5c83e0, tailcall)
uint64_t main_f_5c83e0(void* a0) {
    return main::sub_5cb430(((uintptr_t)(*(uint64_t*)((char*)(a0) + 168))));
}

// sub_5c83f0  (orig 0x5c83f0, tailcall)
uint64_t main_f_5c83f0(void* a0) {
    return main::sub_5cb760(((uintptr_t)(*(uint64_t*)((char*)(a0) + 232))));
}

// sub_5cbb80  (orig 0x5cbb80, tailcall)
void main_f_5cbb80() { main::sub_5cbcf0(); }

// sub_5cbc30  (orig 0x5cbc30, tailcall)
void main_f_5cbc30() { main::sub_5cbcf0(); }

// sub_5cbc40  (orig 0x5cbc40, tailcall)
void main_f_5cbc40() { main::sub_5cbcf0(); }

// sub_5cc210  (orig 0x5cc210, tailcall)
void main_f_5cc210() { main::sub_5cc540(); }

// sub_5cc3a0  (orig 0x5cc3a0, tailcall)
void main_f_5cc3a0() { main::sub_5cc540(); }

// sub_5cc3b0  (orig 0x5cc3b0, tailcall)
void main_f_5cc3b0() { main::sub_5cc540(); }

// sub_5cc6a0  (orig 0x5cc6a0, tailcall)
void main_f_5cc6a0() { main::sub_ce0(); }

// sub_5d1b00  (orig 0x5d1b00, tailcall)
uint64_t main_f_5d1b00(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5d1b10  (orig 0x5d1b10, tailcall)
uint64_t main_f_5d1b10(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5d1b20  (orig 0x5d1b20, tailcall)
void main_f_5d1b20() { main::sub_5d1550(); }

// sub_5d1b30  (orig 0x5d1b30, tailcall)
uint64_t main_f_5d1b30(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5d1b40  (orig 0x5d1b40, tailcall)
uint64_t main_f_5d1b40(void* a0) {
    return main::sub_5d1550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5d2a70  (orig 0x5d2a70, tailcall)
uint64_t main_f_5d2a70(void* a0) {
    return main::sub_5d2980(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5d2a80  (orig 0x5d2a80, tailcall)
uint64_t main_f_5d2a80(void* a0) {
    return main::sub_5d2980(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5d5130  (orig 0x5d5130, tailcall)
uint64_t main_f_5d5130(void* a0) {
    return main::sub_5d4350(((uintptr_t)(*(uint64_t*)((char*)(a0) + 352))));
}

// sub_5d5870  (orig 0x5d5870, tailcall)
void main_f_5d5870() { main::sub_5eca40(); }

// sub_5d58f0  (orig 0x5d58f0, tailcall)
void main_f_5d58f0() { main::sub_5eca40(); }

// sub_5d5900  (orig 0x5d5900, tailcall)
void main_f_5d5900() { main::sub_5eca40(); }

// sub_5d5de0  (orig 0x5d5de0, tailcall)
void main_f_5d5de0() { main::sub_5d5df0(); }

// sub_5d73c0  (orig 0x5d73c0, tailcall)
uint64_t main_f_5d73c0(void* a0) {
    return main::sub_5cf890(((uintptr_t)((char*)(a0) + 96)));
}

// sub_5d73d0  (orig 0x5d73d0, tailcall)
uint64_t main_f_5d73d0(void* a0) {
    return main::sub_5cf8a0(((uintptr_t)((char*)(a0) + 96)));
}

// sub_5d73e0  (orig 0x5d73e0, tailcall)
uint64_t main_f_5d73e0(void* a0) {
    return main::sub_5cf8b0(((uintptr_t)((char*)(a0) + 96)));
}

// sub_5d8a50  (orig 0x5d8a50, tailcall)
void main_f_5d8a50() { main::sub_5d8db0(); }

// sub_5d8c00  (orig 0x5d8c00, tailcall)
void main_f_5d8c00() { main::sub_5d8db0(); }

// sub_5db7a0  (orig 0x5db7a0, tailcall)
uint64_t main_f_5db7a0(void* a0) {
    return main::sub_5db590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5db7b0  (orig 0x5db7b0, tailcall)
uint64_t main_f_5db7b0(void* a0) {
    return main::sub_5db590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5db9e0  (orig 0x5db9e0, tailcall)
void main_f_5db9e0() { main::sub_619640(); }

// sub_5dba40  (orig 0x5dba40, tailcall)
void main_f_5dba40() { main::sub_59b970(); }

// sub_5dbb80  (orig 0x5dbb80, tailcall)
void main_f_5dbb80() { main::sub_619640(); }

// sub_5dbb90  (orig 0x5dbb90, tailcall)
void main_f_5dbb90() { main::sub_619640(); }

// sub_5dd2b0  (orig 0x5dd2b0, tailcall)
void main_f_5dd2b0() { main::sub_5dd1b0(); }

// sub_5dd330  (orig 0x5dd330, tailcall)
uint64_t main_f_5dd330(void* a0) {
    return main::sub_5dd1b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5dd340  (orig 0x5dd340, tailcall)
uint64_t main_f_5dd340(void* a0) {
    return main::sub_5dd1b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5dd430  (orig 0x5dd430, tailcall)
uint64_t main_f_5dd430(void* a0) {
    return main::sub_5dd1b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5dd440  (orig 0x5dd440, tailcall)
uint64_t main_f_5dd440(void* a0) {
    return main::sub_5dd1b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5df990  (orig 0x5df990, tailcall)
void main_f_5df990() { main::sub_5e9700(); }

// sub_5e0600  (orig 0x5e0600, tailcall)
void main_f_5e0600() { main::sub_5e0470(); }

// sub_5e1f40  (orig 0x5e1f40, tailcall)
uint64_t main_f_5e1f40(void* a0) {
    return main::sub_5e1dc0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_5e31e0  (orig 0x5e31e0, tailcall)
uint64_t main_f_5e31e0(void* a0) {
    return main::sub_5e2ee0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5e32b0  (orig 0x5e32b0, tailcall)
uint64_t main_f_5e32b0(void* a0) {
    return main::sub_5e30f0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5e32c0  (orig 0x5e32c0, tailcall)
uint64_t main_f_5e32c0(void* a0) {
    return main::sub_5e30f0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5e32d0  (orig 0x5e32d0, tailcall)
uint64_t main_f_5e32d0(void* a0) {
    return main::sub_5e2ee0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5e4b40  (orig 0x5e4b40, tailcall)
void main_f_5e4b40() { save::save_d(); }

// sub_5e7290  (orig 0x5e7290, tailcall)
void main_f_5e7290() { main::sub_5e7150(); }

// sub_5e72a0  (orig 0x5e72a0, tailcall)
void main_f_5e72a0() { main::sub_5e7300(); }

// sub_5e72b0  (orig 0x5e72b0, tailcall)
uint64_t main_f_5e72b0(void* a0) {
    return main::sub_5e7150(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5e72c0  (orig 0x5e72c0, tailcall)
uint64_t main_f_5e72c0(void* a0) {
    return main::sub_5e7150(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5e72d0  (orig 0x5e72d0, tailcall)
void main_f_5e72d0() { main::sub_5e7300(); }

// sub_5e72e0  (orig 0x5e72e0, tailcall)
uint64_t main_f_5e72e0(void* a0) {
    return main::sub_5e7150(((uintptr_t)((char*)(a0) - 88)));
}

// sub_5e72f0  (orig 0x5e72f0, tailcall)
uint64_t main_f_5e72f0(void* a0) {
    return main::sub_5e7150(((uintptr_t)((char*)(a0) - 88)));
}

// sub_5e8c20  (orig 0x5e8c20, tailcall)
void main_f_5e8c20() { main::sub_5e8b30(); }

// sub_5e8d20  (orig 0x5e8d20, tailcall)
uint64_t main_f_5e8d20(void* a0) {
    return main::sub_5e8b30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5e8d30  (orig 0x5e8d30, tailcall)
uint64_t main_f_5e8d30(void* a0) {
    return main::sub_5e8b30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5e8d40  (orig 0x5e8d40, tailcall)
uint64_t main_f_5e8d40(void* a0) {
    return main::sub_5e8c30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5e8d50  (orig 0x5e8d50, tailcall)
uint64_t main_f_5e8d50(void* a0) {
    return main::sub_5e8c30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5e8d60  (orig 0x5e8d60, tailcall)
uint64_t main_f_5e8d60(void* a0) {
    return main::sub_5e8b30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5e8d70  (orig 0x5e8d70, tailcall)
uint64_t main_f_5e8d70(void* a0) {
    return main::sub_5e8b30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_5e96f0  (orig 0x5e96f0, tailcall)
void main_f_5e96f0() { main::sub_5e9220(); }

// sub_5eda90  (orig 0x5eda90, tailcall)
uint64_t main_f_5eda90(void* a0) {
    return main::sub_5ed5e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5ede40  (orig 0x5ede40, tailcall)
void main_f_5ede40() { main::sub_5eb880(); }

// sub_5ede50  (orig 0x5ede50, tailcall)
void main_f_5ede50() { main::sub_5eb880(); }

// sub_5ee470  (orig 0x5ee470, tailcall)
uint64_t main_f_5ee470(void* a0) {
    return main::sub_5f5570(((uintptr_t)((char*)(a0) + 104)));
}

// sub_5ee480  (orig 0x5ee480, tailcall)
uint64_t main_f_5ee480(void* a0) {
    return main::sub_5f5660(((uintptr_t)((char*)(a0) + 104)));
}

// sub_5ee4b0  (orig 0x5ee4b0, tailcall)
uint64_t main_f_5ee4b0(void* a0) {
    return main::sub_5f5780(((uintptr_t)((char*)(a0) + 104)));
}

// sub_5f1b00  (orig 0x5f1b00, tailcall)
uint64_t main_f_5f1b00(void* a0) {
    return main::sub_5efcd0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_5f2110  (orig 0x5f2110, tailcall)
uint64_t main_f_5f2110(void* a0) {
    return main::sub_5f1fe0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5f2120  (orig 0x5f2120, tailcall)
void main_f_5f2120() { main::sub_5f1fe0(); }

// sub_5f2130  (orig 0x5f2130, tailcall)
uint64_t main_f_5f2130(void* a0) {
    return main::sub_5f1fe0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5f21c0  (orig 0x5f21c0, tailcall)
uint64_t main_f_5f21c0(void* a0) {
    return main::sub_5f3280(((uintptr_t)(*(uint64_t*)((char*)(a0) + 168))));
}

// sub_5f3230  (orig 0x5f3230, tailcall)
uint64_t main_f_5f3230(void* a0) {
    return main::sub_5f2e40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5f3240  (orig 0x5f3240, tailcall)
void main_f_5f3240() { main::sub_5f2e40(); }

// sub_5f3250  (orig 0x5f3250, tailcall)
uint64_t main_f_5f3250(void* a0) {
    return main::sub_5f2e40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5f3d20  (orig 0x5f3d20, tailcall)
uint64_t main_f_5f3d20(void* a0) {
    return main::sub_5f3e90(((uintptr_t)(*(uint64_t*)((char*)(a0) + 224))));
}

// sub_5f3d30  (orig 0x5f3d30, tailcall)
uint64_t main_f_5f3d30(void* a0) {
    return main::sub_5f4030(((uintptr_t)(*(uint64_t*)((char*)(a0) + 224))));
}

// sub_5f7100  (orig 0x5f7100, tailcall)
void main_f_5f7100() { main::sub_1787c60(); }

// sub_5f7110  (orig 0x5f7110, tailcall)
void main_f_5f7110() { main::sub_1787bf0(); }

// sub_5f7120  (orig 0x5f7120, tailcall)
void main_f_5f7120() { main_f_1787c10(); }

// sub_5f7fc0  (orig 0x5f7fc0, tailcall)
uint64_t main_f_5f7fc0(void* a0) {
    return main::sub_5f7dd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5f8300  (orig 0x5f8300, tailcall)
void main_f_5f8300() { main::sub_5f7fd0(); }

// sub_5f9d20  (orig 0x5f9d20, tailcall)
void main_f_5f9d20() { main::sub_5f9c50(); }

// sub_5f9ed0  (orig 0x5f9ed0, tailcall)
void main_f_5f9ed0() { main::sub_5f9d50(); }

// sub_5fa8d0  (orig 0x5fa8d0, tailcall)
void main_f_5fa8d0() { main::sub_5fa8e0(); }

// sub_5fabc0  (orig 0x5fabc0, tailcall)
void main_f_5fabc0() { main::sub_5fabd0(); }

// sub_5fbc20  (orig 0x5fbc20, tailcall)
void main_f_5fbc20() { main::sub_5fbe30(); }

// sub_5fbd50  (orig 0x5fbd50, tailcall)
void main_f_5fbd50() { main::sub_5fbe30(); }

// sub_5fbd60  (orig 0x5fbd60, tailcall)
void main_f_5fbd60() { main::sub_5fbe30(); }

// sub_5fc520  (orig 0x5fc520, tailcall)
void main_f_5fc520() { main::sub_5fc3c0(); }

// sub_5fc530  (orig 0x5fc530, tailcall)
uint64_t main_f_5fc530(void* a0) {
    return main::sub_5fc3c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5fc540  (orig 0x5fc540, tailcall)
uint64_t main_f_5fc540(void* a0) {
    return main::sub_5fc3c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5fd500  (orig 0x5fd500, tailcall)
void main_f_5fd500() { main::sub_5fd380(); }

// sub_5fd610  (orig 0x5fd610, tailcall)
void main_f_5fd610() { main::sub_5fd380(); }

// sub_5fe0d0  (orig 0x5fe0d0, tailcall)
void main_f_5fe0d0() { main::sub_5fdfe0(); }

// sub_5fe0e0  (orig 0x5fe0e0, tailcall)
uint64_t main_f_5fe0e0(void* a0) {
    return main::sub_5fdfe0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5fe0f0  (orig 0x5fe0f0, tailcall)
uint64_t main_f_5fe0f0(void* a0) {
    return main::sub_5fdfe0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5fe100  (orig 0x5fe100, tailcall)
void main_f_5fe100() { main::sub_5fe110(); }

// sub_5ff270  (orig 0x5ff270, tailcall)
uint64_t main_f_5ff270(void* a0) {
    return main::sub_5fef00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5ff280  (orig 0x5ff280, tailcall)
void main_f_5ff280() { main::sub_5fef00(); }

// sub_5ff290  (orig 0x5ff290, tailcall)
uint64_t main_f_5ff290(void* a0) {
    return main::sub_5fef00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5ffb40  (orig 0x5ffb40, tailcall)
void main_f_5ffb40() { main::sub_5ffbb0(); }

// sub_5ffb50  (orig 0x5ffb50, tailcall)
uint64_t main_f_5ffb50(void* a0) {
    return main::sub_5ff9d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_5ffb70  (orig 0x5ffb70, tailcall)
void main_f_5ffb70() { main::sub_5ffbb0(); }

// sub_5ffb80  (orig 0x5ffb80, tailcall)
void main_f_5ffb80() { main::sub_5ffbb0(); }

// sub_5ffb90  (orig 0x5ffb90, tailcall)
uint64_t main_f_5ffb90(void* a0) {
    return main::sub_5ff9d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6008c0  (orig 0x6008c0, tailcall)
uint64_t main_f_6008c0(void* a0) {
    return main::sub_600390(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_6014e0  (orig 0x6014e0, tailcall)
void main_f_6014e0() { main::sub_601520(); }

// sub_601500  (orig 0x601500, tailcall)
void main_f_601500() { main::sub_601520(); }

// sub_601510  (orig 0x601510, tailcall)
void main_f_601510() { main::sub_601520(); }

// sub_601fe0  (orig 0x601fe0, tailcall)
void main_f_601fe0() { main::sub_601f10(); }

// sub_601ff0  (orig 0x601ff0, tailcall)
uint64_t main_f_601ff0(void* a0) {
    return main::sub_601f10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_602000  (orig 0x602000, tailcall)
uint64_t main_f_602000(void* a0) {
    return main::sub_601f10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_603660  (orig 0x603660, tailcall)
void main_f_603660() { main::sub_603500(); }

// sub_6036f0  (orig 0x6036f0, tailcall)
uint64_t main_f_6036f0(void* a0) {
    return main::sub_603500(((uintptr_t)((char*)(a0) - 72)));
}

// sub_603700  (orig 0x603700, tailcall)
uint64_t main_f_603700(void* a0) {
    return main::sub_603500(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6037f0  (orig 0x6037f0, tailcall)
uint64_t main_f_6037f0(void* a0) {
    return main::sub_603500(((uintptr_t)((char*)(a0) - 80)));
}

// sub_603800  (orig 0x603800, tailcall)
uint64_t main_f_603800(void* a0) {
    return main::sub_603500(((uintptr_t)((char*)(a0) - 80)));
}

// sub_606ef0  (orig 0x606ef0, tailcall)
uint64_t main_f_606ef0(void* a0) {
    return main::sub_604830(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_608e30  (orig 0x608e30, tailcall)
void main_f_608e30() { main::sub_603810(); }

// sub_608ee0  (orig 0x608ee0, tailcall)
void main_f_608ee0() { main::sub_603810(); }

// sub_608ef0  (orig 0x608ef0, tailcall)
void main_f_608ef0() { main::sub_603810(); }

// sub_60c2a0  (orig 0x60c2a0, tailcall)
void main_f_60c2a0() { main::sub_60c170(); }

// sub_60c320  (orig 0x60c320, tailcall)
uint64_t main_f_60c320(void* a0) {
    return main::sub_60c170(((uintptr_t)((char*)(a0) - 72)));
}

// sub_60c330  (orig 0x60c330, tailcall)
uint64_t main_f_60c330(void* a0) {
    return main::sub_60c170(((uintptr_t)((char*)(a0) - 72)));
}

// sub_60c420  (orig 0x60c420, tailcall)
uint64_t main_f_60c420(void* a0) {
    return main::sub_60c170(((uintptr_t)((char*)(a0) - 80)));
}

// sub_60c430  (orig 0x60c430, tailcall)
uint64_t main_f_60c430(void* a0) {
    return main::sub_60c170(((uintptr_t)((char*)(a0) - 80)));
}

// sub_60e2b0  (orig 0x60e2b0, tailcall)
uint64_t main_f_60e2b0(void* a0) {
    return main::sub_60f390(((uintptr_t)(*(uint64_t*)((char*)(a0) + 224))));
}

// sub_60e520  (orig 0x60e520, tailcall)
void main_f_60e520() { main::sub_60e430(); }

// sub_60e530  (orig 0x60e530, tailcall)
void main_f_60e530() { main::sub_60e5a0(); }

// sub_60e540  (orig 0x60e540, tailcall)
uint64_t main_f_60e540(void* a0) {
    return main::sub_60e430(((uintptr_t)((char*)(a0) - 72)));
}

// sub_60e550  (orig 0x60e550, tailcall)
uint64_t main_f_60e550(void* a0) {
    return main::sub_60e430(((uintptr_t)((char*)(a0) - 72)));
}

// sub_60e560  (orig 0x60e560, tailcall)
void main_f_60e560() { main::sub_60e5a0(); }

// sub_60e570  (orig 0x60e570, tailcall)
void main_f_60e570() { main::sub_60e5a0(); }

// sub_60e580  (orig 0x60e580, tailcall)
uint64_t main_f_60e580(void* a0) {
    return main::sub_60e430(((uintptr_t)((char*)(a0) - 80)));
}

// sub_60e590  (orig 0x60e590, tailcall)
uint64_t main_f_60e590(void* a0) {
    return main::sub_60e430(((uintptr_t)((char*)(a0) - 80)));
}

// sub_60e840  (orig 0x60e840, tailcall)
uint64_t main_f_60e840(void* a0) {
    return main::sub_60e6d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_60ecf0  (orig 0x60ecf0, tailcall)
uint64_t main_f_60ecf0(void* a0) {
    return main::sub_60eb80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_60ed00  (orig 0x60ed00, tailcall)
void main_f_60ed00() { main::sub_60eb80(); }

// sub_60ed10  (orig 0x60ed10, tailcall)
uint64_t main_f_60ed10(void* a0) {
    return main::sub_60eb80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_611260  (orig 0x611260, tailcall)
uint64_t main_f_611260(void* a0) {
    return main::sub_610d10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_611270  (orig 0x611270, tailcall)
void main_f_611270() { main::sub_610d10(); }

// sub_611280  (orig 0x611280, tailcall)
uint64_t main_f_611280(void* a0) {
    return main::sub_610d10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_612350  (orig 0x612350, tailcall)
void main_f_612350() { main::sub_ce0(); }

// sub_613370  (orig 0x613370, tailcall)
void main_f_613370() { main::sub_613240(); }

// sub_613380  (orig 0x613380, tailcall)
uint64_t main_f_613380(void* a0) {
    return main::sub_613240(((uintptr_t)((char*)(a0) - 72)));
}

// sub_613390  (orig 0x613390, tailcall)
uint64_t main_f_613390(void* a0) {
    return main::sub_613240(((uintptr_t)((char*)(a0) - 72)));
}

// sub_615e90  (orig 0x615e90, tailcall)
void main_f_615e90() { main::sub_615d80(); }

// sub_615ea0  (orig 0x615ea0, tailcall)
uint64_t main_f_615ea0(void* a0) {
    return main::sub_615d80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_615eb0  (orig 0x615eb0, tailcall)
uint64_t main_f_615eb0(void* a0) {
    return main::sub_615d80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_617b70  (orig 0x617b70, tailcall)
uint64_t main_f_617b70(void* a0) {
    return main::sub_617590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_617b80  (orig 0x617b80, tailcall)
uint64_t main_f_617b80(void* a0) {
    return main::sub_617590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_617b90  (orig 0x617b90, tailcall)
void main_f_617b90() { main::sub_617590(); }

// sub_617ba0  (orig 0x617ba0, tailcall)
uint64_t main_f_617ba0(void* a0) {
    return main::sub_617590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_617bb0  (orig 0x617bb0, tailcall)
uint64_t main_f_617bb0(void* a0) {
    return main::sub_617590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_618c50  (orig 0x618c50, tailcall)
uint64_t main_f_618c50(void* a0) {
    return main::sub_618b20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_618c60  (orig 0x618c60, tailcall)
uint64_t main_f_618c60(void* a0) {
    return main::sub_612ef0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 848))));
}

// sub_61ccf0  (orig 0x61ccf0, tailcall)
void main_f_61ccf0() { main::sub_61cbc0(); }

// sub_61cd00  (orig 0x61cd00, tailcall)
uint64_t main_f_61cd00(void* a0) {
    return main::sub_61cbc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_61cd10  (orig 0x61cd10, tailcall)
uint64_t main_f_61cd10(void* a0) {
    return main::sub_61cbc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_61e170  (orig 0x61e170, tailcall)
uint64_t main_f_61e170(void* a0) {
    return main::sub_60f060(((uintptr_t)(*(uint64_t*)((char*)(a0) + 520))));
}

// sub_61e300  (orig 0x61e300, tailcall)
void main_f_61e300() { main::sub_61e180(); }

// sub_61e3a0  (orig 0x61e3a0, tailcall)
uint64_t main_f_61e3a0(void* a0) {
    return main::sub_61e180(((uintptr_t)((char*)(a0) - 72)));
}

// sub_61e3b0  (orig 0x61e3b0, tailcall)
uint64_t main_f_61e3b0(void* a0) {
    return main::sub_61e180(((uintptr_t)((char*)(a0) - 72)));
}

// sub_61e4a0  (orig 0x61e4a0, tailcall)
uint64_t main_f_61e4a0(void* a0) {
    return main::sub_61e180(((uintptr_t)((char*)(a0) - 80)));
}

// sub_61e4b0  (orig 0x61e4b0, tailcall)
uint64_t main_f_61e4b0(void* a0) {
    return main::sub_61e180(((uintptr_t)((char*)(a0) - 80)));
}

// sub_61e850  (orig 0x61e850, tailcall)
uint64_t main_f_61e850(void* a0) {
    return main::sub_61e6e0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_61efc0  (orig 0x61efc0, tailcall)
void main_f_61efc0() { main::sub_61ee80(); }

// sub_61f0c0  (orig 0x61f0c0, tailcall)
uint64_t main_f_61f0c0(void* a0) {
    return main::sub_61ee80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_61f0d0  (orig 0x61f0d0, tailcall)
uint64_t main_f_61f0d0(void* a0) {
    return main::sub_61ee80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_61f0e0  (orig 0x61f0e0, tailcall)
uint64_t main_f_61f0e0(void* a0) {
    return main::sub_61efd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_61f0f0  (orig 0x61f0f0, tailcall)
uint64_t main_f_61f0f0(void* a0) {
    return main::sub_61efd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_61f100  (orig 0x61f100, tailcall)
uint64_t main_f_61f100(void* a0) {
    return main::sub_61ee80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_61f110  (orig 0x61f110, tailcall)
uint64_t main_f_61f110(void* a0) {
    return main::sub_61ee80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_620100  (orig 0x620100, tailcall)
void main_f_620100() { main::sub_61e5b0(); }

// sub_620120  (orig 0x620120, tailcall)
uint64_t main_f_620120(void* a0) {
    return main::sub_61fff0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_620140  (orig 0x620140, tailcall)
void main_f_620140() { main::sub_61e5b0(); }

// sub_620150  (orig 0x620150, tailcall)
void main_f_620150() { main::sub_61e5b0(); }

// sub_620160  (orig 0x620160, tailcall)
uint64_t main_f_620160(void* a0) {
    return main::sub_61fff0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6227c0  (orig 0x6227c0, tailcall)
void main_f_6227c0() { main::sub_ce0(); }

// sub_622fd0  (orig 0x622fd0, tailcall)
uint64_t main_f_622fd0(void* a0) {
    return main::sub_622ce0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_622fe0  (orig 0x622fe0, tailcall)
uint64_t main_f_622fe0(void* a0) {
    return main::sub_622ce0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_622ff0  (orig 0x622ff0, tailcall)
void main_f_622ff0() { main::sub_622ce0(); }

// sub_623000  (orig 0x623000, tailcall)
uint64_t main_f_623000(void* a0) {
    return main::sub_622ce0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_623010  (orig 0x623010, tailcall)
uint64_t main_f_623010(void* a0) {
    return main::sub_622ce0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_623580  (orig 0x623580, tailcall)
uint64_t main_f_623580(void* a0) {
    return main::sub_60f060(((uintptr_t)(*(uint64_t*)((char*)(a0) + 520))));
}

// sub_623b70  (orig 0x623b70, tailcall)
uint64_t main_f_623b70(void* a0) {
    return main::sub_623a00(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_623bb0  (orig 0x623bb0, tailcall)
void main_f_623bb0() { main::sub_623bc0(); }

// sub_629af0  (orig 0x629af0, tailcall)
void main_f_629af0() { main::sub_6299c0(); }

// sub_629c50  (orig 0x629c50, tailcall)
uint64_t main_f_629c50(void* a0) {
    return main::sub_6299c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_629c60  (orig 0x629c60, tailcall)
uint64_t main_f_629c60(void* a0) {
    return main::sub_6299c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_629dd0  (orig 0x629dd0, tailcall)
uint64_t main_f_629dd0(void* a0) {
    return main::sub_6299c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_629de0  (orig 0x629de0, tailcall)
uint64_t main_f_629de0(void* a0) {
    return main::sub_6299c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6323a0  (orig 0x6323a0, tailcall)
uint64_t main_f_6323a0(void* a0) {
    return main::sub_6342b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 424))));
}

// sub_634530  (orig 0x634530, tailcall)
void main_f_634530() { main::sub_634540(); }

// sub_635200  (orig 0x635200, tailcall)
uint64_t main_f_635200(void* a0) {
    return main::sub_634540(((uintptr_t)((char*)(a0) - 72)));
}

// sub_63a140  (orig 0x63a140, tailcall)
uint64_t main_f_63a140(void* a0) {
    return main::sub_63c770(((uintptr_t)(*(uint64_t*)((char*)(a0) + 176))));
}

// sub_63dcd0  (orig 0x63dcd0, tailcall)
void main_f_63dcd0() { main::sub_63db70(); }

// sub_63ddd0  (orig 0x63ddd0, tailcall)
uint64_t main_f_63ddd0(void* a0) {
    return main::sub_63db70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_63dde0  (orig 0x63dde0, tailcall)
uint64_t main_f_63dde0(void* a0) {
    return main::sub_63db70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_63ded0  (orig 0x63ded0, tailcall)
uint64_t main_f_63ded0(void* a0) {
    return main::sub_63db70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_63dee0  (orig 0x63dee0, tailcall)
uint64_t main_f_63dee0(void* a0) {
    return main::sub_63db70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6466b0  (orig 0x6466b0, tailcall)
void main_f_6466b0() { main::sub_646590(); }

// sub_646770  (orig 0x646770, tailcall)
uint64_t main_f_646770(void* a0) {
    return main::sub_646590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_646780  (orig 0x646780, tailcall)
uint64_t main_f_646780(void* a0) {
    return main::sub_646590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6468f0  (orig 0x6468f0, tailcall)
uint64_t main_f_6468f0(void* a0) {
    return main::sub_646590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_646900  (orig 0x646900, tailcall)
uint64_t main_f_646900(void* a0) {
    return main::sub_646590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_646910  (orig 0x646910, tailcall)
void main_f_646910() { main::sub_ce0(); }

// sub_64b3a0  (orig 0x64b3a0, tailcall)
void main_f_64b3a0() { main::sub_64b110(); }

// sub_64b460  (orig 0x64b460, tailcall)
uint64_t main_f_64b460(void* a0) {
    return main::sub_64b110(((uintptr_t)((char*)(a0) - 72)));
}

// sub_64b470  (orig 0x64b470, tailcall)
uint64_t main_f_64b470(void* a0) {
    return main::sub_64b110(((uintptr_t)((char*)(a0) - 72)));
}

// sub_64b5e0  (orig 0x64b5e0, tailcall)
uint64_t main_f_64b5e0(void* a0) {
    return main::sub_64b110(((uintptr_t)((char*)(a0) - 80)));
}

// sub_64b5f0  (orig 0x64b5f0, tailcall)
uint64_t main_f_64b5f0(void* a0) {
    return main::sub_64b110(((uintptr_t)((char*)(a0) - 80)));
}

// sub_64c010  (orig 0x64c010, tailcall)
void main_f_64c010() { main::sub_64c9b0(); }

// sub_64c1a0  (orig 0x64c1a0, tailcall)
void main_f_64c1a0() { main::sub_64c9b0(); }

// sub_64c1b0  (orig 0x64c1b0, tailcall)
void main_f_64c1b0() { main::sub_64c9b0(); }

// sub_64c870  (orig 0x64c870, tailcall)
uint64_t main_f_64c870(void* a0) {
    return main::sub_64c660(((uintptr_t)((char*)(a0) - 72)));
}

// sub_64c880  (orig 0x64c880, tailcall)
uint64_t main_f_64c880(void* a0) {
    return main::sub_64c660(((uintptr_t)((char*)(a0) - 80)));
}

// sub_64d3a0  (orig 0x64d3a0, tailcall)
void main_f_64d3a0() { main::sub_64d250(); }

// sub_64d3b0  (orig 0x64d3b0, tailcall)
void main_f_64d3b0() { main::sub_64d460(); }

// sub_64d3c0  (orig 0x64d3c0, tailcall)
uint64_t main_f_64d3c0(void* a0) {
    return main::sub_64d250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_64d3d0  (orig 0x64d3d0, tailcall)
uint64_t main_f_64d3d0(void* a0) {
    return main::sub_64d250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_64d3e0  (orig 0x64d3e0, tailcall)
void main_f_64d3e0() { main::sub_64d460(); }

// sub_64d3f0  (orig 0x64d3f0, tailcall)
void main_f_64d3f0() { main::sub_64d460(); }

// sub_64d400  (orig 0x64d400, tailcall)
uint64_t main_f_64d400(void* a0) {
    return main::sub_64d250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_64d410  (orig 0x64d410, tailcall)
uint64_t main_f_64d410(void* a0) {
    return main::sub_64d250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_64d9e0  (orig 0x64d9e0, tailcall)
void main_f_64d9e0() { main::sub_699410(); }

// sub_64db70  (orig 0x64db70, tailcall)
void main_f_64db70() { main::sub_699410(); }

// sub_64db80  (orig 0x64db80, tailcall)
void main_f_64db80() { main::sub_699410(); }

// sub_64f170  (orig 0x64f170, tailcall)
uint64_t main_f_64f170(void* a0) {
    return main::sub_64ed00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_64f180  (orig 0x64f180, tailcall)
uint64_t main_f_64f180(void* a0) {
    return main::sub_64ed00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_64f190  (orig 0x64f190, tailcall)
void main_f_64f190() { main::sub_64ed00(); }

// sub_64f1a0  (orig 0x64f1a0, tailcall)
uint64_t main_f_64f1a0(void* a0) {
    return main::sub_64ed00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_64f1b0  (orig 0x64f1b0, tailcall)
uint64_t main_f_64f1b0(void* a0) {
    return main::sub_64ed00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_64f3f0  (orig 0x64f3f0, tailcall)
uint64_t main_f_64f3f0(void* a0) {
    return main::sub_64f1c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_64f400  (orig 0x64f400, tailcall)
void main_f_64f400() { main::sub_64f430(); }

// sub_64f410  (orig 0x64f410, tailcall)
void main_f_64f410() { main::sub_64f430(); }

// sub_64f420  (orig 0x64f420, tailcall)
void main_f_64f420() { main::sub_64f430(); }

// sub_652dc0  (orig 0x652dc0, tailcall)
void main_f_652dc0() { main::sub_652c10(); }

// sub_652e40  (orig 0x652e40, tailcall)
void main_f_652e40() { main::sub_59b970(); }

// sub_652e50  (orig 0x652e50, tailcall)
uint64_t main_f_652e50(void* a0) {
    return main::sub_652c10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_652e60  (orig 0x652e60, tailcall)
uint64_t main_f_652e60(void* a0) {
    return main::sub_652c10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_652f50  (orig 0x652f50, tailcall)
uint64_t main_f_652f50(void* a0) {
    return main::sub_652c10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_652f60  (orig 0x652f60, tailcall)
uint64_t main_f_652f60(void* a0) {
    return main::sub_652c10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6555f0  (orig 0x6555f0, tailcall)
void main_f_6555f0() { main::sub_655440(); }

// sub_6556b0  (orig 0x6556b0, tailcall)
uint64_t main_f_6556b0(void* a0) {
    return main::sub_655440(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6556c0  (orig 0x6556c0, tailcall)
uint64_t main_f_6556c0(void* a0) {
    return main::sub_655440(((uintptr_t)((char*)(a0) - 72)));
}

// sub_655830  (orig 0x655830, tailcall)
uint64_t main_f_655830(void* a0) {
    return main::sub_655440(((uintptr_t)((char*)(a0) - 80)));
}

// sub_655840  (orig 0x655840, tailcall)
uint64_t main_f_655840(void* a0) {
    return main::sub_655440(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6575a0  (orig 0x6575a0, tailcall)
void main_f_6575a0() { main::sub_6574b0(); }

// sub_657660  (orig 0x657660, tailcall)
uint64_t main_f_657660(void* a0) {
    return main::sub_6574b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_657670  (orig 0x657670, tailcall)
uint64_t main_f_657670(void* a0) {
    return main::sub_6574b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6577e0  (orig 0x6577e0, tailcall)
uint64_t main_f_6577e0(void* a0) {
    return main::sub_6574b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6577f0  (orig 0x6577f0, tailcall)
uint64_t main_f_6577f0(void* a0) {
    return main::sub_6574b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6589f0  (orig 0x6589f0, tailcall)
void main_f_6589f0() { main::sub_6588e0(); }

// sub_658ab0  (orig 0x658ab0, tailcall)
uint64_t main_f_658ab0(void* a0) {
    return main::sub_6588e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_658ac0  (orig 0x658ac0, tailcall)
uint64_t main_f_658ac0(void* a0) {
    return main::sub_6588e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_658c30  (orig 0x658c30, tailcall)
uint64_t main_f_658c30(void* a0) {
    return main::sub_6588e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_658c40  (orig 0x658c40, tailcall)
uint64_t main_f_658c40(void* a0) {
    return main::sub_6588e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_658c50  (orig 0x658c50, tailcall)
void main_f_658c50() { main::sub_ce0(); }

// sub_658f00  (orig 0x658f00, tailcall)
uint64_t main_f_658f00(void* a0) {
    return main::sub_659470(((uintptr_t)((char*)(a0) + 104)));
}

// sub_6592a0  (orig 0x6592a0, tailcall)
uint64_t main_f_6592a0(void* a0) {
    return main::sub_659050(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6592b0  (orig 0x6592b0, tailcall)
uint64_t main_f_6592b0(void* a0) {
    return main::sub_659050(((uintptr_t)((char*)(a0) - 80)));
}

// sub_65a070  (orig 0x65a070, tailcall)
uint64_t main_f_65a070(void* a0) {
    return main::sub_659be0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_65a080  (orig 0x65a080, tailcall)
uint64_t main_f_65a080(void* a0) {
    return main::sub_659be0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_65a090  (orig 0x65a090, tailcall)
void main_f_65a090() { main::sub_659be0(); }

// sub_65a0a0  (orig 0x65a0a0, tailcall)
uint64_t main_f_65a0a0(void* a0) {
    return main::sub_659be0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_65a0b0  (orig 0x65a0b0, tailcall)
uint64_t main_f_65a0b0(void* a0) {
    return main::sub_659be0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_65a770  (orig 0x65a770, tailcall)
uint64_t main_f_65a770(void* a0) {
    return main::sub_65a680(((uintptr_t)((char*)(a0) - 72)));
}

// sub_65a780  (orig 0x65a780, tailcall)
uint64_t main_f_65a780(void* a0) {
    return main::sub_65a680(((uintptr_t)((char*)(a0) - 80)));
}

// sub_65aa90  (orig 0x65aa90, tailcall)
void main_f_65aa90() { main::sub_65b030(); }

// sub_65abc0  (orig 0x65abc0, tailcall)
void main_f_65abc0() { main::sub_65b030(); }

// sub_65abd0  (orig 0x65abd0, tailcall)
void main_f_65abd0() { main::sub_65b030(); }

// sub_65c580  (orig 0x65c580, tailcall)
void main_f_65c580() { main::An_unknown_error_has_triggered_the_default_error_handler(); }

// sub_65f190  (orig 0x65f190, tailcall)
uint64_t main_f_65f190(void* a0) {
    return main::sub_5cf8d0(((uintptr_t)((char*)(a0) + 4)));
}

// sub_65f2f0  (orig 0x65f2f0, tailcall)
uint64_t main_f_65f2f0(void* a0) {
    return main::sub_65f220(((uintptr_t)((char*)(a0) - 8)));
}

// sub_660880  (orig 0x660880, tailcall)
uint64_t main_f_660880(void* a0) {
    return main::sub_6606c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_660890  (orig 0x660890, tailcall)
uint64_t main_f_660890(void* a0) {
    return main::sub_6606c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6608a0  (orig 0x6608a0, tailcall)
void main_f_6608a0() { main::sub_6606c0(); }

// sub_6608b0  (orig 0x6608b0, tailcall)
uint64_t main_f_6608b0(void* a0) {
    return main::sub_6606c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6608c0  (orig 0x6608c0, tailcall)
uint64_t main_f_6608c0(void* a0) {
    return main::sub_6606c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_660b40  (orig 0x660b40, tailcall)
uint64_t main_f_660b40(void* a0) {
    return main::sub_660a50(((uintptr_t)((char*)(a0) - 72)));
}

// sub_660b50  (orig 0x660b50, tailcall)
uint64_t main_f_660b50(void* a0) {
    return main::sub_660a50(((uintptr_t)((char*)(a0) - 80)));
}

// sub_663620  (orig 0x663620, tailcall)
uint64_t main_f_663620(void* a0) {
    return main::height_3(((uintptr_t)(*(uint64_t*)((char*)(a0) + 288))));
}

// sub_663d30  (orig 0x663d30, tailcall)
void main_f_663d30() { main::sub_ce0(); }

// sub_668280  (orig 0x668280, tailcall)
uint64_t main_f_668280(void* a0) {
    return main::sub_668020(((uintptr_t)((char*)(a0) - 72)));
}

// sub_668290  (orig 0x668290, tailcall)
void main_f_668290() { main::sub_668020(); }

// sub_6682a0  (orig 0x6682a0, tailcall)
uint64_t main_f_6682a0(void* a0) {
    return main::sub_668020(((uintptr_t)((char*)(a0) - 72)));
}

// sub_669160  (orig 0x669160, tailcall)
void main_f_669160() { main::sub_ce0(); }

// sub_66a840  (orig 0x66a840, tailcall)
void main_f_66a840() { main::sub_600c30(); }

// sub_66a850  (orig 0x66a850, tailcall)
void main_f_66a850() { main::sub_66a900(); }

// sub_66a8a0  (orig 0x66a8a0, tailcall)
uint64_t main_f_66a8a0(void* a0) {
    return main::sub_600c30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_66a8b0  (orig 0x66a8b0, tailcall)
uint64_t main_f_66a8b0(void* a0) {
    return main::sub_600c30(((uintptr_t)((char*)(a0) - 72)));
}

// sub_66a8c0  (orig 0x66a8c0, tailcall)
void main_f_66a8c0() { main::sub_66a900(); }

// sub_66a8d0  (orig 0x66a8d0, tailcall)
void main_f_66a8d0() { main::sub_66a900(); }

// sub_66a8e0  (orig 0x66a8e0, tailcall)
uint64_t main_f_66a8e0(void* a0) {
    return main::sub_600c30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_66a8f0  (orig 0x66a8f0, tailcall)
uint64_t main_f_66a8f0(void* a0) {
    return main::sub_600c30(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6711d0  (orig 0x6711d0, tailcall)
uint64_t main_f_6711d0(void* a0) {
    return main::sub_670ad0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_672480  (orig 0x672480, tailcall)
void main_f_672480() { main::sub_672350(); }

// sub_672500  (orig 0x672500, tailcall)
uint64_t main_f_672500(void* a0) {
    return main::sub_672350(((uintptr_t)((char*)(a0) - 72)));
}

// sub_672510  (orig 0x672510, tailcall)
uint64_t main_f_672510(void* a0) {
    return main::sub_672350(((uintptr_t)((char*)(a0) - 72)));
}

// sub_672600  (orig 0x672600, tailcall)
uint64_t main_f_672600(void* a0) {
    return main::sub_672350(((uintptr_t)((char*)(a0) - 80)));
}

// sub_672610  (orig 0x672610, tailcall)
uint64_t main_f_672610(void* a0) {
    return main::sub_672350(((uintptr_t)((char*)(a0) - 80)));
}

// sub_672800  (orig 0x672800, tailcall)
uint64_t main_f_672800(void* a0) {
    return main::sub_6726c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_672810  (orig 0x672810, tailcall)
uint64_t main_f_672810(void* a0) {
    return main::sub_6726c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_672820  (orig 0x672820, tailcall)
void main_f_672820() { main::sub_6726c0(); }

// sub_672830  (orig 0x672830, tailcall)
uint64_t main_f_672830(void* a0) {
    return main::sub_6726c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_672840  (orig 0x672840, tailcall)
uint64_t main_f_672840(void* a0) {
    return main::sub_6726c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_672d50  (orig 0x672d50, tailcall)
uint64_t main_f_672d50(void* a0) {
    return main::sub_672c60(((uintptr_t)((char*)(a0) - 72)));
}

// sub_672d60  (orig 0x672d60, tailcall)
uint64_t main_f_672d60(void* a0) {
    return main::sub_672c60(((uintptr_t)((char*)(a0) - 80)));
}

// sub_679c90  (orig 0x679c90, tailcall)
void main_f_679c90() { main::sub_ce0(); }

// sub_679ca0  (orig 0x679ca0, tailcall)
void main_f_679ca0() { main::sub_3044e0(); }

// sub_679cb0  (orig 0x679cb0, tailcall)
void main_f_679cb0() { main::sub_3044f0(); }

// sub_679cf0  (orig 0x679cf0, tailcall)
void main_f_679cf0() { main::sub_ce0(); }

// sub_679d20  (orig 0x679d20, tailcall)
void main_f_679d20() { main_f_305c10(); }

// sub_679d40  (orig 0x679d40, tailcall)
void main_f_679d40() { main::sub_ce0(); }

// sub_679d60  (orig 0x679d60, tailcall)
void main_f_679d60() { main::sub_32efa0(); }

// sub_679da0  (orig 0x679da0, tailcall)
void main_f_679da0() { main::sub_32f750(); }

// sub_67a0c0  (orig 0x67a0c0, tailcall)
void main_f_67a0c0() { main::sub_ce0(); }

// sub_67a170  (orig 0x67a170, tailcall)
void main_f_67a170() { main::sub_ce0(); }

// sub_67a1d0  (orig 0x67a1d0, tailcall)
void main_f_67a1d0() { main::sub_ce0(); }

// sub_67a660  (orig 0x67a660, tailcall)
void main_f_67a660() { main::sub_ce0(); }

// sub_67abc0  (orig 0x67abc0, tailcall)
void main_f_67abc0() { main::sub_ce0(); }

// sub_67b110  (orig 0x67b110, tailcall)
void main_f_67b110() { main_f_67abb0(); }

// sub_67ce80  (orig 0x67ce80, tailcall)
uint64_t main_f_67ce80(void* a0) {
    return main::sub_67cce0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_67ce90  (orig 0x67ce90, tailcall)
void main_f_67ce90() { main::sub_67cce0(); }

// sub_67cea0  (orig 0x67cea0, tailcall)
uint64_t main_f_67cea0(void* a0) {
    return main::sub_67cce0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_67d900  (orig 0x67d900, tailcall)
void main_f_67d900() { main::sub_67d770(); }

// sub_67f700  (orig 0x67f700, tailcall)
void main_f_67f700() { main::sub_67f550(); }

// sub_67f800  (orig 0x67f800, tailcall)
uint64_t main_f_67f800(void* a0) {
    return main::sub_67f550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_67f810  (orig 0x67f810, tailcall)
uint64_t main_f_67f810(void* a0) {
    return main::sub_67f550(((uintptr_t)((char*)(a0) - 72)));
}

// sub_67f820  (orig 0x67f820, tailcall)
uint64_t main_f_67f820(void* a0) {
    return main::sub_67f710(((uintptr_t)((char*)(a0) - 72)));
}

// sub_67f830  (orig 0x67f830, tailcall)
uint64_t main_f_67f830(void* a0) {
    return main::sub_67f710(((uintptr_t)((char*)(a0) - 80)));
}

// sub_67f840  (orig 0x67f840, tailcall)
uint64_t main_f_67f840(void* a0) {
    return main::sub_67f550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_67f850  (orig 0x67f850, tailcall)
uint64_t main_f_67f850(void* a0) {
    return main::sub_67f550(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6814e0  (orig 0x6814e0, tailcall)
void main_f_6814e0() { main::sub_6813f0(); }

// sub_682950  (orig 0x682950, tailcall)
uint64_t main_f_682950(void* a0) {
    return main::sub_6825e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_682960  (orig 0x682960, tailcall)
uint64_t main_f_682960(void* a0) {
    return main::sub_6825e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_682970  (orig 0x682970, tailcall)
void main_f_682970() { main::sub_6825e0(); }

// sub_682980  (orig 0x682980, tailcall)
uint64_t main_f_682980(void* a0) {
    return main::sub_6825e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_682990  (orig 0x682990, tailcall)
uint64_t main_f_682990(void* a0) {
    return main::sub_6825e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_683000  (orig 0x683000, tailcall)
uint64_t main_f_683000(void* a0) {
    return main::sub_682f10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_683010  (orig 0x683010, tailcall)
uint64_t main_f_683010(void* a0) {
    return main::sub_682f10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6842f0  (orig 0x6842f0, tailcall)
uint64_t main_f_6842f0(void* a0) {
    return main::sub_683fc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_684300  (orig 0x684300, tailcall)
uint64_t main_f_684300(void* a0) {
    return main::sub_683fc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_684310  (orig 0x684310, tailcall)
void main_f_684310() { main::sub_683fc0(); }

// sub_684320  (orig 0x684320, tailcall)
uint64_t main_f_684320(void* a0) {
    return main::sub_683fc0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_684330  (orig 0x684330, tailcall)
uint64_t main_f_684330(void* a0) {
    return main::sub_683fc0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_686180  (orig 0x686180, tailcall)
void main_f_686180() { main::sub_6860b0(); }

// sub_686190  (orig 0x686190, tailcall)
uint64_t main_f_686190(void* a0) {
    return main::sub_6860b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6861a0  (orig 0x6861a0, tailcall)
uint64_t main_f_6861a0(void* a0) {
    return main::sub_6860b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_686dd0  (orig 0x686dd0, tailcall)
uint64_t main_f_686dd0(void* a0) {
    return main::sub_686b00(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_687650  (orig 0x687650, tailcall)
uint64_t main_f_687650(void* a0) {
    return main::sub_687470(((uintptr_t)((char*)(a0) - 72)));
}

// sub_687660  (orig 0x687660, tailcall)
void main_f_687660() { main::sub_687470(); }

// sub_687670  (orig 0x687670, tailcall)
uint64_t main_f_687670(void* a0) {
    return main::sub_687470(((uintptr_t)((char*)(a0) - 72)));
}

// sub_689020  (orig 0x689020, tailcall)
uint64_t main_f_689020(void* a0) {
    return main::sub_688e10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_689030  (orig 0x689030, tailcall)
uint64_t main_f_689030(void* a0) {
    return main::sub_688e10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_68c700  (orig 0x68c700, tailcall)
void main_f_68c700() { main::sub_68c590(); }

// sub_68c7c0  (orig 0x68c7c0, tailcall)
uint64_t main_f_68c7c0(void* a0) {
    return main::sub_68c590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_68c7d0  (orig 0x68c7d0, tailcall)
uint64_t main_f_68c7d0(void* a0) {
    return main::sub_68c590(((uintptr_t)((char*)(a0) - 72)));
}

// sub_68c940  (orig 0x68c940, tailcall)
uint64_t main_f_68c940(void* a0) {
    return main::sub_68c590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_68c950  (orig 0x68c950, tailcall)
uint64_t main_f_68c950(void* a0) {
    return main::sub_68c590(((uintptr_t)((char*)(a0) - 80)));
}

// sub_68c960  (orig 0x68c960, tailcall)
void main_f_68c960() { main::sub_ce0(); }

// sub_68da30  (orig 0x68da30, tailcall)
uint64_t main_f_68da30(void* a0) {
    return main::sub_691560(((uintptr_t)(*(uint64_t*)((char*)(a0) + 624))));
}

// sub_68da70  (orig 0x68da70, tailcall)
uint64_t main_f_68da70(void* a0) {
    return main::sub_68f030(((uintptr_t)(*(uint64_t*)((char*)(a0) + 248))));
}

// sub_68e840  (orig 0x68e840, tailcall)
uint64_t main_f_68e840(void* a0) {
    return main::sub_68db00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_68e9e0  (orig 0x68e9e0, tailcall)
void main_f_68e9e0() { main::sub_68e850(); }

// sub_68ea60  (orig 0x68ea60, tailcall)
uint64_t main_f_68ea60(void* a0) {
    return main::sub_68e850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_68ea70  (orig 0x68ea70, tailcall)
uint64_t main_f_68ea70(void* a0) {
    return main::sub_68e850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_68eb60  (orig 0x68eb60, tailcall)
uint64_t main_f_68eb60(void* a0) {
    return main::sub_68e850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_68eb70  (orig 0x68eb70, tailcall)
uint64_t main_f_68eb70(void* a0) {
    return main::sub_68e850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_68fdc0  (orig 0x68fdc0, tailcall)
void main_f_68fdc0() { main::sub_690130(); }

// sub_68feb0  (orig 0x68feb0, tailcall)
void main_f_68feb0() { main::sub_690130(); }

// sub_68fec0  (orig 0x68fec0, tailcall)
void main_f_68fec0() { main::sub_690130(); }

// sub_6900b0  (orig 0x6900b0, tailcall)
void main_f_6900b0() { main::sub_68ffb0(); }

// sub_6900c0  (orig 0x6900c0, tailcall)
void main_f_6900c0() { main::sub_690e40(); }

// sub_6900d0  (orig 0x6900d0, tailcall)
uint64_t main_f_6900d0(void* a0) {
    return main::sub_68ffb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6900e0  (orig 0x6900e0, tailcall)
uint64_t main_f_6900e0(void* a0) {
    return main::sub_68ffb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6900f0  (orig 0x6900f0, tailcall)
void main_f_6900f0() { main::sub_690e40(); }

// sub_690100  (orig 0x690100, tailcall)
void main_f_690100() { main::sub_690e40(); }

// sub_690110  (orig 0x690110, tailcall)
uint64_t main_f_690110(void* a0) {
    return main::sub_68ffb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_690120  (orig 0x690120, tailcall)
uint64_t main_f_690120(void* a0) {
    return main::sub_68ffb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_690370  (orig 0x690370, tailcall)
uint64_t main_f_690370(void* a0) {
    return main::sub_690260(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_691b40  (orig 0x691b40, tailcall)
uint64_t main_f_691b40(void* a0) {
    return main::sub_694d90(((uintptr_t)(*(uint64_t*)((char*)(a0) + 568))));
}

// sub_691b50  (orig 0x691b50, tailcall)
uint64_t main_f_691b50(void* a0) {
    return main::sub_695020(((uintptr_t)(*(uint64_t*)((char*)(a0) + 568))));
}

// sub_691b60  (orig 0x691b60, tailcall)
uint64_t main_f_691b60(void* a0) {
    return main::sub_695150(((uintptr_t)(*(uint64_t*)((char*)(a0) + 568))));
}

// sub_691bf0  (orig 0x691bf0, tailcall)
uint64_t main_f_691bf0(void* a0) {
    return main::sub_6953f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 568))));
}

// sub_691d10  (orig 0x691d10, tailcall)
uint64_t main_f_691d10(void* a0) {
    return main::sub_695de0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 568))));
}

// sub_6949a0  (orig 0x6949a0, tailcall)
uint64_t main_f_6949a0(void* a0) {
    return main::sub_694170(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6949b0  (orig 0x6949b0, tailcall)
void main_f_6949b0() { main::sub_694170(); }

// sub_6949c0  (orig 0x6949c0, tailcall)
uint64_t main_f_6949c0(void* a0) {
    return main::sub_694170(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6965c0  (orig 0x6965c0, tailcall)
void main_f_6965c0() { main::sub_ce0(); }

// sub_696610  (orig 0x696610, tailcall)
void main_f_696610() { main::sub_ce0(); }

// sub_6991b0  (orig 0x6991b0, tailcall)
void main_f_6991b0() { main::sub_699080(); }

// sub_699270  (orig 0x699270, tailcall)
uint64_t main_f_699270(void* a0) {
    return main::sub_699080(((uintptr_t)((char*)(a0) - 72)));
}

// sub_699280  (orig 0x699280, tailcall)
uint64_t main_f_699280(void* a0) {
    return main::sub_699080(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6993f0  (orig 0x6993f0, tailcall)
uint64_t main_f_6993f0(void* a0) {
    return main::sub_699080(((uintptr_t)((char*)(a0) - 80)));
}

// sub_699400  (orig 0x699400, tailcall)
uint64_t main_f_699400(void* a0) {
    return main::sub_699080(((uintptr_t)((char*)(a0) - 80)));
}

// sub_699d70  (orig 0x699d70, tailcall)
uint64_t main_f_699d70(void* a0) {
    return main::sub_699b40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_699d80  (orig 0x699d80, tailcall)
uint64_t main_f_699d80(void* a0) {
    return main::sub_699b40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_699d90  (orig 0x699d90, tailcall)
void main_f_699d90() { main::sub_699b40(); }

// sub_699da0  (orig 0x699da0, tailcall)
uint64_t main_f_699da0(void* a0) {
    return main::sub_699b40(((uintptr_t)((char*)(a0) - 72)));
}

// sub_699db0  (orig 0x699db0, tailcall)
uint64_t main_f_699db0(void* a0) {
    return main::sub_699b40(((uintptr_t)((char*)(a0) - 80)));
}

// sub_699f50  (orig 0x699f50, tailcall)
uint64_t main_f_699f50(void* a0) {
    return main::sub_699f60(((uintptr_t)((char*)(a0) + 544)));
}

// sub_69bde0  (orig 0x69bde0, tailcall)
uint64_t main_f_69bde0(void* a0) {
    return main::sub_69a540(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_69c1e0  (orig 0x69c1e0, tailcall)
uint64_t main_f_69c1e0(void* a0) {
    return main::sub_69b100(((uintptr_t)(*(uint64_t*)((char*)(a0) + 80))));
}

// sub_69d610  (orig 0x69d610, tailcall)
void main_f_69d610() { main::sub_69d4b0(); }

// sub_69d620  (orig 0x69d620, tailcall)
uint64_t main_f_69d620(void* a0) {
    return main::sub_69d4b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_69d630  (orig 0x69d630, tailcall)
uint64_t main_f_69d630(void* a0) {
    return main::sub_69d4b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_69d650  (orig 0x69d650, tailcall)
void main_f_69d650() { main::sub_ce0(); }

// sub_6a0360  (orig 0x6a0360, tailcall)
void main_f_6a0360() { main::sub_6a0380(); }

// sub_6a0370  (orig 0x6a0370, tailcall)
void main_f_6a0370() { main::sub_6a0380(); }

// sub_6a1d30  (orig 0x6a1d30, tailcall)
void main_f_6a1d30() { main::sub_6a1ab0(); }

// sub_6a3c80  (orig 0x6a3c80, tailcall)
void main_f_6a3c80() { main::sub_6a3820(); }

// sub_6a56a0  (orig 0x6a56a0, tailcall)
void main_f_6a56a0() { main::sub_15b6e10(); }

// sub_6a6060  (orig 0x6a6060, tailcall)
void main_f_6a6060() { main::sub_15b6e10(); }

// sub_6a6120  (orig 0x6a6120, tailcall)
void main_f_6a6120() { main::sub_15b87a0(); }

// sub_6a6a90  (orig 0x6a6a90, tailcall)
void main_f_6a6a90() { main::sub_15b6e10(); }

// sub_6a83e0  (orig 0x6a83e0, tailcall)
void main_f_6a83e0() { main::sub_15b6e10(); }

// sub_6a84f0  (orig 0x6a84f0, tailcall)
void main_f_6a84f0() { main::sub_15b6e10(); }

// sub_6a8540  (orig 0x6a8540, tailcall)
void main_f_6a8540() { main::sub_15b6e10(); }

// sub_6a91b0  (orig 0x6a91b0, tailcall)
void main_f_6a91b0() { main::sub_15b6e10(); }

// sub_6aa9b0  (orig 0x6aa9b0, tailcall)
void main_f_6aa9b0() { main::sub_15b6e10(); }

// sub_6ab9e0  (orig 0x6ab9e0, tailcall)
void main_f_6ab9e0() { main::sub_15b6e10(); }

// sub_6abe10  (orig 0x6abe10, tailcall)
void main_f_6abe10() { main::sub_15b6e10(); }

// sub_6abe20  (orig 0x6abe20, tailcall)
void main_f_6abe20() { main::sub_15b6e10(); }

// sub_6ad260  (orig 0x6ad260, tailcall)
void main_f_6ad260() { main::sub_ce0(); }

// sub_6af540  (orig 0x6af540, tailcall)
void main_f_6af540() { main::sub_6af2b0(); }

// sub_6af6a0  (orig 0x6af6a0, tailcall)
void main_f_6af6a0() { main::sub_ce0(); }

// sub_6b0ff0  (orig 0x6b0ff0, tailcall)
void main_f_6b0ff0() { main::sub_6b1000(); }

// sub_6b6a40  (orig 0x6b6a40, tailcall)
uint64_t main_f_6b6a40(void* a0) {
    return main::sub_6b67d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6b6a50  (orig 0x6b6a50, tailcall)
uint64_t main_f_6b6a50(void* a0) {
    return main::sub_6b67d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6b6a60  (orig 0x6b6a60, tailcall)
void main_f_6b6a60() { main::sub_6b67d0(); }

// sub_6b6a70  (orig 0x6b6a70, tailcall)
uint64_t main_f_6b6a70(void* a0) {
    return main::sub_6b67d0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6b6a80  (orig 0x6b6a80, tailcall)
uint64_t main_f_6b6a80(void* a0) {
    return main::sub_6b67d0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6b7cc0  (orig 0x6b7cc0, tailcall)
uint64_t main_f_6b7cc0(void* a0) {
    return main::sub_6b7b00(((uintptr_t)((char*)(a0) - 96)));
}

// sub_6b7dc0  (orig 0x6b7dc0, tailcall)
uint64_t main_f_6b7dc0(void* a0) {
    return main::sub_6b7cd0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6b7dd0  (orig 0x6b7dd0, tailcall)
uint64_t main_f_6b7dd0(void* a0) {
    return main::sub_6b7cd0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6b8340  (orig 0x6b8340, tailcall)
uint64_t main_f_6b8340(void* a0) {
    return main::sub_6b7f20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6b8350  (orig 0x6b8350, tailcall)
uint64_t main_f_6b8350(void* a0) {
    return main::sub_6b7f20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6c2ba0  (orig 0x6c2ba0, tailcall)
void main_f_6c2ba0() { main::sub_6c2bb0(); }

// sub_6c36a0  (orig 0x6c36a0, tailcall)
void main_f_6c36a0() { main::sub_6c35c0(); }

// sub_6c5bf0  (orig 0x6c5bf0, tailcall)
void main_f_6c5bf0() { main::sub_6c5a70(); }

// sub_6c5c00  (orig 0x6c5c00, tailcall)
uint64_t main_f_6c5c00(void* a0) {
    return main::sub_6c5a70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6c5c10  (orig 0x6c5c10, tailcall)
uint64_t main_f_6c5c10(void* a0) {
    return main::sub_6c5a70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6ce710  (orig 0x6ce710, tailcall)
void main_f_6ce710() { main::sub_6ce780(); }

// sub_6ce720  (orig 0x6ce720, tailcall)
uint64_t main_f_6ce720(void* a0) {
    return main::sub_6ce5e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6ce740  (orig 0x6ce740, tailcall)
void main_f_6ce740() { main::sub_6ce780(); }

// sub_6ce750  (orig 0x6ce750, tailcall)
void main_f_6ce750() { main::sub_6ce780(); }

// sub_6ce760  (orig 0x6ce760, tailcall)
uint64_t main_f_6ce760(void* a0) {
    return main::sub_6ce5e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6d75c0  (orig 0x6d75c0, tailcall)
uint64_t main_f_6d75c0(void* a0) {
    return main::sub_6d73a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6d75d0  (orig 0x6d75d0, tailcall)
uint64_t main_f_6d75d0(void* a0) {
    return main::sub_6d73a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6d75e0  (orig 0x6d75e0, tailcall)
void main_f_6d75e0() { main::sub_6d73a0(); }

// sub_6d75f0  (orig 0x6d75f0, tailcall)
uint64_t main_f_6d75f0(void* a0) {
    return main::sub_6d73a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6d7600  (orig 0x6d7600, tailcall)
uint64_t main_f_6d7600(void* a0) {
    return main::sub_6d73a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6d8260  (orig 0x6d8260, tailcall)
uint64_t main_f_6d8260(void* a0) {
    return main::sub_6d8140(((uintptr_t)((char*)(a0) - 96)));
}

// sub_6d8360  (orig 0x6d8360, tailcall)
uint64_t main_f_6d8360(void* a0) {
    return main::sub_6d8270(((uintptr_t)((char*)(a0) - 72)));
}

// sub_6d8370  (orig 0x6d8370, tailcall)
uint64_t main_f_6d8370(void* a0) {
    return main::sub_6d8270(((uintptr_t)((char*)(a0) - 80)));
}

// sub_6fff60  (orig 0x6fff60, tailcall)
void main_f_6fff60() { main::sub_ce0(); }

// sub_701440  (orig 0x701440, tailcall)
void main_f_701440() { main::sub_ce0(); }

// sub_7014f0  (orig 0x7014f0, tailcall)
void main_f_7014f0() { main::sub_6fed50(); }

// sub_701500  (orig 0x701500, tailcall)
void main_f_701500() { main::sub_6febe0(); }

// sub_704030  (orig 0x704030, tailcall)
uint64_t main_f_704030(void* a0) {
    return gflib3::gflnet3_text_format(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_704040  (orig 0x704040, tailcall)
uint64_t main_f_704040(void* a0) {
    return gflib3::gflnet3_text_format_4(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_70b180  (orig 0x70b180, tailcall)
void main_f_70b180() { gflib3::gflnet3_message_lite_5(); }

// sub_70d190  (orig 0x70d190, tailcall)
void main_f_70d190() { main_f_70d9f0(); }

// sub_70d420  (orig 0x70d420, tailcall)
void main_f_70d420() { main_f_70da00(); }

// sub_70d610  (orig 0x70d610, tailcall)
void main_f_70d610() { main_f_70da00(); }

// sub_713470  (orig 0x713470, tailcall)
void main_f_713470() { main::sub_ce0(); }

// sub_716db0  (orig 0x716db0, tailcall)
void main_f_716db0() { main::sub_722f60(); }

// sub_716dc0  (orig 0x716dc0, tailcall)
void main_f_716dc0() { main::sub_723780(); }

// sub_716f30  (orig 0x716f30, tailcall)
void main_f_716f30() { main::sub_723970(); }

// sub_718d00  (orig 0x718d00, tailcall)
void main_f_718d00() { main::sub_ce0(); }

// sub_7191c0  (orig 0x7191c0, tailcall)
void main_f_7191c0() { main::sub_ce0(); }

// sub_719720  (orig 0x719720, tailcall)
void main_f_719720() { main::sub_ce0(); }

// sub_719c80  (orig 0x719c80, tailcall)
void main_f_719c80() { main::sub_ce0(); }

// sub_71a1e0  (orig 0x71a1e0, tailcall)
void main_f_71a1e0() { main::sub_ce0(); }

// sub_71a750  (orig 0x71a750, tailcall)
void main_f_71a750() { main::sub_ce0(); }

// sub_71acc0  (orig 0x71acc0, tailcall)
void main_f_71acc0() { main::sub_ce0(); }

// sub_71b200  (orig 0x71b200, tailcall)
void main_f_71b200() { main::sub_ce0(); }

// sub_71bc70  (orig 0x71bc70, tailcall)
void main_f_71bc70() { main::sub_ce0(); }

// sub_71c450  (orig 0x71c450, tailcall)
void main_f_71c450() { main::sub_ce0(); }

// sub_72dc40  (orig 0x72dc40, tailcall)
void main_f_72dc40() { main::sub_ce0(); }

// sub_72df70  (orig 0x72df70, tailcall)
void main_f_72df70() { main_f_717010(); }

// sub_75f9f0  (orig 0x75f9f0, tailcall)
void main_f_75f9f0() { gflib3::gflnet3_descriptor_17(); }

// sub_760180  (orig 0x760180, tailcall)
uint64_t main_f_760180(void* a0) {
    return main::sub_760190(((uintptr_t)((char*)(a0) + 8)));
}

// sub_7626f0  (orig 0x7626f0, tailcall)
uint64_t main_f_7626f0(void* a0) {
    return main::sub_779480(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_762930  (orig 0x762930, tailcall)
uint64_t main_f_762930(void* a0) {
    return main::sub_771ff0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_762940  (orig 0x762940, tailcall)
uint64_t main_f_762940(void* a0) {
    return main::sub_774690(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_762cf0  (orig 0x762cf0, tailcall)
uint64_t main_f_762cf0(void* a0) {
    return main::sub_762bb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_762d00  (orig 0x762d00, tailcall)
void main_f_762d00() { main::sub_762bb0(); }

// sub_762d10  (orig 0x762d10, tailcall)
uint64_t main_f_762d10(void* a0) {
    return main::sub_762bb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_762d20  (orig 0x762d20, tailcall)
uint64_t main_f_762d20(void* a0) {
    return main::sub_771120(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_762d30  (orig 0x762d30, tailcall)
uint64_t main_f_762d30(void* a0) {
    return main::sub_771250(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_762d40  (orig 0x762d40, tailcall)
uint64_t main_f_762d40(void* a0) {
    return main::sub_770cf0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_762d90  (orig 0x762d90, tailcall)
uint64_t main_f_762d90(void* a0) {
    return main::sub_778c10(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_762fd0  (orig 0x762fd0, tailcall)
uint64_t main_f_762fd0(void* a0) {
    return main::sub_772950(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_762fe0  (orig 0x762fe0, tailcall)
uint64_t main_f_762fe0(void* a0) {
    return main::sub_775390(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_762ff0  (orig 0x762ff0, tailcall)
uint64_t main_f_762ff0(void* a0) {
    return main::sub_77c010(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_763000  (orig 0x763000, tailcall)
uint64_t main_f_763000(void* a0) {
    return main::sub_7762b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_763010  (orig 0x763010, tailcall)
uint64_t main_f_763010(void* a0) {
    return main::sub_77ce80(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_763020  (orig 0x763020, tailcall)
uint64_t main_f_763020(void* a0) {
    return main::sub_771ea0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_763dc0  (orig 0x763dc0, tailcall)
uint64_t main_f_763dc0(void* a0) {
    return main::sub_774e10(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_764c90  (orig 0x764c90, tailcall)
uint64_t main_f_764c90(void* a0) {
    return main::sub_774910(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_7658a0  (orig 0x7658a0, tailcall)
uint64_t main_f_7658a0(void* a0) {
    return main::sub_7723b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_765ab0  (orig 0x765ab0, tailcall)
uint64_t main_f_765ab0(void* a0) {
    return main::sub_771280(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_765ac0  (orig 0x765ac0, tailcall)
uint64_t main_f_765ac0(void* a0) {
    return main::sub_777d50(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_765dd0  (orig 0x765dd0, tailcall)
uint64_t main_f_765dd0(void* a0) {
    return main::sub_773210(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_765ee0  (orig 0x765ee0, tailcall)
uint64_t main_f_765ee0(void* a0) {
    return main::sub_773630(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767080  (orig 0x767080, tailcall)
uint64_t main_f_767080(void* a0) {
    return main::sub_777840(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_7670a0  (orig 0x7670a0, tailcall)
uint64_t main_f_7670a0(void* a0) {
    return main::sub_774550(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_7670b0  (orig 0x7670b0, tailcall)
uint64_t main_f_7670b0(void* a0) {
    return main::sub_7747d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767160  (orig 0x767160, tailcall)
uint64_t main_f_767160(void* a0) {
    return main::sub_7726d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767540  (orig 0x767540, tailcall)
uint64_t main_f_767540(void* a0) {
    return main::sub_774190(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767550  (orig 0x767550, tailcall)
uint64_t main_f_767550(void* a0) {
    return main::sub_775090(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767560  (orig 0x767560, tailcall)
uint64_t main_f_767560(void* a0) {
    return main::sub_775210(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767670  (orig 0x767670, tailcall)
uint64_t main_f_767670(void* a0) {
    return main::sub_7754d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767680  (orig 0x767680, tailcall)
uint64_t main_f_767680(void* a0) {
    return main::sub_775620(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_7676c0  (orig 0x7676c0, tailcall)
uint64_t main_f_7676c0(void* a0) {
    return main::sub_77c160(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_7676d0  (orig 0x7676d0, tailcall)
uint64_t main_f_7676d0(void* a0) {
    return main::sub_776530(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_7676e0  (orig 0x7676e0, tailcall)
uint64_t main_f_7676e0(void* a0) {
    return main::sub_77d120(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_7676f0  (orig 0x7676f0, tailcall)
uint64_t main_f_7676f0(void* a0) {
    return main::sub_777330(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767700  (orig 0x767700, tailcall)
uint64_t main_f_767700(void* a0) {
    return main::sub_777480(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767710  (orig 0x767710, tailcall)
uint64_t main_f_767710(void* a0) {
    return main::sub_7775c0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767720  (orig 0x767720, tailcall)
uint64_t main_f_767720(void* a0) {
    return main::sub_7724f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767870  (orig 0x767870, tailcall)
uint64_t main_f_767870(void* a0) {
    return main::sub_7779a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767930  (orig 0x767930, tailcall)
uint64_t main_f_767930(void* a0) {
    return main::sub_777ae0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767940  (orig 0x767940, tailcall)
uint64_t main_f_767940(void* a0) {
    return main::sub_77e7a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_767d90  (orig 0x767d90, tailcall)
uint64_t main_f_767d90(void* a0) {
    return main::sub_772270(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_768ee0  (orig 0x768ee0, tailcall)
uint64_t main_f_768ee0(void* a0) {
    return main::sub_778d60(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_769040  (orig 0x769040, tailcall)
uint64_t main_f_769040(void* a0) {
    return main::sub_77eb90(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_769050  (orig 0x769050, tailcall)
uint64_t main_f_769050(void* a0) {
    return main::sub_77edf0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_769060  (orig 0x769060, tailcall)
uint64_t main_f_769060(void* a0) {
    return main::sub_77f050(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_7690a0  (orig 0x7690a0, tailcall)
uint64_t main_f_7690a0(void* a0) {
    return main::sub_77f4b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_7690b0  (orig 0x7690b0, tailcall)
uint64_t main_f_7690b0(void* a0) {
    return main::sub_77f5f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_769240  (orig 0x769240, tailcall)
uint64_t main_f_769240(void* a0) {
    return main::sub_7742d0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_769260  (orig 0x769260, tailcall)
uint64_t main_f_769260(void* a0) {
    return main::sub_774410(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_769390  (orig 0x769390, tailcall)
void main_f_769390() { main::sub_7803c0(); }

// sub_76c480  (orig 0x76c480, tailcall)
void main_f_76c480() { main::sub_ce0(); }

// sub_76d7e0  (orig 0x76d7e0, tailcall)
void main_f_76d7e0() { main::sub_ce0(); }

// sub_76e560  (orig 0x76e560, tailcall)
void main_f_76e560() { main::sub_ce0(); }

// sub_76f790  (orig 0x76f790, tailcall)
void main_f_76f790() { main::sub_762bb0(); }

// sub_76f7a0  (orig 0x76f7a0, tailcall)
uint64_t main_f_76f7a0(void* a0) {
    return main::sub_762bb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_76f7b0  (orig 0x76f7b0, tailcall)
void main_f_76f7b0() { main::sub_762bb0(); }

// sub_76f7c0  (orig 0x76f7c0, tailcall)
uint64_t main_f_76f7c0(void* a0) {
    return main::sub_762bb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_76f7d0  (orig 0x76f7d0, tailcall)
uint64_t main_f_76f7d0(void* a0) {
    return main::sub_770fe0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_76f7e0  (orig 0x76f7e0, tailcall)
uint64_t main_f_76f7e0(void* a0) {
    return main::sub_771130(((uintptr_t)(*(uint64_t*)((char*)(a0) + 152))));
}

// sub_770c40  (orig 0x770c40, tailcall)
void main_f_770c40() { main::sub_ce0(); }

// sub_7816e0  (orig 0x7816e0, tailcall)
void main_f_7816e0() { main::sub_ce0(); }

// sub_782990  (orig 0x782990, tailcall)
void main_f_782990() { main::sub_ce0(); }

// sub_788b40  (orig 0x788b40, tailcall)
void main_f_788b40() { main::sub_ce0(); }

// sub_78b030  (orig 0x78b030, tailcall)
void main_f_78b030() { main::sub_ce0(); }

// sub_78eca0  (orig 0x78eca0, tailcall)
void main_f_78eca0() { main::sub_ce0(); }

// sub_78f7c0  (orig 0x78f7c0, tailcall)
void main_f_78f7c0() { main::sub_78f620(); }

// sub_78f880  (orig 0x78f880, tailcall)
uint64_t main_f_78f880(void* a0) {
    return main::sub_78f620(((uintptr_t)((char*)(a0) - 72)));
}

// sub_78f890  (orig 0x78f890, tailcall)
uint64_t main_f_78f890(void* a0) {
    return main::sub_78f620(((uintptr_t)((char*)(a0) - 72)));
}

// sub_78fa00  (orig 0x78fa00, tailcall)
uint64_t main_f_78fa00(void* a0) {
    return main::sub_78f620(((uintptr_t)((char*)(a0) - 80)));
}

// sub_78fa10  (orig 0x78fa10, tailcall)
uint64_t main_f_78fa10(void* a0) {
    return main::sub_78f620(((uintptr_t)((char*)(a0) - 80)));
}

// sub_78fa20  (orig 0x78fa20, tailcall)
void main_f_78fa20() { main::sub_e7c250(); }

// sub_78fa30  (orig 0x78fa30, tailcall)
void main_f_78fa30() { main::sub_790010(); }

// sub_78fa40  (orig 0x78fa40, tailcall)
uint64_t main_f_78fa40(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_78fa50  (orig 0x78fa50, tailcall)
uint64_t main_f_78fa50(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_78fa60  (orig 0x78fa60, tailcall)
void main_f_78fa60() { main::sub_790010(); }

// sub_78fa70  (orig 0x78fa70, tailcall)
void main_f_78fa70() { main::sub_790010(); }

// sub_78fa80  (orig 0x78fa80, tailcall)
uint64_t main_f_78fa80(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_78fa90  (orig 0x78fa90, tailcall)
uint64_t main_f_78fa90(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_790cb0  (orig 0x790cb0, tailcall)
void main_f_790cb0() { main::sub_790e60(); }

// sub_790d80  (orig 0x790d80, tailcall)
void main_f_790d80() { main::sub_790e60(); }

// sub_790d90  (orig 0x790d90, tailcall)
void main_f_790d90() { main::sub_790e60(); }

// sub_7935d0  (orig 0x7935d0, tailcall)
uint64_t main_f_7935d0(void* a0) {
    return main::sub_6744e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 112))));
}

// sub_7935f0  (orig 0x7935f0, tailcall)
uint64_t main_f_7935f0(void* a0) {
    return main::sub_674680(((uintptr_t)(*(uint64_t*)((char*)(a0) + 112))));
}

// sub_793600  (orig 0x793600, tailcall)
uint64_t main_f_793600(void* a0) {
    return main::sub_674690(((uintptr_t)(*(uint64_t*)((char*)(a0) + 112))));
}

// sub_793610  (orig 0x793610, tailcall)
uint64_t main_f_793610(void* a0) {
    return main::sub_6746f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 112))));
}

// sub_7944b0  (orig 0x7944b0, tailcall)
void main_f_7944b0() { main::sub_ce0(); }

// sub_7995e0  (orig 0x7995e0, tailcall)
void main_f_7995e0() { main::sub_799420(); }

// sub_7996a0  (orig 0x7996a0, tailcall)
uint64_t main_f_7996a0(void* a0) {
    return main::sub_799420(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7996b0  (orig 0x7996b0, tailcall)
uint64_t main_f_7996b0(void* a0) {
    return main::sub_799420(((uintptr_t)((char*)(a0) - 72)));
}

// sub_799820  (orig 0x799820, tailcall)
uint64_t main_f_799820(void* a0) {
    return main::sub_799420(((uintptr_t)((char*)(a0) - 80)));
}

// sub_799830  (orig 0x799830, tailcall)
uint64_t main_f_799830(void* a0) {
    return main::sub_799420(((uintptr_t)((char*)(a0) - 80)));
}

// sub_799d50  (orig 0x799d50, tailcall)
void main_f_799d50() { main::sub_799b20(); }

// sub_799d60  (orig 0x799d60, tailcall)
void main_f_799d60() { main::sub_799dd0(); }

// sub_799d70  (orig 0x799d70, tailcall)
uint64_t main_f_799d70(void* a0) {
    return main::sub_799b20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_799d80  (orig 0x799d80, tailcall)
uint64_t main_f_799d80(void* a0) {
    return main::sub_799b20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_799d90  (orig 0x799d90, tailcall)
void main_f_799d90() { main::sub_799dd0(); }

// sub_799da0  (orig 0x799da0, tailcall)
void main_f_799da0() { main::sub_799dd0(); }

// sub_799db0  (orig 0x799db0, tailcall)
uint64_t main_f_799db0(void* a0) {
    return main::sub_799b20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_799dc0  (orig 0x799dc0, tailcall)
uint64_t main_f_799dc0(void* a0) {
    return main::sub_799b20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7a3990  (orig 0x7a3990, tailcall)
void main_f_7a3990() { main::sub_7a3850(); }

// sub_7a39a0  (orig 0x7a39a0, tailcall)
void main_f_7a39a0() { main::sub_7a3af0(); }

// sub_7a39b0  (orig 0x7a39b0, tailcall)
uint64_t main_f_7a39b0(void* a0) {
    return main::sub_7a3850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7a39c0  (orig 0x7a39c0, tailcall)
uint64_t main_f_7a39c0(void* a0) {
    return main::sub_7a3850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7a39d0  (orig 0x7a39d0, tailcall)
void main_f_7a39d0() { main::sub_7a3af0(); }

// sub_7a39e0  (orig 0x7a39e0, tailcall)
void main_f_7a39e0() { main::sub_7a3af0(); }

// sub_7a39f0  (orig 0x7a39f0, tailcall)
uint64_t main_f_7a39f0(void* a0) {
    return main::sub_7a3850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7a3a00  (orig 0x7a3a00, tailcall)
uint64_t main_f_7a3a00(void* a0) {
    return main::sub_7a3850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7a8800  (orig 0x7a8800, tailcall)
void main_f_7a8800() { main::sub_e7c4c0(); }

// sub_7a8810  (orig 0x7a8810, tailcall)
void main_f_7a8810() { main::sub_7a8880(); }

// sub_7a8820  (orig 0x7a8820, tailcall)
uint64_t main_f_7a8820(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7a8830  (orig 0x7a8830, tailcall)
uint64_t main_f_7a8830(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7a8840  (orig 0x7a8840, tailcall)
void main_f_7a8840() { main::sub_7a8880(); }

// sub_7a8850  (orig 0x7a8850, tailcall)
void main_f_7a8850() { main::sub_7a8880(); }

// sub_7a8860  (orig 0x7a8860, tailcall)
uint64_t main_f_7a8860(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7a8870  (orig 0x7a8870, tailcall)
uint64_t main_f_7a8870(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7a8d30  (orig 0x7a8d30, tailcall)
void main_f_7a8d30() { main::sub_e7feb0(); }

// sub_7a8d40  (orig 0x7a8d40, tailcall)
void main_f_7a8d40() { main::sub_7a8db0(); }

// sub_7a8d50  (orig 0x7a8d50, tailcall)
uint64_t main_f_7a8d50(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7a8d60  (orig 0x7a8d60, tailcall)
uint64_t main_f_7a8d60(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7a8d70  (orig 0x7a8d70, tailcall)
void main_f_7a8d70() { main::sub_7a8db0(); }

// sub_7a8d80  (orig 0x7a8d80, tailcall)
void main_f_7a8d80() { main::sub_7a8db0(); }

// sub_7a8d90  (orig 0x7a8d90, tailcall)
uint64_t main_f_7a8d90(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7a8da0  (orig 0x7a8da0, tailcall)
uint64_t main_f_7a8da0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7aada0  (orig 0x7aada0, tailcall)
void main_f_7aada0() { main::sub_7aaf50(); }

// sub_7aae70  (orig 0x7aae70, tailcall)
void main_f_7aae70() { main::sub_7aaf50(); }

// sub_7aae80  (orig 0x7aae80, tailcall)
void main_f_7aae80() { main::sub_7aaf50(); }

// sub_7ab9a0  (orig 0x7ab9a0, tailcall)
void main_f_7ab9a0() { main::sub_e7c4c0(); }

// sub_7ab9b0  (orig 0x7ab9b0, tailcall)
void main_f_7ab9b0() { main::sub_7aba20(); }

// sub_7ab9c0  (orig 0x7ab9c0, tailcall)
uint64_t main_f_7ab9c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7ab9d0  (orig 0x7ab9d0, tailcall)
uint64_t main_f_7ab9d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7ab9e0  (orig 0x7ab9e0, tailcall)
void main_f_7ab9e0() { main::sub_7aba20(); }

// sub_7ab9f0  (orig 0x7ab9f0, tailcall)
void main_f_7ab9f0() { main::sub_7aba20(); }

// sub_7aba00  (orig 0x7aba00, tailcall)
uint64_t main_f_7aba00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7aba10  (orig 0x7aba10, tailcall)
uint64_t main_f_7aba10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7ac270  (orig 0x7ac270, tailcall)
void main_f_7ac270() { main::sub_e7c4c0(); }

// sub_7ac280  (orig 0x7ac280, tailcall)
void main_f_7ac280() { main::sub_7ac2f0(); }

// sub_7ac290  (orig 0x7ac290, tailcall)
uint64_t main_f_7ac290(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7ac2a0  (orig 0x7ac2a0, tailcall)
uint64_t main_f_7ac2a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7ac2b0  (orig 0x7ac2b0, tailcall)
void main_f_7ac2b0() { main::sub_7ac2f0(); }

// sub_7ac2c0  (orig 0x7ac2c0, tailcall)
void main_f_7ac2c0() { main::sub_7ac2f0(); }

// sub_7ac2d0  (orig 0x7ac2d0, tailcall)
uint64_t main_f_7ac2d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7ac2e0  (orig 0x7ac2e0, tailcall)
uint64_t main_f_7ac2e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7aef20  (orig 0x7aef20, tailcall)
void main_f_7aef20() { main::sub_e7c4c0(); }

// sub_7aef30  (orig 0x7aef30, tailcall)
void main_f_7aef30() { main::sub_7aefa0(); }

// sub_7aef40  (orig 0x7aef40, tailcall)
uint64_t main_f_7aef40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7aef50  (orig 0x7aef50, tailcall)
uint64_t main_f_7aef50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7aef60  (orig 0x7aef60, tailcall)
void main_f_7aef60() { main::sub_7aefa0(); }

// sub_7aef70  (orig 0x7aef70, tailcall)
void main_f_7aef70() { main::sub_7aefa0(); }

// sub_7aef80  (orig 0x7aef80, tailcall)
uint64_t main_f_7aef80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7aef90  (orig 0x7aef90, tailcall)
uint64_t main_f_7aef90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7afae0  (orig 0x7afae0, tailcall)
void main_f_7afae0() { main::sub_e7c4c0(); }

// sub_7afaf0  (orig 0x7afaf0, tailcall)
void main_f_7afaf0() { main::sub_7afb60(); }

// sub_7afb00  (orig 0x7afb00, tailcall)
uint64_t main_f_7afb00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7afb10  (orig 0x7afb10, tailcall)
uint64_t main_f_7afb10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7afb20  (orig 0x7afb20, tailcall)
void main_f_7afb20() { main::sub_7afb60(); }

// sub_7afb30  (orig 0x7afb30, tailcall)
void main_f_7afb30() { main::sub_7afb60(); }

// sub_7afb40  (orig 0x7afb40, tailcall)
uint64_t main_f_7afb40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7afb50  (orig 0x7afb50, tailcall)
uint64_t main_f_7afb50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b0960  (orig 0x7b0960, tailcall)
void main_f_7b0960() { main::sub_e7c4c0(); }

// sub_7b0970  (orig 0x7b0970, tailcall)
void main_f_7b0970() { main::sub_7b09e0(); }

// sub_7b0980  (orig 0x7b0980, tailcall)
uint64_t main_f_7b0980(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b0990  (orig 0x7b0990, tailcall)
uint64_t main_f_7b0990(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b09a0  (orig 0x7b09a0, tailcall)
void main_f_7b09a0() { main::sub_7b09e0(); }

// sub_7b09b0  (orig 0x7b09b0, tailcall)
void main_f_7b09b0() { main::sub_7b09e0(); }

// sub_7b09c0  (orig 0x7b09c0, tailcall)
uint64_t main_f_7b09c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b09d0  (orig 0x7b09d0, tailcall)
uint64_t main_f_7b09d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b1140  (orig 0x7b1140, tailcall)
void main_f_7b1140() { main::sub_e7c4c0(); }

// sub_7b1150  (orig 0x7b1150, tailcall)
void main_f_7b1150() { main::sub_7b11c0(); }

// sub_7b1160  (orig 0x7b1160, tailcall)
uint64_t main_f_7b1160(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b1170  (orig 0x7b1170, tailcall)
uint64_t main_f_7b1170(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b1180  (orig 0x7b1180, tailcall)
void main_f_7b1180() { main::sub_7b11c0(); }

// sub_7b1190  (orig 0x7b1190, tailcall)
void main_f_7b1190() { main::sub_7b11c0(); }

// sub_7b11a0  (orig 0x7b11a0, tailcall)
uint64_t main_f_7b11a0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b11b0  (orig 0x7b11b0, tailcall)
uint64_t main_f_7b11b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b1e40  (orig 0x7b1e40, tailcall)
void main_f_7b1e40() { main::sub_e7c4c0(); }

// sub_7b1e50  (orig 0x7b1e50, tailcall)
void main_f_7b1e50() { main::sub_7b1ec0(); }

// sub_7b1e60  (orig 0x7b1e60, tailcall)
uint64_t main_f_7b1e60(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b1e70  (orig 0x7b1e70, tailcall)
uint64_t main_f_7b1e70(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b1e80  (orig 0x7b1e80, tailcall)
void main_f_7b1e80() { main::sub_7b1ec0(); }

// sub_7b1e90  (orig 0x7b1e90, tailcall)
void main_f_7b1e90() { main::sub_7b1ec0(); }

// sub_7b1ea0  (orig 0x7b1ea0, tailcall)
uint64_t main_f_7b1ea0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b1eb0  (orig 0x7b1eb0, tailcall)
uint64_t main_f_7b1eb0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b39e0  (orig 0x7b39e0, tailcall)
void main_f_7b39e0() { main::sub_e7c4c0(); }

// sub_7b39f0  (orig 0x7b39f0, tailcall)
void main_f_7b39f0() { main::sub_7b3a60(); }

// sub_7b3a00  (orig 0x7b3a00, tailcall)
uint64_t main_f_7b3a00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b3a10  (orig 0x7b3a10, tailcall)
uint64_t main_f_7b3a10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b3a20  (orig 0x7b3a20, tailcall)
void main_f_7b3a20() { main::sub_7b3a60(); }

// sub_7b3a30  (orig 0x7b3a30, tailcall)
void main_f_7b3a30() { main::sub_7b3a60(); }

// sub_7b3a40  (orig 0x7b3a40, tailcall)
uint64_t main_f_7b3a40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b3a50  (orig 0x7b3a50, tailcall)
uint64_t main_f_7b3a50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b4790  (orig 0x7b4790, tailcall)
void main_f_7b4790() { main::sub_e7c4c0(); }

// sub_7b47a0  (orig 0x7b47a0, tailcall)
void main_f_7b47a0() { main::sub_7b4810(); }

// sub_7b47b0  (orig 0x7b47b0, tailcall)
uint64_t main_f_7b47b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b47c0  (orig 0x7b47c0, tailcall)
uint64_t main_f_7b47c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b47d0  (orig 0x7b47d0, tailcall)
void main_f_7b47d0() { main::sub_7b4810(); }

// sub_7b47e0  (orig 0x7b47e0, tailcall)
void main_f_7b47e0() { main::sub_7b4810(); }

// sub_7b47f0  (orig 0x7b47f0, tailcall)
uint64_t main_f_7b47f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b4800  (orig 0x7b4800, tailcall)
uint64_t main_f_7b4800(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b5930  (orig 0x7b5930, tailcall)
void main_f_7b5930() { main::sub_7b5c60(); }

// sub_7b5ac0  (orig 0x7b5ac0, tailcall)
void main_f_7b5ac0() { main::sub_7b5c60(); }

// sub_7b5ad0  (orig 0x7b5ad0, tailcall)
void main_f_7b5ad0() { main::sub_7b5c60(); }

// sub_7b63c0  (orig 0x7b63c0, tailcall)
void main_f_7b63c0() { main::sub_e7c4c0(); }

// sub_7b63d0  (orig 0x7b63d0, tailcall)
void main_f_7b63d0() { main::sub_7b6440(); }

// sub_7b63e0  (orig 0x7b63e0, tailcall)
uint64_t main_f_7b63e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b63f0  (orig 0x7b63f0, tailcall)
uint64_t main_f_7b63f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b6400  (orig 0x7b6400, tailcall)
void main_f_7b6400() { main::sub_7b6440(); }

// sub_7b6410  (orig 0x7b6410, tailcall)
void main_f_7b6410() { main::sub_7b6440(); }

// sub_7b6420  (orig 0x7b6420, tailcall)
uint64_t main_f_7b6420(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b6430  (orig 0x7b6430, tailcall)
uint64_t main_f_7b6430(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b7650  (orig 0x7b7650, tailcall)
void main_f_7b7650() { main::sub_e7c4c0(); }

// sub_7b7660  (orig 0x7b7660, tailcall)
void main_f_7b7660() { main::sub_7b76d0(); }

// sub_7b7670  (orig 0x7b7670, tailcall)
uint64_t main_f_7b7670(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b7680  (orig 0x7b7680, tailcall)
uint64_t main_f_7b7680(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b7690  (orig 0x7b7690, tailcall)
void main_f_7b7690() { main::sub_7b76d0(); }

// sub_7b76a0  (orig 0x7b76a0, tailcall)
void main_f_7b76a0() { main::sub_7b76d0(); }

// sub_7b76b0  (orig 0x7b76b0, tailcall)
uint64_t main_f_7b76b0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b76c0  (orig 0x7b76c0, tailcall)
uint64_t main_f_7b76c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b8010  (orig 0x7b8010, tailcall)
void main_f_7b8010() { main::sub_e7c4c0(); }

// sub_7b8020  (orig 0x7b8020, tailcall)
void main_f_7b8020() { main::sub_7b8090(); }

// sub_7b8030  (orig 0x7b8030, tailcall)
uint64_t main_f_7b8030(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b8040  (orig 0x7b8040, tailcall)
uint64_t main_f_7b8040(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b8050  (orig 0x7b8050, tailcall)
void main_f_7b8050() { main::sub_7b8090(); }

// sub_7b8060  (orig 0x7b8060, tailcall)
void main_f_7b8060() { main::sub_7b8090(); }

// sub_7b8070  (orig 0x7b8070, tailcall)
uint64_t main_f_7b8070(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b8080  (orig 0x7b8080, tailcall)
uint64_t main_f_7b8080(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b91c0  (orig 0x7b91c0, tailcall)
void main_f_7b91c0() { main::sub_e7c4c0(); }

// sub_7b91d0  (orig 0x7b91d0, tailcall)
void main_f_7b91d0() { main::sub_7b9240(); }

// sub_7b91e0  (orig 0x7b91e0, tailcall)
uint64_t main_f_7b91e0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b91f0  (orig 0x7b91f0, tailcall)
uint64_t main_f_7b91f0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b9200  (orig 0x7b9200, tailcall)
void main_f_7b9200() { main::sub_7b9240(); }

// sub_7b9210  (orig 0x7b9210, tailcall)
void main_f_7b9210() { main::sub_7b9240(); }

// sub_7b9220  (orig 0x7b9220, tailcall)
uint64_t main_f_7b9220(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b9230  (orig 0x7b9230, tailcall)
uint64_t main_f_7b9230(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b9b20  (orig 0x7b9b20, tailcall)
void main_f_7b9b20() { main::sub_e7c4c0(); }

// sub_7b9b30  (orig 0x7b9b30, tailcall)
void main_f_7b9b30() { main::sub_7b9ba0(); }

// sub_7b9b40  (orig 0x7b9b40, tailcall)
uint64_t main_f_7b9b40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b9b50  (orig 0x7b9b50, tailcall)
uint64_t main_f_7b9b50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7b9b60  (orig 0x7b9b60, tailcall)
void main_f_7b9b60() { main::sub_7b9ba0(); }

// sub_7b9b70  (orig 0x7b9b70, tailcall)
void main_f_7b9b70() { main::sub_7b9ba0(); }

// sub_7b9b80  (orig 0x7b9b80, tailcall)
uint64_t main_f_7b9b80(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7b9b90  (orig 0x7b9b90, tailcall)
uint64_t main_f_7b9b90(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7babd0  (orig 0x7babd0, tailcall)
void main_f_7babd0() { main::sub_e7c4c0(); }

// sub_7babe0  (orig 0x7babe0, tailcall)
void main_f_7babe0() { main::sub_7bac50(); }

// sub_7babf0  (orig 0x7babf0, tailcall)
uint64_t main_f_7babf0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7bac00  (orig 0x7bac00, tailcall)
uint64_t main_f_7bac00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7bac10  (orig 0x7bac10, tailcall)
void main_f_7bac10() { main::sub_7bac50(); }

// sub_7bac20  (orig 0x7bac20, tailcall)
void main_f_7bac20() { main::sub_7bac50(); }

// sub_7bac30  (orig 0x7bac30, tailcall)
uint64_t main_f_7bac30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7bac40  (orig 0x7bac40, tailcall)
uint64_t main_f_7bac40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7bc4a0  (orig 0x7bc4a0, tailcall)
void main_f_7bc4a0() { main::sub_e7c4c0(); }

// sub_7bc4b0  (orig 0x7bc4b0, tailcall)
void main_f_7bc4b0() { main::sub_7bc520(); }

// sub_7bc4c0  (orig 0x7bc4c0, tailcall)
uint64_t main_f_7bc4c0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7bc4d0  (orig 0x7bc4d0, tailcall)
uint64_t main_f_7bc4d0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7bc4e0  (orig 0x7bc4e0, tailcall)
void main_f_7bc4e0() { main::sub_7bc520(); }

// sub_7bc4f0  (orig 0x7bc4f0, tailcall)
void main_f_7bc4f0() { main::sub_7bc520(); }

// sub_7bc500  (orig 0x7bc500, tailcall)
uint64_t main_f_7bc500(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7bc510  (orig 0x7bc510, tailcall)
uint64_t main_f_7bc510(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_7c04e0  (orig 0x7c04e0, tailcall)
void main_f_7c04e0() { main::sub_7c0260(); }

// sub_7c2230  (orig 0x7c2230, tailcall)
void main_f_7c2230() { main_f_782ea0(); }

// sub_7c2250  (orig 0x7c2250, tailcall)
void main_f_7c2250() { main_f_782ea0(); }

// sub_7c3a80  (orig 0x7c3a80, tailcall)
uint64_t main_f_7c3a80(void* a0) {
    return main::sub_7c3160(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7c3a90  (orig 0x7c3a90, tailcall)
void main_f_7c3a90() { main::sub_7c3160(); }

// sub_7c3aa0  (orig 0x7c3aa0, tailcall)
uint64_t main_f_7c3aa0(void* a0) {
    return main::sub_7c3160(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7cac30  (orig 0x7cac30, tailcall)
uint64_t main_f_7cac30(void* a0) {
    return main::sub_7f9c40(((uintptr_t)(*(uint32_t*)((char*)(a0) + 336))));
}

// sub_7cb350  (orig 0x7cb350, tailcall)
uint64_t main_f_7cb350(void* a0) {
    return main::sub_7fa9d0(((uintptr_t)(*(uint32_t*)((char*)(a0) + 336))));
}

// sub_7cb380  (orig 0x7cb380, tailcall)
uint64_t main_f_7cb380(void* a0) {
    return main::sub_7f9e00(((uintptr_t)(*(uint32_t*)((char*)(a0) + 336))));
}

// sub_7cc070  (orig 0x7cc070, tailcall)
uint64_t main_f_7cc070(void* a0) {
    return main::sub_7f9de0(((uintptr_t)(*(uint32_t*)((char*)(a0) + 336))));
}

// sub_7cd950  (orig 0x7cd950, tailcall)
void main_f_7cd950() { main::sub_ce0(); }

// sub_7ce040  (orig 0x7ce040, tailcall)
uint64_t main_f_7ce040(void* a0) {
    return main::sub_7cdf00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7ce050  (orig 0x7ce050, tailcall)
void main_f_7ce050() { main::sub_7cdf00(); }

// sub_7ce060  (orig 0x7ce060, tailcall)
uint64_t main_f_7ce060(void* a0) {
    return main::sub_7cdf00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7cfda0  (orig 0x7cfda0, tailcall)
uint64_t main_f_7cfda0(void* a0) {
    return main::sub_7cf960(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7cfdb0  (orig 0x7cfdb0, tailcall)
void main_f_7cfdb0() { main::sub_7cf960(); }

// sub_7cfdc0  (orig 0x7cfdc0, tailcall)
uint64_t main_f_7cfdc0(void* a0) {
    return main::sub_7cf960(((uintptr_t)((char*)(a0) - 72)));
}

// sub_7d1eb0  (orig 0x7d1eb0, tailcall)
void main_f_7d1eb0() { main::sub_7d1790(); }

// sub_7e3720  (orig 0x7e3720, tailcall)
void main_f_7e3720() { main::sub_ce0(); }

// sub_7e99a0  (orig 0x7e99a0, tailcall)
void main_f_7e99a0() { main::sub_ce0(); }

// sub_7e9d50  (orig 0x7e9d50, tailcall)
void main_f_7e9d50() { main::sub_ce0(); }

// sub_7e9e00  (orig 0x7e9e00, tailcall)
void main_f_7e9e00() { main::sub_ce0(); }

// sub_7eb460  (orig 0x7eb460, tailcall)
void main_f_7eb460() { main::sub_7eb3d0(); }

// sub_7ee7e0  (orig 0x7ee7e0, tailcall)
uint64_t main_f_7ee7e0(void* a0) {
    return main::sub_768f00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 96))));
}

// sub_7ee7f0  (orig 0x7ee7f0, tailcall)
uint64_t main_f_7ee7f0(void* a0) {
    return main::sub_768fa0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 96))));
}

// sub_7f7140  (orig 0x7f7140, tailcall)
void main_f_7f7140() { main::sub_7870a0(); }

// sub_7f7fe0  (orig 0x7f7fe0, tailcall)
void main_f_7f7fe0() { main::sub_787110(); }

// sub_7f8c00  (orig 0x7f8c00, tailcall)
uint64_t main_f_7f8c00(void* a0) {
    return main::sub_ead0f0(((uintptr_t)((char*)(a0) + 8)));
}

// sub_7fe210  (orig 0x7fe210, tailcall)
uint64_t main_f_7fe210(void* a0) {
    return main::sub_8022b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 72))));
}

// sub_7fe220  (orig 0x7fe220, tailcall)
uint64_t main_f_7fe220(void* a0) {
    return main::sub_8022b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 72))));
}

// sub_7fe230  (orig 0x7fe230, tailcall)
uint64_t main_f_7fe230(void* a0) {
    return main::sub_8016e0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 104))));
}

// sub_7fe380  (orig 0x7fe380, tailcall)
uint64_t main_f_7fe380(void* a0) {
    return main::sub_800d20(((uintptr_t)((char*)(a0) + 744)));
}

// sub_7feb00  (orig 0x7feb00, tailcall)
void main_f_7feb00() { main::sub_ce0(); }

// sub_7ff5d0  (orig 0x7ff5d0, tailcall)
void main_f_7ff5d0() { main::sub_ce0(); }

// sub_7ff8b0  (orig 0x7ff8b0, tailcall)
void main_f_7ff8b0() { main::sub_ce0(); }

// sub_7ffa80  (orig 0x7ffa80, tailcall)
void main_f_7ffa80() { main::sub_7ff8f0(); }

// sub_8005f0  (orig 0x8005f0, tailcall)
void main_f_8005f0() { main::sub_ce0(); }

// sub_801760  (orig 0x801760, tailcall)
void main_f_801760() { main::sub_ce0(); }

// sub_802340  (orig 0x802340, tailcall)
void main_f_802340() { main::sub_ce0(); }

// sub_8025e0  (orig 0x8025e0, tailcall)
void main_f_8025e0() { main::sub_ce0(); }

// sub_8045a0  (orig 0x8045a0, tailcall)
void main_f_8045a0() { main::sub_ce0(); }

// sub_8049c0  (orig 0x8049c0, tailcall)
void main_f_8049c0() { main::sub_ce0(); }

// sub_80d940  (orig 0x80d940, tailcall)
void main_f_80d940() { main::sub_7cc1b0(); }

// sub_812b40  (orig 0x812b40, tailcall)
void main_f_812b40() { main::sub_ce0(); }

// sub_812cb0  (orig 0x812cb0, tailcall)
void main_f_812cb0() { main::sub_ce0(); }

// sub_8185d0  (orig 0x8185d0, tailcall)
uint64_t main_f_8185d0(void* a0) {
    return main::sub_818a60(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_8185e0  (orig 0x8185e0, tailcall)
uint64_t main_f_8185e0(void* a0) {
    return main::sub_818b90(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_8185f0  (orig 0x8185f0, tailcall)
uint64_t main_f_8185f0(void* a0) {
    return main::sub_864ed0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_818600  (orig 0x818600, tailcall)
uint64_t main_f_818600(void* a0) {
    return main::sub_864ff0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_818610  (orig 0x818610, tailcall)
uint64_t main_f_818610(void* a0) {
    return main::sub_865090(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_818620  (orig 0x818620, tailcall)
uint64_t main_f_818620(void* a0) {
    return main::sub_865120(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_818630  (orig 0x818630, tailcall)
uint64_t main_f_818630(void* a0) {
    return main::sub_87d760(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_818640  (orig 0x818640, tailcall)
uint64_t main_f_818640(void* a0) {
    return main::sub_87d7f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 24))));
}

// sub_818780  (orig 0x818780, tailcall)
void main_f_818780() { main::sub_ce0(); }

// sub_819600  (orig 0x819600, tailcall)
uint64_t main_f_819600(void* a0) {
    return main::sub_7e9830(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))));
}

// sub_819640  (orig 0x819640, tailcall)
uint64_t main_f_819640(void* a0) {
    return main::sub_7e97b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))));
}

// sub_819660  (orig 0x819660, tailcall)
uint64_t main_f_819660(void* a0) {
    return main::sub_7e97f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))));
}

// sub_819670  (orig 0x819670, tailcall)
uint64_t main_f_819670(void* a0) {
    return main::sub_7e9860(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))));
}

// sub_819680  (orig 0x819680, tailcall)
uint64_t main_f_819680(void* a0) {
    return main::sub_7e9910(((uintptr_t)(*(uint64_t*)((char*)(a0) + 48))));
}

// sub_8197a0  (orig 0x8197a0, tailcall)
uint64_t main_f_8197a0(void* a0) {
    return main::sub_7cc000(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_8197e0  (orig 0x8197e0, tailcall)
uint64_t main_f_8197e0(void* a0) {
    return main::sub_7cc030(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_8197f0  (orig 0x8197f0, tailcall)
uint64_t main_f_8197f0(void* a0) {
    return main::sub_7cbf80(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_819800  (orig 0x819800, tailcall)
uint64_t main_f_819800(void* a0) {
    return main::sub_7cbf80(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_819940  (orig 0x819940, tailcall)
uint64_t main_f_819940(void* a0) {
    return main::sub_7cb320(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_819a10  (orig 0x819a10, tailcall)
uint64_t main_f_819a10(void* a0) {
    return main::sub_7e9a30(((uintptr_t)(*(uint64_t*)((char*)(a0) + 64))));
}

// sub_819a60  (orig 0x819a60, tailcall)
uint64_t main_f_819a60(void* a0) {
    return main::sub_82cd00(((uintptr_t)(*(uint64_t*)((char*)(a0) + 16))));
}

// sub_81a670  (orig 0x81a670, tailcall)
uint64_t main_f_81a670(void* a0) {
    return main::sub_7fe3b0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_81be80  (orig 0x81be80, tailcall)
uint64_t main_f_81be80(void* a0) {
    return main::sub_7c5910(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_81be90  (orig 0x81be90, tailcall)
uint64_t main_f_81be90(void* a0) {
    return main::sub_7cce80(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_81bf10  (orig 0x81bf10, tailcall)
uint64_t main_f_81bf10(void* a0) {
    return main::sub_7cb3d0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_81bf20  (orig 0x81bf20, tailcall)
uint64_t main_f_81bf20(void* a0) {
    return main::sub_7cb3b0(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_81bf30  (orig 0x81bf30, tailcall)
uint64_t main_f_81bf30(void* a0) {
    return main::sub_7cd200(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_81c3a0  (orig 0x81c3a0, tailcall)
uint64_t main_f_81c3a0(void* a0) {
    return main::sub_7cab30(((uintptr_t)(*(uint64_t*)((char*)(a0)))));
}

// sub_81c5a0  (orig 0x81c5a0, tailcall)
void main_f_81c5a0() { main::sub_ce0(); }

// sub_8293f0  (orig 0x8293f0, tailcall)
void main_f_8293f0() { main::sub_ce0(); }

// sub_829c70  (orig 0x829c70, tailcall)
void main_f_829c70() { main::sub_ce0(); }

// sub_829d60  (orig 0x829d60, tailcall)
void main_f_829d60() { main::sub_ce0(); }

// sub_82a1e0  (orig 0x82a1e0, tailcall)
void main_f_82a1e0() { main::sub_ce0(); }

// sub_82a6d0  (orig 0x82a6d0, tailcall)
void main_f_82a6d0() { main::sub_ce0(); }

// sub_82a8a0  (orig 0x82a8a0, tailcall)
void main_f_82a8a0() { main::sub_ce0(); }

// sub_82ac10  (orig 0x82ac10, tailcall)
uint64_t main_f_82ac10(void* a0) {
    return main::sub_7cc000(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_82ad00  (orig 0x82ad00, tailcall)
uint64_t main_f_82ad00(void* a0) {
    return main::sub_7cbf80(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_82ad30  (orig 0x82ad30, tailcall)
uint64_t main_f_82ad30(void* a0) {
    return main::sub_80d8f0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_82ad60  (orig 0x82ad60, tailcall)
uint64_t main_f_82ad60(void* a0) {
    return main::sub_80d950(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_82adb0  (orig 0x82adb0, tailcall)
uint64_t main_f_82adb0(void* a0) {
    return main::sub_80d980(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_82ae20  (orig 0x82ae20, tailcall)
uint64_t main_f_82ae20(void* a0) {
    return main::sub_80daf0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 8))));
}

// sub_82ae70  (orig 0x82ae70, tailcall)
void main_f_82ae70() { main::sub_ce0(); }

// sub_82b080  (orig 0x82b080, tailcall)
void main_f_82b080() { main::sub_ce0(); }

// sub_82b820  (orig 0x82b820, tailcall)
void main_f_82b820() { main::sub_ce0(); }

// sub_82bd30  (orig 0x82bd30, tailcall)
void main_f_82bd30() { main::sub_ce0(); }

// sub_82be90  (orig 0x82be90, tailcall)
void main_f_82be90() { main::sub_ce0(); }

// sub_82bfc0  (orig 0x82bfc0, tailcall)
void main_f_82bfc0() { main::sub_ce0(); }

// sub_82c150  (orig 0x82c150, tailcall)
void main_f_82c150() { main::sub_ce0(); }

// sub_82c270  (orig 0x82c270, tailcall)
void main_f_82c270() { main::sub_ce0(); }

// sub_82c5f0  (orig 0x82c5f0, tailcall)
void main_f_82c5f0() { main::sub_ce0(); }

// sub_82c900  (orig 0x82c900, tailcall)
void main_f_82c900() { main::sub_ce0(); }

// sub_82caf0  (orig 0x82caf0, tailcall)
void main_f_82caf0() { main::sub_ce0(); }

// sub_82d5e0  (orig 0x82d5e0, tailcall)
void main_f_82d5e0() { main::sub_ce0(); }

// sub_82d990  (orig 0x82d990, tailcall)
void main_f_82d990() { main::sub_7eb260(); }

// sub_82da60  (orig 0x82da60, tailcall)
void main_f_82da60() { main::sub_780d70(); }

// sub_82da70  (orig 0x82da70, tailcall)
void main_f_82da70() { main::sub_7812a0(); }

// sub_82dc70  (orig 0x82dc70, tailcall)
void main_f_82dc70() { main::sub_ce0(); }

// sub_82ddb0  (orig 0x82ddb0, tailcall)
void main_f_82ddb0() { main::sub_ce0(); }

// sub_82df50  (orig 0x82df50, tailcall)
void main_f_82df50() { main::sub_ce0(); }

// sub_82eb60  (orig 0x82eb60, tailcall)
void main_f_82eb60() { main::sub_ce0(); }

// sub_82edb0  (orig 0x82edb0, tailcall)
void main_f_82edb0() { main::sub_ce0(); }

// sub_82ef00  (orig 0x82ef00, tailcall)
void main_f_82ef00() { main::sub_ce0(); }

// sub_82f040  (orig 0x82f040, tailcall)
void main_f_82f040() { main::sub_ce0(); }

// sub_82f150  (orig 0x82f150, tailcall)
void main_f_82f150() { main::sub_ce0(); }

// sub_82f390  (orig 0x82f390, tailcall)
void main_f_82f390() { main::sub_ce0(); }

// sub_82f760  (orig 0x82f760, tailcall)
void main_f_82f760() { main::sub_ce0(); }

// sub_82fb50  (orig 0x82fb50, tailcall)
void main_f_82fb50() { main::sub_ce0(); }

// sub_82fdc0  (orig 0x82fdc0, tailcall)
void main_f_82fdc0() { main::sub_ce0(); }

// sub_82ffc0  (orig 0x82ffc0, tailcall)
void main_f_82ffc0() { main::sub_ce0(); }

// sub_8304d0  (orig 0x8304d0, tailcall)
void main_f_8304d0() { main::sub_ce0(); }

// sub_8307f0  (orig 0x8307f0, tailcall)
void main_f_8307f0() { main::sub_ce0(); }

// sub_830d30  (orig 0x830d30, tailcall)
void main_f_830d30() { main::sub_ce0(); }

// sub_831010  (orig 0x831010, tailcall)
void main_f_831010() { main::sub_ce0(); }

// sub_831220  (orig 0x831220, tailcall)
void main_f_831220() { main::sub_ce0(); }

// sub_831310  (orig 0x831310, tailcall)
void main_f_831310() { main::sub_ce0(); }

// sub_8315d0  (orig 0x8315d0, tailcall)
void main_f_8315d0() { main::sub_ce0(); }

// sub_831a80  (orig 0x831a80, tailcall)
void main_f_831a80() { main::sub_ce0(); }

// sub_831f00  (orig 0x831f00, tailcall)
void main_f_831f00() { main::sub_ce0(); }

// sub_8324d0  (orig 0x8324d0, tailcall)
void main_f_8324d0() { main::sub_ce0(); }

// sub_832670  (orig 0x832670, tailcall)
void main_f_832670() { main::sub_ce0(); }

// sub_8327b0  (orig 0x8327b0, tailcall)
void main_f_8327b0() { main::sub_ce0(); }

// sub_8328b0  (orig 0x8328b0, tailcall)
void main_f_8328b0() { main::sub_ce0(); }

// sub_8329b0  (orig 0x8329b0, tailcall)
void main_f_8329b0() { main::sub_ce0(); }

// sub_832c20  (orig 0x832c20, tailcall)
void main_f_832c20() { main::sub_ce0(); }

// sub_833140  (orig 0x833140, tailcall)
void main_f_833140() { main::sub_ce0(); }

// sub_833250  (orig 0x833250, tailcall)
void main_f_833250() { main::sub_ce0(); }

// sub_8333b0  (orig 0x8333b0, tailcall)
void main_f_8333b0() { main::sub_ce0(); }

// sub_833c20  (orig 0x833c20, tailcall)
void main_f_833c20() { main::sub_ce0(); }

// sub_8340e0  (orig 0x8340e0, tailcall)
void main_f_8340e0() { main::sub_ce0(); }

// sub_834200  (orig 0x834200, tailcall)
void main_f_834200() { main::sub_ce0(); }

// sub_834690  (orig 0x834690, tailcall)
void main_f_834690() { main::sub_ce0(); }

// sub_836460  (orig 0x836460, tailcall)
void main_f_836460() { main::sub_ce0(); }

// sub_8366c0  (orig 0x8366c0, tailcall)
void main_f_8366c0() { main::sub_ce0(); }

// sub_836ce0  (orig 0x836ce0, tailcall)
void main_f_836ce0() { main::sub_ce0(); }

// sub_8372c0  (orig 0x8372c0, tailcall)
void main_f_8372c0() { main::sub_ce0(); }

// sub_838960  (orig 0x838960, tailcall)
void main_f_838960() { main::sub_ce0(); }

// sub_838ab0  (orig 0x838ab0, tailcall)
void main_f_838ab0() { main::sub_ce0(); }

// sub_838c50  (orig 0x838c50, tailcall)
void main_f_838c50() { main::sub_ce0(); }

// sub_838d40  (orig 0x838d40, tailcall)
void main_f_838d40() { main::sub_ce0(); }

// sub_838ed0  (orig 0x838ed0, tailcall)
void main_f_838ed0() { main::sub_ce0(); }

// sub_839130  (orig 0x839130, tailcall)
void main_f_839130() { main::sub_ce0(); }

// sub_839330  (orig 0x839330, tailcall)
void main_f_839330() { main::sub_ce0(); }

// sub_839970  (orig 0x839970, tailcall)
void main_f_839970() { main::sub_ce0(); }

// sub_839be0  (orig 0x839be0, tailcall)
void main_f_839be0() { main::sub_ce0(); }

// sub_839d90  (orig 0x839d90, tailcall)
void main_f_839d90() { main::sub_ce0(); }

// sub_839f20  (orig 0x839f20, tailcall)
void main_f_839f20() { main::sub_ce0(); }

// sub_83a050  (orig 0x83a050, tailcall)
void main_f_83a050() { main::sub_ce0(); }

// sub_83a250  (orig 0x83a250, tailcall)
void main_f_83a250() { main::sub_ce0(); }

// sub_83a4a0  (orig 0x83a4a0, tailcall)
void main_f_83a4a0() { main::sub_ce0(); }

// sub_83a6a0  (orig 0x83a6a0, tailcall)
void main_f_83a6a0() { main::sub_ce0(); }

// sub_83a820  (orig 0x83a820, tailcall)
void main_f_83a820() { main::sub_ce0(); }

// sub_83a990  (orig 0x83a990, tailcall)
void main_f_83a990() { main::sub_ce0(); }

// sub_83ab20  (orig 0x83ab20, tailcall)
void main_f_83ab20() { main::sub_ce0(); }

// sub_83ac50  (orig 0x83ac50, tailcall)
void main_f_83ac50() { main::sub_ce0(); }

// sub_83adb0  (orig 0x83adb0, tailcall)
void main_f_83adb0() { main::sub_ce0(); }

// sub_83b230  (orig 0x83b230, tailcall)
void main_f_83b230() { main::sub_ce0(); }

// sub_83b430  (orig 0x83b430, tailcall)
void main_f_83b430() { main::sub_ce0(); }

// sub_83b620  (orig 0x83b620, tailcall)
void main_f_83b620() { main::sub_ce0(); }

// sub_83b7c0  (orig 0x83b7c0, tailcall)
void main_f_83b7c0() { main::sub_ce0(); }

// sub_83b9d0  (orig 0x83b9d0, tailcall)
void main_f_83b9d0() { main::sub_ce0(); }

// sub_83bce0  (orig 0x83bce0, tailcall)
void main_f_83bce0() { main::sub_ce0(); }

// sub_83c130  (orig 0x83c130, tailcall)
void main_f_83c130() { main::sub_ce0(); }

// sub_83c1f0  (orig 0x83c1f0, tailcall)
void main_f_83c1f0() { main::sub_ce0(); }

// sub_83c530  (orig 0x83c530, tailcall)
void main_f_83c530() { main::sub_ce0(); }

// sub_83c6f0  (orig 0x83c6f0, tailcall)
void main_f_83c6f0() { main::sub_ce0(); }

// sub_83cd90  (orig 0x83cd90, tailcall)
void main_f_83cd90() { main::sub_ce0(); }

// sub_83cf60  (orig 0x83cf60, tailcall)
void main_f_83cf60() { main::sub_ce0(); }

// sub_83d1c0  (orig 0x83d1c0, tailcall)
void main_f_83d1c0() { main::sub_ce0(); }

// sub_83d540  (orig 0x83d540, tailcall)
void main_f_83d540() { main::sub_ce0(); }

// sub_83d720  (orig 0x83d720, tailcall)
void main_f_83d720() { main::sub_ce0(); }

// sub_83d920  (orig 0x83d920, tailcall)
void main_f_83d920() { main::sub_ce0(); }

// sub_83db30  (orig 0x83db30, tailcall)
void main_f_83db30() { main::sub_ce0(); }

// sub_83dd00  (orig 0x83dd00, tailcall)
void main_f_83dd00() { main::sub_ce0(); }

// sub_83e0d0  (orig 0x83e0d0, tailcall)
void main_f_83e0d0() { main::sub_ce0(); }

// sub_83e240  (orig 0x83e240, tailcall)
void main_f_83e240() { main::sub_ce0(); }

// sub_83e340  (orig 0x83e340, tailcall)
void main_f_83e340() { main::sub_ce0(); }

// sub_83e5d0  (orig 0x83e5d0, tailcall)
void main_f_83e5d0() { main::sub_ce0(); }

// sub_83e880  (orig 0x83e880, tailcall)
void main_f_83e880() { main::sub_ce0(); }

// sub_83ea10  (orig 0x83ea10, tailcall)
void main_f_83ea10() { main::sub_ce0(); }

// sub_83ec40  (orig 0x83ec40, tailcall)
void main_f_83ec40() { main::sub_ce0(); }

// sub_83f0c0  (orig 0x83f0c0, tailcall)
void main_f_83f0c0() { main::sub_ce0(); }

// sub_83f2b0  (orig 0x83f2b0, tailcall)
void main_f_83f2b0() { main::sub_ce0(); }

// sub_83fa70  (orig 0x83fa70, tailcall)
void main_f_83fa70() { main::sub_ce0(); }

// sub_83fcb0  (orig 0x83fcb0, tailcall)
void main_f_83fcb0() { main::sub_ce0(); }

// sub_83fe30  (orig 0x83fe30, tailcall)
void main_f_83fe30() { main::sub_ce0(); }

// sub_8400e0  (orig 0x8400e0, tailcall)
void main_f_8400e0() { main::sub_ce0(); }

// sub_840210  (orig 0x840210, tailcall)
void main_f_840210() { main::sub_ce0(); }

// sub_8405a0  (orig 0x8405a0, tailcall)
void main_f_8405a0() { main::sub_ce0(); }

// sub_8406d0  (orig 0x8406d0, tailcall)
void main_f_8406d0() { main::sub_ce0(); }

// sub_840880  (orig 0x840880, tailcall)
void main_f_840880() { main::sub_ce0(); }

// sub_840a90  (orig 0x840a90, tailcall)
void main_f_840a90() { main::sub_ce0(); }

// sub_840c20  (orig 0x840c20, tailcall)
void main_f_840c20() { main::sub_ce0(); }

// sub_840d40  (orig 0x840d40, tailcall)
void main_f_840d40() { main::sub_ce0(); }

// sub_840ef0  (orig 0x840ef0, tailcall)
void main_f_840ef0() { main::sub_ce0(); }

// sub_841050  (orig 0x841050, tailcall)
void main_f_841050() { main::sub_ce0(); }

// sub_841360  (orig 0x841360, tailcall)
void main_f_841360() { main::sub_ce0(); }

// sub_8415b0  (orig 0x8415b0, tailcall)
void main_f_8415b0() { main::sub_ce0(); }

// sub_841900  (orig 0x841900, tailcall)
void main_f_841900() { main::sub_ce0(); }

// sub_841d50  (orig 0x841d50, tailcall)
void main_f_841d50() { main::sub_ce0(); }

// sub_842090  (orig 0x842090, tailcall)
void main_f_842090() { main::sub_ce0(); }

// sub_842fb0  (orig 0x842fb0, tailcall)
void main_f_842fb0() { main::sub_ce0(); }

// sub_843350  (orig 0x843350, tailcall)
void main_f_843350() { main::sub_ce0(); }

// sub_843660  (orig 0x843660, tailcall)
void main_f_843660() { main::sub_ce0(); }

// sub_8443b0  (orig 0x8443b0, tailcall)
void main_f_8443b0() { main::sub_ce0(); }

// sub_8448a0  (orig 0x8448a0, tailcall)
void main_f_8448a0() { main::sub_ce0(); }

// sub_844ad0  (orig 0x844ad0, tailcall)
void main_f_844ad0() { main::sub_ce0(); }

// sub_845800  (orig 0x845800, tailcall)
void main_f_845800() { main::sub_ce0(); }

// sub_845970  (orig 0x845970, tailcall)
void main_f_845970() { main::sub_ce0(); }

// sub_845ae0  (orig 0x845ae0, tailcall)
void main_f_845ae0() { main::sub_ce0(); }

// sub_845e60  (orig 0x845e60, tailcall)
void main_f_845e60() { main::sub_ce0(); }

// sub_846050  (orig 0x846050, tailcall)
void main_f_846050() { main::sub_ce0(); }

// sub_846270  (orig 0x846270, tailcall)
void main_f_846270() { main::sub_ce0(); }

// sub_846440  (orig 0x846440, tailcall)
void main_f_846440() { main::sub_ce0(); }

// sub_8466f0  (orig 0x8466f0, tailcall)
void main_f_8466f0() { main::sub_ce0(); }

// sub_8469a0  (orig 0x8469a0, tailcall)
void main_f_8469a0() { main::sub_ce0(); }

// sub_846ac0  (orig 0x846ac0, tailcall)
void main_f_846ac0() { main::sub_ce0(); }

// sub_847010  (orig 0x847010, tailcall)
void main_f_847010() { main::sub_ce0(); }

// sub_847460  (orig 0x847460, tailcall)
void main_f_847460() { main::sub_ce0(); }

// sub_847600  (orig 0x847600, tailcall)
void main_f_847600() { main::sub_ce0(); }

// sub_8484b0  (orig 0x8484b0, tailcall)
void main_f_8484b0() { main::sub_ce0(); }

// sub_8489d0  (orig 0x8489d0, tailcall)
void main_f_8489d0() { main::sub_ce0(); }

// sub_84a6e0  (orig 0x84a6e0, tailcall)
void main_f_84a6e0() { main::sub_ce0(); }

// sub_84a850  (orig 0x84a850, tailcall)
void main_f_84a850() { main::sub_ce0(); }

// sub_84ad80  (orig 0x84ad80, tailcall)
void main_f_84ad80() { main::sub_ce0(); }

// sub_84aed0  (orig 0x84aed0, tailcall)
void main_f_84aed0() { main::sub_ce0(); }

// sub_84bae0  (orig 0x84bae0, tailcall)
void main_f_84bae0() { main::sub_ce0(); }

// sub_84c080  (orig 0x84c080, tailcall)
void main_f_84c080() { main::sub_ce0(); }

// sub_84d2e0  (orig 0x84d2e0, tailcall)
void main_f_84d2e0() { main::sub_ce0(); }

// sub_84d6c0  (orig 0x84d6c0, tailcall)
void main_f_84d6c0() { main::sub_ce0(); }

// sub_84d890  (orig 0x84d890, tailcall)
void main_f_84d890() { main::sub_ce0(); }

// sub_84db20  (orig 0x84db20, tailcall)
void main_f_84db20() { main::sub_ce0(); }

// sub_84dd20  (orig 0x84dd20, tailcall)
void main_f_84dd20() { main::sub_ce0(); }

// sub_84ded0  (orig 0x84ded0, tailcall)
void main_f_84ded0() { main::sub_ce0(); }

// sub_84e020  (orig 0x84e020, tailcall)
void main_f_84e020() { main::sub_ce0(); }

// sub_84e270  (orig 0x84e270, tailcall)
void main_f_84e270() { main::sub_ce0(); }

// sub_84e4b0  (orig 0x84e4b0, tailcall)
void main_f_84e4b0() { main::sub_ce0(); }

// sub_84e790  (orig 0x84e790, tailcall)
void main_f_84e790() { main::sub_ce0(); }

// sub_84edd0  (orig 0x84edd0, tailcall)
void main_f_84edd0() { main::sub_ce0(); }

// sub_84f0a0  (orig 0x84f0a0, tailcall)
void main_f_84f0a0() { main::sub_ce0(); }

// sub_84f8c0  (orig 0x84f8c0, tailcall)
void main_f_84f8c0() { main::sub_ce0(); }

// sub_84f9b0  (orig 0x84f9b0, tailcall)
void main_f_84f9b0() { main::sub_ce0(); }

// sub_84fb20  (orig 0x84fb20, tailcall)
void main_f_84fb20() { main::sub_ce0(); }

// sub_84fd00  (orig 0x84fd00, tailcall)
void main_f_84fd00() { main::sub_ce0(); }

// sub_850310  (orig 0x850310, tailcall)
void main_f_850310() { main::sub_ce0(); }

// sub_8507c0  (orig 0x8507c0, tailcall)
void main_f_8507c0() { main::sub_ce0(); }

// sub_850b70  (orig 0x850b70, tailcall)
void main_f_850b70() { main::sub_ce0(); }

// sub_850d90  (orig 0x850d90, tailcall)
void main_f_850d90() { main::sub_ce0(); }

// sub_850ef0  (orig 0x850ef0, tailcall)
void main_f_850ef0() { main::sub_ce0(); }

// sub_851180  (orig 0x851180, tailcall)
void main_f_851180() { main::sub_ce0(); }

// sub_8512a0  (orig 0x8512a0, tailcall)
void main_f_8512a0() { main::sub_ce0(); }

// sub_851530  (orig 0x851530, tailcall)
void main_f_851530() { main::sub_ce0(); }

// sub_8517d0  (orig 0x8517d0, tailcall)
void main_f_8517d0() { main::sub_ce0(); }

// sub_8519f0  (orig 0x8519f0, tailcall)
void main_f_8519f0() { main::sub_ce0(); }

// sub_851f90  (orig 0x851f90, tailcall)
void main_f_851f90() { main::sub_ce0(); }

// sub_852420  (orig 0x852420, tailcall)
void main_f_852420() { main::sub_ce0(); }

// sub_852550  (orig 0x852550, tailcall)
void main_f_852550() { main::sub_ce0(); }

// sub_8526a0  (orig 0x8526a0, tailcall)
void main_f_8526a0() { main::sub_ce0(); }

// sub_852bc0  (orig 0x852bc0, tailcall)
void main_f_852bc0() { main::sub_ce0(); }

// sub_852e70  (orig 0x852e70, tailcall)
void main_f_852e70() { main::sub_ce0(); }

// sub_852f30  (orig 0x852f30, tailcall)
void main_f_852f30() { main::sub_ce0(); }

// sub_853010  (orig 0x853010, tailcall)
void main_f_853010() { main::sub_ce0(); }

// sub_8535a0  (orig 0x8535a0, tailcall)
void main_f_8535a0() { main::sub_ce0(); }

// sub_853860  (orig 0x853860, tailcall)
void main_f_853860() { main::sub_ce0(); }

// sub_853980  (orig 0x853980, tailcall)
void main_f_853980() { main::sub_ce0(); }

// sub_853d00  (orig 0x853d00, tailcall)
void main_f_853d00() { main::sub_ce0(); }

// sub_853e60  (orig 0x853e60, tailcall)
void main_f_853e60() { main::sub_ce0(); }

// sub_8540c0  (orig 0x8540c0, tailcall)
void main_f_8540c0() { main::sub_ce0(); }

// sub_854220  (orig 0x854220, tailcall)
void main_f_854220() { main::sub_ce0(); }

// sub_8543e0  (orig 0x8543e0, tailcall)
void main_f_8543e0() { main::sub_ce0(); }

// sub_854610  (orig 0x854610, tailcall)
void main_f_854610() { main::sub_ce0(); }

// sub_854900  (orig 0x854900, tailcall)
void main_f_854900() { main::sub_ce0(); }

// sub_854ac0  (orig 0x854ac0, tailcall)
void main_f_854ac0() { main::sub_ce0(); }

// sub_854d80  (orig 0x854d80, tailcall)
void main_f_854d80() { main::sub_ce0(); }

// sub_854fc0  (orig 0x854fc0, tailcall)
void main_f_854fc0() { main::sub_ce0(); }

// sub_8550f0  (orig 0x8550f0, tailcall)
void main_f_8550f0() { main::sub_ce0(); }

// sub_8551f0  (orig 0x8551f0, tailcall)
void main_f_8551f0() { main::sub_ce0(); }

// sub_8554a0  (orig 0x8554a0, tailcall)
void main_f_8554a0() { main::sub_ce0(); }

// sub_8556f0  (orig 0x8556f0, tailcall)
void main_f_8556f0() { main::sub_ce0(); }

// sub_855900  (orig 0x855900, tailcall)
void main_f_855900() { main::sub_ce0(); }

// sub_855aa0  (orig 0x855aa0, tailcall)
void main_f_855aa0() { main::sub_ce0(); }

// sub_855bf0  (orig 0x855bf0, tailcall)
void main_f_855bf0() { main::sub_ce0(); }

// sub_855cf0  (orig 0x855cf0, tailcall)
void main_f_855cf0() { main::sub_ce0(); }

// sub_855e60  (orig 0x855e60, tailcall)
void main_f_855e60() { main::sub_ce0(); }

// sub_855f60  (orig 0x855f60, tailcall)
void main_f_855f60() { main::sub_ce0(); }

// sub_856130  (orig 0x856130, tailcall)
void main_f_856130() { main::sub_ce0(); }

// sub_8562d0  (orig 0x8562d0, tailcall)
void main_f_8562d0() { main::sub_ce0(); }

// sub_8563f0  (orig 0x8563f0, tailcall)
void main_f_8563f0() { main::sub_ce0(); }

// sub_856500  (orig 0x856500, tailcall)
void main_f_856500() { main::sub_ce0(); }

// sub_856620  (orig 0x856620, tailcall)
void main_f_856620() { main::sub_ce0(); }

// sub_8568d0  (orig 0x8568d0, tailcall)
void main_f_8568d0() { main::sub_ce0(); }

// sub_856a10  (orig 0x856a10, tailcall)
void main_f_856a10() { main::sub_ce0(); }

// sub_856cc0  (orig 0x856cc0, tailcall)
void main_f_856cc0() { main::sub_ce0(); }

// sub_8571c0  (orig 0x8571c0, tailcall)
void main_f_8571c0() { main::sub_ce0(); }

// sub_857280  (orig 0x857280, tailcall)
void main_f_857280() { main::sub_ce0(); }

// sub_857450  (orig 0x857450, tailcall)
void main_f_857450() { main::sub_ce0(); }

// sub_857590  (orig 0x857590, tailcall)
void main_f_857590() { main::sub_ce0(); }

// sub_8576b0  (orig 0x8576b0, tailcall)
void main_f_8576b0() { main::sub_ce0(); }

// sub_8578d0  (orig 0x8578d0, tailcall)
void main_f_8578d0() { main::sub_ce0(); }

// sub_859440  (orig 0x859440, tailcall)
void main_f_859440() { main::sub_7e8d00(); }

// sub_85b830  (orig 0x85b830, tailcall)
void main_f_85b830() { main::sub_85b740(); }

// sub_85ef10  (orig 0x85ef10, tailcall)
void main_f_85ef10() { main::sub_81b550(); }

// sub_860f20  (orig 0x860f20, tailcall)
void main_f_860f20() { main::sub_81b6e0(); }

// sub_862bf0  (orig 0x862bf0, tailcall)
void main_f_862bf0() { main::sub_ce0(); }

// sub_862d60  (orig 0x862d60, tailcall)
void main_f_862d60() { main::sub_ce0(); }

// sub_862e70  (orig 0x862e70, tailcall)
void main_f_862e70() { main::sub_ce0(); }

// sub_862f90  (orig 0x862f90, tailcall)
void main_f_862f90() { main::sub_ce0(); }

// sub_8630f0  (orig 0x8630f0, tailcall)
void main_f_8630f0() { main::sub_ce0(); }

// sub_863360  (orig 0x863360, tailcall)
void main_f_863360() { main::sub_ce0(); }

// sub_8635e0  (orig 0x8635e0, tailcall)
void main_f_8635e0() { main::sub_ce0(); }

// sub_8638d0  (orig 0x8638d0, tailcall)
void main_f_8638d0() { main::sub_ce0(); }

// sub_8639f0  (orig 0x8639f0, tailcall)
void main_f_8639f0() { main::sub_ce0(); }

// sub_863b10  (orig 0x863b10, tailcall)
void main_f_863b10() { main::sub_ce0(); }

// sub_863c30  (orig 0x863c30, tailcall)
void main_f_863c30() { main::sub_ce0(); }

// sub_863e00  (orig 0x863e00, tailcall)
void main_f_863e00() { main::sub_ce0(); }

// sub_863fb0  (orig 0x863fb0, tailcall)
void main_f_863fb0() { main::sub_ce0(); }

// sub_8640e0  (orig 0x8640e0, tailcall)
void main_f_8640e0() { main::sub_ce0(); }

// sub_8641f0  (orig 0x8641f0, tailcall)
void main_f_8641f0() { main::sub_ce0(); }

// sub_864300  (orig 0x864300, tailcall)
void main_f_864300() { main::sub_ce0(); }

// sub_8643f0  (orig 0x8643f0, tailcall)
void main_f_8643f0() { main::sub_ce0(); }

// sub_8644d0  (orig 0x8644d0, tailcall)
void main_f_8644d0() { main::sub_ce0(); }

// sub_864590  (orig 0x864590, tailcall)
void main_f_864590() { main::sub_ce0(); }

// sub_8646d0  (orig 0x8646d0, tailcall)
void main_f_8646d0() { main::sub_ce0(); }

// sub_8647e0  (orig 0x8647e0, tailcall)
void main_f_8647e0() { main::sub_ce0(); }

// sub_8649c0  (orig 0x8649c0, tailcall)
void main_f_8649c0() { main::sub_ce0(); }

// sub_864ac0  (orig 0x864ac0, tailcall)
void main_f_864ac0() { main::sub_ce0(); }

// sub_864b80  (orig 0x864b80, tailcall)
void main_f_864b80() { main::sub_ce0(); }

// sub_86ea90  (orig 0x86ea90, tailcall)
void main_f_86ea90() { main::sub_81b320(); }

// sub_86eb40  (orig 0x86eb40, tailcall)
void main_f_86eb40() { main::sub_81b860(); }

// sub_86f5f0  (orig 0x86f5f0, tailcall)
void main_f_86f5f0() { main::sub_86f720(); }

// sub_87a1b0  (orig 0x87a1b0, tailcall)
void main_f_87a1b0() { main::sub_87a210(); }

// sub_87a750  (orig 0x87a750, tailcall)
void main_f_87a750() { main::sub_87a7b0(); }

// sub_885f70  (orig 0x885f70, tailcall)
void main_f_885f70() { main::sub_81b550(); }

// sub_888f00  (orig 0x888f00, tailcall)
void main_f_888f00() { main::sub_81b6e0(); }

// sub_88a580  (orig 0x88a580, tailcall)
void main_f_88a580() { main::sub_81b230(); }

// sub_88a590  (orig 0x88a590, tailcall)
void main_f_88a590() { main::sub_81b320(); }

// sub_88c810  (orig 0x88c810, tailcall)
void main_f_88c810() { main::sub_81b860(); }

// sub_88cde0  (orig 0x88cde0, tailcall)
void main_f_88cde0() { main::sub_88cec0(); }

// sub_88dea0  (orig 0x88dea0, tailcall)
void main_f_88dea0() { main::sub_88df70(); }

// sub_891d50  (orig 0x891d50, tailcall)
uint64_t main_f_891d50(void* a0) {
    return main::sub_891bf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_891d60  (orig 0x891d60, tailcall)
void main_f_891d60() { main::sub_891bf0(); }

// sub_891d70  (orig 0x891d70, tailcall)
uint64_t main_f_891d70(void* a0) {
    return main::sub_891bf0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8923f0  (orig 0x8923f0, tailcall)
void main_f_8923f0() { main::sub_ce0(); }

// sub_892b00  (orig 0x892b00, tailcall)
void main_f_892b00() { main::sub_ce0(); }

// sub_893990  (orig 0x893990, tailcall)
uint64_t main_f_893990(void* a0) {
    return main::sub_8935e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8939a0  (orig 0x8939a0, tailcall)
uint64_t main_f_8939a0(void* a0) {
    return main::sub_8935e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8939b0  (orig 0x8939b0, tailcall)
void main_f_8939b0() { main::sub_8935e0(); }

// sub_8939c0  (orig 0x8939c0, tailcall)
uint64_t main_f_8939c0(void* a0) {
    return main::sub_8935e0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8939d0  (orig 0x8939d0, tailcall)
uint64_t main_f_8939d0(void* a0) {
    return main::sub_8935e0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8954a0  (orig 0x8954a0, tailcall)
uint64_t main_f_8954a0(void* a0) {
    return main::sub_8a7000(((uintptr_t)(*(uint64_t*)((char*)(a0) + 952))));
}

// sub_8972b0  (orig 0x8972b0, tailcall)
uint64_t main_f_8972b0(void* a0) {
    return main::sub_896c70(((uintptr_t)((char*)(a0) - 96)));
}

// sub_897d10  (orig 0x897d10, tailcall)
uint64_t main_f_897d10(void* a0) {
    return main::sub_897a50(((uintptr_t)((char*)(a0) - 112)));
}

// sub_897ec0  (orig 0x897ec0, tailcall)
uint64_t main_f_897ec0(void* a0) {
    return main::sub_897dc0(((uintptr_t)((char*)(a0) - 120)));
}

// sub_898d00  (orig 0x898d00, tailcall)
uint64_t main_f_898d00(void* a0) {
    return main::sub_898c10(((uintptr_t)((char*)(a0) - 72)));
}

// sub_898d10  (orig 0x898d10, tailcall)
uint64_t main_f_898d10(void* a0) {
    return main::sub_898c10(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8994a0  (orig 0x8994a0, tailcall)
void main_f_8994a0() { main::sub_8992b0(); }

// sub_899c20  (orig 0x899c20, tailcall)
uint64_t main_f_899c20(void* a0) {
    return main::sub_8992b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_899c30  (orig 0x899c30, tailcall)
uint64_t main_f_899c30(void* a0) {
    return main::sub_8992b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_899c40  (orig 0x899c40, tailcall)
uint64_t main_f_899c40(void* a0) {
    return main::sub_8994b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_899c50  (orig 0x899c50, tailcall)
uint64_t main_f_899c50(void* a0) {
    return main::sub_8994b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_899c60  (orig 0x899c60, tailcall)
uint64_t main_f_899c60(void* a0) {
    return main::sub_8992b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_899c70  (orig 0x899c70, tailcall)
uint64_t main_f_899c70(void* a0) {
    return main::sub_8992b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_899e20  (orig 0x899e20, tailcall)
uint64_t main_f_899e20(void* a0) {
    return main::sub_899820(((uintptr_t)((char*)(a0) - 104)));
}

// sub_899e30  (orig 0x899e30, tailcall)
uint64_t main_f_899e30(void* a0) {
    return main::sub_8999a0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_899e40  (orig 0x899e40, tailcall)
uint64_t main_f_899e40(void* a0) {
    return main::sub_8996b0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_8a0750  (orig 0x8a0750, tailcall)
void main_f_8a0750() { battle::battle_battle_command_2(); }

// sub_8a1720  (orig 0x8a1720, tailcall)
void main_f_8a1720() { battle::battle_btl_data_holder_2(); }

// sub_8a3230  (orig 0x8a3230, tailcall)
void main_f_8a3230() { battle::battle_poke_party_2(); }

// sub_8a52e0  (orig 0x8a52e0, tailcall)
void main_f_8a52e0() { battle::battle_btl_cmd_data_holder_2(); }

// sub_8a74f0  (orig 0x8a74f0, tailcall)
uint64_t main_f_8a74f0(void* a0) {
    return main::sub_8a7400(((uintptr_t)((char*)(a0) - 88)));
}

// sub_8a7500  (orig 0x8a7500, tailcall)
uint64_t main_f_8a7500(void* a0) {
    return main::sub_8a7400(((uintptr_t)((char*)(a0) - 96)));
}

// sub_8a7fb0  (orig 0x8a7fb0, tailcall)
void main_f_8a7fb0() { main::sub_ce0(); }

// sub_8ad680  (orig 0x8ad680, tailcall)
uint64_t main_f_8ad680(void* a0) {
    return main::sub_8ae890(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_8ad690  (orig 0x8ad690, tailcall)
uint64_t main_f_8ad690(void* a0) {
    return main::sub_8aea20(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_8ada30  (orig 0x8ada30, tailcall)
uint64_t main_f_8ada30(void* a0) {
    return main::sub_8b0650(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_8ada40  (orig 0x8ada40, tailcall)
uint64_t main_f_8ada40(void* a0) {
    return main::sub_8b09a0(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_8adaa0  (orig 0x8adaa0, tailcall)
uint64_t main_f_8adaa0(void* a0) {
    return main::sub_8b0c90(((uintptr_t)(*(uint64_t*)((char*)(a0) + 128))));
}

// sub_8b1b70  (orig 0x8b1b70, tailcall)
void main_f_8b1b70() { main::sub_8b1980(); }

// sub_8b22f0  (orig 0x8b22f0, tailcall)
uint64_t main_f_8b22f0(void* a0) {
    return main::sub_8b1980(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8b2300  (orig 0x8b2300, tailcall)
uint64_t main_f_8b2300(void* a0) {
    return main::sub_8b1980(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8b2310  (orig 0x8b2310, tailcall)
uint64_t main_f_8b2310(void* a0) {
    return main::sub_8b1b80(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8b2320  (orig 0x8b2320, tailcall)
uint64_t main_f_8b2320(void* a0) {
    return main::sub_8b1b80(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8b2330  (orig 0x8b2330, tailcall)
uint64_t main_f_8b2330(void* a0) {
    return main::sub_8b1980(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8b2340  (orig 0x8b2340, tailcall)
uint64_t main_f_8b2340(void* a0) {
    return main::sub_8b1980(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8b24f0  (orig 0x8b24f0, tailcall)
uint64_t main_f_8b24f0(void* a0) {
    return main::sub_8b1ef0(((uintptr_t)((char*)(a0) - 104)));
}

// sub_8b2500  (orig 0x8b2500, tailcall)
uint64_t main_f_8b2500(void* a0) {
    return main::sub_8b2070(((uintptr_t)((char*)(a0) - 104)));
}

// sub_8b2510  (orig 0x8b2510, tailcall)
uint64_t main_f_8b2510(void* a0) {
    return main::sub_8b1d80(((uintptr_t)((char*)(a0) - 104)));
}

// sub_8b5690  (orig 0x8b5690, tailcall)
void main_f_8b5690() { battle::battle_watch_party_2(); }

// sub_8b7300  (orig 0x8b7300, tailcall)
void main_f_8b7300() { battle::battle_watch_command_2(); }

// sub_8b8d40  (orig 0x8b8d40, tailcall)
void main_f_8b8d40() { battle::battle_watch_clienttimer_2(); }

// sub_8b98e0  (orig 0x8b98e0, tailcall)
void main_f_8b98e0() { battle::battle_watch_target_party_2(); }

// sub_8ba330  (orig 0x8ba330, tailcall)
void main_f_8ba330() { battle::battle_btlwatch_data_holder_2(); }

// sub_8bb120  (orig 0x8bb120, tailcall)
void main_f_8bb120() { battle::battle_watch_cmd_2(); }

// sub_8bbaa0  (orig 0x8bbaa0, tailcall)
void main_f_8bbaa0() { main::sub_8bb9b0(); }

// sub_8bca50  (orig 0x8bca50, tailcall)
void main_f_8bca50() { battle::battle_btlwatch_async_data_holder_2(); }

// sub_8bf510  (orig 0x8bf510, tailcall)
void main_f_8bf510() { battle::battle_watch_body_2(); }

// sub_8bfba0  (orig 0x8bfba0, tailcall)
uint64_t main_f_8bfba0(void* a0) {
    return main::sub_8bfab0(((uintptr_t)((char*)(a0) - 88)));
}

// sub_8bfbb0  (orig 0x8bfbb0, tailcall)
uint64_t main_f_8bfbb0(void* a0) {
    return main::sub_8bfab0(((uintptr_t)((char*)(a0) - 96)));
}

// sub_8c29c0  (orig 0x8c29c0, tailcall)
uint64_t main_f_8c29c0(void* a0) {
    return main::sub_8c2840(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8c29d0  (orig 0x8c29d0, tailcall)
void main_f_8c29d0() { main::sub_8c2840(); }

// sub_8c29e0  (orig 0x8c29e0, tailcall)
uint64_t main_f_8c29e0(void* a0) {
    return main::sub_8c2840(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8c6590  (orig 0x8c6590, tailcall)
void main_f_8c6590() { main::sub_66b040(); }

// sub_8c65a0  (orig 0x8c65a0, tailcall)
uint64_t main_f_8c65a0(void* a0) {
    return main::sub_66b040(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8c65b0  (orig 0x8c65b0, tailcall)
uint64_t main_f_8c65b0(void* a0) {
    return main::sub_66b040(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8c65c0  (orig 0x8c65c0, tailcall)
void main_f_8c65c0() { main::sub_66b040(); }

// sub_8c65d0  (orig 0x8c65d0, tailcall)
uint64_t main_f_8c65d0(void* a0) {
    return main::sub_66b040(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8c65e0  (orig 0x8c65e0, tailcall)
uint64_t main_f_8c65e0(void* a0) {
    return main::sub_66b040(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8c66f0  (orig 0x8c66f0, tailcall)
uint64_t main_f_8c66f0(void* a0) {
    return main::sub_8c6600(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8c6700  (orig 0x8c6700, tailcall)
uint64_t main_f_8c6700(void* a0) {
    return main::sub_8c6600(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8d0040  (orig 0x8d0040, tailcall)
void main_f_8d0040() { main::sub_8d0070(); }

// sub_8d0050  (orig 0x8d0050, tailcall)
void main_f_8d0050() { main::sub_8d0070(); }

// sub_8d0060  (orig 0x8d0060, tailcall)
void main_f_8d0060() { main::sub_8d0070(); }

// sub_8d2550  (orig 0x8d2550, tailcall)
void main_f_8d2550() { main::sub_8d23b0(); }

// sub_8d2610  (orig 0x8d2610, tailcall)
uint64_t main_f_8d2610(void* a0) {
    return main::sub_8d23b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8d2620  (orig 0x8d2620, tailcall)
uint64_t main_f_8d2620(void* a0) {
    return main::sub_8d23b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8d2790  (orig 0x8d2790, tailcall)
uint64_t main_f_8d2790(void* a0) {
    return main::sub_8d23b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8d27a0  (orig 0x8d27a0, tailcall)
uint64_t main_f_8d27a0(void* a0) {
    return main::sub_8d23b0(((uintptr_t)((char*)(a0) - 80)));
}

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

// sub_8d4ed0  (orig 0x8d4ed0, tailcall)
uint64_t main_f_8d4ed0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8d4ee0  (orig 0x8d4ee0, tailcall)
uint64_t main_f_8d4ee0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8d4ef0  (orig 0x8d4ef0, tailcall)
void main_f_8d4ef0() { main::sub_8d4f30(); }

// sub_8d4f00  (orig 0x8d4f00, tailcall)
void main_f_8d4f00() { main::sub_8d4f30(); }

// sub_8d4f10  (orig 0x8d4f10, tailcall)
uint64_t main_f_8d4f10(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8d4f20  (orig 0x8d4f20, tailcall)
uint64_t main_f_8d4f20(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8d5c10  (orig 0x8d5c10, tailcall)
void main_f_8d5c10() { main::sub_e7c4c0(); }

// sub_8d5c20  (orig 0x8d5c20, tailcall)
uint64_t main_f_8d5c20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8d5c30  (orig 0x8d5c30, tailcall)
uint64_t main_f_8d5c30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8d5c40  (orig 0x8d5c40, tailcall)
uint64_t main_f_8d5c40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8d5c50  (orig 0x8d5c50, tailcall)
uint64_t main_f_8d5c50(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8d8660  (orig 0x8d8660, tailcall)
void main_f_8d8660() { main::sub_8d84b0(); }

// sub_8d8670  (orig 0x8d8670, tailcall)
void main_f_8d8670() { main::sub_8d3f10(); }

// sub_8d8680  (orig 0x8d8680, tailcall)
uint64_t main_f_8d8680(void* a0) {
    return main::sub_8d84b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8d8690  (orig 0x8d8690, tailcall)
uint64_t main_f_8d8690(void* a0) {
    return main::sub_8d84b0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8d86a0  (orig 0x8d86a0, tailcall)
void main_f_8d86a0() { main::sub_8d3f10(); }

// sub_8d86b0  (orig 0x8d86b0, tailcall)
void main_f_8d86b0() { main::sub_8d3f10(); }

// sub_8d86c0  (orig 0x8d86c0, tailcall)
uint64_t main_f_8d86c0(void* a0) {
    return main::sub_8d84b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8d86d0  (orig 0x8d86d0, tailcall)
uint64_t main_f_8d86d0(void* a0) {
    return main::sub_8d84b0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8da230  (orig 0x8da230, tailcall)
void main_f_8da230() { main::sub_8da520(); }

// sub_8da3a0  (orig 0x8da3a0, tailcall)
void main_f_8da3a0() { main::sub_8da520(); }

// sub_8da3b0  (orig 0x8da3b0, tailcall)
void main_f_8da3b0() { main::sub_8da520(); }

// sub_8dbba0  (orig 0x8dbba0, tailcall)
void main_f_8dbba0() { main::sub_e7c4c0(); }

// sub_8dbbb0  (orig 0x8dbbb0, tailcall)
void main_f_8dbbb0() { main::sub_8dbc20(); }

// sub_8dbbc0  (orig 0x8dbbc0, tailcall)
uint64_t main_f_8dbbc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8dbbd0  (orig 0x8dbbd0, tailcall)
uint64_t main_f_8dbbd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8dbbe0  (orig 0x8dbbe0, tailcall)
void main_f_8dbbe0() { main::sub_8dbc20(); }

// sub_8dbbf0  (orig 0x8dbbf0, tailcall)
void main_f_8dbbf0() { main::sub_8dbc20(); }

// sub_8dbc00  (orig 0x8dbc00, tailcall)
uint64_t main_f_8dbc00(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8dbc10  (orig 0x8dbc10, tailcall)
uint64_t main_f_8dbc10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8dc130  (orig 0x8dc130, tailcall)
void main_f_8dc130() { main::sub_e7c4c0(); }

// sub_8dc140  (orig 0x8dc140, tailcall)
uint64_t main_f_8dc140(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8dc150  (orig 0x8dc150, tailcall)
uint64_t main_f_8dc150(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8dc160  (orig 0x8dc160, tailcall)
uint64_t main_f_8dc160(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8dc170  (orig 0x8dc170, tailcall)
uint64_t main_f_8dc170(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8dca00  (orig 0x8dca00, tailcall)
void main_f_8dca00() { main::sub_e7c4c0(); }

// sub_8dca10  (orig 0x8dca10, tailcall)
uint64_t main_f_8dca10(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8dca20  (orig 0x8dca20, tailcall)
uint64_t main_f_8dca20(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8dca30  (orig 0x8dca30, tailcall)
uint64_t main_f_8dca30(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8dca40  (orig 0x8dca40, tailcall)
uint64_t main_f_8dca40(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8dd200  (orig 0x8dd200, tailcall)
void main_f_8dd200() { main::sub_8dd2f0(); }

// sub_8dd270  (orig 0x8dd270, tailcall)
void main_f_8dd270() { main::sub_8dd2f0(); }

// sub_8dd280  (orig 0x8dd280, tailcall)
void main_f_8dd280() { main::sub_8dd2f0(); }

// sub_8dd7f0  (orig 0x8dd7f0, tailcall)
void main_f_8dd7f0() { main::sub_e7c4c0(); }

// sub_8dd800  (orig 0x8dd800, tailcall)
uint64_t main_f_8dd800(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8dd810  (orig 0x8dd810, tailcall)
uint64_t main_f_8dd810(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8dd820  (orig 0x8dd820, tailcall)
uint64_t main_f_8dd820(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8dd830  (orig 0x8dd830, tailcall)
uint64_t main_f_8dd830(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8ddbb0  (orig 0x8ddbb0, tailcall)
void main_f_8ddbb0() { main::sub_e7c4c0(); }

// sub_8ddbc0  (orig 0x8ddbc0, tailcall)
uint64_t main_f_8ddbc0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8ddbd0  (orig 0x8ddbd0, tailcall)
uint64_t main_f_8ddbd0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8ddbe0  (orig 0x8ddbe0, tailcall)
uint64_t main_f_8ddbe0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8ddbf0  (orig 0x8ddbf0, tailcall)
uint64_t main_f_8ddbf0(void* a0) {
    return main::sub_e7c4c0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8dffa0  (orig 0x8dffa0, tailcall)
uint64_t main_f_8dffa0(void* a0) {
    return main::sub_8dfe20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8dffb0  (orig 0x8dffb0, tailcall)
uint64_t main_f_8dffb0(void* a0) {
    return main::sub_8dfe20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8dffc0  (orig 0x8dffc0, tailcall)
void main_f_8dffc0() { main::sub_8dfe20(); }

// sub_8dffd0  (orig 0x8dffd0, tailcall)
uint64_t main_f_8dffd0(void* a0) {
    return main::sub_8dfe20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8dffe0  (orig 0x8dffe0, tailcall)
uint64_t main_f_8dffe0(void* a0) {
    return main::sub_8dfe20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e1600  (orig 0x8e1600, tailcall)
uint64_t main_f_8e1600(void* a0) {
    return main::sub_8e1510(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e1610  (orig 0x8e1610, tailcall)
uint64_t main_f_8e1610(void* a0) {
    return main::sub_8e1510(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e19e0  (orig 0x8e19e0, tailcall)
uint64_t main_f_8e19e0(void* a0) {
    return main::sub_8e1850(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e19f0  (orig 0x8e19f0, tailcall)
uint64_t main_f_8e19f0(void* a0) {
    return main::sub_8e1850(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e1d90  (orig 0x8e1d90, tailcall)
uint64_t main_f_8e1d90(void* a0) {
    return main::sub_8e1c00(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e1da0  (orig 0x8e1da0, tailcall)
uint64_t main_f_8e1da0(void* a0) {
    return main::sub_8e1c00(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e21b0  (orig 0x8e21b0, tailcall)
uint64_t main_f_8e21b0(void* a0) {
    return main::sub_8e2010(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e21c0  (orig 0x8e21c0, tailcall)
uint64_t main_f_8e21c0(void* a0) {
    return main::sub_8e2010(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e21d0  (orig 0x8e21d0, tailcall)
void main_f_8e21d0() { main::sub_8e2010(); }

// sub_8e21e0  (orig 0x8e21e0, tailcall)
uint64_t main_f_8e21e0(void* a0) {
    return main::sub_8e2010(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e21f0  (orig 0x8e21f0, tailcall)
uint64_t main_f_8e21f0(void* a0) {
    return main::sub_8e2010(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e33e0  (orig 0x8e33e0, tailcall)
void main_f_8e33e0() { main::sub_8e3410(); }

// sub_8e33f0  (orig 0x8e33f0, tailcall)
void main_f_8e33f0() { main::sub_8e3410(); }

// sub_8e3400  (orig 0x8e3400, tailcall)
void main_f_8e3400() { main::sub_8e3410(); }

// sub_8e5030  (orig 0x8e5030, tailcall)
void main_f_8e5030() { main::sub_8e4e90(); }

// sub_8e50f0  (orig 0x8e50f0, tailcall)
uint64_t main_f_8e50f0(void* a0) {
    return main::sub_8e4e90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e5100  (orig 0x8e5100, tailcall)
uint64_t main_f_8e5100(void* a0) {
    return main::sub_8e4e90(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e5270  (orig 0x8e5270, tailcall)
uint64_t main_f_8e5270(void* a0) {
    return main::sub_8e4e90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e5280  (orig 0x8e5280, tailcall)
uint64_t main_f_8e5280(void* a0) {
    return main::sub_8e4e90(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e6170  (orig 0x8e6170, tailcall)
void main_f_8e6170() { main::sub_eb81a0(); }

// sub_8e61f0  (orig 0x8e61f0, tailcall)
uint64_t main_f_8e61f0(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e6200  (orig 0x8e6200, tailcall)
uint64_t main_f_8e6200(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e62f0  (orig 0x8e62f0, tailcall)
uint64_t main_f_8e62f0(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e6300  (orig 0x8e6300, tailcall)
uint64_t main_f_8e6300(void* a0) {
    return main::sub_eb81a0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e6f90  (orig 0x8e6f90, tailcall)
void main_f_8e6f90() { main::sub_e7c250(); }

// sub_8e6fa0  (orig 0x8e6fa0, tailcall)
void main_f_8e6fa0() { main::sub_8e5870(); }

// sub_8e6fb0  (orig 0x8e6fb0, tailcall)
uint64_t main_f_8e6fb0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e6fc0  (orig 0x8e6fc0, tailcall)
uint64_t main_f_8e6fc0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e6fd0  (orig 0x8e6fd0, tailcall)
void main_f_8e6fd0() { main::sub_8e5870(); }

// sub_8e6fe0  (orig 0x8e6fe0, tailcall)
void main_f_8e6fe0() { main::sub_8e5870(); }

// sub_8e6ff0  (orig 0x8e6ff0, tailcall)
uint64_t main_f_8e6ff0(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e7000  (orig 0x8e7000, tailcall)
uint64_t main_f_8e7000(void* a0) {
    return main::sub_e7c250(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e8220  (orig 0x8e8220, tailcall)
void main_f_8e8220() { main::sub_8e8120(); }

// sub_8e8230  (orig 0x8e8230, tailcall)
void main_f_8e8230() { main::sub_8e82a0(); }

// sub_8e8240  (orig 0x8e8240, tailcall)
uint64_t main_f_8e8240(void* a0) {
    return main::sub_8e8120(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e8250  (orig 0x8e8250, tailcall)
uint64_t main_f_8e8250(void* a0) {
    return main::sub_8e8120(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8e8260  (orig 0x8e8260, tailcall)
void main_f_8e8260() { main::sub_8e82a0(); }

// sub_8e8270  (orig 0x8e8270, tailcall)
void main_f_8e8270() { main::sub_8e82a0(); }

// sub_8e8280  (orig 0x8e8280, tailcall)
uint64_t main_f_8e8280(void* a0) {
    return main::sub_8e8120(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e8290  (orig 0x8e8290, tailcall)
uint64_t main_f_8e8290(void* a0) {
    return main::sub_8e8120(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8e87e0  (orig 0x8e87e0, tailcall)
void main_f_8e87e0() { main::sub_8e8e50(); }

// sub_8e8930  (orig 0x8e8930, tailcall)
void main_f_8e8930() { main::sub_8e8e50(); }

// sub_8e8940  (orig 0x8e8940, tailcall)
void main_f_8e8940() { main::sub_8e8e50(); }

// sub_8eb1e0  (orig 0x8eb1e0, tailcall)
uint64_t main_f_8eb1e0(void* a0) {
    return main::sub_8f4820(((uintptr_t)(*(uint64_t*)((char*)(a0) + 32))));
}

// sub_8eb1f0  (orig 0x8eb1f0, tailcall)
void main_f_8eb1f0() { main::sub_ce0(); }

// sub_8eb200  (orig 0x8eb200, tailcall)
void main_f_8eb200() { main::sub_ce0(); }

// sub_8eb210  (orig 0x8eb210, tailcall)
void main_f_8eb210() { main::sub_ce0(); }

// sub_8eb230  (orig 0x8eb230, tailcall)
void main_f_8eb230() { main::sub_ce0(); }

// sub_8eb240  (orig 0x8eb240, tailcall)
void main_f_8eb240() { main::sub_ce0(); }

// sub_8ec9f0  (orig 0x8ec9f0, tailcall)
void main_f_8ec9f0() { main::sub_ce0(); }

// sub_8efbf0  (orig 0x8efbf0, tailcall)
void main_f_8efbf0() { main::sub_8efb20(); }

// sub_8efc00  (orig 0x8efc00, tailcall)
void main_f_8efc00() { main::sub_8efc70(); }

// sub_8efc10  (orig 0x8efc10, tailcall)
uint64_t main_f_8efc10(void* a0) {
    return main::sub_8efb20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8efc20  (orig 0x8efc20, tailcall)
uint64_t main_f_8efc20(void* a0) {
    return main::sub_8efb20(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8efc30  (orig 0x8efc30, tailcall)
void main_f_8efc30() { main::sub_8efc70(); }

// sub_8efc40  (orig 0x8efc40, tailcall)
void main_f_8efc40() { main::sub_8efc70(); }

// sub_8efc50  (orig 0x8efc50, tailcall)
uint64_t main_f_8efc50(void* a0) {
    return main::sub_8efb20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8efc60  (orig 0x8efc60, tailcall)
uint64_t main_f_8efc60(void* a0) {
    return main::sub_8efb20(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8efdc0  (orig 0x8efdc0, tailcall)
void main_f_8efdc0() { main::sub_ce0(); }

// sub_8f40c0  (orig 0x8f40c0, tailcall)
void main_f_8f40c0() { main::sub_ce0(); }

// sub_8f4460  (orig 0x8f4460, tailcall)
void main_f_8f4460() { main::sub_e7feb0(); }

// sub_8f4470  (orig 0x8f4470, tailcall)
void main_f_8f4470() { main::sub_8f44e0(); }

// sub_8f4480  (orig 0x8f4480, tailcall)
uint64_t main_f_8f4480(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8f4490  (orig 0x8f4490, tailcall)
uint64_t main_f_8f4490(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8f44a0  (orig 0x8f44a0, tailcall)
void main_f_8f44a0() { main::sub_8f44e0(); }

// sub_8f44b0  (orig 0x8f44b0, tailcall)
void main_f_8f44b0() { main::sub_8f44e0(); }

// sub_8f44c0  (orig 0x8f44c0, tailcall)
uint64_t main_f_8f44c0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8f44d0  (orig 0x8f44d0, tailcall)
uint64_t main_f_8f44d0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8f4950  (orig 0x8f4950, tailcall)
void main_f_8f4950() { main::sub_e7feb0(); }

// sub_8f4960  (orig 0x8f4960, tailcall)
void main_f_8f4960() { main::sub_8f49d0(); }

// sub_8f4970  (orig 0x8f4970, tailcall)
uint64_t main_f_8f4970(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8f4980  (orig 0x8f4980, tailcall)
uint64_t main_f_8f4980(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8f4990  (orig 0x8f4990, tailcall)
void main_f_8f4990() { main::sub_8f49d0(); }

// sub_8f49a0  (orig 0x8f49a0, tailcall)
void main_f_8f49a0() { main::sub_8f49d0(); }

// sub_8f49b0  (orig 0x8f49b0, tailcall)
uint64_t main_f_8f49b0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8f49c0  (orig 0x8f49c0, tailcall)
uint64_t main_f_8f49c0(void* a0) {
    return main::sub_e7feb0(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8fae70  (orig 0x8fae70, tailcall)
void main_f_8fae70() { main::sub_8fac70(); }

// sub_8fae80  (orig 0x8fae80, tailcall)
void main_f_8fae80() { main::sub_8fb040(); }

// sub_8fae90  (orig 0x8fae90, tailcall)
uint64_t main_f_8fae90(void* a0) {
    return main::sub_8fac70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8faea0  (orig 0x8faea0, tailcall)
uint64_t main_f_8faea0(void* a0) {
    return main::sub_8fac70(((uintptr_t)((char*)(a0) - 72)));
}

// sub_8faeb0  (orig 0x8faeb0, tailcall)
void main_f_8faeb0() { main::sub_8fb040(); }

// sub_8faec0  (orig 0x8faec0, tailcall)
void main_f_8faec0() { main::sub_8fb040(); }

// sub_8faed0  (orig 0x8faed0, tailcall)
uint64_t main_f_8faed0(void* a0) {
    return main::sub_8fac70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8faee0  (orig 0x8faee0, tailcall)
uint64_t main_f_8faee0(void* a0) {
    return main::sub_8fac70(((uintptr_t)((char*)(a0) - 80)));
}

// sub_8fb3e0  (orig 0x8fb3e0, tailcall)
void main_f_8fb3e0() { main::sub_ce0(); }

// sub_8fdc80  (orig 0x8fdc80, tailcall)
void main_f_8fdc80() { main::sub_8f0b90(); }

// sub_900a40  (orig 0x900a40, tailcall)
void main_f_900a40() { main::sub_900ec0(); }

// sub_900c10  (orig 0x900c10, tailcall)
void main_f_900c10() { main::sub_900ec0(); }

// sub_900c20  (orig 0x900c20, tailcall)
void main_f_900c20() { main::sub_900ec0(); }

// sub_901440  (orig 0x901440, tailcall)
void main_f_901440() { main::Set_State_NetBattleOff(); }

