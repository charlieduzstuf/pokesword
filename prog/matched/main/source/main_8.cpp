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

// sub_bdc7b0  (orig 0xbdc7b0, copy2)
void main_f_bdc7b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdc7c0  (orig 0xbdc7c0, copy2)
void main_f_bdc7c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdcdc0  (orig 0xbdcdc0, ret_only)
void main_f_bdcdc0() {}

// sub_bdd0c0  (orig 0xbdd0c0, copy2)
void main_f_bdd0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdd0d0  (orig 0xbdd0d0, copy2)
void main_f_bdd0d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdd270  (orig 0xbdd270, ret_only)
void main_f_bdd270() {}

// sub_bdd600  (orig 0xbdd600, ret_only)
void main_f_bdd600() {}

// sub_bdd610  (orig 0xbdd610, ret_only)
void main_f_bdd610() {}

// sub_bdd620  (orig 0xbdd620, ret_only)
void main_f_bdd620() {}

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

// sub_bdf3e0  (orig 0xbdf3e0, ret_only)
void main_f_bdf3e0() {}

// sub_bdf3f0  (orig 0xbdf3f0, copy2)
void main_f_bdf3f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdf400  (orig 0xbdf400, copy2)
void main_f_bdf400(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdf800  (orig 0xbdf800, ret_only)
void main_f_bdf800() {}

// sub_bdf810  (orig 0xbdf810, copy2)
void main_f_bdf810(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bdf820  (orig 0xbdf820, copy2)
void main_f_bdf820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_be0b60  (orig 0xbe0b60, ret_only)
void main_f_be0b60() {}

// sub_be0b70  (orig 0xbe0b70, mov_ret)
uint32_t main_f_be0b70() { return 1; }

// sub_be1020  (orig 0xbe1020, ret_only)
void main_f_be1020() {}

// sub_be1190  (orig 0xbe1190, copy2)
void main_f_be1190(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be11a0  (orig 0xbe11a0, copy2)
void main_f_be11a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be1370  (orig 0xbe1370, mov_ret)
uint32_t main_f_be1370() { return 1; }

// sub_be1850  (orig 0xbe1850, ret_only)
void main_f_be1850() {}

// sub_be1c70  (orig 0xbe1c70, copy2)
void main_f_be1c70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be1c80  (orig 0xbe1c80, copy2)
void main_f_be1c80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be1ca0  (orig 0xbe1ca0, ret_only)
void main_f_be1ca0() {}

// sub_be2070  (orig 0xbe2070, copy2)
void main_f_be2070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_be2080  (orig 0xbe2080, copy2)
void main_f_be2080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_be4f70  (orig 0xbe4f70, ret_only)
void main_f_be4f70() {}

// sub_be4f80  (orig 0xbe4f80, mov_ret)
uint32_t main_f_be4f80() { return 1; }

// sub_be55a0  (orig 0xbe55a0, straight)
void main_f_be55a0(void* a0) {
    uint32_t k0 = 2;
    *(uint64_t*)((char*)(a0) + 156) = (uint64_t)k0;
}

// sub_be55b0  (orig 0xbe55b0, straight)
void main_f_be55b0(void* a0) {
    uint32_t k0 = 3;
    *(uint64_t*)((char*)(a0) + 156) = (uint64_t)k0;
}

// sub_be83a0  (orig 0xbe83a0, ret_only)
void main_f_be83a0() {}

// sub_be83b0  (orig 0xbe83b0, struct-copy)
void main_f_be83b0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_be83d0  (orig 0xbe83d0, struct-copy)
void main_f_be83d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

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

// sub_bea9a0  (orig 0xbea9a0, ret_only)
void main_f_bea9a0() {}

// sub_bea9b0  (orig 0xbea9b0, copy2)
void main_f_bea9b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bea9c0  (orig 0xbea9c0, copy2)
void main_f_bea9c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_becdf0  (orig 0xbecdf0, ret_only)
void main_f_becdf0() {}

// sub_bece00  (orig 0xbece00, copy2)
void main_f_bece00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bece10  (orig 0xbece10, copy2)
void main_f_bece10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_bfba40  (orig 0xbfba40, ret_only)
void main_f_bfba40() {}

// sub_bfba50  (orig 0xbfba50, copy2)
void main_f_bfba50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_bfba60  (orig 0xbfba60, copy2)
void main_f_bfba60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_c008f0  (orig 0xc008f0, ret_only)
void main_f_c008f0() {}

// sub_c00960  (orig 0xc00960, copy2)
void main_f_c00960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c00970  (orig 0xc00970, copy2)
void main_f_c00970(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c00c60  (orig 0xc00c60, ret_only)
void main_f_c00c60() {}

// sub_c00cc0  (orig 0xc00cc0, ret_only)
void main_f_c00cc0() {}

// sub_c00d60  (orig 0xc00d60, ret_only)
void main_f_c00d60() {}

// sub_c00db0  (orig 0xc00db0, copy2)
void main_f_c00db0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c00dc0  (orig 0xc00dc0, copy2)
void main_f_c00dc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c010b0  (orig 0xc010b0, ret_only)
void main_f_c010b0() {}

// sub_c01110  (orig 0xc01110, ret_only)
void main_f_c01110() {}

// sub_c011b0  (orig 0xc011b0, ret_only)
void main_f_c011b0() {}

// sub_c01200  (orig 0xc01200, copy2)
void main_f_c01200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c01210  (orig 0xc01210, copy2)
void main_f_c01210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c013c0  (orig 0xc013c0, ret_only)
void main_f_c013c0() {}

// sub_c01440  (orig 0xc01440, ret_only)
void main_f_c01440() {}

// sub_c01470  (orig 0xc01470, copy2)
void main_f_c01470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c01480  (orig 0xc01480, copy2)
void main_f_c01480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c01500  (orig 0xc01500, ret_only)
void main_f_c01500() {}

// sub_c015b0  (orig 0xc015b0, ret_only)
void main_f_c015b0() {}

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

// sub_c03600  (orig 0xc03600, ret_only)
void main_f_c03600() {}

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

// sub_c04290  (orig 0xc04290, ret_only)
void main_f_c04290() {}

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

// sub_c06450  (orig 0xc06450, ret_only)
void main_f_c06450() {}

// sub_c06460  (orig 0xc06460, copy2)
void main_f_c06460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c06470  (orig 0xc06470, copy2)
void main_f_c06470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_c06e10  (orig 0xc06e10, ret_only)
void main_f_c06e10() {}

// sub_c06e20  (orig 0xc06e20, copy2)
void main_f_c06e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c06e30  (orig 0xc06e30, copy2)
void main_f_c06e30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_c07b60  (orig 0xc07b60, ret_only)
void main_f_c07b60() {}

// sub_c07b70  (orig 0xc07b70, copy2)
void main_f_c07b70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c07b80  (orig 0xc07b80, copy2)
void main_f_c07b80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_c09850  (orig 0xc09850, ret_only)
void main_f_c09850() {}

// sub_c09ad0  (orig 0xc09ad0, ret_only)
void main_f_c09ad0() {}

// sub_c09e90  (orig 0xc09e90, ret_only)
void main_f_c09e90() {}

// sub_c09ef0  (orig 0xc09ef0, ret_only)
void main_f_c09ef0() {}

// sub_c0a120  (orig 0xc0a120, copy2)
void main_f_c0a120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0a130  (orig 0xc0a130, copy2)
void main_f_c0a130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_c0b730  (orig 0xc0b730, ret_only)
void main_f_c0b730() {}

// sub_c0b7a0  (orig 0xc0b7a0, copy2)
void main_f_c0b7a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0b7b0  (orig 0xc0b7b0, copy2)
void main_f_c0b7b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0b9b0  (orig 0xc0b9b0, ret_only)
void main_f_c0b9b0() {}

// sub_c0ba10  (orig 0xc0ba10, ret_only)
void main_f_c0ba10() {}

// sub_c0bab0  (orig 0xc0bab0, ret_only)
void main_f_c0bab0() {}

// sub_c0bb00  (orig 0xc0bb00, copy2)
void main_f_c0bb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0bb10  (orig 0xc0bb10, copy2)
void main_f_c0bb10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0bd10  (orig 0xc0bd10, ret_only)
void main_f_c0bd10() {}

// sub_c0bd70  (orig 0xc0bd70, ret_only)
void main_f_c0bd70() {}

// sub_c0be10  (orig 0xc0be10, ret_only)
void main_f_c0be10() {}

// sub_c0be60  (orig 0xc0be60, copy2)
void main_f_c0be60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0be70  (orig 0xc0be70, copy2)
void main_f_c0be70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0bfa0  (orig 0xc0bfa0, ret_only)
void main_f_c0bfa0() {}

// sub_c0c020  (orig 0xc0c020, ret_only)
void main_f_c0c020() {}

// sub_c0c050  (orig 0xc0c050, copy2)
void main_f_c0c050(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0c060  (orig 0xc0c060, copy2)
void main_f_c0c060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c0c0c0  (orig 0xc0c0c0, ret_only)
void main_f_c0c0c0() {}

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

// sub_c0f670  (orig 0xc0f670, straight)
typedef struct { unsigned char b[40]; } __S_f_c0f670;
__S_f_c0f670 main_f_c0f670(void* a0) {
    __S_f_c0f670 r;
    *(uint32_t *)((char *)&r + 0) = *(uint32_t*)((char*)(a0) + 852);
    *(uint16_t *)((char *)&r + 4) = *(uint16_t*)((char*)(a0) + 856);
    *(uint32_t *)((char *)&r + 8) = *(uint32_t*)((char*)(a0) + 860);
    *(uint8_t *)((char *)&r + 12) = *(uint8_t*)((char*)(a0) + 864);
    *(uint8_t *)((char *)&r + 13) = *(uint8_t*)((char*)(a0) + 865);
    *(uint32_t *)((char *)&r + 16) = *(uint32_t*)((char*)(a0) + 868);
    *(uint32_t *)((char *)&r + 20) = *(uint32_t*)((char*)(a0) + 872);
    *(uint32_t *)((char *)&r + 24) = *(uint32_t*)((char*)(a0) + 876);
    *(uint64_t *)((char *)&r + 28) = *(uint64_t*)((char*)(a0) + 880);
    return r;
}

// sub_c119b0  (orig 0xc119b0, ret_only)
void main_f_c119b0() {}

// sub_c119c0  (orig 0xc119c0, copy2)
void main_f_c119c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c119d0  (orig 0xc119d0, copy2)
void main_f_c119d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c11f60  (orig 0xc11f60, ret_only)
void main_f_c11f60() {}

// sub_c11f70  (orig 0xc11f70, copy2)
void main_f_c11f70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c11f80  (orig 0xc11f80, copy2)
void main_f_c11f80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_c12aa0  (orig 0xc12aa0, ret_only)
void main_f_c12aa0() {}

// sub_c12ab0  (orig 0xc12ab0, copy2)
void main_f_c12ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c12ac0  (orig 0xc12ac0, copy2)
void main_f_c12ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c12de0  (orig 0xc12de0, ret_only)
void main_f_c12de0() {}

// sub_c12df0  (orig 0xc12df0, copy2)
void main_f_c12df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c12e00  (orig 0xc12e00, copy2)
void main_f_c12e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_c18a10  (orig 0xc18a10, mov_ret)
uint32_t main_f_c18a10() { return 2; }

// sub_c18a20  (orig 0xc18a20, indexed-getter)
uint64_t main_f_c18a20(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_c18a30  (orig 0xc18a30, indexed-getter)
uint64_t main_f_c18a30(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_c18cf0  (orig 0xc18cf0, ret_only)
void main_f_c18cf0() {}

// sub_c18d00  (orig 0xc18d00, ret_only)
void main_f_c18d00() {}

// sub_c1ac80  (orig 0xc1ac80, ret_only)
void main_f_c1ac80() {}

// sub_c1c170  (orig 0xc1c170, mov_ret)
uint32_t main_f_c1c170() { return 1; }

// sub_c1c180  (orig 0xc1c180, indexed-getter)
uint64_t main_f_c1c180(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_c1c190  (orig 0xc1c190, indexed-getter)
uint64_t main_f_c1c190(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_c22020  (orig 0xc22020, mov_ret)
uint32_t main_f_c22020() { return 1; }

// sub_c22c40  (orig 0xc22c40, getter)
uint64_t main_f_c22c40(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_c22db0  (orig 0xc22db0, mov_ret)
uint32_t main_f_c22db0() { return 1; }

// sub_c22dc0  (orig 0xc22dc0, indexed-getter)
uint64_t main_f_c22dc0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_c22dd0  (orig 0xc22dd0, indexed-getter)
uint64_t main_f_c22dd0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_c26090  (orig 0xc26090, ret_only)
void main_f_c26090() {}

// sub_c260a0  (orig 0xc260a0, copy2)
void main_f_c260a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c260b0  (orig 0xc260b0, copy2)
void main_f_c260b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

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

// sub_c28fa0  (orig 0xc28fa0, ret_only)
void main_f_c28fa0() {}

// sub_c2d6f0  (orig 0xc2d6f0, getter)
uint32_t main_f_c2d6f0(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_c32b20  (orig 0xc32b20, ret_only)
void main_f_c32b20() {}

// sub_c32b30  (orig 0xc32b30, struct-copy)
void main_f_c32b30(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_c32b50  (orig 0xc32b50, struct-copy)
void main_f_c32b50(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

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

// sub_c338a0  (orig 0xc338a0, straight)
void main_f_c338a0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 232) = (uint8_t)k0;
}

// sub_c33940  (orig 0xc33940, straight)
void main_f_c33940(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 234) = (uint8_t)k0;
}

// sub_c36430  (orig 0xc36430, ret_only)
void main_f_c36430() {}

// sub_c36440  (orig 0xc36440, ret_only)
void main_f_c36440() {}

// sub_c364e0  (orig 0xc364e0, ret_only)
void main_f_c364e0() {}

// sub_c37d70  (orig 0xc37d70, ret_only)
void main_f_c37d70() {}

// sub_c38050  (orig 0xc38050, mov_ret)
uint32_t main_f_c38050() { return 1; }

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

// sub_c39000  (orig 0xc39000, indexed-getter)
uint64_t main_f_c39000(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_c39010  (orig 0xc39010, indexed-getter)
uint64_t main_f_c39010(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_c39120  (orig 0xc39120, mov_ret)
uint32_t main_f_c39120() { return 1; }

// sub_c39130  (orig 0xc39130, indexed-getter)
uint64_t main_f_c39130(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_c39140  (orig 0xc39140, indexed-getter)
uint64_t main_f_c39140(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_c397b0  (orig 0xc397b0, getter)
uint64_t main_f_c397b0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_c39920  (orig 0xc39920, mov_ret)
uint32_t main_f_c39920() { return 1; }

// sub_c39930  (orig 0xc39930, indexed-getter)
uint64_t main_f_c39930(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_c39940  (orig 0xc39940, indexed-getter)
uint64_t main_f_c39940(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_c3a510  (orig 0xc3a510, getter)
uint64_t main_f_c3a510(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_c3a680  (orig 0xc3a680, mov_ret)
uint32_t main_f_c3a680() { return 1; }

// sub_c3a690  (orig 0xc3a690, indexed-getter)
uint64_t main_f_c3a690(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_c3a6a0  (orig 0xc3a6a0, indexed-getter)
uint64_t main_f_c3a6a0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

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

// sub_c3bcd0  (orig 0xc3bcd0, mov_ret)
uint32_t main_f_c3bcd0() { return 1; }

// sub_c3d630  (orig 0xc3d630, ret_only)
void main_f_c3d630() {}

// sub_c3d640  (orig 0xc3d640, copy2)
void main_f_c3d640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c3d650  (orig 0xc3d650, copy2)
void main_f_c3d650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c3dcb0  (orig 0xc3dcb0, mov_ret)
uint32_t main_f_c3dcb0() { return 1; }

// sub_c3ee80  (orig 0xc3ee80, getter)
uint64_t main_f_c3ee80(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_c3f010  (orig 0xc3f010, mov_ret)
uint32_t main_f_c3f010() { return 2; }

// sub_c3f020  (orig 0xc3f020, indexed-getter)
uint64_t main_f_c3f020(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_c3f030  (orig 0xc3f030, indexed-getter)
uint64_t main_f_c3f030(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_c3f7d0  (orig 0xc3f7d0, getter)
uint64_t main_f_c3f7d0(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_c3f960  (orig 0xc3f960, mov_ret)
uint32_t main_f_c3f960() { return 2; }

// sub_c3f970  (orig 0xc3f970, indexed-getter)
uint64_t main_f_c3f970(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_c3f980  (orig 0xc3f980, indexed-getter)
uint64_t main_f_c3f980(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_c3fd90  (orig 0xc3fd90, getter)
uint64_t main_f_c3fd90(void* a0) { return *(uint64_t*)((char*)(a0) + 96); }

// sub_c3fda0  (orig 0xc3fda0, setter)
void main_f_c3fda0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_c41280  (orig 0xc41280, setter)
void main_f_c41280(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1824) = a1; }

// sub_c418f0  (orig 0xc418f0, ret_only)
void main_f_c418f0() {}

// sub_c428a0  (orig 0xc428a0, ret_only)
void main_f_c428a0() {}

// sub_c43890  (orig 0xc43890, ret_only)
void main_f_c43890() {}

// sub_c447b0  (orig 0xc447b0, ret_only)
void main_f_c447b0() {}

// sub_c44830  (orig 0xc44830, ret_only)
void main_f_c44830() {}

// sub_c45d70  (orig 0xc45d70, ret_only)
void main_f_c45d70() {}

// sub_c46810  (orig 0xc46810, compare-pred)
bool main_f_c46810(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 1492) - 2)) > (uint32_t)(2); }

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

// sub_c48fd0  (orig 0xc48fd0, ret_only)
void main_f_c48fd0() {}

// sub_c49320  (orig 0xc49320, compare-pred)
bool main_f_c49320(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 112) | 1)) != (uint32_t)(3); }

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

// sub_c4e710  (orig 0xc4e710, mov_ret)
uint32_t main_f_c4e710() { return 0; }

// sub_c4e720  (orig 0xc4e720, ret_only)
void main_f_c4e720() {}

// sub_c4eb80  (orig 0xc4eb80, mov_ret)
uint32_t main_f_c4eb80() { return 0; }

// sub_c4eb90  (orig 0xc4eb90, ret_only)
void main_f_c4eb90() {}

// sub_c4eec0  (orig 0xc4eec0, mov_ret)
uint32_t main_f_c4eec0() { return 0; }

// sub_c53800  (orig 0xc53800, ret_only)
void main_f_c53800() {}

// sub_c53810  (orig 0xc53810, ret_only)
void main_f_c53810() {}

// sub_c5a8d0  (orig 0xc5a8d0, straight)
void main_f_c5a8d0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 133) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_c5ac40  (orig 0xc5ac40, straight)
void main_f_c5ac40(void* a0, uint32_t a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 44128L) = (uint8_t)((((uint32_t)a1)) & (1));
    *(uint8_t*)((char*)(a0) + 130) = (uint8_t)k0;
}

// sub_c5ad80  (orig 0xc5ad80, straight)
void main_f_c5ad80(void* a0, uint32_t a1, void* a2) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 44320L) = (uint8_t)((((uint32_t)a1)) & (1));
    *(uint64_t*)((char*)(a0) + 44344L) = *(uint64_t*)((char*)(a2) + 8);
    *(uint64_t*)((char*)(a0) + 44336L) = *(uint64_t*)((char*)(a2));
    *(uint8_t*)((char*)(a0) + 130) = (uint8_t)k0;
}

// sub_c602c0  (orig 0xc602c0, ret_only)
void main_f_c602c0() {}

// sub_c60850  (orig 0xc60850, ret_only)
void main_f_c60850() {}

// sub_c609f0  (orig 0xc609f0, ret_only)
void main_f_c609f0() {}

// sub_c60a50  (orig 0xc60a50, ret_only)
void main_f_c60a50() {}

// sub_c628b0  (orig 0xc628b0, straight)
uint32_t main_f_c628b0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 480) = (uint8_t)k0;
    return 1;
}

// sub_c63380  (orig 0xc63380, ret_only)
void main_f_c63380() {}

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
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
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

// sub_c68570  (orig 0xc68570, copy2)
void main_f_c68570(void* a0) { *(uint64_t*)((char*)(a0) + 232) = *(uint64_t*)((char*)(a0) + 224); }

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

// sub_c6f0f0  (orig 0xc6f0f0, ret_only)
void main_f_c6f0f0() {}

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
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 1626) = (uint8_t)k0;
}

// sub_c75b40  (orig 0xc75b40, ret_only)
void main_f_c75b40() {}

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

// sub_c7cd10  (orig 0xc7cd10, struct-copy)
void main_f_c7cd10(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_c7cd30  (orig 0xc7cd30, struct-copy)
void main_f_c7cd30(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

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

// sub_c7da90  (orig 0xc7da90, struct-copy)
void main_f_c7da90(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_c7dab0  (orig 0xc7dab0, struct-copy)
void main_f_c7dab0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_c7e470  (orig 0xc7e470, ret_only)
void main_f_c7e470() {}

// sub_c7e6b0  (orig 0xc7e6b0, struct-copy)
void main_f_c7e6b0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_c7e6d0  (orig 0xc7e6d0, struct-copy)
void main_f_c7e6d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

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

// sub_c83930  (orig 0xc83930, ret_only)
void main_f_c83930() {}

// sub_c839b0  (orig 0xc839b0, ret_only)
void main_f_c839b0() {}

// sub_c83d20  (orig 0xc83d20, copy-chain-store)
void main_f_c83d20(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    *(uint64_t*)(char*)a0 = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = (uint64_t)(t0);
}

// sub_c83df0  (orig 0xc83df0, ret_only)
void main_f_c83df0() {}

// sub_c86480  (orig 0xc86480, getter)
uint8_t main_f_c86480(void* a0) { return *(uint8_t*)((char*)(a0) + 320); }

// sub_c86490  (orig 0xc86490, straight)
void main_f_c86490(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)k0;
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
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)k0;
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
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)k0;
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
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 320) = (uint8_t)k0;
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

// sub_c8c610  (orig 0xc8c610, mov_ret)
uint32_t main_f_c8c610() { return 0; }

// sub_c95340  (orig 0xc95340, const-field-set-store)
void main_f_c95340(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 689) = (uint8_t)(t1);
}

// sub_c95350  (orig 0xc95350, ret_only)
void main_f_c95350() {}

// sub_c95360  (orig 0xc95360, copy2)
void main_f_c95360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c95370  (orig 0xc95370, copy2)
void main_f_c95370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_c95ac0  (orig 0xc95ac0, setter)
void main_f_c95ac0(void* a0) { *(uint8_t*)((char*)(a0) + 132) = 0; }

// sub_c95d60  (orig 0xc95d60, compare)
bool main_f_c95d60(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 96)) == (uint64_t)(2); }

// sub_c99be0  (orig 0xc99be0, getter)
uint8_t main_f_c99be0(void* a0) { return *(uint8_t*)((char*)(a0) + 196); }

// sub_c99c50  (orig 0xc99c50, compare)
bool main_f_c99c50(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 96)) == (uint64_t)(6); }

// sub_c99c60  (orig 0xc99c60, getter)
uint8_t main_f_c99c60(void* a0) { return *(uint8_t*)((char*)(a0) + 464); }

// sub_c9be60  (orig 0xc9be60, setter)
void main_f_c9be60(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_c9be70  (orig 0xc9be70, straight)
void main_f_c9be70(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
}

// sub_c9e610  (orig 0xc9e610, straight)
void main_f_c9e610(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 112));
    uint32_t k1 = 1;
    *(uint64_t*)((char*)(p0) + 168) = *(uint64_t*)((char*)(a0) + 200);
    *(uint64_t*)((char*)(p0) + 160) = *(uint64_t*)((char*)(a0) + 192);
    *(uint8_t*)((char*)(p0) + 192) = (uint8_t)k1;
}

// sub_c9ecd0  (orig 0xc9ecd0, straight)
void main_f_c9ecd0(void* a0) {
    *(uint32_t*)((char*)(a0) + 164) = 45;
}

// sub_c9f590  (orig 0xc9f590, ret_only)
void main_f_c9f590() {}

// sub_c9ffd0  (orig 0xc9ffd0, ret_only)
void main_f_c9ffd0() {}

// sub_ca07b0  (orig 0xca07b0, setter)
void main_f_ca07b0(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_ca07c0  (orig 0xca07c0, straight)
void main_f_ca07c0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
}

// sub_ca07d0  (orig 0xca07d0, straight)
void main_f_ca07d0(void* a0, void* a1, uint64_t a2) {
    *(uint64_t*)((char*)(a0) + 136) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 128) = *(uint64_t*)((char*)(a1));
    *(uint32_t*)((char*)(a0) + 180) = (uint32_t)(a2);
}

// sub_ca2420  (orig 0xca2420, setter)
void main_f_ca2420(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_ca2430  (orig 0xca2430, straight)
void main_f_ca2430(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
}

// sub_ca4e20  (orig 0xca4e20, compare)
bool main_f_ca4e20(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 240)) == (uint64_t)(2); }

// sub_ca95e0  (orig 0xca95e0, ret_only)
void main_f_ca95e0() {}

// sub_cae8c0  (orig 0xcae8c0, straight)
void main_f_cae8c0(void* a0) {
    *(uint64_t*)((char*)(a0) + 664) = 14695981039346656837;
    *(uint64_t*)((char*)(a0) + 672) = 14695981039346656837;
    *(uint64_t*)((char*)(a0) + 680) = 14695981039346656837;
    *(uint64_t*)((char*)(a0) + 688) = 14695981039346656837;
    *(uint64_t*)((char*)(a0) + 696) = 14695981039346656837;
    *(uint64_t*)((char*)(a0) + 704) = 14695981039346656837;
    *(uint64_t*)((char*)(a0) + 712) = 14695981039346656837;
    *(uint64_t*)((char*)(a0) + 720) = 14695981039346656837;
    *(uint32_t*)((char*)(a0) + 728) = 0;
}

// sub_cb09f0  (orig 0xcb09f0, ret_only)
void main_f_cb09f0() {}

// sub_cb1070  (orig 0xcb1070, ret_only)
void main_f_cb1070() {}

// sub_cb12b0  (orig 0xcb12b0, ret_only)
void main_f_cb12b0() {}

// sub_cb12c0  (orig 0xcb12c0, copy2)
void main_f_cb12c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cb12d0  (orig 0xcb12d0, copy2)
void main_f_cb12d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cb1610  (orig 0xcb1610, straight)
void main_f_cb1610(void* a0, uint32_t a1) {
    uint32_t k0 = 0;
    uint32_t k1 = 0;
    *(uint32_t*)((char*)(a0) + 84) = 0;
    *(uint16_t*)((char*)(a0) + 88) = (uint16_t)k0;
    *(uint16_t*)((char*)(a0) + 92) = (uint16_t)k1;
    *(uint8_t*)((char*)(a0) + 90) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_cb33d0  (orig 0xcb33d0, straight)
void main_f_cb33d0(void* a0) {
    *(uint64_t*)((char*)(a0) + 128) = 14695981039346656837;
    *(uint32_t*)((char*)(a0) + 136) = 0;
}

// sub_cb3460  (orig 0xcb3460, setter-chain)
void main_f_cb3460(void* a0) { *(uint32_t*)((char*)(a0) + 152) = 0; *(uint16_t*)((char*)(a0) + 156) = 0; }

// sub_cb3470  (orig 0xcb3470, straight)
void main_f_cb3470(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0) + 152) = *(uint32_t*)((char*)(a1));
    *(uint16_t*)((char*)(a0) + 156) = *(uint16_t*)((char*)(a2));
}

