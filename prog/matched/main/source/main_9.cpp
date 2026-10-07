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

// sub_f80510  (orig 0xf80510, ret_only)
void main_f_f80510() {}

// sub_f80520  (orig 0xf80520, ret_only)
void main_f_f80520() {}

// sub_f80530  (orig 0xf80530, ret_only)
void main_f_f80530() {}

// sub_f80540  (orig 0xf80540, ret_only)
void main_f_f80540() {}

// sub_f80590  (orig 0xf80590, ret_only)
void main_f_f80590() {}

// sub_f805a0  (orig 0xf805a0, copy2)
void main_f_f805a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f805b0  (orig 0xf805b0, copy2)
void main_f_f805b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f80610  (orig 0xf80610, ret_only)
void main_f_f80610() {}

// sub_f80910  (orig 0xf80910, ret_only)
void main_f_f80910() {}

// sub_f80920  (orig 0xf80920, copy2)
void main_f_f80920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f80930  (orig 0xf80930, copy2)
void main_f_f80930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f80950  (orig 0xf80950, ret_only)
void main_f_f80950() {}

// sub_f80960  (orig 0xf80960, copy2)
void main_f_f80960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f80970  (orig 0xf80970, copy2)
void main_f_f80970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f80980  (orig 0xf80980, straight)
void main_f_f80980(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 684) = 16;
    *(uint8_t*)((char*)(p0) + 680) = (uint8_t)k1;
}

// sub_f809a0  (orig 0xf809a0, ret_only)
void main_f_f809a0() {}

// sub_f809b0  (orig 0xf809b0, copy2)
void main_f_f809b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f809c0  (orig 0xf809c0, copy2)
void main_f_f809c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f809d0  (orig 0xf809d0, straight)
void main_f_f809d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 684) = 17;
    *(uint8_t*)((char*)(p0) + 680) = (uint8_t)k1;
}

// sub_f809f0  (orig 0xf809f0, ret_only)
void main_f_f809f0() {}

// sub_f80a00  (orig 0xf80a00, copy2)
void main_f_f80a00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f80a10  (orig 0xf80a10, copy2)
void main_f_f80a10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f80a50  (orig 0xf80a50, ret_only)
void main_f_f80a50() {}

// sub_f80a60  (orig 0xf80a60, copy2)
void main_f_f80a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f80a70  (orig 0xf80a70, copy2)
void main_f_f80a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f80a90  (orig 0xf80a90, ret_only)
void main_f_f80a90() {}

// sub_f80aa0  (orig 0xf80aa0, copy2)
void main_f_f80aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f80ab0  (orig 0xf80ab0, copy2)
void main_f_f80ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f80c50  (orig 0xf80c50, ret_only)
void main_f_f80c50() {}

// sub_f82980  (orig 0xf82980, const-field-set-store)
void main_f_f82980(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 128) = (uint32_t)(t1);
}

// sub_f82990  (orig 0xf82990, ret_only)
void main_f_f82990() {}

// sub_f829a0  (orig 0xf829a0, copy2)
void main_f_f829a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f829b0  (orig 0xf829b0, copy2)
void main_f_f829b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f82ae0  (orig 0xf82ae0, ret_only)
void main_f_f82ae0() {}

// sub_f82af0  (orig 0xf82af0, copy2)
void main_f_f82af0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f82b00  (orig 0xf82b00, copy2)
void main_f_f82b00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85410  (orig 0xf85410, ret_only)
void main_f_f85410() {}

// sub_f85420  (orig 0xf85420, ret_only)
void main_f_f85420() {}

// sub_f855a0  (orig 0xf855a0, mov_ret)
uint32_t main_f_f855a0() { return 0; }

// sub_f858c0  (orig 0xf858c0, ret_only)
void main_f_f858c0() {}

// sub_f858d0  (orig 0xf858d0, copy2)
void main_f_f858d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f858e0  (orig 0xf858e0, copy2)
void main_f_f858e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85920  (orig 0xf85920, ret_only)
void main_f_f85920() {}

// sub_f85930  (orig 0xf85930, copy2)
void main_f_f85930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85940  (orig 0xf85940, copy2)
void main_f_f85940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85950  (orig 0xf85950, straight)
void main_f_f85950(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 684) = 2;
    *(uint8_t*)((char*)(p0) + 680) = (uint8_t)k1;
}

// sub_f85970  (orig 0xf85970, ret_only)
void main_f_f85970() {}

// sub_f85980  (orig 0xf85980, copy2)
void main_f_f85980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85990  (orig 0xf85990, copy2)
void main_f_f85990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f859b0  (orig 0xf859b0, ret_only)
void main_f_f859b0() {}

// sub_f859c0  (orig 0xf859c0, copy2)
void main_f_f859c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f859d0  (orig 0xf859d0, copy2)
void main_f_f859d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85a40  (orig 0xf85a40, ret_only)
void main_f_f85a40() {}

// sub_f85a50  (orig 0xf85a50, copy2)
void main_f_f85a50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85a60  (orig 0xf85a60, copy2)
void main_f_f85a60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85a80  (orig 0xf85a80, ret_only)
void main_f_f85a80() {}

// sub_f85a90  (orig 0xf85a90, copy2)
void main_f_f85a90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85aa0  (orig 0xf85aa0, copy2)
void main_f_f85aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85ca0  (orig 0xf85ca0, ret_only)
void main_f_f85ca0() {}

// sub_f85cb0  (orig 0xf85cb0, ret_only)
void main_f_f85cb0() {}

// sub_f85cc0  (orig 0xf85cc0, ret_only)
void main_f_f85cc0() {}

// sub_f85cd0  (orig 0xf85cd0, ret_only)
void main_f_f85cd0() {}

// sub_f85d20  (orig 0xf85d20, ret_only)
void main_f_f85d20() {}

// sub_f85d30  (orig 0xf85d30, copy2)
void main_f_f85d30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85d40  (orig 0xf85d40, copy2)
void main_f_f85d40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f85da0  (orig 0xf85da0, ret_only)
void main_f_f85da0() {}

// sub_f860a0  (orig 0xf860a0, ret_only)
void main_f_f860a0() {}

// sub_f860b0  (orig 0xf860b0, copy2)
void main_f_f860b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f860c0  (orig 0xf860c0, copy2)
void main_f_f860c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f860e0  (orig 0xf860e0, ret_only)
void main_f_f860e0() {}

// sub_f860f0  (orig 0xf860f0, copy2)
void main_f_f860f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f86100  (orig 0xf86100, copy2)
void main_f_f86100(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f86120  (orig 0xf86120, ret_only)
void main_f_f86120() {}

// sub_f86130  (orig 0xf86130, copy2)
void main_f_f86130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f86140  (orig 0xf86140, copy2)
void main_f_f86140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f86180  (orig 0xf86180, ret_only)
void main_f_f86180() {}

// sub_f86190  (orig 0xf86190, copy2)
void main_f_f86190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f861a0  (orig 0xf861a0, copy2)
void main_f_f861a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f862e0  (orig 0xf862e0, ret_only)
void main_f_f862e0() {}

// sub_f862f0  (orig 0xf862f0, copy2)
void main_f_f862f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f86300  (orig 0xf86300, copy2)
void main_f_f86300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f86320  (orig 0xf86320, ret_only)
void main_f_f86320() {}

// sub_f86330  (orig 0xf86330, copy2)
void main_f_f86330(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f86340  (orig 0xf86340, copy2)
void main_f_f86340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f872f0  (orig 0xf872f0, ret_only)
void main_f_f872f0() {}

// sub_f87300  (orig 0xf87300, ret_only)
void main_f_f87300() {}

// sub_f875d0  (orig 0xf875d0, ret_only)
void main_f_f875d0() {}

// sub_f875e0  (orig 0xf875e0, copy2)
void main_f_f875e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f875f0  (orig 0xf875f0, copy2)
void main_f_f875f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f878d0  (orig 0xf878d0, ret_only)
void main_f_f878d0() {}

// sub_f878e0  (orig 0xf878e0, copy2)
void main_f_f878e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f878f0  (orig 0xf878f0, copy2)
void main_f_f878f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f881c0  (orig 0xf881c0, ret_only)
void main_f_f881c0() {}

// sub_f881d0  (orig 0xf881d0, ret_only)
void main_f_f881d0() {}

// sub_f884a0  (orig 0xf884a0, ret_only)
void main_f_f884a0() {}

// sub_f884b0  (orig 0xf884b0, copy2)
void main_f_f884b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f884c0  (orig 0xf884c0, copy2)
void main_f_f884c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f887a0  (orig 0xf887a0, ret_only)
void main_f_f887a0() {}

// sub_f887b0  (orig 0xf887b0, copy2)
void main_f_f887b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f887c0  (orig 0xf887c0, copy2)
void main_f_f887c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f88e70  (orig 0xf88e70, mov_ret)
uint32_t main_f_f88e70() { return 1; }

// sub_f89510  (orig 0xf89510, ret_only)
void main_f_f89510() {}

// sub_f89520  (orig 0xf89520, ret_only)
void main_f_f89520() {}

// sub_f89530  (orig 0xf89530, ret_only)
void main_f_f89530() {}

// sub_f89540  (orig 0xf89540, ret_only)
void main_f_f89540() {}

// sub_f89550  (orig 0xf89550, straight)
void main_f_f89550(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 508) = 1;
    *(uint8_t*)((char*)(p0) + 504) = (uint8_t)k1;
}

// sub_f89570  (orig 0xf89570, ret_only)
void main_f_f89570() {}

// sub_f89580  (orig 0xf89580, copy2)
void main_f_f89580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f89590  (orig 0xf89590, copy2)
void main_f_f89590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f89dd0  (orig 0xf89dd0, ret_only)
void main_f_f89dd0() {}

// sub_f8b610  (orig 0xf8b610, ret_only)
void main_f_f8b610() {}

// sub_f8b620  (orig 0xf8b620, ret_only)
void main_f_f8b620() {}

// sub_f8b630  (orig 0xf8b630, ret_only)
void main_f_f8b630() {}

// sub_f8b640  (orig 0xf8b640, ret_only)
void main_f_f8b640() {}

// sub_f8b670  (orig 0xf8b670, ret_only)
void main_f_f8b670() {}

// sub_f8b680  (orig 0xf8b680, copy2)
void main_f_f8b680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8b690  (orig 0xf8b690, copy2)
void main_f_f8b690(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8b6c0  (orig 0xf8b6c0, ret_only)
void main_f_f8b6c0() {}

// sub_f8b6d0  (orig 0xf8b6d0, copy2)
void main_f_f8b6d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8b6e0  (orig 0xf8b6e0, copy2)
void main_f_f8b6e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8b840  (orig 0xf8b840, ret_only)
void main_f_f8b840() {}

// sub_f8b850  (orig 0xf8b850, ret_only)
void main_f_f8b850() {}

// sub_f8b860  (orig 0xf8b860, ret_only)
void main_f_f8b860() {}

// sub_f8b870  (orig 0xf8b870, ret_only)
void main_f_f8b870() {}

// sub_f8b880  (orig 0xf8b880, ret_only)
void main_f_f8b880() {}

// sub_f8b890  (orig 0xf8b890, copy2)
void main_f_f8b890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8b8a0  (orig 0xf8b8a0, copy2)
void main_f_f8b8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8d810  (orig 0xf8d810, compare)
bool main_f_f8d810(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1600)) < (uint64_t)(128); }

// sub_f8db20  (orig 0xf8db20, ret_only)
void main_f_f8db20() {}

// sub_f8db30  (orig 0xf8db30, copy2)
void main_f_f8db30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8db40  (orig 0xf8db40, copy2)
void main_f_f8db40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8db50  (orig 0xf8db50, copy-chain-store)
void main_f_f8db50(void* a0, void* a1) {
    uint32_t t0 = *(uint32_t*)(char*)a1;
    uint64_t t1 = *(uint64_t*)(char*)a0;
    *(uint32_t*)((char*)(t1) + 1600) = (uint32_t)(t0);
}

// sub_f8db60  (orig 0xf8db60, ret_only)
void main_f_f8db60() {}

// sub_f8db70  (orig 0xf8db70, copy2)
void main_f_f8db70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8db80  (orig 0xf8db80, copy2)
void main_f_f8db80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8db90  (orig 0xf8db90, const-field-set-store)
void main_f_f8db90(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 1604) = (uint8_t)(t1);
}

// sub_f8dba0  (orig 0xf8dba0, ret_only)
void main_f_f8dba0() {}

// sub_f8dbb0  (orig 0xf8dbb0, copy2)
void main_f_f8dbb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8dbc0  (orig 0xf8dbc0, copy2)
void main_f_f8dbc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8eb30  (orig 0xf8eb30, ret_only)
void main_f_f8eb30() {}

// sub_f8eb40  (orig 0xf8eb40, ret_only)
void main_f_f8eb40() {}

// sub_f8eb50  (orig 0xf8eb50, ret_only)
void main_f_f8eb50() {}

// sub_f8eb60  (orig 0xf8eb60, ret_only)
void main_f_f8eb60() {}

// sub_f8ebb0  (orig 0xf8ebb0, ret_only)
void main_f_f8ebb0() {}

// sub_f8ebc0  (orig 0xf8ebc0, copy2)
void main_f_f8ebc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8ebd0  (orig 0xf8ebd0, copy2)
void main_f_f8ebd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8ebf0  (orig 0xf8ebf0, ret_only)
void main_f_f8ebf0() {}

// sub_f8ec00  (orig 0xf8ec00, copy2)
void main_f_f8ec00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8ec10  (orig 0xf8ec10, copy2)
void main_f_f8ec10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8f940  (orig 0xf8f940, mov_ret)
uint32_t main_f_f8f940() { return 0; }

// sub_f8fea0  (orig 0xf8fea0, ret_only)
void main_f_f8fea0() {}

// sub_f8feb0  (orig 0xf8feb0, ret_only)
void main_f_f8feb0() {}

// sub_f8fec0  (orig 0xf8fec0, ret_only)
void main_f_f8fec0() {}

// sub_f8fed0  (orig 0xf8fed0, ret_only)
void main_f_f8fed0() {}

// sub_f8ff20  (orig 0xf8ff20, ret_only)
void main_f_f8ff20() {}

// sub_f8ff30  (orig 0xf8ff30, copy2)
void main_f_f8ff30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f8ff40  (orig 0xf8ff40, copy2)
void main_f_f8ff40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f90080  (orig 0xf90080, ret_only)
void main_f_f90080() {}

// sub_f90090  (orig 0xf90090, copy2)
void main_f_f90090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f900a0  (orig 0xf900a0, copy2)
void main_f_f900a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f900b0  (orig 0xf900b0, straight)
void main_f_f900b0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 508) = 3;
    *(uint8_t*)((char*)(p0) + 504) = (uint8_t)k1;
}

// sub_f900d0  (orig 0xf900d0, ret_only)
void main_f_f900d0() {}

// sub_f900e0  (orig 0xf900e0, copy2)
void main_f_f900e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f900f0  (orig 0xf900f0, copy2)
void main_f_f900f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f90110  (orig 0xf90110, ret_only)
void main_f_f90110() {}

// sub_f90120  (orig 0xf90120, copy2)
void main_f_f90120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f90130  (orig 0xf90130, copy2)
void main_f_f90130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f90c30  (orig 0xf90c30, ret_only)
void main_f_f90c30() {}

// sub_f90c40  (orig 0xf90c40, ret_only)
void main_f_f90c40() {}

// sub_f90c50  (orig 0xf90c50, ret_only)
void main_f_f90c50() {}

// sub_f90c60  (orig 0xf90c60, ret_only)
void main_f_f90c60() {}

// sub_f90c70  (orig 0xf90c70, straight)
void main_f_f90c70(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 508) = 1;
    *(uint8_t*)((char*)(p0) + 504) = (uint8_t)k1;
}

// sub_f90c90  (orig 0xf90c90, ret_only)
void main_f_f90c90() {}

// sub_f90ca0  (orig 0xf90ca0, copy2)
void main_f_f90ca0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f90cb0  (orig 0xf90cb0, copy2)
void main_f_f90cb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f914f0  (orig 0xf914f0, ret_only)
void main_f_f914f0() {}

// sub_f91500  (orig 0xf91500, ret_only)
void main_f_f91500() {}

// sub_f91510  (orig 0xf91510, ret_only)
void main_f_f91510() {}

// sub_f91520  (orig 0xf91520, ret_only)
void main_f_f91520() {}

// sub_f91720  (orig 0xf91720, ret_only)
void main_f_f91720() {}

// sub_f91730  (orig 0xf91730, copy2)
void main_f_f91730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f91740  (orig 0xf91740, copy2)
void main_f_f91740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f96170  (orig 0xf96170, ret_only)
void main_f_f96170() {}

// sub_f96180  (orig 0xf96180, copy2)
void main_f_f96180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f96190  (orig 0xf96190, copy2)
void main_f_f96190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f9df80  (orig 0xf9df80, getter)
uint64_t main_f_f9df80(void* a0) { return *(uint64_t*)((char*)(a0) + 112); }

// sub_f9dfb0  (orig 0xf9dfb0, straight)
void main_f_f9dfb0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 144) = (uint8_t)k0;
}

// sub_f9dfc0  (orig 0xf9dfc0, straight)
void main_f_f9dfc0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 48) = (uint8_t)k0;
}

// sub_f9dfd0  (orig 0xf9dfd0, straight)
void main_f_f9dfd0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 145) = (uint8_t)k0;
}

// sub_f9dfe0  (orig 0xf9dfe0, straight)
void main_f_f9dfe0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 49) = (uint8_t)k0;
}

// sub_f9dff0  (orig 0xf9dff0, straight)
void main_f_f9dff0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 146) = (uint8_t)k0;
}

// sub_f9e000  (orig 0xf9e000, straight)
void main_f_f9e000(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 50) = (uint8_t)k0;
}

// sub_f9e010  (orig 0xf9e010, straight)
void main_f_f9e010(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 147) = (uint8_t)k0;
}

// sub_f9e020  (orig 0xf9e020, straight)
void main_f_f9e020(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 51) = (uint8_t)k0;
}

// sub_f9e750  (orig 0xf9e750, ret_only)
void main_f_f9e750() {}

// sub_f9e9d0  (orig 0xf9e9d0, getter)
uint64_t main_f_f9e9d0(void* a0) { return *(uint64_t*)((char*)(a0)); }

// sub_fa0180  (orig 0xfa0180, mov_ret)
uint32_t main_f_fa0180() { return 1; }

// sub_fa0790  (orig 0xfa0790, mov_ret)
uint32_t main_f_fa0790() { return 1; }

