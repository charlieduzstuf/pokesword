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

extern void main_f_782ea0();
namespace main { void sub_7c3160(); }
namespace main { void sub_ce0(); }
namespace main { void sub_7cdf00(); }
namespace main { void sub_7cf960(); }
namespace main { void sub_7d1790(); }
namespace main { void sub_7eb3d0(); }
namespace main { void sub_7870a0(); }
namespace main { void sub_787110(); }
namespace main { void sub_7ff8f0(); }
namespace main { void sub_7cc1b0(); }
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
namespace main { void sub_819850(); }
namespace main { void sub_81b230(); }
namespace main { void sub_88cec0(); }
namespace main { void sub_88df70(); }
namespace main { void sub_891bf0(); }
namespace main { void sub_8935e0(); }
namespace main { void sub_8992b0(); }
namespace battle { void battle_battle_command_2(); }
namespace battle { void battle_btl_data_holder_2(); }
namespace battle { void battle_poke_party_2(); }
namespace battle { void battle_btl_cmd_data_holder_2(); }
namespace main { void sub_8b1980(); }
namespace battle { void battle_watch_party_2(); }
namespace battle { void battle_watch_command_2(); }
namespace battle { void battle_watch_clienttimer_2(); }
namespace battle { void battle_watch_target_party_2(); }
namespace battle { void battle_btlwatch_data_holder_2(); }
namespace battle { void battle_watch_cmd_2(); }
namespace main { void sub_8bb9b0(); }
namespace battle { void battle_btlwatch_async_data_holder_2(); }

// sub_7c1b10  (orig 0x7c1b10, ret_only)
void main_f_7c1b10() {}

// sub_7c1b90  (orig 0x7c1b90, ret_only)
void main_f_7c1b90() {}

// sub_7c1c10  (orig 0x7c1c10, mov_ret)
uint32_t main_f_7c1c10() { return 2; }

// sub_7c2230  (orig 0x7c2230, tailcall)
void main_f_7c2230() { main_f_782ea0(); }

// sub_7c2250  (orig 0x7c2250, tailcall)
void main_f_7c2250() { main_f_782ea0(); }

// sub_7c2270  (orig 0x7c2270, compare)
bool main_f_7c2270(uint64_t unused0, uint64_t a1) { return (uint32_t)(a1) == (uint64_t)(229); }

// sub_7c22a0  (orig 0x7c22a0, getter)
uint8_t main_f_7c22a0(void* a0) { return *(uint8_t*)((char*)(a0) + 80); }

// sub_7c2ad0  (orig 0x7c2ad0, ret_only)
void main_f_7c2ad0() {}

// sub_7c2ae0  (orig 0x7c2ae0, ret_only)
void main_f_7c2ae0() {}

// sub_7c2c00  (orig 0x7c2c00, ret_only)
void main_f_7c2c00() {}

// sub_7c2c80  (orig 0x7c2c80, ret_only)
void main_f_7c2c80() {}

// sub_7c2d80  (orig 0x7c2d80, mov_ret)
uint32_t main_f_7c2d80() { return 44; }

// sub_7c3a70  (orig 0x7c3a70, ret_only)
void main_f_7c3a70() {}

// sub_7c3a90  (orig 0x7c3a90, tailcall)
void main_f_7c3a90() { main::sub_7c3160(); }

// sub_7c4c70  (orig 0x7c4c70, getter-chain)
uint8_t main_f_7c4c70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 932); }

// sub_7c5070  (orig 0x7c5070, ret_only)
void main_f_7c5070() {}

// sub_7c58b0  (orig 0x7c58b0, getter-chain)
uint32_t main_f_7c58b0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 136)))); }

// sub_7ca070  (orig 0x7ca070, getter)
uint16_t main_f_7ca070(void* a0) { return *(uint16_t*)((char*)(a0) + 358); }

// sub_7ca1c0  (orig 0x7ca1c0, getter)
uint32_t main_f_7ca1c0(void* a0) { return *(uint32_t*)((char*)(a0) + 336); }

// sub_7ca890  (orig 0x7ca890, getter-chain)
uint8_t main_f_7ca890(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 933); }

// sub_7ca9f0  (orig 0x7ca9f0, getter-chain)
uint8_t main_f_7ca9f0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 2650); }

// sub_7caa00  (orig 0x7caa00, getter-chain)
uint8_t main_f_7caa00(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 2649); }

// sub_7caa10  (orig 0x7caa10, getter-chain)
uint8_t main_f_7caa10(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 2651); }

// sub_7caa20  (orig 0x7caa20, getter-chain)
uint8_t main_f_7caa20(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 2652); }

// sub_7caf50  (orig 0x7caf50, getter-chain)
uint8_t main_f_7caf50(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 752); }

// sub_7caf60  (orig 0x7caf60, getter-chain)
uint8_t main_f_7caf60(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 754); }

// sub_7cb070  (orig 0x7cb070, getter-chain)
uint64_t main_f_7cb070(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 2608); }

// sub_7cb300  (orig 0x7cb300, getter-chain)
uint8_t main_f_7cb300(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 1016); }

// sub_7cb850  (orig 0x7cb850, getter)
uint8_t main_f_7cb850(void* a0) { return *(uint8_t*)((char*)(a0) + 372); }

// sub_7cbc20  (orig 0x7cbc20, getter)
uint32_t main_f_7cbc20(void* a0) { return *(uint32_t*)((char*)(a0) + 368); }

// sub_7cc160  (orig 0x7cc160, ret_only)
void main_f_7cc160() {}

// sub_7cc3c0  (orig 0x7cc3c0, getter)
uint16_t main_f_7cc3c0(void* a0) { return *(uint16_t*)((char*)(a0) + 360); }

// sub_7cc400  (orig 0x7cc400, getter)
uint16_t main_f_7cc400(void* a0) { return *(uint16_t*)((char*)(a0) + 356); }

// sub_7cd130  (orig 0x7cd130, mov_ret)
uint32_t main_f_7cd130() { return 1; }

// sub_7cd430  (orig 0x7cd430, getter-chain)
uint8_t main_f_7cd430(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 9); }

// sub_7cd930  (orig 0x7cd930, getter-chain)
uint8_t main_f_7cd930(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 136))) + 1017); }

// sub_7cd950  (orig 0x7cd950, tailcall)
void main_f_7cd950() { main::sub_ce0(); }

// sub_7ce050  (orig 0x7ce050, tailcall)
void main_f_7ce050() { main::sub_7cdf00(); }

// sub_7ce130  (orig 0x7ce130, getter)
uint64_t main_f_7ce130(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_7ce150  (orig 0x7ce150, straight)
void main_f_7ce150(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0) + 114) = *(uint16_t*)((char*)(a1));
    *(uint16_t*)((char*)(a0) + 116) = *(uint16_t*)((char*)(a1) + 2);
    *(uint16_t*)((char*)(a0) + 118) = *(uint16_t*)((char*)(a1) + 4);
    *(uint16_t*)((char*)(a0) + 120) = *(uint16_t*)((char*)(a1) + 6);
}

// sub_7cfdb0  (orig 0x7cfdb0, tailcall)
void main_f_7cfdb0() { main::sub_7cf960(); }

// sub_7cfdd0  (orig 0x7cfdd0, getter)
uint8_t main_f_7cfdd0(void* a0) { return *(uint8_t*)((char*)(a0) + 694); }

// sub_7d0b80  (orig 0x7d0b80, getter)
uint64_t main_f_7d0b80(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_7d0b90  (orig 0x7d0b90, getter)
uint64_t main_f_7d0b90(void* a0) { return *(uint64_t*)((char*)(a0) + 240); }

// sub_7d0ba0  (orig 0x7d0ba0, getter)
uint64_t main_f_7d0ba0(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_7d0bb0  (orig 0x7d0bb0, getter)
uint64_t main_f_7d0bb0(void* a0) { return *(uint64_t*)((char*)(a0) + 592); }

// sub_7d1eb0  (orig 0x7d1eb0, tailcall)
void main_f_7d1eb0() { main::sub_7d1790(); }

// sub_7d23f0  (orig 0x7d23f0, mov_ret)
uint32_t main_f_7d23f0() { return 1; }

// sub_7d72b0  (orig 0x7d72b0, getter)
uint64_t main_f_7d72b0(void* a0) { return *(uint64_t*)((char*)(a0) + 832); }

// sub_7dfda0  (orig 0x7dfda0, mov_ret)
uint32_t main_f_7dfda0() { return 1; }

// sub_7dfdb0  (orig 0x7dfdb0, getter)
uint8_t main_f_7dfdb0(void* a0) { return *(uint8_t*)((char*)(a0) + 678); }

// sub_7dfdc0  (orig 0x7dfdc0, getter)
uint64_t main_f_7dfdc0(void* a0) { return *(uint64_t*)((char*)(a0) + 560); }

// sub_7e36e0  (orig 0x7e36e0, ret_only)
void main_f_7e36e0() {}

// sub_7e36f0  (orig 0x7e36f0, ret_only)
void main_f_7e36f0() {}

// sub_7e3700  (orig 0x7e3700, ret_only)
void main_f_7e3700() {}

// sub_7e3710  (orig 0x7e3710, ret_only)
void main_f_7e3710() {}

// sub_7e3720  (orig 0x7e3720, tailcall)
void main_f_7e3720() { main::sub_ce0(); }

// sub_7e7b40  (orig 0x7e7b40, mov_ret)
uint32_t main_f_7e7b40() { return 2; }

// sub_7e88d0  (orig 0x7e88d0, getter)
uint64_t main_f_7e88d0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_7e88e0  (orig 0x7e88e0, getter)
uint64_t main_f_7e88e0(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_7e88f0  (orig 0x7e88f0, getter)
uint64_t main_f_7e88f0(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_7e8900  (orig 0x7e8900, getter)
uint64_t main_f_7e8900(void* a0) { return *(uint64_t*)((char*)(a0) + 176); }

// sub_7e8910  (orig 0x7e8910, getter)
uint64_t main_f_7e8910(void* a0) { return *(uint64_t*)((char*)(a0) + 304); }

// sub_7e8920  (orig 0x7e8920, getter)
uint64_t main_f_7e8920(void* a0) { return *(uint64_t*)((char*)(a0) + 336); }

// sub_7e8930  (orig 0x7e8930, getter)
uint64_t main_f_7e8930(void* a0) { return *(uint64_t*)((char*)(a0) + 368); }

// sub_7e89c0  (orig 0x7e89c0, straight)
void main_f_7e89c0(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(5);
    *(uint32_t*)((char*)(a0) + 4) = 5;
}

// sub_7e89d0  (orig 0x7e89d0, straight)
void main_f_7e89d0(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(5);
    *(uint32_t*)((char*)(a0) + 4) = 5;
}

// sub_7e89e0  (orig 0x7e89e0, getter)
uint8_t main_f_7e89e0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_7e89f0  (orig 0x7e89f0, setter)
void main_f_7e89f0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0)) = a1; }

// sub_7e8a00  (orig 0x7e8a00, getter)
uint32_t main_f_7e8a00(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_7e8a10  (orig 0x7e8a10, setter)
void main_f_7e8a10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 4) = a1; }

// sub_7e9990  (orig 0x7e9990, ret_only)
void main_f_7e9990() {}

// sub_7e99a0  (orig 0x7e99a0, tailcall)
void main_f_7e99a0() { main::sub_ce0(); }

// sub_7e99e0  (orig 0x7e99e0, getter)
uint16_t main_f_7e99e0(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_7e9a60  (orig 0x7e9a60, getter)
uint8_t main_f_7e9a60(void* a0) { return *(uint8_t*)((char*)(a0) + 59); }

// sub_7e9a70  (orig 0x7e9a70, setter)
void main_f_7e9a70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 40) = a1; }

// sub_7e9a80  (orig 0x7e9a80, setter)
void main_f_7e9a80(void* a0) { *(uint64_t*)((char*)(a0) + 40) = 0; }

// sub_7e9a90  (orig 0x7e9a90, getter)
uint64_t main_f_7e9a90(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_7e9aa0  (orig 0x7e9aa0, straight)
void main_f_7e9aa0(void* a0) {
    *(uint8_t*)((char*)(a0) + 48) = (uint8_t)(8);
}

// sub_7e9ab0  (orig 0x7e9ab0, compare)
bool main_f_7e9ab0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 48)) == (uint64_t)(8); }

// sub_7e9b30  (orig 0x7e9b30, getter)
uint64_t main_f_7e9b30(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_7e9b40  (orig 0x7e9b40, getter)
uint64_t main_f_7e9b40(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_7e9b50  (orig 0x7e9b50, getter)
uint32_t main_f_7e9b50(void* a0) { return *(uint32_t*)((char*)(a0) + 60); }

// sub_7e9b60  (orig 0x7e9b60, setter)
void main_f_7e9b60(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 60) = a1; }

// sub_7e9b70  (orig 0x7e9b70, getter)
uint8_t main_f_7e9b70(void* a0) { return *(uint8_t*)((char*)(a0) + 48); }

// sub_7e9b80  (orig 0x7e9b80, getter)
uint32_t main_f_7e9b80(void* a0) { return *(uint32_t*)((char*)(a0) + 52); }

// sub_7e9b90  (orig 0x7e9b90, getter)
uint8_t main_f_7e9b90(void* a0) { return *(uint8_t*)((char*)(a0) + 58); }

// sub_7e9ba0  (orig 0x7e9ba0, getter)
uint16_t main_f_7e9ba0(void* a0) { return *(uint16_t*)((char*)(a0) + 56); }

// sub_7e9c10  (orig 0x7e9c10, getter)
uint64_t main_f_7e9c10(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_7e9c20  (orig 0x7e9c20, getter)
uint16_t main_f_7e9c20(void* a0) { return *(uint16_t*)((char*)(a0) + 62); }

// sub_7e9c30  (orig 0x7e9c30, setter)
void main_f_7e9c30(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 48) = a1; }

// sub_7e9c40  (orig 0x7e9c40, setter)
void main_f_7e9c40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 52) = a1; }

// sub_7e9c50  (orig 0x7e9c50, setter)
void main_f_7e9c50(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 56) = a1; }

// sub_7e9c60  (orig 0x7e9c60, setter)
void main_f_7e9c60(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 58) = a1; }

// sub_7e9c70  (orig 0x7e9c70, setter)
void main_f_7e9c70(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 59) = a1; }

// sub_7e9ce0  (orig 0x7e9ce0, setter-chain)
void main_f_7e9ce0(void* a0, uint64_t a1, uint8_t a2) { *(uint64_t*)((char*)(a0) + 32) = a1; *(uint8_t*)((char*)(a0) + 62) = a2; }

// sub_7e9d40  (orig 0x7e9d40, ret_only)
void main_f_7e9d40() {}

// sub_7e9d50  (orig 0x7e9d50, tailcall)
void main_f_7e9d50() { main::sub_ce0(); }

// sub_7e9df0  (orig 0x7e9df0, ret_only)
void main_f_7e9df0() {}

// sub_7e9e00  (orig 0x7e9e00, tailcall)
void main_f_7e9e00() { main::sub_ce0(); }

// sub_7e9e10  (orig 0x7e9e10, setter)
void main_f_7e9e10(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 8) = a1; }

// sub_7e9e20  (orig 0x7e9e20, setter-chain)
void main_f_7e9e20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; *(uint8_t*)((char*)(a0) + 10) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; }

// sub_7e9ea0  (orig 0x7e9ea0, straight)
void main_f_7e9ea0(void* a0) {
    *(uint8_t*)((char*)(a0) + 10) = (uint8_t)(1);
}

// sub_7e9f40  (orig 0x7e9f40, getter)
uint16_t main_f_7e9f40(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_7e9f50  (orig 0x7e9f50, getter)
uint32_t main_f_7e9f50(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_7e9f60  (orig 0x7e9f60, getter)
uint64_t main_f_7e9f60(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_7ea260  (orig 0x7ea260, compare)
bool main_f_7ea260(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 3080)) == (uint64_t)(0); }

// sub_7eaf40  (orig 0x7eaf40, getter)
uint64_t main_f_7eaf40(void* a0) { return *(uint64_t*)((char*)(a0) + 5512L); }

// sub_7eb460  (orig 0x7eb460, tailcall)
void main_f_7eb460() { main::sub_7eb3d0(); }

// sub_7eba90  (orig 0x7eba90, strlit-flag-ret)
void *main_f_7eba90(void* a0) { static char g_f_7eba90[1]; *(uint32_t *)((char*)(a0)) = 507; __asm__ volatile("" ::: "memory"); return g_f_7eba90; }

// sub_7ee040  (orig 0x7ee040, straight)
void main_f_7ee040(void* a0) {
    *(uint16_t*)((char*)(a0) + 624) = (uint16_t)(7936);
}

// sub_7ee6b0  (orig 0x7ee6b0, getter)
uint8_t main_f_7ee6b0(void* a0) { return *(uint8_t*)((char*)(a0) + 125); }

// sub_7ee6c0  (orig 0x7ee6c0, getter)
uint8_t main_f_7ee6c0(void* a0) { return *(uint8_t*)((char*)(a0) + 664); }

// sub_7ee800  (orig 0x7ee800, getter)
uint8_t main_f_7ee800(void* a0) { return *(uint8_t*)((char*)(a0) + 627); }

// sub_7ee810  (orig 0x7ee810, getter)
uint64_t main_f_7ee810(void* a0) { return *(uint64_t*)((char*)(a0) + 632); }

// sub_7eef40  (orig 0x7eef40, getter)
uint16_t main_f_7eef40(void* a0) { return *(uint16_t*)((char*)(a0) + 112); }

// sub_7ef230  (orig 0x7ef230, ptr_add)
void* main_f_7ef230(void* a0) { return (char*)a0 + 592; }

// sub_7ef240  (orig 0x7ef240, getter)
uint8_t main_f_7ef240(void* a0) { return *(uint8_t*)((char*)(a0) + 624); }

// sub_7ef250  (orig 0x7ef250, getter)
uint8_t main_f_7ef250(void* a0) { return *(uint8_t*)((char*)(a0) + 625); }

// sub_7ef2d0  (orig 0x7ef2d0, getter)
uint8_t main_f_7ef2d0(void* a0) { return *(uint8_t*)((char*)(a0) + 626); }

// sub_7ef300  (orig 0x7ef300, getter)
uint8_t main_f_7ef300(void* a0) { return *(uint8_t*)((char*)(a0) + 834); }

// sub_7ef310  (orig 0x7ef310, setter)
void main_f_7ef310(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 834) = a1; }

// sub_7ef320  (orig 0x7ef320, getter)
uint64_t main_f_7ef320(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_7ef330  (orig 0x7ef330, getter)
uint64_t main_f_7ef330(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_7ef530  (orig 0x7ef530, compare)
bool main_f_7ef530(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 700)) == (uint64_t)(510); }

// sub_7efe00  (orig 0x7efe00, getter)
uint8_t main_f_7efe00(void* a0) { return *(uint8_t*)((char*)(a0) + 828); }

// sub_7efee0  (orig 0x7efee0, getter)
uint8_t main_f_7efee0(void* a0) { return *(uint8_t*)((char*)(a0) + 832); }

// sub_7f09c0  (orig 0x7f09c0, getter)
uint16_t main_f_7f09c0(void* a0) { return *(uint16_t*)((char*)(a0) + 118); }

// sub_7f09d0  (orig 0x7f09d0, setter)
void main_f_7f09d0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 118) = a1; }

// sub_7f0a70  (orig 0x7f0a70, getter)
uint16_t main_f_7f0a70(void* a0) { return *(uint16_t*)((char*)(a0) + 580); }

// sub_7f0a90  (orig 0x7f0a90, getter)
uint16_t main_f_7f0a90(void* a0) { return *(uint16_t*)((char*)(a0) + 836); }

// sub_7f1310  (orig 0x7f1310, getter)
uint8_t main_f_7f1310(void* a0) { return *(uint8_t*)((char*)(a0) + 831); }

// sub_7f13d0  (orig 0x7f13d0, setter)
void main_f_7f13d0(void* a0) { *(uint16_t*)((char*)(a0) + 116) = 0; }

// sub_7f1d10  (orig 0x7f1d10, setter)
void main_f_7f1d10(void* a0) { *(uint16_t*)((char*)(a0) + 1110) = 0; }

// sub_7f2340  (orig 0x7f2340, getter)
uint8_t main_f_7f2340(void* a0) { return *(uint8_t*)((char*)(a0) + 686); }

// sub_7f2350  (orig 0x7f2350, compare)
bool main_f_7f2350(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 686)) != (uint64_t)(18); }

// sub_7f2360  (orig 0x7f2360, getter)
uint32_t main_f_7f2360(void* a0) { return *(uint32_t*)((char*)(a0) + 688); }

// sub_7f2370  (orig 0x7f2370, setter)
void main_f_7f2370(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 824) = a1; }

// sub_7f2490  (orig 0x7f2490, setter-chain)
void main_f_7f2490(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 120) = a1; *(uint16_t*)((char*)(a0) + 118) = 0; }

// sub_7f24a0  (orig 0x7f24a0, setter)
void main_f_7f24a0(void* a0) { *(uint16_t*)((char*)(a0) + 120) = 0; }

// sub_7f24b0  (orig 0x7f24b0, getter)
uint16_t main_f_7f24b0(void* a0) { return *(uint16_t*)((char*)(a0) + 120); }

// sub_7f2510  (orig 0x7f2510, getter)
uint16_t main_f_7f2510(void* a0) { return *(uint16_t*)((char*)(a0) + 840); }

// sub_7f2520  (orig 0x7f2520, getter)
uint32_t main_f_7f2520(void* a0) { return *(uint32_t*)((char*)(a0) + 844); }

// sub_7f2530  (orig 0x7f2530, getter)
uint8_t main_f_7f2530(void* a0) { return *(uint8_t*)((char*)(a0) + 833); }

// sub_7f2540  (orig 0x7f2540, getter)
uint32_t main_f_7f2540(void* a0) { return *(uint32_t*)((char*)(a0) + 848); }

// sub_7f2550  (orig 0x7f2550, getter)
uint8_t main_f_7f2550(void* a0) { return *(uint8_t*)((char*)(a0) + 842); }

// sub_7f2580  (orig 0x7f2580, getter)
uint16_t main_f_7f2580(void* a0) { return *(uint16_t*)((char*)(a0) + 826); }

// sub_7f29d0  (orig 0x7f29d0, getter)
uint8_t main_f_7f29d0(void* a0) { return *(uint8_t*)((char*)(a0) + 582); }

// sub_7f2e70  (orig 0x7f2e70, compare)
bool main_f_7f2e70(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 1110)) != (uint64_t)(0); }

// sub_7f2e80  (orig 0x7f2e80, getter)
uint16_t main_f_7f2e80(void* a0) { return *(uint16_t*)((char*)(a0) + 1110); }

// sub_7f2f80  (orig 0x7f2f80, setter-chain)
void main_f_7f2f80(void* a0, uint8_t a1, uint32_t a2) { *(uint8_t*)((char*)(a0) + 1116) = a1; *(uint32_t*)((char*)(a0) + 1112) = a2; }

// sub_7f2fc0  (orig 0x7f2fc0, compare)
bool main_f_7f2fc0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 1116)) != (uint64_t)(31); }

// sub_7f2fd0  (orig 0x7f2fd0, compare)
bool main_f_7f2fd0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 709)) != (uint64_t)(0); }

// sub_7f34f0  (orig 0x7f34f0, getter)
uint8_t main_f_7f34f0(void* a0) { return *(uint8_t*)((char*)(a0) + 665); }

// sub_7f36e0  (orig 0x7f36e0, getter)
float main_f_7f36e0(void* a0) { return *(float*)((char*)(a0) + 32); }

// sub_7f36f0  (orig 0x7f36f0, getter)
uint64_t main_f_7f36f0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_7f3700  (orig 0x7f3700, getter)
uint64_t main_f_7f3700(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_7f3710  (orig 0x7f3710, getter)
uint8_t main_f_7f3710(void* a0) { return *(uint8_t*)((char*)(a0) + 60); }

// sub_7f3720  (orig 0x7f3720, getter)
uint8_t main_f_7f3720(void* a0) { return *(uint8_t*)((char*)(a0) + 61); }

// sub_7f3730  (orig 0x7f3730, setter)
void main_f_7f3730(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 61) = a1; }

// sub_7f3760  (orig 0x7f3760, getter)
uint8_t main_f_7f3760(void* a0) { return *(uint8_t*)((char*)(a0) + 37); }

// sub_7f3770  (orig 0x7f3770, getter)
uint8_t main_f_7f3770(void* a0) { return *(uint8_t*)((char*)(a0) + 36); }

// sub_7f37d0  (orig 0x7f37d0, straight)
void main_f_7f37d0(void* a0) {
    *(uint8_t*)((char*)(a0) + 64) = (uint8_t)(1);
}

// sub_7f37e0  (orig 0x7f37e0, setter-chain)
void main_f_7f37e0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 64) = 0; *(uint8_t*)((char*)(a0) + 63) = a1; }

// sub_7f7140  (orig 0x7f7140, tailcall)
void main_f_7f7140() { main::sub_7870a0(); }

// sub_7f7c40  (orig 0x7f7c40, compare)
bool main_f_7f7c40(uint64_t a0) { return (int32_t)(a0) < (int64_t)(6); }

// sub_7f7fe0  (orig 0x7f7fe0, tailcall)
void main_f_7f7fe0() { main::sub_787110(); }

// sub_7f8330  (orig 0x7f8330, compare)
bool main_f_7f8330(uint64_t a0) { return (uint32_t)(a0) != (uint64_t)(0); }

// sub_7f8340  (orig 0x7f8340, mov_ret)
uint32_t main_f_7f8340(uint32_t a0, uint32_t a1) { return a1; }

// sub_7f8780  (orig 0x7f8780, mov_ret)
uint32_t main_f_7f8780() { return 248; }

// sub_7f8ba0  (orig 0x7f8ba0, straight)
void main_f_7f8ba0(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 4);
    *(uint32_t*)((char*)(a2)) = (uint32_t)(*(uint64_t*)((char*)(a0)));
}

// sub_7f8cf0  (orig 0x7f8cf0, setter-chain)
void main_f_7f8cf0(void* a0, uint32_t a1, uint8_t a2) { *(uint32_t*)((char*)(a0)) = a1; *(uint8_t*)((char*)(a0) + 4) = a2; }

// sub_7f8d00  (orig 0x7f8d00, straight)
void main_f_7f8d00(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1));
    *(uint8_t*)((char*)(a0) + 4) = *(uint8_t*)((char*)(a1) + 4);
}

// sub_7fc170  (orig 0x7fc170, compare)
bool main_f_7fc170(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(2); }

// sub_7fc180  (orig 0x7fc180, mov_ret)
uint32_t main_f_7fc180() { return 1; }

// sub_7fc1e0  (orig 0x7fc1e0, ret_only)
void main_f_7fc1e0() {}

// sub_7fc2e0  (orig 0x7fc2e0, getter)
uint8_t main_f_7fc2e0(void* a0) { return *(uint8_t*)((char*)(a0) + 48); }

// sub_7fc740  (orig 0x7fc740, setter-chain)
void main_f_7fc740(void* a0) { *(uint16_t*)((char*)(a0) + 4) = 0; *(uint32_t*)((char*)(a0)) = 0; }

// sub_7fc750  (orig 0x7fc750, straight)
void main_f_7fc750(void* a0, void* a1) {
    *(uint8_t*)((char*)(a0)) = *(uint8_t*)((char*)(a1));
    *(uint8_t*)((char*)(a0) + 1) = *(uint8_t*)((char*)(a1) + 1);
    *(uint8_t*)((char*)(a0) + 2) = *(uint8_t*)((char*)(a1) + 2);
    *(uint8_t*)((char*)(a0) + 3) = *(uint8_t*)((char*)(a1) + 3);
    *(uint8_t*)((char*)(a0) + 4) = *(uint8_t*)((char*)(a1) + 4);
}

// sub_7fc7d0  (orig 0x7fc7d0, copy2)
void main_f_7fc7d0(void* a0) { *(uint8_t*)((char*)(a0) + 4) = *(uint8_t*)((char*)(a0) + 5); }

// sub_7fc7e0  (orig 0x7fc7e0, straight)
void main_f_7fc7e0(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(1);
}

// sub_7fc7f0  (orig 0x7fc7f0, getter)
uint8_t main_f_7fc7f0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_7fc820  (orig 0x7fc820, compare)
bool main_f_7fc820(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 2)) == (uint64_t)(0); }

// sub_7fc850  (orig 0x7fc850, getter)
uint8_t main_f_7fc850(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_7fc860  (orig 0x7fc860, getter)
uint8_t main_f_7fc860(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_7fc8d0  (orig 0x7fc8d0, compare)
bool main_f_7fc8d0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 1)) <= (uint8_t)(*(uint8_t*)((char*)(a0) + 2)); }

// sub_7fc8f0  (orig 0x7fc8f0, getter)
uint8_t main_f_7fc8f0(void* a0) { return *(uint8_t*)((char*)(a0) + 4); }

// sub_7fe1d0  (orig 0x7fe1d0, getter)
uint64_t main_f_7fe1d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_7fe1e0  (orig 0x7fe1e0, getter)
uint64_t main_f_7fe1e0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_7fe1f0  (orig 0x7fe1f0, getter)
uint64_t main_f_7fe1f0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_7fe200  (orig 0x7fe200, getter)
uint64_t main_f_7fe200(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_7fe240  (orig 0x7fe240, getter)
uint64_t main_f_7fe240(void* a0) { return *(uint64_t*)((char*)(a0) + 136); }

// sub_7fe250  (orig 0x7fe250, getter)
uint64_t main_f_7fe250(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_7fe260  (orig 0x7fe260, getter)
uint64_t main_f_7fe260(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_7fe270  (orig 0x7fe270, getter)
uint64_t main_f_7fe270(void* a0) { return *(uint64_t*)((char*)(a0) + 232); }

// sub_7fe280  (orig 0x7fe280, getter)
uint64_t main_f_7fe280(void* a0) { return *(uint64_t*)((char*)(a0) + 264); }

// sub_7fe290  (orig 0x7fe290, getter)
uint64_t main_f_7fe290(void* a0) { return *(uint64_t*)((char*)(a0) + 296); }

// sub_7fe2a0  (orig 0x7fe2a0, getter)
uint64_t main_f_7fe2a0(void* a0) { return *(uint64_t*)((char*)(a0) + 328); }

// sub_7fe2b0  (orig 0x7fe2b0, getter)
uint64_t main_f_7fe2b0(void* a0) { return *(uint64_t*)((char*)(a0) + 360); }

// sub_7fe2c0  (orig 0x7fe2c0, getter)
uint64_t main_f_7fe2c0(void* a0) { return *(uint64_t*)((char*)(a0) + 392); }

// sub_7fe2d0  (orig 0x7fe2d0, getter)
uint64_t main_f_7fe2d0(void* a0) { return *(uint64_t*)((char*)(a0) + 392); }

// sub_7fe300  (orig 0x7fe300, getter)
uint64_t main_f_7fe300(void* a0) { return *(uint64_t*)((char*)(a0) + 584); }

// sub_7fe310  (orig 0x7fe310, getter)
uint64_t main_f_7fe310(void* a0) { return *(uint64_t*)((char*)(a0) + 584); }

// sub_7fe320  (orig 0x7fe320, getter)
uint64_t main_f_7fe320(void* a0) { return *(uint64_t*)((char*)(a0) + 616); }

// sub_7fe330  (orig 0x7fe330, getter)
uint64_t main_f_7fe330(void* a0) { return *(uint64_t*)((char*)(a0) + 648); }

// sub_7fe340  (orig 0x7fe340, getter)
uint64_t main_f_7fe340(void* a0) { return *(uint64_t*)((char*)(a0) + 680); }

// sub_7fe350  (orig 0x7fe350, getter)
uint64_t main_f_7fe350(void* a0) { return *(uint64_t*)((char*)(a0) + 680); }

// sub_7fe360  (orig 0x7fe360, getter)
uint64_t main_f_7fe360(void* a0) { return *(uint64_t*)((char*)(a0) + 712); }

// sub_7fe370  (orig 0x7fe370, ptr_add)
void* main_f_7fe370(void* a0) { return (char*)a0 + 744; }

// sub_7fe830  (orig 0x7fe830, setter-chain)
void main_f_7fe830(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0)) = 0; }

// sub_7fe840  (orig 0x7fe840, setter-chain)
void main_f_7fe840(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0)) = 0; }