// sub_cb5bc0  (orig 0xcb5bc0, ret_only)
void main_f_cb5bc0() {}

// sub_cb5bd0  (orig 0xcb5bd0, ret_only)
void main_f_cb5bd0() {}

// sub_ccae70  (orig 0xccae70, getter)
uint64_t main_f_ccae70(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_ccaf00  (orig 0xccaf00, getter)
uint64_t main_f_ccaf00(void* a0) { return *(uint64_t*)((char*)(a0) + 24); }

// sub_ccaf10  (orig 0xccaf10, copy2)
void main_f_ccaf10(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 24) = *(uint64_t*)((char*)(a1)); }

// sub_ccb020  (orig 0xccb020, getter)
uint8_t main_f_ccb020(void* a0) { return *(uint8_t*)((char*)(a0) + 36); }

// sub_ccb030  (orig 0xccb030, straight)
void main_f_ccb030(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 36) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_ccb040  (orig 0xccb040, getter)
uint8_t main_f_ccb040(void* a0) { return *(uint8_t*)((char*)(a0) + 37); }

// sub_ccb050  (orig 0xccb050, straight)
void main_f_ccb050(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 37) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_ccb060  (orig 0xccb060, setter)
void main_f_ccb060(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 40) = a1; }

// sub_ccb0b0  (orig 0xccb0b0, setter)
void main_f_ccb0b0(void* a0, float a1) { *(float*)((char*)(a0) + 32) = a1; }

// sub_ccb310  (orig 0xccb310, getter)
uint8_t main_f_ccb310(void* a0) { return *(uint8_t*)((char*)(a0) + 120); }

// sub_ccb320  (orig 0xccb320, straight)
void main_f_ccb320(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 120) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_ccb3b0  (orig 0xccb3b0, mov_ret)
uint32_t main_f_ccb3b0() { return 0; }

// sub_ccb560  (orig 0xccb560, ret_only)
void main_f_ccb560() {}