// sub_fa0e80  (orig 0xfa0e80, getter)
uint64_t main_f_fa0e80(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_fa0ff0  (orig 0xfa0ff0, mov_ret)
uint32_t main_f_fa0ff0() { return 1; }

// sub_fa1000  (orig 0xfa1000, indexed-getter)
uint64_t main_f_fa1000(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_fa1010  (orig 0xfa1010, indexed-getter)
uint64_t main_f_fa1010(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_fa31a0  (orig 0xfa31a0, ret_only)
void main_f_fa31a0() {}

// sub_fa39a0  (orig 0xfa39a0, ret_only)
void main_f_fa39a0() {}

// sub_fa4170  (orig 0xfa4170, getter)
uint64_t main_f_fa4170(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_fa42e0  (orig 0xfa42e0, mov_ret)
uint32_t main_f_fa42e0() { return 1; }

// sub_fa42f0  (orig 0xfa42f0, indexed-getter)
uint64_t main_f_fa42f0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_fa4300  (orig 0xfa4300, indexed-getter)
uint64_t main_f_fa4300(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_fa52d0  (orig 0xfa52d0, ret_only)
void main_f_fa52d0() {}

// sub_fa7880  (orig 0xfa7880, ret_only)
void main_f_fa7880() {}

// sub_fa8400  (orig 0xfa8400, ret_only)
void main_f_fa8400() {}

// sub_fa8410  (orig 0xfa8410, copy2)
void main_f_fa8410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8420  (orig 0xfa8420, copy2)
void main_f_fa8420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8440  (orig 0xfa8440, ret_only)
void main_f_fa8440() {}

// sub_fa8450  (orig 0xfa8450, copy2)
void main_f_fa8450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8460  (orig 0xfa8460, copy2)
void main_f_fa8460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8480  (orig 0xfa8480, ret_only)
void main_f_fa8480() {}

// sub_fa8490  (orig 0xfa8490, copy2)
void main_f_fa8490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa84a0  (orig 0xfa84a0, copy2)
void main_f_fa84a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa84d0  (orig 0xfa84d0, ret_only)
void main_f_fa84d0() {}

// sub_fa84e0  (orig 0xfa84e0, copy2)
void main_f_fa84e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa84f0  (orig 0xfa84f0, copy2)
void main_f_fa84f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8510  (orig 0xfa8510, ret_only)
void main_f_fa8510() {}

// sub_fa8520  (orig 0xfa8520, copy2)
void main_f_fa8520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8530  (orig 0xfa8530, copy2)
void main_f_fa8530(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8560  (orig 0xfa8560, ret_only)
void main_f_fa8560() {}

// sub_fa8570  (orig 0xfa8570, copy2)
void main_f_fa8570(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8580  (orig 0xfa8580, copy2)
void main_f_fa8580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa85a0  (orig 0xfa85a0, ret_only)
void main_f_fa85a0() {}

// sub_fa85b0  (orig 0xfa85b0, copy2)
void main_f_fa85b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa85c0  (orig 0xfa85c0, copy2)
void main_f_fa85c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8800  (orig 0xfa8800, ret_only)
void main_f_fa8800() {}

// sub_fa8810  (orig 0xfa8810, copy2)
void main_f_fa8810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8820  (orig 0xfa8820, copy2)
void main_f_fa8820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8830  (orig 0xfa8830, ret_only)
void main_f_fa8830() {}

// sub_fa8840  (orig 0xfa8840, ret_only)
void main_f_fa8840() {}

// sub_fa8850  (orig 0xfa8850, ret_only)
void main_f_fa8850() {}

// sub_fa8860  (orig 0xfa8860, ret_only)
void main_f_fa8860() {}

// sub_fa8890  (orig 0xfa8890, ret_only)
void main_f_fa8890() {}

// sub_fa88a0  (orig 0xfa88a0, copy2)
void main_f_fa88a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa88b0  (orig 0xfa88b0, copy2)
void main_f_fa88b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8900  (orig 0xfa8900, ret_only)
void main_f_fa8900() {}

// sub_fa8910  (orig 0xfa8910, copy2)
void main_f_fa8910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8920  (orig 0xfa8920, copy2)
void main_f_fa8920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8940  (orig 0xfa8940, ret_only)
void main_f_fa8940() {}

// sub_fa8950  (orig 0xfa8950, copy2)
void main_f_fa8950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8960  (orig 0xfa8960, copy2)
void main_f_fa8960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8970  (orig 0xfa8970, ret_only)
void main_f_fa8970() {}

// sub_fa8980  (orig 0xfa8980, ret_only)
void main_f_fa8980() {}

// sub_fa8990  (orig 0xfa8990, ret_only)
void main_f_fa8990() {}

// sub_fa89a0  (orig 0xfa89a0, ret_only)
void main_f_fa89a0() {}

// sub_fa89b0  (orig 0xfa89b0, ret_only)
void main_f_fa89b0() {}

// sub_fa89c0  (orig 0xfa89c0, ret_only)
void main_f_fa89c0() {}

// sub_fa89d0  (orig 0xfa89d0, ret_only)
void main_f_fa89d0() {}

// sub_fa89e0  (orig 0xfa89e0, ret_only)
void main_f_fa89e0() {}

// sub_fa8a10  (orig 0xfa8a10, ret_only)
void main_f_fa8a10() {}

// sub_fa8a20  (orig 0xfa8a20, copy2)
void main_f_fa8a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8a30  (orig 0xfa8a30, copy2)
void main_f_fa8a30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8a40  (orig 0xfa8a40, ret_only)
void main_f_fa8a40() {}

// sub_fa8a50  (orig 0xfa8a50, ret_only)
void main_f_fa8a50() {}

// sub_fa8a60  (orig 0xfa8a60, ret_only)
void main_f_fa8a60() {}

// sub_fa8a70  (orig 0xfa8a70, ret_only)
void main_f_fa8a70() {}

// sub_fa8b10  (orig 0xfa8b10, ret_only)
void main_f_fa8b10() {}

// sub_fa8b20  (orig 0xfa8b20, copy2)
void main_f_fa8b20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8b30  (orig 0xfa8b30, copy2)
void main_f_fa8b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fa8b40  (orig 0xfa8b40, ret_only)
void main_f_fa8b40() {}

// sub_fa8b50  (orig 0xfa8b50, ret_only)
void main_f_fa8b50() {}

// sub_fa8b60  (orig 0xfa8b60, ret_only)
void main_f_fa8b60() {}

// sub_fa8b70  (orig 0xfa8b70, ret_only)
void main_f_fa8b70() {}

// sub_faa890  (orig 0xfaa890, ret_only)
void main_f_faa890() {}

// sub_faacd0  (orig 0xfaacd0, const-field-set-store)
void main_f_faacd0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 7;
    *(uint32_t*)((char*)(t0) + 124) = (uint32_t)(t1);
}

// sub_faace0  (orig 0xfaace0, ret_only)
void main_f_faace0() {}

// sub_faacf0  (orig 0xfaacf0, copy2)
void main_f_faacf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faad00  (orig 0xfaad00, copy2)
void main_f_faad00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faad90  (orig 0xfaad90, ret_only)
void main_f_faad90() {}

// sub_faada0  (orig 0xfaada0, copy2)
void main_f_faada0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faadb0  (orig 0xfaadb0, copy2)
void main_f_faadb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faadd0  (orig 0xfaadd0, ret_only)
void main_f_faadd0() {}

// sub_faade0  (orig 0xfaade0, copy2)
void main_f_faade0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faadf0  (orig 0xfaadf0, copy2)
void main_f_faadf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faae70  (orig 0xfaae70, ret_only)
void main_f_faae70() {}

// sub_faae80  (orig 0xfaae80, copy2)
void main_f_faae80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faae90  (orig 0xfaae90, copy2)
void main_f_faae90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faaea0  (orig 0xfaaea0, ret_only)
void main_f_faaea0() {}

// sub_faaeb0  (orig 0xfaaeb0, ret_only)
void main_f_faaeb0() {}

// sub_faaec0  (orig 0xfaaec0, ret_only)
void main_f_faaec0() {}

// sub_faaed0  (orig 0xfaaed0, ret_only)
void main_f_faaed0() {}

// sub_faaf60  (orig 0xfaaf60, ret_only)
void main_f_faaf60() {}

// sub_faaf70  (orig 0xfaaf70, copy2)
void main_f_faaf70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faaf80  (orig 0xfaaf80, copy2)
void main_f_faaf80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faaf90  (orig 0xfaaf90, ret_only)
void main_f_faaf90() {}

// sub_faafa0  (orig 0xfaafa0, ret_only)
void main_f_faafa0() {}

// sub_faafb0  (orig 0xfaafb0, ret_only)
void main_f_faafb0() {}

// sub_faafc0  (orig 0xfaafc0, ret_only)
void main_f_faafc0() {}

// sub_fadd90  (orig 0xfadd90, ret_only)
void main_f_fadd90() {}

// sub_fae130  (orig 0xfae130, ret_only)
void main_f_fae130() {}

// sub_fae140  (orig 0xfae140, copy2)
void main_f_fae140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae150  (orig 0xfae150, copy2)
void main_f_fae150(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae170  (orig 0xfae170, ret_only)
void main_f_fae170() {}

// sub_fae180  (orig 0xfae180, copy2)
void main_f_fae180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae190  (orig 0xfae190, copy2)
void main_f_fae190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae1b0  (orig 0xfae1b0, ret_only)
void main_f_fae1b0() {}

// sub_fae1c0  (orig 0xfae1c0, copy2)
void main_f_fae1c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae1d0  (orig 0xfae1d0, copy2)
void main_f_fae1d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae200  (orig 0xfae200, ret_only)
void main_f_fae200() {}

// sub_fae210  (orig 0xfae210, copy2)
void main_f_fae210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae220  (orig 0xfae220, copy2)
void main_f_fae220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae240  (orig 0xfae240, ret_only)
void main_f_fae240() {}

// sub_fae250  (orig 0xfae250, copy2)
void main_f_fae250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae260  (orig 0xfae260, copy2)
void main_f_fae260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae290  (orig 0xfae290, ret_only)
void main_f_fae290() {}

// sub_fae2a0  (orig 0xfae2a0, copy2)
void main_f_fae2a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae2b0  (orig 0xfae2b0, copy2)
void main_f_fae2b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae2d0  (orig 0xfae2d0, ret_only)
void main_f_fae2d0() {}

// sub_fae2e0  (orig 0xfae2e0, copy2)
void main_f_fae2e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae2f0  (orig 0xfae2f0, copy2)
void main_f_fae2f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae4f0  (orig 0xfae4f0, ret_only)
void main_f_fae4f0() {}

// sub_fae500  (orig 0xfae500, ret_only)
void main_f_fae500() {}

// sub_fae510  (orig 0xfae510, ret_only)
void main_f_fae510() {}

// sub_fae520  (orig 0xfae520, ret_only)
void main_f_fae520() {}

// sub_fae530  (orig 0xfae530, ret_only)
void main_f_fae530() {}

// sub_fae540  (orig 0xfae540, ret_only)
void main_f_fae540() {}

// sub_fae550  (orig 0xfae550, ret_only)
void main_f_fae550() {}

// sub_fae560  (orig 0xfae560, ret_only)
void main_f_fae560() {}

// sub_fae730  (orig 0xfae730, ret_only)
void main_f_fae730() {}

// sub_fae740  (orig 0xfae740, copy2)
void main_f_fae740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae750  (orig 0xfae750, copy2)
void main_f_fae750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae760  (orig 0xfae760, ret_only)
void main_f_fae760() {}

// sub_fae770  (orig 0xfae770, ret_only)
void main_f_fae770() {}

// sub_fae780  (orig 0xfae780, ret_only)
void main_f_fae780() {}

// sub_fae790  (orig 0xfae790, ret_only)
void main_f_fae790() {}

// sub_fae7c0  (orig 0xfae7c0, ret_only)
void main_f_fae7c0() {}

// sub_fae7d0  (orig 0xfae7d0, copy2)
void main_f_fae7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae7e0  (orig 0xfae7e0, copy2)
void main_f_fae7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae7f0  (orig 0xfae7f0, ret_only)
void main_f_fae7f0() {}

// sub_fae800  (orig 0xfae800, ret_only)
void main_f_fae800() {}

// sub_fae810  (orig 0xfae810, ret_only)
void main_f_fae810() {}

// sub_fae820  (orig 0xfae820, ret_only)
void main_f_fae820() {}

// sub_fae850  (orig 0xfae850, ret_only)
void main_f_fae850() {}

// sub_fae860  (orig 0xfae860, copy2)
void main_f_fae860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae870  (orig 0xfae870, copy2)
void main_f_fae870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae880  (orig 0xfae880, ret_only)
void main_f_fae880() {}

// sub_fae890  (orig 0xfae890, ret_only)
void main_f_fae890() {}

// sub_fae8a0  (orig 0xfae8a0, ret_only)
void main_f_fae8a0() {}

// sub_fae8b0  (orig 0xfae8b0, ret_only)
void main_f_fae8b0() {}

// sub_fae8e0  (orig 0xfae8e0, ret_only)
void main_f_fae8e0() {}

// sub_fae8f0  (orig 0xfae8f0, copy2)
void main_f_fae8f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae900  (orig 0xfae900, copy2)
void main_f_fae900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fae910  (orig 0xfae910, ret_only)
void main_f_fae910() {}

// sub_fae920  (orig 0xfae920, ret_only)
void main_f_fae920() {}

// sub_fae930  (orig 0xfae930, ret_only)
void main_f_fae930() {}

// sub_fae940  (orig 0xfae940, ret_only)
void main_f_fae940() {}

// sub_fae9e0  (orig 0xfae9e0, ret_only)
void main_f_fae9e0() {}

// sub_fae9f0  (orig 0xfae9f0, copy2)
void main_f_fae9f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faea00  (orig 0xfaea00, copy2)
void main_f_faea00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faea50  (orig 0xfaea50, ret_only)
void main_f_faea50() {}

// sub_faea60  (orig 0xfaea60, copy2)
void main_f_faea60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faea70  (orig 0xfaea70, copy2)
void main_f_faea70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faea90  (orig 0xfaea90, ret_only)
void main_f_faea90() {}

// sub_faeaa0  (orig 0xfaeaa0, copy2)
void main_f_faeaa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faeab0  (orig 0xfaeab0, copy2)
void main_f_faeab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faeae0  (orig 0xfaeae0, ret_only)
void main_f_faeae0() {}

// sub_faeaf0  (orig 0xfaeaf0, copy2)
void main_f_faeaf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faeb00  (orig 0xfaeb00, copy2)
void main_f_faeb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faeb50  (orig 0xfaeb50, ret_only)
void main_f_faeb50() {}

// sub_faeb60  (orig 0xfaeb60, copy2)
void main_f_faeb60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faeb70  (orig 0xfaeb70, copy2)
void main_f_faeb70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faeb90  (orig 0xfaeb90, ret_only)
void main_f_faeb90() {}

// sub_faeba0  (orig 0xfaeba0, copy2)
void main_f_faeba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faebb0  (orig 0xfaebb0, copy2)
void main_f_faebb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faec50  (orig 0xfaec50, ret_only)
void main_f_faec50() {}

// sub_faec60  (orig 0xfaec60, copy2)
void main_f_faec60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faec70  (orig 0xfaec70, copy2)
void main_f_faec70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faec80  (orig 0xfaec80, ret_only)
void main_f_faec80() {}

// sub_faec90  (orig 0xfaec90, ret_only)
void main_f_faec90() {}

// sub_faeca0  (orig 0xfaeca0, ret_only)
void main_f_faeca0() {}

// sub_faecb0  (orig 0xfaecb0, ret_only)
void main_f_faecb0() {}

// sub_faed50  (orig 0xfaed50, ret_only)
void main_f_faed50() {}

// sub_faed60  (orig 0xfaed60, copy2)
void main_f_faed60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faed70  (orig 0xfaed70, copy2)
void main_f_faed70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_faed80  (orig 0xfaed80, ret_only)
void main_f_faed80() {}

// sub_faed90  (orig 0xfaed90, ret_only)
void main_f_faed90() {}

// sub_faeda0  (orig 0xfaeda0, ret_only)
void main_f_faeda0() {}

// sub_faedb0  (orig 0xfaedb0, ret_only)
void main_f_faedb0() {}

// sub_fb0bf0  (orig 0xfb0bf0, ret_only)
void main_f_fb0bf0() {}

// sub_fb1040  (orig 0xfb1040, ret_only)
void main_f_fb1040() {}

// sub_fb1050  (orig 0xfb1050, copy2)
void main_f_fb1050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1060  (orig 0xfb1060, copy2)
void main_f_fb1060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1070  (orig 0xfb1070, const-field-set-store)
void main_f_fb1070(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 5;
    *(uint32_t*)((char*)(t0) + 124) = (uint32_t)(t1);
}

// sub_fb1080  (orig 0xfb1080, ret_only)
void main_f_fb1080() {}

// sub_fb1090  (orig 0xfb1090, copy2)
void main_f_fb1090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb10a0  (orig 0xfb10a0, copy2)
void main_f_fb10a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1130  (orig 0xfb1130, ret_only)
void main_f_fb1130() {}

// sub_fb1140  (orig 0xfb1140, copy2)
void main_f_fb1140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1150  (orig 0xfb1150, copy2)
void main_f_fb1150(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1170  (orig 0xfb1170, ret_only)
void main_f_fb1170() {}

// sub_fb1180  (orig 0xfb1180, copy2)
void main_f_fb1180(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1190  (orig 0xfb1190, copy2)
void main_f_fb1190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1220  (orig 0xfb1220, ret_only)
void main_f_fb1220() {}

// sub_fb1230  (orig 0xfb1230, copy2)
void main_f_fb1230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1240  (orig 0xfb1240, copy2)
void main_f_fb1240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1250  (orig 0xfb1250, ret_only)
void main_f_fb1250() {}

// sub_fb1260  (orig 0xfb1260, ret_only)
void main_f_fb1260() {}

// sub_fb1270  (orig 0xfb1270, ret_only)
void main_f_fb1270() {}

// sub_fb1280  (orig 0xfb1280, ret_only)
void main_f_fb1280() {}

// sub_fb12b0  (orig 0xfb12b0, ret_only)
void main_f_fb12b0() {}

// sub_fb12c0  (orig 0xfb12c0, copy2)
void main_f_fb12c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb12d0  (orig 0xfb12d0, copy2)
void main_f_fb12d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb12f0  (orig 0xfb12f0, ret_only)
void main_f_fb12f0() {}

// sub_fb1300  (orig 0xfb1300, copy2)
void main_f_fb1300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1310  (orig 0xfb1310, copy2)
void main_f_fb1310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1330  (orig 0xfb1330, ret_only)
void main_f_fb1330() {}

// sub_fb1340  (orig 0xfb1340, copy2)
void main_f_fb1340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1350  (orig 0xfb1350, copy2)
void main_f_fb1350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb13d0  (orig 0xfb13d0, ret_only)
void main_f_fb13d0() {}

// sub_fb13e0  (orig 0xfb13e0, copy2)
void main_f_fb13e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb13f0  (orig 0xfb13f0, copy2)
void main_f_fb13f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1410  (orig 0xfb1410, ret_only)
void main_f_fb1410() {}

// sub_fb1420  (orig 0xfb1420, copy2)
void main_f_fb1420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1430  (orig 0xfb1430, copy2)
void main_f_fb1430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb14b0  (orig 0xfb14b0, ret_only)
void main_f_fb14b0() {}

// sub_fb14c0  (orig 0xfb14c0, copy2)
void main_f_fb14c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb14d0  (orig 0xfb14d0, copy2)
void main_f_fb14d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb14f0  (orig 0xfb14f0, ret_only)
void main_f_fb14f0() {}

// sub_fb1500  (orig 0xfb1500, copy2)
void main_f_fb1500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1510  (orig 0xfb1510, copy2)
void main_f_fb1510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb15a0  (orig 0xfb15a0, ret_only)
void main_f_fb15a0() {}

// sub_fb15b0  (orig 0xfb15b0, copy2)
void main_f_fb15b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb15c0  (orig 0xfb15c0, copy2)
void main_f_fb15c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb16c0  (orig 0xfb16c0, ret_only)
void main_f_fb16c0() {}

// sub_fb16d0  (orig 0xfb16d0, copy2)
void main_f_fb16d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb16e0  (orig 0xfb16e0, copy2)
void main_f_fb16e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1700  (orig 0xfb1700, ret_only)
void main_f_fb1700() {}

// sub_fb1710  (orig 0xfb1710, copy2)
void main_f_fb1710(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1720  (orig 0xfb1720, copy2)
void main_f_fb1720(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1730  (orig 0xfb1730, const-field-set-store)
void main_f_fb1730(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 12;
    *(uint32_t*)((char*)(t0) + 124) = (uint32_t)(t1);
}

// sub_fb1740  (orig 0xfb1740, ret_only)
void main_f_fb1740() {}

// sub_fb1750  (orig 0xfb1750, copy2)
void main_f_fb1750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1760  (orig 0xfb1760, copy2)
void main_f_fb1760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb17f0  (orig 0xfb17f0, ret_only)
void main_f_fb17f0() {}

// sub_fb1800  (orig 0xfb1800, copy2)
void main_f_fb1800(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1810  (orig 0xfb1810, copy2)
void main_f_fb1810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1830  (orig 0xfb1830, ret_only)
void main_f_fb1830() {}

// sub_fb1840  (orig 0xfb1840, copy2)
void main_f_fb1840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1850  (orig 0xfb1850, copy2)
void main_f_fb1850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1950  (orig 0xfb1950, ret_only)
void main_f_fb1950() {}

// sub_fb1960  (orig 0xfb1960, copy2)
void main_f_fb1960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1970  (orig 0xfb1970, copy2)
void main_f_fb1970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb19f0  (orig 0xfb19f0, ret_only)
void main_f_fb19f0() {}

// sub_fb1a00  (orig 0xfb1a00, copy2)
void main_f_fb1a00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1a10  (orig 0xfb1a10, copy2)
void main_f_fb1a10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1a30  (orig 0xfb1a30, ret_only)
void main_f_fb1a30() {}

// sub_fb1a40  (orig 0xfb1a40, copy2)
void main_f_fb1a40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1a50  (orig 0xfb1a50, copy2)
void main_f_fb1a50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1b10  (orig 0xfb1b10, ret_only)
void main_f_fb1b10() {}

// sub_fb1b20  (orig 0xfb1b20, copy2)
void main_f_fb1b20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1b30  (orig 0xfb1b30, copy2)
void main_f_fb1b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1b40  (orig 0xfb1b40, ret_only)
void main_f_fb1b40() {}

// sub_fb1b50  (orig 0xfb1b50, ret_only)
void main_f_fb1b50() {}

// sub_fb1b60  (orig 0xfb1b60, ret_only)
void main_f_fb1b60() {}

// sub_fb1b70  (orig 0xfb1b70, ret_only)
void main_f_fb1b70() {}

// sub_fb1c00  (orig 0xfb1c00, ret_only)
void main_f_fb1c00() {}

// sub_fb1c10  (orig 0xfb1c10, copy2)
void main_f_fb1c10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1c20  (orig 0xfb1c20, copy2)
void main_f_fb1c20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb1c30  (orig 0xfb1c30, ret_only)
void main_f_fb1c30() {}

// sub_fb1c40  (orig 0xfb1c40, ret_only)
void main_f_fb1c40() {}

// sub_fb1c50  (orig 0xfb1c50, ret_only)
void main_f_fb1c50() {}

// sub_fb1c60  (orig 0xfb1c60, ret_only)
void main_f_fb1c60() {}

// sub_fb2770  (orig 0xfb2770, ret_only)
void main_f_fb2770() {}

// sub_fb2ab0  (orig 0xfb2ab0, ret_only)
void main_f_fb2ab0() {}

// sub_fb2ac0  (orig 0xfb2ac0, copy2)
void main_f_fb2ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb2ad0  (orig 0xfb2ad0, copy2)
void main_f_fb2ad0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb2af0  (orig 0xfb2af0, ret_only)
void main_f_fb2af0() {}

// sub_fb2b00  (orig 0xfb2b00, copy2)
void main_f_fb2b00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb2b10  (orig 0xfb2b10, copy2)
void main_f_fb2b10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb2b20  (orig 0xfb2b20, ret_only)
void main_f_fb2b20() {}

// sub_fb2b30  (orig 0xfb2b30, ret_only)
void main_f_fb2b30() {}

// sub_fb2b40  (orig 0xfb2b40, ret_only)
void main_f_fb2b40() {}

// sub_fb2b50  (orig 0xfb2b50, ret_only)
void main_f_fb2b50() {}

// sub_fb2be0  (orig 0xfb2be0, ret_only)
void main_f_fb2be0() {}

// sub_fb2bf0  (orig 0xfb2bf0, copy2)
void main_f_fb2bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb2c00  (orig 0xfb2c00, copy2)
void main_f_fb2c00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb2c10  (orig 0xfb2c10, ret_only)
void main_f_fb2c10() {}

// sub_fb2c20  (orig 0xfb2c20, ret_only)
void main_f_fb2c20() {}

// sub_fb2c30  (orig 0xfb2c30, ret_only)
void main_f_fb2c30() {}

// sub_fb2c40  (orig 0xfb2c40, ret_only)
void main_f_fb2c40() {}

// sub_fb2cd0  (orig 0xfb2cd0, ret_only)
void main_f_fb2cd0() {}

// sub_fb2ce0  (orig 0xfb2ce0, copy2)
void main_f_fb2ce0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb2cf0  (orig 0xfb2cf0, copy2)
void main_f_fb2cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb2d00  (orig 0xfb2d00, ret_only)
void main_f_fb2d00() {}

// sub_fb2d10  (orig 0xfb2d10, ret_only)
void main_f_fb2d10() {}

// sub_fb2d20  (orig 0xfb2d20, ret_only)
void main_f_fb2d20() {}

// sub_fb2d30  (orig 0xfb2d30, ret_only)
void main_f_fb2d30() {}

// sub_fb69a0  (orig 0xfb69a0, ret_only)
void main_f_fb69a0() {}

// sub_fb7930  (orig 0xfb7930, ret_only)
void main_f_fb7930() {}

// sub_fb7940  (orig 0xfb7940, copy2)
void main_f_fb7940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb7950  (orig 0xfb7950, copy2)
void main_f_fb7950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb7980  (orig 0xfb7980, ret_only)
void main_f_fb7980() {}

// sub_fb7990  (orig 0xfb7990, copy2)
void main_f_fb7990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb79a0  (orig 0xfb79a0, copy2)
void main_f_fb79a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fb7a10  (orig 0xfb7a10, ret_only)
void main_f_fb7a10() {}

// sub_fb7ce0  (orig 0xfb7ce0, mov_ret)
uint32_t main_f_fb7ce0() { return 0; }

// sub_fb9120  (orig 0xfb9120, setter)
void main_f_fb9120(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 340) = a1; }

// sub_fb9130  (orig 0xfb9130, straight)
void main_f_fb9130(void* a0) {
    *(uint32_t*)((char*)(a0) + 340) = -1;
}

// sub_fb9aa0  (orig 0xfb9aa0, mov_ret)
uint32_t main_f_fb9aa0() { return 1; }

// sub_fc1c40  (orig 0xfc1c40, mov_ret)
uint32_t main_f_fc1c40() { return 1; }

// sub_fc1c50  (orig 0xfc1c50, ret_only)
void main_f_fc1c50() {}

// sub_fc1d10  (orig 0xfc1d10, ret_only)
void main_f_fc1d10() {}

// sub_fc2d00  (orig 0xfc2d00, mov_ret)
uint32_t main_f_fc2d00() { return 1; }

// sub_fc59d0  (orig 0xfc59d0, getter)
uint64_t main_f_fc59d0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_fc5b40  (orig 0xfc5b40, mov_ret)
uint32_t main_f_fc5b40() { return 1; }

// sub_fc5b50  (orig 0xfc5b50, indexed-getter)
uint64_t main_f_fc5b50(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_fc5b60  (orig 0xfc5b60, indexed-getter)
uint64_t main_f_fc5b60(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_fcafe0  (orig 0xfcafe0, compare)
bool main_f_fcafe0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 224)) == (uint64_t)(5); }

// sub_fcd060  (orig 0xfcd060, setter)
void main_f_fcd060(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1792) = a1; }

// sub_fcd440  (orig 0xfcd440, setter)
void main_f_fcd440(void* a0) { *(uint64_t*)((char*)(a0) + 1512) = 0; }

// sub_fcd610  (orig 0xfcd610, ret_only)
void main_f_fcd610() {}

// sub_fcd620  (orig 0xfcd620, mov_ret)
uint32_t main_f_fcd620() { return 1; }

// sub_fcd630  (orig 0xfcd630, ret_only)
void main_f_fcd630() {}

// sub_fcd740  (orig 0xfcd740, ret_only)
void main_f_fcd740() {}

// sub_fcd750  (orig 0xfcd750, copy2)
void main_f_fcd750(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fcd760  (orig 0xfcd760, copy2)
void main_f_fcd760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fcf8f0  (orig 0xfcf8f0, ret_only)
void main_f_fcf8f0() {}

// sub_fcf9e0  (orig 0xfcf9e0, ret_only)
void main_f_fcf9e0() {}

// sub_fcfad0  (orig 0xfcfad0, ret_only)
void main_f_fcfad0() {}

// sub_fcfbc0  (orig 0xfcfbc0, ret_only)
void main_f_fcfbc0() {}

// sub_fcfcb0  (orig 0xfcfcb0, ret_only)
void main_f_fcfcb0() {}

// sub_fcfda0  (orig 0xfcfda0, ret_only)
void main_f_fcfda0() {}

// sub_fd35d0  (orig 0xfd35d0, ret_only)
void main_f_fd35d0() {}

// sub_fd35e0  (orig 0xfd35e0, copy2)
void main_f_fd35e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd35f0  (orig 0xfd35f0, copy2)
void main_f_fd35f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd3620  (orig 0xfd3620, ret_only)
void main_f_fd3620() {}

// sub_fd3630  (orig 0xfd3630, copy2)
void main_f_fd3630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd3640  (orig 0xfd3640, copy2)
void main_f_fd3640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd3660  (orig 0xfd3660, ret_only)
void main_f_fd3660() {}

// sub_fd3670  (orig 0xfd3670, copy2)
void main_f_fd3670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd3680  (orig 0xfd3680, copy2)
void main_f_fd3680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd36a0  (orig 0xfd36a0, ret_only)
void main_f_fd36a0() {}

// sub_fd36b0  (orig 0xfd36b0, copy2)
void main_f_fd36b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd36c0  (orig 0xfd36c0, copy2)
void main_f_fd36c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd36e0  (orig 0xfd36e0, ret_only)
void main_f_fd36e0() {}

// sub_fd36f0  (orig 0xfd36f0, copy2)
void main_f_fd36f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd3700  (orig 0xfd3700, copy2)
void main_f_fd3700(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd3720  (orig 0xfd3720, ret_only)
void main_f_fd3720() {}

// sub_fd3730  (orig 0xfd3730, copy2)
void main_f_fd3730(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd3740  (orig 0xfd3740, copy2)
void main_f_fd3740(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_fd37c0  (orig 0xfd37c0, ret_only)
void main_f_fd37c0() {}

// sub_fd38b0  (orig 0xfd38b0, ret_only)
void main_f_fd38b0() {}

// sub_fd39a0  (orig 0xfd39a0, ret_only)
void main_f_fd39a0() {}

// sub_fd3e20  (orig 0xfd3e20, straight)
void main_f_fd3e20(void* a0) {
    *(uint32_t*)((char*)(a0) + 2864) = 999;
    *(uint8_t*)((char*)(a0) + 2868) = 0;
}

// sub_fd43c0  (orig 0xfd43c0, compare)
bool main_f_fd43c0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1784)) == (uint64_t)(5); }

// sub_fd4770  (orig 0xfd4770, getter)
uint64_t main_f_fd4770(void* a0) { return *(uint64_t*)((char*)(a0) + 2864); }

// sub_fd6420  (orig 0xfd6420, ret_only)
void main_f_fd6420() {}

// sub_fd64f0  (orig 0xfd64f0, ret_only)
void main_f_fd64f0() {}

// sub_fd6510  (orig 0xfd6510, const-field-set-store)
void main_f_fd6510(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd6590  (orig 0xfd6590, ret_only)
void main_f_fd6590() {}

// sub_fd6630  (orig 0xfd6630, ret_only)
void main_f_fd6630() {}

// sub_fd6650  (orig 0xfd6650, const-field-set-store)
void main_f_fd6650(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd66d0  (orig 0xfd66d0, ret_only)
void main_f_fd66d0() {}

// sub_fd66f0  (orig 0xfd66f0, const-field-set-store)
void main_f_fd66f0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd6770  (orig 0xfd6770, ret_only)
void main_f_fd6770() {}

// sub_fd6790  (orig 0xfd6790, const-field-set-store)
void main_f_fd6790(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd6810  (orig 0xfd6810, ret_only)
void main_f_fd6810() {}

// sub_fd6830  (orig 0xfd6830, const-field-set-store)
void main_f_fd6830(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd68b0  (orig 0xfd68b0, ret_only)
void main_f_fd68b0() {}

// sub_fd6950  (orig 0xfd6950, ret_only)
void main_f_fd6950() {}

// sub_fd6970  (orig 0xfd6970, const-field-set-store)
void main_f_fd6970(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd69f0  (orig 0xfd69f0, ret_only)
void main_f_fd69f0() {}

// sub_fd6a10  (orig 0xfd6a10, const-field-set-store)
void main_f_fd6a10(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd6a90  (orig 0xfd6a90, ret_only)
void main_f_fd6a90() {}

// sub_fd6ab0  (orig 0xfd6ab0, const-field-set-store)
void main_f_fd6ab0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd6b30  (orig 0xfd6b30, ret_only)
void main_f_fd6b30() {}

// sub_fd6b50  (orig 0xfd6b50, const-field-set-store)
void main_f_fd6b50(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd6bd0  (orig 0xfd6bd0, ret_only)
void main_f_fd6bd0() {}

// sub_fd6bf0  (orig 0xfd6bf0, const-field-set-store)
void main_f_fd6bf0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd6c70  (orig 0xfd6c70, ret_only)
void main_f_fd6c70() {}

// sub_fd6c90  (orig 0xfd6c90, const-field-set-store)
void main_f_fd6c90(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd6d10  (orig 0xfd6d10, ret_only)
void main_f_fd6d10() {}

// sub_fd6db0  (orig 0xfd6db0, ret_only)
void main_f_fd6db0() {}

// sub_fd6dd0  (orig 0xfd6dd0, const-field-set-store)
void main_f_fd6dd0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd6e50  (orig 0xfd6e50, ret_only)
void main_f_fd6e50() {}

// sub_fd6e70  (orig 0xfd6e70, const-field-set-store)
void main_f_fd6e70(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd6ef0  (orig 0xfd6ef0, ret_only)
void main_f_fd6ef0() {}

// sub_fd6f10  (orig 0xfd6f10, const-field-set-store)
void main_f_fd6f10(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd6f90  (orig 0xfd6f90, ret_only)
void main_f_fd6f90() {}

// sub_fd7030  (orig 0xfd7030, ret_only)
void main_f_fd7030() {}

// sub_fd7050  (orig 0xfd7050, const-field-set-store)
void main_f_fd7050(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd70d0  (orig 0xfd70d0, ret_only)
void main_f_fd70d0() {}

// sub_fd70f0  (orig 0xfd70f0, const-field-set-store)
void main_f_fd70f0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd7170  (orig 0xfd7170, ret_only)
void main_f_fd7170() {}

// sub_fd7190  (orig 0xfd7190, const-field-set-store)
void main_f_fd7190(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd7210  (orig 0xfd7210, ret_only)
void main_f_fd7210() {}

// sub_fd7230  (orig 0xfd7230, const-field-set-store)
void main_f_fd7230(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd72b0  (orig 0xfd72b0, ret_only)
void main_f_fd72b0() {}

// sub_fd72d0  (orig 0xfd72d0, const-field-set-store)
void main_f_fd72d0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd7350  (orig 0xfd7350, ret_only)
void main_f_fd7350() {}

// sub_fd7370  (orig 0xfd7370, const-field-set-store)
void main_f_fd7370(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd73f0  (orig 0xfd73f0, ret_only)
void main_f_fd73f0() {}

// sub_fd7410  (orig 0xfd7410, const-field-set-store)
void main_f_fd7410(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd7420  (orig 0xfd7420, ret_only)
void main_f_fd7420() {}

// sub_fd74a0  (orig 0xfd74a0, ret_only)
void main_f_fd74a0() {}

// sub_fd74c0  (orig 0xfd74c0, const-field-set-store)
void main_f_fd74c0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd7540  (orig 0xfd7540, ret_only)
void main_f_fd7540() {}

// sub_fd75e0  (orig 0xfd75e0, ret_only)
void main_f_fd75e0() {}

// sub_fd7600  (orig 0xfd7600, const-field-set-store)
void main_f_fd7600(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd7680  (orig 0xfd7680, ret_only)
void main_f_fd7680() {}

// sub_fd76a0  (orig 0xfd76a0, const-field-set-store)
void main_f_fd76a0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd7720  (orig 0xfd7720, ret_only)
void main_f_fd7720() {}

// sub_fd7740  (orig 0xfd7740, const-field-set-store)
void main_f_fd7740(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd77c0  (orig 0xfd77c0, ret_only)
void main_f_fd77c0() {}

// sub_fd77e0  (orig 0xfd77e0, const-field-set-store)
void main_f_fd77e0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 4;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd7860  (orig 0xfd7860, ret_only)
void main_f_fd7860() {}

// sub_fd7880  (orig 0xfd7880, const-field-set-store)
void main_f_fd7880(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 5;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd7900  (orig 0xfd7900, ret_only)
void main_f_fd7900() {}

// sub_fd7920  (orig 0xfd7920, const-field-set-store)
void main_f_fd7920(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd79a0  (orig 0xfd79a0, ret_only)
void main_f_fd79a0() {}

// sub_fd7a40  (orig 0xfd7a40, ret_only)
void main_f_fd7a40() {}

// sub_fd7a60  (orig 0xfd7a60, const-field-set-store)
void main_f_fd7a60(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd7ae0  (orig 0xfd7ae0, ret_only)
void main_f_fd7ae0() {}

// sub_fd7b00  (orig 0xfd7b00, const-field-set-store)
void main_f_fd7b00(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd7b80  (orig 0xfd7b80, ret_only)
void main_f_fd7b80() {}

// sub_fd7ba0  (orig 0xfd7ba0, const-field-set-store)
void main_f_fd7ba0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd7c20  (orig 0xfd7c20, ret_only)
void main_f_fd7c20() {}

// sub_fd7c40  (orig 0xfd7c40, const-field-set-store)
void main_f_fd7c40(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd7cc0  (orig 0xfd7cc0, ret_only)
void main_f_fd7cc0() {}

// sub_fd7d60  (orig 0xfd7d60, ret_only)
void main_f_fd7d60() {}

// sub_fd7d80  (orig 0xfd7d80, const-field-set-store)
void main_f_fd7d80(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint32_t*)((char*)(t0) + 2864) = (uint32_t)(t1);
}

// sub_fd7e00  (orig 0xfd7e00, ret_only)
void main_f_fd7e00() {}

// sub_fd7e20  (orig 0xfd7e20, const-field-set-store)
void main_f_fd7e20(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2868) = (uint8_t)(t1);
}

// sub_fd7f20  (orig 0xfd7f20, setter)
void main_f_fd7f20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_fd7f30  (orig 0xfd7f30, setter)
void main_f_fd7f30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 104) = a1; }

// sub_fd7fa0  (orig 0xfd7fa0, getter-chain)
uint64_t main_f_fd7fa0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 104))) + 88); }

// sub_fd80a0  (orig 0xfd80a0, setter)
void main_f_fd80a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 120) = a1; }

// sub_fd80b0  (orig 0xfd80b0, getter)
uint64_t main_f_fd80b0(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_fd80d0  (orig 0xfd80d0, getter-chain)
uint32_t main_f_fd80d0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 104))) + 144); }

// sub_fd8130  (orig 0xfd8130, compare-pred)
bool main_f_fd8130(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)((char*)a0 + 96)) + 84)) == (uint32_t)(2); }

// sub_fd8180  (orig 0xfd8180, getter-chain)
uint8_t main_f_fd8180(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 104))) + 96); }

// sub_fd8770  (orig 0xfd8770, getter-chain)
uint8_t main_f_fd8770(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 104))) + 3488); }

// sub_fd87a0  (orig 0xfd87a0, straight)
void* main_f_fd87a0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 104));
    return (char*)(p0) + 3558;
}

// sub_fe0ba0  (orig 0xfe0ba0, ret_only)
void main_f_fe0ba0() {}

// sub_fe28b0  (orig 0xfe28b0, ret_only)
void main_f_fe28b0() {}

// sub_fe7600  (orig 0xfe7600, ret_only)
void main_f_fe7600() {}

// sub_fe7610  (orig 0xfe7610, ret_only)
void main_f_fe7610() {}

// sub_fe7620  (orig 0xfe7620, straight)
void main_f_fe7620(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 145) = (uint8_t)k0;
}

// sub_fe7630  (orig 0xfe7630, straight)
void main_f_fe7630(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 49) = (uint8_t)k0;
}

