/* subsdk1 -- 1457 functions verified to match the original.
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

// sub_1b0  (orig 0x1b0, mov_ret)
uint32_t subsdk1_f_1b0() { return 0; }

// sub_1c0  (orig 0x1c0, mov_ret)
uint32_t subsdk1_f_1c0() { return 0; }

// sub_1d0  (orig 0x1d0, mov_ret)
uint32_t subsdk1_f_1d0() { return 0; }

// sub_210  (orig 0x210, mov_ret)
uint64_t subsdk1_f_210() { return 0; }

// sub_220  (orig 0x220, mov_ret)
uint32_t subsdk1_f_220() { return 0; }

// sub_230  (orig 0x230, mov_ret)
uint32_t subsdk1_f_230() { return 0; }

// sub_240  (orig 0x240, mov_ret)
uint64_t subsdk1_f_240() { return 0; }

// sub_250  (orig 0x250, mov_ret)
uint64_t subsdk1_f_250() { return 0; }

// sub_260  (orig 0x260, mov_ret)
uint32_t subsdk1_f_260() { return 0; }

// sub_1290  (orig 0x1290, setter-chain)
void subsdk1_f_1290(void* a0) { *(uint64_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 40) = 0; __asm__ __volatile__("" ::: "memory");; *(uint64_t*)((char*)(a0) + 48) = 0; }

// sub_12a0  (orig 0x12a0, ret_only)
void subsdk1_f_12a0() {}

// sub_1840  (orig 0x1840, compare)
bool subsdk1_f_1840(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 176)) == (uint32_t)(*(uint32_t*)((char*)(a1) + 176)); }

// sub_1860  (orig 0x1860, straight-line)
uint32_t subsdk1_f_1860(uint64_t a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(112))))))));
    return *(uint32_t*)((char*)(p0) + 176);
}

// sub_1e20  (orig 0x1e20, getter)
uint32_t subsdk1_f_1e20(void* a0) { return *(uint32_t*)((char*)(a0) + 140); }

// sub_1e30  (orig 0x1e30, getter)
uint32_t subsdk1_f_1e30(void* a0) { return *(uint32_t*)((char*)(a0) + 144); }

// sub_1e40  (orig 0x1e40, getter)
uint32_t subsdk1_f_1e40(void* a0) { return *(uint32_t*)((char*)(a0) + 148); }

// sub_34a0  (orig 0x34a0, ret_only)
void subsdk1_f_34a0() {}

// sub_34b0  (orig 0x34b0, ret_only)
void subsdk1_f_34b0() {}

// sub_3950  (orig 0x3950, ret_only)
void subsdk1_f_3950() {}

// sub_3960  (orig 0x3960, ret_only)
void subsdk1_f_3960() {}

// sub_3970  (orig 0x3970, ret_only)
void subsdk1_f_3970() {}

// sub_3980  (orig 0x3980, setter)
void subsdk1_f_3980(void* a0) { *(uint32_t*)((char*)(a0) + 1024) = 0; }

// sub_3c30  (orig 0x3c30, copy-chain-store)
void subsdk1_f_3c30(void* a0) {
    uint32_t t0 = *(uint32_t*)((char*)a0 + 24);
    uint64_t t1 = *(uint64_t*)((char*)a0 + 32);
    *(uint32_t*)(char*)(t1) = (uint32_t)(t0);
}

// sub_3c70  (orig 0x3c70, copy-chain-store)
void subsdk1_f_3c70(void* a0) {
    uint8_t t0 = *(uint8_t*)((char*)a0 + 24);
    uint64_t t1 = *(uint64_t*)((char*)a0 + 32);
    *(uint8_t*)(char*)(t1) = (uint8_t)(t0);
}

// sub_4020  (orig 0x4020, ret_only)
void subsdk1_f_4020() {}

// sub_4030  (orig 0x4030, ret_only)
void subsdk1_f_4030() {}

// sub_dfd0  (orig 0xdfd0, ret_only)
void subsdk1_f_dfd0() {}

// sub_f120  (orig 0xf120, compare)
bool subsdk1_f_f120(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 200)) == (uint64_t)(1); }

// sub_f420  (orig 0xf420, mov_ret)
uint32_t subsdk1_f_f420() { return 0; }

// sub_f430  (orig 0xf430, mov_ret)
uint32_t subsdk1_f_f430() { return 0; }

// sub_10060  (orig 0x10060, straight)
void subsdk1_f_10060(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = (*(uint32_t*)((char*)(a0) + 12)) & (2147483647);
}

// sub_107e0  (orig 0x107e0, straight)
uint32_t subsdk1_f_107e0(uint64_t unused0, void* a1) { return (((*(uint32_t*)((char*)(a1) + 56) == 0)) ? (16) : (*(uint32_t*)((char*)(a1) + 56))); }

// sub_10800  (orig 0x10800, mov_ret)
uint32_t subsdk1_f_10800() { return 16; }

// sub_11290  (orig 0x11290, compare)
bool subsdk1_f_11290(uint64_t unused0, uint64_t unused1, uint64_t a2) { return (uint32_t)(a2) == (uint64_t)(0); }

// sub_112a0  (orig 0x112a0, compare)
bool subsdk1_f_112a0(uint64_t unused0, uint64_t a1) { return (uint32_t)(a1) == (uint64_t)(0); }

// sub_112b0  (orig 0x112b0, compare)
bool subsdk1_f_112b0(uint64_t unused0, uint64_t unused1, uint64_t a2) { return (uint32_t)(a2) == (uint64_t)(0); }

// sub_112c0  (orig 0x112c0, ret_only)
void subsdk1_f_112c0() {}

// sub_112d0  (orig 0x112d0, mov_ret)
uint32_t subsdk1_f_112d0() { return 1; }

// sub_112e0  (orig 0x112e0, ret_only)
void subsdk1_f_112e0() {}

// sub_11320  (orig 0x11320, mov_ret)
uint32_t subsdk1_f_11320() { return 0; }

// sub_11330  (orig 0x11330, ret_only)
void subsdk1_f_11330() {}

// sub_11360  (orig 0x11360, ret_only)
void subsdk1_f_11360() {}

// sub_11370  (orig 0x11370, ret_only)
void subsdk1_f_11370() {}

// sub_16980  (orig 0x16980, mov_ret)
uint32_t subsdk1_f_16980() { return 1; }

// sub_16990  (orig 0x16990, mov_ret)
uint32_t subsdk1_f_16990() { return 1; }

// sub_17170  (orig 0x17170, setter-chain-zero)
void subsdk1_f_17170(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint32_t*)((char*)a0 + 72) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 64) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 56) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 40) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_17640  (orig 0x17640, getter)
uint64_t subsdk1_f_17640(void* a0) { return *(uint64_t*)((char*)(a0) + 264); }

// sub_17650  (orig 0x17650, setter)
void subsdk1_f_17650(void* a0, uint64_t unused1, uint64_t a2) { *(uint64_t*)((char*)(a0) + 264) = a2; }

// sub_19630  (orig 0x19630, ret_only)
void subsdk1_f_19630() {}

// sub_19640  (orig 0x19640, ret_only)
void subsdk1_f_19640() {}

// sub_19650  (orig 0x19650, ret_only)
void subsdk1_f_19650() {}

// sub_19660  (orig 0x19660, ret_only)
void subsdk1_f_19660() {}

// sub_19670  (orig 0x19670, ret_only)
void subsdk1_f_19670() {}

// sub_19680  (orig 0x19680, mov_ret)
uint32_t subsdk1_f_19680() { return 0; }

// sub_19690  (orig 0x19690, ret_only)
void subsdk1_f_19690() {}

// sub_196a0  (orig 0x196a0, ret_only)
void subsdk1_f_196a0() {}

// sub_196b0  (orig 0x196b0, mov_ret)
uint32_t subsdk1_f_196b0() { return 0; }

// sub_196c0  (orig 0x196c0, mov_ret)
uint32_t subsdk1_f_196c0() { return 0; }

// sub_196d0  (orig 0x196d0, mov_ret)
uint32_t subsdk1_f_196d0() { return 0; }

// sub_196e0  (orig 0x196e0, mov_ret)
uint32_t subsdk1_f_196e0() { return 0; }

// sub_196f0  (orig 0x196f0, ret_only)
void subsdk1_f_196f0() {}

// sub_19700  (orig 0x19700, ret_only)
void subsdk1_f_19700() {}

// sub_1a010  (orig 0x1a010, ret_only)
void subsdk1_f_1a010() {}

// sub_1a020  (orig 0x1a020, ret_only)
void subsdk1_f_1a020() {}

// sub_1a030  (orig 0x1a030, ret_only)
void subsdk1_f_1a030() {}

// sub_1a060  (orig 0x1a060, ret_only)
void subsdk1_f_1a060() {}

// sub_1a1f0  (orig 0x1a1f0, ret_only)
void subsdk1_f_1a1f0() {}

// sub_1b4f0  (orig 0x1b4f0, ret_only)
void subsdk1_f_1b4f0() {}

// sub_1d480  (orig 0x1d480, mov_ret)
uint32_t subsdk1_f_1d480() { return 1; }

// sub_1d490  (orig 0x1d490, mov_ret)
uint32_t subsdk1_f_1d490() { return 0; }

// sub_1d4a0  (orig 0x1d4a0, mov_ret)
uint32_t subsdk1_f_1d4a0() { return 0; }

// sub_1d4c0  (orig 0x1d4c0, mov_ret)
uint32_t subsdk1_f_1d4c0() { return 1; }

// sub_1d4d0  (orig 0x1d4d0, mov_ret)
uint32_t subsdk1_f_1d4d0() { return 0; }

// sub_1d4e0  (orig 0x1d4e0, mov_ret)
uint32_t subsdk1_f_1d4e0() { return 0; }

// sub_1d4f0  (orig 0x1d4f0, mov_ret)
uint32_t subsdk1_f_1d4f0() { return 0; }

// sub_1d500  (orig 0x1d500, mov_ret)
uint32_t subsdk1_f_1d500() { return 0; }

// sub_1d510  (orig 0x1d510, mov_ret)
uint32_t subsdk1_f_1d510() { return 0; }

// sub_1d520  (orig 0x1d520, mov_ret)
uint32_t subsdk1_f_1d520() { return 1; }

// sub_1d530  (orig 0x1d530, mov_ret)
uint32_t subsdk1_f_1d530() { return 0; }

// sub_1d540  (orig 0x1d540, mov_ret)
uint32_t subsdk1_f_1d540() { return 1; }

// sub_1d550  (orig 0x1d550, mov_ret)
uint32_t subsdk1_f_1d550() { return 1; }

// sub_1d560  (orig 0x1d560, mov_ret)
uint32_t subsdk1_f_1d560() { return 0; }

// sub_1d570  (orig 0x1d570, mov_ret)
uint32_t subsdk1_f_1d570() { return 0; }

// sub_1d580  (orig 0x1d580, mov_ret)
uint32_t subsdk1_f_1d580() { return 0; }

// sub_1d590  (orig 0x1d590, mov_ret)
uint32_t subsdk1_f_1d590() { return 1; }

// sub_1d5a0  (orig 0x1d5a0, ret_only)
void subsdk1_f_1d5a0() {}

// sub_1d5b0  (orig 0x1d5b0, mov_ret)
uint32_t subsdk1_f_1d5b0() { return 0; }

// sub_1d5c0  (orig 0x1d5c0, ret_only)
void subsdk1_f_1d5c0() {}

// sub_1d5d0  (orig 0x1d5d0, mov_ret)
uint32_t subsdk1_f_1d5d0() { return 1; }

// sub_1d5e0  (orig 0x1d5e0, mov_ret)
uint32_t subsdk1_f_1d5e0() { return 0; }

// sub_1d5f0  (orig 0x1d5f0, ret_only)
void subsdk1_f_1d5f0() {}

// sub_1d600  (orig 0x1d600, ret_only)
void subsdk1_f_1d600() {}

// sub_1d610  (orig 0x1d610, mov_ret)
uint32_t subsdk1_f_1d610() { return 0; }

// sub_1d620  (orig 0x1d620, mov_ret)
uint32_t subsdk1_f_1d620() { return 4; }

// sub_1d630  (orig 0x1d630, mov_ret)
uint32_t subsdk1_f_1d630() { return -1; }

// sub_1d640  (orig 0x1d640, mov_ret)
uint32_t subsdk1_f_1d640() { return 0; }

// sub_1d650  (orig 0x1d650, mov_ret)
uint32_t subsdk1_f_1d650() { return 0; }

// sub_1d670  (orig 0x1d670, strlit-ret)
const char *subsdk1_f_1d670() { static char g_f_1d670[1]; __asm__ volatile("" ::: "memory"); return g_f_1d670; }

// sub_1d680  (orig 0x1d680, ret_only)
void subsdk1_f_1d680() {}

// sub_1d690  (orig 0x1d690, mov_ret)
uint32_t subsdk1_f_1d690() { return 0; }

// sub_1d6a0  (orig 0x1d6a0, mov_ret)
uint32_t subsdk1_f_1d6a0() { return 0; }

// sub_1d6b0  (orig 0x1d6b0, mov_ret)
uint32_t subsdk1_f_1d6b0() { return 1; }

// sub_1d6c0  (orig 0x1d6c0, mov_ret)
uint32_t subsdk1_f_1d6c0() { return 0; }

// sub_1d6d0  (orig 0x1d6d0, mov_ret)
uint32_t subsdk1_f_1d6d0() { return 15; }

// sub_1d6e0  (orig 0x1d6e0, mov_ret)
uint32_t subsdk1_f_1d6e0() { return 0; }

// sub_1d6f0  (orig 0x1d6f0, mov_ret)
uint32_t subsdk1_f_1d6f0() { return 0; }

// sub_1d700  (orig 0x1d700, mov_ret)
uint32_t subsdk1_f_1d700() { return 0; }

// sub_1d710  (orig 0x1d710, mov_ret)
uint32_t subsdk1_f_1d710() { return 0; }

// sub_1d720  (orig 0x1d720, compare)
bool subsdk1_f_1d720(uint64_t unused0, uint64_t unused1, void* a2) { return (uint64_t)(*(uint64_t*)((char*)(a2) + 32)) == (uint64_t)(0); }

// sub_1d730  (orig 0x1d730, mov_ret)
uint32_t subsdk1_f_1d730() { return 0; }

// sub_1d740  (orig 0x1d740, mov_ret)
uint32_t subsdk1_f_1d740() { return 0; }

// sub_1d760  (orig 0x1d760, ret_only)
void subsdk1_f_1d760() {}

// sub_1d770  (orig 0x1d770, mov_ret)
uint32_t subsdk1_f_1d770() { return 0; }

// sub_1d780  (orig 0x1d780, mov_ret)
uint32_t subsdk1_f_1d780() { return -1; }

// sub_1d790  (orig 0x1d790, mov_ret)
uint32_t subsdk1_f_1d790() { return -1; }

// sub_1d7a0  (orig 0x1d7a0, mov_ret)
uint32_t subsdk1_f_1d7a0() { return 0; }

// sub_1d7b0  (orig 0x1d7b0, ret_only)
void subsdk1_f_1d7b0() {}

// sub_1d7c0  (orig 0x1d7c0, mov_ret)
uint32_t subsdk1_f_1d7c0() { return 1; }

// sub_1d7d0  (orig 0x1d7d0, ret_only)
void subsdk1_f_1d7d0() {}

// sub_1d7e0  (orig 0x1d7e0, mov_ret)
uint32_t subsdk1_f_1d7e0() { return 1; }

// sub_1d7f0  (orig 0x1d7f0, mov_ret)
uint32_t subsdk1_f_1d7f0() { return 0; }

// sub_1d800  (orig 0x1d800, ret_only)
void subsdk1_f_1d800() {}

// sub_1d810  (orig 0x1d810, ret_only)
void subsdk1_f_1d810() {}

// sub_1d820  (orig 0x1d820, mov_ret)
uint32_t subsdk1_f_1d820() { return 0; }

// sub_1d830  (orig 0x1d830, ret_only)
void subsdk1_f_1d830() {}

// sub_1d840  (orig 0x1d840, getter)
uint32_t subsdk1_f_1d840(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 712); }

// sub_1d850  (orig 0x1d850, mov_ret)
uint32_t subsdk1_f_1d850(uint32_t a0, uint32_t a1, uint32_t a2) { return a2; }

// sub_1d860  (orig 0x1d860, ret_only)
void subsdk1_f_1d860() {}

// sub_1d870  (orig 0x1d870, mov_ret)
uint32_t subsdk1_f_1d870() { return 0; }

// sub_1d880  (orig 0x1d880, mov_ret)
uint32_t subsdk1_f_1d880() { return 1; }

// sub_1d890  (orig 0x1d890, mov_ret)
uint32_t subsdk1_f_1d890() { return 0; }

// sub_1d8a0  (orig 0x1d8a0, mov_ret)
uint32_t subsdk1_f_1d8a0() { return 0; }

// sub_1d8b0  (orig 0x1d8b0, mov_ret)
uint64_t subsdk1_f_1d8b0() { return 0; }

// sub_1d8c0  (orig 0x1d8c0, mov_ret)
uint32_t subsdk1_f_1d8c0() { return 0; }

// sub_1d8d0  (orig 0x1d8d0, mov_ret)
uint64_t subsdk1_f_1d8d0() { return 0; }

// sub_1d8e0  (orig 0x1d8e0, mov_ret)
uint32_t subsdk1_f_1d8e0() { return 1; }

// sub_1d8f0  (orig 0x1d8f0, mov_ret)
uint32_t subsdk1_f_1d8f0() { return 0; }

// sub_1d900  (orig 0x1d900, mov_ret)
uint32_t subsdk1_f_1d900() { return 0; }

// sub_1d910  (orig 0x1d910, ret_only)
void subsdk1_f_1d910() {}

// sub_1d920  (orig 0x1d920, mov_ret)
uint32_t subsdk1_f_1d920() { return -1; }

// sub_1d930  (orig 0x1d930, mov_ret)
uint32_t subsdk1_f_1d930() { return 1; }

// sub_1d940  (orig 0x1d940, mov_ret)
uint32_t subsdk1_f_1d940() { return 0; }

// sub_1d950  (orig 0x1d950, ret_only)
void subsdk1_f_1d950() {}

// sub_1d960  (orig 0x1d960, mov_ret)
uint32_t subsdk1_f_1d960() { return 0; }

// sub_1d970  (orig 0x1d970, ret_only)
void subsdk1_f_1d970() {}

// sub_1d980  (orig 0x1d980, ret_only)
void subsdk1_f_1d980() {}

// sub_1d990  (orig 0x1d990, mov_ret)
uint32_t subsdk1_f_1d990() { return 0; }

// sub_1d9a0  (orig 0x1d9a0, mov_ret)
uint32_t subsdk1_f_1d9a0() { return 1; }

// sub_1e060  (orig 0x1e060, straight)
void subsdk1_f_1e060(void* a0) {
    *(uint32_t*)((char*)(a0) + 72) = (*(uint32_t*)((char*)(a0) + 72)) - (1);
}

// sub_1e980  (orig 0x1e980, ret_only)
void subsdk1_f_1e980() {}

// sub_20140  (orig 0x20140, straight)
void subsdk1_f_20140(uint64_t unused0, uint64_t unused1, uint64_t unused2, void* a3) {
    uint64_t k0 = 1162760014;
    *(uint8_t*)((char*)(a3) + 4) = 0;
    *(uint32_t*)((char*)(a3)) = (uint32_t)k0;
}

// sub_22760  (orig 0x22760, mov_ret)
uint64_t subsdk1_f_22760() { return 0; }

// sub_22990  (orig 0x22990, setter)
void subsdk1_f_22990(uint64_t unused0, uint64_t unused1, void* a2) { *(uint8_t*)((char*)(a2)) = 0; }

// sub_229a0  (orig 0x229a0, setter)
void subsdk1_f_229a0(uint64_t unused0, uint64_t unused1, void* a2) { *(uint8_t*)((char*)(a2)) = 0; }

// sub_22db0  (orig 0x22db0, mov_ret)
uint32_t subsdk1_f_22db0() { return 1; }

// sub_24170  (orig 0x24170, ret_only)
void subsdk1_f_24170() {}

// sub_24230  (orig 0x24230, ret_only)
void subsdk1_f_24230() {}

// sub_24430  (orig 0x24430, mov_ret)
uint32_t subsdk1_f_24430() { return 1; }

// sub_24440  (orig 0x24440, mov_ret)
uint32_t subsdk1_f_24440() { return 0; }

// sub_24450  (orig 0x24450, ret_only)
void subsdk1_f_24450() {}

// sub_24460  (orig 0x24460, straight-line)
uint64_t subsdk1_f_24460(uint64_t unused0, uint64_t unused1, uint64_t unused2, uint64_t unused3, uint64_t unused4, uint64_t a5) { return ((uint64_t)a5); }

// sub_24470  (orig 0x24470, ret_only)
void subsdk1_f_24470() {}

// sub_24480  (orig 0x24480, ret_only)
void subsdk1_f_24480() {}

// sub_25910  (orig 0x25910, ret_only)
void subsdk1_f_25910() {}

// sub_26540  (orig 0x26540, ret_only)
void subsdk1_f_26540() {}

// sub_26980  (orig 0x26980, ret_only)
void subsdk1_f_26980() {}

// sub_26990  (orig 0x26990, mov_ret)
uint64_t subsdk1_f_26990() { return 0; }

// sub_27100  (orig 0x27100, ret_only)
void subsdk1_f_27100() {}

// sub_27110  (orig 0x27110, mov_ret)
uint64_t subsdk1_f_27110() { return 0; }

// sub_27530  (orig 0x27530, mov_ret)
uint64_t subsdk1_f_27530() { return 0; }

// sub_27540  (orig 0x27540, mov_ret)
uint64_t subsdk1_f_27540() { return 0; }

// sub_27550  (orig 0x27550, mov_ret)
uint64_t subsdk1_f_27550() { return 0; }

// sub_27560  (orig 0x27560, mov_ret)
uint64_t subsdk1_f_27560() { return 0; }

// sub_29bf0  (orig 0x29bf0, mov_ret)
uint32_t subsdk1_f_29bf0() { return 0; }

// sub_29c00  (orig 0x29c00, ret_only)
void subsdk1_f_29c00() {}

// sub_29c10  (orig 0x29c10, mov_ret)
uint64_t subsdk1_f_29c10(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_29c90  (orig 0x29c90, ret_only)
void subsdk1_f_29c90() {}

// sub_2a9f0  (orig 0x2a9f0, ret_only)
void subsdk1_f_2a9f0() {}

// sub_2aa00  (orig 0x2aa00, mov_ret)
uint32_t subsdk1_f_2aa00() { return 0; }

// sub_2ba60  (orig 0x2ba60, ret_only)
void subsdk1_f_2ba60() {}

// sub_2cb90  (orig 0x2cb90, ret_only)
void subsdk1_f_2cb90() {}

// sub_2cba0  (orig 0x2cba0, ret_only)
void subsdk1_f_2cba0() {}

// sub_2cbb0  (orig 0x2cbb0, straight)
uint32_t subsdk1_f_2cbb0(uint64_t unused0, uint64_t unused1, uint64_t unused2, uint64_t unused3, uint64_t unused4, uint32_t a5) { return (((uint32_t)a5)) & (1); }

// sub_2cbc0  (orig 0x2cbc0, ret_only)
void subsdk1_f_2cbc0() {}

// sub_2d300  (orig 0x2d300, ret_only)
void subsdk1_f_2d300() {}

// sub_2d310  (orig 0x2d310, mov_ret)
uint32_t subsdk1_f_2d310() { return 0; }

// sub_2de70  (orig 0x2de70, ret_only)
void subsdk1_f_2de70() {}

// sub_2de80  (orig 0x2de80, ret_only)
void subsdk1_f_2de80() {}

// sub_2e610  (orig 0x2e610, ret_only)
void subsdk1_f_2e610() {}

// sub_2e8a0  (orig 0x2e8a0, mov_ret)
uint32_t subsdk1_f_2e8a0() { return 1; }

// sub_2e8b0  (orig 0x2e8b0, ret_only)
void subsdk1_f_2e8b0() {}

// sub_2e8c0  (orig 0x2e8c0, ret_only)
void subsdk1_f_2e8c0() {}

// sub_2ed20  (orig 0x2ed20, setter-chain)
void subsdk1_f_2ed20(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; __asm__ __volatile__("" ::: "memory");; *(uint16_t*)((char*)(a0) + 16) = 0; }

// sub_30f90  (orig 0x30f90, straight)
void subsdk1_f_30f90(void* a0) {
    *(uint32_t*)((char*)(a0) + 24) = -1;
}

// sub_31010  (orig 0x31010, straight-line)
void subsdk1_f_31010(uint64_t a0, uint32_t a1, void* a2, void* a3) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(40))))))));
    *(uint32_t*)((char*)(a2)) = *(uint32_t*)((char*)(p0) + 200);
    *(uint32_t*)((char*)(a3)) = *(uint32_t*)((char*)(p0) + 204);
}

// sub_310f0  (orig 0x310f0, setter-chain)
void subsdk1_f_310f0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint32_t*)((char*)(a0) + 16) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; }

// sub_32bf0  (orig 0x32bf0, mov_ret)
uint32_t subsdk1_f_32bf0() { return 0; }

// sub_32c00  (orig 0x32c00, getter)
uint8_t subsdk1_f_32c00(void* a0) { return *(uint8_t*)((char*)(a0) + 153); }

// sub_32c10  (orig 0x32c10, straight-line)
uint64_t subsdk1_f_32c10(uint64_t a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(40))))))));
    return *(uint64_t*)((char*)(p0) + 192);
}

// sub_32c20  (orig 0x32c20, straight-line)
uint32_t subsdk1_f_32c20(uint64_t a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(40))))))));
    return *(uint32_t*)((char*)(p0) + 184);
}

// sub_32c30  (orig 0x32c30, straight-line)
uint32_t subsdk1_f_32c30(uint64_t a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(40))))))));
    return *(uint32_t*)((char*)(p0) + 180);
}

// sub_32c40  (orig 0x32c40, straight-line)
uint64_t subsdk1_f_32c40(uint64_t a0, uint32_t a1) { return ((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(40))))))) + (168); }

// sub_32c50  (orig 0x32c50, mov_ret)
uint32_t subsdk1_f_32c50() { return 0; }

// sub_32c60  (orig 0x32c60, mov_ret)
uint32_t subsdk1_f_32c60() { return 1; }

// sub_32c70  (orig 0x32c70, mov_ret)
uint32_t subsdk1_f_32c70() { return 1; }

// sub_32c90  (orig 0x32c90, mov_ret)
uint32_t subsdk1_f_32c90() { return 4; }

// sub_32ca0  (orig 0x32ca0, mov_ret)
uint32_t subsdk1_f_32ca0() { return 0; }

// sub_32cb0  (orig 0x32cb0, mov_ret)
uint64_t subsdk1_f_32cb0() { return 0; }

// sub_32cc0  (orig 0x32cc0, mov_ret)
uint32_t subsdk1_f_32cc0() { return 0; }

// sub_32cd0  (orig 0x32cd0, setter-chain)
void subsdk1_f_32cd0(uint64_t unused0, uint64_t unused1, void* a2, void* a3) { *(uint32_t*)((char*)(a2)) = 0; *(uint32_t*)((char*)(a3)) = 0; }

// sub_32ce0  (orig 0x32ce0, mov_ret)
uint32_t subsdk1_f_32ce0() { return 0; }

// sub_32cf0  (orig 0x32cf0, mov_ret)
uint64_t subsdk1_f_32cf0() { return 0; }

// sub_32d00  (orig 0x32d00, mov_ret)
uint32_t subsdk1_f_32d00() { return 5; }

// sub_32d30  (orig 0x32d30, straight)
void subsdk1_f_32d30(uint64_t unused0, uint64_t unused1, void* a2, void* a3) {
    uint64_t k0 = 50462976;
    *(uint32_t*)((char*)(a2)) = (uint32_t)k0;
    *(uint32_t*)((char*)(a3)) = 255;
}

// sub_32d60  (orig 0x32d60, mov_ret)
uint32_t subsdk1_f_32d60() { return 2; }

// sub_32d70  (orig 0x32d70, mov_ret)
uint32_t subsdk1_f_32d70() { return 0; }

// sub_32d80  (orig 0x32d80, mov_ret)
uint32_t subsdk1_f_32d80() { return 6; }

// sub_32d90  (orig 0x32d90, mov_ret)
uint32_t subsdk1_f_32d90() { return 7; }

// sub_32da0  (orig 0x32da0, mov_ret)
uint32_t subsdk1_f_32da0() { return 7; }

// sub_32db0  (orig 0x32db0, mov_ret)
uint32_t subsdk1_f_32db0() { return 3; }

// sub_32dc0  (orig 0x32dc0, mov_ret)
uint32_t subsdk1_f_32dc0() { return 8; }

// sub_32dd0  (orig 0x32dd0, mov_ret)
uint32_t subsdk1_f_32dd0() { return 8; }

// sub_32de0  (orig 0x32de0, mov_ret)
uint32_t subsdk1_f_32de0() { return 9; }

// sub_32df0  (orig 0x32df0, mov_ret)
uint32_t subsdk1_f_32df0() { return 9; }

// sub_32e00  (orig 0x32e00, mov_ret)
uint32_t subsdk1_f_32e00() { return 10; }

// sub_32e10  (orig 0x32e10, mov_ret)
uint32_t subsdk1_f_32e10() { return 10; }

// sub_32e20  (orig 0x32e20, mov_ret)
uint32_t subsdk1_f_32e20() { return 11; }

// sub_32e30  (orig 0x32e30, mov_ret)
uint32_t subsdk1_f_32e30() { return 0; }

// sub_32e40  (orig 0x32e40, ret_only)
void subsdk1_f_32e40() {}

// sub_32e50  (orig 0x32e50, ret_only)
void subsdk1_f_32e50() {}

// sub_32e60  (orig 0x32e60, mov_ret)
uint32_t subsdk1_f_32e60() { return 0; }

// sub_32e70  (orig 0x32e70, getter)
uint32_t subsdk1_f_32e70(void* a0) { return *(uint32_t*)((char*)(a0) + 64); }

// sub_32e80  (orig 0x32e80, getter)
uint32_t subsdk1_f_32e80(void* a0) { return *(uint32_t*)((char*)(a0) + 68); }

// sub_32e90  (orig 0x32e90, getter)
uint32_t subsdk1_f_32e90(void* a0) { return *(uint32_t*)((char*)(a0) + 60); }

// sub_32ea0  (orig 0x32ea0, mov_ret)
uint32_t subsdk1_f_32ea0() { return 1; }

// sub_32eb0  (orig 0x32eb0, getter)
uint32_t subsdk1_f_32eb0(void* a0) { return *(uint32_t*)((char*)(a0) + 72); }

// sub_32ec0  (orig 0x32ec0, mov_ret)
uint64_t subsdk1_f_32ec0() { return 0; }

// sub_32ed0  (orig 0x32ed0, getter)
uint32_t subsdk1_f_32ed0(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_32ee0  (orig 0x32ee0, mov_ret)
uint32_t subsdk1_f_32ee0() { return 1; }

// sub_32f30  (orig 0x32f30, straight)
uint32_t subsdk1_f_32f30(void* a0) { return (*(uint32_t*)((char*)(a0) + 64)) << (2); }

// sub_32f40  (orig 0x32f40, getter)
uint32_t subsdk1_f_32f40(void* a0) { return *(uint32_t*)((char*)(a0) + 64); }

// sub_32f50  (orig 0x32f50, mov_ret)
uint32_t subsdk1_f_32f50() { return 0; }

// sub_32f60  (orig 0x32f60, getter)
uint64_t subsdk1_f_32f60(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_330f0  (orig 0x330f0, straight)
void subsdk1_f_330f0(void* a0, void* a1) {
    *(uint16_t*)((char*)(a0) + 24) = *(uint16_t*)((char*)(a1) + 16);
    *(uint32_t*)((char*)(a0) + 28) = *(uint32_t*)((char*)(a1) + 20);
    *(uint16_t*)((char*)(a0) + 26) = *(uint16_t*)((char*)(a1) + 18);
    *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1));
    *(uint32_t*)((char*)(a0) + 12) = *(uint32_t*)((char*)(a1) + 4);
    *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 36) = *(uint32_t*)((char*)(a1) + 28);
    *(uint32_t*)((char*)(a0) + 20) = *(uint32_t*)((char*)(a1) + 12);
}

// sub_33140  (orig 0x33140, straight)
void subsdk1_f_33140(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0) + 44) = *(uint32_t*)((char*)(a1) + 4);
    *(uint32_t*)((char*)(a0) + 48) = *(uint32_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 52) = *(uint32_t*)((char*)(a1) + 12);
    *(uint32_t*)((char*)(a0) + 40) = *(uint32_t*)((char*)(a1));
}

// sub_33900  (orig 0x33900, getter)
uint8_t subsdk1_f_33900(void* a0) { return *(uint8_t*)((char*)(a0) + 153); }

// sub_339f0  (orig 0x339f0, straight)
void subsdk1_f_339f0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a1) + 4) = *(uint32_t*)((char*)(a0) + 44);
    *(uint32_t*)((char*)(a1) + 8) = *(uint32_t*)((char*)(a0) + 48);
    *(uint32_t*)((char*)(a1) + 12) = *(uint32_t*)((char*)(a0) + 52);
    *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0) + 40);
}

// sub_33e60  (orig 0x33e60, setter)
void subsdk1_f_33e60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 56) = a1; }

// sub_33e70  (orig 0x33e70, getter)
uint32_t subsdk1_f_33e70(void* a0) { return *(uint32_t*)((char*)(a0) + 56); }

// sub_33e80  (orig 0x33e80, setter)
void subsdk1_f_33e80(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 120) = a1; }

// sub_33f00  (orig 0x33f00, setter)
void subsdk1_f_33f00(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 56) = a1; }

// sub_33f10  (orig 0x33f10, getter)
uint32_t subsdk1_f_33f10(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_33f20  (orig 0x33f20, setter)
void subsdk1_f_33f20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_33f30  (orig 0x33f30, setter)
void subsdk1_f_33f30(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 28) = a1; }

// sub_33f40  (orig 0x33f40, getter)
uint64_t subsdk1_f_33f40(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_33f50  (orig 0x33f50, setter)
void subsdk1_f_33f50(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 32) = a1; }

// sub_33f60  (orig 0x33f60, getter)
uint64_t subsdk1_f_33f60(void* a0) { return *(uint64_t*)((char*)(a0) + 48); }

// sub_33f70  (orig 0x33f70, setter)
void subsdk1_f_33f70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 48) = a1; }

// sub_33f80  (orig 0x33f80, setter)
void subsdk1_f_33f80(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 68) = a1; }

// sub_33f90  (orig 0x33f90, setter)
void subsdk1_f_33f90(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 64) = a1; }

// sub_33fa0  (orig 0x33fa0, setter)
void subsdk1_f_33fa0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 60) = a1; }

// sub_33fc0  (orig 0x33fc0, setter)
void subsdk1_f_33fc0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 72) = a1; }

// sub_34060  (orig 0x34060, getter)
uint64_t subsdk1_f_34060(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_34070  (orig 0x34070, setter)
void subsdk1_f_34070(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 56) = a1; }

// sub_34080  (orig 0x34080, setter)
void subsdk1_f_34080(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 64) = a1; }

// sub_340c0  (orig 0x340c0, getter)
uint64_t subsdk1_f_340c0(void* a0) { return *(uint64_t*)((char*)(a0) + 392); }

// sub_340d0  (orig 0x340d0, setter)
void subsdk1_f_340d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_340e0  (orig 0x340e0, getter)
uint32_t subsdk1_f_340e0(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_340f0  (orig 0x340f0, setter)
void subsdk1_f_340f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 72) = a1; }

// sub_34100  (orig 0x34100, getter)
uint32_t subsdk1_f_34100(void* a0) { return *(uint32_t*)((char*)(a0) + 72); }

// sub_34110  (orig 0x34110, straight)
void subsdk1_f_34110(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 278) = (uint8_t)(((((uint32_t)a1) != 0) ? 1 : 0));
}

// sub_34120  (orig 0x34120, setter)
void subsdk1_f_34120(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 284) = a1; }

// sub_34130  (orig 0x34130, setter-chain)
void subsdk1_f_34130(void* a0, uint64_t a1, uint32_t a2) { *(uint64_t*)((char*)(a0) + 288) = a1; *(uint32_t*)((char*)(a0) + 296) = a2; }

// sub_34160  (orig 0x34160, setter)
void subsdk1_f_34160(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 392) = a1; }

// sub_34170  (orig 0x34170, getter)
uint64_t subsdk1_f_34170(void* a0) { return *(uint64_t*)((char*)(a0) + 376); }

// sub_34180  (orig 0x34180, setter)
void subsdk1_f_34180(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 376) = a1; }

// sub_34190  (orig 0x34190, getter)
uint64_t subsdk1_f_34190(void* a0) { return *(uint64_t*)((char*)(a0) + 384); }

// sub_341a0  (orig 0x341a0, setter)
void subsdk1_f_341a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 384) = a1; }

// sub_341b0  (orig 0x341b0, getter)
uint64_t subsdk1_f_341b0(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_341c0  (orig 0x341c0, setter)
void subsdk1_f_341c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 80) = a1; }

// sub_341d0  (orig 0x341d0, getter)
uint64_t subsdk1_f_341d0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_341e0  (orig 0x341e0, setter)
void subsdk1_f_341e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_341f0  (orig 0x341f0, getter)
uint64_t subsdk1_f_341f0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_34200  (orig 0x34200, setter)
void subsdk1_f_34200(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 88) = a1; }

// sub_34210  (orig 0x34210, setter)
void subsdk1_f_34210(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 440) = a1; }

// sub_34220  (orig 0x34220, getter)
uint64_t subsdk1_f_34220(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_34230  (orig 0x34230, setter)
void subsdk1_f_34230(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 16) = a1; }

// sub_34240  (orig 0x34240, getter)
uint64_t subsdk1_f_34240(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_34250  (orig 0x34250, setter)
void subsdk1_f_34250(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 32) = a1; }

// sub_34260  (orig 0x34260, getter)
uint32_t subsdk1_f_34260(void* a0) { return *(uint32_t*)((char*)(a0) + 72); }

// sub_34270  (orig 0x34270, setter)
void subsdk1_f_34270(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 72) = a1; }

// sub_34280  (orig 0x34280, getter)
uint64_t subsdk1_f_34280(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_34290  (orig 0x34290, setter)
void subsdk1_f_34290(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0)) = a1; }

// sub_342a0  (orig 0x342a0, straight)
void subsdk1_f_342a0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 76) = (uint8_t)(((((uint32_t)a1) != 0) ? 1 : 0));
}

// sub_34530  (orig 0x34530, straight)
void subsdk1_f_34530(void* a0, uint64_t a1) {
    void* p0 = (void*)((uintptr_t)(a1));
    *(uint64_t*)((char*)(a0) + 168) = (uint64_t)(a1);
    *(uint32_t*)((char*)(a0) + 176) = *(uint32_t*)((char*)(p0) + 40);
}

// sub_34540  (orig 0x34540, getter)
uint64_t subsdk1_f_34540(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_34550  (orig 0x34550, getter)
uint64_t subsdk1_f_34550(void* a0) { return *(uint64_t*)((char*)(a0) + 168); }

// sub_34560  (orig 0x34560, setter)
void subsdk1_f_34560(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 168) = a1; }

// sub_34570  (orig 0x34570, getter)
uint32_t subsdk1_f_34570(void* a0) { return *(uint32_t*)((char*)(a0) + 176); }

// sub_34580  (orig 0x34580, setter)
void subsdk1_f_34580(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 176) = a1; }

// sub_34590  (orig 0x34590, getter)
uint64_t subsdk1_f_34590(void* a0) { return *(uint64_t*)((char*)(a0) + 208); }

// sub_345a0  (orig 0x345a0, setter)
void subsdk1_f_345a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 208) = a1; }

// Jan_30_2019  (orig 0x345b0, strlit-ret)
const char *subsdk1_f_345b0() { static char g_f_345b0[1]; __asm__ volatile("" ::: "memory"); return g_f_345b0; }

// sub_38b70  (orig 0x38b70, straight)
uint32_t subsdk1_f_38b70(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 104) = 0;
    return 0;
}

// sub_38cd0  (orig 0x38cd0, straight)
uint32_t subsdk1_f_38cd0(uint64_t unused0, void* a1, uint64_t unused2, uint64_t a3) {
    *(uint32_t*)((char*)(a1) + 116) = (uint32_t)(a3);
    return 0;
}

// sub_38ce0  (orig 0x38ce0, straight)
uint32_t subsdk1_f_38ce0(uint64_t unused0, void* a1, uint64_t a2) {
    *(uint64_t*)((char*)(a1) + 128) = (uint64_t)(a2);
    return 0;
}

// sub_3aba0  (orig 0x3aba0, compare-pred)
bool subsdk1_f_3aba0(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 8) - 189)) < (uint32_t)(5); }

// sub_3af40  (orig 0x3af40, compare)
bool subsdk1_f_3af40(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 40)) == (uint64_t)(24); }

// sub_3b120  (orig 0x3b120, compare-pred)
bool subsdk1_f_3b120(uint64_t unused0, void* a1) { return (uint32_t)((*(uint64_t*)((char*)a1 + 8) - 169)) < (uint32_t)(15); }

// sub_3b490  (orig 0x3b490, straight)
uint32_t subsdk1_f_3b490(uint64_t unused0, void* a1) {
    *(uint8_t*)((char*)(a1) + 152) = (*(uint8_t*)((char*)(a1) + 152)) | (1);
    return 0;
}

// sub_3cb30  (orig 0x3cb30, straight)
uint32_t subsdk1_f_3cb30(uint64_t unused0, uint32_t a1, uint32_t a2) { return (((((uint32_t)a1) & (uint64_t)(2))) ? (((uint32_t)a1)) : ((((((uint32_t)a2)) & (2)) | (((uint32_t)a1))) ^ ((((uint32_t)a2)) & (1)))); }

// sub_3ce50  (orig 0x3ce50, ret_only)
void subsdk1_f_3ce50() {}

// sub_3ce60  (orig 0x3ce60, ret_only)
void subsdk1_f_3ce60() {}

// sub_40c00  (orig 0x40c00, compare)
bool subsdk1_f_40c00(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 12)) != (uint64_t)(0); }

// sub_42830  (orig 0x42830, straight)
uint32_t subsdk1_f_42830(uint32_t a0) { return ((((uint32_t)a0)) >> (12)) & (3); }

// sub_42900  (orig 0x42900, getter)
uint64_t subsdk1_f_42900(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_42910  (orig 0x42910, compare)
bool subsdk1_f_42910(void* a0, uint64_t a1) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 24)) == (uint64_t)(a1); }

// sub_42920  (orig 0x42920, getter)
uint64_t subsdk1_f_42920(void* a0) { return *(uint64_t*)((char*)(a0) + 40); }

// sub_42930  (orig 0x42930, compare)
bool subsdk1_f_42930(void* a0, uint64_t a1) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 40)) == (uint64_t)(a1); }

// sub_42950  (orig 0x42950, getter)
uint64_t subsdk1_f_42950(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_42960  (orig 0x42960, compare)
bool subsdk1_f_42960(void* a0, uint64_t a1) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 32)) == (uint64_t)(a1); }

// sub_42970  (orig 0x42970, straight)
void subsdk1_f_42970(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_42980  (orig 0x42980, setter)
void subsdk1_f_42980(void* a0) { *(uint8_t*)((char*)(a0) + 16) = 0; }

// sub_43500  (orig 0x43500, straight)
void subsdk1_f_43500(uint64_t unused0, uint64_t unused1, uint64_t unused2, void* a3) {
    uint32_t k0 = 17224;
    *(uint8_t*)((char*)(a3) + 2) = 0;
    *(uint16_t*)((char*)(a3)) = (uint16_t)k0;
}

// sub_448b0  (orig 0x448b0, setter-chain)
void subsdk1_f_448b0(void* a0) { *(uint64_t*)((char*)(a0)) = 0; *(uint64_t*)((char*)(a0) + 8) = 0; __asm__ __volatile__("" ::: "memory");; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_448c0  (orig 0x448c0, ret_only)
void subsdk1_f_448c0() {}

// sub_54b10  (orig 0x54b10, ret_only)
void subsdk1_f_54b10() {}

// sub_54b20  (orig 0x54b20, ret_only)
void subsdk1_f_54b20() {}

// sub_54b30  (orig 0x54b30, ret_only)
void subsdk1_f_54b30() {}

// sub_56200  (orig 0x56200, ret_only)
void subsdk1_f_56200() {}

// sub_57640  (orig 0x57640, compare)
bool subsdk1_f_57640(uint64_t unused0, void* a1) { return (int32_t)(*(uint32_t*)((char*)(a1) + 120)) > (int64_t)(0); }

// sub_57760  (orig 0x57760, straight)
uint32_t subsdk1_f_57760(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 44) = 0;
    return 0;
}

// sub_58520  (orig 0x58520, setter)
void subsdk1_f_58520(void* a0) { *(uint32_t*)((char*)(a0) + 96) = 0; }

// sub_59100  (orig 0x59100, straight)
void subsdk1_f_59100(void* a0, uint64_t unused1, uint32_t a2) {
    *(uint32_t*)((char*)(a0) + 96) = (*(uint32_t*)((char*)(a0) + 96)) | (((uint32_t)a2));
}

// sub_5b170  (orig 0x5b170, ret_only)
void subsdk1_f_5b170() {}

// sub_5b180  (orig 0x5b180, mov_ret)
uint32_t subsdk1_f_5b180() { return 0; }

// sub_5b190  (orig 0x5b190, mov_ret)
uint32_t subsdk1_f_5b190() { return 0; }

// sub_5b1a0  (orig 0x5b1a0, ret_only)
void subsdk1_f_5b1a0() {}

// sub_602e0  (orig 0x602e0, setter-chain)
void subsdk1_f_602e0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_606a0  (orig 0x606a0, setter-chain)
void subsdk1_f_606a0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_609f0  (orig 0x609f0, setter)
void subsdk1_f_609f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_60a00  (orig 0x60a00, setter)
void subsdk1_f_60a00(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_619b0  (orig 0x619b0, setter-chain)
void subsdk1_f_619b0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_63560  (orig 0x63560, compare-pred)
bool subsdk1_f_63560(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 8)) + 8)) == (uint32_t)(2); }

// sub_635b0  (orig 0x635b0, compare-pred)
bool subsdk1_f_635b0(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 8)) + 8)) == (uint32_t)(3); }

// sub_635d0  (orig 0x635d0, compare-pred)
bool subsdk1_f_635d0(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 8)) + 8)) == (uint32_t)(6); }

// sub_635f0  (orig 0x635f0, compare-pred)
bool subsdk1_f_635f0(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 8)) + 8)) == (uint32_t)(5); }

// sub_636f0  (orig 0x636f0, compare-pred)
bool subsdk1_f_636f0(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 8)) + 8)) == (uint32_t)(4); }

// sub_67ff0  (orig 0x67ff0, compare-pred)
bool subsdk1_f_67ff0(void* a0) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 8)) + 8)) + 80)) == (uint32_t)(45); }

// sub_681f0  (orig 0x681f0, straight)
uint32_t subsdk1_f_681f0(uint32_t a0) { return (((((uint32_t)a0) == 10)) ? (12) : ((((((uint32_t)a0) == 9)) ? (11) : (6)))); }

// sub_68210  (orig 0x68210, straight)
uint32_t subsdk1_f_68210(uint32_t a0) { return (((((uint32_t)a0) == 12)) ? (10) : ((((((uint32_t)a0) == 11)) ? (9) : (17)))); }

// sub_68e00  (orig 0x68e00, setter)
void subsdk1_f_68e00(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_6eb40  (orig 0x6eb40, mov_ret)
uint32_t subsdk1_f_6eb40() { return 0; }

// sub_6eb80  (orig 0x6eb80, mov_ret)
uint32_t subsdk1_f_6eb80() { return 1; }

// sub_6eb90  (orig 0x6eb90, ret_only)
void subsdk1_f_6eb90() {}

// sub_6eba0  (orig 0x6eba0, ret_only)
void subsdk1_f_6eba0() {}

// sub_6ebb0  (orig 0x6ebb0, ret_only)
void subsdk1_f_6ebb0() {}

// sub_6ebc0  (orig 0x6ebc0, ret_only)
void subsdk1_f_6ebc0() {}

// sub_6ebd0  (orig 0x6ebd0, mov_ret)
uint32_t subsdk1_f_6ebd0() { return 0; }

// sub_6ebe0  (orig 0x6ebe0, ret_only)
void subsdk1_f_6ebe0() {}

// sub_6ebf0  (orig 0x6ebf0, ret_only)
void subsdk1_f_6ebf0() {}

// sub_6ec00  (orig 0x6ec00, ret_only)
void subsdk1_f_6ec00() {}

// sub_6ec10  (orig 0x6ec10, ret_only)
void subsdk1_f_6ec10() {}

// sub_6ec20  (orig 0x6ec20, ret_only)
void subsdk1_f_6ec20() {}

// sub_6ec30  (orig 0x6ec30, mov_ret)
uint32_t subsdk1_f_6ec30() { return 0; }

// sub_6ec40  (orig 0x6ec40, ret_only)
void subsdk1_f_6ec40() {}

// sub_6ec50  (orig 0x6ec50, ret_only)
void subsdk1_f_6ec50() {}

// sub_6ec60  (orig 0x6ec60, ret_only)
void subsdk1_f_6ec60() {}

// sub_6ec70  (orig 0x6ec70, mov_ret)
uint32_t subsdk1_f_6ec70(uint32_t a0, uint32_t a1) { return a1; }

// sub_6ec80  (orig 0x6ec80, compare)
bool subsdk1_f_6ec80(uint64_t unused0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a1) + 32)) == (uint64_t)(0); }

// sub_6ec90  (orig 0x6ec90, mov_ret)
uint32_t subsdk1_f_6ec90() { return 0; }

// sub_6eca0  (orig 0x6eca0, mov_ret)
uint32_t subsdk1_f_6eca0() { return 4; }

// sub_6ecb0  (orig 0x6ecb0, mov_ret)
uint32_t subsdk1_f_6ecb0() { return 0; }

// sub_6ecc0  (orig 0x6ecc0, mov_ret)
uint32_t subsdk1_f_6ecc0() { return 1; }

// sub_6ecd0  (orig 0x6ecd0, mov_ret)
uint32_t subsdk1_f_6ecd0() { return 1; }

// sub_6ece0  (orig 0x6ece0, mov_ret)
uint32_t subsdk1_f_6ece0() { return 1; }

// sub_6ecf0  (orig 0x6ecf0, mov_ret)
uint32_t subsdk1_f_6ecf0() { return 1; }

// sub_6ed00  (orig 0x6ed00, mov_ret)
uint32_t subsdk1_f_6ed00() { return 0; }

// sub_6ed10  (orig 0x6ed10, ret_only)
void subsdk1_f_6ed10() {}

// sub_6f300  (orig 0x6f300, setter)
void subsdk1_f_6f300(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_6fbf0  (orig 0x6fbf0, compare-pred)
bool subsdk1_f_6fbf0(uint64_t unused0, void* a1) { return (uint32_t)((*(uint64_t*)((char*)a1 + 8) - 169)) < (uint32_t)(15); }

// sub_70a60  (orig 0x70a60, straight)
uint32_t subsdk1_f_70a60(uint64_t unused0, void* a1) { return (((*(uint32_t*)((char*)(a1) + 56) == 0)) ? (16) : (*(uint32_t*)((char*)(a1) + 56))); }

// sub_75550  (orig 0x75550, straight)
uint32_t subsdk1_f_75550(uint64_t unused0, void* a1) { return (*(uint32_t*)((char*)(a1) + 12)) & (31); }

// sub_77790  (orig 0x77790, mov_ret)
uint32_t subsdk1_f_77790() { return 0; }

// sub_777a0  (orig 0x777a0, ret_only)
void subsdk1_f_777a0() {}

// sub_777b0  (orig 0x777b0, ret_only)
void subsdk1_f_777b0() {}

// sub_777c0  (orig 0x777c0, ret_only)
void subsdk1_f_777c0() {}

// sub_777d0  (orig 0x777d0, ret_only)
void subsdk1_f_777d0() {}

// sub_777e0  (orig 0x777e0, mov_ret)
uint32_t subsdk1_f_777e0() { return 0; }

// sub_777f0  (orig 0x777f0, mov_ret)
uint32_t subsdk1_f_777f0() { return 0; }

// sub_77800  (orig 0x77800, mov_ret)
uint32_t subsdk1_f_77800() { return 0; }

// sub_77810  (orig 0x77810, mov_ret)
uint32_t subsdk1_f_77810() { return 0; }

// sub_77820  (orig 0x77820, mov_ret)
uint32_t subsdk1_f_77820() { return 0; }

// sub_77830  (orig 0x77830, mov_ret)
uint32_t subsdk1_f_77830() { return 0; }

// sub_77840  (orig 0x77840, ret_only)
void subsdk1_f_77840() {}

// sub_77850  (orig 0x77850, ret_only)
void subsdk1_f_77850() {}

// sub_77860  (orig 0x77860, mov_ret)
uint32_t subsdk1_f_77860() { return 0; }

// sub_77870  (orig 0x77870, mov_ret)
uint32_t subsdk1_f_77870() { return 0; }

// sub_77880  (orig 0x77880, mov_ret)
uint32_t subsdk1_f_77880() { return 0; }

// sub_77890  (orig 0x77890, mov_ret)
uint32_t subsdk1_f_77890() { return 0; }

// sub_778a0  (orig 0x778a0, mov_ret)
uint32_t subsdk1_f_778a0() { return 0; }

// sub_778b0  (orig 0x778b0, mov_ret)
uint32_t subsdk1_f_778b0() { return 0; }

// sub_7c4a0  (orig 0x7c4a0, setter-chain)
void subsdk1_f_7c4a0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_7eb10  (orig 0x7eb10, setter-chain)
void subsdk1_f_7eb10(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_811f0  (orig 0x811f0, strlit-flag-ret)
void *subsdk1_f_811f0(void* a0) { static char g_f_811f0[1]; *(uint32_t *)((char*)(a0)) = 111; __asm__ volatile("" ::: "memory"); return g_f_811f0; }

// sub_81210  (orig 0x81210, strlit-flag-ret)
void *subsdk1_f_81210(void* a0) { static char g_f_81210[1]; *(uint32_t *)((char*)(a0)) = 60; __asm__ volatile("" ::: "memory"); return g_f_81210; }

// sub_82d80  (orig 0x82d80, ret_only)
void subsdk1_f_82d80() {}

// sub_835c0  (orig 0x835c0, ret_only)
void subsdk1_f_835c0() {}

// sub_835d0  (orig 0x835d0, straight)
void subsdk1_f_835d0(uint64_t unused0, void* a1) {
    *(uint64_t*)((char*)(a1) + 656) = (*(uint64_t*)((char*)(a1) + 656)) | (16384);
}

// sub_835e0  (orig 0x835e0, straight)
void subsdk1_f_835e0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 700) = 1;
}

// sub_835f0  (orig 0x835f0, straight)
void subsdk1_f_835f0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 700) = 2;
}

// sub_83600  (orig 0x83600, straight)
void subsdk1_f_83600(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 700) = 13;
}

// sub_83610  (orig 0x83610, straight)
void subsdk1_f_83610(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 700) = 8;
}

// sub_83620  (orig 0x83620, straight)
void subsdk1_f_83620(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 700) = 10;
}

// sub_83630  (orig 0x83630, straight)
void subsdk1_f_83630(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 700) = 3;
}

// sub_83640  (orig 0x83640, straight)
void subsdk1_f_83640(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 700) = 9;
}

// sub_83650  (orig 0x83650, straight)
void subsdk1_f_83650(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 700) = 11;
}

// sub_83660  (orig 0x83660, straight)
void subsdk1_f_83660(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 700) = 12;
}

// sub_836b0  (orig 0x836b0, straight)
void subsdk1_f_836b0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 700) = 15;
}

// sub_836c0  (orig 0x836c0, ret_only)
void subsdk1_f_836c0() {}

// sub_836d0  (orig 0x836d0, ret_only)
void subsdk1_f_836d0() {}

// sub_836e0  (orig 0x836e0, ret_only)
void subsdk1_f_836e0() {}

// sub_836f0  (orig 0x836f0, ret_only)
void subsdk1_f_836f0() {}

// sub_83710  (orig 0x83710, ret_only)
void subsdk1_f_83710() {}

// sub_83720  (orig 0x83720, ret_only)
void subsdk1_f_83720() {}

// sub_83730  (orig 0x83730, ret_only)
void subsdk1_f_83730() {}

// sub_83740  (orig 0x83740, ret_only)
void subsdk1_f_83740() {}

// sub_83750  (orig 0x83750, ret_only)
void subsdk1_f_83750() {}

// sub_83760  (orig 0x83760, ret_only)
void subsdk1_f_83760() {}

// sub_83770  (orig 0x83770, ret_only)
void subsdk1_f_83770() {}

// sub_83780  (orig 0x83780, ret_only)
void subsdk1_f_83780() {}

// sub_83790  (orig 0x83790, ret_only)
void subsdk1_f_83790() {}

// sub_99310  (orig 0x99310, ret_only)
void subsdk1_f_99310() {}

// sub_99320  (orig 0x99320, ret_only)
void subsdk1_f_99320() {}

// sub_99a20  (orig 0x99a20, mov_ret)
uint32_t subsdk1_f_99a20() { return 0; }

// sub_9a240  (orig 0x9a240, getter)
uint32_t subsdk1_f_9a240(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_9a730  (orig 0x9a730, getter)
uint32_t subsdk1_f_9a730(void* a0) { return *(uint32_t*)((char*)(a0) + 4); }

// sub_9b3d0  (orig 0x9b3d0, getter-chain)
uint32_t subsdk1_f_9b3d0(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 248);
    return *(uint32_t*)((char*)(t0) + (uintptr_t)(a1) * 4);
}

// sub_9d420  (orig 0x9d420, straight-line)
uint32_t subsdk1_f_9d420(uint32_t a0, uint32_t a1) { return (((uint32_t)a1)) | (((((uint32_t)a0)) << 8)); }

// sub_9d430  (orig 0x9d430, straight)
void subsdk1_f_9d430(uint32_t a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a1)) = (((uint32_t)a0)) & (255);
    *(uint32_t*)((char*)(a2)) = ((((uint32_t)a0)) >> (8)) & (255);
}

// sub_aaba0  (orig 0xaaba0, getter-chain)
uint32_t subsdk1_f_aaba0(void* a0, uint32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 48);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 216);
    uint64_t t2 = *(uint64_t*)((char*)(t1) + (uintptr_t)(a1) * 8);
    return *(uint32_t*)((char*)(t2) + 184);
}

// sub_ad290  (orig 0xad290, getter-chain)
uint32_t subsdk1_f_ad290(void* a0, uint32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 48);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 104);
    uint64_t t2 = *(uint64_t*)((char*)(t1) + (uintptr_t)(a1) * 8);
    return *(uint32_t*)((char*)(t2) + 4);
}

// sub_b7c80  (orig 0xb7c80, straight)
void subsdk1_f_b7c80(void* a0) {
    *(uint32_t*)((char*)(a0) + 160) = -1;
}

// sub_b7cb0  (orig 0xb7cb0, straight)
void subsdk1_f_b7cb0(uint64_t unused0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a1)) = 0;
    *(uint32_t*)((char*)(a2)) = 8;
}

// sub_b7cc0  (orig 0xb7cc0, straight)
void subsdk1_f_b7cc0(uint64_t unused0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a1)) = 8;
    *(uint32_t*)((char*)(a2)) = 8;
}

// sub_b7d00  (orig 0xb7d00, copy2)
void subsdk1_f_b7d00(void* a0, uint64_t a1) { (*(uint32_t *)((char *)(*(void **)((char*)(a0) + 48)) + 472)) = a1; }

// sub_b7e40  (orig 0xb7e40, straight-line)
uint64_t subsdk1_f_b7e40(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 16)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(24))))))));
    return *(uint64_t*)((char*)(p0) + 8);
}

// sub_b89a0  (orig 0xb89a0, straight-line)
uint32_t subsdk1_f_b89a0(void* a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((*(uint64_t*)((char*)(a0) + 16)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(24))))))));
    return *(uint32_t*)((char*)(p0) + 8);
}

// sub_b9e80  (orig 0xb9e80, mov_ret)
uint32_t subsdk1_f_b9e80() { return 0; }

// sub_c83a0  (orig 0xc83a0, setter)
void subsdk1_f_c83a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_c83b0  (orig 0xc83b0, setter)
void subsdk1_f_c83b0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_da6c0  (orig 0xda6c0, setter-chain)
void subsdk1_f_da6c0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_dca20  (orig 0xdca20, mov_ret)
uint32_t subsdk1_f_dca20() { return 0; }

// sub_dca30  (orig 0xdca30, mov_ret)
uint32_t subsdk1_f_dca30() { return 1; }

// sub_dca40  (orig 0xdca40, mov_ret)
uint32_t subsdk1_f_dca40() { return 1; }

// sub_dca50  (orig 0xdca50, mov_ret)
uint32_t subsdk1_f_dca50() { return 0; }

// sub_dca70  (orig 0xdca70, ret_only)
void subsdk1_f_dca70() {}

// sub_dca80  (orig 0xdca80, mov_ret)
uint32_t subsdk1_f_dca80() { return 0; }

// sub_dca90  (orig 0xdca90, ret_only)
void subsdk1_f_dca90() {}

// sub_dcaa0  (orig 0xdcaa0, ret_only)
void subsdk1_f_dcaa0() {}

// sub_dcab0  (orig 0xdcab0, ret_only)
void subsdk1_f_dcab0() {}

// sub_dcac0  (orig 0xdcac0, mov_ret)
uint32_t subsdk1_f_dcac0() { return 0; }

// sub_dcad0  (orig 0xdcad0, ret_only)
void subsdk1_f_dcad0() {}

// sub_dcae0  (orig 0xdcae0, mov_ret)
uint32_t subsdk1_f_dcae0(uint32_t a0, uint32_t a1, uint32_t a2) { return a2; }

// sub_dcaf0  (orig 0xdcaf0, straight-line)
uint32_t subsdk1_f_dcaf0(uint64_t a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((((int64_t)(((int32_t)(((uint32_t)a1)))))) * (((int64_t)(((int32_t)(24))))))));
    return ((*(uint32_t*)((char*)(p0) + 340)) + (1)) - (*(uint32_t*)((char*)(p0) + 336));
}

// sub_dcb10  (orig 0xdcb10, mov_ret)
uint32_t subsdk1_f_dcb10() { return 0; }

// sub_dcb20  (orig 0xdcb20, ret_only)
void subsdk1_f_dcb20() {}

// sub_dcb30  (orig 0xdcb30, ret_only)
void subsdk1_f_dcb30() {}

// sub_dcb40  (orig 0xdcb40, mov_ret)
uint32_t subsdk1_f_dcb40() { return 0; }

// sub_dcb50  (orig 0xdcb50, ret_only)
void subsdk1_f_dcb50() {}

// sub_dcb60  (orig 0xdcb60, ret_only)
void subsdk1_f_dcb60() {}

// sub_dcb70  (orig 0xdcb70, ret_only)
void subsdk1_f_dcb70() {}

// sub_dcb80  (orig 0xdcb80, mov_ret)
uint32_t subsdk1_f_dcb80() { return 0; }

// sub_dcb90  (orig 0xdcb90, mov_ret)
uint32_t subsdk1_f_dcb90() { return 1; }

// sub_dcba0  (orig 0xdcba0, mov_ret)
uint32_t subsdk1_f_dcba0() { return 1; }

// sub_dcbb0  (orig 0xdcbb0, mov_ret)
uint32_t subsdk1_f_dcbb0(uint32_t a0, uint32_t a1, uint32_t a2) { return a2; }

// sub_dcbc0  (orig 0xdcbc0, mov_ret)
uint32_t subsdk1_f_dcbc0(uint32_t a0, uint32_t a1, uint32_t a2) { return a2; }

// sub_ddaf0  (orig 0xddaf0, straight)
void subsdk1_f_ddaf0(void* a0, uint32_t a1, uint32_t a2) {
    *(uint8_t*)((char*)(a0) + 24) = (uint8_t)((((uint32_t)a1)) & (1));
    *(uint8_t*)((char*)(a0) + 25) = (uint8_t)((((uint32_t)a2)) & (1));
    *(uint64_t*)((char*)(a0) + 16) = 0;
}

// sub_de2a0  (orig 0xde2a0, setter)
void subsdk1_f_de2a0(void* a0) { *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_deb30  (orig 0xdeb30, mov_ret)
uint64_t subsdk1_f_deb30() { return 0; }

// sub_deb40  (orig 0xdeb40, mov_ret)
uint64_t subsdk1_f_deb40() { return 0; }

// sub_deb50  (orig 0xdeb50, mov_ret)
uint64_t subsdk1_f_deb50() { return 0; }

// sub_e01e0  (orig 0xe01e0, ret_only)
void subsdk1_f_e01e0() {}

// sub_e01f0  (orig 0xe01f0, ret_only)
void subsdk1_f_e01f0() {}

// sub_e0210  (orig 0xe0210, mov_ret)
uint64_t subsdk1_f_e0210() { return 0; }

// sub_e0220  (orig 0xe0220, mov_ret)
uint32_t subsdk1_f_e0220() { return 0; }

// sub_e0230  (orig 0xe0230, ret_only)
void subsdk1_f_e0230() {}

// sub_e0240  (orig 0xe0240, ret_only)
void subsdk1_f_e0240() {}

// sub_e0250  (orig 0xe0250, ret_only)
void subsdk1_f_e0250() {}

// sub_e0260  (orig 0xe0260, ret_only)
void subsdk1_f_e0260() {}

// sub_e0270  (orig 0xe0270, ret_only)
void subsdk1_f_e0270() {}

// sub_e0280  (orig 0xe0280, ret_only)
void subsdk1_f_e0280() {}

// sub_e0290  (orig 0xe0290, ret_only)
void subsdk1_f_e0290() {}

// sub_e02a0  (orig 0xe02a0, mov_ret)
uint64_t subsdk1_f_e02a0() { return 0; }

// sub_e02b0  (orig 0xe02b0, ret_only)
void subsdk1_f_e02b0() {}

// sub_e02c0  (orig 0xe02c0, ret_only)
void subsdk1_f_e02c0() {}

// sub_e02d0  (orig 0xe02d0, ret_only)
void subsdk1_f_e02d0() {}

// sub_e02e0  (orig 0xe02e0, ret_only)
void subsdk1_f_e02e0() {}

// sub_e02f0  (orig 0xe02f0, ret_only)
void subsdk1_f_e02f0() {}

// sub_e0300  (orig 0xe0300, ret_only)
void subsdk1_f_e0300() {}

// sub_e0310  (orig 0xe0310, mov_ret)
uint32_t subsdk1_f_e0310() { return 0; }

// sub_e0390  (orig 0xe0390, setter-chain)
void subsdk1_f_e0390(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_e35d0  (orig 0xe35d0, setter-chain)
void subsdk1_f_e35d0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_e49b0  (orig 0xe49b0, setter)
void subsdk1_f_e49b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_e49c0  (orig 0xe49c0, setter)
void subsdk1_f_e49c0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_e4ca0  (orig 0xe4ca0, setter-chain)
void subsdk1_f_e4ca0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_e5060  (orig 0xe5060, setter-chain)
void subsdk1_f_e5060(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_e5420  (orig 0xe5420, setter-chain)
void subsdk1_f_e5420(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_e5770  (orig 0xe5770, setter)
void subsdk1_f_e5770(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_e5780  (orig 0xe5780, setter)
void subsdk1_f_e5780(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_e59f0  (orig 0xe59f0, setter)
void subsdk1_f_e59f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_e5a00  (orig 0xe5a00, setter)
void subsdk1_f_e5a00(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_f94a0  (orig 0xf94a0, setter-chain)
void subsdk1_f_f94a0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_fb650  (orig 0xfb650, ret_only)
void subsdk1_f_fb650() {}

// sub_fd740  (orig 0xfd740, ret_only)
void subsdk1_f_fd740() {}

// sub_fdaf0  (orig 0xfdaf0, straight)
uint32_t subsdk1_f_fdaf0(uint64_t unused0, void* a1) { return (((*(uint32_t*)((char*)(a1) + 80) == 190) ? 1 : 0)) | (((*(uint32_t*)((char*)(a1) + 80) == 203) ? 1 : 0)); }

// sub_101cb0  (orig 0x101cb0, ret_only)
void subsdk1_f_101cb0() {}

// sub_101cc0  (orig 0x101cc0, mov_ret)
uint64_t subsdk1_f_101cc0() { return 0; }

// sub_101cd0  (orig 0x101cd0, mov_ret)
uint32_t subsdk1_f_101cd0() { return 0; }

// sub_101ce0  (orig 0x101ce0, mov_ret)
uint32_t subsdk1_f_101ce0() { return 0; }

// sub_101cf0  (orig 0x101cf0, ret_only)
void subsdk1_f_101cf0() {}

// sub_101d00  (orig 0x101d00, mov_ret)
uint32_t subsdk1_f_101d00() { return 0; }

// sub_101d10  (orig 0x101d10, ret_only)
void subsdk1_f_101d10() {}

// sub_101d20  (orig 0x101d20, mov_ret)
uint32_t subsdk1_f_101d20() { return 0; }

// sub_101d30  (orig 0x101d30, mov_ret)
uint32_t subsdk1_f_101d30() { return 0; }

// sub_101d40  (orig 0x101d40, mov_ret)
uint32_t subsdk1_f_101d40() { return 0; }

// sub_101d50  (orig 0x101d50, mov_ret)
uint32_t subsdk1_f_101d50() { return 0; }

// sub_101d60  (orig 0x101d60, mov_ret)
uint32_t subsdk1_f_101d60() { return 1; }

// sub_101d70  (orig 0x101d70, mov_ret)
uint32_t subsdk1_f_101d70() { return 2; }

// sub_101d80  (orig 0x101d80, straight)
uint32_t subsdk1_f_101d80(uint64_t unused0, uint32_t a1) { return (((uint32_t)a1)) & (1); }

// sub_101d90  (orig 0x101d90, ret_only)
void subsdk1_f_101d90() {}

// sub_101da0  (orig 0x101da0, compare-pred)
bool subsdk1_f_101da0(uint64_t unused0, void* a1) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)(char*)a1) + 80)) != (uint32_t)(190); }

// sub_101dc0  (orig 0x101dc0, compare-pred)
bool subsdk1_f_101dc0(uint64_t unused0, void* a1) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)(char*)a1) + 80)) == (uint32_t)(190); }

// sub_101e10  (orig 0x101e10, mov_ret)
uint32_t subsdk1_f_101e10() { return 0; }

// sub_101e20  (orig 0x101e20, mov_ret)
uint32_t subsdk1_f_101e20() { return 0; }

// sub_1031c0  (orig 0x1031c0, ret_only)
void subsdk1_f_1031c0() {}

// sub_103d70  (orig 0x103d70, setter-chain)
void subsdk1_f_103d70(void* a0) { *(uint32_t*)((char*)(a0) + 140) = 0; *(uint32_t*)((char*)(a0) + 152) = 0; *(uint32_t*)((char*)(a0) + 164) = 0; *(uint32_t*)((char*)(a0) + 176) = 0; *(uint32_t*)((char*)(a0) + 188) = 0; *(uint32_t*)((char*)(a0) + 200) = 0; *(uint32_t*)((char*)(a0) + 212) = 0; *(uint32_t*)((char*)(a0) + 224) = 0; *(uint32_t*)((char*)(a0) + 236) = 0; *(uint32_t*)((char*)(a0) + 248) = 0; *(uint32_t*)((char*)(a0) + 260) = 0; *(uint32_t*)((char*)(a0) + 272) = 0; *(uint32_t*)((char*)(a0) + 284) = 0; *(uint32_t*)((char*)(a0) + 296) = 0; *(uint32_t*)((char*)(a0) + 308) = 0; *(uint32_t*)((char*)(a0) + 320) = 0; *(uint32_t*)((char*)(a0) + 332) = 0; *(uint32_t*)((char*)(a0) + 344) = 0; *(uint32_t*)((char*)(a0) + 356) = 0; *(uint32_t*)((char*)(a0) + 368) = 0; *(uint32_t*)((char*)(a0) + 380) = 0; *(uint32_t*)((char*)(a0) + 392) = 0; *(uint32_t*)((char*)(a0) + 404) = 0; *(uint32_t*)((char*)(a0) + 416) = 0; *(uint32_t*)((char*)(a0) + 428) = 0; *(uint32_t*)((char*)(a0) + 440) = 0; *(uint32_t*)((char*)(a0) + 452) = 0; *(uint32_t*)((char*)(a0) + 464) = 0; *(uint32_t*)((char*)(a0) + 476) = 0; *(uint32_t*)((char*)(a0) + 488) = 0; *(uint32_t*)((char*)(a0) + 500) = 0; *(uint32_t*)((char*)(a0) + 512) = 0; }

// sub_106760  (orig 0x106760, ret_only)
void subsdk1_f_106760() {}

// sub_106770  (orig 0x106770, ret_only)
void subsdk1_f_106770() {}

// sub_106780  (orig 0x106780, ret_only)
void subsdk1_f_106780() {}

// sub_108ef0  (orig 0x108ef0, compare-pred)
bool subsdk1_f_108ef0(uint64_t unused0, void* a1) { return (uint32_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a1 + 192)) + 20)) == (uint32_t)(9); }

// sub_10f560  (orig 0x10f560, straight-line)
uint64_t subsdk1_f_10f560(uint64_t unused0, uint64_t unused1, uint64_t unused2, uint64_t unused3, uint64_t unused4, uint64_t a5) { return ((uint64_t)a5); }

// sub_10f570  (orig 0x10f570, ret_only)
void subsdk1_f_10f570() {}

// sub_10f580  (orig 0x10f580, ret_only)
void subsdk1_f_10f580() {}

// sub_10f590  (orig 0x10f590, ret_only)
void subsdk1_f_10f590() {}

// sub_110460  (orig 0x110460, compare)
bool subsdk1_f_110460(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 8)) == (uint64_t)(532); }

// sub_110470  (orig 0x110470, straight)
uint8_t subsdk1_f_110470(uint64_t unused0, void* a1) { return ((*(uint8_t*)((char*)(a1) + 16)) >> (3)) & (1); }

// sub_110d30  (orig 0x110d30, ret_only)
void subsdk1_f_110d30() {}

// sub_111df0  (orig 0x111df0, mov_ret)
uint32_t subsdk1_f_111df0(uint32_t a0, uint32_t a1) { return a1; }

// sub_111fa0  (orig 0x111fa0, mov_ret)
uint32_t subsdk1_f_111fa0() { return 1; }

// sub_112110  (orig 0x112110, mov_ret)
uint32_t subsdk1_f_112110() { return 4; }

// sub_112380  (orig 0x112380, straight)
void subsdk1_f_112380(uint64_t unused0, uint64_t unused1, void* a2) {
    *(uint32_t*)((char*)(a2) + 16) = (*(uint32_t*)((char*)(a2) + 16)) | (65536);
}

// sub_1127d0  (orig 0x1127d0, ret_only)
void subsdk1_f_1127d0() {}

// sub_118400  (orig 0x118400, straight)
void subsdk1_f_118400(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 28);
    *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a1) + 20);
    *(uint32_t*)((char*)(a0) + 20) = *(uint32_t*)((char*)(a1) + 12);
    *(uint32_t*)((char*)(a0) + 24) = *(uint32_t*)((char*)(a1) + 8);
    *(uint32_t*)((char*)(a0) + 28) = *(uint32_t*)((char*)(a1) + 16);
}

// sub_122430  (orig 0x122430, straight-line)
uint32_t subsdk1_f_122430(uint64_t unused0, uint64_t unused1, uint32_t a2) { return ((((uint32_t)a2) < 16) ? 1 : 0); }

// sub_123c60  (orig 0x123c60, setter)
void subsdk1_f_123c60(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_13d720  (orig 0x13d720, straight)
uint32_t subsdk1_f_13d720(void* a0) { return (((*(uint8_t*)((char*)(a0) + 938) == 0)) ? (2) : (4)); }

// sub_14d660  (orig 0x14d660, setter)
void subsdk1_f_14d660(void* a0) { *(uint8_t*)((char*)(a0) + 280) = 0; }

// sub_151b50  (orig 0x151b50, mov_ret)
uint32_t subsdk1_f_151b50() { return 0; }

// sub_1520a0  (orig 0x1520a0, getter)
uint32_t subsdk1_f_1520a0(void* a0) { return *(uint32_t*)((char*)(a0) + 404); }

// sub_1520b0  (orig 0x1520b0, straight)
uint64_t subsdk1_f_1520b0(void* a0) { return ((*(uint64_t*)((char*)(a0) + 736)) >> (13)) & (1); }

// sub_1520c0  (orig 0x1520c0, getter)
uint8_t subsdk1_f_1520c0(void* a0) { return *(uint8_t*)((char*)(a0) + 302); }

// sub_1520e0  (orig 0x1520e0, mov_ret)
uint32_t subsdk1_f_1520e0() { return 1; }

// sub_152200  (orig 0x152200, getter)
uint8_t subsdk1_f_152200(void* a0) { return *(uint8_t*)((char*)(a0) + 306); }

// sub_152250  (orig 0x152250, getter)
uint32_t subsdk1_f_152250(void* a0) { return *(uint32_t*)((char*)(a0) + 948); }

// sub_152260  (orig 0x152260, getter)
uint32_t subsdk1_f_152260(void* a0) { return *(uint32_t*)((char*)(a0) + 952); }

// sub_152280  (orig 0x152280, ret_only)
void subsdk1_f_152280() {}

// sub_152290  (orig 0x152290, ret_only)
void subsdk1_f_152290() {}

// sub_1522a0  (orig 0x1522a0, mov_ret)
uint32_t subsdk1_f_1522a0() { return 0; }

// sub_1522b0  (orig 0x1522b0, mov_ret)
uint32_t subsdk1_f_1522b0() { return 0; }

// sub_1522c0  (orig 0x1522c0, mov_ret)
uint32_t subsdk1_f_1522c0() { return 0; }

// sub_1522d0  (orig 0x1522d0, mov_ret)
uint32_t subsdk1_f_1522d0() { return 0; }

// sub_1522e0  (orig 0x1522e0, mov_ret)
uint32_t subsdk1_f_1522e0() { return 0; }

// sub_1522f0  (orig 0x1522f0, ret_only)
void subsdk1_f_1522f0() {}

// sub_152300  (orig 0x152300, ret_only)
void subsdk1_f_152300() {}

// sub_152310  (orig 0x152310, mov_ret)
uint32_t subsdk1_f_152310() { return 0; }

// sub_152320  (orig 0x152320, mov_ret)
uint64_t subsdk1_f_152320() { return 0; }

// sub_152330  (orig 0x152330, ret_only)
void subsdk1_f_152330() {}

// sub_152340  (orig 0x152340, mov_ret)
uint32_t subsdk1_f_152340() { return 0; }

// sub_152350  (orig 0x152350, mov_ret)
uint32_t subsdk1_f_152350() { return 0; }

// sub_152360  (orig 0x152360, mov_ret)
uint32_t subsdk1_f_152360() { return 0; }

// sub_152370  (orig 0x152370, mov_ret)
uint32_t subsdk1_f_152370() { return 0; }

// sub_152380  (orig 0x152380, mov_ret)
uint32_t subsdk1_f_152380() { return 0; }

// sub_152390  (orig 0x152390, mov_ret)
uint32_t subsdk1_f_152390() { return 0; }

// sub_1523a0  (orig 0x1523a0, setter-chain-zero)
void subsdk1_f_1523a0(uint64_t unused0, uint64_t unused1, uint64_t unused2, void* a3, void* a4, void* a5) {
    *(uint32_t*)(char*)a5 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)(char*)a4 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)(char*)a3 = 0;
}

// sub_1523b0  (orig 0x1523b0, mov_ret)
uint32_t subsdk1_f_1523b0() { return 0; }

// sub_152440  (orig 0x152440, ret_only)
void subsdk1_f_152440() {}

// sub_152600  (orig 0x152600, setter)
void subsdk1_f_152600(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_152d90  (orig 0x152d90, setter-chain)
void subsdk1_f_152d90(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_1548e0  (orig 0x1548e0, straight)
uint8_t subsdk1_f_1548e0(uint64_t unused0, void* a1) { return ((*(uint8_t*)((char*)(a1) + 18)) >> (2)) & (1); }

// sub_1548f0  (orig 0x1548f0, straight)
uint8_t subsdk1_f_1548f0(uint64_t unused0, void* a1) { return ((*(uint8_t*)((char*)(a1) + 18)) >> (3)) & (1); }

// sub_155890  (orig 0x155890, straight)
uint32_t subsdk1_f_155890(uint64_t unused0, void* a1) { return (*(uint32_t*)((char*)(a1) + 16)) & (1); }

// sub_155930  (orig 0x155930, straight)
uint32_t subsdk1_f_155930(uint64_t unused0, void* a1) { return (*(uint32_t*)((char*)(a1) + 16)) & (1); }

// sub_159370  (orig 0x159370, straight-line)
uint32_t subsdk1_f_159370(uint64_t unused0, uint32_t a1) { return (((((uint32_t)a1) == 104)) ? (((uint32_t)a1)) : (0)); }

// sub_159bb0  (orig 0x159bb0, ret_only)
void subsdk1_f_159bb0() {}

// sub_159bd0  (orig 0x159bd0, mov_ret)
uint32_t subsdk1_f_159bd0() { return 0; }

// sub_159c40  (orig 0x159c40, mov_ret)
uint32_t subsdk1_f_159c40() { return 1; }

// sub_162a00  (orig 0x162a00, getter)
uint64_t subsdk1_f_162a00(uint64_t unused0, uint64_t unused1, uint64_t unused2, void* a3) { return *(uint64_t*)((char*)(a3) + 8); }

// sub_166fc0  (orig 0x166fc0, mov_ret)
uint32_t subsdk1_f_166fc0() { return 1; }

// sub_168010  (orig 0x168010, mov_ret)
uint32_t subsdk1_f_168010() { return 0; }

// sub_168070  (orig 0x168070, mov_ret)
uint32_t subsdk1_f_168070() { return 0; }

// sub_168090  (orig 0x168090, ret_only)
void subsdk1_f_168090() {}

// sub_1680a0  (orig 0x1680a0, ret_only)
void subsdk1_f_1680a0() {}

// sub_168130  (orig 0x168130, ret_only)
void subsdk1_f_168130() {}

// sub_16a690  (orig 0x16a690, straight)
uint32_t subsdk1_f_16a690(uint64_t unused0, uint32_t a1) { return (((((uint32_t)a1) == 40)) ? (2) : (((((uint32_t)a1) == 39) ? 1 : 0))); }

// sub_16a750  (orig 0x16a750, compare)
bool subsdk1_f_16a750(uint64_t unused0, uint64_t a1) { return (uint32_t)(a1) == (uint64_t)(205); }

// sub_16bdd0  (orig 0x16bdd0, straight)
uint32_t subsdk1_f_16bdd0(uint64_t unused0, uint32_t a1) { return (((((uint32_t)a1) < 5)) ? (((uint32_t)a1)) : (3)); }

// sub_16d830  (orig 0x16d830, getter-chain)
uint32_t subsdk1_f_16d830(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 304);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 704);
    return *(uint32_t*)((char*)(t1) + 448);
}

// sub_16e800  (orig 0x16e800, mov_ret)
uint32_t subsdk1_f_16e800() { return 0; }

// sub_16e810  (orig 0x16e810, mov_ret)
uint32_t subsdk1_f_16e810() { return 1; }

// sub_16e820  (orig 0x16e820, mov_ret)
uint32_t subsdk1_f_16e820() { return 1; }

// sub_172390  (orig 0x172390, mov_ret)
uint32_t subsdk1_f_172390() { return 16777215; }

// sub_184370  (orig 0x184370, mov_ret)
uint32_t subsdk1_f_184370() { return 0; }

// sub_184380  (orig 0x184380, mov_ret)
uint64_t subsdk1_f_184380() { return 0; }

// sub_184390  (orig 0x184390, mov_ret)
uint32_t subsdk1_f_184390(uint32_t a0, uint32_t a1) { return a1; }

// sub_1843a0  (orig 0x1843a0, mov_ret)
uint32_t subsdk1_f_1843a0() { return 0; }

// sub_1843b0  (orig 0x1843b0, mov_ret)
uint32_t subsdk1_f_1843b0() { return 0; }

// sub_1843c0  (orig 0x1843c0, ret_only)
void subsdk1_f_1843c0() {}

// sub_1843f0  (orig 0x1843f0, mov_ret)
uint32_t subsdk1_f_1843f0() { return 0; }

// sub_184400  (orig 0x184400, ret_only)
void subsdk1_f_184400() {}

// sub_184470  (orig 0x184470, mov_ret)
uint32_t subsdk1_f_184470() { return 0; }

// sub_184480  (orig 0x184480, mov_ret)
uint32_t subsdk1_f_184480() { return -1; }

// sub_184490  (orig 0x184490, mov_ret)
uint32_t subsdk1_f_184490() { return -1; }

// sub_1844a0  (orig 0x1844a0, mov_ret)
uint32_t subsdk1_f_1844a0() { return 1; }

// sub_1844b0  (orig 0x1844b0, ret_only)
void subsdk1_f_1844b0() {}

// sub_1844c0  (orig 0x1844c0, mov_ret)
uint32_t subsdk1_f_1844c0() { return 0; }

// sub_1844d0  (orig 0x1844d0, ret_only)
void subsdk1_f_1844d0() {}

// sub_1844e0  (orig 0x1844e0, ret_only)
void subsdk1_f_1844e0() {}

// sub_1844f0  (orig 0x1844f0, ret_only)
void subsdk1_f_1844f0() {}

// sub_184500  (orig 0x184500, mov_ret)
uint32_t subsdk1_f_184500() { return 0; }

// sub_184510  (orig 0x184510, ret_only)
void subsdk1_f_184510() {}

// sub_184520  (orig 0x184520, ret_only)
void subsdk1_f_184520() {}

// sub_184530  (orig 0x184530, ret_only)
void subsdk1_f_184530() {}

// sub_184540  (orig 0x184540, mov_ret)
uint32_t subsdk1_f_184540() { return 0; }

// sub_184550  (orig 0x184550, mov_ret)
uint32_t subsdk1_f_184550() { return 0; }

// sub_184560  (orig 0x184560, mov_ret)
uint32_t subsdk1_f_184560() { return 0; }

// sub_184570  (orig 0x184570, mov_ret)
uint32_t subsdk1_f_184570() { return 0; }

// sub_184580  (orig 0x184580, mov_ret)
uint32_t subsdk1_f_184580() { return 0; }

// sub_184590  (orig 0x184590, mov_ret)
uint32_t subsdk1_f_184590() { return 0; }

// sub_1845a0  (orig 0x1845a0, mov_ret)
uint32_t subsdk1_f_1845a0() { return 1; }

// sub_1845b0  (orig 0x1845b0, compare)
bool subsdk1_f_1845b0(uint64_t unused0, uint64_t a1) { return (uint32_t)(a1) == (uint64_t)(0); }

// sub_1845c0  (orig 0x1845c0, ret_only)
void subsdk1_f_1845c0() {}

// sub_1845d0  (orig 0x1845d0, ret_only)
void subsdk1_f_1845d0() {}

// sub_1845e0  (orig 0x1845e0, ret_only)
void subsdk1_f_1845e0() {}

// sub_1845f0  (orig 0x1845f0, ret_only)
void subsdk1_f_1845f0() {}

// sub_184630  (orig 0x184630, setter-chain)
void subsdk1_f_184630(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_185710  (orig 0x185710, ret_only)
void subsdk1_f_185710() {}

// sub_185720  (orig 0x185720, ret_only)
void subsdk1_f_185720() {}

// sub_185730  (orig 0x185730, straight)
uint8_t subsdk1_f_185730(uint64_t unused0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1) + 48));
    return ((*(uint8_t*)((char*)(p0) + 48) & (uint64_t)(31)) ? 1 : 0);
}

// sub_185750  (orig 0x185750, straight)
uint8_t subsdk1_f_185750(uint64_t unused0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1) + 48));
    return (*(uint8_t*)((char*)(p0) + 48)) >> (7);
}

// sub_188a80  (orig 0x188a80, mov_ret)
uint32_t subsdk1_f_188a80() { return 1; }

// sub_188af0  (orig 0x188af0, ret_only)
void subsdk1_f_188af0() {}

// sub_188b00  (orig 0x188b00, mov_ret)
uint32_t subsdk1_f_188b00() { return 4; }

// sub_188b10  (orig 0x188b10, mov_ret)
uint32_t subsdk1_f_188b10() { return 0; }

// sub_188b20  (orig 0x188b20, ret_only)
void subsdk1_f_188b20() {}

// sub_188b30  (orig 0x188b30, ret_only)
void subsdk1_f_188b30() {}

// sub_188dc0  (orig 0x188dc0, straight)
uint8_t subsdk1_f_188dc0(uint64_t unused0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1) + 48));
    return ((*(uint8_t*)((char*)(p0) + 48) & (uint64_t)(135)) ? 1 : 0);
}

// sub_188de0  (orig 0x188de0, straight)
uint8_t subsdk1_f_188de0(uint64_t unused0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1) + 48));
    return ((*(uint8_t*)((char*)(p0) + 48)) >> (6)) & (1);
}

// sub_18d150  (orig 0x18d150, straight)
uint32_t subsdk1_f_18d150(uint64_t unused0, uint32_t a1) { return (((uint32_t)a1)) & (39); }

// sub_18dfe0  (orig 0x18dfe0, compare-pred)
bool subsdk1_f_18dfe0(uint64_t unused0, void* a1) { return (uint32_t)((*(uint16_t*)((char*)(*(uint64_t*)((char*)a1 + 48)) + 100) & 31)) == (uint32_t)(16); }

// sub_190aa0  (orig 0x190aa0, mov_ret)
uint32_t subsdk1_f_190aa0() { return 1; }

// sub_190af0  (orig 0x190af0, mov_ret)
uint64_t subsdk1_f_190af0() { return 0; }

// sub_190b00  (orig 0x190b00, mov_ret)
uint32_t subsdk1_f_190b00() { return 3; }

// sub_190b10  (orig 0x190b10, mov_ret)
uint32_t subsdk1_f_190b10() { return 1; }

// sub_190c60  (orig 0x190c60, ret_only)
void subsdk1_f_190c60() {}

// sub_190ca0  (orig 0x190ca0, compare)
bool subsdk1_f_190ca0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 2712)) == (uint64_t)(0); }

// sub_190cb0  (orig 0x190cb0, compare)
bool subsdk1_f_190cb0(uint64_t unused0, uint64_t a1) { return (uint32_t)(a1) == (uint64_t)(7); }

// sub_191080  (orig 0x191080, setter-chain)
void subsdk1_f_191080(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_1ca330  (orig 0x1ca330, ret_only)
void subsdk1_f_1ca330() {}

// sub_1ca340  (orig 0x1ca340, ret_only)
void subsdk1_f_1ca340() {}

// sub_1ca350  (orig 0x1ca350, ret_only)
void subsdk1_f_1ca350() {}

// sub_1ca360  (orig 0x1ca360, ret_only)
void subsdk1_f_1ca360() {}

// sub_1ca370  (orig 0x1ca370, ret_only)
void subsdk1_f_1ca370() {}

// sub_1ca380  (orig 0x1ca380, ret_only)
void subsdk1_f_1ca380() {}

// sub_1ca390  (orig 0x1ca390, ret_only)
void subsdk1_f_1ca390() {}

// sub_1ca3a0  (orig 0x1ca3a0, ret_only)
void subsdk1_f_1ca3a0() {}

// sub_1ca3b0  (orig 0x1ca3b0, ret_only)
void subsdk1_f_1ca3b0() {}

// sub_1ca3c0  (orig 0x1ca3c0, ret_only)
void subsdk1_f_1ca3c0() {}

// sub_1ca3d0  (orig 0x1ca3d0, ret_only)
void subsdk1_f_1ca3d0() {}

// sub_1ca3e0  (orig 0x1ca3e0, ret_only)
void subsdk1_f_1ca3e0() {}

// sub_1ca3f0  (orig 0x1ca3f0, ret_only)
void subsdk1_f_1ca3f0() {}

// sub_1ca400  (orig 0x1ca400, ret_only)
void subsdk1_f_1ca400() {}

// sub_1ca410  (orig 0x1ca410, ret_only)
void subsdk1_f_1ca410() {}

// sub_1ca420  (orig 0x1ca420, ret_only)
void subsdk1_f_1ca420() {}

// sub_1ca430  (orig 0x1ca430, ret_only)
void subsdk1_f_1ca430() {}

// sub_1ca440  (orig 0x1ca440, ret_only)
void subsdk1_f_1ca440() {}

// sub_1ca450  (orig 0x1ca450, ret_only)
void subsdk1_f_1ca450() {}

// sub_1ca460  (orig 0x1ca460, ret_only)
void subsdk1_f_1ca460() {}

// sub_1ca470  (orig 0x1ca470, ret_only)
void subsdk1_f_1ca470() {}

// sub_1ca480  (orig 0x1ca480, ret_only)
void subsdk1_f_1ca480() {}

// sub_1ca490  (orig 0x1ca490, ret_only)
void subsdk1_f_1ca490() {}

// sub_1ca4a0  (orig 0x1ca4a0, ret_only)
void subsdk1_f_1ca4a0() {}

// sub_1ca4b0  (orig 0x1ca4b0, ret_only)
void subsdk1_f_1ca4b0() {}

// sub_1ca4c0  (orig 0x1ca4c0, ret_only)
void subsdk1_f_1ca4c0() {}

// sub_1ca4d0  (orig 0x1ca4d0, ret_only)
void subsdk1_f_1ca4d0() {}

// sub_1ca4e0  (orig 0x1ca4e0, ret_only)
void subsdk1_f_1ca4e0() {}

// sub_1ca4f0  (orig 0x1ca4f0, ret_only)
void subsdk1_f_1ca4f0() {}

// sub_1ca500  (orig 0x1ca500, ret_only)
void subsdk1_f_1ca500() {}

// sub_1ca510  (orig 0x1ca510, ret_only)
void subsdk1_f_1ca510() {}

// sub_1ca520  (orig 0x1ca520, ret_only)
void subsdk1_f_1ca520() {}

// sub_1ca530  (orig 0x1ca530, ret_only)
void subsdk1_f_1ca530() {}

// sub_1ca540  (orig 0x1ca540, ret_only)
void subsdk1_f_1ca540() {}

// sub_1ca550  (orig 0x1ca550, ret_only)
void subsdk1_f_1ca550() {}

// sub_1ca560  (orig 0x1ca560, ret_only)
void subsdk1_f_1ca560() {}

// sub_1ca570  (orig 0x1ca570, ret_only)
void subsdk1_f_1ca570() {}

// sub_1ca580  (orig 0x1ca580, ret_only)
void subsdk1_f_1ca580() {}

// sub_1ca590  (orig 0x1ca590, ret_only)
void subsdk1_f_1ca590() {}

// sub_1ca5a0  (orig 0x1ca5a0, ret_only)
void subsdk1_f_1ca5a0() {}

// sub_1ca5b0  (orig 0x1ca5b0, ret_only)
void subsdk1_f_1ca5b0() {}

// sub_1ca5c0  (orig 0x1ca5c0, ret_only)
void subsdk1_f_1ca5c0() {}

// sub_1ca5d0  (orig 0x1ca5d0, ret_only)
void subsdk1_f_1ca5d0() {}

// sub_1ca5e0  (orig 0x1ca5e0, ret_only)
void subsdk1_f_1ca5e0() {}

// sub_1ca5f0  (orig 0x1ca5f0, ret_only)
void subsdk1_f_1ca5f0() {}

// sub_1ca600  (orig 0x1ca600, ret_only)
void subsdk1_f_1ca600() {}

// sub_1ca610  (orig 0x1ca610, ret_only)
void subsdk1_f_1ca610() {}

// sub_1ca620  (orig 0x1ca620, ret_only)
void subsdk1_f_1ca620() {}

// sub_1ca630  (orig 0x1ca630, ret_only)
void subsdk1_f_1ca630() {}

// sub_1ca640  (orig 0x1ca640, ret_only)
void subsdk1_f_1ca640() {}

// sub_1ca650  (orig 0x1ca650, ret_only)
void subsdk1_f_1ca650() {}

// sub_1ca660  (orig 0x1ca660, ret_only)
void subsdk1_f_1ca660() {}

// sub_1ca670  (orig 0x1ca670, ret_only)
void subsdk1_f_1ca670() {}

// sub_1ca680  (orig 0x1ca680, ret_only)
void subsdk1_f_1ca680() {}

// sub_1ca690  (orig 0x1ca690, ret_only)
void subsdk1_f_1ca690() {}

// sub_1ca6a0  (orig 0x1ca6a0, ret_only)
void subsdk1_f_1ca6a0() {}

// sub_1ca6b0  (orig 0x1ca6b0, ret_only)
void subsdk1_f_1ca6b0() {}

// sub_1ca6c0  (orig 0x1ca6c0, ret_only)
void subsdk1_f_1ca6c0() {}

// sub_1ca6d0  (orig 0x1ca6d0, ret_only)
void subsdk1_f_1ca6d0() {}

// sub_1ca6e0  (orig 0x1ca6e0, ret_only)
void subsdk1_f_1ca6e0() {}

// sub_1ca6f0  (orig 0x1ca6f0, ret_only)
void subsdk1_f_1ca6f0() {}

// sub_1ca700  (orig 0x1ca700, ret_only)
void subsdk1_f_1ca700() {}

// sub_1ca710  (orig 0x1ca710, ret_only)
void subsdk1_f_1ca710() {}

// sub_1ca720  (orig 0x1ca720, ret_only)
void subsdk1_f_1ca720() {}

// sub_1ca730  (orig 0x1ca730, ret_only)
void subsdk1_f_1ca730() {}

// sub_1ca740  (orig 0x1ca740, ret_only)
void subsdk1_f_1ca740() {}

// sub_1ca750  (orig 0x1ca750, ret_only)
void subsdk1_f_1ca750() {}

// sub_1ca760  (orig 0x1ca760, ret_only)
void subsdk1_f_1ca760() {}

// sub_1ca770  (orig 0x1ca770, ret_only)
void subsdk1_f_1ca770() {}

// sub_1ca780  (orig 0x1ca780, ret_only)
void subsdk1_f_1ca780() {}

// sub_1ca790  (orig 0x1ca790, ret_only)
void subsdk1_f_1ca790() {}

// sub_1ca7a0  (orig 0x1ca7a0, ret_only)
void subsdk1_f_1ca7a0() {}

// sub_1ca7b0  (orig 0x1ca7b0, ret_only)
void subsdk1_f_1ca7b0() {}

// sub_1ca7c0  (orig 0x1ca7c0, ret_only)
void subsdk1_f_1ca7c0() {}

// sub_1ca7d0  (orig 0x1ca7d0, ret_only)
void subsdk1_f_1ca7d0() {}

// sub_1ca7e0  (orig 0x1ca7e0, ret_only)
void subsdk1_f_1ca7e0() {}

// sub_1ca7f0  (orig 0x1ca7f0, ret_only)
void subsdk1_f_1ca7f0() {}

// sub_1ca800  (orig 0x1ca800, ret_only)
void subsdk1_f_1ca800() {}

// sub_1ca810  (orig 0x1ca810, ret_only)
void subsdk1_f_1ca810() {}

// sub_1ca820  (orig 0x1ca820, ret_only)
void subsdk1_f_1ca820() {}

// sub_1ca830  (orig 0x1ca830, ret_only)
void subsdk1_f_1ca830() {}

// sub_1ca840  (orig 0x1ca840, ret_only)
void subsdk1_f_1ca840() {}

// sub_1ca850  (orig 0x1ca850, ret_only)
void subsdk1_f_1ca850() {}

// sub_1ca860  (orig 0x1ca860, ret_only)
void subsdk1_f_1ca860() {}

// sub_1ca870  (orig 0x1ca870, ret_only)
void subsdk1_f_1ca870() {}

// sub_1ca880  (orig 0x1ca880, ret_only)
void subsdk1_f_1ca880() {}

// sub_1ca890  (orig 0x1ca890, ret_only)
void subsdk1_f_1ca890() {}

// sub_1ca8a0  (orig 0x1ca8a0, ret_only)
void subsdk1_f_1ca8a0() {}

// sub_1ca8b0  (orig 0x1ca8b0, ret_only)
void subsdk1_f_1ca8b0() {}

// sub_1ca8c0  (orig 0x1ca8c0, ret_only)
void subsdk1_f_1ca8c0() {}

// sub_1ca8d0  (orig 0x1ca8d0, ret_only)
void subsdk1_f_1ca8d0() {}

// sub_1ca8e0  (orig 0x1ca8e0, ret_only)
void subsdk1_f_1ca8e0() {}

// sub_1ca8f0  (orig 0x1ca8f0, ret_only)
void subsdk1_f_1ca8f0() {}

// sub_1ca900  (orig 0x1ca900, ret_only)
void subsdk1_f_1ca900() {}

// sub_1ca910  (orig 0x1ca910, ret_only)
void subsdk1_f_1ca910() {}

// sub_1ca920  (orig 0x1ca920, ret_only)
void subsdk1_f_1ca920() {}

// sub_1ca930  (orig 0x1ca930, ret_only)
void subsdk1_f_1ca930() {}

// sub_1ca940  (orig 0x1ca940, ret_only)
void subsdk1_f_1ca940() {}

// sub_1ca950  (orig 0x1ca950, ret_only)
void subsdk1_f_1ca950() {}

// sub_1ca960  (orig 0x1ca960, ret_only)
void subsdk1_f_1ca960() {}

// sub_1ca970  (orig 0x1ca970, ret_only)
void subsdk1_f_1ca970() {}

// sub_1ca980  (orig 0x1ca980, ret_only)
void subsdk1_f_1ca980() {}

// sub_1ca990  (orig 0x1ca990, ret_only)
void subsdk1_f_1ca990() {}

// sub_1ca9a0  (orig 0x1ca9a0, ret_only)
void subsdk1_f_1ca9a0() {}

// sub_1ca9b0  (orig 0x1ca9b0, ret_only)
void subsdk1_f_1ca9b0() {}

// sub_1ca9c0  (orig 0x1ca9c0, ret_only)
void subsdk1_f_1ca9c0() {}

// sub_1ca9d0  (orig 0x1ca9d0, ret_only)
void subsdk1_f_1ca9d0() {}

// sub_1ca9e0  (orig 0x1ca9e0, ret_only)
void subsdk1_f_1ca9e0() {}

// sub_1ca9f0  (orig 0x1ca9f0, ret_only)
void subsdk1_f_1ca9f0() {}

// sub_1caa00  (orig 0x1caa00, ret_only)
void subsdk1_f_1caa00() {}

// sub_1caa10  (orig 0x1caa10, ret_only)
void subsdk1_f_1caa10() {}

// sub_1caa20  (orig 0x1caa20, ret_only)
void subsdk1_f_1caa20() {}

// sub_1caa30  (orig 0x1caa30, ret_only)
void subsdk1_f_1caa30() {}

// sub_1caa40  (orig 0x1caa40, ret_only)
void subsdk1_f_1caa40() {}

// sub_1caa50  (orig 0x1caa50, ret_only)
void subsdk1_f_1caa50() {}

// sub_1caa60  (orig 0x1caa60, ret_only)
void subsdk1_f_1caa60() {}

// sub_1caa70  (orig 0x1caa70, ret_only)
void subsdk1_f_1caa70() {}

// sub_1caa80  (orig 0x1caa80, ret_only)
void subsdk1_f_1caa80() {}

// sub_1caa90  (orig 0x1caa90, ret_only)
void subsdk1_f_1caa90() {}

// sub_1caaa0  (orig 0x1caaa0, ret_only)
void subsdk1_f_1caaa0() {}

// sub_1caab0  (orig 0x1caab0, ret_only)
void subsdk1_f_1caab0() {}

// sub_1caac0  (orig 0x1caac0, ret_only)
void subsdk1_f_1caac0() {}

// sub_1caad0  (orig 0x1caad0, ret_only)
void subsdk1_f_1caad0() {}

// sub_1caae0  (orig 0x1caae0, ret_only)
void subsdk1_f_1caae0() {}

// sub_1caaf0  (orig 0x1caaf0, ret_only)
void subsdk1_f_1caaf0() {}

// sub_1cab00  (orig 0x1cab00, ret_only)
void subsdk1_f_1cab00() {}

// sub_1cab10  (orig 0x1cab10, ret_only)
void subsdk1_f_1cab10() {}

// sub_1cab20  (orig 0x1cab20, ret_only)
void subsdk1_f_1cab20() {}

// sub_1cab30  (orig 0x1cab30, ret_only)
void subsdk1_f_1cab30() {}

// sub_1cab40  (orig 0x1cab40, ret_only)
void subsdk1_f_1cab40() {}

// sub_1cab50  (orig 0x1cab50, ret_only)
void subsdk1_f_1cab50() {}

// sub_1cab60  (orig 0x1cab60, ret_only)
void subsdk1_f_1cab60() {}

// sub_1cab70  (orig 0x1cab70, ret_only)
void subsdk1_f_1cab70() {}

// sub_1cab80  (orig 0x1cab80, ret_only)
void subsdk1_f_1cab80() {}

// sub_1cab90  (orig 0x1cab90, ret_only)
void subsdk1_f_1cab90() {}

// sub_1caba0  (orig 0x1caba0, ret_only)
void subsdk1_f_1caba0() {}

// sub_1cabb0  (orig 0x1cabb0, ret_only)
void subsdk1_f_1cabb0() {}

// sub_1cabc0  (orig 0x1cabc0, ret_only)
void subsdk1_f_1cabc0() {}

// sub_1cabd0  (orig 0x1cabd0, ret_only)
void subsdk1_f_1cabd0() {}

// sub_1cabe0  (orig 0x1cabe0, ret_only)
void subsdk1_f_1cabe0() {}

// sub_1cabf0  (orig 0x1cabf0, ret_only)
void subsdk1_f_1cabf0() {}

// sub_1cac00  (orig 0x1cac00, ret_only)
void subsdk1_f_1cac00() {}

// sub_1cac10  (orig 0x1cac10, ret_only)
void subsdk1_f_1cac10() {}

// sub_1cac20  (orig 0x1cac20, ret_only)
void subsdk1_f_1cac20() {}

// sub_1cac30  (orig 0x1cac30, ret_only)
void subsdk1_f_1cac30() {}

// sub_1cac40  (orig 0x1cac40, ret_only)
void subsdk1_f_1cac40() {}

// sub_1cac50  (orig 0x1cac50, ret_only)
void subsdk1_f_1cac50() {}

// sub_1cac60  (orig 0x1cac60, ret_only)
void subsdk1_f_1cac60() {}

// sub_1cac70  (orig 0x1cac70, ret_only)
void subsdk1_f_1cac70() {}

// sub_1cac80  (orig 0x1cac80, ret_only)
void subsdk1_f_1cac80() {}

// sub_1cac90  (orig 0x1cac90, ret_only)
void subsdk1_f_1cac90() {}

// sub_1caca0  (orig 0x1caca0, ret_only)
void subsdk1_f_1caca0() {}

// sub_1cacb0  (orig 0x1cacb0, ret_only)
void subsdk1_f_1cacb0() {}

// sub_1cacc0  (orig 0x1cacc0, ret_only)
void subsdk1_f_1cacc0() {}

// sub_1cacd0  (orig 0x1cacd0, ret_only)
void subsdk1_f_1cacd0() {}

// sub_1cace0  (orig 0x1cace0, ret_only)
void subsdk1_f_1cace0() {}

// sub_1cacf0  (orig 0x1cacf0, ret_only)
void subsdk1_f_1cacf0() {}

// sub_1cad00  (orig 0x1cad00, ret_only)
void subsdk1_f_1cad00() {}

// sub_1cad10  (orig 0x1cad10, ret_only)
void subsdk1_f_1cad10() {}

// sub_1cad20  (orig 0x1cad20, ret_only)
void subsdk1_f_1cad20() {}

// sub_1cad30  (orig 0x1cad30, ret_only)
void subsdk1_f_1cad30() {}

// sub_1cad40  (orig 0x1cad40, ret_only)
void subsdk1_f_1cad40() {}

// sub_1cad50  (orig 0x1cad50, ret_only)
void subsdk1_f_1cad50() {}

// sub_1cad60  (orig 0x1cad60, ret_only)
void subsdk1_f_1cad60() {}

// sub_1cad70  (orig 0x1cad70, ret_only)
void subsdk1_f_1cad70() {}

// sub_1cad80  (orig 0x1cad80, ret_only)
void subsdk1_f_1cad80() {}

// sub_1cad90  (orig 0x1cad90, ret_only)
void subsdk1_f_1cad90() {}

// sub_1cada0  (orig 0x1cada0, ret_only)
void subsdk1_f_1cada0() {}

// sub_1cadb0  (orig 0x1cadb0, ret_only)
void subsdk1_f_1cadb0() {}

// sub_1cadc0  (orig 0x1cadc0, ret_only)
void subsdk1_f_1cadc0() {}

// sub_1cadd0  (orig 0x1cadd0, ret_only)
void subsdk1_f_1cadd0() {}

// sub_1cade0  (orig 0x1cade0, ret_only)
void subsdk1_f_1cade0() {}

// sub_1cadf0  (orig 0x1cadf0, mov_ret)
uint32_t subsdk1_f_1cadf0() { return 0; }

// sub_1cae00  (orig 0x1cae00, mov_ret)
uint32_t subsdk1_f_1cae00() { return 0; }

// sub_1cae10  (orig 0x1cae10, mov_ret)
uint32_t subsdk1_f_1cae10() { return 0; }

// sub_1cae20  (orig 0x1cae20, mov_ret)
uint64_t subsdk1_f_1cae20() { return 0; }

// sub_1cb8a0  (orig 0x1cb8a0, straight)
void subsdk1_f_1cb8a0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1)) = (*(uint32_t*)((char*)(a1))) | (16);
}

// sub_1de220  (orig 0x1de220, straight)
void subsdk1_f_1de220(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1)) = (*(uint32_t*)((char*)(a1))) | (4194304);
}

// sub_1f2680  (orig 0x1f2680, compare)
bool subsdk1_f_1f2680(uint64_t unused0, uint64_t a1) { return (uint32_t)(a1) == (uint64_t)(3); }

// sub_1f2d80  (orig 0x1f2d80, ret_only)
void subsdk1_f_1f2d80() {}

// sub_1f4f00  (orig 0x1f4f00, setter)
void subsdk1_f_1f4f00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1f4f10  (orig 0x1f4f10, setter)
void subsdk1_f_1f4f10(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_1f51f0  (orig 0x1f51f0, setter-chain)
void subsdk1_f_1f51f0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_1fee80  (orig 0x1fee80, setter-chain)
void subsdk1_f_1fee80(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_1ff660  (orig 0x1ff660, setter-chain)
void subsdk1_f_1ff660(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 24) = 0; }

// sub_1ffe10  (orig 0x1ffe10, setter)
void subsdk1_f_1ffe10(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1ffe20  (orig 0x1ffe20, setter)
void subsdk1_f_1ffe20(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_205630  (orig 0x205630, getter-chain)
uint64_t subsdk1_f_205630(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 32);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + (uintptr_t)(a1) * 8);
    uint64_t t2 = *(uint64_t*)((char*)(t1) + 8);
    return *(uint64_t*)((char*)(t2) + 16);
}

// sub_205650  (orig 0x205650, getter-chain)
uint64_t subsdk1_f_205650(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 40);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + (uintptr_t)(a1) * 8);
    return *(uint64_t*)((char*)(t1) + 8);
}

// sub_205660  (orig 0x205660, mov_ret)
uint64_t subsdk1_f_205660() { return 0; }

// sub_20c280  (orig 0x20c280, mov_ret)
uint32_t subsdk1_f_20c280() { return 0; }

// sub_20c290  (orig 0x20c290, mov_ret)
uint32_t subsdk1_f_20c290() { return 0; }

// sub_20c2a0  (orig 0x20c2a0, mov_ret)
uint32_t subsdk1_f_20c2a0() { return 0; }

// sub_20c2b0  (orig 0x20c2b0, getter)
uint32_t subsdk1_f_20c2b0(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 20); }

// sub_20f100  (orig 0x20f100, straight)
uint32_t subsdk1_f_20f100(uint64_t unused0, uint64_t unused1, void* a2, void* a3) { return (((*(uint32_t*)((char*)(a3) + 48) != 3) ? 1 : 0)) & (((*(uint32_t*)((char*)(a2) + 48) != 3) ? 1 : 0)); }

// sub_20f1f0  (orig 0x20f1f0, compare)
bool subsdk1_f_20f1f0(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 8)) == (uint64_t)(532); }

// sub_210920  (orig 0x210920, getter)
uint32_t subsdk1_f_210920(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 20); }

// sub_2151d0  (orig 0x2151d0, mov_ret)
uint32_t subsdk1_f_2151d0() { return 5; }

// sub_2151e0  (orig 0x2151e0, ret_only)
void subsdk1_f_2151e0() {}

// sub_2151f0  (orig 0x2151f0, getter)
uint8_t subsdk1_f_2151f0(void* a0) { return *(uint8_t*)((char*)(a0) + 301); }

// sub_215200  (orig 0x215200, mov_ret)
uint32_t subsdk1_f_215200() { return 20; }

// sub_215210  (orig 0x215210, getter)
uint32_t subsdk1_f_215210(void* a0) { return *(uint32_t*)((char*)(a0) + 1152); }

// sub_215220  (orig 0x215220, getter)
uint32_t subsdk1_f_215220(void* a0) { return *(uint32_t*)((char*)(a0) + 1156); }

// sub_215230  (orig 0x215230, getter)
uint32_t subsdk1_f_215230(void* a0) { return *(uint32_t*)((char*)(a0) + 1160); }

// sub_215240  (orig 0x215240, getter)
uint64_t subsdk1_f_215240(uint64_t unused0, void* a1) { return *(uint64_t*)((char*)(a1) + 8); }

// sub_21ddd0  (orig 0x21ddd0, mov_ret)
uint32_t subsdk1_f_21ddd0() { return 1; }

// sub_21dde0  (orig 0x21dde0, compare)
bool subsdk1_f_21dde0(uint64_t unused0, uint64_t a1) { return (uint32_t)(a1) == (uint64_t)(0); }

// sub_223600  (orig 0x223600, straight)
uint32_t subsdk1_f_223600(void* a0, uint32_t a1) { return ((((*(uint8_t*)((char*)(a0) + 25) == 0)) ? (196) : (727))) & (((uint32_t)a1)); }

// sub_223620  (orig 0x223620, mov_ret)
uint32_t subsdk1_f_223620() { return 0; }

// sub_223630  (orig 0x223630, compare)
bool subsdk1_f_223630(uint64_t unused0, uint64_t a1) { return (uint32_t)(a1) == (uint64_t)(7); }

// sub_2236c0  (orig 0x2236c0, straight)
uint32_t subsdk1_f_2236c0(uint64_t unused0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1) + 48));
    return ((*(uint32_t*)((char*)(p0) + 104)) >> (6)) & (63);
}

// sub_2236d0  (orig 0x2236d0, straight)
uint32_t subsdk1_f_2236d0(uint64_t unused0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1) + 48));
    return ((*(uint32_t*)((char*)(p0) + 104)) >> (12)) & (31);
}

// sub_2236e0  (orig 0x2236e0, straight)
uint32_t subsdk1_f_2236e0(uint64_t unused0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1) + 48));
    return ((*(uint32_t*)((char*)(p0) + 104)) >> (17)) & (15);
}

// sub_2236f0  (orig 0x2236f0, straight)
uint32_t subsdk1_f_2236f0(uint64_t unused0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1) + 48));
    return (*(uint32_t*)((char*)(p0) + 104)) & (7);
}

// sub_223700  (orig 0x223700, straight)
uint32_t subsdk1_f_223700(uint64_t unused0, void* a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a1) + 48));
    return ((*(uint32_t*)((char*)(p0) + 104)) >> (3)) & (7);
}

// sub_223780  (orig 0x223780, compare)
bool subsdk1_f_223780(uint64_t unused0, void* a1) { return (uint8_t)(*(uint8_t*)((char*)(a1) + 96)) == (uint64_t)(3); }

// sub_223790  (orig 0x223790, mov_ret)
uint32_t subsdk1_f_223790() { return 0; }

// sub_223df0  (orig 0x223df0, mov_ret)
uint32_t subsdk1_f_223df0() { return 1; }

// sub_223e00  (orig 0x223e00, compare)
bool subsdk1_f_223e00(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 84)) == (uint64_t)(7); }

// sub_223f00  (orig 0x223f00, getter)
uint32_t subsdk1_f_223f00(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_2240d0  (orig 0x2240d0, mov_ret)
uint32_t subsdk1_f_2240d0() { return 0; }

// sub_224290  (orig 0x224290, straight)
uint32_t subsdk1_f_224290(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 128));
    return ((*(uint32_t*)((char*)(p0) + 680)) >> (5)) & (1);
}

// sub_2242f0  (orig 0x2242f0, straight)
uint32_t subsdk1_f_2242f0(void* a0) { return ((((*(uint32_t*)((char*)(a0) + 52)) - (1) < 3)) ? (*(uint32_t*)((char*)(a0) + 52)) : (2)); }

// sub_224410  (orig 0x224410, mov_ret)
uint32_t subsdk1_f_224410() { return 1; }

// sub_224420  (orig 0x224420, compare)
bool subsdk1_f_224420(uint64_t unused0, uint64_t unused1, uint64_t a2) { return (uint32_t)(a2) == (uint64_t)(1); }

// sub_224d40  (orig 0x224d40, straight-line)
uint32_t subsdk1_f_224d40(uint64_t unused0, uint32_t a1) { return (((((uint32_t)a1) == 2)) ? (3) : ((0) + (1))); }

// sub_224da0  (orig 0x224da0, straight-line)
uint32_t subsdk1_f_224da0(uint64_t unused0, uint32_t a1) { return (((((uint32_t)a1) != 2)) ? ((((((uint32_t)a1) == 1) ? 1 : 0)) << (1)) : ((0) + (1))); }

// sub_2250d0  (orig 0x2250d0, compare)
bool subsdk1_f_2250d0(uint64_t unused0, uint64_t a1) { return (uint32_t)(a1) == (uint64_t)(1); }

// sub_2250f0  (orig 0x2250f0, straight-line)
uint32_t subsdk1_f_2250f0(uint64_t unused0, uint32_t a1) { return (((((uint32_t)a1) == 2)) ? (3) : ((((((uint32_t)a1) == 1)) ? ((1) + (1)) : (1)))); }

// sub_2251f0  (orig 0x2251f0, mov_ret)
uint32_t subsdk1_f_2251f0() { return 0; }

// sub_225200  (orig 0x225200, ret_only)
void subsdk1_f_225200() {}

// sub_225210  (orig 0x225210, ret_only)
void subsdk1_f_225210() {}

// sub_225220  (orig 0x225220, ret_only)
void subsdk1_f_225220() {}

// sub_225230  (orig 0x225230, ret_only)
void subsdk1_f_225230() {}

// sub_225240  (orig 0x225240, ret_only)
void subsdk1_f_225240() {}

// sub_225250  (orig 0x225250, ret_only)
void subsdk1_f_225250() {}

// sub_225260  (orig 0x225260, ret_only)
void subsdk1_f_225260() {}

// sub_225270  (orig 0x225270, ret_only)
void subsdk1_f_225270() {}

// sub_225280  (orig 0x225280, ret_only)
void subsdk1_f_225280() {}

// sub_225290  (orig 0x225290, ret_only)
void subsdk1_f_225290() {}

// sub_2252a0  (orig 0x2252a0, ret_only)
void subsdk1_f_2252a0() {}

// sub_2252b0  (orig 0x2252b0, ret_only)
void subsdk1_f_2252b0() {}

// sub_2252c0  (orig 0x2252c0, ret_only)
void subsdk1_f_2252c0() {}

// sub_2252d0  (orig 0x2252d0, ret_only)
void subsdk1_f_2252d0() {}

// sub_2252e0  (orig 0x2252e0, ret_only)
void subsdk1_f_2252e0() {}

// sub_2252f0  (orig 0x2252f0, ret_only)
void subsdk1_f_2252f0() {}

// sub_225300  (orig 0x225300, ret_only)
void subsdk1_f_225300() {}

// sub_225310  (orig 0x225310, ret_only)
void subsdk1_f_225310() {}

// sub_225320  (orig 0x225320, ret_only)
void subsdk1_f_225320() {}

// sub_225330  (orig 0x225330, ret_only)
void subsdk1_f_225330() {}

// sub_225340  (orig 0x225340, ret_only)
void subsdk1_f_225340() {}

// sub_225350  (orig 0x225350, ret_only)
void subsdk1_f_225350() {}

// sub_225360  (orig 0x225360, ret_only)
void subsdk1_f_225360() {}

// sub_225370  (orig 0x225370, ret_only)
void subsdk1_f_225370() {}

// sub_225380  (orig 0x225380, ret_only)
void subsdk1_f_225380() {}

// sub_225390  (orig 0x225390, ret_only)
void subsdk1_f_225390() {}

// sub_233180  (orig 0x233180, ret_only)
void subsdk1_f_233180() {}

// sub_233190  (orig 0x233190, ret_only)
void subsdk1_f_233190() {}

// sub_264fc0  (orig 0x264fc0, ret_only)
void subsdk1_f_264fc0() {}

// sub_265780  (orig 0x265780, ptr_add)
void* subsdk1_f_265780(void* a0) { return (char*)a0 + 112; }

// sub_271a10  (orig 0x271a10, ret_only)
void subsdk1_f_271a10() {}

// sub_271a20  (orig 0x271a20, ret_only)
void subsdk1_f_271a20() {}

// sub_271a30  (orig 0x271a30, ret_only)
void subsdk1_f_271a30() {}

// sub_271a40  (orig 0x271a40, mov_ret)
uint32_t subsdk1_f_271a40() { return -1; }

// sub_271a50  (orig 0x271a50, mov_ret)
uint32_t subsdk1_f_271a50() { return -1; }

// sub_271a60  (orig 0x271a60, mov_ret)
uint32_t subsdk1_f_271a60() { return -1; }

// sub_271a70  (orig 0x271a70, ret_only)
void subsdk1_f_271a70() {}

// sub_271a80  (orig 0x271a80, ret_only)
void subsdk1_f_271a80() {}

// sub_271a90  (orig 0x271a90, mov_ret)
uint32_t subsdk1_f_271a90() { return 0; }

// sub_271aa0  (orig 0x271aa0, ret_only)
void subsdk1_f_271aa0() {}

// sub_271ab0  (orig 0x271ab0, ret_only)
void subsdk1_f_271ab0() {}

// sub_271ac0  (orig 0x271ac0, ret_only)
void subsdk1_f_271ac0() {}

// sub_271af0  (orig 0x271af0, ret_only)
void subsdk1_f_271af0() {}

// sub_271b00  (orig 0x271b00, ret_only)
void subsdk1_f_271b00() {}

// sub_271b10  (orig 0x271b10, ret_only)
void subsdk1_f_271b10() {}

// sub_27a430  (orig 0x27a430, getter-chain)
uint32_t subsdk1_f_27a430(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 224))) + 132); }

// sub_27af90  (orig 0x27af90, straight)
void subsdk1_f_27af90(uint64_t unused0, uint64_t unused1, uint64_t a2, void* a3, void* a4) {
    *(uint32_t*)((char*)(a3)) = 192;
    *(uint32_t*)((char*)(a4)) = (uint32_t)(a2);
}

// sub_29d570  (orig 0x29d570, ret_only)
void subsdk1_f_29d570() {}

// sub_29d5c0  (orig 0x29d5c0, mov_ret)
uint32_t subsdk1_f_29d5c0() { return 45; }

// sub_29f5a0  (orig 0x29f5a0, compare)
bool subsdk1_f_29f5a0(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(418); }

// sub_2a0cc0  (orig 0x2a0cc0, straight-line)
uint32_t subsdk1_f_2a0cc0(uint32_t a0) { return (((((uint32_t)a0)) | (((((uint32_t)a0)) << 4))) | (((((uint32_t)a0)) << 6))) | (((((uint32_t)a0)) << 2)); }

// sub_2a1240  (orig 0x2a1240, straight-line)
uint32_t subsdk1_f_2a1240(uint64_t a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((((uint64_t)(((uint32_t)(((uint32_t)a1)))))) * (((uint64_t)(((uint32_t)(56))))))));
    return *(uint32_t*)((char*)(p0) + 16);
}

// sub_2a1250  (orig 0x2a1250, straight-line)
uint32_t subsdk1_f_2a1250(uint64_t a0, uint32_t a1) {
    void* p0 = (void*)((uintptr_t)((((uint64_t)a0)) + ((((uint64_t)(((uint32_t)(((uint32_t)a1)))))) * (((uint64_t)(((uint32_t)(56))))))));
    return *(uint32_t*)((char*)(p0) + 16);
}

// sub_2a1260  (orig 0x2a1260, straight)
void subsdk1_f_2a1260(void* a0, uint64_t a1, uint64_t a2, uint64_t a3, uint64_t a4) {
    *(uint32_t*)((char*)(a0)) = 0;
    *(uint32_t*)((char*)(a0) + 56) = 0;
    *(uint32_t*)((char*)(a0) + 8) = 1;
    *(uint32_t*)((char*)(a0) + 64) = 1;
    *(uint32_t*)((char*)(a0) + 112) = 0;
    *(uint32_t*)((char*)(a0) + 120) = 1;
    *(uint32_t*)((char*)(a0) + 168) = 0;
    *(uint32_t*)((char*)(a0) + 176) = 1;
    *(uint32_t*)((char*)(a0) + 16) = (uint32_t)(a1);
    *(uint32_t*)((char*)(a0) + 72) = (uint32_t)(a2);
    *(uint32_t*)((char*)(a0) + 128) = (uint32_t)(a3);
    *(uint32_t*)((char*)(a0) + 184) = (uint32_t)(a4);
}

// sub_2a5040  (orig 0x2a5040, setter)
void subsdk1_f_2a5040(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_2a5af0  (orig 0x2a5af0, ret_only)
void subsdk1_f_2a5af0() {}

// sub_2a6370  (orig 0x2a6370, mov_ret)
uint64_t subsdk1_f_2a6370(uint64_t a0, uint64_t a1) { return a1; }

// sub_2b5e50  (orig 0x2b5e50, getter)
uint64_t subsdk1_f_2b5e50(void* a0) { return *(uint64_t*)((char*)(a0) + 2008); }

// sub_2b5e60  (orig 0x2b5e60, getter)
uint64_t subsdk1_f_2b5e60(void* a0) { return *(uint64_t*)((char*)(a0) + 1488); }

// sub_2b7250  (orig 0x2b7250, setter)
void subsdk1_f_2b7250(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 2784) = a1; }

// sub_2b8080  (orig 0x2b8080, setter)
void subsdk1_f_2b8080(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_2bc230  (orig 0x2bc230, straight)
void subsdk1_f_2bc230(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a1)) == 0) ? 1 : 0);
}

// sub_2bc2d0  (orig 0x2bc2d0, compare)
bool subsdk1_f_2bc2d0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) == (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_2bc2f0  (orig 0x2bc2f0, compare)
bool subsdk1_f_2bc2f0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) != (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_2bc310  (orig 0x2bc310, copy2)
void subsdk1_f_2bc310(void* a0, void* a1) { *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1)); }

// sub_2bc320  (orig 0x2bc320, straight)
void subsdk1_f_2bc320(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a1)) != 0) ? 1 : 0);
}

// sub_2bc340  (orig 0x2bc340, straight)
void subsdk1_f_2bc340(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(((*(uint32_t*)((char*)(a1)) != 0) ? 1 : 0));
}

// sub_2bc3a0  (orig 0x2bc3a0, straight)
void subsdk1_f_2bc3a0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a1)) != 0) ? 1 : 0);
}

// sub_2bc3c0  (orig 0x2bc3c0, straight)
void subsdk1_f_2bc3c0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(((*(uint64_t*)((char*)(a1)) != 0) ? 1 : 0));
}

// sub_2bc5c0  (orig 0x2bc5c0, compare)
bool subsdk1_f_2bc5c0(void* a0, void* a1) { return (int32_t)(*(uint32_t*)((char*)(a0))) < (int32_t)(*(uint32_t*)((char*)(a1))); }

// sub_2bc5e0  (orig 0x2bc5e0, compare)
bool subsdk1_f_2bc5e0(void* a0, void* a1) { return (int32_t)(*(uint32_t*)((char*)(a0))) > (int32_t)(*(uint32_t*)((char*)(a1))); }

// sub_2bc600  (orig 0x2bc600, compare)
bool subsdk1_f_2bc600(void* a0, void* a1) { return (int32_t)(*(uint32_t*)((char*)(a0))) <= (int32_t)(*(uint32_t*)((char*)(a1))); }

// sub_2bc620  (orig 0x2bc620, compare)
bool subsdk1_f_2bc620(void* a0, void* a1) { return (int32_t)(*(uint32_t*)((char*)(a0))) >= (int32_t)(*(uint32_t*)((char*)(a1))); }

// sub_2bc640  (orig 0x2bc640, straight-line)
void subsdk1_f_2bc640(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint8_t*)((char*)(a1)));
}

// sub_2bc650  (orig 0x2bc650, straight-line)
void subsdk1_f_2bc650(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint16_t*)((char*)(a1)));
}

// sub_2bc660  (orig 0x2bc660, straight-line)
void subsdk1_f_2bc660(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(*(int32_t*)((char*)(a1)));
}

// sub_2bc670  (orig 0x2bc670, straight-line)
void subsdk1_f_2bc670(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(*(int32_t*)((char*)(a1)));
}

// sub_2bc850  (orig 0x2bc850, fp-conv-store)
void subsdk1_f_2bc850(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const float*)((char*)(a1)); }

// sub_2bc860  (orig 0x2bc860, fp-conv-store)
void subsdk1_f_2bc860(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const double*)((char*)(a1)); }

// sub_2bc870  (orig 0x2bc870, straight)
void subsdk1_f_2bc870(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = ((0 - ((uint32_t)*(uint32_t*)((char*)(a1))))) & (255);
}

// sub_2bc8c0  (orig 0x2bc8c0, straight)
void subsdk1_f_2bc8c0(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a1))) - (*(uint32_t*)((char*)(a2)))) & (255);
}

// sub_2bc9a0  (orig 0x2bc9a0, compare)
bool subsdk1_f_2bc9a0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) < (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_2bc9c0  (orig 0x2bc9c0, compare)
bool subsdk1_f_2bc9c0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) > (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_2bc9e0  (orig 0x2bc9e0, compare)
bool subsdk1_f_2bc9e0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) <= (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_2bca00  (orig 0x2bca00, compare)
bool subsdk1_f_2bca00(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) >= (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_2bca20  (orig 0x2bca20, straight-line)
void subsdk1_f_2bca20(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint16_t*)((char*)(a1)));
}

// sub_2bca30  (orig 0x2bca30, straight-line)
void subsdk1_f_2bca30(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(*(uint32_t*)((char*)(a1)));
}

// sub_2bca40  (orig 0x2bca40, straight-line)
void subsdk1_f_2bca40(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(*(uint32_t*)((char*)(a1)));
}

// sub_2bcb10  (orig 0x2bcb10, straight-line)
void subsdk1_f_2bcb10(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint8_t*)((char*)(a1)));
}

// sub_2bcb20  (orig 0x2bcb20, straight-line)
void subsdk1_f_2bcb20(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint8_t*)((char*)(a1)));
}

// sub_2bcb30  (orig 0x2bcb30, straight-line)
void subsdk1_f_2bcb30(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint8_t*)((char*)(a1)));
}

// sub_2bcb40  (orig 0x2bcb40, fp-conv-store)
void subsdk1_f_2bcb40(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const float*)((char*)(a1)); }

// sub_2bcb50  (orig 0x2bcb50, fp-conv-store)
void subsdk1_f_2bcb50(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const double*)((char*)(a1)); }

// sub_2bcca0  (orig 0x2bcca0, straight-line)
void subsdk1_f_2bcca0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(int16_t*)((char*)(a1)));
}

// sub_2bccb0  (orig 0x2bccb0, straight-line)
void subsdk1_f_2bccb0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(int16_t*)((char*)(a1)));
}

// sub_2bccc0  (orig 0x2bccc0, straight-line)
void subsdk1_f_2bccc0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(int16_t*)((char*)(a1)));
}

// sub_2bccd0  (orig 0x2bccd0, straight-line)
void subsdk1_f_2bccd0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(int16_t*)((char*)(a1)));
}

// sub_2bcce0  (orig 0x2bcce0, fp-conv-store)
void subsdk1_f_2bcce0(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const float*)((char*)(a1)); }

// sub_2bccf0  (orig 0x2bccf0, fp-conv-store)
void subsdk1_f_2bccf0(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const double*)((char*)(a1)); }

// sub_2bcd00  (orig 0x2bcd00, straight)
void subsdk1_f_2bcd00(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = ((0 - ((uint32_t)*(uint32_t*)((char*)(a1))))) & (65535);
}

// sub_2bcd50  (orig 0x2bcd50, straight)
void subsdk1_f_2bcd50(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a1))) - (*(uint32_t*)((char*)(a2)))) & (65535);
}

// sub_2bce30  (orig 0x2bce30, straight-line)
void subsdk1_f_2bce30(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint16_t*)((char*)(a1)));
}

// sub_2bce40  (orig 0x2bce40, straight-line)
void subsdk1_f_2bce40(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint16_t*)((char*)(a1)));
}

// sub_2bce50  (orig 0x2bce50, fp-conv-store)
void subsdk1_f_2bce50(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const float*)((char*)(a1)); }

// sub_2bce60  (orig 0x2bce60, fp-conv-store)
void subsdk1_f_2bce60(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const double*)((char*)(a1)); }

// sub_2bce70  (orig 0x2bce70, straight)
void subsdk1_f_2bce70(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (0 - ((uint32_t)*(uint32_t*)((char*)(a1))));
}

// sub_2bce80  (orig 0x2bce80, straight)
void subsdk1_f_2bce80(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (~((uint32_t)*(uint32_t*)((char*)(a1))));
}

// sub_2bceb0  (orig 0x2bceb0, straight)
void subsdk1_f_2bceb0(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0)) = (*(uint32_t*)((char*)(a1))) - (*(uint32_t*)((char*)(a2)));
}

// sub_2bcf70  (orig 0x2bcf70, straight-line)
void subsdk1_f_2bcf70(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint64_t*)((char*)(a1)));
}

// sub_2bcf80  (orig 0x2bcf80, straight-line)
void subsdk1_f_2bcf80(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint64_t*)((char*)(a1)));
}

// sub_2bcf90  (orig 0x2bcf90, fp-conv-store)
void subsdk1_f_2bcf90(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const float*)((char*)(a1)); }

// sub_2bcfa0  (orig 0x2bcfa0, fp-conv-store)
void subsdk1_f_2bcfa0(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const double*)((char*)(a1)); }

// sub_2bcfb0  (orig 0x2bcfb0, straight)
void subsdk1_f_2bcfb0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (0 - ((uint32_t)*(uint32_t*)((char*)(a1))));
}

// sub_2bcfe0  (orig 0x2bcfe0, straight)
void subsdk1_f_2bcfe0(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0)) = (*(uint32_t*)((char*)(a1))) - (*(uint32_t*)((char*)(a2)));
}

// sub_2bd090  (orig 0x2bd090, straight-line)
void subsdk1_f_2bd090(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint64_t*)((char*)(a1)));
}

// sub_2bd0a0  (orig 0x2bd0a0, straight-line)
void subsdk1_f_2bd0a0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint64_t*)((char*)(a1)));
}

// sub_2bd0b0  (orig 0x2bd0b0, fp-conv-store)
void subsdk1_f_2bd0b0(void* a0, void* a1) { *(uint32_t*)((char*)(a0)) = (uint32_t)*(const float*)((char*)(a1)); }

// sub_2bd0c0  (orig 0x2bd0c0, fp-conv-store)
void subsdk1_f_2bd0c0(void* a0, void* a1) { *(uint32_t*)((char*)(a0)) = (uint32_t)*(const double*)((char*)(a1)); }

// sub_2bd0d0  (orig 0x2bd0d0, straight)
void subsdk1_f_2bd0d0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (0 - ((uint64_t)*(uint64_t*)((char*)(a1))));
}

// sub_2bd0e0  (orig 0x2bd0e0, straight)
void subsdk1_f_2bd0e0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (~((uint64_t)*(uint64_t*)((char*)(a1))));
}

// sub_2bd110  (orig 0x2bd110, straight)
void subsdk1_f_2bd110(void* a0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a0)) = (*(uint64_t*)((char*)(a1))) - (*(uint64_t*)((char*)(a2)));
}

// sub_2bd250  (orig 0x2bd250, compare)
bool subsdk1_f_2bd250(void* a0, void* a1) { return (int64_t)(*(uint64_t*)((char*)(a0))) < (int64_t)(*(uint64_t*)((char*)(a1))); }

// sub_2bd270  (orig 0x2bd270, compare)
bool subsdk1_f_2bd270(void* a0, void* a1) { return (int64_t)(*(uint64_t*)((char*)(a0))) > (int64_t)(*(uint64_t*)((char*)(a1))); }

// sub_2bd290  (orig 0x2bd290, compare)
bool subsdk1_f_2bd290(void* a0, void* a1) { return (int64_t)(*(uint64_t*)((char*)(a0))) <= (int64_t)(*(uint64_t*)((char*)(a1))); }

// sub_2bd2b0  (orig 0x2bd2b0, compare)
bool subsdk1_f_2bd2b0(void* a0, void* a1) { return (int64_t)(*(uint64_t*)((char*)(a0))) >= (int64_t)(*(uint64_t*)((char*)(a1))); }

// sub_2bd2d0  (orig 0x2bd2d0, compare)
bool subsdk1_f_2bd2d0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_2bd2f0  (orig 0x2bd2f0, compare)
bool subsdk1_f_2bd2f0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_2bd310  (orig 0x2bd310, copy2)
void subsdk1_f_2bd310(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); }

// sub_2bd3e0  (orig 0x2bd3e0, fp-conv-store)
void subsdk1_f_2bd3e0(void* a0, void* a1) { *(double*)((char*)(a0)) = (double)*(const int64_t*)((char*)(a1)); }

// sub_2bd3f0  (orig 0x2bd3f0, fp-conv-store)
void subsdk1_f_2bd3f0(void* a0, void* a1) { *(int64_t*)((char*)(a0)) = (int64_t)*(const float*)((char*)(a1)); }

// sub_2bd400  (orig 0x2bd400, fp-conv-store)
void subsdk1_f_2bd400(void* a0, void* a1) { *(int64_t*)((char*)(a0)) = (int64_t)*(const double*)((char*)(a1)); }

// sub_2bd410  (orig 0x2bd410, straight)
void subsdk1_f_2bd410(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (0 - ((uint64_t)*(uint64_t*)((char*)(a1))));
}

// sub_2bd440  (orig 0x2bd440, straight)
void subsdk1_f_2bd440(void* a0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a0)) = (*(uint64_t*)((char*)(a1))) - (*(uint64_t*)((char*)(a2)));
}

// sub_2bd500  (orig 0x2bd500, compare)
bool subsdk1_f_2bd500(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) < (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_2bd520  (orig 0x2bd520, compare)
bool subsdk1_f_2bd520(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) > (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_2bd540  (orig 0x2bd540, compare)
bool subsdk1_f_2bd540(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) <= (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_2bd560  (orig 0x2bd560, compare)
bool subsdk1_f_2bd560(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) >= (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_2bd630  (orig 0x2bd630, fp-conv-store)
void subsdk1_f_2bd630(void* a0, void* a1) { *(double*)((char*)(a0)) = (double)*(const uint64_t*)((char*)(a1)); }

// sub_2bd640  (orig 0x2bd640, fp-conv-store)
void subsdk1_f_2bd640(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = (uint64_t)*(const float*)((char*)(a1)); }

// sub_2bd650  (orig 0x2bd650, fp-conv-store)
void subsdk1_f_2bd650(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = (uint64_t)*(const double*)((char*)(a1)); }

// sub_2bd700  (orig 0x2bd700, fp-compare)
bool subsdk1_f_2bd700(void* a0, void* a1) { return *(const float*)((char*)(a0)) < *(const float*)((char*)(a1)); }

// sub_2bd7c0  (orig 0x2bd7c0, copy2)
void subsdk1_f_2bd7c0(void* a0, void* a1) { *(uint32_t*)((char*)(a0)) = *(uint32_t*)((char*)(a1)); }

// sub_2bdd30  (orig 0x2bdd30, fp-compare)
bool subsdk1_f_2bdd30(void* a0, void* a1) { return *(const double*)((char*)(a0)) < *(const double*)((char*)(a1)); }

// sub_2bddf0  (orig 0x2bddf0, copy2)
void subsdk1_f_2bddf0(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); }

// sub_2c3a80  (orig 0x2c3a80, mov_ret)
uint32_t subsdk1_f_2c3a80() { return 0; }

// sub_2c3a90  (orig 0x2c3a90, mov_ret)
uint32_t subsdk1_f_2c3a90() { return 0; }

// sub_2c3aa0  (orig 0x2c3aa0, ret_only)
void subsdk1_f_2c3aa0() {}

// sub_2c3ab0  (orig 0x2c3ab0, ret_only)
void subsdk1_f_2c3ab0() {}

// sub_2c3ac0  (orig 0x2c3ac0, mov_ret)
uint64_t subsdk1_f_2c3ac0(uint64_t a0, uint64_t a1) { return a1; }

// sub_2c3bd0  (orig 0x2c3bd0, straight)
void subsdk1_f_2c3bd0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 2376));
    *(uint64_t*)((char*)(a0) + 2376) = (uint64_t)((char*)(p0) - 1);
}

// sub_2c6fa0  (orig 0x2c6fa0, ret_only)
void subsdk1_f_2c6fa0() {}

// sub_2c6fb0  (orig 0x2c6fb0, mov_ret)
uint32_t subsdk1_f_2c6fb0() { return -1; }

// sub_2c6fc0  (orig 0x2c6fc0, mov_ret)
uint32_t subsdk1_f_2c6fc0() { return -1; }

// sub_2c6fd0  (orig 0x2c6fd0, mov_ret)
uint32_t subsdk1_f_2c6fd0() { return -1; }

// sub_2c7680  (orig 0x2c7680, ret_only)
void subsdk1_f_2c7680() {}

// sub_2c78f0  (orig 0x2c78f0, ret_only)
void subsdk1_f_2c78f0() {}

// sub_2c7900  (orig 0x2c7900, straight)
uint32_t subsdk1_f_2c7900(uint32_t a0) { return (0 - ((uint32_t)((uint32_t)a0))); }

// sub_2c7910  (orig 0x2c7910, straight)
uint32_t subsdk1_f_2c7910(uint32_t a0) { return (~((uint32_t)((uint32_t)a0))); }

// sub_2c7920  (orig 0x2c7920, compare)
bool subsdk1_f_2c7920(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(0); }

// sub_2c7940  (orig 0x2c7940, straight)
uint32_t subsdk1_f_2c7940(uint32_t a0, uint32_t a1) { return (((((uint32_t)a0) != 0) ? 1 : 0)) & (((((uint32_t)a1) != 0) ? 1 : 0)); }

// sub_2c7960  (orig 0x2c7960, straight)
uint32_t subsdk1_f_2c7960(uint32_t a0, uint32_t a1) { return (((uint32_t)a1)) | (((uint32_t)a0)); }

// sub_2c7970  (orig 0x2c7970, straight)
uint32_t subsdk1_f_2c7970(uint32_t a0, uint32_t a1) { return (((uint32_t)a1)) ^ (((uint32_t)a0)); }

// sub_2c7980  (orig 0x2c7980, straight)
uint32_t subsdk1_f_2c7980(uint32_t a0, uint32_t a1) { return (((uint32_t)a1)) & (((uint32_t)a0)); }

// sub_2c7990  (orig 0x2c7990, compare)
bool subsdk1_f_2c7990(uint64_t a0, uint64_t a1) { return (uint32_t)(a0) == (uint32_t)(a1); }

// sub_2c79a0  (orig 0x2c79a0, compare)
bool subsdk1_f_2c79a0(uint64_t a0, uint64_t a1) { return (uint32_t)(a0) != (uint32_t)(a1); }

// sub_2c79b0  (orig 0x2c79b0, compare)
bool subsdk1_f_2c79b0(uint64_t a0, uint64_t a1) { return (int32_t)(a0) > (int32_t)(a1); }

// sub_2c79c0  (orig 0x2c79c0, compare)
bool subsdk1_f_2c79c0(uint64_t a0, uint64_t a1) { return (int32_t)(a0) >= (int32_t)(a1); }

// sub_2c79d0  (orig 0x2c79d0, compare)
bool subsdk1_f_2c79d0(uint64_t a0, uint64_t a1) { return (int32_t)(a0) < (int32_t)(a1); }

// sub_2c79e0  (orig 0x2c79e0, compare)
bool subsdk1_f_2c79e0(uint64_t a0, uint64_t a1) { return (int32_t)(a0) <= (int32_t)(a1); }

// sub_2c7a10  (orig 0x2c7a10, straight-line)
uint32_t subsdk1_f_2c7a10(uint32_t a0, uint32_t a1) { return (((uint32_t)a1)) + (((uint32_t)a0)); }

// sub_2c7a20  (orig 0x2c7a20, straight)
uint32_t subsdk1_f_2c7a20(uint32_t a0, uint32_t a1) { return (((uint32_t)a0)) - (((uint32_t)a1)); }

// sub_2c7a30  (orig 0x2c7a30, straight-line)
uint32_t subsdk1_f_2c7a30(uint32_t a0, uint32_t a1) { return (((uint32_t)a1)) * (((uint32_t)a0)); }

// sub_2c9a80  (orig 0x2c9a80, getter)
uint64_t subsdk1_f_2c9a80(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_2cee30  (orig 0x2cee30, straight)
uint8_t subsdk1_f_2cee30(void* a0) { return ((*(uint8_t*)((char*)(a0) + 164)) >> (1)) & (1); }

// sub_2cee40  (orig 0x2cee40, straight)
uint8_t subsdk1_f_2cee40(void* a0) { return (*(uint8_t*)((char*)(a0) + 14)) >> (7); }

// sub_2d8080  (orig 0x2d8080, setter)
void subsdk1_f_2d8080(void* a0) { *(uint64_t*)((char*)(a0) + 88) = 0; }

// sub_2da870  (orig 0x2da870, mov_ret)
uint32_t subsdk1_f_2da870() { return 1; }

// sub_2daad0  (orig 0x2daad0, getter)
uint32_t subsdk1_f_2daad0(void* a0) { return *(uint32_t*)((char*)(a0) + 2132); }

// sub_2db4d0  (orig 0x2db4d0, copy-chain-store)
void subsdk1_f_2db4d0(void* a0, uint64_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 2152);
    *(uint64_t*)((char*)a1 + 312) = (uint64_t)(t0);
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 2152) = (uint64_t)a1;
}

// sub_2db4e0  (orig 0x2db4e0, copy-chain-store)
void subsdk1_f_2db4e0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 2152);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 312);
    *(uint64_t*)((char*)a0 + 2152) = (uint64_t)(t1);
}

// sub_2df0f0  (orig 0x2df0f0, ret_only)
void subsdk1_f_2df0f0() {}

// sub_2e17b0  (orig 0x2e17b0, mov_ret)
uint32_t subsdk1_f_2e17b0() { return 0; }

// sub_2e1a80  (orig 0x2e1a80, mov_ret)
uint32_t subsdk1_f_2e1a80() { return 1; }

// sub_2e1a90  (orig 0x2e1a90, mov_ret)
uint32_t subsdk1_f_2e1a90() { return 0; }

// sub_2e1aa0  (orig 0x2e1aa0, mov_ret)
uint32_t subsdk1_f_2e1aa0() { return 0; }

// sub_2e1ab0  (orig 0x2e1ab0, mov_ret)
uint32_t subsdk1_f_2e1ab0() { return 0; }

// sub_2e1c30  (orig 0x2e1c30, mov_ret)
uint32_t subsdk1_f_2e1c30(uint32_t a0, uint32_t a1) { return a1; }

// sub_2e1c40  (orig 0x2e1c40, getter)
uint32_t subsdk1_f_2e1c40(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 140); }

// sub_2e1c60  (orig 0x2e1c60, ret_only)
void subsdk1_f_2e1c60() {}

// sub_2e1c70  (orig 0x2e1c70, ret_only)
void subsdk1_f_2e1c70() {}

// sub_2e1c80  (orig 0x2e1c80, mov_ret)
uint32_t subsdk1_f_2e1c80() { return 1; }

// sub_2e1c90  (orig 0x2e1c90, ret_only)
void subsdk1_f_2e1c90() {}

// sub_2e1ca0  (orig 0x2e1ca0, mov_ret)
uint32_t subsdk1_f_2e1ca0() { return 1; }

// sub_2e1cb0  (orig 0x2e1cb0, mov_ret)
uint32_t subsdk1_f_2e1cb0() { return 0; }

// sub_2e1dd0  (orig 0x2e1dd0, mov_ret)
uint64_t subsdk1_f_2e1dd0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_2e1f90  (orig 0x2e1f90, mov_ret)
uint64_t subsdk1_f_2e1f90(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_2e1fa0  (orig 0x2e1fa0, ret_only)
void subsdk1_f_2e1fa0() {}

// sub_2e1fd0  (orig 0x2e1fd0, mov_ret)
uint32_t subsdk1_f_2e1fd0() { return 0; }

// sub_2e1fe0  (orig 0x2e1fe0, ret_only)
void subsdk1_f_2e1fe0() {}

// sub_2e45f0  (orig 0x2e45f0, mov_ret)
uint32_t subsdk1_f_2e45f0() { return 0; }

// sub_2e4600  (orig 0x2e4600, mov_ret)
uint32_t subsdk1_f_2e4600() { return 0; }

// sub_2e4610  (orig 0x2e4610, mov_ret)
uint32_t subsdk1_f_2e4610() { return 0; }

// sub_2e4690  (orig 0x2e4690, mov_ret)
uint32_t subsdk1_f_2e4690() { return 0; }

// sub_2e6690  (orig 0x2e6690, ret_only)
void subsdk1_f_2e6690() {}

// sub_2e66a0  (orig 0x2e66a0, mov_ret)
uint64_t subsdk1_f_2e66a0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_2e6a80  (orig 0x2e6a80, mov_ret)
uint64_t subsdk1_f_2e6a80() { return 0; }

// sub_2e6a90  (orig 0x2e6a90, ret_only)
void subsdk1_f_2e6a90() {}

// sub_2e6aa0  (orig 0x2e6aa0, ret_only)
void subsdk1_f_2e6aa0() {}

// sub_2e6ab0  (orig 0x2e6ab0, ret_only)
void subsdk1_f_2e6ab0() {}

// sub_2e6bf0  (orig 0x2e6bf0, mov_ret)
uint32_t subsdk1_f_2e6bf0() { return 1; }

// sub_2e6c00  (orig 0x2e6c00, mov_ret)
uint32_t subsdk1_f_2e6c00() { return 0; }

// sub_2e6c10  (orig 0x2e6c10, ret_only)
void subsdk1_f_2e6c10() {}

// sub_2e6c20  (orig 0x2e6c20, mov_ret)
uint32_t subsdk1_f_2e6c20() { return 0; }

// sub_2e6c70  (orig 0x2e6c70, ret_only)
void subsdk1_f_2e6c70() {}

// sub_2e6cf0  (orig 0x2e6cf0, mov_ret)
uint32_t subsdk1_f_2e6cf0() { return 0; }

// sub_2e6d00  (orig 0x2e6d00, mov_ret)
uint32_t subsdk1_f_2e6d00() { return 0; }

// sub_2e6d10  (orig 0x2e6d10, straight)
uint32_t subsdk1_f_2e6d10(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1)) = -1;
    return 0;
}

// sub_2e6e30  (orig 0x2e6e30, mov_ret)
uint32_t subsdk1_f_2e6e30() { return 0; }

// sub_2e6e40  (orig 0x2e6e40, mov_ret)
uint32_t subsdk1_f_2e6e40() { return 0; }

// sub_2e6e50  (orig 0x2e6e50, straight)
uint32_t subsdk1_f_2e6e50(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 1280) = *(uint64_t*)((char*)(a0) + 920);
    *(uint32_t*)((char*)(a1) + 1272) = (uint32_t)(*(uint16_t*)((char*)(a0) + 912));
    return 0;
}

// sub_2e6e70  (orig 0x2e6e70, mov_ret)
uint32_t subsdk1_f_2e6e70() { return 0; }

// sub_2e6e80  (orig 0x2e6e80, mov_ret)
uint32_t subsdk1_f_2e6e80() { return 0; }

// sub_2e6e90  (orig 0x2e6e90, mov_ret)
uint32_t subsdk1_f_2e6e90() { return 0; }

// sub_2e6ea0  (orig 0x2e6ea0, mov_ret)
uint32_t subsdk1_f_2e6ea0() { return 0; }

// sub_2e6eb0  (orig 0x2e6eb0, mov_ret)
uint32_t subsdk1_f_2e6eb0() { return 0; }

// sub_2e6ec0  (orig 0x2e6ec0, mov_ret)
uint32_t subsdk1_f_2e6ec0() { return 1; }

// sub_2e6ed0  (orig 0x2e6ed0, mov_ret)
uint32_t subsdk1_f_2e6ed0() { return 1; }

// sub_2e6ee0  (orig 0x2e6ee0, mov_ret)
uint32_t subsdk1_f_2e6ee0() { return 0; }

// sub_2e6ef0  (orig 0x2e6ef0, mov_ret)
uint32_t subsdk1_f_2e6ef0() { return 0; }

// sub_2e6f00  (orig 0x2e6f00, mov_ret)
uint32_t subsdk1_f_2e6f00() { return 0; }

// sub_2e6fe0  (orig 0x2e6fe0, mov_ret)
uint32_t subsdk1_f_2e6fe0() { return 0; }

// sub_2e6ff0  (orig 0x2e6ff0, mov_ret)
uint32_t subsdk1_f_2e6ff0() { return 0; }

// sub_2e70d0  (orig 0x2e70d0, mov_ret)
uint32_t subsdk1_f_2e70d0() { return -1; }

// sub_2e7200  (orig 0x2e7200, mov_ret)
uint64_t subsdk1_f_2e7200(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_2e7300  (orig 0x2e7300, ret_only)
void subsdk1_f_2e7300() {}

// sub_2e7bf0  (orig 0x2e7bf0, ret_only)
void subsdk1_f_2e7bf0() {}

// sub_2e7c00  (orig 0x2e7c00, mov_ret)
uint32_t subsdk1_f_2e7c00() { return 0; }

// sub_2e7c10  (orig 0x2e7c10, ret_only)
void subsdk1_f_2e7c10() {}

// sub_2e8b70  (orig 0x2e8b70, mov_ret)
uint32_t subsdk1_f_2e8b70() { return 0; }

// sub_2e8b80  (orig 0x2e8b80, ret_only)
void subsdk1_f_2e8b80() {}

// sub_2e8b90  (orig 0x2e8b90, ret_only)
void subsdk1_f_2e8b90() {}

// sub_2e8ba0  (orig 0x2e8ba0, mov_ret)
uint32_t subsdk1_f_2e8ba0() { return 0; }

// sub_2e8bb0  (orig 0x2e8bb0, mov_ret)
uint32_t subsdk1_f_2e8bb0() { return 0; }

// sub_2e8bc0  (orig 0x2e8bc0, mov_ret)
uint32_t subsdk1_f_2e8bc0() { return 0; }

// sub_2e8bd0  (orig 0x2e8bd0, mov_ret)
uint32_t subsdk1_f_2e8bd0() { return 0; }

// sub_2e8e30  (orig 0x2e8e30, ret_only)
void subsdk1_f_2e8e30() {}

// sub_2e99c0  (orig 0x2e99c0, straight)
void subsdk1_f_2e99c0(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = (*(uint32_t*)((char*)(a0) + 12)) | (4194304);
}

// sub_2ed140  (orig 0x2ed140, getter-chain)
uint64_t subsdk1_f_2ed140(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 48);
    return *(uint64_t*)((char*)(t0) + (uintptr_t)(a1) * 8);
}

// sub_2ed150  (orig 0x2ed150, straight-line)
void subsdk1_f_2ed150(void* a0, int32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 48));
    *(uint64_t*)(((char*)(p0) + (uintptr_t)a1 * 8)) = a2;
}

// sub_2ed160  (orig 0x2ed160, getter-chain)
uint16_t subsdk1_f_2ed160(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 56);
    return *(uint16_t*)((char*)(t0) + (uintptr_t)(a1) * 2);
}

// sub_2ed170  (orig 0x2ed170, straight-line)
void subsdk1_f_2ed170(void* a0, int32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 56));
    *(uint16_t*)(((char*)(p0) + (uintptr_t)a1 * 2)) = (uint16_t)(a2);
}

// sub_2ed180  (orig 0x2ed180, getter-chain)
uint32_t subsdk1_f_2ed180(void* a0, int32_t a1) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 56);
    return *(uint32_t*)((char*)(t0) + (uintptr_t)(a1) * 4);
}

// sub_2ed190  (orig 0x2ed190, straight-line)
void subsdk1_f_2ed190(void* a0, int32_t a1, uint64_t a2) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 56));
    *(uint32_t*)(((char*)(p0) + (uintptr_t)a1 * 4)) = (uint32_t)(a2);
}

// sub_2ee310  (orig 0x2ee310, setter)
void subsdk1_f_2ee310(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_2f9d70  (orig 0x2f9d70, straight)
uint8_t subsdk1_f_2f9d70(uint64_t unused0, void* a1) { return (((*(uint8_t*)((char*)(a1)) == 18) ? 1 : 0)) | (((*(uint8_t*)((char*)(a1)) == 29) ? 1 : 0)); }

// sub_3024e0  (orig 0x3024e0, straight)
uint32_t subsdk1_f_3024e0(void* a0, void* a1) { return (*(uint32_t*)((char*)(a0) + 4)) - (*(uint32_t*)((char*)(a1) + 4)); }

// sub_31e0a0  (orig 0x31e0a0, copy-chain-store)
void subsdk1_f_31e0a0(uint64_t a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 48);
    uint64_t t1 = *(uint64_t*)(char*)(t0);
    *(uint64_t*)((char*)a0 + 56) = (uint64_t)(t1);
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)(t0) = (uint64_t)a0;
}

// sub_31fa70  (orig 0x31fa70, mov_ret)
uint32_t subsdk1_f_31fa70() { return 1; }

// sub_31fa80  (orig 0x31fa80, ret_only)
void subsdk1_f_31fa80() {}

// sub_31fa90  (orig 0x31fa90, mov_ret)
uint64_t subsdk1_f_31fa90(uint64_t a0, uint64_t a1) { return a1; }

// sub_326680  (orig 0x326680, straight)
void subsdk1_f_326680(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = (*(uint32_t*)((char*)(a0) + 12)) & (4026531839);
}

// sub_327190  (orig 0x327190, straight)
void subsdk1_f_327190(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = (*(uint32_t*)((char*)(a0) + 12)) & (4294966783);
}

// sub_3271a0  (orig 0x3271a0, setter)
void subsdk1_f_3271a0(void* a0, uint64_t unused1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 20) = a2; }

// sub_3271b0  (orig 0x3271b0, straight)
void subsdk1_f_3271b0(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = (*(uint32_t*)((char*)(a0) + 12)) | (1);
}

// sub_327350  (orig 0x327350, straight)
void subsdk1_f_327350(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = (*(uint32_t*)((char*)(a0) + 12)) ^ (48);
}

// sub_327c80  (orig 0x327c80, ret_only)
void subsdk1_f_327c80() {}

// sub_32bad0  (orig 0x32bad0, getter)
uint8_t subsdk1_f_32bad0(void* a0) { return *(uint8_t*)((char*)(a0) + 156); }

// sub_32bb00  (orig 0x32bb00, getter)
uint32_t subsdk1_f_32bb00(void* a0) { return *(uint32_t*)((char*)(a0) + 152); }

// sub_32bb10  (orig 0x32bb10, getter)
uint32_t subsdk1_f_32bb10(void* a0) { return *(uint32_t*)((char*)(a0) + 144); }

// sub_32bb20  (orig 0x32bb20, getter)
uint32_t subsdk1_f_32bb20(void* a0) { return *(uint32_t*)((char*)(a0) + 148); }

// sub_330c80  (orig 0x330c80, ret_only)
void subsdk1_f_330c80() {}

// sub_330c90  (orig 0x330c90, ret_only)
void subsdk1_f_330c90() {}

// sub_332fd0  (orig 0x332fd0, mov_ret)
uint32_t subsdk1_f_332fd0() { return 1; }

// sub_335db0  (orig 0x335db0, setter)
void subsdk1_f_335db0(uint64_t unused0, void* a1) { *(uint64_t*)((char*)(a1) + 96) = 0; }

// sub_3390e0  (orig 0x3390e0, straight)
void subsdk1_f_3390e0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a1)) == 0) ? 1 : 0);
}

// sub_339180  (orig 0x339180, compare)
bool subsdk1_f_339180(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) == (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_3391a0  (orig 0x3391a0, compare)
bool subsdk1_f_3391a0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) != (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_3391c0  (orig 0x3391c0, copy2)
void subsdk1_f_3391c0(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1)); }

// sub_3391d0  (orig 0x3391d0, straight)
void subsdk1_f_3391d0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a1)) != 0) ? 1 : 0);
}

// sub_339210  (orig 0x339210, straight-line)
void subsdk1_f_339210(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(*(int32_t*)((char*)(a1)));
}

// sub_339220  (orig 0x339220, straight-line)
void subsdk1_f_339220(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(*(int32_t*)((char*)(a1)));
}

// sub_339230  (orig 0x339230, straight)
void subsdk1_f_339230(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a1)) != 0) ? 1 : 0);
}

// sub_339270  (orig 0x339270, straight)
void subsdk1_f_339270(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(((*(uint64_t*)((char*)(a1)) != 0) ? 1 : 0));
}

// sub_339290  (orig 0x339290, straight)
void subsdk1_f_339290(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(((*(uint64_t*)((char*)(a1)) != 0) ? 1 : 0));
}

// sub_3392b0  (orig 0x3392b0, straight)
void subsdk1_f_3392b0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (0 - ((uint32_t)*(uint32_t*)((char*)(a1))));
}

// sub_3392c0  (orig 0x3392c0, straight)
void subsdk1_f_3392c0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (~((uint32_t)*(uint32_t*)((char*)(a1))));
}

// sub_3392f0  (orig 0x3392f0, straight)
void subsdk1_f_3392f0(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0)) = (*(uint32_t*)((char*)(a1))) - (*(uint32_t*)((char*)(a2)));
}

// sub_339410  (orig 0x339410, compare)
bool subsdk1_f_339410(void* a0, void* a1) { return (int32_t)(*(uint32_t*)((char*)(a0))) < (int32_t)(*(uint32_t*)((char*)(a1))); }

// sub_339430  (orig 0x339430, compare)
bool subsdk1_f_339430(void* a0, void* a1) { return (int32_t)(*(uint32_t*)((char*)(a0))) > (int32_t)(*(uint32_t*)((char*)(a1))); }

// sub_339450  (orig 0x339450, compare)
bool subsdk1_f_339450(void* a0, void* a1) { return (int32_t)(*(uint32_t*)((char*)(a0))) <= (int32_t)(*(uint32_t*)((char*)(a1))); }

// sub_339470  (orig 0x339470, compare)
bool subsdk1_f_339470(void* a0, void* a1) { return (int32_t)(*(uint32_t*)((char*)(a0))) >= (int32_t)(*(uint32_t*)((char*)(a1))); }

// sub_3395f0  (orig 0x3395f0, straight-line)
void subsdk1_f_3395f0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(int16_t*)((char*)(a1)));
}

// sub_339600  (orig 0x339600, straight-line)
void subsdk1_f_339600(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint16_t*)((char*)(a1)));
}

// sub_339620  (orig 0x339620, straight-line)
void subsdk1_f_339620(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint8_t*)((char*)(a1)));
}

// sub_339630  (orig 0x339630, fp-conv-store)
void subsdk1_f_339630(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const double*)((char*)(a1)); }

// sub_339640  (orig 0x339640, straight-line)
void subsdk1_f_339640(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint64_t*)((char*)(a1)));
}

// sub_339650  (orig 0x339650, straight-line)
void subsdk1_f_339650(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint64_t*)((char*)(a1)));
}

// sub_3397f0  (orig 0x3397f0, fp-compare)
bool subsdk1_f_3397f0(void* a0, void* a1) { return *(const double*)((char*)(a0)) < *(const double*)((char*)(a1)); }

// sub_3399b0  (orig 0x3399b0, fp-conv-store)
void subsdk1_f_3399b0(void* a0, void* a1) { *(uint32_t*)((char*)(a0)) = (uint32_t)*(const double*)((char*)(a1)); }

// sub_3399c0  (orig 0x3399c0, fp-conv-store)
void subsdk1_f_3399c0(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const double*)((char*)(a1)); }

// sub_3399d0  (orig 0x3399d0, fp-conv-store)
void subsdk1_f_3399d0(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const double*)((char*)(a1)); }

// sub_3399e0  (orig 0x3399e0, fp-conv-store)
void subsdk1_f_3399e0(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const double*)((char*)(a1)); }

// sub_3399f0  (orig 0x3399f0, fp-conv-store)
void subsdk1_f_3399f0(void* a0, void* a1) { *(int32_t*)((char*)(a0)) = (int32_t)*(const double*)((char*)(a1)); }

// sub_339a00  (orig 0x339a00, fp-conv-store)
void subsdk1_f_339a00(void* a0, void* a1) { *(int64_t*)((char*)(a0)) = (int64_t)*(const double*)((char*)(a1)); }

// sub_339a10  (orig 0x339a10, fp-conv-store)
void subsdk1_f_339a10(void* a0, void* a1) { *(uint64_t*)((char*)(a0)) = (uint64_t)*(const double*)((char*)(a1)); }

// sub_33a450  (orig 0x33a450, fp-conv-store)
void subsdk1_f_33a450(void* a0, void* a1) { *(uint32_t*)((char*)(a0)) = (uint32_t)*(const double*)((char*)(a1)); }

// sub_33a470  (orig 0x33a470, fp-conv-store)
void subsdk1_f_33a470(void* a0, void* a1) { *(double*)((char*)(a0)) = (double)*(const int64_t*)((char*)(a1)); }

// sub_33a480  (orig 0x33a480, fp-conv-store)
void subsdk1_f_33a480(void* a0, void* a1) { *(double*)((char*)(a0)) = (double)*(const uint64_t*)((char*)(a1)); }

// sub_33a490  (orig 0x33a490, straight)
void subsdk1_f_33a490(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (0 - ((uint32_t)*(uint32_t*)((char*)(a1))));
}

// sub_33a4c0  (orig 0x33a4c0, straight)
void subsdk1_f_33a4c0(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0)) = (*(uint32_t*)((char*)(a1))) - (*(uint32_t*)((char*)(a2)));
}

// sub_33a570  (orig 0x33a570, compare)
bool subsdk1_f_33a570(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) < (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_33a590  (orig 0x33a590, compare)
bool subsdk1_f_33a590(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) > (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_33a5b0  (orig 0x33a5b0, compare)
bool subsdk1_f_33a5b0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) <= (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_33a5d0  (orig 0x33a5d0, compare)
bool subsdk1_f_33a5d0(void* a0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a0))) >= (uint32_t)(*(uint32_t*)((char*)(a1))); }

// sub_33a5f0  (orig 0x33a5f0, straight-line)
void subsdk1_f_33a5f0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(int16_t*)((char*)(a1)));
}

// sub_33a600  (orig 0x33a600, straight-line)
void subsdk1_f_33a600(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint16_t*)((char*)(a1)));
}

// sub_33a620  (orig 0x33a620, straight-line)
void subsdk1_f_33a620(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint8_t*)((char*)(a1)));
}

// sub_33a630  (orig 0x33a630, straight-line)
void subsdk1_f_33a630(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(*(uint32_t*)((char*)(a1)));
}

// sub_33a640  (orig 0x33a640, straight-line)
void subsdk1_f_33a640(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (uint64_t)(*(uint32_t*)((char*)(a1)));
}

// sub_33a650  (orig 0x33a650, straight-line)
void subsdk1_f_33a650(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint64_t*)((char*)(a1)));
}

// sub_33a660  (orig 0x33a660, straight-line)
void subsdk1_f_33a660(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint64_t*)((char*)(a1)));
}

// sub_33a7b0  (orig 0x33a7b0, straight-line)
void subsdk1_f_33a7b0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(int16_t*)((char*)(a1)));
}

// sub_33a7c0  (orig 0x33a7c0, straight-line)
void subsdk1_f_33a7c0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(int16_t*)((char*)(a1)));
}

// sub_33a7d0  (orig 0x33a7d0, straight)
void subsdk1_f_33a7d0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = ((0 - ((uint32_t)*(uint32_t*)((char*)(a1))))) & (65535);
}

// sub_33a820  (orig 0x33a820, straight)
void subsdk1_f_33a820(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a1))) - (*(uint32_t*)((char*)(a2)))) & (65535);
}

// sub_33a900  (orig 0x33a900, straight-line)
void subsdk1_f_33a900(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint16_t*)((char*)(a1)));
}

// sub_33a910  (orig 0x33a910, straight-line)
void subsdk1_f_33a910(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint16_t*)((char*)(a1)));
}

// sub_33aa80  (orig 0x33aa80, straight)
void subsdk1_f_33aa80(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = ((0 - ((uint32_t)*(uint32_t*)((char*)(a1))))) & (255);
}

// sub_33aad0  (orig 0x33aad0, straight)
void subsdk1_f_33aad0(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0)) = ((*(uint32_t*)((char*)(a1))) - (*(uint32_t*)((char*)(a2)))) & (255);
}

// sub_33abb0  (orig 0x33abb0, straight-line)
void subsdk1_f_33abb0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint8_t*)((char*)(a1)));
}

// sub_33abc0  (orig 0x33abc0, straight-line)
void subsdk1_f_33abc0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0)) = (uint32_t)(*(uint8_t*)((char*)(a1)));
}

// sub_33abd0  (orig 0x33abd0, straight)
void subsdk1_f_33abd0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (0 - ((uint64_t)*(uint64_t*)((char*)(a1))));
}

// sub_33abe0  (orig 0x33abe0, straight)
void subsdk1_f_33abe0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (~((uint64_t)*(uint64_t*)((char*)(a1))));
}

// sub_33ac10  (orig 0x33ac10, straight)
void subsdk1_f_33ac10(void* a0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a0)) = (*(uint64_t*)((char*)(a1))) - (*(uint64_t*)((char*)(a2)));
}

// sub_33ad50  (orig 0x33ad50, compare)
bool subsdk1_f_33ad50(void* a0, void* a1) { return (int64_t)(*(uint64_t*)((char*)(a0))) < (int64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33ad70  (orig 0x33ad70, compare)
bool subsdk1_f_33ad70(void* a0, void* a1) { return (int64_t)(*(uint64_t*)((char*)(a0))) > (int64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33ad90  (orig 0x33ad90, compare)
bool subsdk1_f_33ad90(void* a0, void* a1) { return (int64_t)(*(uint64_t*)((char*)(a0))) <= (int64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33adb0  (orig 0x33adb0, compare)
bool subsdk1_f_33adb0(void* a0, void* a1) { return (int64_t)(*(uint64_t*)((char*)(a0))) >= (int64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33add0  (orig 0x33add0, compare)
bool subsdk1_f_33add0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33adf0  (orig 0x33adf0, compare)
bool subsdk1_f_33adf0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33ae10  (orig 0x33ae10, straight)
void subsdk1_f_33ae10(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (0 - ((uint64_t)*(uint64_t*)((char*)(a1))));
}

// sub_33ae20  (orig 0x33ae20, straight)
void subsdk1_f_33ae20(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = (~((uint64_t)*(uint64_t*)((char*)(a1))));
}

// sub_33ae50  (orig 0x33ae50, straight)
void subsdk1_f_33ae50(void* a0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a0)) = (*(uint64_t*)((char*)(a1))) - (*(uint64_t*)((char*)(a2)));
}

// sub_33af90  (orig 0x33af90, compare)
bool subsdk1_f_33af90(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) < (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33afb0  (orig 0x33afb0, compare)
bool subsdk1_f_33afb0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) > (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33afd0  (orig 0x33afd0, compare)
bool subsdk1_f_33afd0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) <= (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33aff0  (orig 0x33aff0, compare)
bool subsdk1_f_33aff0(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) >= (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33b010  (orig 0x33b010, compare)
bool subsdk1_f_33b010(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33b030  (orig 0x33b030, compare)
bool subsdk1_f_33b030(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) != (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_33d7f0  (orig 0x33d7f0, mov_ret)
uint32_t subsdk1_f_33d7f0() { return 0; }

// sub_33d800  (orig 0x33d800, mov_ret)
uint32_t subsdk1_f_33d800() { return 0; }

// sub_33d810  (orig 0x33d810, ret_only)
void subsdk1_f_33d810() {}

// sub_33d820  (orig 0x33d820, ret_only)
void subsdk1_f_33d820() {}

// sub_33f100  (orig 0x33f100, mov_ret)
uint32_t subsdk1_f_33f100() { return 1; }

// sub_33f410  (orig 0x33f410, copy-chain-store)
void subsdk1_f_33f410(uint64_t a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 48);
    uint64_t t1 = *(uint64_t*)(char*)(t0);
    *(uint64_t*)((char*)a0 + 56) = (uint64_t)(t1);
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)(t0) = (uint64_t)a0;
}

// sub_340c90  (orig 0x340c90, copy2)
void subsdk1_f_340c90(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 40) = *(uint64_t*)((char*)(a1)); }

// sub_340ce0  (orig 0x340ce0, mov_ret)
uint32_t subsdk1_f_340ce0() { return 1; }

// sub_340cf0  (orig 0x340cf0, ret_only)
void subsdk1_f_340cf0() {}

// sub_345040  (orig 0x345040, mov_ret)
uint32_t subsdk1_f_345040() { return 1; }

// sub_346ef0  (orig 0x346ef0, compare)
bool subsdk1_f_346ef0(uint64_t unused0, uint64_t a1, uint64_t a2) { return (uint64_t)(a1) == (uint64_t)(a2); }

// sub_347080  (orig 0x347080, setter-chain)
void subsdk1_f_347080(void* a0) { *(uint64_t*)((char*)(a0) + 40) = 0; *(uint64_t*)((char*)(a0) + 48) = 0; __asm__ __volatile__("" ::: "memory");; *(uint32_t*)((char*)(a0) + 56) = 0; }

// sub_351b20  (orig 0x351b20, mov_ret)
uint32_t subsdk1_f_351b20() { return -1; }

// sub_351b30  (orig 0x351b30, ret_only)
void subsdk1_f_351b30() {}

// sub_359730  (orig 0x359730, mov_ret)
uint32_t subsdk1_f_359730() { return 0; }

// sub_359740  (orig 0x359740, mov_ret)
uint32_t subsdk1_f_359740() { return 0; }

// sub_35c020  (orig 0x35c020, straight)
void subsdk1_f_35c020(void* a0) {
    *(uint32_t*)((char*)(a0) + 12) = (*(uint32_t*)((char*)(a0) + 12)) & (4294967039);
}

// sub_3674a0  (orig 0x3674a0, mov_ret)
uint32_t subsdk1_f_3674a0(uint32_t a0, uint32_t a1) { return a1; }

// sub_36d4f0  (orig 0x36d4f0, compare)
bool subsdk1_f_36d4f0(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(10); }

// sub_36d500  (orig 0x36d500, compare)
bool subsdk1_f_36d500(uint64_t a0) { return (uint32_t)(a0) == (uint64_t)(19); }

// sub_36de90  (orig 0x36de90, compare)
bool subsdk1_f_36de90(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1))) == (uint64_t)(12); }

// sub_373d80  (orig 0x373d80, getter)
uint8_t subsdk1_f_373d80(uint64_t unused0, uint64_t unused1, void* a2) { return *(uint8_t*)((char*)(a2)); }

// sub_373e50  (orig 0x373e50, getter)
uint32_t subsdk1_f_373e50(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_373e60  (orig 0x373e60, compare)
bool subsdk1_f_373e60(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 32)) == (uint64_t)(0); }

// sub_3751a0  (orig 0x3751a0, compare)
bool subsdk1_f_3751a0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 368)) == (uint64_t)(0); }

// sub_3751b0  (orig 0x3751b0, mov_ret)
uint32_t subsdk1_f_3751b0() { return 1; }

// sub_3757c0  (orig 0x3757c0, mov_ret)
uint32_t subsdk1_f_3757c0() { return 48; }

// sub_375850  (orig 0x375850, mov_ret)
uint32_t subsdk1_f_375850() { return 1; }

// sub_377300  (orig 0x377300, mov_ret)
uint32_t subsdk1_f_377300() { return 1; }

// sub_377310  (orig 0x377310, mov_ret)
uint32_t subsdk1_f_377310() { return 0; }

// sub_378670  (orig 0x378670, straight-line)
uint32_t subsdk1_f_378670(uint32_t a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = 0;
    return (((((uint32_t)a0) < 8)) ? (207) : (0));
}

// sub_378690  (orig 0x378690, mov_ret)
uint32_t subsdk1_f_378690() { return 7; }

// sub_3789d0  (orig 0x3789d0, mov_ret)
uint32_t subsdk1_f_3789d0() { return 23; }

// sub_378bf0  (orig 0x378bf0, straight)
uint32_t subsdk1_f_378bf0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1)) = -1;
    return 0;
}

// sub_378c00  (orig 0x378c00, mov_ret)
uint32_t subsdk1_f_378c00() { return 13; }

// sub_378da0  (orig 0x378da0, mov_ret)
uint32_t subsdk1_f_378da0() { return 29; }

// sub_378e80  (orig 0x378e80, mov_ret)
uint32_t subsdk1_f_378e80() { return 5; }

// sub_378f60  (orig 0x378f60, mov_ret)
uint32_t subsdk1_f_378f60() { return 21; }

// sub_37c5f0  (orig 0x37c5f0, straight-line)
uint32_t subsdk1_f_37c5f0(uint32_t a0, void* a1) {
    *(uint32_t*)((char*)(a1)) = 0;
    return (((((uint32_t)a0) < 8)) ? (207) : (0));
}

// sub_37cf00  (orig 0x37cf00, mov_ret)
uint32_t subsdk1_f_37cf00() { return 432; }

// sub_37cf10  (orig 0x37cf10, mov_ret)
uint32_t subsdk1_f_37cf10() { return 1; }

// sub_37d230  (orig 0x37d230, mov_ret)
uint64_t subsdk1_f_37d230() { return 0; }

// sub_37d240  (orig 0x37d240, mov_ret)
uint64_t subsdk1_f_37d240() { return 0; }

// sub_37d250  (orig 0x37d250, mov_ret)
uint64_t subsdk1_f_37d250() { return 0; }

// sub_37d260  (orig 0x37d260, mov_ret)
uint64_t subsdk1_f_37d260() { return 0; }

// sub_37d270  (orig 0x37d270, mov_ret)
uint64_t subsdk1_f_37d270() { return 0; }

// sub_37d280  (orig 0x37d280, mov_ret)
uint64_t subsdk1_f_37d280() { return 0; }

// sub_37d740  (orig 0x37d740, straight)
uint32_t subsdk1_f_37d740(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1)) = -1;
    return 0;
}

// sub_37db20  (orig 0x37db20, straight)
uint32_t subsdk1_f_37db20(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1)) = -1;
    return 0;
}

// sub_37db30  (orig 0x37db30, mov_ret)
uint32_t subsdk1_f_37db30() { return 51; }

// sub_37de70  (orig 0x37de70, straight)
uint32_t subsdk1_f_37de70(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1)) = -1;
    return 0;
}

// sub_37de80  (orig 0x37de80, mov_ret)
uint32_t subsdk1_f_37de80() { return 53; }

// sub_393930  (orig 0x393930, compare)
bool subsdk1_f_393930(void* a0) { return (uint16_t)(*(uint16_t*)((char*)(a0) + 8)) < (uint64_t)(16383); }

// sub_44fd00  (orig 0x44fd00, mov_ret)
uint32_t subsdk1_f_44fd00() { return 0; }

// sub_451060  (orig 0x451060, getter)
uint32_t subsdk1_f_451060(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_4511f0  (orig 0x4511f0, getter)
uint64_t subsdk1_f_4511f0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_451200  (orig 0x451200, getter)
uint64_t subsdk1_f_451200(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_496fb0  (orig 0x496fb0, ret_only)
void subsdk1_f_496fb0() {}

// sub_4970e0  (orig 0x4970e0, straight)
uint32_t subsdk1_f_4970e0(void* a0) { return ((*(uint32_t*)((char*)(a0))) >> (20)) & (1); }

// sub_49f680  (orig 0x49f680, straight)
void subsdk1_f_49f680(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 113) = (uint8_t)k0;
}

// sub_49ff40  (orig 0x49ff40, straight)
void subsdk1_f_49ff40(void* a0) {
    *(uint32_t*)((char*)(a0) + 48) = ((*(uint32_t*)((char*)(a0) + 48)) & (3221225535)) | (64);
}

// sub_4a0300  (orig 0x4a0300, straight)
void subsdk1_f_4a0300(void* a0) {
    *(uint32_t*)((char*)(a0) + 32) = 12;
}

// sub_4b4d10  (orig 0x4b4d10, ret_only)
void subsdk1_f_4b4d10() {}

// sub_4b4d20  (orig 0x4b4d20, ret_only)
void subsdk1_f_4b4d20() {}

// sub_4b4da0  (orig 0x4b4da0, ret_only)
void subsdk1_f_4b4da0() {}

// sub_4bdcb0  (orig 0x4bdcb0, mov_ret)
uint32_t subsdk1_f_4bdcb0() { return 1; }

// sub_4be000  (orig 0x4be000, mov_ret)
uint32_t subsdk1_f_4be000() { return 0; }

// sub_4bfe10  (orig 0x4bfe10, setter)
void subsdk1_f_4bfe10(void* a0) { *(uint64_t*)((char*)(a0)) = 0; }

// sub_4c0d00  (orig 0x4c0d00, ret_only)
void subsdk1_f_4c0d00() {}

// sub_4c29f0  (orig 0x4c29f0, mov_ret)
uint32_t subsdk1_f_4c29f0() { return 1; }

// sub_4c2a00  (orig 0x4c2a00, ret_only)
void subsdk1_f_4c2a00() {}

// sub_4c2b80  (orig 0x4c2b80, ret_only)
void subsdk1_f_4c2b80() {}

// sub_4c4a90  (orig 0x4c4a90, straight-line)
uint32_t subsdk1_f_4c4a90(uint32_t a0) { return (((((uint32_t)a0) != 2)) ? ((((((uint32_t)a0) == 3)) ? (11) : (0))) : ((0) + (1))); }

// sub_4c4ae0  (orig 0x4c4ae0, mov_ret)
uint32_t subsdk1_f_4c4ae0() { return 14; }

// sub_4cd7f0  (orig 0x4cd7f0, getter)
uint64_t subsdk1_f_4cd7f0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_4cd800  (orig 0x4cd800, mov_ret)
uint32_t subsdk1_f_4cd800() { return 1984; }

// sub_4cd810  (orig 0x4cd810, getter-chain)
uint32_t subsdk1_f_4cd810(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16)))); }

// sub_4cd820  (orig 0x4cd820, getter-chain)
uint32_t subsdk1_f_4cd820(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 4); }

// sub_4cd830  (orig 0x4cd830, getter-chain)
uint32_t subsdk1_f_4cd830(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 8); }

// sub_4cd840  (orig 0x4cd840, getter-chain)
uint32_t subsdk1_f_4cd840(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 12); }

// sub_4cd850  (orig 0x4cd850, getter-chain)
uint32_t subsdk1_f_4cd850(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 16); }

// sub_4cd860  (orig 0x4cd860, getter-chain)
uint32_t subsdk1_f_4cd860(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1784); }

// sub_4cd870  (orig 0x4cd870, getter-chain)
uint32_t subsdk1_f_4cd870(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1788); }

// sub_4cd880  (orig 0x4cd880, getter-chain)
uint32_t subsdk1_f_4cd880(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1792); }

// sub_4cd890  (orig 0x4cd890, getter-chain)
uint32_t subsdk1_f_4cd890(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1796); }

// sub_4cd8a0  (orig 0x4cd8a0, getter-chain)
uint32_t subsdk1_f_4cd8a0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1800); }

// sub_4cd8b0  (orig 0x4cd8b0, getter-chain)
uint32_t subsdk1_f_4cd8b0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1804); }

// sub_4cd8c0  (orig 0x4cd8c0, getter-chain)
uint32_t subsdk1_f_4cd8c0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1808); }

// sub_4cd8d0  (orig 0x4cd8d0, getter-chain)
uint32_t subsdk1_f_4cd8d0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1812); }

// sub_4cd8e0  (orig 0x4cd8e0, getter-chain)
uint32_t subsdk1_f_4cd8e0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 20); }

// sub_4cd8f0  (orig 0x4cd8f0, getter-chain)
uint32_t subsdk1_f_4cd8f0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 24); }

// sub_4cd900  (orig 0x4cd900, getter-chain)
uint32_t subsdk1_f_4cd900(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 28); }

// sub_4cd910  (orig 0x4cd910, getter-chain)
uint32_t subsdk1_f_4cd910(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 32); }

// sub_4cd920  (orig 0x4cd920, getter-chain)
uint32_t subsdk1_f_4cd920(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 36); }

// sub_4cd930  (orig 0x4cd930, getter-chain)
uint32_t subsdk1_f_4cd930(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 44); }

// sub_4cd940  (orig 0x4cd940, getter-chain)
uint32_t subsdk1_f_4cd940(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 40); }

// sub_4cd950  (orig 0x4cd950, getter-chain)
uint32_t subsdk1_f_4cd950(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 48); }

// sub_4cd960  (orig 0x4cd960, getter-chain)
uint32_t subsdk1_f_4cd960(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 52); }

// sub_4cd970  (orig 0x4cd970, getter-chain)
uint8_t subsdk1_f_4cd970(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 56); }

// sub_4cd980  (orig 0x4cd980, straight)
void* subsdk1_f_4cd980(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 57;
}

// sub_4cd990  (orig 0x4cd990, straight)
void* subsdk1_f_4cd990(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 90;
}

// sub_4cd9a0  (orig 0x4cd9a0, straight)
void* subsdk1_f_4cd9a0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 154;
}

// sub_4cd9b0  (orig 0x4cd9b0, straight)
void* subsdk1_f_4cd9b0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 186;
}

// sub_4cd9c0  (orig 0x4cd9c0, mov_ret)
uint32_t subsdk1_f_4cd9c0() { return 4; }

// sub_4cd9d0  (orig 0x4cd9d0, mov_ret)
uint32_t subsdk1_f_4cd9d0() { return 128; }

// sub_4cda70  (orig 0x4cda70, getter-chain)
uint8_t subsdk1_f_4cda70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1772); }

// sub_4cda80  (orig 0x4cda80, getter-chain)
uint8_t subsdk1_f_4cda80(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1773); }

// sub_4cda90  (orig 0x4cda90, getter-chain)
uint32_t subsdk1_f_4cda90(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1776); }

// sub_4cdaa0  (orig 0x4cdaa0, getter-chain)
uint32_t subsdk1_f_4cdaa0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1780); }

// sub_4cdab0  (orig 0x4cdab0, getter-chain)
uint8_t subsdk1_f_4cdab0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1816); }

// sub_4cdac0  (orig 0x4cdac0, getter-chain)
uint8_t subsdk1_f_4cdac0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1817); }

// sub_4cdad0  (orig 0x4cdad0, getter-chain)
uint8_t subsdk1_f_4cdad0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1818); }

// sub_4cdae0  (orig 0x4cdae0, getter-chain)
uint8_t subsdk1_f_4cdae0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1819); }

// sub_4cdaf0  (orig 0x4cdaf0, getter-chain)
uint8_t subsdk1_f_4cdaf0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1820); }

// sub_4cdb00  (orig 0x4cdb00, getter-chain)
uint8_t subsdk1_f_4cdb00(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1821); }

// sub_4cdb10  (orig 0x4cdb10, getter-chain)
uint8_t subsdk1_f_4cdb10(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1864); }

// sub_4cdb20  (orig 0x4cdb20, getter-chain)
uint8_t subsdk1_f_4cdb20(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1865); }

// sub_4cdb30  (orig 0x4cdb30, getter-chain)
uint8_t subsdk1_f_4cdb30(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 24))) + 1866); }

// sub_4cdb40  (orig 0x4cdb40, getter-chain)
uint32_t subsdk1_f_4cdb40(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1824); }

// sub_4cdb50  (orig 0x4cdb50, getter-chain)
uint32_t subsdk1_f_4cdb50(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1844); }

// sub_4cdb60  (orig 0x4cdb60, straight)
void* subsdk1_f_4cdb60(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 1828;
}

// sub_4cdb70  (orig 0x4cdb70, getter-chain)
uint32_t subsdk1_f_4cdb70(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1848); }

// sub_4cdb80  (orig 0x4cdb80, getter-chain)
uint32_t subsdk1_f_4cdb80(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1852); }

// sub_4cdb90  (orig 0x4cdb90, getter-chain)
uint32_t subsdk1_f_4cdb90(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1856); }

// sub_4cdba0  (orig 0x4cdba0, getter-chain)
uint32_t subsdk1_f_4cdba0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1860); }

// sub_4cdbb0  (orig 0x4cdbb0, getter-chain)
uint8_t subsdk1_f_4cdbb0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 48))) + 1944); }

// sub_4cdbc0  (orig 0x4cdbc0, getter-chain)
uint8_t subsdk1_f_4cdbc0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 48))) + 1945); }

// sub_4cdbd0  (orig 0x4cdbd0, getter-chain)
uint8_t subsdk1_f_4cdbd0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 48))) + 1946); }

// sub_4cdbe0  (orig 0x4cdbe0, straight)
void* subsdk1_f_4cdbe0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 48));
    return (char*)(p0) + 1952;
}

// sub_4cdbf0  (orig 0x4cdbf0, straight)
void* subsdk1_f_4cdbf0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 16));
    return (char*)(p0) + 1864;
}

// sub_4cdc00  (orig 0x4cdc00, getter-chain)
uint32_t subsdk1_f_4cdc00(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1876); }

// sub_4cdc10  (orig 0x4cdc10, getter-chain)
uint32_t subsdk1_f_4cdc10(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1880); }

// sub_4cdc20  (orig 0x4cdc20, getter-chain)
uint32_t subsdk1_f_4cdc20(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1884); }

// sub_4cdc30  (orig 0x4cdc30, getter-chain)
uint32_t subsdk1_f_4cdc30(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1888); }

// sub_4cdc40  (orig 0x4cdc40, getter-chain)
uint32_t subsdk1_f_4cdc40(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1892); }

// sub_4cdc60  (orig 0x4cdc60, getter-chain)
uint64_t subsdk1_f_4cdc60(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1912); }

// sub_4cdc70  (orig 0x4cdc70, getter-chain)
uint32_t subsdk1_f_4cdc70(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1920); }

// sub_4cdc80  (orig 0x4cdc80, getter-chain)
uint8_t subsdk1_f_4cdc80(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 32))) + 1928); }

// sub_4cdc90  (orig 0x4cdc90, getter-chain)
uint64_t subsdk1_f_4cdc90(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 40))) + 1936); }

// sub_4cdca0  (orig 0x4cdca0, mov_ret)
uint32_t subsdk1_f_4cdca0() { return 0; }

// sub_4cdcb0  (orig 0x4cdcb0, mov_ret)
uint32_t subsdk1_f_4cdcb0() { return 0; }

// sub_4cdcc0  (orig 0x4cdcc0, mov_ret)
uint32_t subsdk1_f_4cdcc0() { return 0; }

// sub_4cdcd0  (orig 0x4cdcd0, getter-chain)
uint32_t subsdk1_f_4cdcd0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1864); }

// sub_4cdce0  (orig 0x4cdce0, getter-chain)
uint32_t subsdk1_f_4cdce0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1868); }

// sub_4cdcf0  (orig 0x4cdcf0, getter-chain)
uint32_t subsdk1_f_4cdcf0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1872); }

// sub_4cdd00  (orig 0x4cdd00, getter-chain)
uint32_t subsdk1_f_4cdd00(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1876); }

// sub_4cdd10  (orig 0x4cdd10, getter-chain)
uint32_t subsdk1_f_4cdd10(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1880); }

// sub_4cdd20  (orig 0x4cdd20, getter-chain)
uint32_t subsdk1_f_4cdd20(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 16))) + 1884); }

// sub_4cdd30  (orig 0x4cdd30, mov_ret)
uint32_t subsdk1_f_4cdd30() { return 0; }

// sub_4cdd40  (orig 0x4cdd40, mov_ret)
uint32_t subsdk1_f_4cdd40() { return 0; }

// sub_4cdd50  (orig 0x4cdd50, mov_ret)
uint32_t subsdk1_f_4cdd50() { return 0; }

// sub_4cdd60  (orig 0x4cdd60, mov_ret)
uint32_t subsdk1_f_4cdd60() { return 0; }

// sub_4cdd70  (orig 0x4cdd70, mov_ret)
uint32_t subsdk1_f_4cdd70() { return 0; }

// sub_4cdd80  (orig 0x4cdd80, mov_ret)
uint32_t subsdk1_f_4cdd80() { return 0; }

// sub_4cdd90  (orig 0x4cdd90, mov_ret)
uint32_t subsdk1_f_4cdd90() { return 0; }

// sub_4cdda0  (orig 0x4cdda0, mov_ret)
uint32_t subsdk1_f_4cdda0() { return 0; }

// sub_4cddb0  (orig 0x4cddb0, mov_ret)
uint32_t subsdk1_f_4cddb0() { return 0; }

// sub_4cddc0  (orig 0x4cddc0, mov_ret)
uint32_t subsdk1_f_4cddc0() { return 0; }

// sub_4cddd0  (orig 0x4cddd0, mov_ret)
uint32_t subsdk1_f_4cddd0() { return 0; }

// sub_4cdde0  (orig 0x4cdde0, mov_ret)
uint64_t subsdk1_f_4cdde0() { return 0; }

// sub_4cddf0  (orig 0x4cddf0, mov_ret)
uint64_t subsdk1_f_4cddf0() { return 0; }

// sub_4cde00  (orig 0x4cde00, mov_ret)
uint64_t subsdk1_f_4cde00() { return 0; }

// sub_4cde10  (orig 0x4cde10, mov_ret)
uint64_t subsdk1_f_4cde10() { return 0; }

// sub_4cde20  (orig 0x4cde20, mov_ret)
uint64_t subsdk1_f_4cde20() { return 0; }

// sub_4cde30  (orig 0x4cde30, mov_ret)
uint32_t subsdk1_f_4cde30() { return 0; }

// sub_4cde40  (orig 0x4cde40, mov_ret)
uint32_t subsdk1_f_4cde40() { return 0; }

// sub_4cde50  (orig 0x4cde50, mov_ret)
uint32_t subsdk1_f_4cde50() { return -1; }

// sub_4cde60  (orig 0x4cde60, mov_ret)
uint32_t subsdk1_f_4cde60() { return 0; }

// sub_4cde70  (orig 0x4cde70, mov_ret)
uint32_t subsdk1_f_4cde70() { return 0; }

// sub_4cde80  (orig 0x4cde80, mov_ret)
uint32_t subsdk1_f_4cde80() { return 0; }

// sub_4cde90  (orig 0x4cde90, mov_ret)
uint32_t subsdk1_f_4cde90() { return 0; }

// sub_4cdea0  (orig 0x4cdea0, mov_ret)
uint32_t subsdk1_f_4cdea0() { return 0; }

// sub_4cdeb0  (orig 0x4cdeb0, mov_ret)
uint32_t subsdk1_f_4cdeb0() { return 0; }

// sub_4cdec0  (orig 0x4cdec0, mov_ret)
uint32_t subsdk1_f_4cdec0() { return 0; }

// sub_4cded0  (orig 0x4cded0, ret_only)
void subsdk1_f_4cded0() {}

// sub_4cdef0  (orig 0x4cdef0, mov_ret)
uint32_t subsdk1_f_4cdef0() { return 1992; }

// sub_4cdf00  (orig 0x4cdf00, getter-chain)
uint8_t subsdk1_f_4cdf00(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 56))) + 1984); }

// sub_4cdf20  (orig 0x4cdf20, mov_ret)
uint32_t subsdk1_f_4cdf20() { return 2000; }

// sub_4cdf30  (orig 0x4cdf30, getter-chain)
uint32_t subsdk1_f_4cdf30(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 64))) + 1992); }

// sub_4cdf40  (orig 0x4cdf40, getter-chain)
uint32_t subsdk1_f_4cdf40(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 64))) + 1996); }

// sub_4cdf60  (orig 0x4cdf60, mov_ret)
uint32_t subsdk1_f_4cdf60() { return 2088; }

// sub_4cdf70  (orig 0x4cdf70, getter-chain)
uint32_t subsdk1_f_4cdf70(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2024); }

// sub_4cdf80  (orig 0x4cdf80, getter-chain)
uint32_t subsdk1_f_4cdf80(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2028); }

// sub_4cdf90  (orig 0x4cdf90, getter-chain)
uint32_t subsdk1_f_4cdf90(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2032); }

// sub_4cdfa0  (orig 0x4cdfa0, getter-chain)
uint32_t subsdk1_f_4cdfa0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2036); }

// sub_4cdfb0  (orig 0x4cdfb0, getter)
uint8_t subsdk1_f_4cdfb0(uint64_t unused0, void* a1) { return *(uint8_t*)((char*)(a1)); }

// sub_4cdfc0  (orig 0x4cdfc0, compare)
bool subsdk1_f_4cdfc0(uint64_t unused0, void* a1) { return (uint8_t)(*(uint8_t*)((char*)(a1) + 1)) != (uint64_t)(0); }

// sub_4cdfd0  (orig 0x4cdfd0, getter)
uint16_t subsdk1_f_4cdfd0(uint64_t unused0, void* a1) { return *(uint16_t*)((char*)(a1) + 2); }

// sub_4cdfe0  (orig 0x4cdfe0, getter)
uint32_t subsdk1_f_4cdfe0(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 4); }

// sub_4cdff0  (orig 0x4cdff0, getter)
uint32_t subsdk1_f_4cdff0(uint64_t unused0, void* a1) { return *(uint32_t*)((char*)(a1) + 8); }

// sub_4ce000  (orig 0x4ce000, getter-chain)
uint8_t subsdk1_f_4ce000(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2040); }

// sub_4ce010  (orig 0x4ce010, getter-chain)
uint8_t subsdk1_f_4ce010(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2041); }

// sub_4ce020  (orig 0x4ce020, straight)
void* subsdk1_f_4ce020(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 72));
    return (char*)(p0) + 2044;
}

// sub_4ce030  (orig 0x4ce030, straight)
void* subsdk1_f_4ce030(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 72));
    return (char*)(p0) + 2052;
}

// sub_4ce040  (orig 0x4ce040, getter-chain)
uint64_t subsdk1_f_4ce040(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2000); }

// sub_4ce050  (orig 0x4ce050, getter-chain)
uint64_t subsdk1_f_4ce050(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2008); }

// sub_4ce060  (orig 0x4ce060, getter-chain)
uint64_t subsdk1_f_4ce060(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 72))) + 2016); }

// sub_4ce070  (orig 0x4ce070, compare-pred)
bool subsdk1_f_4ce070(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 72)) + 2042)) != (uint32_t)(0); }

// sub_4ce0d0  (orig 0x4ce0d0, mov_ret)
uint32_t subsdk1_f_4ce0d0() { return 2096; }

// sub_4ce0e0  (orig 0x4ce0e0, getter-chain)
uint32_t subsdk1_f_4ce0e0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 80))) + 2088); }

// sub_4ce100  (orig 0x4ce100, mov_ret)
uint32_t subsdk1_f_4ce100() { return 2104; }

// sub_4ce110  (orig 0x4ce110, getter-chain)
uint8_t subsdk1_f_4ce110(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 2096); }

// sub_4ce120  (orig 0x4ce120, getter-chain)
uint8_t subsdk1_f_4ce120(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 2097); }

// sub_4ce130  (orig 0x4ce130, getter-chain)
uint8_t subsdk1_f_4ce130(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 2098); }

// sub_4ce150  (orig 0x4ce150, mov_ret)
uint32_t subsdk1_f_4ce150() { return 2112; }

// sub_4ce160  (orig 0x4ce160, getter-chain)
uint32_t subsdk1_f_4ce160(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 96))) + 2104); }

// sub_4ce170  (orig 0x4ce170, getter-chain)
uint32_t subsdk1_f_4ce170(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 96))) + 2108); }

// sub_4ce190  (orig 0x4ce190, mov_ret)
uint32_t subsdk1_f_4ce190() { return 2120; }

// sub_4ce1a0  (orig 0x4ce1a0, getter-chain)
uint8_t subsdk1_f_4ce1a0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 104))) + 2112); }

// sub_4ce1b0  (orig 0x4ce1b0, getter-chain)
uint8_t subsdk1_f_4ce1b0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 104))) + 2113); }