// sub_ccb570  (orig 0xccb570, copy2)
void main_f_ccb570(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccb580  (orig 0xccb580, copy2)
void main_f_ccb580(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccc260  (orig 0xccc260, mov_ret)
uint32_t main_f_ccc260() { return 0; }

// sub_ccc2d0  (orig 0xccc2d0, ret_only)
void main_f_ccc2d0() {}

// sub_ccc2e0  (orig 0xccc2e0, copy2)
void main_f_ccc2e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccc2f0  (orig 0xccc2f0, copy2)
void main_f_ccc2f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccc980  (orig 0xccc980, mov_ret)
uint32_t main_f_ccc980() { return 0; }

// sub_ccc9f0  (orig 0xccc9f0, ret_only)
void main_f_ccc9f0() {}

// sub_ccca00  (orig 0xccca00, copy2)
void main_f_ccca00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccca10  (orig 0xccca10, copy2)
void main_f_ccca10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccd0a0  (orig 0xccd0a0, mov_ret)
uint32_t main_f_ccd0a0() { return 0; }

// sub_ccd110  (orig 0xccd110, ret_only)
void main_f_ccd110() {}

// sub_ccd120  (orig 0xccd120, copy2)
void main_f_ccd120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccd130  (orig 0xccd130, copy2)
void main_f_ccd130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccda40  (orig 0xccda40, mov_ret)
uint32_t main_f_ccda40() { return 0; }

// sub_ccda80  (orig 0xccda80, mov_ret)
uint32_t main_f_ccda80() { return 1; }

// sub_ccdaa0  (orig 0xccdaa0, ret_only)
void main_f_ccdaa0() {}

// sub_ccdab0  (orig 0xccdab0, copy2)
void main_f_ccdab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccdac0  (orig 0xccdac0, copy2)
void main_f_ccdac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cce150  (orig 0xcce150, mov_ret)
uint32_t main_f_cce150() { return 0; }

// sub_cce190  (orig 0xcce190, mov_ret)
uint32_t main_f_cce190() { return 1; }

// sub_cce1b0  (orig 0xcce1b0, ret_only)
void main_f_cce1b0() {}

// sub_cce1c0  (orig 0xcce1c0, copy2)
void main_f_cce1c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cce1d0  (orig 0xcce1d0, copy2)
void main_f_cce1d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cce860  (orig 0xcce860, mov_ret)
uint32_t main_f_cce860() { return 0; }

// sub_cce8a0  (orig 0xcce8a0, mov_ret)
uint32_t main_f_cce8a0() { return 1; }

// sub_cce8c0  (orig 0xcce8c0, ret_only)
void main_f_cce8c0() {}

// sub_cce8d0  (orig 0xcce8d0, copy2)
void main_f_cce8d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cce8e0  (orig 0xcce8e0, copy2)
void main_f_cce8e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccef70  (orig 0xccef70, mov_ret)
uint32_t main_f_ccef70() { return 0; }

// sub_ccefb0  (orig 0xccefb0, mov_ret)
uint32_t main_f_ccefb0() { return 1; }

// sub_ccefd0  (orig 0xccefd0, ret_only)
void main_f_ccefd0() {}

// sub_ccefe0  (orig 0xccefe0, copy2)
void main_f_ccefe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cceff0  (orig 0xcceff0, copy2)
void main_f_cceff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccf630  (orig 0xccf630, ret_only)
void main_f_ccf630() {}

// sub_ccf640  (orig 0xccf640, copy2)
void main_f_ccf640(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccf650  (orig 0xccf650, copy2)
void main_f_ccf650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccf820  (orig 0xccf820, mov_ret)
uint32_t main_f_ccf820() { return 0; }

// sub_ccf860  (orig 0xccf860, mov_ret)
uint32_t main_f_ccf860() { return 1; }

// sub_ccf880  (orig 0xccf880, ret_only)
void main_f_ccf880() {}

// sub_ccf890  (orig 0xccf890, copy2)
void main_f_ccf890(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccf8a0  (orig 0xccf8a0, copy2)
void main_f_ccf8a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccff30  (orig 0xccff30, mov_ret)
uint32_t main_f_ccff30() { return 0; }

// sub_ccff70  (orig 0xccff70, mov_ret)
uint32_t main_f_ccff70() { return 1; }

// sub_ccff90  (orig 0xccff90, ret_only)
void main_f_ccff90() {}

// sub_ccffa0  (orig 0xccffa0, copy2)
void main_f_ccffa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ccffb0  (orig 0xccffb0, copy2)
void main_f_ccffb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd0640  (orig 0xcd0640, mov_ret)
uint32_t main_f_cd0640() { return 0; }

// sub_cd0680  (orig 0xcd0680, mov_ret)
uint32_t main_f_cd0680() { return 1; }

// sub_cd06a0  (orig 0xcd06a0, ret_only)
void main_f_cd06a0() {}

// sub_cd06b0  (orig 0xcd06b0, copy2)
void main_f_cd06b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd06c0  (orig 0xcd06c0, copy2)
void main_f_cd06c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd0d50  (orig 0xcd0d50, mov_ret)
uint32_t main_f_cd0d50() { return 0; }

// sub_cd0d90  (orig 0xcd0d90, mov_ret)
uint32_t main_f_cd0d90() { return 1; }

// sub_cd0db0  (orig 0xcd0db0, ret_only)
void main_f_cd0db0() {}

// sub_cd0dc0  (orig 0xcd0dc0, copy2)
void main_f_cd0dc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd0dd0  (orig 0xcd0dd0, copy2)
void main_f_cd0dd0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd1460  (orig 0xcd1460, mov_ret)
uint32_t main_f_cd1460() { return 0; }

// sub_cd14a0  (orig 0xcd14a0, mov_ret)
uint32_t main_f_cd14a0() { return 1; }

// sub_cd14c0  (orig 0xcd14c0, ret_only)
void main_f_cd14c0() {}

// sub_cd14d0  (orig 0xcd14d0, copy2)
void main_f_cd14d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd14e0  (orig 0xcd14e0, copy2)
void main_f_cd14e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd1b70  (orig 0xcd1b70, mov_ret)
uint32_t main_f_cd1b70() { return 1; }

// sub_cd1be0  (orig 0xcd1be0, ret_only)
void main_f_cd1be0() {}

// sub_cd1bf0  (orig 0xcd1bf0, copy2)
void main_f_cd1bf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd1c00  (orig 0xcd1c00, copy2)
void main_f_cd1c00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd2290  (orig 0xcd2290, mov_ret)
uint32_t main_f_cd2290() { return 0; }

// sub_cd22d0  (orig 0xcd22d0, mov_ret)
uint32_t main_f_cd22d0() { return 1; }

// sub_cd22f0  (orig 0xcd22f0, ret_only)
void main_f_cd22f0() {}

// sub_cd2300  (orig 0xcd2300, copy2)
void main_f_cd2300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd2310  (orig 0xcd2310, copy2)
void main_f_cd2310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd29a0  (orig 0xcd29a0, mov_ret)
uint32_t main_f_cd29a0() { return 0; }

// sub_cd29e0  (orig 0xcd29e0, mov_ret)
uint32_t main_f_cd29e0() { return 1; }

// sub_cd2a00  (orig 0xcd2a00, ret_only)
void main_f_cd2a00() {}

// sub_cd2a10  (orig 0xcd2a10, copy2)
void main_f_cd2a10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd2a20  (orig 0xcd2a20, copy2)
void main_f_cd2a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd30b0  (orig 0xcd30b0, mov_ret)
uint32_t main_f_cd30b0() { return 0; }

// sub_cd30f0  (orig 0xcd30f0, mov_ret)
uint32_t main_f_cd30f0() { return 1; }

// sub_cd3110  (orig 0xcd3110, ret_only)
void main_f_cd3110() {}

// sub_cd3120  (orig 0xcd3120, copy2)
void main_f_cd3120(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd3130  (orig 0xcd3130, copy2)
void main_f_cd3130(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd37c0  (orig 0xcd37c0, mov_ret)
uint32_t main_f_cd37c0() { return 0; }

// sub_cd3800  (orig 0xcd3800, mov_ret)
uint32_t main_f_cd3800() { return 1; }

// sub_cd3820  (orig 0xcd3820, ret_only)
void main_f_cd3820() {}

// sub_cd3830  (orig 0xcd3830, copy2)
void main_f_cd3830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd3840  (orig 0xcd3840, copy2)
void main_f_cd3840(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd3ed0  (orig 0xcd3ed0, mov_ret)
uint32_t main_f_cd3ed0() { return 0; }

// sub_cd3f10  (orig 0xcd3f10, mov_ret)
uint32_t main_f_cd3f10() { return 1; }

// sub_cd3f30  (orig 0xcd3f30, ret_only)
void main_f_cd3f30() {}

// sub_cd3f40  (orig 0xcd3f40, copy2)
void main_f_cd3f40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd3f50  (orig 0xcd3f50, copy2)
void main_f_cd3f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd45e0  (orig 0xcd45e0, mov_ret)
uint32_t main_f_cd45e0() { return 0; }

// sub_cd4620  (orig 0xcd4620, mov_ret)
uint32_t main_f_cd4620() { return 1; }

// sub_cd4640  (orig 0xcd4640, ret_only)
void main_f_cd4640() {}

// sub_cd4650  (orig 0xcd4650, copy2)
void main_f_cd4650(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd4660  (orig 0xcd4660, copy2)
void main_f_cd4660(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd4cf0  (orig 0xcd4cf0, mov_ret)
uint32_t main_f_cd4cf0() { return 0; }

// sub_cd4d30  (orig 0xcd4d30, mov_ret)
uint32_t main_f_cd4d30() { return 1; }

// sub_cd4d50  (orig 0xcd4d50, ret_only)
void main_f_cd4d50() {}

// sub_cd4d60  (orig 0xcd4d60, copy2)
void main_f_cd4d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd4d70  (orig 0xcd4d70, copy2)
void main_f_cd4d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd5400  (orig 0xcd5400, mov_ret)
uint32_t main_f_cd5400() { return 1; }

// sub_cd5470  (orig 0xcd5470, ret_only)
void main_f_cd5470() {}

// sub_cd5480  (orig 0xcd5480, copy2)
void main_f_cd5480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd5490  (orig 0xcd5490, copy2)
void main_f_cd5490(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd5b20  (orig 0xcd5b20, mov_ret)
uint32_t main_f_cd5b20() { return 0; }

// sub_cd5b60  (orig 0xcd5b60, mov_ret)
uint32_t main_f_cd5b60() { return 1; }

// sub_cd5b80  (orig 0xcd5b80, ret_only)
void main_f_cd5b80() {}

// sub_cd5b90  (orig 0xcd5b90, copy2)
void main_f_cd5b90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd5ba0  (orig 0xcd5ba0, copy2)
void main_f_cd5ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd6230  (orig 0xcd6230, mov_ret)
uint32_t main_f_cd6230() { return 0; }

// sub_cd6270  (orig 0xcd6270, mov_ret)
uint32_t main_f_cd6270() { return 1; }

// sub_cd6290  (orig 0xcd6290, ret_only)
void main_f_cd6290() {}

// sub_cd62a0  (orig 0xcd62a0, copy2)
void main_f_cd62a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd62b0  (orig 0xcd62b0, copy2)
void main_f_cd62b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd6940  (orig 0xcd6940, mov_ret)
uint32_t main_f_cd6940() { return 0; }

// sub_cd6980  (orig 0xcd6980, mov_ret)
uint32_t main_f_cd6980() { return 1; }

// sub_cd69a0  (orig 0xcd69a0, ret_only)
void main_f_cd69a0() {}

// sub_cd69b0  (orig 0xcd69b0, copy2)
void main_f_cd69b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd69c0  (orig 0xcd69c0, copy2)
void main_f_cd69c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd7050  (orig 0xcd7050, mov_ret)
uint32_t main_f_cd7050() { return 0; }

// sub_cd7090  (orig 0xcd7090, mov_ret)
uint32_t main_f_cd7090() { return 1; }

// sub_cd70b0  (orig 0xcd70b0, ret_only)
void main_f_cd70b0() {}

// sub_cd70c0  (orig 0xcd70c0, copy2)
void main_f_cd70c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd70d0  (orig 0xcd70d0, copy2)
void main_f_cd70d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd7760  (orig 0xcd7760, mov_ret)
uint32_t main_f_cd7760() { return 0; }

// sub_cd77a0  (orig 0xcd77a0, mov_ret)
uint32_t main_f_cd77a0() { return 1; }

// sub_cd77c0  (orig 0xcd77c0, ret_only)
void main_f_cd77c0() {}

// sub_cd77d0  (orig 0xcd77d0, copy2)
void main_f_cd77d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd77e0  (orig 0xcd77e0, copy2)
void main_f_cd77e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd7e70  (orig 0xcd7e70, mov_ret)
uint32_t main_f_cd7e70() { return 0; }

// sub_cd7eb0  (orig 0xcd7eb0, mov_ret)
uint32_t main_f_cd7eb0() { return 1; }

// sub_cd7ed0  (orig 0xcd7ed0, ret_only)
void main_f_cd7ed0() {}

// sub_cd7ee0  (orig 0xcd7ee0, copy2)
void main_f_cd7ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd7ef0  (orig 0xcd7ef0, copy2)
void main_f_cd7ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd8580  (orig 0xcd8580, mov_ret)
uint32_t main_f_cd8580() { return 0; }

// sub_cd85c0  (orig 0xcd85c0, mov_ret)
uint32_t main_f_cd85c0() { return 1; }

// sub_cd85e0  (orig 0xcd85e0, ret_only)
void main_f_cd85e0() {}

// sub_cd85f0  (orig 0xcd85f0, copy2)
void main_f_cd85f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd8600  (orig 0xcd8600, copy2)
void main_f_cd8600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd8c90  (orig 0xcd8c90, mov_ret)
uint32_t main_f_cd8c90() { return 0; }

// sub_cd8cd0  (orig 0xcd8cd0, mov_ret)
uint32_t main_f_cd8cd0() { return 1; }

// sub_cd8cf0  (orig 0xcd8cf0, ret_only)
void main_f_cd8cf0() {}

// sub_cd8d00  (orig 0xcd8d00, copy2)
void main_f_cd8d00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd8d10  (orig 0xcd8d10, copy2)
void main_f_cd8d10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd93a0  (orig 0xcd93a0, mov_ret)
uint32_t main_f_cd93a0() { return 0; }

// sub_cd93e0  (orig 0xcd93e0, mov_ret)
uint32_t main_f_cd93e0() { return 1; }

// sub_cd9400  (orig 0xcd9400, ret_only)
void main_f_cd9400() {}

// sub_cd9410  (orig 0xcd9410, copy2)
void main_f_cd9410(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd9420  (orig 0xcd9420, copy2)
void main_f_cd9420(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd9ab0  (orig 0xcd9ab0, mov_ret)
uint32_t main_f_cd9ab0() { return 0; }

// sub_cd9af0  (orig 0xcd9af0, mov_ret)
uint32_t main_f_cd9af0() { return 1; }

// sub_cd9b10  (orig 0xcd9b10, ret_only)
void main_f_cd9b10() {}

// sub_cd9b20  (orig 0xcd9b20, copy2)
void main_f_cd9b20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cd9b30  (orig 0xcd9b30, copy2)
void main_f_cd9b30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cda1c0  (orig 0xcda1c0, mov_ret)
uint32_t main_f_cda1c0() { return 0; }

// sub_cda200  (orig 0xcda200, mov_ret)
uint32_t main_f_cda200() { return 1; }

// sub_cda220  (orig 0xcda220, ret_only)
void main_f_cda220() {}

// sub_cda230  (orig 0xcda230, copy2)
void main_f_cda230(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cda240  (orig 0xcda240, copy2)
void main_f_cda240(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cda8d0  (orig 0xcda8d0, mov_ret)
uint32_t main_f_cda8d0() { return 1; }

// sub_cda940  (orig 0xcda940, ret_only)
void main_f_cda940() {}

// sub_cda950  (orig 0xcda950, copy2)
void main_f_cda950(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cda960  (orig 0xcda960, copy2)
void main_f_cda960(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdae90  (orig 0xcdae90, ret_only)
void main_f_cdae90() {}

// sub_cdaea0  (orig 0xcdaea0, ret_only)
void main_f_cdaea0() {}

// sub_cdaeb0  (orig 0xcdaeb0, ret_only)
void main_f_cdaeb0() {}

// sub_cdbd20  (orig 0xcdbd20, ret_only)
void main_f_cdbd20() {}

// sub_cdbd30  (orig 0xcdbd30, copy2)
void main_f_cdbd30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdbd40  (orig 0xcdbd40, copy2)
void main_f_cdbd40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdbe70  (orig 0xcdbe70, ret_only)
void main_f_cdbe70() {}

// sub_cdc050  (orig 0xcdc050, ret_only)
void main_f_cdc050() {}

// sub_cdc060  (orig 0xcdc060, copy2)
void main_f_cdc060(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdc070  (orig 0xcdc070, copy2)
void main_f_cdc070(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdc0a0  (orig 0xcdc0a0, ret_only)
void main_f_cdc0a0() {}

// sub_cdc0b0  (orig 0xcdc0b0, copy2)
void main_f_cdc0b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdc0c0  (orig 0xcdc0c0, copy2)
void main_f_cdc0c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdc7a0  (orig 0xcdc7a0, ret_only)
void main_f_cdc7a0() {}

// sub_cdcae0  (orig 0xcdcae0, ret_only)
void main_f_cdcae0() {}

// sub_cdcaf0  (orig 0xcdcaf0, copy2)
void main_f_cdcaf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdcb00  (orig 0xcdcb00, copy2)
void main_f_cdcb00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdcda0  (orig 0xcdcda0, ret_only)
void main_f_cdcda0() {}

// sub_cdcdb0  (orig 0xcdcdb0, struct-copy)
void main_f_cdcdb0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_cdcdd0  (orig 0xcdcdd0, struct-copy)
void main_f_cdcdd0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_cdce60  (orig 0xcdce60, ret_only)
void main_f_cdce60() {}

// sub_cdce70  (orig 0xcdce70, copy2)
void main_f_cdce70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cdce80  (orig 0xcdce80, copy2)
void main_f_cdce80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ce00b0  (orig 0xce00b0, ret_only)
void main_f_ce00b0() {}

// sub_ce00c0  (orig 0xce00c0, ret_only)
void main_f_ce00c0() {}

// sub_ce00d0  (orig 0xce00d0, ret_only)
void main_f_ce00d0() {}

// sub_ce02f0  (orig 0xce02f0, strlit-ret)
const char *main_f_ce02f0() { static char g_f_ce02f0[1]; __asm__ volatile("" ::: "memory"); return g_f_ce02f0; }

// sub_ce08f0  (orig 0xce08f0, compare)
bool main_f_ce08f0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 104)) != (uint64_t)(0); }

// sub_ce0de0  (orig 0xce0de0, ret_only)
void main_f_ce0de0() {}

// sub_ce0df0  (orig 0xce0df0, copy2)
void main_f_ce0df0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ce0e00  (orig 0xce0e00, copy2)
void main_f_ce0e00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ce8800  (orig 0xce8800, ret_only)
void main_f_ce8800() {}

// sub_ce9e80  (orig 0xce9e80, mov_ret)
uint32_t main_f_ce9e80() { return 1; }

// sub_ce9ec0  (orig 0xce9ec0, getter-chain)
uint8_t main_f_ce9ec0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 912);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 160);
    return *(uint8_t*)((char*)(t1) + 216);
}

// sub_cea2e0  (orig 0xcea2e0, ret_only)
void main_f_cea2e0() {}

// sub_cea2f0  (orig 0xcea2f0, copy2)
void main_f_cea2f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cea300  (orig 0xcea300, copy2)
void main_f_cea300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cec7e0  (orig 0xcec7e0, ret_only)
void main_f_cec7e0() {}

// sub_cee6c0  (orig 0xcee6c0, ret_only)
void main_f_cee6c0() {}

// sub_cee6d0  (orig 0xcee6d0, copy2)
void main_f_cee6d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cee6e0  (orig 0xcee6e0, copy2)
void main_f_cee6e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cf23d0  (orig 0xcf23d0, ret_only)
void main_f_cf23d0() {}

// sub_cf25b0  (orig 0xcf25b0, mov_ret)
uint32_t main_f_cf25b0() { return 1; }

// sub_cf25c0  (orig 0xcf25c0, getter)
float main_f_cf25c0(void* a0) { return *(float*)((char*)(a0) + 1452); }

// sub_cf25d0  (orig 0xcf25d0, straight)
void main_f_cf25d0(void* a0, void* a1, void* a2) {
    *(uint64_t*)((char*)(a0) + 392) = *(uint64_t*)((char*)(a1));
    *(uint64_t*)((char*)(a0) + 1360) = *(uint64_t*)((char*)(a2));
}

// sub_cf26b0  (orig 0xcf26b0, straight)
void main_f_cf26b0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1464) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_cf41f0  (orig 0xcf41f0, ret_only)
void main_f_cf41f0() {}

// sub_cf43a0  (orig 0xcf43a0, copy2)
void main_f_cf43a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cf43b0  (orig 0xcf43b0, copy2)
void main_f_cf43b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cf4430  (orig 0xcf4430, ret_only)
void main_f_cf4430() {}

// sub_cf4520  (orig 0xcf4520, ret_only)
void main_f_cf4520() {}

// sub_cf4f90  (orig 0xcf4f90, ret_only)
void main_f_cf4f90() {}

// sub_cf4fa0  (orig 0xcf4fa0, ret_only)
void main_f_cf4fa0() {}

// sub_cf93e0  (orig 0xcf93e0, straight)
void main_f_cf93e0(void* a0) {
    *(uint32_t*)((char*)(a0) + 128) = (*(uint32_t*)((char*)(a0) + 128)) - (1);
}

// sub_cf9870  (orig 0xcf9870, straight)
void main_f_cf9870(void* a0) {
    *(uint32_t*)((char*)(a0) + 156) = (*(uint32_t*)((char*)(a0) + 156)) - (1);
}

// sub_cf9b90  (orig 0xcf9b90, straight)
void main_f_cf9b90(void* a0) {
    *(uint32_t*)((char*)(a0) + 184) = (*(uint32_t*)((char*)(a0) + 184)) - (1);
}

// sub_cfa360  (orig 0xcfa360, ret_only)
void main_f_cfa360() {}

// sub_cfa370  (orig 0xcfa370, struct-copy)
void main_f_cfa370(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_cfa390  (orig 0xcfa390, struct-copy)
void main_f_cfa390(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_cfa850  (orig 0xcfa850, straight)
void main_f_cfa850(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 112) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_cfa880  (orig 0xcfa880, straight)
void main_f_cfa880(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 113) = (uint8_t)k0;
}

// sub_cfa890  (orig 0xcfa890, setter)
void main_f_cfa890(void* a0) { *(uint8_t*)((char*)(a0) + 113) = 0; }

// sub_cfb070  (orig 0xcfb070, straight)
void main_f_cfb070(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 144) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_cfb0a0  (orig 0xcfb0a0, straight)
void main_f_cfb0a0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 145) = (uint8_t)k0;
}

// sub_cfb0b0  (orig 0xcfb0b0, setter)
void main_f_cfb0b0(void* a0) { *(uint8_t*)((char*)(a0) + 145) = 0; }

// sub_cfb150  (orig 0xcfb150, straight)
void main_f_cfb150(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1));
}

// sub_cfb180  (orig 0xcfb180, setter)
void main_f_cfb180(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 96) = a1; }

// sub_cfb190  (orig 0xcfb190, setter)
void main_f_cfb190(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 100) = a1; }

// sub_cfb1a0  (orig 0xcfb1a0, setter)
void main_f_cfb1a0(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 104) = a1; }

// sub_cfb1b0  (orig 0xcfb1b0, getter)
uint32_t main_f_cfb1b0(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_cfb1c0  (orig 0xcfb1c0, getter)
uint32_t main_f_cfb1c0(void* a0) { return *(uint32_t*)((char*)(a0) + 100); }

// sub_cfb1d0  (orig 0xcfb1d0, getter)
uint32_t main_f_cfb1d0(void* a0) { return *(uint32_t*)((char*)(a0) + 104); }

// sub_cfb1e0  (orig 0xcfb1e0, straight)
void main_f_cfb1e0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 136) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 128) = *(uint64_t*)((char*)(a1));
}

// sub_cfc200  (orig 0xcfc200, straight)
void main_f_cfc200(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 128) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_cfc230  (orig 0xcfc230, straight)
void main_f_cfc230(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 129) = (uint8_t)k0;
}

// sub_cfc240  (orig 0xcfc240, setter)
void main_f_cfc240(void* a0) { *(uint8_t*)((char*)(a0) + 129) = 0; }

// sub_cfc550  (orig 0xcfc550, setter)
void main_f_cfc550(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 96) = a1; }

// sub_cfc560  (orig 0xcfc560, getter)
uint32_t main_f_cfc560(void* a0) { return *(uint32_t*)((char*)(a0) + 96); }

// sub_cfc570  (orig 0xcfc570, straight)
void main_f_cfc570(void* a0, void* a1) {
    *(uint64_t*)((char*)(a0) + 120) = *(uint64_t*)((char*)(a1) + 8);
    *(uint64_t*)((char*)(a0) + 112) = *(uint64_t*)((char*)(a1));
}

// sub_cfe180  (orig 0xcfe180, ret_only)
void main_f_cfe180() {}

// sub_cfe590  (orig 0xcfe590, copy2)
void main_f_cfe590(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe5a0  (orig 0xcfe5a0, copy2)
void main_f_cfe5a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe5c0  (orig 0xcfe5c0, ret_only)
void main_f_cfe5c0() {}

// sub_cfe760  (orig 0xcfe760, copy2)
void main_f_cfe760(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe770  (orig 0xcfe770, copy2)
void main_f_cfe770(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe790  (orig 0xcfe790, ret_only)
void main_f_cfe790() {}

// sub_cfe7a0  (orig 0xcfe7a0, copy2)
void main_f_cfe7a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe7b0  (orig 0xcfe7b0, copy2)
void main_f_cfe7b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe7d0  (orig 0xcfe7d0, ret_only)
void main_f_cfe7d0() {}

// sub_cfe7e0  (orig 0xcfe7e0, copy2)
void main_f_cfe7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe7f0  (orig 0xcfe7f0, copy2)
void main_f_cfe7f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_cfe850  (orig 0xcfe850, straight)
void main_f_cfe850(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
}

// sub_cfe860  (orig 0xcfe860, setter)
void main_f_cfe860(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_cfe870  (orig 0xcfe870, ret_only)
void main_f_cfe870() {}

// sub_cff110  (orig 0xcff110, mov_ret)
uint32_t main_f_cff110() { return 1; }

// sub_d00be0  (orig 0xd00be0, ret_only)
void main_f_d00be0() {}

// sub_d00dd0  (orig 0xd00dd0, copy2)
void main_f_d00dd0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 1704) = *(uint32_t*)((char*)(a1)); }

// sub_d00de0  (orig 0xd00de0, straight)
void main_f_d00de0(void* a0, void* a1, void* a2) {
    *(uint32_t*)((char*)(a0) + 1716) = *(uint32_t*)((char*)(a1));
    *(uint32_t*)((char*)(a0) + 1720) = *(uint32_t*)((char*)(a2));
}

// sub_d01730  (orig 0xd01730, straight)
void main_f_d01730(void* a0, int32_t a1) {
    void* p0 = (void*)((uintptr_t)(((char *)(char*)(a0) + (uintptr_t)(((int32_t)a1)) * 16)));
    *(uint64_t*)((char*)(p0) + 1520) = 14695981039346656837;
    *(uint8_t*)((char*)(p0) + 1528) = 0;
}

// sub_d01b50  (orig 0xd01b50, mov_ret)
uint32_t main_f_d01b50() { return 1; }

// sub_d021e0  (orig 0xd021e0, ret_only)
void main_f_d021e0() {}

// sub_d021f0  (orig 0xd021f0, copy2)
void main_f_d021f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d02200  (orig 0xd02200, copy2)
void main_f_d02200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d02f30  (orig 0xd02f30, ret_only)
void main_f_d02f30() {}

// sub_d03590  (orig 0xd03590, ret_only)
void main_f_d03590() {}

// sub_d035a0  (orig 0xd035a0, copy2)
void main_f_d035a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d035b0  (orig 0xd035b0, copy2)
void main_f_d035b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d03a30  (orig 0xd03a30, ret_only)
void main_f_d03a30() {}

// sub_d03a40  (orig 0xd03a40, ret_only)
void main_f_d03a40() {}

// sub_d03a50  (orig 0xd03a50, ret_only)
void main_f_d03a50() {}

// sub_d03a60  (orig 0xd03a60, getter)
float main_f_d03a60(void* a0) { return *(float*)((char*)(a0) + 1336); }

// sub_d03e40  (orig 0xd03e40, ret_only)
void main_f_d03e40() {}

// sub_d03e50  (orig 0xd03e50, copy2)
void main_f_d03e50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d03e60  (orig 0xd03e60, copy2)
void main_f_d03e60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d04f30  (orig 0xd04f30, ret_only)
void main_f_d04f30() {}

// sub_d04f40  (orig 0xd04f40, ret_only)
void main_f_d04f40() {}

// sub_d08060  (orig 0xd08060, mov_ret)
uint32_t main_f_d08060() { return 1; }

// sub_d0a100  (orig 0xd0a100, getter)
float main_f_d0a100(void* a0) { return *(float*)((char*)(a0) + 1244); }

// sub_d0a110  (orig 0xd0a110, getter)
float main_f_d0a110(void* a0) { return *(float*)((char*)(a0) + 1300); }

// sub_d0b130  (orig 0xd0b130, ret_only)
void main_f_d0b130() {}

// sub_d0c3a0  (orig 0xd0c3a0, mov_ret)
uint32_t main_f_d0c3a0() { return 2; }

// sub_d0ca80  (orig 0xd0ca80, setter)
void main_f_d0ca80(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d0ca90  (orig 0xd0ca90, straight)
void main_f_d0ca90(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
}

// sub_d0ffa0  (orig 0xd0ffa0, mov_ret)
uint32_t main_f_d0ffa0() { return 1; }

// sub_d115e0  (orig 0xd115e0, mov_ret)
uint32_t main_f_d115e0() { return 1; }

// sub_d12910  (orig 0xd12910, mov_ret)
uint32_t main_f_d12910() { return 0; }

// sub_d13460  (orig 0xd13460, getter)
uint8_t main_f_d13460(void* a0) { return *(uint8_t*)((char*)(a0) + 2728); }

// sub_d13690  (orig 0xd13690, mov_ret)
uint32_t main_f_d13690() { return 3; }

// sub_d14e90  (orig 0xd14e90, ret_only)
void main_f_d14e90() {}

// sub_d14ea0  (orig 0xd14ea0, setter)
void main_f_d14ea0(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d14eb0  (orig 0xd14eb0, straight)
void main_f_d14eb0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
}

// sub_d17e70  (orig 0xd17e70, mov_ret)
uint32_t main_f_d17e70() { return 4; }

// sub_d185f0  (orig 0xd185f0, ret_only)
void main_f_d185f0() {}

// sub_d18600  (orig 0xd18600, copy2)
void main_f_d18600(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d18610  (orig 0xd18610, copy2)
void main_f_d18610(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d1b5a0  (orig 0xd1b5a0, straight)
void main_f_d1b5a0(void* a0, void* a1) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 214) = *(uint8_t*)((char*)(a1) + 4);
    *(uint32_t*)((char*)(a0) + 152) = *(uint32_t*)((char*)(a1));
    *(uint8_t*)((char*)(a0) + 156) = ((*(uint8_t*)((char*)(a1) + 5) != 0) ? 1 : 0);
    *(uint8_t*)((char*)(a0) + 213) = (uint8_t)k0;
}

// sub_d1b6a0  (orig 0xd1b6a0, setter)
void main_f_d1b6a0(void* a0) { *(uint8_t*)((char*)(a0) + 158) = 0; }

// sub_d1d280  (orig 0xd1d280, getter)
uint8_t main_f_d1d280(void* a0) { return *(uint8_t*)((char*)(a0) + 158); }

// sub_d29850  (orig 0xd29850, mov_ret)
uint32_t main_f_d29850() { return 0; }

// sub_d2e1c0  (orig 0xd2e1c0, ret_only)
void main_f_d2e1c0() {}

// sub_d337f0  (orig 0xd337f0, setter)
void main_f_d337f0(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d347a0  (orig 0xd347a0, ret_only)
void main_f_d347a0() {}

// sub_d369b0  (orig 0xd369b0, getter-chain)
uint8_t main_f_d369b0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 1224))) + 236); }