// sub_fe7990  (orig 0xfe7990, straight)
void main_f_fe7990(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 146) = (uint8_t)k0;
}

// sub_fe79a0  (orig 0xfe79a0, straight)
void main_f_fe79a0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 34) = (uint8_t)k0;
}

// sub_fe7bc0  (orig 0xfe7bc0, ret_only)
void main_f_fe7bc0() {}

// sub_fe7bd0  (orig 0xfe7bd0, ret_only)
void main_f_fe7bd0() {}

// sub_fe7be0  (orig 0xfe7be0, ret_only)
void main_f_fe7be0() {}

// sub_fe7bf0  (orig 0xfe7bf0, ret_only)
void main_f_fe7bf0() {}

// sub_fe7c00  (orig 0xfe7c00, ret_only)
void main_f_fe7c00() {}

// sub_fe7c10  (orig 0xfe7c10, ret_only)
void main_f_fe7c10() {}

// sub_fe9600  (orig 0xfe9600, ret_only)
void main_f_fe9600() {}

// sub_fe96b0  (orig 0xfe96b0, ret_only)
void main_f_fe96b0() {}

// sub_fe96c0  (orig 0xfe96c0, struct-copy)
void main_f_fe96c0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_fe96e0  (orig 0xfe96e0, struct-copy)
void main_f_fe96e0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_fe97e0  (orig 0xfe97e0, ret_only)
void main_f_fe97e0() {}

// sub_fe97f0  (orig 0xfe97f0, struct-copy)
void main_f_fe97f0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_fe9810  (orig 0xfe9810, struct-copy)
void main_f_fe9810(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_fe9b10  (orig 0xfe9b10, getter)
uint64_t main_f_fe9b10(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_feadf0  (orig 0xfeadf0, setter)
void main_f_feadf0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_feaf50  (orig 0xfeaf50, ret_only)
void main_f_feaf50() {}

// sub_feb000  (orig 0xfeb000, ret_only)
void main_f_feb000() {}

// sub_feb010  (orig 0xfeb010, mov_ret)
uint64_t main_f_feb010(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_feb020  (orig 0xfeb020, straight)
uint32_t main_f_feb020(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_feb200  (orig 0xfeb200, mov_ret)
uint32_t main_f_feb200() { return 1; }

// sub_feb2b0  (orig 0xfeb2b0, getter)
uint32_t main_f_feb2b0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_feb2c0  (orig 0xfeb2c0, mov_ret)
uint32_t main_f_feb2c0() { return 1; }

// sub_feb810  (orig 0xfeb810, setter)
void main_f_feb810(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_febd10  (orig 0xfebd10, mov_ret)
uint32_t main_f_febd10() { return 1; }

// sub_febdc0  (orig 0xfebdc0, getter)
uint32_t main_f_febdc0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_febdd0  (orig 0xfebdd0, mov_ret)
uint32_t main_f_febdd0() { return 1; }

// sub_fec290  (orig 0xfec290, setter)
void main_f_fec290(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_fec3f0  (orig 0xfec3f0, ret_only)
void main_f_fec3f0() {}

// sub_fec4a0  (orig 0xfec4a0, ret_only)
void main_f_fec4a0() {}

// sub_fec4b0  (orig 0xfec4b0, mov_ret)
uint64_t main_f_fec4b0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_fec4c0  (orig 0xfec4c0, straight)
uint32_t main_f_fec4c0(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_fec6a0  (orig 0xfec6a0, mov_ret)
uint32_t main_f_fec6a0() { return 1; }

// sub_fec750  (orig 0xfec750, getter)
uint32_t main_f_fec750(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_fec760  (orig 0xfec760, mov_ret)
uint32_t main_f_fec760() { return 1; }

// sub_fecd40  (orig 0xfecd40, setter)
void main_f_fecd40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_fed2c0  (orig 0xfed2c0, mov_ret)
uint32_t main_f_fed2c0() { return 1; }

// sub_fed370  (orig 0xfed370, getter)
uint32_t main_f_fed370(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_fed380  (orig 0xfed380, mov_ret)
uint32_t main_f_fed380() { return 1; }

// sub_fed9d0  (orig 0xfed9d0, setter)
void main_f_fed9d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_fee080  (orig 0xfee080, mov_ret)
uint32_t main_f_fee080() { return 1; }

// sub_fee130  (orig 0xfee130, getter)
uint32_t main_f_fee130(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_fee140  (orig 0xfee140, mov_ret)
uint32_t main_f_fee140() { return 1; }

// sub_feef40  (orig 0xfeef40, ret_only)
void main_f_feef40() {}

// sub_feef50  (orig 0xfeef50, ret_only)
void main_f_feef50() {}

// sub_ff0220  (orig 0xff0220, ret_only)
void main_f_ff0220() {}

// sub_ff0230  (orig 0xff0230, ret_only)
void main_f_ff0230() {}

// sub_ff0a00  (orig 0xff0a00, setter)
void main_f_ff0a00(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_ff10b0  (orig 0xff10b0, mov_ret)
uint32_t main_f_ff10b0() { return 1; }

// sub_ff1160  (orig 0xff1160, getter)
uint32_t main_f_ff1160(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_ff1170  (orig 0xff1170, mov_ret)
uint32_t main_f_ff1170() { return 1; }

// sub_ff17b0  (orig 0xff17b0, setter)
void main_f_ff17b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_ff1d30  (orig 0xff1d30, mov_ret)
uint32_t main_f_ff1d30() { return 1; }

// sub_ff1ec0  (orig 0xff1ec0, setter)
void main_f_ff1ec0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_ff1f90  (orig 0xff1f90, ret_only)
void main_f_ff1f90() {}

// sub_ff2040  (orig 0xff2040, ret_only)
void main_f_ff2040() {}

// sub_ff2050  (orig 0xff2050, mov_ret)
uint64_t main_f_ff2050(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_ff2060  (orig 0xff2060, straight)
uint32_t main_f_ff2060(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_ff21c0  (orig 0xff21c0, mov_ret)
uint32_t main_f_ff21c0() { return 1; }

// sub_ff2270  (orig 0xff2270, getter)
uint32_t main_f_ff2270(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_ff2280  (orig 0xff2280, mov_ret)
uint32_t main_f_ff2280() { return 1; }

// sub_ff22c0  (orig 0xff22c0, getter)
uint32_t main_f_ff22c0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_ff22d0  (orig 0xff22d0, mov_ret)
uint32_t main_f_ff22d0() { return 1; }

// sub_ff23d0  (orig 0xff23d0, straight)
void main_f_ff23d0(void* a0) {
    *(uint32_t*)((char*)(a0) + 376) = 11;
}

// sub_ff23e0  (orig 0xff23e0, compare)
bool main_f_ff23e0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 376)) == (uint64_t)(13); }

// sub_ff41a0  (orig 0xff41a0, const-field-set-store)
void main_f_ff41a0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 380) = (uint8_t)(t1);
}

// sub_ff41b0  (orig 0xff41b0, ret_only)
void main_f_ff41b0() {}

// sub_ff41c0  (orig 0xff41c0, copy2)
void main_f_ff41c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff41d0  (orig 0xff41d0, copy2)
void main_f_ff41d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff41f0  (orig 0xff41f0, ret_only)
void main_f_ff41f0() {}

// sub_ff4200  (orig 0xff4200, copy2)
void main_f_ff4200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff4210  (orig 0xff4210, copy2)
void main_f_ff4210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff5950  (orig 0xff5950, ret_only)
void main_f_ff5950() {}

// sub_ff5960  (orig 0xff5960, ret_only)
void main_f_ff5960() {}

// sub_ff5c70  (orig 0xff5c70, ret_only)
void main_f_ff5c70() {}

// sub_ff5c80  (orig 0xff5c80, copy2)
void main_f_ff5c80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff5c90  (orig 0xff5c90, copy2)
void main_f_ff5c90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff5f30  (orig 0xff5f30, ret_only)
void main_f_ff5f30() {}

// sub_ff5f40  (orig 0xff5f40, copy2)
void main_f_ff5f40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff5f50  (orig 0xff5f50, copy2)
void main_f_ff5f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff7270  (orig 0xff7270, straight)
void main_f_ff7270(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 588) = 14;
    *(uint8_t*)((char*)(p0) + 584) = (uint8_t)k1;
}

// sub_ff7290  (orig 0xff7290, ret_only)
void main_f_ff7290() {}

// sub_ff72a0  (orig 0xff72a0, copy2)
void main_f_ff72a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff72b0  (orig 0xff72b0, copy2)
void main_f_ff72b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff72c0  (orig 0xff72c0, straight)
void main_f_ff72c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 588) = 16;
    *(uint8_t*)((char*)(p0) + 584) = (uint8_t)k1;
}

// sub_ff72e0  (orig 0xff72e0, ret_only)
void main_f_ff72e0() {}

// sub_ff72f0  (orig 0xff72f0, copy2)
void main_f_ff72f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff7300  (orig 0xff7300, copy2)
void main_f_ff7300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff7310  (orig 0xff7310, straight)
void main_f_ff7310(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 588) = 17;
    *(uint8_t*)((char*)(p0) + 584) = (uint8_t)k1;
}

// sub_ff7330  (orig 0xff7330, ret_only)
void main_f_ff7330() {}

// sub_ff7340  (orig 0xff7340, copy2)
void main_f_ff7340(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff7350  (orig 0xff7350, copy2)
void main_f_ff7350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff7c20  (orig 0xff7c20, ret_only)
void main_f_ff7c20() {}

// sub_ff7c30  (orig 0xff7c30, copy2)
void main_f_ff7c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff7c40  (orig 0xff7c40, copy2)
void main_f_ff7c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff7df0  (orig 0xff7df0, straight)
void main_f_ff7df0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 540) = 5;
    *(uint8_t*)((char*)(p0) + 536) = (uint8_t)k1;
}

// sub_ff7e10  (orig 0xff7e10, ret_only)
void main_f_ff7e10() {}

// sub_ff7e20  (orig 0xff7e20, copy2)
void main_f_ff7e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff7e30  (orig 0xff7e30, copy2)
void main_f_ff7e30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff7e40  (orig 0xff7e40, straight)
void main_f_ff7e40(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    uint32_t k1 = 1;
    *(uint32_t*)((char*)(p0) + 540) = 6;
    *(uint8_t*)((char*)(p0) + 536) = (uint8_t)k1;
}

// sub_ff7e60  (orig 0xff7e60, ret_only)
void main_f_ff7e60() {}

// sub_ff7e70  (orig 0xff7e70, copy2)
void main_f_ff7e70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff7e80  (orig 0xff7e80, copy2)
void main_f_ff7e80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff8ce0  (orig 0xff8ce0, ret_only)
void main_f_ff8ce0() {}

// sub_ff8cf0  (orig 0xff8cf0, copy2)
void main_f_ff8cf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ff8d00  (orig 0xff8d00, copy2)
void main_f_ff8d00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ffa4c0  (orig 0xffa4c0, getter)
uint32_t main_f_ffa4c0(void* a0) { return *(uint32_t*)((char*)(a0) + 112); }

// sub_ffa4d0  (orig 0xffa4d0, getter)
uint32_t main_f_ffa4d0(void* a0) { return *(uint32_t*)((char*)(a0) + 116); }

// sub_ffa640  (orig 0xffa640, compare-pred)
bool main_f_ffa640(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 120) | 1)) == (uint32_t)(9); }

// sub_ffc570  (orig 0xffc570, getter)
uint8_t main_f_ffc570(void* a0) { return *(uint8_t*)((char*)(a0) + 160); }

// sub_ffd310  (orig 0xffd310, compare)
bool main_f_ffd310(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 264)) != (uint64_t)(0); }

// sub_ffd7b0  (orig 0xffd7b0, compare)
bool main_f_ffd7b0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 272)) != (uint64_t)(0); }

// sub_ffd7c0  (orig 0xffd7c0, getter)
uint64_t main_f_ffd7c0(void* a0) { return *(uint64_t*)((char*)(a0) + 272); }

// sub_ffd7d0  (orig 0xffd7d0, setter)
void main_f_ffd7d0(void* a0) { *(uint64_t*)((char*)(a0) + 272) = 0; }

// sub_ffe0f0  (orig 0xffe0f0, setter)
void main_f_ffe0f0(void* a0) { *(uint8_t*)((char*)(a0) + 288) = 0; }

// sub_ffe100  (orig 0xffe100, compare)
bool main_f_ffe100(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0) + 288)) != (uint64_t)(0); }

// sub_ffe190  (orig 0xffe190, getter)
uint8_t main_f_ffe190(void* a0) { return *(uint8_t*)((char*)(a0) + 288); }

// sub_ffe4d0  (orig 0xffe4d0, compare-pred)
bool main_f_ffe4d0(void* a0) { return (uint32_t)(*(uint16_t*)((char*)(*(uint64_t*)((char*)a0 + 136)) + 132)) == (uint32_t)(3); }

// sub_ffe4f0  (orig 0xffe4f0, getter)
uint8_t main_f_ffe4f0(void* a0) { return *(uint8_t*)((char*)(a0) + 328); }

// sub_fff170  (orig 0xfff170, getter)
uint8_t main_f_fff170(void* a0) { return *(uint8_t*)((char*)(a0) + 344); }

// sub_fff710  (orig 0xfff710, compare-pred)
bool main_f_fff710(void* a0) { return (uint32_t)(*(uint16_t*)((char*)(*(uint64_t*)((char*)a0 + 136)) + 132)) == (uint32_t)(4); }

// sub_fff730  (orig 0xfff730, getter)
uint8_t main_f_fff730(void* a0) { return *(uint8_t*)((char*)(a0) + 624); }

// sub_fffca0  (orig 0xfffca0, setter-chain)
void main_f_fffca0(void* a0) { *(uint64_t*)((char*)(a0) + 632) = 0; *(uint8_t*)((char*)(a0) + 640) = 0; *(uint64_t*)((char*)(a0) + 648) = 0; *(uint8_t*)((char*)(a0) + 656) = 0; *(uint64_t*)((char*)(a0) + 664) = 0; *(uint8_t*)((char*)(a0) + 672) = 0; *(uint64_t*)((char*)(a0) + 680) = 0; *(uint8_t*)((char*)(a0) + 688) = 0; *(uint64_t*)((char*)(a0) + 696) = 0; *(uint8_t*)((char*)(a0) + 704) = 0; *(uint64_t*)((char*)(a0) + 712) = 0; *(uint8_t*)((char*)(a0) + 720) = 0; *(uint64_t*)((char*)(a0) + 728) = 0; *(uint8_t*)((char*)(a0) + 736) = 0; *(uint64_t*)((char*)(a0) + 744) = 0; *(uint8_t*)((char*)(a0) + 752) = 0; }

// sub_1000280  (orig 0x1000280, compare-pred)
bool main_f_1000280(void* a0) { return (uint32_t)(*(uint16_t*)((char*)(*(uint64_t*)((char*)a0 + 136)) + 132)) == (uint32_t)(5); }