// sub_7fead0  (orig 0x7fead0, setter-chain)
void main_f_7fead0(void* a0) { *(uint16_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_7feb00  (orig 0x7feb00, tailcall)
void main_f_7feb00() { main::sub_ce0(); }

// sub_7feb70  (orig 0x7feb70, setter)
void main_f_7feb70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_7ff5c0  (orig 0x7ff5c0, ret_only)
void main_f_7ff5c0() {}

// sub_7ff5d0  (orig 0x7ff5d0, tailcall)
void main_f_7ff5d0() { main::sub_ce0(); }

// sub_7ff600  (orig 0x7ff600, ret_only)
void main_f_7ff600() {}

// sub_7ff780  (orig 0x7ff780, straight)
void main_f_7ff780(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0));
    *(uint8_t*)((char*)(a1) + 4) = *(uint8_t*)((char*)(a0) + 4);
    *(uint8_t*)((char*)(a1) + 5) = *(uint8_t*)((char*)(a0) + 5);
    *(uint8_t*)((char*)(a1) + 6) = *(uint8_t*)((char*)(a0) + 6);
    *(uint8_t*)((char*)(a1) + 7) = *(uint8_t*)((char*)(a0) + 7);
    *(uint8_t*)((char*)(a1) + 8) = *(uint8_t*)((char*)(a0) + 8);
}

// sub_7ff860  (orig 0x7ff860, setter)
void main_f_7ff860(void* a0) { *(uint8_t*)((char*)(a0) + 8) = 0; }

// sub_7ff870  (orig 0x7ff870, copy2)
void main_f_7ff870(void* a0, void* a1) { *(uint8_t*)((char*)(a0) + 8) = *(uint8_t*)((char*)(a1) + 8); }

// sub_7ff8a0  (orig 0x7ff8a0, ret_only)
void main_f_7ff8a0() {}

// sub_7ff8b0  (orig 0x7ff8b0, tailcall)
void main_f_7ff8b0() { main::sub_ce0(); }

// sub_7ffa70  (orig 0x7ffa70, ret_only)
void main_f_7ffa70() {}

// sub_7ffa80  (orig 0x7ffa80, tailcall)
void main_f_7ffa80() { main::sub_7ff8f0(); }

// sub_7ffaa0  (orig 0x7ffaa0, getter)
uint8_t main_f_7ffaa0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_7ffab0  (orig 0x7ffab0, getter)
uint32_t main_f_7ffab0(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_7ffaf0  (orig 0x7ffaf0, getter)
uint8_t main_f_7ffaf0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_7ffb30  (orig 0x7ffb30, getter)
uint32_t main_f_7ffb30(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_800280  (orig 0x800280, compare)
bool main_f_800280(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 420)) != (uint64_t)(0); }

// sub_8003c0  (orig 0x8003c0, getter)
uint8_t main_f_8003c0(void* a0) { return *(uint8_t*)((char*)(a0) + 17); }

// sub_8003d0  (orig 0x8003d0, getter)
uint32_t main_f_8003d0(void* a0) { return *(uint32_t*)((char*)(a0) + 136); }

// sub_8005e0  (orig 0x8005e0, ret_only)
void main_f_8005e0() {}

// sub_8005f0  (orig 0x8005f0, tailcall)
void main_f_8005f0() { main::sub_ce0(); }

// sub_800bf0  (orig 0x800bf0, getter)
uint8_t main_f_800bf0(void* a0) { return *(uint8_t*)((char*)(a0) + 56); }

// sub_801750  (orig 0x801750, ret_only)
void main_f_801750() {}

// sub_801760  (orig 0x801760, tailcall)
void main_f_801760() { main::sub_ce0(); }

// sub_8017b0  (orig 0x8017b0, getter)
uint8_t main_f_8017b0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_8017c0  (orig 0x8017c0, copy2)
void main_f_8017c0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 20) = *(uint32_t*)((char*)(a1)); }

// sub_8017d0  (orig 0x8017d0, setter)
void main_f_8017d0(void* a0) { *(uint8_t*)((char*)(a0) + 16) = 0; }

// sub_8017e0  (orig 0x8017e0, ptr_add)
void* main_f_8017e0(void* a0) { return (char*)a0 + 20; }

// sub_801860  (orig 0x801860, getter)
uint8_t main_f_801860(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_801890  (orig 0x801890, compare)
bool main_f_801890(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) > (uint64_t)(3); }

// sub_801910  (orig 0x801910, straight)
void main_f_801910(void* a0) {
    *(uint8_t*)((char*)(a0) + 12) = (uint8_t)(1);
}

// sub_801920  (orig 0x801920, getter)
uint8_t main_f_801920(void* a0) { return *(uint8_t*)((char*)(a0) + 12); }

// sub_802330  (orig 0x802330, ret_only)
void main_f_802330() {}

// sub_802340  (orig 0x802340, tailcall)
void main_f_802340() { main::sub_ce0(); }

// sub_802460  (orig 0x802460, compare)
bool main_f_802460(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 28)) != (uint64_t)(0); }

// sub_802470  (orig 0x802470, getter)
uint32_t main_f_802470(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_802490  (orig 0x802490, getter)
uint32_t main_f_802490(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_8024e0  (orig 0x8024e0, ptr_add)
void* main_f_8024e0(void* a0) { return (char*)a0 + 16; }

// sub_802580  (orig 0x802580, copy2)
void main_f_802580(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 8); }

// sub_802590  (orig 0x802590, setter)
void main_f_802590(void* a0) { *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_8025d0  (orig 0x8025d0, ret_only)
void main_f_8025d0() {}

// sub_8025e0  (orig 0x8025e0, tailcall)
void main_f_8025e0() { main::sub_ce0(); }

// sub_8025f0  (orig 0x8025f0, straight)
void main_f_8025f0(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(7);
}

// sub_802600  (orig 0x802600, straight)
void main_f_802600(void* a0) {
    *(uint8_t*)((char*)(a0)) = (uint8_t)(7);
}

// sub_802610  (orig 0x802610, copy2)
void main_f_802610(void* a0, void* a1) { *(uint8_t*)((char*)(a0)) = *(uint8_t*)((char*)(a1)); }

// sub_802620  (orig 0x802620, compare)
bool main_f_802620(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) > (uint64_t)(6); }

// sub_802650  (orig 0x802650, setter)
void main_f_802650(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_803a10  (orig 0x803a10, setter-chain)
void main_f_803a10(void* a0) { *(uint16_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0)) = 0; }

// sub_803a20  (orig 0x803a20, setter-chain)
void main_f_803a20(void* a0) { *(uint16_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0)) = 0; }

// sub_803d40  (orig 0x803d40, getter)
uint16_t main_f_803d40(void* a0) { return *(uint16_t*)((char*)(a0)); }

// sub_803dc0  (orig 0x803dc0, ptr_add)
void* main_f_803dc0(void* a0) { return (char*)a0 + 4; }

// sub_803e00  (orig 0x803e00, getter)
uint32_t main_f_803e00(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_803e30  (orig 0x803e30, mov_ret)
uint32_t main_f_803e30() { return 3; }

// sub_804590  (orig 0x804590, ret_only)
void main_f_804590() {}

// sub_8045a0  (orig 0x8045a0, tailcall)
void main_f_8045a0() { main::sub_ce0(); }

// sub_8049b0  (orig 0x8049b0, ret_only)
void main_f_8049b0() {}

// sub_8049c0  (orig 0x8049c0, tailcall)
void main_f_8049c0() { main::sub_ce0(); }

// sub_80d940  (orig 0x80d940, tailcall)
void main_f_80d940() { main::sub_7cc1b0(); }

// sub_812b30  (orig 0x812b30, ret_only)
void main_f_812b30() {}

// sub_812b40  (orig 0x812b40, tailcall)
void main_f_812b40() { main::sub_ce0(); }

// sub_812ca0  (orig 0x812ca0, ret_only)
void main_f_812ca0() {}

// sub_812cb0  (orig 0x812cb0, tailcall)
void main_f_812cb0() { main::sub_ce0(); }

// sub_812cf0  (orig 0x812cf0, setter)
void main_f_812cf0(void* a0) { *(uint32_t*)((char*)(a0) + 16) = 0; }

// sub_812db0  (orig 0x812db0, setter)
void main_f_812db0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 4) = a1; }

// sub_812dc0  (orig 0x812dc0, setter)
void main_f_812dc0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0)) = a1; }

// sub_812dd0  (orig 0x812dd0, getter)
uint32_t main_f_812dd0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_812de0  (orig 0x812de0, straight)
void main_f_812de0(void* a0) {
    *(uint8_t*)((char*)(a0) + 9) = (uint8_t)(1);
}

// sub_812e10  (orig 0x812e10, getter)
uint8_t main_f_812e10(void* a0) { return *(uint8_t*)((char*)(a0) + 9); }

// sub_812e20  (orig 0x812e20, getter)
uint8_t main_f_812e20(void* a0) { return *(uint8_t*)((char*)(a0) + 10); }

// sub_812e30  (orig 0x812e30, setter)
void main_f_812e30(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 6) = a1; }

// sub_812ea0  (orig 0x812ea0, straight)
void main_f_812ea0(void* a0) {
    *(uint8_t*)((char*)(a0) + 8) = (uint8_t)(1);
}

// sub_812eb0  (orig 0x812eb0, straight)
void main_f_812eb0(void* a0) {
    *(uint8_t*)((char*)(a0) + 14) = (uint8_t)(1);
}

// sub_813130  (orig 0x813130, setter)
void main_f_813130(void* a0) { *(uint8_t*)((char*)(a0) + 78) = 0; }

// sub_813270  (orig 0x813270, getter)
uint8_t main_f_813270(void* a0) { return *(uint8_t*)((char*)(a0) + 76); }

// sub_813280  (orig 0x813280, getter)
uint8_t main_f_813280(void* a0) { return *(uint8_t*)((char*)(a0) + 77); }

// sub_813320  (orig 0x813320, setter)
void main_f_813320(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 79) = a1; }

// sub_8139c0  (orig 0x8139c0, setter)
void main_f_8139c0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_8139d0  (orig 0x8139d0, setter)
void main_f_8139d0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_813a20  (orig 0x813a20, ptr_add)
void* main_f_813a20(void* a0) { return (char*)a0 + 8; }

// sub_813a30  (orig 0x813a30, getter)
uint32_t main_f_813a30(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_813b20  (orig 0x813b20, getter)
uint32_t main_f_813b20(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_813d50  (orig 0x813d50, setter)
void main_f_813d50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 4) = a1; }

// sub_818770  (orig 0x818770, ret_only)
void main_f_818770() {}

// sub_818780  (orig 0x818780, tailcall)
void main_f_818780() { main::sub_ce0(); }