// sub_d36a60  (orig 0xd36a60, straight)
void main_f_d36a60(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 1296) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_d36e50  (orig 0xd36e50, mov_ret)
uint32_t main_f_d36e50() { return 1; }

// sub_d38350  (orig 0xd38350, ret_only)
void main_f_d38350() {}

// sub_d38360  (orig 0xd38360, ret_only)
void main_f_d38360() {}

// sub_d398a0  (orig 0xd398a0, ret_only)
void main_f_d398a0() {}

// sub_d398b0  (orig 0xd398b0, ret_only)
void main_f_d398b0() {}

// sub_d398c0  (orig 0xd398c0, ret_only)
void main_f_d398c0() {}

// sub_d398d0  (orig 0xd398d0, ret_only)
void main_f_d398d0() {}

// sub_d39da0  (orig 0xd39da0, mov_ret)
uint32_t main_f_d39da0() { return 0; }

// sub_d3b890  (orig 0xd3b890, ret_only)
void main_f_d3b890() {}

// sub_d3b960  (orig 0xd3b960, getter)
float main_f_d3b960(void* a0) { return *(float*)((char*)(a0) + 1312); }

// sub_d3e090  (orig 0xd3e090, straight)
void main_f_d3e090(void* a0, uint64_t a1, uint32_t a2) {
    *(uint32_t*)((char*)(a0) + 1616) = (uint32_t)(a1);
    *(uint8_t*)((char*)(a0) + 1620) = (uint8_t)((((uint32_t)a2)) & (1));
}

// sub_d45b60  (orig 0xd45b60, compare)
bool main_f_d45b60(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 2024)) != (uint64_t)(0); }

// sub_d48740  (orig 0xd48740, mov_ret)
uint32_t main_f_d48740() { return 16; }

// sub_d496b0  (orig 0xd496b0, ret_only)
void main_f_d496b0() {}

// sub_d49820  (orig 0xd49820, copy2)
void main_f_d49820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49830  (orig 0xd49830, copy2)
void main_f_d49830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d498f0  (orig 0xd498f0, ret_only)
void main_f_d498f0() {}

// sub_d49900  (orig 0xd49900, copy2)
void main_f_d49900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49910  (orig 0xd49910, copy2)
void main_f_d49910(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49970  (orig 0xd49970, ret_only)
void main_f_d49970() {}

// sub_d49980  (orig 0xd49980, copy2)
void main_f_d49980(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49990  (orig 0xd49990, copy2)
void main_f_d49990(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49b70  (orig 0xd49b70, const-field-set-store)
void main_f_d49b70(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 1196) = (uint8_t)(t1);
}

// sub_d49b80  (orig 0xd49b80, ret_only)
void main_f_d49b80() {}

// sub_d49b90  (orig 0xd49b90, copy2)
void main_f_d49b90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49ba0  (orig 0xd49ba0, copy2)
void main_f_d49ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d49d30  (orig 0xd49d30, ret_only)
void main_f_d49d30() {}

// sub_d49e00  (orig 0xd49e00, ret_only)
void main_f_d49e00() {}

// sub_d4a340  (orig 0xd4a340, compare)
bool main_f_d4a340(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 144)) == (uint64_t)(1); }

// sub_d4a350  (orig 0xd4a350, ret_only)
void main_f_d4a350() {}

// sub_d4a360  (orig 0xd4a360, ret_only)
void main_f_d4a360() {}

// sub_d4a370  (orig 0xd4a370, ret_only)
void main_f_d4a370() {}

// sub_d4a870  (orig 0xd4a870, ret_only)
void main_f_d4a870() {}

// sub_d4a8f0  (orig 0xd4a8f0, ret_only)
void main_f_d4a8f0() {}

// sub_d4a9b0  (orig 0xd4a9b0, mov_ret)
uint32_t main_f_d4a9b0() { return 1; }

// sub_d4a9c0  (orig 0xd4a9c0, ret_only)
void main_f_d4a9c0() {}

// sub_d4a9d0  (orig 0xd4a9d0, ret_only)
void main_f_d4a9d0() {}

// sub_d4a9e0  (orig 0xd4a9e0, ret_only)
void main_f_d4a9e0() {}

// sub_d4c360  (orig 0xd4c360, setter)
void main_f_d4c360(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d4c370  (orig 0xd4c370, straight)
void main_f_d4c370(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
}

// sub_d4d150  (orig 0xd4d150, setter)
void main_f_d4d150(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d4d160  (orig 0xd4d160, straight)
void main_f_d4d160(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
}

// sub_d4dfe0  (orig 0xd4dfe0, straight)
void main_f_d4dfe0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 125) = (uint8_t)k0;
}

// sub_d4fb90  (orig 0xd4fb90, getter)
uint32_t main_f_d4fb90(void* a0) { return *(uint32_t*)((char*)(a0) + 1468); }

// sub_d4fba0  (orig 0xd4fba0, getter)
uint16_t main_f_d4fba0(void* a0) { return *(uint16_t*)((char*)(a0) + 1472); }

// sub_d538b0  (orig 0xd538b0, ret_only)
void main_f_d538b0() {}

// sub_d5c350  (orig 0xd5c350, mov_ret)
uint32_t main_f_d5c350() { return 4; }

// sub_d5c760  (orig 0xd5c760, ret_only)
void main_f_d5c760() {}

// sub_d5cb00  (orig 0xd5cb00, ret_only)
void main_f_d5cb00() {}

// sub_d5cb10  (orig 0xd5cb10, copy2)
void main_f_d5cb10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d5cb20  (orig 0xd5cb20, copy2)
void main_f_d5cb20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d5e420  (orig 0xd5e420, getter)
uint32_t main_f_d5e420(void* a0) { return *(uint32_t*)((char*)(a0) + 636); }

// sub_d604d0  (orig 0xd604d0, straight)
void main_f_d604d0(void* a0) {
    *(uint64_t*)((char*)(a0) + 80) = 14695981039346656837;
}

// sub_d61e70  (orig 0xd61e70, compare)
bool main_f_d61e70(void* a0, uint64_t a1) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1216)) == (uint32_t)(a1); }

// sub_d635d0  (orig 0xd635d0, mov_ret)
uint32_t main_f_d635d0() { return 0; }

// sub_d635e0  (orig 0xd635e0, mov_ret)
uint32_t main_f_d635e0() { return 1; }

// sub_d635f0  (orig 0xd635f0, ret_only)
void main_f_d635f0() {}

// sub_d63820  (orig 0xd63820, ret_only)
void main_f_d63820() {}

// sub_d63ce0  (orig 0xd63ce0, mov_ret)
uint32_t main_f_d63ce0() { return 1; }

// sub_d63cf0  (orig 0xd63cf0, straight)
void main_f_d63cf0(void* a0) {
    *(uint32_t*)((char*)(a0) + 148) = 1;
}

// sub_d64200  (orig 0xd64200, ret_only)
void main_f_d64200() {}

// sub_d64730  (orig 0xd64730, setter)
void main_f_d64730(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d64740  (orig 0xd64740, straight)
void main_f_d64740(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
}

// sub_d64fc0  (orig 0xd64fc0, mov_ret)
uint32_t main_f_d64fc0() { return 1; }

// sub_d64fd0  (orig 0xd64fd0, ret_only)
void main_f_d64fd0() {}

// sub_d677c0  (orig 0xd677c0, ret_only)
void main_f_d677c0() {}

// sub_d68380  (orig 0xd68380, ret_only)
void main_f_d68380() {}

// sub_d68640  (orig 0xd68640, ret_only)
void main_f_d68640() {}

// sub_d692d0  (orig 0xd692d0, straight)
void main_f_d692d0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 1828) = (uint8_t)k0;
}

// sub_d693a0  (orig 0xd693a0, getter)
uint8_t main_f_d693a0(void* a0) { return *(uint8_t*)((char*)(a0) + 1828); }

// sub_d69a10  (orig 0xd69a10, getter)
uint8_t main_f_d69a10(void* a0) { return *(uint8_t*)((char*)(a0) + 1825); }

// sub_d69dd0  (orig 0xd69dd0, mov_ret)
uint32_t main_f_d69dd0() { return 0; }

// sub_d69de0  (orig 0xd69de0, straight)
void main_f_d69de0(void* a0, void* a1) {
    *(uint64_t*)((char*)(a1) + 96) = (uint64_t)((char*)(a0) + 1576);
}

// sub_d69df0  (orig 0xd69df0, straight)
void main_f_d69df0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 88) = 3;
}

// sub_d6a3d0  (orig 0xd6a3d0, mov_ret)
uint32_t main_f_d6a3d0() { return 0; }

// sub_d6acd0  (orig 0xd6acd0, setter)
void main_f_d6acd0(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d6ace0  (orig 0xd6ace0, straight)
void main_f_d6ace0(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
}

// sub_d6bbf0  (orig 0xd6bbf0, mov_ret)
uint32_t main_f_d6bbf0() { return 1; }

// sub_d6bc00  (orig 0xd6bc00, ret_only)
void main_f_d6bc00() {}

// sub_d6be40  (orig 0xd6be40, ret_only)
void main_f_d6be40() {}

// sub_d6c7f0  (orig 0xd6c7f0, mov_ret)
uint32_t main_f_d6c7f0() { return 1; }

// sub_d6c8f0  (orig 0xd6c8f0, ret_only)
void main_f_d6c8f0() {}

// sub_d6cd30  (orig 0xd6cd30, mov_ret)
uint32_t main_f_d6cd30() { return 1; }

// sub_d6cd40  (orig 0xd6cd40, ret_only)
void main_f_d6cd40() {}

// sub_d6d0d0  (orig 0xd6d0d0, ret_only)
void main_f_d6d0d0() {}

// sub_d6d6c0  (orig 0xd6d6c0, mov_ret)
uint32_t main_f_d6d6c0() { return 1; }

// sub_d6e660  (orig 0xd6e660, mov_ret)
uint32_t main_f_d6e660() { return 1; }

// sub_d6e670  (orig 0xd6e670, ret_only)
void main_f_d6e670() {}

// sub_d6e990  (orig 0xd6e990, ret_only)
void main_f_d6e990() {}

// sub_d6eef0  (orig 0xd6eef0, compare)
bool main_f_d6eef0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 104)) != (uint64_t)(0); }

// sub_d6ef30  (orig 0xd6ef30, compare)
bool main_f_d6ef30(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 96)) == (uint64_t)(0); }

// sub_d6f540  (orig 0xd6f540, mov_ret)
uint32_t main_f_d6f540() { return 1; }

// sub_d70650  (orig 0xd70650, mov_ret)
uint32_t main_f_d70650() { return 1; }

// sub_d716e0  (orig 0xd716e0, mov_ret)
uint32_t main_f_d716e0() { return 1; }

// sub_d71f20  (orig 0xd71f20, ret_only)
void main_f_d71f20() {}

// sub_d725e0  (orig 0xd725e0, mov_ret)
uint32_t main_f_d725e0() { return 1; }

// sub_d730a0  (orig 0xd730a0, mov_ret)
uint32_t main_f_d730a0() { return 1; }

// sub_d754f0  (orig 0xd754f0, straight)
void main_f_d754f0(void* a0, uint32_t a1) {
    *(uint8_t*)((char*)(a0) + 318) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_d76000  (orig 0xd76000, mov_ret)
uint32_t main_f_d76000() { return 1; }

// sub_d79900  (orig 0xd79900, ret_only)
void main_f_d79900() {}

// sub_d7b2b0  (orig 0xd7b2b0, mov_ret)
uint32_t main_f_d7b2b0() { return 1; }

// sub_d7b2c0  (orig 0xd7b2c0, ret_only)
void main_f_d7b2c0() {}

// sub_d7b950  (orig 0xd7b950, ret_only)
void main_f_d7b950() {}

// sub_d7cc60  (orig 0xd7cc60, mov_ret)
uint32_t main_f_d7cc60() { return 1; }

// sub_d7e440  (orig 0xd7e440, mov_ret)
uint32_t main_f_d7e440() { return 1; }

// sub_d7e450  (orig 0xd7e450, ret_only)
void main_f_d7e450() {}

// sub_d7e700  (orig 0xd7e700, ret_only)
void main_f_d7e700() {}

// sub_d7f810  (orig 0xd7f810, mov_ret)
uint32_t main_f_d7f810() { return 1; }

// sub_d81c20  (orig 0xd81c20, ret_only)
void main_f_d81c20() {}

// sub_d82730  (orig 0xd82730, ret_only)
void main_f_d82730() {}

// sub_d82740  (orig 0xd82740, ret_only)
void main_f_d82740() {}

// sub_d82750  (orig 0xd82750, ret_only)
void main_f_d82750() {}

// sub_d83f40  (orig 0xd83f40, mov_ret)
uint32_t main_f_d83f40() { return 1; }

// sub_d84440  (orig 0xd84440, mov_ret)
uint32_t main_f_d84440() { return 1; }

// sub_d84450  (orig 0xd84450, ret_only)
void main_f_d84450() {}

// sub_d848e0  (orig 0xd848e0, ret_only)
void main_f_d848e0() {}

// sub_d89760  (orig 0xd89760, straight)
void main_f_d89760(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 140) = (uint8_t)k0;
}

// sub_d89ed0  (orig 0xd89ed0, ret_only)
void main_f_d89ed0() {}

// sub_d89ee0  (orig 0xd89ee0, copy2)
void main_f_d89ee0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d89ef0  (orig 0xd89ef0, copy2)
void main_f_d89ef0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d89f20  (orig 0xd89f20, ret_only)
void main_f_d89f20() {}

// sub_d89f30  (orig 0xd89f30, copy2)
void main_f_d89f30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d89f40  (orig 0xd89f40, copy2)
void main_f_d89f40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d89f50  (orig 0xd89f50, compare)
bool main_f_d89f50(uint64_t unused0, void* a1) { return (uint32_t)(*(uint32_t*)((char*)(a1) + 144)) == (uint64_t)(1); }

// sub_d89f60  (orig 0xd89f60, ret_only)
void main_f_d89f60() {}

// sub_d89f70  (orig 0xd89f70, ret_only)
void main_f_d89f70() {}

// sub_d89f80  (orig 0xd89f80, ret_only)
void main_f_d89f80() {}

// sub_d8b430  (orig 0xd8b430, ret_only)
void main_f_d8b430() {}