// sub_1001130  (orig 0x1001130, getter)
uint8_t main_f_1001130(void* a0) { return *(uint8_t*)((char*)(a0) + 864); }

// sub_1001170  (orig 0x1001170, straight)
void main_f_1001170(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 840) = (uint8_t)k0;
}

// sub_10014b0  (orig 0x10014b0, compare-pred)
bool main_f_10014b0(void* a0) { return (uint32_t)(*(uint16_t*)((char*)(*(uint64_t*)((char*)a0 + 136)) + 132)) == (uint32_t)(6); }

// sub_10014d0  (orig 0x10014d0, getter)
uint8_t main_f_10014d0(void* a0) { return *(uint8_t*)((char*)(a0) + 840); }

// sub_1004520  (orig 0x1004520, straight)
void main_f_1004520(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 849) = (uint8_t)k0;
}

// sub_1004530  (orig 0x1004530, straight)
void main_f_1004530(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 729) = (uint8_t)k0;
}

// sub_10045d0  (orig 0x10045d0, straight)
void main_f_10045d0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 160) = (uint8_t)k0;
}

// sub_10045e0  (orig 0x10045e0, straight)
void main_f_10045e0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 56) = (uint8_t)k0;
}

// sub_10045f0  (orig 0x10045f0, setter)
void main_f_10045f0(void* a0) { *(uint8_t*)((char*)(a0) + 160) = 0; }

// sub_1004600  (orig 0x1004600, setter)
void main_f_1004600(void* a0) { *(uint8_t*)((char*)(a0) + 56) = 0; }

// sub_1004610  (orig 0x1004610, straight)
void main_f_1004610(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 160) = (uint8_t)k0;
}

// sub_1004620  (orig 0x1004620, straight)
void main_f_1004620(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 56) = (uint8_t)k0;
}

// sub_1004780  (orig 0x1004780, ret_only)
void main_f_1004780() {}

// sub_1004790  (orig 0x1004790, ret_only)
void main_f_1004790() {}

// sub_10047a0  (orig 0x10047a0, ret_only)
void main_f_10047a0() {}

// sub_10047b0  (orig 0x10047b0, ret_only)
void main_f_10047b0() {}

// sub_10047c0  (orig 0x10047c0, ret_only)
void main_f_10047c0() {}

// sub_1005800  (orig 0x1005800, ret_only)
void main_f_1005800() {}

// sub_10058b0  (orig 0x10058b0, ret_only)
void main_f_10058b0() {}

// sub_10058c0  (orig 0x10058c0, struct-copy)
void main_f_10058c0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_10058e0  (orig 0x10058e0, struct-copy)
void main_f_10058e0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_10059e0  (orig 0x10059e0, ret_only)
void main_f_10059e0() {}