// sub_818810  (orig 0x818810, strlit-flag-ret)
void *main_f_818810(void* a0) { static char g_f_818810[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_818810; }

// sub_8189b0  (orig 0x8189b0, ret_only)
void main_f_8189b0() {}

// sub_8189c0  (orig 0x8189c0, strlit-flag-ret)
void *main_f_8189c0(void* a0) { static char g_f_8189c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8189c0; }

// sub_8189e0  (orig 0x8189e0, strlit-flag-ret)
void *main_f_8189e0(void* a0) { static char g_f_8189e0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8189e0; }

// sub_818a00  (orig 0x818a00, strlit-flag-ret)
void *main_f_818a00(void* a0) { static char g_f_818a00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_818a00; }

// sub_818a20  (orig 0x818a20, strlit-flag-ret)
void *main_f_818a20(void* a0) { static char g_f_818a20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_818a20; }

// sub_818a40  (orig 0x818a40, strlit-flag-ret)
void *main_f_818a40(void* a0) { static char g_f_818a40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_818a40; }

// sub_81c590  (orig 0x81c590, ret_only)
void main_f_81c590() {}

// sub_81c5a0  (orig 0x81c5a0, tailcall)
void main_f_81c5a0() { main::sub_ce0(); }

// sub_828410  (orig 0x828410, getter)
uint64_t main_f_828410(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_828420  (orig 0x828420, getter)
uint64_t main_f_828420(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_828430  (orig 0x828430, getter)
uint64_t main_f_828430(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_828440  (orig 0x828440, getter)
uint64_t main_f_828440(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_828450  (orig 0x828450, getter)
uint64_t main_f_828450(void* a0) { return *(uint64_t*)((char*)(a0) + 128); }

// sub_828460  (orig 0x828460, getter)
uint64_t main_f_828460(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_828470  (orig 0x828470, getter)
uint64_t main_f_828470(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_828480  (orig 0x828480, getter)
uint64_t main_f_828480(void* a0) { return *(uint64_t*)((char*)(a0) + 224); }

// sub_828490  (orig 0x828490, getter)
uint64_t main_f_828490(void* a0) { return *(uint64_t*)((char*)(a0) + 256); }

// sub_8284a0  (orig 0x8284a0, getter)
uint64_t main_f_8284a0(void* a0) { return *(uint64_t*)((char*)(a0) + 288); }

// sub_8284b0  (orig 0x8284b0, getter)
uint64_t main_f_8284b0(void* a0) { return *(uint64_t*)((char*)(a0) + 320); }

// sub_8284c0  (orig 0x8284c0, getter)
uint64_t main_f_8284c0(void* a0) { return *(uint64_t*)((char*)(a0) + 352); }

// sub_8284d0  (orig 0x8284d0, getter)
uint64_t main_f_8284d0(void* a0) { return *(uint64_t*)((char*)(a0) + 384); }

// sub_8284e0  (orig 0x8284e0, getter)
uint64_t main_f_8284e0(void* a0) { return *(uint64_t*)((char*)(a0) + 416); }

// sub_8284f0  (orig 0x8284f0, getter)
uint64_t main_f_8284f0(void* a0) { return *(uint64_t*)((char*)(a0) + 448); }

// sub_828500  (orig 0x828500, getter)
uint64_t main_f_828500(void* a0) { return *(uint64_t*)((char*)(a0) + 480); }

// sub_828510  (orig 0x828510, getter)
uint64_t main_f_828510(void* a0) { return *(uint64_t*)((char*)(a0) + 512); }

// sub_828520  (orig 0x828520, getter)
uint64_t main_f_828520(void* a0) { return *(uint64_t*)((char*)(a0) + 544); }

// sub_828530  (orig 0x828530, getter)
uint64_t main_f_828530(void* a0) { return *(uint64_t*)((char*)(a0) + 576); }

// sub_828540  (orig 0x828540, getter)
uint64_t main_f_828540(void* a0) { return *(uint64_t*)((char*)(a0) + 608); }

// sub_828550  (orig 0x828550, getter)
uint64_t main_f_828550(void* a0) { return *(uint64_t*)((char*)(a0) + 640); }

// sub_828560  (orig 0x828560, getter)
uint64_t main_f_828560(void* a0) { return *(uint64_t*)((char*)(a0) + 672); }

// sub_828570  (orig 0x828570, getter)
uint64_t main_f_828570(void* a0) { return *(uint64_t*)((char*)(a0) + 704); }

// sub_828580  (orig 0x828580, getter)
uint64_t main_f_828580(void* a0) { return *(uint64_t*)((char*)(a0) + 736); }

// sub_828590  (orig 0x828590, getter)
uint64_t main_f_828590(void* a0) { return *(uint64_t*)((char*)(a0) + 768); }

// sub_8285a0  (orig 0x8285a0, getter)
uint64_t main_f_8285a0(void* a0) { return *(uint64_t*)((char*)(a0) + 800); }

// sub_8285b0  (orig 0x8285b0, getter)
uint64_t main_f_8285b0(void* a0) { return *(uint64_t*)((char*)(a0) + 832); }

// sub_8285c0  (orig 0x8285c0, getter)
uint64_t main_f_8285c0(void* a0) { return *(uint64_t*)((char*)(a0) + 864); }

// sub_8285d0  (orig 0x8285d0, getter)
uint64_t main_f_8285d0(void* a0) { return *(uint64_t*)((char*)(a0) + 896); }

// sub_8285e0  (orig 0x8285e0, getter)
uint64_t main_f_8285e0(void* a0) { return *(uint64_t*)((char*)(a0) + 928); }

// sub_8285f0  (orig 0x8285f0, getter)
uint64_t main_f_8285f0(void* a0) { return *(uint64_t*)((char*)(a0) + 960); }

// sub_828600  (orig 0x828600, getter)
uint64_t main_f_828600(void* a0) { return *(uint64_t*)((char*)(a0) + 992); }

// sub_828610  (orig 0x828610, getter)
uint64_t main_f_828610(void* a0) { return *(uint64_t*)((char*)(a0) + 1024); }

// sub_828620  (orig 0x828620, getter)
uint64_t main_f_828620(void* a0) { return *(uint64_t*)((char*)(a0) + 1056); }

// sub_828630  (orig 0x828630, getter)
uint64_t main_f_828630(void* a0) { return *(uint64_t*)((char*)(a0) + 1088); }

// sub_828640  (orig 0x828640, getter)
uint64_t main_f_828640(void* a0) { return *(uint64_t*)((char*)(a0) + 1120); }

// sub_828650  (orig 0x828650, getter)
uint64_t main_f_828650(void* a0) { return *(uint64_t*)((char*)(a0) + 1152); }

// sub_828660  (orig 0x828660, getter)
uint64_t main_f_828660(void* a0) { return *(uint64_t*)((char*)(a0) + 1184); }

// sub_828670  (orig 0x828670, getter)
uint64_t main_f_828670(void* a0) { return *(uint64_t*)((char*)(a0) + 7168L); }

// sub_828680  (orig 0x828680, getter)
uint64_t main_f_828680(void* a0) { return *(uint64_t*)((char*)(a0) + 1216); }

// sub_828690  (orig 0x828690, getter)
uint64_t main_f_828690(void* a0) { return *(uint64_t*)((char*)(a0) + 1248); }

// sub_8286a0  (orig 0x8286a0, getter)
uint64_t main_f_8286a0(void* a0) { return *(uint64_t*)((char*)(a0) + 1280); }

// sub_8286b0  (orig 0x8286b0, getter)
uint64_t main_f_8286b0(void* a0) { return *(uint64_t*)((char*)(a0) + 1312); }

// sub_8286c0  (orig 0x8286c0, getter)
uint64_t main_f_8286c0(void* a0) { return *(uint64_t*)((char*)(a0) + 1344); }

// sub_8286d0  (orig 0x8286d0, getter)
uint64_t main_f_8286d0(void* a0) { return *(uint64_t*)((char*)(a0) + 1376); }

// sub_8286e0  (orig 0x8286e0, getter)
uint64_t main_f_8286e0(void* a0) { return *(uint64_t*)((char*)(a0) + 1408); }

// sub_8286f0  (orig 0x8286f0, getter)
uint64_t main_f_8286f0(void* a0) { return *(uint64_t*)((char*)(a0) + 1440); }

// sub_828700  (orig 0x828700, getter)
uint64_t main_f_828700(void* a0) { return *(uint64_t*)((char*)(a0) + 1472); }

// sub_828710  (orig 0x828710, getter)
uint64_t main_f_828710(void* a0) { return *(uint64_t*)((char*)(a0) + 1504); }

// sub_828720  (orig 0x828720, getter)
uint64_t main_f_828720(void* a0) { return *(uint64_t*)((char*)(a0) + 1536); }

// sub_828730  (orig 0x828730, getter)
uint64_t main_f_828730(void* a0) { return *(uint64_t*)((char*)(a0) + 1568); }

// sub_828740  (orig 0x828740, getter)
uint64_t main_f_828740(void* a0) { return *(uint64_t*)((char*)(a0) + 1600); }

// sub_828750  (orig 0x828750, getter)
uint64_t main_f_828750(void* a0) { return *(uint64_t*)((char*)(a0) + 1632); }

// sub_828760  (orig 0x828760, getter)
uint64_t main_f_828760(void* a0) { return *(uint64_t*)((char*)(a0) + 1664); }

// sub_828770  (orig 0x828770, getter)
uint64_t main_f_828770(void* a0) { return *(uint64_t*)((char*)(a0) + 1696); }

// sub_828780  (orig 0x828780, getter)
uint64_t main_f_828780(void* a0) { return *(uint64_t*)((char*)(a0) + 1728); }

// sub_828790  (orig 0x828790, getter)
uint64_t main_f_828790(void* a0) { return *(uint64_t*)((char*)(a0) + 1760); }

// sub_8287a0  (orig 0x8287a0, getter)
uint64_t main_f_8287a0(void* a0) { return *(uint64_t*)((char*)(a0) + 1792); }

// sub_8287b0  (orig 0x8287b0, getter)
uint64_t main_f_8287b0(void* a0) { return *(uint64_t*)((char*)(a0) + 1824); }

// sub_8287c0  (orig 0x8287c0, getter)
uint64_t main_f_8287c0(void* a0) { return *(uint64_t*)((char*)(a0) + 1856); }

// sub_8287d0  (orig 0x8287d0, getter)
uint64_t main_f_8287d0(void* a0) { return *(uint64_t*)((char*)(a0) + 1888); }

// sub_8287e0  (orig 0x8287e0, getter)
uint64_t main_f_8287e0(void* a0) { return *(uint64_t*)((char*)(a0) + 1920); }

// sub_8287f0  (orig 0x8287f0, getter)
uint64_t main_f_8287f0(void* a0) { return *(uint64_t*)((char*)(a0) + 1952); }

// sub_828800  (orig 0x828800, getter)
uint64_t main_f_828800(void* a0) { return *(uint64_t*)((char*)(a0) + 1984); }

// sub_828810  (orig 0x828810, getter)
uint64_t main_f_828810(void* a0) { return *(uint64_t*)((char*)(a0) + 2016); }

// sub_828820  (orig 0x828820, getter)
uint64_t main_f_828820(void* a0) { return *(uint64_t*)((char*)(a0) + 2048); }

// sub_828830  (orig 0x828830, getter)
uint64_t main_f_828830(void* a0) { return *(uint64_t*)((char*)(a0) + 2080); }

// sub_828840  (orig 0x828840, getter)
uint64_t main_f_828840(void* a0) { return *(uint64_t*)((char*)(a0) + 2112); }

// sub_828850  (orig 0x828850, getter)
uint64_t main_f_828850(void* a0) { return *(uint64_t*)((char*)(a0) + 2144); }

// sub_828860  (orig 0x828860, getter)
uint64_t main_f_828860(void* a0) { return *(uint64_t*)((char*)(a0) + 2176); }

// sub_828870  (orig 0x828870, getter)
uint64_t main_f_828870(void* a0) { return *(uint64_t*)((char*)(a0) + 2208); }

// sub_828880  (orig 0x828880, getter)
uint64_t main_f_828880(void* a0) { return *(uint64_t*)((char*)(a0) + 2240); }

// sub_828890  (orig 0x828890, getter)
uint64_t main_f_828890(void* a0) { return *(uint64_t*)((char*)(a0) + 2272); }

// sub_8288a0  (orig 0x8288a0, getter)
uint64_t main_f_8288a0(void* a0) { return *(uint64_t*)((char*)(a0) + 2304); }

// sub_8288b0  (orig 0x8288b0, getter)
uint64_t main_f_8288b0(void* a0) { return *(uint64_t*)((char*)(a0) + 2336); }

// sub_8288c0  (orig 0x8288c0, getter)
uint64_t main_f_8288c0(void* a0) { return *(uint64_t*)((char*)(a0) + 2368); }

// sub_8288d0  (orig 0x8288d0, getter)
uint64_t main_f_8288d0(void* a0) { return *(uint64_t*)((char*)(a0) + 2400); }

// sub_8288e0  (orig 0x8288e0, getter)
uint64_t main_f_8288e0(void* a0) { return *(uint64_t*)((char*)(a0) + 2432); }

// sub_8288f0  (orig 0x8288f0, getter)
uint64_t main_f_8288f0(void* a0) { return *(uint64_t*)((char*)(a0) + 2464); }

// sub_828900  (orig 0x828900, getter)
uint64_t main_f_828900(void* a0) { return *(uint64_t*)((char*)(a0) + 2496); }

// sub_828910  (orig 0x828910, getter)
uint64_t main_f_828910(void* a0) { return *(uint64_t*)((char*)(a0) + 2528); }

// sub_828920  (orig 0x828920, getter)
uint64_t main_f_828920(void* a0) { return *(uint64_t*)((char*)(a0) + 2560); }

// sub_828930  (orig 0x828930, getter)
uint64_t main_f_828930(void* a0) { return *(uint64_t*)((char*)(a0) + 2592); }

// sub_828940  (orig 0x828940, getter)
uint64_t main_f_828940(void* a0) { return *(uint64_t*)((char*)(a0) + 2624); }

// sub_828950  (orig 0x828950, getter)
uint64_t main_f_828950(void* a0) { return *(uint64_t*)((char*)(a0) + 2656); }

// sub_828960  (orig 0x828960, getter)
uint64_t main_f_828960(void* a0) { return *(uint64_t*)((char*)(a0) + 2688); }

// sub_828970  (orig 0x828970, getter)
uint64_t main_f_828970(void* a0) { return *(uint64_t*)((char*)(a0) + 2720); }

// sub_828980  (orig 0x828980, getter)
uint64_t main_f_828980(void* a0) { return *(uint64_t*)((char*)(a0) + 2752); }

// sub_828990  (orig 0x828990, getter)
uint64_t main_f_828990(void* a0) { return *(uint64_t*)((char*)(a0) + 2816); }

// sub_8289a0  (orig 0x8289a0, getter)
uint64_t main_f_8289a0(void* a0) { return *(uint64_t*)((char*)(a0) + 2848); }

// sub_8289b0  (orig 0x8289b0, getter)
uint64_t main_f_8289b0(void* a0) { return *(uint64_t*)((char*)(a0) + 2880); }

// sub_8289c0  (orig 0x8289c0, getter)
uint64_t main_f_8289c0(void* a0) { return *(uint64_t*)((char*)(a0) + 2912); }

// sub_8289d0  (orig 0x8289d0, getter)
uint64_t main_f_8289d0(void* a0) { return *(uint64_t*)((char*)(a0) + 2944); }

// sub_8289e0  (orig 0x8289e0, getter)
uint64_t main_f_8289e0(void* a0) { return *(uint64_t*)((char*)(a0) + 2976); }

// sub_8289f0  (orig 0x8289f0, getter)
uint64_t main_f_8289f0(void* a0) { return *(uint64_t*)((char*)(a0) + 3008); }

// sub_828a00  (orig 0x828a00, getter)
uint64_t main_f_828a00(void* a0) { return *(uint64_t*)((char*)(a0) + 3040); }

// sub_828a10  (orig 0x828a10, getter)
uint64_t main_f_828a10(void* a0) { return *(uint64_t*)((char*)(a0) + 3072); }

// sub_828a20  (orig 0x828a20, getter)
uint64_t main_f_828a20(void* a0) { return *(uint64_t*)((char*)(a0) + 3104); }

// sub_828a30  (orig 0x828a30, getter)
uint64_t main_f_828a30(void* a0) { return *(uint64_t*)((char*)(a0) + 3136); }

// sub_828a40  (orig 0x828a40, getter)
uint64_t main_f_828a40(void* a0) { return *(uint64_t*)((char*)(a0) + 3168); }

// sub_828a50  (orig 0x828a50, getter)
uint64_t main_f_828a50(void* a0) { return *(uint64_t*)((char*)(a0) + 3232); }

// sub_828a60  (orig 0x828a60, getter)
uint64_t main_f_828a60(void* a0) { return *(uint64_t*)((char*)(a0) + 3264); }

// sub_828a70  (orig 0x828a70, getter)
uint64_t main_f_828a70(void* a0) { return *(uint64_t*)((char*)(a0) + 3296); }

// sub_828a80  (orig 0x828a80, getter)
uint64_t main_f_828a80(void* a0) { return *(uint64_t*)((char*)(a0) + 3328); }

// sub_828a90  (orig 0x828a90, getter)
uint64_t main_f_828a90(void* a0) { return *(uint64_t*)((char*)(a0) + 3360); }

// sub_828aa0  (orig 0x828aa0, getter)
uint64_t main_f_828aa0(void* a0) { return *(uint64_t*)((char*)(a0) + 3392); }

// sub_828ab0  (orig 0x828ab0, getter)
uint64_t main_f_828ab0(void* a0) { return *(uint64_t*)((char*)(a0) + 3424); }

// sub_828ac0  (orig 0x828ac0, getter)
uint64_t main_f_828ac0(void* a0) { return *(uint64_t*)((char*)(a0) + 3456); }

// sub_828ad0  (orig 0x828ad0, getter)
uint64_t main_f_828ad0(void* a0) { return *(uint64_t*)((char*)(a0) + 3488); }

// sub_828ae0  (orig 0x828ae0, getter)
uint64_t main_f_828ae0(void* a0) { return *(uint64_t*)((char*)(a0) + 3520); }

// sub_828af0  (orig 0x828af0, getter)
uint64_t main_f_828af0(void* a0) { return *(uint64_t*)((char*)(a0) + 3552); }

// sub_828b00  (orig 0x828b00, getter)
uint64_t main_f_828b00(void* a0) { return *(uint64_t*)((char*)(a0) + 3584); }

// sub_828b10  (orig 0x828b10, getter)
uint64_t main_f_828b10(void* a0) { return *(uint64_t*)((char*)(a0) + 3616); }

// sub_828b20  (orig 0x828b20, getter)
uint64_t main_f_828b20(void* a0) { return *(uint64_t*)((char*)(a0) + 3648); }

// sub_828b30  (orig 0x828b30, getter)
uint64_t main_f_828b30(void* a0) { return *(uint64_t*)((char*)(a0) + 3680); }

// sub_828b40  (orig 0x828b40, getter)
uint64_t main_f_828b40(void* a0) { return *(uint64_t*)((char*)(a0) + 3712); }

// sub_828b50  (orig 0x828b50, getter)
uint64_t main_f_828b50(void* a0) { return *(uint64_t*)((char*)(a0) + 3744); }

// sub_828b60  (orig 0x828b60, getter)
uint64_t main_f_828b60(void* a0) { return *(uint64_t*)((char*)(a0) + 3776); }

// sub_828b70  (orig 0x828b70, getter)
uint64_t main_f_828b70(void* a0) { return *(uint64_t*)((char*)(a0) + 3808); }

// sub_828b80  (orig 0x828b80, getter)
uint64_t main_f_828b80(void* a0) { return *(uint64_t*)((char*)(a0) + 3840); }

// sub_828b90  (orig 0x828b90, getter)
uint64_t main_f_828b90(void* a0) { return *(uint64_t*)((char*)(a0) + 3872); }

// sub_828ba0  (orig 0x828ba0, getter)
uint64_t main_f_828ba0(void* a0) { return *(uint64_t*)((char*)(a0) + 3904); }

// sub_828bb0  (orig 0x828bb0, getter)
uint64_t main_f_828bb0(void* a0) { return *(uint64_t*)((char*)(a0) + 3936); }

// sub_828bc0  (orig 0x828bc0, getter)
uint64_t main_f_828bc0(void* a0) { return *(uint64_t*)((char*)(a0) + 3968); }

// sub_828bd0  (orig 0x828bd0, getter)
uint64_t main_f_828bd0(void* a0) { return *(uint64_t*)((char*)(a0) + 4000); }

// sub_828be0  (orig 0x828be0, getter)
uint64_t main_f_828be0(void* a0) { return *(uint64_t*)((char*)(a0) + 4032); }

// sub_828bf0  (orig 0x828bf0, getter)
uint64_t main_f_828bf0(void* a0) { return *(uint64_t*)((char*)(a0) + 4064); }

// sub_828c00  (orig 0x828c00, getter)
uint64_t main_f_828c00(void* a0) { return *(uint64_t*)((char*)(a0) + 4096L); }

// sub_828c10  (orig 0x828c10, getter)
uint64_t main_f_828c10(void* a0) { return *(uint64_t*)((char*)(a0) + 4128L); }

// sub_828c20  (orig 0x828c20, getter)
uint64_t main_f_828c20(void* a0) { return *(uint64_t*)((char*)(a0) + 4160L); }

// sub_828c30  (orig 0x828c30, getter)
uint64_t main_f_828c30(void* a0) { return *(uint64_t*)((char*)(a0) + 4192L); }

// sub_828c40  (orig 0x828c40, getter)
uint64_t main_f_828c40(void* a0) { return *(uint64_t*)((char*)(a0) + 4224L); }

// sub_828c50  (orig 0x828c50, getter)
uint64_t main_f_828c50(void* a0) { return *(uint64_t*)((char*)(a0) + 4256L); }

// sub_828c60  (orig 0x828c60, getter)
uint64_t main_f_828c60(void* a0) { return *(uint64_t*)((char*)(a0) + 4288L); }

// sub_828c70  (orig 0x828c70, getter)
uint64_t main_f_828c70(void* a0) { return *(uint64_t*)((char*)(a0) + 4320L); }

// sub_828c80  (orig 0x828c80, getter)
uint64_t main_f_828c80(void* a0) { return *(uint64_t*)((char*)(a0) + 4352L); }

// sub_828c90  (orig 0x828c90, getter)
uint64_t main_f_828c90(void* a0) { return *(uint64_t*)((char*)(a0) + 4384L); }

// sub_828ca0  (orig 0x828ca0, getter)
uint64_t main_f_828ca0(void* a0) { return *(uint64_t*)((char*)(a0) + 4416L); }

// sub_828cb0  (orig 0x828cb0, getter)
uint64_t main_f_828cb0(void* a0) { return *(uint64_t*)((char*)(a0) + 4448L); }

// sub_828cc0  (orig 0x828cc0, getter)
uint64_t main_f_828cc0(void* a0) { return *(uint64_t*)((char*)(a0) + 4480L); }

// sub_828cd0  (orig 0x828cd0, getter)
uint64_t main_f_828cd0(void* a0) { return *(uint64_t*)((char*)(a0) + 4512L); }

// sub_828ce0  (orig 0x828ce0, getter)
uint64_t main_f_828ce0(void* a0) { return *(uint64_t*)((char*)(a0) + 4544L); }

// sub_828cf0  (orig 0x828cf0, getter)
uint64_t main_f_828cf0(void* a0) { return *(uint64_t*)((char*)(a0) + 4576L); }

// sub_828d00  (orig 0x828d00, getter)
uint64_t main_f_828d00(void* a0) { return *(uint64_t*)((char*)(a0) + 4608L); }

// sub_828d10  (orig 0x828d10, getter)
uint64_t main_f_828d10(void* a0) { return *(uint64_t*)((char*)(a0) + 4640L); }

// sub_828d20  (orig 0x828d20, getter)
uint64_t main_f_828d20(void* a0) { return *(uint64_t*)((char*)(a0) + 4672L); }

// sub_828d30  (orig 0x828d30, getter)
uint64_t main_f_828d30(void* a0) { return *(uint64_t*)((char*)(a0) + 4704L); }

// sub_828d40  (orig 0x828d40, getter)
uint64_t main_f_828d40(void* a0) { return *(uint64_t*)((char*)(a0) + 4768L); }

// sub_828d50  (orig 0x828d50, getter)
uint64_t main_f_828d50(void* a0) { return *(uint64_t*)((char*)(a0) + 4800L); }

// sub_828d60  (orig 0x828d60, getter)
uint64_t main_f_828d60(void* a0) { return *(uint64_t*)((char*)(a0) + 4864L); }

// sub_828d70  (orig 0x828d70, getter)
uint64_t main_f_828d70(void* a0) { return *(uint64_t*)((char*)(a0) + 4896L); }

// sub_828d80  (orig 0x828d80, getter)
uint64_t main_f_828d80(void* a0) { return *(uint64_t*)((char*)(a0) + 4928L); }

// sub_828d90  (orig 0x828d90, getter)
uint64_t main_f_828d90(void* a0) { return *(uint64_t*)((char*)(a0) + 4960L); }

// sub_828da0  (orig 0x828da0, getter)
uint64_t main_f_828da0(void* a0) { return *(uint64_t*)((char*)(a0) + 4992L); }

// sub_828db0  (orig 0x828db0, getter)
uint64_t main_f_828db0(void* a0) { return *(uint64_t*)((char*)(a0) + 5024L); }

// sub_828dc0  (orig 0x828dc0, getter)
uint64_t main_f_828dc0(void* a0) { return *(uint64_t*)((char*)(a0) + 5056L); }

// sub_828dd0  (orig 0x828dd0, getter)
uint64_t main_f_828dd0(void* a0) { return *(uint64_t*)((char*)(a0) + 5088L); }

// sub_828de0  (orig 0x828de0, getter)
uint64_t main_f_828de0(void* a0) { return *(uint64_t*)((char*)(a0) + 5120L); }

// sub_828df0  (orig 0x828df0, getter)
uint64_t main_f_828df0(void* a0) { return *(uint64_t*)((char*)(a0) + 5152L); }

// sub_828e00  (orig 0x828e00, getter)
uint64_t main_f_828e00(void* a0) { return *(uint64_t*)((char*)(a0) + 5184L); }

// sub_828e10  (orig 0x828e10, getter)
uint64_t main_f_828e10(void* a0) { return *(uint64_t*)((char*)(a0) + 5216L); }

// sub_828e20  (orig 0x828e20, getter)
uint64_t main_f_828e20(void* a0) { return *(uint64_t*)((char*)(a0) + 5248L); }

// sub_828e30  (orig 0x828e30, getter)
uint64_t main_f_828e30(void* a0) { return *(uint64_t*)((char*)(a0) + 5280L); }

// sub_828e40  (orig 0x828e40, getter)
uint64_t main_f_828e40(void* a0) { return *(uint64_t*)((char*)(a0) + 5312L); }

// sub_828e50  (orig 0x828e50, getter)
uint64_t main_f_828e50(void* a0) { return *(uint64_t*)((char*)(a0) + 5344L); }

// sub_828e60  (orig 0x828e60, getter)
uint64_t main_f_828e60(void* a0) { return *(uint64_t*)((char*)(a0) + 5376L); }

// sub_828e70  (orig 0x828e70, getter)
uint64_t main_f_828e70(void* a0) { return *(uint64_t*)((char*)(a0) + 5408L); }

// sub_828e80  (orig 0x828e80, getter)
uint64_t main_f_828e80(void* a0) { return *(uint64_t*)((char*)(a0) + 5440L); }

// sub_828e90  (orig 0x828e90, getter)
uint64_t main_f_828e90(void* a0) { return *(uint64_t*)((char*)(a0) + 5472L); }

// sub_828ea0  (orig 0x828ea0, getter)
uint64_t main_f_828ea0(void* a0) { return *(uint64_t*)((char*)(a0) + 5504L); }

// sub_828eb0  (orig 0x828eb0, getter)
uint64_t main_f_828eb0(void* a0) { return *(uint64_t*)((char*)(a0) + 5536L); }

// sub_828ec0  (orig 0x828ec0, getter)
uint64_t main_f_828ec0(void* a0) { return *(uint64_t*)((char*)(a0) + 5568L); }

// sub_828ed0  (orig 0x828ed0, getter)
uint64_t main_f_828ed0(void* a0) { return *(uint64_t*)((char*)(a0) + 5600L); }

// sub_828ee0  (orig 0x828ee0, getter)
uint64_t main_f_828ee0(void* a0) { return *(uint64_t*)((char*)(a0) + 5632L); }

// sub_828ef0  (orig 0x828ef0, getter)
uint64_t main_f_828ef0(void* a0) { return *(uint64_t*)((char*)(a0) + 5696L); }

// sub_828f00  (orig 0x828f00, getter)
uint64_t main_f_828f00(void* a0) { return *(uint64_t*)((char*)(a0) + 5728L); }

// sub_828f10  (orig 0x828f10, getter)
uint64_t main_f_828f10(void* a0) { return *(uint64_t*)((char*)(a0) + 5760L); }

// sub_828f20  (orig 0x828f20, getter)
uint64_t main_f_828f20(void* a0) { return *(uint64_t*)((char*)(a0) + 5792L); }

// sub_828f30  (orig 0x828f30, getter)
uint64_t main_f_828f30(void* a0) { return *(uint64_t*)((char*)(a0) + 5824L); }

// sub_828f40  (orig 0x828f40, getter)
uint64_t main_f_828f40(void* a0) { return *(uint64_t*)((char*)(a0) + 5856L); }

// sub_828f50  (orig 0x828f50, getter)
uint64_t main_f_828f50(void* a0) { return *(uint64_t*)((char*)(a0) + 5888L); }

// sub_828f60  (orig 0x828f60, getter)
uint64_t main_f_828f60(void* a0) { return *(uint64_t*)((char*)(a0) + 5920L); }

// sub_828f70  (orig 0x828f70, getter)
uint64_t main_f_828f70(void* a0) { return *(uint64_t*)((char*)(a0) + 5952L); }

// sub_828f80  (orig 0x828f80, getter)
uint64_t main_f_828f80(void* a0) { return *(uint64_t*)((char*)(a0) + 5984L); }

// sub_828f90  (orig 0x828f90, getter)
uint64_t main_f_828f90(void* a0) { return *(uint64_t*)((char*)(a0) + 6016L); }

// sub_828fa0  (orig 0x828fa0, getter)
uint64_t main_f_828fa0(void* a0) { return *(uint64_t*)((char*)(a0) + 6048L); }

// sub_828fb0  (orig 0x828fb0, getter)
uint64_t main_f_828fb0(void* a0) { return *(uint64_t*)((char*)(a0) + 6080L); }

// sub_828fc0  (orig 0x828fc0, getter)
uint64_t main_f_828fc0(void* a0) { return *(uint64_t*)((char*)(a0) + 6112L); }

// sub_828fd0  (orig 0x828fd0, getter)
uint64_t main_f_828fd0(void* a0) { return *(uint64_t*)((char*)(a0) + 6144L); }

// sub_828fe0  (orig 0x828fe0, getter)
uint64_t main_f_828fe0(void* a0) { return *(uint64_t*)((char*)(a0) + 6176L); }

// sub_828ff0  (orig 0x828ff0, getter)
uint64_t main_f_828ff0(void* a0) { return *(uint64_t*)((char*)(a0) + 6208L); }

// sub_829000  (orig 0x829000, getter)
uint64_t main_f_829000(void* a0) { return *(uint64_t*)((char*)(a0) + 6240L); }

// sub_829010  (orig 0x829010, getter)
uint64_t main_f_829010(void* a0) { return *(uint64_t*)((char*)(a0) + 6272L); }

// sub_829020  (orig 0x829020, getter)
uint64_t main_f_829020(void* a0) { return *(uint64_t*)((char*)(a0) + 6304L); }

// sub_829030  (orig 0x829030, getter)
uint64_t main_f_829030(void* a0) { return *(uint64_t*)((char*)(a0) + 6336L); }

// sub_829040  (orig 0x829040, getter)
uint64_t main_f_829040(void* a0) { return *(uint64_t*)((char*)(a0) + 6368L); }

// sub_829050  (orig 0x829050, getter)
uint64_t main_f_829050(void* a0) { return *(uint64_t*)((char*)(a0) + 6400L); }

// sub_829060  (orig 0x829060, getter)
uint64_t main_f_829060(void* a0) { return *(uint64_t*)((char*)(a0) + 6432L); }

// sub_829070  (orig 0x829070, getter)
uint64_t main_f_829070(void* a0) { return *(uint64_t*)((char*)(a0) + 6464L); }

// sub_829080  (orig 0x829080, getter)
uint64_t main_f_829080(void* a0) { return *(uint64_t*)((char*)(a0) + 6496L); }

// sub_829090  (orig 0x829090, getter)
uint64_t main_f_829090(void* a0) { return *(uint64_t*)((char*)(a0) + 6528L); }

// sub_8290a0  (orig 0x8290a0, getter)
uint64_t main_f_8290a0(void* a0) { return *(uint64_t*)((char*)(a0) + 6560L); }

// sub_8290b0  (orig 0x8290b0, getter)
uint64_t main_f_8290b0(void* a0) { return *(uint64_t*)((char*)(a0) + 6592L); }

// sub_8290c0  (orig 0x8290c0, getter)
uint64_t main_f_8290c0(void* a0) { return *(uint64_t*)((char*)(a0) + 6624L); }

// sub_8290d0  (orig 0x8290d0, getter)
uint64_t main_f_8290d0(void* a0) { return *(uint64_t*)((char*)(a0) + 6656L); }

// sub_8290e0  (orig 0x8290e0, getter)
uint64_t main_f_8290e0(void* a0) { return *(uint64_t*)((char*)(a0) + 6688L); }

// sub_8290f0  (orig 0x8290f0, getter)
uint64_t main_f_8290f0(void* a0) { return *(uint64_t*)((char*)(a0) + 6720L); }

// sub_829100  (orig 0x829100, getter)
uint64_t main_f_829100(void* a0) { return *(uint64_t*)((char*)(a0) + 6752L); }

// sub_829110  (orig 0x829110, getter)
uint64_t main_f_829110(void* a0) { return *(uint64_t*)((char*)(a0) + 6784L); }

// sub_829120  (orig 0x829120, getter)
uint64_t main_f_829120(void* a0) { return *(uint64_t*)((char*)(a0) + 6816L); }

// sub_829130  (orig 0x829130, getter)
uint64_t main_f_829130(void* a0) { return *(uint64_t*)((char*)(a0) + 6848L); }

// sub_829140  (orig 0x829140, getter)
uint64_t main_f_829140(void* a0) { return *(uint64_t*)((char*)(a0) + 6880L); }

// sub_829150  (orig 0x829150, getter)
uint64_t main_f_829150(void* a0) { return *(uint64_t*)((char*)(a0) + 6912L); }

// sub_829160  (orig 0x829160, getter)
uint64_t main_f_829160(void* a0) { return *(uint64_t*)((char*)(a0) + 6944L); }

// sub_829170  (orig 0x829170, getter)
uint64_t main_f_829170(void* a0) { return *(uint64_t*)((char*)(a0) + 6976L); }

// sub_829180  (orig 0x829180, getter)
uint64_t main_f_829180(void* a0) { return *(uint64_t*)((char*)(a0) + 7008L); }

// sub_829190  (orig 0x829190, getter)
uint64_t main_f_829190(void* a0) { return *(uint64_t*)((char*)(a0) + 7040L); }

// sub_8291a0  (orig 0x8291a0, getter)
uint64_t main_f_8291a0(void* a0) { return *(uint64_t*)((char*)(a0) + 7072L); }

// sub_8291b0  (orig 0x8291b0, getter)
uint64_t main_f_8291b0(void* a0) { return *(uint64_t*)((char*)(a0) + 7104L); }

// sub_8291c0  (orig 0x8291c0, getter)
uint64_t main_f_8291c0(void* a0) { return *(uint64_t*)((char*)(a0) + 7136L); }

// sub_8291d0  (orig 0x8291d0, getter)
uint64_t main_f_8291d0(void* a0) { return *(uint64_t*)((char*)(a0) + 7200L); }

// sub_8291e0  (orig 0x8291e0, getter)
uint64_t main_f_8291e0(void* a0) { return *(uint64_t*)((char*)(a0) + 7232L); }

// sub_8291f0  (orig 0x8291f0, getter)
uint64_t main_f_8291f0(void* a0) { return *(uint64_t*)((char*)(a0) + 7264L); }

// sub_829200  (orig 0x829200, getter)
uint64_t main_f_829200(void* a0) { return *(uint64_t*)((char*)(a0) + 7296L); }

// sub_829210  (orig 0x829210, getter)
uint64_t main_f_829210(void* a0) { return *(uint64_t*)((char*)(a0) + 7328L); }

// sub_829220  (orig 0x829220, getter)
uint64_t main_f_829220(void* a0) { return *(uint64_t*)((char*)(a0) + 7360L); }

// sub_829230  (orig 0x829230, getter)
uint64_t main_f_829230(void* a0) { return *(uint64_t*)((char*)(a0) + 7392L); }

// sub_829240  (orig 0x829240, getter)
uint64_t main_f_829240(void* a0) { return *(uint64_t*)((char*)(a0) + 7424L); }

// sub_829250  (orig 0x829250, getter)
uint64_t main_f_829250(void* a0) { return *(uint64_t*)((char*)(a0) + 7456L); }

// sub_829260  (orig 0x829260, getter)
uint64_t main_f_829260(void* a0) { return *(uint64_t*)((char*)(a0) + 7488L); }

// sub_829270  (orig 0x829270, getter)
uint64_t main_f_829270(void* a0) { return *(uint64_t*)((char*)(a0) + 7520L); }

// sub_829280  (orig 0x829280, getter)
uint64_t main_f_829280(void* a0) { return *(uint64_t*)((char*)(a0) + 7552L); }

// sub_829290  (orig 0x829290, getter)
uint64_t main_f_829290(void* a0) { return *(uint64_t*)((char*)(a0) + 7584L); }

// sub_8292a0  (orig 0x8292a0, getter)
uint64_t main_f_8292a0(void* a0) { return *(uint64_t*)((char*)(a0) + 7616L); }

// sub_8293f0  (orig 0x8293f0, tailcall)
void main_f_8293f0() { main::sub_ce0(); }

// sub_829c70  (orig 0x829c70, tailcall)
void main_f_829c70() { main::sub_ce0(); }

// sub_829d50  (orig 0x829d50, ret_only)
void main_f_829d50() {}

// sub_829d60  (orig 0x829d60, tailcall)
void main_f_829d60() { main::sub_ce0(); }

// sub_82a1e0  (orig 0x82a1e0, tailcall)
void main_f_82a1e0() { main::sub_ce0(); }

// sub_82a6d0  (orig 0x82a6d0, tailcall)
void main_f_82a6d0() { main::sub_ce0(); }

// sub_82a8a0  (orig 0x82a8a0, tailcall)
void main_f_82a8a0() { main::sub_ce0(); }

// sub_82a9b0  (orig 0x82a9b0, getter)
uint64_t main_f_82a9b0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_82a9c0  (orig 0x82a9c0, getter)
uint64_t main_f_82a9c0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_82a9d0  (orig 0x82a9d0, getter)
uint64_t main_f_82a9d0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_82a9e0  (orig 0x82a9e0, getter)
uint64_t main_f_82a9e0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_82a9f0  (orig 0x82a9f0, getter)
uint64_t main_f_82a9f0(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_82aa00  (orig 0x82aa00, getter)
uint64_t main_f_82aa00(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_82aa10  (orig 0x82aa10, getter)
uint64_t main_f_82aa10(void* a0) { return *(uint64_t*)((char*)(a0) + 56); }

// sub_82aa20  (orig 0x82aa20, getter)
uint64_t main_f_82aa20(void* a0) { return *(uint64_t*)((char*)(a0) + 64); }

// sub_82aa50  (orig 0x82aa50, getter)
uint64_t main_f_82aa50(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_82aa60  (orig 0x82aa60, getter)
uint64_t main_f_82aa60(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_82aa70  (orig 0x82aa70, getter)
uint64_t main_f_82aa70(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_82aa80  (orig 0x82aa80, getter)
uint64_t main_f_82aa80(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_82ae70  (orig 0x82ae70, tailcall)
void main_f_82ae70() { main::sub_ce0(); }

// sub_82b070  (orig 0x82b070, ret_only)
void main_f_82b070() {}

// sub_82b080  (orig 0x82b080, tailcall)
void main_f_82b080() { main::sub_ce0(); }

// sub_82b0d0  (orig 0x82b0d0, getter)
uint8_t main_f_82b0d0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_82b4e0  (orig 0x82b4e0, setter)
void main_f_82b4e0(void* a0) { *(uint64_t*)((char*)(a0) + 200) = 0; }

// sub_82b4f0  (orig 0x82b4f0, getter)
uint64_t main_f_82b4f0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_82b500  (orig 0x82b500, getter)
uint64_t main_f_82b500(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_82b510  (orig 0x82b510, getter)
uint64_t main_f_82b510(void* a0) { return *(uint64_t*)((char*)(a0) + 72); }

// sub_82b520  (orig 0x82b520, getter)
uint64_t main_f_82b520(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_82b530  (orig 0x82b530, getter)
uint8_t main_f_82b530(void* a0) { return *(uint8_t*)((char*)(a0) + 196); }

// sub_82b550  (orig 0x82b550, setter)
void main_f_82b550(void* a0) { *(uint8_t*)((char*)(a0) + 196) = 0; }

// sub_82b780  (orig 0x82b780, setter)
void main_f_82b780(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_82b790  (orig 0x82b790, setter)
void main_f_82b790(void* a0) { *(uint8_t*)((char*)(a0)) = 0; }

// sub_82b7a0  (orig 0x82b7a0, setter)
void main_f_82b7a0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0)) = a1; }

// sub_82b7c0  (orig 0x82b7c0, compare)
bool main_f_82b7c0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_82b7d0  (orig 0x82b7d0, getter)
uint8_t main_f_82b7d0(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_82b810  (orig 0x82b810, ret_only)
void main_f_82b810() {}

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

// sub_82cca0  (orig 0x82cca0, setter)
void main_f_82cca0(void* a0) { *(uint8_t*)((char*)(a0) + 2888) = 0; }

// sub_82ccb0  (orig 0x82ccb0, getter)
uint8_t main_f_82ccb0(void* a0) { return *(uint8_t*)((char*)(a0) + 2888); }

// sub_82d5d0  (orig 0x82d5d0, ret_only)
void main_f_82d5d0() {}

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

// sub_82f800  (orig 0x82f800, ret_only)
void main_f_82f800() {}

// sub_82f830  (orig 0x82f830, setter)
void main_f_82f830(void* a0) { *(uint8_t*)((char*)(a0) + 24) = 0; }

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

// sub_831000  (orig 0x831000, ret_only)
void main_f_831000() {}

// sub_831010  (orig 0x831010, tailcall)
void main_f_831010() { main::sub_ce0(); }

// sub_831020  (orig 0x831020, straight)
void main_f_831020(void* a0) {
    *(uint32_t*)((char*)(a0)) = -1;
}

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

// sub_837350  (orig 0x837350, setter-chain)
void main_f_837350(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_8384b0  (orig 0x8384b0, getter)
uint64_t main_f_8384b0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_8384c0  (orig 0x8384c0, getter)
uint64_t main_f_8384c0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_8384d0  (orig 0x8384d0, getter)
uint64_t main_f_8384d0(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_8384e0  (orig 0x8384e0, getter)
uint8_t main_f_8384e0(void* a0) { return *(uint8_t*)((char*)(a0) + 48); }

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

// sub_8470a0  (orig 0x8470a0, ret_only)
void main_f_8470a0() {}

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

// sub_84f130  (orig 0x84f130, setter-chain)
void main_f_84f130(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; *(uint16_t*)((char*)(a0) + 12) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; }

// sub_84f140  (orig 0x84f140, setter)
void main_f_84f140(void* a0) { *(uint8_t*)((char*)(a0) + 13) = 0; }

// sub_84f450  (orig 0x84f450, compare)
bool main_f_84f450(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 13)) != (uint64_t)(0); }

// sub_84f560  (orig 0x84f560, getter)
uint8_t main_f_84f560(void* a0) { return *(uint8_t*)((char*)(a0) + 13); }

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

// sub_8504f0  (orig 0x8504f0, straight)
void main_f_8504f0(void* a0) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(33267);
}

// sub_850560  (orig 0x850560, setter)
void main_f_850560(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

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

// sub_857960  (orig 0x857960, strlit-flag-ret)
void *main_f_857960(void* a0) { static char g_f_857960[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_857960; }

// sub_857980  (orig 0x857980, strlit-flag-ret)
void *main_f_857980(void* a0) { static char g_f_857980[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_857980; }

// sub_8579a0  (orig 0x8579a0, strlit-flag-ret)
void *main_f_8579a0(void* a0) { static char g_f_8579a0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_8579a0; }

// sub_8579c0  (orig 0x8579c0, strlit-flag-ret)
void *main_f_8579c0(void* a0) { static char g_f_8579c0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_8579c0; }

// sub_8579e0  (orig 0x8579e0, strlit-flag-ret)
void *main_f_8579e0(void* a0) { static char g_f_8579e0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_8579e0; }

// sub_857a00  (orig 0x857a00, strlit-flag-ret)
void *main_f_857a00(void* a0) { static char g_f_857a00[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_857a00; }

// sub_857a20  (orig 0x857a20, strlit-flag-ret)
void *main_f_857a20(void* a0) { static char g_f_857a20[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_857a20; }

// sub_857a40  (orig 0x857a40, strlit-flag-ret)
void *main_f_857a40(void* a0) { static char g_f_857a40[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_857a40; }

// sub_857a60  (orig 0x857a60, strlit-flag-ret)
void *main_f_857a60(void* a0) { static char g_f_857a60[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857a60; }

// sub_857a80  (orig 0x857a80, strlit-flag-ret)
void *main_f_857a80(void* a0) { static char g_f_857a80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857a80; }

// sub_857aa0  (orig 0x857aa0, strlit-flag-ret)
void *main_f_857aa0(void* a0) { static char g_f_857aa0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857aa0; }

// sub_857ac0  (orig 0x857ac0, strlit-flag-ret)
void *main_f_857ac0(void* a0) { static char g_f_857ac0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857ac0; }

// sub_857ae0  (orig 0x857ae0, strlit-flag-ret)
void *main_f_857ae0(void* a0) { static char g_f_857ae0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857ae0; }

// sub_857b00  (orig 0x857b00, strlit-flag-ret)
void *main_f_857b00(void* a0) { static char g_f_857b00[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857b00; }

// sub_857b20  (orig 0x857b20, strlit-flag-ret)
void *main_f_857b20(void* a0) { static char g_f_857b20[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857b20; }

// sub_857b40  (orig 0x857b40, strlit-flag-ret)
void *main_f_857b40(void* a0) { static char g_f_857b40[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857b40; }

// sub_857b60  (orig 0x857b60, strlit-flag-ret)
void *main_f_857b60(void* a0) { static char g_f_857b60[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857b60; }

// sub_857b80  (orig 0x857b80, strlit-flag-ret)
void *main_f_857b80(void* a0) { static char g_f_857b80[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857b80; }

// sub_857ba0  (orig 0x857ba0, strlit-flag-ret)
void *main_f_857ba0(void* a0) { static char g_f_857ba0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857ba0; }

// sub_857bc0  (orig 0x857bc0, strlit-flag-ret)
void *main_f_857bc0(void* a0) { static char g_f_857bc0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857bc0; }

// sub_857be0  (orig 0x857be0, strlit-flag-ret)
void *main_f_857be0(void* a0) { static char g_f_857be0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857be0; }

// sub_857c00  (orig 0x857c00, strlit-flag-ret)
void *main_f_857c00(void* a0) { static char g_f_857c00[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857c00; }

// sub_857c20  (orig 0x857c20, strlit-flag-ret)
void *main_f_857c20(void* a0) { static char g_f_857c20[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857c20; }

// sub_857c40  (orig 0x857c40, strlit-flag-ret)
void *main_f_857c40(void* a0) { static char g_f_857c40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857c40; }

// sub_857c60  (orig 0x857c60, strlit-flag-ret)
void *main_f_857c60(void* a0) { static char g_f_857c60[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857c60; }

// sub_857c80  (orig 0x857c80, strlit-flag-ret)
void *main_f_857c80(void* a0) { static char g_f_857c80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857c80; }

// sub_857ca0  (orig 0x857ca0, strlit-flag-ret)
void *main_f_857ca0(void* a0) { static char g_f_857ca0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857ca0; }

// sub_857cc0  (orig 0x857cc0, strlit-flag-ret)
void *main_f_857cc0(void* a0) { static char g_f_857cc0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857cc0; }

// sub_857ce0  (orig 0x857ce0, strlit-flag-ret)
void *main_f_857ce0(void* a0) { static char g_f_857ce0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857ce0; }

// sub_857d00  (orig 0x857d00, strlit-flag-ret)
void *main_f_857d00(void* a0) { static char g_f_857d00[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857d00; }

// sub_857d20  (orig 0x857d20, strlit-flag-ret)
void *main_f_857d20(void* a0) { static char g_f_857d20[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857d20; }

// sub_857d40  (orig 0x857d40, strlit-flag-ret)
void *main_f_857d40(void* a0) { static char g_f_857d40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857d40; }

// sub_857d60  (orig 0x857d60, strlit-flag-ret)
void *main_f_857d60(void* a0) { static char g_f_857d60[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857d60; }

// sub_857d80  (orig 0x857d80, strlit-flag-ret)
void *main_f_857d80(void* a0) { static char g_f_857d80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857d80; }

// sub_857da0  (orig 0x857da0, strlit-flag-ret)
void *main_f_857da0(void* a0) { static char g_f_857da0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857da0; }

// sub_857dc0  (orig 0x857dc0, strlit-flag-ret)
void *main_f_857dc0(void* a0) { static char g_f_857dc0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857dc0; }

// sub_857de0  (orig 0x857de0, strlit-flag-ret)
void *main_f_857de0(void* a0) { static char g_f_857de0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857de0; }

// sub_857e00  (orig 0x857e00, strlit-flag-ret)
void *main_f_857e00(void* a0) { static char g_f_857e00[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857e00; }

// sub_857e20  (orig 0x857e20, strlit-flag-ret)
void *main_f_857e20(void* a0) { static char g_f_857e20[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857e20; }

// sub_857e40  (orig 0x857e40, strlit-flag-ret)
void *main_f_857e40(void* a0) { static char g_f_857e40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857e40; }

// sub_857e80  (orig 0x857e80, strlit-flag-ret)
void *main_f_857e80(void* a0) { static char g_f_857e80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857e80; }

// sub_857ea0  (orig 0x857ea0, strlit-flag-ret)
void *main_f_857ea0(void* a0) { static char g_f_857ea0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_857ea0; }

// sub_857ec0  (orig 0x857ec0, strlit-flag-ret)
void *main_f_857ec0(void* a0) { static char g_f_857ec0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857ec0; }

// sub_857ee0  (orig 0x857ee0, strlit-flag-ret)
void *main_f_857ee0(void* a0) { static char g_f_857ee0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857ee0; }

// sub_857f00  (orig 0x857f00, strlit-flag-ret)
void *main_f_857f00(void* a0) { static char g_f_857f00[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_857f00; }

// sub_857f20  (orig 0x857f20, strlit-flag-ret)
void *main_f_857f20(void* a0) { static char g_f_857f20[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_857f20; }

// sub_857f40  (orig 0x857f40, strlit-flag-ret)
void *main_f_857f40(void* a0) { static char g_f_857f40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857f40; }

// sub_857f60  (orig 0x857f60, strlit-flag-ret)
void *main_f_857f60(void* a0) { static char g_f_857f60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_857f60; }

// sub_857f80  (orig 0x857f80, strlit-flag-ret)
void *main_f_857f80(void* a0) { static char g_f_857f80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_857f80; }

// sub_857fa0  (orig 0x857fa0, strlit-flag-ret)
void *main_f_857fa0(void* a0) { static char g_f_857fa0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_857fa0; }

// sub_857fc0  (orig 0x857fc0, strlit-flag-ret)
void *main_f_857fc0(void* a0) { static char g_f_857fc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_857fc0; }

// sub_857fe0  (orig 0x857fe0, strlit-flag-ret)
void *main_f_857fe0(void* a0) { static char g_f_857fe0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_857fe0; }

// sub_858000  (orig 0x858000, strlit-flag-ret)
void *main_f_858000(void* a0) { static char g_f_858000[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858000; }

// sub_858020  (orig 0x858020, strlit-flag-ret)
void *main_f_858020(void* a0) { static char g_f_858020[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858020; }

// sub_858040  (orig 0x858040, strlit-flag-ret)
void *main_f_858040(void* a0) { static char g_f_858040[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858040; }

// sub_858060  (orig 0x858060, strlit-flag-ret)
void *main_f_858060(void* a0) { static char g_f_858060[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858060; }

// sub_858080  (orig 0x858080, strlit-flag-ret)
void *main_f_858080(void* a0) { static char g_f_858080[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858080; }

// sub_8580a0  (orig 0x8580a0, strlit-flag-ret)
void *main_f_8580a0(void* a0) { static char g_f_8580a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8580a0; }

// sub_8580c0  (orig 0x8580c0, strlit-flag-ret)
void *main_f_8580c0(void* a0) { static char g_f_8580c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8580c0; }

// sub_8580e0  (orig 0x8580e0, strlit-flag-ret)
void *main_f_8580e0(void* a0) { static char g_f_8580e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8580e0; }

// sub_858100  (orig 0x858100, strlit-flag-ret)
void *main_f_858100(void* a0) { static char g_f_858100[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858100; }

// sub_858120  (orig 0x858120, strlit-flag-ret)
void *main_f_858120(void* a0) { static char g_f_858120[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858120; }

// sub_858140  (orig 0x858140, strlit-flag-ret)
void *main_f_858140(void* a0) { static char g_f_858140[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858140; }

// sub_858160  (orig 0x858160, strlit-flag-ret)
void *main_f_858160(void* a0) { static char g_f_858160[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858160; }

// sub_858180  (orig 0x858180, strlit-flag-ret)
void *main_f_858180(void* a0) { static char g_f_858180[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858180; }

// sub_8581a0  (orig 0x8581a0, strlit-flag-ret)
void *main_f_8581a0(void* a0) { static char g_f_8581a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8581a0; }

// sub_8581c0  (orig 0x8581c0, strlit-flag-ret)
void *main_f_8581c0(void* a0) { static char g_f_8581c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8581c0; }

// sub_8581e0  (orig 0x8581e0, strlit-flag-ret)
void *main_f_8581e0(void* a0) { static char g_f_8581e0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8581e0; }

// sub_858200  (orig 0x858200, strlit-flag-ret)
void *main_f_858200(void* a0) { static char g_f_858200[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858200; }

// sub_858220  (orig 0x858220, strlit-flag-ret)
void *main_f_858220(void* a0) { static char g_f_858220[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_858220; }

// sub_858240  (orig 0x858240, strlit-flag-ret)
void *main_f_858240(void* a0) { static char g_f_858240[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_858240; }

// sub_858260  (orig 0x858260, strlit-flag-ret)
void *main_f_858260(void* a0) { static char g_f_858260[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858260; }

// sub_858280  (orig 0x858280, strlit-flag-ret)
void *main_f_858280(void* a0) { static char g_f_858280[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858280; }

// sub_8582a0  (orig 0x8582a0, strlit-flag-ret)
void *main_f_8582a0(void* a0) { static char g_f_8582a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8582a0; }

// sub_8582c0  (orig 0x8582c0, strlit-flag-ret)
void *main_f_8582c0(void* a0) { static char g_f_8582c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8582c0; }

// sub_8582e0  (orig 0x8582e0, strlit-flag-ret)
void *main_f_8582e0(void* a0) { static char g_f_8582e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8582e0; }

// sub_858300  (orig 0x858300, strlit-flag-ret)
void *main_f_858300(void* a0) { static char g_f_858300[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858300; }

// sub_858320  (orig 0x858320, strlit-flag-ret)
void *main_f_858320(void* a0) { static char g_f_858320[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858320; }

// sub_858340  (orig 0x858340, strlit-flag-ret)
void *main_f_858340(void* a0) { static char g_f_858340[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858340; }

// sub_858360  (orig 0x858360, strlit-flag-ret)
void *main_f_858360(void* a0) { static char g_f_858360[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858360; }

// sub_858380  (orig 0x858380, strlit-flag-ret)
void *main_f_858380(void* a0) { static char g_f_858380[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858380; }

// sub_8583a0  (orig 0x8583a0, strlit-flag-ret)
void *main_f_8583a0(void* a0) { static char g_f_8583a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8583a0; }

// sub_8583c0  (orig 0x8583c0, strlit-flag-ret)
void *main_f_8583c0(void* a0) { static char g_f_8583c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8583c0; }

// sub_8583e0  (orig 0x8583e0, strlit-flag-ret)
void *main_f_8583e0(void* a0) { static char g_f_8583e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8583e0; }

// sub_858400  (orig 0x858400, strlit-flag-ret)
void *main_f_858400(void* a0) { static char g_f_858400[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858400; }

// sub_858420  (orig 0x858420, strlit-flag-ret)
void *main_f_858420(void* a0) { static char g_f_858420[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858420; }

// sub_858440  (orig 0x858440, strlit-flag-ret)
void *main_f_858440(void* a0) { static char g_f_858440[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858440; }

// sub_858460  (orig 0x858460, strlit-flag-ret)
void *main_f_858460(void* a0) { static char g_f_858460[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858460; }

// sub_858480  (orig 0x858480, strlit-flag-ret)
void *main_f_858480(void* a0) { static char g_f_858480[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858480; }

// sub_8584a0  (orig 0x8584a0, strlit-flag-ret)
void *main_f_8584a0(void* a0) { static char g_f_8584a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8584a0; }

// sub_8584c0  (orig 0x8584c0, strlit-flag-ret)
void *main_f_8584c0(void* a0) { static char g_f_8584c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8584c0; }

// sub_8584e0  (orig 0x8584e0, strlit-flag-ret)
void *main_f_8584e0(void* a0) { static char g_f_8584e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8584e0; }

// sub_858500  (orig 0x858500, strlit-flag-ret)
void *main_f_858500(void* a0) { static char g_f_858500[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858500; }

// sub_858520  (orig 0x858520, strlit-flag-ret)
void *main_f_858520(void* a0) { static char g_f_858520[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858520; }

// sub_858540  (orig 0x858540, strlit-flag-ret)
void *main_f_858540(void* a0) { static char g_f_858540[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858540; }

// sub_858560  (orig 0x858560, strlit-flag-ret)
void *main_f_858560(void* a0) { static char g_f_858560[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858560; }

// sub_858580  (orig 0x858580, strlit-flag-ret)
void *main_f_858580(void* a0) { static char g_f_858580[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858580; }

// sub_8585a0  (orig 0x8585a0, strlit-flag-ret)
void *main_f_8585a0(void* a0) { static char g_f_8585a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8585a0; }

// sub_8585c0  (orig 0x8585c0, strlit-flag-ret)
void *main_f_8585c0(void* a0) { static char g_f_8585c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8585c0; }

// sub_8585e0  (orig 0x8585e0, strlit-flag-ret)
void *main_f_8585e0(void* a0) { static char g_f_8585e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8585e0; }

// sub_858600  (orig 0x858600, strlit-flag-ret)
void *main_f_858600(void* a0) { static char g_f_858600[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858600; }

// sub_858620  (orig 0x858620, strlit-flag-ret)
void *main_f_858620(void* a0) { static char g_f_858620[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858620; }

// sub_858640  (orig 0x858640, strlit-flag-ret)
void *main_f_858640(void* a0) { static char g_f_858640[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858640; }

// sub_858660  (orig 0x858660, strlit-flag-ret)
void *main_f_858660(void* a0) { static char g_f_858660[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858660; }

// sub_858680  (orig 0x858680, strlit-flag-ret)
void *main_f_858680(void* a0) { static char g_f_858680[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858680; }

// sub_8586a0  (orig 0x8586a0, strlit-flag-ret)
void *main_f_8586a0(void* a0) { static char g_f_8586a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8586a0; }

// sub_8586c0  (orig 0x8586c0, strlit-flag-ret)
void *main_f_8586c0(void* a0) { static char g_f_8586c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8586c0; }

// sub_8586e0  (orig 0x8586e0, strlit-flag-ret)
void *main_f_8586e0(void* a0) { static char g_f_8586e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8586e0; }

// sub_858700  (orig 0x858700, strlit-flag-ret)
void *main_f_858700(void* a0) { static char g_f_858700[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858700; }

// sub_858720  (orig 0x858720, strlit-flag-ret)
void *main_f_858720(void* a0) { static char g_f_858720[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858720; }

// sub_858740  (orig 0x858740, strlit-flag-ret)
void *main_f_858740(void* a0) { static char g_f_858740[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858740; }

// sub_858760  (orig 0x858760, strlit-flag-ret)
void *main_f_858760(void* a0) { static char g_f_858760[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858760; }

// sub_858780  (orig 0x858780, strlit-flag-ret)
void *main_f_858780(void* a0) { static char g_f_858780[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858780; }

// sub_8587a0  (orig 0x8587a0, strlit-flag-ret)
void *main_f_8587a0(void* a0) { static char g_f_8587a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8587a0; }

// sub_8587c0  (orig 0x8587c0, strlit-flag-ret)
void *main_f_8587c0(void* a0) { static char g_f_8587c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8587c0; }

// sub_8587e0  (orig 0x8587e0, strlit-flag-ret)
void *main_f_8587e0(void* a0) { static char g_f_8587e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8587e0; }

// sub_858800  (orig 0x858800, strlit-flag-ret)
void *main_f_858800(void* a0) { static char g_f_858800[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858800; }

// sub_858820  (orig 0x858820, strlit-flag-ret)
void *main_f_858820(void* a0) { static char g_f_858820[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858820; }

// sub_858840  (orig 0x858840, strlit-flag-ret)
void *main_f_858840(void* a0) { static char g_f_858840[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858840; }

// sub_858860  (orig 0x858860, strlit-flag-ret)
void *main_f_858860(void* a0) { static char g_f_858860[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858860; }

// sub_858880  (orig 0x858880, strlit-flag-ret)
void *main_f_858880(void* a0) { static char g_f_858880[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858880; }

// sub_8588a0  (orig 0x8588a0, strlit-flag-ret)
void *main_f_8588a0(void* a0) { static char g_f_8588a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8588a0; }

// sub_8588c0  (orig 0x8588c0, strlit-flag-ret)
void *main_f_8588c0(void* a0) { static char g_f_8588c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8588c0; }

// sub_8588e0  (orig 0x8588e0, strlit-flag-ret)
void *main_f_8588e0(void* a0) { static char g_f_8588e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8588e0; }

// sub_858900  (orig 0x858900, strlit-flag-ret)
void *main_f_858900(void* a0) { static char g_f_858900[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858900; }

// sub_858920  (orig 0x858920, strlit-flag-ret)
void *main_f_858920(void* a0) { static char g_f_858920[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858920; }

// sub_858940  (orig 0x858940, strlit-flag-ret)
void *main_f_858940(void* a0) { static char g_f_858940[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858940; }

// sub_858960  (orig 0x858960, strlit-flag-ret)
void *main_f_858960(void* a0) { static char g_f_858960[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858960; }

// sub_858980  (orig 0x858980, strlit-flag-ret)
void *main_f_858980(void* a0) { static char g_f_858980[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858980; }

// sub_8589a0  (orig 0x8589a0, strlit-flag-ret)
void *main_f_8589a0(void* a0) { static char g_f_8589a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8589a0; }

// sub_8589c0  (orig 0x8589c0, strlit-flag-ret)
void *main_f_8589c0(void* a0) { static char g_f_8589c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8589c0; }

// sub_8589e0  (orig 0x8589e0, strlit-flag-ret)
void *main_f_8589e0(void* a0) { static char g_f_8589e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8589e0; }

// sub_858a00  (orig 0x858a00, strlit-flag-ret)
void *main_f_858a00(void* a0) { static char g_f_858a00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858a00; }

// sub_858a20  (orig 0x858a20, strlit-flag-ret)
void *main_f_858a20(void* a0) { static char g_f_858a20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858a20; }

// sub_858a40  (orig 0x858a40, strlit-flag-ret)
void *main_f_858a40(void* a0) { static char g_f_858a40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858a40; }

// sub_858a60  (orig 0x858a60, strlit-flag-ret)
void *main_f_858a60(void* a0) { static char g_f_858a60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858a60; }

// sub_858a80  (orig 0x858a80, strlit-flag-ret)
void *main_f_858a80(void* a0) { static char g_f_858a80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858a80; }

// sub_858aa0  (orig 0x858aa0, strlit-flag-ret)
void *main_f_858aa0(void* a0) { static char g_f_858aa0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858aa0; }

// sub_858ac0  (orig 0x858ac0, strlit-flag-ret)
void *main_f_858ac0(void* a0) { static char g_f_858ac0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858ac0; }

// sub_858ae0  (orig 0x858ae0, strlit-flag-ret)
void *main_f_858ae0(void* a0) { static char g_f_858ae0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858ae0; }

// sub_858b00  (orig 0x858b00, strlit-flag-ret)
void *main_f_858b00(void* a0) { static char g_f_858b00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858b00; }

// sub_858b20  (orig 0x858b20, strlit-flag-ret)
void *main_f_858b20(void* a0) { static char g_f_858b20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858b20; }

// sub_858b40  (orig 0x858b40, strlit-flag-ret)
void *main_f_858b40(void* a0) { static char g_f_858b40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858b40; }

// sub_858b60  (orig 0x858b60, strlit-flag-ret)
void *main_f_858b60(void* a0) { static char g_f_858b60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858b60; }

// sub_858b80  (orig 0x858b80, strlit-flag-ret)
void *main_f_858b80(void* a0) { static char g_f_858b80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858b80; }

// sub_858ba0  (orig 0x858ba0, strlit-flag-ret)
void *main_f_858ba0(void* a0) { static char g_f_858ba0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858ba0; }

// sub_858bc0  (orig 0x858bc0, strlit-flag-ret)
void *main_f_858bc0(void* a0) { static char g_f_858bc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858bc0; }

// sub_858be0  (orig 0x858be0, strlit-flag-ret)
void *main_f_858be0(void* a0) { static char g_f_858be0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858be0; }

// sub_858c00  (orig 0x858c00, strlit-flag-ret)
void *main_f_858c00(void* a0) { static char g_f_858c00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858c00; }

// sub_858c20  (orig 0x858c20, strlit-flag-ret)
void *main_f_858c20(void* a0) { static char g_f_858c20[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858c20; }

// sub_858c40  (orig 0x858c40, strlit-flag-ret)
void *main_f_858c40(void* a0) { static char g_f_858c40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858c40; }

// sub_858c60  (orig 0x858c60, strlit-flag-ret)
void *main_f_858c60(void* a0) { static char g_f_858c60[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858c60; }

// sub_858c80  (orig 0x858c80, strlit-flag-ret)
void *main_f_858c80(void* a0) { static char g_f_858c80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858c80; }

// sub_858ca0  (orig 0x858ca0, strlit-flag-ret)
void *main_f_858ca0(void* a0) { static char g_f_858ca0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_858ca0; }

// sub_858cc0  (orig 0x858cc0, strlit-flag-ret)
void *main_f_858cc0(void* a0) { static char g_f_858cc0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858cc0; }

// sub_858ce0  (orig 0x858ce0, strlit-flag-ret)
void *main_f_858ce0(void* a0) { static char g_f_858ce0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858ce0; }

// sub_858d00  (orig 0x858d00, strlit-flag-ret)
void *main_f_858d00(void* a0) { static char g_f_858d00[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858d00; }

// sub_858d20  (orig 0x858d20, strlit-flag-ret)
void *main_f_858d20(void* a0) { static char g_f_858d20[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858d20; }

// sub_858d40  (orig 0x858d40, strlit-flag-ret)
void *main_f_858d40(void* a0) { static char g_f_858d40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858d40; }

// sub_858d60  (orig 0x858d60, strlit-flag-ret)
void *main_f_858d60(void* a0) { static char g_f_858d60[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858d60; }

// sub_858d80  (orig 0x858d80, strlit-flag-ret)
void *main_f_858d80(void* a0) { static char g_f_858d80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858d80; }

// sub_858da0  (orig 0x858da0, strlit-flag-ret)
void *main_f_858da0(void* a0) { static char g_f_858da0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858da0; }

// sub_858dc0  (orig 0x858dc0, strlit-flag-ret)
void *main_f_858dc0(void* a0) { static char g_f_858dc0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858dc0; }

// sub_858de0  (orig 0x858de0, strlit-flag-ret)
void *main_f_858de0(void* a0) { static char g_f_858de0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858de0; }

// sub_858e00  (orig 0x858e00, strlit-flag-ret)
void *main_f_858e00(void* a0) { static char g_f_858e00[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858e00; }

// sub_858e20  (orig 0x858e20, strlit-flag-ret)
void *main_f_858e20(void* a0) { static char g_f_858e20[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858e20; }

// sub_858e40  (orig 0x858e40, strlit-flag-ret)
void *main_f_858e40(void* a0) { static char g_f_858e40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858e40; }

// sub_858e60  (orig 0x858e60, strlit-flag-ret)
void *main_f_858e60(void* a0) { static char g_f_858e60[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858e60; }

// sub_858e80  (orig 0x858e80, strlit-flag-ret)
void *main_f_858e80(void* a0) { static char g_f_858e80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858e80; }

// sub_858ea0  (orig 0x858ea0, strlit-flag-ret)
void *main_f_858ea0(void* a0) { static char g_f_858ea0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858ea0; }

// sub_858ec0  (orig 0x858ec0, strlit-flag-ret)
void *main_f_858ec0(void* a0) { static char g_f_858ec0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858ec0; }

// sub_858ee0  (orig 0x858ee0, strlit-flag-ret)
void *main_f_858ee0(void* a0) { static char g_f_858ee0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858ee0; }

// sub_858f00  (orig 0x858f00, strlit-flag-ret)
void *main_f_858f00(void* a0) { static char g_f_858f00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858f00; }

// sub_858f20  (orig 0x858f20, strlit-flag-ret)
void *main_f_858f20(void* a0) { static char g_f_858f20[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858f20; }

// sub_858f40  (orig 0x858f40, strlit-flag-ret)
void *main_f_858f40(void* a0) { static char g_f_858f40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858f40; }

// sub_858f60  (orig 0x858f60, strlit-flag-ret)
void *main_f_858f60(void* a0) { static char g_f_858f60[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858f60; }

// sub_858f80  (orig 0x858f80, strlit-flag-ret)
void *main_f_858f80(void* a0) { static char g_f_858f80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_858f80; }

// sub_858fa0  (orig 0x858fa0, strlit-flag-ret)
void *main_f_858fa0(void* a0) { static char g_f_858fa0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858fa0; }

// sub_858fc0  (orig 0x858fc0, strlit-flag-ret)
void *main_f_858fc0(void* a0) { static char g_f_858fc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_858fc0; }

// sub_858fe0  (orig 0x858fe0, strlit-flag-ret)
void *main_f_858fe0(void* a0) { static char g_f_858fe0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_858fe0; }

// sub_859000  (orig 0x859000, strlit-flag-ret)
void *main_f_859000(void* a0) { static char g_f_859000[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_859000; }

// sub_859020  (orig 0x859020, strlit-flag-ret)
void *main_f_859020(void* a0) { static char g_f_859020[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_859020; }

// sub_859040  (orig 0x859040, strlit-flag-ret)
void *main_f_859040(void* a0) { static char g_f_859040[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_859040; }

// sub_859060  (orig 0x859060, strlit-flag-ret)
void *main_f_859060(void* a0) { static char g_f_859060[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_859060; }

// sub_859080  (orig 0x859080, strlit-flag-ret)
void *main_f_859080(void* a0) { static char g_f_859080[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_859080; }

// sub_8590a0  (orig 0x8590a0, strlit-flag-ret)
void *main_f_8590a0(void* a0) { static char g_f_8590a0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8590a0; }

// sub_8590e0  (orig 0x8590e0, strlit-flag-ret)
void *main_f_8590e0(void* a0) { static char g_f_8590e0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8590e0; }

// sub_859100  (orig 0x859100, strlit-flag-ret)
void *main_f_859100(void* a0) { static char g_f_859100[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_859100; }

// sub_859120  (orig 0x859120, strlit-flag-ret)
void *main_f_859120(void* a0) { static char g_f_859120[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_859120; }

// sub_859140  (orig 0x859140, strlit-flag-ret)
void *main_f_859140(void* a0) { static char g_f_859140[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_859140; }

// sub_859160  (orig 0x859160, strlit-flag-ret)
void *main_f_859160(void* a0) { static char g_f_859160[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_859160; }

// sub_859440  (orig 0x859440, tailcall)
void main_f_859440() { main::sub_7e8d00(); }

// sub_85b830  (orig 0x85b830, tailcall)
void main_f_85b830() { main::sub_85b740(); }

// sub_85ef10  (orig 0x85ef10, tailcall)
void main_f_85ef10() { main::sub_81b550(); }

// sub_860f20  (orig 0x860f20, tailcall)
void main_f_860f20() { main::sub_81b6e0(); }

// sub_861c20  (orig 0x861c20, ret_only)
void main_f_861c20() {}

// sub_861c30  (orig 0x861c30, ret_only)
void main_f_861c30() {}

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

// sub_864c10  (orig 0x864c10, strlit-flag-ret)
void *main_f_864c10(void* a0) { static char g_f_864c10[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864c10; }

// sub_864c30  (orig 0x864c30, strlit-flag-ret)
void *main_f_864c30(void* a0) { static char g_f_864c30[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864c30; }

// sub_864c50  (orig 0x864c50, strlit-flag-ret)
void *main_f_864c50(void* a0) { static char g_f_864c50[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_864c50; }

// sub_864c70  (orig 0x864c70, strlit-flag-ret)
void *main_f_864c70(void* a0) { static char g_f_864c70[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_864c70; }

// sub_864c90  (orig 0x864c90, strlit-flag-ret)
void *main_f_864c90(void* a0) { static char g_f_864c90[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864c90; }

// sub_864cb0  (orig 0x864cb0, strlit-flag-ret)
void *main_f_864cb0(void* a0) { static char g_f_864cb0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864cb0; }

// sub_864cd0  (orig 0x864cd0, strlit-flag-ret)
void *main_f_864cd0(void* a0) { static char g_f_864cd0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864cd0; }

// sub_864cf0  (orig 0x864cf0, strlit-flag-ret)
void *main_f_864cf0(void* a0) { static char g_f_864cf0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864cf0; }

// sub_864d10  (orig 0x864d10, strlit-flag-ret)
void *main_f_864d10(void* a0) { static char g_f_864d10[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864d10; }

// sub_864d30  (orig 0x864d30, strlit-flag-ret)
void *main_f_864d30(void* a0) { static char g_f_864d30[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864d30; }

// sub_864d50  (orig 0x864d50, strlit-flag-ret)
void *main_f_864d50(void* a0) { static char g_f_864d50[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864d50; }

// sub_864d70  (orig 0x864d70, strlit-flag-ret)
void *main_f_864d70(void* a0) { static char g_f_864d70[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_864d70; }

// sub_864d90  (orig 0x864d90, strlit-flag-ret)
void *main_f_864d90(void* a0) { static char g_f_864d90[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_864d90; }

// sub_864db0  (orig 0x864db0, strlit-flag-ret)
void *main_f_864db0(void* a0) { static char g_f_864db0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864db0; }

// sub_864dd0  (orig 0x864dd0, strlit-flag-ret)
void *main_f_864dd0(void* a0) { static char g_f_864dd0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864dd0; }

// sub_864df0  (orig 0x864df0, strlit-flag-ret)
void *main_f_864df0(void* a0) { static char g_f_864df0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864df0; }

// sub_864e10  (orig 0x864e10, strlit-flag-ret)
void *main_f_864e10(void* a0) { static char g_f_864e10[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_864e10; }

// sub_864e30  (orig 0x864e30, strlit-flag-ret)
void *main_f_864e30(void* a0) { static char g_f_864e30[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864e30; }

// sub_864e50  (orig 0x864e50, strlit-flag-ret)
void *main_f_864e50(void* a0) { static char g_f_864e50[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864e50; }

// sub_864e70  (orig 0x864e70, strlit-flag-ret)
void *main_f_864e70(void* a0) { static char g_f_864e70[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864e70; }

// sub_864e90  (orig 0x864e90, strlit-flag-ret)
void *main_f_864e90(void* a0) { static char g_f_864e90[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864e90; }

// sub_864eb0  (orig 0x864eb0, strlit-flag-ret)
void *main_f_864eb0(void* a0) { static char g_f_864eb0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_864eb0; }

// sub_865680  (orig 0x865680, ret_only)
void main_f_865680() {}

// sub_866300  (orig 0x866300, ret_only)
void main_f_866300() {}

// sub_8669a0  (orig 0x8669a0, strlit-flag-ret)
void *main_f_8669a0(void* a0) { static char g_f_8669a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8669a0; }

// sub_8669c0  (orig 0x8669c0, strlit-flag-ret)
void *main_f_8669c0(void* a0) { static char g_f_8669c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8669c0; }

// sub_8669e0  (orig 0x8669e0, strlit-flag-ret)
void *main_f_8669e0(void* a0) { static char g_f_8669e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8669e0; }

// sub_866a00  (orig 0x866a00, strlit-flag-ret)
void *main_f_866a00(void* a0) { static char g_f_866a00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866a00; }

// sub_866a20  (orig 0x866a20, strlit-flag-ret)
void *main_f_866a20(void* a0) { static char g_f_866a20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866a20; }

// sub_866a40  (orig 0x866a40, strlit-flag-ret)
void *main_f_866a40(void* a0) { static char g_f_866a40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866a40; }

// sub_866a60  (orig 0x866a60, strlit-flag-ret)
void *main_f_866a60(void* a0) { static char g_f_866a60[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866a60; }

// sub_866a80  (orig 0x866a80, strlit-flag-ret)
void *main_f_866a80(void* a0) { static char g_f_866a80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866a80; }

// sub_866aa0  (orig 0x866aa0, strlit-flag-ret)
void *main_f_866aa0(void* a0) { static char g_f_866aa0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866aa0; }

// sub_866ac0  (orig 0x866ac0, strlit-flag-ret)
void *main_f_866ac0(void* a0) { static char g_f_866ac0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866ac0; }

// sub_866ae0  (orig 0x866ae0, strlit-flag-ret)
void *main_f_866ae0(void* a0) { static char g_f_866ae0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866ae0; }

// sub_866b00  (orig 0x866b00, strlit-flag-ret)
void *main_f_866b00(void* a0) { static char g_f_866b00[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_866b00; }

// sub_866b20  (orig 0x866b20, strlit-flag-ret)
void *main_f_866b20(void* a0) { static char g_f_866b20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866b20; }

// sub_866b40  (orig 0x866b40, strlit-flag-ret)
void *main_f_866b40(void* a0) { static char g_f_866b40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866b40; }

// sub_866b60  (orig 0x866b60, strlit-flag-ret)
void *main_f_866b60(void* a0) { static char g_f_866b60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866b60; }

// sub_866b80  (orig 0x866b80, strlit-flag-ret)
void *main_f_866b80(void* a0) { static char g_f_866b80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866b80; }

// sub_866ba0  (orig 0x866ba0, strlit-flag-ret)
void *main_f_866ba0(void* a0) { static char g_f_866ba0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866ba0; }

// sub_866bc0  (orig 0x866bc0, strlit-flag-ret)
void *main_f_866bc0(void* a0) { static char g_f_866bc0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866bc0; }

// sub_866be0  (orig 0x866be0, strlit-flag-ret)
void *main_f_866be0(void* a0) { static char g_f_866be0[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_866be0; }

// sub_866c00  (orig 0x866c00, strlit-flag-ret)
void *main_f_866c00(void* a0) { static char g_f_866c00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866c00; }

// sub_866c20  (orig 0x866c20, strlit-flag-ret)
void *main_f_866c20(void* a0) { static char g_f_866c20[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866c20; }

// sub_866c40  (orig 0x866c40, strlit-flag-ret)
void *main_f_866c40(void* a0) { static char g_f_866c40[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866c40; }

// sub_866c60  (orig 0x866c60, strlit-flag-ret)
void *main_f_866c60(void* a0) { static char g_f_866c60[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_866c60; }

// sub_866c80  (orig 0x866c80, strlit-flag-ret)
void *main_f_866c80(void* a0) { static char g_f_866c80[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_866c80; }

// sub_866ca0  (orig 0x866ca0, strlit-flag-ret)
void *main_f_866ca0(void* a0) { static char g_f_866ca0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866ca0; }

// sub_866cc0  (orig 0x866cc0, strlit-flag-ret)
void *main_f_866cc0(void* a0) { static char g_f_866cc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866cc0; }

// sub_866ce0  (orig 0x866ce0, strlit-flag-ret)
void *main_f_866ce0(void* a0) { static char g_f_866ce0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866ce0; }

// sub_866d00  (orig 0x866d00, strlit-flag-ret)
void *main_f_866d00(void* a0) { static char g_f_866d00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866d00; }

// sub_866d20  (orig 0x866d20, strlit-flag-ret)
void *main_f_866d20(void* a0) { static char g_f_866d20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866d20; }

// sub_866d40  (orig 0x866d40, strlit-flag-ret)
void *main_f_866d40(void* a0) { static char g_f_866d40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866d40; }

// sub_866d60  (orig 0x866d60, strlit-flag-ret)
void *main_f_866d60(void* a0) { static char g_f_866d60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866d60; }

// sub_866d80  (orig 0x866d80, strlit-flag-ret)
void *main_f_866d80(void* a0) { static char g_f_866d80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866d80; }

// sub_866da0  (orig 0x866da0, strlit-flag-ret)
void *main_f_866da0(void* a0) { static char g_f_866da0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866da0; }

// sub_866dc0  (orig 0x866dc0, strlit-flag-ret)
void *main_f_866dc0(void* a0) { static char g_f_866dc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866dc0; }

// sub_866de0  (orig 0x866de0, strlit-flag-ret)
void *main_f_866de0(void* a0) { static char g_f_866de0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866de0; }

// sub_866e00  (orig 0x866e00, strlit-flag-ret)
void *main_f_866e00(void* a0) { static char g_f_866e00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866e00; }

// sub_866e20  (orig 0x866e20, strlit-flag-ret)
void *main_f_866e20(void* a0) { static char g_f_866e20[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866e20; }

// sub_866e40  (orig 0x866e40, strlit-flag-ret)
void *main_f_866e40(void* a0) { static char g_f_866e40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866e40; }

// sub_866e60  (orig 0x866e60, strlit-flag-ret)
void *main_f_866e60(void* a0) { static char g_f_866e60[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_866e60; }

// sub_866e80  (orig 0x866e80, strlit-flag-ret)
void *main_f_866e80(void* a0) { static char g_f_866e80[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_866e80; }

// sub_866ea0  (orig 0x866ea0, strlit-flag-ret)
void *main_f_866ea0(void* a0) { static char g_f_866ea0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_866ea0; }

// sub_866ec0  (orig 0x866ec0, strlit-flag-ret)
void *main_f_866ec0(void* a0) { static char g_f_866ec0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866ec0; }

// sub_866ee0  (orig 0x866ee0, strlit-flag-ret)
void *main_f_866ee0(void* a0) { static char g_f_866ee0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866ee0; }

// sub_866f00  (orig 0x866f00, strlit-flag-ret)
void *main_f_866f00(void* a0) { static char g_f_866f00[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_866f00; }

// sub_866f20  (orig 0x866f20, strlit-flag-ret)
void *main_f_866f20(void* a0) { static char g_f_866f20[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866f20; }

// sub_866f40  (orig 0x866f40, strlit-flag-ret)
void *main_f_866f40(void* a0) { static char g_f_866f40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866f40; }

// sub_866f60  (orig 0x866f60, strlit-flag-ret)
void *main_f_866f60(void* a0) { static char g_f_866f60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866f60; }

// sub_866f80  (orig 0x866f80, strlit-flag-ret)
void *main_f_866f80(void* a0) { static char g_f_866f80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866f80; }

// sub_866fa0  (orig 0x866fa0, strlit-flag-ret)
void *main_f_866fa0(void* a0) { static char g_f_866fa0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866fa0; }

// sub_866fc0  (orig 0x866fc0, strlit-flag-ret)
void *main_f_866fc0(void* a0) { static char g_f_866fc0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_866fc0; }

// sub_866fe0  (orig 0x866fe0, strlit-flag-ret)
void *main_f_866fe0(void* a0) { static char g_f_866fe0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_866fe0; }

// sub_867000  (orig 0x867000, strlit-flag-ret)
void *main_f_867000(void* a0) { static char g_f_867000[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867000; }

// sub_867020  (orig 0x867020, strlit-flag-ret)
void *main_f_867020(void* a0) { static char g_f_867020[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867020; }

// sub_867040  (orig 0x867040, strlit-flag-ret)
void *main_f_867040(void* a0) { static char g_f_867040[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867040; }

// sub_867060  (orig 0x867060, strlit-flag-ret)
void *main_f_867060(void* a0) { static char g_f_867060[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867060; }

// sub_867080  (orig 0x867080, strlit-flag-ret)
void *main_f_867080(void* a0) { static char g_f_867080[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867080; }

// sub_8670a0  (orig 0x8670a0, strlit-flag-ret)
void *main_f_8670a0(void* a0) { static char g_f_8670a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8670a0; }

// sub_8670c0  (orig 0x8670c0, strlit-flag-ret)
void *main_f_8670c0(void* a0) { static char g_f_8670c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8670c0; }

// sub_8670e0  (orig 0x8670e0, strlit-flag-ret)
void *main_f_8670e0(void* a0) { static char g_f_8670e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8670e0; }

// sub_867100  (orig 0x867100, strlit-flag-ret)
void *main_f_867100(void* a0) { static char g_f_867100[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867100; }

// sub_867120  (orig 0x867120, strlit-flag-ret)
void *main_f_867120(void* a0) { static char g_f_867120[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867120; }

// sub_867140  (orig 0x867140, strlit-flag-ret)
void *main_f_867140(void* a0) { static char g_f_867140[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867140; }

// sub_867160  (orig 0x867160, strlit-flag-ret)
void *main_f_867160(void* a0) { static char g_f_867160[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867160; }

// sub_867180  (orig 0x867180, strlit-flag-ret)
void *main_f_867180(void* a0) { static char g_f_867180[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867180; }

// sub_8671a0  (orig 0x8671a0, strlit-flag-ret)
void *main_f_8671a0(void* a0) { static char g_f_8671a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8671a0; }

// sub_8671c0  (orig 0x8671c0, strlit-flag-ret)
void *main_f_8671c0(void* a0) { static char g_f_8671c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8671c0; }

// sub_8671e0  (orig 0x8671e0, strlit-flag-ret)
void *main_f_8671e0(void* a0) { static char g_f_8671e0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8671e0; }

// sub_867200  (orig 0x867200, strlit-flag-ret)
void *main_f_867200(void* a0) { static char g_f_867200[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867200; }

// sub_867220  (orig 0x867220, strlit-flag-ret)
void *main_f_867220(void* a0) { static char g_f_867220[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867220; }

// sub_867240  (orig 0x867240, strlit-flag-ret)
void *main_f_867240(void* a0) { static char g_f_867240[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867240; }

// sub_867260  (orig 0x867260, strlit-flag-ret)
void *main_f_867260(void* a0) { static char g_f_867260[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867260; }

// sub_867280  (orig 0x867280, strlit-flag-ret)
void *main_f_867280(void* a0) { static char g_f_867280[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867280; }

// sub_8672a0  (orig 0x8672a0, strlit-flag-ret)
void *main_f_8672a0(void* a0) { static char g_f_8672a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8672a0; }

// sub_8672c0  (orig 0x8672c0, strlit-flag-ret)
void *main_f_8672c0(void* a0) { static char g_f_8672c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8672c0; }

// sub_8672e0  (orig 0x8672e0, strlit-flag-ret)
void *main_f_8672e0(void* a0) { static char g_f_8672e0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8672e0; }

// sub_867300  (orig 0x867300, strlit-flag-ret)
void *main_f_867300(void* a0) { static char g_f_867300[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867300; }

// sub_867320  (orig 0x867320, strlit-flag-ret)
void *main_f_867320(void* a0) { static char g_f_867320[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867320; }

// sub_867340  (orig 0x867340, strlit-flag-ret)
void *main_f_867340(void* a0) { static char g_f_867340[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867340; }

// sub_867360  (orig 0x867360, strlit-flag-ret)
void *main_f_867360(void* a0) { static char g_f_867360[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867360; }

// sub_867380  (orig 0x867380, strlit-flag-ret)
void *main_f_867380(void* a0) { static char g_f_867380[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867380; }

// sub_8673a0  (orig 0x8673a0, strlit-flag-ret)
void *main_f_8673a0(void* a0) { static char g_f_8673a0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8673a0; }

// sub_8673c0  (orig 0x8673c0, strlit-flag-ret)
void *main_f_8673c0(void* a0) { static char g_f_8673c0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8673c0; }

// sub_8673e0  (orig 0x8673e0, strlit-flag-ret)
void *main_f_8673e0(void* a0) { static char g_f_8673e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8673e0; }

// sub_867400  (orig 0x867400, strlit-flag-ret)
void *main_f_867400(void* a0) { static char g_f_867400[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867400; }

// sub_867420  (orig 0x867420, strlit-flag-ret)
void *main_f_867420(void* a0) { static char g_f_867420[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867420; }

// sub_867440  (orig 0x867440, strlit-flag-ret)
void *main_f_867440(void* a0) { static char g_f_867440[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_867440; }

// sub_867460  (orig 0x867460, strlit-flag-ret)
void *main_f_867460(void* a0) { static char g_f_867460[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867460; }

// sub_867480  (orig 0x867480, strlit-flag-ret)
void *main_f_867480(void* a0) { static char g_f_867480[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867480; }

// sub_8674a0  (orig 0x8674a0, strlit-flag-ret)
void *main_f_8674a0(void* a0) { static char g_f_8674a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8674a0; }

// sub_8674c0  (orig 0x8674c0, strlit-flag-ret)
void *main_f_8674c0(void* a0) { static char g_f_8674c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8674c0; }

// sub_8674e0  (orig 0x8674e0, strlit-flag-ret)
void *main_f_8674e0(void* a0) { static char g_f_8674e0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8674e0; }

// sub_867500  (orig 0x867500, strlit-flag-ret)
void *main_f_867500(void* a0) { static char g_f_867500[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867500; }

// sub_867520  (orig 0x867520, strlit-flag-ret)
void *main_f_867520(void* a0) { static char g_f_867520[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867520; }

// sub_867540  (orig 0x867540, strlit-flag-ret)
void *main_f_867540(void* a0) { static char g_f_867540[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867540; }

// sub_867560  (orig 0x867560, strlit-flag-ret)
void *main_f_867560(void* a0) { static char g_f_867560[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867560; }

// sub_867580  (orig 0x867580, strlit-flag-ret)
void *main_f_867580(void* a0) { static char g_f_867580[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867580; }

// sub_8675a0  (orig 0x8675a0, strlit-flag-ret)
void *main_f_8675a0(void* a0) { static char g_f_8675a0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8675a0; }

// sub_8675c0  (orig 0x8675c0, strlit-flag-ret)
void *main_f_8675c0(void* a0) { static char g_f_8675c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8675c0; }

// sub_8675e0  (orig 0x8675e0, strlit-flag-ret)
void *main_f_8675e0(void* a0) { static char g_f_8675e0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8675e0; }

// sub_867600  (orig 0x867600, strlit-flag-ret)
void *main_f_867600(void* a0) { static char g_f_867600[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867600; }

// sub_867620  (orig 0x867620, strlit-flag-ret)
void *main_f_867620(void* a0) { static char g_f_867620[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867620; }

// sub_867640  (orig 0x867640, strlit-flag-ret)
void *main_f_867640(void* a0) { static char g_f_867640[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867640; }

// sub_867660  (orig 0x867660, strlit-flag-ret)
void *main_f_867660(void* a0) { static char g_f_867660[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867660; }

// sub_867680  (orig 0x867680, strlit-flag-ret)
void *main_f_867680(void* a0) { static char g_f_867680[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867680; }

// sub_8676c0  (orig 0x8676c0, strlit-flag-ret)
void *main_f_8676c0(void* a0) { static char g_f_8676c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8676c0; }

// sub_8676e0  (orig 0x8676e0, strlit-flag-ret)
void *main_f_8676e0(void* a0) { static char g_f_8676e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8676e0; }

// sub_867700  (orig 0x867700, strlit-flag-ret)
void *main_f_867700(void* a0) { static char g_f_867700[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867700; }

// sub_867720  (orig 0x867720, strlit-flag-ret)
void *main_f_867720(void* a0) { static char g_f_867720[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867720; }

// sub_867740  (orig 0x867740, strlit-flag-ret)
void *main_f_867740(void* a0) { static char g_f_867740[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867740; }

// sub_867760  (orig 0x867760, strlit-flag-ret)
void *main_f_867760(void* a0) { static char g_f_867760[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867760; }

// sub_867780  (orig 0x867780, strlit-flag-ret)
void *main_f_867780(void* a0) { static char g_f_867780[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867780; }

// sub_8677a0  (orig 0x8677a0, strlit-flag-ret)
void *main_f_8677a0(void* a0) { static char g_f_8677a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8677a0; }

// sub_8677c0  (orig 0x8677c0, strlit-flag-ret)
void *main_f_8677c0(void* a0) { static char g_f_8677c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8677c0; }

// sub_8677e0  (orig 0x8677e0, strlit-flag-ret)
void *main_f_8677e0(void* a0) { static char g_f_8677e0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8677e0; }

// sub_867800  (orig 0x867800, strlit-flag-ret)
void *main_f_867800(void* a0) { static char g_f_867800[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867800; }

// sub_867820  (orig 0x867820, strlit-flag-ret)
void *main_f_867820(void* a0) { static char g_f_867820[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867820; }

// sub_867840  (orig 0x867840, strlit-flag-ret)
void *main_f_867840(void* a0) { static char g_f_867840[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867840; }

// sub_867860  (orig 0x867860, strlit-flag-ret)
void *main_f_867860(void* a0) { static char g_f_867860[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867860; }

// sub_867880  (orig 0x867880, strlit-flag-ret)
void *main_f_867880(void* a0) { static char g_f_867880[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867880; }

// sub_8678a0  (orig 0x8678a0, strlit-flag-ret)
void *main_f_8678a0(void* a0) { static char g_f_8678a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8678a0; }

// sub_8678c0  (orig 0x8678c0, strlit-flag-ret)
void *main_f_8678c0(void* a0) { static char g_f_8678c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8678c0; }

// sub_8678e0  (orig 0x8678e0, strlit-flag-ret)
void *main_f_8678e0(void* a0) { static char g_f_8678e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8678e0; }

// sub_867900  (orig 0x867900, strlit-flag-ret)
void *main_f_867900(void* a0) { static char g_f_867900[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867900; }

// sub_867920  (orig 0x867920, strlit-flag-ret)
void *main_f_867920(void* a0) { static char g_f_867920[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867920; }

// sub_867940  (orig 0x867940, strlit-flag-ret)
void *main_f_867940(void* a0) { static char g_f_867940[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867940; }

// sub_867960  (orig 0x867960, strlit-flag-ret)
void *main_f_867960(void* a0) { static char g_f_867960[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867960; }

// sub_867980  (orig 0x867980, strlit-flag-ret)
void *main_f_867980(void* a0) { static char g_f_867980[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867980; }

// sub_8679a0  (orig 0x8679a0, strlit-flag-ret)
void *main_f_8679a0(void* a0) { static char g_f_8679a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8679a0; }

// sub_8679c0  (orig 0x8679c0, strlit-flag-ret)
void *main_f_8679c0(void* a0) { static char g_f_8679c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8679c0; }

// sub_8679e0  (orig 0x8679e0, strlit-flag-ret)
void *main_f_8679e0(void* a0) { static char g_f_8679e0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_8679e0; }

// sub_867a00  (orig 0x867a00, strlit-flag-ret)
void *main_f_867a00(void* a0) { static char g_f_867a00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867a00; }

// sub_867a20  (orig 0x867a20, strlit-flag-ret)
void *main_f_867a20(void* a0) { static char g_f_867a20[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_867a20; }

// sub_867a40  (orig 0x867a40, strlit-flag-ret)
void *main_f_867a40(void* a0) { static char g_f_867a40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867a40; }

// sub_867a60  (orig 0x867a60, strlit-flag-ret)
void *main_f_867a60(void* a0) { static char g_f_867a60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867a60; }

// sub_867a80  (orig 0x867a80, strlit-flag-ret)
void *main_f_867a80(void* a0) { static char g_f_867a80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867a80; }

// sub_867aa0  (orig 0x867aa0, strlit-flag-ret)
void *main_f_867aa0(void* a0) { static char g_f_867aa0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_867aa0; }

// sub_867ac0  (orig 0x867ac0, strlit-flag-ret)
void *main_f_867ac0(void* a0) { static char g_f_867ac0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ac0; }

// sub_867ae0  (orig 0x867ae0, strlit-flag-ret)
void *main_f_867ae0(void* a0) { static char g_f_867ae0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ae0; }

// sub_867b00  (orig 0x867b00, strlit-flag-ret)
void *main_f_867b00(void* a0) { static char g_f_867b00[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867b00; }

// sub_867b20  (orig 0x867b20, strlit-flag-ret)
void *main_f_867b20(void* a0) { static char g_f_867b20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867b20; }

// sub_867b40  (orig 0x867b40, strlit-flag-ret)
void *main_f_867b40(void* a0) { static char g_f_867b40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867b40; }

// sub_867b60  (orig 0x867b60, strlit-flag-ret)
void *main_f_867b60(void* a0) { static char g_f_867b60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867b60; }

// sub_867b80  (orig 0x867b80, strlit-flag-ret)
void *main_f_867b80(void* a0) { static char g_f_867b80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867b80; }

// sub_867ba0  (orig 0x867ba0, strlit-flag-ret)
void *main_f_867ba0(void* a0) { static char g_f_867ba0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ba0; }

// sub_867bc0  (orig 0x867bc0, strlit-flag-ret)
void *main_f_867bc0(void* a0) { static char g_f_867bc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867bc0; }

// sub_867be0  (orig 0x867be0, strlit-flag-ret)
void *main_f_867be0(void* a0) { static char g_f_867be0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_867be0; }

// sub_867c00  (orig 0x867c00, strlit-flag-ret)
void *main_f_867c00(void* a0) { static char g_f_867c00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867c00; }

// sub_867c20  (orig 0x867c20, strlit-flag-ret)
void *main_f_867c20(void* a0) { static char g_f_867c20[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867c20; }

// sub_867c40  (orig 0x867c40, strlit-flag-ret)
void *main_f_867c40(void* a0) { static char g_f_867c40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867c40; }

// sub_867c60  (orig 0x867c60, strlit-flag-ret)
void *main_f_867c60(void* a0) { static char g_f_867c60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867c60; }

// sub_867c80  (orig 0x867c80, strlit-flag-ret)
void *main_f_867c80(void* a0) { static char g_f_867c80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867c80; }

// sub_867ca0  (orig 0x867ca0, strlit-flag-ret)
void *main_f_867ca0(void* a0) { static char g_f_867ca0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ca0; }

// sub_867cc0  (orig 0x867cc0, strlit-flag-ret)
void *main_f_867cc0(void* a0) { static char g_f_867cc0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867cc0; }

// sub_867ce0  (orig 0x867ce0, strlit-flag-ret)
void *main_f_867ce0(void* a0) { static char g_f_867ce0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ce0; }

// sub_867d00  (orig 0x867d00, strlit-flag-ret)
void *main_f_867d00(void* a0) { static char g_f_867d00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867d00; }

// sub_867d20  (orig 0x867d20, strlit-flag-ret)
void *main_f_867d20(void* a0) { static char g_f_867d20[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_867d20; }

// sub_867d40  (orig 0x867d40, strlit-flag-ret)
void *main_f_867d40(void* a0) { static char g_f_867d40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867d40; }

// sub_867d60  (orig 0x867d60, strlit-flag-ret)
void *main_f_867d60(void* a0) { static char g_f_867d60[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867d60; }

// sub_867d80  (orig 0x867d80, strlit-flag-ret)
void *main_f_867d80(void* a0) { static char g_f_867d80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867d80; }

// sub_867da0  (orig 0x867da0, strlit-flag-ret)
void *main_f_867da0(void* a0) { static char g_f_867da0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867da0; }

// sub_867dc0  (orig 0x867dc0, strlit-flag-ret)
void *main_f_867dc0(void* a0) { static char g_f_867dc0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867dc0; }

// sub_867de0  (orig 0x867de0, strlit-flag-ret)
void *main_f_867de0(void* a0) { static char g_f_867de0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_867de0; }

// sub_867e00  (orig 0x867e00, strlit-flag-ret)
void *main_f_867e00(void* a0) { static char g_f_867e00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867e00; }

// sub_867e20  (orig 0x867e20, strlit-flag-ret)
void *main_f_867e20(void* a0) { static char g_f_867e20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867e20; }

// sub_867e40  (orig 0x867e40, strlit-flag-ret)
void *main_f_867e40(void* a0) { static char g_f_867e40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867e40; }

// sub_867e60  (orig 0x867e60, strlit-flag-ret)
void *main_f_867e60(void* a0) { static char g_f_867e60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867e60; }

// sub_867e80  (orig 0x867e80, strlit-flag-ret)
void *main_f_867e80(void* a0) { static char g_f_867e80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867e80; }

// sub_867ea0  (orig 0x867ea0, strlit-flag-ret)
void *main_f_867ea0(void* a0) { static char g_f_867ea0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ea0; }

// sub_867ec0  (orig 0x867ec0, strlit-flag-ret)
void *main_f_867ec0(void* a0) { static char g_f_867ec0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867ec0; }

// sub_867ee0  (orig 0x867ee0, strlit-flag-ret)
void *main_f_867ee0(void* a0) { static char g_f_867ee0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867ee0; }

// sub_867f00  (orig 0x867f00, strlit-flag-ret)
void *main_f_867f00(void* a0) { static char g_f_867f00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867f00; }

// sub_867f20  (orig 0x867f20, strlit-flag-ret)
void *main_f_867f20(void* a0) { static char g_f_867f20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867f20; }

// sub_867f40  (orig 0x867f40, strlit-flag-ret)
void *main_f_867f40(void* a0) { static char g_f_867f40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_867f40; }

// sub_867f60  (orig 0x867f60, strlit-flag-ret)
void *main_f_867f60(void* a0) { static char g_f_867f60[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867f60; }

// sub_867f80  (orig 0x867f80, strlit-flag-ret)
void *main_f_867f80(void* a0) { static char g_f_867f80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_867f80; }

// sub_867fa0  (orig 0x867fa0, strlit-flag-ret)
void *main_f_867fa0(void* a0) { static char g_f_867fa0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867fa0; }

// sub_867fc0  (orig 0x867fc0, strlit-flag-ret)
void *main_f_867fc0(void* a0) { static char g_f_867fc0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867fc0; }

// sub_867fe0  (orig 0x867fe0, strlit-flag-ret)
void *main_f_867fe0(void* a0) { static char g_f_867fe0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_867fe0; }

// sub_868000  (orig 0x868000, strlit-flag-ret)
void *main_f_868000(void* a0) { static char g_f_868000[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868000; }

// sub_868020  (orig 0x868020, strlit-flag-ret)
void *main_f_868020(void* a0) { static char g_f_868020[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868020; }

// sub_868040  (orig 0x868040, strlit-flag-ret)
void *main_f_868040(void* a0) { static char g_f_868040[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868040; }

// sub_868060  (orig 0x868060, strlit-flag-ret)
void *main_f_868060(void* a0) { static char g_f_868060[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868060; }

// sub_868080  (orig 0x868080, strlit-flag-ret)
void *main_f_868080(void* a0) { static char g_f_868080[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868080; }

// sub_8680a0  (orig 0x8680a0, strlit-flag-ret)
void *main_f_8680a0(void* a0) { static char g_f_8680a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8680a0; }

// sub_8680c0  (orig 0x8680c0, strlit-flag-ret)
void *main_f_8680c0(void* a0) { static char g_f_8680c0[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_8680c0; }

// sub_8680e0  (orig 0x8680e0, strlit-flag-ret)
void *main_f_8680e0(void* a0) { static char g_f_8680e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8680e0; }

// sub_868100  (orig 0x868100, strlit-flag-ret)
void *main_f_868100(void* a0) { static char g_f_868100[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868100; }

// sub_868120  (orig 0x868120, strlit-flag-ret)
void *main_f_868120(void* a0) { static char g_f_868120[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868120; }

// sub_868140  (orig 0x868140, strlit-flag-ret)
void *main_f_868140(void* a0) { static char g_f_868140[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868140; }

// sub_868160  (orig 0x868160, strlit-flag-ret)
void *main_f_868160(void* a0) { static char g_f_868160[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868160; }

// sub_868180  (orig 0x868180, strlit-flag-ret)
void *main_f_868180(void* a0) { static char g_f_868180[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868180; }

// sub_8681a0  (orig 0x8681a0, strlit-flag-ret)
void *main_f_8681a0(void* a0) { static char g_f_8681a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8681a0; }

// sub_8681c0  (orig 0x8681c0, strlit-flag-ret)
void *main_f_8681c0(void* a0) { static char g_f_8681c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8681c0; }

// sub_8681e0  (orig 0x8681e0, strlit-flag-ret)
void *main_f_8681e0(void* a0) { static char g_f_8681e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8681e0; }

// sub_868200  (orig 0x868200, strlit-flag-ret)
void *main_f_868200(void* a0) { static char g_f_868200[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868200; }

// sub_868220  (orig 0x868220, strlit-flag-ret)
void *main_f_868220(void* a0) { static char g_f_868220[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868220; }

// sub_868240  (orig 0x868240, strlit-flag-ret)
void *main_f_868240(void* a0) { static char g_f_868240[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868240; }

// sub_868260  (orig 0x868260, strlit-flag-ret)
void *main_f_868260(void* a0) { static char g_f_868260[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_868260; }

// sub_868280  (orig 0x868280, strlit-flag-ret)
void *main_f_868280(void* a0) { static char g_f_868280[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868280; }

// sub_8682a0  (orig 0x8682a0, strlit-flag-ret)
void *main_f_8682a0(void* a0) { static char g_f_8682a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8682a0; }

// sub_8682c0  (orig 0x8682c0, strlit-flag-ret)
void *main_f_8682c0(void* a0) { static char g_f_8682c0[1]; *(uint32_t *)((char*)(a0)) = 9; __asm__ volatile("" ::: "memory"); return g_f_8682c0; }

// sub_8682e0  (orig 0x8682e0, strlit-flag-ret)
void *main_f_8682e0(void* a0) { static char g_f_8682e0[1]; *(uint32_t *)((char*)(a0)) = 9; __asm__ volatile("" ::: "memory"); return g_f_8682e0; }

// sub_868300  (orig 0x868300, strlit-flag-ret)
void *main_f_868300(void* a0) { static char g_f_868300[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868300; }

// sub_868320  (orig 0x868320, strlit-flag-ret)
void *main_f_868320(void* a0) { static char g_f_868320[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_868320; }

// sub_868340  (orig 0x868340, strlit-flag-ret)
void *main_f_868340(void* a0) { static char g_f_868340[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868340; }

// sub_868360  (orig 0x868360, strlit-flag-ret)
void *main_f_868360(void* a0) { static char g_f_868360[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868360; }

// sub_868380  (orig 0x868380, strlit-flag-ret)
void *main_f_868380(void* a0) { static char g_f_868380[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868380; }

// sub_8683a0  (orig 0x8683a0, strlit-flag-ret)
void *main_f_8683a0(void* a0) { static char g_f_8683a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8683a0; }

// sub_8683c0  (orig 0x8683c0, strlit-flag-ret)
void *main_f_8683c0(void* a0) { static char g_f_8683c0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8683c0; }

// sub_8683e0  (orig 0x8683e0, strlit-flag-ret)
void *main_f_8683e0(void* a0) { static char g_f_8683e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8683e0; }

// sub_868400  (orig 0x868400, strlit-flag-ret)
void *main_f_868400(void* a0) { static char g_f_868400[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868400; }

// sub_868420  (orig 0x868420, strlit-flag-ret)
void *main_f_868420(void* a0) { static char g_f_868420[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868420; }

// sub_868440  (orig 0x868440, strlit-flag-ret)
void *main_f_868440(void* a0) { static char g_f_868440[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868440; }

// sub_868460  (orig 0x868460, strlit-flag-ret)
void *main_f_868460(void* a0) { static char g_f_868460[1]; *(uint32_t *)((char*)(a0)) = 9; __asm__ volatile("" ::: "memory"); return g_f_868460; }

// sub_868480  (orig 0x868480, strlit-flag-ret)
void *main_f_868480(void* a0) { static char g_f_868480[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868480; }

// sub_8684a0  (orig 0x8684a0, strlit-flag-ret)
void *main_f_8684a0(void* a0) { static char g_f_8684a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8684a0; }

// sub_8684c0  (orig 0x8684c0, strlit-flag-ret)
void *main_f_8684c0(void* a0) { static char g_f_8684c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8684c0; }

// sub_8684e0  (orig 0x8684e0, strlit-flag-ret)
void *main_f_8684e0(void* a0) { static char g_f_8684e0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_8684e0; }

// sub_868500  (orig 0x868500, strlit-flag-ret)
void *main_f_868500(void* a0) { static char g_f_868500[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_868500; }

// sub_868520  (orig 0x868520, strlit-flag-ret)
void *main_f_868520(void* a0) { static char g_f_868520[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868520; }

// sub_868540  (orig 0x868540, strlit-flag-ret)
void *main_f_868540(void* a0) { static char g_f_868540[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868540; }

// sub_868560  (orig 0x868560, strlit-flag-ret)
void *main_f_868560(void* a0) { static char g_f_868560[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868560; }

// sub_868580  (orig 0x868580, strlit-flag-ret)
void *main_f_868580(void* a0) { static char g_f_868580[1]; *(uint32_t *)((char*)(a0)) = 9; __asm__ volatile("" ::: "memory"); return g_f_868580; }

// sub_8685a0  (orig 0x8685a0, strlit-flag-ret)
void *main_f_8685a0(void* a0) { static char g_f_8685a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8685a0; }

// sub_8685c0  (orig 0x8685c0, strlit-flag-ret)
void *main_f_8685c0(void* a0) { static char g_f_8685c0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8685c0; }

// sub_8685e0  (orig 0x8685e0, strlit-flag-ret)
void *main_f_8685e0(void* a0) { static char g_f_8685e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8685e0; }

// sub_868600  (orig 0x868600, strlit-flag-ret)
void *main_f_868600(void* a0) { static char g_f_868600[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868600; }

// sub_868620  (orig 0x868620, strlit-flag-ret)
void *main_f_868620(void* a0) { static char g_f_868620[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868620; }

// sub_868640  (orig 0x868640, strlit-flag-ret)
void *main_f_868640(void* a0) { static char g_f_868640[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_868640; }

// sub_868660  (orig 0x868660, strlit-flag-ret)
void *main_f_868660(void* a0) { static char g_f_868660[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868660; }

// sub_868680  (orig 0x868680, strlit-flag-ret)
void *main_f_868680(void* a0) { static char g_f_868680[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868680; }

// sub_8686a0  (orig 0x8686a0, strlit-flag-ret)
void *main_f_8686a0(void* a0) { static char g_f_8686a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8686a0; }

// sub_8686c0  (orig 0x8686c0, strlit-flag-ret)
void *main_f_8686c0(void* a0) { static char g_f_8686c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8686c0; }

// sub_8686e0  (orig 0x8686e0, strlit-flag-ret)
void *main_f_8686e0(void* a0) { static char g_f_8686e0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8686e0; }

// sub_868700  (orig 0x868700, strlit-flag-ret)
void *main_f_868700(void* a0) { static char g_f_868700[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868700; }

// sub_868720  (orig 0x868720, strlit-flag-ret)
void *main_f_868720(void* a0) { static char g_f_868720[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_868720; }

// sub_868740  (orig 0x868740, strlit-flag-ret)
void *main_f_868740(void* a0) { static char g_f_868740[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_868740; }

// sub_868760  (orig 0x868760, strlit-flag-ret)
void *main_f_868760(void* a0) { static char g_f_868760[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868760; }

// sub_868780  (orig 0x868780, strlit-flag-ret)
void *main_f_868780(void* a0) { static char g_f_868780[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868780; }

// sub_8687a0  (orig 0x8687a0, strlit-flag-ret)
void *main_f_8687a0(void* a0) { static char g_f_8687a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8687a0; }

// sub_8687c0  (orig 0x8687c0, strlit-flag-ret)
void *main_f_8687c0(void* a0) { static char g_f_8687c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8687c0; }

// sub_8687e0  (orig 0x8687e0, strlit-flag-ret)
void *main_f_8687e0(void* a0) { static char g_f_8687e0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8687e0; }

// sub_868800  (orig 0x868800, strlit-flag-ret)
void *main_f_868800(void* a0) { static char g_f_868800[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868800; }

// sub_868820  (orig 0x868820, strlit-flag-ret)
void *main_f_868820(void* a0) { static char g_f_868820[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868820; }

// sub_868840  (orig 0x868840, strlit-flag-ret)
void *main_f_868840(void* a0) { static char g_f_868840[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868840; }

// sub_868860  (orig 0x868860, strlit-flag-ret)
void *main_f_868860(void* a0) { static char g_f_868860[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_868860; }

// sub_868880  (orig 0x868880, strlit-flag-ret)
void *main_f_868880(void* a0) { static char g_f_868880[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868880; }

// sub_8688a0  (orig 0x8688a0, strlit-flag-ret)
void *main_f_8688a0(void* a0) { static char g_f_8688a0[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_8688a0; }

// sub_8688c0  (orig 0x8688c0, strlit-flag-ret)
void *main_f_8688c0(void* a0) { static char g_f_8688c0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8688c0; }

// sub_8688e0  (orig 0x8688e0, strlit-flag-ret)
void *main_f_8688e0(void* a0) { static char g_f_8688e0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8688e0; }

// sub_868900  (orig 0x868900, strlit-flag-ret)
void *main_f_868900(void* a0) { static char g_f_868900[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_868900; }

// sub_868920  (orig 0x868920, strlit-flag-ret)
void *main_f_868920(void* a0) { static char g_f_868920[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868920; }

// sub_868940  (orig 0x868940, strlit-flag-ret)
void *main_f_868940(void* a0) { static char g_f_868940[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_868940; }

// sub_868960  (orig 0x868960, strlit-flag-ret)
void *main_f_868960(void* a0) { static char g_f_868960[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868960; }

// sub_868980  (orig 0x868980, strlit-flag-ret)
void *main_f_868980(void* a0) { static char g_f_868980[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_868980; }

// sub_8689a0  (orig 0x8689a0, strlit-flag-ret)
void *main_f_8689a0(void* a0) { static char g_f_8689a0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8689a0; }

// sub_8689c0  (orig 0x8689c0, strlit-flag-ret)
void *main_f_8689c0(void* a0) { static char g_f_8689c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8689c0; }

// sub_8689e0  (orig 0x8689e0, strlit-flag-ret)
void *main_f_8689e0(void* a0) { static char g_f_8689e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8689e0; }

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

// sub_87d610  (orig 0x87d610, strlit-flag-ret)
void *main_f_87d610(void* a0) { static char g_f_87d610[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d610; }

// sub_87d630  (orig 0x87d630, strlit-flag-ret)
void *main_f_87d630(void* a0) { static char g_f_87d630[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_87d630; }

// sub_87d650  (orig 0x87d650, strlit-flag-ret)
void *main_f_87d650(void* a0) { static char g_f_87d650[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d650; }

// sub_87d670  (orig 0x87d670, strlit-flag-ret)
void *main_f_87d670(void* a0) { static char g_f_87d670[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d670; }

// sub_87d690  (orig 0x87d690, strlit-flag-ret)
void *main_f_87d690(void* a0) { static char g_f_87d690[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d690; }

// sub_87d6b0  (orig 0x87d6b0, strlit-flag-ret)
void *main_f_87d6b0(void* a0) { static char g_f_87d6b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d6b0; }

// sub_87d6d0  (orig 0x87d6d0, strlit-flag-ret)
void *main_f_87d6d0(void* a0) { static char g_f_87d6d0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_87d6d0; }

// sub_87d740  (orig 0x87d740, strlit-flag-ret)
void *main_f_87d740(void* a0) { static char g_f_87d740[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87d740; }

// sub_87dad0  (orig 0x87dad0, ret_only)
void main_f_87dad0() {}

// sub_87e6b0  (orig 0x87e6b0, strlit-flag-ret)
void *main_f_87e6b0(void* a0) { static char g_f_87e6b0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_87e6b0; }

// sub_87e7c0  (orig 0x87e7c0, strlit-flag-ret)
void *main_f_87e7c0(void* a0) { static char g_f_87e7c0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_87e7c0; }

// sub_87e8b0  (orig 0x87e8b0, strlit-flag-ret)
void *main_f_87e8b0(void* a0) { static char g_f_87e8b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87e8b0; }

// sub_87e980  (orig 0x87e980, strlit-flag-ret)
void *main_f_87e980(void* a0) { static char g_f_87e980[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87e980; }

// sub_87ea10  (orig 0x87ea10, strlit-flag-ret)
void *main_f_87ea10(void* a0) { static char g_f_87ea10[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87ea10; }

// sub_87eb10  (orig 0x87eb10, strlit-flag-ret)
void *main_f_87eb10(void* a0) { static char g_f_87eb10[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87eb10; }

// sub_87eb90  (orig 0x87eb90, strlit-flag-ret)
void *main_f_87eb90(void* a0) { static char g_f_87eb90[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87eb90; }

// sub_87ec20  (orig 0x87ec20, strlit-flag-ret)
void *main_f_87ec20(void* a0) { static char g_f_87ec20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87ec20; }

// sub_87eca0  (orig 0x87eca0, strlit-flag-ret)
void *main_f_87eca0(void* a0) { static char g_f_87eca0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_87eca0; }

// sub_87ee30  (orig 0x87ee30, strlit-flag-ret)
void *main_f_87ee30(void* a0) { static char g_f_87ee30[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_87ee30; }

// sub_87f110  (orig 0x87f110, strlit-flag-ret)
void *main_f_87f110(void* a0) { static char g_f_87f110[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f110; }

// sub_87f180  (orig 0x87f180, strlit-flag-ret)
void *main_f_87f180(void* a0) { static char g_f_87f180[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_87f180; }

// sub_87f270  (orig 0x87f270, strlit-flag-ret)
void *main_f_87f270(void* a0) { static char g_f_87f270[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_87f270; }

// sub_87f360  (orig 0x87f360, strlit-flag-ret)
void *main_f_87f360(void* a0) { static char g_f_87f360[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f360; }

// sub_87f3e0  (orig 0x87f3e0, strlit-flag-ret)
void *main_f_87f3e0(void* a0) { static char g_f_87f3e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f3e0; }

// sub_87f460  (orig 0x87f460, strlit-flag-ret)
void *main_f_87f460(void* a0) { static char g_f_87f460[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f460; }

// sub_87f4e0  (orig 0x87f4e0, strlit-flag-ret)
void *main_f_87f4e0(void* a0) { static char g_f_87f4e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f4e0; }

// sub_87f5b0  (orig 0x87f5b0, strlit-flag-ret)
void *main_f_87f5b0(void* a0) { static char g_f_87f5b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f5b0; }

// sub_87f630  (orig 0x87f630, strlit-flag-ret)
void *main_f_87f630(void* a0) { static char g_f_87f630[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f630; }

// sub_87f6f0  (orig 0x87f6f0, strlit-flag-ret)
void *main_f_87f6f0(void* a0) { static char g_f_87f6f0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f6f0; }

// sub_87f7b0  (orig 0x87f7b0, strlit-flag-ret)
void *main_f_87f7b0(void* a0) { static char g_f_87f7b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f7b0; }

// sub_87f870  (orig 0x87f870, strlit-flag-ret)
void *main_f_87f870(void* a0) { static char g_f_87f870[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f870; }

// sub_87f930  (orig 0x87f930, strlit-flag-ret)
void *main_f_87f930(void* a0) { static char g_f_87f930[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f930; }

// sub_87f9e0  (orig 0x87f9e0, strlit-flag-ret)
void *main_f_87f9e0(void* a0) { static char g_f_87f9e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_87f9e0; }

// sub_87fb70  (orig 0x87fb70, strlit-flag-ret)
void *main_f_87fb70(void* a0) { static char g_f_87fb70[1]; *(uint32_t *)((char*)(a0)) = 10; __asm__ volatile("" ::: "memory"); return g_f_87fb70; }

// sub_880210  (orig 0x880210, strlit-flag-ret)
void *main_f_880210(void* a0) { static char g_f_880210[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880210; }

// sub_880300  (orig 0x880300, strlit-flag-ret)
void *main_f_880300(void* a0) { static char g_f_880300[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880300; }

// sub_880380  (orig 0x880380, strlit-flag-ret)
void *main_f_880380(void* a0) { static char g_f_880380[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880380; }

// sub_880400  (orig 0x880400, strlit-flag-ret)
void *main_f_880400(void* a0) { static char g_f_880400[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880400; }

// sub_8804a0  (orig 0x8804a0, strlit-flag-ret)
void *main_f_8804a0(void* a0) { static char g_f_8804a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8804a0; }

// sub_880540  (orig 0x880540, strlit-flag-ret)
void *main_f_880540(void* a0) { static char g_f_880540[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880540; }

// sub_8805b0  (orig 0x8805b0, strlit-flag-ret)
void *main_f_8805b0(void* a0) { static char g_f_8805b0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8805b0; }

// sub_8807b0  (orig 0x8807b0, strlit-flag-ret)
void *main_f_8807b0(void* a0) { static char g_f_8807b0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8807b0; }

// sub_880840  (orig 0x880840, strlit-flag-ret)
void *main_f_880840(void* a0) { static char g_f_880840[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_880840; }

// sub_880880  (orig 0x880880, strlit-flag-ret)
void *main_f_880880(void* a0) { static char g_f_880880[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_880880; }

// sub_880910  (orig 0x880910, strlit-flag-ret)
void *main_f_880910(void* a0) { static char g_f_880910[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_880910; }

// sub_880a90  (orig 0x880a90, strlit-flag-ret)
void *main_f_880a90(void* a0) { static char g_f_880a90[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_880a90; }

// sub_880bf0  (orig 0x880bf0, strlit-flag-ret)
void *main_f_880bf0(void* a0) { static char g_f_880bf0[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_880bf0; }

// sub_880d30  (orig 0x880d30, strlit-flag-ret)
void *main_f_880d30(void* a0) { static char g_f_880d30[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_880d30; }

// sub_880de0  (orig 0x880de0, strlit-flag-ret)
void *main_f_880de0(void* a0) { static char g_f_880de0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_880de0; }

// sub_880ec0  (orig 0x880ec0, strlit-flag-ret)
void *main_f_880ec0(void* a0) { static char g_f_880ec0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_880ec0; }

// sub_880f70  (orig 0x880f70, strlit-flag-ret)
void *main_f_880f70(void* a0) { static char g_f_880f70[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_880f70; }

// sub_8811b0  (orig 0x8811b0, strlit-flag-ret)
void *main_f_8811b0(void* a0) { static char g_f_8811b0[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_8811b0; }

// sub_881470  (orig 0x881470, strlit-flag-ret)
void *main_f_881470(void* a0) { static char g_f_881470[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_881470; }

// sub_8817a0  (orig 0x8817a0, strlit-flag-ret)
void *main_f_8817a0(void* a0) { static char g_f_8817a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8817a0; }

// sub_881890  (orig 0x881890, strlit-flag-ret)
void *main_f_881890(void* a0) { static char g_f_881890[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_881890; }

// sub_881980  (orig 0x881980, strlit-flag-ret)
void *main_f_881980(void* a0) { static char g_f_881980[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_881980; }

// sub_881a70  (orig 0x881a70, strlit-flag-ret)
void *main_f_881a70(void* a0) { static char g_f_881a70[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_881a70; }

// sub_881b70  (orig 0x881b70, strlit-flag-ret)
void *main_f_881b70(void* a0) { static char g_f_881b70[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_881b70; }

// sub_881c60  (orig 0x881c60, strlit-flag-ret)
void *main_f_881c60(void* a0) { static char g_f_881c60[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_881c60; }

// sub_881e40  (orig 0x881e40, strlit-flag-ret)
void *main_f_881e40(void* a0) { static char g_f_881e40[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_881e40; }

// sub_882020  (orig 0x882020, strlit-flag-ret)
void *main_f_882020(void* a0) { static char g_f_882020[1]; *(uint32_t *)((char*)(a0)) = 7; __asm__ volatile("" ::: "memory"); return g_f_882020; }

// sub_882200  (orig 0x882200, strlit-flag-ret)
void *main_f_882200(void* a0) { static char g_f_882200[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_882200; }

// sub_8822c0  (orig 0x8822c0, strlit-flag-ret)
void *main_f_8822c0(void* a0) { static char g_f_8822c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8822c0; }

// sub_882400  (orig 0x882400, strlit-flag-ret)
void *main_f_882400(void* a0) { static char g_f_882400[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882400; }

// sub_882430  (orig 0x882430, strlit-flag-ret)
void *main_f_882430(void* a0) { static char g_f_882430[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_882430; }

// sub_8825a0  (orig 0x8825a0, strlit-flag-ret)
void *main_f_8825a0(void* a0) { static char g_f_8825a0[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_8825a0; }

// sub_8827b0  (orig 0x8827b0, strlit-flag-ret)
void *main_f_8827b0(void* a0) { static char g_f_8827b0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8827b0; }

// sub_882880  (orig 0x882880, strlit-flag-ret)
void *main_f_882880(void* a0) { static char g_f_882880[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882880; }

// sub_882970  (orig 0x882970, strlit-flag-ret)
void *main_f_882970(void* a0) { static char g_f_882970[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882970; }

// sub_882a40  (orig 0x882a40, strlit-flag-ret)
void *main_f_882a40(void* a0) { static char g_f_882a40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882a40; }

// sub_882b30  (orig 0x882b30, strlit-flag-ret)
void *main_f_882b30(void* a0) { static char g_f_882b30[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882b30; }

// sub_882ba0  (orig 0x882ba0, strlit-flag-ret)
void *main_f_882ba0(void* a0) { static char g_f_882ba0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882ba0; }

// sub_882c20  (orig 0x882c20, strlit-flag-ret)
void *main_f_882c20(void* a0) { static char g_f_882c20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882c20; }

// sub_882d50  (orig 0x882d50, strlit-flag-ret)
void *main_f_882d50(void* a0) { static char g_f_882d50[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882d50; }

// sub_882ea0  (orig 0x882ea0, strlit-flag-ret)
void *main_f_882ea0(void* a0) { static char g_f_882ea0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882ea0; }

// sub_882f10  (orig 0x882f10, strlit-flag-ret)
void *main_f_882f10(void* a0) { static char g_f_882f10[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882f10; }

// sub_882f80  (orig 0x882f80, strlit-flag-ret)
void *main_f_882f80(void* a0) { static char g_f_882f80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_882f80; }

// sub_8830a0  (orig 0x8830a0, strlit-flag-ret)
void *main_f_8830a0(void* a0) { static char g_f_8830a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8830a0; }

// sub_8831b0  (orig 0x8831b0, strlit-flag-ret)
void *main_f_8831b0(void* a0) { static char g_f_8831b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8831b0; }

// sub_883310  (orig 0x883310, strlit-flag-ret)
void *main_f_883310(void* a0) { static char g_f_883310[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_883310; }

// sub_883640  (orig 0x883640, strlit-flag-ret)
void *main_f_883640(void* a0) { static char g_f_883640[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_883640; }

// sub_883750  (orig 0x883750, strlit-flag-ret)
void *main_f_883750(void* a0) { static char g_f_883750[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_883750; }

// sub_8838c0  (orig 0x8838c0, strlit-flag-ret)
void *main_f_8838c0(void* a0) { static char g_f_8838c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8838c0; }

// sub_883930  (orig 0x883930, strlit-flag-ret)
void *main_f_883930(void* a0) { static char g_f_883930[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_883930; }

// sub_883a80  (orig 0x883a80, strlit-flag-ret)
void *main_f_883a80(void* a0) { static char g_f_883a80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_883a80; }

// sub_883cd0  (orig 0x883cd0, strlit-flag-ret)
void *main_f_883cd0(void* a0) { static char g_f_883cd0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_883cd0; }

// sub_883d80  (orig 0x883d80, strlit-flag-ret)
void *main_f_883d80(void* a0) { static char g_f_883d80[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_883d80; }

// sub_883ec0  (orig 0x883ec0, strlit-flag-ret)
void *main_f_883ec0(void* a0) { static char g_f_883ec0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_883ec0; }

// sub_884100  (orig 0x884100, strlit-flag-ret)
void *main_f_884100(void* a0) { static char g_f_884100[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_884100; }

// sub_884320  (orig 0x884320, strlit-flag-ret)
void *main_f_884320(void* a0) { static char g_f_884320[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_884320; }

// sub_8844c0  (orig 0x8844c0, strlit-flag-ret)
void *main_f_8844c0(void* a0) { static char g_f_8844c0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8844c0; }

// sub_8846f0  (orig 0x8846f0, strlit-flag-ret)
void *main_f_8846f0(void* a0) { static char g_f_8846f0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8846f0; }

// sub_884820  (orig 0x884820, strlit-flag-ret)
void *main_f_884820(void* a0) { static char g_f_884820[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_884820; }

// sub_884b50  (orig 0x884b50, strlit-flag-ret)
void *main_f_884b50(void* a0) { static char g_f_884b50[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_884b50; }

// sub_884dc0  (orig 0x884dc0, strlit-flag-ret)
void *main_f_884dc0(void* a0) { static char g_f_884dc0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_884dc0; }

// sub_884ea0  (orig 0x884ea0, strlit-flag-ret)
void *main_f_884ea0(void* a0) { static char g_f_884ea0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_884ea0; }

// sub_884f70  (orig 0x884f70, strlit-flag-ret)
void *main_f_884f70(void* a0) { static char g_f_884f70[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_884f70; }

// sub_885040  (orig 0x885040, strlit-flag-ret)
void *main_f_885040(void* a0) { static char g_f_885040[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_885040; }

// sub_885120  (orig 0x885120, strlit-flag-ret)
void *main_f_885120(void* a0) { static char g_f_885120[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_885120; }

// sub_8852d0  (orig 0x8852d0, strlit-flag-ret)
void *main_f_8852d0(void* a0) { static char g_f_8852d0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8852d0; }

// sub_8853e0  (orig 0x8853e0, strlit-flag-ret)
void *main_f_8853e0(void* a0) { static char g_f_8853e0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_8853e0; }

// sub_885580  (orig 0x885580, strlit-flag-ret)
void *main_f_885580(void* a0) { static char g_f_885580[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_885580; }

// sub_885680  (orig 0x885680, strlit-flag-ret)
void *main_f_885680(void* a0) { static char g_f_885680[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_885680; }

// sub_885910  (orig 0x885910, strlit-flag-ret)
void *main_f_885910(void* a0) { static char g_f_885910[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_885910; }

// sub_885aa0  (orig 0x885aa0, tailcall)
void main_f_885aa0() { main::sub_819850(); }

// sub_885b20  (orig 0x885b20, strlit-flag-ret)
void *main_f_885b20(void* a0) { static char g_f_885b20[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_885b20; }

// sub_885db0  (orig 0x885db0, strlit-flag-ret)
void *main_f_885db0(void* a0) { static char g_f_885db0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_885db0; }

// sub_885f50  (orig 0x885f50, strlit-flag-ret)
void *main_f_885f50(void* a0) { static char g_f_885f50[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_885f50; }

// sub_885f70  (orig 0x885f70, tailcall)
void main_f_885f70() { main::sub_81b550(); }

// sub_886010  (orig 0x886010, strlit-flag-ret)
void *main_f_886010(void* a0) { static char g_f_886010[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_886010; }

// sub_886230  (orig 0x886230, strlit-flag-ret)
void *main_f_886230(void* a0) { static char g_f_886230[1]; *(uint32_t *)((char*)(a0)) = 8; __asm__ volatile("" ::: "memory"); return g_f_886230; }

// sub_8865d0  (orig 0x8865d0, strlit-flag-ret)
void *main_f_8865d0(void* a0) { static char g_f_8865d0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_8865d0; }

// sub_886870  (orig 0x886870, strlit-flag-ret)
void *main_f_886870(void* a0) { static char g_f_886870[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_886870; }

// sub_886a60  (orig 0x886a60, strlit-flag-ret)
void *main_f_886a60(void* a0) { static char g_f_886a60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_886a60; }

// sub_886b40  (orig 0x886b40, strlit-flag-ret)
void *main_f_886b40(void* a0) { static char g_f_886b40[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_886b40; }

// sub_886ca0  (orig 0x886ca0, strlit-flag-ret)
void *main_f_886ca0(void* a0) { static char g_f_886ca0[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_886ca0; }

// sub_887020  (orig 0x887020, strlit-flag-ret)
void *main_f_887020(void* a0) { static char g_f_887020[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_887020; }

// sub_887240  (orig 0x887240, strlit-flag-ret)
void *main_f_887240(void* a0) { static char g_f_887240[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_887240; }

// sub_8873c0  (orig 0x8873c0, strlit-flag-ret)
void *main_f_8873c0(void* a0) { static char g_f_8873c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8873c0; }

// sub_887430  (orig 0x887430, strlit-flag-ret)
void *main_f_887430(void* a0) { static char g_f_887430[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887430; }

// sub_8875a0  (orig 0x8875a0, strlit-flag-ret)
void *main_f_8875a0(void* a0) { static char g_f_8875a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8875a0; }

// sub_8876a0  (orig 0x8876a0, strlit-flag-ret)
void *main_f_8876a0(void* a0) { static char g_f_8876a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8876a0; }

// sub_887780  (orig 0x887780, strlit-flag-ret)
void *main_f_887780(void* a0) { static char g_f_887780[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_887780; }

// sub_887890  (orig 0x887890, strlit-flag-ret)
void *main_f_887890(void* a0) { static char g_f_887890[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887890; }

// sub_887ae0  (orig 0x887ae0, strlit-flag-ret)
void *main_f_887ae0(void* a0) { static char g_f_887ae0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887ae0; }

// sub_887bf0  (orig 0x887bf0, strlit-flag-ret)
void *main_f_887bf0(void* a0) { static char g_f_887bf0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887bf0; }

// sub_887d50  (orig 0x887d50, strlit-flag-ret)
void *main_f_887d50(void* a0) { static char g_f_887d50[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887d50; }

// sub_887ec0  (orig 0x887ec0, strlit-flag-ret)
void *main_f_887ec0(void* a0) { static char g_f_887ec0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_887ec0; }

// sub_888050  (orig 0x888050, strlit-flag-ret)
void *main_f_888050(void* a0) { static char g_f_888050[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_888050; }

// sub_8882f0  (orig 0x8882f0, strlit-flag-ret)
void *main_f_8882f0(void* a0) { static char g_f_8882f0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8882f0; }

// sub_8883e0  (orig 0x8883e0, strlit-flag-ret)
void *main_f_8883e0(void* a0) { static char g_f_8883e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8883e0; }

// sub_8884e0  (orig 0x8884e0, strlit-flag-ret)
void *main_f_8884e0(void* a0) { static char g_f_8884e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8884e0; }

// sub_888590  (orig 0x888590, strlit-flag-ret)
void *main_f_888590(void* a0) { static char g_f_888590[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888590; }

// sub_888610  (orig 0x888610, strlit-flag-ret)
void *main_f_888610(void* a0) { static char g_f_888610[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888610; }

// sub_888690  (orig 0x888690, strlit-flag-ret)
void *main_f_888690(void* a0) { static char g_f_888690[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888690; }

// sub_8887e0  (orig 0x8887e0, strlit-flag-ret)
void *main_f_8887e0(void* a0) { static char g_f_8887e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8887e0; }

// sub_888880  (orig 0x888880, strlit-flag-ret)
void *main_f_888880(void* a0) { static char g_f_888880[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888880; }

// sub_888920  (orig 0x888920, strlit-flag-ret)
void *main_f_888920(void* a0) { static char g_f_888920[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888920; }

// sub_888a40  (orig 0x888a40, strlit-flag-ret)
void *main_f_888a40(void* a0) { static char g_f_888a40[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_888a40; }

// sub_888ee0  (orig 0x888ee0, strlit-flag-ret)
void *main_f_888ee0(void* a0) { static char g_f_888ee0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_888ee0; }

// sub_888f00  (orig 0x888f00, tailcall)
void main_f_888f00() { main::sub_81b6e0(); }

// sub_889100  (orig 0x889100, strlit-flag-ret)
void *main_f_889100(void* a0) { static char g_f_889100[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889100; }

// sub_8891f0  (orig 0x8891f0, strlit-flag-ret)
void *main_f_8891f0(void* a0) { static char g_f_8891f0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8891f0; }

// sub_889230  (orig 0x889230, strlit-flag-ret)
void *main_f_889230(void* a0) { static char g_f_889230[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_889230; }

// sub_8892b0  (orig 0x8892b0, strlit-flag-ret)
void *main_f_8892b0(void* a0) { static char g_f_8892b0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8892b0; }

// sub_889340  (orig 0x889340, strlit-flag-ret)
void *main_f_889340(void* a0) { static char g_f_889340[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889340; }

// sub_8893d0  (orig 0x8893d0, strlit-flag-ret)
void *main_f_8893d0(void* a0) { static char g_f_8893d0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8893d0; }

// sub_889480  (orig 0x889480, strlit-flag-ret)
void *main_f_889480(void* a0) { static char g_f_889480[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_889480; }

// sub_8896c0  (orig 0x8896c0, strlit-flag-ret)
void *main_f_8896c0(void* a0) { static char g_f_8896c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8896c0; }

// sub_889790  (orig 0x889790, strlit-flag-ret)
void *main_f_889790(void* a0) { static char g_f_889790[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_889790; }

// sub_889910  (orig 0x889910, strlit-flag-ret)
void *main_f_889910(void* a0) { static char g_f_889910[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_889910; }

// sub_8899a0  (orig 0x8899a0, strlit-flag-ret)
void *main_f_8899a0(void* a0) { static char g_f_8899a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_8899a0; }

// sub_889a60  (orig 0x889a60, strlit-flag-ret)
void *main_f_889a60(void* a0) { static char g_f_889a60[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889a60; }

// sub_889bb0  (orig 0x889bb0, strlit-flag-ret)
void *main_f_889bb0(void* a0) { static char g_f_889bb0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889bb0; }

// sub_889c80  (orig 0x889c80, strlit-flag-ret)
void *main_f_889c80(void* a0) { static char g_f_889c80[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_889c80; }

// sub_889ea0  (orig 0x889ea0, strlit-flag-ret)
void *main_f_889ea0(void* a0) { static char g_f_889ea0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889ea0; }

// sub_889f80  (orig 0x889f80, strlit-flag-ret)
void *main_f_889f80(void* a0) { static char g_f_889f80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_889f80; }

// sub_88a100  (orig 0x88a100, strlit-flag-ret)
void *main_f_88a100(void* a0) { static char g_f_88a100[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a100; }

// sub_88a240  (orig 0x88a240, strlit-flag-ret)
void *main_f_88a240(void* a0) { static char g_f_88a240[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a240; }

// sub_88a340  (orig 0x88a340, strlit-flag-ret)
void *main_f_88a340(void* a0) { static char g_f_88a340[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a340; }

// sub_88a420  (orig 0x88a420, strlit-flag-ret)
void *main_f_88a420(void* a0) { static char g_f_88a420[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88a420; }

// sub_88a580  (orig 0x88a580, tailcall)
void main_f_88a580() { main::sub_81b230(); }

// sub_88a590  (orig 0x88a590, tailcall)
void main_f_88a590() { main::sub_81b320(); }

// sub_88a610  (orig 0x88a610, strlit-flag-ret)
void *main_f_88a610(void* a0) { static char g_f_88a610[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88a610; }

// sub_88a630  (orig 0x88a630, strlit-flag-ret)
void *main_f_88a630(void* a0) { static char g_f_88a630[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a630; }

// sub_88a760  (orig 0x88a760, strlit-flag-ret)
void *main_f_88a760(void* a0) { static char g_f_88a760[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a760; }

// sub_88a7d0  (orig 0x88a7d0, strlit-flag-ret)
void *main_f_88a7d0(void* a0) { static char g_f_88a7d0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a7d0; }

// sub_88a840  (orig 0x88a840, strlit-flag-ret)
void *main_f_88a840(void* a0) { static char g_f_88a840[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88a840; }

// sub_88a8d0  (orig 0x88a8d0, strlit-flag-ret)
void *main_f_88a8d0(void* a0) { static char g_f_88a8d0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88a8d0; }

// sub_88aa30  (orig 0x88aa30, strlit-flag-ret)
void *main_f_88aa30(void* a0) { static char g_f_88aa30[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88aa30; }

// sub_88ab80  (orig 0x88ab80, strlit-flag-ret)
void *main_f_88ab80(void* a0) { static char g_f_88ab80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88ab80; }

// sub_88ac00  (orig 0x88ac00, strlit-flag-ret)
void *main_f_88ac00(void* a0) { static char g_f_88ac00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88ac00; }

// sub_88ad30  (orig 0x88ad30, strlit-flag-ret)
void *main_f_88ad30(void* a0) { static char g_f_88ad30[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88ad30; }

// sub_88aef0  (orig 0x88aef0, strlit-flag-ret)
void *main_f_88aef0(void* a0) { static char g_f_88aef0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88aef0; }

// sub_88af70  (orig 0x88af70, strlit-flag-ret)
void *main_f_88af70(void* a0) { static char g_f_88af70[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88af70; }

// sub_88b050  (orig 0x88b050, strlit-flag-ret)
void *main_f_88b050(void* a0) { static char g_f_88b050[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_88b050; }

// sub_88b340  (orig 0x88b340, strlit-flag-ret)
void *main_f_88b340(void* a0) { static char g_f_88b340[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88b340; }

// sub_88b470  (orig 0x88b470, strlit-flag-ret)
void *main_f_88b470(void* a0) { static char g_f_88b470[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88b470; }

// sub_88b620  (orig 0x88b620, strlit-flag-ret)
void *main_f_88b620(void* a0) { static char g_f_88b620[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88b620; }

// sub_88b750  (orig 0x88b750, strlit-flag-ret)
void *main_f_88b750(void* a0) { static char g_f_88b750[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88b750; }

// sub_88b820  (orig 0x88b820, strlit-flag-ret)
void *main_f_88b820(void* a0) { static char g_f_88b820[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88b820; }

// sub_88b950  (orig 0x88b950, strlit-flag-ret)
void *main_f_88b950(void* a0) { static char g_f_88b950[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88b950; }

// sub_88b9f0  (orig 0x88b9f0, strlit-flag-ret)
void *main_f_88b9f0(void* a0) { static char g_f_88b9f0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88b9f0; }

// sub_88ba90  (orig 0x88ba90, strlit-flag-ret)
void *main_f_88ba90(void* a0) { static char g_f_88ba90[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88ba90; }

// sub_88bad0  (orig 0x88bad0, strlit-flag-ret)
void *main_f_88bad0(void* a0) { static char g_f_88bad0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88bad0; }

// sub_88bb50  (orig 0x88bb50, strlit-flag-ret)
void *main_f_88bb50(void* a0) { static char g_f_88bb50[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_88bb50; }

// sub_88bd70  (orig 0x88bd70, strlit-flag-ret)
void *main_f_88bd70(void* a0) { static char g_f_88bd70[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88bd70; }

// sub_88bdf0  (orig 0x88bdf0, strlit-flag-ret)
void *main_f_88bdf0(void* a0) { static char g_f_88bdf0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88bdf0; }

// sub_88be80  (orig 0x88be80, strlit-flag-ret)
void *main_f_88be80(void* a0) { static char g_f_88be80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88be80; }

// sub_88bfa0  (orig 0x88bfa0, strlit-flag-ret)
void *main_f_88bfa0(void* a0) { static char g_f_88bfa0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88bfa0; }

// sub_88c020  (orig 0x88c020, strlit-flag-ret)
void *main_f_88c020(void* a0) { static char g_f_88c020[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88c020; }

// sub_88c1a0  (orig 0x88c1a0, strlit-flag-ret)
void *main_f_88c1a0(void* a0) { static char g_f_88c1a0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88c1a0; }

// sub_88c310  (orig 0x88c310, strlit-flag-ret)
void *main_f_88c310(void* a0) { static char g_f_88c310[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88c310; }

// sub_88c480  (orig 0x88c480, strlit-flag-ret)
void *main_f_88c480(void* a0) { static char g_f_88c480[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88c480; }

// sub_88c590  (orig 0x88c590, strlit-flag-ret)
void *main_f_88c590(void* a0) { static char g_f_88c590[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88c590; }

// sub_88c630  (orig 0x88c630, strlit-flag-ret)
void *main_f_88c630(void* a0) { static char g_f_88c630[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88c630; }

// sub_88c730  (orig 0x88c730, strlit-flag-ret)
void *main_f_88c730(void* a0) { static char g_f_88c730[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88c730; }

// sub_88c7f0  (orig 0x88c7f0, strlit-flag-ret)
void *main_f_88c7f0(void* a0) { static char g_f_88c7f0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88c7f0; }

// sub_88c810  (orig 0x88c810, tailcall)
void main_f_88c810() { main::sub_81b860(); }

// sub_88ca30  (orig 0x88ca30, strlit-flag-ret)
void *main_f_88ca30(void* a0) { static char g_f_88ca30[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88ca30; }

// sub_88cd70  (orig 0x88cd70, strlit-flag-ret)
void *main_f_88cd70(void* a0) { static char g_f_88cd70[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88cd70; }

// sub_88cde0  (orig 0x88cde0, tailcall)
void main_f_88cde0() { main::sub_88cec0(); }

// sub_88cfa0  (orig 0x88cfa0, strlit-flag-ret)
void *main_f_88cfa0(void* a0) { static char g_f_88cfa0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88cfa0; }

// sub_88d080  (orig 0x88d080, strlit-flag-ret)
void *main_f_88d080(void* a0) { static char g_f_88d080[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d080; }

// sub_88d150  (orig 0x88d150, strlit-flag-ret)
void *main_f_88d150(void* a0) { static char g_f_88d150[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_88d150; }

// sub_88d210  (orig 0x88d210, strlit-flag-ret)
void *main_f_88d210(void* a0) { static char g_f_88d210[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d210; }

// sub_88d290  (orig 0x88d290, strlit-flag-ret)
void *main_f_88d290(void* a0) { static char g_f_88d290[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d290; }

// sub_88d310  (orig 0x88d310, strlit-flag-ret)
void *main_f_88d310(void* a0) { static char g_f_88d310[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d310; }

// sub_88d3a0  (orig 0x88d3a0, strlit-flag-ret)
void *main_f_88d3a0(void* a0) { static char g_f_88d3a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d3a0; }

// sub_88d420  (orig 0x88d420, strlit-flag-ret)
void *main_f_88d420(void* a0) { static char g_f_88d420[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d420; }

// sub_88d4b0  (orig 0x88d4b0, strlit-flag-ret)
void *main_f_88d4b0(void* a0) { static char g_f_88d4b0[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88d4b0; }

// sub_88d620  (orig 0x88d620, strlit-flag-ret)
void *main_f_88d620(void* a0) { static char g_f_88d620[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d620; }

// sub_88d6a0  (orig 0x88d6a0, strlit-flag-ret)
void *main_f_88d6a0(void* a0) { static char g_f_88d6a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d6a0; }

// sub_88d730  (orig 0x88d730, strlit-flag-ret)
void *main_f_88d730(void* a0) { static char g_f_88d730[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d730; }

// sub_88d7a0  (orig 0x88d7a0, strlit-flag-ret)
void *main_f_88d7a0(void* a0) { static char g_f_88d7a0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d7a0; }

// sub_88d8c0  (orig 0x88d8c0, strlit-flag-ret)
void *main_f_88d8c0(void* a0) { static char g_f_88d8c0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d8c0; }

// sub_88d960  (orig 0x88d960, strlit-flag-ret)
void *main_f_88d960(void* a0) { static char g_f_88d960[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d960; }

// sub_88d9e0  (orig 0x88d9e0, strlit-flag-ret)
void *main_f_88d9e0(void* a0) { static char g_f_88d9e0[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88d9e0; }

// sub_88da80  (orig 0x88da80, strlit-flag-ret)
void *main_f_88da80(void* a0) { static char g_f_88da80[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88da80; }

// sub_88db00  (orig 0x88db00, strlit-flag-ret)
void *main_f_88db00(void* a0) { static char g_f_88db00[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88db00; }

// sub_88dc10  (orig 0x88dc10, strlit-flag-ret)
void *main_f_88dc10(void* a0) { static char g_f_88dc10[1]; *(uint32_t *)((char*)(a0)) = 4; __asm__ volatile("" ::: "memory"); return g_f_88dc10; }

// sub_88de30  (orig 0x88de30, strlit-flag-ret)
void *main_f_88de30(void* a0) { static char g_f_88de30[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_88de30; }

// sub_88dea0  (orig 0x88dea0, tailcall)
void main_f_88dea0() { main::sub_88df70(); }

// sub_88e050  (orig 0x88e050, strlit-flag-ret)
void *main_f_88e050(void* a0) { static char g_f_88e050[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88e050; }

// sub_88e1a0  (orig 0x88e1a0, strlit-flag-ret)
void *main_f_88e1a0(void* a0) { static char g_f_88e1a0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88e1a0; }

// sub_88e440  (orig 0x88e440, strlit-flag-ret)
void *main_f_88e440(void* a0) { static char g_f_88e440[1]; *(uint32_t *)((char*)(a0)) = 6; __asm__ volatile("" ::: "memory"); return g_f_88e440; }

// sub_88ea20  (orig 0x88ea20, strlit-flag-ret)
void *main_f_88ea20(void* a0) { static char g_f_88ea20[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88ea20; }

// sub_88ead0  (orig 0x88ead0, strlit-flag-ret)
void *main_f_88ead0(void* a0) { static char g_f_88ead0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88ead0; }

// sub_88ed70  (orig 0x88ed70, strlit-flag-ret)
void *main_f_88ed70(void* a0) { static char g_f_88ed70[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88ed70; }

// sub_88ee00  (orig 0x88ee00, strlit-flag-ret)
void *main_f_88ee00(void* a0) { static char g_f_88ee00[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88ee00; }

// sub_88eee0  (orig 0x88eee0, strlit-flag-ret)
void *main_f_88eee0(void* a0) { static char g_f_88eee0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88eee0; }

// sub_88efc0  (orig 0x88efc0, strlit-flag-ret)
void *main_f_88efc0(void* a0) { static char g_f_88efc0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88efc0; }

// sub_88f0a0  (orig 0x88f0a0, strlit-flag-ret)
void *main_f_88f0a0(void* a0) { static char g_f_88f0a0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_88f0a0; }

// sub_88f180  (orig 0x88f180, strlit-flag-ret)
void *main_f_88f180(void* a0) { static char g_f_88f180[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88f180; }

// sub_88f330  (orig 0x88f330, strlit-flag-ret)
void *main_f_88f330(void* a0) { static char g_f_88f330[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_88f330; }

// sub_88f3c0  (orig 0x88f3c0, strlit-flag-ret)
void *main_f_88f3c0(void* a0) { static char g_f_88f3c0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88f3c0; }

// sub_88f690  (orig 0x88f690, strlit-flag-ret)
void *main_f_88f690(void* a0) { static char g_f_88f690[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_88f690; }

// sub_88faf0  (orig 0x88faf0, strlit-flag-ret)
void *main_f_88faf0(void* a0) { static char g_f_88faf0[1]; *(uint32_t *)((char*)(a0)) = 8; __asm__ volatile("" ::: "memory"); return g_f_88faf0; }

// sub_88fff0  (orig 0x88fff0, strlit-flag-ret)
void *main_f_88fff0(void* a0) { static char g_f_88fff0[1]; *(uint32_t *)((char*)(a0)) = 3; __asm__ volatile("" ::: "memory"); return g_f_88fff0; }

// sub_890400  (orig 0x890400, strlit-flag-ret)
void *main_f_890400(void* a0) { static char g_f_890400[1]; *(uint32_t *)((char*)(a0)) = 5; __asm__ volatile("" ::: "memory"); return g_f_890400; }

// sub_890530  (orig 0x890530, strlit-flag-ret)
void *main_f_890530(void* a0) { static char g_f_890530[1]; *(uint32_t *)((char*)(a0)) = 1; __asm__ volatile("" ::: "memory"); return g_f_890530; }

// sub_8905b0  (orig 0x8905b0, strlit-flag-ret)
void *main_f_8905b0(void* a0) { static char g_f_8905b0[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_8905b0; }

// sub_890670  (orig 0x890670, strlit-flag-ret)
void *main_f_890670(void* a0) { static char g_f_890670[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_890670; }

// sub_890730  (orig 0x890730, strlit-flag-ret)
void *main_f_890730(void* a0) { static char g_f_890730[1]; *(uint32_t *)((char*)(a0)) = 2; __asm__ volatile("" ::: "memory"); return g_f_890730; }

// sub_890c10  (orig 0x890c10, straight)
void main_f_890c10(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 8) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a1) + 16);
    *(uint64_t*)((char*)(a0) + 24) = *(uint64_t*)((char*)(a1) + 24);
}

// sub_891d60  (orig 0x891d60, tailcall)
void main_f_891d60() { main::sub_891bf0(); }

// sub_892310  (orig 0x892310, getter)
uint16_t main_f_892310(void* a0) { return *(uint16_t*)((char*)(a0)); }

// sub_892320  (orig 0x892320, getter)
uint8_t main_f_892320(void* a0) { return *(uint8_t*)((char*)(a0) + 6); }

// sub_892330  (orig 0x892330, getter)
uint8_t main_f_892330(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_892340  (orig 0x892340, ptr_add)
void* main_f_892340(void* a0) { return (char*)a0 + 8; }

// sub_892350  (orig 0x892350, getter)
uint16_t main_f_892350(void* a0) { return *(uint16_t*)((char*)(a0) + 4); }

// sub_892380  (orig 0x892380, straight)
void main_f_892380(void* a0) {
    *(uint64_t*)((char*)(a0) + 8) = 14355223812243456;
}

// sub_8923d0  (orig 0x8923d0, ptr_add)
void* main_f_8923d0(void* a0) { return (char*)a0 + 8; }

// sub_8923e0  (orig 0x8923e0, ret_only)
void main_f_8923e0() {}

// sub_8923f0  (orig 0x8923f0, tailcall)
void main_f_8923f0() { main::sub_ce0(); }

// sub_892490  (orig 0x892490, getter)
uint16_t main_f_892490(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_8924a0  (orig 0x8924a0, getter)
uint8_t main_f_8924a0(void* a0) { return *(uint8_t*)((char*)(a0) + 14); }

// sub_8924b0  (orig 0x8924b0, getter)
uint8_t main_f_8924b0(void* a0) { return *(uint8_t*)((char*)(a0) + 10); }

// sub_8924c0  (orig 0x8924c0, ptr_add)
void* main_f_8924c0(void* a0) { return (char*)a0 + 16; }

// sub_8924d0  (orig 0x8924d0, getter)
uint16_t main_f_8924d0(void* a0) { return *(uint16_t*)((char*)(a0) + 12); }

// sub_8925a0  (orig 0x8925a0, getter)
uint8_t main_f_8925a0(void* a0) { return *(uint8_t*)((char*)(a0) + 132); }

// sub_8925b0  (orig 0x8925b0, getter)
uint8_t main_f_8925b0(void* a0) { return *(uint8_t*)((char*)(a0) + 131); }

// sub_8925c0  (orig 0x8925c0, setter)
void main_f_8925c0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 72) = a1; }

// sub_892af0  (orig 0x892af0, ret_only)
void main_f_892af0() {}

// sub_892b00  (orig 0x892b00, tailcall)
void main_f_892b00() { main::sub_ce0(); }

// sub_892b10  (orig 0x892b10, setter)
void main_f_892b10(void* a0) { *(uint32_t*)((char*)(a0)) = 0; }

// sub_892b20  (orig 0x892b20, ret_only)
void main_f_892b20() {}

// sub_892bd0  (orig 0x892bd0, setter)
void main_f_892bd0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_892be0  (orig 0x892be0, ret_only)
void main_f_892be0() {}

// sub_8939b0  (orig 0x8939b0, tailcall)
void main_f_8939b0() { main::sub_8935e0(); }

// sub_8944f0  (orig 0x8944f0, setter)
void main_f_8944f0(void* a0) { *(uint64_t*)((char*)(a0) + 856) = 0; }

// sub_894500  (orig 0x894500, getter)
uint8_t main_f_894500(void* a0) { return *(uint8_t*)((char*)(a0) + 321); }

// sub_894f90  (orig 0x894f90, compare)
bool main_f_894f90(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 529)) != (uint64_t)(5); }

// sub_895540  (orig 0x895540, getter)
uint8_t main_f_895540(void* a0) { return *(uint8_t*)((char*)(a0) + 564); }

// sub_895550  (orig 0x895550, ptr_add)
void* main_f_895550(void* a0) { return (char*)a0 + 544; }

// sub_896c60  (orig 0x896c60, setter)
void main_f_896c60(void* a0) { *(uint64_t*)((char*)(a0) + 864) = 0; }

// sub_898320  (orig 0x898320, straight)
void main_f_898320(void* a0) {
    *(uint8_t*)((char*)(a0) + 321) = (uint8_t)(1);
}

// sub_898330  (orig 0x898330, straight)
void main_f_898330(void* a0) {
    *(uint8_t*)((char*)(a0) + 217) = (uint8_t)(1);
}

// sub_898340  (orig 0x898340, setter)
void main_f_898340(void* a0) { *(uint8_t*)((char*)(a0) + 321) = 0; }

// sub_898350  (orig 0x898350, setter)
void main_f_898350(void* a0) { *(uint8_t*)((char*)(a0) + 217) = 0; }

// sub_898360  (orig 0x898360, straight)
void main_f_898360(void* a0) {
    *(uint8_t*)((char*)(a0) + 321) = (uint8_t)(1);
}

// sub_898370  (orig 0x898370, straight)
void main_f_898370(void* a0) {
    *(uint8_t*)((char*)(a0) + 217) = (uint8_t)(1);
}

// sub_898b40  (orig 0x898b40, setter)
void main_f_898b40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 944) = a1; }

// sub_898d20  (orig 0x898d20, ret_only)
void main_f_898d20() {}

// sub_898d30  (orig 0x898d30, ret_only)
void main_f_898d30() {}

// sub_898d40  (orig 0x898d40, ret_only)
void main_f_898d40() {}

// sub_898d50  (orig 0x898d50, ret_only)
void main_f_898d50() {}

// sub_898d60  (orig 0x898d60, ret_only)
void main_f_898d60() {}

// sub_898d70  (orig 0x898d70, ret_only)
void main_f_898d70() {}

// sub_8994a0  (orig 0x8994a0, tailcall)
void main_f_8994a0() { main::sub_8992b0(); }

// sub_899e50  (orig 0x899e50, ret_only)
void main_f_899e50() {}

// sub_89a2e0  (orig 0x89a2e0, ret_only)
void main_f_89a2e0() {}

// sub_89a720  (orig 0x89a720, ret_only)
void main_f_89a720() {}

// sub_89ace0  (orig 0x89ace0, ret_only)
void main_f_89ace0() {}

// sub_89b100  (orig 0x89b100, getter)
uint64_t main_f_89b100(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_89b960  (orig 0x89b960, getter)
uint64_t main_f_89b960(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_89dff0  (orig 0x89dff0, setter)
void main_f_89dff0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_89e150  (orig 0x89e150, setter)
void main_f_89e150(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_89e6d0  (orig 0x89e6d0, mov_ret)
uint32_t main_f_89e6d0() { return 1; }

// sub_89e780  (orig 0x89e780, getter)
uint32_t main_f_89e780(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_89e790  (orig 0x89e790, mov_ret)
uint32_t main_f_89e790() { return 1; }

// sub_89ecf0  (orig 0x89ecf0, setter)
void main_f_89ecf0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_89ee50  (orig 0x89ee50, ret_only)
void main_f_89ee50() {}

// sub_89ef00  (orig 0x89ef00, ret_only)
void main_f_89ef00() {}

// sub_89ef10  (orig 0x89ef10, mov_ret)
uint64_t main_f_89ef10(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_89f100  (orig 0x89f100, mov_ret)
uint32_t main_f_89f100() { return 1; }

// sub_89f1b0  (orig 0x89f1b0, getter)
uint32_t main_f_89f1b0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_89f1c0  (orig 0x89f1c0, mov_ret)
uint32_t main_f_89f1c0() { return 1; }

// sub_89f8a0  (orig 0x89f8a0, setter)
void main_f_89f8a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_8a01c0  (orig 0x8a01c0, mov_ret)
uint32_t main_f_8a01c0() { return 1; }

// sub_8a0350  (orig 0x8a0350, setter)
void main_f_8a0350(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_8a0420  (orig 0x8a0420, ret_only)
void main_f_8a0420() {}

// sub_8a04d0  (orig 0x8a04d0, ret_only)
void main_f_8a04d0() {}

// sub_8a04e0  (orig 0x8a04e0, mov_ret)
uint64_t main_f_8a04e0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_8a0630  (orig 0x8a0630, mov_ret)
uint32_t main_f_8a0630() { return 1; }

// sub_8a06e0  (orig 0x8a06e0, getter)
uint32_t main_f_8a06e0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_8a06f0  (orig 0x8a06f0, mov_ret)
uint32_t main_f_8a06f0() { return 1; }

// sub_8a0730  (orig 0x8a0730, getter)
uint32_t main_f_8a0730(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_8a0740  (orig 0x8a0740, mov_ret)
uint32_t main_f_8a0740() { return 1; }

// sub_8a0750  (orig 0x8a0750, tailcall)
void main_f_8a0750() { battle::battle_battle_command_2(); }

// sub_8a0de0  (orig 0x8a0de0, setter)
void main_f_8a0de0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8a1650  (orig 0x8a1650, mov_ret)
uint32_t main_f_8a1650() { return 1; }

// sub_8a1700  (orig 0x8a1700, getter)
uint32_t main_f_8a1700(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8a1710  (orig 0x8a1710, mov_ret)
uint32_t main_f_8a1710() { return 1; }

// sub_8a1720  (orig 0x8a1720, tailcall)
void main_f_8a1720() { battle::battle_btl_data_holder_2(); }

// sub_8a1c10  (orig 0x8a1c10, setter)
void main_f_8a1c10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_8a23f0  (orig 0x8a23f0, mov_ret)
uint32_t main_f_8a23f0() { return 1; }

// sub_8a24a0  (orig 0x8a24a0, getter)
uint32_t main_f_8a24a0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_8a24b0  (orig 0x8a24b0, mov_ret)
uint32_t main_f_8a24b0() { return 1; }

// sub_8a2ac0  (orig 0x8a2ac0, setter)
void main_f_8a2ac0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_8a3160  (orig 0x8a3160, mov_ret)
uint32_t main_f_8a3160() { return 1; }

// sub_8a3210  (orig 0x8a3210, getter)
uint32_t main_f_8a3210(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_8a3220  (orig 0x8a3220, mov_ret)
uint32_t main_f_8a3220() { return 1; }

// sub_8a3230  (orig 0x8a3230, tailcall)
void main_f_8a3230() { battle::battle_poke_party_2(); }

// sub_8a3700  (orig 0x8a3700, setter)
void main_f_8a3700(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_8a3860  (orig 0x8a3860, setter)
void main_f_8a3860(void* a0) { *(uint32_t*)((char*)(a0) + 20) = 0; }

// sub_8a3c80  (orig 0x8a3c80, mov_ret)
uint32_t main_f_8a3c80() { return 1; }

// sub_8a3d30  (orig 0x8a3d30, getter)
uint32_t main_f_8a3d30(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_8a3d40  (orig 0x8a3d40, mov_ret)
uint32_t main_f_8a3d40() { return 1; }

// sub_8a45d0  (orig 0x8a45d0, setter)
void main_f_8a45d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8a5210  (orig 0x8a5210, mov_ret)
uint32_t main_f_8a5210() { return 1; }

// sub_8a52c0  (orig 0x8a52c0, getter)
uint32_t main_f_8a52c0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8a52d0  (orig 0x8a52d0, mov_ret)
uint32_t main_f_8a52d0() { return 1; }

// sub_8a52e0  (orig 0x8a52e0, tailcall)
void main_f_8a52e0() { battle::battle_btl_cmd_data_holder_2(); }

// sub_8a57b0  (orig 0x8a57b0, setter)
void main_f_8a57b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8a5910  (orig 0x8a5910, setter)
void main_f_8a5910(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8a5e90  (orig 0x8a5e90, mov_ret)
uint32_t main_f_8a5e90() { return 1; }

// sub_8a5f40  (orig 0x8a5f40, getter)
uint32_t main_f_8a5f40(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8a5f50  (orig 0x8a5f50, mov_ret)
uint32_t main_f_8a5f50() { return 1; }

// sub_8a6d00  (orig 0x8a6d00, straight)
void main_f_8a6d00(void* a0) {
    *(uint8_t*)((char*)(a0) + 117) = (uint8_t)(1);
}

// sub_8a7f50  (orig 0x8a7f50, setter)
void main_f_8a7f50(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_8a7f60  (orig 0x8a7f60, setter)
void main_f_8a7f60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 8) = a1; }

// sub_8a7f70  (orig 0x8a7f70, setter)
void main_f_8a7f70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 12) = a1; }

// sub_8a7f80  (orig 0x8a7f80, getter)
uint32_t main_f_8a7f80(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_8a7f90  (orig 0x8a7f90, getter)
uint32_t main_f_8a7f90(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_8a7fa0  (orig 0x8a7fa0, ret_only)
void main_f_8a7fa0() {}

// sub_8a7fb0  (orig 0x8a7fb0, tailcall)
void main_f_8a7fb0() { main::sub_ce0(); }

// sub_8a8010  (orig 0x8a8010, getter)
uint8_t main_f_8a8010(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_8a8020  (orig 0x8a8020, straight)
void main_f_8a8020(void* a0) {
    *(uint8_t*)((char*)(a0) + 17) = (uint8_t)(1);
}

// sub_8a8110  (orig 0x8a8110, compare)
bool main_f_8a8110(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 51)) != (uint64_t)(0); }

// sub_8a8250  (orig 0x8a8250, ret_only)
void main_f_8a8250() {}

// sub_8a89b0  (orig 0x8a89b0, setter-chain)
void main_f_8a89b0(void* a0) { *(uint32_t*)((char*)(a0) + 40) = 0; *(uint8_t*)((char*)(a0) + 44) = 0; }

// sub_8a89c0  (orig 0x8a89c0, getter)
uint8_t main_f_8a89c0(void* a0) { return *(uint8_t*)((char*)(a0) + 44); }

// sub_8a8bb0  (orig 0x8a8bb0, setter-chain)
void main_f_8a8bb0(void* a0) { *(uint32_t*)((char*)(a0) + 40) = 0; *(uint8_t*)((char*)(a0) + 44) = 0; }

// sub_8a8bc0  (orig 0x8a8bc0, getter)
uint8_t main_f_8a8bc0(void* a0) { return *(uint8_t*)((char*)(a0) + 44); }

// sub_8a9060  (orig 0x8a9060, getter)
uint64_t main_f_8a9060(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8a9070  (orig 0x8a9070, getter)
uint64_t main_f_8a9070(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_8a9080  (orig 0x8a9080, getter)
uint64_t main_f_8a9080(void* a0) { return *(uint64_t*)((char*)(a0) + 104); }

// sub_8a9300  (orig 0x8a9300, getter)
uint64_t main_f_8a9300(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_8a9310  (orig 0x8a9310, getter)
uint64_t main_f_8a9310(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_8a9880  (orig 0x8a9880, getter)
uint32_t main_f_8a9880(void* a0) { return *(uint32_t*)((char*)(a0) + 116); }

// sub_8aac00  (orig 0x8aac00, setter)
void main_f_8aac00(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 2) = a1; }

// sub_8aadb0  (orig 0x8aadb0, mov_ret)
uint32_t main_f_8aadb0() { return 1; }

// sub_8aadc0  (orig 0x8aadc0, mov_ret)
uint32_t main_f_8aadc0() { return 1; }

// sub_8aadd0  (orig 0x8aadd0, mov_ret)
uint32_t main_f_8aadd0() { return 1; }

// sub_8aade0  (orig 0x8aade0, mov_ret)
uint32_t main_f_8aade0() { return 1; }

// sub_8aadf0  (orig 0x8aadf0, ret_only)
void main_f_8aadf0() {}

// sub_8aae00  (orig 0x8aae00, ret_only)
void main_f_8aae00() {}

// sub_8aae10  (orig 0x8aae10, ret_only)
void main_f_8aae10() {}

// sub_8aae20  (orig 0x8aae20, ret_only)
void main_f_8aae20() {}

// sub_8aae30  (orig 0x8aae30, ret_only)
void main_f_8aae30() {}

// sub_8aae40  (orig 0x8aae40, mov_ret)
uint32_t main_f_8aae40() { return 1; }

// sub_8aae50  (orig 0x8aae50, mov_ret)
uint32_t main_f_8aae50() { return 1; }

// sub_8aae60  (orig 0x8aae60, ret_only)
void main_f_8aae60() {}

// sub_8aae70  (orig 0x8aae70, mov_ret)
uint32_t main_f_8aae70() { return 1; }

// sub_8aae80  (orig 0x8aae80, mov_ret)
uint32_t main_f_8aae80() { return 1; }

// sub_8aae90  (orig 0x8aae90, mov_ret)
uint32_t main_f_8aae90() { return 1; }

// sub_8aaea0  (orig 0x8aaea0, ret_only)
void main_f_8aaea0() {}

// sub_8aaeb0  (orig 0x8aaeb0, mov_ret)
uint32_t main_f_8aaeb0() { return 1; }

// sub_8aaec0  (orig 0x8aaec0, ret_only)
void main_f_8aaec0() {}

// sub_8aaed0  (orig 0x8aaed0, ret_only)
void main_f_8aaed0() {}

// sub_8aaee0  (orig 0x8aaee0, mov_ret)
uint32_t main_f_8aaee0() { return 1; }

// sub_8aaef0  (orig 0x8aaef0, ret_only)
void main_f_8aaef0() {}

// sub_8aaf00  (orig 0x8aaf00, ret_only)
void main_f_8aaf00() {}

// sub_8aaf10  (orig 0x8aaf10, mov_ret)
uint32_t main_f_8aaf10() { return 1; }

// sub_8aaf20  (orig 0x8aaf20, ret_only)
void main_f_8aaf20() {}

// sub_8aaf30  (orig 0x8aaf30, ret_only)
void main_f_8aaf30() {}

// sub_8aaf40  (orig 0x8aaf40, ret_only)
void main_f_8aaf40() {}

// sub_8aaf50  (orig 0x8aaf50, mov_ret)
uint32_t main_f_8aaf50() { return 1; }

// sub_8aaf60  (orig 0x8aaf60, mov_ret)
uint32_t main_f_8aaf60() { return 1; }

// sub_8aaf70  (orig 0x8aaf70, ret_only)
void main_f_8aaf70() {}

// sub_8aaf80  (orig 0x8aaf80, ret_only)
void main_f_8aaf80() {}

// sub_8aaf90  (orig 0x8aaf90, mov_ret)
uint32_t main_f_8aaf90() { return 1; }

// sub_8aafa0  (orig 0x8aafa0, ret_only)
void main_f_8aafa0() {}

// sub_8aafb0  (orig 0x8aafb0, ret_only)
void main_f_8aafb0() {}

// sub_8aafc0  (orig 0x8aafc0, ret_only)
void main_f_8aafc0() {}

// sub_8aafd0  (orig 0x8aafd0, mov_ret)
uint32_t main_f_8aafd0() { return 1; }

// sub_8aafe0  (orig 0x8aafe0, ret_only)
void main_f_8aafe0() {}

// sub_8aaff0  (orig 0x8aaff0, mov_ret)
uint32_t main_f_8aaff0() { return 1; }

// sub_8ab000  (orig 0x8ab000, ret_only)
void main_f_8ab000() {}

// sub_8ab010  (orig 0x8ab010, ret_only)
void main_f_8ab010() {}

// sub_8ab020  (orig 0x8ab020, ret_only)
void main_f_8ab020() {}

// sub_8ab030  (orig 0x8ab030, ret_only)
void main_f_8ab030() {}

// sub_8ab040  (orig 0x8ab040, ret_only)
void main_f_8ab040() {}

// sub_8ab050  (orig 0x8ab050, mov_ret)
uint32_t main_f_8ab050() { return 1; }

// sub_8ab060  (orig 0x8ab060, ret_only)
void main_f_8ab060() {}

// sub_8ab070  (orig 0x8ab070, mov_ret)
uint32_t main_f_8ab070() { return 1; }

// sub_8ab080  (orig 0x8ab080, ret_only)
void main_f_8ab080() {}

// sub_8ab090  (orig 0x8ab090, mov_ret)
uint32_t main_f_8ab090() { return 1; }

// sub_8ab0a0  (orig 0x8ab0a0, ret_only)
void main_f_8ab0a0() {}

// sub_8ab0b0  (orig 0x8ab0b0, mov_ret)
uint32_t main_f_8ab0b0() { return 1; }

// sub_8ab0c0  (orig 0x8ab0c0, ret_only)
void main_f_8ab0c0() {}

// sub_8ab0d0  (orig 0x8ab0d0, ret_only)
void main_f_8ab0d0() {}

// sub_8ab0e0  (orig 0x8ab0e0, ret_only)
void main_f_8ab0e0() {}

// sub_8ab0f0  (orig 0x8ab0f0, ret_only)
void main_f_8ab0f0() {}

// sub_8ab100  (orig 0x8ab100, ret_only)
void main_f_8ab100() {}

// sub_8ab110  (orig 0x8ab110, ret_only)
void main_f_8ab110() {}

// sub_8ab120  (orig 0x8ab120, mov_ret)
uint32_t main_f_8ab120() { return 1; }

// sub_8ab130  (orig 0x8ab130, mov_ret)
uint32_t main_f_8ab130() { return 1; }

// sub_8ab140  (orig 0x8ab140, mov_ret)
uint32_t main_f_8ab140() { return 1; }

// sub_8ab150  (orig 0x8ab150, ret_only)
void main_f_8ab150() {}

// sub_8ab160  (orig 0x8ab160, ret_only)
void main_f_8ab160() {}

// sub_8ab170  (orig 0x8ab170, mov_ret)
uint32_t main_f_8ab170() { return 1; }

// sub_8ab180  (orig 0x8ab180, ret_only)
void main_f_8ab180() {}

// sub_8ab190  (orig 0x8ab190, ret_only)
void main_f_8ab190() {}

// sub_8ab1a0  (orig 0x8ab1a0, mov_ret)
uint32_t main_f_8ab1a0() { return 1; }

// sub_8ab1b0  (orig 0x8ab1b0, ret_only)
void main_f_8ab1b0() {}

// sub_8ab1c0  (orig 0x8ab1c0, mov_ret)
uint32_t main_f_8ab1c0() { return 1; }

// sub_8ab1d0  (orig 0x8ab1d0, ret_only)
void main_f_8ab1d0() {}

// sub_8ab1e0  (orig 0x8ab1e0, mov_ret)
uint32_t main_f_8ab1e0() { return 1; }

// sub_8ab1f0  (orig 0x8ab1f0, ret_only)
void main_f_8ab1f0() {}

// sub_8ab200  (orig 0x8ab200, mov_ret)
uint32_t main_f_8ab200() { return 1; }

// sub_8ab210  (orig 0x8ab210, ret_only)
void main_f_8ab210() {}

// sub_8ab220  (orig 0x8ab220, mov_ret)
uint32_t main_f_8ab220() { return 1; }

// sub_8ab230  (orig 0x8ab230, ret_only)
void main_f_8ab230() {}

// sub_8ab240  (orig 0x8ab240, mov_ret)
uint32_t main_f_8ab240() { return 1; }

// sub_8ab250  (orig 0x8ab250, ret_only)
void main_f_8ab250() {}

// sub_8ab260  (orig 0x8ab260, mov_ret)
uint32_t main_f_8ab260() { return 1; }

// sub_8ab270  (orig 0x8ab270, ret_only)
void main_f_8ab270() {}

// sub_8ab280  (orig 0x8ab280, ret_only)
void main_f_8ab280() {}

// sub_8ab290  (orig 0x8ab290, mov_ret)
uint32_t main_f_8ab290() { return 1; }

// sub_8ab2a0  (orig 0x8ab2a0, ret_only)
void main_f_8ab2a0() {}

// sub_8ab2b0  (orig 0x8ab2b0, mov_ret)
uint32_t main_f_8ab2b0() { return 1; }

// sub_8ab2c0  (orig 0x8ab2c0, ret_only)
void main_f_8ab2c0() {}

// sub_8ab2d0  (orig 0x8ab2d0, mov_ret)
uint32_t main_f_8ab2d0() { return 1; }

// sub_8ab2e0  (orig 0x8ab2e0, ret_only)
void main_f_8ab2e0() {}

// sub_8ab2f0  (orig 0x8ab2f0, mov_ret)
uint32_t main_f_8ab2f0() { return 1; }

// sub_8ab300  (orig 0x8ab300, ret_only)
void main_f_8ab300() {}

// sub_8ab310  (orig 0x8ab310, mov_ret)
uint32_t main_f_8ab310() { return 1; }

// sub_8ab320  (orig 0x8ab320, ret_only)
void main_f_8ab320() {}

// sub_8ab330  (orig 0x8ab330, mov_ret)
uint32_t main_f_8ab330() { return 1; }

// sub_8ab340  (orig 0x8ab340, ret_only)
void main_f_8ab340() {}

// sub_8ab350  (orig 0x8ab350, mov_ret)
uint32_t main_f_8ab350() { return 1; }

// sub_8ab360  (orig 0x8ab360, ret_only)
void main_f_8ab360() {}

// sub_8ab370  (orig 0x8ab370, mov_ret)
uint32_t main_f_8ab370() { return 1; }

// sub_8ab380  (orig 0x8ab380, ret_only)
void main_f_8ab380() {}

// sub_8ab390  (orig 0x8ab390, mov_ret)
uint32_t main_f_8ab390() { return 1; }

// sub_8ab3a0  (orig 0x8ab3a0, ret_only)
void main_f_8ab3a0() {}

// sub_8ab3b0  (orig 0x8ab3b0, ret_only)
void main_f_8ab3b0() {}

// sub_8ab3c0  (orig 0x8ab3c0, mov_ret)
uint32_t main_f_8ab3c0() { return 1; }

// sub_8ab3d0  (orig 0x8ab3d0, ret_only)
void main_f_8ab3d0() {}

// sub_8ab3e0  (orig 0x8ab3e0, mov_ret)
uint32_t main_f_8ab3e0() { return 1; }

// sub_8ab3f0  (orig 0x8ab3f0, ret_only)
void main_f_8ab3f0() {}

// sub_8ab400  (orig 0x8ab400, ret_only)
void main_f_8ab400() {}

// sub_8ab410  (orig 0x8ab410, mov_ret)
uint32_t main_f_8ab410() { return 1; }

// sub_8ab420  (orig 0x8ab420, ret_only)
void main_f_8ab420() {}

// sub_8ab430  (orig 0x8ab430, mov_ret)
uint32_t main_f_8ab430() { return 1; }

// sub_8ab440  (orig 0x8ab440, ret_only)
void main_f_8ab440() {}

// sub_8ab450  (orig 0x8ab450, mov_ret)
uint32_t main_f_8ab450() { return 1; }

// sub_8ab460  (orig 0x8ab460, ret_only)
void main_f_8ab460() {}

// sub_8ab470  (orig 0x8ab470, mov_ret)
uint32_t main_f_8ab470() { return 1; }

// sub_8ab480  (orig 0x8ab480, ret_only)
void main_f_8ab480() {}

// sub_8ab490  (orig 0x8ab490, mov_ret)
uint32_t main_f_8ab490() { return 1; }

// sub_8ab4a0  (orig 0x8ab4a0, ret_only)
void main_f_8ab4a0() {}

// sub_8ab4b0  (orig 0x8ab4b0, mov_ret)
uint32_t main_f_8ab4b0() { return 1; }

// sub_8ab4c0  (orig 0x8ab4c0, ret_only)
void main_f_8ab4c0() {}

// sub_8ab4d0  (orig 0x8ab4d0, mov_ret)
uint32_t main_f_8ab4d0() { return 1; }

// sub_8ab4e0  (orig 0x8ab4e0, ret_only)
void main_f_8ab4e0() {}

// sub_8ab4f0  (orig 0x8ab4f0, mov_ret)
uint32_t main_f_8ab4f0() { return 1; }

// sub_8ab500  (orig 0x8ab500, mov_ret)
uint32_t main_f_8ab500() { return 0; }

// sub_8ab510  (orig 0x8ab510, mov_ret)
uint32_t main_f_8ab510() { return 0; }

// sub_8ab520  (orig 0x8ab520, mov_ret)
uint32_t main_f_8ab520() { return 0; }

// sub_8ab530  (orig 0x8ab530, mov_ret)
uint32_t main_f_8ab530() { return 0; }

// sub_8ab540  (orig 0x8ab540, ret_only)
void main_f_8ab540() {}

// sub_8ab550  (orig 0x8ab550, ret_only)
void main_f_8ab550() {}

// sub_8ab560  (orig 0x8ab560, mov_ret)
uint32_t main_f_8ab560() { return 1; }

// sub_8ab570  (orig 0x8ab570, ret_only)
void main_f_8ab570() {}

// sub_8ab580  (orig 0x8ab580, ret_only)
void main_f_8ab580() {}

// sub_8ab590  (orig 0x8ab590, ret_only)
void main_f_8ab590() {}

// sub_8ab5a0  (orig 0x8ab5a0, mov_ret)
uint32_t main_f_8ab5a0() { return 1; }

// sub_8ab5b0  (orig 0x8ab5b0, ret_only)
void main_f_8ab5b0() {}

// sub_8ab5c0  (orig 0x8ab5c0, mov_ret)
uint32_t main_f_8ab5c0() { return 1; }

// sub_8ab5d0  (orig 0x8ab5d0, ret_only)
void main_f_8ab5d0() {}

// sub_8ab5e0  (orig 0x8ab5e0, mov_ret)
uint32_t main_f_8ab5e0() { return 1; }

// sub_8ab5f0  (orig 0x8ab5f0, ret_only)
void main_f_8ab5f0() {}

// sub_8ab600  (orig 0x8ab600, mov_ret)
uint32_t main_f_8ab600() { return 1; }

// sub_8ab610  (orig 0x8ab610, ret_only)
void main_f_8ab610() {}

// sub_8ab620  (orig 0x8ab620, mov_ret)
uint32_t main_f_8ab620() { return 1; }

// sub_8ab630  (orig 0x8ab630, ret_only)
void main_f_8ab630() {}

// sub_8ab640  (orig 0x8ab640, mov_ret)
uint32_t main_f_8ab640() { return 1; }

// sub_8ab650  (orig 0x8ab650, ret_only)
void main_f_8ab650() {}

// sub_8ab660  (orig 0x8ab660, mov_ret)
uint32_t main_f_8ab660() { return 1; }

// sub_8ab670  (orig 0x8ab670, ret_only)
void main_f_8ab670() {}

// sub_8ab680  (orig 0x8ab680, mov_ret)
uint32_t main_f_8ab680() { return 1; }

// sub_8ab690  (orig 0x8ab690, ret_only)
void main_f_8ab690() {}

// sub_8ab6a0  (orig 0x8ab6a0, mov_ret)
uint32_t main_f_8ab6a0() { return 1; }

// sub_8ab6b0  (orig 0x8ab6b0, ret_only)
void main_f_8ab6b0() {}

// sub_8ab6c0  (orig 0x8ab6c0, mov_ret)
uint32_t main_f_8ab6c0() { return 1; }

// sub_8ab6d0  (orig 0x8ab6d0, ret_only)
void main_f_8ab6d0() {}

// sub_8ab6e0  (orig 0x8ab6e0, mov_ret)
uint32_t main_f_8ab6e0() { return 1; }

// sub_8ab6f0  (orig 0x8ab6f0, ret_only)
void main_f_8ab6f0() {}

// sub_8ab700  (orig 0x8ab700, mov_ret)
uint32_t main_f_8ab700() { return 0; }

// sub_8ab710  (orig 0x8ab710, ret_only)
void main_f_8ab710() {}

// sub_8ab720  (orig 0x8ab720, ret_only)
void main_f_8ab720() {}

// sub_8ab730  (orig 0x8ab730, ret_only)
void main_f_8ab730() {}

// sub_8ab740  (orig 0x8ab740, ret_only)
void main_f_8ab740() {}

// sub_8ab750  (orig 0x8ab750, ret_only)
void main_f_8ab750() {}

// sub_8ab760  (orig 0x8ab760, ret_only)
void main_f_8ab760() {}

// sub_8ab770  (orig 0x8ab770, ret_only)
void main_f_8ab770() {}

// sub_8ab780  (orig 0x8ab780, mov_ret)
uint32_t main_f_8ab780() { return 1; }

// sub_8ab790  (orig 0x8ab790, ret_only)
void main_f_8ab790() {}

// sub_8ab7a0  (orig 0x8ab7a0, mov_ret)
uint32_t main_f_8ab7a0() { return 0; }

// sub_8ab7b0  (orig 0x8ab7b0, ret_only)
void main_f_8ab7b0() {}

// sub_8ab7c0  (orig 0x8ab7c0, ret_only)
void main_f_8ab7c0() {}

// sub_8ab7d0  (orig 0x8ab7d0, mov_ret)
uint32_t main_f_8ab7d0() { return 1; }

// sub_8ab7e0  (orig 0x8ab7e0, ret_only)
void main_f_8ab7e0() {}

// sub_8ab7f0  (orig 0x8ab7f0, ret_only)
void main_f_8ab7f0() {}

// sub_8ab800  (orig 0x8ab800, mov_ret)
uint32_t main_f_8ab800() { return 1; }

// sub_8ab810  (orig 0x8ab810, mov_ret)
uint32_t main_f_8ab810() { return 1; }

// sub_8ab820  (orig 0x8ab820, ret_only)
void main_f_8ab820() {}

// sub_8ab830  (orig 0x8ab830, ret_only)
void main_f_8ab830() {}

// sub_8ab840  (orig 0x8ab840, mov_ret)
uint32_t main_f_8ab840() { return 1; }

// sub_8ab850  (orig 0x8ab850, ret_only)
void main_f_8ab850() {}

// sub_8ab860  (orig 0x8ab860, mov_ret)
uint32_t main_f_8ab860() { return 1; }

// sub_8ab870  (orig 0x8ab870, ret_only)
void main_f_8ab870() {}

// sub_8ab880  (orig 0x8ab880, mov_ret)
uint32_t main_f_8ab880() { return 1; }

// sub_8ab890  (orig 0x8ab890, ret_only)
void main_f_8ab890() {}

// sub_8ab8a0  (orig 0x8ab8a0, mov_ret)
uint32_t main_f_8ab8a0() { return 1; }

// sub_8ab8b0  (orig 0x8ab8b0, ret_only)
void main_f_8ab8b0() {}

// sub_8ab8c0  (orig 0x8ab8c0, ret_only)
void main_f_8ab8c0() {}

// sub_8ab8d0  (orig 0x8ab8d0, mov_ret)
uint32_t main_f_8ab8d0() { return 1; }

// sub_8ab8e0  (orig 0x8ab8e0, ret_only)
void main_f_8ab8e0() {}

// sub_8ab8f0  (orig 0x8ab8f0, ret_only)
void main_f_8ab8f0() {}

// sub_8ab900  (orig 0x8ab900, mov_ret)
uint32_t main_f_8ab900() { return 0; }

// sub_8ab910  (orig 0x8ab910, ret_only)
void main_f_8ab910() {}

// sub_8ab920  (orig 0x8ab920, ret_only)
void main_f_8ab920() {}

// sub_8ab930  (orig 0x8ab930, ret_only)
void main_f_8ab930() {}

// sub_8ab940  (orig 0x8ab940, ret_only)
void main_f_8ab940() {}

// sub_8ab950  (orig 0x8ab950, ret_only)
void main_f_8ab950() {}

// sub_8ab960  (orig 0x8ab960, mov_ret)
uint32_t main_f_8ab960() { return 1; }

// sub_8ab970  (orig 0x8ab970, mov_ret)
uint32_t main_f_8ab970() { return 0; }

// sub_8ab980  (orig 0x8ab980, ret_only)
void main_f_8ab980() {}

// sub_8ab990  (orig 0x8ab990, mov_ret)
uint32_t main_f_8ab990() { return 1; }

// sub_8ab9a0  (orig 0x8ab9a0, ret_only)
void main_f_8ab9a0() {}

// sub_8ab9b0  (orig 0x8ab9b0, ret_only)
void main_f_8ab9b0() {}

// sub_8ab9c0  (orig 0x8ab9c0, mov_ret)
uint32_t main_f_8ab9c0() { return 1; }

// sub_8ab9d0  (orig 0x8ab9d0, ret_only)
void main_f_8ab9d0() {}

// sub_8ab9e0  (orig 0x8ab9e0, mov_ret)
uint32_t main_f_8ab9e0() { return 1; }

// sub_8ab9f0  (orig 0x8ab9f0, ret_only)
void main_f_8ab9f0() {}

// sub_8aba00  (orig 0x8aba00, mov_ret)
uint32_t main_f_8aba00() { return 1; }

// sub_8aba10  (orig 0x8aba10, ret_only)
void main_f_8aba10() {}

// sub_8aba20  (orig 0x8aba20, mov_ret)
uint32_t main_f_8aba20() { return 1; }

// sub_8aba30  (orig 0x8aba30, ret_only)
void main_f_8aba30() {}

// sub_8aba40  (orig 0x8aba40, mov_ret)
uint32_t main_f_8aba40() { return 1; }

// sub_8aba50  (orig 0x8aba50, ret_only)
void main_f_8aba50() {}

// sub_8aba60  (orig 0x8aba60, ret_only)
void main_f_8aba60() {}

// sub_8aba70  (orig 0x8aba70, mov_ret)
uint32_t main_f_8aba70() { return 1; }

// sub_8aba80  (orig 0x8aba80, ret_only)
void main_f_8aba80() {}

// sub_8aba90  (orig 0x8aba90, mov_ret)
uint32_t main_f_8aba90() { return 1; }

// sub_8abaa0  (orig 0x8abaa0, ret_only)
void main_f_8abaa0() {}

// sub_8abab0  (orig 0x8abab0, mov_ret)
uint32_t main_f_8abab0() { return 1; }

// sub_8abac0  (orig 0x8abac0, ret_only)
void main_f_8abac0() {}

// sub_8abad0  (orig 0x8abad0, mov_ret)
uint32_t main_f_8abad0() { return 1; }

// sub_8abae0  (orig 0x8abae0, ret_only)
void main_f_8abae0() {}

// sub_8abaf0  (orig 0x8abaf0, mov_ret)
uint32_t main_f_8abaf0() { return 1; }

// sub_8abb00  (orig 0x8abb00, ret_only)
void main_f_8abb00() {}

// sub_8abb10  (orig 0x8abb10, ret_only)
void main_f_8abb10() {}

// sub_8abb20  (orig 0x8abb20, mov_ret)
uint32_t main_f_8abb20() { return 1; }

// sub_8abb30  (orig 0x8abb30, ret_only)
void main_f_8abb30() {}

// sub_8abb40  (orig 0x8abb40, mov_ret)
uint32_t main_f_8abb40() { return 1; }

// sub_8abb50  (orig 0x8abb50, getter)
uint32_t main_f_8abb50(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_8abb60  (orig 0x8abb60, ret_only)
void main_f_8abb60() {}

// sub_8abb70  (orig 0x8abb70, mov_ret)
uint32_t main_f_8abb70() { return 1; }

// sub_8abb80  (orig 0x8abb80, ret_only)
void main_f_8abb80() {}

// sub_8abb90  (orig 0x8abb90, mov_ret)
uint32_t main_f_8abb90() { return 1; }

// sub_8abba0  (orig 0x8abba0, ret_only)
void main_f_8abba0() {}

// sub_8abbb0  (orig 0x8abbb0, ret_only)
void main_f_8abbb0() {}

// sub_8abbc0  (orig 0x8abbc0, ret_only)
void main_f_8abbc0() {}

// sub_8abf40  (orig 0x8abf40, ret_only)
void main_f_8abf40() {}

// sub_8abf50  (orig 0x8abf50, ret_only)
void main_f_8abf50() {}

// sub_8abf60  (orig 0x8abf60, ret_only)
void main_f_8abf60() {}

// sub_8abf70  (orig 0x8abf70, ret_only)
void main_f_8abf70() {}

// sub_8ac690  (orig 0x8ac690, ret_only)
void main_f_8ac690() {}

// sub_8ac6a0  (orig 0x8ac6a0, ret_only)
void main_f_8ac6a0() {}

// sub_8ac6b0  (orig 0x8ac6b0, ret_only)
void main_f_8ac6b0() {}

// sub_8ac6c0  (orig 0x8ac6c0, ret_only)
void main_f_8ac6c0() {}

// sub_8ac9e0  (orig 0x8ac9e0, setter-chain)
void main_f_8ac9e0(void* a0, uint8_t a1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 32) = 0; *(uint8_t*)((char*)(a0) + 36) = 0; *(uint8_t*)((char*)(a0) + 37) = a1; *(uint32_t*)((char*)(a0) + 40) = a2; }

// sub_8acb50  (orig 0x8acb50, getter)
uint8_t main_f_8acb50(void* a0) { return *(uint8_t*)((char*)(a0) + 36); }

// sub_8acbe0  (orig 0x8acbe0, getter)
uint8_t main_f_8acbe0(void* a0) { return *(uint8_t*)((char*)(a0) + 48); }

// sub_8ad930  (orig 0x8ad930, compare)
bool main_f_8ad930(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 9520L)) > (int64_t)(2); }

// sub_8ad940  (orig 0x8ad940, compare)
bool main_f_8ad940(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 9520L)) == (uint64_t)(8); }

// sub_8af080  (orig 0x8af080, compare)
bool main_f_8af080(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 224)) == (uint64_t)(1); }

// sub_8af850  (orig 0x8af850, compare)
bool main_f_8af850(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 248)) != (uint64_t)(5); }

// sub_8afc30  (orig 0x8afc30, compare)
bool main_f_8afc30(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 11304L)) != (uint64_t)(0); }

// sub_8b0010  (orig 0x8b0010, compare)
bool main_f_8b0010(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 13384L)) != (uint64_t)(0); }

// sub_8b0380  (orig 0x8b0380, setter)
void main_f_8b0380(void* a0) { *(uint64_t*)((char*)(a0) + 13392L) = 0; }

// sub_8b09f0  (orig 0x8b09f0, setter)
void main_f_8b09f0(void* a0) { *(uint32_t*)((char*)(a0) + 13400L) = 0; }

// sub_8b1480  (orig 0x8b1480, ret_only)
void main_f_8b1480() {}

// sub_8b1490  (orig 0x8b1490, ret_only)
void main_f_8b1490() {}

// sub_8b14a0  (orig 0x8b14a0, ret_only)
void main_f_8b14a0() {}

// sub_8b14b0  (orig 0x8b14b0, straight)
void main_f_8b14b0(void* a0) {
    *(uint8_t*)((char*)(a0) + 208) = (uint8_t)(1);
}

// sub_8b14c0  (orig 0x8b14c0, straight)
void main_f_8b14c0(void* a0) {
    *(uint8_t*)((char*)(a0) + 208) = (uint8_t)(1);
}

// sub_8b14d0  (orig 0x8b14d0, straight)
void main_f_8b14d0(void* a0) {
    *(uint8_t*)((char*)(a0) + 208) = (uint8_t)(1);
}

// sub_8b1760  (orig 0x8b1760, ret_only)
void main_f_8b1760() {}

// sub_8b1770  (orig 0x8b1770, ret_only)
void main_f_8b1770() {}

// sub_8b1780  (orig 0x8b1780, ret_only)
void main_f_8b1780() {}

// sub_8b1790  (orig 0x8b1790, ret_only)
void main_f_8b1790() {}

// sub_8b1b70  (orig 0x8b1b70, tailcall)
void main_f_8b1b70() { main::sub_8b1980(); }

// sub_8b2660  (orig 0x8b2660, ret_only)
void main_f_8b2660() {}

// sub_8b2710  (orig 0x8b2710, ret_only)
void main_f_8b2710() {}

// sub_8b2840  (orig 0x8b2840, ret_only)
void main_f_8b2840() {}

// sub_8b2c60  (orig 0x8b2c60, getter)
uint64_t main_f_8b2c60(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_8b5040  (orig 0x8b5040, setter)
void main_f_8b5040(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8b55c0  (orig 0x8b55c0, mov_ret)
uint32_t main_f_8b55c0() { return 1; }

// sub_8b5670  (orig 0x8b5670, getter)
uint32_t main_f_8b5670(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8b5680  (orig 0x8b5680, mov_ret)
uint32_t main_f_8b5680() { return 1; }

// sub_8b5690  (orig 0x8b5690, tailcall)
void main_f_8b5690() { battle::battle_watch_party_2(); }

// sub_8b5b60  (orig 0x8b5b60, setter)
void main_f_8b5b60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8b5cc0  (orig 0x8b5cc0, setter)
void main_f_8b5cc0(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8b6240  (orig 0x8b6240, mov_ret)
uint32_t main_f_8b6240() { return 1; }

// sub_8b62f0  (orig 0x8b62f0, getter)
uint32_t main_f_8b62f0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8b6300  (orig 0x8b6300, mov_ret)
uint32_t main_f_8b6300() { return 1; }

// sub_8b6910  (orig 0x8b6910, setter)
void main_f_8b6910(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 44) = a1; }

// sub_8b7230  (orig 0x8b7230, mov_ret)
uint32_t main_f_8b7230() { return 1; }

// sub_8b72e0  (orig 0x8b72e0, getter)
uint32_t main_f_8b72e0(void* a0) { return *(uint32_t*)((char*)(a0) + 44); }

// sub_8b72f0  (orig 0x8b72f0, mov_ret)
uint32_t main_f_8b72f0() { return 1; }

// sub_8b7300  (orig 0x8b7300, tailcall)
void main_f_8b7300() { battle::battle_watch_command_2(); }

// sub_8b77e0  (orig 0x8b77e0, setter)
void main_f_8b77e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8b7940  (orig 0x8b7940, setter)
void main_f_8b7940(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8b7ec0  (orig 0x8b7ec0, mov_ret)
uint32_t main_f_8b7ec0() { return 1; }

// sub_8b7f70  (orig 0x8b7f70, getter)
uint32_t main_f_8b7f70(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8b7f80  (orig 0x8b7f80, mov_ret)
uint32_t main_f_8b7f80() { return 1; }

// sub_8b8570  (orig 0x8b8570, setter)
void main_f_8b8570(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_8b8c70  (orig 0x8b8c70, mov_ret)
uint32_t main_f_8b8c70() { return 1; }

// sub_8b8d20  (orig 0x8b8d20, getter)
uint32_t main_f_8b8d20(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_8b8d30  (orig 0x8b8d30, mov_ret)
uint32_t main_f_8b8d30() { return 1; }

// sub_8b8d40  (orig 0x8b8d40, tailcall)
void main_f_8b8d40() { battle::battle_watch_clienttimer_2(); }

// sub_8b9290  (orig 0x8b9290, setter)
void main_f_8b9290(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8b9810  (orig 0x8b9810, mov_ret)
uint32_t main_f_8b9810() { return 1; }

// sub_8b98c0  (orig 0x8b98c0, getter)
uint32_t main_f_8b98c0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8b98d0  (orig 0x8b98d0, mov_ret)
uint32_t main_f_8b98d0() { return 1; }

// sub_8b98e0  (orig 0x8b98e0, tailcall)
void main_f_8b98e0() { battle::battle_watch_target_party_2(); }

// sub_8b9d60  (orig 0x8b9d60, setter)
void main_f_8b9d60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8ba260  (orig 0x8ba260, mov_ret)
uint32_t main_f_8ba260() { return 1; }

// sub_8ba310  (orig 0x8ba310, getter)
uint32_t main_f_8ba310(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8ba320  (orig 0x8ba320, mov_ret)
uint32_t main_f_8ba320() { return 1; }

// sub_8ba330  (orig 0x8ba330, tailcall)
void main_f_8ba330() { battle::battle_btlwatch_data_holder_2(); }

// sub_8ba880  (orig 0x8ba880, setter)
void main_f_8ba880(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_8bb050  (orig 0x8bb050, mov_ret)
uint32_t main_f_8bb050() { return 1; }

// sub_8bb100  (orig 0x8bb100, getter)
uint32_t main_f_8bb100(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_8bb110  (orig 0x8bb110, mov_ret)
uint32_t main_f_8bb110() { return 1; }

// sub_8bb120  (orig 0x8bb120, tailcall)
void main_f_8bb120() { battle::battle_watch_cmd_2(); }

// sub_8bba10  (orig 0x8bba10, setter)
void main_f_8bba10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_8bbaa0  (orig 0x8bbaa0, tailcall)
void main_f_8bbaa0() { main::sub_8bb9b0(); }

// sub_8bc980  (orig 0x8bc980, mov_ret)
uint32_t main_f_8bc980() { return 1; }

// sub_8bca30  (orig 0x8bca30, getter)
uint32_t main_f_8bca30(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_8bca40  (orig 0x8bca40, mov_ret)
uint32_t main_f_8bca40() { return 1; }

// sub_8bca50  (orig 0x8bca50, tailcall)
void main_f_8bca50() { battle::battle_btlwatch_async_data_holder_2(); }

// sub_8bcf20  (orig 0x8bcf20, setter)
void main_f_8bcf20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_8bd080  (orig 0x8bd080, setter)
void main_f_8bd080(void* a0) { *(uint64_t*)((char*)(a0) + 20) = 0; }

// sub_8bd600  (orig 0x8bd600, mov_ret)
uint32_t main_f_8bd600() { return 1; }

// sub_8bd6b0  (orig 0x8bd6b0, getter)
uint32_t main_f_8bd6b0(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_8bd6c0  (orig 0x8bd6c0, mov_ret)
uint32_t main_f_8bd6c0() { return 1; }