// sub_d8b440  (orig 0xd8b440, copy2)
void main_f_d8b440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d8b450  (orig 0xd8b450, copy2)
void main_f_d8b450(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_d8b460  (orig 0xd8b460, ret_only)
void main_f_d8b460() {}

// sub_d8b470  (orig 0xd8b470, ret_only)
void main_f_d8b470() {}

// sub_d8b480  (orig 0xd8b480, ret_only)
void main_f_d8b480() {}

// sub_d8b490  (orig 0xd8b490, ret_only)
void main_f_d8b490() {}

// sub_d93290  (orig 0xd93290, mov_ret)
uint32_t main_f_d93290() { return 1; }

// sub_d932a0  (orig 0xd932a0, ret_only)
void main_f_d932a0() {}

// sub_d943c0  (orig 0xd943c0, mov_ret)
uint32_t main_f_d943c0() { return 1; }

// sub_d943d0  (orig 0xd943d0, ret_only)
void main_f_d943d0() {}

// sub_d94830  (orig 0xd94830, ret_only)
void main_f_d94830() {}

// sub_d94e50  (orig 0xd94e50, mov_ret)
uint32_t main_f_d94e50() { return 1; }

// sub_d94e60  (orig 0xd94e60, ret_only)
void main_f_d94e60() {}

// sub_d95100  (orig 0xd95100, ret_only)
void main_f_d95100() {}

// sub_d95470  (orig 0xd95470, mov_ret)
uint32_t main_f_d95470() { return 1; }

// sub_d95480  (orig 0xd95480, ret_only)
void main_f_d95480() {}

// sub_d96140  (orig 0xd96140, ret_only)
void main_f_d96140() {}

// sub_d97a70  (orig 0xd97a70, setter)
void main_f_d97a70(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; }

// sub_d97a80  (orig 0xd97a80, straight)
void main_f_d97a80(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
}

// sub_d982f0  (orig 0xd982f0, ret_only)
void main_f_d982f0() {}

// sub_d98300  (orig 0xd98300, ret_only)
void main_f_d98300() {}

// sub_d98310  (orig 0xd98310, ret_only)
void main_f_d98310() {}

// sub_d98320  (orig 0xd98320, ret_only)
void main_f_d98320() {}

// sub_d98950  (orig 0xd98950, ret_only)
void main_f_d98950() {}

// sub_d991b0  (orig 0xd991b0, mov_ret)
uint32_t main_f_d991b0() { return 1; }

// sub_d991c0  (orig 0xd991c0, ret_only)
void main_f_d991c0() {}

// sub_d998b0  (orig 0xd998b0, ret_only)
void main_f_d998b0() {}

// sub_d9a400  (orig 0xd9a400, mov_ret)
uint32_t main_f_d9a400() { return 1; }

// sub_d9a410  (orig 0xd9a410, ret_only)
void main_f_d9a410() {}

// sub_d9a490  (orig 0xd9a490, ret_only)
void main_f_d9a490() {}

// sub_d9ad70  (orig 0xd9ad70, mov_ret)
uint32_t main_f_d9ad70() { return 1; }

// sub_d9b8e0  (orig 0xd9b8e0, ret_only)
void main_f_d9b8e0() {}

// sub_d9be30  (orig 0xd9be30, mov_ret)
uint32_t main_f_d9be30() { return 1; }

// sub_d9d560  (orig 0xd9d560, mov_ret)
uint32_t main_f_d9d560() { return 1; }

// sub_d9d570  (orig 0xd9d570, ret_only)
void main_f_d9d570() {}

// sub_d9fc10  (orig 0xd9fc10, ret_only)
void main_f_d9fc10() {}

// sub_da2870  (orig 0xda2870, ret_only)
void main_f_da2870() {}

// sub_da2880  (orig 0xda2880, ret_only)
void main_f_da2880() {}

// sub_da2890  (orig 0xda2890, ret_only)
void main_f_da2890() {}

// sub_da2e80  (orig 0xda2e80, mov_ret)
uint32_t main_f_da2e80() { return 1; }

// sub_da2e90  (orig 0xda2e90, ret_only)
void main_f_da2e90() {}

// sub_da30d0  (orig 0xda30d0, ret_only)
void main_f_da30d0() {}

// sub_da3240  (orig 0xda3240, mov_ret)
uint32_t main_f_da3240() { return 1; }

// sub_da3250  (orig 0xda3250, setter)
void main_f_da3250(void* a0) { *(uint32_t*)((char*)(a0) + 104) = 0; }

// sub_da34a0  (orig 0xda34a0, ret_only)
void main_f_da34a0() {}

// sub_da3b90  (orig 0xda3b90, mov_ret)
uint32_t main_f_da3b90() { return 1; }

// sub_da5000  (orig 0xda5000, mov_ret)
uint32_t main_f_da5000() { return 1; }

// sub_da5f70  (orig 0xda5f70, mov_ret)
uint32_t main_f_da5f70() { return 1; }

// sub_da5f80  (orig 0xda5f80, straight)
void main_f_da5f80(void* a0) {
    *(uint32_t*)((char*)(a0) + 144) = 10;
}

// sub_da5ff0  (orig 0xda5ff0, ret_only)
void main_f_da5ff0() {}

// sub_da6340  (orig 0xda6340, mov_ret)
uint32_t main_f_da6340() { return 1; }

// sub_da6350  (orig 0xda6350, ret_only)
void main_f_da6350() {}

// sub_da6360  (orig 0xda6360, ret_only)
void main_f_da6360() {}

// sub_da6580  (orig 0xda6580, mov_ret)
uint32_t main_f_da6580() { return 1; }

// sub_da6590  (orig 0xda6590, ret_only)
void main_f_da6590() {}

// sub_da6af0  (orig 0xda6af0, ret_only)
void main_f_da6af0() {}

// sub_da70c0  (orig 0xda70c0, mov_ret)
uint32_t main_f_da70c0() { return 1; }

// sub_da70d0  (orig 0xda70d0, ret_only)
void main_f_da70d0() {}

// sub_da7740  (orig 0xda7740, ret_only)
void main_f_da7740() {}

// sub_da7d10  (orig 0xda7d10, mov_ret)
uint32_t main_f_da7d10() { return 1; }

// sub_da8580  (orig 0xda8580, mov_ret)
uint32_t main_f_da8580() { return 1; }

// sub_da8590  (orig 0xda8590, ret_only)
void main_f_da8590() {}

// sub_da8720  (orig 0xda8720, ret_only)
void main_f_da8720() {}

// sub_da8b40  (orig 0xda8b40, mov_ret)
uint32_t main_f_da8b40() { return 1; }

// sub_da8b50  (orig 0xda8b50, ret_only)
void main_f_da8b50() {}

// sub_da8df0  (orig 0xda8df0, ret_only)
void main_f_da8df0() {}

// sub_dae6f0  (orig 0xdae6f0, mov_ret)
uint32_t main_f_dae6f0() { return 1; }

// sub_dae700  (orig 0xdae700, ret_only)
void main_f_dae700() {}

// sub_daed30  (orig 0xdaed30, ret_only)
void main_f_daed30() {}

// sub_daf090  (orig 0xdaf090, setter-chain)
void main_f_daf090(void* a0) { *(uint8_t*)((char*)(a0) + 104) = 0; *(uint32_t*)((char*)(a0) + 96) = 0; *(uint8_t*)((char*)(a0) + 106) = 0; }

// sub_daf0a0  (orig 0xdaf0a0, straight)
void main_f_daf0a0(void* a0) {
    uint32_t k0 = 1;
    uint32_t k1 = 0;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 96) = 0;
    *(uint8_t*)((char*)(a0) + 106) = (uint8_t)k1;
}

// sub_db0f80  (orig 0xdb0f80, ret_only)
void main_f_db0f80() {}

// sub_db4360  (orig 0xdb4360, mov_ret)
uint32_t main_f_db4360() { return 1; }

// sub_db4370  (orig 0xdb4370, ret_only)
void main_f_db4370() {}

// sub_db5080  (orig 0xdb5080, ret_only)
void main_f_db5080() {}

// sub_db5e40  (orig 0xdb5e40, straight)
void main_f_db5e40(void* a0) {
    uint32_t k0 = 1;
    uint32_t k1 = 0;
    *(uint8_t*)((char*)(a0) + 104) = (uint8_t)k0;
    *(uint32_t*)((char*)(a0) + 96) = 0;
    *(uint8_t*)((char*)(a0) + 106) = (uint8_t)k1;
}

// sub_db6030  (orig 0xdb6030, ret_only)
void main_f_db6030() {}

// sub_db7e10  (orig 0xdb7e10, ret_only)
void main_f_db7e10() {}

// sub_dbfa10  (orig 0xdbfa10, mov_ret)
uint32_t main_f_dbfa10() { return 1; }

// sub_dc5900  (orig 0xdc5900, mov_ret)
uint32_t main_f_dc5900() { return 1; }

// sub_dc5910  (orig 0xdc5910, mov_ret)
uint32_t main_f_dc5910() { return 1; }

// sub_dc5920  (orig 0xdc5920, ret_only)
void main_f_dc5920() {}

// sub_dc5930  (orig 0xdc5930, ret_only)
void main_f_dc5930() {}

// sub_dc76a0  (orig 0xdc76a0, ret_only)
void main_f_dc76a0() {}

// sub_dc76b0  (orig 0xdc76b0, mov_ret)
uint32_t main_f_dc76b0() { return 0; }

// sub_dc7ff0  (orig 0xdc7ff0, mov_ret)
uint32_t main_f_dc7ff0() { return 1; }

// sub_dc8000  (orig 0xdc8000, ret_only)
void main_f_dc8000() {}

// sub_dc8a70  (orig 0xdc8a70, ret_only)
void main_f_dc8a70() {}

// sub_dc8d50  (orig 0xdc8d50, mov_ret)
uint32_t main_f_dc8d50() { return 1; }

// sub_dc8d60  (orig 0xdc8d60, mov_ret)
uint32_t main_f_dc8d60() { return 1; }

// sub_dc8d70  (orig 0xdc8d70, ret_only)
void main_f_dc8d70() {}

// sub_dc8d80  (orig 0xdc8d80, ret_only)
void main_f_dc8d80() {}

// sub_dca3c0  (orig 0xdca3c0, ret_only)
void main_f_dca3c0() {}

// sub_dca3d0  (orig 0xdca3d0, mov_ret)
uint32_t main_f_dca3d0() { return 0; }

// sub_dca3e0  (orig 0xdca3e0, ret_only)
void main_f_dca3e0() {}

// sub_dcbe70  (orig 0xdcbe70, ret_only)
void main_f_dcbe70() {}

// sub_dcd830  (orig 0xdcd830, mov_ret)
uint32_t main_f_dcd830() { return 0; }

// sub_dcd840  (orig 0xdcd840, ret_only)
void main_f_dcd840() {}

// sub_dce6d0  (orig 0xdce6d0, ret_only)
void main_f_dce6d0() {}

// sub_dcec50  (orig 0xdcec50, ret_only)
void main_f_dcec50() {}

// sub_dcec60  (orig 0xdcec60, copy2)
void main_f_dcec60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dcec70  (orig 0xdcec70, copy2)
void main_f_dcec70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dcf240  (orig 0xdcf240, ret_only)
void main_f_dcf240() {}

// sub_dcf530  (orig 0xdcf530, ret_only)
void main_f_dcf530() {}

// sub_dcf540  (orig 0xdcf540, copy2)
void main_f_dcf540(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dcf550  (orig 0xdcf550, copy2)
void main_f_dcf550(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dd3cc0  (orig 0xdd3cc0, straight)
void main_f_dd3cc0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 112));
    uint32_t k1 = 1;
    *(uint8_t*)((char*)(a0) + 104) = 0;
    *(uint8_t*)((char*)(p0) + 1666) = (uint8_t)k1;
}

// sub_dd7460  (orig 0xdd7460, setter)
void main_f_dd7460(void* a0) { *(uint32_t*)((char*)(a0) + 544) = 0; }

// sub_dd7480  (orig 0xdd7480, setter)
void main_f_dd7480(void* a0) { *(uint32_t*)((char*)(a0) + 548) = 0; }

// sub_dd8110  (orig 0xdd8110, mov_ret)
uint32_t main_f_dd8110() { return 1; }

// sub_dd8780  (orig 0xdd8780, ret_only)
void main_f_dd8780() {}

// sub_ddb0b0  (orig 0xddb0b0, mov_ret)
uint32_t main_f_ddb0b0() { return 1; }

// sub_dddad0  (orig 0xdddad0, ret_only)
void main_f_dddad0() {}

// sub_de4d60  (orig 0xde4d60, strlit-ret)
const char *main_f_de4d60() { static char g_f_de4d60[1]; __asm__ volatile("" ::: "memory"); return g_f_de4d60; }

// sub_de5e50  (orig 0xde5e50, strlit-ret)
const char *main_f_de5e50() { static char g_f_de5e50[1]; __asm__ volatile("" ::: "memory"); return g_f_de5e50; }

// sub_de6a20  (orig 0xde6a20, strlit-ret)
const char *main_f_de6a20() { static char g_f_de6a20[1]; __asm__ volatile("" ::: "memory"); return g_f_de6a20; }

// sub_de6fc0  (orig 0xde6fc0, strlit-ret)
const char *main_f_de6fc0() { static char g_f_de6fc0[1]; __asm__ volatile("" ::: "memory"); return g_f_de6fc0; }

// sub_debc60  (orig 0xdebc60, straight)
void main_f_debc60(void* a0, uint32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint8_t*)((char*)(p0) + 568) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_debc70  (orig 0xdebc70, getter-chain)
uint8_t main_f_debc70(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 568); }

// sub_debc80  (orig 0xdebc80, ptr_add)
void* main_f_debc80(void* a0) { return (char*)a0 + 8; }

// sub_debc90  (orig 0xdebc90, getter-chain)
uint8_t main_f_debc90(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2849); }

// sub_debca0  (orig 0xdebca0, const-field-set-store)
void main_f_debca0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 1;
    *(uint8_t*)((char*)(t0) + 2850) = (uint8_t)(t1);
}

// sub_debce0  (orig 0xdebce0, ptr_add)
void* main_f_debce0(void* a0) { return (char*)a0 + 73; }

// sub_debcf0  (orig 0xdebcf0, getter-chain)
uint32_t main_f_debcf0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2352); }

// sub_debd00  (orig 0xdebd00, compare-pred)
bool main_f_debd00(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)(char*)a0) + 2356)) != (uint32_t)(0); }

// sub_debd20  (orig 0xdebd20, compare-pred)
bool main_f_debd20(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)(char*)a0) + 2357)) != (uint32_t)(0); }

// sub_debd40  (orig 0xdebd40, getter-chain)
float main_f_debd40(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2376);
}

// sub_debda0  (orig 0xdebda0, getter-chain)
uint32_t main_f_debda0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2400); }

// sub_debdb0  (orig 0xdebdb0, getter-chain)
uint32_t main_f_debdb0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2404); }

// sub_debdc0  (orig 0xdebdc0, getter-chain)
float main_f_debdc0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2424);
}

// sub_debdd0  (orig 0xdebdd0, getter-chain)
float main_f_debdd0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2428);
}

// sub_debde0  (orig 0xdebde0, getter-chain)
float main_f_debde0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2432);
}

// sub_debdf0  (orig 0xdebdf0, compare-pred)
bool main_f_debdf0(void* a0) { return (uint32_t)(*(uint8_t*)((char*)(*(uint64_t*)(char*)a0) + 2436)) != (uint32_t)(0); }

// sub_debe10  (orig 0xdebe10, getter-chain)
float main_f_debe10(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2452);
}

// sub_debe20  (orig 0xdebe20, getter-chain)
float main_f_debe20(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2456);
}

// sub_debe30  (orig 0xdebe30, getter-chain)
float main_f_debe30(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2460);
}

// sub_debe40  (orig 0xdebe40, getter-chain)
float main_f_debe40(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2464);
}

// sub_debe50  (orig 0xdebe50, getter-chain)
float main_f_debe50(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2468);
}

// sub_debe60  (orig 0xdebe60, getter-chain)
float main_f_debe60(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2472);
}

// sub_debe70  (orig 0xdebe70, getter-chain)
float main_f_debe70(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2476);
}

// sub_debe80  (orig 0xdebe80, ptr_add)
void* main_f_debe80(void* a0) { return (char*)a0 + 138; }

// sub_debe90  (orig 0xdebe90, ptr_add)
void* main_f_debe90(void* a0) { return (char*)a0 + 203; }

// sub_debea0  (orig 0xdebea0, getter-chain)
float main_f_debea0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2608);
}

// sub_debeb0  (orig 0xdebeb0, getter-chain)
float main_f_debeb0(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    return *(float*)((char*)(t0) + 2612);
}

// sub_dec5c0  (orig 0xdec5c0, getter-chain)
uint32_t main_f_dec5c0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2688); }

// sub_ded690  (orig 0xded690, straight)
void main_f_ded690(void* a0, uint32_t a1) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0)));
    *(uint8_t*)((char*)(p0) + 3001) = (uint8_t)((((uint32_t)a1)) & (1));
}

// sub_ded6a0  (orig 0xded6a0, getter-chain)
uint8_t main_f_ded6a0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 3001); }

// sub_ded7a0  (orig 0xded7a0, getter-chain)
uint32_t main_f_ded7a0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2844); }

// sub_ded7b0  (orig 0xded7b0, getter-chain)
uint32_t main_f_ded7b0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2840); }

// sub_ded8a0  (orig 0xded8a0, getter-chain)
uint32_t main_f_ded8a0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0)))) + 2852); }

// sub_ded9f0  (orig 0xded9f0, ret_only)
void main_f_ded9f0() {}

// sub_dee840  (orig 0xdee840, ret_only)
void main_f_dee840() {}

// sub_dee850  (orig 0xdee850, copy2)
void main_f_dee850(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dee860  (orig 0xdee860, copy2)
void main_f_dee860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_dee920  (orig 0xdee920, ret_only)
void main_f_dee920() {}

// sub_def9e0  (orig 0xdef9e0, mov_ret)
uint32_t main_f_def9e0() { return 0; }

// sub_df20e0  (orig 0xdf20e0, copy2)
void main_f_df20e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df20f0  (orig 0xdf20f0, copy2)
void main_f_df20f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df21b0  (orig 0xdf21b0, ret_only)
void main_f_df21b0() {}

// sub_df21c0  (orig 0xdf21c0, copy2)
void main_f_df21c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df21d0  (orig 0xdf21d0, copy2)
void main_f_df21d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df2290  (orig 0xdf2290, ret_only)
void main_f_df2290() {}

// sub_df22a0  (orig 0xdf22a0, copy2)
void main_f_df22a0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df22b0  (orig 0xdf22b0, copy2)
void main_f_df22b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_df22c0  (orig 0xdf22c0, ret_only)
void main_f_df22c0() {}

// sub_df22d0  (orig 0xdf22d0, ret_only)
void main_f_df22d0() {}

// sub_df22e0  (orig 0xdf22e0, ret_only)
void main_f_df22e0() {}

// sub_df7610  (orig 0xdf7610, ret_only)
void main_f_df7610() {}

// sub_df7620  (orig 0xdf7620, ret_only)
void main_f_df7620() {}

// sub_e366b0  (orig 0xe366b0, ret_only)
void main_f_e366b0() {}

// sub_e36fa0  (orig 0xe36fa0, strlit-ret)
const char *main_f_e36fa0() { static char g_f_e36fa0[1]; __asm__ volatile("" ::: "memory"); return g_f_e36fa0; }

// sub_e39d60  (orig 0xe39d60, strlit-ret)
const char *main_f_e39d60() { static char g_f_e39d60[1]; __asm__ volatile("" ::: "memory"); return g_f_e39d60; }

// sub_e39ff0  (orig 0xe39ff0, strlit-ret)
const char *main_f_e39ff0() { static char g_f_e39ff0[1]; __asm__ volatile("" ::: "memory"); return g_f_e39ff0; }

// sub_e3a290  (orig 0xe3a290, strlit-ret)
const char *main_f_e3a290() { static char g_f_e3a290[1]; __asm__ volatile("" ::: "memory"); return g_f_e3a290; }

// sub_e3a4f0  (orig 0xe3a4f0, strlit-ret)
const char *main_f_e3a4f0() { static char g_f_e3a4f0[1]; __asm__ volatile("" ::: "memory"); return g_f_e3a4f0; }

// sub_e3aca0  (orig 0xe3aca0, ptr_add)
void* main_f_e3aca0(void* a0) { return (char*)a0 + 128; }

// sub_e3b260  (orig 0xe3b260, strlit-ret)
const char *main_f_e3b260() { static char g_f_e3b260[1]; __asm__ volatile("" ::: "memory"); return g_f_e3b260; }

// sub_e3b510  (orig 0xe3b510, strlit-ret)
const char *main_f_e3b510() { static char g_f_e3b510[1]; __asm__ volatile("" ::: "memory"); return g_f_e3b510; }

// sub_e3b7b0  (orig 0xe3b7b0, strlit-ret)
const char *main_f_e3b7b0() { static char g_f_e3b7b0[1]; __asm__ volatile("" ::: "memory"); return g_f_e3b7b0; }

// sub_e3ba50  (orig 0xe3ba50, strlit-ret)
const char *main_f_e3ba50() { static char g_f_e3ba50[1]; __asm__ volatile("" ::: "memory"); return g_f_e3ba50; }

// sub_e3cdc0  (orig 0xe3cdc0, setter)
void main_f_e3cdc0(void* a0) { *(uint64_t*)((char*)(a0) + 96) = 0; }

// sub_e3dfc0  (orig 0xe3dfc0, straight)
void main_f_e3dfc0(void* a0, uint32_t a1) {
    *(uint32_t*)((char*)(a0) + 144) = 1;
    *(uint64_t*)((char*)(a0) + 152) = (uint64_t)(((uint32_t)a1));
}

// sub_e3dfe0  (orig 0xe3dfe0, straight)
void main_f_e3dfe0(void* a0, void* a1) {
    *(uint32_t*)((char*)(a0) + 144) = 2;
    *(uint64_t*)((char*)(a0) + 152) = *(uint64_t*)((char*)(a1));
}

// sub_e3efd0  (orig 0xe3efd0, const-field-set-store)
void main_f_e3efd0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 96);
    uint32_t t1 = 181;
    *(uint32_t*)((char*)(t0) + 320) = (uint32_t)(t1);
}

// sub_e3f1d0  (orig 0xe3f1d0, copy-chain-store)
void main_f_e3f1d0(void* a0, void* a1) {
    uint32_t t0 = *(uint32_t*)(char*)a1;
    uint64_t t1 = *(uint64_t*)(char*)a0;
    *(uint32_t*)((char*)(t1) + 416) = (uint32_t)(t0);
}

// sub_e3f1e0  (orig 0xe3f1e0, ret_only)
void main_f_e3f1e0() {}