// sub_10059f0  (orig 0x10059f0, struct-copy)
void main_f_10059f0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1005a10  (orig 0x1005a10, struct-copy)
void main_f_1005a10(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1005d10  (orig 0x1005d10, getter)
uint64_t main_f_1005d10(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_1006290  (orig 0x1006290, getter)
uint64_t main_f_1006290(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_10067f0  (orig 0x10067f0, getter)
uint64_t main_f_10067f0(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_1006d50  (orig 0x1006d50, getter)
uint64_t main_f_1006d50(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_10072d0  (orig 0x10072d0, getter)
uint64_t main_f_10072d0(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_1007850  (orig 0x1007850, getter)
uint64_t main_f_1007850(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_1007dd0  (orig 0x1007dd0, getter)
uint64_t main_f_1007dd0(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_1008360  (orig 0x1008360, getter)
uint64_t main_f_1008360(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_100b090  (orig 0x100b090, setter)
void main_f_100b090(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_100b1f0  (orig 0x100b1f0, ret_only)
void main_f_100b1f0() {}

// sub_100b2a0  (orig 0x100b2a0, ret_only)
void main_f_100b2a0() {}

// sub_100b2b0  (orig 0x100b2b0, mov_ret)
uint64_t main_f_100b2b0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_100b2c0  (orig 0x100b2c0, straight)
uint32_t main_f_100b2c0(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_100b4a0  (orig 0x100b4a0, mov_ret)
uint32_t main_f_100b4a0() { return 1; }

// sub_100b550  (orig 0x100b550, getter)
uint32_t main_f_100b550(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_100b560  (orig 0x100b560, mov_ret)
uint32_t main_f_100b560() { return 1; }

// sub_100c220  (orig 0x100c220, setter)
void main_f_100c220(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_100daa0  (orig 0x100daa0, mov_ret)
uint32_t main_f_100daa0() { return 1; }

// sub_100db50  (orig 0x100db50, getter)
uint32_t main_f_100db50(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_100db60  (orig 0x100db60, mov_ret)
uint32_t main_f_100db60() { return 1; }

// sub_100e0d0  (orig 0x100e0d0, setter)
void main_f_100e0d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_100e1a0  (orig 0x100e1a0, setter-chain)
void main_f_100e1a0(void* a0) { *(uint32_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; }

// sub_100e630  (orig 0x100e630, mov_ret)
uint32_t main_f_100e630() { return 1; }

// sub_100e800  (orig 0x100e800, setter)
void main_f_100e800(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 48) = a1; }

// sub_100ef80  (orig 0x100ef80, mov_ret)
uint32_t main_f_100ef80() { return 1; }

// sub_100f110  (orig 0x100f110, setter)
void main_f_100f110(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_100f1e0  (orig 0x100f1e0, ret_only)
void main_f_100f1e0() {}

// sub_100f290  (orig 0x100f290, ret_only)
void main_f_100f290() {}

// sub_100f2a0  (orig 0x100f2a0, mov_ret)
uint64_t main_f_100f2a0(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_100f2b0  (orig 0x100f2b0, straight)
uint32_t main_f_100f2b0(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_100f410  (orig 0x100f410, mov_ret)
uint32_t main_f_100f410() { return 1; }

// sub_100f4c0  (orig 0x100f4c0, getter)
uint32_t main_f_100f4c0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_100f4d0  (orig 0x100f4d0, mov_ret)
uint32_t main_f_100f4d0() { return 1; }

// sub_100f510  (orig 0x100f510, getter)
uint32_t main_f_100f510(void* a0) { return *(uint32_t*)((char*)(a0) + 48); }

// sub_100f520  (orig 0x100f520, mov_ret)
uint32_t main_f_100f520() { return 1; }

// sub_100f560  (orig 0x100f560, getter)
uint32_t main_f_100f560(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_100f570  (orig 0x100f570, mov_ret)
uint32_t main_f_100f570() { return 1; }

// sub_100fbf0  (orig 0x100fbf0, setter)
void main_f_100fbf0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 40) = a1; }

// sub_10103c0  (orig 0x10103c0, mov_ret)
uint32_t main_f_10103c0() { return 1; }

// sub_1010560  (orig 0x1010560, setter)
void main_f_1010560(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_1010630  (orig 0x1010630, setter)
void main_f_1010630(void* a0) { *(uint8_t*)((char*)(a0) + 17) = 0; }

// sub_1010950  (orig 0x1010950, mov_ret)
uint32_t main_f_1010950() { return 1; }

// sub_1010a00  (orig 0x1010a00, getter)
uint32_t main_f_1010a00(void* a0) { return *(uint32_t*)((char*)(a0) + 40); }

// sub_1010a10  (orig 0x1010a10, mov_ret)
uint32_t main_f_1010a10() { return 1; }

// sub_1010a50  (orig 0x1010a50, getter)
uint32_t main_f_1010a50(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1010a60  (orig 0x1010a60, mov_ret)
uint32_t main_f_1010a60() { return 1; }

// sub_1010f60  (orig 0x1010f60, setter)
void main_f_1010f60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_10110c0  (orig 0x10110c0, setter-chain)
void main_f_10110c0(void* a0) { *(uint8_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; }

// sub_10115b0  (orig 0x10115b0, mov_ret)
uint32_t main_f_10115b0() { return 1; }

// sub_1011660  (orig 0x1011660, getter)
uint32_t main_f_1011660(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_1011670  (orig 0x1011670, mov_ret)
uint32_t main_f_1011670() { return 1; }

// sub_1011bf0  (orig 0x1011bf0, setter)
void main_f_1011bf0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_1011d50  (orig 0x1011d50, setter)
void main_f_1011d50(void* a0) { *(uint8_t*)((char*)(a0) + 17) = 0; }

// sub_10120f0  (orig 0x10120f0, mov_ret)
uint32_t main_f_10120f0() { return 1; }

// sub_10121a0  (orig 0x10121a0, getter)
uint32_t main_f_10121a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10121b0  (orig 0x10121b0, mov_ret)
uint32_t main_f_10121b0() { return 1; }

// sub_10127a0  (orig 0x10127a0, setter)
void main_f_10127a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1012d20  (orig 0x1012d20, mov_ret)
uint32_t main_f_1012d20() { return 1; }

// sub_1012dd0  (orig 0x1012dd0, getter)
uint32_t main_f_1012dd0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1012de0  (orig 0x1012de0, mov_ret)
uint32_t main_f_1012de0() { return 1; }

// sub_10132e0  (orig 0x10132e0, setter)
void main_f_10132e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_1013440  (orig 0x1013440, setter)
void main_f_1013440(void* a0) { *(uint8_t*)((char*)(a0) + 17) = 0; }

// sub_10137e0  (orig 0x10137e0, mov_ret)
uint32_t main_f_10137e0() { return 1; }

// sub_1013890  (orig 0x1013890, getter)
uint32_t main_f_1013890(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10138a0  (orig 0x10138a0, mov_ret)
uint32_t main_f_10138a0() { return 1; }

// sub_1013de0  (orig 0x1013de0, setter)
void main_f_1013de0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_1013eb0  (orig 0x1013eb0, setter)
void main_f_1013eb0(void* a0) { *(uint32_t*)((char*)(a0) + 20) = 0; }

// sub_1014240  (orig 0x1014240, mov_ret)
uint32_t main_f_1014240() { return 1; }

// sub_10143d0  (orig 0x10143d0, setter)
void main_f_10143d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10144a0  (orig 0x10144a0, ret_only)
void main_f_10144a0() {}

// sub_1014550  (orig 0x1014550, ret_only)
void main_f_1014550() {}

// sub_1014560  (orig 0x1014560, mov_ret)
uint64_t main_f_1014560(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_1014570  (orig 0x1014570, straight)
uint32_t main_f_1014570(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_10146d0  (orig 0x10146d0, mov_ret)
uint32_t main_f_10146d0() { return 1; }

// sub_1014780  (orig 0x1014780, getter)
uint32_t main_f_1014780(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_1014790  (orig 0x1014790, mov_ret)
uint32_t main_f_1014790() { return 1; }

// sub_10147d0  (orig 0x10147d0, getter)
uint32_t main_f_10147d0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10147e0  (orig 0x10147e0, mov_ret)
uint32_t main_f_10147e0() { return 1; }

// sub_1014d50  (orig 0x1014d50, setter)
void main_f_1014d50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_1015470  (orig 0x1015470, mov_ret)
uint32_t main_f_1015470() { return 1; }

// sub_1015520  (orig 0x1015520, getter)
uint32_t main_f_1015520(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_1015530  (orig 0x1015530, mov_ret)
uint32_t main_f_1015530() { return 1; }

// sub_10159f0  (orig 0x10159f0, setter)
void main_f_10159f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_1015b50  (orig 0x1015b50, ret_only)
void main_f_1015b50() {}

// sub_1015c00  (orig 0x1015c00, ret_only)
void main_f_1015c00() {}

// sub_1015c10  (orig 0x1015c10, mov_ret)
uint64_t main_f_1015c10(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_1015c20  (orig 0x1015c20, straight)
uint32_t main_f_1015c20(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_1015e00  (orig 0x1015e00, mov_ret)
uint32_t main_f_1015e00() { return 1; }

// sub_1015eb0  (orig 0x1015eb0, getter)
uint32_t main_f_1015eb0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1015ec0  (orig 0x1015ec0, mov_ret)
uint32_t main_f_1015ec0() { return 1; }

// sub_1016410  (orig 0x1016410, setter)
void main_f_1016410(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_1016570  (orig 0x1016570, ret_only)
void main_f_1016570() {}

// sub_1016620  (orig 0x1016620, ret_only)
void main_f_1016620() {}

// sub_1016630  (orig 0x1016630, mov_ret)
uint64_t main_f_1016630(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_1016640  (orig 0x1016640, straight)
uint32_t main_f_1016640(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_1016800  (orig 0x1016800, mov_ret)
uint32_t main_f_1016800() { return 1; }

// sub_10168b0  (orig 0x10168b0, getter)
uint32_t main_f_10168b0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10168c0  (orig 0x10168c0, mov_ret)
uint32_t main_f_10168c0() { return 1; }

// sub_1016e20  (orig 0x1016e20, setter)
void main_f_1016e20(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_1016f80  (orig 0x1016f80, ret_only)
void main_f_1016f80() {}

// sub_1017030  (orig 0x1017030, ret_only)
void main_f_1017030() {}

// sub_1017040  (orig 0x1017040, mov_ret)
uint64_t main_f_1017040(uint64_t a0, uint64_t a1, uint64_t a2) { return a2; }

// sub_1017050  (orig 0x1017050, straight)
uint32_t main_f_1017050(void* a0) {
    *(uint32_t*)((char*)(a0) + 20) = 0;
    return 0;
}

// sub_1017230  (orig 0x1017230, mov_ret)
uint32_t main_f_1017230() { return 1; }

// sub_10172e0  (orig 0x10172e0, getter)
uint32_t main_f_10172e0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10172f0  (orig 0x10172f0, mov_ret)
uint32_t main_f_10172f0() { return 1; }

// sub_1017a40  (orig 0x1017a40, setter)
void main_f_1017a40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_10182b0  (orig 0x10182b0, mov_ret)
uint32_t main_f_10182b0() { return 1; }

// sub_1018360  (orig 0x1018360, getter)
uint32_t main_f_1018360(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1018370  (orig 0x1018370, mov_ret)
uint32_t main_f_1018370() { return 1; }

// sub_1018860  (orig 0x1018860, setter)
void main_f_1018860(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 36) = a1; }

// sub_10189c0  (orig 0x10189c0, setter-chain)
void main_f_10189c0(void* a0) { *(uint32_t*)((char*)(a0) + 32) = 0; *(uint64_t*)((char*)(a0) + 24) = 0; }

// sub_1018f20  (orig 0x1018f20, mov_ret)
uint32_t main_f_1018f20() { return 1; }

// sub_1018fd0  (orig 0x1018fd0, getter)
uint32_t main_f_1018fd0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_1018fe0  (orig 0x1018fe0, mov_ret)
uint32_t main_f_1018fe0() { return 1; }

// sub_101b7c0  (orig 0x101b7c0, getter)
uint64_t main_f_101b7c0(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_101fa40  (orig 0x101fa40, ret_only)
void main_f_101fa40() {}

// sub_101fa50  (orig 0x101fa50, ret_only)
void main_f_101fa50() {}

// sub_101fa60  (orig 0x101fa60, ret_only)
void main_f_101fa60() {}

// sub_101fa70  (orig 0x101fa70, ret_only)
void main_f_101fa70() {}

// sub_101fa80  (orig 0x101fa80, ret_only)
void main_f_101fa80() {}

// sub_101fa90  (orig 0x101fa90, ret_only)
void main_f_101fa90() {}

// sub_101faa0  (orig 0x101faa0, ret_only)
void main_f_101faa0() {}

// sub_101fab0  (orig 0x101fab0, ret_only)
void main_f_101fab0() {}

// sub_1021710  (orig 0x1021710, ret_only)
void main_f_1021710() {}

// sub_1021950  (orig 0x1021950, ret_only)
void main_f_1021950() {}

// sub_1021960  (orig 0x1021960, ret_only)
void main_f_1021960() {}

// sub_1021970  (orig 0x1021970, ret_only)
void main_f_1021970() {}

// sub_10223e0  (orig 0x10223e0, setter)
void main_f_10223e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1023350  (orig 0x1023350, mov_ret)
uint32_t main_f_1023350() { return 1; }

// sub_1023400  (orig 0x1023400, getter)
uint32_t main_f_1023400(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1023410  (orig 0x1023410, mov_ret)
uint32_t main_f_1023410() { return 1; }

// sub_10241a0  (orig 0x10241a0, setter)
void main_f_10241a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1024720  (orig 0x1024720, mov_ret)
uint32_t main_f_1024720() { return 1; }

// sub_10249e0  (orig 0x10249e0, setter)
void main_f_10249e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1024f60  (orig 0x1024f60, mov_ret)
uint32_t main_f_1024f60() { return 1; }

// sub_1025220  (orig 0x1025220, setter)
void main_f_1025220(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_10257a0  (orig 0x10257a0, mov_ret)
uint32_t main_f_10257a0() { return 1; }

// sub_1025a60  (orig 0x1025a60, setter)
void main_f_1025a60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1025fe0  (orig 0x1025fe0, mov_ret)
uint32_t main_f_1025fe0() { return 1; }

// sub_10262a0  (orig 0x10262a0, setter)
void main_f_10262a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1026820  (orig 0x1026820, mov_ret)
uint32_t main_f_1026820() { return 1; }

// sub_1026ae0  (orig 0x1026ae0, setter)
void main_f_1026ae0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1027060  (orig 0x1027060, mov_ret)
uint32_t main_f_1027060() { return 1; }

// sub_1027320  (orig 0x1027320, setter)
void main_f_1027320(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_10278a0  (orig 0x10278a0, mov_ret)
uint32_t main_f_10278a0() { return 1; }

// sub_1027b60  (orig 0x1027b60, setter)
void main_f_1027b60(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_10280e0  (orig 0x10280e0, mov_ret)
uint32_t main_f_10280e0() { return 1; }

// sub_1028190  (orig 0x1028190, getter)
uint32_t main_f_1028190(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_10281a0  (orig 0x10281a0, mov_ret)
uint32_t main_f_10281a0() { return 1; }

// sub_10281e0  (orig 0x10281e0, getter)
uint32_t main_f_10281e0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_10281f0  (orig 0x10281f0, mov_ret)
uint32_t main_f_10281f0() { return 1; }

// sub_1028230  (orig 0x1028230, getter)
uint32_t main_f_1028230(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1028240  (orig 0x1028240, mov_ret)
uint32_t main_f_1028240() { return 1; }

// sub_1028280  (orig 0x1028280, getter)
uint32_t main_f_1028280(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1028290  (orig 0x1028290, mov_ret)
uint32_t main_f_1028290() { return 1; }

// sub_10282d0  (orig 0x10282d0, getter)
uint32_t main_f_10282d0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_10282e0  (orig 0x10282e0, mov_ret)
uint32_t main_f_10282e0() { return 1; }

// sub_1028320  (orig 0x1028320, getter)
uint32_t main_f_1028320(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1028330  (orig 0x1028330, mov_ret)
uint32_t main_f_1028330() { return 1; }

// sub_1028370  (orig 0x1028370, getter)
uint32_t main_f_1028370(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1028380  (orig 0x1028380, mov_ret)
uint32_t main_f_1028380() { return 1; }

// sub_10283c0  (orig 0x10283c0, getter)
uint32_t main_f_10283c0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_10283d0  (orig 0x10283d0, mov_ret)
uint32_t main_f_10283d0() { return 1; }

// sub_102c420  (orig 0x102c420, ret_only)
void main_f_102c420() {}

// sub_102c430  (orig 0x102c430, copy2)
void main_f_102c430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102c440  (orig 0x102c440, copy2)
void main_f_102c440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102c470  (orig 0x102c470, ret_only)
void main_f_102c470() {}

// sub_102c480  (orig 0x102c480, copy2)
void main_f_102c480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102c490  (orig 0x102c490, copy2)
void main_f_102c490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102c4a0  (orig 0x102c4a0, const-field-set-store)
void main_f_102c4a0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 11;
    *(uint32_t*)((char*)(t0) + 48) = (uint32_t)(t1);
}

// sub_102c4b0  (orig 0x102c4b0, ret_only)
void main_f_102c4b0() {}

// sub_102c4c0  (orig 0x102c4c0, copy2)
void main_f_102c4c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102c4d0  (orig 0x102c4d0, copy2)
void main_f_102c4d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102c500  (orig 0x102c500, ret_only)
void main_f_102c500() {}

// sub_102c510  (orig 0x102c510, copy2)
void main_f_102c510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102c520  (orig 0x102c520, copy2)
void main_f_102c520(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102f870  (orig 0x102f870, ret_only)
void main_f_102f870() {}

// sub_102f880  (orig 0x102f880, copy2)
void main_f_102f880(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102f890  (orig 0x102f890, copy2)
void main_f_102f890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102fac0  (orig 0x102fac0, ret_only)
void main_f_102fac0() {}

// sub_102fad0  (orig 0x102fad0, copy2)
void main_f_102fad0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102fae0  (orig 0x102fae0, copy2)
void main_f_102fae0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102fb10  (orig 0x102fb10, ret_only)
void main_f_102fb10() {}

// sub_102fb20  (orig 0x102fb20, copy2)
void main_f_102fb20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102fb30  (orig 0x102fb30, copy2)
void main_f_102fb30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102fd10  (orig 0x102fd10, const-field-set-store)
void main_f_102fd10(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 8;
    *(uint32_t*)((char*)(t0) + 320) = (uint32_t)(t1);
}

// sub_102fd20  (orig 0x102fd20, ret_only)
void main_f_102fd20() {}

// sub_102fd30  (orig 0x102fd30, copy2)
void main_f_102fd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102fd40  (orig 0x102fd40, copy2)
void main_f_102fd40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102fd70  (orig 0x102fd70, ret_only)
void main_f_102fd70() {}

// sub_102fd80  (orig 0x102fd80, copy2)
void main_f_102fd80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_102fd90  (orig 0x102fd90, copy2)
void main_f_102fd90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1031510  (orig 0x1031510, ret_only)
void main_f_1031510() {}

// sub_1031520  (orig 0x1031520, ret_only)
void main_f_1031520() {}

// sub_1031ab0  (orig 0x1031ab0, ret_only)
void main_f_1031ab0() {}

// sub_1031ac0  (orig 0x1031ac0, ret_only)
void main_f_1031ac0() {}

// sub_1031ad0  (orig 0x1031ad0, ret_only)
void main_f_1031ad0() {}

// sub_1031ae0  (orig 0x1031ae0, ret_only)
void main_f_1031ae0() {}

// sub_1031af0  (orig 0x1031af0, ret_only)
void main_f_1031af0() {}

// sub_1032a40  (orig 0x1032a40, ret_only)
void main_f_1032a40() {}

// sub_1032af0  (orig 0x1032af0, ret_only)
void main_f_1032af0() {}

// sub_1032b00  (orig 0x1032b00, struct-copy)
void main_f_1032b00(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1032b20  (orig 0x1032b20, struct-copy)
void main_f_1032b20(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1032c20  (orig 0x1032c20, ret_only)
void main_f_1032c20() {}

// sub_1032c30  (orig 0x1032c30, struct-copy)
void main_f_1032c30(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1032c50  (orig 0x1032c50, struct-copy)
void main_f_1032c50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1033030  (orig 0x1033030, getter)
uint64_t main_f_1033030(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_1033680  (orig 0x1033680, getter)
uint64_t main_f_1033680(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_1035c90  (orig 0x1035c90, setter)
void main_f_1035c90(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1036210  (orig 0x1036210, mov_ret)
uint32_t main_f_1036210() { return 1; }

// sub_10362c0  (orig 0x10362c0, getter)
uint32_t main_f_10362c0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_10362d0  (orig 0x10362d0, mov_ret)
uint32_t main_f_10362d0() { return 1; }

// sub_10367a0  (orig 0x10367a0, setter)
void main_f_10367a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_1036900  (orig 0x1036900, setter)
void main_f_1036900(void* a0) { *(uint32_t*)((char*)(a0) + 20) = 0; }

// sub_1036d30  (orig 0x1036d30, mov_ret)
uint32_t main_f_1036d30() { return 1; }

// sub_1036de0  (orig 0x1036de0, getter)
uint32_t main_f_1036de0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_1036df0  (orig 0x1036df0, mov_ret)
uint32_t main_f_1036df0() { return 1; }

// sub_10374d0  (orig 0x10374d0, setter)
void main_f_10374d0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1037b80  (orig 0x1037b80, mov_ret)
uint32_t main_f_1037b80() { return 1; }

// sub_1037c30  (orig 0x1037c30, getter)
uint32_t main_f_1037c30(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_1037c40  (orig 0x1037c40, mov_ret)
uint32_t main_f_1037c40() { return 1; }

// sub_1037f50  (orig 0x1037f50, ret_only)
void main_f_1037f50() {}

// sub_1038190  (orig 0x1038190, ret_only)
void main_f_1038190() {}

// sub_10381a0  (orig 0x10381a0, ret_only)
void main_f_10381a0() {}

// sub_10381b0  (orig 0x10381b0, ret_only)
void main_f_10381b0() {}

// sub_1039d90  (orig 0x1039d90, ret_only)
void main_f_1039d90() {}

// sub_1039da0  (orig 0x1039da0, ret_only)
void main_f_1039da0() {}

// sub_1039db0  (orig 0x1039db0, ret_only)
void main_f_1039db0() {}

// sub_1039dc0  (orig 0x1039dc0, ret_only)
void main_f_1039dc0() {}

// sub_1039dd0  (orig 0x1039dd0, ret_only)
void main_f_1039dd0() {}

// sub_1039de0  (orig 0x1039de0, ret_only)
void main_f_1039de0() {}

// sub_1039df0  (orig 0x1039df0, ret_only)
void main_f_1039df0() {}

// sub_103ad40  (orig 0x103ad40, ret_only)
void main_f_103ad40() {}

// sub_103adf0  (orig 0x103adf0, ret_only)
void main_f_103adf0() {}

// sub_103ae00  (orig 0x103ae00, struct-copy)
void main_f_103ae00(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_103ae20  (orig 0x103ae20, struct-copy)
void main_f_103ae20(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_103af20  (orig 0x103af20, ret_only)
void main_f_103af20() {}

// sub_103af30  (orig 0x103af30, struct-copy)
void main_f_103af30(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_103af50  (orig 0x103af50, struct-copy)
void main_f_103af50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_103b330  (orig 0x103b330, getter)
uint64_t main_f_103b330(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_103c910  (orig 0x103c910, setter)
void main_f_103c910(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_103ce90  (orig 0x103ce90, mov_ret)
uint32_t main_f_103ce90() { return 1; }

// sub_103cf40  (orig 0x103cf40, getter)
uint32_t main_f_103cf40(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_103cf50  (orig 0x103cf50, mov_ret)
uint32_t main_f_103cf50() { return 1; }

// sub_103d420  (orig 0x103d420, setter)
void main_f_103d420(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_103d920  (orig 0x103d920, mov_ret)
uint32_t main_f_103d920() { return 1; }

// sub_103d9d0  (orig 0x103d9d0, getter)
uint32_t main_f_103d9d0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_103d9e0  (orig 0x103d9e0, mov_ret)
uint32_t main_f_103d9e0() { return 1; }

// sub_103f700  (orig 0x103f700, ret_only)
void main_f_103f700() {}

// sub_103f710  (orig 0x103f710, ret_only)
void main_f_103f710() {}

// sub_103f720  (orig 0x103f720, ret_only)
void main_f_103f720() {}

// sub_103f730  (orig 0x103f730, ret_only)
void main_f_103f730() {}

// sub_103f740  (orig 0x103f740, ret_only)
void main_f_103f740() {}

// sub_103f750  (orig 0x103f750, ret_only)
void main_f_103f750() {}

// sub_10406a0  (orig 0x10406a0, ret_only)
void main_f_10406a0() {}

// sub_1040750  (orig 0x1040750, ret_only)
void main_f_1040750() {}

// sub_1040760  (orig 0x1040760, struct-copy)
void main_f_1040760(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1040780  (orig 0x1040780, struct-copy)
void main_f_1040780(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1040880  (orig 0x1040880, ret_only)
void main_f_1040880() {}

// sub_1040890  (orig 0x1040890, struct-copy)
void main_f_1040890(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_10408b0  (orig 0x10408b0, struct-copy)
void main_f_10408b0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1040c90  (orig 0x1040c90, getter)
uint64_t main_f_1040c90(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_1042060  (orig 0x1042060, setter)
void main_f_1042060(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 24) = a1; }

// sub_10421c0  (orig 0x10421c0, setter)
void main_f_10421c0(void* a0) { *(uint32_t*)((char*)(a0) + 20) = 0; }

// sub_10425f0  (orig 0x10425f0, mov_ret)
uint32_t main_f_10425f0() { return 1; }

// sub_10426a0  (orig 0x10426a0, getter)
uint32_t main_f_10426a0(void* a0) { return *(uint32_t*)((char*)(a0) + 24); }

// sub_10426b0  (orig 0x10426b0, mov_ret)
uint32_t main_f_10426b0() { return 1; }

// sub_1042c10  (orig 0x1042c10, setter)
void main_f_1042c10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 32) = a1; }

// sub_1043110  (orig 0x1043110, mov_ret)
uint32_t main_f_1043110() { return 1; }

// sub_10431c0  (orig 0x10431c0, getter)
uint32_t main_f_10431c0(void* a0) { return *(uint32_t*)((char*)(a0) + 32); }

// sub_10431d0  (orig 0x10431d0, mov_ret)
uint32_t main_f_10431d0() { return 1; }

// sub_1043240  (orig 0x1043240, mov_ret)
uint32_t main_f_1043240() { return 1; }

// sub_1044140  (orig 0x1044140, getter)
uint64_t main_f_1044140(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_1044150  (orig 0x1044150, getter)
uint64_t main_f_1044150(void* a0) { return *(uint64_t*)((char*)(a0) + 208); }

// sub_1044b40  (orig 0x1044b40, getter)
uint64_t main_f_1044b40(void* a0) { return *(uint64_t*)((char*)(a0) + 192); }

// sub_1044b50  (orig 0x1044b50, getter)
uint64_t main_f_1044b50(void* a0) { return *(uint64_t*)((char*)(a0) + 200); }

// sub_1044d60  (orig 0x1044d60, compare)
bool main_f_1044d60(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 96)) == (uint64_t)(3); }

// sub_1044d70  (orig 0x1044d70, straight)
void main_f_1044d70(void* a0) {
    *(uint32_t*)((char*)(a0) + 96) = 4;
}

// sub_1044d80  (orig 0x1044d80, compare)
bool main_f_1044d80(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 96)) == (uint64_t)(5); }

// sub_1044e60  (orig 0x1044e60, compare)
bool main_f_1044e60(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 100)) == (uint64_t)(2); }

// sub_1044f30  (orig 0x1044f30, mov_ret)
uint32_t main_f_1044f30() { return 0; }

// sub_1044f40  (orig 0x1044f40, mov_ret)
uint64_t main_f_1044f40() { return 0; }

// sub_1044f50  (orig 0x1044f50, mov_ret)
uint64_t main_f_1044f50() { return 0; }

// sub_1044f60  (orig 0x1044f60, mov_ret)
uint32_t main_f_1044f60() { return 0; }

// sub_10457e0  (orig 0x10457e0, getter)
uint32_t main_f_10457e0(void* a0) { return *(uint32_t*)((char*)(a0) + 108); }

// sub_1047a00  (orig 0x1047a00, setter)
void main_f_1047a00(void* a0) { *(uint32_t*)((char*)(a0) + 104) = 0; }

// sub_1048150  (orig 0x1048150, setter-chain-zero)
void main_f_1048150(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)(char*)a0 = (struct u64x2){ 0, 0 };
}

// sub_1048890  (orig 0x1048890, ptr_add)
void* main_f_1048890(void* a0) { return (char*)a0 + 280; }

// sub_10488a0  (orig 0x10488a0, ptr_add)
void* main_f_10488a0(void* a0) { return (char*)a0 + 256; }

// sub_10488b0  (orig 0x10488b0, ret_only)
void main_f_10488b0() {}

// sub_10489f0  (orig 0x10489f0, ret_only)
void main_f_10489f0() {}

// sub_1049d00  (orig 0x1049d00, getter)
uint8_t main_f_1049d00(void* a0) { return *(uint8_t*)((char*)(a0) + 112); }

// sub_1049d10  (orig 0x1049d10, getter)
uint8_t main_f_1049d10(void* a0) { return *(uint8_t*)((char*)(a0) + 113); }

// sub_1049e60  (orig 0x1049e60, ret_only)
void main_f_1049e60() {}

// sub_1049ee0  (orig 0x1049ee0, ret_only)
void main_f_1049ee0() {}

// sub_104a170  (orig 0x104a170, getter)
uint32_t main_f_104a170(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_104a190  (orig 0x104a190, getter)
uint64_t main_f_104a190(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_104a840  (orig 0x104a840, getter)
uint32_t main_f_104a840(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_104ab60  (orig 0x104ab60, getter)
uint32_t main_f_104ab60(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_104ab70  (orig 0x104ab70, getter)
uint16_t main_f_104ab70(void* a0) { return *(uint16_t*)((char*)(a0) + 4); }

// sub_104ab80  (orig 0x104ab80, getter)
uint8_t main_f_104ab80(void* a0) { return *(uint8_t*)((char*)(a0) + 6); }

// sub_104ab90  (orig 0x104ab90, getter)
uint8_t main_f_104ab90(void* a0) { return *(uint8_t*)((char*)(a0) + 7); }

// sub_104aba0  (orig 0x104aba0, getter)
uint16_t main_f_104aba0(void* a0) { return *(uint16_t*)((char*)(a0) + 8); }

// sub_104b170  (orig 0x104b170, ptr_add)
void* main_f_104b170(void* a0) { return (char*)a0 + 8; }

// sub_104b1e0  (orig 0x104b1e0, getter)
uint64_t main_f_104b1e0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_104bdf0  (orig 0x104bdf0, ptr_add)
void* main_f_104bdf0(void* a0) { return (char*)a0 + 8; }

// sub_104be50  (orig 0x104be50, getter)
uint64_t main_f_104be50(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_104c930  (orig 0x104c930, mov_ret)
uint32_t main_f_104c930() { return 1; }

// sub_104c9d0  (orig 0x104c9d0, mov_ret)
uint32_t main_f_104c9d0() { return 0; }

// sub_104c9e0  (orig 0x104c9e0, ret_only)
void main_f_104c9e0() {}

// sub_104d1c0  (orig 0x104d1c0, getter)
uint64_t main_f_104d1c0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_104d330  (orig 0x104d330, mov_ret)
uint32_t main_f_104d330() { return 1; }

// sub_104d340  (orig 0x104d340, indexed-getter)
uint64_t main_f_104d340(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_104d350  (orig 0x104d350, indexed-getter)
uint64_t main_f_104d350(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_104dbb0  (orig 0x104dbb0, compare-pred)
bool main_f_104dbb0(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 80) - 1)) < (uint32_t)(2); }

// sub_104dbd0  (orig 0x104dbd0, getter)
uint32_t main_f_104dbd0(void* a0) { return *(uint32_t*)((char*)(a0) + 88); }

// sub_104e020  (orig 0x104e020, straight)
void main_f_104e020(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 361) = (uint8_t)k0;
}

// sub_104e030  (orig 0x104e030, setter)
void main_f_104e030(void* a0) { *(uint8_t*)((char*)(a0) + 361) = 0; }

// sub_104e0c0  (orig 0x104e0c0, straight)
void main_f_104e0c0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 362) = (uint8_t)k0;
}

// sub_104e0d0  (orig 0x104e0d0, setter)
void main_f_104e0d0(void* a0) { *(uint8_t*)((char*)(a0) + 362) = 0; }

// sub_104e2b0  (orig 0x104e2b0, ret_only)
void main_f_104e2b0() {}

// sub_104e330  (orig 0x104e330, ret_only)
void main_f_104e330() {}

// sub_104ecc0  (orig 0x104ecc0, ret_only)
void main_f_104ecc0() {}

// sub_104ecd0  (orig 0x104ecd0, ret_only)
void main_f_104ecd0() {}

// sub_10535f0  (orig 0x10535f0, ret_only)
void main_f_10535f0() {}

// sub_1053670  (orig 0x1053670, ret_only)
void main_f_1053670() {}

// sub_1054f40  (orig 0x1054f40, ret_only)
void main_f_1054f40() {}

// sub_1054f50  (orig 0x1054f50, ret_only)
void main_f_1054f50() {}

// sub_1054f60  (orig 0x1054f60, ret_only)
void main_f_1054f60() {}

// sub_10561a0  (orig 0x10561a0, ret_only)
void main_f_10561a0() {}

// sub_10561b0  (orig 0x10561b0, ret_only)
void main_f_10561b0() {}

// sub_10561c0  (orig 0x10561c0, ret_only)
void main_f_10561c0() {}

// sub_10561f0  (orig 0x10561f0, ret_only)
void main_f_10561f0() {}

// sub_1056200  (orig 0x1056200, copy2)
void main_f_1056200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1056210  (orig 0x1056210, copy2)
void main_f_1056210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1056260  (orig 0x1056260, ret_only)
void main_f_1056260() {}

// sub_1056270  (orig 0x1056270, copy2)
void main_f_1056270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1056280  (orig 0x1056280, copy2)
void main_f_1056280(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_10562b0  (orig 0x10562b0, ret_only)
void main_f_10562b0() {}

// sub_10562c0  (orig 0x10562c0, copy2)
void main_f_10562c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_10562d0  (orig 0x10562d0, copy2)
void main_f_10562d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_10563a0  (orig 0x10563a0, ret_only)
void main_f_10563a0() {}

// sub_10563b0  (orig 0x10563b0, copy2)
void main_f_10563b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_10563c0  (orig 0x10563c0, copy2)
void main_f_10563c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1058440  (orig 0x1058440, ret_only)
void main_f_1058440() {}

// sub_1058450  (orig 0x1058450, ret_only)
void main_f_1058450() {}

// sub_1058460  (orig 0x1058460, ret_only)
void main_f_1058460() {}

// sub_1058490  (orig 0x1058490, ret_only)
void main_f_1058490() {}

// sub_10584a0  (orig 0x10584a0, copy2)
void main_f_10584a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_10584b0  (orig 0x10584b0, copy2)
void main_f_10584b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_10584e0  (orig 0x10584e0, ret_only)
void main_f_10584e0() {}

// sub_10584f0  (orig 0x10584f0, copy2)
void main_f_10584f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1058500  (orig 0x1058500, copy2)
void main_f_1058500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1058530  (orig 0x1058530, ret_only)
void main_f_1058530() {}

// sub_1058540  (orig 0x1058540, copy2)
void main_f_1058540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1058550  (orig 0x1058550, copy2)
void main_f_1058550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1058620  (orig 0x1058620, ret_only)
void main_f_1058620() {}

// sub_1058630  (orig 0x1058630, copy2)
void main_f_1058630(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1058640  (orig 0x1058640, copy2)
void main_f_1058640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105a1f0  (orig 0x105a1f0, ret_only)
void main_f_105a1f0() {}

// sub_105a200  (orig 0x105a200, ret_only)
void main_f_105a200() {}

// sub_105a210  (orig 0x105a210, ret_only)
void main_f_105a210() {}

// sub_105a240  (orig 0x105a240, ret_only)
void main_f_105a240() {}

// sub_105a250  (orig 0x105a250, copy2)
void main_f_105a250(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105a260  (orig 0x105a260, copy2)
void main_f_105a260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105a2b0  (orig 0x105a2b0, ret_only)
void main_f_105a2b0() {}

// sub_105a2c0  (orig 0x105a2c0, copy2)
void main_f_105a2c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105a2d0  (orig 0x105a2d0, copy2)
void main_f_105a2d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105a300  (orig 0x105a300, ret_only)
void main_f_105a300() {}

// sub_105a310  (orig 0x105a310, copy2)
void main_f_105a310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105a320  (orig 0x105a320, copy2)
void main_f_105a320(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105a3f0  (orig 0x105a3f0, ret_only)
void main_f_105a3f0() {}

// sub_105a400  (orig 0x105a400, copy2)
void main_f_105a400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105a410  (orig 0x105a410, copy2)
void main_f_105a410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105b080  (orig 0x105b080, ret_only)
void main_f_105b080() {}

// sub_105b090  (orig 0x105b090, ret_only)
void main_f_105b090() {}

// sub_105b0a0  (orig 0x105b0a0, ret_only)
void main_f_105b0a0() {}

// sub_105b0d0  (orig 0x105b0d0, ret_only)
void main_f_105b0d0() {}

// sub_105b0e0  (orig 0x105b0e0, copy2)
void main_f_105b0e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105b0f0  (orig 0x105b0f0, copy2)
void main_f_105b0f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105b120  (orig 0x105b120, ret_only)
void main_f_105b120() {}

// sub_105b130  (orig 0x105b130, copy2)
void main_f_105b130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105b140  (orig 0x105b140, copy2)
void main_f_105b140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105b210  (orig 0x105b210, ret_only)
void main_f_105b210() {}

// sub_105b220  (orig 0x105b220, copy2)
void main_f_105b220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105b230  (orig 0x105b230, copy2)
void main_f_105b230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_105c3e0  (orig 0x105c3e0, ret_only)
void main_f_105c3e0() {}

// sub_105c460  (orig 0x105c460, ret_only)
void main_f_105c460() {}

// sub_105e1b0  (orig 0x105e1b0, ret_only)
void main_f_105e1b0() {}

// sub_105e1d0  (orig 0x105e1d0, ret_only)
void main_f_105e1d0() {}

// sub_105e220  (orig 0x105e220, ret_only)
void main_f_105e220() {}

// sub_105e230  (orig 0x105e230, mov_ret)
uint32_t main_f_105e230() { return 1; }

// sub_105e240  (orig 0x105e240, indexed-getter)
uint64_t main_f_105e240(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_105e250  (orig 0x105e250, indexed-getter)
uint64_t main_f_105e250(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_105e280  (orig 0x105e280, ret_only)
void main_f_105e280() {}

// sub_105e310  (orig 0x105e310, mov_ret)
uint32_t main_f_105e310() { return 65535; }

// sub_105e430  (orig 0x105e430, ret_only)
void main_f_105e430() {}

// sub_105e440  (orig 0x105e440, ret_only)
void main_f_105e440() {}

// sub_105e4c0  (orig 0x105e4c0, ret_only)
void main_f_105e4c0() {}

// sub_1061af0  (orig 0x1061af0, ret_only)
void main_f_1061af0() {}

// sub_1061b70  (orig 0x1061b70, ret_only)
void main_f_1061b70() {}

// sub_1062330  (orig 0x1062330, ret_only)
void main_f_1062330() {}

// sub_1062340  (orig 0x1062340, ret_only)
void main_f_1062340() {}

// sub_1062350  (orig 0x1062350, getter)
uint64_t main_f_1062350(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_1062370  (orig 0x1062370, ptr_add)
void* main_f_1062370(void* a0) { return (char*)a0 + 672; }

// sub_1064e20  (orig 0x1064e20, ptr_add)
void* main_f_1064e20(void* a0) { return (char*)a0 + 192; }

// sub_106b070  (orig 0x106b070, ret_only)
void main_f_106b070() {}

// sub_106b080  (orig 0x106b080, ptr_add)
void* main_f_106b080(void* a0) { return (char*)a0 + 40; }

// sub_106b090  (orig 0x106b090, ptr_add)
void* main_f_106b090(void* a0) { return (char*)a0 + 56; }

// sub_106b4d0  (orig 0x106b4d0, getter)
uint64_t main_f_106b4d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_106b4e0  (orig 0x106b4e0, getter)
uint64_t main_f_106b4e0(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_106b4f0  (orig 0x106b4f0, straight)
void main_f_106b4f0(void* a0) {
    *(uint64_t*)((char*)(a0) + 16) = *(uint64_t*)((char*)(a0) + 8);
    *(uint64_t*)((char*)(a0) + 64) = *(uint64_t*)((char*)(a0) + 56);
}

// sub_106b510  (orig 0x106b510, copy2)
void main_f_106b510(void* a0) { *(uint64_t*)((char*)(a0) + 64) = *(uint64_t*)((char*)(a0) + 56); }

// sub_106b690  (orig 0x106b690, getter)
uint32_t main_f_106b690(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_106b6a0  (orig 0x106b6a0, getter)
uint16_t main_f_106b6a0(void* a0) { return *(uint16_t*)((char*)(a0) + 4); }

// sub_106bb10  (orig 0x106bb10, ret_only)
void main_f_106bb10() {}

// sub_106bb20  (orig 0x106bb20, ptr_add)
void* main_f_106bb20(void* a0) { return (char*)a0 + 96; }

// sub_106bb30  (orig 0x106bb30, ptr_add)
void* main_f_106bb30(void* a0) { return (char*)a0 + 192; }

// sub_106bb40  (orig 0x106bb40, ptr_add)
void* main_f_106bb40(void* a0) { return (char*)a0 + 288; }

// sub_106bb50  (orig 0x106bb50, ptr_add)
void* main_f_106bb50(void* a0) { return (char*)a0 + 384; }

// sub_106c0e0  (orig 0x106c0e0, setter-chain)
void main_f_106c0e0(void* a0) { *(uint64_t*)((char*)(a0) + 72) = 0; *(uint64_t*)((char*)(a0) + 168) = 0; *(uint64_t*)((char*)(a0) + 264) = 0; *(uint64_t*)((char*)(a0) + 360) = 0; *(uint64_t*)((char*)(a0) + 456) = 0; }

// sub_106d070  (orig 0x106d070, ptr_add)
void* main_f_106d070(void* a0) { return (char*)a0 + 8; }

// sub_106d0e0  (orig 0x106d0e0, getter)
uint64_t main_f_106d0e0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_106da00  (orig 0x106da00, ret_only)
void main_f_106da00() {}

// sub_106da10  (orig 0x106da10, ret_only)
void main_f_106da10() {}

// sub_106da20  (orig 0x106da20, ret_only)
void main_f_106da20() {}

// sub_106da30  (orig 0x106da30, ret_only)
void main_f_106da30() {}

// sub_106da40  (orig 0x106da40, ret_only)
void main_f_106da40() {}

// sub_106da50  (orig 0x106da50, ret_only)
void main_f_106da50() {}

// sub_106db10  (orig 0x106db10, compare)
bool main_f_106db10(void* a0, void* a1) { return (uint64_t)(*(uint64_t*)((char*)(a0))) == (uint64_t)(*(uint64_t*)((char*)(a1))); }

// sub_106db80  (orig 0x106db80, ret_only)
void main_f_106db80() {}

// sub_106db90  (orig 0x106db90, mov_ret)
uint32_t main_f_106db90() { return 1; }

// sub_106dba0  (orig 0x106dba0, ret_only)
void main_f_106dba0() {}

// sub_106dc30  (orig 0x106dc30, setter-chain-zero)
void main_f_106dc30(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 24) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 8) = (struct u64x2){ 0, 0 };
}

// sub_106de90  (orig 0x106de90, ret_only)
void main_f_106de90() {}

// sub_106dea0  (orig 0x106dea0, ptr_add)
void* main_f_106dea0(void* a0) { return (char*)a0 + 16; }

// sub_106deb0  (orig 0x106deb0, getter)
uint64_t main_f_106deb0(void* a0) { return *(uint64_t*)((char*)(a0) + 32); }

// sub_106dfd0  (orig 0x106dfd0, ret_only)
void main_f_106dfd0() {}

// sub_106e2d0  (orig 0x106e2d0, ptr_add)
void* main_f_106e2d0(void* a0) { return (char*)a0 + 4; }

// sub_106e2e0  (orig 0x106e2e0, ret_only)
void main_f_106e2e0() {}

// sub_106e2f0  (orig 0x106e2f0, ptr_add)
void* main_f_106e2f0(void* a0) { return (char*)a0 + 8; }

// sub_106e300  (orig 0x106e300, ptr_add)
void* main_f_106e300(void* a0) { return (char*)a0 + 12; }

// sub_106e9f0  (orig 0x106e9f0, compare)
bool main_f_106e9f0(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) != (uint64_t)(255); }

// sub_106ea00  (orig 0x106ea00, getter)
uint8_t main_f_106ea00(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_106ea10  (orig 0x106ea10, ptr_add)
void* main_f_106ea10(void* a0) { return (char*)a0 + 4; }

// sub_106ea20  (orig 0x106ea20, ptr_add)
void* main_f_106ea20(void* a0) { return (char*)a0 + 36; }

// sub_106ea30  (orig 0x106ea30, getter)
uint32_t main_f_106ea30(void* a0) { return *(uint32_t*)((char*)(a0) + 64); }

// sub_106ea40  (orig 0x106ea40, getter)
uint8_t main_f_106ea40(void* a0) { return *(uint8_t*)((char*)(a0) + 68); }

// sub_106eab0  (orig 0x106eab0, getter)
uint8_t main_f_106eab0(void* a0) { return *(uint8_t*)((char*)(a0) + 69); }

// sub_106eac0  (orig 0x106eac0, setter)
void main_f_106eac0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 69) = a1; }

// sub_106ead0  (orig 0x106ead0, getter)
uint16_t main_f_106ead0(void* a0) { return *(uint16_t*)((char*)(a0) + 70); }

// sub_106eae0  (orig 0x106eae0, setter)
void main_f_106eae0(void* a0, uint16_t a1) { *(uint16_t*)((char*)(a0) + 70) = a1; }

// sub_106eaf0  (orig 0x106eaf0, getter)
uint8_t main_f_106eaf0(void* a0) { return *(uint8_t*)((char*)(a0) + 72); }

// sub_106eb10  (orig 0x106eb10, compare-pred)
bool main_f_106eb10(void* a0) { return (uint32_t)((*(uint8_t*)(char*)a0 - 17)) < (uint32_t)(10); }

// sub_106f360  (orig 0x106f360, getter)
uint8_t main_f_106f360(void* a0) { return *(uint8_t*)((char*)(a0) + 28); }

// sub_106f370  (orig 0x106f370, getter)
uint8_t main_f_106f370(void* a0) { return *(uint8_t*)((char*)(a0) + 29); }

// sub_106f380  (orig 0x106f380, getter)
uint8_t main_f_106f380(void* a0) { return *(uint8_t*)((char*)(a0) + 30); }

// sub_106f390  (orig 0x106f390, getter)
uint8_t main_f_106f390(void* a0) { return *(uint8_t*)((char*)(a0) + 31); }

// sub_106f3a0  (orig 0x106f3a0, getter)
uint8_t main_f_106f3a0(void* a0) { return *(uint8_t*)((char*)(a0) + 32); }

// sub_106f3b0  (orig 0x106f3b0, getter)
uint8_t main_f_106f3b0(void* a0) { return *(uint8_t*)((char*)(a0) + 33); }

// sub_106f3c0  (orig 0x106f3c0, getter)
uint32_t main_f_106f3c0(void* a0) { return *(uint32_t*)((char*)(a0) + 36); }

// sub_106f3d0  (orig 0x106f3d0, getter)
uint16_t main_f_106f3d0(void* a0) { return *(uint16_t*)((char*)(a0) + 40); }

// sub_106f3e0  (orig 0x106f3e0, getter)
uint8_t main_f_106f3e0(void* a0) { return *(uint8_t*)((char*)(a0) + 42); }

// sub_106f3f0  (orig 0x106f3f0, getter)
uint8_t main_f_106f3f0(void* a0) { return *(uint8_t*)((char*)(a0) + 43); }

// sub_106fcf0  (orig 0x106fcf0, ret_only)
void main_f_106fcf0() {}

// sub_106fd00  (orig 0x106fd00, getter)
uint32_t main_f_106fd00(void* a0) { return *(uint32_t*)((char*)(a0) + 28); }

// sub_106fd30  (orig 0x106fd30, getter)
uint8_t main_f_106fd30(void* a0) { return *(uint8_t*)((char*)(a0) + 36); }

// sub_106fd40  (orig 0x106fd40, getter)
uint8_t main_f_106fd40(void* a0) { return *(uint8_t*)((char*)(a0) + 37); }

// sub_1074c90  (orig 0x1074c90, setter-chain)
void main_f_1074c90(void* a0) { *(uint32_t*)((char*)(a0)) = 0; *(uint16_t*)((char*)(a0) + 4) = 0; *(uint32_t*)((char*)(a0) + 8) = 0; *(uint16_t*)((char*)(a0) + 12) = 0; *(uint8_t*)((char*)(a0) + 24) = 0; *(uint64_t*)((char*)(a0) + 16) = 0; }

// sub_1074fe0  (orig 0x1074fe0, compare)
bool main_f_1074fe0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_1074ff0  (orig 0x1074ff0, getter)
uint32_t main_f_1074ff0(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_1075000  (orig 0x1075000, getter)
uint16_t main_f_1075000(void* a0) { return *(uint16_t*)((char*)(a0) + 4); }

// sub_1075010  (orig 0x1075010, getter)
uint32_t main_f_1075010(void* a0) { return *(uint32_t*)((char*)(a0) + 8); }

// sub_1075020  (orig 0x1075020, getter)
uint8_t main_f_1075020(void* a0) { return *(uint8_t*)((char*)(a0) + 12); }

// sub_1075030  (orig 0x1075030, getter)
uint8_t main_f_1075030(void* a0) { return *(uint8_t*)((char*)(a0) + 13); }

// sub_1075040  (orig 0x1075040, getter)
uint32_t main_f_1075040(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_1075050  (orig 0x1075050, getter)
uint32_t main_f_1075050(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1075060  (orig 0x1075060, getter)
uint8_t main_f_1075060(void* a0) { return *(uint8_t*)((char*)(a0) + 24); }

// sub_10758d0  (orig 0x10758d0, setter-chain-zero)
void main_f_10758d0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint16_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 32) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 16) = (struct u64x2){ 0, 0 };
}

// sub_10759b0  (orig 0x10759b0, getter)
uint8_t main_f_10759b0(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_10759c0  (orig 0x10759c0, getter)
float main_f_10759c0(void* a0) { return *(float*)((char*)(a0) + 32); }

// sub_1076130  (orig 0x1076130, compare)
bool main_f_1076130(void* a0) { return (uint8_t)(*(uint8_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_1076140  (orig 0x1076140, getter)
uint8_t main_f_1076140(void* a0) { return *(uint8_t*)((char*)(a0)); }

// sub_1076150  (orig 0x1076150, getter)
uint8_t main_f_1076150(void* a0) { return *(uint8_t*)((char*)(a0) + 1); }

// sub_1076160  (orig 0x1076160, getter)
uint8_t main_f_1076160(void* a0) { return *(uint8_t*)((char*)(a0) + 2); }

// sub_1076170  (orig 0x1076170, getter)
uint8_t main_f_1076170(void* a0) { return *(uint8_t*)((char*)(a0) + 3); }

// sub_1076260  (orig 0x1076260, ptr_add)
void* main_f_1076260(void* a0) { return (char*)a0 + 16; }

// sub_10783f0  (orig 0x10783f0, ptr_add)
void* main_f_10783f0(void* a0) { return (char*)a0 + 488; }

// sub_1078400  (orig 0x1078400, ptr_add)
void* main_f_1078400(void* a0) { return (char*)a0 + 400; }

// sub_1078410  (orig 0x1078410, ptr_add)
void* main_f_1078410(void* a0) { return (char*)a0 + 224; }

// sub_1078420  (orig 0x1078420, ptr_add)
void* main_f_1078420(void* a0) { return (char*)a0 + 144; }

// sub_1078430  (orig 0x1078430, ptr_add)
void* main_f_1078430(void* a0) { return (char*)a0 + 96; }

// sub_1078440  (orig 0x1078440, ptr_add)
void* main_f_1078440(void* a0) { return (char*)a0 + 76; }

// sub_1078450  (orig 0x1078450, ptr_add)
void* main_f_1078450(void* a0) { return (char*)a0 + 40; }

// sub_1078460  (orig 0x1078460, ptr_add)
void* main_f_1078460(void* a0) { return (char*)a0 + 528; }

// sub_1078470  (orig 0x1078470, ptr_add)
void* main_f_1078470(void* a0) { return (char*)a0 + 536; }

// sub_1078480  (orig 0x1078480, ptr_add)
void* main_f_1078480(void* a0) { return (char*)a0 + 544; }

// sub_1078490  (orig 0x1078490, ptr_add)
void* main_f_1078490(void* a0) { return (char*)a0 + 552; }

// sub_10784a0  (orig 0x10784a0, ptr_add)
void* main_f_10784a0(void* a0) { return (char*)a0 + 560; }

// sub_1078500  (orig 0x1078500, copy2)
void main_f_1078500(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 528) = *(uint64_t*)((char*)(a1)); }

// sub_1078510  (orig 0x1078510, copy2)
void main_f_1078510(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 536) = *(uint32_t*)((char*)(a1)); }

// sub_1078630  (orig 0x1078630, ret_only)
void main_f_1078630() {}

// sub_1078800  (orig 0x1078800, getter)
uint32_t main_f_1078800(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1078810  (orig 0x1078810, setter)
void main_f_1078810(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10789c0  (orig 0x10789c0, straight)
void main_f_10789c0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10789d0  (orig 0x10789d0, setter)
void main_f_10789d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10789e0  (orig 0x10789e0, getter)
uint64_t main_f_10789e0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10789f0  (orig 0x10789f0, getter)
uint8_t main_f_10789f0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_1078e90  (orig 0x1078e90, getter)
uint32_t main_f_1078e90(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1078ea0  (orig 0x1078ea0, setter)
void main_f_1078ea0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_1079190  (orig 0x1079190, straight)
void main_f_1079190(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10791a0  (orig 0x10791a0, setter)
void main_f_10791a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10791b0  (orig 0x10791b0, getter)
uint64_t main_f_10791b0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10791c0  (orig 0x10791c0, getter)
uint8_t main_f_10791c0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10794b0  (orig 0x10794b0, getter)
uint32_t main_f_10794b0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1079610  (orig 0x1079610, setter)
void main_f_1079610(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_1079940  (orig 0x1079940, straight)
void main_f_1079940(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_1079950  (orig 0x1079950, setter)
void main_f_1079950(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1079960  (orig 0x1079960, getter)
uint64_t main_f_1079960(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1079970  (orig 0x1079970, getter)
uint8_t main_f_1079970(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_1079c00  (orig 0x1079c00, getter)
uint32_t main_f_1079c00(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_1079c10  (orig 0x1079c10, setter)
void main_f_1079c10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_1079c20  (orig 0x1079c20, mov_ret)
uint32_t main_f_1079c20() { return 1; }

// sub_1079d10  (orig 0x1079d10, straight)
void main_f_1079d10(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_1079d20  (orig 0x1079d20, setter)
void main_f_1079d20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1079d30  (orig 0x1079d30, getter)
uint64_t main_f_1079d30(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1079d40  (orig 0x1079d40, getter)
uint8_t main_f_1079d40(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_107a2b0  (orig 0x107a2b0, getter)
uint32_t main_f_107a2b0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_107a2c0  (orig 0x107a2c0, setter)
void main_f_107a2c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_107a580  (orig 0x107a580, straight)
void main_f_107a580(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_107a590  (orig 0x107a590, setter)
void main_f_107a590(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_107a5a0  (orig 0x107a5a0, getter)
uint64_t main_f_107a5a0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_107a5b0  (orig 0x107a5b0, getter)
uint8_t main_f_107a5b0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_107aaf0  (orig 0x107aaf0, getter)
uint32_t main_f_107aaf0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_107ab30  (orig 0x107ab30, setter)
void main_f_107ab30(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_107ac90  (orig 0x107ac90, mov_ret)
uint32_t main_f_107ac90() { return 1; }

// sub_107b0e0  (orig 0x107b0e0, straight)
void main_f_107b0e0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_107b0f0  (orig 0x107b0f0, setter)
void main_f_107b0f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_107b100  (orig 0x107b100, getter)
uint64_t main_f_107b100(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_107b110  (orig 0x107b110, getter)
uint8_t main_f_107b110(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_107b120  (orig 0x107b120, ret_only)
void main_f_107b120() {}

// sub_107b130  (orig 0x107b130, ret_only)
void main_f_107b130() {}

// sub_107b140  (orig 0x107b140, ret_only)
void main_f_107b140() {}

// sub_107b150  (orig 0x107b150, ret_only)
void main_f_107b150() {}

// sub_107b160  (orig 0x107b160, ret_only)
void main_f_107b160() {}

// sub_107b170  (orig 0x107b170, ret_only)
void main_f_107b170() {}

// sub_107b180  (orig 0x107b180, ret_only)
void main_f_107b180() {}

// sub_107b190  (orig 0x107b190, ret_only)
void main_f_107b190() {}

// sub_107b1a0  (orig 0x107b1a0, ret_only)
void main_f_107b1a0() {}

// sub_107b1b0  (orig 0x107b1b0, ret_only)
void main_f_107b1b0() {}

// sub_107b1c0  (orig 0x107b1c0, ret_only)
void main_f_107b1c0() {}

// sub_107b1d0  (orig 0x107b1d0, ret_only)
void main_f_107b1d0() {}

// sub_107b420  (orig 0x107b420, ret_only)
void main_f_107b420() {}

// sub_1085ed0  (orig 0x1085ed0, ret_only)
void main_f_1085ed0() {}

// sub_1085ee0  (orig 0x1085ee0, ret_only)
void main_f_1085ee0() {}

// sub_1085ef0  (orig 0x1085ef0, ret_only)
void main_f_1085ef0() {}

// sub_1086b00  (orig 0x1086b00, ret_only)
void main_f_1086b00() {}

// sub_1086b10  (orig 0x1086b10, ret_only)
void main_f_1086b10() {}

// sub_1086b20  (orig 0x1086b20, ret_only)
void main_f_1086b20() {}

// sub_1086ce0  (orig 0x1086ce0, copy-chain-store)
void main_f_1086ce0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1086db0  (orig 0x1086db0, copy-chain-store)
void main_f_1086db0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1088190  (orig 0x1088190, ret_only)
void main_f_1088190() {}

// sub_10881a0  (orig 0x10881a0, ret_only)
void main_f_10881a0() {}

// sub_10881b0  (orig 0x10881b0, ret_only)
void main_f_10881b0() {}

// sub_1088350  (orig 0x1088350, copy-chain-store)
void main_f_1088350(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1088420  (orig 0x1088420, copy-chain-store)
void main_f_1088420(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1089d90  (orig 0x1089d90, ret_only)
void main_f_1089d90() {}

// sub_1089da0  (orig 0x1089da0, ret_only)
void main_f_1089da0() {}

// sub_1089db0  (orig 0x1089db0, ret_only)
void main_f_1089db0() {}

// sub_108aa30  (orig 0x108aa30, copy-chain-store)
void main_f_108aa30(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_108aae0  (orig 0x108aae0, copy-chain-store)
void main_f_108aae0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_108abb0  (orig 0x108abb0, copy-chain-store)
void main_f_108abb0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_108c220  (orig 0x108c220, ret_only)
void main_f_108c220() {}

// sub_108c230  (orig 0x108c230, ret_only)
void main_f_108c230() {}

// sub_108c240  (orig 0x108c240, ret_only)
void main_f_108c240() {}

// sub_108cfb0  (orig 0x108cfb0, copy-chain-store)
void main_f_108cfb0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_108d080  (orig 0x108d080, copy-chain-store)
void main_f_108d080(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_108e8b0  (orig 0x108e8b0, ret_only)
void main_f_108e8b0() {}

// sub_108e8c0  (orig 0x108e8c0, ret_only)
void main_f_108e8c0() {}

// sub_108e8d0  (orig 0x108e8d0, ret_only)
void main_f_108e8d0() {}

// sub_108ea40  (orig 0x108ea40, copy-chain-store)
void main_f_108ea40(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_108eb10  (orig 0x108eb10, copy-chain-store)
void main_f_108eb10(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10906c0  (orig 0x10906c0, ret_only)
void main_f_10906c0() {}

// sub_10906d0  (orig 0x10906d0, ret_only)
void main_f_10906d0() {}

// sub_10906e0  (orig 0x10906e0, ret_only)
void main_f_10906e0() {}

// sub_1091480  (orig 0x1091480, copy-chain-store)
void main_f_1091480(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1091550  (orig 0x1091550, copy-chain-store)
void main_f_1091550(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10935b0  (orig 0x10935b0, ret_only)
void main_f_10935b0() {}

// sub_10935c0  (orig 0x10935c0, ret_only)
void main_f_10935c0() {}

// sub_10935d0  (orig 0x10935d0, ret_only)
void main_f_10935d0() {}

// sub_1094370  (orig 0x1094370, copy-chain-store)
void main_f_1094370(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1094440  (orig 0x1094440, copy-chain-store)
void main_f_1094440(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10959f0  (orig 0x10959f0, ret_only)
void main_f_10959f0() {}

// sub_1095a00  (orig 0x1095a00, ret_only)
void main_f_1095a00() {}

// sub_1095a10  (orig 0x1095a10, ret_only)
void main_f_1095a10() {}

// sub_1095b80  (orig 0x1095b80, copy-chain-store)
void main_f_1095b80(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1095c50  (orig 0x1095c50, copy-chain-store)
void main_f_1095c50(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10975a0  (orig 0x10975a0, ret_only)
void main_f_10975a0() {}

// sub_10975b0  (orig 0x10975b0, ret_only)
void main_f_10975b0() {}

// sub_10975c0  (orig 0x10975c0, ret_only)
void main_f_10975c0() {}

// sub_1097730  (orig 0x1097730, copy-chain-store)
void main_f_1097730(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1097800  (orig 0x1097800, copy-chain-store)
void main_f_1097800(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1098860  (orig 0x1098860, ret_only)
void main_f_1098860() {}

// sub_1098870  (orig 0x1098870, ret_only)
void main_f_1098870() {}

// sub_1098880  (orig 0x1098880, ret_only)
void main_f_1098880() {}

// sub_1098a10  (orig 0x1098a10, copy-chain-store)
void main_f_1098a10(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1098ae0  (orig 0x1098ae0, copy-chain-store)
void main_f_1098ae0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1099640  (orig 0x1099640, ret_only)
void main_f_1099640() {}

// sub_1099650  (orig 0x1099650, ret_only)
void main_f_1099650() {}

// sub_1099660  (orig 0x1099660, ret_only)
void main_f_1099660() {}

// sub_10996e0  (orig 0x10996e0, copy-chain-store)
void main_f_10996e0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1099760  (orig 0x1099760, copy-chain-store)
void main_f_1099760(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1099830  (orig 0x1099830, copy-chain-store)
void main_f_1099830(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_109b2f0  (orig 0x109b2f0, ret_only)
void main_f_109b2f0() {}

// sub_109b300  (orig 0x109b300, ret_only)
void main_f_109b300() {}

// sub_109b310  (orig 0x109b310, ret_only)
void main_f_109b310() {}

// sub_109c0d0  (orig 0x109c0d0, copy-chain-store)
void main_f_109c0d0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_109c1a0  (orig 0x109c1a0, copy-chain-store)
void main_f_109c1a0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_109d650  (orig 0x109d650, ret_only)
void main_f_109d650() {}

// sub_109d660  (orig 0x109d660, ret_only)
void main_f_109d660() {}

// sub_109d670  (orig 0x109d670, ret_only)
void main_f_109d670() {}

// sub_109d800  (orig 0x109d800, copy-chain-store)
void main_f_109d800(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_109d8d0  (orig 0x109d8d0, copy-chain-store)
void main_f_109d8d0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_109d960  (orig 0x109d960, ret_only)
void main_f_109d960() {}

// sub_109d970  (orig 0x109d970, ret_only)
void main_f_109d970() {}

// sub_109d980  (orig 0x109d980, ret_only)
void main_f_109d980() {}

// sub_109d990  (orig 0x109d990, ret_only)
void main_f_109d990() {}

// sub_109d9a0  (orig 0x109d9a0, ret_only)
void main_f_109d9a0() {}

// sub_109d9b0  (orig 0x109d9b0, ret_only)
void main_f_109d9b0() {}

// sub_109d9c0  (orig 0x109d9c0, ret_only)
void main_f_109d9c0() {}

// sub_109d9d0  (orig 0x109d9d0, ret_only)
void main_f_109d9d0() {}

// sub_109d9e0  (orig 0x109d9e0, ret_only)
void main_f_109d9e0() {}

// sub_109d9f0  (orig 0x109d9f0, ret_only)
void main_f_109d9f0() {}

// sub_109da00  (orig 0x109da00, ret_only)
void main_f_109da00() {}

// sub_109db50  (orig 0x109db50, straight)
void main_f_109db50(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)k0;
}

// sub_109db60  (orig 0x109db60, straight)
void main_f_109db60(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)k0;
}

// sub_109df30  (orig 0x109df30, getter)
uint32_t main_f_109df30(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_109df40  (orig 0x109df40, setter)
void main_f_109df40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_109df50  (orig 0x109df50, mov_ret)
uint32_t main_f_109df50() { return 1; }

// sub_109e3d0  (orig 0x109e3d0, ret_only)
void main_f_109e3d0() {}

// sub_109e540  (orig 0x109e540, straight)
void main_f_109e540(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_109e550  (orig 0x109e550, setter)
void main_f_109e550(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_109e560  (orig 0x109e560, getter)
uint64_t main_f_109e560(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_109e570  (orig 0x109e570, getter)
uint8_t main_f_109e570(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_109ef80  (orig 0x109ef80, getter)
uint32_t main_f_109ef80(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_109ef90  (orig 0x109ef90, setter)
void main_f_109ef90(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_109efa0  (orig 0x109efa0, mov_ret)
uint32_t main_f_109efa0() { return 1; }

// sub_109f580  (orig 0x109f580, straight)
void main_f_109f580(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_109f590  (orig 0x109f590, setter)
void main_f_109f590(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_109f5a0  (orig 0x109f5a0, getter)
uint64_t main_f_109f5a0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_109f5b0  (orig 0x109f5b0, getter)
uint8_t main_f_109f5b0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a01a0  (orig 0x10a01a0, getter)
uint32_t main_f_10a01a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a01b0  (orig 0x10a01b0, setter)
void main_f_10a01b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a01c0  (orig 0x10a01c0, mov_ret)
uint32_t main_f_10a01c0() { return 1; }

// sub_10a07a0  (orig 0x10a07a0, straight)
void main_f_10a07a0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10a07b0  (orig 0x10a07b0, setter)
void main_f_10a07b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a07c0  (orig 0x10a07c0, getter)
uint64_t main_f_10a07c0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a07d0  (orig 0x10a07d0, getter)
uint8_t main_f_10a07d0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a0c10  (orig 0x10a0c10, straight)
void main_f_10a0c10(void* a0) {
    uint32_t k0 = 257;
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)k0;
}

// sub_10a0c20  (orig 0x10a0c20, straight)
void main_f_10a0c20(void* a0) {
    uint32_t k0 = 257;
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)k0;
}

// sub_10a0c30  (orig 0x10a0c30, straight)
void main_f_10a0c30(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)k0;
}

// sub_10a0c40  (orig 0x10a0c40, straight)
void main_f_10a0c40(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)k0;
}

// sub_10a11b0  (orig 0x10a11b0, getter)
uint32_t main_f_10a11b0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a11c0  (orig 0x10a11c0, setter)
void main_f_10a11c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a11d0  (orig 0x10a11d0, mov_ret)
uint32_t main_f_10a11d0() { return 1; }

// sub_10a15a0  (orig 0x10a15a0, straight)
void main_f_10a15a0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10a15b0  (orig 0x10a15b0, setter)
void main_f_10a15b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a15c0  (orig 0x10a15c0, getter)
uint64_t main_f_10a15c0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a15d0  (orig 0x10a15d0, getter)
uint8_t main_f_10a15d0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a1fa0  (orig 0x10a1fa0, straight)
void main_f_10a1fa0(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)k0;
}

// sub_10a1fb0  (orig 0x10a1fb0, straight)
void main_f_10a1fb0(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)k0;
}

// sub_10a22b0  (orig 0x10a22b0, getter)
uint32_t main_f_10a22b0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a22c0  (orig 0x10a22c0, setter)
void main_f_10a22c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a22d0  (orig 0x10a22d0, mov_ret)
uint32_t main_f_10a22d0() { return 1; }

// sub_10a28b0  (orig 0x10a28b0, straight)
void main_f_10a28b0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10a28c0  (orig 0x10a28c0, setter)
void main_f_10a28c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a28d0  (orig 0x10a28d0, getter)
uint64_t main_f_10a28d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a28e0  (orig 0x10a28e0, getter)
uint8_t main_f_10a28e0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a3560  (orig 0x10a3560, getter)
uint32_t main_f_10a3560(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a3570  (orig 0x10a3570, setter)
void main_f_10a3570(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a3580  (orig 0x10a3580, mov_ret)
uint32_t main_f_10a3580() { return 1; }

// sub_10a3a00  (orig 0x10a3a00, ret_only)
void main_f_10a3a00() {}

// sub_10a3a10  (orig 0x10a3a10, ret_only)
void main_f_10a3a10() {}

// sub_10a3a20  (orig 0x10a3a20, ret_only)
void main_f_10a3a20() {}

// sub_10a3a30  (orig 0x10a3a30, ret_only)
void main_f_10a3a30() {}

// sub_10a3a40  (orig 0x10a3a40, ret_only)
void main_f_10a3a40() {}

// sub_10a3bb0  (orig 0x10a3bb0, straight)
void main_f_10a3bb0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10a3bc0  (orig 0x10a3bc0, setter)
void main_f_10a3bc0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a3bd0  (orig 0x10a3bd0, getter)
uint64_t main_f_10a3bd0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a3be0  (orig 0x10a3be0, getter)
uint8_t main_f_10a3be0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a4170  (orig 0x10a4170, straight)
void main_f_10a4170(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)k0;
}

// sub_10a4180  (orig 0x10a4180, straight)
void main_f_10a4180(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)k0;
}

// sub_10a46a0  (orig 0x10a46a0, getter)
uint32_t main_f_10a46a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a46b0  (orig 0x10a46b0, setter)
void main_f_10a46b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a4800  (orig 0x10a4800, mov_ret)
uint32_t main_f_10a4800() { return 1; }

// sub_10a4c80  (orig 0x10a4c80, ret_only)
void main_f_10a4c80() {}

// sub_10a4df0  (orig 0x10a4df0, straight)
void main_f_10a4df0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10a4e00  (orig 0x10a4e00, setter)
void main_f_10a4e00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a4e10  (orig 0x10a4e10, getter)
uint64_t main_f_10a4e10(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a4e20  (orig 0x10a4e20, getter)
uint8_t main_f_10a4e20(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a5580  (orig 0x10a5580, getter)
uint32_t main_f_10a5580(void* a0) { return *(uint32_t*)((char*)(a0) + 12); }

// sub_10a5590  (orig 0x10a5590, getter)
uint32_t main_f_10a5590(void* a0) { return *(uint32_t*)((char*)(a0) + 16); }

// sub_10a5fb0  (orig 0x10a5fb0, getter)
uint32_t main_f_10a5fb0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a5fc0  (orig 0x10a5fc0, setter)
void main_f_10a5fc0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a5fd0  (orig 0x10a5fd0, mov_ret)
uint32_t main_f_10a5fd0() { return 1; }

// sub_10a65b0  (orig 0x10a65b0, straight)
void main_f_10a65b0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10a65c0  (orig 0x10a65c0, setter)
void main_f_10a65c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a65d0  (orig 0x10a65d0, getter)
uint64_t main_f_10a65d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a65e0  (orig 0x10a65e0, getter)
uint8_t main_f_10a65e0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a6b30  (orig 0x10a6b30, straight)
void main_f_10a6b30(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)k0;
}

// sub_10a6b40  (orig 0x10a6b40, straight)
void main_f_10a6b40(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)k0;
}

// sub_10a7070  (orig 0x10a7070, getter)
uint32_t main_f_10a7070(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a7080  (orig 0x10a7080, setter)
void main_f_10a7080(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a71d0  (orig 0x10a71d0, mov_ret)
uint32_t main_f_10a71d0() { return 1; }

// sub_10a77b0  (orig 0x10a77b0, straight)
void main_f_10a77b0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10a77c0  (orig 0x10a77c0, setter)
void main_f_10a77c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a77d0  (orig 0x10a77d0, getter)
uint64_t main_f_10a77d0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a77e0  (orig 0x10a77e0, getter)
uint8_t main_f_10a77e0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a82f0  (orig 0x10a82f0, getter)
uint32_t main_f_10a82f0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a8300  (orig 0x10a8300, setter)
void main_f_10a8300(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a8310  (orig 0x10a8310, mov_ret)
uint32_t main_f_10a8310() { return 1; }

// sub_10a85d0  (orig 0x10a85d0, straight)
void main_f_10a85d0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10a85e0  (orig 0x10a85e0, setter)
void main_f_10a85e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a85f0  (orig 0x10a85f0, getter)
uint64_t main_f_10a85f0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a8600  (orig 0x10a8600, getter)
uint8_t main_f_10a8600(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a8b40  (orig 0x10a8b40, getter)
uint32_t main_f_10a8b40(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a8b50  (orig 0x10a8b50, setter)
void main_f_10a8b50(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a8b60  (orig 0x10a8b60, mov_ret)
uint32_t main_f_10a8b60() { return 1; }

// sub_10a8d70  (orig 0x10a8d70, straight)
void main_f_10a8d70(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10a8d80  (orig 0x10a8d80, setter)
void main_f_10a8d80(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a8d90  (orig 0x10a8d90, getter)
uint64_t main_f_10a8d90(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a8da0  (orig 0x10a8da0, getter)
uint8_t main_f_10a8da0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a8db0  (orig 0x10a8db0, ret_only)
void main_f_10a8db0() {}

// sub_10a93e0  (orig 0x10a93e0, getter)
uint32_t main_f_10a93e0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a93f0  (orig 0x10a93f0, setter)
void main_f_10a93f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a9400  (orig 0x10a9400, mov_ret)
uint32_t main_f_10a9400() { return 1; }

// sub_10a97d0  (orig 0x10a97d0, straight)
void main_f_10a97d0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10a97e0  (orig 0x10a97e0, setter)
void main_f_10a97e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10a97f0  (orig 0x10a97f0, getter)
uint64_t main_f_10a97f0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10a9800  (orig 0x10a9800, getter)
uint8_t main_f_10a9800(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10a9d90  (orig 0x10a9d90, getter)
uint32_t main_f_10a9d90(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10a9da0  (orig 0x10a9da0, setter)
void main_f_10a9da0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10a9db0  (orig 0x10a9db0, mov_ret)
uint32_t main_f_10a9db0() { return 1; }

// sub_10aa390  (orig 0x10aa390, straight)
void main_f_10aa390(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10aa3a0  (orig 0x10aa3a0, setter)
void main_f_10aa3a0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10aa3b0  (orig 0x10aa3b0, getter)
uint64_t main_f_10aa3b0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10aa3c0  (orig 0x10aa3c0, getter)
uint8_t main_f_10aa3c0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10aa8f0  (orig 0x10aa8f0, mov_ret)
uint32_t main_f_10aa8f0() { return 1; }

// sub_10aaa00  (orig 0x10aaa00, straight)
void main_f_10aaa00(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10aaa10  (orig 0x10aaa10, setter)
void main_f_10aaa10(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10aaa20  (orig 0x10aaa20, getter)
uint64_t main_f_10aaa20(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10aaa30  (orig 0x10aaa30, getter)
uint8_t main_f_10aaa30(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10aaa40  (orig 0x10aaa40, setter)
void main_f_10aaa40(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10aaa50  (orig 0x10aaa50, getter)
uint32_t main_f_10aaa50(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10b1230  (orig 0x10b1230, copy-chain-store)
void main_f_10b1230(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b3330  (orig 0x10b3330, ret_only)
void main_f_10b3330() {}

// sub_10b3340  (orig 0x10b3340, ret_only)
void main_f_10b3340() {}

// sub_10b3350  (orig 0x10b3350, ret_only)
void main_f_10b3350() {}

// sub_10b4960  (orig 0x10b4960, ret_only)
void main_f_10b4960() {}

// sub_10b4970  (orig 0x10b4970, ret_only)
void main_f_10b4970() {}

// sub_10b4980  (orig 0x10b4980, ret_only)
void main_f_10b4980() {}

// sub_10b4a30  (orig 0x10b4a30, copy-chain-store)
void main_f_10b4a30(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b4ab0  (orig 0x10b4ab0, copy-chain-store)
void main_f_10b4ab0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b4b80  (orig 0x10b4b80, copy-chain-store)
void main_f_10b4b80(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b5690  (orig 0x10b5690, ret_only)
void main_f_10b5690() {}

// sub_10b56a0  (orig 0x10b56a0, ret_only)
void main_f_10b56a0() {}

// sub_10b56b0  (orig 0x10b56b0, ret_only)
void main_f_10b56b0() {}

// sub_10b8450  (orig 0x10b8450, copy-chain-store)
void main_f_10b8450(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b84d0  (orig 0x10b84d0, copy-chain-store)
void main_f_10b84d0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b85a0  (orig 0x10b85a0, copy-chain-store)
void main_f_10b85a0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b8620  (orig 0x10b8620, copy-chain-store)
void main_f_10b8620(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b86a0  (orig 0x10b86a0, copy-chain-store)
void main_f_10b86a0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b8770  (orig 0x10b8770, copy-chain-store)
void main_f_10b8770(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b87f0  (orig 0x10b87f0, copy-chain-store)
void main_f_10b87f0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b8870  (orig 0x10b8870, copy-chain-store)
void main_f_10b8870(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b8940  (orig 0x10b8940, copy-chain-store)
void main_f_10b8940(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10b8a40  (orig 0x10b8a40, mov_ret)
uint32_t main_f_10b8a40() { return 1; }

// sub_10b8c40  (orig 0x10b8c40, mov_ret)
uint32_t main_f_10b8c40() { return 1; }

// sub_10b94d0  (orig 0x10b94d0, mov_ret)
uint32_t main_f_10b94d0() { return 1; }

// sub_10b95c0  (orig 0x10b95c0, straight)
void main_f_10b95c0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10b95d0  (orig 0x10b95d0, setter)
void main_f_10b95d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10b95e0  (orig 0x10b95e0, getter)
uint64_t main_f_10b95e0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10b95f0  (orig 0x10b95f0, getter)
uint8_t main_f_10b95f0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10b9600  (orig 0x10b9600, setter)
void main_f_10b9600(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10b9610  (orig 0x10b9610, getter)
uint32_t main_f_10b9610(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10b9750  (orig 0x10b9750, mov_ret)
uint32_t main_f_10b9750() { return 1; }

// sub_10b98a0  (orig 0x10b98a0, mov_ret)
uint32_t main_f_10b98a0() { return 1; }

// sub_10b9af0  (orig 0x10b9af0, getter)
uint32_t main_f_10b9af0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10b9b00  (orig 0x10b9b00, setter)
void main_f_10b9b00(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10b9c30  (orig 0x10b9c30, straight)
void main_f_10b9c30(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10b9c40  (orig 0x10b9c40, setter)
void main_f_10b9c40(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10b9c50  (orig 0x10b9c50, getter)
uint64_t main_f_10b9c50(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10b9c60  (orig 0x10b9c60, getter)
uint8_t main_f_10b9c60(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10b9e80  (orig 0x10b9e80, mov_ret)
uint32_t main_f_10b9e80() { return 1; }

// sub_10ba080  (orig 0x10ba080, compare)
bool main_f_10ba080(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0))) != (uint64_t)(0); }

// sub_10bd9e0  (orig 0x10bd9e0, ret_only)
void main_f_10bd9e0() {}

// sub_10bd9f0  (orig 0x10bd9f0, ret_only)
void main_f_10bd9f0() {}

// sub_10bda00  (orig 0x10bda00, ret_only)
void main_f_10bda00() {}

// sub_10bdb90  (orig 0x10bdb90, copy-chain-store)
void main_f_10bdb90(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10bdc60  (orig 0x10bdc60, copy-chain-store)
void main_f_10bdc60(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10bf300  (orig 0x10bf300, ret_only)
void main_f_10bf300() {}

// sub_10bf310  (orig 0x10bf310, ret_only)
void main_f_10bf310() {}

// sub_10bf320  (orig 0x10bf320, ret_only)
void main_f_10bf320() {}

// sub_10bf490  (orig 0x10bf490, copy-chain-store)
void main_f_10bf490(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10bf560  (orig 0x10bf560, copy-chain-store)
void main_f_10bf560(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10c0a10  (orig 0x10c0a10, ret_only)
void main_f_10c0a10() {}

// sub_10c0a20  (orig 0x10c0a20, ret_only)
void main_f_10c0a20() {}

// sub_10c0a30  (orig 0x10c0a30, ret_only)
void main_f_10c0a30() {}

// sub_10c0bc0  (orig 0x10c0bc0, copy-chain-store)
void main_f_10c0bc0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10c0c90  (orig 0x10c0c90, copy-chain-store)
void main_f_10c0c90(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10c1cc0  (orig 0x10c1cc0, ret_only)
void main_f_10c1cc0() {}

// sub_10c1cd0  (orig 0x10c1cd0, ret_only)
void main_f_10c1cd0() {}

// sub_10c1ce0  (orig 0x10c1ce0, ret_only)
void main_f_10c1ce0() {}

// sub_10c1e70  (orig 0x10c1e70, copy-chain-store)
void main_f_10c1e70(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10c1f40  (orig 0x10c1f40, copy-chain-store)
void main_f_10c1f40(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10c23e0  (orig 0x10c23e0, getter)
uint32_t main_f_10c23e0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10c23f0  (orig 0x10c23f0, setter)
void main_f_10c23f0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10c2400  (orig 0x10c2400, mov_ret)
uint32_t main_f_10c2400() { return 1; }

// sub_10c2880  (orig 0x10c2880, ret_only)
void main_f_10c2880() {}

// sub_10c2890  (orig 0x10c2890, ret_only)
void main_f_10c2890() {}

// sub_10c28a0  (orig 0x10c28a0, ret_only)
void main_f_10c28a0() {}

// sub_10c2a10  (orig 0x10c2a10, straight)
void main_f_10c2a10(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10c2a20  (orig 0x10c2a20, setter)
void main_f_10c2a20(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10c2a30  (orig 0x10c2a30, getter)
uint64_t main_f_10c2a30(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10c2a40  (orig 0x10c2a40, getter)
uint8_t main_f_10c2a40(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10c2a50  (orig 0x10c2a50, ret_only)
void main_f_10c2a50() {}

// sub_10c2a60  (orig 0x10c2a60, ret_only)
void main_f_10c2a60() {}

// sub_10c3070  (orig 0x10c3070, getter)
uint32_t main_f_10c3070(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10c3080  (orig 0x10c3080, setter)
void main_f_10c3080(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10c3090  (orig 0x10c3090, mov_ret)
uint32_t main_f_10c3090() { return 1; }

// sub_10c31c0  (orig 0x10c31c0, straight)
void main_f_10c31c0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10c31d0  (orig 0x10c31d0, setter)
void main_f_10c31d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10c31e0  (orig 0x10c31e0, getter)
uint64_t main_f_10c31e0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10c31f0  (orig 0x10c31f0, getter)
uint8_t main_f_10c31f0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10c3960  (orig 0x10c3960, getter)
uint32_t main_f_10c3960(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10c3970  (orig 0x10c3970, setter)
void main_f_10c3970(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10c3980  (orig 0x10c3980, mov_ret)
uint32_t main_f_10c3980() { return 1; }

// sub_10c3f60  (orig 0x10c3f60, straight)
void main_f_10c3f60(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10c3f70  (orig 0x10c3f70, setter)
void main_f_10c3f70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10c3f80  (orig 0x10c3f80, getter)
uint64_t main_f_10c3f80(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10c3f90  (orig 0x10c3f90, getter)
uint8_t main_f_10c3f90(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10c4de0  (orig 0x10c4de0, getter)
uint32_t main_f_10c4de0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10c4df0  (orig 0x10c4df0, setter)
void main_f_10c4df0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10c4e00  (orig 0x10c4e00, mov_ret)
uint32_t main_f_10c4e00() { return 1; }

// sub_10c53e0  (orig 0x10c53e0, straight)
void main_f_10c53e0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10c53f0  (orig 0x10c53f0, setter)
void main_f_10c53f0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10c5400  (orig 0x10c5400, getter)
uint64_t main_f_10c5400(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10c5410  (orig 0x10c5410, getter)
uint8_t main_f_10c5410(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10c84a0  (orig 0x10c84a0, ret_only)
void main_f_10c84a0() {}

// sub_10c84b0  (orig 0x10c84b0, ret_only)
void main_f_10c84b0() {}

// sub_10c84c0  (orig 0x10c84c0, ret_only)
void main_f_10c84c0() {}

// sub_10c87b0  (orig 0x10c87b0, copy-chain-store)
void main_f_10c87b0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10c9f80  (orig 0x10c9f80, ret_only)
void main_f_10c9f80() {}

// sub_10c9f90  (orig 0x10c9f90, ret_only)
void main_f_10c9f90() {}

// sub_10c9fa0  (orig 0x10c9fa0, ret_only)
void main_f_10c9fa0() {}

// sub_10ca110  (orig 0x10ca110, copy-chain-store)
void main_f_10ca110(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10ca1e0  (orig 0x10ca1e0, copy-chain-store)
void main_f_10ca1e0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10ca8d0  (orig 0x10ca8d0, getter)
uint32_t main_f_10ca8d0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10ca8e0  (orig 0x10ca8e0, setter)
void main_f_10ca8e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10cad60  (orig 0x10cad60, straight)
void main_f_10cad60(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10cad70  (orig 0x10cad70, setter)
void main_f_10cad70(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10cad80  (orig 0x10cad80, getter)
uint64_t main_f_10cad80(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10cad90  (orig 0x10cad90, getter)
uint8_t main_f_10cad90(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10cb180  (orig 0x10cb180, copy2)
void main_f_10cb180(void* a0, uint64_t unused1, void* a2) { *(uint32_t*)((char*)(a0) + 104) = *(uint32_t*)((char*)(a2)); }

// sub_10cb190  (orig 0x10cb190, ret_only)
void main_f_10cb190() {}

// sub_10cb4c0  (orig 0x10cb4c0, copy2)
void main_f_10cb4c0(void* a0, uint64_t unused1, void* a2) { *(uint32_t*)((char*)(a0) + 108) = *(uint32_t*)((char*)(a2)); }

// sub_10cb4d0  (orig 0x10cb4d0, ret_only)
void main_f_10cb4d0() {}

// sub_10cba60  (orig 0x10cba60, getter)
uint32_t main_f_10cba60(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10cba70  (orig 0x10cba70, setter)
void main_f_10cba70(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10cc8f0  (orig 0x10cc8f0, straight)
void main_f_10cc8f0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10cc900  (orig 0x10cc900, setter)
void main_f_10cc900(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10cc910  (orig 0x10cc910, getter)
uint64_t main_f_10cc910(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10cc920  (orig 0x10cc920, getter)
uint8_t main_f_10cc920(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10cf160  (orig 0x10cf160, copy-chain-store)
void main_f_10cf160(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10cf1e0  (orig 0x10cf1e0, copy-chain-store)
void main_f_10cf1e0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10cf2b0  (orig 0x10cf2b0, copy-chain-store)
void main_f_10cf2b0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d01c0  (orig 0x10d01c0, copy-chain-store)
void main_f_10d01c0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d0240  (orig 0x10d0240, copy-chain-store)
void main_f_10d0240(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d0310  (orig 0x10d0310, copy-chain-store)
void main_f_10d0310(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d0e80  (orig 0x10d0e80, copy-chain-store)
void main_f_10d0e80(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d0f00  (orig 0x10d0f00, copy-chain-store)
void main_f_10d0f00(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d0fd0  (orig 0x10d0fd0, copy-chain-store)
void main_f_10d0fd0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d2b00  (orig 0x10d2b00, ret_only)
void main_f_10d2b00() {}

// sub_10d2b10  (orig 0x10d2b10, ret_only)
void main_f_10d2b10() {}

// sub_10d2b20  (orig 0x10d2b20, ret_only)
void main_f_10d2b20() {}

// sub_10d2ba0  (orig 0x10d2ba0, copy-chain-store)
void main_f_10d2ba0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d2d80  (orig 0x10d2d80, copy-chain-store)
void main_f_10d2d80(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d2f90  (orig 0x10d2f90, mov_ret)
uint32_t main_f_10d2f90() { return 1; }

// sub_10d3400  (orig 0x10d3400, mov_ret)
uint32_t main_f_10d3400() { return 1; }

// sub_10d36d0  (orig 0x10d36d0, getter)
uint32_t main_f_10d36d0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10d36e0  (orig 0x10d36e0, setter)
void main_f_10d36e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10d36f0  (orig 0x10d36f0, mov_ret)
uint32_t main_f_10d36f0() { return 1; }

// sub_10d37a0  (orig 0x10d37a0, straight)
void main_f_10d37a0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10d37b0  (orig 0x10d37b0, setter)
void main_f_10d37b0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10d37c0  (orig 0x10d37c0, getter)
uint64_t main_f_10d37c0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10d37d0  (orig 0x10d37d0, getter)
uint8_t main_f_10d37d0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10d6890  (orig 0x10d6890, ret_only)
void main_f_10d6890() {}

// sub_10d68a0  (orig 0x10d68a0, ret_only)
void main_f_10d68a0() {}

// sub_10d68b0  (orig 0x10d68b0, ret_only)
void main_f_10d68b0() {}

// sub_10d6a20  (orig 0x10d6a20, copy-chain-store)
void main_f_10d6a20(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d6af0  (orig 0x10d6af0, copy-chain-store)
void main_f_10d6af0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d8b80  (orig 0x10d8b80, ret_only)
void main_f_10d8b80() {}

// sub_10d8b90  (orig 0x10d8b90, ret_only)
void main_f_10d8b90() {}

// sub_10d8ba0  (orig 0x10d8ba0, ret_only)
void main_f_10d8ba0() {}

// sub_10d9970  (orig 0x10d9970, copy-chain-store)
void main_f_10d9970(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d9a40  (orig 0x10d9a40, copy-chain-store)
void main_f_10d9a40(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10d9c40  (orig 0x10d9c40, straight)
void main_f_10d9c40(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)k0;
}

// sub_10d9c50  (orig 0x10d9c50, straight)
void main_f_10d9c50(void* a0) {
    uint32_t k0 = 1;
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)k0;
}

// sub_10da190  (orig 0x10da190, getter)
uint32_t main_f_10da190(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10da1a0  (orig 0x10da1a0, setter)
void main_f_10da1a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10da1b0  (orig 0x10da1b0, mov_ret)
uint32_t main_f_10da1b0() { return 1; }

// sub_10da630  (orig 0x10da630, ret_only)
void main_f_10da630() {}

// sub_10da640  (orig 0x10da640, ret_only)
void main_f_10da640() {}

// sub_10da7d0  (orig 0x10da7d0, straight)
void main_f_10da7d0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10da7e0  (orig 0x10da7e0, setter)
void main_f_10da7e0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10da7f0  (orig 0x10da7f0, getter)
uint64_t main_f_10da7f0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10da800  (orig 0x10da800, getter)
uint8_t main_f_10da800(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10db480  (orig 0x10db480, getter)
uint32_t main_f_10db480(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10db490  (orig 0x10db490, setter)
void main_f_10db490(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10db4a0  (orig 0x10db4a0, mov_ret)
uint32_t main_f_10db4a0() { return 1; }

// sub_10db920  (orig 0x10db920, ret_only)
void main_f_10db920() {}

// sub_10dbaf0  (orig 0x10dbaf0, straight)
void main_f_10dbaf0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10dbb00  (orig 0x10dbb00, setter)
void main_f_10dbb00(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10dbb10  (orig 0x10dbb10, getter)
uint64_t main_f_10dbb10(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10dbb20  (orig 0x10dbb20, getter)
uint8_t main_f_10dbb20(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10df870  (orig 0x10df870, ret_only)
void main_f_10df870() {}

// sub_10df880  (orig 0x10df880, ret_only)
void main_f_10df880() {}

// sub_10df890  (orig 0x10df890, ret_only)
void main_f_10df890() {}

// sub_10dfa50  (orig 0x10dfa50, copy-chain-store)
void main_f_10dfa50(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10dfb20  (orig 0x10dfb20, copy-chain-store)
void main_f_10dfb20(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e0a90  (orig 0x10e0a90, ret_only)
void main_f_10e0a90() {}

// sub_10e0aa0  (orig 0x10e0aa0, ret_only)
void main_f_10e0aa0() {}

// sub_10e0ab0  (orig 0x10e0ab0, ret_only)
void main_f_10e0ab0() {}

// sub_10e0c70  (orig 0x10e0c70, copy-chain-store)
void main_f_10e0c70(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e0d40  (orig 0x10e0d40, copy-chain-store)
void main_f_10e0d40(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e17f0  (orig 0x10e17f0, ret_only)
void main_f_10e17f0() {}

// sub_10e1800  (orig 0x10e1800, ret_only)
void main_f_10e1800() {}

// sub_10e1810  (orig 0x10e1810, ret_only)
void main_f_10e1810() {}

// sub_10e1890  (orig 0x10e1890, copy-chain-store)
void main_f_10e1890(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e1940  (orig 0x10e1940, copy-chain-store)
void main_f_10e1940(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e1a10  (orig 0x10e1a10, copy-chain-store)
void main_f_10e1a10(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e2e70  (orig 0x10e2e70, ret_only)
void main_f_10e2e70() {}

// sub_10e2e80  (orig 0x10e2e80, ret_only)
void main_f_10e2e80() {}

// sub_10e2e90  (orig 0x10e2e90, ret_only)
void main_f_10e2e90() {}

// sub_10e3030  (orig 0x10e3030, copy-chain-store)
void main_f_10e3030(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e3100  (orig 0x10e3100, copy-chain-store)
void main_f_10e3100(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e31d0  (orig 0x10e31d0, getter)
uint32_t main_f_10e31d0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10e31e0  (orig 0x10e31e0, setter)
void main_f_10e31e0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10e3280  (orig 0x10e3280, straight)
void main_f_10e3280(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10e3290  (orig 0x10e3290, setter)
void main_f_10e3290(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10e32a0  (orig 0x10e32a0, getter)
uint64_t main_f_10e32a0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10e32b0  (orig 0x10e32b0, getter)
uint8_t main_f_10e32b0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10e3b00  (orig 0x10e3b00, getter)
uint32_t main_f_10e3b00(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10e3b10  (orig 0x10e3b10, setter)
void main_f_10e3b10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10e3b20  (orig 0x10e3b20, mov_ret)
uint32_t main_f_10e3b20() { return 1; }

// sub_10e3ed0  (orig 0x10e3ed0, straight)
void main_f_10e3ed0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10e3ee0  (orig 0x10e3ee0, setter)
void main_f_10e3ee0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10e3ef0  (orig 0x10e3ef0, getter)
uint64_t main_f_10e3ef0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10e3f00  (orig 0x10e3f00, getter)
uint8_t main_f_10e3f00(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10e4410  (orig 0x10e4410, mov_ret)
uint32_t main_f_10e4410() { return 1; }

// sub_10e4420  (orig 0x10e4420, straight)
void main_f_10e4420(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 66) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 20) = 2;
}

// sub_10e4440  (orig 0x10e4440, straight)
void main_f_10e4440(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 10) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) - 36) = 2;
}

// sub_10e4810  (orig 0x10e4810, getter)
uint32_t main_f_10e4810(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10e4820  (orig 0x10e4820, setter)
void main_f_10e4820(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10e4830  (orig 0x10e4830, mov_ret)
uint32_t main_f_10e4830() { return 1; }

// sub_10e4a40  (orig 0x10e4a40, straight)
void main_f_10e4a40(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10e4a50  (orig 0x10e4a50, setter)
void main_f_10e4a50(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10e4a60  (orig 0x10e4a60, getter)
uint64_t main_f_10e4a60(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10e4a70  (orig 0x10e4a70, getter)
uint8_t main_f_10e4a70(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10e7980  (orig 0x10e7980, ret_only)
void main_f_10e7980() {}

// sub_10e7990  (orig 0x10e7990, ret_only)
void main_f_10e7990() {}

// sub_10e79a0  (orig 0x10e79a0, ret_only)
void main_f_10e79a0() {}

// sub_10e7b60  (orig 0x10e7b60, copy-chain-store)
void main_f_10e7b60(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e7c30  (orig 0x10e7c30, copy-chain-store)
void main_f_10e7c30(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e90e0  (orig 0x10e90e0, ret_only)
void main_f_10e90e0() {}

// sub_10e90f0  (orig 0x10e90f0, ret_only)
void main_f_10e90f0() {}

// sub_10e9100  (orig 0x10e9100, ret_only)
void main_f_10e9100() {}

// sub_10e92c0  (orig 0x10e92c0, copy-chain-store)
void main_f_10e92c0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e9390  (orig 0x10e9390, copy-chain-store)
void main_f_10e9390(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e9eb0  (orig 0x10e9eb0, copy-chain-store)
void main_f_10e9eb0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10e9f60  (orig 0x10e9f60, copy-chain-store)
void main_f_10e9f60(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10ea030  (orig 0x10ea030, copy-chain-store)
void main_f_10ea030(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10ea250  (orig 0x10ea250, mov_ret)
uint32_t main_f_10ea250() { return 1; }

// sub_10ea870  (orig 0x10ea870, getter)
uint32_t main_f_10ea870(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10ea880  (orig 0x10ea880, setter)
void main_f_10ea880(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10ea890  (orig 0x10ea890, mov_ret)
uint32_t main_f_10ea890() { return 1; }

// sub_10eaba0  (orig 0x10eaba0, straight)
void main_f_10eaba0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10eabb0  (orig 0x10eabb0, setter)
void main_f_10eabb0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10eabc0  (orig 0x10eabc0, getter)
uint64_t main_f_10eabc0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10eabd0  (orig 0x10eabd0, getter)
uint8_t main_f_10eabd0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10eb0b0  (orig 0x10eb0b0, getter)
uint32_t main_f_10eb0b0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10eb0c0  (orig 0x10eb0c0, setter)
void main_f_10eb0c0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10eb0d0  (orig 0x10eb0d0, mov_ret)
uint32_t main_f_10eb0d0() { return 1; }

// sub_10eb280  (orig 0x10eb280, straight)
void main_f_10eb280(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10eb290  (orig 0x10eb290, setter)
void main_f_10eb290(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10eb2a0  (orig 0x10eb2a0, getter)
uint64_t main_f_10eb2a0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10eb2b0  (orig 0x10eb2b0, getter)
uint8_t main_f_10eb2b0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10ed540  (orig 0x10ed540, ret_only)
void main_f_10ed540() {}

// sub_10ed550  (orig 0x10ed550, ret_only)
void main_f_10ed550() {}

// sub_10ed560  (orig 0x10ed560, ret_only)
void main_f_10ed560() {}

// sub_10ed5e0  (orig 0x10ed5e0, copy-chain-store)
void main_f_10ed5e0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10ed660  (orig 0x10ed660, copy-chain-store)
void main_f_10ed660(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10ed730  (orig 0x10ed730, copy-chain-store)
void main_f_10ed730(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10ef7c0  (orig 0x10ef7c0, ret_only)
void main_f_10ef7c0() {}

// sub_10ef7d0  (orig 0x10ef7d0, ret_only)
void main_f_10ef7d0() {}

// sub_10ef7e0  (orig 0x10ef7e0, ret_only)
void main_f_10ef7e0() {}

// sub_10f05a0  (orig 0x10f05a0, copy-chain-store)
void main_f_10f05a0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10f0670  (orig 0x10f0670, copy-chain-store)
void main_f_10f0670(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10f0d00  (orig 0x10f0d00, getter)
uint32_t main_f_10f0d00(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10f0d10  (orig 0x10f0d10, setter)
void main_f_10f0d10(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10f0d20  (orig 0x10f0d20, mov_ret)
uint32_t main_f_10f0d20() { return 1; }

// sub_10f11a0  (orig 0x10f11a0, ret_only)
void main_f_10f11a0() {}

// sub_10f11b0  (orig 0x10f11b0, ret_only)
void main_f_10f11b0() {}

// sub_10f11c0  (orig 0x10f11c0, ret_only)
void main_f_10f11c0() {}

// sub_10f11d0  (orig 0x10f11d0, ret_only)
void main_f_10f11d0() {}

// sub_10f1340  (orig 0x10f1340, straight)
void main_f_10f1340(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10f1350  (orig 0x10f1350, setter)
void main_f_10f1350(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10f1360  (orig 0x10f1360, getter)
uint64_t main_f_10f1360(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10f1370  (orig 0x10f1370, getter)
uint8_t main_f_10f1370(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10f17b0  (orig 0x10f17b0, straight)
void main_f_10f17b0(void* a0) {
    uint32_t k0 = 257;
    *(uint16_t*)((char*)(a0) + 104) = (uint16_t)k0;
}

// sub_10f17c0  (orig 0x10f17c0, straight)
void main_f_10f17c0(void* a0) {
    uint32_t k0 = 257;
    *(uint16_t*)((char*)(a0) + 8) = (uint16_t)k0;
}

// sub_10f1b90  (orig 0x10f1b90, getter)
uint32_t main_f_10f1b90(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10f1ba0  (orig 0x10f1ba0, setter)
void main_f_10f1ba0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10f1bb0  (orig 0x10f1bb0, mov_ret)
uint32_t main_f_10f1bb0() { return 1; }

// sub_10f1e60  (orig 0x10f1e60, ret_only)
void main_f_10f1e60() {}

// sub_10f1f90  (orig 0x10f1f90, straight)
void main_f_10f1f90(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10f1fa0  (orig 0x10f1fa0, setter)
void main_f_10f1fa0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10f1fb0  (orig 0x10f1fb0, getter)
uint64_t main_f_10f1fb0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10f1fc0  (orig 0x10f1fc0, getter)
uint8_t main_f_10f1fc0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10f42c0  (orig 0x10f42c0, ret_only)
void main_f_10f42c0() {}

// sub_10f42d0  (orig 0x10f42d0, ret_only)
void main_f_10f42d0() {}

// sub_10f42e0  (orig 0x10f42e0, ret_only)
void main_f_10f42e0() {}

// sub_10f45d0  (orig 0x10f45d0, copy-chain-store)
void main_f_10f45d0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_10f5440  (orig 0x10f5440, mov_ret)
uint32_t main_f_10f5440() { return 1; }

// sub_10f56c0  (orig 0x10f56c0, straight)
void main_f_10f56c0(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_10f56d0  (orig 0x10f56d0, setter)
void main_f_10f56d0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_10f56e0  (orig 0x10f56e0, getter)
uint64_t main_f_10f56e0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10f56f0  (orig 0x10f56f0, getter)
uint8_t main_f_10f56f0(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_10f5700  (orig 0x10f5700, setter)
void main_f_10f5700(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_10f5710  (orig 0x10f5710, getter)
uint32_t main_f_10f5710(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_10f78e0  (orig 0x10f78e0, straight)
void main_f_10f78e0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 400) = (uint8_t)k0;
}

// sub_10f79f0  (orig 0x10f79f0, setter)
void main_f_10f79f0(void* a0) { *(uint8_t*)((char*)(a0) + 456) = 0; }

// sub_10f7a10  (orig 0x10f7a10, straight)
void main_f_10f7a10(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 456) = (uint8_t)k0;
}

// sub_10f7c20  (orig 0x10f7c20, copy2)
void main_f_10f7c20(void* a0) { *(uint64_t*)((char*)(a0) + 800) = *(uint64_t*)((char*)(a0) + 792); }

// sub_10f7e60  (orig 0x10f7e60, ret_only)
void main_f_10f7e60() {}

// sub_10f7ee0  (orig 0x10f7ee0, ret_only)
void main_f_10f7ee0() {}

// sub_10f8e00  (orig 0x10f8e00, ret_only)
void main_f_10f8e00() {}

// sub_10f9280  (orig 0x10f9280, ret_only)
void main_f_10f9280() {}

// sub_10f92a0  (orig 0x10f92a0, getter)
uint64_t main_f_10f92a0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10f92c0  (orig 0x10f92c0, getter)
uint64_t main_f_10f92c0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_10f9350  (orig 0x10f9350, ret_only)
void main_f_10f9350() {}

// sub_10f9360  (orig 0x10f9360, ret_only)
void main_f_10f9360() {}

// sub_10f9370  (orig 0x10f9370, ret_only)
void main_f_10f9370() {}

// sub_10fad30  (orig 0x10fad30, compare)
bool main_f_10fad30(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 80)) == (uint64_t)(0); }

// sub_10fad40  (orig 0x10fad40, compare)
bool main_f_10fad40(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 80)) == (uint64_t)(2); }

// sub_10fb8c0  (orig 0x10fb8c0, ptr_add)
void* main_f_10fb8c0(void* a0) { return (char*)a0 + 8; }

// sub_10fdcd0  (orig 0x10fdcd0, ret_only)
void main_f_10fdcd0() {}

// sub_10fdd50  (orig 0x10fdd50, ret_only)
void main_f_10fdd50() {}

// sub_10fe080  (orig 0x10fe080, ptr_add)
void* main_f_10fe080(void* a0) { return (char*)a0 + 8; }

// sub_10fe180  (orig 0x10fe180, ret_only)
void main_f_10fe180() {}

// sub_10fe190  (orig 0x10fe190, struct-copy)
void main_f_10fe190(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_10fe1b0  (orig 0x10fe1b0, struct-copy)
void main_f_10fe1b0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_10fe260  (orig 0x10fe260, ret_only)
void main_f_10fe260() {}

// sub_10fe270  (orig 0x10fe270, struct-copy)
void main_f_10fe270(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_10fe290  (orig 0x10fe290, struct-copy)
void main_f_10fe290(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_10fe2f0  (orig 0x10fe2f0, ret_only)
void main_f_10fe2f0() {}

// sub_10fe3d0  (orig 0x10fe3d0, ret_only)
void main_f_10fe3d0() {}

// sub_10fe470  (orig 0x10fe470, ret_only)
void main_f_10fe470() {}

// sub_10fe530  (orig 0x10fe530, ret_only)
void main_f_10fe530() {}

// sub_10fe610  (orig 0x10fe610, ret_only)
void main_f_10fe610() {}

// sub_10fe620  (orig 0x10fe620, struct-copy)
void main_f_10fe620(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_10fe640  (orig 0x10fe640, struct-copy)
void main_f_10fe640(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_10ff4a0  (orig 0x10ff4a0, setter)
void main_f_10ff4a0(void* a0) { *(uint64_t*)((char*)(a0) + 8) = 0; }

// sub_10ff520  (orig 0x10ff520, compare)
bool main_f_10ff520(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 8)) != (uint64_t)(0); }

// sub_10ff940  (orig 0x10ff940, ptr_add)
void* main_f_10ff940(void* a0) { return (char*)a0 + 24; }

// sub_10ff9c0  (orig 0x10ff9c0, ptr_add)
void* main_f_10ff9c0(void* a0) { return (char*)a0 + 24; }

// sub_10ffb10  (orig 0x10ffb10, ptr_add)
void* main_f_10ffb10(void* a0) { return (char*)a0 + 24; }

// sub_10ffcf0  (orig 0x10ffcf0, ptr_add)
void* main_f_10ffcf0(void* a0) { return (char*)a0 + 48; }

// sub_11009c0  (orig 0x11009c0, setter)
void main_f_11009c0(void* a0) { *(uint8_t*)((char*)(a0) + 120) = 0; }

// sub_1101490  (orig 0x1101490, ret_only)
void main_f_1101490() {}

// sub_11014a0  (orig 0x11014a0, copy2)
void main_f_11014a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11014b0  (orig 0x11014b0, copy2)
void main_f_11014b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1103340  (orig 0x1103340, copy-chain-store)
void main_f_1103340(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_1103500  (orig 0x1103500, copy-chain-store)
void main_f_1103500(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_11039a0  (orig 0x11039a0, getter)
uint32_t main_f_11039a0(void* a0) { return *(uint32_t*)((char*)(a0) + 20); }

// sub_11039b0  (orig 0x11039b0, setter)
void main_f_11039b0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 20) = a1; }

// sub_11039c0  (orig 0x11039c0, mov_ret)
uint32_t main_f_11039c0() { return 1; }

// sub_1103c20  (orig 0x1103c20, straight)
void main_f_1103c20(void* a0) {
    uint32_t k0 = 1;
    *(uint32_t*)((char*)(a0) + 20) = 0;
    *(uint8_t*)((char*)(a0) + 16) = (uint8_t)k0;
}

// sub_1103c30  (orig 0x1103c30, setter)
void main_f_1103c30(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 8) = a1; }

// sub_1103c40  (orig 0x1103c40, getter)
uint64_t main_f_1103c40(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_1103c50  (orig 0x1103c50, getter)
uint8_t main_f_1103c50(void* a0) { return *(uint8_t*)((char*)(a0) + 16); }

// sub_1103d00  (orig 0x1103d00, ret_only)
void main_f_1103d00() {}

// sub_1103d10  (orig 0x1103d10, ret_only)
void main_f_1103d10() {}

// sub_1103d20  (orig 0x1103d20, ret_only)
void main_f_1103d20() {}

// sub_1104800  (orig 0x1104800, ret_only)
void main_f_1104800() {}

// sub_1104810  (orig 0x1104810, copy2)
void main_f_1104810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1104820  (orig 0x1104820, copy2)
void main_f_1104820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11048b0  (orig 0x11048b0, ret_only)
void main_f_11048b0() {}

// sub_11048c0  (orig 0x11048c0, copy2)
void main_f_11048c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11048d0  (orig 0x11048d0, copy2)
void main_f_11048d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1104c80  (orig 0x1104c80, straight)
void main_f_1104c80(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 625) = (uint8_t)k0;
}

// sub_1104c90  (orig 0x1104c90, getter)
uint8_t main_f_1104c90(void* a0) { return *(uint8_t*)((char*)(a0) + 625); }

// sub_1104d70  (orig 0x1104d70, setter)
void main_f_1104d70(void* a0) { *(uint8_t*)((char*)(a0) + 625) = 0; }

// autosave_00  (orig 0x1104f30, strlit-ret)
const char *main_f_1104f30() { static const char s[] = "bin/appli/autosave/bin/autosave_00.arc"; __asm__ volatile("" ::: "memory"); return s; }

// autosave_00_2  (orig 0x1104f40, strlit-ret)
const char *main_f_1104f40() { static const char s[] = "autosave_00.bflyt"; __asm__ volatile("" ::: "memory"); return s; }

// sub_11050f0  (orig 0x11050f0, mov_ret)
uint32_t main_f_11050f0() { return 3; }

// sub_1105100  (orig 0x1105100, mov_ret)
uint32_t main_f_1105100(uint32_t a0, uint32_t a1) { return a1; }

// sub_1105910  (orig 0x1105910, ret_only)
void main_f_1105910() {}

// sub_1105cf0  (orig 0x1105cf0, ret_only)
void main_f_1105cf0() {}

// sub_1105d70  (orig 0x1105d70, ret_only)
void main_f_1105d70() {}

// sub_11061d0  (orig 0x11061d0, straight)
void main_f_11061d0(void* a0) {
    *(uint64_t*)((char*)(a0)) = 0;
    *(uint32_t*)((char*)(a0) + 8) = -1;
}

// sub_11061e0  (orig 0x11061e0, straight)
void main_f_11061e0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = 0;
    *(uint32_t*)((char*)(a0) + 8) = -1;
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 8);
}

// sub_1106200  (orig 0x1106200, straight)
void main_f_1106200(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0)) = *(uint64_t*)((char*)(a1));
    *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1) + 8);
}

// sub_1108730  (orig 0x1108730, getter)
uint64_t main_f_1108730(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_110ca80  (orig 0x110ca80, getter)
uint32_t main_f_110ca80(void* a0) { return *(uint32_t*)((char*)(a0) + 288); }

// sub_110ca90  (orig 0x110ca90, getter)
uint32_t main_f_110ca90(void* a0) { return *(uint32_t*)((char*)(a0) + 292); }

// sub_110caa0  (orig 0x110caa0, setter-chain)
void main_f_110caa0(void* a0, uint32_t a1, uint32_t a2) { *(uint32_t*)((char*)(a0) + 292) = a1; *(uint32_t*)((char*)(a0) + 288) = a2; }

// sub_110d7c0  (orig 0x110d7c0, ret_only)
void main_f_110d7c0() {}

// sub_110dbc0  (orig 0x110dbc0, copy2)
void main_f_110dbc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110dbd0  (orig 0x110dbd0, copy2)
void main_f_110dbd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110e330  (orig 0x110e330, ret_only)
void main_f_110e330() {}

// sub_110ea90  (orig 0x110ea90, copy2)
void main_f_110ea90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110eaa0  (orig 0x110eaa0, copy2)
void main_f_110eaa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110f200  (orig 0x110f200, ret_only)
void main_f_110f200() {}

// sub_110f490  (orig 0x110f490, copy2)
void main_f_110f490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110f4a0  (orig 0x110f4a0, copy2)
void main_f_110f4a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_110fc00  (orig 0x110fc00, ret_only)
void main_f_110fc00() {}

// sub_11101d0  (orig 0x11101d0, copy2)
void main_f_11101d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11101e0  (orig 0x11101e0, copy2)
void main_f_11101e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1110230  (orig 0x1110230, ret_only)
void main_f_1110230() {}

// sub_1110ef0  (orig 0x1110ef0, copy2)
void main_f_1110ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1110f00  (orig 0x1110f00, copy2)
void main_f_1110f00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1110f50  (orig 0x1110f50, ret_only)
void main_f_1110f50() {}

// sub_11114e0  (orig 0x11114e0, copy2)
void main_f_11114e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11114f0  (orig 0x11114f0, copy2)
void main_f_11114f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1111c50  (orig 0x1111c50, ret_only)
void main_f_1111c50() {}

// sub_1111fb0  (orig 0x1111fb0, copy2)
void main_f_1111fb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1111fc0  (orig 0x1111fc0, copy2)
void main_f_1111fc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1112720  (orig 0x1112720, ret_only)
void main_f_1112720() {}

// sub_11131a0  (orig 0x11131a0, copy2)
void main_f_11131a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11131b0  (orig 0x11131b0, copy2)
void main_f_11131b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1113910  (orig 0x1113910, ret_only)
void main_f_1113910() {}

// sub_1113c30  (orig 0x1113c30, copy2)
void main_f_1113c30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1113c40  (orig 0x1113c40, copy2)
void main_f_1113c40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11157b0  (orig 0x11157b0, getter)
uint32_t main_f_11157b0(void* a0) { return *(uint32_t*)((char*)(a0) + 108); }

// sub_11168f0  (orig 0x11168f0, copy-chain-store)
void main_f_11168f0(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_11169f0  (orig 0x11169f0, ret_only)
void main_f_11169f0() {}

// sub_1116a00  (orig 0x1116a00, ret_only)
void main_f_1116a00() {}

// sub_1116a10  (orig 0x1116a10, ret_only)
void main_f_1116a10() {}

// sub_1116b00  (orig 0x1116b00, ret_only)
void main_f_1116b00() {}

// sub_1116b10  (orig 0x1116b10, struct-copy)
void main_f_1116b10(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_1116b30  (orig 0x1116b30, struct-copy)
void main_f_1116b30(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_11186e0  (orig 0x11186e0, ret_only)
void main_f_11186e0() {}

// sub_11186f0  (orig 0x11186f0, copy2)
void main_f_11186f0(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_1118700  (orig 0x1118700, copy2)
void main_f_1118700(void* a0, void* a1) { *(uint32_t*)((char*)(a1)) = *(uint32_t*)((char*)(a0)); }

// sub_111aa90  (orig 0x111aa90, ret_only)
void main_f_111aa90() {}

// sub_111aaa0  (orig 0x111aaa0, struct-copy)
void main_f_111aaa0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_111aac0  (orig 0x111aac0, struct-copy)
void main_f_111aac0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_111bd90  (orig 0x111bd90, mov_ret)
uint32_t main_f_111bd90() { return 21; }

// sub_111bda0  (orig 0x111bda0, indexed-getter)
uint64_t main_f_111bda0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_111bdb0  (orig 0x111bdb0, indexed-getter)
uint64_t main_f_111bdb0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1120d00  (orig 0x1120d00, getter)
uint32_t main_f_1120d00(void* a0) { return *(uint32_t*)((char*)(a0) + 2312); }

// sub_11214f0  (orig 0x11214f0, getter)
uint64_t main_f_11214f0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1121660  (orig 0x1121660, mov_ret)
uint32_t main_f_1121660() { return 1; }

// sub_1121670  (orig 0x1121670, indexed-getter)
uint64_t main_f_1121670(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1121680  (orig 0x1121680, indexed-getter)
uint64_t main_f_1121680(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1122160  (orig 0x1122160, getter)
uint64_t main_f_1122160(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_11222d0  (orig 0x11222d0, mov_ret)
uint32_t main_f_11222d0() { return 1; }

// sub_11222e0  (orig 0x11222e0, indexed-getter)
uint64_t main_f_11222e0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_11222f0  (orig 0x11222f0, indexed-getter)
uint64_t main_f_11222f0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1122a10  (orig 0x1122a10, getter)
uint64_t main_f_1122a10(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_1122b80  (orig 0x1122b80, mov_ret)
uint32_t main_f_1122b80() { return 1; }

// sub_1122b90  (orig 0x1122b90, indexed-getter)
uint64_t main_f_1122b90(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_1122ba0  (orig 0x1122ba0, indexed-getter)
uint64_t main_f_1122ba0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_1122d20  (orig 0x1122d20, ret_only)
void main_f_1122d20() {}

// sub_1122d30  (orig 0x1122d30, mov_ret)
uint32_t main_f_1122d30() { return 1; }

// sub_1122d40  (orig 0x1122d40, ret_only)
void main_f_1122d40() {}

// sub_1122d50  (orig 0x1122d50, ret_only)
void main_f_1122d50() {}

// sub_1122d60  (orig 0x1122d60, ret_only)
void main_f_1122d60() {}

// sub_1122d70  (orig 0x1122d70, mov_ret)
uint32_t main_f_1122d70() { return 1; }

// sub_1122d80  (orig 0x1122d80, ret_only)
void main_f_1122d80() {}

// sub_1123ea0  (orig 0x1123ea0, ret_only)
void main_f_1123ea0() {}

// sub_1124130  (orig 0x1124130, ret_only)
void main_f_1124130() {}

// sub_1124140  (orig 0x1124140, copy2)
void main_f_1124140(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124150  (orig 0x1124150, copy2)
void main_f_1124150(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124160  (orig 0x1124160, copy2)
void main_f_1124160(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124170  (orig 0x1124170, copy2)
void main_f_1124170(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11241e0  (orig 0x11241e0, ret_only)
void main_f_11241e0() {}

// sub_11241f0  (orig 0x11241f0, copy2)
void main_f_11241f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124200  (orig 0x1124200, copy2)
void main_f_1124200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11243c0  (orig 0x11243c0, ret_only)
void main_f_11243c0() {}

// sub_1124670  (orig 0x1124670, ret_only)
void main_f_1124670() {}

// sub_11246a0  (orig 0x11246a0, copy2)
void main_f_11246a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11246b0  (orig 0x11246b0, copy2)
void main_f_11246b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124710  (orig 0x1124710, ret_only)
void main_f_1124710() {}

// sub_1124720  (orig 0x1124720, ret_only)
void main_f_1124720() {}

// sub_1124730  (orig 0x1124730, ret_only)
void main_f_1124730() {}

// sub_11248d0  (orig 0x11248d0, ret_only)
void main_f_11248d0() {}

// sub_1124910  (orig 0x1124910, ret_only)
void main_f_1124910() {}

// sub_1124920  (orig 0x1124920, copy2)
void main_f_1124920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124930  (orig 0x1124930, copy2)
void main_f_1124930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124940  (orig 0x1124940, copy2)
void main_f_1124940(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_1124950  (orig 0x1124950, copy2)
void main_f_1124950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_11249a0  (orig 0x11249a0, ret_only)
void main_f_11249a0() {}

// sub_11249b0  (orig 0x11249b0, copy2)
void main_f_11249b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