// sub_e3f1f0  (orig 0xe3f1f0, copy2)
void main_f_e3f1f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e3f200  (orig 0xe3f200, copy2)
void main_f_e3f200(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e3f420  (orig 0xe3f420, ret_only)
void main_f_e3f420() {}

// sub_e3f430  (orig 0xe3f430, copy2)
void main_f_e3f430(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e3f440  (orig 0xe3f440, copy2)
void main_f_e3f440(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e41310  (orig 0xe41310, setter)
void main_f_e41310(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 96) = a1; }

// sub_e413e0  (orig 0xe413e0, ret_only)
void main_f_e413e0() {}

// sub_e413f0  (orig 0xe413f0, mov_ret)
uint32_t main_f_e413f0() { return 1; }

// sub_e420a0  (orig 0xe420a0, ret_only)
void main_f_e420a0() {}

// sub_e420b0  (orig 0xe420b0, straight)
void main_f_e420b0(void* a0) {
    *(uint32_t*)((char*)(a0) + 120) = 1;
}

// sub_e420c0  (orig 0xe420c0, ret_only)
void main_f_e420c0() {}

// sub_e42280  (orig 0xe42280, compare)
bool main_f_e42280(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 128)) == (uint64_t)(0); }

// sub_e43c20  (orig 0xe43c20, ret_only)
void main_f_e43c20() {}

// sub_e44e00  (orig 0xe44e00, compare)
bool main_f_e44e00(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 144)) != (uint64_t)(0); }

// sub_e47110  (orig 0xe47110, mov_ret)
uint32_t main_f_e47110() { return 1; }

// sub_e47120  (orig 0xe47120, indexed-getter)
uint64_t main_f_e47120(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_e47130  (orig 0xe47130, indexed-getter)
uint64_t main_f_e47130(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_e47360  (orig 0xe47360, ret_only)
void main_f_e47360() {}

// sub_e47370  (orig 0xe47370, ret_only)
void main_f_e47370() {}

// sub_e47380  (orig 0xe47380, mov_ret)
uint32_t main_f_e47380() { return 1; }

// sub_e47390  (orig 0xe47390, ret_only)
void main_f_e47390() {}

// sub_e473a0  (orig 0xe473a0, ret_only)
void main_f_e473a0() {}

// sub_e473b0  (orig 0xe473b0, ret_only)
void main_f_e473b0() {}

// sub_e473c0  (orig 0xe473c0, mov_ret)
uint32_t main_f_e473c0() { return 1; }

// sub_e473d0  (orig 0xe473d0, ret_only)
void main_f_e473d0() {}

// sub_e473e0  (orig 0xe473e0, ret_only)
void main_f_e473e0() {}

// sub_e473f0  (orig 0xe473f0, ret_only)
void main_f_e473f0() {}

// sub_e4a640  (orig 0xe4a640, setter)
void main_f_e4a640(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 648) = a1; }

// sub_e4cc50  (orig 0xe4cc50, ret_only)
void main_f_e4cc50() {}

// sub_e51bf0  (orig 0xe51bf0, setter)
void main_f_e51bf0(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 456) = a1; }

// sub_e51c00  (orig 0xe51c00, setter)
void main_f_e51c00(void* a0, uint8_t a1) { *(uint8_t*)((char*)(a0) + 457) = a1; }

// sub_e5f920  (orig 0xe5f920, ret_only)
void main_f_e5f920() {}

// sub_e60600  (orig 0xe60600, ret_only)
void main_f_e60600() {}

// sub_e60930  (orig 0xe60930, getter)
uint64_t main_f_e60930(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_e60ac0  (orig 0xe60ac0, mov_ret)
uint32_t main_f_e60ac0() { return 3; }

// sub_e60ad0  (orig 0xe60ad0, indexed-getter)
uint64_t main_f_e60ad0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_e60ae0  (orig 0xe60ae0, indexed-getter)
uint64_t main_f_e60ae0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_e65c40  (orig 0xe65c40, ret_only)
void main_f_e65c40() {}

// sub_e65c50  (orig 0xe65c50, copy2)
void main_f_e65c50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65c60  (orig 0xe65c60, copy2)
void main_f_e65c60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65d50  (orig 0xe65d50, ret_only)
void main_f_e65d50() {}

// sub_e65d60  (orig 0xe65d60, copy2)
void main_f_e65d60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65d70  (orig 0xe65d70, copy2)
void main_f_e65d70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65e00  (orig 0xe65e00, ret_only)
void main_f_e65e00() {}

// sub_e65e10  (orig 0xe65e10, copy2)
void main_f_e65e10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65e20  (orig 0xe65e20, copy2)
void main_f_e65e20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65f40  (orig 0xe65f40, ret_only)
void main_f_e65f40() {}

// sub_e65f50  (orig 0xe65f50, copy2)
void main_f_e65f50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e65f60  (orig 0xe65f60, copy2)
void main_f_e65f60(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66200  (orig 0xe66200, ret_only)
void main_f_e66200() {}

// sub_e66210  (orig 0xe66210, copy2)
void main_f_e66210(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66220  (orig 0xe66220, copy2)
void main_f_e66220(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e662f0  (orig 0xe662f0, ret_only)
void main_f_e662f0() {}

// sub_e66300  (orig 0xe66300, copy2)
void main_f_e66300(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66310  (orig 0xe66310, copy2)
void main_f_e66310(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66340  (orig 0xe66340, ret_only)
void main_f_e66340() {}

// sub_e66350  (orig 0xe66350, copy2)
void main_f_e66350(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66360  (orig 0xe66360, copy2)
void main_f_e66360(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e66dd0  (orig 0xe66dd0, getter)
uint8_t main_f_e66dd0(void* a0) { return *(uint8_t*)((char*)(a0) + 133); }

// sub_e67320  (orig 0xe67320, mov_ret)
uint32_t main_f_e67320() { return 1; }

// sub_e674a0  (orig 0xe674a0, ret_only)
void main_f_e674a0() {}

// sub_e674b0  (orig 0xe674b0, ret_only)
void main_f_e674b0() {}

// sub_e674c0  (orig 0xe674c0, ret_only)
void main_f_e674c0() {}

// sub_e674d0  (orig 0xe674d0, ret_only)
void main_f_e674d0() {}

// sub_e67870  (orig 0xe67870, ret_only)
void main_f_e67870() {}

// sub_e67880  (orig 0xe67880, mov_ret)
uint32_t main_f_e67880() { return 1; }

// sub_e67ff0  (orig 0xe67ff0, mov_ret)
uint32_t main_f_e67ff0() { return 0; }

// sub_e68360  (orig 0xe68360, ret_only)
void main_f_e68360() {}

// sub_e68370  (orig 0xe68370, copy2)
void main_f_e68370(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e68380  (orig 0xe68380, copy2)
void main_f_e68380(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e6b0c0  (orig 0xe6b0c0, ret_only)
void main_f_e6b0c0() {}

// sub_e6b4e0  (orig 0xe6b4e0, ret_only)
void main_f_e6b4e0() {}

// sub_e6bc10  (orig 0xe6bc10, ret_only)
void main_f_e6bc10() {}

// sub_e6cb70  (orig 0xe6cb70, ret_only)
void main_f_e6cb70() {}

// sub_e6d3d0  (orig 0xe6d3d0, ret_only)
void main_f_e6d3d0() {}

// sub_e6da10  (orig 0xe6da10, mov_ret)
uint32_t main_f_e6da10() { return 1; }

// sub_e6e3d0  (orig 0xe6e3d0, compare)
bool main_f_e6e3d0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1484)) == (uint64_t)(0); }

// sub_e6e660  (orig 0xe6e660, ret_only)
void main_f_e6e660() {}

// sub_e6e670  (orig 0xe6e670, copy2)
void main_f_e6e670(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e6e680  (orig 0xe6e680, copy2)
void main_f_e6e680(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e6e820  (orig 0xe6e820, ret_only)
void main_f_e6e820() {}

// sub_e6f180  (orig 0xe6f180, mov_ret)
uint32_t main_f_e6f180() { return 1; }

// sub_e6f320  (orig 0xe6f320, ret_only)
void main_f_e6f320() {}

// sub_e6f400  (orig 0xe6f400, ret_only)
void main_f_e6f400() {}

// sub_e6f410  (orig 0xe6f410, ret_only)
void main_f_e6f410() {}

// sub_e6f420  (orig 0xe6f420, ret_only)
void main_f_e6f420() {}

// sub_e6f5e0  (orig 0xe6f5e0, ret_only)
void main_f_e6f5e0() {}

// sub_e6f5f0  (orig 0xe6f5f0, ret_only)
void main_f_e6f5f0() {}

// sub_e6f600  (orig 0xe6f600, ret_only)
void main_f_e6f600() {}

// sub_e6f7c0  (orig 0xe6f7c0, ret_only)
void main_f_e6f7c0() {}

// sub_e6f7d0  (orig 0xe6f7d0, ret_only)
void main_f_e6f7d0() {}

// sub_e6f7e0  (orig 0xe6f7e0, ret_only)
void main_f_e6f7e0() {}

// sub_e71990  (orig 0xe71990, mov_ret)
uint32_t main_f_e71990() { return 1; }

// sub_e72a90  (orig 0xe72a90, ret_only)
void main_f_e72a90() {}

// sub_e72aa0  (orig 0xe72aa0, copy2)
void main_f_e72aa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e72ab0  (orig 0xe72ab0, copy2)
void main_f_e72ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e73010  (orig 0xe73010, mov_ret)
uint32_t main_f_e73010() { return 1; }

// sub_e731c0  (orig 0xe731c0, mov_ret)
uint32_t main_f_e731c0() { return 2; }

// sub_e73370  (orig 0xe73370, mov_ret)
uint32_t main_f_e73370() { return 3; }

// sub_e73dc0  (orig 0xe73dc0, mov_ret)
uint32_t main_f_e73dc0() { return 1; }

// sub_e73dd0  (orig 0xe73dd0, ret_only)
void main_f_e73dd0() {}

// sub_e73de0  (orig 0xe73de0, ret_only)
void main_f_e73de0() {}

// sub_e747a0  (orig 0xe747a0, mov_ret)
uint32_t main_f_e747a0() { return 1; }

// sub_e747b0  (orig 0xe747b0, ret_only)
void main_f_e747b0() {}

// sub_e747c0  (orig 0xe747c0, ret_only)
void main_f_e747c0() {}

// sub_e747d0  (orig 0xe747d0, mov_ret)
uint32_t main_f_e747d0() { return 1; }

// sub_e748c0  (orig 0xe748c0, setter)
void main_f_e748c0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1792) = a1; }

// sub_e74fa0  (orig 0xe74fa0, getter)
uint64_t main_f_e74fa0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_e75110  (orig 0xe75110, mov_ret)
uint32_t main_f_e75110() { return 1; }

// sub_e75120  (orig 0xe75120, indexed-getter)
uint64_t main_f_e75120(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_e75130  (orig 0xe75130, indexed-getter)
uint64_t main_f_e75130(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_e75c70  (orig 0xe75c70, ret_only)
void main_f_e75c70() {}

// sub_e76460  (orig 0xe76460, copy2)
void main_f_e76460(void* a0, void* a1) { *(uint64_t*)((char*)(a0) + 1488) = *(uint64_t*)((char*)(a1)); }

// sub_e76a20  (orig 0xe76a20, mov_ret)
uint64_t main_f_e76a20() { return 0; }

// sub_e7c1c0  (orig 0xe7c1c0, compare)
bool main_f_e7c1c0(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 1344)) == (uint64_t)(0); }

// sub_e7c1d0  (orig 0xe7c1d0, compare-pred)
bool main_f_e7c1d0(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 1344) - 1)) < (uint32_t)(2); }

// sub_e7c1f0  (orig 0xe7c1f0, compare-pred)
bool main_f_e7c1f0(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 1344) - 3)) < (uint32_t)(2); }

// sub_e7cbc0  (orig 0xe7cbc0, ret_only)
void main_f_e7cbc0() {}

// sub_e7cbd0  (orig 0xe7cbd0, ret_only)
void main_f_e7cbd0() {}

// sub_e7cbe0  (orig 0xe7cbe0, ret_only)
void main_f_e7cbe0() {}

// sub_e7cbf0  (orig 0xe7cbf0, ret_only)
void main_f_e7cbf0() {}

// sub_e7cc00  (orig 0xe7cc00, ret_only)
void main_f_e7cc00() {}

// sub_e7cc10  (orig 0xe7cc10, mov_ret)
uint32_t main_f_e7cc10() { return 1; }

// sub_e7cc20  (orig 0xe7cc20, ret_only)
void main_f_e7cc20() {}

// sub_e7cc30  (orig 0xe7cc30, mov_ret)
uint32_t main_f_e7cc30() { return 1; }

// sub_e7cc40  (orig 0xe7cc40, ret_only)
void main_f_e7cc40() {}

// sub_e7cc50  (orig 0xe7cc50, ret_only)
void main_f_e7cc50() {}

// sub_e7cc60  (orig 0xe7cc60, ret_only)
void main_f_e7cc60() {}

// sub_e7cc80  (orig 0xe7cc80, mov_ret)
uint32_t main_f_e7cc80() { return 1; }

// sub_e7cea0  (orig 0xe7cea0, ret_only)
void main_f_e7cea0() {}

// sub_e7ceb0  (orig 0xe7ceb0, mov_ret)
uint32_t main_f_e7ceb0() { return 1; }

// sub_e7cec0  (orig 0xe7cec0, ret_only)
void main_f_e7cec0() {}

// sub_e7ced0  (orig 0xe7ced0, mov_ret)
uint32_t main_f_e7ced0() { return -1; }

// sub_e7f510  (orig 0xe7f510, mov_ret)
uint32_t main_f_e7f510() { return 1; }

// sub_e7f520  (orig 0xe7f520, ret_only)
void main_f_e7f520() {}

// sub_e7f530  (orig 0xe7f530, mov_ret)
uint32_t main_f_e7f530() { return 1; }

// sub_e7f540  (orig 0xe7f540, ret_only)
void main_f_e7f540() {}

// sub_e7f550  (orig 0xe7f550, ret_only)
void main_f_e7f550() {}

// sub_e7f560  (orig 0xe7f560, ret_only)
void main_f_e7f560() {}

// sub_e7f570  (orig 0xe7f570, ret_only)
void main_f_e7f570() {}

// sub_e7f580  (orig 0xe7f580, ret_only)
void main_f_e7f580() {}

// sub_e7f590  (orig 0xe7f590, mov_ret)
uint32_t main_f_e7f590() { return 1; }

// sub_e7f7b0  (orig 0xe7f7b0, getter-chain)
uint64_t main_f_e7f7b0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 96);
    return *(uint64_t*)((char*)(t1) + 176);
}

// sub_e7f7c0  (orig 0xe7f7c0, getter-chain)
uint64_t main_f_e7f7c0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 96))) + 176); }

// sub_e7f7d0  (orig 0xe7f7d0, getter-chain)
uint64_t main_f_e7f7d0(void* a0) {
    uint64_t t0 = *(uint64_t*)((char*)a0 + 8);
    uint64_t t1 = *(uint64_t*)((char*)(t0) + 96);
    return *(uint64_t*)((char*)(t1) + 176);
}

// sub_e7f7e0  (orig 0xe7f7e0, getter-chain)
uint64_t main_f_e7f7e0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 96))) + 176); }

// sub_e806a0  (orig 0xe806a0, getter)
uint64_t main_f_e806a0(void* a0) { return *(uint64_t*)((char*)(a0) + 1440); }

// sub_e81220  (orig 0xe81220, ret_only)
void main_f_e81220() {}

// sub_e81230  (orig 0xe81230, strlit-ret)
const char *main_f_e81230() { static char g_f_e81230[1]; __asm__ volatile("" ::: "memory"); return g_f_e81230; }

// sub_e81250  (orig 0xe81250, ret_only)
void main_f_e81250() {}

// sub_e81400  (orig 0xe81400, ptr_add)
void* main_f_e81400(void* a0) { return (char*)a0 + 24; }

// sub_e81820  (orig 0xe81820, ptr_add)
void* main_f_e81820(void* a0) { return (char*)a0 + 24; }

// sub_e857b0  (orig 0xe857b0, ret_only)
void main_f_e857b0() {}

// sub_e857c0  (orig 0xe857c0, copy2)
void main_f_e857c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e857d0  (orig 0xe857d0, copy2)
void main_f_e857d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e86680  (orig 0xe86680, ret_only)
void main_f_e86680() {}

// sub_e866c0  (orig 0xe866c0, ret_only)
void main_f_e866c0() {}

// sub_e86750  (orig 0xe86750, ret_only)
void main_f_e86750() {}

// sub_e87c40  (orig 0xe87c40, ret_only)
void main_f_e87c40() {}

// sub_e88350  (orig 0xe88350, ret_only)
void main_f_e88350() {}

// sub_e88fe0  (orig 0xe88fe0, compare)
bool main_f_e88fe0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 3376)) != (uint64_t)(0); }

// sub_e88ff0  (orig 0xe88ff0, compare)
bool main_f_e88ff0(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 3420)) > (int64_t)(0); }

// sub_e892e0  (orig 0xe892e0, ret_only)
void main_f_e892e0() {}

// sub_e89360  (orig 0xe89360, ret_only)
void main_f_e89360() {}

// sub_e89540  (orig 0xe89540, ret_only)
void main_f_e89540() {}

// sub_e89550  (orig 0xe89550, struct-copy)
void main_f_e89550(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_e89570  (orig 0xe89570, struct-copy)
void main_f_e89570(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_e89870  (orig 0xe89870, ret_only)
void main_f_e89870() {}

// sub_e92910  (orig 0xe92910, ret_only)
void main_f_e92910() {}

// sub_e92920  (orig 0xe92920, copy2)
void main_f_e92920(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e92930  (orig 0xe92930, copy2)
void main_f_e92930(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e92a00  (orig 0xe92a00, ret_only)
void main_f_e92a00() {}

// sub_e92a10  (orig 0xe92a10, copy2)
void main_f_e92a10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e92a20  (orig 0xe92a20, copy2)
void main_f_e92a20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_e92a30  (orig 0xe92a30, mov_ret)
uint32_t main_f_e92a30() { return 2; }

// sub_e92a40  (orig 0xe92a40, indexed-getter)
uint64_t main_f_e92a40(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_e92a50  (orig 0xe92a50, indexed-getter)
uint64_t main_f_e92a50(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_e92fb0  (orig 0xe92fb0, ret_only)
void main_f_e92fb0() {}

// sub_e93030  (orig 0xe93030, ret_only)
void main_f_e93030() {}

// sub_e93580  (orig 0xe93580, ret_only)
void main_f_e93580() {}

// sub_e93600  (orig 0xe93600, ret_only)
void main_f_e93600() {}

// sub_e93bc0  (orig 0xe93bc0, mov_ret)
uint32_t main_f_e93bc0() { return 7; }

// sub_e93bd0  (orig 0xe93bd0, indexed-getter)
uint64_t main_f_e93bd0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_e93be0  (orig 0xe93be0, indexed-getter)
uint64_t main_f_e93be0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_e94930  (orig 0xe94930, mov_ret)
uint32_t main_f_e94930() { return 6; }

// sub_e94940  (orig 0xe94940, indexed-getter)
uint64_t main_f_e94940(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_e94950  (orig 0xe94950, indexed-getter)
uint64_t main_f_e94950(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_e97cd0  (orig 0xe97cd0, ret_only)
void main_f_e97cd0() {}

// sub_e98a70  (orig 0xe98a70, struct-copy)
void main_f_e98a70(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_e98a90  (orig 0xe98a90, struct-copy)
void main_f_e98a90(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_e98ca0  (orig 0xe98ca0, ret_only)
void main_f_e98ca0() {}

// sub_e99740  (orig 0xe99740, ret_only)
void main_f_e99740() {}

// sub_e9cca0  (orig 0xe9cca0, strlit-ret)
const char *main_f_e9cca0() { static char g_f_e9cca0[1]; __asm__ volatile("" ::: "memory"); return g_f_e9cca0; }

// sub_e9ddb0  (orig 0xe9ddb0, compare)
bool main_f_e9ddb0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 120)) != (uint64_t)(0); }

// sub_e9ddc0  (orig 0xe9ddc0, getter)
uint8_t main_f_e9ddc0(void* a0) { return *(uint8_t*)((char*)(a0) + 137); }

// sub_e9fab0  (orig 0xe9fab0, compare-pred)
bool main_f_e9fab0(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(*(uint64_t*)((char*)a0 + 96)) + 264)) != (uint64_t)(0); }

// sub_e9fd70  (orig 0xe9fd70, ret_only)
void main_f_e9fd70() {}

// sub_e9fd80  (orig 0xe9fd80, ret_only)
void main_f_e9fd80() {}

// sub_e9fd90  (orig 0xe9fd90, ret_only)
void main_f_e9fd90() {}

// sub_ea0970  (orig 0xea0970, mov_ret)
uint32_t main_f_ea0970() { return 1; }

// sub_ea0980  (orig 0xea0980, mov_ret)
uint32_t main_f_ea0980() { return 0; }

// sub_ea0990  (orig 0xea0990, ret_only)
void main_f_ea0990() {}

// sub_ea09a0  (orig 0xea09a0, mov_ret)
uint32_t main_f_ea09a0() { return 1; }

// sub_ea09b0  (orig 0xea09b0, ret_only)
void main_f_ea09b0() {}

// sub_ea09c0  (orig 0xea09c0, ret_only)
void main_f_ea09c0() {}

// sub_ea2450  (orig 0xea2450, ret_only)
void main_f_ea2450() {}

// sub_ea2460  (orig 0xea2460, copy2)
void main_f_ea2460(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ea2470  (orig 0xea2470, copy2)
void main_f_ea2470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ea24f0  (orig 0xea24f0, ret_only)
void main_f_ea24f0() {}

// sub_ea2500  (orig 0xea2500, copy2)
void main_f_ea2500(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ea2510  (orig 0xea2510, copy2)
void main_f_ea2510(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ea2950  (orig 0xea2950, ret_only)
void main_f_ea2950() {}

// sub_ea2960  (orig 0xea2960, ret_only)
void main_f_ea2960() {}

// sub_ea2970  (orig 0xea2970, ret_only)
void main_f_ea2970() {}

// sub_ea2fe0  (orig 0xea2fe0, ret_only)
void main_f_ea2fe0() {}

// sub_ea3d10  (orig 0xea3d10, ptr_add)
void* main_f_ea3d10(void* a0) { return (char*)a0 + 112; }

// sub_ea3d20  (orig 0xea3d20, ptr_add)
void* main_f_ea3d20(void* a0) { return (char*)a0 + 352; }

// sub_ea3d40  (orig 0xea3d40, ret_only)
void main_f_ea3d40() {}

// sub_ea3d50  (orig 0xea3d50, mov_ret)
uint64_t main_f_ea3d50() { return 0; }

// sub_ea3da0  (orig 0xea3da0, mov_ret)
uint32_t main_f_ea3da0() { return 0; }

// sub_ea3db0  (orig 0xea3db0, ret_only)
void main_f_ea3db0() {}

// sub_ea3dc0  (orig 0xea3dc0, ret_only)
void main_f_ea3dc0() {}

// sub_ea3dd0  (orig 0xea3dd0, mov_ret)
uint32_t main_f_ea3dd0() { return 0; }

// sub_ea3de0  (orig 0xea3de0, ret_only)
void main_f_ea3de0() {}

// sub_ea3e10  (orig 0xea3e10, ret_only)
void main_f_ea3e10() {}

// sub_ea3e20  (orig 0xea3e20, struct-copy)
void main_f_ea3e20(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ea3e40  (orig 0xea3e40, struct-copy)
void main_f_ea3e40(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ea3f20  (orig 0xea3f20, getter)
uint64_t main_f_ea3f20(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_ea3f30  (orig 0xea3f30, ptr_add)
void* main_f_ea3f30(void* a0) { return (char*)a0 + 32; }

// sub_ea3f40  (orig 0xea3f40, ptr_add)
void* main_f_ea3f40(void* a0) { return (char*)a0 + 24; }

// sub_ea3f50  (orig 0xea3f50, ptr_add)
void* main_f_ea3f50(void* a0) { return (char*)a0 + 24; }

// sub_ea3f60  (orig 0xea3f60, ptr_add)
void* main_f_ea3f60(void* a0) { return (char*)a0 + 32; }

// sub_ea3f80  (orig 0xea3f80, mov_ret)
uint32_t main_f_ea3f80() { return 1; }

// sub_ea3f90  (orig 0xea3f90, ret_only)
void main_f_ea3f90() {}

// sub_ea3fa0  (orig 0xea3fa0, copy2)
void main_f_ea3fa0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 40) = *(uint32_t*)((char*)(a1)); }

// sub_ea3fb0  (orig 0xea3fb0, mov_ret)
uint32_t main_f_ea3fb0() { return 1; }

// sub_ea4280  (orig 0xea4280, getter)
uint64_t main_f_ea4280(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_ea4290  (orig 0xea4290, ptr_add)
void* main_f_ea4290(void* a0) { return (char*)a0 + 32; }

// sub_ea42a0  (orig 0xea42a0, ptr_add)
void* main_f_ea42a0(void* a0) { return (char*)a0 + 24; }

// sub_ea42b0  (orig 0xea42b0, ptr_add)
void* main_f_ea42b0(void* a0) { return (char*)a0 + 24; }

// sub_ea42c0  (orig 0xea42c0, ptr_add)
void* main_f_ea42c0(void* a0) { return (char*)a0 + 32; }

// sub_ea42e0  (orig 0xea42e0, mov_ret)
uint32_t main_f_ea42e0() { return 3; }

// sub_ea42f0  (orig 0xea42f0, ret_only)
void main_f_ea42f0() {}

// sub_ea4300  (orig 0xea4300, copy2)
void main_f_ea4300(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 40) = *(uint32_t*)((char*)(a1)); }

// sub_ea43b0  (orig 0xea43b0, getter)
uint64_t main_f_ea43b0(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_ea43c0  (orig 0xea43c0, ptr_add)
void* main_f_ea43c0(void* a0) { return (char*)a0 + 32; }

// sub_ea43d0  (orig 0xea43d0, ptr_add)
void* main_f_ea43d0(void* a0) { return (char*)a0 + 24; }

// sub_ea43e0  (orig 0xea43e0, ptr_add)
void* main_f_ea43e0(void* a0) { return (char*)a0 + 24; }

// sub_ea43f0  (orig 0xea43f0, ptr_add)
void* main_f_ea43f0(void* a0) { return (char*)a0 + 32; }

// sub_ea4410  (orig 0xea4410, mov_ret)
uint32_t main_f_ea4410() { return 4; }

// sub_ea4420  (orig 0xea4420, ret_only)
void main_f_ea4420() {}

// sub_ea4430  (orig 0xea4430, copy2)
void main_f_ea4430(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 40) = *(uint32_t*)((char*)(a1)); }

// sub_ea4500  (orig 0xea4500, getter)
uint64_t main_f_ea4500(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_ea4510  (orig 0xea4510, ptr_add)
void* main_f_ea4510(void* a0) { return (char*)a0 + 32; }

// sub_ea4520  (orig 0xea4520, ptr_add)
void* main_f_ea4520(void* a0) { return (char*)a0 + 24; }

// sub_ea4530  (orig 0xea4530, ptr_add)
void* main_f_ea4530(void* a0) { return (char*)a0 + 24; }

// sub_ea4540  (orig 0xea4540, ptr_add)
void* main_f_ea4540(void* a0) { return (char*)a0 + 32; }

// sub_ea4560  (orig 0xea4560, mov_ret)
uint32_t main_f_ea4560() { return 2; }

// sub_ea4570  (orig 0xea4570, ret_only)
void main_f_ea4570() {}

// sub_ea4580  (orig 0xea4580, ret_only)
void main_f_ea4580() {}

// sub_ea4630  (orig 0xea4630, getter)
uint64_t main_f_ea4630(void* a0) { return *(uint64_t*)((char*)(a0) + 8); }

// sub_ea4640  (orig 0xea4640, ptr_add)
void* main_f_ea4640(void* a0) { return (char*)a0 + 24; }

// sub_ea4650  (orig 0xea4650, ptr_add)
void* main_f_ea4650(void* a0) { return (char*)a0 + 32; }

// sub_ea4660  (orig 0xea4660, ptr_add)
void* main_f_ea4660(void* a0) { return (char*)a0 + 24; }

// sub_ea4670  (orig 0xea4670, ptr_add)
void* main_f_ea4670(void* a0) { return (char*)a0 + 32; }

// sub_ea4690  (orig 0xea4690, mov_ret)
uint32_t main_f_ea4690() { return 5; }

// sub_ea46a0  (orig 0xea46a0, ret_only)
void main_f_ea46a0() {}

// sub_ea46b0  (orig 0xea46b0, copy2)
void main_f_ea46b0(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 40) = *(uint32_t*)((char*)(a1)); }

// sub_ea4720  (orig 0xea4720, setter-chain-zero)
void main_f_ea4720(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(struct u64x2*)((char*)a0 + 192) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 176) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 160) = (struct u64x2){ 0, 0 };
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 144) = (struct u64x2){ 0, 0 };
}

// sub_ea4740  (orig 0xea4740, straight)
uint64_t main_f_ea4740(void* a0, uint64_t a1) { return ((*(uint64_t*)((char*)(a0) + 144) & (uint64_t)(((uint64_t)a1))) ? 1 : 0); }

// sub_ea4750  (orig 0xea4750, getter)
uint64_t main_f_ea4750(void* a0) { return *(uint64_t*)((char*)(a0) + 144); }

// sub_ea4760  (orig 0xea4760, straight)
uint64_t main_f_ea4760(void* a0, uint64_t a1) { return ((*(uint64_t*)((char*)(a0) + 152) & (uint64_t)(((uint64_t)a1))) ? 1 : 0); }

// sub_ea4770  (orig 0xea4770, getter)
uint64_t main_f_ea4770(void* a0) { return *(uint64_t*)((char*)(a0) + 152); }

// sub_ea4780  (orig 0xea4780, straight)
uint64_t main_f_ea4780(void* a0, uint64_t a1) { return ((*(uint64_t*)((char*)(a0) + 160) & (uint64_t)(((uint64_t)a1))) ? 1 : 0); }

// sub_ea4790  (orig 0xea4790, getter)
uint64_t main_f_ea4790(void* a0) { return *(uint64_t*)((char*)(a0) + 160); }

// sub_ea47d0  (orig 0xea47d0, ptr_add)
void* main_f_ea47d0(void* a0) { return (char*)a0 + 192; }

// sub_ea47e0  (orig 0xea47e0, ptr_add)
void* main_f_ea47e0(void* a0) { return (char*)a0 + 208; }

// sub_ea47f0  (orig 0xea47f0, ptr_add)
void* main_f_ea47f0(void* a0) { return (char*)a0 + 200; }

// sub_ea4800  (orig 0xea4800, ptr_add)
void* main_f_ea4800(void* a0) { return (char*)a0 + 184; }

// sub_ea4810  (orig 0xea4810, ptr_add)
void* main_f_ea4810(void* a0) { return (char*)a0 + 176; }

// sub_ea5d60  (orig 0xea5d60, copy2)
void main_f_ea5d60(void* a0) { *(uint32_t*)((char*)(a0) + 16) = *(uint32_t*)((char*)(a0) + 8); }

// sub_ea5d70  (orig 0xea5d70, compare)
bool main_f_ea5d70(void* a0) { return (uint32_t)(*(uint32_t*)((char*)(a0) + 16)) == (uint64_t)(0); }

// sub_ea5db0  (orig 0xea5db0, ret_only)
void main_f_ea5db0() {}

// sub_ea6a30  (orig 0xea6a30, copy2)
void main_f_ea6a30(void* a0, void* a1) { *(uint32_t*)((char*)(a0) + 8) = *(uint32_t*)((char*)(a1)); }

// sub_ea6a40  (orig 0xea6a40, ret_only)
void main_f_ea6a40() {}

// sub_ea9990  (orig 0xea9990, ret_only)
void main_f_ea9990() {}

// sub_ea99b0  (orig 0xea99b0, mov_ret)
uint64_t main_f_ea99b0(uint64_t a0, uint64_t a1) { return a1; }

// sub_ea9a30  (orig 0xea9a30, ret_only)
void main_f_ea9a30() {}

// sub_ea9a40  (orig 0xea9a40, struct-copy)
void main_f_ea9a40(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ea9a60  (orig 0xea9a60, struct-copy)
void main_f_ea9a60(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_eaa030  (orig 0xeaa030, ptr_add)
void* main_f_eaa030(void* a0) { return (char*)a0 + 80; }

// sub_eaa090  (orig 0xeaa090, getter)
uint64_t main_f_eaa090(void* a0) { return *(uint64_t*)((char*)(a0) + 116); }

// sub_eaa6e0  (orig 0xeaa6e0, ret_only)
void main_f_eaa6e0() {}

// sub_eaa760  (orig 0xeaa760, ret_only)
void main_f_eaa760() {}

// sub_eab4b0  (orig 0xeab4b0, getter-chain)
uint32_t main_f_eab4b0(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 88))) + 360); }

// sub_eacd80  (orig 0xeacd80, ret_only)
void main_f_eacd80() {}

// sub_eace00  (orig 0xeace00, ret_only)
void main_f_eace00() {}

// sub_eacf00  (orig 0xeacf00, ret_only)
void main_f_eacf00() {}

// sub_eacf10  (orig 0xeacf10, ret_only)
void main_f_eacf10() {}

// sub_eacf20  (orig 0xeacf20, ret_only)
void main_f_eacf20() {}

// sub_eacfc0  (orig 0xeacfc0, ret_only)
void main_f_eacfc0() {}

// sub_eacfd0  (orig 0xeacfd0, ret_only)
void main_f_eacfd0() {}

// sub_eacfe0  (orig 0xeacfe0, ret_only)
void main_f_eacfe0() {}

// sub_ead020  (orig 0xead020, ret_only)
void main_f_ead020() {}

// sub_ead030  (orig 0xead030, copy2)
void main_f_ead030(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ead040  (orig 0xead040, copy2)
void main_f_ead040(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ead060  (orig 0xead060, ret_only)
void main_f_ead060() {}

// sub_ead080  (orig 0xead080, copy2)
void main_f_ead080(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ead090  (orig 0xead090, copy2)
void main_f_ead090(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ead140  (orig 0xead140, getter)
uint64_t main_f_ead140(void* a0) { return *(uint64_t*)((char*)(a0) + 16); }

// sub_ead390  (orig 0xead390, strlit-ret)
const char *main_f_ead390() { static char g_f_ead390[1]; __asm__ volatile("" ::: "memory"); return g_f_ead390; }

// sub_eadbd0  (orig 0xeadbd0, straight)
void main_f_eadbd0(void* a0) {
    *(uint32_t*)((char*)(a0) + 100) = 1;
}

// sub_eadbe0  (orig 0xeadbe0, straight)
uint64_t main_f_eadbe0(void* a0) {
    *(uint32_t*)((char*)(a0) + 100) = 1;
    return *(uint64_t*)((char*)(a0) + 104);
}

// sub_eadbf0  (orig 0xeadbf0, setter)
void main_f_eadbf0(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 104) = a1; }

// sub_eadc00  (orig 0xeadc00, setter)
void main_f_eadc00(void* a0) { *(uint32_t*)((char*)(a0) + 100) = 0; }

// sub_eadcf0  (orig 0xeadcf0, getter)
uint64_t main_f_eadcf0(void* a0) { return *(uint64_t*)((char*)(a0) + 80); }

// sub_eadd00  (orig 0xeadd00, ret_only)
void main_f_eadd00() {}

// sub_eadd10  (orig 0xeadd10, ret_only)
void main_f_eadd10() {}

// sub_eadd90  (orig 0xeadd90, ret_only)
void main_f_eadd90() {}

// sub_eaf260  (orig 0xeaf260, ret_only)
void main_f_eaf260() {}

// sub_eaf2e0  (orig 0xeaf2e0, ret_only)
void main_f_eaf2e0() {}

// sub_eaf460  (orig 0xeaf460, ret_only)
void main_f_eaf460() {}

// sub_eaf470  (orig 0xeaf470, copy2)
void main_f_eaf470(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eaf480  (orig 0xeaf480, copy2)
void main_f_eaf480(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eaf4d0  (orig 0xeaf4d0, setter-chain-zero)
void main_f_eaf4d0(void* a0) {
    struct u64x2 { uint64_t a, b; };
    *(uint8_t*)((char*)a0 + 84) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint32_t*)((char*)a0 + 112) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)((char*)a0 + 88) = 0;
    __asm__ __volatile__("" ::: "memory");
    *(struct u64x2*)((char*)a0 + 96) = (struct u64x2){ 0, 0 };
}

// sub_eb1810  (orig 0xeb1810, compare)
bool main_f_eb1810(void* a0) { return (uint64_t)(*(uint64_t*)((char*)(a0) + 328)) != (uint64_t)(0); }

// sub_eb5c60  (orig 0xeb5c60, compare)
bool main_f_eb5c60(void* a0) { return (int32_t)(*(uint32_t*)((char*)(a0) + 64)) > (int64_t)(1); }

// sub_eb5c70  (orig 0xeb5c70, compare-pred)
bool main_f_eb5c70(void* a0) { return (uint32_t)((*(uint64_t*)((char*)a0 + 64) | 1)) == (uint32_t)(3); }

// sub_eb5f60  (orig 0xeb5f60, straight)
void main_f_eb5f60(void* a0) {
    uint32_t k0 = 1;
    *(uint8_t*)((char*)(a0) + 1504) = (uint8_t)k0;
}

// sub_eb66e0  (orig 0xeb66e0, ret_only)
void main_f_eb66e0() {}

// sub_eb6740  (orig 0xeb6740, ret_only)
void main_f_eb6740() {}

// sub_eb67a0  (orig 0xeb67a0, ret_only)
void main_f_eb67a0() {}

// sub_eb6800  (orig 0xeb6800, ret_only)
void main_f_eb6800() {}

// sub_eb7250  (orig 0xeb7250, ret_only)
void main_f_eb7250() {}

// sub_eb7260  (orig 0xeb7260, copy2)
void main_f_eb7260(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eb7270  (orig 0xeb7270, copy2)
void main_f_eb7270(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eb8190  (orig 0xeb8190, mov_ret)
uint32_t main_f_eb8190() { return 43; }

// sub_eb8fc0  (orig 0xeb8fc0, ret_only)
void main_f_eb8fc0() {}

// sub_eb8fd0  (orig 0xeb8fd0, ret_only)
void main_f_eb8fd0() {}

// sub_eb8fe0  (orig 0xeb8fe0, copy2)
void main_f_eb8fe0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eb8ff0  (orig 0xeb8ff0, copy2)
void main_f_eb8ff0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebb860  (orig 0xebb860, ret_only)
void main_f_ebb860() {}

// sub_ebb870  (orig 0xebb870, struct-copy)
void main_f_ebb870(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ebb890  (orig 0xebb890, struct-copy)
void main_f_ebb890(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ebcb20  (orig 0xebcb20, ret_only)
void main_f_ebcb20() {}

// sub_ebcb30  (orig 0xebcb30, copy2)
void main_f_ebcb30(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcb40  (orig 0xebcb40, copy2)
void main_f_ebcb40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcba0  (orig 0xebcba0, ret_only)
void main_f_ebcba0() {}

// sub_ebcbb0  (orig 0xebcbb0, copy2)
void main_f_ebcbb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcbc0  (orig 0xebcbc0, copy2)
void main_f_ebcbc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcbe0  (orig 0xebcbe0, ret_only)
void main_f_ebcbe0() {}

// sub_ebcbf0  (orig 0xebcbf0, copy2)
void main_f_ebcbf0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcc00  (orig 0xebcc00, copy2)
void main_f_ebcc00(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcc60  (orig 0xebcc60, ret_only)
void main_f_ebcc60() {}

// sub_ebcc70  (orig 0xebcc70, copy2)
void main_f_ebcc70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcc80  (orig 0xebcc80, copy2)
void main_f_ebcc80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebcca0  (orig 0xebcca0, ret_only)
void main_f_ebcca0() {}

// sub_ebccb0  (orig 0xebccb0, copy2)
void main_f_ebccb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebccc0  (orig 0xebccc0, copy2)
void main_f_ebccc0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ebff40  (orig 0xebff40, mov_ret)
uint32_t main_f_ebff40() { return 55; }

// sub_ec00f0  (orig 0xec00f0, straight)
typedef struct { unsigned char b[32]; } __S_f_ec00f0;
__S_f_ec00f0 main_f_ec00f0() {
    __S_f_ec00f0 r;
    uint32_t k0 = 25714;
    uint64_t k1 = 1868785010;
    *(uint16_t *)((char *)&r + 4) = (uint16_t)k0;
    *(uint16_t *)((char *)&r + 30) = 0;
    *(uint64_t *)((char *)&r + 22) = 0;
    *(uint64_t *)((char *)&r + 14) = 0;
    *(uint64_t *)((char *)&r + 6) = 0;
    *(uint32_t *)((char *)&r + 0) = (uint32_t)k1;
    return r;
}

// sub_ec06c0  (orig 0xec06c0, mov_ret)
uint32_t main_f_ec06c0() { return 35; }

// sub_ec1c30  (orig 0xec1c30, ret_only)
void main_f_ec1c30() {}

// sub_ec6340  (orig 0xec6340, ret_only)
void main_f_ec6340() {}

// sub_ec69c0  (orig 0xec69c0, ret_only)
void main_f_ec69c0() {}

// sub_ec6e30  (orig 0xec6e30, straight)
uint8_t main_f_ec6e30(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 1488));
    return (*(uint8_t*)((char*)(p0) + 88)) & (1);
}

// sub_ece040  (orig 0xece040, strlit-ret)
const char *main_f_ece040() { static const char s[] = "rank"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ece080  (orig 0xece080, strlit-ret)
const char *main_f_ece080() { static const char s[] = "rank"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecf360  (orig 0xecf360, mov_ret)
uint64_t main_f_ecf360() { return 0; }

// my_name  (orig 0xecf3a0, strlit-ret)
const char *main_f_ecf3a0() { static const char s[] = "my_name"; __asm__ volatile("" ::: "memory"); return s; }

// owner_name  (orig 0xecfdd0, strlit-ret)
const char *main_f_ecfdd0() { static const char s[] = "owner_name"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecfe10  (orig 0xecfe10, strlit-ret)
const char *main_f_ecfe10() { static const char s[] = "place"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecfe50  (orig 0xecfe50, mov_ret)
uint64_t main_f_ecfe50() { return 0; }

// sub_ecfe90  (orig 0xecfe90, mov_ret)
uint64_t main_f_ecfe90() { return 0; }

// sub_ecfec0  (orig 0xecfec0, strlit-ret)
const char *main_f_ecfec0() { static const char s[] = "rank"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecfef0  (orig 0xecfef0, strlit-ret)
const char *main_f_ecfef0() { static const char s[] = "rank"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecff30  (orig 0xecff30, strlit-ret)
const char *main_f_ecff30() { static const char s[] = "place"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecff70  (orig 0xecff70, strlit-ret)
const char *main_f_ecff70() { static const char s[] = "place"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ecffb0  (orig 0xecffb0, strlit-ret)
const char *main_f_ecffb0() { static const char s[] = "place"; __asm__ volatile("" ::: "memory"); return s; }

// sub_ed0890  (orig 0xed0890, mov_ret)
uint64_t main_f_ed0890() { return 0; }

// sub_ed08d0  (orig 0xed08d0, mov_ret)
uint64_t main_f_ed08d0() { return 0; }

// sub_ed0910  (orig 0xed0910, mov_ret)
uint64_t main_f_ed0910() { return 0; }

// sub_ed0950  (orig 0xed0950, mov_ret)
uint64_t main_f_ed0950() { return 0; }

// sub_ed29e0  (orig 0xed29e0, getter-chain)
uint64_t main_f_ed29e0(void* a0) { return *(uint64_t*)((char*)((*(uint64_t*)((char*)(a0) + 328))) + 328); }

// sub_ed2f20  (orig 0xed2f20, getter-chain)
uint32_t main_f_ed2f20(void* a0) { return *(uint32_t*)((char*)((*(uint64_t*)((char*)(a0) + 328))) + 224); }

// sub_ed2f30  (orig 0xed2f30, getter-chain)
uint8_t main_f_ed2f30(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 328))) + 236); }

// sub_ed30c0  (orig 0xed30c0, getter-chain)
uint8_t main_f_ed30c0(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 328))) + 384); }

// sub_ed32d0  (orig 0xed32d0, straight)
void* main_f_ed32d0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 328));
    void* p1 = (void*)(*(uint64_t *)((char*)(p0) + 400));
    return (((*(uint64_t*)((char*)(p0) + 400) == 0)) ? ((char*)(p0) + 1392) : ((char*)(p1) + 96));
}

// sub_ed3e50  (orig 0xed3e50, getter-chain)
uint8_t main_f_ed3e50(void* a0) { return *(uint8_t*)((char*)((*(uint64_t*)((char*)(a0) + 328))) + 660); }

// sub_ed9430  (orig 0xed9430, ret_only)
void main_f_ed9430() {}

// sub_ed9440  (orig 0xed9440, struct-copy)
void main_f_ed9440(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ed9460  (orig 0xed9460, struct-copy)
void main_f_ed9460(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_eda7c0  (orig 0xeda7c0, ret_only)
void main_f_eda7c0() {}

// sub_eda7d0  (orig 0xeda7d0, copy2)
void main_f_eda7d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eda7e0  (orig 0xeda7e0, copy2)
void main_f_eda7e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eda7f0  (orig 0xeda7f0, ret_only)
void main_f_eda7f0() {}

// sub_eda800  (orig 0xeda800, ret_only)
void main_f_eda800() {}

// sub_eda810  (orig 0xeda810, ret_only)
void main_f_eda810() {}

// sub_eda820  (orig 0xeda820, ret_only)
void main_f_eda820() {}

// sub_ee14a0  (orig 0xee14a0, ret_only)
void main_f_ee14a0() {}

// sub_ee14b0  (orig 0xee14b0, ret_only)
void main_f_ee14b0() {}

// sub_ee14c0  (orig 0xee14c0, ret_only)
void main_f_ee14c0() {}

// sub_ee14d0  (orig 0xee14d0, ret_only)
void main_f_ee14d0() {}

// sub_ee3d80  (orig 0xee3d80, ret_only)
void main_f_ee3d80() {}

// sub_ee3f60  (orig 0xee3f60, ret_only)
void main_f_ee3f60() {}

// sub_ee3f70  (orig 0xee3f70, ret_only)
void main_f_ee3f70() {}

// sub_ee79c0  (orig 0xee79c0, straight)
void* main_f_ee79c0(void* a0) {
    void* p0 = (void*)(*(uint64_t *)((char*)(a0) + 88));
    return (char*)(p0) + 408;
}

// sub_ee79d0  (orig 0xee79d0, ret_only)
void main_f_ee79d0() {}

// sub_ee9ba0  (orig 0xee9ba0, ret_only)
void main_f_ee9ba0() {}

// sub_ee9bb0  (orig 0xee9bb0, struct-copy)
void main_f_ee9bb0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ee9bd0  (orig 0xee9bd0, struct-copy)
void main_f_ee9bd0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_eeb410  (orig 0xeeb410, getter)
uint32_t main_f_eeb410(void* a0) { return *(uint32_t*)((char*)(a0)); }

// sub_eed050  (orig 0xeed050, mov_ret)
uint32_t main_f_eed050() { return 1; }

// sub_eed060  (orig 0xeed060, ret_only)
void main_f_eed060() {}

// sub_eed070  (orig 0xeed070, ret_only)
void main_f_eed070() {}

// sub_eed8a0  (orig 0xeed8a0, mov_ret)
uint32_t main_f_eed8a0() { return 1; }

// sub_eed8b0  (orig 0xeed8b0, ret_only)
void main_f_eed8b0() {}

// sub_eed8c0  (orig 0xeed8c0, ret_only)
void main_f_eed8c0() {}

// sub_eed9b0  (orig 0xeed9b0, mov_ret)
uint32_t main_f_eed9b0() { return 1; }

// sub_eee010  (orig 0xeee010, getter)
uint64_t main_f_eee010(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_eee180  (orig 0xeee180, mov_ret)
uint32_t main_f_eee180() { return 1; }

// sub_eee190  (orig 0xeee190, indexed-getter)
uint64_t main_f_eee190(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_eee1a0  (orig 0xeee1a0, indexed-getter)
uint64_t main_f_eee1a0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_eeeb50  (orig 0xeeeb50, ret_only)
void main_f_eeeb50() {}

// sub_eef380  (orig 0xeef380, mov_ret)
uint32_t main_f_eef380() { return 0; }

// sub_eef810  (orig 0xeef810, ret_only)
void main_f_eef810() {}

// sub_eef820  (orig 0xeef820, copy2)
void main_f_eef820(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_eef830  (orig 0xeef830, copy2)
void main_f_eef830(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef07a0  (orig 0xef07a0, mov_ret)
uint32_t main_f_ef07a0() { return 1; }

// sub_ef07b0  (orig 0xef07b0, ret_only)
void main_f_ef07b0() {}

// sub_ef07c0  (orig 0xef07c0, ret_only)
void main_f_ef07c0() {}

// sub_ef12a0  (orig 0xef12a0, getter)
uint64_t main_f_ef12a0(void* a0) { return *(uint64_t*)((char*)(a0) + 88); }

// sub_ef1410  (orig 0xef1410, mov_ret)
uint32_t main_f_ef1410() { return 1; }

// sub_ef1420  (orig 0xef1420, indexed-getter)
uint64_t main_f_ef1420(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_ef1430  (orig 0xef1430, indexed-getter)
uint64_t main_f_ef1430(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_ef4130  (orig 0xef4130, getter)
uint32_t main_f_ef4130(void* a0) { return *(uint32_t*)((char*)(a0) + 232); }

// sub_ef77a0  (orig 0xef77a0, ret_only)
void main_f_ef77a0() {}

// sub_ef77b0  (orig 0xef77b0, struct-copy)
void main_f_ef77b0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ef77d0  (orig 0xef77d0, struct-copy)
void main_f_ef77d0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ef7850  (orig 0xef7850, ret_only)
void main_f_ef7850() {}

// sub_ef7860  (orig 0xef7860, copy2)
void main_f_ef7860(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7870  (orig 0xef7870, copy2)
void main_f_ef7870(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef78e0  (orig 0xef78e0, ret_only)
void main_f_ef78e0() {}

// sub_ef78f0  (orig 0xef78f0, copy2)
void main_f_ef78f0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7900  (orig 0xef7900, copy2)
void main_f_ef7900(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef79a0  (orig 0xef79a0, ret_only)
void main_f_ef79a0() {}

// sub_ef79b0  (orig 0xef79b0, copy2)
void main_f_ef79b0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef79c0  (orig 0xef79c0, copy2)
void main_f_ef79c0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7a60  (orig 0xef7a60, ret_only)
void main_f_ef7a60() {}

// sub_ef7a70  (orig 0xef7a70, copy2)
void main_f_ef7a70(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7a80  (orig 0xef7a80, copy2)
void main_f_ef7a80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7a90  (orig 0xef7a90, const-field-set-store)
void main_f_ef7a90(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 3;
    *(uint32_t*)((char*)(t0) + 1496) = (uint32_t)(t1);
}

// sub_ef7aa0  (orig 0xef7aa0, ret_only)
void main_f_ef7aa0() {}

// sub_ef7ab0  (orig 0xef7ab0, copy2)
void main_f_ef7ab0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7ac0  (orig 0xef7ac0, copy2)
void main_f_ef7ac0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7b90  (orig 0xef7b90, ret_only)
void main_f_ef7b90() {}

// sub_ef7ba0  (orig 0xef7ba0, copy2)
void main_f_ef7ba0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7bb0  (orig 0xef7bb0, copy2)
void main_f_ef7bb0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_ef7d00  (orig 0xef7d00, ret_only)
void main_f_ef7d00() {}

// sub_ef7e00  (orig 0xef7e00, ret_only)
void main_f_ef7e00() {}

// sub_ef7ec0  (orig 0xef7ec0, ret_only)
void main_f_ef7ec0() {}

// sub_ef7ed0  (orig 0xef7ed0, struct-copy)
void main_f_ef7ed0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ef7ef0  (orig 0xef7ef0, struct-copy)
void main_f_ef7ef0(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ef9520  (orig 0xef9520, ret_only)
void main_f_ef9520() {}

// sub_ef9530  (orig 0xef9530, struct-copy)
void main_f_ef9530(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_ef9550  (orig 0xef9550, struct-copy)
void main_f_ef9550(void* a0, void* a1) {
    struct u64x2 { uint64_t a, b; };
    struct u64x2 s0 = *(struct u64x2*)(char*)a0;
    uint64_t v1 = *(uint64_t*)((char*)a0 + 16);
    *(struct u64x2*)((char*)a1 + 8) = (struct u64x2){ s0.b, v1 };
    __asm__ __volatile__("" ::: "memory");
    *(uint64_t*)(char*)a1 = s0.a;
}

// sub_efba60  (orig 0xefba60, mov_ret)
uint32_t main_f_efba60() { return 1; }

// sub_efba70  (orig 0xefba70, ret_only)
void main_f_efba70() {}

// sub_efba80  (orig 0xefba80, ret_only)
void main_f_efba80() {}

// sub_efc640  (orig 0xefc640, getter)
uint64_t main_f_efc640(void* a0) { return *(uint64_t*)((char*)(a0) + 120); }

// sub_efc7d0  (orig 0xefc7d0, mov_ret)
uint32_t main_f_efc7d0() { return 2; }

// sub_efc7e0  (orig 0xefc7e0, indexed-getter)
uint64_t main_f_efc7e0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 8)); }

// sub_efc7f0  (orig 0xefc7f0, indexed-getter)
uint64_t main_f_efc7f0(void* a0, uint64_t a1) { return *(uint64_t *)(((char *)a0 + a1 * 32 + 16)); }

// sub_efca00  (orig 0xefca00, ret_only)
void main_f_efca00() {}

// sub_efca10  (orig 0xefca10, copy2)
void main_f_efca10(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_efca20  (orig 0xefca20, copy2)
void main_f_efca20(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_efcb80  (orig 0xefcb80, setter)
void main_f_efcb80(void* a0, uint32_t a1) { *(uint32_t*)((char*)(a0) + 108) = a1; }

// sub_efd570  (orig 0xefd570, setter)
void main_f_efd570(void* a0, uint64_t a1) { *(uint64_t*)((char*)(a0) + 1824) = a1; }

// sub_efdbf0  (orig 0xefdbf0, ret_only)
void main_f_efdbf0() {}

// sub_efe870  (orig 0xefe870, ret_only)
void main_f_efe870() {}

// sub_efeff0  (orig 0xefeff0, mov_ret)
uint32_t main_f_efeff0() { return 1; }

// sub_eff0e0  (orig 0xeff0e0, ret_only)
void main_f_eff0e0() {}

// sub_f00600  (orig 0xf00600, mov_ret)
uint32_t main_f_f00600() { return 1; }

// sub_f00610  (orig 0xf00610, ret_only)
void main_f_f00610() {}

// sub_f00620  (orig 0xf00620, ret_only)
void main_f_f00620() {}

// sub_f04270  (orig 0xf04270, mov_ret)
uint32_t main_f_f04270() { return 1; }

// sub_f04280  (orig 0xf04280, ret_only)
void main_f_f04280() {}

// sub_f04530  (orig 0xf04530, ret_only)
void main_f_f04530() {}

// sub_f04860  (orig 0xf04860, ret_only)
void main_f_f04860() {}

// sub_f04e80  (orig 0xf04e80, ret_only)
void main_f_f04e80() {}

// sub_f05450  (orig 0xf05450, ret_only)
void main_f_f05450() {}

// sub_f05910  (orig 0xf05910, ret_only)
void main_f_f05910() {}

// sub_f05ae0  (orig 0xf05ae0, ret_only)
void main_f_f05ae0() {}

// sub_f05f60  (orig 0xf05f60, ret_only)
void main_f_f05f60() {}

// sub_f06a40  (orig 0xf06a40, straight)
void main_f_f06a40(void* a0, uint64_t a1) {
    uint32_t k0 = 1;
    *(uint64_t*)((char*)(a0) + 152) = (uint64_t)(a1);
    *(uint8_t*)((char*)(a0) + 161) = (uint8_t)k0;
}

// sub_f080e0  (orig 0xf080e0, ret_only)
void main_f_f080e0() {}

// sub_f08210  (orig 0xf08210, ret_only)
void main_f_f08210() {}

// sub_f083a0  (orig 0xf083a0, ret_only)
void main_f_f083a0() {}

// sub_f08600  (orig 0xf08600, ret_only)
void main_f_f08600() {}

// sub_f09040  (orig 0xf09040, ret_only)
void main_f_f09040() {}

// sub_f092a0  (orig 0xf092a0, ret_only)
void main_f_f092a0() {}

// sub_f09770  (orig 0xf09770, ret_only)
void main_f_f09770() {}

// sub_f09ef0  (orig 0xf09ef0, ret_only)
void main_f_f09ef0() {}

// sub_f0a4e0  (orig 0xf0a4e0, mov_ret)
uint32_t main_f_f0a4e0() { return 1; }

// sub_f0a4f0  (orig 0xf0a4f0, ret_only)
void main_f_f0a4f0() {}

// sub_f0a790  (orig 0xf0a790, ret_only)
void main_f_f0a790() {}

// sub_f0a7f0  (orig 0xf0a7f0, mov_ret)
uint32_t main_f_f0a7f0() { return 1; }

// sub_f0b4d0  (orig 0xf0b4d0, mov_ret)
uint32_t main_f_f0b4d0() { return 1; }

// sub_f0ba00  (orig 0xf0ba00, mov_ret)
uint32_t main_f_f0ba00() { return 1; }

// sub_f0c810  (orig 0xf0c810, straight)
void main_f_f0c810(void* a0) {
    *(uint32_t*)((char*)(a0) + 1484) = 1;
}

// sub_f0cc20  (orig 0xf0cc20, copy-chain-store)
void main_f_f0cc20(void* a0, void* a1) {
    uint64_t t0 = *(uint64_t*)(char*)a1;
    uint64_t t1 = *(uint64_t*)(char*)a0;
    *(uint64_t*)((char*)(t1) + 1488) = (uint64_t)(t0);
}

// sub_f0cc30  (orig 0xf0cc30, ret_only)
void main_f_f0cc30() {}

// sub_f0cc40  (orig 0xf0cc40, copy2)
void main_f_f0cc40(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f0cc50  (orig 0xf0cc50, copy2)
void main_f_f0cc50(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f0cf70  (orig 0xf0cf70, const-field-set-store)
void main_f_f0cf70(void* a0) {
    uint64_t t0 = *(uint64_t*)(char*)a0;
    uint32_t t1 = 2;
    *(uint32_t*)((char*)(t0) + 1484) = (uint32_t)(t1);
}

// sub_f0cf80  (orig 0xf0cf80, ret_only)
void main_f_f0cf80() {}

// sub_f0cf90  (orig 0xf0cf90, copy2)
void main_f_f0cf90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f0cfa0  (orig 0xf0cfa0, copy2)
void main_f_f0cfa0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f0ed70  (orig 0xf0ed70, ret_only)
void main_f_f0ed70() {}

// sub_f0ed80  (orig 0xf0ed80, copy2)
void main_f_f0ed80(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f0ed90  (orig 0xf0ed90, copy2)
void main_f_f0ed90(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f101e0  (orig 0xf101e0, straight)
void main_f_f101e0(uint64_t unused0, void* a1) {
    *(uint32_t*)((char*)(a1) + 100) = 6;
}

// sub_f113c0  (orig 0xf113c0, ret_only)
void main_f_f113c0() {}

// sub_f113d0  (orig 0xf113d0, copy2)
void main_f_f113d0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f113e0  (orig 0xf113e0, copy2)
void main_f_f113e0(void* a0, void* a1) { *(uint64_t*)((char*)(a1)) = *(uint64_t*)((char*)(a0)); }

// sub_f13fe0  (orig 0xf13fe0, ret_only)
void main_f_f13fe0() {}

